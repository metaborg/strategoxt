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
ATerm term_c_36;
ATerm term_w_35;
ATerm term_m_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_s_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_i_32;
ATerm term_e_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_q_31;
ATerm term_h_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_x_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_f_27;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_b_22;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_x_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_t_19;
ATerm term_g_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_b_17;
ATerm term_t_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_h_15;
ATerm term_i_13;
ATerm term_t_11;
ATerm term_r_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
void init_constant_terms (void)
{
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Op_2, term_h_15, (ATerm) ATempty);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Var_1, term_u_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Var_1, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Anno_2, term_v_15, term_y_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Var_1, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Var_1, term_d_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Anno_2, term_c_16, term_f_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_15);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Call_2, term_t_16, (ATerm) ATempty);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_BAM_3, term_b_17, term_v_15, term_c_16);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_15);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Call_2, term_m_17, (ATerm) ATempty);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_BAM_3, term_n_17, term_y_15, term_f_16);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Var_1, term_n_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_18);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_f_9, term_i_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_15);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Op_2, term_m_27, (ATerm) ATempty);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATempty);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_28);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_28);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_x_20);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_20);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym__2, term_a_33, term_b_19);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym__2, term_g_33, term_b_19);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym__2, term_k_33, term_b_19);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_v_34);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym__3, term_u_34, term_v_34, (ATerm) ATempty);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm n_77 (ATerm), ATerm o_77 (ATerm));
ATerm Prim_2 (ATerm, ATerm e_81 (ATerm), ATerm f_81 (ATerm));
ATerm Explode_2 (ATerm, ATerm j_77 (ATerm), ATerm k_77 (ATerm));
ATerm pat_td_1 (ATerm, ATerm s_81 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm e_100 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm o_78 (ATerm));
ATerm Specification_1 (ATerm, ATerm q_78 (ATerm));
ATerm spaste_1 (ATerm, ATerm e_82 (ATerm));
ATerm Rec_2 (ATerm, ATerm x_79 (ATerm), ATerm y_79 (ATerm));
ATerm Let_2 (ATerm, ATerm z_79 (ATerm), ATerm a_80 (ATerm));
ATerm sboundin_3 (ATerm, ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm h_82 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm w_79 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm y_84 (ATerm, ATerm (ATerm)), ATerm z_84 (ATerm), ATerm a_85 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_85 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm d_77 (ATerm), ATerm e_77 (ATerm));
ATerm Con_3 (ATerm, ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm o_107 (ATerm));
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
ATerm rewrite_1 (ATerm, ATerm p_92 (ATerm));
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm w_108 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm k_92 (ATerm));
ATerm restore_always_2 (ATerm, ATerm p_110 (ATerm), ATerm q_110 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm j_92 (ATerm));
ATerm scope_2 (ATerm, ATerm l_92 (ATerm), ATerm m_92 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm u_81 (ATerm), ATerm v_81 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm n_92 (ATerm));
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm d_83 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm a_82 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm q_84 (ATerm), ATerm r_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm w_84 (ATerm), ATerm x_84 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm k_84 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm e_103 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm j_103 (ATerm));
ATerm substitute_6 (ATerm, ATerm i_85 (ATerm), ATerm j_85 (ATerm, ATerm (ATerm)), ATerm k_85 (ATerm), ATerm l_85 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_85 (ATerm, ATerm (ATerm)), ATerm n_85 (ATerm));
ATerm substitute_5 (ATerm, ATerm p_85 (ATerm), ATerm q_85 (ATerm, ATerm (ATerm)), ATerm r_85 (ATerm), ATerm s_85 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t_85 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm b_83 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm c_83 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm _3 (ATerm, ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm f_70 (ATerm));
ATerm Overlay_3 (ATerm, ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm k_78 (ATerm));
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm x_81 (ATerm));
ATerm Union_0 (ATerm);
ATerm cart_1 (ATerm, ATerm r_99 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm p_80 (ATerm), ATerm q_80 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm));
ATerm BAM_3 (ATerm, ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm z_76 (ATerm));
ATerm BA_2 (ATerm, ATerm v_76 (ATerm), ATerm w_76 (ATerm));
ATerm AM_2 (ATerm, ATerm t_76 (ATerm), ATerm u_76 (ATerm));
ATerm MA_2 (ATerm, ATerm r_76 (ATerm), ATerm s_76 (ATerm));
ATerm Match_1 (ATerm, ATerm x_80 (ATerm));
ATerm Build_1 (ATerm, ATerm y_80 (ATerm));
ATerm constructs_1 (ATerm, ATerm w_81 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm));
ATerm SDef_3 (ATerm, ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm m_78 (ATerm));
ATerm Signature_1 (ATerm, ATerm l_78 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm strings_to_vars_0 (ATerm);
ATerm isect_1 (ATerm, ATerm i_97 (ATerm));
ATerm isect_0 (ATerm);
ATerm new_0 (ATerm);
ATerm SplitDynamicRule_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm dist_scope_1 (ATerm, ATerm s_110 (ATerm));
ATerm one_dist_1 (ATerm, ATerm f_103 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm x_103 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm f_109 (ATerm), ATerm g_109 (ATerm));
ATerm repeat_1 (ATerm, ATerm i_109 (ATerm));
ATerm listtd_1 (ATerm, ATerm n_102 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm e_78 (ATerm));
ATerm Scope_2 (ATerm, ATerm b_81 (ATerm), ATerm c_81 (ATerm));
ATerm tboundin_3 (ATerm, ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm d_82 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm b_97 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm));
ATerm crush_3 (ATerm, ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm w_109 (ATerm), ATerm x_109 (ATerm));
ATerm for_3 (ATerm, ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm b_110 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm z_96 (ATerm), ATerm a_97 (ATerm));
ATerm diff_1 (ATerm, ATerm e_97 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm z_105 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm d_85 (ATerm), ATerm e_85 (ATerm));
ATerm alltd_1 (ATerm, ATerm c_108 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm x_99 (ATerm));
ATerm zip_1 (ATerm, ATerm z_99 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm f_85 (ATerm), ATerm g_85 (ATerm));
ATerm substitute_1 (ATerm, ATerm h_85 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm y_94 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_105 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm b_70 (ATerm), ATerm c_70 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm r_91 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm h_88 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_91 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_94 (ATerm), ATerm h_94 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm s_95 (ATerm), ATerm t_95 (ATerm));
ATerm crush_2 (ATerm, ATerm k_97 (ATerm), ATerm l_97 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_88 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_90 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_87 (ATerm));
ATerm map_1 (ATerm, ATerm i_101 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_101 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_86 (ATerm));
ATerm Program_1 (ATerm, ATerm p_71 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm q_71 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_101 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_88 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm c_110 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm k_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_81 (ATerm), ATerm h_81 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm));
ATerm iowrap_4 (ATerm, ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_90 (ATerm), ATerm g_90 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_90 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  k_10 = t;
  i_10 :
  if(match_cons(k_10, sym_ExplodeCong_2))
    {
      l_10 = ATgetArgument(k_10, 0);
      j_10 = ATgetArgument(k_10, 1);
      {
        ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
        ATerm s_10 = NULL;
        ATerm t_10 = NULL;
        t = new_0(t);
        {
          s_10 = t;
          {
            if(((o_10 != NULL) && (o_10 != s_10)))
              _fail(s_10);
            else
              o_10 = s_10;
            {
              ATerm u_10 = NULL;
              t = new_0(t);
              {
                t_10 = t;
                {
                  if(((p_10 != NULL) && (p_10 != t_10)))
                    _fail(t_10);
                  else
                    p_10 = t_10;
                  {
                    ATerm v_10 = NULL;
                    t = new_0(t);
                    {
                      u_10 = t;
                      {
                        if(((q_10 != NULL) && (q_10 != u_10)))
                          _fail(u_10);
                        else
                          q_10 = u_10;
                        {
                          t = new_0(t);
                          {
                            v_10 = t;
                            if(((r_10 != NULL) && (r_10 != v_10)))
                              _fail(v_10);
                            else
                              r_10 = v_10;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_10)), not_null(q_10)), not_null(p_10)), not_null(o_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_10)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(l_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_10))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_10))))), (ATerm) ATmakeAppl(sym_Prim_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_10))), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_10)))))));
      }
    }
  else
    {
      if(match_cons(k_10, sym_Build_1))
        {
          l_10 = ATgetArgument(k_10, 0);
          {
            ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
            ATerm b_11 = NULL;
            ATerm f_11 = NULL;
            t = new_0(t);
            {
              b_11 = t;
              {
                if(((z_10 != NULL) && (z_10 != b_11)))
                  _fail(b_11);
                else
                  z_10 = b_11;
                {
                  t = not_null(l_10);
                  {
                    ATerm g_0 (ATerm t)
                    {
                      ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
                      c_11 = t;
                      b_10 :
                      if(match_cons(c_11, sym_Explode_2))
                        {
                          d_11 = ATgetArgument(c_11, 0);
                          e_11 = ATgetArgument(c_11, 1);
                          {
                            if(((x_10 != NULL) && (x_10 != d_11)))
                              _fail(d_11);
                            else
                              x_10 = d_11;
                            {
                              if(((y_10 != NULL) && (y_10 != e_11)))
                                _fail(e_11);
                              else
                                y_10 = e_11;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_10));
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
                      f_11 = t;
                      if(((a_11 != NULL) && (a_11 != f_11)))
                        _fail(f_11);
                      else
                        a_11 = f_11;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_10)), not_null(x_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_11)))));
          }
        }
      else
        {
          if(match_cons(k_10, sym_Match_1))
            {
              l_10 = ATgetArgument(k_10, 0);
              {
                ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
                ATerm m_11 = NULL;
                ATerm n_11 = NULL;
                t = new_0(t);
                {
                  m_11 = t;
                  {
                    if(((j_11 != NULL) && (j_11 != m_11)))
                      _fail(m_11);
                    else
                      j_11 = m_11;
                    {
                      ATerm r_11 = NULL;
                      t = new_0(t);
                      {
                        n_11 = t;
                        {
                          if(((k_11 != NULL) && (k_11 != n_11)))
                            _fail(n_11);
                          else
                            k_11 = n_11;
                          {
                            t = not_null(l_10);
                            {
                              ATerm h_0 (ATerm t)
                              {
                                ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
                                o_11 = t;
                                g_10 :
                                if(match_cons(o_11, sym_Explode_2))
                                  {
                                    p_11 = ATgetArgument(o_11, 0);
                                    q_11 = ATgetArgument(o_11, 1);
                                    {
                                      if(((h_11 != NULL) && (h_11 != p_11)))
                                        _fail(p_11);
                                      else
                                        h_11 = p_11;
                                      {
                                        if(((i_11 != NULL) && (i_11 != q_11)))
                                          _fail(q_11);
                                        else
                                          i_11 = q_11;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_11));
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
                                r_11 = t;
                                if(((l_11 != NULL) && (l_11 != r_11)))
                                  _fail(r_11);
                                else
                                  l_11 = r_11;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_11))), (ATerm) ATmakeAppl(sym_Prim_2, term_e_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_11)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_11)), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_11)), not_null(h_11)))))));
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
  ATerm w_12 = NULL,x_12 = NULL;
  w_12 = t;
  v_12 :
  if(match_cons(w_12, sym_Match_1))
    {
      x_12 = ATgetArgument(w_12, 0);
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
            ATerm d_13 = NULL;
            ATerm h_13 = NULL;
            t = new_0(t);
            {
              d_13 = t;
              {
                if(((b_13 != NULL) && (b_13 != d_13)))
                  _fail(d_13);
                else
                  b_13 = d_13;
                {
                  t = not_null(x_12);
                  {
                    ATerm i_0 (ATerm t)
                    {
                      ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
                      e_13 = t;
                      l_12 :
                      if(match_cons(e_13, sym_Anno_2))
                        {
                          f_13 = ATgetArgument(e_13, 0);
                          g_13 = ATgetArgument(e_13, 1);
                          {
                            if(((z_12 != NULL) && (z_12 != f_13)))
                              _fail(f_13);
                            else
                              z_12 = f_13;
                            {
                              if(((a_13 != NULL) && (a_13 != g_13)))
                                _fail(g_13);
                              else
                                a_13 = g_13;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_13)), not_null(z_12));
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
                      h_13 = t;
                      if(((c_13 != NULL) && (c_13 != h_13)))
                        _fail(h_13);
                      else
                        c_13 = h_13;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_13)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_13)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_13))))));
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
                  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
                  ATerm m_13 = NULL;
                  ATerm p_13 = NULL;
                  t = new_0(t);
                  {
                    m_13 = t;
                    {
                      if(((k_13 != NULL) && (k_13 != m_13)))
                        _fail(m_13);
                      else
                        k_13 = m_13;
                      {
                        t = not_null(x_12);
                        {
                          ATerm j_0 (ATerm t)
                          {
                            ATerm n_13 = NULL,o_13 = NULL;
                            n_13 = t;
                            p_12 :
                            if(match_cons(n_13, sym_RootApp_1))
                              {
                                o_13 = ATgetArgument(n_13, 0);
                                {
                                  if(((j_13 != NULL) && (j_13 != o_13)))
                                    _fail(o_13);
                                  else
                                    j_13 = o_13;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_13));
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
                            p_13 = t;
                            if(((l_13 != NULL) && (l_13 != p_13)))
                              _fail(p_13);
                            else
                              l_13 = p_13;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_13))), not_null(j_13))));
                  LocalPopChoice(k_9);
                }
              else
                {
                  t = j_9;
                  {
                    ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
                    ATerm v_13 = NULL;
                    ATerm z_13 = NULL;
                    t = new_0(t);
                    {
                      v_13 = t;
                      {
                        if(((t_13 != NULL) && (t_13 != v_13)))
                          _fail(v_13);
                        else
                          t_13 = v_13;
                        {
                          t = not_null(x_12);
                          {
                            ATerm t_0 (ATerm t)
                            {
                              ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
                              w_13 = t;
                              t_12 :
                              if(match_cons(w_13, sym_App_2))
                                {
                                  x_13 = ATgetArgument(w_13, 0);
                                  y_13 = ATgetArgument(w_13, 1);
                                  {
                                    if(((s_13 != NULL) && (s_13 != x_13)))
                                      _fail(x_13);
                                    else
                                      s_13 = x_13;
                                    {
                                      if(((r_13 != NULL) && (r_13 != y_13)))
                                        _fail(y_13);
                                      else
                                        r_13 = y_13;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_13));
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
                              z_13 = t;
                              if(((u_13 != NULL) && (u_13 != z_13)))
                                _fail(z_13);
                              else
                                u_13 = z_13;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_13))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_13)), not_null(s_13)))));
                  }
                }
            }
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
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
  q_14 = t;
  o_14 :
  if(match_cons(q_14, sym_Match_1))
    {
      r_14 = ATgetArgument(q_14, 0);
      p_14 :
      if(match_cons(r_14, sym_RootApp_1))
        {
          s_14 = ATgetArgument(r_14, 0);
          t = not_null(s_14);
        }
      else
        {
          if(match_cons(r_14, sym_App_2))
            {
              s_14 = ATgetArgument(r_14, 0);
              t_14 = ATgetArgument(r_14, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(s_14), not_null(t_14));
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
  ATerm f_15 = NULL,g_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym_Match_1))
    {
      g_15 = ATgetArgument(f_15, 0);
      {
        ATerm i_15 = NULL,j_15 = NULL;
        ATerm n_15 = NULL;
        t = not_null(g_15);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
            k_15 = t;
            b_15 :
            if(match_cons(k_15, sym_RootApp_1))
              {
                l_15 = ATgetArgument(k_15, 0);
                c_15 :
                if(match_cons(l_15, sym_Match_1))
                  {
                    m_15 = ATgetArgument(l_15, 0);
                    {
                      if(((i_15 != NULL) && (i_15 != m_15)))
                        _fail(m_15);
                      else
                        i_15 = m_15;
                      t = not_null(i_15);
                    }
                  }
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
            n_15 = t;
            if(((j_15 != NULL) && (j_15 != n_15)))
              _fail(n_15);
            else
              j_15 = n_15;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(j_15));
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
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL;
  h_16 = t;
  g_16 :
  if(match_cons(h_16, sym_Build_1))
    {
      i_16 = ATgetArgument(h_16, 0);
      {
        ATerm p_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
            ATerm o_16 = NULL;
            ATerm s_16 = NULL;
            t = new_0(t);
            {
              o_16 = t;
              {
                if(((m_16 != NULL) && (m_16 != o_16)))
                  _fail(o_16);
                else
                  m_16 = o_16;
                {
                  t = not_null(i_16);
                  {
                    ATerm v_0 (ATerm t)
                    {
                      ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
                      p_16 = t;
                      w_15 :
                      if(match_cons(p_16, sym_Anno_2))
                        {
                          q_16 = ATgetArgument(p_16, 0);
                          r_16 = ATgetArgument(p_16, 1);
                          {
                            if(((k_16 != NULL) && (k_16 != q_16)))
                              _fail(q_16);
                            else
                              k_16 = q_16;
                            {
                              if(((l_16 != NULL) && (l_16 != r_16)))
                                _fail(r_16);
                              else
                                l_16 = r_16;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_16));
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
                      s_16 = t;
                      if(((n_16 != NULL) && (n_16 != s_16)))
                        _fail(s_16);
                      else
                        n_16 = s_16;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_r_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_16)), not_null(k_16))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_16))));
            LocalPopChoice(q_9);
          }
        else
          {
            t = p_9;
            {
              ATerm s_9 = t;
              int t_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
                  ATerm x_16 = NULL;
                  ATerm a_17 = NULL;
                  t = new_0(t);
                  {
                    x_16 = t;
                    {
                      if(((v_16 != NULL) && (v_16 != x_16)))
                        _fail(x_16);
                      else
                        v_16 = x_16;
                      {
                        t = not_null(i_16);
                        {
                          ATerm w_0 (ATerm t)
                          {
                            ATerm y_16 = NULL,z_16 = NULL;
                            y_16 = t;
                            a_16 :
                            if(match_cons(y_16, sym_RootApp_1))
                              {
                                z_16 = ATgetArgument(y_16, 0);
                                {
                                  if(((u_16 != NULL) && (u_16 != z_16)))
                                    _fail(z_16);
                                  else
                                    u_16 = z_16;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_16));
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
                            a_17 = t;
                            if(((w_16 != NULL) && (w_16 != a_17)))
                              _fail(a_17);
                            else
                              w_16 = a_17;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_16), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_16))));
                  LocalPopChoice(t_9);
                }
              else
                {
                  t = s_9;
                  {
                    ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
                    ATerm g_17 = NULL;
                    ATerm k_17 = NULL;
                    t = new_0(t);
                    {
                      g_17 = t;
                      {
                        if(((e_17 != NULL) && (e_17 != g_17)))
                          _fail(g_17);
                        else
                          e_17 = g_17;
                        {
                          t = not_null(i_16);
                          {
                            ATerm x_0 (ATerm t)
                            {
                              ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
                              h_17 = t;
                              e_16 :
                              if(match_cons(h_17, sym_App_2))
                                {
                                  i_17 = ATgetArgument(h_17, 0);
                                  j_17 = ATgetArgument(h_17, 1);
                                  {
                                    if(((c_17 != NULL) && (c_17 != i_17)))
                                      _fail(i_17);
                                    else
                                      c_17 = i_17;
                                    {
                                      if(((d_17 != NULL) && (d_17 != j_17)))
                                        _fail(j_17);
                                      else
                                        d_17 = j_17;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_17));
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
                              k_17 = t;
                              if(((f_17 != NULL) && (f_17 != k_17)))
                                _fail(k_17);
                              else
                                f_17 = k_17;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_17)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_17), not_null(d_17), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_17)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_17))));
                  }
                }
            }
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
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  b_18 = t;
  z_17 :
  if(match_cons(b_18, sym_Build_1))
    {
      c_18 = ATgetArgument(b_18, 0);
      a_18 :
      if(match_cons(c_18, sym_RootApp_1))
        {
          d_18 = ATgetArgument(c_18, 0);
          t = not_null(d_18);
        }
      else
        {
          if(match_cons(c_18, sym_App_2))
            {
              d_18 = ATgetArgument(c_18, 0);
              e_18 = ATgetArgument(c_18, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_18)), not_null(d_18));
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
ATerm As_2 (ATerm t, ATerm n_77 (ATerm), ATerm o_77 (ATerm))
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym_As_2))
    {
      r_18 = ATgetArgument(q_18, 0);
      s_18 = ATgetArgument(q_18, 1);
      {
        ATerm w_18 = NULL,y_18 = NULL;
        ATerm x_18 = NULL;
        t = SSLgetAnnotations(not_null(q_18));
        {
          x_18 = t;
          if(((w_18 != NULL) && (w_18 != x_18)))
            _fail(x_18);
          else
            w_18 = x_18;
        }
        {
          t = not_null(r_18);
          {
            ATerm a_19 = NULL;
            t = n_77(t);
            {
              y_18 = t;
              {
                t = not_null(s_18);
                {
                  ATerm c_19 = NULL;
                  t = o_77(t);
                  {
                    a_19 = t;
                    {
                      ATerm d_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(y_18), not_null(a_19)), not_null(w_18));
                      {
                        d_19 = t;
                        if(((c_19 != NULL) && (c_19 != d_19)))
                          _fail(d_19);
                        else
                          c_19 = d_19;
                      }
                      t = not_null(c_19);
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
ATerm Prim_2 (ATerm t, ATerm e_81 (ATerm), ATerm f_81 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  p_19 = t;
  o_19 :
  if(match_cons(p_19, sym_Prim_2))
    {
      q_19 = ATgetArgument(p_19, 0);
      r_19 = ATgetArgument(p_19, 1);
      {
        ATerm v_19 = NULL,x_19 = NULL;
        ATerm w_19 = NULL;
        t = SSLgetAnnotations(not_null(p_19));
        {
          w_19 = t;
          if(((v_19 != NULL) && (v_19 != w_19)))
            _fail(w_19);
          else
            v_19 = w_19;
        }
        {
          t = not_null(q_19);
          {
            ATerm z_19 = NULL;
            t = e_81(t);
            {
              x_19 = t;
              {
                t = not_null(r_19);
                {
                  ATerm b_20 = NULL;
                  t = f_81(t);
                  {
                    z_19 = t;
                    {
                      ATerm c_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(x_19), not_null(z_19)), not_null(v_19));
                      {
                        c_20 = t;
                        if(((b_20 != NULL) && (b_20 != c_20)))
                          _fail(c_20);
                        else
                          b_20 = c_20;
                      }
                      t = not_null(b_20);
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
ATerm Explode_2 (ATerm t, ATerm j_77 (ATerm), ATerm k_77 (ATerm))
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_Explode_2))
    {
      p_20 = ATgetArgument(o_20, 0);
      q_20 = ATgetArgument(o_20, 1);
      {
        ATerm u_20 = NULL,w_20 = NULL;
        ATerm v_20 = NULL;
        t = SSLgetAnnotations(not_null(o_20));
        {
          v_20 = t;
          if(((u_20 != NULL) && (u_20 != v_20)))
            _fail(v_20);
          else
            u_20 = v_20;
        }
        {
          t = not_null(p_20);
          {
            ATerm y_20 = NULL;
            t = j_77(t);
            {
              w_20 = t;
              {
                t = not_null(q_20);
                {
                  ATerm a_21 = NULL;
                  t = k_77(t);
                  {
                    y_20 = t;
                    {
                      ATerm b_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(w_20), not_null(y_20)), not_null(u_20));
                      {
                        b_21 = t;
                        if(((a_21 != NULL) && (a_21 != b_21)))
                          _fail(b_21);
                        else
                          a_21 = b_21;
                      }
                      t = not_null(a_21);
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
ATerm pat_td_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_81(t);
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = pat_td_1(t, s_81);
                return(t);
              }
              t = fetch_1(t, z_0);
              return(t);
            }
            t = Op_2(t, _id, y_0);
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
              ATerm y_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = pat_td_1(t, s_81);
                    return(t);
                  }
                  t = Explode_2(t, _id, a_1);
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = y_9;
                  {
                    ATerm a_10 = t;
                    int c_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_1 (ATerm t)
                        {
                          t = pat_td_1(t, s_81);
                          return(t);
                        }
                        t = Explode_2(t, b_1, _id);
                        LocalPopChoice(c_10);
                      }
                    else
                      {
                        t = a_10;
                        {
                          ATerm d_10 = t;
                          int e_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_1 (ATerm t)
                              {
                                ATerm d_1 (ATerm t)
                                {
                                  t = pat_td_1(t, s_81);
                                  return(t);
                                }
                                t = fetch_1(t, d_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, c_1);
                              LocalPopChoice(e_10);
                            }
                          else
                            {
                              t = d_10;
                              {
                                ATerm e_1 (ATerm t)
                                {
                                  t = pat_td_1(t, s_81);
                                  return(t);
                                }
                                t = As_2(t, _id, e_1);
                              }
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
  ATerm s_21 = NULL,t_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_cons(s_21, sym_Build_1))
    {
      t_21 = ATgetArgument(s_21, 0);
      {
        ATerm f_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_21 = NULL,w_21 = NULL;
            ATerm a_22 = NULL;
            t = not_null(t_21);
            {
              ATerm f_1 (ATerm t)
              {
                ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
                x_21 = t;
                k_21 :
                if(match_cons(x_21, sym_RootApp_1))
                  {
                    y_21 = ATgetArgument(x_21, 0);
                    l_21 :
                    if(match_cons(y_21, sym_Build_1))
                      {
                        z_21 = ATgetArgument(y_21, 0);
                        {
                          if(((v_21 != NULL) && (v_21 != z_21)))
                            _fail(z_21);
                          else
                            v_21 = z_21;
                          t = not_null(v_21);
                        }
                      }
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
                a_22 = t;
                if(((w_21 != NULL) && (w_21 != a_22)))
                  _fail(a_22);
                else
                  w_21 = a_22;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(w_21));
            LocalPopChoice(h_10);
          }
        else
          {
            t = f_10;
            {
              ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
              ATerm j_22 = NULL;
              t = not_null(t_21);
              {
                ATerm g_1 (ATerm t)
                {
                  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL;
                  f_22 = t;
                  o_21 :
                  if(match_cons(f_22, sym_App_2))
                    {
                      g_22 = ATgetArgument(f_22, 0);
                      i_22 = ATgetArgument(f_22, 1);
                      p_21 :
                      if(match_cons(g_22, sym_Build_1))
                        {
                          h_22 = ATgetArgument(g_22, 0);
                          {
                            if(((d_22 != NULL) && (d_22 != h_22)))
                              _fail(h_22);
                            else
                              d_22 = h_22;
                            {
                              if(((c_22 != NULL) && (c_22 != i_22)))
                                _fail(i_22);
                              else
                                c_22 = i_22;
                              t = not_null(d_22);
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
                t = pat_td_1(t, g_1);
                {
                  j_22 = t;
                  if(((e_22 != NULL) && (e_22 != j_22)))
                    _fail(j_22);
                  else
                    e_22 = j_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_22));
            }
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
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm w_10 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(g_11);
          }
        else
          {
            t = w_10;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm e_100 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, e_100);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  ATerm a_23 (ATerm t)
  {
    ATerm x_22 = NULL;
    ATerm y_22 = NULL;
    t = not_null(u_22);
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
      {
        t = new_0(t);
        {
          y_22 = t;
          if(((x_22 != NULL) && (x_22 != y_22)))
            _fail(y_22);
          else
            x_22 = y_22;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(x_22)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_22)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_22))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_22))));
    return(t);
  }
  ATerm b_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_22))));
    return(t);
  }
  u_22 = t;
  t_22 :
  if(match_cons(u_22, sym_Var_1))
    {
      v_22 = ATgetArgument(u_22, 0);
      {
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_23(t);
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            t = b_23(t);
          }
      }
    }
  else
    {
      t = a_23(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym_Prim_2))
    {
      j_23 = ATgetArgument(i_23, 0);
      k_23 = ATgetArgument(i_23, 1);
      {
        ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
        ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
        t = not_null(k_23);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm w_11 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_11;
              }
            return(t);
          }
          t = fetch_1(t, h_1);
          {
            t = not_null(k_23);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm i_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, i_1);
                {
                  q_23 = t;
                  f_23 :
                  if(match_cons(q_23, sym__2))
                    {
                      r_23 = ATgetArgument(q_23, 0);
                      s_23 = ATgetArgument(q_23, 1);
                      g_23 :
                      if(match_cons(s_23, sym__2))
                        {
                          t_23 = ATgetArgument(s_23, 0);
                          u_23 = ATgetArgument(s_23, 1);
                          {
                            if(((n_23 != NULL) && (n_23 != r_23)))
                              _fail(r_23);
                            else
                              n_23 = r_23;
                            {
                              if(((o_23 != NULL) && (o_23 != t_23)))
                                _fail(t_23);
                              else
                                o_23 = t_23;
                              if(((p_23 != NULL) && (p_23 != u_23)))
                                _fail(u_23);
                              else
                                p_23 = u_23;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(o_23)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(j_23), not_null(p_23))));
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
  ATerm j_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm k_1 (ATerm t)
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
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
                  t = HL_0(t);
                  LocalPopChoice(a_12);
                }
              else
                {
                  t = z_11;
                  {
                    ATerm b_12 = t;
                    int c_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(c_12);
                      }
                    else
                      {
                        t = b_12;
                        {
                          ATerm d_12 = t;
                          int e_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(e_12);
                            }
                          else
                            {
                              t = d_12;
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
      t = repeat_1(t, k_1);
    }
    return(t);
  }
  t = topdown_1(t, j_1);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, l_1);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm o_78 (ATerm))
{
  ATerm c_24 = NULL,d_24 = NULL;
  c_24 = t;
  b_24 :
  if(match_cons(c_24, sym_Strategies_1))
    {
      d_24 = ATgetArgument(c_24, 0);
      {
        ATerm g_24 = NULL,i_24 = NULL;
        ATerm h_24 = NULL;
        t = SSLgetAnnotations(not_null(c_24));
        {
          h_24 = t;
          if(((g_24 != NULL) && (g_24 != h_24)))
            _fail(h_24);
          else
            g_24 = h_24;
        }
        {
          t = not_null(d_24);
          {
            ATerm k_24 = NULL;
            t = o_78(t);
            {
              i_24 = t;
              {
                ATerm l_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(i_24)), not_null(g_24));
                {
                  l_24 = t;
                  if(((k_24 != NULL) && (k_24 != l_24)))
                    _fail(l_24);
                  else
                    k_24 = l_24;
                }
                t = not_null(k_24);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm v_24 = NULL,w_24 = NULL;
  v_24 = t;
  u_24 :
  if(match_cons(v_24, sym_Specification_1))
    {
      w_24 = ATgetArgument(v_24, 0);
      {
        ATerm z_24 = NULL,b_25 = NULL;
        ATerm a_25 = NULL;
        t = SSLgetAnnotations(not_null(v_24));
        {
          a_25 = t;
          if(((z_24 != NULL) && (z_24 != a_25)))
            _fail(a_25);
          else
            z_24 = a_25;
        }
        {
          t = not_null(w_24);
          {
            ATerm d_25 = NULL;
            t = q_78(t);
            {
              b_25 = t;
              {
                ATerm e_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(b_25)), not_null(z_24));
                {
                  e_25 = t;
                  if(((d_25 != NULL) && (d_25 != e_25)))
                    _fail(e_25);
                  else
                    d_25 = e_25;
                }
                t = not_null(d_25);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        t = split_2(t, _id, e_82);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
            p_25 = t;
            k_25 :
            if(match_cons(p_25, sym__2))
              {
                q_25 = ATgetArgument(p_25, 0);
                u_25 = ATgetArgument(p_25, 1);
                l_25 :
                if(match_cons(q_25, sym_SDef_3))
                  {
                    r_25 = ATgetArgument(q_25, 0);
                    s_25 = ATgetArgument(q_25, 1);
                    t_25 = ATgetArgument(q_25, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_25), not_null(s_25), not_null(t_25));
                  }
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
          t = zip_1(t, n_1);
        }
        return(t);
      }
      t = Let_2(t, m_1, _id);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              t = split_2(t, _id, e_82);
              {
                ATerm p_1 (ATerm t)
                {
                  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
                  y_25 = t;
                  n_25 :
                  if(match_cons(y_25, sym__2))
                    {
                      z_25 = ATgetArgument(y_25, 0);
                      c_26 = ATgetArgument(y_25, 1);
                      o_25 :
                      if(match_cons(z_25, sym_VarDec_2))
                        {
                          a_26 = ATgetArgument(z_25, 0);
                          b_26 = ATgetArgument(z_25, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(c_26), not_null(b_26));
                        }
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
                t = zip_1(t, p_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, o_1, _id);
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            {
              ATerm q_1 (ATerm t)
              {
                t = e_82(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, q_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm x_79 (ATerm), ATerm y_79 (ATerm))
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym_Rec_2))
    {
      p_26 = ATgetArgument(o_26, 0);
      q_26 = ATgetArgument(o_26, 1);
      {
        ATerm u_26 = NULL,w_26 = NULL;
        ATerm v_26 = NULL;
        t = SSLgetAnnotations(not_null(o_26));
        {
          v_26 = t;
          if(((u_26 != NULL) && (u_26 != v_26)))
            _fail(v_26);
          else
            u_26 = v_26;
        }
        {
          t = not_null(p_26);
          {
            ATerm y_26 = NULL;
            t = x_79(t);
            {
              w_26 = t;
              {
                t = not_null(q_26);
                {
                  ATerm a_27 = NULL;
                  t = y_79(t);
                  {
                    y_26 = t;
                    {
                      ATerm b_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(w_26), not_null(y_26)), not_null(u_26));
                      {
                        b_27 = t;
                        if(((a_27 != NULL) && (a_27 != b_27)))
                          _fail(b_27);
                        else
                          a_27 = b_27;
                      }
                      t = not_null(a_27);
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
ATerm Let_2 (ATerm t, ATerm z_79 (ATerm), ATerm a_80 (ATerm))
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
  z_31 = t;
  y_31 :
  if(match_cons(z_31, sym_Let_2))
    {
      a_32 = ATgetArgument(z_31, 0);
      b_32 = ATgetArgument(z_31, 1);
      {
        ATerm f_32 = NULL,h_32 = NULL;
        ATerm g_32 = NULL;
        t = SSLgetAnnotations(not_null(z_31));
        {
          g_32 = t;
          if(((f_32 != NULL) && (f_32 != g_32)))
            _fail(g_32);
          else
            f_32 = g_32;
        }
        {
          t = not_null(a_32);
          {
            ATerm j_32 = NULL;
            t = z_79(t);
            {
              h_32 = t;
              {
                t = not_null(b_32);
                {
                  ATerm n_35 = NULL;
                  t = a_80(t);
                  {
                    j_32 = t;
                    {
                      ATerm o_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(h_32), not_null(j_32)), not_null(f_32));
                      {
                        o_35 = t;
                        if(((n_35 != NULL) && (n_35 != o_35)))
                          _fail(o_35);
                        else
                          n_35 = o_35;
                      }
                      t = not_null(n_35);
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
ATerm sboundin_3 (ATerm t, ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm h_82 (ATerm))
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, f_82, f_82);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, h_82, h_82, f_82);
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            t = Rec_2(t, h_82, f_82);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,z_38 = NULL;
  p_37 = t;
  o_37 :
  if(match_cons(p_37, sym_Rec_2))
    {
      q_37 = ATgetArgument(p_37, 0);
      z_38 = ATgetArgument(p_37, 1);
      t = (ATerm) ATinsert(ATempty, not_null(q_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
  y_39 = t;
  x_39 :
  if(match_cons(y_39, sym_SDef_3))
    {
      z_39 = ATgetArgument(y_39, 0);
      a_40 = ATgetArgument(y_39, 1);
      b_40 = ATgetArgument(y_39, 2);
      {
        t = not_null(a_40);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
            f_40 = t;
            m_39 :
            if(match_cons(f_40, sym_VarDec_2))
              {
                g_40 = ATgetArgument(f_40, 0);
                h_40 = ATgetArgument(f_40, 1);
                t = not_null(g_40);
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
ATerm Bind1_0 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym_Let_2))
    {
      q_40 = ATgetArgument(p_40, 0);
      r_40 = ATgetArgument(p_40, 1);
      {
        t = not_null(q_40);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL;
            w_40 = t;
            n_40 :
            if(match_cons(w_40, sym_SDef_3))
              {
                x_40 = ATgetArgument(w_40, 0);
                y_40 = ATgetArgument(w_40, 1);
                z_40 = ATgetArgument(w_40, 2);
                t = not_null(x_40);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, s_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm w_79 (ATerm))
{
  ATerm o_42 = NULL,p_42 = NULL;
  o_42 = t;
  n_42 :
  if(match_cons(o_42, sym_SVar_1))
    {
      p_42 = ATgetArgument(o_42, 0);
      {
        ATerm s_42 = NULL,u_42 = NULL;
        ATerm t_42 = NULL;
        t = SSLgetAnnotations(not_null(o_42));
        {
          t_42 = t;
          if(((s_42 != NULL) && (s_42 != t_42)))
            _fail(t_42);
          else
            s_42 = t_42;
        }
        {
          t = not_null(p_42);
          {
            ATerm w_42 = NULL;
            t = w_79(t);
            {
              u_42 = t;
              {
                ATerm x_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(u_42)), not_null(s_42));
                {
                  x_42 = t;
                  if(((w_42 != NULL) && (w_42 != x_42)))
                    _fail(x_42);
                  else
                    w_42 = x_42;
                }
                t = not_null(w_42);
              }
            }
          }
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
  ATerm t_1 (ATerm t)
  {
    ATerm o_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = o_12;
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(s_12);
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
  t = rename_4(t, SVar_1, t_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm y_84 (ATerm, ATerm (ATerm)), ATerm z_84 (ATerm), ATerm a_85 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_85 (ATerm, ATerm (ATerm)))
{
  ATerm i_43 = NULL;
  i_43 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_43), (ATerm) ATempty);
    {
      ATerm n_43 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          ATerm u_12 = t;
          int y_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, y_84);
              LocalPopChoice(y_12);
            }
          else
            {
              t = u_12;
              {
                t = RnBinding_2(t, z_84, b_85);
                t = DistBinding_2(t, n_43, a_85);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, u_1);
        return(t);
      }
      t = n_43(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm o_43 (ATerm t, ATerm p_43 (ATerm))
  {
    t = Scope_2(t, p_43, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, o_43);
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
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t_43 = t;
  r_43 :
  if(match_cons(t_43, sym_Var_1))
    {
      u_43 = ATgetArgument(t_43, 0);
      s_43 :
      if(match_cons(u_43, sym_ListVar_1))
        {
          v_43 = ATgetArgument(u_43, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_43));
        }
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
  ATerm n_44 = NULL,o_44 = NULL;
  n_44 = t;
  m_44 :
  if(match_cons(n_44, sym_Build_1))
    {
      o_44 = ATgetArgument(n_44, 0);
      {
        ATerm q_44 = NULL,r_44 = NULL;
        ATerm d_45 = NULL;
        t = not_null(o_44);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
            s_44 = t;
            b_44 :
            if(match_cons(s_44, sym_Op_2))
              {
                t_44 = ATgetArgument(s_44, 0);
                u_44 = ATgetArgument(s_44, 1);
                c_44 :
                if(match_string(t_44, "Cons"))
                  {
                    d_44 :
                    if(((ATgetType(u_44) == AT_LIST) && ((ATermList) u_44 != ATempty)))
                      {
                        v_44 = ATgetFirst((ATermList) u_44);
                        y_44 = (ATerm) ATgetNext((ATermList) u_44);
                        e_44 :
                        if(match_cons(v_44, sym_Var_1))
                          {
                            w_44 = ATgetArgument(v_44, 0);
                            f_44 :
                            if(match_cons(w_44, sym_ListVar_1))
                              {
                                x_44 = ATgetArgument(w_44, 0);
                                g_44 :
                                if(((ATgetType(y_44) == AT_LIST) && ((ATermList) y_44 != ATempty)))
                                  {
                                    z_44 = ATgetFirst((ATermList) y_44);
                                    c_45 = (ATerm) ATgetNext((ATermList) y_44);
                                    h_44 :
                                    if(match_cons(z_44, sym_Op_2))
                                      {
                                        a_45 = ATgetArgument(z_44, 0);
                                        b_45 = ATgetArgument(z_44, 1);
                                        i_44 :
                                        if(match_string(a_45, "Nil"))
                                          {
                                            j_44 :
                                            if(((ATermList) b_45 == ATempty))
                                              {
                                                k_44 :
                                                if(((ATermList) c_45 == ATempty))
                                                  {
                                                    {
                                                      if(((q_44 != NULL) && (q_44 != x_44)))
                                                        _fail(x_44);
                                                      else
                                                        q_44 = x_44;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_44));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
            d_45 = t;
            if(((r_44 != NULL) && (r_44 != d_45)))
              _fail(d_45);
            else
              r_44 = d_45;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(r_44));
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
  ATerm e_46 = NULL,f_46 = NULL;
  e_46 = t;
  d_46 :
  if(match_cons(e_46, sym_Match_1))
    {
      f_46 = ATgetArgument(e_46, 0);
      {
        ATerm h_46 = NULL,i_46 = NULL;
        ATerm w_46 = NULL;
        t = not_null(f_46);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL;
            j_46 = t;
            j_45 :
            if(match_cons(j_46, sym_Op_2))
              {
                k_46 = ATgetArgument(j_46, 0);
                l_46 = ATgetArgument(j_46, 1);
                k_45 :
                if(match_string(k_46, "Cons"))
                  {
                    s_45 :
                    if(((ATgetType(l_46) == AT_LIST) && ((ATermList) l_46 != ATempty)))
                      {
                        m_46 = ATgetFirst((ATermList) l_46);
                        p_46 = (ATerm) ATgetNext((ATermList) l_46);
                        t_45 :
                        if(match_cons(m_46, sym_Var_1))
                          {
                            n_46 = ATgetArgument(m_46, 0);
                            u_45 :
                            if(match_cons(n_46, sym_ListVar_1))
                              {
                                o_46 = ATgetArgument(n_46, 0);
                                v_45 :
                                if(((ATgetType(p_46) == AT_LIST) && ((ATermList) p_46 != ATempty)))
                                  {
                                    q_46 = ATgetFirst((ATermList) p_46);
                                    v_46 = (ATerm) ATgetNext((ATermList) p_46);
                                    w_45 :
                                    if(match_cons(q_46, sym_Op_2))
                                      {
                                        t_46 = ATgetArgument(q_46, 0);
                                        u_46 = ATgetArgument(q_46, 1);
                                        x_45 :
                                        if(match_string(t_46, "Nil"))
                                          {
                                            y_45 :
                                            if(((ATermList) u_46 == ATempty))
                                              {
                                                z_45 :
                                                if(((ATermList) v_46 == ATempty))
                                                  {
                                                    {
                                                      if(((h_46 != NULL) && (h_46 != o_46)))
                                                        _fail(o_46);
                                                      else
                                                        h_46 = o_46;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_46));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
          t = oncetd_1(t, w_1);
          {
            w_46 = t;
            if(((i_46 != NULL) && (i_46 != w_46)))
              _fail(w_46);
            else
              i_46 = w_46;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(i_46));
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
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL;
  h_48 = t;
  z_47 :
  if(match_cons(h_48, sym_InfixApp_3))
    {
      i_48 = ATgetArgument(h_48, 0);
      e_48 = ATgetArgument(h_48, 1);
      d_48 = ATgetArgument(h_48, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(e_48), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_48)), not_null(i_48))));
    }
  else
    {
      if(match_cons(h_48, sym_BAM_3))
        {
          i_48 = ATgetArgument(h_48, 0);
          e_48 = ATgetArgument(h_48, 1);
          d_48 = ATgetArgument(h_48, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(d_48))), not_null(i_48)), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_48))));
        }
      else
        {
          if(match_cons(h_48, sym_AM_2))
            {
              i_48 = ATgetArgument(h_48, 0);
              e_48 = ATgetArgument(h_48, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_48), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_48)));
            }
          else
            {
              if(match_cons(h_48, sym_MA_2))
                {
                  i_48 = ATgetArgument(h_48, 0);
                  e_48 = ATgetArgument(h_48, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_48)), not_null(e_48));
                }
              else
                {
                  if(match_cons(h_48, sym_BA_2))
                    {
                      i_48 = ATgetArgument(h_48, 0);
                      e_48 = ATgetArgument(h_48, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_48)), not_null(i_48));
                    }
                  else
                    {
                      if(match_cons(h_48, sym_Lets_2))
                        {
                          i_48 = ATgetArgument(h_48, 0);
                          e_48 = ATgetArgument(h_48, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(i_48), not_null(e_48));
                        }
                      else
                        {
                          if(match_cons(h_48, sym_LChoices_1))
                            {
                              i_48 = ATgetArgument(h_48, 0);
                              a_48 :
                              if(((ATgetType(i_48) == AT_LIST) && ((ATermList) i_48 != ATempty)))
                                {
                                  f_48 = ATgetFirst((ATermList) i_48);
                                  g_48 = (ATerm) ATgetNext((ATermList) i_48);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(g_48)));
                                }
                              else
                                {
                                  if(((ATermList) i_48 == ATempty))
                                    {
                                      t = term_i_13;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(h_48, sym_Choices_1))
                                {
                                  i_48 = ATgetArgument(h_48, 0);
                                  b_48 :
                                  if(((ATgetType(i_48) == AT_LIST) && ((ATermList) i_48 != ATempty)))
                                    {
                                      f_48 = ATgetFirst((ATermList) i_48);
                                      g_48 = (ATerm) ATgetNext((ATermList) i_48);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(g_48)));
                                    }
                                  else
                                    {
                                      if(((ATermList) i_48 == ATempty))
                                        {
                                          t = term_i_13;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(h_48, sym_Seqs_1))
                                    {
                                      i_48 = ATgetArgument(h_48, 0);
                                      c_48 :
                                      if(((ATgetType(i_48) == AT_LIST) && ((ATermList) i_48 != ATempty)))
                                        {
                                          f_48 = ATgetFirst((ATermList) i_48);
                                          g_48 = (ATerm) ATgetNext((ATermList) i_48);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_48)));
                                        }
                                      else
                                        {
                                          if(((ATermList) i_48 == ATempty))
                                            {
                                              t = term_t_11;
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
  ATerm t_49 = NULL;
  t_49 = t;
  s_49 :
  if(match_cons(t_49, sym_Wld_0))
    {
      ATerm v_49 = NULL,x_49 = NULL;
      ATerm q_13;
      q_13 = t;
      {
        ATerm w_49 = NULL;
        t = SSLgetAnnotations(not_null(t_49));
        {
          w_49 = t;
          if(((v_49 != NULL) && (v_49 != w_49)))
            _fail(w_49);
          else
            v_49 = w_49;
        }
      }
      t = q_13;
      {
        ATerm y_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(v_49));
        {
          y_49 = t;
          if(((x_49 != NULL) && (x_49 != y_49)))
            _fail(y_49);
          else
            x_49 = y_49;
        }
        t = not_null(x_49);
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
  ATerm a_14 = t;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, x_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_14;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm d_77 (ATerm), ATerm e_77 (ATerm))
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  o_50 :
  if(match_cons(p_50, sym_App_2))
    {
      q_50 = ATgetArgument(p_50, 0);
      r_50 = ATgetArgument(p_50, 1);
      {
        ATerm f_51 = NULL,i_51 = NULL;
        ATerm g_51 = NULL;
        t = SSLgetAnnotations(not_null(p_50));
        {
          g_51 = t;
          if(((f_51 != NULL) && (f_51 != g_51)))
            _fail(g_51);
          else
            f_51 = g_51;
        }
        {
          t = not_null(q_50);
          {
            ATerm m_51 = NULL;
            t = d_77(t);
            {
              i_51 = t;
              {
                t = not_null(r_50);
                {
                  ATerm o_51 = NULL;
                  t = e_77(t);
                  {
                    m_51 = t;
                    {
                      ATerm r_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(i_51), not_null(m_51)), not_null(f_51));
                      {
                        r_51 = t;
                        if(((o_51 != NULL) && (o_51 != r_51)))
                          _fail(r_51);
                        else
                          o_51 = r_51;
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Con_3 (ATerm t, ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm))
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
  e_52 = t;
  d_52 :
  if(match_cons(e_52, sym_Con_3))
    {
      f_52 = ATgetArgument(e_52, 0);
      g_52 = ATgetArgument(e_52, 1);
      h_52 = ATgetArgument(e_52, 2);
      {
        ATerm o_52 = NULL,r_52 = NULL;
        ATerm q_52 = NULL;
        t = SSLgetAnnotations(not_null(e_52));
        {
          q_52 = t;
          if(((o_52 != NULL) && (o_52 != q_52)))
            _fail(q_52);
          else
            o_52 = q_52;
        }
        {
          t = not_null(f_52);
          {
            ATerm t_52 = NULL;
            t = a_77(t);
            {
              r_52 = t;
              {
                t = not_null(g_52);
                {
                  ATerm x_52 = NULL;
                  t = b_77(t);
                  {
                    t_52 = t;
                    {
                      t = not_null(h_52);
                      {
                        ATerm z_52 = NULL;
                        t = c_77(t);
                        {
                          x_52 = t;
                          {
                            ATerm a_53 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(r_52), not_null(t_52), not_null(x_52)), not_null(o_52));
                            {
                              a_53 = t;
                              if(((z_52 != NULL) && (z_52 != a_53)))
                                _fail(a_53);
                              else
                                z_52 = a_53;
                            }
                            t = not_null(z_52);
                          }
                        }
                      }
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
  ATerm d_14 = t;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, y_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_14;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
  l_53 = t;
  j_53 :
  if(match_cons(l_53, sym_SRule_1))
    {
      m_53 = ATgetArgument(l_53, 0);
      k_53 :
      if(match_cons(m_53, sym_StratRule_3))
        {
          n_53 = ATgetArgument(m_53, 0);
          o_53 = ATgetArgument(m_53, 1);
          p_53 = ATgetArgument(m_53, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_53)), (ATerm) ATmakeAppl(sym_Where_1, not_null(p_53))), not_null(n_53)));
        }
      else
        {
          if(match_cons(m_53, sym_Rule_3))
            {
              n_53 = ATgetArgument(m_53, 0);
              o_53 = ATgetArgument(m_53, 1);
              p_53 = ATgetArgument(m_53, 2);
              {
                t = not_null(n_53);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(o_53);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(o_53))), (ATerm) ATmakeAppl(sym_Where_1, not_null(p_53))), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_53))));
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
ATerm oncetd_1 (ATerm t, ATerm o_107 (ATerm))
{
  ATerm y_53 (ATerm t)
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_107(t);
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        t = _one(t, y_53);
      }
    return(t);
  }
  t = y_53(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
  r_54 = t;
  p_54 :
  if(match_cons(r_54, sym_SRule_1))
    {
      s_54 = ATgetArgument(r_54, 0);
      q_54 :
      if(match_cons(s_54, sym_Rule_3))
        {
          t_54 = ATgetArgument(s_54, 0);
          u_54 = ATgetArgument(s_54, 1);
          v_54 = ATgetArgument(s_54, 2);
          {
            ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL;
            ATerm h_55 = NULL;
            ATerm n_55 = NULL;
            t = new_0(t);
            {
              h_55 = t;
              {
                if(((e_55 != NULL) && (e_55 != h_55)))
                  _fail(h_55);
                else
                  e_55 = h_55;
                {
                  t = not_null(t_54);
                  {
                    ATerm v_55 = NULL;
                    ATerm z_1 (ATerm t)
                    {
                      ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL;
                      i_55 = t;
                      c_54 :
                      if(match_cons(i_55, sym_Con_3))
                        {
                          j_55 = ATgetArgument(i_55, 0);
                          l_55 = ATgetArgument(i_55, 1);
                          m_55 = ATgetArgument(i_55, 2);
                          d_54 :
                          if(match_cons(j_55, sym_Var_1))
                            {
                              k_55 = ATgetArgument(j_55, 0);
                              {
                                if(((d_55 != NULL) && (d_55 != k_55)))
                                  _fail(k_55);
                                else
                                  d_55 = k_55;
                                {
                                  if(((b_55 != NULL) && (b_55 != l_55)))
                                    _fail(l_55);
                                  else
                                    b_55 = l_55;
                                  {
                                    if(((z_54 != NULL) && (z_54 != m_55)))
                                      _fail(m_55);
                                    else
                                      z_54 = m_55;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_55));
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
                    t = oncetd_1(t, z_1);
                    {
                      n_55 = t;
                      {
                        if(((f_55 != NULL) && (f_55 != n_55)))
                          _fail(n_55);
                        else
                          f_55 = n_55;
                        {
                          t = not_null(u_54);
                          {
                            ATerm a_2 (ATerm t)
                            {
                              ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
                              o_55 = t;
                              h_54 :
                              if(match_cons(o_55, sym_Con_3))
                                {
                                  p_55 = ATgetArgument(o_55, 0);
                                  r_55 = ATgetArgument(o_55, 1);
                                  s_55 = ATgetArgument(o_55, 2);
                                  i_54 :
                                  if(match_cons(p_55, sym_Var_1))
                                    {
                                      q_55 = ATgetArgument(p_55, 0);
                                      m_54 :
                                      if(match_cons(s_55, sym_Call_2))
                                        {
                                          t_55 = ATgetArgument(s_55, 0);
                                          u_55 = ATgetArgument(s_55, 1);
                                          n_54 :
                                          if(((ATermList) u_55 == ATempty))
                                            {
                                              {
                                                if(((d_55 != NULL) && (d_55 != q_55)))
                                                  _fail(q_55);
                                                else
                                                  d_55 = q_55;
                                                {
                                                  if(((c_55 != NULL) && (c_55 != r_55)))
                                                    _fail(r_55);
                                                  else
                                                    c_55 = r_55;
                                                  {
                                                    if(((a_55 != NULL) && (a_55 != t_55)))
                                                      _fail(t_55);
                                                    else
                                                      a_55 = t_55;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_55));
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
                            t = oncetd_1(t, a_2);
                            {
                              v_55 = t;
                              if(((g_55 != NULL) && (g_55 != v_55)))
                                _fail(v_55);
                              else
                                g_55 = v_55;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_55)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_55), not_null(g_55), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_54), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(a_55), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_55), not_null(c_55), term_t_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_55)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_55)))))));
          }
        }
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
  ATerm b_2 (ATerm t)
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, b_2);
  return(t);
}
ATerm ListVarScope_0 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL;
  i_56 = t;
  h_56 :
  if(match_cons(i_56, sym_Scope_2))
    {
      j_56 = ATgetArgument(i_56, 0);
      k_56 = ATgetArgument(i_56, 1);
      {
        ATerm n_56 = NULL;
        ATerm r_56 = NULL;
        t = not_null(j_56);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm d_2 (ATerm t)
            {
              ATerm o_56 = NULL,p_56 = NULL;
              o_56 = t;
              f_56 :
              if(match_cons(o_56, sym_ListVar_1))
                {
                  p_56 = ATgetArgument(o_56, 0);
                  t = not_null(p_56);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = try_1(t, d_2);
            return(t);
          }
          t = map_1(t, c_2);
          {
            r_56 = t;
            if(((n_56 != NULL) && (n_56 != r_56)))
              _fail(r_56);
            else
              n_56 = r_56;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_56), not_null(k_56));
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
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      ATerm m_14 = t;
      int n_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0(t);
          LocalPopChoice(n_14);
        }
      else
        {
          t = m_14;
          t = desugarRule_0(t);
        }
      return(t);
    }
    t = try_1(t, f_2);
    {
      ATerm g_2 (ATerm t)
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_14 = t;
            int x_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0(t);
                LocalPopChoice(x_14);
              }
            else
              {
                t = w_14;
                {
                  ATerm y_14 = t;
                  int z_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0(t);
                      LocalPopChoice(z_14);
                    }
                  else
                    {
                      t = y_14;
                      t = ListBuild_0(t);
                    }
                }
              }
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            t = SingleListVar_0(t);
          }
        return(t);
      }
      t = repeat_1(t, g_2);
    }
    return(t);
  }
  t = topdown_1(t, e_2);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  y_56 = t;
  x_56 :
  if(match_cons(y_56, sym_SDef_3))
    {
      z_56 = ATgetArgument(y_56, 0);
      a_57 = ATgetArgument(y_56, 1);
      b_57 = ATgetArgument(y_56, 2);
      {
        ATerm f_57 = NULL;
        ATerm g_57 = NULL;
        t = not_null(b_57);
        {
          t = tvars_0(t);
          {
            g_57 = t;
            if(((f_57 != NULL) && (f_57 != g_57)))
              _fail(g_57);
            else
              f_57 = g_57;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_56), not_null(a_57), (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_57), not_null(b_57)));
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
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL;
  m_57 = t;
  l_57 :
  if(match_cons(m_57, sym_RDef_3))
    {
      n_57 = ATgetArgument(m_57, 0);
      o_57 = ATgetArgument(m_57, 1);
      p_57 = ATgetArgument(m_57, 2);
      {
        ATerm t_57 = NULL;
        ATerm u_57 = NULL;
        t = not_null(p_57);
        {
          t = tvars_0(t);
          {
            u_57 = t;
            if(((t_57 != NULL) && (t_57 != u_57)))
              _fail(u_57);
            else
              t_57 = u_57;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_57), not_null(o_57), (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_57), (ATerm) ATmakeAppl(sym_SRule_1, not_null(p_57))));
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
  ATerm y_57 = NULL;
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_57)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
  q_58 = t;
  n_58 :
  if(match_cons(q_58, sym_OpDecl_2))
    {
      r_58 = ATgetArgument(q_58, 0);
      s_58 = ATgetArgument(q_58, 1);
      o_58 :
      if(match_cons(s_58, sym_FunType_2))
        {
          t_58 = ATgetArgument(s_58, 0);
          p_58 = ATgetArgument(s_58, 1);
          {
            ATerm x_58 = NULL,y_58 = NULL,g_59 = NULL;
            ATerm a_15;
            a_15 = t;
            {
              ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
              t = not_null(t_58);
              {
                ATerm h_2 (ATerm t)
                {
                  ATerm z_58 = NULL,b_59 = NULL;
                  t = new_0(t);
                  {
                    ATerm d_15;
                    d_15 = t;
                    {
                      ATerm a_59 = NULL;
                      a_59 = t;
                      if(((z_58 != NULL) && (z_58 != a_59)))
                        _fail(a_59);
                      else
                        z_58 = a_59;
                    }
                    t = d_15;
                    {
                      ATerm c_59 = NULL;
                      c_59 = t;
                      if(((b_59 != NULL) && (b_59 != c_59)))
                        _fail(c_59);
                      else
                        b_59 = c_59;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(z_58), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_15), term_p_15)), not_null(b_59));
                    }
                  }
                  return(t);
                }
                t = map_1(t, h_2);
                {
                  t = unzip_0(t);
                  {
                    d_59 = t;
                    l_58 :
                    if(match_cons(d_59, sym__2))
                      {
                        e_59 = ATgetArgument(d_59, 0);
                        f_59 = ATgetArgument(d_59, 1);
                        {
                          if(((x_58 != NULL) && (x_58 != e_59)))
                            _fail(e_59);
                          else
                            x_58 = e_59;
                          if(((y_58 != NULL) && (y_58 != f_59)))
                            _fail(f_59);
                          else
                            y_58 = f_59;
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
            t = a_15;
            {
              ATerm l_59 = NULL;
              t = not_null(y_58);
              {
                t = map_1(t, MkCall_0);
                {
                  l_59 = t;
                  if(((g_59 != NULL) && (g_59 != l_59)))
                    _fail(l_59);
                  else
                    g_59 = l_59;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_58), not_null(x_58), (ATerm) ATmakeAppl(sym_Cong_2, not_null(r_58), not_null(g_59)));
            }
          }
        }
      else
        {
          if(match_cons(s_58, sym_ConstType_1))
            {
              t_58 = ATgetArgument(s_58, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_58), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(r_58), (ATerm) ATempty));
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
  ATerm e_60 = NULL,j_60 = NULL;
  e_60 = t;
  d_60 :
  if(match_cons(e_60, sym_Constructors_1))
    {
      j_60 = ATgetArgument(e_60, 0);
      {
        t = not_null(j_60);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(e_60, sym_Sorts_1))
        {
          j_60 = ATgetArgument(e_60, 0);
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
  ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL;
  j_61 = t;
  d_61 :
  if(match_cons(j_61, sym_Specification_1))
    {
      k_61 = ATgetArgument(j_61, 0);
      e_61 :
      if(((ATgetType(k_61) == AT_LIST) && ((ATermList) k_61 != ATempty)))
        {
          l_61 = ATgetFirst((ATermList) k_61);
          n_61 = (ATerm) ATgetNext((ATermList) k_61);
          f_61 :
          if(match_cons(l_61, sym_Signature_1))
            {
              m_61 = ATgetArgument(l_61, 0);
              g_61 :
              if(((ATgetType(n_61) == AT_LIST) && ((ATermList) n_61 != ATempty)))
                {
                  o_61 = ATgetFirst((ATermList) n_61);
                  q_61 = (ATerm) ATgetNext((ATermList) n_61);
                  h_61 :
                  if(match_cons(o_61, sym_Strategies_1))
                    {
                      p_61 = ATgetArgument(o_61, 0);
                      i_61 :
                      if(((ATermList) q_61 == ATempty))
                        {
                          {
                            ATerm t_61 = NULL;
                            ATerm u_61 = NULL,w_61 = NULL,y_61 = NULL;
                            ATerm q_15;
                            q_15 = t;
                            {
                              ATerm v_61 = NULL;
                              t = not_null(m_61);
                              {
                                t = congdefs_0(t);
                                {
                                  v_61 = t;
                                  if(((u_61 != NULL) && (u_61 != v_61)))
                                    _fail(v_61);
                                  else
                                    u_61 = v_61;
                                }
                              }
                            }
                            t = q_15;
                            {
                              ATerm x_61 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(p_61)), (ATerm) ATmakeAppl(sym_RDef_3, term_r_15, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_t_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_15), term_p_15))), (ATerm) ATmakeAppl(sym_VarDec_2, term_s_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_15), term_p_15))), (ATerm) ATmakeAppl(sym_Rule_3, term_z_15, term_j_16, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_o_17), term_l_17)))));
                              {
                                ATerm i_2 (ATerm t)
                                {
                                  ATerm p_17 = t;
                                  int q_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      LocalPopChoice(q_17);
                                    }
                                  else
                                    {
                                      t = p_17;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, i_2);
                                {
                                  x_61 = t;
                                  if(((w_61 != NULL) && (w_61 != x_61)))
                                    _fail(x_61);
                                  else
                                    w_61 = x_61;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_61), not_null(w_61));
                                {
                                  t = conc_0(t);
                                  {
                                    y_61 = t;
                                    if(((t_61 != NULL) && (t_61 != y_61)))
                                      _fail(y_61);
                                    else
                                      t_61 = y_61;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(t_61))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(m_61))));
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm k_62 = NULL;
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
  t = term_r_17;
  {
    ATerm j_2 (ATerm t)
    {
      t = term_s_17;
      return(t);
    }
    t = rewrite_1(t, j_2);
    {
      l_62 = t;
      e_62 :
      if(match_cons(l_62, sym_Defined_2))
        {
          m_62 = ATgetArgument(l_62, 0);
          n_62 = ATgetArgument(l_62, 1);
          j_62 :
          if(match_string(m_62, "e_0"))
            {
              if(((k_62 != NULL) && (k_62 != n_62)))
                _fail(n_62);
              else
                k_62 = n_62;
            }
          else
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
  t = not_null(k_62);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm y_62 = NULL;
  y_62 = t;
  t = SSL_int_to_string(not_null(y_62));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
  l_63 = t;
  k_63 :
  if(match_cons(l_63, sym_Op_2))
    {
      m_63 = ATgetArgument(l_63, 0);
      n_63 = ATgetArgument(l_63, 1);
      {
        ATerm q_63 = NULL,r_63 = NULL;
        ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL;
        t = term_r_17;
        {
          ATerm k_2 (ATerm t)
          {
            t = term_t_17;
            return(t);
          }
          t = rewrite_1(t, k_2);
          {
            s_63 = t;
            e_63 :
            if(match_cons(s_63, sym_Defined_3))
              {
                t_63 = ATgetArgument(s_63, 0);
                u_63 = ATgetArgument(s_63, 1);
                v_63 = ATgetArgument(s_63, 2);
                j_63 :
                if(match_string(t_63, "f_0"))
                  {
                    ATerm w_63 = NULL;
                    if(((r_63 != NULL) && (r_63 != u_63)))
                      _fail(u_63);
                    else
                      r_63 = u_63;
                    {
                      if(((q_63 != NULL) && (q_63 != v_63)))
                        _fail(v_63);
                      else
                        q_63 = v_63;
                      {
                        ATerm x_63 = NULL;
                        t = not_null(n_63);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              x_63 = t;
                              if(((w_63 != NULL) && (w_63 != x_63)))
                                _fail(x_63);
                              else
                                w_63 = x_63;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), not_null(w_63)), term_f_18), not_null(m_63)), term_y_17), term_x_17), not_null(r_63)), term_w_17), not_null(q_63)), term_v_17));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(m_63), not_null(n_63));
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
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL;
  d_64 = t;
  c_64 :
  if(match_cons(d_64, sym__2))
    {
      e_64 = ATgetArgument(d_64, 0);
      f_64 = ATgetArgument(d_64, 1);
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(e_64), not_null(f_64));
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            t = SSL_subtr(not_null(e_64), not_null(f_64));
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
  ATerm l_2 (ATerm t)
  {
    ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL;
    r_64 = t;
    k_64 :
    if(match_cons(r_64, sym__2))
      {
        s_64 = ATgetArgument(r_64, 0);
        t_64 = ATgetArgument(r_64, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_64), not_null(t_64), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL;
    w_64 = t;
    m_64 :
    if(match_cons(w_64, sym__3))
      {
        x_64 = ATgetArgument(w_64, 0);
        y_64 = ATgetArgument(w_64, 1);
        z_64 = ATgetArgument(w_64, 2);
        n_64 :
        if(match_int(x_64, 0))
          {
            t = not_null(z_64);
          }
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
  ATerm n_2 (ATerm t)
  {
    ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
    c_65 = t;
    q_64 :
    if(match_cons(c_65, sym__3))
      {
        d_65 = ATgetArgument(c_65, 0);
        e_65 = ATgetArgument(c_65, 1);
        f_65 = ATgetArgument(c_65, 2);
        {
          ATerm n_65 = NULL;
          ATerm j_18;
          j_18 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_65), term_k_18);
            t = geq_0(t);
          }
          t = j_18;
          {
            ATerm o_65 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_65), term_k_18);
            {
              t = subt_0(t);
              {
                o_65 = t;
                if(((n_65 != NULL) && (n_65 != o_65)))
                  _fail(o_65);
                else
                  n_65 = o_65;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_65), not_null(e_65), (ATerm) ATinsert(CheckATermList(not_null(f_65)), not_null(e_65)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm CheckTuple_0 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,s_66 = NULL;
  k_66 = t;
  d_66 :
  if(match_cons(k_66, sym_Op_2))
    {
      l_66 = ATgetArgument(k_66, 0);
      s_66 = ATgetArgument(k_66, 1);
      e_66 :
      if(match_string(l_66, ""))
        {
          ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL;
          ATerm l_18;
          l_18 = t;
          {
            ATerm y_66 = NULL;
            t = not_null(s_66);
            {
              ATerm z_66 = NULL;
              t = length_0(t);
              {
                y_66 = t;
                {
                  if(((v_66 != NULL) && (v_66 != y_66)))
                    _fail(y_66);
                  else
                    v_66 = y_66;
                  {
                    ATerm a_67 = NULL,c_67 = NULL;
                    t = term_f_9;
                    {
                      z_66 = t;
                      {
                        if(((u_66 != NULL) && (u_66 != z_66)))
                          _fail(z_66);
                        else
                          u_66 = z_66;
                        {
                          ATerm m_18;
                          m_18 = t;
                          {
                            ATerm b_67 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_66), term_o_18);
                            {
                              t = copy_0(t);
                              {
                                b_67 = t;
                                if(((a_67 != NULL) && (a_67 != b_67)))
                                  _fail(b_67);
                                else
                                  a_67 = b_67;
                              }
                            }
                          }
                          t = m_18;
                          {
                            ATerm d_67 = NULL,f_67 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_f_9, (ATerm) ATmakeAppl(sym_FunType_2, not_null(a_67), term_o_18));
                            {
                              c_67 = t;
                              {
                                if(((w_66 != NULL) && (w_66 != c_67)))
                                  _fail(c_67);
                                else
                                  w_66 = c_67;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm e_67 = NULL;
                                    ATerm t_18 = t;
                                    int u_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        LocalPopChoice(u_18);
                                      }
                                    else
                                      {
                                        t = t_18;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      e_67 = t;
                                      if(((d_67 != NULL) && (d_67 != e_67)))
                                        _fail(e_67);
                                      else
                                        d_67 = e_67;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(d_67)), not_null(w_66));
                                      {
                                        f_67 = t;
                                        {
                                          if(((x_66 != NULL) && (x_66 != f_67)))
                                            _fail(f_67);
                                          else
                                            x_66 = f_67;
                                          {
                                            ATerm v_18;
                                            v_18 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_r_17, (ATerm) ATmakeAppl(sym_Defined_2, term_z_18, not_null(x_66)));
                                              {
                                                ATerm o_2 (ATerm t)
                                                {
                                                  t = term_s_17;
                                                  return(t);
                                                }
                                                t = assert_1(t, o_2);
                                              }
                                            }
                                            t = v_18;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = l_18;
        }
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
  ATerm n_68 = NULL,o_68 = NULL,a_70 = NULL;
  n_68 = t;
  m_68 :
  if(((ATgetType(n_68) == AT_LIST) && ((ATermList) n_68 != ATempty)))
    {
      o_68 = ATgetFirst((ATermList) n_68);
      a_70 = (ATerm) ATgetNext((ATermList) n_68);
      t = not_null(o_68);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
  l_70 = t;
  k_70 :
  if(match_cons(l_70, sym__2))
    {
      m_70 = ATgetArgument(l_70, 0);
      n_70 = ATgetArgument(l_70, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_70), not_null(n_70));
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
ATerm rewrite_1 (ATerm t, ATerm p_92 (ATerm))
{
  ATerm t_70 = NULL;
  ATerm v_70 = NULL;
  t_70 = t;
  {
    ATerm w_70 = NULL;
    t = term_b_19;
    {
      t = p_92(t);
      {
        w_70 = t;
        if(((v_70 != NULL) && (v_70 != w_70)))
          _fail(w_70);
        else
          v_70 = w_70;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_70), not_null(t_70));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
  m_71 = t;
  l_71 :
  if(match_cons(m_71, sym_Op_2))
    {
      n_71 = ATgetArgument(m_71, 0);
      o_71 = ATgetArgument(m_71, 1);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_71 = NULL;
            ATerm v_71 = NULL;
            t = not_null(o_71);
            {
              t_71 = t;
              {
                t = length_0(t);
                {
                  v_71 = t;
                  {
                    ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(n_71), not_null(v_71));
                    {
                      ATerm p_2 (ATerm t)
                      {
                        t = term_g_19;
                        return(t);
                      }
                      t = rewrite_1(t, p_2);
                      {
                        x_71 = t;
                        e_71 :
                        if(match_cons(x_71, sym_Defined_2))
                          {
                            y_71 = ATgetArgument(x_71, 0);
                            z_71 = ATgetArgument(x_71, 1);
                            f_71 :
                            if(match_string(y_71, "d_0"))
                              {
                                if(((n_71 != NULL) && (n_71 != z_71)))
                                  _fail(z_71);
                                else
                                  n_71 = z_71;
                              }
                            else
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(n_71), not_null(t_71));
                  }
                }
              }
            }
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            {
              ATerm c_72 = NULL;
              ATerm e_72 = NULL;
              t = not_null(o_71);
              {
                c_72 = t;
                {
                  t = length_0(t);
                  {
                    e_72 = t;
                    {
                      ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(n_71), not_null(e_72));
                      {
                        ATerm q_2 (ATerm t)
                        {
                          t = term_g_19;
                          return(t);
                        }
                        t = rewrite_1(t, q_2);
                        {
                          g_72 = t;
                          j_71 :
                          if(match_cons(g_72, sym_Defined_2))
                            {
                              h_72 = ATgetArgument(g_72, 0);
                              i_72 = ATgetArgument(g_72, 1);
                              k_71 :
                              if(match_string(h_72, "c_0"))
                                {
                                  if(((n_71 != NULL) && (n_71 != i_72)))
                                    _fail(i_72);
                                  else
                                    n_71 = i_72;
                                }
                              else
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
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(n_71), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm w_108 (ATerm))
{
  ATerm r_72 (ATerm t)
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_108(t);
        {
          ATerm r_2 (ATerm t)
          {
            t = try_1(t, r_72);
            return(t);
          }
          t = _all(t, r_2);
        }
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = _some(t, r_72);
      }
    return(t);
  }
  t = r_72(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL;
  u_72 = t;
  t_72 :
  if(((ATgetType(u_72) == AT_LIST) && ((ATermList) u_72 != ATempty)))
    {
      v_72 = ATgetFirst((ATermList) u_72);
      w_72 = (ATerm) ATgetNext((ATermList) u_72);
      t = not_null(w_72);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL;
  d_73 = t;
  c_73 :
  if(match_cons(d_73, sym__2))
    {
      e_73 = ATgetArgument(d_73, 0);
      f_73 = ATgetArgument(d_73, 1);
      {
        ATerm j_19;
        j_19 = t;
        {
          ATerm i_73 = NULL;
          ATerm j_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_73), not_null(f_73));
          {
            ATerm k_19 = t;
            int l_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(l_19);
              }
            else
              {
                t = k_19;
                t = (ATerm) ATempty;
              }
            {
              j_73 = t;
              if(((i_73 != NULL) && (i_73 != j_73)))
                _fail(j_73);
              else
                i_73 = j_73;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_73), not_null(f_73), not_null(i_73));
            t = table_put_0(t);
          }
        }
        t = j_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm k_92 (ATerm))
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
  ATerm m_19;
  m_19 = t;
  {
    ATerm t_73 = NULL;
    ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL;
    t = k_92(t);
    {
      t_73 = t;
      {
        if(((r_73 != NULL) && (r_73 != t_73)))
          _fail(t_73);
        else
          r_73 = t_73;
        {
          ATerm n_19 = t;
          int s_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_73), term_t_19);
              t = table_get_0(t);
              LocalPopChoice(s_19);
            }
          else
            {
              t = n_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            u_73 = t;
            p_73 :
            if(((ATgetType(u_73) == AT_LIST) && ((ATermList) u_73 != ATempty)))
              {
                v_73 = ATgetFirst((ATermList) u_73);
                w_73 = (ATerm) ATgetNext((ATermList) u_73);
                {
                  if(((s_73 != NULL) && (s_73 != v_73)))
                    _fail(v_73);
                  else
                    s_73 = v_73;
                  {
                    if(((q_73 != NULL) && (q_73 != w_73)))
                      _fail(w_73);
                    else
                      q_73 = w_73;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(r_73), term_t_19, not_null(q_73));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(s_73);
                          {
                            ATerm s_2 (ATerm t)
                            {
                              ATerm x_73 = NULL;
                              x_73 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_73), not_null(x_73));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, s_2);
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
ATerm restore_always_2 (ATerm t, ATerm p_110 (ATerm), ATerm q_110 (ATerm))
{
  ATerm u_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_110(t);
      t = q_110(t);
      LocalPopChoice(y_19);
    }
  else
    {
      t = u_19;
      {
        t = q_110(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm j_92 (ATerm))
{
  ATerm e_74 = NULL;
  ATerm a_20;
  a_20 = t;
  {
    ATerm f_74 = NULL;
    ATerm g_74 = NULL;
    t = j_92(t);
    {
      f_74 = t;
      {
        if(((e_74 != NULL) && (e_74 != f_74)))
          _fail(f_74);
        else
          e_74 = f_74;
        {
          ATerm h_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_74), term_t_19);
          {
            ATerm d_20 = t;
            int e_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_20);
              }
            else
              {
                t = d_20;
                t = (ATerm) ATempty;
              }
            {
              h_74 = t;
              if(((g_74 != NULL) && (g_74 != h_74)))
                _fail(h_74);
              else
                g_74 = h_74;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_74), term_t_19, (ATerm) ATinsert(CheckATermList(not_null(g_74)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = a_20;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm l_92 (ATerm), ATerm m_92 (ATerm))
{
  t = begin_scope_1(t, l_92);
  {
    ATerm t_2 (ATerm t)
    {
      t = end_scope_1(t, l_92);
      return(t);
    }
    t = restore_always_2(t, m_92, t_2);
  }
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm u_81 (ATerm), ATerm v_81 (ATerm))
{
  ATerm m_74 = NULL,n_74 = NULL;
  ATerm u_2 (ATerm t)
  {
    t = term_t_17;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm f_20;
    f_20 = t;
    {
      ATerm o_74 = NULL;
      ATerm p_74 = NULL;
      t = u_81(t);
      {
        o_74 = t;
        {
          if(((m_74 != NULL) && (m_74 != o_74)))
            _fail(o_74);
          else
            m_74 = o_74;
          {
            t = v_81(t);
            {
              p_74 = t;
              if(((n_74 != NULL) && (n_74 != p_74)))
                _fail(p_74);
              else
                n_74 = p_74;
            }
          }
        }
      }
    }
    t = f_20;
    {
      ATerm g_20;
      g_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_17, (ATerm) ATmakeAppl(sym_Defined_3, term_h_20, not_null(m_74), not_null(n_74)));
        {
          ATerm w_2 (ATerm t)
          {
            t = term_t_17;
            return(t);
          }
          t = assert_1(t, w_2);
        }
      }
      t = g_20;
      {
        ATerm x_2 (ATerm t)
        {
          ATerm i_20 = t;
          if((PushChoice() == 0))
            {
              ATerm j_20 = t;
              int k_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  LocalPopChoice(k_20);
                }
              else
                {
                  t = j_20;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_20;
            }
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, x_2);
      }
    }
    return(t);
  }
  t = scope_2(t, u_2, v_2);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL;
  v_74 = t;
  u_74 :
  if(match_cons(v_74, sym_SDef_3))
    {
      w_74 = ATgetArgument(v_74, 0);
      x_74 = ATgetArgument(v_74, 1);
      y_74 = ATgetArgument(v_74, 2);
      {
        t = not_null(y_74);
        {
          ATerm y_2 (ATerm t)
          {
            t = not_null(w_74);
            return(t);
          }
          ATerm z_2 (ATerm t)
          {
            t = term_l_20;
            return(t);
          }
          t = check_constructors_p__2(t, y_2, z_2);
        }
      }
    }
  else
    {
      if(match_cons(v_74, sym_RDef_3))
        {
          w_74 = ATgetArgument(v_74, 0);
          x_74 = ATgetArgument(v_74, 1);
          y_74 = ATgetArgument(v_74, 2);
          {
            t = not_null(y_74);
            {
              ATerm a_3 (ATerm t)
              {
                t = not_null(w_74);
                return(t);
              }
              ATerm b_3 (ATerm t)
              {
                t = term_m_20;
                return(t);
              }
              t = check_constructors_p__2(t, a_3, b_3);
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
ATerm assert_1 (ATerm t, ATerm n_92 (ATerm))
{
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL;
  m_75 = t;
  l_75 :
  if(match_cons(m_75, sym__2))
    {
      n_75 = ATgetArgument(m_75, 0);
      o_75 = ATgetArgument(m_75, 1);
      {
        ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL;
        ATerm r_20;
        r_20 = t;
        {
          ATerm u_75 = NULL;
          ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL;
          t = n_92(t);
          {
            u_75 = t;
            {
              if(((r_75 != NULL) && (r_75 != u_75)))
                _fail(u_75);
              else
                r_75 = u_75;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_75), not_null(n_75), not_null(o_75));
                {
                  t = table_push_0(t);
                  {
                    ATerm s_20 = t;
                    int t_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_75), term_t_19);
                        t = table_get_0(t);
                        LocalPopChoice(t_20);
                      }
                    else
                      {
                        t = s_20;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_75 = t;
                      k_75 :
                      if(((ATgetType(v_75) == AT_LIST) && ((ATermList) v_75 != ATempty)))
                        {
                          w_75 = ATgetFirst((ATermList) v_75);
                          x_75 = (ATerm) ATgetNext((ATermList) v_75);
                          {
                            if(((s_75 != NULL) && (s_75 != w_75)))
                              _fail(w_75);
                            else
                              s_75 = w_75;
                            {
                              if(((t_75 != NULL) && (t_75 != x_75)))
                                _fail(x_75);
                              else
                                t_75 = x_75;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_75), term_t_19, (ATerm) ATinsert(CheckATermList(not_null(t_75)), (ATerm) ATinsert(CheckATermList(not_null(s_75)), not_null(n_75))));
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
        t = r_20;
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
  ATerm c_3 (ATerm t)
  {
    t = term_x_20;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_k_18;
    return(t);
  }
  t = foldr_3(t, c_3, add_0, d_3);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL;
  i_76 = t;
  f_76 :
  if(match_cons(i_76, sym_OpDecl_2))
    {
      j_76 = ATgetArgument(i_76, 0);
      k_76 = ATgetArgument(i_76, 1);
      g_76 :
      if(match_cons(k_76, sym_FunType_2))
        {
          l_76 = ATgetArgument(k_76, 0);
          h_76 = ATgetArgument(k_76, 1);
          {
            ATerm p_76 = NULL;
            ATerm z_20;
            z_20 = t;
            {
              ATerm q_76 = NULL;
              t = not_null(l_76);
              {
                t = length_0(t);
                {
                  q_76 = t;
                  if(((p_76 != NULL) && (p_76 != q_76)))
                    _fail(q_76);
                  else
                    p_76 = q_76;
                }
              }
            }
            t = z_20;
            {
              ATerm c_21;
              c_21 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(j_76), not_null(p_76)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_21, not_null(j_76)));
                {
                  ATerm e_3 (ATerm t)
                  {
                    t = term_g_19;
                    return(t);
                  }
                  t = assert_1(t, e_3);
                }
              }
              t = c_21;
            }
          }
        }
      else
        {
          if(match_cons(k_76, sym_ConstType_1))
            {
              l_76 = ATgetArgument(k_76, 0);
              {
                ATerm h_77 = NULL;
                ATerm e_21;
                e_21 = t;
                {
                  ATerm i_77 = NULL;
                  t = term_x_20;
                  {
                    i_77 = t;
                    if(((h_77 != NULL) && (h_77 != i_77)))
                      _fail(i_77);
                    else
                      h_77 = i_77;
                  }
                }
                t = e_21;
                {
                  ATerm f_21;
                  f_21 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(j_76), not_null(h_77)), (ATerm) ATmakeAppl(sym_Defined_2, term_g_21, not_null(j_76)));
                    {
                      ATerm f_3 (ATerm t)
                      {
                        t = term_g_19;
                        return(t);
                      }
                      t = assert_1(t, f_3);
                    }
                  }
                  t = f_21;
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
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,g_79 = NULL;
  u_78 = t;
  a_78 :
  if(match_cons(u_78, sym_Specification_1))
    {
      v_78 = ATgetArgument(u_78, 0);
      f_78 :
      if(((ATgetType(v_78) == AT_LIST) && ((ATermList) v_78 != ATempty)))
        {
          w_78 = ATgetFirst((ATermList) v_78);
          b_79 = (ATerm) ATgetNext((ATermList) v_78);
          g_78 :
          if(match_cons(w_78, sym_Signature_1))
            {
              x_78 = ATgetArgument(w_78, 0);
              h_78 :
              if(((ATgetType(x_78) == AT_LIST) && ((ATermList) x_78 != ATempty)))
                {
                  y_78 = ATgetFirst((ATermList) x_78);
                  a_79 = (ATerm) ATgetNext((ATermList) x_78);
                  n_78 :
                  if(match_cons(y_78, sym_Constructors_1))
                    {
                      z_78 = ATgetArgument(y_78, 0);
                      p_78 :
                      if(((ATermList) a_79 == ATempty))
                        {
                          r_78 :
                          if(((ATgetType(b_79) == AT_LIST) && ((ATermList) b_79 != ATempty)))
                            {
                              c_79 = ATgetFirst((ATermList) b_79);
                              g_79 = (ATerm) ATgetNext((ATermList) b_79);
                              s_78 :
                              if(match_cons(c_79, sym_Strategies_1))
                                {
                                  d_79 = ATgetArgument(c_79, 0);
                                  t_78 :
                                  if(((ATermList) g_79 == ATempty))
                                    {
                                      {
                                        ATerm j_79 = NULL,k_79 = NULL,o_79 = NULL;
                                        ATerm h_21;
                                        h_21 = t;
                                        {
                                          ATerm l_79 = NULL;
                                          ATerm m_79 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(z_78)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_f_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_f_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_f_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_f_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_f_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_f_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_f_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_f_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_18), term_o_18))), term_j_21);
                                          {
                                            l_79 = t;
                                            {
                                              if(((j_79 != NULL) && (j_79 != l_79)))
                                                _fail(l_79);
                                              else
                                                j_79 = l_79;
                                              {
                                                t = not_null(j_79);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(d_79);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        m_79 = t;
                                                        y_77 :
                                                        if(((ATermList) m_79 == ATempty))
                                                          {
                                                            {
                                                              ATerm n_79 = NULL;
                                                              ATerm m_21 = t;
                                                              int n_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  LocalPopChoice(n_21);
                                                                }
                                                              else
                                                                {
                                                                  t = m_21;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                n_79 = t;
                                                                if(((k_79 != NULL) && (k_79 != n_79)))
                                                                  _fail(n_79);
                                                                else
                                                                  k_79 = n_79;
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
                                        t = h_21;
                                        {
                                          ATerm p_79 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_79), not_null(j_79));
                                          {
                                            t = conc_0(t);
                                            {
                                              p_79 = t;
                                              if(((o_79 != NULL) && (o_79 != p_79)))
                                                _fail(p_79);
                                              else
                                                o_79 = p_79;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(d_79))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(o_79))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm q_21;
    q_21 = t;
    {
      ATerm u_21 = t;
      if((PushChoice() == 0))
        {
          ATerm e_80 = NULL;
          t = d_83(t);
          {
            e_80 = t;
            v_79 :
            if(((ATermList) e_80 == ATempty))
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
          t = u_21;
        }
    }
    t = q_21;
    {
      ATerm h_3 (ATerm t)
      {
        ATerm i_3 (ATerm t)
        {
          t = ExpOverlay_1(t, d_83);
          return(t);
        }
        t = try_1(t, i_3);
        return(t);
      }
      t = topdown_1(t, h_3);
    }
    return(t);
  }
  t = try_1(t, g_3);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm n_80 = NULL,o_80 = NULL,r_80 = NULL;
  o_80 = t;
  m_80 :
  if(match_cons(o_80, sym_BuildDefault_1))
    {
      r_80 = ATgetArgument(o_80, 0);
      t = term_t_11;
    }
  else
    {
      if(match_cons(o_80, sym_Real_1))
        {
          r_80 = ATgetArgument(o_80, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(r_80)));
        }
      else
        {
          if(match_cons(o_80, sym_Int_1))
            {
              r_80 = ATgetArgument(o_80, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(r_80)));
            }
          else
            {
              if(match_cons(o_80, sym_Str_1))
                {
                  r_80 = ATgetArgument(o_80, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(r_80)));
                }
              else
                {
                  if(match_cons(o_80, sym_Anno_2))
                    {
                      r_80 = ATgetArgument(o_80, 0);
                      n_80 = ATgetArgument(o_80, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_80)), not_null(r_80)));
                    }
                  else
                    {
                      if(match_cons(o_80, sym_Op_2))
                        {
                          r_80 = ATgetArgument(o_80, 0);
                          n_80 = ATgetArgument(o_80, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_80)), not_null(n_80));
                        }
                      else
                        {
                          if(match_cons(o_80, sym_Var_1))
                            {
                              r_80 = ATgetArgument(o_80, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_80)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL;
  l_82 = t;
  k_82 :
  if(match_cons(l_82, sym_Op_2))
    {
      m_82 = ATgetArgument(l_82, 0);
      n_82 = ATgetArgument(l_82, 1);
      {
        ATerm r_82 = NULL,t_82 = NULL;
        ATerm s_82 = NULL;
        t = SSLgetAnnotations(not_null(l_82));
        {
          s_82 = t;
          if(((r_82 != NULL) && (r_82 != s_82)))
            _fail(s_82);
          else
            r_82 = s_82;
        }
        {
          t = not_null(m_82);
          {
            ATerm v_82 = NULL;
            t = e_79(t);
            {
              t_82 = t;
              {
                t = not_null(n_82);
                {
                  ATerm x_82 = NULL;
                  t = f_79(t);
                  {
                    v_82 = t;
                    {
                      ATerm y_82 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(t_82), not_null(v_82)), not_null(r_82));
                      {
                        y_82 = t;
                        if(((x_82 != NULL) && (x_82 != y_82)))
                          _fail(y_82);
                        else
                          x_82 = y_82;
                      }
                      t = not_null(x_82);
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
  ATerm j_3 (ATerm t)
  {
    ATerm k_3 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, k_3);
    return(t);
  }
  t = try_1(t, j_3);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL;
  s_83 = t;
  r_83 :
  if(match_cons(s_83, sym_Overlay_3))
    {
      t_83 = ATgetArgument(s_83, 0);
      u_83 = ATgetArgument(s_83, 1);
      v_83 = ATgetArgument(s_83, 2);
      {
        ATerm z_83 = NULL,d_84 = NULL;
        ATerm k_22;
        k_22 = t;
        {
          ATerm c_84 = NULL;
          t = not_null(u_83);
          {
            ATerm l_3 (ATerm t)
            {
              ATerm a_84 = NULL;
              ATerm b_84 = NULL;
              b_84 = t;
              if(((a_84 != NULL) && (a_84 != b_84)))
                _fail(b_84);
              else
                a_84 = b_84;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(a_84), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_15), term_p_15));
              return(t);
            }
            t = map_1(t, l_3);
            {
              c_84 = t;
              if(((z_83 != NULL) && (z_83 != c_84)))
                _fail(c_84);
              else
                z_83 = c_84;
            }
          }
        }
        t = k_22;
        {
          ATerm e_84 = NULL;
          t = not_null(v_83);
          {
            t = trm_to_cong_0(t);
            {
              e_84 = t;
              if(((d_84 != NULL) && (d_84 != e_84)))
                _fail(e_84);
              else
                d_84 = e_84;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_83), not_null(z_83), not_null(d_84));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm a_82 (ATerm))
{
  t = Scope_2(t, a_82, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm v_84 = NULL,u_85 = NULL;
  v_84 = t;
  u_84 :
  if(match_cons(v_84, sym_Var_1))
    {
      u_85 = ATgetArgument(v_84, 0);
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_85 = NULL,z_85 = NULL;
            ATerm y_85 = NULL;
            t = SSLgetAnnotations(not_null(v_84));
            {
              y_85 = t;
              if(((x_85 != NULL) && (x_85 != y_85)))
                _fail(y_85);
              else
                x_85 = y_85;
            }
            {
              t = not_null(u_85);
              {
                ATerm b_86 = NULL;
                t = s_0(t);
                {
                  z_85 = t;
                  {
                    ATerm c_86 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_85)), not_null(x_85));
                    {
                      c_86 = t;
                      if(((b_86 != NULL) && (b_86 != c_86)))
                        _fail(c_86);
                      else
                        b_86 = c_86;
                    }
                    t = not_null(b_86);
                  }
                }
              }
            }
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            {
              ATerm f_86 = NULL,h_86 = NULL;
              ATerm g_86 = NULL;
              t = SSLgetAnnotations(not_null(v_84));
              {
                g_86 = t;
                if(((f_86 != NULL) && (f_86 != g_86)))
                  _fail(g_86);
                else
                  f_86 = g_86;
              }
              {
                t = not_null(u_85);
                {
                  ATerm j_86 = NULL;
                  t = s_0(t);
                  {
                    h_86 = t;
                    {
                      ATerm k_86 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_86)), not_null(f_86));
                      {
                        k_86 = t;
                        if(((j_86 != NULL) && (j_86 != k_86)))
                          _fail(k_86);
                        else
                          j_86 = k_86;
                      }
                      t = not_null(j_86);
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
ATerm DistBinding_2 (ATerm t, ATerm q_84 (ATerm), ATerm r_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm x_86 = NULL,y_86 = NULL,f_87 = NULL,g_87 = NULL;
  x_86 = t;
  w_86 :
  if(match_cons(x_86, sym__3))
    {
      y_86 = ATgetArgument(x_86, 0);
      f_87 = ATgetArgument(x_86, 1);
      g_87 = ATgetArgument(x_86, 2);
      {
        t = not_null(y_86);
        {
          ATerm m_3 (ATerm t)
          {
            ATerm k_87 = NULL;
            k_87 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_87), not_null(g_87));
              t = q_84(t);
            }
            return(t);
          }
          ATerm n_3 (ATerm t)
          {
            ATerm m_87 = NULL;
            m_87 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_87), not_null(f_87));
              t = q_84(t);
            }
            return(t);
          }
          t = r_84(t, m_3, n_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm w_84 (ATerm), ATerm x_84 (ATerm, ATerm (ATerm)))
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
  y_87 = t;
  x_87 :
  if(match_cons(y_87, sym__2))
    {
      z_87 = ATgetArgument(y_87, 0);
      a_88 = ATgetArgument(y_87, 1);
      {
        ATerm d_88 = NULL,f_88 = NULL,i_88 = NULL,o_88 = NULL;
        ATerm n_22;
        n_22 = t;
        {
          ATerm j_88 = NULL;
          t = not_null(z_87);
          {
            ATerm k_88 = NULL;
            t = w_84(t);
            {
              j_88 = t;
              {
                if(((d_88 != NULL) && (d_88 != j_88)))
                  _fail(j_88);
                else
                  d_88 = j_88;
                {
                  ATerm l_88 = NULL,n_88 = NULL;
                  t = map_1(t, new_0);
                  {
                    k_88 = t;
                    {
                      if(((f_88 != NULL) && (f_88 != k_88)))
                        _fail(k_88);
                      else
                        f_88 = k_88;
                      {
                        ATerm m_88 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_88), not_null(f_88));
                        {
                          t = zip_1(t, _id);
                          {
                            m_88 = t;
                            if(((l_88 != NULL) && (l_88 != m_88)))
                              _fail(m_88);
                            else
                              l_88 = m_88;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_88), not_null(a_88));
                          {
                            t = conc_0(t);
                            {
                              n_88 = t;
                              if(((i_88 != NULL) && (i_88 != n_88)))
                                _fail(n_88);
                              else
                                i_88 = n_88;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = n_22;
        {
          ATerm p_88 = NULL;
          t = not_null(z_87);
          {
            ATerm o_3 (ATerm t)
            {
              t = not_null(f_88);
              return(t);
            }
            t = x_84(t, o_3);
            {
              p_88 = t;
              if(((o_88 != NULL) && (o_88 != p_88)))
                _fail(p_88);
              else
                o_88 = p_88;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(o_88), not_null(a_88), not_null(i_88));
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
  ATerm c_89 = NULL;
  ATerm e_89 = NULL,f_89 = NULL;
  c_89 = t;
  {
    ATerm g_89 = NULL;
    ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL;
    t = not_null(c_89);
    {
      g_89 = t;
      {
        t = SSL_explode_term(not_null(g_89));
        {
          i_89 = t;
          z_88 :
          if(match_cons(i_89, sym__2))
            {
              j_89 = ATgetArgument(i_89, 0);
              k_89 = ATgetArgument(i_89, 1);
              a_89 :
              if(match_string(j_89, ""))
                {
                  b_89 :
                  if(((ATgetType(k_89) == AT_LIST) && ((ATermList) k_89 != ATempty)))
                    {
                      l_89 = ATgetFirst((ATermList) k_89);
                      m_89 = (ATerm) ATgetNext((ATermList) k_89);
                      {
                        if(((f_89 != NULL) && (f_89 != l_89)))
                          _fail(l_89);
                        else
                          f_89 = l_89;
                        if(((e_89 != NULL) && (e_89 != m_89)))
                          _fail(m_89);
                        else
                          e_89 = m_89;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(f_89);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm k_84 (ATerm, ATerm (ATerm)))
{
  ATerm s_89 = NULL,t_89 = NULL,u_89 = NULL;
  s_89 = t;
  r_89 :
  if(match_cons(s_89, sym__2))
    {
      t_89 = ATgetArgument(s_89, 0);
      u_89 = ATgetArgument(s_89, 1);
      {
        t = not_null(t_89);
        {
          ATerm p_3 (ATerm t)
          {
            ATerm q_3 (ATerm t)
            {
              t = not_null(u_89);
              return(t);
            }
            t = split_2(t, _id, q_3);
            t = lookup_0(t);
            return(t);
          }
          t = k_84(t, p_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm e_103 (ATerm))
{
  ATerm l_90 = NULL,m_90 = NULL,r_90 = NULL;
  l_90 = t;
  k_90 :
  if(match_cons(l_90, sym__2))
    {
      m_90 = ATgetArgument(l_90, 0);
      r_90 = ATgetArgument(l_90, 1);
      {
        t = not_null(m_90);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm u_90 = NULL;
            u_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_90), not_null(r_90));
              t = e_103(t);
            }
            return(t);
          }
          t = _all(t, r_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm j_103 (ATerm))
{
  ATerm y_90 (ATerm t)
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_103(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = all_dist_1(t, y_90);
      }
    return(t);
  }
  t = y_90(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm, ATerm (ATerm)), ATerm k_85 (ATerm), ATerm l_85 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_85 (ATerm, ATerm (ATerm)), ATerm n_85 (ATerm))
{
  ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL;
  t = subs_args_0(t);
  {
    d_91 = t;
    c_91 :
    if(match_cons(d_91, sym__2))
      {
        e_91 = ATgetArgument(d_91, 0);
        f_91 = ATgetArgument(d_91, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_91), (ATerm) ATempty);
          {
            ATerm j_91 (ATerm t)
            {
              ATerm s_3 (ATerm t)
              {
                ATerm q_22 = t;
                int r_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, j_85);
                    LocalPopChoice(r_22);
                  }
                else
                  {
                    t = q_22;
                    {
                      ATerm s_22 = t;
                      int w_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm t_3 (ATerm t)
                            {
                              t = not_null(e_91);
                              return(t);
                            }
                            t = SubsVar_2(t, i_85, t_3);
                            t = n_85(t);
                          }
                          LocalPopChoice(w_22);
                        }
                      else
                        {
                          t = s_22;
                          {
                            t = RnBinding_2(t, k_85, m_85);
                            t = DistBinding_2(t, j_91, l_85);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, s_3);
              return(t);
            }
            t = j_91(t);
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
ATerm substitute_5 (ATerm t, ATerm p_85 (ATerm), ATerm q_85 (ATerm, ATerm (ATerm)), ATerm r_85 (ATerm), ATerm s_85 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t_85 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, p_85, q_85, r_85, s_85, t_85, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm k_91 (ATerm t, ATerm l_91 (ATerm))
  {
    t = Scope_2(t, l_91, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, k_91);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm b_83 (ATerm))
{
  ATerm u_91 = NULL,v_91 = NULL,w_91 = NULL;
  u_91 = t;
  t_91 :
  if(match_cons(u_91, sym_Op_2))
    {
      v_91 = ATgetArgument(u_91, 0);
      w_91 = ATgetArgument(u_91, 1);
      {
        ATerm z_91 = NULL,a_92 = NULL;
        t = b_83(t);
        {
          ATerm u_3 (ATerm t)
          {
            ATerm z_22;
            z_22 = t;
            {
              ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL;
              b_92 = t;
              s_91 :
              if(match_cons(b_92, sym_Overlay_3))
                {
                  c_92 = ATgetArgument(b_92, 0);
                  d_92 = ATgetArgument(b_92, 1);
                  e_92 = ATgetArgument(b_92, 2);
                  {
                    ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL,o_92 = NULL;
                    if(((v_91 != NULL) && (v_91 != c_92)))
                      _fail(c_92);
                    else
                      v_91 = c_92;
                    {
                      if(((f_92 != NULL) && (f_92 != d_92)))
                        _fail(d_92);
                      else
                        f_92 = d_92;
                      {
                        if(((g_92 != NULL) && (g_92 != e_92)))
                          _fail(e_92);
                        else
                          g_92 = e_92;
                        {
                          ATerm c_23;
                          c_23 = t;
                          {
                            ATerm i_92 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(f_92), not_null(w_91));
                            {
                              t = zip_1(t, _id);
                              {
                                i_92 = t;
                                if(((h_92 != NULL) && (h_92 != i_92)))
                                  _fail(i_92);
                                else
                                  h_92 = i_92;
                              }
                            }
                          }
                          t = c_23;
                          {
                            ATerm q_92 = NULL;
                            t = not_null(h_92);
                            {
                              o_92 = t;
                              {
                                if(((z_91 != NULL) && (z_91 != o_92)))
                                  _fail(o_92);
                                else
                                  z_91 = o_92;
                                {
                                  t = not_null(g_92);
                                  {
                                    q_92 = t;
                                    {
                                      if(((a_92 != NULL) && (a_92 != q_92)))
                                        _fail(q_92);
                                      else
                                        a_92 = q_92;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_92), not_null(g_92));
                                    }
                                  }
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
            t = z_22;
            return(t);
          }
          t = fetch_1(t, u_3);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_91), not_null(a_92));
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
ATerm exp_overlays1_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm d_23;
    d_23 = t;
    {
      ATerm e_23 = t;
      if((PushChoice() == 0))
        {
          ATerm x_92 = NULL;
          t = c_83(t);
          {
            x_92 = t;
            w_92 :
            if(((ATermList) x_92 == ATempty))
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
          t = e_23;
        }
    }
    t = d_23;
    {
      ATerm w_3 (ATerm t)
      {
        ATerm x_3 (ATerm t)
        {
          t = ExpOverlay_1(t, c_83);
          return(t);
        }
        t = repeat_1(t, x_3);
        return(t);
      }
      t = topdown_1(t, w_3);
    }
    return(t);
  }
  t = try_1(t, v_3);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL,u_93 = NULL,v_93 = NULL;
  l_93 = t;
  d_93 :
  if(match_cons(l_93, sym_Specification_1))
    {
      m_93 = ATgetArgument(l_93, 0);
      e_93 :
      if(((ATgetType(m_93) == AT_LIST) && ((ATermList) m_93 != ATempty)))
        {
          n_93 = ATgetFirst((ATermList) m_93);
          p_93 = (ATerm) ATgetNext((ATermList) m_93);
          f_93 :
          if(match_cons(n_93, sym_Signature_1))
            {
              o_93 = ATgetArgument(n_93, 0);
              g_93 :
              if(((ATgetType(p_93) == AT_LIST) && ((ATermList) p_93 != ATempty)))
                {
                  q_93 = ATgetFirst((ATermList) p_93);
                  s_93 = (ATerm) ATgetNext((ATermList) p_93);
                  h_93 :
                  if(match_cons(q_93, sym_Overlays_1))
                    {
                      r_93 = ATgetArgument(q_93, 0);
                      i_93 :
                      if(((ATgetType(s_93) == AT_LIST) && ((ATermList) s_93 != ATempty)))
                        {
                          t_93 = ATgetFirst((ATermList) s_93);
                          v_93 = (ATerm) ATgetNext((ATermList) s_93);
                          j_93 :
                          if(match_cons(t_93, sym_Strategies_1))
                            {
                              u_93 = ATgetArgument(t_93, 0);
                              k_93 :
                              if(((ATermList) v_93 == ATempty))
                                {
                                  {
                                    ATerm z_93 = NULL,b_94 = NULL;
                                    ATerm l_23;
                                    l_23 = t;
                                    {
                                      ATerm a_94 = NULL;
                                      t = not_null(r_93);
                                      {
                                        ATerm y_3 (ATerm t)
                                        {
                                          t = not_null(r_93);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, y_3);
                                        {
                                          a_94 = t;
                                          if(((z_93 != NULL) && (z_93 != a_94)))
                                            _fail(a_94);
                                          else
                                            z_93 = a_94;
                                        }
                                      }
                                    }
                                    t = l_23;
                                    {
                                      ATerm c_94 = NULL,e_94 = NULL,i_94 = NULL;
                                      ATerm m_23;
                                      m_23 = t;
                                      {
                                        ATerm d_94 = NULL;
                                        t = not_null(r_93);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            d_94 = t;
                                            if(((c_94 != NULL) && (c_94 != d_94)))
                                              _fail(d_94);
                                            else
                                              c_94 = d_94;
                                          }
                                        }
                                      }
                                      t = m_23;
                                      {
                                        ATerm f_94 = NULL;
                                        t = not_null(u_93);
                                        {
                                          ATerm z_3 (ATerm t)
                                          {
                                            t = not_null(z_93);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, z_3);
                                          {
                                            f_94 = t;
                                            if(((e_94 != NULL) && (e_94 != f_94)))
                                              _fail(f_94);
                                            else
                                              e_94 = f_94;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_94), not_null(e_94));
                                          {
                                            t = conc_0(t);
                                            {
                                              i_94 = t;
                                              if(((b_94 != NULL) && (b_94 != i_94)))
                                                _fail(i_94);
                                              else
                                                b_94 = i_94;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(b_94))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(o_93))));
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
  ATerm v_23;
  v_23 = t;
  {
    ATerm p_94 = NULL;
    ATerm q_94 = NULL;
    q_94 = t;
    if(((p_94 != NULL) && (p_94 != q_94)))
      _fail(q_94);
    else
      p_94 = q_94;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_17, not_null(p_94));
      t = printnl_0(t);
    }
  }
  t = v_23;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm w_23;
  w_23 = t;
  {
    t = error_0(t);
    {
      t = term_k_18;
      t = exit_0(t);
    }
  }
  t = w_23;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm w_94 = NULL,x_94 = NULL,z_94 = NULL,a_95 = NULL;
  w_94 = t;
  v_94 :
  if(match_cons(w_94, sym__3))
    {
      x_94 = ATgetArgument(w_94, 0);
      z_94 = ATgetArgument(w_94, 1);
      a_95 = ATgetArgument(w_94, 2);
      {
        ATerm e_95 = NULL,g_95 = NULL;
        ATerm x_23;
        x_23 = t;
        {
          ATerm f_95 = NULL;
          t = not_null(x_94);
          {
            t = MsgU_0(t);
            {
              f_95 = t;
              if(((e_95 != NULL) && (e_95 != f_95)))
                _fail(f_95);
              else
                e_95 = f_95;
            }
          }
        }
        t = x_23;
        {
          ATerm h_95 = NULL;
          t = not_null(a_95);
          {
            t = MsgE_0(t);
            {
              h_95 = t;
              if(((g_95 != NULL) && (g_95 != h_95)))
                _fail(h_95);
              else
                g_95 = h_95;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_95)), not_null(e_95));
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
  ATerm q_95 = NULL,r_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL;
  z_95 = t;
  o_95 :
  if(((ATgetType(z_95) == AT_LIST) && ((ATermList) z_95 != ATempty)))
    {
      x_95 = ATgetFirst((ATermList) z_95);
      y_95 = (ATerm) ATgetNext((ATermList) z_95);
      p_95 :
      if(((ATgetType(y_95) == AT_LIST) && ((ATermList) y_95 != ATempty)))
        {
          q_95 = ATgetFirst((ATermList) y_95);
          r_95 = (ATerm) ATgetNext((ATermList) y_95);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_23), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(r_95)), not_null(q_95)), not_null(x_95))), term_y_23);
        }
      else
        {
          if(((ATermList) y_95 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_23), not_null(x_95)), term_a_24);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) z_95 == ATempty))
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
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL;
  q_96 = t;
  k_96 :
  if(((ATgetType(q_96) == AT_LIST) && ((ATermList) q_96 != ATempty)))
    {
      o_96 = ATgetFirst((ATermList) q_96);
      p_96 = (ATerm) ATgetNext((ATermList) q_96);
      l_96 :
      if(((ATgetType(p_96) == AT_LIST) && ((ATermList) p_96 != ATempty)))
        {
          m_96 = ATgetFirst((ATermList) p_96);
          n_96 = (ATerm) ATgetNext((ATermList) p_96);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_24), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_96)), not_null(m_96)), not_null(o_96))), term_y_23);
        }
      else
        {
          if(((ATermList) p_96 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_24), not_null(o_96)), term_a_24);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) q_96 == ATempty))
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
  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL;
  q_97 = t;
  p_97 :
  if(match_cons(q_97, sym__3))
    {
      r_97 = ATgetArgument(q_97, 0);
      s_97 = ATgetArgument(q_97, 1);
      t_97 = ATgetArgument(q_97, 2);
      {
        ATerm x_97 = NULL,z_97 = NULL;
        ATerm f_24;
        f_24 = t;
        {
          ATerm y_97 = NULL;
          t = not_null(r_97);
          {
            t = MsgU_0(t);
            {
              y_97 = t;
              if(((x_97 != NULL) && (x_97 != y_97)))
                _fail(y_97);
              else
                x_97 = y_97;
            }
          }
        }
        t = f_24;
        {
          ATerm a_98 = NULL;
          t = not_null(t_97);
          {
            t = MsgE_0(t);
            {
              a_98 = t;
              if(((z_97 != NULL) && (z_97 != a_98)))
                _fail(a_98);
              else
                z_97 = a_98;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_97)), not_null(x_97));
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
  ATerm l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL;
  l_98 = t;
  k_98 :
  if(match_cons(l_98, sym_Overlay_3))
    {
      m_98 = ATgetArgument(l_98, 0);
      n_98 = ATgetArgument(l_98, 1);
      o_98 = ATgetArgument(l_98, 2);
      {
        ATerm s_98 = NULL;
        ATerm t_98 = NULL;
        t = not_null(o_98);
        {
          t = map_1(t, MsgR_0);
          {
            t = concat_0(t);
            {
              t_98 = t;
              if(((s_98 != NULL) && (s_98 != t_98)))
                _fail(t_98);
              else
                s_98 = t_98;
            }
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(s_98)), term_m_24), not_null(m_98)), term_j_24);
      }
    }
  else
    {
      if(match_cons(l_98, sym_SDef_3))
        {
          m_98 = ATgetArgument(l_98, 0);
          n_98 = ATgetArgument(l_98, 1);
          o_98 = ATgetArgument(l_98, 2);
          {
            ATerm x_98 = NULL;
            ATerm y_98 = NULL;
            t = not_null(o_98);
            {
              t = map_1(t, MsgS_0);
              {
                t = concat_0(t);
                {
                  y_98 = t;
                  if(((x_98 != NULL) && (x_98 != y_98)))
                    _fail(y_98);
                  else
                    x_98 = y_98;
                }
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(x_98)), term_m_24), not_null(m_98)), term_n_24);
          }
        }
      else
        {
          if(match_cons(l_98, sym_RDef_3))
            {
              m_98 = ATgetArgument(l_98, 0);
              n_98 = ATgetArgument(l_98, 1);
              o_98 = ATgetArgument(l_98, 2);
              {
                ATerm c_99 = NULL;
                ATerm d_99 = NULL;
                t = not_null(o_98);
                {
                  t = map_1(t, MsgR_0);
                  {
                    t = concat_0(t);
                    {
                      d_99 = t;
                      if(((c_99 != NULL) && (c_99 != d_99)))
                        _fail(d_99);
                      else
                        c_99 = d_99;
                    }
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_99)), term_m_24), not_null(m_98)), term_o_24);
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
ATerm _3 (ATerm t, ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm f_70 (ATerm))
{
  ATerm s_99 = NULL,t_99 = NULL,a_100 = NULL,b_100 = NULL;
  s_99 = t;
  q_99 :
  if(match_cons(s_99, sym__3))
    {
      t_99 = ATgetArgument(s_99, 0);
      a_100 = ATgetArgument(s_99, 1);
      b_100 = ATgetArgument(s_99, 2);
      {
        ATerm h_100 = NULL,j_100 = NULL;
        ATerm i_100 = NULL;
        t = SSLgetAnnotations(not_null(s_99));
        {
          i_100 = t;
          if(((h_100 != NULL) && (h_100 != i_100)))
            _fail(i_100);
          else
            h_100 = i_100;
        }
        {
          t = not_null(t_99);
          {
            ATerm l_100 = NULL;
            t = d_70(t);
            {
              j_100 = t;
              {
                t = not_null(a_100);
                {
                  ATerm n_100 = NULL;
                  t = e_70(t);
                  {
                    l_100 = t;
                    {
                      t = not_null(b_100);
                      {
                        ATerm p_100 = NULL;
                        t = f_70(t);
                        {
                          n_100 = t;
                          {
                            ATerm q_100 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__3, not_null(j_100), not_null(l_100), not_null(n_100)), not_null(h_100));
                            {
                              q_100 = t;
                              if(((p_100 != NULL) && (p_100 != q_100)))
                                _fail(q_100);
                              else
                                p_100 = q_100;
                            }
                            t = not_null(p_100);
                          }
                        }
                      }
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
ATerm Overlay_3 (ATerm t, ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm k_78 (ATerm))
{
  ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL,h_101 = NULL;
  e_101 = t;
  d_101 :
  if(match_cons(e_101, sym_Overlay_3))
    {
      f_101 = ATgetArgument(e_101, 0);
      g_101 = ATgetArgument(e_101, 1);
      h_101 = ATgetArgument(e_101, 2);
      {
        ATerm o_101 = NULL,q_101 = NULL;
        ATerm p_101 = NULL;
        t = SSLgetAnnotations(not_null(e_101));
        {
          p_101 = t;
          if(((o_101 != NULL) && (o_101 != p_101)))
            _fail(p_101);
          else
            o_101 = p_101;
        }
        {
          t = not_null(f_101);
          {
            ATerm u_101 = NULL;
            t = i_78(t);
            {
              q_101 = t;
              {
                t = not_null(g_101);
                {
                  ATerm w_101 = NULL;
                  t = j_78(t);
                  {
                    u_101 = t;
                    {
                      t = not_null(h_101);
                      {
                        ATerm a_102 = NULL;
                        t = k_78(t);
                        {
                          w_101 = t;
                          {
                            ATerm b_102 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlay_3, not_null(q_101), not_null(u_101), not_null(w_101)), not_null(o_101));
                            {
                              b_102 = t;
                              if(((a_102 != NULL) && (a_102 != b_102)))
                                _fail(b_102);
                              else
                                a_102 = b_102;
                            }
                            t = not_null(a_102);
                          }
                        }
                      }
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
  ATerm r_102 = NULL;
  ATerm t_102 = NULL,u_102 = NULL,v_102 = NULL;
  r_102 = t;
  {
    ATerm w_102 = NULL;
    ATerm y_102 = NULL,z_102 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL,g_103 = NULL,h_103 = NULL;
    t = not_null(r_102);
    {
      w_102 = t;
      {
        t = SSL_explode_term(not_null(w_102));
        {
          y_102 = t;
          l_102 :
          if(match_cons(y_102, sym__2))
            {
              z_102 = ATgetArgument(y_102, 0);
              b_103 = ATgetArgument(y_102, 1);
              m_102 :
              if(match_string(z_102, ""))
                {
                  p_102 :
                  if(((ATgetType(b_103) == AT_LIST) && ((ATermList) b_103 != ATempty)))
                    {
                      c_103 = ATgetFirst((ATermList) b_103);
                      d_103 = (ATerm) ATgetNext((ATermList) b_103);
                      q_102 :
                      if(((ATgetType(d_103) == AT_LIST) && ((ATermList) d_103 != ATempty)))
                        {
                          g_103 = ATgetFirst((ATermList) d_103);
                          h_103 = (ATerm) ATgetNext((ATermList) d_103);
                          {
                            if(((t_102 != NULL) && (t_102 != c_103)))
                              _fail(c_103);
                            else
                              t_102 = c_103;
                            {
                              if(((v_102 != NULL) && (v_102 != g_103)))
                                _fail(g_103);
                              else
                                v_102 = g_103;
                              if(((u_102 != NULL) && (u_102 != h_103)))
                                _fail(h_103);
                              else
                                u_102 = h_103;
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
    t = not_null(v_102);
  }
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm o_103 = NULL;
  o_103 = t;
  t = SSL_explode_term(not_null(o_103));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  {
    t = Snd_0(t);
    {
      ATerm a_4 (ATerm t)
      {
        t = (ATerm) ATinsert(ATempty, term_p_24);
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = cart_1(t, Union_0);
        return(t);
      }
      t = foldr_2(t, a_4, b_4);
    }
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL;
  b_104 = t;
  w_103 :
  if(match_cons(b_104, sym__2))
    {
      c_104 = ATgetArgument(b_104, 0);
      g_104 = ATgetArgument(b_104, 1);
      z_103 :
      if(match_cons(c_104, sym__3))
        {
          d_104 = ATgetArgument(c_104, 0);
          e_104 = ATgetArgument(c_104, 1);
          f_104 = ATgetArgument(c_104, 2);
          a_104 :
          if(match_cons(g_104, sym__3))
            {
              h_104 = ATgetArgument(g_104, 0);
              i_104 = ATgetArgument(g_104, 1);
              j_104 = ATgetArgument(g_104, 2);
              {
                ATerm q_104 = NULL,u_104 = NULL,w_104 = NULL;
                ATerm q_24;
                q_24 = t;
                {
                  ATerm r_104 = NULL,t_104 = NULL;
                  ATerm s_104 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_104), not_null(e_104));
                  {
                    t = diff_0(t);
                    {
                      s_104 = t;
                      if(((r_104 != NULL) && (r_104 != s_104)))
                        _fail(s_104);
                      else
                        r_104 = s_104;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_104), not_null(r_104));
                    {
                      t = union_0(t);
                      {
                        t_104 = t;
                        if(((q_104 != NULL) && (q_104 != t_104)))
                          _fail(t_104);
                        else
                          q_104 = t_104;
                      }
                    }
                  }
                }
                t = q_24;
                {
                  ATerm r_24;
                  r_24 = t;
                  {
                    ATerm v_104 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_104), not_null(i_104));
                    {
                      t = union_0(t);
                      {
                        v_104 = t;
                        if(((u_104 != NULL) && (u_104 != v_104)))
                          _fail(v_104);
                        else
                          u_104 = v_104;
                      }
                    }
                  }
                  t = r_24;
                  {
                    ATerm x_104 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_104), not_null(j_104));
                    {
                      t = union_0(t);
                      {
                        x_104 = t;
                        if(((w_104 != NULL) && (w_104 != x_104)))
                          _fail(x_104);
                        else
                          w_104 = x_104;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(q_104), not_null(u_104), not_null(w_104));
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
  ATerm c_4 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_p_24);
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, c_4, d_4);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm k_105 = NULL,l_105 = NULL,m_105 = NULL,n_105 = NULL;
  k_105 = t;
  j_105 :
  if(match_cons(k_105, sym__3))
    {
      l_105 = ATgetArgument(k_105, 0);
      m_105 = ATgetArgument(k_105, 1);
      n_105 = ATgetArgument(k_105, 2);
      {
        ATerm r_105 = NULL,v_105 = NULL;
        ATerm s_24;
        s_24 = t;
        {
          ATerm s_105 = NULL,u_105 = NULL;
          ATerm t_105 = NULL;
          t = term_b_19;
          {
            t = x_81(t);
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
        t = s_24;
        {
          ATerm w_105 = NULL,c_106 = NULL;
          ATerm x_105 = NULL,b_106 = NULL;
          ATerm a_106 = NULL;
          t = term_b_19;
          {
            t = x_81(t);
            {
              a_106 = t;
              if(((x_105 != NULL) && (x_105 != a_106)))
                _fail(a_106);
              else
                x_105 = a_106;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_105), not_null(x_105));
            {
              t = isect_0(t);
              {
                b_106 = t;
                if(((w_105 != NULL) && (w_105 != b_106)))
                  _fail(b_106);
                else
                  w_105 = b_106;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_105), not_null(n_105));
            {
              t = conc_0(t);
              {
                c_106 = t;
                if(((v_105 != NULL) && (v_105 != c_106)))
                  _fail(c_106);
                else
                  v_105 = c_106;
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
ATerm Union_0 (ATerm t)
{
  ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL,t_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL,y_106 = NULL;
  q_106 = t;
  n_106 :
  if(match_cons(q_106, sym__2))
    {
      r_106 = ATgetArgument(q_106, 0);
      v_106 = ATgetArgument(q_106, 1);
      o_106 :
      if(match_cons(r_106, sym__3))
        {
          s_106 = ATgetArgument(r_106, 0);
          t_106 = ATgetArgument(r_106, 1);
          u_106 = ATgetArgument(r_106, 2);
          p_106 :
          if(match_cons(v_106, sym__3))
            {
              w_106 = ATgetArgument(v_106, 0);
              x_106 = ATgetArgument(v_106, 1);
              y_106 = ATgetArgument(v_106, 2);
              {
                ATerm f_107 = NULL,h_107 = NULL,j_107 = NULL;
                ATerm t_24;
                t_24 = t;
                {
                  ATerm g_107 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_106), not_null(w_106));
                  {
                    t = union_0(t);
                    {
                      g_107 = t;
                      if(((f_107 != NULL) && (f_107 != g_107)))
                        _fail(g_107);
                      else
                        f_107 = g_107;
                    }
                  }
                }
                t = t_24;
                {
                  ATerm x_24;
                  x_24 = t;
                  {
                    ATerm i_107 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_106), not_null(x_106));
                    {
                      t = union_0(t);
                      {
                        i_107 = t;
                        if(((h_107 != NULL) && (h_107 != i_107)))
                          _fail(i_107);
                        else
                          h_107 = i_107;
                      }
                    }
                  }
                  t = x_24;
                  {
                    ATerm k_107 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_106), not_null(y_106));
                    {
                      t = union_0(t);
                      {
                        k_107 = t;
                        if(((j_107 != NULL) && (j_107 != k_107)))
                          _fail(k_107);
                        else
                          j_107 = k_107;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(f_107), not_null(h_107), not_null(j_107));
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
ATerm cart_1 (ATerm t, ATerm r_99 (ATerm))
{
  ATerm v_107 = NULL,w_107 = NULL,x_107 = NULL;
  v_107 = t;
  u_107 :
  if(match_cons(v_107, sym__2))
    {
      w_107 = ATgetArgument(v_107, 0);
      x_107 = ATgetArgument(v_107, 1);
      {
        t = not_null(w_107);
        {
          ATerm e_4 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm f_4 (ATerm t)
          {
            ATerm a_108 = NULL;
            a_108 = t;
            {
              t = not_null(x_107);
              {
                ATerm g_4 (ATerm t)
                {
                  ATerm e_108 = NULL;
                  e_108 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_108), not_null(e_108));
                    t = r_99(t);
                  }
                  return(t);
                }
                t = map_1(t, g_4);
              }
            }
            return(t);
          }
          t = foldr_3(t, e_4, conc_0, f_4);
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
  ATerm a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL;
  c_109 = t;
  z_108 :
  if(match_cons(c_109, sym_GuardedLChoice_3))
    {
      d_109 = ATgetArgument(c_109, 0);
      b_109 = ATgetArgument(c_109, 1);
      a_109 = ATgetArgument(c_109, 2);
      {
        ATerm l_109 = NULL;
        ATerm m_109 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_109)), not_null(d_109));
        {
          t = seqs_join_0(t);
          {
            m_109 = t;
            if(((l_109 != NULL) && (l_109 != m_109)))
              _fail(m_109);
            else
              l_109 = m_109;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_109), not_null(a_109));
          t = cart_1(t, Union_0);
        }
      }
    }
  else
    {
      if(match_cons(c_109, sym_Overlay_3))
        {
          d_109 = ATgetArgument(c_109, 0);
          b_109 = ATgetArgument(c_109, 1);
          a_109 = ATgetArgument(c_109, 2);
          {
            ATerm q_109 = NULL;
            ATerm r_109 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_109)), (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(b_109), (ATerm) ATempty));
            {
              t = seqs_join_0(t);
              {
                r_109 = t;
                if(((q_109 != NULL) && (q_109 != r_109)))
                  _fail(r_109);
                else
                  q_109 = r_109;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(d_109), not_null(b_109), not_null(q_109));
          }
        }
      else
        {
          if(match_cons(c_109, sym_Scope_2))
            {
              d_109 = ATgetArgument(c_109, 0);
              b_109 = ATgetArgument(c_109, 1);
              {
                t = not_null(b_109);
                {
                  ATerm h_4 (ATerm t)
                  {
                    ATerm i_4 (ATerm t)
                    {
                      t = not_null(d_109);
                      return(t);
                    }
                    t = JoinScope_1(t, i_4);
                    return(t);
                  }
                  t = map_1(t, h_4);
                }
              }
            }
          else
            {
              if(match_cons(c_109, sym_Cong_2))
                {
                  d_109 = ATgetArgument(c_109, 0);
                  b_109 = ATgetArgument(c_109, 1);
                  {
                    t = not_null(b_109);
                    t = seqs_join_0(t);
                  }
                }
              else
                {
                  if(match_cons(c_109, sym_BAM_3))
                    {
                      d_109 = ATgetArgument(c_109, 0);
                      b_109 = ATgetArgument(c_109, 1);
                      a_109 = ATgetArgument(c_109, 2);
                      {
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_109)), not_null(d_109)), not_null(b_109));
                        t = seqs_join_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(c_109, sym_BA_2))
                        {
                          d_109 = ATgetArgument(c_109, 0);
                          b_109 = ATgetArgument(c_109, 1);
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_109)), not_null(b_109));
                            t = seqs_join_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(c_109, sym_AM_2))
                            {
                              d_109 = ATgetArgument(c_109, 0);
                              b_109 = ATgetArgument(c_109, 1);
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_109)), not_null(d_109));
                                t = seqs_join_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(c_109, sym_MA_2))
                                {
                                  d_109 = ATgetArgument(c_109, 0);
                                  b_109 = ATgetArgument(c_109, 1);
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_109)), not_null(d_109));
                                    t = seqs_join_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(c_109, sym_StratRule_3))
                                    {
                                      d_109 = ATgetArgument(c_109, 0);
                                      b_109 = ATgetArgument(c_109, 1);
                                      a_109 = ATgetArgument(c_109, 2);
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_109)), not_null(a_109)), not_null(d_109));
                                        t = seqs_join_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(c_109, sym_Rule_3))
                                        {
                                          d_109 = ATgetArgument(c_109, 0);
                                          b_109 = ATgetArgument(c_109, 1);
                                          a_109 = ATgetArgument(c_109, 2);
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_109)), not_null(a_109)), not_null(d_109));
                                            t = seqs_join_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(c_109, sym_Seq_2))
                                            {
                                              d_109 = ATgetArgument(c_109, 0);
                                              b_109 = ATgetArgument(c_109, 1);
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_109)), not_null(d_109));
                                                t = seqs_join_0(t);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(c_109, sym_Seqs_1))
                                                {
                                                  d_109 = ATgetArgument(c_109, 0);
                                                  {
                                                    t = not_null(d_109);
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
ATerm Cong_2 (ATerm t, ATerm p_80 (ATerm), ATerm q_80 (ATerm))
{
  ATerm t_111 = NULL,u_111 = NULL,v_111 = NULL;
  t_111 = t;
  s_111 :
  if(match_cons(t_111, sym_Cong_2))
    {
      u_111 = ATgetArgument(t_111, 0);
      v_111 = ATgetArgument(t_111, 1);
      {
        ATerm z_111 = NULL,b_112 = NULL;
        ATerm a_112 = NULL;
        t = SSLgetAnnotations(not_null(t_111));
        {
          a_112 = t;
          if(((z_111 != NULL) && (z_111 != a_112)))
            _fail(a_112);
          else
            z_111 = a_112;
        }
        {
          t = not_null(u_111);
          {
            ATerm d_112 = NULL;
            t = p_80(t);
            {
              b_112 = t;
              {
                t = not_null(v_111);
                {
                  ATerm f_112 = NULL;
                  t = q_80(t);
                  {
                    d_112 = t;
                    {
                      ATerm g_112 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(b_112), not_null(d_112)), not_null(z_111));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm use_term_0 (ATerm t)
{
  ATerm n_112 = NULL;
  ATerm o_112 = NULL;
  t = tvars_0(t);
  {
    o_112 = t;
    if(((n_112 != NULL) && (n_112 != o_112)))
      _fail(o_112);
    else
      n_112 = o_112;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, not_null(n_112), (ATerm)ATempty, (ATerm) ATempty));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm r_112 = NULL;
  ATerm s_112 = NULL;
  t = tvars_0(t);
  {
    s_112 = t;
    if(((r_112 != NULL) && (r_112 != s_112)))
      _fail(s_112);
    else
      r_112 = s_112;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(r_112), (ATerm) ATempty));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm t_77 (ATerm), ATerm u_77 (ATerm), ATerm v_77 (ATerm))
{
  ATerm b_113 = NULL,c_113 = NULL,d_113 = NULL,e_113 = NULL;
  b_113 = t;
  a_113 :
  if(match_cons(b_113, sym_Rule_3))
    {
      c_113 = ATgetArgument(b_113, 0);
      d_113 = ATgetArgument(b_113, 1);
      e_113 = ATgetArgument(b_113, 2);
      {
        ATerm j_113 = NULL,l_113 = NULL;
        ATerm k_113 = NULL;
        t = SSLgetAnnotations(not_null(b_113));
        {
          k_113 = t;
          if(((j_113 != NULL) && (j_113 != k_113)))
            _fail(k_113);
          else
            j_113 = k_113;
        }
        {
          t = not_null(c_113);
          {
            ATerm n_113 = NULL;
            t = t_77(t);
            {
              l_113 = t;
              {
                t = not_null(d_113);
                {
                  ATerm p_113 = NULL;
                  t = u_77(t);
                  {
                    n_113 = t;
                    {
                      t = not_null(e_113);
                      {
                        ATerm r_113 = NULL;
                        t = v_77(t);
                        {
                          p_113 = t;
                          {
                            ATerm s_113 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(l_113), not_null(n_113), not_null(p_113)), not_null(j_113));
                            {
                              s_113 = t;
                              if(((r_113 != NULL) && (r_113 != s_113)))
                                _fail(s_113);
                              else
                                r_113 = s_113;
                            }
                            t = not_null(r_113);
                          }
                        }
                      }
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
ATerm BAM_3 (ATerm t, ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm z_76 (ATerm))
{
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL;
  g_114 = t;
  f_114 :
  if(match_cons(g_114, sym_BAM_3))
    {
      h_114 = ATgetArgument(g_114, 0);
      i_114 = ATgetArgument(g_114, 1);
      j_114 = ATgetArgument(g_114, 2);
      {
        ATerm o_114 = NULL,q_114 = NULL;
        ATerm p_114 = NULL;
        t = SSLgetAnnotations(not_null(g_114));
        {
          p_114 = t;
          if(((o_114 != NULL) && (o_114 != p_114)))
            _fail(p_114);
          else
            o_114 = p_114;
        }
        {
          t = not_null(h_114);
          {
            ATerm s_114 = NULL;
            t = x_76(t);
            {
              q_114 = t;
              {
                t = not_null(i_114);
                {
                  ATerm u_114 = NULL;
                  t = y_76(t);
                  {
                    s_114 = t;
                    {
                      t = not_null(j_114);
                      {
                        ATerm w_114 = NULL;
                        t = z_76(t);
                        {
                          u_114 = t;
                          {
                            ATerm x_114 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BAM_3, not_null(q_114), not_null(s_114), not_null(u_114)), not_null(o_114));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BA_2 (ATerm t, ATerm v_76 (ATerm), ATerm w_76 (ATerm))
{
  ATerm k_115 = NULL,l_115 = NULL,m_115 = NULL;
  k_115 = t;
  j_115 :
  if(match_cons(k_115, sym_BA_2))
    {
      l_115 = ATgetArgument(k_115, 0);
      m_115 = ATgetArgument(k_115, 1);
      {
        ATerm q_115 = NULL,s_115 = NULL;
        ATerm r_115 = NULL;
        t = SSLgetAnnotations(not_null(k_115));
        {
          r_115 = t;
          if(((q_115 != NULL) && (q_115 != r_115)))
            _fail(r_115);
          else
            q_115 = r_115;
        }
        {
          t = not_null(l_115);
          {
            ATerm u_115 = NULL;
            t = v_76(t);
            {
              s_115 = t;
              {
                t = not_null(m_115);
                {
                  ATerm w_115 = NULL;
                  t = w_76(t);
                  {
                    u_115 = t;
                    {
                      ATerm x_115 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BA_2, not_null(s_115), not_null(u_115)), not_null(q_115));
                      {
                        x_115 = t;
                        if(((w_115 != NULL) && (w_115 != x_115)))
                          _fail(x_115);
                        else
                          w_115 = x_115;
                      }
                      t = not_null(w_115);
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
ATerm AM_2 (ATerm t, ATerm t_76 (ATerm), ATerm u_76 (ATerm))
{
  ATerm j_116 = NULL,k_116 = NULL,l_116 = NULL;
  j_116 = t;
  i_116 :
  if(match_cons(j_116, sym_AM_2))
    {
      k_116 = ATgetArgument(j_116, 0);
      l_116 = ATgetArgument(j_116, 1);
      {
        ATerm p_116 = NULL,r_116 = NULL;
        ATerm q_116 = NULL;
        t = SSLgetAnnotations(not_null(j_116));
        {
          q_116 = t;
          if(((p_116 != NULL) && (p_116 != q_116)))
            _fail(q_116);
          else
            p_116 = q_116;
        }
        {
          t = not_null(k_116);
          {
            ATerm t_116 = NULL;
            t = t_76(t);
            {
              r_116 = t;
              {
                t = not_null(l_116);
                {
                  ATerm v_116 = NULL;
                  t = u_76(t);
                  {
                    t_116 = t;
                    {
                      ATerm w_116 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AM_2, not_null(r_116), not_null(t_116)), not_null(p_116));
                      {
                        w_116 = t;
                        if(((v_116 != NULL) && (v_116 != w_116)))
                          _fail(w_116);
                        else
                          v_116 = w_116;
                      }
                      t = not_null(v_116);
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
ATerm MA_2 (ATerm t, ATerm r_76 (ATerm), ATerm s_76 (ATerm))
{
  ATerm i_117 = NULL,j_117 = NULL,k_117 = NULL;
  i_117 = t;
  h_117 :
  if(match_cons(i_117, sym_MA_2))
    {
      j_117 = ATgetArgument(i_117, 0);
      k_117 = ATgetArgument(i_117, 1);
      {
        ATerm o_117 = NULL,q_117 = NULL;
        ATerm p_117 = NULL;
        t = SSLgetAnnotations(not_null(i_117));
        {
          p_117 = t;
          if(((o_117 != NULL) && (o_117 != p_117)))
            _fail(p_117);
          else
            o_117 = p_117;
        }
        {
          t = not_null(j_117);
          {
            ATerm s_117 = NULL;
            t = r_76(t);
            {
              q_117 = t;
              {
                t = not_null(k_117);
                {
                  ATerm u_117 = NULL;
                  t = s_76(t);
                  {
                    s_117 = t;
                    {
                      ATerm v_117 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MA_2, not_null(q_117), not_null(s_117)), not_null(o_117));
                      {
                        v_117 = t;
                        if(((u_117 != NULL) && (u_117 != v_117)))
                          _fail(v_117);
                        else
                          u_117 = v_117;
                      }
                      t = not_null(u_117);
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
ATerm Match_1 (ATerm t, ATerm x_80 (ATerm))
{
  ATerm g_118 = NULL,h_118 = NULL;
  g_118 = t;
  f_118 :
  if(match_cons(g_118, sym_Match_1))
    {
      h_118 = ATgetArgument(g_118, 0);
      {
        ATerm k_118 = NULL,m_118 = NULL;
        ATerm l_118 = NULL;
        t = SSLgetAnnotations(not_null(g_118));
        {
          l_118 = t;
          if(((k_118 != NULL) && (k_118 != l_118)))
            _fail(l_118);
          else
            k_118 = l_118;
        }
        {
          t = not_null(h_118);
          {
            ATerm o_118 = NULL;
            t = x_80(t);
            {
              m_118 = t;
              {
                ATerm p_118 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(m_118)), not_null(k_118));
                {
                  p_118 = t;
                  if(((o_118 != NULL) && (o_118 != p_118)))
                    _fail(p_118);
                  else
                    o_118 = p_118;
                }
                t = not_null(o_118);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1 (ATerm t, ATerm y_80 (ATerm))
{
  ATerm z_118 = NULL,a_119 = NULL;
  z_118 = t;
  y_118 :
  if(match_cons(z_118, sym_Build_1))
    {
      a_119 = ATgetArgument(z_118, 0);
      {
        ATerm d_119 = NULL,f_119 = NULL;
        ATerm e_119 = NULL;
        t = SSLgetAnnotations(not_null(z_118));
        {
          e_119 = t;
          if(((d_119 != NULL) && (d_119 != e_119)))
            _fail(e_119);
          else
            d_119 = e_119;
        }
        {
          t = not_null(a_119);
          {
            ATerm h_119 = NULL;
            t = y_80(t);
            {
              f_119 = t;
              {
                ATerm i_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(f_119)), not_null(d_119));
                {
                  i_119 = t;
                  if(((h_119 != NULL) && (h_119 != i_119)))
                    _fail(i_119);
                  else
                    h_119 = i_119;
                }
                t = not_null(h_119);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm y_24 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Build_1(t, use_term_0);
      LocalPopChoice(c_25);
    }
  else
    {
      t = y_24;
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Match_1(t, def_term_0);
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            {
              ATerm h_25 = t;
              int i_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MA_2(t, def_term_0, w_81);
                  LocalPopChoice(i_25);
                }
              else
                {
                  t = h_25;
                  {
                    ATerm j_25 = t;
                    int m_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AM_2(t, w_81, def_term_0);
                        LocalPopChoice(m_25);
                      }
                    else
                      {
                        t = j_25;
                        {
                          ATerm v_25 = t;
                          int w_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = BA_2(t, w_81, use_term_0);
                              LocalPopChoice(w_25);
                            }
                          else
                            {
                              t = v_25;
                              {
                                ATerm x_25 = t;
                                int d_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BAM_3(t, w_81, use_term_0, def_term_0);
                                    LocalPopChoice(d_26);
                                  }
                                else
                                  {
                                    t = x_25;
                                    {
                                      ATerm e_26 = t;
                                      int f_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Scope_2(t, _id, w_81);
                                          LocalPopChoice(f_26);
                                        }
                                      else
                                        {
                                          t = e_26;
                                          {
                                            ATerm g_26 = t;
                                            int h_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, w_81);
                                                LocalPopChoice(h_26);
                                              }
                                            else
                                              {
                                                t = g_26;
                                                {
                                                  ATerm i_26 = t;
                                                  int j_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      LocalPopChoice(j_26);
                                                    }
                                                  else
                                                    {
                                                      t = i_26;
                                                      {
                                                        ATerm j_4 (ATerm t)
                                                        {
                                                          t = map_1(t, w_81);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, j_4);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UDjoin_0(t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = m_26;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm))
{
  ATerm v_119 = NULL,w_119 = NULL,x_119 = NULL,y_119 = NULL;
  v_119 = t;
  u_119 :
  if(match_cons(v_119, sym_RDef_3))
    {
      w_119 = ATgetArgument(v_119, 0);
      x_119 = ATgetArgument(v_119, 1);
      y_119 = ATgetArgument(v_119, 2);
      {
        ATerm d_120 = NULL,f_120 = NULL;
        ATerm e_120 = NULL;
        t = SSLgetAnnotations(not_null(v_119));
        {
          e_120 = t;
          if(((d_120 != NULL) && (d_120 != e_120)))
            _fail(e_120);
          else
            d_120 = e_120;
        }
        {
          t = not_null(w_119);
          {
            ATerm h_120 = NULL;
            t = b_78(t);
            {
              f_120 = t;
              {
                t = not_null(x_119);
                {
                  ATerm j_120 = NULL;
                  t = c_78(t);
                  {
                    h_120 = t;
                    {
                      t = not_null(y_119);
                      {
                        ATerm l_120 = NULL;
                        t = d_78(t);
                        {
                          j_120 = t;
                          {
                            ATerm m_120 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(f_120), not_null(h_120), not_null(j_120)), not_null(d_120));
                            {
                              m_120 = t;
                              if(((l_120 != NULL) && (l_120 != m_120)))
                                _fail(m_120);
                              else
                                l_120 = m_120;
                            }
                            t = not_null(l_120);
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm))
{
  ATerm a_121 = NULL,b_121 = NULL,c_121 = NULL,d_121 = NULL;
  a_121 = t;
  z_120 :
  if(match_cons(a_121, sym_SDef_3))
    {
      b_121 = ATgetArgument(a_121, 0);
      c_121 = ATgetArgument(a_121, 1);
      d_121 = ATgetArgument(a_121, 2);
      {
        ATerm i_121 = NULL,k_121 = NULL;
        ATerm j_121 = NULL;
        t = SSLgetAnnotations(not_null(a_121));
        {
          j_121 = t;
          if(((i_121 != NULL) && (i_121 != j_121)))
            _fail(j_121);
          else
            i_121 = j_121;
        }
        {
          t = not_null(b_121);
          {
            ATerm m_121 = NULL;
            t = b_80(t);
            {
              k_121 = t;
              {
                t = not_null(c_121);
                {
                  ATerm o_121 = NULL;
                  t = c_80(t);
                  {
                    m_121 = t;
                    {
                      t = not_null(d_121);
                      {
                        ATerm q_121 = NULL;
                        t = d_80(t);
                        {
                          o_121 = t;
                          {
                            ATerm r_121 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(k_121), not_null(m_121), not_null(o_121)), not_null(i_121));
                            {
                              r_121 = t;
                              if(((q_121 != NULL) && (q_121 != r_121)))
                                _fail(r_121);
                              else
                                q_121 = r_121;
                            }
                            t = not_null(q_121);
                          }
                        }
                      }
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
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_4 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm x_26 = t;
          if((PushChoice() == 0))
            {
              ATerm l_4 (ATerm t)
              {
                t = _3(t, Nil_0, _id, Nil_0);
                return(t);
              }
              t = Cons_2(t, l_4, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_26;
            }
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, k_4);
      t = err_msg_0(t);
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm z_26 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm d_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_4 (ATerm t)
                    {
                      t = _3(t, Nil_0, _id, Nil_0);
                      return(t);
                    }
                    t = Cons_2(t, n_4, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_27;
                  }
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, m_4);
            t = err_msg_0(t);
            LocalPopChoice(c_27);
          }
        else
          {
            t = z_26;
            {
              t = Overlay_3(t, _id, _id, _id);
              {
                t = use_def_0(t);
                {
                  ATerm e_27 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm o_4 (ATerm t)
                      {
                        ATerm p_4 (ATerm t)
                        {
                          t = _3(t, Nil_0, Nil_0, Nil_0);
                          return(t);
                        }
                        t = Cons_2(t, p_4, Nil_0);
                        return(t);
                      }
                      t = Overlay_3(t, _id, _id, o_4);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = e_27;
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
  ATerm z_121 = NULL;
  t = filter_1(t, check_0);
  {
    z_121 = t;
    y_121 :
    if(((ATermList) z_121 == ATempty))
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
ATerm Overlays_1 (ATerm t, ATerm m_78 (ATerm))
{
  ATerm f_122 = NULL,g_122 = NULL;
  f_122 = t;
  e_122 :
  if(match_cons(f_122, sym_Overlays_1))
    {
      g_122 = ATgetArgument(f_122, 0);
      {
        ATerm j_122 = NULL,l_122 = NULL;
        ATerm k_122 = NULL;
        t = SSLgetAnnotations(not_null(f_122));
        {
          k_122 = t;
          if(((j_122 != NULL) && (j_122 != k_122)))
            _fail(k_122);
          else
            j_122 = k_122;
        }
        {
          t = not_null(g_122);
          {
            ATerm n_122 = NULL;
            t = m_78(t);
            {
              l_122 = t;
              {
                ATerm o_122 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(l_122)), not_null(j_122));
                {
                  o_122 = t;
                  if(((n_122 != NULL) && (n_122 != o_122)))
                    _fail(o_122);
                  else
                    n_122 = o_122;
                }
                t = not_null(n_122);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm l_78 (ATerm))
{
  ATerm y_122 = NULL,z_122 = NULL;
  y_122 = t;
  x_122 :
  if(match_cons(y_122, sym_Signature_1))
    {
      z_122 = ATgetArgument(y_122, 0);
      {
        ATerm c_123 = NULL,e_123 = NULL;
        ATerm d_123 = NULL;
        t = SSLgetAnnotations(not_null(y_122));
        {
          d_123 = t;
          if(((c_123 != NULL) && (c_123 != d_123)))
            _fail(d_123);
          else
            c_123 = d_123;
        }
        {
          t = not_null(z_122);
          {
            ATerm g_123 = NULL;
            t = l_78(t);
            {
              e_123 = t;
              {
                ATerm h_123 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(e_123)), not_null(c_123));
                {
                  h_123 = t;
                  if(((g_123 != NULL) && (g_123 != h_123)))
                    _fail(h_123);
                  else
                    g_123 = h_123;
                }
                t = not_null(g_123);
              }
            }
          }
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
  ATerm q_4 (ATerm t)
  {
    ATerm r_4 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm s_4 (ATerm t)
    {
      ATerm t_4 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm u_4 (ATerm t)
      {
        ATerm v_4 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, v_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, t_4, u_4);
      return(t);
    }
    t = Cons_2(t, r_4, s_4);
    return(t);
  }
  t = Specification_1(t, q_4);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm q_123 = NULL,r_123 = NULL,s_123 = NULL,t_123 = NULL,u_123 = NULL,v_123 = NULL,w_123 = NULL;
  q_123 = t;
  n_123 :
  if(match_cons(q_123, sym__2))
    {
      r_123 = ATgetArgument(q_123, 0);
      u_123 = ATgetArgument(q_123, 1);
      o_123 :
      if(match_cons(r_123, sym__2))
        {
          s_123 = ATgetArgument(r_123, 0);
          t_123 = ATgetArgument(r_123, 1);
          p_123 :
          if(match_cons(u_123, sym__2))
            {
              v_123 = ATgetArgument(u_123, 0);
              w_123 = ATgetArgument(u_123, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_123)), not_null(s_123)), (ATerm) ATinsert(CheckATermList(not_null(w_123)), not_null(t_123)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm e_124 = NULL,f_124 = NULL,g_124 = NULL;
  e_124 = t;
  d_124 :
  if(((ATgetType(e_124) == AT_LIST) && ((ATermList) e_124 != ATempty)))
    {
      f_124 = ATgetFirst((ATermList) e_124);
      g_124 = (ATerm) ATgetNext((ATermList) e_124);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_124), not_null(g_124));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm m_124 = NULL;
  m_124 = t;
  l_124 :
  if(((ATermList) m_124 == ATempty))
    {
      t = term_f_27;
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
  ATerm w_4 (ATerm t)
  {
    ATerm p_124 = NULL;
    p_124 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_124));
    return(t);
  }
  t = map_1(t, w_4);
  return(t);
}
ATerm isect_1 (ATerm t, ATerm i_97 (ATerm))
{
  ATerm w_124 = NULL,x_124 = NULL,y_124 = NULL;
  w_124 = t;
  v_124 :
  if(match_cons(w_124, sym__2))
    {
      x_124 = ATgetArgument(w_124, 0);
      y_124 = ATgetArgument(w_124, 1);
      {
        t = not_null(x_124);
        {
          ATerm g_125 (ATerm t)
          {
            ATerm g_27 = t;
            int h_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(h_27);
              }
            else
              {
                t = g_27;
                {
                  ATerm i_27 = t;
                  int j_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_27;
                      k_27 = t;
                      {
                        ATerm x_4 (ATerm t)
                        {
                          t = not_null(y_124);
                          return(t);
                        }
                        t = HdMember_p__2(t, i_97, x_4);
                      }
                      t = k_27;
                      t = Cons_2(t, _id, g_125);
                      LocalPopChoice(j_27);
                    }
                  else
                    {
                      t = i_27;
                      {
                        ATerm b_125 = NULL,c_125 = NULL,d_125 = NULL;
                        b_125 = t;
                        u_124 :
                        if(((ATgetType(b_125) == AT_LIST) && ((ATermList) b_125 != ATempty)))
                          {
                            c_125 = ATgetFirst((ATermList) b_125);
                            d_125 = (ATerm) ATgetNext((ATermList) b_125);
                            {
                              t = not_null(d_125);
                              t = g_125(t);
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
          t = g_125(t);
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
  ATerm c_126 = NULL,d_126 = NULL,e_126 = NULL,f_126 = NULL,g_126 = NULL,h_126 = NULL,i_126 = NULL,j_126 = NULL,k_126 = NULL;
  ATerm s_127 (ATerm t)
  {
    ATerm q_126 = NULL,r_126 = NULL,s_126 = NULL,e_127 = NULL;
    ATerm l_27;
    l_27 = t;
    {
      ATerm t_126 = NULL,v_126 = NULL,x_126 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_126), term_n_27);
      {
        ATerm o_27 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_27;
          }
        {
          ATerm p_27;
          p_27 = t;
          {
            ATerm u_126 = NULL;
            t = term_b_19;
            {
              t = q_0(t);
              {
                u_126 = t;
                if(((t_126 != NULL) && (t_126 != u_126)))
                  _fail(u_126);
                else
                  t_126 = u_126;
              }
            }
          }
          t = p_27;
          {
            ATerm w_126 = NULL;
            t = not_null(g_126);
            {
              t = tvars_0(t);
              {
                w_126 = t;
                if(((v_126 != NULL) && (v_126 != w_126)))
                  _fail(w_126);
                else
                  v_126 = w_126;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_126), not_null(v_126));
              {
                t = isect_0(t);
                {
                  ATerm y_126 = NULL,a_127 = NULL,c_127 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    x_126 = t;
                    {
                      if(((q_126 != NULL) && (q_126 != x_126)))
                        _fail(x_126);
                      else
                        q_126 = x_126;
                      {
                        ATerm q_27;
                        q_27 = t;
                        {
                          ATerm z_126 = NULL;
                          t = term_b_19;
                          {
                            t = q_0(t);
                            {
                              z_126 = t;
                              if(((y_126 != NULL) && (y_126 != z_126)))
                                _fail(z_126);
                              else
                                y_126 = z_126;
                            }
                          }
                        }
                        t = q_27;
                        {
                          ATerm b_127 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_126), not_null(k_126));
                          {
                            t = tvars_0(t);
                            {
                              b_127 = t;
                              if(((a_127 != NULL) && (a_127 != b_127)))
                                _fail(b_127);
                              else
                                a_127 = b_127;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(y_126), not_null(a_127));
                            {
                              t = isect_0(t);
                              {
                                ATerm d_127 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  c_127 = t;
                                  {
                                    if(((r_126 != NULL) && (r_126 != c_127)))
                                      _fail(c_127);
                                    else
                                      r_126 = c_127;
                                    {
                                      t = new_0(t);
                                      {
                                        d_127 = t;
                                        if(((s_126 != NULL) && (s_126 != d_127)))
                                          _fail(d_127);
                                        else
                                          s_126 = d_127;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = l_27;
    {
      ATerm f_127 = NULL;
      t = not_null(d_126);
      {
        t = r_0(t);
        {
          f_127 = t;
          if(((e_127 != NULL) && (e_127 != f_127)))
            _fail(f_127);
          else
            e_127 = f_127;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(e_127), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_s_27, (ATerm) ATinsert(CheckATermList(not_null(r_126)), (ATerm) ATmakeAppl(sym_Str_1, not_null(s_126))))), (ATerm) ATmakeAppl(sym_Op_2, term_r_27, not_null(q_126)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(d_126), not_null(e_126), (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_126), not_null(h_126), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_u_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(d_126))))), (ATerm)ATmakeAppl(sym_Op_2, term_r_27, not_null(q_126)), (ATerm) ATmakeAppl(sym_Op_2, term_s_27, (ATerm) ATinsert(CheckATermList(not_null(r_126)), (ATerm) ATmakeAppl(sym_Str_1, not_null(s_126))))), not_null(k_126)))));
    }
    return(t);
  }
  ATerm t_127 (ATerm t)
  {
    ATerm k_127 = NULL,q_127 = NULL;
    ATerm v_27;
    v_27 = t;
    {
      ATerm l_127 = NULL,n_127 = NULL,p_127 = NULL;
      ATerm w_27;
      w_27 = t;
      {
        ATerm m_127 = NULL;
        t = term_b_19;
        {
          t = q_0(t);
          {
            m_127 = t;
            if(((l_127 != NULL) && (l_127 != m_127)))
              _fail(m_127);
            else
              l_127 = m_127;
          }
        }
      }
      t = w_27;
      {
        ATerm o_127 = NULL;
        t = not_null(g_126);
        {
          t = tvars_0(t);
          {
            o_127 = t;
            if(((n_127 != NULL) && (n_127 != o_127)))
              _fail(o_127);
            else
              n_127 = o_127;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_127), not_null(n_127));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                p_127 = t;
                if(((k_127 != NULL) && (k_127 != p_127)))
                  _fail(p_127);
                else
                  k_127 = p_127;
              }
            }
          }
        }
      }
    }
    t = v_27;
    {
      ATerm r_127 = NULL;
      t = not_null(d_126);
      {
        t = r_0(t);
        {
          r_127 = t;
          if(((q_127 != NULL) && (q_127 != r_127)))
            _fail(r_127);
          else
            q_127 = r_127;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(q_127), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, term_n_27), (ATerm) ATmakeAppl(sym_Op_2, term_r_27, not_null(k_127)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(d_126), not_null(e_126), (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_126), term_x_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_u_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(d_126))))), (ATerm)ATmakeAppl(sym_Op_2, term_r_27, not_null(k_127)), term_n_27), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_126), term_i_13)))));
    }
    return(t);
  }
  c_126 = t;
  w_125 :
  if(match_cons(c_126, sym_RDef_3))
    {
      d_126 = ATgetArgument(c_126, 0);
      e_126 = ATgetArgument(c_126, 1);
      f_126 = ATgetArgument(c_126, 2);
      x_125 :
      if(match_cons(f_126, sym_Rule_3))
        {
          g_126 = ATgetArgument(f_126, 0);
          h_126 = ATgetArgument(f_126, 1);
          k_126 = ATgetArgument(f_126, 2);
          y_125 :
          if(match_cons(h_126, sym_Op_2))
            {
              i_126 = ATgetArgument(h_126, 0);
              j_126 = ATgetArgument(h_126, 1);
              z_125 :
              if(((ATermList) j_126 == ATempty))
                {
                  a_126 :
                  if(match_string(i_126, "Undefined"))
                    {
                      ATerm y_27 = t;
                      int z_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_127(t);
                          LocalPopChoice(z_27);
                        }
                      else
                        {
                          t = y_27;
                          t = t_127(t);
                        }
                    }
                  else
                    {
                      t = s_127(t);
                    }
                }
              else
                {
                  b_126 :
                  t = s_127(t);
                }
            }
          else
            {
              t = s_127(t);
            }
        }
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
  ATerm m_128 = NULL,n_128 = NULL,o_128 = NULL,p_128 = NULL;
  m_128 = t;
  k_128 :
  if(match_cons(m_128, sym__2))
    {
      n_128 = ATgetArgument(m_128, 0);
      p_128 = ATgetArgument(m_128, 1);
      l_128 :
      if(match_cons(n_128, sym_OverrideDynamicRules_1))
        {
          o_128 = ATgetArgument(n_128, 0);
          {
            t = not_null(o_128);
            {
              ATerm y_4 (ATerm t)
              {
                ATerm z_4 (ATerm t)
                {
                  t = not_null(p_128);
                  return(t);
                }
                ATerm a_5 (ATerm t)
                {
                  ATerm s_128 = NULL;
                  s_128 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(s_128)))));
                  return(t);
                }
                t = SplitDynamicRule_2(t, z_4, a_5);
                return(t);
              }
              t = map_1(t, y_4);
              t = unzip_0(t);
            }
          }
        }
      else
        {
          if(match_cons(n_128, sym_DynamicRules_1))
            {
              o_128 = ATgetArgument(n_128, 0);
              {
                t = not_null(o_128);
                {
                  ATerm b_5 (ATerm t)
                  {
                    ATerm c_5 (ATerm t)
                    {
                      t = not_null(p_128);
                      return(t);
                    }
                    ATerm d_5 (ATerm t)
                    {
                      ATerm w_128 = NULL;
                      w_128 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_d_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(w_128)))));
                      return(t);
                    }
                    t = SplitDynamicRule_2(t, c_5, d_5);
                    return(t);
                  }
                  t = map_1(t, b_5);
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
ATerm dist_scope_1 (ATerm t, ATerm s_110 (ATerm))
{
  ATerm h_129 = NULL,i_129 = NULL,j_129 = NULL,k_129 = NULL,l_129 = NULL;
  h_129 = t;
  f_129 :
  if(match_cons(h_129, sym__2))
    {
      i_129 = ATgetArgument(h_129, 0);
      l_129 = ATgetArgument(h_129, 1);
      g_129 :
      if(match_cons(i_129, sym_Scope_2))
        {
          j_129 = ATgetArgument(i_129, 0);
          k_129 = ATgetArgument(i_129, 1);
          {
            ATerm p_129 = NULL;
            ATerm q_129 = NULL,s_129 = NULL;
            ATerm r_129 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_129), not_null(l_129));
            {
              t = union_0(t);
              {
                r_129 = t;
                if(((q_129 != NULL) && (q_129 != r_129)))
                  _fail(r_129);
                else
                  q_129 = r_129;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_129), not_null(q_129));
              {
                t = s_110(t);
                {
                  s_129 = t;
                  if(((p_129 != NULL) && (p_129 != s_129)))
                    _fail(s_129);
                  else
                    p_129 = s_129;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_129), not_null(p_129));
          }
        }
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
ATerm one_dist_1 (ATerm t, ATerm f_103 (ATerm))
{
  ATerm z_129 = NULL,a_130 = NULL,b_130 = NULL;
  z_129 = t;
  y_129 :
  if(match_cons(z_129, sym__2))
    {
      a_130 = ATgetArgument(z_129, 0);
      b_130 = ATgetArgument(z_129, 1);
      {
        t = not_null(a_130);
        {
          ATerm e_5 (ATerm t)
          {
            ATerm e_130 = NULL;
            e_130 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_130), not_null(b_130));
              t = f_103(t);
            }
            return(t);
          }
          t = _one(t, e_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_oncetd_1 (ATerm t, ATerm x_103 (ATerm))
{
  ATerm i_130 (ATerm t)
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_103(t);
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = one_dist_1(t, i_130);
      }
    return(t);
  }
  t = i_130(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm p_130 = NULL,q_130 = NULL,r_130 = NULL;
  p_130 = t;
  o_130 :
  if(((ATgetType(p_130) == AT_LIST) && ((ATermList) p_130 != ATempty)))
    {
      q_130 = ATgetFirst((ATermList) p_130);
      r_130 = (ATerm) ATgetNext((ATermList) p_130);
      {
        ATerm u_130 = NULL,v_130 = NULL,w_130 = NULL,x_130 = NULL;
        ATerm y_130 = NULL;
        t = not_null(q_130);
        {
          ATerm c_131 = NULL;
          t = tvars_0(t);
          {
            y_130 = t;
            {
              if(((w_130 != NULL) && (w_130 != y_130)))
                _fail(y_130);
              else
                w_130 = y_130;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_130), not_null(w_130));
                {
                  ATerm f_131 (ATerm t)
                  {
                    ATerm f_5 (ATerm t)
                    {
                      ATerm g_28 = t;
                      int h_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = dist_scope_1(t, f_131);
                          LocalPopChoice(h_28);
                        }
                      else
                        {
                          t = g_28;
                          {
                            ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL;
                            t = split_dynamic_rules_0(t);
                            {
                              z_130 = t;
                              m_130 :
                              if(match_cons(z_130, sym__2))
                                {
                                  a_131 = ATgetArgument(z_130, 0);
                                  b_131 = ATgetArgument(z_130, 1);
                                  {
                                    if(((v_130 != NULL) && (v_130 != a_131)))
                                      _fail(a_131);
                                    else
                                      v_130 = a_131;
                                    {
                                      if(((u_130 != NULL) && (u_130 != b_131)))
                                        _fail(b_131);
                                      else
                                        u_130 = b_131;
                                      t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(v_130));
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
                    t = env_oncetd_1(t, f_5);
                    return(t);
                  }
                  t = f_131(t);
                  {
                    c_131 = t;
                    if(((x_130 != NULL) && (x_130 != c_131)))
                      _fail(c_131);
                    else
                      x_130 = c_131;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_130)), not_null(x_130)), not_null(r_130));
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
ATerm repeat_2 (ATerm t, ATerm f_109 (ATerm), ATerm g_109 (ATerm))
{
  ATerm i_131 (ATerm t)
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_109(t);
        t = i_131(t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = g_109(t);
      }
    return(t);
  }
  t = i_131(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm i_109 (ATerm))
{
  t = repeat_2(t, i_109, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm n_102 (ATerm))
{
  ATerm j_131 (ATerm t)
  {
    t = n_102(t);
    {
      ATerm k_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(l_28);
        }
      else
        {
          t = k_28;
          t = Cons_2(t, _id, j_131);
        }
    }
    return(t);
  }
  t = j_131(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, g_5);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm o_131 = NULL,p_131 = NULL,q_131 = NULL,r_131 = NULL,s_131 = NULL;
  q_131 = t;
  m_131 :
  if(match_cons(q_131, sym_DynRuleScope_2))
    {
      r_131 = ATgetArgument(q_131, 0);
      s_131 = ATgetArgument(q_131, 1);
      n_131 :
      if(((ATgetType(r_131) == AT_LIST) && ((ATermList) r_131 != ATempty)))
        {
          o_131 = ATgetFirst((ATermList) r_131);
          p_131 = (ATerm) ATgetNext((ATermList) r_131);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_n_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(p_131), not_null(s_131))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(o_131)))));
        }
      else
        {
          if(((ATermList) r_131 == ATempty))
            {
              t = not_null(s_131);
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
  ATerm h_5 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, h_5);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm j_5 (ATerm t)
    {
      ATerm k_5 (ATerm t)
      {
        ATerm l_5 (ATerm t)
        {
          ATerm m_5 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, m_5);
          return(t);
        }
        t = Cons_2(t, l_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, k_5);
      return(t);
    }
    t = Cons_2(t, _id, j_5);
    return(t);
  }
  t = Specification_1(t, i_5);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm c_132 = NULL,d_132 = NULL;
  c_132 = t;
  b_132 :
  if(match_cons(c_132, sym_ScopeDefault_1))
    {
      d_132 = ATgetArgument(c_132, 0);
      {
        ATerm f_132 = NULL;
        ATerm g_132 = NULL;
        t = not_null(d_132);
        {
          t = tvars_0(t);
          {
            g_132 = t;
            if(((f_132 != NULL) && (f_132 != g_132)))
              _fail(g_132);
            else
              f_132 = g_132;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_132), not_null(d_132));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm o_132 = NULL,p_132 = NULL;
  o_132 = t;
  n_132 :
  if(match_cons(o_132, sym_DynamicRules_1))
    {
      p_132 = ATgetArgument(o_132, 0);
      {
        ATerm s_132 = NULL,u_132 = NULL;
        ATerm t_132 = NULL;
        t = SSLgetAnnotations(not_null(o_132));
        {
          t_132 = t;
          if(((s_132 != NULL) && (s_132 != t_132)))
            _fail(t_132);
          else
            s_132 = t_132;
        }
        {
          t = not_null(p_132);
          {
            ATerm w_132 = NULL;
            t = e_78(t);
            {
              u_132 = t;
              {
                ATerm x_132 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(u_132)), not_null(s_132));
                {
                  x_132 = t;
                  if(((w_132 != NULL) && (w_132 != x_132)))
                    _fail(x_132);
                  else
                    w_132 = x_132;
                }
                t = not_null(w_132);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm b_81 (ATerm), ATerm c_81 (ATerm))
{
  ATerm i_133 = NULL,j_133 = NULL,k_133 = NULL;
  i_133 = t;
  h_133 :
  if(match_cons(i_133, sym_Scope_2))
    {
      j_133 = ATgetArgument(i_133, 0);
      k_133 = ATgetArgument(i_133, 1);
      {
        ATerm o_133 = NULL,q_133 = NULL;
        ATerm p_133 = NULL;
        t = SSLgetAnnotations(not_null(i_133));
        {
          p_133 = t;
          if(((o_133 != NULL) && (o_133 != p_133)))
            _fail(p_133);
          else
            o_133 = p_133;
        }
        {
          t = not_null(j_133);
          {
            ATerm s_133 = NULL;
            t = b_81(t);
            {
              q_133 = t;
              {
                t = not_null(k_133);
                {
                  ATerm u_133 = NULL;
                  t = c_81(t);
                  {
                    s_133 = t;
                    {
                      ATerm v_133 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(q_133), not_null(s_133)), not_null(o_133));
                      {
                        v_133 = t;
                        if(((u_133 != NULL) && (u_133 != v_133)))
                          _fail(v_133);
                        else
                          u_133 = v_133;
                      }
                      t = not_null(u_133);
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
ATerm tboundin_3 (ATerm t, ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm d_82 (ATerm))
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, d_82, b_82);
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      t = DynamicRules_1(t, b_82);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm d_134 = NULL,e_134 = NULL;
  d_134 = t;
  c_134 :
  if(match_cons(d_134, sym_DynamicRules_1))
    {
      e_134 = ATgetArgument(d_134, 0);
      {
        t = not_null(e_134);
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
  ATerm l_134 = NULL,m_134 = NULL,n_134 = NULL,o_134 = NULL,p_134 = NULL,q_134 = NULL;
  o_134 = t;
  j_134 :
  if(match_cons(o_134, sym_LRule_1))
    {
      p_134 = ATgetArgument(o_134, 0);
      k_134 :
      if(match_cons(p_134, sym_Rule_3))
        {
          l_134 = ATgetArgument(p_134, 0);
          m_134 = ATgetArgument(p_134, 1);
          n_134 = ATgetArgument(p_134, 2);
          {
            t = not_null(l_134);
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
      if(match_cons(o_134, sym_Scope_2))
        {
          p_134 = ATgetArgument(o_134, 0);
          q_134 = ATgetArgument(o_134, 1);
          t = not_null(p_134);
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
  ATerm a_135 = NULL,b_135 = NULL;
  a_135 = t;
  z_134 :
  if(match_cons(a_135, sym_Var_1))
    {
      b_135 = ATgetArgument(a_135, 0);
      t = (ATerm) ATinsert(ATempty, not_null(b_135));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_97 (ATerm))
{
  ATerm g_135 = NULL,h_135 = NULL,i_135 = NULL;
  g_135 = t;
  f_135 :
  if(match_cons(g_135, sym__2))
    {
      h_135 = ATgetArgument(g_135, 0);
      i_135 = ATgetArgument(g_135, 1);
      {
        t = not_null(h_135);
        {
          ATerm m_135 (ATerm t)
          {
            ATerm q_28 = t;
            int r_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(i_135);
                LocalPopChoice(r_28);
              }
            else
              {
                t = q_28;
                {
                  ATerm s_28 = t;
                  int t_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_5 (ATerm t)
                      {
                        t = not_null(i_135);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_97, n_5);
                      t = m_135(t);
                      LocalPopChoice(t_28);
                    }
                  else
                    {
                      t = s_28;
                      t = Cons_2(t, _id, m_135);
                    }
                }
              }
            return(t);
          }
          t = m_135(t);
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
ATerm foldr_3 (ATerm t, ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm))
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_95(t);
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      {
        ATerm r_135 = NULL,s_135 = NULL,t_135 = NULL;
        r_135 = t;
        q_135 :
        if(((ATgetType(r_135) == AT_LIST) && ((ATermList) r_135 != ATempty)))
          {
            s_135 = ATgetFirst((ATermList) r_135);
            t_135 = (ATerm) ATgetNext((ATermList) r_135);
            {
              ATerm w_135 = NULL,y_135 = NULL;
              ATerm w_28;
              w_28 = t;
              {
                ATerm x_135 = NULL;
                t = not_null(s_135);
                {
                  t = w_95(t);
                  {
                    x_135 = t;
                    if(((w_135 != NULL) && (w_135 != x_135)))
                      _fail(x_135);
                    else
                      w_135 = x_135;
                  }
                }
              }
              t = w_28;
              {
                ATerm z_135 = NULL;
                t = not_null(t_135);
                {
                  t = foldr_3(t, u_95, v_95, w_95);
                  {
                    z_135 = t;
                    if(((y_135 != NULL) && (y_135 != z_135)))
                      _fail(z_135);
                    else
                      y_135 = z_135;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_135), not_null(y_135));
                  t = v_95(t);
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
ATerm crush_3 (ATerm t, ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm))
{
  ATerm h_136 = NULL;
  ATerm j_136 = NULL;
  h_136 = t;
  {
    ATerm k_136 = NULL;
    ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL;
    t = not_null(h_136);
    {
      k_136 = t;
      {
        t = SSL_explode_term(not_null(k_136));
        {
          m_136 = t;
          g_136 :
          if(match_cons(m_136, sym__2))
            {
              n_136 = ATgetArgument(m_136, 0);
              o_136 = ATgetArgument(m_136, 1);
              if(((j_136 != NULL) && (j_136 != o_136)))
                _fail(o_136);
              else
                j_136 = o_136;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_136);
      t = foldr_3(t, m_97, n_97, o_97);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm v_136 = NULL,w_136 = NULL,x_136 = NULL,y_136 = NULL,z_136 = NULL;
  v_136 = t;
  t_136 :
  if(match_cons(v_136, sym__2))
    {
      w_136 = ATgetArgument(v_136, 0);
      x_136 = ATgetArgument(v_136, 1);
      u_136 :
      if(((ATgetType(x_136) == AT_LIST) && ((ATermList) x_136 != ATempty)))
        {
          y_136 = ATgetFirst((ATermList) x_136);
          z_136 = (ATerm) ATgetNext((ATermList) x_136);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_136)), not_null(y_136)), not_null(z_136));
        }
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
  ATerm o_137 = NULL,p_137 = NULL,q_137 = NULL,r_137 = NULL,s_137 = NULL;
  o_137 = t;
  m_137 :
  if(((ATgetType(o_137) == AT_LIST) && ((ATermList) o_137 != ATempty)))
    {
      p_137 = ATgetFirst((ATermList) o_137);
      s_137 = (ATerm) ATgetNext((ATermList) o_137);
      n_137 :
      if(match_cons(p_137, sym__2))
        {
          q_137 = ATgetArgument(p_137, 0);
          r_137 = ATgetArgument(p_137, 1);
          {
            ATerm w_137 = NULL,x_137 = NULL,d_138 = NULL,j_138 = NULL;
            ATerm x_28;
            x_28 = t;
            {
              ATerm y_137 = NULL;
              ATerm a_138 = NULL,b_138 = NULL,c_138 = NULL;
              t = not_null(r_137);
              {
                y_137 = t;
                {
                  t = SSL_explode_term(not_null(y_137));
                  {
                    a_138 = t;
                    h_137 :
                    if(match_cons(a_138, sym__2))
                      {
                        b_138 = ATgetArgument(a_138, 0);
                        c_138 = ATgetArgument(a_138, 1);
                        {
                          if(((w_137 != NULL) && (w_137 != b_138)))
                            _fail(b_138);
                          else
                            w_137 = b_138;
                          if(((x_137 != NULL) && (x_137 != c_138)))
                            _fail(c_138);
                          else
                            x_137 = c_138;
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
              ATerm y_28;
              y_28 = t;
              {
                ATerm e_138 = NULL;
                ATerm g_138 = NULL,h_138 = NULL,i_138 = NULL;
                t = not_null(q_137);
                {
                  e_138 = t;
                  {
                    t = SSL_explode_term(not_null(e_138));
                    {
                      g_138 = t;
                      k_137 :
                      if(match_cons(g_138, sym__2))
                        {
                          h_138 = ATgetArgument(g_138, 0);
                          i_138 = ATgetArgument(g_138, 1);
                          {
                            if(((w_137 != NULL) && (w_137 != h_138)))
                              _fail(h_138);
                            else
                              w_137 = h_138;
                            if(((d_138 != NULL) && (d_138 != i_138)))
                              _fail(i_138);
                            else
                              d_138 = i_138;
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
              t = y_28;
              {
                ATerm k_138 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_138), not_null(x_137));
                {
                  t = zip_1(t, _id);
                  {
                    k_138 = t;
                    if(((j_138 != NULL) && (j_138 != k_138)))
                      _fail(k_138);
                    else
                      j_138 = k_138;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_138), not_null(s_137));
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
  ATerm u_138 = NULL,v_138 = NULL,w_138 = NULL,x_138 = NULL,y_138 = NULL;
  u_138 = t;
  s_138 :
  if(((ATgetType(u_138) == AT_LIST) && ((ATermList) u_138 != ATempty)))
    {
      v_138 = ATgetFirst((ATermList) u_138);
      y_138 = (ATerm) ATgetNext((ATermList) u_138);
      t_138 :
      if(match_cons(v_138, sym__2))
        {
          w_138 = ATgetArgument(v_138, 0);
          x_138 = ATgetArgument(v_138, 1);
          {
            ATerm a_139 = NULL;
            if(((w_138 != NULL) && (w_138 != x_138)))
              _fail(x_138);
            else
              w_138 = x_138;
            {
              if(((a_139 != NULL) && (a_139 != y_138)))
                _fail(y_138);
              else
                a_139 = y_138;
              t = not_null(a_139);
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
ATerm while_not_2 (ATerm t, ATerm w_109 (ATerm), ATerm x_109 (ATerm))
{
  ATerm c_139 (ATerm t)
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_109(t);
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        {
          t = x_109(t);
          t = c_139(t);
        }
      }
    return(t);
  }
  t = c_139(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm b_110 (ATerm))
{
  t = z_109(t);
  t = while_not_2(t, a_110, b_110);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm f_139 = NULL,g_139 = NULL,h_139 = NULL;
  f_139 = t;
  e_139 :
  if(match_cons(f_139, sym__2))
    {
      g_139 = ATgetArgument(f_139, 0);
      h_139 = ATgetArgument(f_139, 1);
      if(((g_139 != NULL) && (g_139 != h_139)))
        _fail(h_139);
      else
        g_139 = h_139;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm z_96 (ATerm), ATerm a_97 (ATerm))
{
  ATerm n_139 = NULL,o_139 = NULL,p_139 = NULL;
  n_139 = t;
  m_139 :
  if(((ATgetType(n_139) == AT_LIST) && ((ATermList) n_139 != ATempty)))
    {
      o_139 = ATgetFirst((ATermList) n_139);
      p_139 = (ATerm) ATgetNext((ATermList) n_139);
      {
        t = a_97(t);
        {
          ATerm o_5 (ATerm t)
          {
            ATerm s_139 = NULL;
            s_139 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_139), not_null(s_139));
              t = z_96(t);
            }
            return(t);
          }
          t = fetch_1(t, o_5);
        }
        t = not_null(p_139);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm e_97 (ATerm))
{
  ATerm y_139 = NULL,z_139 = NULL,a_140 = NULL;
  y_139 = t;
  x_139 :
  if(match_cons(y_139, sym__2))
    {
      z_139 = ATgetArgument(y_139, 0);
      a_140 = ATgetArgument(y_139, 1);
      {
        t = not_null(z_139);
        {
          ATerm e_140 (ATerm t)
          {
            ATerm b_29 = t;
            int c_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(c_29);
              }
            else
              {
                t = b_29;
                {
                  ATerm d_29 = t;
                  int e_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_5 (ATerm t)
                      {
                        t = not_null(a_140);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_97, p_5);
                      t = e_140(t);
                      LocalPopChoice(e_29);
                    }
                  else
                    {
                      t = d_29;
                      t = Cons_2(t, _id, e_140);
                    }
                }
              }
            return(t);
          }
          t = e_140(t);
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
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      {
        ATerm q_5 (ATerm t)
        {
          ATerm g_140 = NULL;
          g_140 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(g_140));
          return(t);
        }
        ATerm r_5 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm s_5 (ATerm t)
        {
          ATerm h_29 = t;
          int i_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_5 (ATerm t)
              {
                ATerm j_29 = t;
                int k_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(k_29);
                  }
                else
                  {
                    t = j_29;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, t_5);
              LocalPopChoice(i_29);
            }
          else
            {
              t = h_29;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, q_5, r_5, s_5);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm j_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm m_140 (ATerm t)
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_83(t);
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        {
          ATerm n_29 = t;
          int o_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_140 = NULL;
              ATerm p_29;
              p_29 = t;
              {
                ATerm l_140 = NULL;
                t = i_83(t);
                {
                  l_140 = t;
                  if(((k_140 != NULL) && (k_140 != l_140)))
                    _fail(l_140);
                  else
                    k_140 = l_140;
                }
              }
              t = p_29;
              {
                ATerm u_5 (ATerm t)
                {
                  ATerm w_5 (ATerm t)
                  {
                    t = not_null(k_140);
                    return(t);
                  }
                  t = split_2(t, m_140, w_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm v_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = j_83(t, u_5, m_140, v_5);
                {
                  ATerm x_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, x_5, union_0, _id);
                }
              }
              LocalPopChoice(o_29);
            }
          else
            {
              t = n_29;
              {
                ATerm y_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, y_5, union_0, m_140);
              }
            }
        }
      }
    return(t);
  }
  t = m_140(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, z_5, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm s_140 = NULL,t_140 = NULL,u_140 = NULL,v_140 = NULL,w_140 = NULL;
  s_140 = t;
  q_140 :
  if(match_cons(s_140, sym_LRule_1))
    {
      t_140 = ATgetArgument(s_140, 0);
      r_140 :
      if(match_cons(t_140, sym_Rule_3))
        {
          u_140 = ATgetArgument(t_140, 0);
          v_140 = ATgetArgument(t_140, 1);
          w_140 = ATgetArgument(t_140, 2);
          {
            ATerm a_141 = NULL;
            ATerm b_141 = NULL;
            t = not_null(u_140);
            {
              t = tvars_0(t);
              {
                b_141 = t;
                if(((a_141 != NULL) && (a_141 != b_141)))
                  _fail(b_141);
                else
                  a_141 = b_141;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_141), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_140), not_null(v_140), not_null(w_140))));
          }
        }
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
ATerm bottomup_1 (ATerm t, ATerm z_105 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    t = bottomup_1(t, z_105);
    return(t);
  }
  t = _all(t, a_6);
  t = z_105(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, c_6);
    return(t);
  }
  t = bottomup_1(t, b_6);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm g_141 = NULL,h_141 = NULL;
  g_141 = t;
  f_141 :
  if(match_cons(g_141, sym_Var_1))
    {
      h_141 = ATgetArgument(g_141, 0);
      t = not_null(h_141);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm n_141 = NULL,o_141 = NULL,p_141 = NULL,q_141 = NULL,r_141 = NULL;
  n_141 = t;
  l_141 :
  if(match_cons(n_141, sym__2))
    {
      o_141 = ATgetArgument(n_141, 0);
      p_141 = ATgetArgument(n_141, 1);
      m_141 :
      if(((ATgetType(p_141) == AT_LIST) && ((ATermList) p_141 != ATempty)))
        {
          q_141 = ATgetFirst((ATermList) p_141);
          r_141 = (ATerm) ATgetNext((ATermList) p_141);
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_141), not_null(r_141));
        }
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
  ATerm z_141 = NULL,a_142 = NULL,b_142 = NULL,c_142 = NULL,d_142 = NULL,e_142 = NULL,f_142 = NULL;
  z_141 = t;
  w_141 :
  if(match_cons(z_141, sym__2))
    {
      a_142 = ATgetArgument(z_141, 0);
      b_142 = ATgetArgument(z_141, 1);
      x_141 :
      if(((ATgetType(b_142) == AT_LIST) && ((ATermList) b_142 != ATempty)))
        {
          c_142 = ATgetFirst((ATermList) b_142);
          f_142 = (ATerm) ATgetNext((ATermList) b_142);
          y_141 :
          if(match_cons(c_142, sym__2))
            {
              d_142 = ATgetArgument(c_142, 0);
              e_142 = ATgetArgument(c_142, 1);
              {
                ATerm h_142 = NULL;
                if(((a_142 != NULL) && (a_142 != d_142)))
                  _fail(d_142);
                else
                  a_142 = d_142;
                {
                  if(((h_142 != NULL) && (h_142 != e_142)))
                    _fail(e_142);
                  else
                    h_142 = e_142;
                  t = not_null(h_142);
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
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm d_85 (ATerm), ATerm e_85 (ATerm))
{
  ATerm n_142 = NULL;
  ATerm p_142 = NULL,q_142 = NULL;
  n_142 = t;
  {
    ATerm r_142 = NULL;
    t = not_null(n_142);
    {
      ATerm s_142 = NULL;
      t = d_85(t);
      {
        r_142 = t;
        {
          if(((p_142 != NULL) && (p_142 != r_142)))
            _fail(r_142);
          else
            p_142 = r_142;
          {
            t = e_85(t);
            {
              s_142 = t;
              if(((q_142 != NULL) && (q_142 != s_142)))
                _fail(s_142);
              else
                q_142 = s_142;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_142), not_null(q_142));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm c_108 (ATerm))
{
  ATerm w_142 (ATerm t)
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_108(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = _all(t, w_142);
      }
    return(t);
  }
  t = w_142(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm z_142 = NULL,a_143 = NULL,b_143 = NULL;
  z_142 = t;
  y_142 :
  if(match_cons(z_142, sym__2))
    {
      a_143 = ATgetArgument(z_142, 0);
      b_143 = ATgetArgument(z_142, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_143)), not_null(a_143));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm j_143 = NULL,k_143 = NULL,l_143 = NULL,m_143 = NULL,n_143 = NULL,o_143 = NULL,p_143 = NULL;
  j_143 = t;
  g_143 :
  if(match_cons(j_143, sym__2))
    {
      k_143 = ATgetArgument(j_143, 0);
      n_143 = ATgetArgument(j_143, 1);
      h_143 :
      if(((ATgetType(k_143) == AT_LIST) && ((ATermList) k_143 != ATempty)))
        {
          l_143 = ATgetFirst((ATermList) k_143);
          m_143 = (ATerm) ATgetNext((ATermList) k_143);
          i_143 :
          if(((ATgetType(n_143) == AT_LIST) && ((ATermList) n_143 != ATempty)))
            {
              o_143 = ATgetFirst((ATermList) n_143);
              p_143 = (ATerm) ATgetNext((ATermList) n_143);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(l_143), not_null(o_143)), (ATerm) ATmakeAppl(sym__2, not_null(m_143), not_null(p_143)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm z_143 = NULL,a_144 = NULL,b_144 = NULL;
  z_143 = t;
  w_143 :
  if(match_cons(z_143, sym__2))
    {
      a_144 = ATgetArgument(z_143, 0);
      b_144 = ATgetArgument(z_143, 1);
      x_143 :
      if(((ATermList) a_144 == ATempty))
        {
          y_143 :
          if(((ATermList) b_144 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm x_99 (ATerm))
{
  ATerm d_144 (ATerm t)
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_99(t);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        {
          t = v_99(t);
          {
            t = _2(t, x_99, d_144);
            t = w_99(t);
          }
        }
      }
    return(t);
  }
  t = d_144(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm z_99 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, z_99);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm i_144 = NULL,j_144 = NULL,k_144 = NULL,l_144 = NULL;
  i_144 = t;
  h_144 :
  if(match_cons(i_144, sym__2))
    {
      j_144 = ATgetArgument(i_144, 0);
      k_144 = ATgetArgument(i_144, 1);
      {
        ATerm n_144 = NULL;
        if(((n_144 != NULL) && (n_144 != k_144)))
          _fail(k_144);
        else
          n_144 = k_144;
      }
    }
  else
    {
      if(match_cons(i_144, sym__3))
        {
          j_144 = ATgetArgument(i_144, 0);
          k_144 = ATgetArgument(i_144, 1);
          l_144 = ATgetArgument(i_144, 2);
          {
            ATerm t_144 = NULL;
            ATerm u_144 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_144), not_null(k_144));
            {
              t = zip_1(t, _id);
              {
                u_144 = t;
                if(((t_144 != NULL) && (t_144 != u_144)))
                  _fail(u_144);
                else
                  t_144 = u_144;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_144), not_null(l_144));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm f_85 (ATerm), ATerm g_85 (ATerm))
{
  ATerm a_145 = NULL,b_145 = NULL,c_145 = NULL;
  t = subs_args_0(t);
  {
    a_145 = t;
    z_144 :
    if(match_cons(a_145, sym__2))
      {
        b_145 = ATgetArgument(a_145, 0);
        c_145 = ATgetArgument(a_145, 1);
        {
          t = not_null(c_145);
          {
            ATerm d_6 (ATerm t)
            {
              ATerm e_6 (ATerm t)
              {
                t = not_null(b_145);
                return(t);
              }
              t = SubsVar_2(t, f_85, e_6);
              t = g_85(t);
              return(t);
            }
            t = alltd_1(t, d_6);
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
ATerm substitute_1 (ATerm t, ATerm h_85 (ATerm))
{
  t = substitute_2(t, h_85, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm j_145 = NULL,k_145 = NULL,l_145 = NULL,m_145 = NULL;
  j_145 = t;
  h_145 :
  if(match_cons(j_145, sym_OpDecl_2))
    {
      k_145 = ATgetArgument(j_145, 0);
      l_145 = ATgetArgument(j_145, 1);
      i_145 :
      if(match_cons(l_145, sym_ConstType_1))
        {
          m_145 = ATgetArgument(l_145, 0);
          t = not_null(k_145);
        }
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
  ATerm r_145 = NULL,s_145 = NULL;
  r_145 = t;
  q_145 :
  if(match_cons(r_145, sym_Constructors_1))
    {
      s_145 = ATgetArgument(r_145, 0);
      {
        t = not_null(s_145);
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
  ATerm y_145 = NULL,z_145 = NULL,b_146 = NULL,c_146 = NULL;
  y_145 = t;
  w_145 :
  if(match_cons(y_145, sym_Overlay_3))
    {
      z_145 = ATgetArgument(y_145, 0);
      b_146 = ATgetArgument(y_145, 1);
      c_146 = ATgetArgument(y_145, 2);
      x_145 :
      if(((ATermList) b_146 == ATempty))
        {
          t = not_null(z_145);
        }
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
  ATerm j_146 = NULL,k_146 = NULL;
  j_146 = t;
  i_146 :
  if(match_cons(j_146, sym_Overlays_1))
    {
      k_146 = ATgetArgument(j_146, 0);
      {
        t = not_null(k_146);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(j_146, sym_Signature_1))
        {
          k_146 = ATgetArgument(j_146, 0);
          {
            t = not_null(k_146);
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
ATerm filter_1 (ATerm t, ATerm y_94 (ATerm))
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      {
        ATerm c_30 = t;
        int d_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_6 (ATerm t)
            {
              t = filter_1(t, y_94);
              return(t);
            }
            t = Cons_2(t, y_94, f_6);
            LocalPopChoice(d_30);
          }
        else
          {
            t = c_30;
            {
              ATerm r_146 = NULL,s_146 = NULL,t_146 = NULL;
              r_146 = t;
              q_146 :
              if(((ATgetType(r_146) == AT_LIST) && ((ATermList) r_146 != ATempty)))
                {
                  s_146 = ATgetFirst((ATermList) r_146);
                  t_146 = (ATerm) ATgetNext((ATermList) r_146);
                  {
                    t = not_null(t_146);
                    t = filter_1(t, y_94);
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
  ATerm a_147 = NULL,g_147 = NULL;
  ATerm e_30;
  e_30 = t;
  {
    ATerm f_147 = NULL;
    t = const_names_0(t);
    {
      ATerm g_6 (ATerm t)
      {
        ATerm b_147 = NULL,d_147 = NULL;
        ATerm f_30;
        f_30 = t;
        {
          ATerm c_147 = NULL;
          c_147 = t;
          if(((b_147 != NULL) && (b_147 != c_147)))
            _fail(c_147);
          else
            b_147 = c_147;
        }
        t = f_30;
        {
          ATerm e_147 = NULL;
          e_147 = t;
          if(((d_147 != NULL) && (d_147 != e_147)))
            _fail(e_147);
          else
            d_147 = e_147;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_147), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_147), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, g_6);
      {
        f_147 = t;
        if(((a_147 != NULL) && (a_147 != f_147)))
          _fail(f_147);
        else
          a_147 = f_147;
      }
    }
  }
  t = e_30;
  {
    ATerm h_147 = NULL;
    h_147 = t;
    if(((g_147 != NULL) && (g_147 != h_147)))
      _fail(h_147);
    else
      g_147 = h_147;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_147), not_null(g_147));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm o_147 = NULL,p_147 = NULL,q_147 = NULL,r_147 = NULL;
  o_147 = t;
  n_147 :
  if(match_cons(o_147, sym__3))
    {
      p_147 = ATgetArgument(o_147, 0);
      q_147 = ATgetArgument(o_147, 1);
      r_147 = ATgetArgument(o_147, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(r_147))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(q_147))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(p_147))))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Combine_0 (ATerm t)
{
  ATerm d_148 = NULL,e_148 = NULL,f_148 = NULL,g_148 = NULL,h_148 = NULL,i_148 = NULL,j_148 = NULL,k_148 = NULL,l_148 = NULL;
  d_148 = t;
  a_148 :
  if(match_cons(d_148, sym__2))
    {
      e_148 = ATgetArgument(d_148, 0);
      i_148 = ATgetArgument(d_148, 1);
      b_148 :
      if(match_cons(e_148, sym__3))
        {
          f_148 = ATgetArgument(e_148, 0);
          g_148 = ATgetArgument(e_148, 1);
          h_148 = ATgetArgument(e_148, 2);
          c_148 :
          if(match_cons(i_148, sym__3))
            {
              j_148 = ATgetArgument(i_148, 0);
              k_148 = ATgetArgument(i_148, 1);
              l_148 = ATgetArgument(i_148, 2);
              {
                ATerm s_148 = NULL,u_148 = NULL,w_148 = NULL;
                ATerm g_30;
                g_30 = t;
                {
                  ATerm t_148 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_148), not_null(j_148));
                  {
                    t = conc_0(t);
                    {
                      t_148 = t;
                      if(((s_148 != NULL) && (s_148 != t_148)))
                        _fail(t_148);
                      else
                        s_148 = t_148;
                    }
                  }
                }
                t = g_30;
                {
                  ATerm h_30;
                  h_30 = t;
                  {
                    ATerm v_148 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_148), not_null(k_148));
                    {
                      t = conc_0(t);
                      {
                        v_148 = t;
                        if(((u_148 != NULL) && (u_148 != v_148)))
                          _fail(v_148);
                        else
                          u_148 = v_148;
                      }
                    }
                  }
                  t = h_30;
                  {
                    ATerm x_148 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_148), not_null(l_148));
                    {
                      t = conc_0(t);
                      {
                        x_148 = t;
                        if(((w_148 != NULL) && (w_148 != x_148)))
                          _fail(x_148);
                        else
                          w_148 = x_148;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(s_148), not_null(u_148), not_null(w_148));
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
  ATerm f_149 = NULL,g_149 = NULL;
  f_149 = t;
  e_149 :
  if(match_cons(f_149, sym_Sorts_1))
    {
      g_149 = ATgetArgument(f_149, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(f_149, sym_Constructors_1))
        {
          g_149 = ATgetArgument(f_149, 0);
          t = not_null(g_149);
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
  ATerm r_149 = NULL,s_149 = NULL;
  r_149 = t;
  q_149 :
  if(match_cons(r_149, sym_Overlays_1))
    {
      s_149 = ATgetArgument(r_149, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(s_149), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(r_149, sym_Rules_1))
        {
          s_149 = ATgetArgument(r_149, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(s_149));
        }
      else
        {
          if(match_cons(r_149, sym_Strategies_1))
            {
              s_149 = ATgetArgument(r_149, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(s_149));
            }
          else
            {
              if(match_cons(r_149, sym_Signature_1))
                {
                  s_149 = ATgetArgument(r_149, 0);
                  {
                    ATerm x_149 = NULL;
                    ATerm y_149 = NULL;
                    t = not_null(s_149);
                    {
                      t = normalize_sigs_0(t);
                      {
                        y_149 = t;
                        if(((x_149 != NULL) && (x_149 != y_149)))
                          _fail(y_149);
                        else
                          x_149 = y_149;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(x_149), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm g_150 = NULL,h_150 = NULL;
  g_150 = t;
  f_150 :
  if(match_cons(g_150, sym_Specification_1))
    {
      h_150 = ATgetArgument(g_150, 0);
      t = not_null(h_150);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm y_105 (ATerm))
{
  t = y_105(t);
  {
    ATerm h_6 (ATerm t)
    {
      t = topdown_1(t, y_105);
      return(t);
    }
    t = _all(t, h_6);
  }
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm j_6 (ATerm t)
    {
      ATerm m_150 = NULL,n_150 = NULL;
      m_150 = t;
      l_150 :
      if(match_cons(m_150, sym_DefaultVarDec_1))
        {
          n_150 = ATgetArgument(m_150, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(n_150), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_15), term_p_15));
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, j_6);
    return(t);
  }
  t = topdown_1(t, i_6);
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
        ATerm k_6 (ATerm t)
        {
          t = term_p_24;
          return(t);
        }
        t = foldr_2(t, k_6, Combine_0);
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
    ATerm i_30;
    i_30 = t;
    t = spec_use_def_0(t);
    t = i_30;
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
                ATerm l_6 (ATerm t)
                {
                  ATerm m_6 (ATerm t)
                  {
                    ATerm n_6 (ATerm t)
                    {
                      t = Strategies_1(t, desugar_spec_0);
                      return(t);
                    }
                    t = Cons_2(t, n_6, Nil_0);
                    return(t);
                  }
                  t = Cons_2(t, _id, m_6);
                  return(t);
                }
                t = Specification_1(t, l_6);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm b_70 (ATerm), ATerm c_70 (ATerm))
{
  ATerm w_150 = NULL,x_150 = NULL,y_150 = NULL;
  w_150 = t;
  v_150 :
  if(match_cons(w_150, sym__2))
    {
      x_150 = ATgetArgument(w_150, 0);
      y_150 = ATgetArgument(w_150, 1);
      {
        ATerm c_151 = NULL,e_151 = NULL;
        ATerm d_151 = NULL;
        t = SSLgetAnnotations(not_null(w_150));
        {
          d_151 = t;
          if(((c_151 != NULL) && (c_151 != d_151)))
            _fail(d_151);
          else
            c_151 = d_151;
        }
        {
          t = not_null(x_150);
          {
            ATerm g_151 = NULL;
            t = b_70(t);
            {
              e_151 = t;
              {
                t = not_null(y_150);
                {
                  ATerm i_151 = NULL;
                  t = c_70(t);
                  {
                    g_151 = t;
                    {
                      ATerm j_151 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_151), not_null(g_151)), not_null(c_151));
                      {
                        j_151 = t;
                        if(((i_151 != NULL) && (i_151 != j_151)))
                          _fail(j_151);
                        else
                          i_151 = j_151;
                      }
                      t = not_null(i_151);
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
  ATerm r_151 = NULL;
  ATerm j_30;
  j_30 = t;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm s_151 = NULL,t_151 = NULL;
      s_151 = t;
      q_151 :
      if(match_cons(s_151, sym_Program_1))
        {
          t_151 = ATgetArgument(s_151, 0);
          if(((r_151 != NULL) && (r_151 != t_151)))
            _fail(t_151);
          else
            r_151 = t_151;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, o_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_30), not_null(r_151)), term_k_30));
      {
        t = printnl_0(t);
        {
          t = term_k_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_151 = NULL,y_151 = NULL,z_151 = NULL;
  x_151 = t;
  w_151 :
  if(match_cons(x_151, sym__2))
    {
      y_151 = ATgetArgument(x_151, 0);
      z_151 = ATgetArgument(x_151, 1);
      {
        ATerm m_30;
        m_30 = t;
        t = SSL_printnl(not_null(y_151), not_null(z_151));
        t = m_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm i_152 = NULL;
  ATerm k_152 = NULL;
  i_152 = t;
  {
    ATerm l_152 = NULL;
    ATerm n_152 = NULL,o_152 = NULL,p_152 = NULL;
    t = not_null(i_152);
    {
      l_152 = t;
      {
        t = SSL_explode_term(not_null(l_152));
        {
          n_152 = t;
          g_152 :
          if(match_cons(n_152, sym__2))
            {
              o_152 = ATgetArgument(n_152, 0);
              p_152 = ATgetArgument(n_152, 1);
              h_152 :
              if(match_string(o_152, ""))
                {
                  if(((k_152 != NULL) && (k_152 != p_152)))
                    _fail(p_152);
                  else
                    k_152 = p_152;
                }
              else
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
      t = not_null(k_152);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_152 = NULL,w_152 = NULL,x_152 = NULL;
  v_152 = t;
  u_152 :
  if(match_cons(v_152, sym__2))
    {
      w_152 = ATgetArgument(v_152, 0);
      x_152 = ATgetArgument(v_152, 1);
      {
        t = not_null(w_152);
        {
          ATerm p_6 (ATerm t)
          {
            t = not_null(x_152);
            return(t);
          }
          t = at_end_1(t, p_6);
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
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      t = conc_more_lists_0(t);
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
ATerm debug_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm p_30;
  p_30 = t;
  {
    ATerm d_153 = NULL,f_153 = NULL;
    ATerm q_30;
    q_30 = t;
    {
      ATerm e_153 = NULL;
      t = r_91(t);
      {
        e_153 = t;
        if(((d_153 != NULL) && (d_153 != e_153)))
          _fail(e_153);
        else
          d_153 = e_153;
      }
    }
    t = q_30;
    {
      ATerm g_153 = NULL;
      g_153 = t;
      if(((f_153 != NULL) && (f_153 != g_153)))
        _fail(g_153);
      else
        f_153 = g_153;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_153)), not_null(d_153)));
        t = printnl_0(t);
      }
    }
  }
  t = p_30;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_153 = NULL;
  k_153 = t;
  t = SSL_is_string(not_null(k_153));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
      {
        ATerm t_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, q_6);
            LocalPopChoice(u_30);
          }
        else
          {
            t = t_30;
            {
              ATerm t_153 = NULL,u_153 = NULL,v_153 = NULL;
              t_153 = t;
              s_153 :
              if(match_cons(t_153, sym_Path_1))
                {
                  u_153 = ATgetArgument(t_153, 0);
                  t = not_null(u_153);
                }
              else
                {
                  if(match_cons(t_153, sym_Var_1))
                    {
                      u_153 = ATgetArgument(t_153, 0);
                      {
                        t = not_null(u_153);
                        {
                          ATerm v_30 = t;
                          int w_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_30);
                            }
                          else
                            {
                              t = v_30;
                              {
                                ATerm r_6 (ATerm t)
                                {
                                  t = term_x_30;
                                  return(t);
                                }
                                t = debug_1(t, r_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_153, sym_Prefix_2))
                        {
                          u_153 = ATgetArgument(t_153, 0);
                          v_153 = ATgetArgument(t_153, 1);
                          {
                            ATerm a_154 = NULL,c_154 = NULL;
                            ATerm y_30;
                            y_30 = t;
                            {
                              ATerm b_154 = NULL;
                              t = not_null(u_153);
                              {
                                t = eval_config_0(t);
                                {
                                  b_154 = t;
                                  if(((a_154 != NULL) && (a_154 != b_154)))
                                    _fail(b_154);
                                  else
                                    a_154 = b_154;
                                }
                              }
                            }
                            t = y_30;
                            {
                              ATerm d_154 = NULL;
                              t = not_null(v_153);
                              {
                                t = eval_config_0(t);
                                {
                                  d_154 = t;
                                  if(((c_154 != NULL) && (c_154 != d_154)))
                                    _fail(d_154);
                                  else
                                    c_154 = d_154;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_154), not_null(c_154));
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
  ATerm l_154 = NULL;
  l_154 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_30, not_null(l_154));
    {
      t = table_get_0(t);
      {
        ATerm s_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm a_31;
            a_31 = t;
            {
              ATerm n_154 = NULL;
              ATerm o_154 = NULL;
              o_154 = t;
              if(((n_154 != NULL) && (n_154 != o_154)))
                _fail(o_154);
              else
                n_154 = o_154;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_30, not_null(l_154), not_null(n_154));
                t = table_put_0(t);
              }
            }
            t = a_31;
          }
          return(t);
        }
        t = try_1(t, s_6);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm h_88 (ATerm))
{
  ATerm t_6 (ATerm t)
  {
    ATerm b_31;
    b_31 = t;
    {
      ATerm s_154 = NULL;
      ATerm t_154 = NULL;
      t = term_c_31;
      {
        t = get_config_0(t);
        {
          t_154 = t;
          if(((s_154 != NULL) && (s_154 != t_154)))
            _fail(t_154);
          else
            s_154 = t_154;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_154), term_d_31);
        t = geq_0(t);
      }
    }
    t = b_31;
    t = h_88(t);
    return(t);
  }
  t = try_1(t, t_6);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_154 = NULL,y_154 = NULL,z_154 = NULL;
  x_154 = t;
  w_154 :
  if(match_cons(x_154, sym__2))
    {
      y_154 = ATgetArgument(x_154, 0);
      z_154 = ATgetArgument(x_154, 1);
      t = SSL_WriteToTextFile(not_null(y_154), not_null(z_154));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm f_155 = NULL,g_155 = NULL,h_155 = NULL;
  f_155 = t;
  e_155 :
  if(match_cons(f_155, sym__2))
    {
      g_155 = ATgetArgument(f_155, 0);
      h_155 = ATgetArgument(f_155, 1);
      t = SSL_WriteToBinaryFile(not_null(g_155), not_null(h_155));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm p_155 = NULL;
  ATerm e_31;
  e_31 = t;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm f_31 = t;
      int g_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_6 (ATerm t)
          {
            ATerm q_155 = NULL,r_155 = NULL;
            q_155 = t;
            m_155 :
            if(match_cons(q_155, sym_Output_1))
              {
                r_155 = ATgetArgument(q_155, 0);
                if(((p_155 != NULL) && (p_155 != r_155)))
                  _fail(r_155);
                else
                  p_155 = r_155;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, v_6);
          LocalPopChoice(g_31);
        }
      else
        {
          t = f_31;
          {
            ATerm s_155 = NULL;
            t = term_h_31;
            {
              s_155 = t;
              if(((p_155 != NULL) && (p_155 != s_155)))
                _fail(s_155);
              else
                p_155 = s_155;
            }
          }
        }
      return(t);
    }
    t = _2(t, u_6, _id);
  }
  t = e_31;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm x_6 (ATerm t)
      {
        t = not_null(p_155);
        return(t);
      }
      t = split_2(t, x_6, _id);
      return(t);
    }
    t = _2(t, _id, w_6);
    {
      ATerm i_31 = t;
      int j_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_6 (ATerm t)
          {
            ATerm z_6 (ATerm t)
            {
              ATerm t_155 = NULL;
              t_155 = t;
              o_155 :
              if(!(match_cons(t_155, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, z_6);
            return(t);
          }
          t = _2(t, y_6, WriteToBinaryFile_0);
          LocalPopChoice(j_31);
        }
      else
        {
          t = i_31;
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
ATerm apply_strategy_1 (ATerm t, ATerm b_91 (ATerm))
{
  ATerm z_155 = NULL,b_156 = NULL,c_156 = NULL,d_156 = NULL;
  ATerm k_31;
  k_31 = t;
  t = dtime_0(t);
  t = k_31;
  {
    t = b_91(t);
    {
      ATerm l_31;
      l_31 = t;
      {
        ATerm a_156 = NULL;
        t = dtime_0(t);
        {
          a_156 = t;
          if(((z_155 != NULL) && (z_155 != a_156)))
            _fail(a_156);
          else
            z_155 = a_156;
        }
      }
      t = l_31;
      {
        b_156 = t;
        y_155 :
        if(match_cons(b_156, sym__2))
          {
            c_156 = ATgetArgument(b_156, 0);
            d_156 = ATgetArgument(b_156, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_156)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_155))), not_null(d_156));
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
  ATerm j_156 = NULL;
  j_156 = t;
  t = SSL_ReadFromFile(not_null(j_156));
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_94 (ATerm), ATerm h_94 (ATerm))
{
  ATerm o_156 = NULL,q_156 = NULL;
  ATerm m_31;
  m_31 = t;
  {
    ATerm p_156 = NULL;
    t = g_94(t);
    {
      p_156 = t;
      if(((o_156 != NULL) && (o_156 != p_156)))
        _fail(p_156);
      else
        o_156 = p_156;
    }
  }
  t = m_31;
  {
    ATerm r_156 = NULL;
    t = h_94(t);
    {
      r_156 = t;
      if(((q_156 != NULL) && (q_156 != r_156)))
        _fail(r_156);
      else
        q_156 = r_156;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_156), not_null(q_156));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_156 = NULL;
  ATerm n_31;
  n_31 = t;
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 (ATerm t)
        {
          ATerm y_156 = NULL,z_156 = NULL;
          y_156 = t;
          v_156 :
          if(match_cons(y_156, sym_Input_1))
            {
              z_156 = ATgetArgument(y_156, 0);
              if(((x_156 != NULL) && (x_156 != z_156)))
                _fail(z_156);
              else
                x_156 = z_156;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, a_7);
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        {
          ATerm a_157 = NULL;
          t = term_q_31;
          {
            a_157 = t;
            if(((x_156 != NULL) && (x_156 != a_157)))
              _fail(a_157);
            else
              x_156 = a_157;
          }
        }
      }
  }
  t = n_31;
  {
    ATerm b_7 (ATerm t)
    {
      t = not_null(x_156);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_7);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_157 = NULL;
  e_157 = t;
  t = SSL_string_to_int(not_null(e_157));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm m_157 = NULL,n_157 = NULL,o_157 = NULL,p_157 = NULL,q_157 = NULL;
  m_157 = t;
  k_157 :
  if(match_string(m_157, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(m_157) == AT_LIST) && ((ATermList) m_157 != ATempty)))
        {
          n_157 = ATgetFirst((ATermList) m_157);
          o_157 = (ATerm) ATgetNext((ATermList) m_157);
          l_157 :
          if(((ATgetType(o_157) == AT_LIST) && ((ATermList) o_157 != ATempty)))
            {
              p_157 = ATgetFirst((ATermList) o_157);
              q_157 = (ATerm) ATgetNext((ATermList) o_157);
              {
                ATerm u_157 = NULL;
                ATerm r_31;
                r_31 = t;
                {
                  t = not_null(n_157);
                  t = n_0(t);
                }
                t = r_31;
                {
                  ATerm v_157 = NULL;
                  t = not_null(p_157);
                  {
                    t = o_0(t);
                    {
                      v_157 = t;
                      if(((u_157 != NULL) && (u_157 != v_157)))
                        _fail(v_157);
                      else
                        u_157 = v_157;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_157)), not_null(u_157));
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
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_7 (ATerm t)
      {
        ATerm o_158 = NULL;
        o_158 = t;
        z_157 :
        if(!(match_string(o_158, "-i")))
          {
            if(!(match_string(o_158, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        ATerm r_158 = NULL;
        ATerm u_31;
        u_31 = t;
        {
          ATerm p_158 = NULL;
          ATerm q_158 = NULL;
          q_158 = t;
          if(((p_158 != NULL) && (p_158 != q_158)))
            _fail(q_158);
          else
            p_158 = q_158;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_v_31, not_null(p_158));
            t = set_config_0(t);
          }
        }
        t = u_31;
        {
          ATerm s_158 = NULL;
          s_158 = t;
          if(((r_158 != NULL) && (r_158 != s_158)))
            _fail(s_158);
          else
            r_158 = s_158;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_158));
        }
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        t = term_w_31;
        return(t);
      }
      t = ArgOption_3(t, c_7, d_7, e_7);
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      {
        ATerm x_31 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_7 (ATerm t)
            {
              ATerm t_158 = NULL;
              t_158 = t;
              c_158 :
              if(!(match_string(t_158, "-o")))
                {
                  if(!(match_string(t_158, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm g_7 (ATerm t)
            {
              ATerm w_158 = NULL;
              ATerm d_32;
              d_32 = t;
              {
                ATerm u_158 = NULL;
                ATerm v_158 = NULL;
                v_158 = t;
                if(((u_158 != NULL) && (u_158 != v_158)))
                  _fail(v_158);
                else
                  u_158 = v_158;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_32, not_null(u_158));
                  t = set_config_0(t);
                }
              }
              t = d_32;
              {
                ATerm x_158 = NULL;
                x_158 = t;
                if(((w_158 != NULL) && (w_158 != x_158)))
                  _fail(x_158);
                else
                  w_158 = x_158;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_158));
              }
              return(t);
            }
            ATerm h_7 (ATerm t)
            {
              t = term_i_32;
              return(t);
            }
            t = ArgOption_3(t, f_7, g_7, h_7);
            LocalPopChoice(c_32);
          }
        else
          {
            t = x_31;
            {
              ATerm k_32 = t;
              int l_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_7 (ATerm t)
                  {
                    ATerm y_158 = NULL;
                    y_158 = t;
                    f_158 :
                    if(!(match_string(y_158, "-S")))
                      {
                        if(!(match_string(y_158, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm j_7 (ATerm t)
                  {
                    t = term_m_32;
                    t = set_config_0(t);
                    t = term_n_32;
                    return(t);
                  }
                  ATerm k_7 (ATerm t)
                  {
                    t = term_o_32;
                    return(t);
                  }
                  t = Option_3(t, i_7, j_7, k_7);
                  LocalPopChoice(l_32);
                }
              else
                {
                  t = k_32;
                  {
                    ATerm p_32 = t;
                    int q_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_7 (ATerm t)
                        {
                          ATerm z_158 = NULL;
                          z_158 = t;
                          g_158 :
                          if(!(match_string(z_158, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm m_7 (ATerm t)
                        {
                          ATerm c_159 = NULL;
                          ATerm r_32;
                          r_32 = t;
                          {
                            ATerm a_159 = NULL;
                            ATerm b_159 = NULL;
                            t = string_to_int_0(t);
                            {
                              b_159 = t;
                              if(((a_159 != NULL) && (a_159 != b_159)))
                                _fail(b_159);
                              else
                                a_159 = b_159;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_c_31, not_null(a_159));
                              t = set_config_0(t);
                            }
                          }
                          t = r_32;
                          {
                            ATerm d_159 = NULL;
                            d_159 = t;
                            if(((c_159 != NULL) && (c_159 != d_159)))
                              _fail(d_159);
                            else
                              c_159 = d_159;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_159));
                          }
                          return(t);
                        }
                        ATerm n_7 (ATerm t)
                        {
                          t = term_s_32;
                          return(t);
                        }
                        t = ArgOption_3(t, l_7, m_7, n_7);
                        LocalPopChoice(q_32);
                      }
                    else
                      {
                        t = p_32;
                        {
                          ATerm t_32 = t;
                          int u_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_7 (ATerm t)
                              {
                                ATerm e_159 = NULL;
                                e_159 = t;
                                j_158 :
                                if(!(match_string(e_159, "-k")))
                                  {
                                    if(!(match_string(e_159, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm p_7 (ATerm t)
                              {
                                ATerm v_32;
                                v_32 = t;
                                {
                                  ATerm f_159 = NULL;
                                  ATerm g_159 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    g_159 = t;
                                    if(((f_159 != NULL) && (f_159 != g_159)))
                                      _fail(g_159);
                                    else
                                      f_159 = g_159;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_w_32, not_null(f_159));
                                    t = set_config_0(t);
                                  }
                                }
                                t = v_32;
                                return(t);
                              }
                              ATerm q_7 (ATerm t)
                              {
                                t = term_x_32;
                                return(t);
                              }
                              t = ArgOption_3(t, o_7, p_7, q_7);
                              LocalPopChoice(u_32);
                            }
                          else
                            {
                              t = t_32;
                              {
                                ATerm y_32 = t;
                                int z_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_7 (ATerm t)
                                    {
                                      ATerm h_159 = NULL;
                                      h_159 = t;
                                      l_158 :
                                      if(!(match_string(h_159, "-v")))
                                        {
                                          if(!(match_string(h_159, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm s_7 (ATerm t)
                                    {
                                      t = term_b_33;
                                      t = set_config_0(t);
                                      t = term_c_33;
                                      return(t);
                                    }
                                    ATerm t_7 (ATerm t)
                                    {
                                      t = term_d_33;
                                      return(t);
                                    }
                                    t = Option_3(t, r_7, s_7, t_7);
                                    LocalPopChoice(z_32);
                                  }
                                else
                                  {
                                    t = y_32;
                                    {
                                      ATerm e_33 = t;
                                      int f_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_7 (ATerm t)
                                          {
                                            ATerm i_159 = NULL;
                                            i_159 = t;
                                            m_158 :
                                            if(!(match_string(i_159, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm v_7 (ATerm t)
                                          {
                                            t = term_h_33;
                                            t = set_config_0(t);
                                            t = term_i_33;
                                            return(t);
                                          }
                                          ATerm w_7 (ATerm t)
                                          {
                                            t = term_j_33;
                                            return(t);
                                          }
                                          t = Option_3(t, u_7, v_7, w_7);
                                          LocalPopChoice(f_33);
                                        }
                                      else
                                        {
                                          t = e_33;
                                          {
                                            ATerm x_7 (ATerm t)
                                            {
                                              ATerm j_159 = NULL;
                                              j_159 = t;
                                              n_158 :
                                              if(!(match_string(j_159, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm y_7 (ATerm t)
                                            {
                                              t = term_l_33;
                                              t = set_config_0(t);
                                              t = term_m_33;
                                              return(t);
                                            }
                                            ATerm z_7 (ATerm t)
                                            {
                                              t = term_n_33;
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
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATempty, term_o_33));
  {
    t = printnl_0(t);
    {
      t = term_k_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_159 = NULL;
  s_159 = t;
  t = SSL_TicksToSeconds(not_null(s_159));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_159 = NULL,y_159 = NULL,z_159 = NULL;
  x_159 = t;
  w_159 :
  if(match_cons(x_159, sym__2))
    {
      y_159 = ATgetArgument(x_159, 0);
      z_159 = ATgetArgument(x_159, 1);
      {
        ATerm p_33 = t;
        int q_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_159), not_null(z_159));
            LocalPopChoice(q_33);
          }
        else
          {
            t = p_33;
            t = SSL_addr(not_null(y_159), not_null(z_159));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_95 (ATerm), ATerm t_95 (ATerm))
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_95(t);
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm h_160 = NULL,i_160 = NULL,j_160 = NULL;
        h_160 = t;
        g_160 :
        if(((ATgetType(h_160) == AT_LIST) && ((ATermList) h_160 != ATempty)))
          {
            i_160 = ATgetFirst((ATermList) h_160);
            j_160 = (ATerm) ATgetNext((ATermList) h_160);
            {
              ATerm m_160 = NULL;
              ATerm n_160 = NULL;
              t = not_null(j_160);
              {
                t = foldr_2(t, s_95, t_95);
                {
                  n_160 = t;
                  if(((m_160 != NULL) && (m_160 != n_160)))
                    _fail(n_160);
                  else
                    m_160 = n_160;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_160), not_null(m_160));
                t = t_95(t);
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
ATerm crush_2 (ATerm t, ATerm k_97 (ATerm), ATerm l_97 (ATerm))
{
  ATerm u_160 = NULL;
  ATerm w_160 = NULL;
  u_160 = t;
  {
    ATerm x_160 = NULL;
    ATerm z_160 = NULL,a_161 = NULL,b_161 = NULL;
    t = not_null(u_160);
    {
      x_160 = t;
      {
        t = SSL_explode_term(not_null(x_160));
        {
          z_160 = t;
          t_160 :
          if(match_cons(z_160, sym__2))
            {
              a_161 = ATgetArgument(z_160, 0);
              b_161 = ATgetArgument(z_160, 1);
              if(((w_160 != NULL) && (w_160 != b_161)))
                _fail(b_161);
              else
                w_160 = b_161;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_160);
      t = foldr_2(t, k_97, l_97);
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
    ATerm a_8 (ATerm t)
    {
      t = term_x_20;
      return(t);
    }
    t = crush_2(t, a_8, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm h_161 = NULL,i_161 = NULL,j_161 = NULL;
  h_161 = t;
  g_161 :
  if(match_cons(h_161, sym__2))
    {
      i_161 = ATgetArgument(h_161, 0);
      j_161 = ATgetArgument(h_161, 1);
      {
        ATerm t_33;
        t_33 = t;
        {
          ATerm u_33 = t;
          int v_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_161), not_null(j_161));
              LocalPopChoice(v_33);
            }
          else
            {
              t = u_33;
              t = SSL_gtr(not_null(i_161), not_null(j_161));
            }
        }
        t = t_33;
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
  ATerm q_161 = NULL;
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_161 = NULL,s_161 = NULL,t_161 = NULL;
      r_161 = t;
      p_161 :
      if(match_cons(r_161, sym__2))
        {
          s_161 = ATgetArgument(r_161, 0);
          t_161 = ATgetArgument(r_161, 1);
          {
            if(((q_161 != NULL) && (q_161 != s_161)))
              _fail(s_161);
            else
              q_161 = s_161;
            if(((q_161 != NULL) && (q_161 != t_161)))
              _fail(t_161);
            else
              q_161 = t_161;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_88 (ATerm))
{
  ATerm b_8 (ATerm t)
  {
    ATerm y_33;
    y_33 = t;
    {
      ATerm w_161 = NULL;
      ATerm x_161 = NULL;
      t = term_c_31;
      {
        t = get_config_0(t);
        {
          x_161 = t;
          if(((w_161 != NULL) && (w_161 != x_161)))
            _fail(x_161);
          else
            w_161 = x_161;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_161), term_k_18);
        t = geq_0(t);
      }
    }
    t = y_33;
    t = g_88(t);
    return(t);
  }
  t = try_1(t, b_8);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    ATerm b_162 = NULL,d_162 = NULL;
    ATerm z_33;
    z_33 = t;
    {
      ATerm c_162 = NULL;
      t = run_time_0(t);
      {
        c_162 = t;
        if(((b_162 != NULL) && (b_162 != c_162)))
          _fail(c_162);
        else
          b_162 = c_162;
      }
    }
    t = z_33;
    {
      ATerm e_162 = NULL;
      t = term_a_34;
      {
        t = get_config_0(t);
        {
          e_162 = t;
          if(((d_162 != NULL) && (d_162 != e_162)))
            _fail(e_162);
          else
            d_162 = e_162;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_34), not_null(b_162)), term_b_34), not_null(d_162)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_8);
  {
    t = term_x_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_162 = NULL;
  l_162 = t;
  k_162 :
  if(match_cons(l_162, sym_Version_0))
    {
      ATerm n_162 = NULL,p_162 = NULL;
      ATerm d_34;
      d_34 = t;
      {
        ATerm o_162 = NULL;
        t = SSLgetAnnotations(not_null(l_162));
        {
          o_162 = t;
          if(((n_162 != NULL) && (n_162 != o_162)))
            _fail(o_162);
          else
            n_162 = o_162;
        }
      }
      t = d_34;
      {
        ATerm q_162 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_162));
        {
          q_162 = t;
          if(((p_162 != NULL) && (p_162 != q_162)))
            _fail(q_162);
          else
            p_162 = q_162;
        }
        t = not_null(p_162);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_90 (ATerm))
{
  ATerm d_8 (ATerm t)
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        {
          ATerm g_34 = t;
          int h_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_34);
            }
          else
            {
              t = g_34;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, d_8);
  t = z_90(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_162 = NULL;
  v_162 = t;
  t = SSL_table_create(not_null(v_162));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_162 = NULL;
  z_162 = t;
  {
    ATerm i_34;
    i_34 = t;
    {
      t = term_j_34;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_34, term_k_34, not_null(z_162));
          t = table_put_0(t);
        }
      }
    }
    t = i_34;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_163 = NULL;
  d_163 = t;
  t = SSL_table_destroy(not_null(d_163));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_163 = NULL;
  h_163 = t;
  t = SSL_exit(not_null(h_163));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm a_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_101 (ATerm))
{
  ATerm k_163 (ATerm t)
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
        t = Cons_2(t, i_101, k_163);
      }
    return(t);
  }
  t = k_163(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm r_163 = NULL,s_163 = NULL,t_163 = NULL;
  t_163 = t;
  q_163 :
  if(((ATgetType(t_163) == AT_LIST) && ((ATermList) t_163 != ATempty)))
    {
      r_163 = ATgetFirst((ATermList) t_163);
      s_163 = (ATerm) ATgetNext((ATermList) t_163);
      {
        ATerm x_163 = NULL;
        t = not_null(s_163);
        {
          ATerm n_34;
          n_34 = t;
          {
            ATerm y_163 = NULL,a_164 = NULL,c_164 = NULL;
            ATerm o_34;
            o_34 = t;
            {
              ATerm z_163 = NULL;
              t = m_0(t);
              {
                z_163 = t;
                if(((y_163 != NULL) && (y_163 != z_163)))
                  _fail(z_163);
                else
                  y_163 = z_163;
              }
            }
            t = o_34;
            {
              ATerm b_164 = NULL;
              t = not_null(r_163);
              {
                t = l_0(t);
                {
                  b_164 = t;
                  if(((a_164 != NULL) && (a_164 != b_164)))
                    _fail(b_164);
                  else
                    a_164 = b_164;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_163)), not_null(a_164));
                {
                  c_164 = t;
                  if(((x_163 != NULL) && (x_163 != c_164)))
                    _fail(c_164);
                  else
                    x_163 = c_164;
                }
              }
            }
          }
          t = n_34;
          {
            ATerm e_8 (ATerm t)
            {
              t = not_null(x_163);
              return(t);
            }
            t = reverse_acc_2(t, l_0, e_8);
          }
        }
      }
    }
  else
    {
      if(((ATermList) t_163 == ATempty))
        {
          {
            t = term_b_19;
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
ATerm implode_string_0 (ATerm t)
{
  ATerm j_164 = NULL;
  j_164 = t;
  t = SSL_implode_string(not_null(j_164));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_101 (ATerm))
{
  ATerm m_164 (ATerm t)
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_164);
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        {
          t = Nil_0(t);
          t = x_101(t);
        }
      }
    return(t);
  }
  t = m_164(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      {
        ATerm p_164 = NULL,q_164 = NULL,r_164 = NULL;
        p_164 = t;
        o_164 :
        if(((ATgetType(p_164) == AT_LIST) && ((ATermList) p_164 != ATempty)))
          {
            q_164 = ATgetFirst((ATermList) p_164);
            r_164 = (ATerm) ATgetNext((ATermList) p_164);
            {
              t = not_null(q_164);
              {
                ATerm g_8 (ATerm t)
                {
                  t = not_null(r_164);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_8);
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
  ATerm x_164 = NULL;
  x_164 = t;
  t = SSL_explode_string(not_null(x_164));
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
ATerm short_description_1 (ATerm t, ATerm z_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm f_165 = NULL,g_165 = NULL;
  f_165 = t;
  e_165 :
  if(match_cons(f_165, sym_Program_1))
    {
      g_165 = ATgetArgument(f_165, 0);
      {
        ATerm j_165 = NULL,l_165 = NULL;
        ATerm k_165 = NULL;
        t = SSLgetAnnotations(not_null(f_165));
        {
          k_165 = t;
          if(((j_165 != NULL) && (j_165 != k_165)))
            _fail(k_165);
          else
            j_165 = k_165;
        }
        {
          t = not_null(g_165);
          {
            ATerm n_165 = NULL;
            t = p_71(t);
            {
              l_165 = t;
              {
                ATerm o_165 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_165)), not_null(j_165));
                {
                  o_165 = t;
                  if(((n_165 != NULL) && (n_165 != o_165)))
                    _fail(o_165);
                  else
                    n_165 = o_165;
                }
                t = not_null(n_165);
              }
            }
          }
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
  ATerm x_165 = NULL;
  ATerm h_8 (ATerm t)
  {
    ATerm i_8 (ATerm t)
    {
      ATerm y_165 = NULL;
      y_165 = t;
      if(((x_165 != NULL) && (x_165 != y_165)))
        _fail(y_165);
      else
        x_165 = y_165;
      return(t);
    }
    t = Program_1(t, i_8);
    return(t);
  }
  t = option_defined_1(t, h_8);
  {
    ATerm j_8 (ATerm t)
    {
      ATerm z_165 = NULL;
      ATerm a_166 = NULL;
      t = term_b_19;
      {
        ATerm k_8 (ATerm t)
        {
          t = not_null(x_165);
          return(t);
        }
        t = short_description_1(t, k_8);
        {
          t = concat_strings_0(t);
          {
            a_166 = t;
            if(((z_165 != NULL) && (z_165 != a_166)))
              _fail(a_166);
            else
              z_165 = a_166;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_31, (ATerm) ATinsert(ATempty, not_null(z_165)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, j_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_31, (ATerm) ATinsert(ATempty, term_t_34));
      {
        t = printnl_0(t);
        {
          t = term_w_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_8 (ATerm t)
                {
                  ATerm b_166 = NULL;
                  ATerm c_166 = NULL;
                  c_166 = t;
                  if(((b_166 != NULL) && (b_166 != c_166)))
                    _fail(c_166);
                  else
                    b_166 = c_166;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_h_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_166)), term_x_34));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_8);
                {
                  ATerm m_8 (ATerm t)
                  {
                    ATerm d_166 = NULL;
                    ATerm e_166 = NULL;
                    ATerm n_8 (ATerm t)
                    {
                      t = not_null(x_165);
                      return(t);
                    }
                    t = long_description_1(t, n_8);
                    {
                      e_166 = t;
                      if(((d_166 != NULL) && (d_166 != e_166)))
                        _fail(e_166);
                      else
                        d_166 = e_166;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_31, (ATerm) ATinsert(CheckATermList(not_null(d_166)), term_y_34));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_8);
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
ATerm Undefined_1 (ATerm t, ATerm q_71 (ATerm))
{
  ATerm p_166 = NULL,q_166 = NULL;
  p_166 = t;
  o_166 :
  if(match_cons(p_166, sym_Undefined_1))
    {
      q_166 = ATgetArgument(p_166, 0);
      {
        ATerm t_166 = NULL,v_166 = NULL;
        ATerm u_166 = NULL;
        t = SSLgetAnnotations(not_null(p_166));
        {
          u_166 = t;
          if(((t_166 != NULL) && (t_166 != u_166)))
            _fail(u_166);
          else
            t_166 = u_166;
        }
        {
          t = not_null(q_166);
          {
            ATerm x_166 = NULL;
            t = q_71(t);
            {
              v_166 = t;
              {
                ATerm y_166 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_166)), not_null(t_166));
                {
                  y_166 = t;
                  if(((x_166 != NULL) && (x_166 != y_166)))
                    _fail(y_166);
                  else
                    x_166 = y_166;
                }
                t = not_null(x_166);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_101 (ATerm))
{
  ATerm e_167 (ATerm t)
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_101, _id);
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        t = Cons_2(t, _id, e_167);
      }
    return(t);
  }
  t = e_167(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_88 (ATerm))
{
  t = fetch_1(t, e_88);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_167 = NULL;
  j_167 = t;
  i_167 :
  if(match_cons(j_167, sym_Help_0))
    {
      ATerm l_167 = NULL,n_167 = NULL;
      ATerm b_35;
      b_35 = t;
      {
        ATerm m_167 = NULL;
        t = SSLgetAnnotations(not_null(j_167));
        {
          m_167 = t;
          if(((l_167 != NULL) && (l_167 != m_167)))
            _fail(m_167);
          else
            l_167 = m_167;
        }
      }
      t = b_35;
      {
        ATerm o_167 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_167));
        {
          o_167 = t;
          if(((n_167 != NULL) && (n_167 != o_167)))
            _fail(o_167);
          else
            n_167 = o_167;
        }
        t = not_null(n_167);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm c_110 (ATerm))
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_110(t);
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_167 = NULL,v_167 = NULL,w_167 = NULL;
  u_167 = t;
  t_167 :
  if(match_cons(u_167, sym__2))
    {
      v_167 = ATgetArgument(u_167, 0);
      w_167 = ATgetArgument(u_167, 1);
      t = SSL_table_get(not_null(v_167), not_null(w_167));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_168 = NULL,e_168 = NULL,f_168 = NULL,g_168 = NULL;
  d_168 = t;
  c_168 :
  if(match_cons(d_168, sym__3))
    {
      e_168 = ATgetArgument(d_168, 0);
      f_168 = ATgetArgument(d_168, 1);
      g_168 = ATgetArgument(d_168, 2);
      {
        ATerm e_35;
        e_35 = t;
        {
          ATerm k_168 = NULL;
          ATerm l_168 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_168), not_null(f_168));
          {
            ATerm f_35 = t;
            int g_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_35);
              }
            else
              {
                t = f_35;
                t = (ATerm) ATempty;
              }
            {
              l_168 = t;
              if(((k_168 != NULL) && (k_168 != l_168)))
                _fail(l_168);
              else
                k_168 = l_168;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_168), not_null(f_168), (ATerm) ATinsert(CheckATermList(not_null(k_168)), not_null(g_168)));
            t = table_put_0(t);
          }
        }
        t = e_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_87 (ATerm))
{
  ATerm p_168 = NULL;
  ATerm q_168 = NULL;
  t = term_b_19;
  {
    t = e_87(t);
    {
      q_168 = t;
      if(((p_168 != NULL) && (p_168 != q_168)))
        _fail(q_168);
      else
        p_168 = q_168;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_34, term_v_34, not_null(p_168));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm w_168 = NULL,y_168 = NULL,z_168 = NULL;
  w_168 = t;
  v_168 :
  if(match_string(w_168, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(w_168) == AT_LIST) && ((ATermList) w_168 != ATempty)))
        {
          y_168 = ATgetFirst((ATermList) w_168);
          z_168 = (ATerm) ATgetNext((ATermList) w_168);
          {
            ATerm c_169 = NULL;
            ATerm h_35;
            h_35 = t;
            {
              t = not_null(y_168);
              t = a_0(t);
            }
            t = h_35;
            {
              ATerm d_169 = NULL;
              t = term_b_19;
              {
                t = b_0(t);
                {
                  d_169 = t;
                  if(((c_169 != NULL) && (c_169 != d_169)))
                    _fail(d_169);
                  else
                    c_169 = d_169;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_168)), not_null(c_169));
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
  ATerm o_8 (ATerm t)
  {
    ATerm i_169 = NULL;
    i_169 = t;
    h_169 :
    if(!(match_string(i_169, "--help")))
      {
        if(!(match_string(i_169, "-h")))
          {
            if(!(match_string(i_169, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    t = term_i_35;
    return(t);
  }
  ATerm q_8 (ATerm t)
  {
    t = term_j_35;
    return(t);
  }
  t = Option_3(t, o_8, p_8, q_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_169 = NULL,m_169 = NULL,n_169 = NULL;
  l_169 = t;
  k_169 :
  if(((ATgetType(l_169) == AT_LIST) && ((ATermList) l_169 != ATempty)))
    {
      m_169 = ATgetFirst((ATermList) l_169);
      n_169 = (ATerm) ATgetNext((ATermList) l_169);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_169)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_169)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_81 (ATerm), ATerm h_81 (ATerm))
{
  ATerm y_169 = NULL,z_169 = NULL,a_170 = NULL;
  y_169 = t;
  x_169 :
  if(((ATgetType(y_169) == AT_LIST) && ((ATermList) y_169 != ATempty)))
    {
      z_169 = ATgetFirst((ATermList) y_169);
      a_170 = (ATerm) ATgetNext((ATermList) y_169);
      {
        ATerm e_170 = NULL,g_170 = NULL;
        ATerm f_170 = NULL;
        t = SSLgetAnnotations(not_null(y_169));
        {
          f_170 = t;
          if(((e_170 != NULL) && (e_170 != f_170)))
            _fail(f_170);
          else
            e_170 = f_170;
        }
        {
          t = not_null(z_169);
          {
            ATerm i_170 = NULL;
            t = g_81(t);
            {
              g_170 = t;
              {
                t = not_null(a_170);
                {
                  ATerm k_170 = NULL;
                  t = h_81(t);
                  {
                    i_170 = t;
                    {
                      ATerm l_170 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_170)), not_null(g_170)), not_null(e_170));
                      {
                        l_170 = t;
                        if(((k_170 != NULL) && (k_170 != l_170)))
                          _fail(l_170);
                        else
                          k_170 = l_170;
                      }
                      t = not_null(k_170);
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
  ATerm v_170 = NULL;
  v_170 = t;
  u_170 :
  if(((ATermList) v_170 == ATempty))
    {
      {
        ATerm x_170 = NULL,z_170 = NULL;
        ATerm k_35;
        k_35 = t;
        {
          ATerm y_170 = NULL;
          t = SSLgetAnnotations(not_null(v_170));
          {
            y_170 = t;
            if(((x_170 != NULL) && (x_170 != y_170)))
              _fail(y_170);
            else
              x_170 = y_170;
          }
        }
        t = k_35;
        {
          ATerm a_171 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_170));
          {
            a_171 = t;
            if(((z_170 != NULL) && (z_170 != a_171)))
              _fail(a_171);
            else
              z_170 = a_171;
          }
          t = not_null(z_170);
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
  ATerm g_171 = NULL,h_171 = NULL,i_171 = NULL;
  g_171 = t;
  f_171 :
  if(match_cons(g_171, sym__2))
    {
      h_171 = ATgetArgument(g_171, 0);
      i_171 = ATgetArgument(g_171, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_30, not_null(h_171), not_null(i_171));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm l_35;
  l_35 = t;
  {
    ATerm r_8 (ATerm t)
    {
      t = term_m_35;
      t = c_87(t);
      return(t);
    }
    t = try_1(t, r_8);
  }
  t = l_35;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm q_171 = NULL;
      ATerm p_35;
      p_35 = t;
      {
        ATerm o_171 = NULL;
        ATerm p_171 = NULL;
        p_171 = t;
        if(((o_171 != NULL) && (o_171 != p_171)))
          _fail(p_171);
        else
          o_171 = p_171;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_34, not_null(o_171));
          t = set_config_0(t);
        }
      }
      t = p_35;
      {
        ATerm r_171 = NULL;
        r_171 = t;
        if(((q_171 != NULL) && (q_171 != r_171)))
          _fail(r_171);
        else
          q_171 = r_171;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_171));
      }
      return(t);
    }
    ATerm t_8 (ATerm t)
    {
      ATerm q_35 = t;
      int r_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_35 = t;
          int t_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_35);
            }
          else
            {
              t = s_35;
              {
                t = c_87(t);
                t = Cons_2(t, _id, t_8);
              }
            }
          LocalPopChoice(r_35);
        }
      else
        {
          t = q_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_8, t_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_171 = NULL,z_171 = NULL,a_172 = NULL;
  ATerm u_35;
  u_35 = t;
  {
    ATerm b_172 = NULL,c_172 = NULL,d_172 = NULL,e_172 = NULL;
    b_172 = t;
    w_171 :
    if(match_cons(b_172, sym__3))
      {
        c_172 = ATgetArgument(b_172, 0);
        d_172 = ATgetArgument(b_172, 1);
        e_172 = ATgetArgument(b_172, 2);
        {
          if(((x_171 != NULL) && (x_171 != c_172)))
            _fail(c_172);
          else
            x_171 = c_172;
          {
            if(((z_171 != NULL) && (z_171 != d_172)))
              _fail(d_172);
            else
              z_171 = d_172;
            {
              if(((a_172 != NULL) && (a_172 != e_172)))
                _fail(e_172);
              else
                a_172 = e_172;
              t = SSL_table_put(not_null(x_171), not_null(z_171), not_null(a_172));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm h_172 = NULL;
  ATerm v_35;
  v_35 = t;
  {
    t = term_w_35;
    t = table_put_0(t);
  }
  t = v_35;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm x_35 = t;
      int y_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_87(t);
          LocalPopChoice(y_35);
        }
      else
        {
          t = x_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_8);
    {
      ATerm v_8 (ATerm t)
      {
        ATerm z_35 = t;
        int a_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_x_20;
                t = exit_0(t);
              }
            }
            LocalPopChoice(a_36);
          }
        else
          {
            t = z_35;
            {
              ATerm w_8 (ATerm t)
              {
                ATerm x_8 (ATerm t)
                {
                  ATerm i_172 = NULL;
                  i_172 = t;
                  if(((h_172 != NULL) && (h_172 != i_172)))
                    _fail(i_172);
                  else
                    h_172 = i_172;
                  return(t);
                }
                t = Undefined_1(t, x_8);
                return(t);
              }
              t = option_defined_1(t, w_8);
              {
                ATerm b_36;
                b_36 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_172)), term_c_36));
                  t = printnl_0(t);
                }
                t = b_36;
                {
                  t = system_usage_0(t);
                  {
                    t = term_k_18;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_8);
      {
        ATerm d_36;
        d_36 = t;
        {
          t = term_u_34;
          t = table_destroy_0(t);
        }
        t = d_36;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm))
{
  t = parse_options_1(t, w_89);
  {
    t = store_options_0(t);
    {
      t = y_89(t);
      {
        ATerm e_36 = t;
        int f_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_89);
            LocalPopChoice(f_36);
          }
        else
          {
            t = e_36;
            {
              ATerm g_36 = t;
              int h_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_89(t);
                  t = report_success_0(t);
                  LocalPopChoice(h_36);
                }
              else
                {
                  t = g_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm))
{
  ATerm y_8 (ATerm t)
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_90(t);
        LocalPopChoice(j_36);
      }
    else
      {
        t = i_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm z_8 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, n_90);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, y_8, p_90, q_90, z_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm))
{
  ATerm a_9 (ATerm t)
  {
    ATerm b_9 (ATerm t)
    {
      ATerm k_36;
      k_36 = t;
      {
        ATerm l_172 = NULL;
        ATerm m_172 = NULL;
        t = term_a_34;
        {
          t = get_config_0(t);
          {
            m_172 = t;
            if(((l_172 != NULL) && (l_172 != m_172)))
              _fail(m_172);
            else
              l_172 = m_172;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATempty, not_null(l_172)));
          t = printnl_0(t);
        }
      }
      t = k_36;
      return(t);
    }
    t = if_verbose2_1(t, b_9);
    return(t);
  }
  t = iowrap_4(t, h_90, i_90, j_90, a_9);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_90 (ATerm), ATerm g_90 (ATerm))
{
  t = iowrap_3(t, f_90, g_90, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm c_9 (ATerm t)
  {
    t = _2(t, _id, c_90);
    return(t);
  }
  t = iowrap_2(t, c_9, _fail);
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
