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
ATerm term_q_35;
ATerm term_i_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_q_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_o_32;
ATerm term_w_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_x_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_h_27;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_s_22;
ATerm term_f_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_h_20;
ATerm term_x_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_m_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
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
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_o_11;
ATerm term_o_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
void init_constant_terms (void)
{
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Op_2, term_l_15, (ATerm) ATempty);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Var_1, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Var_1, term_w_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Anno_2, term_v_15, term_y_15);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Var_1, term_m_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Var_1, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Anno_2, term_u_16, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_15);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Call_2, term_h_17, (ATerm) ATempty);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_BAM_3, term_i_17, term_v_15, term_u_16);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_15);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Call_2, term_k_17, (ATerm) ATempty);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_BAM_3, term_l_17, term_y_15, term_f_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Var_1, term_s_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_18);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, term_y_21);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_15);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Op_2, term_o_27, (ATerm) ATempty);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_27);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Op_2, term_c_9, (ATerm) ATempty);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_28);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_28);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_28);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_j_21);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_21);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_t_33, term_b_19);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_z_33, term_b_19);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym__2, term_d_34, term_b_19);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_q_34, term_r_34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym__3, term_q_34, term_r_34, (ATerm) ATempty);
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
ATerm Prim_2 (ATerm, ATerm t_79 (ATerm), ATerm u_79 (ATerm));
ATerm Explode_2 (ATerm, ATerm y_75 (ATerm), ATerm z_75 (ATerm));
ATerm pat_td_1 (ATerm, ATerm h_80 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm h_97 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm d_77 (ATerm));
ATerm Specification_1 (ATerm, ATerm f_77 (ATerm));
ATerm spaste_1 (ATerm, ATerm t_80 (ATerm));
ATerm Rec_2 (ATerm, ATerm m_78 (ATerm), ATerm n_78 (ATerm));
ATerm Let_2 (ATerm, ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm sboundin_3 (ATerm, ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm w_80 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm l_78 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm n_83 (ATerm, ATerm (ATerm)), ATerm o_83 (ATerm), ATerm p_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_83 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm Con_3 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm p_104 (ATerm));
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
ATerm rewrite_1 (ATerm, ATerm c_90 (ATerm));
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm x_105 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm x_89 (ATerm));
ATerm restore_always_2 (ATerm, ATerm q_107 (ATerm), ATerm r_107 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm w_89 (ATerm));
ATerm scope_2 (ATerm, ATerm y_89 (ATerm), ATerm z_89 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm j_80 (ATerm), ATerm k_80 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm a_90 (ATerm));
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm s_81 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm t_77 (ATerm), ATerm u_77 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm p_80 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm f_83 (ATerm), ATerm g_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm l_83 (ATerm), ATerm m_83 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm z_82 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm f_100 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm k_100 (ATerm));
ATerm substitute_6 (ATerm, ATerm x_83 (ATerm), ATerm y_83 (ATerm, ATerm (ATerm)), ATerm z_83 (ATerm), ATerm a_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_84 (ATerm, ATerm (ATerm)), ATerm c_84 (ATerm));
ATerm substitute_5 (ATerm, ATerm e_84 (ATerm), ATerm f_84 (ATerm, ATerm (ATerm)), ATerm g_84 (ATerm), ATerm h_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_84 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm q_81 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm r_81 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm _3 (ATerm, ATerm s_68 (ATerm), ATerm t_68 (ATerm), ATerm u_68 (ATerm));
ATerm Overlay_3 (ATerm, ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm z_76 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm u_96 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm m_80 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm));
ATerm BAM_3 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm BA_2 (ATerm, ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm AM_2 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm));
ATerm MA_2 (ATerm, ATerm g_75 (ATerm), ATerm h_75 (ATerm));
ATerm Match_1 (ATerm, ATerm m_79 (ATerm));
ATerm Build_1 (ATerm, ATerm n_79 (ATerm));
ATerm constructs_1 (ATerm, ATerm l_80 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm s_76 (ATerm));
ATerm SDef_3 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm b_77 (ATerm));
ATerm Signature_1 (ATerm, ATerm a_77 (ATerm));
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
ATerm dist_scope_1 (ATerm, ATerm t_107 (ATerm));
ATerm one_dist_1 (ATerm, ATerm g_100 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm y_100 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm g_106 (ATerm), ATerm h_106 (ATerm));
ATerm repeat_1 (ATerm, ATerm j_106 (ATerm));
ATerm listtd_1 (ATerm, ATerm o_99 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm t_76 (ATerm));
ATerm Scope_2 (ATerm, ATerm q_79 (ATerm), ATerm r_79 (ATerm));
ATerm tboundin_3 (ATerm, ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm f_93 (ATerm));
ATerm crush_3 (ATerm, ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_106 (ATerm), ATerm y_106 (ATerm));
ATerm for_3 (ATerm, ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm));
ATerm HdMember_1 (ATerm, ATerm h_94 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm y_81 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm a_103 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm s_83 (ATerm), ATerm t_83 (ATerm));
ATerm alltd_1 (ATerm, ATerm d_105 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm a_97 (ATerm));
ATerm zip_1 (ATerm, ATerm c_97 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm u_83 (ATerm), ATerm v_83 (ATerm));
ATerm substitute_1 (ATerm, ATerm w_83 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_92 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm z_102 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm q_68 (ATerm), ATerm r_68 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm e_89 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_86 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm b_93 (ATerm), ATerm c_93 (ATerm));
ATerm crush_2 (ATerm, ATerm q_94 (ATerm), ATerm r_94 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_88 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_91 (ATerm), ATerm q_91 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_88 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_98 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_85 (ATerm));
ATerm map_1 (ATerm, ATerm k_98 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_85 (ATerm));
ATerm Program_1 (ATerm, ATerm e_70 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_70 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_98 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_107 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_85 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm k_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_85 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_85 (ATerm));
ATerm iowrap_4 (ATerm, ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm w_87 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_87 (ATerm), ATerm t_87 (ATerm));
ATerm iowrap_1 (ATerm, ATerm p_87 (ATerm));
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_10)), not_null(j_10)), not_null(i_10)), not_null(h_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_10)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(e_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10))))), (ATerm) ATmakeAppl(sym_Prim_2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_10)), not_null(q_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_10)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_11))), (ATerm) ATmakeAppl(sym_Prim_2, term_b_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_11)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_11)), (ATerm) ATmakeAppl(sym_Op_2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_11)), not_null(a_11)))))));
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
        ATerm d_9 = t;
        int e_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_f_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_12))))));
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            {
              ATerm g_9 = t;
              int h_9 = stack_ptr;
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
                  LocalPopChoice(h_9);
                }
              else
                {
                  t = g_9;
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
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
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
        ATerm m_9 = t;
        int n_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_16)), not_null(d_16))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_16))));
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm p_9 = t;
              int q_9 = stack_ptr;
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
                  LocalPopChoice(q_9);
                }
              else
                {
                  t = p_9;
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
ATerm Prim_2 (ATerm t, ATerm t_79 (ATerm), ATerm u_79 (ATerm))
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
            t = t_79(t);
            {
              r_18 = t;
              {
                t = not_null(l_18);
                {
                  ATerm v_18 = NULL;
                  t = u_79(t);
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
ATerm Explode_2 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm))
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
            t = y_75(t);
            {
              q_19 = t;
              {
                t = not_null(k_19);
                {
                  ATerm u_19 = NULL;
                  t = z_75(t);
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
ATerm pat_td_1 (ATerm t, ATerm h_80 (ATerm))
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_80(t);
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
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = pat_td_1(t, h_80);
                return(t);
              }
              t = fetch_1(t, z_0);
              return(t);
            }
            t = Op_2(t, _id, y_0);
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
                  ATerm a_1 (ATerm t)
                  {
                    t = pat_td_1(t, h_80);
                    return(t);
                  }
                  t = Explode_2(t, _id, a_1);
                  LocalPopChoice(x_9);
                }
              else
                {
                  t = w_9;
                  {
                    ATerm y_9 = t;
                    int a_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_1 (ATerm t)
                        {
                          t = pat_td_1(t, h_80);
                          return(t);
                        }
                        t = Explode_2(t, b_1, _id);
                        LocalPopChoice(a_10);
                      }
                    else
                      {
                        t = y_9;
                        {
                          ATerm c_1 (ATerm t)
                          {
                            ATerm d_1 (ATerm t)
                            {
                              t = pat_td_1(t, h_80);
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
        ATerm f_10 = t;
        int g_10 = stack_ptr;
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
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
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
  ATerm p_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(z_10);
    }
  else
    {
      t = p_10;
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm h_97 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, h_97);
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
      ATerm n_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_11;
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
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_o_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_21))));
    return(t);
  }
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_Var_1))
    {
      p_21 = ATgetArgument(o_21, 0);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_21(t);
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
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
            ATerm r_11 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_11;
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
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
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
                  t = HL_0(t);
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
                        t = Bapp_0(t);
                        LocalPopChoice(x_11);
                      }
                    else
                      {
                        t = w_11;
                        {
                          ATerm y_11 = t;
                          int z_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(z_11);
                            }
                          else
                            {
                              t = y_11;
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
ATerm Strategies_1 (ATerm t, ATerm d_77 (ATerm))
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
            t = d_77(t);
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
ATerm Specification_1 (ATerm t, ATerm f_77 (ATerm))
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
            t = f_77(t);
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
ATerm spaste_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        t = split_2(t, _id, t_80);
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
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = split_2(t, _id, t_80);
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
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
            {
              ATerm p_1 (ATerm t)
              {
                t = t_80(t);
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
ATerm Rec_2 (ATerm t, ATerm m_78 (ATerm), ATerm n_78 (ATerm))
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
            t = m_78(t);
            {
              q_25 = t;
              {
                t = not_null(k_25);
                {
                  ATerm u_25 = NULL;
                  t = n_78(t);
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
ATerm Let_2 (ATerm t, ATerm o_78 (ATerm), ATerm p_78 (ATerm))
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
            t = o_78(t);
            {
              p_26 = t;
              {
                t = not_null(j_26);
                {
                  ATerm t_26 = NULL;
                  t = p_78(t);
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
ATerm sboundin_3 (ATerm t, ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm w_80 (ATerm))
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, u_80, u_80);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm h_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, w_80, w_80, u_80);
            LocalPopChoice(j_12);
          }
        else
          {
            t = h_12;
            t = Rec_2(t, w_80, u_80);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_Rec_2))
    {
      d_27 = ATgetArgument(c_27, 0);
      e_27 = ATgetArgument(c_27, 1);
      t = (ATerm) ATinsert(ATempty, not_null(d_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym_SDef_3))
    {
      f_32 = ATgetArgument(e_32, 0);
      g_32 = ATgetArgument(e_32, 1);
      h_32 = ATgetArgument(e_32, 2);
      {
        t = not_null(g_32);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
            l_32 = t;
            c_32 :
            if(match_cons(l_32, sym_VarDec_2))
              {
                m_32 = ATgetArgument(l_32, 0);
                n_32 = ATgetArgument(l_32, 1);
                t = not_null(m_32);
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
  ATerm u_35 = NULL,p_36 = NULL,r_36 = NULL;
  u_35 = t;
  t_35 :
  if(match_cons(u_35, sym_Let_2))
    {
      p_36 = ATgetArgument(u_35, 0);
      r_36 = ATgetArgument(u_35, 1);
      {
        t = not_null(p_36);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,d_39 = NULL;
            s_37 = t;
            s_35 :
            if(match_cons(s_37, sym_SDef_3))
              {
                t_37 = ATgetArgument(s_37, 0);
                u_37 = ATgetArgument(s_37, 1);
                d_39 = ATgetArgument(s_37, 2);
                t = not_null(t_37);
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
ATerm SVar_1 (ATerm t, ATerm l_78 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_cons(f_40, sym_SVar_1))
    {
      g_40 = ATgetArgument(f_40, 0);
      {
        ATerm j_40 = NULL,l_40 = NULL;
        ATerm k_40 = NULL;
        t = SSLgetAnnotations(not_null(f_40));
        {
          k_40 = t;
          if(((j_40 != NULL) && (j_40 != k_40)))
            _fail(k_40);
          else
            j_40 = k_40;
        }
        {
          t = not_null(g_40);
          {
            ATerm n_40 = NULL;
            t = l_78(t);
            {
              l_40 = t;
              {
                ATerm o_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(l_40)), not_null(j_40));
                {
                  o_40 = t;
                  if(((n_40 != NULL) && (n_40 != o_40)))
                    _fail(o_40);
                  else
                    n_40 = o_40;
                }
                t = not_null(n_40);
              }
            }
          }
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
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
          ATerm n_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(r_12);
            }
          else
            {
              t = n_12;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, s_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm n_83 (ATerm, ATerm (ATerm)), ATerm o_83 (ATerm), ATerm p_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_83 (ATerm, ATerm (ATerm)))
{
  ATerm u_40 = NULL;
  u_40 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_40), (ATerm) ATempty);
    {
      ATerm z_40 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          ATerm b_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, n_83);
              LocalPopChoice(j_13);
            }
          else
            {
              t = b_13;
              {
                t = RnBinding_2(t, o_83, q_83);
                t = DistBinding_2(t, z_40, p_83);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, t_1);
        return(t);
      }
      t = z_40(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm a_41 (ATerm t, ATerm b_41 (ATerm))
  {
    t = Scope_2(t, b_41, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, a_41);
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
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
  f_41 = t;
  d_41 :
  if(match_cons(f_41, sym_Var_1))
    {
      g_41 = ATgetArgument(f_41, 0);
      e_41 :
      if(match_cons(g_41, sym_ListVar_1))
        {
          h_41 = ATgetArgument(g_41, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_41));
        }
      else
        {
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
  ATerm h_43 = NULL,i_43 = NULL;
  h_43 = t;
  g_43 :
  if(match_cons(h_43, sym_Build_1))
    {
      i_43 = ATgetArgument(h_43, 0);
      {
        ATerm m_43 = NULL,n_43 = NULL;
        ATerm a_44 = NULL;
        t = not_null(i_43);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL;
            o_43 = t;
            q_42 :
            if(match_cons(o_43, sym_Op_2))
              {
                p_43 = ATgetArgument(o_43, 0);
                q_43 = ATgetArgument(o_43, 1);
                r_42 :
                if(match_string(p_43, "Cons"))
                  {
                    s_42 :
                    if(((ATgetType(q_43) == AT_LIST) && ((ATermList) q_43 != ATempty)))
                      {
                        r_43 = ATgetFirst((ATermList) q_43);
                        u_43 = (ATerm) ATgetNext((ATermList) q_43);
                        t_42 :
                        if(match_cons(r_43, sym_Var_1))
                          {
                            s_43 = ATgetArgument(r_43, 0);
                            u_42 :
                            if(match_cons(s_43, sym_ListVar_1))
                              {
                                t_43 = ATgetArgument(s_43, 0);
                                v_42 :
                                if(((ATgetType(u_43) == AT_LIST) && ((ATermList) u_43 != ATempty)))
                                  {
                                    w_43 = ATgetFirst((ATermList) u_43);
                                    z_43 = (ATerm) ATgetNext((ATermList) u_43);
                                    w_42 :
                                    if(match_cons(w_43, sym_Op_2))
                                      {
                                        x_43 = ATgetArgument(w_43, 0);
                                        y_43 = ATgetArgument(w_43, 1);
                                        x_42 :
                                        if(match_string(x_43, "Nil"))
                                          {
                                            y_42 :
                                            if(((ATermList) y_43 == ATempty))
                                              {
                                                z_42 :
                                                if(((ATermList) z_43 == ATempty))
                                                  {
                                                    {
                                                      if(((m_43 != NULL) && (m_43 != t_43)))
                                                        _fail(t_43);
                                                      else
                                                        m_43 = t_43;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_43));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
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
            a_44 = t;
            if(((n_43 != NULL) && (n_43 != a_44)))
              _fail(a_44);
            else
              n_43 = a_44;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_43));
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
  ATerm a_47 = NULL,b_47 = NULL;
  a_47 = t;
  z_46 :
  if(match_cons(a_47, sym_Build_1))
    {
      b_47 = ATgetArgument(a_47, 0);
      {
        ATerm d_47 = NULL,e_47 = NULL;
        ATerm x_47 = NULL;
        t = not_null(b_47);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL;
            f_47 = t;
            i_44 :
            if(match_cons(f_47, sym_Op_2))
              {
                g_47 = ATgetArgument(f_47, 0);
                h_47 = ATgetArgument(f_47, 1);
                j_44 :
                if(match_string(g_47, "Cons"))
                  {
                    k_44 :
                    if(((ATgetType(h_47) == AT_LIST) && ((ATermList) h_47 != ATempty)))
                      {
                        j_47 = ATgetFirst((ATermList) h_47);
                        k_47 = (ATerm) ATgetNext((ATermList) h_47);
                        l_44 :
                        if(((ATgetType(k_47) == AT_LIST) && ((ATermList) k_47 != ATempty)))
                          {
                            l_47 = ATgetFirst((ATermList) k_47);
                            w_47 = (ATerm) ATgetNext((ATermList) k_47);
                            m_44 :
                            if(match_cons(l_47, sym_Op_2))
                              {
                                m_47 = ATgetArgument(l_47, 0);
                                n_47 = ATgetArgument(l_47, 1);
                                n_44 :
                                if(match_string(m_47, "Cons"))
                                  {
                                    o_44 :
                                    if(((ATgetType(n_47) == AT_LIST) && ((ATermList) n_47 != ATempty)))
                                      {
                                        o_47 = ATgetFirst((ATermList) n_47);
                                        r_47 = (ATerm) ATgetNext((ATermList) n_47);
                                        p_44 :
                                        if(match_cons(o_47, sym_Var_1))
                                          {
                                            p_47 = ATgetArgument(o_47, 0);
                                            q_44 :
                                            if(match_cons(p_47, sym_ListVar_1))
                                              {
                                                q_47 = ATgetArgument(p_47, 0);
                                                r_44 :
                                                if(((ATgetType(r_47) == AT_LIST) && ((ATermList) r_47 != ATempty)))
                                                  {
                                                    s_47 = ATgetFirst((ATermList) r_47);
                                                    v_47 = (ATerm) ATgetNext((ATermList) r_47);
                                                    s_44 :
                                                    if(match_cons(s_47, sym_Op_2))
                                                      {
                                                        t_47 = ATgetArgument(s_47, 0);
                                                        u_47 = ATgetArgument(s_47, 1);
                                                        t_44 :
                                                        if(match_string(t_47, "Nil"))
                                                          {
                                                            u_44 :
                                                            if(((ATermList) u_47 == ATempty))
                                                              {
                                                                v_44 :
                                                                if(((ATermList) v_47 == ATempty))
                                                                  {
                                                                    w_44 :
                                                                    if(((ATermList) w_47 == ATempty))
                                                                      {
                                                                        {
                                                                          if(((b_47 != NULL) && (b_47 != j_47)))
                                                                            _fail(j_47);
                                                                          else
                                                                            b_47 = j_47;
                                                                          {
                                                                            if(((d_47 != NULL) && (d_47 != q_47)))
                                                                              _fail(q_47);
                                                                            else
                                                                              d_47 = q_47;
                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, term_t_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_47))), not_null(b_47)));
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
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
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
            x_47 = t;
            if(((e_47 != NULL) && (e_47 != x_47)))
              _fail(x_47);
            else
              e_47 = x_47;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_47));
      }
    }
  else
    {
      if(match_cons(a_47, sym_Match_1))
        {
          b_47 = ATgetArgument(a_47, 0);
          {
            ATerm u_13 = t;
            int v_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_47 = NULL,a_48 = NULL;
                ATerm s_48 = NULL;
                t = not_null(b_47);
                {
                  ATerm w_1 (ATerm t)
                  {
                    ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
                    b_48 = t;
                    z_44 :
                    if(match_cons(b_48, sym_Op_2))
                      {
                        c_48 = ATgetArgument(b_48, 0);
                        d_48 = ATgetArgument(b_48, 1);
                        a_45 :
                        if(match_string(c_48, "Cons"))
                          {
                            b_45 :
                            if(((ATgetType(d_48) == AT_LIST) && ((ATermList) d_48 != ATempty)))
                              {
                                e_48 = ATgetFirst((ATermList) d_48);
                                f_48 = (ATerm) ATgetNext((ATermList) d_48);
                                c_45 :
                                if(((ATgetType(f_48) == AT_LIST) && ((ATermList) f_48 != ATempty)))
                                  {
                                    g_48 = ATgetFirst((ATermList) f_48);
                                    r_48 = (ATerm) ATgetNext((ATermList) f_48);
                                    d_45 :
                                    if(match_cons(g_48, sym_Op_2))
                                      {
                                        h_48 = ATgetArgument(g_48, 0);
                                        i_48 = ATgetArgument(g_48, 1);
                                        e_45 :
                                        if(match_string(h_48, "Cons"))
                                          {
                                            f_45 :
                                            if(((ATgetType(i_48) == AT_LIST) && ((ATermList) i_48 != ATempty)))
                                              {
                                                j_48 = ATgetFirst((ATermList) i_48);
                                                m_48 = (ATerm) ATgetNext((ATermList) i_48);
                                                o_45 :
                                                if(match_cons(j_48, sym_Var_1))
                                                  {
                                                    k_48 = ATgetArgument(j_48, 0);
                                                    p_45 :
                                                    if(match_cons(k_48, sym_ListVar_1))
                                                      {
                                                        l_48 = ATgetArgument(k_48, 0);
                                                        q_45 :
                                                        if(((ATgetType(m_48) == AT_LIST) && ((ATermList) m_48 != ATempty)))
                                                          {
                                                            n_48 = ATgetFirst((ATermList) m_48);
                                                            q_48 = (ATerm) ATgetNext((ATermList) m_48);
                                                            r_45 :
                                                            if(match_cons(n_48, sym_Op_2))
                                                              {
                                                                o_48 = ATgetArgument(n_48, 0);
                                                                p_48 = ATgetArgument(n_48, 1);
                                                                u_45 :
                                                                if(match_string(o_48, "Nil"))
                                                                  {
                                                                    v_45 :
                                                                    if(((ATermList) p_48 == ATempty))
                                                                      {
                                                                        w_45 :
                                                                        if(((ATermList) q_48 == ATempty))
                                                                          {
                                                                            x_45 :
                                                                            if(((ATermList) r_48 == ATempty))
                                                                              {
                                                                                {
                                                                                  if(((b_47 != NULL) && (b_47 != e_48)))
                                                                                    _fail(e_48);
                                                                                  else
                                                                                    b_47 = e_48;
                                                                                  {
                                                                                    if(((z_47 != NULL) && (z_47 != l_48)))
                                                                                      _fail(l_48);
                                                                                    else
                                                                                      z_47 = l_48;
                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, term_t_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_47))), not_null(b_47)));
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
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
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
                    s_48 = t;
                    if(((a_48 != NULL) && (a_48 != s_48)))
                      _fail(s_48);
                    else
                      a_48 = s_48;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Match_1, not_null(a_48));
                LocalPopChoice(v_13);
              }
            else
              {
                t = u_13;
                {
                  ATerm u_48 = NULL,v_48 = NULL;
                  ATerm h_49 = NULL;
                  t = not_null(b_47);
                  {
                    ATerm x_1 (ATerm t)
                    {
                      ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL;
                      w_48 = t;
                      a_46 :
                      if(match_cons(w_48, sym_Op_2))
                        {
                          x_48 = ATgetArgument(w_48, 0);
                          y_48 = ATgetArgument(w_48, 1);
                          b_46 :
                          if(match_string(x_48, "Cons"))
                            {
                              e_46 :
                              if(((ATgetType(y_48) == AT_LIST) && ((ATermList) y_48 != ATempty)))
                                {
                                  z_48 = ATgetFirst((ATermList) y_48);
                                  c_49 = (ATerm) ATgetNext((ATermList) y_48);
                                  f_46 :
                                  if(match_cons(z_48, sym_Var_1))
                                    {
                                      a_49 = ATgetArgument(z_48, 0);
                                      g_46 :
                                      if(match_cons(a_49, sym_ListVar_1))
                                        {
                                          b_49 = ATgetArgument(a_49, 0);
                                          h_46 :
                                          if(((ATgetType(c_49) == AT_LIST) && ((ATermList) c_49 != ATempty)))
                                            {
                                              d_49 = ATgetFirst((ATermList) c_49);
                                              g_49 = (ATerm) ATgetNext((ATermList) c_49);
                                              i_46 :
                                              if(match_cons(d_49, sym_Op_2))
                                                {
                                                  e_49 = ATgetArgument(d_49, 0);
                                                  f_49 = ATgetArgument(d_49, 1);
                                                  j_46 :
                                                  if(match_string(e_49, "Nil"))
                                                    {
                                                      k_46 :
                                                      if(((ATermList) f_49 == ATempty))
                                                        {
                                                          r_46 :
                                                          if(((ATermList) g_49 == ATempty))
                                                            {
                                                              {
                                                                if(((u_48 != NULL) && (u_48 != b_49)))
                                                                  _fail(b_49);
                                                                else
                                                                  u_48 = b_49;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_48));
                                                              }
                                                            }
                                                          else
                                                            {
                                                              _fail(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, x_1);
                    {
                      h_49 = t;
                      if(((v_48 != NULL) && (v_48 != h_49)))
                        _fail(h_49);
                      else
                        v_48 = h_49;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Match_1, not_null(v_48));
                }
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
ATerm HL_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
  h_51 = t;
  x_50 :
  if(match_cons(h_51, sym_InfixApp_3))
    {
      i_51 = ATgetArgument(h_51, 0);
      e_51 = ATgetArgument(h_51, 1);
      d_51 = ATgetArgument(h_51, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(e_51), (ATerm) ATmakeAppl(sym_Op_2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_51)), not_null(i_51))));
    }
  else
    {
      if(match_cons(h_51, sym_BAM_3))
        {
          i_51 = ATgetArgument(h_51, 0);
          e_51 = ATgetArgument(h_51, 1);
          d_51 = ATgetArgument(h_51, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(d_51))), not_null(i_51)), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_51))));
        }
      else
        {
          if(match_cons(h_51, sym_AM_2))
            {
              i_51 = ATgetArgument(h_51, 0);
              e_51 = ATgetArgument(h_51, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_51), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_51)));
            }
          else
            {
              if(match_cons(h_51, sym_MA_2))
                {
                  i_51 = ATgetArgument(h_51, 0);
                  e_51 = ATgetArgument(h_51, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_51)), not_null(e_51));
                }
              else
                {
                  if(match_cons(h_51, sym_BA_2))
                    {
                      i_51 = ATgetArgument(h_51, 0);
                      e_51 = ATgetArgument(h_51, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_51)), not_null(i_51));
                    }
                  else
                    {
                      if(match_cons(h_51, sym_Lets_2))
                        {
                          i_51 = ATgetArgument(h_51, 0);
                          e_51 = ATgetArgument(h_51, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(i_51), not_null(e_51));
                        }
                      else
                        {
                          if(match_cons(h_51, sym_LChoices_1))
                            {
                              i_51 = ATgetArgument(h_51, 0);
                              y_50 :
                              if(((ATgetType(i_51) == AT_LIST) && ((ATermList) i_51 != ATempty)))
                                {
                                  f_51 = ATgetFirst((ATermList) i_51);
                                  g_51 = (ATerm) ATgetNext((ATermList) i_51);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_51), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(g_51)));
                                }
                              else
                                {
                                  if(((ATermList) i_51 == ATempty))
                                    {
                                      t = term_w_13;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(h_51, sym_Choices_1))
                                {
                                  i_51 = ATgetArgument(h_51, 0);
                                  z_50 :
                                  if(((ATgetType(i_51) == AT_LIST) && ((ATermList) i_51 != ATempty)))
                                    {
                                      f_51 = ATgetFirst((ATermList) i_51);
                                      g_51 = (ATerm) ATgetNext((ATermList) i_51);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_51), (ATerm) ATmakeAppl(sym_Choices_1, not_null(g_51)));
                                    }
                                  else
                                    {
                                      if(((ATermList) i_51 == ATempty))
                                        {
                                          t = term_w_13;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(h_51, sym_Seqs_1))
                                    {
                                      i_51 = ATgetArgument(h_51, 0);
                                      c_51 :
                                      if(((ATgetType(i_51) == AT_LIST) && ((ATermList) i_51 != ATempty)))
                                        {
                                          f_51 = ATgetFirst((ATermList) i_51);
                                          g_51 = (ATerm) ATgetNext((ATermList) i_51);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_51), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_51)));
                                        }
                                      else
                                        {
                                          if(((ATermList) i_51 == ATempty))
                                            {
                                              t = term_o_11;
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
  ATerm y_52 = NULL;
  y_52 = t;
  x_52 :
  if(match_cons(y_52, sym_Wld_0))
    {
      ATerm a_53 = NULL,c_53 = NULL;
      ATerm x_13;
      x_13 = t;
      {
        ATerm b_53 = NULL;
        t = SSLgetAnnotations(not_null(y_52));
        {
          b_53 = t;
          if(((a_53 != NULL) && (a_53 != b_53)))
            _fail(b_53);
          else
            a_53 = b_53;
        }
      }
      t = x_13;
      {
        ATerm d_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(a_53));
        {
          d_53 = t;
          if(((c_53 != NULL) && (c_53 != d_53)))
            _fail(d_53);
          else
            c_53 = d_53;
        }
        t = not_null(c_53);
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
  ATerm y_13 = t;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, y_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_13;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm))
{
  ATerm o_53 = NULL,p_53 = NULL,t_53 = NULL;
  o_53 = t;
  n_53 :
  if(match_cons(o_53, sym_App_2))
    {
      p_53 = ATgetArgument(o_53, 0);
      t_53 = ATgetArgument(o_53, 1);
      {
        ATerm x_53 = NULL,z_53 = NULL;
        ATerm y_53 = NULL;
        t = SSLgetAnnotations(not_null(o_53));
        {
          y_53 = t;
          if(((x_53 != NULL) && (x_53 != y_53)))
            _fail(y_53);
          else
            x_53 = y_53;
        }
        {
          t = not_null(p_53);
          {
            ATerm b_54 = NULL;
            t = s_75(t);
            {
              z_53 = t;
              {
                t = not_null(t_53);
                {
                  ATerm d_54 = NULL;
                  t = t_75(t);
                  {
                    b_54 = t;
                    {
                      ATerm e_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(z_53), not_null(b_54)), not_null(x_53));
                      {
                        e_54 = t;
                        if(((d_54 != NULL) && (d_54 != e_54)))
                          _fail(e_54);
                        else
                          d_54 = e_54;
                      }
                      t = not_null(d_54);
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
ATerm Con_3 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm))
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  r_54 = t;
  q_54 :
  if(match_cons(r_54, sym_Con_3))
    {
      s_54 = ATgetArgument(r_54, 0);
      t_54 = ATgetArgument(r_54, 1);
      u_54 = ATgetArgument(r_54, 2);
      {
        ATerm z_54 = NULL,b_55 = NULL;
        ATerm a_55 = NULL;
        t = SSLgetAnnotations(not_null(r_54));
        {
          a_55 = t;
          if(((z_54 != NULL) && (z_54 != a_55)))
            _fail(a_55);
          else
            z_54 = a_55;
        }
        {
          t = not_null(s_54);
          {
            ATerm d_55 = NULL;
            t = p_75(t);
            {
              b_55 = t;
              {
                t = not_null(t_54);
                {
                  ATerm f_55 = NULL;
                  t = q_75(t);
                  {
                    d_55 = t;
                    {
                      t = not_null(u_54);
                      {
                        ATerm h_55 = NULL;
                        t = r_75(t);
                        {
                          f_55 = t;
                          {
                            ATerm i_55 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(b_55), not_null(d_55), not_null(f_55)), not_null(z_54));
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
  ATerm b_14 = t;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm c_14 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(d_14);
          }
        else
          {
            t = c_14;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, z_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_14;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  t_55 = t;
  r_55 :
  if(match_cons(t_55, sym_SRule_1))
    {
      u_55 = ATgetArgument(t_55, 0);
      s_55 :
      if(match_cons(u_55, sym_StratRule_3))
        {
          v_55 = ATgetArgument(u_55, 0);
          w_55 = ATgetArgument(u_55, 1);
          x_55 = ATgetArgument(u_55, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_55)), (ATerm) ATmakeAppl(sym_Where_1, not_null(x_55))), not_null(v_55)));
        }
      else
        {
          if(match_cons(u_55, sym_Rule_3))
            {
              v_55 = ATgetArgument(u_55, 0);
              w_55 = ATgetArgument(u_55, 1);
              x_55 = ATgetArgument(u_55, 2);
              {
                t = not_null(v_55);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(w_55);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(w_55))), (ATerm) ATmakeAppl(sym_Where_1, not_null(x_55))), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_55))));
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
ATerm oncetd_1 (ATerm t, ATerm p_104 (ATerm))
{
  ATerm g_56 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_104(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = _one(t, g_56);
      }
    return(t);
  }
  t = g_56(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL;
  v_56 = t;
  t_56 :
  if(match_cons(v_56, sym_SRule_1))
    {
      w_56 = ATgetArgument(v_56, 0);
      u_56 :
      if(match_cons(w_56, sym_Rule_3))
        {
          x_56 = ATgetArgument(w_56, 0);
          y_56 = ATgetArgument(w_56, 1);
          z_56 = ATgetArgument(w_56, 2);
          {
            ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,o_57 = NULL,p_57 = NULL;
            ATerm q_57 = NULL;
            ATerm w_57 = NULL;
            t = new_0(t);
            {
              q_57 = t;
              {
                if(((i_57 != NULL) && (i_57 != q_57)))
                  _fail(q_57);
                else
                  i_57 = q_57;
                {
                  t = not_null(x_56);
                  {
                    ATerm e_58 = NULL;
                    ATerm a_2 (ATerm t)
                    {
                      ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL;
                      r_57 = t;
                      k_56 :
                      if(match_cons(r_57, sym_Con_3))
                        {
                          s_57 = ATgetArgument(r_57, 0);
                          u_57 = ATgetArgument(r_57, 1);
                          v_57 = ATgetArgument(r_57, 2);
                          l_56 :
                          if(match_cons(s_57, sym_Var_1))
                            {
                              t_57 = ATgetArgument(s_57, 0);
                              {
                                if(((h_57 != NULL) && (h_57 != t_57)))
                                  _fail(t_57);
                                else
                                  h_57 = t_57;
                                {
                                  if(((f_57 != NULL) && (f_57 != u_57)))
                                    _fail(u_57);
                                  else
                                    f_57 = u_57;
                                  {
                                    if(((d_57 != NULL) && (d_57 != v_57)))
                                      _fail(v_57);
                                    else
                                      d_57 = v_57;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_57));
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
                    t = oncetd_1(t, a_2);
                    {
                      w_57 = t;
                      {
                        if(((o_57 != NULL) && (o_57 != w_57)))
                          _fail(w_57);
                        else
                          o_57 = w_57;
                        {
                          t = not_null(y_56);
                          {
                            ATerm b_2 (ATerm t)
                            {
                              ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
                              x_57 = t;
                              o_56 :
                              if(match_cons(x_57, sym_Con_3))
                                {
                                  y_57 = ATgetArgument(x_57, 0);
                                  a_58 = ATgetArgument(x_57, 1);
                                  b_58 = ATgetArgument(x_57, 2);
                                  p_56 :
                                  if(match_cons(y_57, sym_Var_1))
                                    {
                                      z_57 = ATgetArgument(y_57, 0);
                                      q_56 :
                                      if(match_cons(b_58, sym_Call_2))
                                        {
                                          c_58 = ATgetArgument(b_58, 0);
                                          d_58 = ATgetArgument(b_58, 1);
                                          r_56 :
                                          if(((ATermList) d_58 == ATempty))
                                            {
                                              {
                                                if(((h_57 != NULL) && (h_57 != z_57)))
                                                  _fail(z_57);
                                                else
                                                  h_57 = z_57;
                                                {
                                                  if(((g_57 != NULL) && (g_57 != a_58)))
                                                    _fail(a_58);
                                                  else
                                                    g_57 = a_58;
                                                  {
                                                    if(((e_57 != NULL) && (e_57 != c_58)))
                                                      _fail(c_58);
                                                    else
                                                      e_57 = c_58;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_57));
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
                            t = oncetd_1(t, b_2);
                            {
                              e_58 = t;
                              if(((p_57 != NULL) && (p_57 != e_58)))
                                _fail(e_58);
                              else
                                p_57 = e_58;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_57)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_57), not_null(p_57), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_56), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(e_57), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_57), not_null(g_57), term_o_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_57)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_57)))))));
          }
        }
      else
        {
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
  ATerm c_2 (ATerm t)
  {
    ATerm g_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(n_14);
      }
    else
      {
        t = g_14;
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, c_2);
  return(t);
}
ATerm ListVarScope_0 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
  c_59 = t;
  b_59 :
  if(match_cons(c_59, sym_Scope_2))
    {
      d_59 = ATgetArgument(c_59, 0);
      e_59 = ATgetArgument(c_59, 1);
      {
        ATerm h_59 = NULL;
        ATerm p_59 = NULL;
        t = not_null(d_59);
        {
          ATerm d_2 (ATerm t)
          {
            ATerm e_2 (ATerm t)
            {
              ATerm i_59 = NULL,j_59 = NULL;
              i_59 = t;
              s_58 :
              if(match_cons(i_59, sym_ListVar_1))
                {
                  j_59 = ATgetArgument(i_59, 0);
                  t = not_null(j_59);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = try_1(t, e_2);
            return(t);
          }
          t = map_1(t, d_2);
          {
            p_59 = t;
            if(((h_59 != NULL) && (h_59 != p_59)))
              _fail(p_59);
            else
              h_59 = p_59;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_59), not_null(e_59));
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
  ATerm f_2 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      ATerm q_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0(t);
          LocalPopChoice(r_14);
        }
      else
        {
          t = q_14;
          t = desugarRule_0(t);
        }
      return(t);
    }
    t = try_1(t, g_2);
    {
      ATerm h_2 (ATerm t)
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_14 = t;
            int a_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0(t);
                LocalPopChoice(a_15);
              }
            else
              {
                t = w_14;
                {
                  ATerm h_15 = t;
                  int i_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0(t);
                      LocalPopChoice(i_15);
                    }
                  else
                    {
                      t = h_15;
                      t = ListBuild_0(t);
                    }
                }
              }
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            t = SingleListVar_0(t);
          }
        return(t);
      }
      t = repeat_1(t, h_2);
    }
    return(t);
  }
  t = topdown_1(t, f_2);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,i_60 = NULL,j_60 = NULL;
  c_60 = t;
  x_59 :
  if(match_cons(c_60, sym_SDef_3))
    {
      d_60 = ATgetArgument(c_60, 0);
      i_60 = ATgetArgument(c_60, 1);
      j_60 = ATgetArgument(c_60, 2);
      {
        ATerm n_60 = NULL;
        ATerm o_60 = NULL;
        t = not_null(j_60);
        {
          t = tvars_0(t);
          {
            o_60 = t;
            if(((n_60 != NULL) && (n_60 != o_60)))
              _fail(o_60);
            else
              n_60 = o_60;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_60), not_null(i_60), (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_60), not_null(j_60)));
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
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL;
  u_60 = t;
  t_60 :
  if(match_cons(u_60, sym_RDef_3))
    {
      v_60 = ATgetArgument(u_60, 0);
      w_60 = ATgetArgument(u_60, 1);
      x_60 = ATgetArgument(u_60, 2);
      {
        ATerm b_61 = NULL;
        ATerm c_61 = NULL;
        t = not_null(x_60);
        {
          t = tvars_0(t);
          {
            c_61 = t;
            if(((b_61 != NULL) && (b_61 != c_61)))
              _fail(c_61);
            else
              b_61 = c_61;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_60), not_null(w_60), (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_61), (ATerm) ATmakeAppl(sym_SRule_1, not_null(x_60))));
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
  ATerm g_61 = NULL;
  g_61 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_61)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL;
  f_62 = t;
  u_61 :
  if(match_cons(f_62, sym_OpDecl_2))
    {
      g_62 = ATgetArgument(f_62, 0);
      h_62 = ATgetArgument(f_62, 1);
      d_62 :
      if(match_cons(h_62, sym_FunType_2))
        {
          i_62 = ATgetArgument(h_62, 0);
          e_62 = ATgetArgument(h_62, 1);
          {
            ATerm q_62 = NULL,r_62 = NULL,z_62 = NULL;
            ATerm j_15;
            j_15 = t;
            {
              ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL;
              t = not_null(i_62);
              {
                ATerm i_2 (ATerm t)
                {
                  ATerm s_62 = NULL,u_62 = NULL;
                  t = new_0(t);
                  {
                    ATerm k_15;
                    k_15 = t;
                    {
                      ATerm t_62 = NULL;
                      t_62 = t;
                      if(((s_62 != NULL) && (s_62 != t_62)))
                        _fail(t_62);
                      else
                        s_62 = t_62;
                    }
                    t = k_15;
                    {
                      ATerm v_62 = NULL;
                      v_62 = t;
                      if(((u_62 != NULL) && (u_62 != v_62)))
                        _fail(v_62);
                      else
                        u_62 = v_62;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(s_62), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_15), term_n_15)), not_null(u_62));
                    }
                  }
                  return(t);
                }
                t = map_1(t, i_2);
                {
                  t = unzip_0(t);
                  {
                    w_62 = t;
                    s_61 :
                    if(match_cons(w_62, sym__2))
                      {
                        x_62 = ATgetArgument(w_62, 0);
                        y_62 = ATgetArgument(w_62, 1);
                        {
                          if(((q_62 != NULL) && (q_62 != x_62)))
                            _fail(x_62);
                          else
                            q_62 = x_62;
                          if(((r_62 != NULL) && (r_62 != y_62)))
                            _fail(y_62);
                          else
                            r_62 = y_62;
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
            t = j_15;
            {
              ATerm a_63 = NULL;
              t = not_null(r_62);
              {
                t = map_1(t, MkCall_0);
                {
                  a_63 = t;
                  if(((z_62 != NULL) && (z_62 != a_63)))
                    _fail(a_63);
                  else
                    z_62 = a_63;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_62), not_null(q_62), (ATerm) ATmakeAppl(sym_Cong_2, not_null(g_62), not_null(z_62)));
            }
          }
        }
      else
        {
          if(match_cons(h_62, sym_ConstType_1))
            {
              i_62 = ATgetArgument(h_62, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_62), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(g_62), (ATerm) ATempty));
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
  ATerm m_63 = NULL,n_63 = NULL;
  m_63 = t;
  l_63 :
  if(match_cons(m_63, sym_Constructors_1))
    {
      n_63 = ATgetArgument(m_63, 0);
      {
        t = not_null(n_63);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(m_63, sym_Sorts_1))
        {
          n_63 = ATgetArgument(m_63, 0);
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
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL;
  c_64 = t;
  w_63 :
  if(match_cons(c_64, sym_Specification_1))
    {
      d_64 = ATgetArgument(c_64, 0);
      x_63 :
      if(((ATgetType(d_64) == AT_LIST) && ((ATermList) d_64 != ATempty)))
        {
          e_64 = ATgetFirst((ATermList) d_64);
          g_64 = (ATerm) ATgetNext((ATermList) d_64);
          y_63 :
          if(match_cons(e_64, sym_Signature_1))
            {
              f_64 = ATgetArgument(e_64, 0);
              z_63 :
              if(((ATgetType(g_64) == AT_LIST) && ((ATermList) g_64 != ATempty)))
                {
                  h_64 = ATgetFirst((ATermList) g_64);
                  j_64 = (ATerm) ATgetNext((ATermList) g_64);
                  a_64 :
                  if(match_cons(h_64, sym_Strategies_1))
                    {
                      i_64 = ATgetArgument(h_64, 0);
                      b_64 :
                      if(((ATermList) j_64 == ATempty))
                        {
                          {
                            ATerm q_64 = NULL;
                            ATerm r_64 = NULL,t_64 = NULL,v_64 = NULL;
                            ATerm o_15;
                            o_15 = t;
                            {
                              ATerm s_64 = NULL;
                              t = not_null(f_64);
                              {
                                t = congdefs_0(t);
                                {
                                  s_64 = t;
                                  if(((r_64 != NULL) && (r_64 != s_64)))
                                    _fail(s_64);
                                  else
                                    r_64 = s_64;
                                }
                              }
                            }
                            t = o_15;
                            {
                              ATerm u_64 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(i_64)), (ATerm) ATmakeAppl(sym_RDef_3, term_q_15, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_s_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_15), term_n_15))), (ATerm) ATmakeAppl(sym_VarDec_2, term_r_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_15), term_n_15))), (ATerm) ATmakeAppl(sym_Rule_3, term_c_16, term_g_17, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_17), term_j_17)))));
                              {
                                ATerm j_2 (ATerm t)
                                {
                                  ATerm n_17 = t;
                                  int o_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      LocalPopChoice(o_17);
                                    }
                                  else
                                    {
                                      t = n_17;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, j_2);
                                {
                                  u_64 = t;
                                  if(((t_64 != NULL) && (t_64 != u_64)))
                                    _fail(u_64);
                                  else
                                    t_64 = u_64;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_64), not_null(t_64));
                                {
                                  t = conc_0(t);
                                  {
                                    v_64 = t;
                                    if(((q_64 != NULL) && (q_64 != v_64)))
                                      _fail(v_64);
                                    else
                                      q_64 = v_64;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(q_64))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(f_64))));
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm g_65 = NULL;
  ATerm l_65 = NULL,m_65 = NULL,t_65 = NULL;
  t = term_p_17;
  {
    ATerm k_2 (ATerm t)
    {
      t = term_q_17;
      return(t);
    }
    t = rewrite_1(t, k_2);
    {
      l_65 = t;
      e_65 :
      if(match_cons(l_65, sym_Defined_2))
        {
          m_65 = ATgetArgument(l_65, 0);
          t_65 = ATgetArgument(l_65, 1);
          f_65 :
          if(match_string(m_65, "g_0"))
            {
              if(((g_65 != NULL) && (g_65 != t_65)))
                _fail(t_65);
              else
                g_65 = t_65;
            }
          else
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
  t = not_null(g_65);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm w_65 = NULL;
  w_65 = t;
  t = SSL_int_to_string(not_null(w_65));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm d_67 = NULL,p_68 = NULL,v_68 = NULL;
  d_67 = t;
  c_67 :
  if(match_cons(d_67, sym_Op_2))
    {
      p_68 = ATgetArgument(d_67, 0);
      v_68 = ATgetArgument(d_67, 1);
      {
        ATerm y_68 = NULL,z_68 = NULL;
        ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL;
        t = term_p_17;
        {
          ATerm l_2 (ATerm t)
          {
            t = term_r_17;
            return(t);
          }
          t = rewrite_1(t, l_2);
          {
            a_69 = t;
            c_66 :
            if(match_cons(a_69, sym_Defined_3))
              {
                b_69 = ATgetArgument(a_69, 0);
                c_69 = ATgetArgument(a_69, 1);
                d_69 = ATgetArgument(a_69, 2);
                b_67 :
                if(match_string(b_69, "h_0"))
                  {
                    ATerm e_69 = NULL;
                    if(((z_68 != NULL) && (z_68 != c_69)))
                      _fail(c_69);
                    else
                      z_68 = c_69;
                    {
                      if(((y_68 != NULL) && (y_68 != d_69)))
                        _fail(d_69);
                      else
                        y_68 = d_69;
                      {
                        ATerm f_69 = NULL;
                        t = not_null(v_68);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              f_69 = t;
                              if(((e_69 != NULL) && (e_69 != f_69)))
                                _fail(f_69);
                              else
                                e_69 = f_69;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_18), not_null(e_69)), term_d_18), not_null(p_68)), term_c_18), term_b_18), not_null(z_68)), term_a_18), not_null(y_68)), term_z_17));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(p_68), not_null(v_68));
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
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
  l_69 = t;
  k_69 :
  if(match_cons(l_69, sym__2))
    {
      m_69 = ATgetArgument(l_69, 0);
      n_69 = ATgetArgument(l_69, 1);
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(m_69), not_null(n_69));
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            t = SSL_subtr(not_null(m_69), not_null(n_69));
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
  ATerm m_2 (ATerm t)
  {
    ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
    z_69 = t;
    s_69 :
    if(match_cons(z_69, sym__2))
      {
        a_70 = ATgetArgument(z_69, 0);
        b_70 = ATgetArgument(z_69, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(a_70), not_null(b_70), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL;
    g_70 = t;
    u_69 :
    if(match_cons(g_70, sym__3))
      {
        h_70 = ATgetArgument(g_70, 0);
        i_70 = ATgetArgument(g_70, 1);
        j_70 = ATgetArgument(g_70, 2);
        v_69 :
        if(match_int(h_70, 0))
          {
            t = not_null(j_70);
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL;
    m_70 = t;
    y_69 :
    if(match_cons(m_70, sym__3))
      {
        n_70 = ATgetArgument(m_70, 0);
        o_70 = ATgetArgument(m_70, 1);
        p_70 = ATgetArgument(m_70, 2);
        {
          ATerm t_70 = NULL;
          ATerm h_18;
          h_18 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_70), term_m_18);
            t = geq_0(t);
          }
          t = h_18;
          {
            ATerm u_70 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_70), term_m_18);
            {
              t = subt_0(t);
              {
                u_70 = t;
                if(((t_70 != NULL) && (t_70 != u_70)))
                  _fail(u_70);
                else
                  t_70 = u_70;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_70), not_null(o_70), (ATerm) ATinsert(CheckATermList(not_null(p_70)), not_null(o_70)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm CheckTuple_0 (ATerm t)
{
  ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL;
  i_71 = t;
  g_71 :
  if(match_cons(i_71, sym_Op_2))
    {
      j_71 = ATgetArgument(i_71, 0);
      k_71 = ATgetArgument(i_71, 1);
      h_71 :
      if(match_string(j_71, ""))
        {
          ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL;
          ATerm n_18;
          n_18 = t;
          {
            ATerm q_71 = NULL;
            t = not_null(k_71);
            {
              ATerm r_71 = NULL;
              t = length_0(t);
              {
                q_71 = t;
                {
                  if(((n_71 != NULL) && (n_71 != q_71)))
                    _fail(q_71);
                  else
                    n_71 = q_71;
                  {
                    ATerm s_71 = NULL,u_71 = NULL;
                    t = term_c_9;
                    {
                      r_71 = t;
                      {
                        if(((m_71 != NULL) && (m_71 != r_71)))
                          _fail(r_71);
                        else
                          m_71 = r_71;
                        {
                          ATerm o_18;
                          o_18 = t;
                          {
                            ATerm t_71 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_71), term_u_18);
                            {
                              t = copy_0(t);
                              {
                                t_71 = t;
                                if(((s_71 != NULL) && (s_71 != t_71)))
                                  _fail(t_71);
                                else
                                  s_71 = t_71;
                              }
                            }
                          }
                          t = o_18;
                          {
                            ATerm v_71 = NULL,x_71 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, not_null(s_71), term_u_18));
                            {
                              u_71 = t;
                              {
                                if(((o_71 != NULL) && (o_71 != u_71)))
                                  _fail(u_71);
                                else
                                  o_71 = u_71;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm w_71 = NULL;
                                    ATerm x_18 = t;
                                    int y_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        LocalPopChoice(y_18);
                                      }
                                    else
                                      {
                                        t = x_18;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      w_71 = t;
                                      if(((v_71 != NULL) && (v_71 != w_71)))
                                        _fail(w_71);
                                      else
                                        v_71 = w_71;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(v_71)), not_null(o_71));
                                      {
                                        x_71 = t;
                                        {
                                          if(((p_71 != NULL) && (p_71 != x_71)))
                                            _fail(x_71);
                                          else
                                            p_71 = x_71;
                                          {
                                            ATerm z_18;
                                            z_18 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATmakeAppl(sym_Defined_2, term_a_19, not_null(p_71)));
                                              {
                                                ATerm p_2 (ATerm t)
                                                {
                                                  t = term_q_17;
                                                  return(t);
                                                }
                                                t = assert_1(t, p_2);
                                              }
                                            }
                                            t = z_18;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = n_18;
        }
      else
        {
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
  ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL;
  h_72 = t;
  g_72 :
  if(((ATgetType(h_72) == AT_LIST) && ((ATermList) h_72 != ATempty)))
    {
      i_72 = ATgetFirst((ATermList) h_72);
      j_72 = (ATerm) ATgetNext((ATermList) h_72);
      t = not_null(i_72);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
  p_72 = t;
  o_72 :
  if(match_cons(p_72, sym__2))
    {
      q_72 = ATgetArgument(p_72, 0);
      r_72 = ATgetArgument(p_72, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_72), not_null(r_72));
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
ATerm rewrite_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm x_72 = NULL;
  ATerm z_72 = NULL;
  x_72 = t;
  {
    ATerm a_73 = NULL;
    t = term_b_19;
    {
      t = c_90(t);
      {
        a_73 = t;
        if(((z_72 != NULL) && (z_72 != a_73)))
          _fail(a_73);
        else
          z_72 = a_73;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), not_null(x_72));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
  q_73 = t;
  p_73 :
  if(match_cons(q_73, sym_Op_2))
    {
      r_73 = ATgetArgument(q_73, 0);
      s_73 = ATgetArgument(q_73, 1);
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_73 = NULL;
            ATerm x_73 = NULL;
            t = not_null(s_73);
            {
              v_73 = t;
              {
                t = length_0(t);
                {
                  x_73 = t;
                  {
                    ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(r_73), not_null(x_73));
                    {
                      ATerm q_2 (ATerm t)
                      {
                        t = term_e_19;
                        return(t);
                      }
                      t = rewrite_1(t, q_2);
                      {
                        z_73 = t;
                        i_73 :
                        if(match_cons(z_73, sym_Defined_2))
                          {
                            a_74 = ATgetArgument(z_73, 0);
                            b_74 = ATgetArgument(z_73, 1);
                            j_73 :
                            if(match_string(a_74, "b_0"))
                              {
                                if(((r_73 != NULL) && (r_73 != b_74)))
                                  _fail(b_74);
                                else
                                  r_73 = b_74;
                              }
                            else
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(r_73), not_null(v_73));
                  }
                }
              }
            }
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            {
              ATerm e_74 = NULL;
              ATerm g_74 = NULL;
              t = not_null(s_73);
              {
                e_74 = t;
                {
                  t = length_0(t);
                  {
                    g_74 = t;
                    {
                      ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(r_73), not_null(g_74));
                      {
                        ATerm r_2 (ATerm t)
                        {
                          t = term_e_19;
                          return(t);
                        }
                        t = rewrite_1(t, r_2);
                        {
                          i_74 = t;
                          n_73 :
                          if(match_cons(i_74, sym_Defined_2))
                            {
                              j_74 = ATgetArgument(i_74, 0);
                              k_74 = ATgetArgument(i_74, 1);
                              o_73 :
                              if(match_string(j_74, "a_0"))
                                {
                                  if(((r_73 != NULL) && (r_73 != k_74)))
                                    _fail(k_74);
                                  else
                                    r_73 = k_74;
                                }
                              else
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
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(r_73), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm x_105 (ATerm))
{
  ATerm t_74 (ATerm t)
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_105(t);
        {
          ATerm s_2 (ATerm t)
          {
            t = try_1(t, t_74);
            return(t);
          }
          t = _all(t, s_2);
        }
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = _some(t, t_74);
      }
    return(t);
  }
  t = t_74(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL;
  x_74 = t;
  w_74 :
  if(match_cons(x_74, sym__2))
    {
      y_74 = ATgetArgument(x_74, 0);
      z_74 = ATgetArgument(x_74, 1);
      {
        ATerm l_19;
        l_19 = t;
        {
          ATerm c_75 = NULL;
          ATerm d_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_74), not_null(z_74));
          {
            ATerm m_19 = t;
            int n_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(n_19);
              }
            else
              {
                t = m_19;
                t = (ATerm) ATempty;
              }
            {
              d_75 = t;
              if(((c_75 != NULL) && (c_75 != d_75)))
                _fail(d_75);
              else
                c_75 = d_75;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_74), not_null(z_74), not_null(c_75));
            t = table_put_0(t);
          }
        }
        t = l_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm x_89 (ATerm))
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL;
  ATerm r_19;
  r_19 = t;
  {
    ATerm d_76 = NULL;
    ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
    t = x_89(t);
    {
      d_76 = t;
      {
        if(((b_76 != NULL) && (b_76 != d_76)))
          _fail(d_76);
        else
          b_76 = d_76;
        {
          ATerm t_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_76), term_x_19);
              t = table_get_0(t);
              LocalPopChoice(w_19);
            }
          else
            {
              t = t_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            e_76 = t;
            x_75 :
            if(((ATgetType(e_76) == AT_LIST) && ((ATermList) e_76 != ATempty)))
              {
                f_76 = ATgetFirst((ATermList) e_76);
                g_76 = (ATerm) ATgetNext((ATermList) e_76);
                {
                  if(((c_76 != NULL) && (c_76 != f_76)))
                    _fail(f_76);
                  else
                    c_76 = f_76;
                  {
                    if(((a_76 != NULL) && (a_76 != g_76)))
                      _fail(g_76);
                    else
                      a_76 = g_76;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_76), term_x_19, not_null(a_76));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(c_76);
                          {
                            ATerm t_2 (ATerm t)
                            {
                              ATerm h_76 = NULL;
                              h_76 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_76), not_null(h_76));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, t_2);
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
  t = r_19;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm q_107 (ATerm), ATerm r_107 (ATerm))
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_107(t);
      t = r_107(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        t = r_107(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm w_89 (ATerm))
{
  ATerm v_76 = NULL;
  ATerm a_20;
  a_20 = t;
  {
    ATerm w_76 = NULL;
    ATerm c_77 = NULL;
    t = w_89(t);
    {
      w_76 = t;
      {
        if(((v_76 != NULL) && (v_76 != w_76)))
          _fail(w_76);
        else
          v_76 = w_76;
        {
          ATerm e_77 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_76), term_x_19);
          {
            ATerm b_20 = t;
            int c_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_20);
              }
            else
              {
                t = b_20;
                t = (ATerm) ATempty;
              }
            {
              e_77 = t;
              if(((c_77 != NULL) && (c_77 != e_77)))
                _fail(e_77);
              else
                c_77 = e_77;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_76), term_x_19, (ATerm) ATinsert(CheckATermList(not_null(c_77)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = a_20;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm y_89 (ATerm), ATerm z_89 (ATerm))
{
  t = begin_scope_1(t, y_89);
  {
    ATerm u_2 (ATerm t)
    {
      t = end_scope_1(t, y_89);
      return(t);
    }
    t = restore_always_2(t, z_89, u_2);
  }
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm j_80 (ATerm), ATerm k_80 (ATerm))
{
  ATerm k_77 = NULL,l_77 = NULL;
  ATerm v_2 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm d_20;
    d_20 = t;
    {
      ATerm m_77 = NULL;
      ATerm n_77 = NULL;
      t = j_80(t);
      {
        m_77 = t;
        {
          if(((k_77 != NULL) && (k_77 != m_77)))
            _fail(m_77);
          else
            k_77 = m_77;
          {
            t = k_80(t);
            {
              n_77 = t;
              if(((l_77 != NULL) && (l_77 != n_77)))
                _fail(n_77);
              else
                l_77 = n_77;
            }
          }
        }
      }
    }
    t = d_20;
    {
      ATerm g_20;
      g_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATmakeAppl(sym_Defined_3, term_h_20, not_null(k_77), not_null(l_77)));
        {
          ATerm x_2 (ATerm t)
          {
            t = term_r_17;
            return(t);
          }
          t = assert_1(t, x_2);
        }
      }
      t = g_20;
      {
        ATerm y_2 (ATerm t)
        {
          ATerm k_20 = t;
          if((PushChoice() == 0))
            {
              ATerm o_20 = t;
              int v_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  LocalPopChoice(v_20);
                }
              else
                {
                  t = o_20;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_20;
            }
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, y_2);
      }
    }
    return(t);
  }
  t = scope_2(t, v_2, w_2);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL;
  v_77 = t;
  s_77 :
  if(match_cons(v_77, sym_SDef_3))
    {
      w_77 = ATgetArgument(v_77, 0);
      x_77 = ATgetArgument(v_77, 1);
      y_77 = ATgetArgument(v_77, 2);
      {
        t = not_null(y_77);
        {
          ATerm z_2 (ATerm t)
          {
            t = not_null(w_77);
            return(t);
          }
          ATerm a_3 (ATerm t)
          {
            t = term_e_21;
            return(t);
          }
          t = check_constructors_p__2(t, z_2, a_3);
        }
      }
    }
  else
    {
      if(match_cons(v_77, sym_RDef_3))
        {
          w_77 = ATgetArgument(v_77, 0);
          x_77 = ATgetArgument(v_77, 1);
          y_77 = ATgetArgument(v_77, 2);
          {
            t = not_null(y_77);
            {
              ATerm b_3 (ATerm t)
              {
                t = not_null(w_77);
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = term_f_21;
                return(t);
              }
              t = check_constructors_p__2(t, b_3, c_3);
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
ATerm assert_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL;
  u_78 = t;
  t_78 :
  if(match_cons(u_78, sym__2))
    {
      v_78 = ATgetArgument(u_78, 0);
      w_78 = ATgetArgument(u_78, 1);
      {
        ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
        ATerm g_21;
        g_21 = t;
        {
          ATerm c_79 = NULL;
          ATerm d_79 = NULL,g_79 = NULL,h_79 = NULL;
          t = a_90(t);
          {
            c_79 = t;
            {
              if(((z_78 != NULL) && (z_78 != c_79)))
                _fail(c_79);
              else
                z_78 = c_79;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(z_78), not_null(v_78), not_null(w_78));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_21 = t;
                    int i_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_78), term_x_19);
                        t = table_get_0(t);
                        LocalPopChoice(i_21);
                      }
                    else
                      {
                        t = h_21;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      d_79 = t;
                      k_78 :
                      if(((ATgetType(d_79) == AT_LIST) && ((ATermList) d_79 != ATempty)))
                        {
                          g_79 = ATgetFirst((ATermList) d_79);
                          h_79 = (ATerm) ATgetNext((ATermList) d_79);
                          {
                            if(((a_79 != NULL) && (a_79 != g_79)))
                              _fail(g_79);
                            else
                              a_79 = g_79;
                            {
                              if(((b_79 != NULL) && (b_79 != h_79)))
                                _fail(h_79);
                              else
                                b_79 = h_79;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(z_78), term_x_19, (ATerm) ATinsert(CheckATermList(not_null(b_79)), (ATerm) ATinsert(CheckATermList(not_null(a_79)), not_null(v_78))));
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
        t = g_21;
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
  ATerm d_3 (ATerm t)
  {
    t = term_j_21;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_m_18;
    return(t);
  }
  t = foldr_3(t, d_3, add_0, e_3);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL;
  a_80 = t;
  x_79 :
  if(match_cons(a_80, sym_OpDecl_2))
    {
      b_80 = ATgetArgument(a_80, 0);
      c_80 = ATgetArgument(a_80, 1);
      y_79 :
      if(match_cons(c_80, sym_FunType_2))
        {
          d_80 = ATgetArgument(c_80, 0);
          z_79 = ATgetArgument(c_80, 1);
          {
            ATerm o_80 = NULL;
            ATerm k_21;
            k_21 = t;
            {
              ATerm x_80 = NULL;
              t = not_null(d_80);
              {
                t = length_0(t);
                {
                  x_80 = t;
                  if(((o_80 != NULL) && (o_80 != x_80)))
                    _fail(x_80);
                  else
                    o_80 = x_80;
                }
              }
            }
            t = k_21;
            {
              ATerm l_21;
              l_21 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(b_80), not_null(o_80)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_21, not_null(b_80)));
                {
                  ATerm f_3 (ATerm t)
                  {
                    t = term_e_19;
                    return(t);
                  }
                  t = assert_1(t, f_3);
                }
              }
              t = l_21;
            }
          }
        }
      else
        {
          if(match_cons(c_80, sym_ConstType_1))
            {
              d_80 = ATgetArgument(c_80, 0);
              {
                ATerm a_81 = NULL;
                ATerm q_21;
                q_21 = t;
                {
                  ATerm b_81 = NULL;
                  t = term_j_21;
                  {
                    b_81 = t;
                    if(((a_81 != NULL) && (a_81 != b_81)))
                      _fail(b_81);
                    else
                      a_81 = b_81;
                  }
                }
                t = q_21;
                {
                  ATerm t_21;
                  t_21 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(b_80), not_null(a_81)), (ATerm) ATmakeAppl(sym_Defined_2, term_w_21, not_null(b_80)));
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = term_e_19;
                        return(t);
                      }
                      t = assert_1(t, g_3);
                    }
                  }
                  t = t_21;
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
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL;
  d_82 = t;
  m_81 :
  if(match_cons(d_82, sym_Specification_1))
    {
      e_82 = ATgetArgument(d_82, 0);
      n_81 :
      if(((ATgetType(e_82) == AT_LIST) && ((ATermList) e_82 != ATempty)))
        {
          f_82 = ATgetFirst((ATermList) e_82);
          k_82 = (ATerm) ATgetNext((ATermList) e_82);
          o_81 :
          if(match_cons(f_82, sym_Signature_1))
            {
              g_82 = ATgetArgument(f_82, 0);
              t_81 :
              if(((ATgetType(g_82) == AT_LIST) && ((ATermList) g_82 != ATempty)))
                {
                  h_82 = ATgetFirst((ATermList) g_82);
                  j_82 = (ATerm) ATgetNext((ATermList) g_82);
                  u_81 :
                  if(match_cons(h_82, sym_Constructors_1))
                    {
                      i_82 = ATgetArgument(h_82, 0);
                      v_81 :
                      if(((ATermList) j_82 == ATempty))
                        {
                          a_82 :
                          if(((ATgetType(k_82) == AT_LIST) && ((ATermList) k_82 != ATempty)))
                            {
                              l_82 = ATgetFirst((ATermList) k_82);
                              n_82 = (ATerm) ATgetNext((ATermList) k_82);
                              b_82 :
                              if(match_cons(l_82, sym_Strategies_1))
                                {
                                  m_82 = ATgetArgument(l_82, 0);
                                  c_82 :
                                  if(((ATermList) n_82 == ATempty))
                                    {
                                      {
                                        ATerm q_82 = NULL,r_82 = NULL,v_82 = NULL;
                                        ATerm x_21;
                                        x_21 = t;
                                        {
                                          ATerm s_82 = NULL;
                                          ATerm t_82 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_82)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_18), term_u_18), term_u_18), term_u_18), term_u_18), term_u_18), term_u_18), term_u_18), term_u_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_18), term_u_18), term_u_18), term_u_18), term_u_18), term_u_18), term_u_18), term_u_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_18), term_u_18), term_u_18), term_u_18), term_u_18), term_u_18), term_u_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_18), term_u_18), term_u_18), term_u_18), term_u_18), term_u_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_18), term_u_18), term_u_18), term_u_18), term_u_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_u_18), term_u_18), term_u_18), term_u_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_u_18), term_u_18), term_u_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_18), term_u_18))), term_f_22);
                                          {
                                            s_82 = t;
                                            {
                                              if(((q_82 != NULL) && (q_82 != s_82)))
                                                _fail(s_82);
                                              else
                                                q_82 = s_82;
                                              {
                                                t = not_null(q_82);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(m_82);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        t_82 = t;
                                                        k_81 :
                                                        if(((ATermList) t_82 == ATempty))
                                                          {
                                                            {
                                                              ATerm u_82 = NULL;
                                                              ATerm g_22 = t;
                                                              int p_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  LocalPopChoice(p_22);
                                                                }
                                                              else
                                                                {
                                                                  t = g_22;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                u_82 = t;
                                                                if(((r_82 != NULL) && (r_82 != u_82)))
                                                                  _fail(u_82);
                                                                else
                                                                  r_82 = u_82;
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
                                        t = x_21;
                                        {
                                          ATerm w_82 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_82), not_null(q_82));
                                          {
                                            t = conc_0(t);
                                            {
                                              w_82 = t;
                                              if(((v_82 != NULL) && (v_82 != w_82)))
                                                _fail(w_82);
                                              else
                                                v_82 = w_82;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(m_82))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(v_82))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm q_22;
    q_22 = t;
    {
      ATerm r_22 = t;
      if((PushChoice() == 0))
        {
          ATerm e_83 = NULL;
          t = s_81(t);
          {
            e_83 = t;
            d_83 :
            if(((ATermList) e_83 == ATempty))
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
          t = r_22;
        }
    }
    t = q_22;
    {
      ATerm i_3 (ATerm t)
      {
        ATerm j_3 (ATerm t)
        {
          t = ExpOverlay_1(t, s_81);
          return(t);
        }
        t = try_1(t, j_3);
        return(t);
      }
      t = topdown_1(t, i_3);
    }
    return(t);
  }
  t = try_1(t, h_3);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL;
  o_84 = t;
  m_84 :
  if(match_cons(o_84, sym_BuildDefault_1))
    {
      p_84 = ATgetArgument(o_84, 0);
      t = term_o_11;
    }
  else
    {
      if(match_cons(o_84, sym_Real_1))
        {
          p_84 = ATgetArgument(o_84, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(p_84)));
        }
      else
        {
          if(match_cons(o_84, sym_Int_1))
            {
              p_84 = ATgetArgument(o_84, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(p_84)));
            }
          else
            {
              if(match_cons(o_84, sym_Str_1))
                {
                  p_84 = ATgetArgument(o_84, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(p_84)));
                }
              else
                {
                  if(match_cons(o_84, sym_Anno_2))
                    {
                      p_84 = ATgetArgument(o_84, 0);
                      n_84 = ATgetArgument(o_84, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_84)), not_null(p_84)));
                    }
                  else
                    {
                      if(match_cons(o_84, sym_Op_2))
                        {
                          p_84 = ATgetArgument(o_84, 0);
                          n_84 = ATgetArgument(o_84, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_84)), not_null(n_84));
                        }
                      else
                        {
                          if(match_cons(o_84, sym_Var_1))
                            {
                              p_84 = ATgetArgument(o_84, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_84)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm t_77 (ATerm), ATerm u_77 (ATerm))
{
  ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL;
  s_85 = t;
  l_85 :
  if(match_cons(s_85, sym_Op_2))
    {
      t_85 = ATgetArgument(s_85, 0);
      u_85 = ATgetArgument(s_85, 1);
      {
        ATerm y_85 = NULL,a_86 = NULL;
        ATerm z_85 = NULL;
        t = SSLgetAnnotations(not_null(s_85));
        {
          z_85 = t;
          if(((y_85 != NULL) && (y_85 != z_85)))
            _fail(z_85);
          else
            y_85 = z_85;
        }
        {
          t = not_null(t_85);
          {
            ATerm c_86 = NULL;
            t = t_77(t);
            {
              a_86 = t;
              {
                t = not_null(u_85);
                {
                  ATerm e_86 = NULL;
                  t = u_77(t);
                  {
                    c_86 = t;
                    {
                      ATerm f_86 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(a_86), not_null(c_86)), not_null(y_85));
                      {
                        f_86 = t;
                        if(((e_86 != NULL) && (e_86 != f_86)))
                          _fail(f_86);
                        else
                          e_86 = f_86;
                      }
                      t = not_null(e_86);
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
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, l_3);
    return(t);
  }
  t = try_1(t, k_3);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL;
  u_86 = t;
  t_86 :
  if(match_cons(u_86, sym_Overlay_3))
    {
      v_86 = ATgetArgument(u_86, 0);
      w_86 = ATgetArgument(u_86, 1);
      x_86 = ATgetArgument(u_86, 2);
      {
        ATerm b_87 = NULL,f_87 = NULL;
        ATerm t_22;
        t_22 = t;
        {
          ATerm e_87 = NULL;
          t = not_null(w_86);
          {
            ATerm m_3 (ATerm t)
            {
              ATerm c_87 = NULL;
              ATerm d_87 = NULL;
              d_87 = t;
              if(((c_87 != NULL) && (c_87 != d_87)))
                _fail(d_87);
              else
                c_87 = d_87;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(c_87), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_15), term_n_15));
              return(t);
            }
            t = map_1(t, m_3);
            {
              e_87 = t;
              if(((b_87 != NULL) && (b_87 != e_87)))
                _fail(e_87);
              else
                b_87 = e_87;
            }
          }
        }
        t = t_22;
        {
          ATerm g_87 = NULL;
          t = not_null(x_86);
          {
            t = trm_to_cong_0(t);
            {
              g_87 = t;
              if(((f_87 != NULL) && (f_87 != g_87)))
                _fail(g_87);
              else
                f_87 = g_87;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_86), not_null(b_87), not_null(f_87));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm p_80 (ATerm))
{
  t = Scope_2(t, p_80, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm e_88 = NULL,f_88 = NULL;
  e_88 = t;
  z_87 :
  if(match_cons(e_88, sym_Var_1))
    {
      f_88 = ATgetArgument(e_88, 0);
      {
        ATerm u_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_88 = NULL,k_88 = NULL;
            ATerm j_88 = NULL;
            t = SSLgetAnnotations(not_null(e_88));
            {
              j_88 = t;
              if(((i_88 != NULL) && (i_88 != j_88)))
                _fail(j_88);
              else
                i_88 = j_88;
            }
            {
              t = not_null(f_88);
              {
                ATerm n_88 = NULL;
                t = s_0(t);
                {
                  k_88 = t;
                  {
                    ATerm p_88 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_88)), not_null(i_88));
                    {
                      p_88 = t;
                      if(((n_88 != NULL) && (n_88 != p_88)))
                        _fail(p_88);
                      else
                        n_88 = p_88;
                    }
                    t = not_null(n_88);
                  }
                }
              }
            }
            LocalPopChoice(y_22);
          }
        else
          {
            t = u_22;
            {
              ATerm s_88 = NULL,u_88 = NULL;
              ATerm t_88 = NULL;
              t = SSLgetAnnotations(not_null(e_88));
              {
                t_88 = t;
                if(((s_88 != NULL) && (s_88 != t_88)))
                  _fail(t_88);
                else
                  s_88 = t_88;
              }
              {
                t = not_null(f_88);
                {
                  ATerm w_88 = NULL;
                  t = s_0(t);
                  {
                    u_88 = t;
                    {
                      ATerm x_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_88)), not_null(s_88));
                      {
                        x_88 = t;
                        if(((w_88 != NULL) && (w_88 != x_88)))
                          _fail(x_88);
                        else
                          w_88 = x_88;
                      }
                      t = not_null(w_88);
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
ATerm DistBinding_2 (ATerm t, ATerm f_83 (ATerm), ATerm g_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL;
  l_89 = t;
  k_89 :
  if(match_cons(l_89, sym__3))
    {
      m_89 = ATgetArgument(l_89, 0);
      n_89 = ATgetArgument(l_89, 1);
      o_89 = ATgetArgument(l_89, 2);
      {
        t = not_null(m_89);
        {
          ATerm n_3 (ATerm t)
          {
            ATerm s_89 = NULL;
            s_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_89), not_null(o_89));
              t = f_83(t);
            }
            return(t);
          }
          ATerm o_3 (ATerm t)
          {
            ATerm u_89 = NULL;
            u_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_89), not_null(n_89));
              t = f_83(t);
            }
            return(t);
          }
          t = g_83(t, n_3, o_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm l_83 (ATerm), ATerm m_83 (ATerm, ATerm (ATerm)))
{
  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL;
  m_90 = t;
  l_90 :
  if(match_cons(m_90, sym__2))
    {
      n_90 = ATgetArgument(m_90, 0);
      o_90 = ATgetArgument(m_90, 1);
      {
        ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL,z_90 = NULL;
        ATerm z_22;
        z_22 = t;
        {
          ATerm u_90 = NULL;
          t = not_null(n_90);
          {
            ATerm v_90 = NULL;
            t = l_83(t);
            {
              u_90 = t;
              {
                if(((r_90 != NULL) && (r_90 != u_90)))
                  _fail(u_90);
                else
                  r_90 = u_90;
                {
                  ATerm w_90 = NULL,y_90 = NULL;
                  t = map_1(t, new_0);
                  {
                    v_90 = t;
                    {
                      if(((s_90 != NULL) && (s_90 != v_90)))
                        _fail(v_90);
                      else
                        s_90 = v_90;
                      {
                        ATerm x_90 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_90), not_null(s_90));
                        {
                          t = zip_1(t, _id);
                          {
                            x_90 = t;
                            if(((w_90 != NULL) && (w_90 != x_90)))
                              _fail(x_90);
                            else
                              w_90 = x_90;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_90), not_null(o_90));
                          {
                            t = conc_0(t);
                            {
                              y_90 = t;
                              if(((t_90 != NULL) && (t_90 != y_90)))
                                _fail(y_90);
                              else
                                t_90 = y_90;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = z_22;
        {
          ATerm a_91 = NULL;
          t = not_null(n_90);
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(s_90);
              return(t);
            }
            t = m_83(t, p_3);
            {
              a_91 = t;
              if(((z_90 != NULL) && (z_90 != a_91)))
                _fail(a_91);
              else
                z_90 = a_91;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(z_90), not_null(o_90), not_null(t_90));
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
  ATerm n_91 = NULL;
  ATerm r_91 = NULL,s_91 = NULL;
  n_91 = t;
  {
    ATerm t_91 = NULL;
    ATerm v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL;
    t = not_null(n_91);
    {
      t_91 = t;
      {
        t = SSL_explode_term(not_null(t_91));
        {
          v_91 = t;
          k_91 :
          if(match_cons(v_91, sym__2))
            {
              w_91 = ATgetArgument(v_91, 0);
              x_91 = ATgetArgument(v_91, 1);
              l_91 :
              if(match_string(w_91, ""))
                {
                  m_91 :
                  if(((ATgetType(x_91) == AT_LIST) && ((ATermList) x_91 != ATempty)))
                    {
                      y_91 = ATgetFirst((ATermList) x_91);
                      z_91 = (ATerm) ATgetNext((ATermList) x_91);
                      {
                        if(((s_91 != NULL) && (s_91 != y_91)))
                          _fail(y_91);
                        else
                          s_91 = y_91;
                        if(((r_91 != NULL) && (r_91 != z_91)))
                          _fail(z_91);
                        else
                          r_91 = z_91;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(s_91);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm z_82 (ATerm, ATerm (ATerm)))
{
  ATerm f_92 = NULL,g_92 = NULL,i_92 = NULL;
  f_92 = t;
  e_92 :
  if(match_cons(f_92, sym__2))
    {
      g_92 = ATgetArgument(f_92, 0);
      i_92 = ATgetArgument(f_92, 1);
      {
        t = not_null(g_92);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm r_3 (ATerm t)
            {
              t = not_null(i_92);
              return(t);
            }
            t = split_2(t, _id, r_3);
            t = lookup_0(t);
            return(t);
          }
          t = z_82(t, q_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm f_100 (ATerm))
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL;
  p_92 = t;
  o_92 :
  if(match_cons(p_92, sym__2))
    {
      q_92 = ATgetArgument(p_92, 0);
      r_92 = ATgetArgument(p_92, 1);
      {
        t = not_null(q_92);
        {
          ATerm s_3 (ATerm t)
          {
            ATerm u_92 = NULL;
            u_92 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_92), not_null(r_92));
              t = f_100(t);
            }
            return(t);
          }
          t = _all(t, s_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm k_100 (ATerm))
{
  ATerm y_92 (ATerm t)
  {
    ATerm d_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_100(t);
        LocalPopChoice(g_23);
      }
    else
      {
        t = d_23;
        t = all_dist_1(t, y_92);
      }
    return(t);
  }
  t = y_92(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm x_83 (ATerm), ATerm y_83 (ATerm, ATerm (ATerm)), ATerm z_83 (ATerm), ATerm a_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_84 (ATerm, ATerm (ATerm)), ATerm c_84 (ATerm))
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL;
  t = subs_args_0(t);
  {
    g_93 = t;
    a_93 :
    if(match_cons(g_93, sym__2))
      {
        h_93 = ATgetArgument(g_93, 0);
        i_93 = ATgetArgument(g_93, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_93), (ATerm) ATempty);
          {
            ATerm m_93 (ATerm t)
            {
              ATerm t_3 (ATerm t)
              {
                ATerm h_23 = t;
                int i_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, y_83);
                    LocalPopChoice(i_23);
                  }
                else
                  {
                    t = h_23;
                    {
                      ATerm j_23 = t;
                      int k_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm u_3 (ATerm t)
                            {
                              t = not_null(h_93);
                              return(t);
                            }
                            t = SubsVar_2(t, x_83, u_3);
                            t = c_84(t);
                          }
                          LocalPopChoice(k_23);
                        }
                      else
                        {
                          t = j_23;
                          {
                            t = RnBinding_2(t, z_83, b_84);
                            t = DistBinding_2(t, m_93, a_84);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, t_3);
              return(t);
            }
            t = m_93(t);
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
ATerm substitute_5 (ATerm t, ATerm e_84 (ATerm), ATerm f_84 (ATerm, ATerm (ATerm)), ATerm g_84 (ATerm), ATerm h_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_84 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, e_84, f_84, g_84, h_84, i_84, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm n_93 (ATerm t, ATerm o_93 (ATerm))
  {
    t = Scope_2(t, o_93, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, n_93);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm q_81 (ATerm))
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL;
  w_93 = t;
  v_93 :
  if(match_cons(w_93, sym_Op_2))
    {
      x_93 = ATgetArgument(w_93, 0);
      y_93 = ATgetArgument(w_93, 1);
      {
        ATerm b_94 = NULL,d_94 = NULL;
        t = q_81(t);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm l_23;
            l_23 = t;
            {
              ATerm e_94 = NULL,f_94 = NULL,g_94 = NULL,i_94 = NULL;
              e_94 = t;
              u_93 :
              if(match_cons(e_94, sym_Overlay_3))
                {
                  f_94 = ATgetArgument(e_94, 0);
                  g_94 = ATgetArgument(e_94, 1);
                  i_94 = ATgetArgument(e_94, 2);
                  {
                    ATerm j_94 = NULL,m_94 = NULL,n_94 = NULL,v_94 = NULL;
                    if(((x_93 != NULL) && (x_93 != f_94)))
                      _fail(f_94);
                    else
                      x_93 = f_94;
                    {
                      if(((j_94 != NULL) && (j_94 != g_94)))
                        _fail(g_94);
                      else
                        j_94 = g_94;
                      {
                        if(((m_94 != NULL) && (m_94 != i_94)))
                          _fail(i_94);
                        else
                          m_94 = i_94;
                        {
                          ATerm m_23;
                          m_23 = t;
                          {
                            ATerm o_94 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(j_94), not_null(y_93));
                            {
                              t = zip_1(t, _id);
                              {
                                o_94 = t;
                                if(((n_94 != NULL) && (n_94 != o_94)))
                                  _fail(o_94);
                                else
                                  n_94 = o_94;
                              }
                            }
                          }
                          t = m_23;
                          {
                            ATerm w_94 = NULL;
                            t = not_null(n_94);
                            {
                              v_94 = t;
                              {
                                if(((b_94 != NULL) && (b_94 != v_94)))
                                  _fail(v_94);
                                else
                                  b_94 = v_94;
                                {
                                  t = not_null(m_94);
                                  {
                                    w_94 = t;
                                    {
                                      if(((d_94 != NULL) && (d_94 != w_94)))
                                        _fail(w_94);
                                      else
                                        d_94 = w_94;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_94), not_null(m_94));
                                    }
                                  }
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
            t = l_23;
            return(t);
          }
          t = fetch_1(t, v_3);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_94), not_null(d_94));
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
ATerm exp_overlays1_1 (ATerm t, ATerm r_81 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm n_23;
    n_23 = t;
    {
      ATerm r_23 = t;
      if((PushChoice() == 0))
        {
          ATerm d_95 = NULL;
          t = r_81(t);
          {
            d_95 = t;
            c_95 :
            if(((ATermList) d_95 == ATempty))
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
          t = r_23;
        }
    }
    t = n_23;
    {
      ATerm x_3 (ATerm t)
      {
        ATerm y_3 (ATerm t)
        {
          t = ExpOverlay_1(t, r_81);
          return(t);
        }
        t = repeat_1(t, y_3);
        return(t);
      }
      t = topdown_1(t, x_3);
    }
    return(t);
  }
  t = try_1(t, w_3);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL;
  r_95 = t;
  j_95 :
  if(match_cons(r_95, sym_Specification_1))
    {
      s_95 = ATgetArgument(r_95, 0);
      k_95 :
      if(((ATgetType(s_95) == AT_LIST) && ((ATermList) s_95 != ATempty)))
        {
          t_95 = ATgetFirst((ATermList) s_95);
          v_95 = (ATerm) ATgetNext((ATermList) s_95);
          l_95 :
          if(match_cons(t_95, sym_Signature_1))
            {
              u_95 = ATgetArgument(t_95, 0);
              m_95 :
              if(((ATgetType(v_95) == AT_LIST) && ((ATermList) v_95 != ATempty)))
                {
                  w_95 = ATgetFirst((ATermList) v_95);
                  y_95 = (ATerm) ATgetNext((ATermList) v_95);
                  n_95 :
                  if(match_cons(w_95, sym_Overlays_1))
                    {
                      x_95 = ATgetArgument(w_95, 0);
                      o_95 :
                      if(((ATgetType(y_95) == AT_LIST) && ((ATermList) y_95 != ATempty)))
                        {
                          z_95 = ATgetFirst((ATermList) y_95);
                          b_96 = (ATerm) ATgetNext((ATermList) y_95);
                          p_95 :
                          if(match_cons(z_95, sym_Strategies_1))
                            {
                              a_96 = ATgetArgument(z_95, 0);
                              q_95 :
                              if(((ATermList) b_96 == ATempty))
                                {
                                  {
                                    ATerm f_96 = NULL,h_96 = NULL;
                                    ATerm s_23;
                                    s_23 = t;
                                    {
                                      ATerm g_96 = NULL;
                                      t = not_null(x_95);
                                      {
                                        ATerm z_3 (ATerm t)
                                        {
                                          t = not_null(x_95);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, z_3);
                                        {
                                          g_96 = t;
                                          if(((f_96 != NULL) && (f_96 != g_96)))
                                            _fail(g_96);
                                          else
                                            f_96 = g_96;
                                        }
                                      }
                                    }
                                    t = s_23;
                                    {
                                      ATerm i_96 = NULL,k_96 = NULL,m_96 = NULL;
                                      ATerm w_23;
                                      w_23 = t;
                                      {
                                        ATerm j_96 = NULL;
                                        t = not_null(x_95);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            j_96 = t;
                                            if(((i_96 != NULL) && (i_96 != j_96)))
                                              _fail(j_96);
                                            else
                                              i_96 = j_96;
                                          }
                                        }
                                      }
                                      t = w_23;
                                      {
                                        ATerm l_96 = NULL;
                                        t = not_null(a_96);
                                        {
                                          ATerm a_4 (ATerm t)
                                          {
                                            t = not_null(f_96);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, a_4);
                                          {
                                            l_96 = t;
                                            if(((k_96 != NULL) && (k_96 != l_96)))
                                              _fail(l_96);
                                            else
                                              k_96 = l_96;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_96), not_null(k_96));
                                          {
                                            t = conc_0(t);
                                            {
                                              m_96 = t;
                                              if(((h_96 != NULL) && (h_96 != m_96)))
                                                _fail(m_96);
                                              else
                                                h_96 = m_96;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(h_96))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(u_95))));
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
  ATerm z_23;
  z_23 = t;
  {
    ATerm t_96 = NULL;
    ATerm v_96 = NULL;
    v_96 = t;
    if(((t_96 != NULL) && (t_96 != v_96)))
      _fail(v_96);
    else
      t_96 = v_96;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_17, not_null(t_96));
      t = printnl_0(t);
    }
  }
  t = z_23;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm a_24;
  a_24 = t;
  {
    t = error_0(t);
    {
      t = term_m_18;
      t = exit_0(t);
    }
  }
  t = a_24;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL;
  i_97 = t;
  g_97 :
  if(match_cons(i_97, sym__3))
    {
      j_97 = ATgetArgument(i_97, 0);
      k_97 = ATgetArgument(i_97, 1);
      l_97 = ATgetArgument(i_97, 2);
      {
        ATerm p_97 = NULL,r_97 = NULL;
        ATerm b_24;
        b_24 = t;
        {
          ATerm q_97 = NULL;
          t = not_null(j_97);
          {
            t = MsgU_0(t);
            {
              q_97 = t;
              if(((p_97 != NULL) && (p_97 != q_97)))
                _fail(q_97);
              else
                p_97 = q_97;
            }
          }
        }
        t = b_24;
        {
          ATerm s_97 = NULL;
          t = not_null(l_97);
          {
            t = MsgE_0(t);
            {
              s_97 = t;
              if(((r_97 != NULL) && (r_97 != s_97)))
                _fail(s_97);
              else
                r_97 = s_97;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_97)), not_null(p_97));
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
  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL;
  f_98 = t;
  z_97 :
  if(((ATgetType(f_98) == AT_LIST) && ((ATermList) f_98 != ATempty)))
    {
      d_98 = ATgetFirst((ATermList) f_98);
      e_98 = (ATerm) ATgetNext((ATermList) f_98);
      a_98 :
      if(((ATgetType(e_98) == AT_LIST) && ((ATermList) e_98 != ATempty)))
        {
          b_98 = ATgetFirst((ATermList) e_98);
          c_98 = (ATerm) ATgetNext((ATermList) e_98);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_24), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_98)), not_null(b_98)), not_null(d_98))), term_c_24);
        }
      else
        {
          if(((ATermList) e_98 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_24), not_null(d_98)), term_g_24);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) f_98 == ATempty))
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
  ATerm w_98 = NULL,x_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL;
  c_99 = t;
  u_98 :
  if(((ATgetType(c_99) == AT_LIST) && ((ATermList) c_99 != ATempty)))
    {
      a_99 = ATgetFirst((ATermList) c_99);
      b_99 = (ATerm) ATgetNext((ATermList) c_99);
      v_98 :
      if(((ATgetType(b_99) == AT_LIST) && ((ATermList) b_99 != ATempty)))
        {
          w_98 = ATgetFirst((ATermList) b_99);
          x_98 = (ATerm) ATgetNext((ATermList) b_99);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(x_98)), not_null(w_98)), not_null(a_99))), term_c_24);
        }
      else
        {
          if(((ATermList) b_99 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), not_null(a_99)), term_g_24);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) c_99 == ATempty))
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
  ATerm q_99 = NULL,r_99 = NULL,s_99 = NULL,t_99 = NULL;
  q_99 = t;
  n_99 :
  if(match_cons(q_99, sym__3))
    {
      r_99 = ATgetArgument(q_99, 0);
      s_99 = ATgetArgument(q_99, 1);
      t_99 = ATgetArgument(q_99, 2);
      {
        ATerm x_99 = NULL,z_99 = NULL;
        ATerm q_24;
        q_24 = t;
        {
          ATerm y_99 = NULL;
          t = not_null(r_99);
          {
            t = MsgU_0(t);
            {
              y_99 = t;
              if(((x_99 != NULL) && (x_99 != y_99)))
                _fail(y_99);
              else
                x_99 = y_99;
            }
          }
        }
        t = q_24;
        {
          ATerm a_100 = NULL;
          t = not_null(t_99);
          {
            t = MsgE_0(t);
            {
              a_100 = t;
              if(((z_99 != NULL) && (z_99 != a_100)))
                _fail(a_100);
              else
                z_99 = a_100;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_99)), not_null(x_99));
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
  ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL;
  q_100 = t;
  p_100 :
  if(match_cons(q_100, sym_Overlay_3))
    {
      r_100 = ATgetArgument(q_100, 0);
      s_100 = ATgetArgument(q_100, 1);
      t_100 = ATgetArgument(q_100, 2);
      {
        ATerm x_100 = NULL;
        ATerm a_101 = NULL;
        t = not_null(t_100);
        {
          t = map_1(t, MsgR_0);
          {
            t = concat_0(t);
            {
              a_101 = t;
              if(((x_100 != NULL) && (x_100 != a_101)))
                _fail(a_101);
              else
                x_100 = a_101;
            }
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(x_100)), term_x_24), not_null(r_100)), term_r_24);
      }
    }
  else
    {
      if(match_cons(q_100, sym_SDef_3))
        {
          r_100 = ATgetArgument(q_100, 0);
          s_100 = ATgetArgument(q_100, 1);
          t_100 = ATgetArgument(q_100, 2);
          {
            ATerm e_101 = NULL;
            ATerm f_101 = NULL;
            t = not_null(t_100);
            {
              t = map_1(t, MsgS_0);
              {
                t = concat_0(t);
                {
                  f_101 = t;
                  if(((e_101 != NULL) && (e_101 != f_101)))
                    _fail(f_101);
                  else
                    e_101 = f_101;
                }
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(e_101)), term_x_24), not_null(r_100)), term_y_24);
          }
        }
      else
        {
          if(match_cons(q_100, sym_RDef_3))
            {
              r_100 = ATgetArgument(q_100, 0);
              s_100 = ATgetArgument(q_100, 1);
              t_100 = ATgetArgument(q_100, 2);
              {
                ATerm j_101 = NULL;
                ATerm k_101 = NULL;
                t = not_null(t_100);
                {
                  t = map_1(t, MsgR_0);
                  {
                    t = concat_0(t);
                    {
                      k_101 = t;
                      if(((j_101 != NULL) && (j_101 != k_101)))
                        _fail(k_101);
                      else
                        j_101 = k_101;
                    }
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(j_101)), term_x_24), not_null(r_100)), term_z_24);
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
ATerm _3 (ATerm t, ATerm s_68 (ATerm), ATerm t_68 (ATerm), ATerm u_68 (ATerm))
{
  ATerm y_101 = NULL,z_101 = NULL,a_102 = NULL,b_102 = NULL;
  y_101 = t;
  x_101 :
  if(match_cons(y_101, sym__3))
    {
      z_101 = ATgetArgument(y_101, 0);
      a_102 = ATgetArgument(y_101, 1);
      b_102 = ATgetArgument(y_101, 2);
      {
        ATerm g_102 = NULL,i_102 = NULL;
        ATerm h_102 = NULL;
        t = SSLgetAnnotations(not_null(y_101));
        {
          h_102 = t;
          if(((g_102 != NULL) && (g_102 != h_102)))
            _fail(h_102);
          else
            g_102 = h_102;
        }
        {
          t = not_null(z_101);
          {
            ATerm k_102 = NULL;
            t = s_68(t);
            {
              i_102 = t;
              {
                t = not_null(a_102);
                {
                  ATerm m_102 = NULL;
                  t = t_68(t);
                  {
                    k_102 = t;
                    {
                      t = not_null(b_102);
                      {
                        ATerm o_102 = NULL;
                        t = u_68(t);
                        {
                          m_102 = t;
                          {
                            ATerm p_102 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__3, not_null(i_102), not_null(k_102), not_null(m_102)), not_null(g_102));
                            {
                              p_102 = t;
                              if(((o_102 != NULL) && (o_102 != p_102)))
                                _fail(p_102);
                              else
                                o_102 = p_102;
                            }
                            t = not_null(o_102);
                          }
                        }
                      }
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
ATerm Overlay_3 (ATerm t, ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm z_76 (ATerm))
{
  ATerm f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL;
  f_103 = t;
  e_103 :
  if(match_cons(f_103, sym_Overlay_3))
    {
      g_103 = ATgetArgument(f_103, 0);
      h_103 = ATgetArgument(f_103, 1);
      i_103 = ATgetArgument(f_103, 2);
      {
        ATerm n_103 = NULL,p_103 = NULL;
        ATerm o_103 = NULL;
        t = SSLgetAnnotations(not_null(f_103));
        {
          o_103 = t;
          if(((n_103 != NULL) && (n_103 != o_103)))
            _fail(o_103);
          else
            n_103 = o_103;
        }
        {
          t = not_null(g_103);
          {
            ATerm r_103 = NULL;
            t = x_76(t);
            {
              p_103 = t;
              {
                t = not_null(h_103);
                {
                  ATerm t_103 = NULL;
                  t = y_76(t);
                  {
                    r_103 = t;
                    {
                      t = not_null(i_103);
                      {
                        ATerm v_103 = NULL;
                        t = z_76(t);
                        {
                          t_103 = t;
                          {
                            ATerm w_103 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlay_3, not_null(p_103), not_null(r_103), not_null(t_103)), not_null(n_103));
                            {
                              w_103 = t;
                              if(((v_103 != NULL) && (v_103 != w_103)))
                                _fail(w_103);
                              else
                                v_103 = w_103;
                            }
                            t = not_null(v_103);
                          }
                        }
                      }
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
  ATerm k_104 = NULL,l_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL,r_104 = NULL,s_104 = NULL,t_104 = NULL,u_104 = NULL;
  k_104 = t;
  h_104 :
  if(match_cons(k_104, sym__2))
    {
      l_104 = ATgetArgument(k_104, 0);
      r_104 = ATgetArgument(k_104, 1);
      i_104 :
      if(match_cons(l_104, sym__3))
        {
          m_104 = ATgetArgument(l_104, 0);
          n_104 = ATgetArgument(l_104, 1);
          o_104 = ATgetArgument(l_104, 2);
          j_104 :
          if(match_cons(r_104, sym__3))
            {
              s_104 = ATgetArgument(r_104, 0);
              t_104 = ATgetArgument(r_104, 1);
              u_104 = ATgetArgument(r_104, 2);
              {
                ATerm b_105 = NULL,f_105 = NULL,h_105 = NULL;
                ATerm a_25;
                a_25 = t;
                {
                  ATerm c_105 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_104), not_null(s_104));
                  {
                    t = union_0(t);
                    {
                      c_105 = t;
                      if(((b_105 != NULL) && (b_105 != c_105)))
                        _fail(c_105);
                      else
                        b_105 = c_105;
                    }
                  }
                }
                t = a_25;
                {
                  ATerm b_25;
                  b_25 = t;
                  {
                    ATerm g_105 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_104), not_null(t_104));
                    {
                      t = union_0(t);
                      {
                        g_105 = t;
                        if(((f_105 != NULL) && (f_105 != g_105)))
                          _fail(g_105);
                        else
                          f_105 = g_105;
                      }
                    }
                  }
                  t = b_25;
                  {
                    ATerm i_105 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_104), not_null(u_104));
                    {
                      t = union_0(t);
                      {
                        i_105 = t;
                        if(((h_105 != NULL) && (h_105 != i_105)))
                          _fail(i_105);
                        else
                          h_105 = i_105;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(b_105), not_null(f_105), not_null(h_105));
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
  ATerm u_105 = NULL;
  ATerm w_105 = NULL,z_105 = NULL,a_106 = NULL;
  u_105 = t;
  {
    ATerm b_106 = NULL;
    ATerm d_106 = NULL,e_106 = NULL,f_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL,n_106 = NULL;
    t = not_null(u_105);
    {
      b_106 = t;
      {
        t = SSL_explode_term(not_null(b_106));
        {
          d_106 = t;
          q_105 :
          if(match_cons(d_106, sym__2))
            {
              e_106 = ATgetArgument(d_106, 0);
              f_106 = ATgetArgument(d_106, 1);
              r_105 :
              if(match_string(e_106, ""))
                {
                  s_105 :
                  if(((ATgetType(f_106) == AT_LIST) && ((ATermList) f_106 != ATempty)))
                    {
                      k_106 = ATgetFirst((ATermList) f_106);
                      l_106 = (ATerm) ATgetNext((ATermList) f_106);
                      t_105 :
                      if(((ATgetType(l_106) == AT_LIST) && ((ATermList) l_106 != ATempty)))
                        {
                          m_106 = ATgetFirst((ATermList) l_106);
                          n_106 = (ATerm) ATgetNext((ATermList) l_106);
                          {
                            if(((w_105 != NULL) && (w_105 != k_106)))
                              _fail(k_106);
                            else
                              w_105 = k_106;
                            {
                              if(((a_106 != NULL) && (a_106 != m_106)))
                                _fail(m_106);
                              else
                                a_106 = m_106;
                              if(((z_105 != NULL) && (z_105 != n_106)))
                                _fail(n_106);
                              else
                                z_105 = n_106;
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
    t = not_null(a_106);
  }
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm s_106 = NULL;
  s_106 = t;
  t = SSL_explode_term(not_null(s_106));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  {
    t = Snd_0(t);
    {
      ATerm b_4 (ATerm t)
      {
        t = (ATerm) ATinsert(ATempty, term_c_25);
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = cart_1(t, Union_0);
        return(t);
      }
      t = foldr_2(t, b_4, c_4);
    }
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL;
  k_107 = t;
  h_107 :
  if(match_cons(k_107, sym__2))
    {
      l_107 = ATgetArgument(k_107, 0);
      p_107 = ATgetArgument(k_107, 1);
      i_107 :
      if(match_cons(l_107, sym__3))
        {
          m_107 = ATgetArgument(l_107, 0);
          n_107 = ATgetArgument(l_107, 1);
          o_107 = ATgetArgument(l_107, 2);
          j_107 :
          if(match_cons(p_107, sym__3))
            {
              u_107 = ATgetArgument(p_107, 0);
              v_107 = ATgetArgument(p_107, 1);
              w_107 = ATgetArgument(p_107, 2);
              {
                ATerm d_108 = NULL,h_108 = NULL,j_108 = NULL;
                ATerm d_25;
                d_25 = t;
                {
                  ATerm e_108 = NULL,g_108 = NULL;
                  ATerm f_108 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_107), not_null(n_107));
                  {
                    t = diff_0(t);
                    {
                      f_108 = t;
                      if(((e_108 != NULL) && (e_108 != f_108)))
                        _fail(f_108);
                      else
                        e_108 = f_108;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_107), not_null(e_108));
                    {
                      t = union_0(t);
                      {
                        g_108 = t;
                        if(((d_108 != NULL) && (d_108 != g_108)))
                          _fail(g_108);
                        else
                          d_108 = g_108;
                      }
                    }
                  }
                }
                t = d_25;
                {
                  ATerm e_25;
                  e_25 = t;
                  {
                    ATerm i_108 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_107), not_null(v_107));
                    {
                      t = union_0(t);
                      {
                        i_108 = t;
                        if(((h_108 != NULL) && (h_108 != i_108)))
                          _fail(i_108);
                        else
                          h_108 = i_108;
                      }
                    }
                  }
                  t = e_25;
                  {
                    ATerm k_108 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_107), not_null(w_107));
                    {
                      t = union_0(t);
                      {
                        k_108 = t;
                        if(((j_108 != NULL) && (j_108 != k_108)))
                          _fail(k_108);
                        else
                          j_108 = k_108;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(d_108), not_null(h_108), not_null(j_108));
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
ATerm cart_1 (ATerm t, ATerm u_96 (ATerm))
{
  ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
  u_108 = t;
  t_108 :
  if(match_cons(u_108, sym__2))
    {
      v_108 = ATgetArgument(u_108, 0);
      w_108 = ATgetArgument(u_108, 1);
      {
        t = not_null(v_108);
        {
          ATerm d_4 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm e_4 (ATerm t)
          {
            ATerm z_108 = NULL;
            z_108 = t;
            {
              t = not_null(w_108);
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm b_109 = NULL;
                  b_109 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_108), not_null(b_109));
                    t = u_96(t);
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
ATerm seqs_join_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_c_25);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, g_4, h_4);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm n_109 = NULL,o_109 = NULL,p_109 = NULL,q_109 = NULL;
  n_109 = t;
  m_109 :
  if(match_cons(n_109, sym__3))
    {
      o_109 = ATgetArgument(n_109, 0);
      p_109 = ATgetArgument(n_109, 1);
      q_109 = ATgetArgument(n_109, 2);
      {
        ATerm u_109 = NULL,y_109 = NULL;
        ATerm f_25;
        f_25 = t;
        {
          ATerm v_109 = NULL,x_109 = NULL;
          ATerm w_109 = NULL;
          t = term_b_19;
          {
            t = m_80(t);
            {
              w_109 = t;
              if(((v_109 != NULL) && (v_109 != w_109)))
                _fail(w_109);
              else
                v_109 = w_109;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_109), not_null(v_109));
            {
              t = diff_0(t);
              {
                x_109 = t;
                if(((u_109 != NULL) && (u_109 != x_109)))
                  _fail(x_109);
                else
                  u_109 = x_109;
              }
            }
          }
        }
        t = f_25;
        {
          ATerm z_109 = NULL,d_110 = NULL;
          ATerm a_110 = NULL,c_110 = NULL;
          ATerm b_110 = NULL;
          t = term_b_19;
          {
            t = m_80(t);
            {
              b_110 = t;
              if(((a_110 != NULL) && (a_110 != b_110)))
                _fail(b_110);
              else
                a_110 = b_110;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_109), not_null(a_110));
            {
              t = isect_0(t);
              {
                c_110 = t;
                if(((z_109 != NULL) && (z_109 != c_110)))
                  _fail(c_110);
                else
                  z_109 = c_110;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_109), not_null(q_109));
            {
              t = conc_0(t);
              {
                d_110 = t;
                if(((y_109 != NULL) && (y_109 != d_110)))
                  _fail(d_110);
                else
                  y_109 = d_110;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(o_109), not_null(u_109), not_null(y_109));
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
  ATerm x_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL;
  z_110 = t;
  w_110 :
  if(match_cons(z_110, sym_Overlay_3))
    {
      a_111 = ATgetArgument(z_110, 0);
      y_110 = ATgetArgument(z_110, 1);
      x_110 = ATgetArgument(z_110, 2);
      {
        ATerm e_111 = NULL;
        ATerm f_111 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_110)), (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(y_110), (ATerm) ATempty));
        {
          t = seqs_join_0(t);
          {
            f_111 = t;
            if(((e_111 != NULL) && (e_111 != f_111)))
              _fail(f_111);
            else
              e_111 = f_111;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(a_111), not_null(y_110), not_null(e_111));
      }
    }
  else
    {
      if(match_cons(z_110, sym_Scope_2))
        {
          a_111 = ATgetArgument(z_110, 0);
          y_110 = ATgetArgument(z_110, 1);
          {
            t = not_null(y_110);
            {
              ATerm i_4 (ATerm t)
              {
                ATerm j_4 (ATerm t)
                {
                  t = not_null(a_111);
                  return(t);
                }
                t = JoinScope_1(t, j_4);
                return(t);
              }
              t = map_1(t, i_4);
            }
          }
        }
      else
        {
          if(match_cons(z_110, sym_Cong_2))
            {
              a_111 = ATgetArgument(z_110, 0);
              y_110 = ATgetArgument(z_110, 1);
              {
                t = not_null(y_110);
                t = seqs_join_0(t);
              }
            }
          else
            {
              if(match_cons(z_110, sym_BAM_3))
                {
                  a_111 = ATgetArgument(z_110, 0);
                  y_110 = ATgetArgument(z_110, 1);
                  x_110 = ATgetArgument(z_110, 2);
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_110)), not_null(a_111)), not_null(y_110));
                    t = seqs_join_0(t);
                  }
                }
              else
                {
                  if(match_cons(z_110, sym_BA_2))
                    {
                      a_111 = ATgetArgument(z_110, 0);
                      y_110 = ATgetArgument(z_110, 1);
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_111)), not_null(y_110));
                        t = seqs_join_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(z_110, sym_AM_2))
                        {
                          a_111 = ATgetArgument(z_110, 0);
                          y_110 = ATgetArgument(z_110, 1);
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_110)), not_null(a_111));
                            t = seqs_join_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(z_110, sym_MA_2))
                            {
                              a_111 = ATgetArgument(z_110, 0);
                              y_110 = ATgetArgument(z_110, 1);
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_110)), not_null(a_111));
                                t = seqs_join_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(z_110, sym_StratRule_3))
                                {
                                  a_111 = ATgetArgument(z_110, 0);
                                  y_110 = ATgetArgument(z_110, 1);
                                  x_110 = ATgetArgument(z_110, 2);
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_110)), not_null(x_110)), not_null(a_111));
                                    t = seqs_join_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(z_110, sym_Rule_3))
                                    {
                                      a_111 = ATgetArgument(z_110, 0);
                                      y_110 = ATgetArgument(z_110, 1);
                                      x_110 = ATgetArgument(z_110, 2);
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_110)), not_null(x_110)), not_null(a_111));
                                        t = seqs_join_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(z_110, sym_Seq_2))
                                        {
                                          a_111 = ATgetArgument(z_110, 0);
                                          y_110 = ATgetArgument(z_110, 1);
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_110)), not_null(a_111));
                                            t = seqs_join_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(z_110, sym_Seqs_1))
                                            {
                                              a_111 = ATgetArgument(z_110, 0);
                                              {
                                                t = not_null(a_111);
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
ATerm Cong_2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  ATerm u_112 = NULL,v_112 = NULL,w_112 = NULL;
  u_112 = t;
  t_112 :
  if(match_cons(u_112, sym_Cong_2))
    {
      v_112 = ATgetArgument(u_112, 0);
      w_112 = ATgetArgument(u_112, 1);
      {
        ATerm a_113 = NULL,c_113 = NULL;
        ATerm b_113 = NULL;
        t = SSLgetAnnotations(not_null(u_112));
        {
          b_113 = t;
          if(((a_113 != NULL) && (a_113 != b_113)))
            _fail(b_113);
          else
            a_113 = b_113;
        }
        {
          t = not_null(v_112);
          {
            ATerm e_113 = NULL;
            t = e_79(t);
            {
              c_113 = t;
              {
                t = not_null(w_112);
                {
                  ATerm g_113 = NULL;
                  t = f_79(t);
                  {
                    e_113 = t;
                    {
                      ATerm h_113 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(c_113), not_null(e_113)), not_null(a_113));
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
  ATerm o_113 = NULL;
  ATerm p_113 = NULL;
  t = tvars_0(t);
  {
    p_113 = t;
    if(((o_113 != NULL) && (o_113 != p_113)))
      _fail(p_113);
    else
      o_113 = p_113;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, not_null(o_113), (ATerm)ATempty, (ATerm) ATempty));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm s_113 = NULL;
  ATerm t_113 = NULL;
  t = tvars_0(t);
  {
    t_113 = t;
    if(((s_113 != NULL) && (s_113 != t_113)))
      _fail(t_113);
    else
      s_113 = t_113;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(s_113), (ATerm) ATempty));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm))
{
  ATerm c_114 = NULL,d_114 = NULL,e_114 = NULL,f_114 = NULL;
  c_114 = t;
  b_114 :
  if(match_cons(c_114, sym_Rule_3))
    {
      d_114 = ATgetArgument(c_114, 0);
      e_114 = ATgetArgument(c_114, 1);
      f_114 = ATgetArgument(c_114, 2);
      {
        ATerm k_114 = NULL,m_114 = NULL;
        ATerm l_114 = NULL;
        t = SSLgetAnnotations(not_null(c_114));
        {
          l_114 = t;
          if(((k_114 != NULL) && (k_114 != l_114)))
            _fail(l_114);
          else
            k_114 = l_114;
        }
        {
          t = not_null(d_114);
          {
            ATerm o_114 = NULL;
            t = i_76(t);
            {
              m_114 = t;
              {
                t = not_null(e_114);
                {
                  ATerm q_114 = NULL;
                  t = j_76(t);
                  {
                    o_114 = t;
                    {
                      t = not_null(f_114);
                      {
                        ATerm s_114 = NULL;
                        t = k_76(t);
                        {
                          q_114 = t;
                          {
                            ATerm t_114 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(m_114), not_null(o_114), not_null(q_114)), not_null(k_114));
                            {
                              t_114 = t;
                              if(((s_114 != NULL) && (s_114 != t_114)))
                                _fail(t_114);
                              else
                                s_114 = t_114;
                            }
                            t = not_null(s_114);
                          }
                        }
                      }
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
ATerm BAM_3 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm o_75 (ATerm))
{
  ATerm h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL;
  h_115 = t;
  g_115 :
  if(match_cons(h_115, sym_BAM_3))
    {
      i_115 = ATgetArgument(h_115, 0);
      j_115 = ATgetArgument(h_115, 1);
      k_115 = ATgetArgument(h_115, 2);
      {
        ATerm p_115 = NULL,r_115 = NULL;
        ATerm q_115 = NULL;
        t = SSLgetAnnotations(not_null(h_115));
        {
          q_115 = t;
          if(((p_115 != NULL) && (p_115 != q_115)))
            _fail(q_115);
          else
            p_115 = q_115;
        }
        {
          t = not_null(i_115);
          {
            ATerm t_115 = NULL;
            t = m_75(t);
            {
              r_115 = t;
              {
                t = not_null(j_115);
                {
                  ATerm v_115 = NULL;
                  t = n_75(t);
                  {
                    t_115 = t;
                    {
                      t = not_null(k_115);
                      {
                        ATerm x_115 = NULL;
                        t = o_75(t);
                        {
                          v_115 = t;
                          {
                            ATerm y_115 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BAM_3, not_null(r_115), not_null(t_115), not_null(v_115)), not_null(p_115));
                            {
                              y_115 = t;
                              if(((x_115 != NULL) && (x_115 != y_115)))
                                _fail(y_115);
                              else
                                x_115 = y_115;
                            }
                            t = not_null(x_115);
                          }
                        }
                      }
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
ATerm BA_2 (ATerm t, ATerm k_75 (ATerm), ATerm l_75 (ATerm))
{
  ATerm l_116 = NULL,m_116 = NULL,n_116 = NULL;
  l_116 = t;
  k_116 :
  if(match_cons(l_116, sym_BA_2))
    {
      m_116 = ATgetArgument(l_116, 0);
      n_116 = ATgetArgument(l_116, 1);
      {
        ATerm r_116 = NULL,t_116 = NULL;
        ATerm s_116 = NULL;
        t = SSLgetAnnotations(not_null(l_116));
        {
          s_116 = t;
          if(((r_116 != NULL) && (r_116 != s_116)))
            _fail(s_116);
          else
            r_116 = s_116;
        }
        {
          t = not_null(m_116);
          {
            ATerm v_116 = NULL;
            t = k_75(t);
            {
              t_116 = t;
              {
                t = not_null(n_116);
                {
                  ATerm x_116 = NULL;
                  t = l_75(t);
                  {
                    v_116 = t;
                    {
                      ATerm y_116 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BA_2, not_null(t_116), not_null(v_116)), not_null(r_116));
                      {
                        y_116 = t;
                        if(((x_116 != NULL) && (x_116 != y_116)))
                          _fail(y_116);
                        else
                          x_116 = y_116;
                      }
                      t = not_null(x_116);
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
ATerm AM_2 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm))
{
  ATerm k_117 = NULL,l_117 = NULL,m_117 = NULL;
  k_117 = t;
  j_117 :
  if(match_cons(k_117, sym_AM_2))
    {
      l_117 = ATgetArgument(k_117, 0);
      m_117 = ATgetArgument(k_117, 1);
      {
        ATerm q_117 = NULL,s_117 = NULL;
        ATerm r_117 = NULL;
        t = SSLgetAnnotations(not_null(k_117));
        {
          r_117 = t;
          if(((q_117 != NULL) && (q_117 != r_117)))
            _fail(r_117);
          else
            q_117 = r_117;
        }
        {
          t = not_null(l_117);
          {
            ATerm u_117 = NULL;
            t = i_75(t);
            {
              s_117 = t;
              {
                t = not_null(m_117);
                {
                  ATerm w_117 = NULL;
                  t = j_75(t);
                  {
                    u_117 = t;
                    {
                      ATerm x_117 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AM_2, not_null(s_117), not_null(u_117)), not_null(q_117));
                      {
                        x_117 = t;
                        if(((w_117 != NULL) && (w_117 != x_117)))
                          _fail(x_117);
                        else
                          w_117 = x_117;
                      }
                      t = not_null(w_117);
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
ATerm MA_2 (ATerm t, ATerm g_75 (ATerm), ATerm h_75 (ATerm))
{
  ATerm j_118 = NULL,k_118 = NULL,l_118 = NULL;
  j_118 = t;
  i_118 :
  if(match_cons(j_118, sym_MA_2))
    {
      k_118 = ATgetArgument(j_118, 0);
      l_118 = ATgetArgument(j_118, 1);
      {
        ATerm p_118 = NULL,r_118 = NULL;
        ATerm q_118 = NULL;
        t = SSLgetAnnotations(not_null(j_118));
        {
          q_118 = t;
          if(((p_118 != NULL) && (p_118 != q_118)))
            _fail(q_118);
          else
            p_118 = q_118;
        }
        {
          t = not_null(k_118);
          {
            ATerm t_118 = NULL;
            t = g_75(t);
            {
              r_118 = t;
              {
                t = not_null(l_118);
                {
                  ATerm v_118 = NULL;
                  t = h_75(t);
                  {
                    t_118 = t;
                    {
                      ATerm w_118 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MA_2, not_null(r_118), not_null(t_118)), not_null(p_118));
                      {
                        w_118 = t;
                        if(((v_118 != NULL) && (v_118 != w_118)))
                          _fail(w_118);
                        else
                          v_118 = w_118;
                      }
                      t = not_null(v_118);
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
ATerm Match_1 (ATerm t, ATerm m_79 (ATerm))
{
  ATerm h_119 = NULL,i_119 = NULL;
  h_119 = t;
  g_119 :
  if(match_cons(h_119, sym_Match_1))
    {
      i_119 = ATgetArgument(h_119, 0);
      {
        ATerm l_119 = NULL,n_119 = NULL;
        ATerm m_119 = NULL;
        t = SSLgetAnnotations(not_null(h_119));
        {
          m_119 = t;
          if(((l_119 != NULL) && (l_119 != m_119)))
            _fail(m_119);
          else
            l_119 = m_119;
        }
        {
          t = not_null(i_119);
          {
            ATerm p_119 = NULL;
            t = m_79(t);
            {
              n_119 = t;
              {
                ATerm q_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(n_119)), not_null(l_119));
                {
                  q_119 = t;
                  if(((p_119 != NULL) && (p_119 != q_119)))
                    _fail(q_119);
                  else
                    p_119 = q_119;
                }
                t = not_null(p_119);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Build_1 (ATerm t, ATerm n_79 (ATerm))
{
  ATerm a_120 = NULL,b_120 = NULL;
  a_120 = t;
  z_119 :
  if(match_cons(a_120, sym_Build_1))
    {
      b_120 = ATgetArgument(a_120, 0);
      {
        ATerm e_120 = NULL,g_120 = NULL;
        ATerm f_120 = NULL;
        t = SSLgetAnnotations(not_null(a_120));
        {
          f_120 = t;
          if(((e_120 != NULL) && (e_120 != f_120)))
            _fail(f_120);
          else
            e_120 = f_120;
        }
        {
          t = not_null(b_120);
          {
            ATerm i_120 = NULL;
            t = n_79(t);
            {
              g_120 = t;
              {
                ATerm j_120 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(g_120)), not_null(e_120));
                {
                  j_120 = t;
                  if(((i_120 != NULL) && (i_120 != j_120)))
                    _fail(j_120);
                  else
                    i_120 = j_120;
                }
                t = not_null(i_120);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm g_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Build_1(t, use_term_0);
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
            t = Match_1(t, def_term_0);
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
                  t = MA_2(t, def_term_0, l_80);
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
                        t = AM_2(t, l_80, def_term_0);
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
                              t = BA_2(t, l_80, use_term_0);
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
                                    t = BAM_3(t, l_80, use_term_0, def_term_0);
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
                                          t = Scope_2(t, _id, l_80);
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
                                                t = Rule_3(t, def_term_0, use_term_0, l_80);
                                                LocalPopChoice(f_26);
                                              }
                                            else
                                              {
                                                t = e_26;
                                                {
                                                  ATerm k_26 = t;
                                                  int l_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      LocalPopChoice(l_26);
                                                    }
                                                  else
                                                    {
                                                      t = k_26;
                                                      {
                                                        ATerm k_4 (ATerm t)
                                                        {
                                                          t = map_1(t, l_80);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, k_4);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm m_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = constructs_1(t, use_def_0);
      LocalPopChoice(q_26);
    }
  else
    {
      t = m_26;
      t = _all(t, use_def_0);
    }
  {
    ATerm s_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UDjoin_0(t);
        LocalPopChoice(v_26);
      }
    else
      {
        t = s_26;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm s_76 (ATerm))
{
  ATerm w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL;
  w_120 = t;
  v_120 :
  if(match_cons(w_120, sym_RDef_3))
    {
      x_120 = ATgetArgument(w_120, 0);
      y_120 = ATgetArgument(w_120, 1);
      z_120 = ATgetArgument(w_120, 2);
      {
        ATerm e_121 = NULL,g_121 = NULL;
        ATerm f_121 = NULL;
        t = SSLgetAnnotations(not_null(w_120));
        {
          f_121 = t;
          if(((e_121 != NULL) && (e_121 != f_121)))
            _fail(f_121);
          else
            e_121 = f_121;
        }
        {
          t = not_null(x_120);
          {
            ATerm i_121 = NULL;
            t = q_76(t);
            {
              g_121 = t;
              {
                t = not_null(y_120);
                {
                  ATerm k_121 = NULL;
                  t = r_76(t);
                  {
                    i_121 = t;
                    {
                      t = not_null(z_120);
                      {
                        ATerm m_121 = NULL;
                        t = s_76(t);
                        {
                          k_121 = t;
                          {
                            ATerm n_121 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(g_121), not_null(i_121), not_null(k_121)), not_null(e_121));
                            {
                              n_121 = t;
                              if(((m_121 != NULL) && (m_121 != n_121)))
                                _fail(n_121);
                              else
                                m_121 = n_121;
                            }
                            t = not_null(m_121);
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm))
{
  ATerm b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL;
  b_122 = t;
  a_122 :
  if(match_cons(b_122, sym_SDef_3))
    {
      c_122 = ATgetArgument(b_122, 0);
      d_122 = ATgetArgument(b_122, 1);
      e_122 = ATgetArgument(b_122, 2);
      {
        ATerm j_122 = NULL,l_122 = NULL;
        ATerm k_122 = NULL;
        t = SSLgetAnnotations(not_null(b_122));
        {
          k_122 = t;
          if(((j_122 != NULL) && (j_122 != k_122)))
            _fail(k_122);
          else
            j_122 = k_122;
        }
        {
          t = not_null(c_122);
          {
            ATerm n_122 = NULL;
            t = q_78(t);
            {
              l_122 = t;
              {
                t = not_null(d_122);
                {
                  ATerm p_122 = NULL;
                  t = r_78(t);
                  {
                    n_122 = t;
                    {
                      t = not_null(e_122);
                      {
                        ATerm r_122 = NULL;
                        t = s_78(t);
                        {
                          p_122 = t;
                          {
                            ATerm s_122 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(l_122), not_null(n_122), not_null(p_122)), not_null(j_122));
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
  ATerm w_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_4 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm y_26 = t;
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
              t = y_26;
            }
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, l_4);
      t = err_msg_0(t);
      LocalPopChoice(x_26);
    }
  else
    {
      t = w_26;
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm f_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm o_4 (ATerm t)
                    {
                      t = _3(t, Nil_0, _id, Nil_0);
                      return(t);
                    }
                    t = Cons_2(t, o_4, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_27;
                  }
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, n_4);
            t = err_msg_0(t);
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            {
              t = Overlay_3(t, _id, _id, _id);
              {
                t = use_def_0(t);
                {
                  ATerm g_27 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm p_4 (ATerm t)
                      {
                        ATerm q_4 (ATerm t)
                        {
                          t = _3(t, Nil_0, Nil_0, Nil_0);
                          return(t);
                        }
                        t = Cons_2(t, q_4, Nil_0);
                        return(t);
                      }
                      t = Overlay_3(t, _id, _id, p_4);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = g_27;
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
  ATerm a_123 = NULL;
  t = filter_1(t, check_0);
  {
    a_123 = t;
    z_122 :
    if(((ATermList) a_123 == ATempty))
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
ATerm Overlays_1 (ATerm t, ATerm b_77 (ATerm))
{
  ATerm g_123 = NULL,h_123 = NULL;
  g_123 = t;
  f_123 :
  if(match_cons(g_123, sym_Overlays_1))
    {
      h_123 = ATgetArgument(g_123, 0);
      {
        ATerm k_123 = NULL,m_123 = NULL;
        ATerm l_123 = NULL;
        t = SSLgetAnnotations(not_null(g_123));
        {
          l_123 = t;
          if(((k_123 != NULL) && (k_123 != l_123)))
            _fail(l_123);
          else
            k_123 = l_123;
        }
        {
          t = not_null(h_123);
          {
            ATerm o_123 = NULL;
            t = b_77(t);
            {
              m_123 = t;
              {
                ATerm p_123 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(m_123)), not_null(k_123));
                {
                  p_123 = t;
                  if(((o_123 != NULL) && (o_123 != p_123)))
                    _fail(p_123);
                  else
                    o_123 = p_123;
                }
                t = not_null(o_123);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm a_77 (ATerm))
{
  ATerm z_123 = NULL,a_124 = NULL;
  z_123 = t;
  y_123 :
  if(match_cons(z_123, sym_Signature_1))
    {
      a_124 = ATgetArgument(z_123, 0);
      {
        ATerm d_124 = NULL,f_124 = NULL;
        ATerm e_124 = NULL;
        t = SSLgetAnnotations(not_null(z_123));
        {
          e_124 = t;
          if(((d_124 != NULL) && (d_124 != e_124)))
            _fail(e_124);
          else
            d_124 = e_124;
        }
        {
          t = not_null(a_124);
          {
            ATerm h_124 = NULL;
            t = a_77(t);
            {
              f_124 = t;
              {
                ATerm i_124 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(f_124)), not_null(d_124));
                {
                  i_124 = t;
                  if(((h_124 != NULL) && (h_124 != i_124)))
                    _fail(i_124);
                  else
                    h_124 = i_124;
                }
                t = not_null(h_124);
              }
            }
          }
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
  ATerm r_4 (ATerm t)
  {
    ATerm s_4 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm t_4 (ATerm t)
    {
      ATerm u_4 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        ATerm w_4 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, w_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, u_4, v_4);
      return(t);
    }
    t = Cons_2(t, s_4, t_4);
    return(t);
  }
  t = Specification_1(t, r_4);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm r_124 = NULL,s_124 = NULL,t_124 = NULL,u_124 = NULL,v_124 = NULL,w_124 = NULL,x_124 = NULL;
  r_124 = t;
  o_124 :
  if(match_cons(r_124, sym__2))
    {
      s_124 = ATgetArgument(r_124, 0);
      v_124 = ATgetArgument(r_124, 1);
      p_124 :
      if(match_cons(s_124, sym__2))
        {
          t_124 = ATgetArgument(s_124, 0);
          u_124 = ATgetArgument(s_124, 1);
          q_124 :
          if(match_cons(v_124, sym__2))
            {
              w_124 = ATgetArgument(v_124, 0);
              x_124 = ATgetArgument(v_124, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_124)), not_null(t_124)), (ATerm) ATinsert(CheckATermList(not_null(x_124)), not_null(u_124)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm f_125 = NULL,g_125 = NULL,h_125 = NULL;
  f_125 = t;
  e_125 :
  if(((ATgetType(f_125) == AT_LIST) && ((ATermList) f_125 != ATempty)))
    {
      g_125 = ATgetFirst((ATermList) f_125);
      h_125 = (ATerm) ATgetNext((ATermList) f_125);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_125), not_null(h_125));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm n_125 = NULL;
  n_125 = t;
  m_125 :
  if(((ATermList) n_125 == ATempty))
    {
      t = term_h_27;
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
  ATerm x_4 (ATerm t)
  {
    ATerm q_125 = NULL;
    q_125 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_125));
    return(t);
  }
  t = map_1(t, x_4);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm v_125 = NULL,w_125 = NULL,x_125 = NULL;
  v_125 = t;
  u_125 :
  if(((ATgetType(v_125) == AT_LIST) && ((ATermList) v_125 != ATempty)))
    {
      w_125 = ATgetFirst((ATermList) v_125);
      x_125 = (ATerm) ATgetNext((ATermList) v_125);
      t = not_null(x_125);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm d_126 = NULL,e_126 = NULL,f_126 = NULL;
  d_126 = t;
  c_126 :
  if(match_cons(d_126, sym__2))
    {
      e_126 = ATgetArgument(d_126, 0);
      f_126 = ATgetArgument(d_126, 1);
      {
        t = not_null(e_126);
        {
          ATerm j_126 (ATerm t)
          {
            ATerm i_27 = t;
            int j_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(j_27);
              }
            else
              {
                t = i_27;
                {
                  ATerm k_27 = t;
                  int l_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_27;
                      m_27 = t;
                      {
                        ATerm y_4 (ATerm t)
                        {
                          t = not_null(f_126);
                          return(t);
                        }
                        t = HdMember_1(t, y_4);
                      }
                      t = m_27;
                      t = Cons_2(t, _id, j_126);
                      LocalPopChoice(l_27);
                    }
                  else
                    {
                      t = k_27;
                      {
                        t = Tl_0(t);
                        t = j_126(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = j_126(t);
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
  ATerm m_126 = NULL,n_126 = NULL,o_126 = NULL;
  m_126 = t;
  l_126 :
  if(match_cons(m_126, sym__2))
    {
      n_126 = ATgetArgument(m_126, 0);
      o_126 = ATgetArgument(m_126, 1);
      if(((n_126 != NULL) && (n_126 != o_126)))
        _fail(o_126);
      else
        n_126 = o_126;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm l_127 = NULL,m_127 = NULL,n_127 = NULL,o_127 = NULL,p_127 = NULL,q_127 = NULL,r_127 = NULL,s_127 = NULL,t_127 = NULL;
  ATerm b_129 (ATerm t)
  {
    ATerm z_127 = NULL,a_128 = NULL,b_128 = NULL,n_128 = NULL;
    ATerm n_27;
    n_27 = t;
    {
      ATerm c_128 = NULL,e_128 = NULL,g_128 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_127), term_p_27);
      {
        ATerm q_27 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_27;
          }
        {
          ATerm r_27;
          r_27 = t;
          {
            ATerm d_128 = NULL;
            t = term_b_19;
            {
              t = q_0(t);
              {
                d_128 = t;
                if(((c_128 != NULL) && (c_128 != d_128)))
                  _fail(d_128);
                else
                  c_128 = d_128;
              }
            }
          }
          t = r_27;
          {
            ATerm f_128 = NULL;
            t = not_null(p_127);
            {
              t = tvars_0(t);
              {
                f_128 = t;
                if(((e_128 != NULL) && (e_128 != f_128)))
                  _fail(f_128);
                else
                  e_128 = f_128;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_128), not_null(e_128));
              {
                t = isect_0(t);
                {
                  ATerm h_128 = NULL,j_128 = NULL,l_128 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    g_128 = t;
                    {
                      if(((z_127 != NULL) && (z_127 != g_128)))
                        _fail(g_128);
                      else
                        z_127 = g_128;
                      {
                        ATerm s_27;
                        s_27 = t;
                        {
                          ATerm i_128 = NULL;
                          t = term_b_19;
                          {
                            t = q_0(t);
                            {
                              i_128 = t;
                              if(((h_128 != NULL) && (h_128 != i_128)))
                                _fail(i_128);
                              else
                                h_128 = i_128;
                            }
                          }
                        }
                        t = s_27;
                        {
                          ATerm k_128 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_127), not_null(t_127));
                          {
                            t = tvars_0(t);
                            {
                              k_128 = t;
                              if(((j_128 != NULL) && (j_128 != k_128)))
                                _fail(k_128);
                              else
                                j_128 = k_128;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_128), not_null(j_128));
                            {
                              t = isect_0(t);
                              {
                                ATerm m_128 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  l_128 = t;
                                  {
                                    if(((a_128 != NULL) && (a_128 != l_128)))
                                      _fail(l_128);
                                    else
                                      a_128 = l_128;
                                    {
                                      t = new_0(t);
                                      {
                                        m_128 = t;
                                        if(((b_128 != NULL) && (b_128 != m_128)))
                                          _fail(m_128);
                                        else
                                          b_128 = m_128;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = n_27;
    {
      ATerm o_128 = NULL;
      t = not_null(m_127);
      {
        t = r_0(t);
        {
          o_128 = t;
          if(((n_128 != NULL) && (n_128 != o_128)))
            _fail(o_128);
          else
            n_128 = o_128;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(n_128), (ATerm) ATmakeAppl(sym_Op_2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_u_27, (ATerm) ATinsert(CheckATermList(not_null(a_128)), (ATerm) ATmakeAppl(sym_Str_1, not_null(b_128))))), (ATerm) ATmakeAppl(sym_Op_2, term_t_27, not_null(z_127)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(m_127), not_null(n_127), (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_127), not_null(q_127), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_w_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(m_127))))), (ATerm)ATmakeAppl(sym_Op_2, term_t_27, not_null(z_127)), (ATerm) ATmakeAppl(sym_Op_2, term_u_27, (ATerm) ATinsert(CheckATermList(not_null(a_128)), (ATerm) ATmakeAppl(sym_Str_1, not_null(b_128))))), not_null(t_127)))));
    }
    return(t);
  }
  ATerm c_129 (ATerm t)
  {
    ATerm t_128 = NULL,z_128 = NULL;
    ATerm x_27;
    x_27 = t;
    {
      ATerm u_128 = NULL,w_128 = NULL,y_128 = NULL;
      ATerm y_27;
      y_27 = t;
      {
        ATerm v_128 = NULL;
        t = term_b_19;
        {
          t = q_0(t);
          {
            v_128 = t;
            if(((u_128 != NULL) && (u_128 != v_128)))
              _fail(v_128);
            else
              u_128 = v_128;
          }
        }
      }
      t = y_27;
      {
        ATerm x_128 = NULL;
        t = not_null(p_127);
        {
          t = tvars_0(t);
          {
            x_128 = t;
            if(((w_128 != NULL) && (w_128 != x_128)))
              _fail(x_128);
            else
              w_128 = x_128;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_128), not_null(w_128));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                y_128 = t;
                if(((t_128 != NULL) && (t_128 != y_128)))
                  _fail(y_128);
                else
                  t_128 = y_128;
              }
            }
          }
        }
      }
    }
    t = x_27;
    {
      ATerm a_129 = NULL;
      t = not_null(m_127);
      {
        t = r_0(t);
        {
          a_129 = t;
          if(((z_128 != NULL) && (z_128 != a_129)))
            _fail(a_129);
          else
            z_128 = a_129;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(z_128), (ATerm) ATmakeAppl(sym_Op_2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, term_p_27), (ATerm) ATmakeAppl(sym_Op_2, term_t_27, not_null(t_128)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(m_127), not_null(n_127), (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_127), term_z_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_w_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(m_127))))), (ATerm)ATmakeAppl(sym_Op_2, term_t_27, not_null(t_128)), term_p_27), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_127), term_w_13)))));
    }
    return(t);
  }
  l_127 = t;
  f_127 :
  if(match_cons(l_127, sym_RDef_3))
    {
      m_127 = ATgetArgument(l_127, 0);
      n_127 = ATgetArgument(l_127, 1);
      o_127 = ATgetArgument(l_127, 2);
      g_127 :
      if(match_cons(o_127, sym_Rule_3))
        {
          p_127 = ATgetArgument(o_127, 0);
          q_127 = ATgetArgument(o_127, 1);
          t_127 = ATgetArgument(o_127, 2);
          h_127 :
          if(match_cons(q_127, sym_Op_2))
            {
              r_127 = ATgetArgument(q_127, 0);
              s_127 = ATgetArgument(q_127, 1);
              i_127 :
              if(((ATermList) s_127 == ATempty))
                {
                  j_127 :
                  if(match_string(r_127, "Undefined"))
                    {
                      ATerm a_28 = t;
                      int b_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_129(t);
                          LocalPopChoice(b_28);
                        }
                      else
                        {
                          t = a_28;
                          t = c_129(t);
                        }
                    }
                  else
                    {
                      t = b_129(t);
                    }
                }
              else
                {
                  k_127 :
                  t = b_129(t);
                }
            }
          else
            {
              t = b_129(t);
            }
        }
      else
        {
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
  ATerm v_129 = NULL,w_129 = NULL,x_129 = NULL,y_129 = NULL;
  v_129 = t;
  t_129 :
  if(match_cons(v_129, sym__2))
    {
      w_129 = ATgetArgument(v_129, 0);
      y_129 = ATgetArgument(v_129, 1);
      u_129 :
      if(match_cons(w_129, sym_OverrideDynamicRules_1))
        {
          x_129 = ATgetArgument(w_129, 0);
          {
            t = not_null(x_129);
            {
              ATerm z_4 (ATerm t)
              {
                ATerm a_5 (ATerm t)
                {
                  t = not_null(y_129);
                  return(t);
                }
                ATerm b_5 (ATerm t)
                {
                  ATerm b_130 = NULL;
                  b_130 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_d_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(b_130)))));
                  return(t);
                }
                t = SplitDynamicRule_2(t, a_5, b_5);
                return(t);
              }
              t = map_1(t, z_4);
              t = unzip_0(t);
            }
          }
        }
      else
        {
          if(match_cons(w_129, sym_DynamicRules_1))
            {
              x_129 = ATgetArgument(w_129, 0);
              {
                t = not_null(x_129);
                {
                  ATerm c_5 (ATerm t)
                  {
                    ATerm d_5 (ATerm t)
                    {
                      t = not_null(y_129);
                      return(t);
                    }
                    ATerm e_5 (ATerm t)
                    {
                      ATerm f_130 = NULL;
                      f_130 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_f_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(f_130)))));
                      return(t);
                    }
                    t = SplitDynamicRule_2(t, d_5, e_5);
                    return(t);
                  }
                  t = map_1(t, c_5);
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
ATerm dist_scope_1 (ATerm t, ATerm t_107 (ATerm))
{
  ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL,t_130 = NULL,u_130 = NULL;
  q_130 = t;
  o_130 :
  if(match_cons(q_130, sym__2))
    {
      r_130 = ATgetArgument(q_130, 0);
      u_130 = ATgetArgument(q_130, 1);
      p_130 :
      if(match_cons(r_130, sym_Scope_2))
        {
          s_130 = ATgetArgument(r_130, 0);
          t_130 = ATgetArgument(r_130, 1);
          {
            ATerm y_130 = NULL;
            ATerm z_130 = NULL,b_131 = NULL;
            ATerm a_131 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_130), not_null(u_130));
            {
              t = union_0(t);
              {
                a_131 = t;
                if(((z_130 != NULL) && (z_130 != a_131)))
                  _fail(a_131);
                else
                  z_130 = a_131;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_130), not_null(z_130));
              {
                t = t_107(t);
                {
                  b_131 = t;
                  if(((y_130 != NULL) && (y_130 != b_131)))
                    _fail(b_131);
                  else
                    y_130 = b_131;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_130), not_null(y_130));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm one_dist_1 (ATerm t, ATerm g_100 (ATerm))
{
  ATerm i_131 = NULL,j_131 = NULL,k_131 = NULL;
  i_131 = t;
  h_131 :
  if(match_cons(i_131, sym__2))
    {
      j_131 = ATgetArgument(i_131, 0);
      k_131 = ATgetArgument(i_131, 1);
      {
        t = not_null(j_131);
        {
          ATerm f_5 (ATerm t)
          {
            ATerm n_131 = NULL;
            n_131 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_131), not_null(k_131));
              t = g_100(t);
            }
            return(t);
          }
          t = _one(t, f_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_oncetd_1 (ATerm t, ATerm y_100 (ATerm))
{
  ATerm r_131 (ATerm t)
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_100(t);
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        t = one_dist_1(t, r_131);
      }
    return(t);
  }
  t = r_131(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm y_131 = NULL,z_131 = NULL,a_132 = NULL;
  y_131 = t;
  x_131 :
  if(((ATgetType(y_131) == AT_LIST) && ((ATermList) y_131 != ATempty)))
    {
      z_131 = ATgetFirst((ATermList) y_131);
      a_132 = (ATerm) ATgetNext((ATermList) y_131);
      {
        ATerm d_132 = NULL,e_132 = NULL,f_132 = NULL,g_132 = NULL;
        ATerm h_132 = NULL;
        t = not_null(z_131);
        {
          ATerm l_132 = NULL;
          t = tvars_0(t);
          {
            h_132 = t;
            {
              if(((f_132 != NULL) && (f_132 != h_132)))
                _fail(h_132);
              else
                f_132 = h_132;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_131), not_null(f_132));
                {
                  ATerm o_132 (ATerm t)
                  {
                    ATerm g_5 (ATerm t)
                    {
                      ATerm i_28 = t;
                      int j_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = dist_scope_1(t, o_132);
                          LocalPopChoice(j_28);
                        }
                      else
                        {
                          t = i_28;
                          {
                            ATerm i_132 = NULL,j_132 = NULL,k_132 = NULL;
                            t = split_dynamic_rules_0(t);
                            {
                              i_132 = t;
                              v_131 :
                              if(match_cons(i_132, sym__2))
                                {
                                  j_132 = ATgetArgument(i_132, 0);
                                  k_132 = ATgetArgument(i_132, 1);
                                  {
                                    if(((e_132 != NULL) && (e_132 != j_132)))
                                      _fail(j_132);
                                    else
                                      e_132 = j_132;
                                    {
                                      if(((d_132 != NULL) && (d_132 != k_132)))
                                        _fail(k_132);
                                      else
                                        d_132 = k_132;
                                      t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_132));
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
                    t = env_oncetd_1(t, g_5);
                    return(t);
                  }
                  t = o_132(t);
                  {
                    l_132 = t;
                    if(((g_132 != NULL) && (g_132 != l_132)))
                      _fail(l_132);
                    else
                      g_132 = l_132;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_132)), not_null(g_132)), not_null(a_132));
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
ATerm repeat_2 (ATerm t, ATerm g_106 (ATerm), ATerm h_106 (ATerm))
{
  ATerm r_132 (ATerm t)
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_106(t);
        t = r_132(t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = h_106(t);
      }
    return(t);
  }
  t = r_132(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm j_106 (ATerm))
{
  t = repeat_2(t, j_106, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm o_99 (ATerm))
{
  ATerm s_132 (ATerm t)
  {
    t = o_99(t);
    {
      ATerm m_28 = t;
      int n_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(n_28);
        }
      else
        {
          t = m_28;
          t = Cons_2(t, _id, s_132);
        }
    }
    return(t);
  }
  t = s_132(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, h_5);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm x_132 = NULL,y_132 = NULL,z_132 = NULL,a_133 = NULL,b_133 = NULL;
  z_132 = t;
  v_132 :
  if(match_cons(z_132, sym_DynRuleScope_2))
    {
      a_133 = ATgetArgument(z_132, 0);
      b_133 = ATgetArgument(z_132, 1);
      w_132 :
      if(((ATgetType(a_133) == AT_LIST) && ((ATermList) a_133 != ATempty)))
        {
          x_132 = ATgetFirst((ATermList) a_133);
          y_132 = (ATerm) ATgetNext((ATermList) a_133);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_p_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(y_132), not_null(b_133))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(x_132)))));
        }
      else
        {
          if(((ATermList) a_133 == ATempty))
            {
              t = not_null(b_133);
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
  ATerm i_5 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, i_5);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm k_5 (ATerm t)
    {
      ATerm l_5 (ATerm t)
      {
        ATerm m_5 (ATerm t)
        {
          ATerm n_5 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, n_5);
          return(t);
        }
        t = Cons_2(t, m_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, l_5);
      return(t);
    }
    t = Cons_2(t, _id, k_5);
    return(t);
  }
  t = Specification_1(t, j_5);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm l_133 = NULL,m_133 = NULL;
  l_133 = t;
  k_133 :
  if(match_cons(l_133, sym_ScopeDefault_1))
    {
      m_133 = ATgetArgument(l_133, 0);
      {
        ATerm o_133 = NULL;
        ATerm p_133 = NULL;
        t = not_null(m_133);
        {
          t = tvars_0(t);
          {
            p_133 = t;
            if(((o_133 != NULL) && (o_133 != p_133)))
              _fail(p_133);
            else
              o_133 = p_133;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_133), not_null(m_133));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm x_133 = NULL,y_133 = NULL;
  x_133 = t;
  w_133 :
  if(match_cons(x_133, sym_DynamicRules_1))
    {
      y_133 = ATgetArgument(x_133, 0);
      {
        ATerm b_134 = NULL,d_134 = NULL;
        ATerm c_134 = NULL;
        t = SSLgetAnnotations(not_null(x_133));
        {
          c_134 = t;
          if(((b_134 != NULL) && (b_134 != c_134)))
            _fail(c_134);
          else
            b_134 = c_134;
        }
        {
          t = not_null(y_133);
          {
            ATerm f_134 = NULL;
            t = t_76(t);
            {
              d_134 = t;
              {
                ATerm g_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(d_134)), not_null(b_134));
                {
                  g_134 = t;
                  if(((f_134 != NULL) && (f_134 != g_134)))
                    _fail(g_134);
                  else
                    f_134 = g_134;
                }
                t = not_null(f_134);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm q_79 (ATerm), ATerm r_79 (ATerm))
{
  ATerm r_134 = NULL,s_134 = NULL,t_134 = NULL;
  r_134 = t;
  q_134 :
  if(match_cons(r_134, sym_Scope_2))
    {
      s_134 = ATgetArgument(r_134, 0);
      t_134 = ATgetArgument(r_134, 1);
      {
        ATerm x_134 = NULL,z_134 = NULL;
        ATerm y_134 = NULL;
        t = SSLgetAnnotations(not_null(r_134));
        {
          y_134 = t;
          if(((x_134 != NULL) && (x_134 != y_134)))
            _fail(y_134);
          else
            x_134 = y_134;
        }
        {
          t = not_null(s_134);
          {
            ATerm b_135 = NULL;
            t = q_79(t);
            {
              z_134 = t;
              {
                t = not_null(t_134);
                {
                  ATerm d_135 = NULL;
                  t = r_79(t);
                  {
                    b_135 = t;
                    {
                      ATerm e_135 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(z_134), not_null(b_135)), not_null(x_134));
                      {
                        e_135 = t;
                        if(((d_135 != NULL) && (d_135 != e_135)))
                          _fail(e_135);
                        else
                          d_135 = e_135;
                      }
                      t = not_null(d_135);
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
ATerm tboundin_3 (ATerm t, ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm))
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, s_80, q_80);
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = DynamicRules_1(t, q_80);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm m_135 = NULL,n_135 = NULL;
  m_135 = t;
  l_135 :
  if(match_cons(m_135, sym_DynamicRules_1))
    {
      n_135 = ATgetArgument(m_135, 0);
      {
        t = not_null(n_135);
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
  ATerm u_135 = NULL,v_135 = NULL,w_135 = NULL,x_135 = NULL,y_135 = NULL,z_135 = NULL;
  x_135 = t;
  s_135 :
  if(match_cons(x_135, sym_LRule_1))
    {
      y_135 = ATgetArgument(x_135, 0);
      t_135 :
      if(match_cons(y_135, sym_Rule_3))
        {
          u_135 = ATgetArgument(y_135, 0);
          v_135 = ATgetArgument(y_135, 1);
          w_135 = ATgetArgument(y_135, 2);
          {
            t = not_null(u_135);
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
      if(match_cons(x_135, sym_Scope_2))
        {
          y_135 = ATgetArgument(x_135, 0);
          z_135 = ATgetArgument(x_135, 1);
          t = not_null(y_135);
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
  ATerm j_136 = NULL,k_136 = NULL;
  j_136 = t;
  i_136 :
  if(match_cons(j_136, sym_Var_1))
    {
      k_136 = ATgetArgument(j_136, 0);
      t = (ATerm) ATinsert(ATempty, not_null(k_136));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm p_136 = NULL,q_136 = NULL,r_136 = NULL;
  p_136 = t;
  o_136 :
  if(match_cons(p_136, sym__2))
    {
      q_136 = ATgetArgument(p_136, 0);
      r_136 = ATgetArgument(p_136, 1);
      {
        t = not_null(q_136);
        {
          ATerm v_136 (ATerm t)
          {
            ATerm s_28 = t;
            int t_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_136);
                LocalPopChoice(t_28);
              }
            else
              {
                t = s_28;
                {
                  ATerm u_28 = t;
                  int v_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_5 (ATerm t)
                      {
                        t = not_null(r_136);
                        return(t);
                      }
                      t = HdMember_1(t, o_5);
                      t = v_136(t);
                      LocalPopChoice(v_28);
                    }
                  else
                    {
                      t = u_28;
                      t = Cons_2(t, _id, v_136);
                    }
                }
              }
            return(t);
          }
          t = v_136(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm f_93 (ATerm))
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_93(t);
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      {
        ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL;
        a_137 = t;
        z_136 :
        if(((ATgetType(a_137) == AT_LIST) && ((ATermList) a_137 != ATempty)))
          {
            b_137 = ATgetFirst((ATermList) a_137);
            c_137 = (ATerm) ATgetNext((ATermList) a_137);
            {
              ATerm f_137 = NULL,h_137 = NULL;
              ATerm y_28;
              y_28 = t;
              {
                ATerm g_137 = NULL;
                t = not_null(b_137);
                {
                  t = f_93(t);
                  {
                    g_137 = t;
                    if(((f_137 != NULL) && (f_137 != g_137)))
                      _fail(g_137);
                    else
                      f_137 = g_137;
                  }
                }
              }
              t = y_28;
              {
                ATerm i_137 = NULL;
                t = not_null(c_137);
                {
                  t = foldr_3(t, d_93, e_93, f_93);
                  {
                    i_137 = t;
                    if(((h_137 != NULL) && (h_137 != i_137)))
                      _fail(i_137);
                    else
                      h_137 = i_137;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_137), not_null(h_137));
                  t = e_93(t);
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
ATerm crush_3 (ATerm t, ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm))
{
  ATerm q_137 = NULL;
  ATerm s_137 = NULL;
  q_137 = t;
  {
    ATerm t_137 = NULL;
    ATerm v_137 = NULL,w_137 = NULL,x_137 = NULL;
    t = not_null(q_137);
    {
      t_137 = t;
      {
        t = SSL_explode_term(not_null(t_137));
        {
          v_137 = t;
          p_137 :
          if(match_cons(v_137, sym__2))
            {
              w_137 = ATgetArgument(v_137, 0);
              x_137 = ATgetArgument(v_137, 1);
              if(((s_137 != NULL) && (s_137 != x_137)))
                _fail(x_137);
              else
                s_137 = x_137;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_137);
      t = foldr_3(t, s_94, t_94, u_94);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm e_138 = NULL,f_138 = NULL,g_138 = NULL,h_138 = NULL,i_138 = NULL;
  e_138 = t;
  c_138 :
  if(match_cons(e_138, sym__2))
    {
      f_138 = ATgetArgument(e_138, 0);
      g_138 = ATgetArgument(e_138, 1);
      d_138 :
      if(((ATgetType(g_138) == AT_LIST) && ((ATermList) g_138 != ATempty)))
        {
          h_138 = ATgetFirst((ATermList) g_138);
          i_138 = (ATerm) ATgetNext((ATermList) g_138);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_138)), not_null(h_138)), not_null(i_138));
        }
      else
        {
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
  ATerm x_138 = NULL,y_138 = NULL,z_138 = NULL,a_139 = NULL,b_139 = NULL;
  x_138 = t;
  v_138 :
  if(((ATgetType(x_138) == AT_LIST) && ((ATermList) x_138 != ATempty)))
    {
      y_138 = ATgetFirst((ATermList) x_138);
      b_139 = (ATerm) ATgetNext((ATermList) x_138);
      w_138 :
      if(match_cons(y_138, sym__2))
        {
          z_138 = ATgetArgument(y_138, 0);
          a_139 = ATgetArgument(y_138, 1);
          {
            ATerm f_139 = NULL,g_139 = NULL,m_139 = NULL,s_139 = NULL;
            ATerm z_28;
            z_28 = t;
            {
              ATerm h_139 = NULL;
              ATerm j_139 = NULL,k_139 = NULL,l_139 = NULL;
              t = not_null(a_139);
              {
                h_139 = t;
                {
                  t = SSL_explode_term(not_null(h_139));
                  {
                    j_139 = t;
                    q_138 :
                    if(match_cons(j_139, sym__2))
                      {
                        k_139 = ATgetArgument(j_139, 0);
                        l_139 = ATgetArgument(j_139, 1);
                        {
                          if(((f_139 != NULL) && (f_139 != k_139)))
                            _fail(k_139);
                          else
                            f_139 = k_139;
                          if(((g_139 != NULL) && (g_139 != l_139)))
                            _fail(l_139);
                          else
                            g_139 = l_139;
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
            t = z_28;
            {
              ATerm a_29;
              a_29 = t;
              {
                ATerm n_139 = NULL;
                ATerm p_139 = NULL,q_139 = NULL,r_139 = NULL;
                t = not_null(z_138);
                {
                  n_139 = t;
                  {
                    t = SSL_explode_term(not_null(n_139));
                    {
                      p_139 = t;
                      t_138 :
                      if(match_cons(p_139, sym__2))
                        {
                          q_139 = ATgetArgument(p_139, 0);
                          r_139 = ATgetArgument(p_139, 1);
                          {
                            if(((f_139 != NULL) && (f_139 != q_139)))
                              _fail(q_139);
                            else
                              f_139 = q_139;
                            if(((m_139 != NULL) && (m_139 != r_139)))
                              _fail(r_139);
                            else
                              m_139 = r_139;
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
              t = a_29;
              {
                ATerm t_139 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_139), not_null(g_139));
                {
                  t = zip_1(t, _id);
                  {
                    t_139 = t;
                    if(((s_139 != NULL) && (s_139 != t_139)))
                      _fail(t_139);
                    else
                      s_139 = t_139;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_139), not_null(b_139));
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
  ATerm d_140 = NULL,e_140 = NULL,f_140 = NULL,g_140 = NULL,h_140 = NULL;
  d_140 = t;
  b_140 :
  if(((ATgetType(d_140) == AT_LIST) && ((ATermList) d_140 != ATempty)))
    {
      e_140 = ATgetFirst((ATermList) d_140);
      h_140 = (ATerm) ATgetNext((ATermList) d_140);
      c_140 :
      if(match_cons(e_140, sym__2))
        {
          f_140 = ATgetArgument(e_140, 0);
          g_140 = ATgetArgument(e_140, 1);
          {
            ATerm j_140 = NULL;
            if(((f_140 != NULL) && (f_140 != g_140)))
              _fail(g_140);
            else
              f_140 = g_140;
            {
              if(((j_140 != NULL) && (j_140 != h_140)))
                _fail(h_140);
              else
                j_140 = h_140;
              t = not_null(j_140);
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
ATerm while_not_2 (ATerm t, ATerm x_106 (ATerm), ATerm y_106 (ATerm))
{
  ATerm l_140 (ATerm t)
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_106(t);
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        {
          t = y_106(t);
          t = l_140(t);
        }
      }
    return(t);
  }
  t = l_140(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm))
{
  t = a_107(t);
  t = while_not_2(t, b_107, c_107);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm h_94 (ATerm))
{
  ATerm p_140 = NULL,q_140 = NULL,r_140 = NULL;
  p_140 = t;
  o_140 :
  if(((ATgetType(p_140) == AT_LIST) && ((ATermList) p_140 != ATempty)))
    {
      q_140 = ATgetFirst((ATermList) p_140);
      r_140 = (ATerm) ATgetNext((ATermList) p_140);
      {
        t = h_94(t);
        {
          ATerm p_5 (ATerm t)
          {
            ATerm u_140 = NULL;
            u_140 = t;
            if(((q_140 != NULL) && (q_140 != u_140)))
              _fail(u_140);
            else
              q_140 = u_140;
            return(t);
          }
          t = fetch_1(t, p_5);
        }
        t = not_null(r_140);
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
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_141 = NULL,b_141 = NULL,c_141 = NULL;
      a_141 = t;
      y_140 :
      if(match_cons(a_141, sym__2))
        {
          b_141 = ATgetArgument(a_141, 0);
          c_141 = ATgetArgument(a_141, 1);
          {
            t = not_null(b_141);
            {
              ATerm i_141 (ATerm t)
              {
                ATerm f_29 = t;
                int g_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(g_29);
                  }
                else
                  {
                    t = f_29;
                    {
                      ATerm h_29 = t;
                      int i_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_5 (ATerm t)
                          {
                            t = not_null(c_141);
                            return(t);
                          }
                          t = HdMember_1(t, q_5);
                          t = i_141(t);
                          LocalPopChoice(i_29);
                        }
                      else
                        {
                          t = h_29;
                          t = Cons_2(t, _id, i_141);
                        }
                    }
                  }
                return(t);
              }
              t = i_141(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      {
        ATerm r_5 (ATerm t)
        {
          ATerm f_141 = NULL;
          f_141 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_141));
          return(t);
        }
        ATerm s_5 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          ATerm j_29 = t;
          int k_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_5 (ATerm t)
              {
                ATerm l_29 = t;
                int m_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(m_29);
                  }
                else
                  {
                    t = l_29;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, u_5);
              LocalPopChoice(k_29);
            }
          else
            {
              t = j_29;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, r_5, s_5, t_5);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm y_81 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm n_141 (ATerm t)
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_81(t);
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        {
          ATerm p_29 = t;
          int q_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_141 = NULL;
              ATerm r_29;
              r_29 = t;
              {
                ATerm m_141 = NULL;
                t = x_81(t);
                {
                  m_141 = t;
                  if(((l_141 != NULL) && (l_141 != m_141)))
                    _fail(m_141);
                  else
                    l_141 = m_141;
                }
              }
              t = r_29;
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm x_5 (ATerm t)
                  {
                    t = not_null(l_141);
                    return(t);
                  }
                  t = split_2(t, n_141, x_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm w_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = y_81(t, v_5, n_141, w_5);
                {
                  ATerm y_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, y_5, union_0, _id);
                }
              }
              LocalPopChoice(q_29);
            }
          else
            {
              t = p_29;
              {
                ATerm z_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, z_5, union_0, n_141);
              }
            }
        }
      }
    return(t);
  }
  t = n_141(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, a_6, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm t_141 = NULL,u_141 = NULL,v_141 = NULL,w_141 = NULL,x_141 = NULL;
  t_141 = t;
  r_141 :
  if(match_cons(t_141, sym_LRule_1))
    {
      u_141 = ATgetArgument(t_141, 0);
      s_141 :
      if(match_cons(u_141, sym_Rule_3))
        {
          v_141 = ATgetArgument(u_141, 0);
          w_141 = ATgetArgument(u_141, 1);
          x_141 = ATgetArgument(u_141, 2);
          {
            ATerm b_142 = NULL;
            ATerm c_142 = NULL;
            t = not_null(v_141);
            {
              t = tvars_0(t);
              {
                c_142 = t;
                if(((b_142 != NULL) && (b_142 != c_142)))
                  _fail(c_142);
                else
                  b_142 = c_142;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_142), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_141), not_null(w_141), not_null(x_141))));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm a_103 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    t = bottomup_1(t, a_103);
    return(t);
  }
  t = _all(t, b_6);
  t = a_103(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      ATerm u_29 = t;
      int v_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          LocalPopChoice(v_29);
        }
      else
        {
          t = u_29;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, d_6);
    return(t);
  }
  t = bottomup_1(t, c_6);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm h_142 = NULL,i_142 = NULL;
  h_142 = t;
  g_142 :
  if(match_cons(h_142, sym_Var_1))
    {
      i_142 = ATgetArgument(h_142, 0);
      t = not_null(i_142);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm o_142 = NULL,p_142 = NULL,q_142 = NULL,r_142 = NULL,s_142 = NULL;
  o_142 = t;
  m_142 :
  if(match_cons(o_142, sym__2))
    {
      p_142 = ATgetArgument(o_142, 0);
      q_142 = ATgetArgument(o_142, 1);
      n_142 :
      if(((ATgetType(q_142) == AT_LIST) && ((ATermList) q_142 != ATempty)))
        {
          r_142 = ATgetFirst((ATermList) q_142);
          s_142 = (ATerm) ATgetNext((ATermList) q_142);
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_142), not_null(s_142));
        }
      else
        {
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
  ATerm a_143 = NULL,c_143 = NULL,d_143 = NULL,e_143 = NULL,f_143 = NULL,g_143 = NULL,h_143 = NULL;
  a_143 = t;
  x_142 :
  if(match_cons(a_143, sym__2))
    {
      c_143 = ATgetArgument(a_143, 0);
      d_143 = ATgetArgument(a_143, 1);
      y_142 :
      if(((ATgetType(d_143) == AT_LIST) && ((ATermList) d_143 != ATempty)))
        {
          e_143 = ATgetFirst((ATermList) d_143);
          h_143 = (ATerm) ATgetNext((ATermList) d_143);
          z_142 :
          if(match_cons(e_143, sym__2))
            {
              f_143 = ATgetArgument(e_143, 0);
              g_143 = ATgetArgument(e_143, 1);
              {
                ATerm j_143 = NULL;
                if(((c_143 != NULL) && (c_143 != f_143)))
                  _fail(f_143);
                else
                  c_143 = f_143;
                {
                  if(((j_143 != NULL) && (j_143 != g_143)))
                    _fail(g_143);
                  else
                    j_143 = g_143;
                  t = not_null(j_143);
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
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm s_83 (ATerm), ATerm t_83 (ATerm))
{
  ATerm p_143 = NULL;
  ATerm r_143 = NULL,s_143 = NULL;
  p_143 = t;
  {
    ATerm t_143 = NULL;
    t = not_null(p_143);
    {
      ATerm u_143 = NULL;
      t = s_83(t);
      {
        t_143 = t;
        {
          if(((r_143 != NULL) && (r_143 != t_143)))
            _fail(t_143);
          else
            r_143 = t_143;
          {
            t = t_83(t);
            {
              u_143 = t;
              if(((s_143 != NULL) && (s_143 != u_143)))
                _fail(u_143);
              else
                s_143 = u_143;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_143), not_null(s_143));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm d_105 (ATerm))
{
  ATerm y_143 (ATerm t)
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_105(t);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = _all(t, y_143);
      }
    return(t);
  }
  t = y_143(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm b_144 = NULL,c_144 = NULL,d_144 = NULL;
  b_144 = t;
  a_144 :
  if(match_cons(b_144, sym__2))
    {
      c_144 = ATgetArgument(b_144, 0);
      d_144 = ATgetArgument(b_144, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_144)), not_null(c_144));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm l_144 = NULL,m_144 = NULL,n_144 = NULL,o_144 = NULL,p_144 = NULL,q_144 = NULL,r_144 = NULL;
  l_144 = t;
  i_144 :
  if(match_cons(l_144, sym__2))
    {
      m_144 = ATgetArgument(l_144, 0);
      p_144 = ATgetArgument(l_144, 1);
      j_144 :
      if(((ATgetType(m_144) == AT_LIST) && ((ATermList) m_144 != ATempty)))
        {
          n_144 = ATgetFirst((ATermList) m_144);
          o_144 = (ATerm) ATgetNext((ATermList) m_144);
          k_144 :
          if(((ATgetType(p_144) == AT_LIST) && ((ATermList) p_144 != ATempty)))
            {
              q_144 = ATgetFirst((ATermList) p_144);
              r_144 = (ATerm) ATgetNext((ATermList) p_144);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(n_144), not_null(q_144)), (ATerm) ATmakeAppl(sym__2, not_null(o_144), not_null(r_144)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm b_145 = NULL,c_145 = NULL,d_145 = NULL;
  b_145 = t;
  y_144 :
  if(match_cons(b_145, sym__2))
    {
      c_145 = ATgetArgument(b_145, 0);
      d_145 = ATgetArgument(b_145, 1);
      z_144 :
      if(((ATermList) c_145 == ATempty))
        {
          a_145 :
          if(((ATermList) d_145 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm a_97 (ATerm))
{
  ATerm f_145 (ATerm t)
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_96(t);
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        {
          t = y_96(t);
          {
            t = _2(t, a_97, f_145);
            t = z_96(t);
          }
        }
      }
    return(t);
  }
  t = f_145(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm c_97 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, c_97);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm k_145 = NULL,l_145 = NULL,m_145 = NULL,n_145 = NULL;
  k_145 = t;
  j_145 :
  if(match_cons(k_145, sym__2))
    {
      l_145 = ATgetArgument(k_145, 0);
      m_145 = ATgetArgument(k_145, 1);
      {
        ATerm p_145 = NULL;
        if(((p_145 != NULL) && (p_145 != m_145)))
          _fail(m_145);
        else
          p_145 = m_145;
      }
    }
  else
    {
      if(match_cons(k_145, sym__3))
        {
          l_145 = ATgetArgument(k_145, 0);
          m_145 = ATgetArgument(k_145, 1);
          n_145 = ATgetArgument(k_145, 2);
          {
            ATerm v_145 = NULL;
            ATerm w_145 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_145), not_null(m_145));
            {
              t = zip_1(t, _id);
              {
                w_145 = t;
                if(((v_145 != NULL) && (v_145 != w_145)))
                  _fail(w_145);
                else
                  v_145 = w_145;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_145), not_null(n_145));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm u_83 (ATerm), ATerm v_83 (ATerm))
{
  ATerm c_146 = NULL,d_146 = NULL,e_146 = NULL;
  t = subs_args_0(t);
  {
    c_146 = t;
    b_146 :
    if(match_cons(c_146, sym__2))
      {
        d_146 = ATgetArgument(c_146, 0);
        e_146 = ATgetArgument(c_146, 1);
        {
          t = not_null(e_146);
          {
            ATerm e_6 (ATerm t)
            {
              ATerm f_6 (ATerm t)
              {
                t = not_null(d_146);
                return(t);
              }
              t = SubsVar_2(t, u_83, f_6);
              t = v_83(t);
              return(t);
            }
            t = alltd_1(t, e_6);
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
ATerm substitute_1 (ATerm t, ATerm w_83 (ATerm))
{
  t = substitute_2(t, w_83, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm l_146 = NULL,m_146 = NULL,n_146 = NULL,o_146 = NULL;
  l_146 = t;
  j_146 :
  if(match_cons(l_146, sym_OpDecl_2))
    {
      m_146 = ATgetArgument(l_146, 0);
      n_146 = ATgetArgument(l_146, 1);
      k_146 :
      if(match_cons(n_146, sym_ConstType_1))
        {
          o_146 = ATgetArgument(n_146, 0);
          t = not_null(m_146);
        }
      else
        {
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
  ATerm t_146 = NULL,u_146 = NULL;
  t_146 = t;
  s_146 :
  if(match_cons(t_146, sym_Constructors_1))
    {
      u_146 = ATgetArgument(t_146, 0);
      {
        t = not_null(u_146);
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
  ATerm a_147 = NULL,b_147 = NULL,c_147 = NULL,d_147 = NULL;
  a_147 = t;
  y_146 :
  if(match_cons(a_147, sym_Overlay_3))
    {
      b_147 = ATgetArgument(a_147, 0);
      c_147 = ATgetArgument(a_147, 1);
      d_147 = ATgetArgument(a_147, 2);
      z_146 :
      if(((ATermList) c_147 == ATempty))
        {
          t = not_null(b_147);
        }
      else
        {
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
  ATerm k_147 = NULL,l_147 = NULL;
  k_147 = t;
  j_147 :
  if(match_cons(k_147, sym_Overlays_1))
    {
      l_147 = ATgetArgument(k_147, 0);
      {
        t = not_null(l_147);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(k_147, sym_Signature_1))
        {
          l_147 = ATgetArgument(k_147, 0);
          {
            t = not_null(l_147);
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
ATerm filter_1 (ATerm t, ATerm h_92 (ATerm))
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
        ATerm e_30 = t;
        int f_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 (ATerm t)
            {
              t = filter_1(t, h_92);
              return(t);
            }
            t = Cons_2(t, h_92, g_6);
            LocalPopChoice(f_30);
          }
        else
          {
            t = e_30;
            {
              ATerm s_147 = NULL,t_147 = NULL,u_147 = NULL;
              s_147 = t;
              r_147 :
              if(((ATgetType(s_147) == AT_LIST) && ((ATermList) s_147 != ATempty)))
                {
                  t_147 = ATgetFirst((ATermList) s_147);
                  u_147 = (ATerm) ATgetNext((ATermList) s_147);
                  {
                    t = not_null(u_147);
                    t = filter_1(t, h_92);
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
  ATerm b_148 = NULL,h_148 = NULL;
  ATerm g_30;
  g_30 = t;
  {
    ATerm g_148 = NULL;
    t = const_names_0(t);
    {
      ATerm h_6 (ATerm t)
      {
        ATerm c_148 = NULL,e_148 = NULL;
        ATerm h_30;
        h_30 = t;
        {
          ATerm d_148 = NULL;
          d_148 = t;
          if(((c_148 != NULL) && (c_148 != d_148)))
            _fail(d_148);
          else
            c_148 = d_148;
        }
        t = h_30;
        {
          ATerm f_148 = NULL;
          f_148 = t;
          if(((e_148 != NULL) && (e_148 != f_148)))
            _fail(f_148);
          else
            e_148 = f_148;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_148), (ATerm) ATmakeAppl(sym_Op_2, not_null(e_148), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, h_6);
      {
        g_148 = t;
        if(((b_148 != NULL) && (b_148 != g_148)))
          _fail(g_148);
        else
          b_148 = g_148;
      }
    }
  }
  t = g_30;
  {
    ATerm i_148 = NULL;
    i_148 = t;
    if(((h_148 != NULL) && (h_148 != i_148)))
      _fail(i_148);
    else
      h_148 = i_148;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_148), not_null(h_148));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm p_148 = NULL,q_148 = NULL,r_148 = NULL,s_148 = NULL;
  p_148 = t;
  o_148 :
  if(match_cons(p_148, sym__3))
    {
      q_148 = ATgetArgument(p_148, 0);
      r_148 = ATgetArgument(p_148, 1);
      s_148 = ATgetArgument(p_148, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(s_148))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(r_148))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(q_148))))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Combine_0 (ATerm t)
{
  ATerm e_149 = NULL,f_149 = NULL,g_149 = NULL,h_149 = NULL,i_149 = NULL,j_149 = NULL,k_149 = NULL,l_149 = NULL,m_149 = NULL;
  e_149 = t;
  b_149 :
  if(match_cons(e_149, sym__2))
    {
      f_149 = ATgetArgument(e_149, 0);
      j_149 = ATgetArgument(e_149, 1);
      c_149 :
      if(match_cons(f_149, sym__3))
        {
          g_149 = ATgetArgument(f_149, 0);
          h_149 = ATgetArgument(f_149, 1);
          i_149 = ATgetArgument(f_149, 2);
          d_149 :
          if(match_cons(j_149, sym__3))
            {
              k_149 = ATgetArgument(j_149, 0);
              l_149 = ATgetArgument(j_149, 1);
              m_149 = ATgetArgument(j_149, 2);
              {
                ATerm t_149 = NULL,v_149 = NULL,x_149 = NULL;
                ATerm i_30;
                i_30 = t;
                {
                  ATerm u_149 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_149), not_null(k_149));
                  {
                    t = conc_0(t);
                    {
                      u_149 = t;
                      if(((t_149 != NULL) && (t_149 != u_149)))
                        _fail(u_149);
                      else
                        t_149 = u_149;
                    }
                  }
                }
                t = i_30;
                {
                  ATerm j_30;
                  j_30 = t;
                  {
                    ATerm w_149 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_149), not_null(l_149));
                    {
                      t = conc_0(t);
                      {
                        w_149 = t;
                        if(((v_149 != NULL) && (v_149 != w_149)))
                          _fail(w_149);
                        else
                          v_149 = w_149;
                      }
                    }
                  }
                  t = j_30;
                  {
                    ATerm y_149 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_149), not_null(m_149));
                    {
                      t = conc_0(t);
                      {
                        y_149 = t;
                        if(((x_149 != NULL) && (x_149 != y_149)))
                          _fail(y_149);
                        else
                          x_149 = y_149;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(t_149), not_null(v_149), not_null(x_149));
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
  ATerm g_150 = NULL,h_150 = NULL;
  g_150 = t;
  f_150 :
  if(match_cons(g_150, sym_Sorts_1))
    {
      h_150 = ATgetArgument(g_150, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(g_150, sym_Constructors_1))
        {
          h_150 = ATgetArgument(g_150, 0);
          t = not_null(h_150);
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
  ATerm s_150 = NULL,t_150 = NULL;
  s_150 = t;
  r_150 :
  if(match_cons(s_150, sym_Overlays_1))
    {
      t_150 = ATgetArgument(s_150, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(t_150), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(s_150, sym_Rules_1))
        {
          t_150 = ATgetArgument(s_150, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(t_150));
        }
      else
        {
          if(match_cons(s_150, sym_Strategies_1))
            {
              t_150 = ATgetArgument(s_150, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(t_150));
            }
          else
            {
              if(match_cons(s_150, sym_Signature_1))
                {
                  t_150 = ATgetArgument(s_150, 0);
                  {
                    ATerm y_150 = NULL;
                    ATerm z_150 = NULL;
                    t = not_null(t_150);
                    {
                      t = normalize_sigs_0(t);
                      {
                        z_150 = t;
                        if(((y_150 != NULL) && (y_150 != z_150)))
                          _fail(z_150);
                        else
                          y_150 = z_150;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(y_150), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm h_151 = NULL,i_151 = NULL;
  h_151 = t;
  g_151 :
  if(match_cons(h_151, sym_Specification_1))
    {
      i_151 = ATgetArgument(h_151, 0);
      t = not_null(i_151);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm z_102 (ATerm))
{
  t = z_102(t);
  {
    ATerm i_6 (ATerm t)
    {
      t = topdown_1(t, z_102);
      return(t);
    }
    t = _all(t, i_6);
  }
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm k_6 (ATerm t)
    {
      ATerm n_151 = NULL,o_151 = NULL;
      n_151 = t;
      m_151 :
      if(match_cons(n_151, sym_DefaultVarDec_1))
        {
          o_151 = ATgetArgument(n_151, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(o_151), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_15), term_n_15));
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, k_6);
    return(t);
  }
  t = topdown_1(t, j_6);
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
        ATerm l_6 (ATerm t)
        {
          t = term_c_25;
          return(t);
        }
        t = foldr_2(t, l_6, Combine_0);
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
    ATerm k_30;
    k_30 = t;
    t = spec_use_def_0(t);
    t = k_30;
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
                ATerm m_6 (ATerm t)
                {
                  ATerm n_6 (ATerm t)
                  {
                    ATerm o_6 (ATerm t)
                    {
                      t = Strategies_1(t, desugar_spec_0);
                      return(t);
                    }
                    t = Cons_2(t, o_6, Nil_0);
                    return(t);
                  }
                  t = Cons_2(t, _id, n_6);
                  return(t);
                }
                t = Specification_1(t, m_6);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm q_68 (ATerm), ATerm r_68 (ATerm))
{
  ATerm x_151 = NULL,y_151 = NULL,z_151 = NULL;
  x_151 = t;
  w_151 :
  if(match_cons(x_151, sym__2))
    {
      y_151 = ATgetArgument(x_151, 0);
      z_151 = ATgetArgument(x_151, 1);
      {
        ATerm d_152 = NULL,f_152 = NULL;
        ATerm e_152 = NULL;
        t = SSLgetAnnotations(not_null(x_151));
        {
          e_152 = t;
          if(((d_152 != NULL) && (d_152 != e_152)))
            _fail(e_152);
          else
            d_152 = e_152;
        }
        {
          t = not_null(y_151);
          {
            ATerm h_152 = NULL;
            t = q_68(t);
            {
              f_152 = t;
              {
                t = not_null(z_151);
                {
                  ATerm j_152 = NULL;
                  t = r_68(t);
                  {
                    h_152 = t;
                    {
                      ATerm k_152 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_152), not_null(h_152)), not_null(d_152));
                      {
                        k_152 = t;
                        if(((j_152 != NULL) && (j_152 != k_152)))
                          _fail(k_152);
                        else
                          j_152 = k_152;
                      }
                      t = not_null(j_152);
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
  ATerm s_152 = NULL;
  ATerm l_30;
  l_30 = t;
  {
    ATerm p_6 (ATerm t)
    {
      ATerm t_152 = NULL,u_152 = NULL;
      t_152 = t;
      r_152 :
      if(match_cons(t_152, sym_Program_1))
        {
          u_152 = ATgetArgument(t_152, 0);
          if(((s_152 != NULL) && (s_152 != u_152)))
            _fail(u_152);
          else
            s_152 = u_152;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, p_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_30), not_null(s_152)), term_m_30));
      {
        t = printnl_0(t);
        {
          t = term_m_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_152 = NULL,z_152 = NULL,a_153 = NULL;
  y_152 = t;
  x_152 :
  if(match_cons(y_152, sym__2))
    {
      z_152 = ATgetArgument(y_152, 0);
      a_153 = ATgetArgument(y_152, 1);
      {
        ATerm o_30;
        o_30 = t;
        t = SSL_printnl(not_null(z_152), not_null(a_153));
        t = o_30;
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
  ATerm g_153 = NULL,h_153 = NULL,i_153 = NULL;
  g_153 = t;
  f_153 :
  if(match_cons(g_153, sym__2))
    {
      h_153 = ATgetArgument(g_153, 0);
      i_153 = ATgetArgument(g_153, 1);
      {
        t = not_null(h_153);
        {
          ATerm q_6 (ATerm t)
          {
            t = not_null(i_153);
            return(t);
          }
          t = at_end_1(t, q_6);
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
ATerm debug_1 (ATerm t, ATerm e_89 (ATerm))
{
  ATerm p_30;
  p_30 = t;
  {
    ATerm o_153 = NULL,q_153 = NULL;
    ATerm q_30;
    q_30 = t;
    {
      ATerm p_153 = NULL;
      t = e_89(t);
      {
        p_153 = t;
        if(((o_153 != NULL) && (o_153 != p_153)))
          _fail(p_153);
        else
          o_153 = p_153;
      }
    }
    t = q_30;
    {
      ATerm r_153 = NULL;
      r_153 = t;
      if(((q_153 != NULL) && (q_153 != r_153)))
        _fail(r_153);
      else
        q_153 = r_153;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_153)), not_null(o_153)));
        t = printnl_0(t);
      }
    }
  }
  t = p_30;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_153 = NULL;
  v_153 = t;
  t = SSL_is_string(not_null(v_153));
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
            ATerm r_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_6);
            LocalPopChoice(u_30);
          }
        else
          {
            t = t_30;
            {
              ATerm e_154 = NULL,f_154 = NULL,g_154 = NULL;
              e_154 = t;
              d_154 :
              if(match_cons(e_154, sym_Path_1))
                {
                  f_154 = ATgetArgument(e_154, 0);
                  t = not_null(f_154);
                }
              else
                {
                  if(match_cons(e_154, sym_Var_1))
                    {
                      f_154 = ATgetArgument(e_154, 0);
                      {
                        t = not_null(f_154);
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
                                ATerm s_6 (ATerm t)
                                {
                                  t = term_x_30;
                                  return(t);
                                }
                                t = debug_1(t, s_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_154, sym_Prefix_2))
                        {
                          f_154 = ATgetArgument(e_154, 0);
                          g_154 = ATgetArgument(e_154, 1);
                          {
                            ATerm l_154 = NULL,n_154 = NULL;
                            ATerm y_30;
                            y_30 = t;
                            {
                              ATerm m_154 = NULL;
                              t = not_null(f_154);
                              {
                                t = eval_config_0(t);
                                {
                                  m_154 = t;
                                  if(((l_154 != NULL) && (l_154 != m_154)))
                                    _fail(m_154);
                                  else
                                    l_154 = m_154;
                                }
                              }
                            }
                            t = y_30;
                            {
                              ATerm o_154 = NULL;
                              t = not_null(g_154);
                              {
                                t = eval_config_0(t);
                                {
                                  o_154 = t;
                                  if(((n_154 != NULL) && (n_154 != o_154)))
                                    _fail(o_154);
                                  else
                                    n_154 = o_154;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_154), not_null(n_154));
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
  ATerm w_154 = NULL;
  w_154 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_30, not_null(w_154));
    {
      t = table_get_0(t);
      {
        ATerm t_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm a_31;
            a_31 = t;
            {
              ATerm y_154 = NULL;
              ATerm z_154 = NULL;
              z_154 = t;
              if(((y_154 != NULL) && (y_154 != z_154)))
                _fail(z_154);
              else
                y_154 = z_154;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_30, not_null(w_154), not_null(y_154));
                t = table_put_0(t);
              }
            }
            t = a_31;
          }
          return(t);
        }
        t = try_1(t, t_6);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_86 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm b_31;
    b_31 = t;
    {
      ATerm d_155 = NULL;
      ATerm e_155 = NULL;
      t = term_c_31;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_155), term_d_31);
        t = geq_0(t);
      }
    }
    t = b_31;
    t = o_86(t);
    return(t);
  }
  t = try_1(t, u_6);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATempty, term_e_31));
  {
    t = printnl_0(t);
    {
      t = term_m_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm h_155 = NULL;
  h_155 = t;
  t = SSL_TicksToSeconds(not_null(h_155));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm m_155 = NULL,n_155 = NULL,o_155 = NULL;
  m_155 = t;
  l_155 :
  if(match_cons(m_155, sym__2))
    {
      n_155 = ATgetArgument(m_155, 0);
      o_155 = ATgetArgument(m_155, 1);
      {
        ATerm f_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(n_155), not_null(o_155));
            LocalPopChoice(g_31);
          }
        else
          {
            t = f_31;
            t = SSL_addr(not_null(n_155), not_null(o_155));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_93 (ATerm), ATerm c_93 (ATerm))
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_93(t);
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      {
        ATerm v_155 = NULL,w_155 = NULL,x_155 = NULL;
        v_155 = t;
        u_155 :
        if(((ATgetType(v_155) == AT_LIST) && ((ATermList) v_155 != ATempty)))
          {
            w_155 = ATgetFirst((ATermList) v_155);
            x_155 = (ATerm) ATgetNext((ATermList) v_155);
            {
              ATerm a_156 = NULL;
              ATerm b_156 = NULL;
              t = not_null(x_155);
              {
                t = foldr_2(t, b_93, c_93);
                {
                  b_156 = t;
                  if(((a_156 != NULL) && (a_156 != b_156)))
                    _fail(b_156);
                  else
                    a_156 = b_156;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_155), not_null(a_156));
                t = c_93(t);
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
ATerm crush_2 (ATerm t, ATerm q_94 (ATerm), ATerm r_94 (ATerm))
{
  ATerm i_156 = NULL;
  ATerm k_156 = NULL;
  i_156 = t;
  {
    ATerm l_156 = NULL;
    ATerm n_156 = NULL,o_156 = NULL,p_156 = NULL;
    t = not_null(i_156);
    {
      l_156 = t;
      {
        t = SSL_explode_term(not_null(l_156));
        {
          n_156 = t;
          h_156 :
          if(match_cons(n_156, sym__2))
            {
              o_156 = ATgetArgument(n_156, 0);
              p_156 = ATgetArgument(n_156, 1);
              if(((k_156 != NULL) && (k_156 != p_156)))
                _fail(p_156);
              else
                k_156 = p_156;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_156);
      t = foldr_2(t, q_94, r_94);
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
    ATerm v_6 (ATerm t)
    {
      t = term_j_21;
      return(t);
    }
    t = crush_2(t, v_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_156 = NULL,w_156 = NULL,x_156 = NULL;
  v_156 = t;
  u_156 :
  if(match_cons(v_156, sym__2))
    {
      w_156 = ATgetArgument(v_156, 0);
      x_156 = ATgetArgument(v_156, 1);
      {
        ATerm j_31;
        j_31 = t;
        {
          ATerm k_31 = t;
          int l_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_156), not_null(x_156));
              LocalPopChoice(l_31);
            }
          else
            {
              t = k_31;
              t = SSL_gtr(not_null(w_156), not_null(x_156));
            }
        }
        t = j_31;
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
  ATerm d_157 = NULL;
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_157 = NULL,f_157 = NULL,g_157 = NULL;
      e_157 = t;
      c_157 :
      if(match_cons(e_157, sym__2))
        {
          f_157 = ATgetArgument(e_157, 0);
          g_157 = ATgetArgument(e_157, 1);
          {
            if(((d_157 != NULL) && (d_157 != f_157)))
              _fail(f_157);
            else
              d_157 = f_157;
            if(((d_157 != NULL) && (d_157 != g_157)))
              _fail(g_157);
            else
              d_157 = g_157;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_86 (ATerm))
{
  ATerm w_6 (ATerm t)
  {
    ATerm o_31;
    o_31 = t;
    {
      ATerm j_157 = NULL;
      ATerm k_157 = NULL;
      t = term_c_31;
      {
        t = get_config_0(t);
        {
          k_157 = t;
          if(((j_157 != NULL) && (j_157 != k_157)))
            _fail(k_157);
          else
            j_157 = k_157;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_157), term_m_18);
        t = geq_0(t);
      }
    }
    t = o_31;
    t = n_86(t);
    return(t);
  }
  t = try_1(t, w_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm o_157 = NULL,q_157 = NULL;
    ATerm p_31;
    p_31 = t;
    {
      ATerm p_157 = NULL;
      t = run_time_0(t);
      {
        p_157 = t;
        if(((o_157 != NULL) && (o_157 != p_157)))
          _fail(p_157);
        else
          o_157 = p_157;
      }
    }
    t = p_31;
    {
      ATerm r_157 = NULL;
      t = term_q_31;
      {
        t = get_config_0(t);
        {
          r_157 = t;
          if(((q_157 != NULL) && (q_157 != r_157)))
            _fail(r_157);
          else
            q_157 = r_157;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_31), not_null(o_157)), term_r_31), not_null(q_157)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_6);
  {
    t = term_j_21;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm w_157 = NULL,x_157 = NULL,y_157 = NULL;
  w_157 = t;
  v_157 :
  if(match_cons(w_157, sym__2))
    {
      x_157 = ATgetArgument(w_157, 0);
      y_157 = ATgetArgument(w_157, 1);
      t = SSL_WriteToTextFile(not_null(x_157), not_null(y_157));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_158 = NULL,f_158 = NULL,g_158 = NULL;
  e_158 = t;
  d_158 :
  if(match_cons(e_158, sym__2))
    {
      f_158 = ATgetArgument(e_158, 0);
      g_158 = ATgetArgument(e_158, 1);
      t = SSL_WriteToBinaryFile(not_null(f_158), not_null(g_158));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm o_158 = NULL;
  ATerm t_31;
  t_31 = t;
  {
    ATerm y_6 (ATerm t)
    {
      ATerm u_31 = t;
      int v_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_6 (ATerm t)
          {
            ATerm p_158 = NULL,q_158 = NULL;
            p_158 = t;
            l_158 :
            if(match_cons(p_158, sym_Output_1))
              {
                q_158 = ATgetArgument(p_158, 0);
                if(((o_158 != NULL) && (o_158 != q_158)))
                  _fail(q_158);
                else
                  o_158 = q_158;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, z_6);
          LocalPopChoice(v_31);
        }
      else
        {
          t = u_31;
          {
            ATerm r_158 = NULL;
            t = term_w_31;
            {
              r_158 = t;
              if(((o_158 != NULL) && (o_158 != r_158)))
                _fail(r_158);
              else
                o_158 = r_158;
            }
          }
        }
      return(t);
    }
    t = _2(t, y_6, _id);
  }
  t = t_31;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm b_7 (ATerm t)
      {
        t = not_null(o_158);
        return(t);
      }
      t = split_2(t, b_7, _id);
      return(t);
    }
    t = _2(t, _id, a_7);
    {
      ATerm x_31 = t;
      int y_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_7 (ATerm t)
          {
            ATerm d_7 (ATerm t)
            {
              ATerm s_158 = NULL;
              s_158 = t;
              n_158 :
              if(!(match_cons(s_158, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, d_7);
            return(t);
          }
          t = _2(t, c_7, WriteToBinaryFile_0);
          LocalPopChoice(y_31);
        }
      else
        {
          t = x_31;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_88 (ATerm))
{
  ATerm y_158 = NULL,a_159 = NULL,b_159 = NULL,c_159 = NULL;
  ATerm z_31;
  z_31 = t;
  t = dtime_0(t);
  t = z_31;
  {
    t = o_88(t);
    {
      ATerm a_32;
      a_32 = t;
      {
        ATerm z_158 = NULL;
        t = dtime_0(t);
        {
          z_158 = t;
          if(((y_158 != NULL) && (y_158 != z_158)))
            _fail(z_158);
          else
            y_158 = z_158;
        }
      }
      t = a_32;
      {
        a_159 = t;
        x_158 :
        if(match_cons(a_159, sym__2))
          {
            b_159 = ATgetArgument(a_159, 0);
            c_159 = ATgetArgument(a_159, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_159)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_158))), not_null(c_159));
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
  ATerm j_159 = NULL;
  j_159 = t;
  t = SSL_ReadFromFile(not_null(j_159));
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_91 (ATerm), ATerm q_91 (ATerm))
{
  ATerm o_159 = NULL,q_159 = NULL;
  ATerm b_32;
  b_32 = t;
  {
    ATerm p_159 = NULL;
    t = p_91(t);
    {
      p_159 = t;
      if(((o_159 != NULL) && (o_159 != p_159)))
        _fail(p_159);
      else
        o_159 = p_159;
    }
  }
  t = b_32;
  {
    ATerm r_159 = NULL;
    t = q_91(t);
    {
      r_159 = t;
      if(((q_159 != NULL) && (q_159 != r_159)))
        _fail(r_159);
      else
        q_159 = r_159;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_159), not_null(q_159));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_159 = NULL;
  ATerm i_32;
  i_32 = t;
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_7 (ATerm t)
        {
          ATerm y_159 = NULL,z_159 = NULL;
          y_159 = t;
          v_159 :
          if(match_cons(y_159, sym_Input_1))
            {
              z_159 = ATgetArgument(y_159, 0);
              if(((x_159 != NULL) && (x_159 != z_159)))
                _fail(z_159);
              else
                x_159 = z_159;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, e_7);
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        {
          ATerm a_160 = NULL;
          t = term_o_32;
          {
            a_160 = t;
            if(((x_159 != NULL) && (x_159 != a_160)))
              _fail(a_160);
            else
              x_159 = a_160;
          }
        }
      }
  }
  t = i_32;
  {
    ATerm f_7 (ATerm t)
    {
      t = not_null(x_159);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_160 = NULL;
  h_160 = t;
  g_160 :
  if(match_cons(h_160, sym_Version_0))
    {
      ATerm j_160 = NULL,l_160 = NULL;
      ATerm p_32;
      p_32 = t;
      {
        ATerm k_160 = NULL;
        t = SSLgetAnnotations(not_null(h_160));
        {
          k_160 = t;
          if(((j_160 != NULL) && (j_160 != k_160)))
            _fail(k_160);
          else
            j_160 = k_160;
        }
      }
      t = p_32;
      {
        ATerm m_160 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_160));
        {
          m_160 = t;
          if(((l_160 != NULL) && (l_160 != m_160)))
            _fail(m_160);
          else
            l_160 = m_160;
        }
        t = not_null(l_160);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_88 (ATerm))
{
  ATerm g_7 (ATerm t)
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        {
          ATerm s_32 = t;
          int t_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(t_32);
            }
          else
            {
              t = s_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, g_7);
  t = m_88(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_160 = NULL;
  s_160 = t;
  t = SSL_table_create(not_null(s_160));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_160 = NULL;
  w_160 = t;
  {
    ATerm u_32;
    u_32 = t;
    {
      t = term_v_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_32, term_w_32, not_null(w_160));
          t = table_put_0(t);
        }
      }
    }
    t = u_32;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_161 = NULL;
  a_161 = t;
  t = SSL_string_to_int(not_null(a_161));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm i_161 = NULL,j_161 = NULL,k_161 = NULL,l_161 = NULL,m_161 = NULL;
  i_161 = t;
  g_161 :
  if(match_string(i_161, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(i_161) == AT_LIST) && ((ATermList) i_161 != ATempty)))
        {
          j_161 = ATgetFirst((ATermList) i_161);
          k_161 = (ATerm) ATgetNext((ATermList) i_161);
          h_161 :
          if(((ATgetType(k_161) == AT_LIST) && ((ATermList) k_161 != ATempty)))
            {
              l_161 = ATgetFirst((ATermList) k_161);
              m_161 = (ATerm) ATgetNext((ATermList) k_161);
              {
                ATerm q_161 = NULL;
                ATerm x_32;
                x_32 = t;
                {
                  t = not_null(j_161);
                  t = n_0(t);
                }
                t = x_32;
                {
                  ATerm r_161 = NULL;
                  t = not_null(l_161);
                  {
                    t = o_0(t);
                    {
                      r_161 = t;
                      if(((q_161 != NULL) && (q_161 != r_161)))
                        _fail(r_161);
                      else
                        q_161 = r_161;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_161)), not_null(q_161));
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
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_7 (ATerm t)
      {
        ATerm i_162 = NULL;
        i_162 = t;
        v_161 :
        if(!(match_string(i_162, "-i")))
          {
            if(!(match_string(i_162, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_7 (ATerm t)
      {
        ATerm l_162 = NULL;
        ATerm a_33;
        a_33 = t;
        {
          ATerm j_162 = NULL;
          ATerm k_162 = NULL;
          k_162 = t;
          if(((j_162 != NULL) && (j_162 != k_162)))
            _fail(k_162);
          else
            j_162 = k_162;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_b_33, not_null(j_162));
            t = set_config_0(t);
          }
        }
        t = a_33;
        {
          ATerm m_162 = NULL;
          m_162 = t;
          if(((l_162 != NULL) && (l_162 != m_162)))
            _fail(m_162);
          else
            l_162 = m_162;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_162));
        }
        return(t);
      }
      ATerm j_7 (ATerm t)
      {
        t = term_c_33;
        return(t);
      }
      t = ArgOption_3(t, h_7, i_7, j_7);
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      {
        ATerm d_33 = t;
        int e_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_7 (ATerm t)
            {
              ATerm n_162 = NULL;
              n_162 = t;
              y_161 :
              if(!(match_string(n_162, "-o")))
                {
                  if(!(match_string(n_162, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm l_7 (ATerm t)
            {
              ATerm q_162 = NULL;
              ATerm f_33;
              f_33 = t;
              {
                ATerm o_162 = NULL;
                ATerm p_162 = NULL;
                p_162 = t;
                if(((o_162 != NULL) && (o_162 != p_162)))
                  _fail(p_162);
                else
                  o_162 = p_162;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_33, not_null(o_162));
                  t = set_config_0(t);
                }
              }
              t = f_33;
              {
                ATerm r_162 = NULL;
                r_162 = t;
                if(((q_162 != NULL) && (q_162 != r_162)))
                  _fail(r_162);
                else
                  q_162 = r_162;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_162));
              }
              return(t);
            }
            ATerm m_7 (ATerm t)
            {
              t = term_h_33;
              return(t);
            }
            t = ArgOption_3(t, k_7, l_7, m_7);
            LocalPopChoice(e_33);
          }
        else
          {
            t = d_33;
            {
              ATerm i_33 = t;
              int j_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_7 (ATerm t)
                  {
                    ATerm s_162 = NULL;
                    s_162 = t;
                    b_162 :
                    if(!(match_string(s_162, "-S")))
                      {
                        if(!(match_string(s_162, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm o_7 (ATerm t)
                  {
                    t = term_k_33;
                    t = set_config_0(t);
                    t = term_l_33;
                    return(t);
                  }
                  ATerm p_7 (ATerm t)
                  {
                    t = term_m_33;
                    return(t);
                  }
                  t = Option_3(t, n_7, o_7, p_7);
                  LocalPopChoice(j_33);
                }
              else
                {
                  t = i_33;
                  {
                    ATerm n_33 = t;
                    int o_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_7 (ATerm t)
                        {
                          ATerm t_162 = NULL;
                          t_162 = t;
                          c_162 :
                          if(!(match_string(t_162, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm r_7 (ATerm t)
                        {
                          ATerm w_162 = NULL;
                          ATerm p_33;
                          p_33 = t;
                          {
                            ATerm u_162 = NULL;
                            ATerm v_162 = NULL;
                            t = string_to_int_0(t);
                            {
                              v_162 = t;
                              if(((u_162 != NULL) && (u_162 != v_162)))
                                _fail(v_162);
                              else
                                u_162 = v_162;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_c_31, not_null(u_162));
                              t = set_config_0(t);
                            }
                          }
                          t = p_33;
                          {
                            ATerm x_162 = NULL;
                            x_162 = t;
                            if(((w_162 != NULL) && (w_162 != x_162)))
                              _fail(x_162);
                            else
                              w_162 = x_162;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_162));
                          }
                          return(t);
                        }
                        ATerm s_7 (ATerm t)
                        {
                          t = term_q_33;
                          return(t);
                        }
                        t = ArgOption_3(t, q_7, r_7, s_7);
                        LocalPopChoice(o_33);
                      }
                    else
                      {
                        t = n_33;
                        {
                          ATerm r_33 = t;
                          int s_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_7 (ATerm t)
                              {
                                ATerm z_162 = NULL;
                                z_162 = t;
                                f_162 :
                                if(!(match_string(z_162, "-v")))
                                  {
                                    if(!(match_string(z_162, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm u_7 (ATerm t)
                              {
                                t = term_u_33;
                                t = set_config_0(t);
                                t = term_v_33;
                                return(t);
                              }
                              ATerm v_7 (ATerm t)
                              {
                                t = term_w_33;
                                return(t);
                              }
                              t = Option_3(t, t_7, u_7, v_7);
                              LocalPopChoice(s_33);
                            }
                          else
                            {
                              t = r_33;
                              {
                                ATerm x_33 = t;
                                int y_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm w_7 (ATerm t)
                                    {
                                      ATerm a_163 = NULL;
                                      a_163 = t;
                                      g_162 :
                                      if(!(match_string(a_163, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm x_7 (ATerm t)
                                    {
                                      t = term_a_34;
                                      t = set_config_0(t);
                                      t = term_b_34;
                                      return(t);
                                    }
                                    ATerm y_7 (ATerm t)
                                    {
                                      t = term_c_34;
                                      return(t);
                                    }
                                    t = Option_3(t, w_7, x_7, y_7);
                                    LocalPopChoice(y_33);
                                  }
                                else
                                  {
                                    t = x_33;
                                    {
                                      ATerm z_7 (ATerm t)
                                      {
                                        ATerm b_163 = NULL;
                                        b_163 = t;
                                        h_162 :
                                        if(!(match_string(b_163, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm a_8 (ATerm t)
                                      {
                                        t = term_e_34;
                                        t = set_config_0(t);
                                        t = term_f_34;
                                        return(t);
                                      }
                                      ATerm b_8 (ATerm t)
                                      {
                                        t = term_g_34;
                                        return(t);
                                      }
                                      t = Option_3(t, z_7, a_8, b_8);
                                    }
                                  }
                              }
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
  ATerm j_163 = NULL;
  j_163 = t;
  t = SSL_table_destroy(not_null(j_163));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_163 = NULL;
  n_163 = t;
  t = SSL_exit(not_null(n_163));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm r_163 = NULL;
  r_163 = t;
  t = SSL_implode_string(not_null(r_163));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_98 (ATerm))
{
  ATerm u_163 (ATerm t)
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_163);
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        {
          t = Nil_0(t);
          t = y_98(t);
        }
      }
    return(t);
  }
  t = u_163(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      {
        ATerm x_163 = NULL,y_163 = NULL,z_163 = NULL;
        x_163 = t;
        w_163 :
        if(((ATgetType(x_163) == AT_LIST) && ((ATermList) x_163 != ATempty)))
          {
            y_163 = ATgetFirst((ATermList) x_163);
            z_163 = (ATerm) ATgetNext((ATermList) x_163);
            {
              t = not_null(y_163);
              {
                ATerm c_8 (ATerm t)
                {
                  t = not_null(z_163);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_8);
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
  ATerm f_164 = NULL;
  f_164 = t;
  t = SSL_explode_string(not_null(f_164));
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
ATerm long_description_1 (ATerm t, ATerm n_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm i_164 (ATerm t)
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
        t = Cons_2(t, k_98, i_164);
      }
    return(t);
  }
  t = i_164(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm p_164 = NULL,q_164 = NULL,r_164 = NULL;
  r_164 = t;
  o_164 :
  if(((ATgetType(r_164) == AT_LIST) && ((ATermList) r_164 != ATempty)))
    {
      p_164 = ATgetFirst((ATermList) r_164);
      q_164 = (ATerm) ATgetNext((ATermList) r_164);
      {
        ATerm u_164 = NULL;
        t = not_null(q_164);
        {
          ATerm n_34;
          n_34 = t;
          {
            ATerm v_164 = NULL,x_164 = NULL,z_164 = NULL;
            ATerm o_34;
            o_34 = t;
            {
              ATerm w_164 = NULL;
              t = m_0(t);
              {
                w_164 = t;
                if(((v_164 != NULL) && (v_164 != w_164)))
                  _fail(w_164);
                else
                  v_164 = w_164;
              }
            }
            t = o_34;
            {
              ATerm y_164 = NULL;
              t = not_null(p_164);
              {
                t = l_0(t);
                {
                  y_164 = t;
                  if(((x_164 != NULL) && (x_164 != y_164)))
                    _fail(y_164);
                  else
                    x_164 = y_164;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_164)), not_null(x_164));
                {
                  z_164 = t;
                  if(((u_164 != NULL) && (u_164 != z_164)))
                    _fail(z_164);
                  else
                    u_164 = z_164;
                }
              }
            }
          }
          t = n_34;
          {
            ATerm d_8 (ATerm t)
            {
              t = not_null(u_164);
              return(t);
            }
            t = reverse_acc_2(t, l_0, d_8);
          }
        }
      }
    }
  else
    {
      if(((ATermList) r_164 == ATempty))
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
  ATerm e_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_70 (ATerm))
{
  ATerm l_165 = NULL,m_165 = NULL;
  l_165 = t;
  k_165 :
  if(match_cons(l_165, sym_Program_1))
    {
      m_165 = ATgetArgument(l_165, 0);
      {
        ATerm p_165 = NULL,r_165 = NULL;
        ATerm q_165 = NULL;
        t = SSLgetAnnotations(not_null(l_165));
        {
          q_165 = t;
          if(((p_165 != NULL) && (p_165 != q_165)))
            _fail(q_165);
          else
            p_165 = q_165;
        }
        {
          t = not_null(m_165);
          {
            ATerm t_165 = NULL;
            t = e_70(t);
            {
              r_165 = t;
              {
                ATerm u_165 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_165)), not_null(p_165));
                {
                  u_165 = t;
                  if(((t_165 != NULL) && (t_165 != u_165)))
                    _fail(u_165);
                  else
                    t_165 = u_165;
                }
                t = not_null(t_165);
              }
            }
          }
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
  ATerm e_166 = NULL;
  ATerm f_8 (ATerm t)
  {
    ATerm g_8 (ATerm t)
    {
      ATerm f_166 = NULL;
      f_166 = t;
      if(((e_166 != NULL) && (e_166 != f_166)))
        _fail(f_166);
      else
        e_166 = f_166;
      return(t);
    }
    t = Program_1(t, g_8);
    return(t);
  }
  t = option_defined_1(t, f_8);
  {
    ATerm h_8 (ATerm t)
    {
      ATerm g_166 = NULL;
      ATerm h_166 = NULL;
      t = term_b_19;
      {
        ATerm i_8 (ATerm t)
        {
          t = not_null(e_166);
          return(t);
        }
        t = short_description_1(t, i_8);
        {
          t = concat_strings_0(t);
          {
            h_166 = t;
            if(((g_166 != NULL) && (g_166 != h_166)))
              _fail(h_166);
            else
              g_166 = h_166;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATempty, not_null(g_166)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, h_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATempty, term_p_34));
      {
        t = printnl_0(t);
        {
          t = term_s_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_8 (ATerm t)
                {
                  ATerm i_166 = NULL;
                  i_166 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_166)), term_t_34));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_8);
                {
                  ATerm k_8 (ATerm t)
                  {
                    ATerm k_166 = NULL;
                    ATerm l_166 = NULL;
                    t = term_b_19;
                    {
                      ATerm l_8 (ATerm t)
                      {
                        t = not_null(e_166);
                        return(t);
                      }
                      t = long_description_1(t, l_8);
                      {
                        t = concat_strings_0(t);
                        {
                          l_166 = t;
                          if(((k_166 != NULL) && (k_166 != l_166)))
                            _fail(l_166);
                          else
                            k_166 = l_166;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_166)), term_u_34));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_8);
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
ATerm Undefined_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm v_166 = NULL,w_166 = NULL;
  v_166 = t;
  u_166 :
  if(match_cons(v_166, sym_Undefined_1))
    {
      w_166 = ATgetArgument(v_166, 0);
      {
        ATerm z_166 = NULL,b_167 = NULL;
        ATerm a_167 = NULL;
        t = SSLgetAnnotations(not_null(v_166));
        {
          a_167 = t;
          if(((z_166 != NULL) && (z_166 != a_167)))
            _fail(a_167);
          else
            z_166 = a_167;
        }
        {
          t = not_null(w_166);
          {
            ATerm d_167 = NULL;
            t = f_70(t);
            {
              b_167 = t;
              {
                ATerm e_167 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_167)), not_null(z_166));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm s_98 (ATerm))
{
  ATerm j_167 (ATerm t)
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_98, _id);
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
        t = Cons_2(t, _id, j_167);
      }
    return(t);
  }
  t = j_167(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_86 (ATerm))
{
  t = fetch_1(t, l_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_167 = NULL;
  o_167 = t;
  n_167 :
  if(match_cons(o_167, sym_Help_0))
    {
      ATerm q_167 = NULL,s_167 = NULL;
      ATerm x_34;
      x_34 = t;
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
      t = x_34;
      {
        ATerm t_167 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_167));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_107 (ATerm))
{
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_107(t);
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_167 = NULL,b_168 = NULL,c_168 = NULL;
  z_167 = t;
  y_167 :
  if(match_cons(z_167, sym__2))
    {
      b_168 = ATgetArgument(z_167, 0);
      c_168 = ATgetArgument(z_167, 1);
      t = SSL_table_get(not_null(b_168), not_null(c_168));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_168 = NULL,k_168 = NULL,l_168 = NULL,m_168 = NULL;
  j_168 = t;
  i_168 :
  if(match_cons(j_168, sym__3))
    {
      k_168 = ATgetArgument(j_168, 0);
      l_168 = ATgetArgument(j_168, 1);
      m_168 = ATgetArgument(j_168, 2);
      {
        ATerm a_35;
        a_35 = t;
        {
          ATerm q_168 = NULL;
          ATerm r_168 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_168), not_null(l_168));
          {
            ATerm b_35 = t;
            int c_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_35);
              }
            else
              {
                t = b_35;
                t = (ATerm) ATempty;
              }
            {
              r_168 = t;
              if(((q_168 != NULL) && (q_168 != r_168)))
                _fail(r_168);
              else
                q_168 = r_168;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_168), not_null(l_168), (ATerm) ATinsert(CheckATermList(not_null(q_168)), not_null(m_168)));
            t = table_put_0(t);
          }
        }
        t = a_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm w_168 = NULL;
  ATerm x_168 = NULL;
  t = term_b_19;
  {
    t = r_85(t);
    {
      x_168 = t;
      if(((w_168 != NULL) && (w_168 != x_168)))
        _fail(x_168);
      else
        w_168 = x_168;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_34, term_r_34, not_null(w_168));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm d_169 = NULL,e_169 = NULL,f_169 = NULL;
  d_169 = t;
  c_169 :
  if(match_string(d_169, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(d_169) == AT_LIST) && ((ATermList) d_169 != ATempty)))
        {
          e_169 = ATgetFirst((ATermList) d_169);
          f_169 = (ATerm) ATgetNext((ATermList) d_169);
          {
            ATerm i_169 = NULL;
            ATerm d_35;
            d_35 = t;
            {
              t = not_null(e_169);
              t = c_0(t);
            }
            t = d_35;
            {
              ATerm j_169 = NULL;
              t = term_b_19;
              {
                t = d_0(t);
                {
                  j_169 = t;
                  if(((i_169 != NULL) && (i_169 != j_169)))
                    _fail(j_169);
                  else
                    i_169 = j_169;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_169)), not_null(i_169));
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
  ATerm m_8 (ATerm t)
  {
    ATerm o_169 = NULL;
    o_169 = t;
    n_169 :
    if(!(match_string(o_169, "--help")))
      {
        if(!(match_string(o_169, "-h")))
          {
            if(!(match_string(o_169, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm n_8 (ATerm t)
  {
    t = term_e_35;
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    t = term_f_35;
    return(t);
  }
  t = Option_3(t, m_8, n_8, o_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_169 = NULL,s_169 = NULL,t_169 = NULL;
  r_169 = t;
  q_169 :
  if(((ATgetType(r_169) == AT_LIST) && ((ATermList) r_169 != ATempty)))
    {
      s_169 = ATgetFirst((ATermList) r_169);
      t_169 = (ATerm) ATgetNext((ATermList) r_169);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_169)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_169)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm d_170 = NULL,e_170 = NULL,f_170 = NULL;
  d_170 = t;
  c_170 :
  if(((ATgetType(d_170) == AT_LIST) && ((ATermList) d_170 != ATempty)))
    {
      e_170 = ATgetFirst((ATermList) d_170);
      f_170 = (ATerm) ATgetNext((ATermList) d_170);
      {
        ATerm j_170 = NULL,l_170 = NULL;
        ATerm k_170 = NULL;
        t = SSLgetAnnotations(not_null(d_170));
        {
          k_170 = t;
          if(((j_170 != NULL) && (j_170 != k_170)))
            _fail(k_170);
          else
            j_170 = k_170;
        }
        {
          t = not_null(e_170);
          {
            ATerm n_170 = NULL;
            t = v_79(t);
            {
              l_170 = t;
              {
                t = not_null(f_170);
                {
                  ATerm p_170 = NULL;
                  t = w_79(t);
                  {
                    n_170 = t;
                    {
                      ATerm q_170 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_170)), not_null(l_170)), not_null(j_170));
                      {
                        q_170 = t;
                        if(((p_170 != NULL) && (p_170 != q_170)))
                          _fail(q_170);
                        else
                          p_170 = q_170;
                      }
                      t = not_null(p_170);
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
  ATerm a_171 = NULL;
  a_171 = t;
  z_170 :
  if(((ATermList) a_171 == ATempty))
    {
      {
        ATerm d_171 = NULL,f_171 = NULL;
        ATerm g_35;
        g_35 = t;
        {
          ATerm e_171 = NULL;
          t = SSLgetAnnotations(not_null(a_171));
          {
            e_171 = t;
            if(((d_171 != NULL) && (d_171 != e_171)))
              _fail(e_171);
            else
              d_171 = e_171;
          }
        }
        t = g_35;
        {
          ATerm g_171 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_171));
          {
            g_171 = t;
            if(((f_171 != NULL) && (f_171 != g_171)))
              _fail(g_171);
            else
              f_171 = g_171;
          }
          t = not_null(f_171);
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
  ATerm m_171 = NULL,n_171 = NULL,o_171 = NULL;
  m_171 = t;
  l_171 :
  if(match_cons(m_171, sym__2))
    {
      n_171 = ATgetArgument(m_171, 0);
      o_171 = ATgetArgument(m_171, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_30, not_null(n_171), not_null(o_171));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_85 (ATerm))
{
  ATerm h_35;
  h_35 = t;
  {
    ATerm p_8 (ATerm t)
    {
      t = term_i_35;
      t = p_85(t);
      return(t);
    }
    t = try_1(t, p_8);
  }
  t = h_35;
  {
    ATerm q_8 (ATerm t)
    {
      ATerm x_171 = NULL;
      ATerm j_35;
      j_35 = t;
      {
        ATerm v_171 = NULL;
        ATerm w_171 = NULL;
        w_171 = t;
        if(((v_171 != NULL) && (v_171 != w_171)))
          _fail(w_171);
        else
          v_171 = w_171;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_31, not_null(v_171));
          t = set_config_0(t);
        }
      }
      t = j_35;
      {
        ATerm y_171 = NULL;
        y_171 = t;
        if(((x_171 != NULL) && (x_171 != y_171)))
          _fail(y_171);
        else
          x_171 = y_171;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_171));
      }
      return(t);
    }
    ATerm r_8 (ATerm t)
    {
      ATerm k_35 = t;
      int l_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_35 = t;
          int n_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_35);
            }
          else
            {
              t = m_35;
              {
                t = p_85(t);
                t = Cons_2(t, _id, r_8);
              }
            }
          LocalPopChoice(l_35);
        }
      else
        {
          t = k_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_8, r_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_172 = NULL,g_172 = NULL,h_172 = NULL;
  ATerm o_35;
  o_35 = t;
  {
    ATerm i_172 = NULL,j_172 = NULL,k_172 = NULL,l_172 = NULL;
    i_172 = t;
    d_172 :
    if(match_cons(i_172, sym__3))
      {
        j_172 = ATgetArgument(i_172, 0);
        k_172 = ATgetArgument(i_172, 1);
        l_172 = ATgetArgument(i_172, 2);
        {
          if(((e_172 != NULL) && (e_172 != j_172)))
            _fail(j_172);
          else
            e_172 = j_172;
          {
            if(((g_172 != NULL) && (g_172 != k_172)))
              _fail(k_172);
            else
              g_172 = k_172;
            {
              if(((h_172 != NULL) && (h_172 != l_172)))
                _fail(l_172);
              else
                h_172 = l_172;
              t = SSL_table_put(not_null(e_172), not_null(g_172), not_null(h_172));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_85 (ATerm))
{
  ATerm o_172 = NULL;
  ATerm p_35;
  p_35 = t;
  {
    t = term_q_35;
    t = table_put_0(t);
  }
  t = p_35;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm r_35 = t;
      int v_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_85(t);
          LocalPopChoice(v_35);
        }
      else
        {
          t = r_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_8);
    {
      ATerm t_8 (ATerm t)
      {
        ATerm w_35 = t;
        int x_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_j_21;
                t = exit_0(t);
              }
            }
            LocalPopChoice(x_35);
          }
        else
          {
            t = w_35;
            {
              ATerm u_8 (ATerm t)
              {
                ATerm v_8 (ATerm t)
                {
                  ATerm p_172 = NULL;
                  p_172 = t;
                  if(((o_172 != NULL) && (o_172 != p_172)))
                    _fail(p_172);
                  else
                    o_172 = p_172;
                  return(t);
                }
                t = Undefined_1(t, v_8);
                return(t);
              }
              t = option_defined_1(t, u_8);
              {
                ATerm y_35;
                y_35 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_172)), term_z_35));
                  t = printnl_0(t);
                }
                t = y_35;
                {
                  t = system_usage_0(t);
                  {
                    t = term_m_18;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, t_8);
      {
        ATerm a_36;
        a_36 = t;
        {
          t = term_q_34;
          t = table_destroy_0(t);
        }
        t = a_36;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm))
{
  ATerm w_8 (ATerm t)
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_88(t);
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, w_8);
  {
    t = store_options_0(t);
    {
      t = d_88(t);
      {
        ATerm d_36 = t;
        int e_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_88);
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
                    t = apply_strategy_1(t, a_88);
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
ATerm iowrap_3 (ATerm t, ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm w_87 (ATerm))
{
  ATerm x_8 (ATerm t)
  {
    ATerm y_8 (ATerm t)
    {
      ATerm h_36;
      h_36 = t;
      {
        ATerm s_172 = NULL;
        ATerm t_172 = NULL;
        t = term_q_31;
        {
          t = get_config_0(t);
          {
            t_172 = t;
            if(((s_172 != NULL) && (s_172 != t_172)))
              _fail(t_172);
            else
              s_172 = t_172;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATempty, not_null(s_172)));
          t = printnl_0(t);
        }
      }
      t = h_36;
      return(t);
    }
    t = if_verbose2_1(t, y_8);
    return(t);
  }
  t = iowrap_4(t, u_87, v_87, w_87, x_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_87 (ATerm), ATerm t_87 (ATerm))
{
  t = iowrap_3(t, s_87, t_87, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm p_87 (ATerm))
{
  ATerm z_8 (ATerm t)
  {
    t = _2(t, _id, p_87);
    return(t);
  }
  t = iowrap_2(t, z_8, _fail);
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
