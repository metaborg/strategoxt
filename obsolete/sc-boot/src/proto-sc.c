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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
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
Symbol sym_Infinite_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Dir_1;
Symbol sym_ExecDir_1;
Symbol sym_InclDir_1;
Symbol sym_CInclDir_1;
Symbol sym_CLibDir_1;
Symbol sym_Input_1;
Symbol sym_Main_1;
Symbol sym_AST_0;
Symbol sym_Ignore_0;
Symbol sym_CC_0;
Symbol sym_NORM_0;
Symbol sym_FUSION_0;
Symbol sym_FRONTEND_0;
Symbol sym_CSYNTAX_0;
Symbol sym_TraceAll_0;
Symbol sym_Trace_1;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Dir_1 = ATmakeSymbol("Dir", 1, ATfalse);
  ATprotectSymbol(sym_Dir_1);
  sym_ExecDir_1 = ATmakeSymbol("ExecDir", 1, ATfalse);
  ATprotectSymbol(sym_ExecDir_1);
  sym_InclDir_1 = ATmakeSymbol("InclDir", 1, ATfalse);
  ATprotectSymbol(sym_InclDir_1);
  sym_CInclDir_1 = ATmakeSymbol("CInclDir", 1, ATfalse);
  ATprotectSymbol(sym_CInclDir_1);
  sym_CLibDir_1 = ATmakeSymbol("CLibDir", 1, ATfalse);
  ATprotectSymbol(sym_CLibDir_1);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Main_1 = ATmakeSymbol("Main", 1, ATfalse);
  ATprotectSymbol(sym_Main_1);
  sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
  ATprotectSymbol(sym_AST_0);
  sym_Ignore_0 = ATmakeSymbol("Ignore", 0, ATfalse);
  ATprotectSymbol(sym_Ignore_0);
  sym_CC_0 = ATmakeSymbol("CC", 0, ATfalse);
  ATprotectSymbol(sym_CC_0);
  sym_NORM_0 = ATmakeSymbol("NORM", 0, ATfalse);
  ATprotectSymbol(sym_NORM_0);
  sym_FUSION_0 = ATmakeSymbol("FUSION", 0, ATfalse);
  ATprotectSymbol(sym_FUSION_0);
  sym_FRONTEND_0 = ATmakeSymbol("FRONTEND", 0, ATfalse);
  ATprotectSymbol(sym_FRONTEND_0);
  sym_CSYNTAX_0 = ATmakeSymbol("CSYNTAX", 0, ATfalse);
  ATprotectSymbol(sym_CSYNTAX_0);
  sym_TraceAll_0 = ATmakeSymbol("TraceAll", 0, ATfalse);
  ATprotectSymbol(sym_TraceAll_0);
  sym_Trace_1 = ATmakeSymbol("Trace", 1, ATfalse);
  ATprotectSymbol(sym_Trace_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_l_36;
ATerm term_j_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_g_35;
ATerm term_q_34;
ATerm term_k_34;
ATerm term_d_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_r_32;
ATerm term_p_32;
ATerm term_m_32;
ATerm term_h_32;
ATerm term_c_32;
ATerm term_z_31;
ATerm term_f_31;
ATerm term_y_30;
ATerm term_i_30;
ATerm term_u_29;
ATerm term_r_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_g_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_n_28;
ATerm term_l_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_e_26;
ATerm term_c_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_a_23;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_j_22;
ATerm term_b_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_u_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_q_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_s_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_v_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_c_15;
ATerm term_b_15;
void init_constant_terms (void)
{
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".ac.abox", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATinsert(ATempty, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATinsert(CheckATermList(term_a_16), term_x_15);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATinsert(CheckATermList(term_b_16), term_w_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATinsert(CheckATermList(term_e_16), term_v_15);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATinsert(CheckATermList(term_f_16), term_u_15);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATinsert(CheckATermList(term_g_16), term_t_15);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATinsert(CheckATermList(term_h_16), term_s_15);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATinsert(CheckATermList(term_i_16), term_p_15);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATinsert(CheckATermList(term_j_16), term_o_15);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATinsert(CheckATermList(term_k_16), term_n_15);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATinsert(CheckATermList(term_l_16), term_m_15);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATinsert(CheckATermList(term_m_16), term_h_15);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATinsert(CheckATermList(term_n_16), term_g_15);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("linking", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATinsert(ATempty, term_f_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_g_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATinsert(ATempty, term_d_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_g_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/ac2c", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATinsert(ATempty, term_v_18);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("traced functions: ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/s2c", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATinsert(ATempty, term_w_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/canonicalize", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/optimize2", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/compile-match", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/fusion", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".so2", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/optimize1", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/inline", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/rename-defs", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/extract", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/extract-all", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATinsert(ATempty, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/frontend", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/pack-stratego", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--silent", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("The Stratego Compiler (version ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: sc [options] -i file\n", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Options:\n", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("  -i spec       Compile specification spec\n", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("  -o target     Name executable target\n", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("  --main s      Name main strategy [default: main]\n", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("  -I dir        Look in dir for imported Stratego modules\n", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  -CI opt       Pass opt to gcc object compilation phase\n", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  -CL opt       Pass opt to gcc linking phase\n", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  --trace-all   Trace all strategies in the specification\n", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  -t f	      Trace strategy f\n", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  --ast         Output abstract syntax of specification\n", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  --norm        Do not remove intermediate files\n", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  -F	      Produce all definitions pre-processed by frontend\n", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("  -v	      Show version\n", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("  -h|--help     Display this message", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATinsert(ATempty, term_d_25);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATinsert(CheckATermList(term_e_25), term_v_24);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATinsert(CheckATermList(term_f_25), term_u_24);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATinsert(CheckATermList(term_g_25), term_o_24);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATinsert(CheckATermList(term_h_25), term_n_24);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATinsert(CheckATermList(term_i_25), term_m_24);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATinsert(CheckATermList(term_q_25), term_l_24);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATinsert(CheckATermList(term_r_25), term_k_24);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATinsert(CheckATermList(term_s_25), term_j_24);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATinsert(CheckATermList(term_v_25), term_s_23);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATinsert(CheckATermList(term_w_25), term_q_23);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATinsert(CheckATermList(term_x_25), term_o_23);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATinsert(CheckATermList(term_c_26), term_j_23);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATinsert(CheckATermList(term_e_26), term_i_23);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATinsert(CheckATermList(term_m_26), term_h_23);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_n_26);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Ignore_0);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_CC_0);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_NORM_0);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_FRONTEND_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_FUSION_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_CSYNTAX_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_32);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_t_32);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_32);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATinsert(ATempty, term_o_33);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_p_33);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__2, term_r_33, term_s_33);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym__3, term_r_33, term_s_33, (ATerm) ATempty);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".r", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATinsert(ATempty, term_a_36);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_b_36);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATinsert(ATempty, term_h_36);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_j_36);
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm rm_files_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_59 (ATerm), ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm d_59 (ATerm));
ATerm rzip_1 (ATerm, ATerm o_59 (ATerm));
ATerm remove_intermediates_0 (ATerm);
ATerm _2 (ATerm, ATerm d_35 (ATerm), ATerm e_35 (ATerm));
ATerm fetch_1 (ATerm, ATerm v_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_50 (ATerm));
ATerm try_1 (ATerm, ATerm m_67 (ATerm));
ATerm eq_0 (ATerm);
ATerm SplitNext_0 (ATerm);
ATerm SplitExit_0 (ATerm);
ATerm SplitInit_0 (ATerm);
ATerm split_at_space_0 (ATerm);
ATerm CLibDir_1 (ATerm, ATerm x_45 (ATerm));
ATerm Dir_1 (ATerm, ATerm t_45 (ATerm));
ATerm cc2_0 (ATerm);
ATerm gcc_0 (ATerm);
ATerm CInclDir_1 (ATerm, ATerm w_45 (ATerm));
ATerm cc1_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm pp_c_1 (ATerm, ATerm v_68 (ATerm));
ATerm debug_1 (ATerm, ATerm c_52 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm get_traced_funs_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm n_46 (ATerm));
ATerm TraceAllFuns_0 (ATerm);
ATerm s2c_1 (ATerm, ATerm n_68 (ATerm));
ATerm stratego_cf_1 (ATerm, ATerm y_68 (ATerm));
ATerm canonicalize_1 (ATerm, ATerm m_68 (ATerm));
ATerm optimize2_1 (ATerm, ATerm l_68 (ATerm));
ATerm compile_match_1 (ATerm, ATerm k_68 (ATerm));
ATerm fusion_1 (ATerm, ATerm q_68 (ATerm));
ATerm FUSION_0 (ATerm);
ATerm optimize1_1 (ATerm, ATerm j_68 (ATerm));
ATerm inline_1 (ATerm, ATerm i_68 (ATerm));
ATerm rename_defs_1 (ATerm, ATerm h_68 (ATerm));
ATerm stratego_nf_1 (ATerm, ATerm x_68 (ATerm));
ATerm extract_1 (ATerm, ATerm f_68 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm extract_all_1 (ATerm, ATerm g_68 (ATerm));
ATerm FRONTEND_0 (ATerm);
ATerm output_frontend_1 (ATerm, ATerm b_68 (ATerm));
ATerm pipe_2 (ATerm, ATerm e_49 (ATerm), ATerm f_49 (ATerm));
ATerm frontend_1 (ATerm, ATerm e_68 (ATerm));
ATerm list_1 (ATerm, ATerm p_60 (ATerm));
ATerm core_0 (ATerm);
ATerm transform_file_2 (ATerm, ATerm m_49 (ATerm), ATerm n_49 (ATerm));
ATerm AddMain_1 (ATerm, ATerm c_68 (ATerm));
ATerm Main_1 (ATerm, ATerm z_45 (ATerm));
ATerm add_main_0 (ATerm);
ATerm AST_0 (ATerm);
ATerm output_ast_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm apply_to_file_1 (ATerm, ATerm o_49 (ATerm));
ATerm copy_file_3 (ATerm, ATerm p_49 (ATerm), ATerm q_49 (ATerm), ATerm r_49 (ATerm));
ATerm conc_0 (ATerm);
ATerm pref_1 (ATerm, ATerm d_68 (ATerm));
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm pipe_3 (ATerm, ATerm g_49 (ATerm), ATerm h_49 (ATerm), ATerm i_49 (ATerm));
ATerm Output_1 (ATerm, ATerm p_45 (ATerm));
ATerm ExecDir_1 (ATerm, ATerm u_45 (ATerm));
ATerm InclDir_1 (ATerm, ATerm v_45 (ATerm));
ATerm parse_0 (ATerm);
ATerm Verbose_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm DeclVersion_1 (ATerm, ATerm r_45 (ATerm));
ATerm sc_version_0 (ATerm);
ATerm sc_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_51 (ATerm));
ATerm Input_1 (ATerm, ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm assert_1 (ATerm, ATerm l_46 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm p_50 (ATerm), ATerm q_50 (ATerm));
ATerm Option_2 (ATerm, ATerm e_50 (ATerm), ATerm f_50 (ATerm));
ATerm basename_1 (ATerm, ATerm g_53 (ATerm));
ATerm basename_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_61 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_49 (ATerm));
ATerm map_1 (ATerm, ATerm n_60 (ATerm));
ATerm reverse_1 (ATerm, ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_49 (ATerm));
ATerm Program_1 (ATerm, ATerm m_45 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_45 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_50 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_49 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_49 (ATerm));
ATerm skip1_1 (ATerm, ATerm u_54 (ATerm));
ATerm filter_option_args_1 (ATerm, ATerm w_54 (ATerm));
ATerm at_tail_1 (ATerm, ATerm z_60 (ATerm));
ATerm skip2_1 (ATerm, ATerm v_54 (ATerm));
ATerm Cons_2 (ATerm, ATerm b_46 (ATerm), ATerm c_46 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm filter_gen_2 (ATerm, ATerm r_54 (ATerm), ATerm s_54 (ATerm, ATerm (ATerm)));
ATerm filter_options_1 (ATerm, ATerm x_54 (ATerm));
ATerm process_sc_options_0 (ATerm);
ATerm sc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm t_1 = NULL;
  t_1 = t;
  t = SSL_exit(not_null(t_1));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
  y_1 = t;
  x_1 :
  if(match_cons(y_1, sym__2))
    {
      z_1 = ATgetArgument(y_1, 0);
      a_2 = ATgetArgument(y_1, 1);
      {
        ATerm y_14;
        y_14 = t;
        t = SSL_printnl(not_null(z_1), not_null(a_2));
        t = y_14;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm f_2 = NULL;
  f_2 = t;
  {
    ATerm z_14;
    z_14 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATinsert(CheckATermList(not_null(f_2)), term_c_15));
      t = call_0(t);
    }
    t = z_14;
  }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL;
  k_2 = t;
  j_2 :
  if(match_cons(k_2, sym__2))
    {
      l_2 = ATgetArgument(k_2, 0);
      m_2 = ATgetArgument(k_2, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_2)), not_null(l_2));
    }
  else
    _fail(t);
  return(t);
}
ATerm RZip2_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  t_2 = t;
  r_2 :
  if(match_cons(t_2, sym__2))
    {
      u_2 = ATgetArgument(t_2, 0);
      v_2 = ATgetArgument(t_2, 1);
      s_2 :
      if(((ATgetType(v_2) == AT_LIST) && ((ATermList) v_2 != ATempty)))
        {
          w_2 = ATgetFirst((ATermList) v_2);
          x_2 = (ATerm) ATgetNext((ATermList) v_2);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(u_2), not_null(w_2)), (ATerm) ATmakeAppl(sym__2, not_null(u_2), not_null(x_2)));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
  f_3 = t;
  d_3 :
  if(match_cons(f_3, sym__2))
    {
      g_3 = ATgetArgument(f_3, 0);
      h_3 = ATgetArgument(f_3, 1);
      e_3 :
      if(((ATermList) h_3 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm a_59 (ATerm), ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm d_59 (ATerm))
{
  ATerm j_3 (ATerm t)
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_59(t);
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
          t = b_59(t);
          {
            t = _2(t, d_59, j_3);
            t = c_59(t);
          }
        }
      }
    return(t);
  }
  t = j_3(t);
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm o_59 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, o_59);
  return(t);
}
ATerm remove_intermediates_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL;
  m_3 = t;
  l_3 :
  if(match_cons(m_3, sym__2))
    {
      n_3 = ATgetArgument(m_3, 0);
      o_3 = ATgetArgument(m_3, 1);
      {
        ATerm f_15;
        f_15 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_3), term_o_16);
          {
            t = rzip_1(t, conc_strings_0);
            t = rm_files_0(t);
          }
        }
        t = f_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm d_35 (ATerm), ATerm e_35 (ATerm))
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
  v_3 = t;
  u_3 :
  if(match_cons(v_3, sym__2))
    {
      w_3 = ATgetArgument(v_3, 0);
      x_3 = ATgetArgument(v_3, 1);
      {
        ATerm a_4 = NULL;
        t = not_null(w_3);
        {
          ATerm c_4 = NULL;
          t = d_35(t);
          {
            a_4 = t;
            {
              t = not_null(x_3);
              {
                t = e_35(t);
                {
                  c_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_4), not_null(c_4));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm v_60 (ATerm))
{
  ATerm h_4 (ATerm t)
  {
    ATerm p_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_60, _id);
        LocalPopChoice(s_16);
      }
    else
      {
        t = p_16;
        t = Cons_2(t, _id, h_4);
      }
    return(t);
  }
  t = h_4(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_50 (ATerm))
{
  t = fetch_1(t, u_50);
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_67 (ATerm))
{
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_67(t);
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      {
      }
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  j_4 :
  if(match_cons(k_4, sym__2))
    {
      l_4 = ATgetArgument(k_4, 0);
      m_4 = ATgetArgument(k_4, 1);
      if(((l_4 != NULL) && (l_4 != m_4)))
        _fail(m_4);
      else
        l_4 = m_4;
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitNext_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
  ATerm k_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), term_v_16);
    {
      ATerm w_16 = t;
      if((PushChoice() == 0))
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = w_16;
    }
    t = (ATerm) ATmakeAppl(sym__3, not_null(w_4), (ATerm)ATinsert(CheckATermList(not_null(x_4)), not_null(z_4)), not_null(a_5));
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    ATerm i_5 = NULL;
    ATerm j_5 = NULL;
    t = not_null(x_4);
    {
      t = reverse_0(t);
      {
        t = implode_string_0(t);
        {
          j_5 = t;
          if(((i_5 != NULL) && (i_5 != j_5)))
            _fail(j_5);
          else
            i_5 = j_5;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(CheckATermList(not_null(w_4)), not_null(i_5)), (ATerm)ATempty, not_null(a_5));
    return(t);
  }
  v_4 = t;
  s_4 :
  if(match_cons(v_4, sym__3))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      y_4 = ATgetArgument(v_4, 2);
      t_4 :
      if(((ATgetType(y_4) == AT_LIST) && ((ATermList) y_4 != ATempty)))
        {
          z_4 = ATgetFirst((ATermList) y_4);
          a_5 = (ATerm) ATgetNext((ATermList) y_4);
          u_4 :
          if(match_int(z_4, 32))
            {
              ATerm x_16 = t;
              int y_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_5(t);
                  LocalPopChoice(y_16);
                }
              else
                {
                  t = x_16;
                  t = l_5(t);
                }
            }
          else
            t = k_5(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitExit_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
  r_5 = t;
  p_5 :
  if(match_cons(r_5, sym__3))
    {
      s_5 = ATgetArgument(r_5, 0);
      t_5 = ATgetArgument(r_5, 1);
      u_5 = ATgetArgument(r_5, 2);
      q_5 :
      if(((ATermList) u_5 == ATempty))
        {
          {
            ATerm x_5 = NULL;
            ATerm y_5 = NULL;
            t = not_null(t_5);
            {
              t = reverse_0(t);
              {
                t = implode_string_0(t);
                {
                  y_5 = t;
                  if(((x_5 != NULL) && (x_5 != y_5)))
                    _fail(y_5);
                  else
                    x_5 = y_5;
                }
              }
            }
            {
              t = (ATerm) ATinsert(CheckATermList(not_null(s_5)), not_null(x_5));
              t = reverse_0(t);
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitInit_0 (ATerm t)
{
  ATerm c_6 = NULL;
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(c_6));
  return(t);
}
ATerm split_at_space_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = SplitInit_0(t);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SplitExit_0(t);
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            {
              t = SplitNext_0(t);
              t = f_6(t);
            }
          }
        return(t);
      }
      t = f_6(t);
    }
  }
  return(t);
}
ATerm CLibDir_1 (ATerm t, ATerm x_45 (ATerm))
{
  ATerm j_6 = NULL,k_6 = NULL;
  j_6 = t;
  i_6 :
  if(match_cons(j_6, sym_CLibDir_1))
    {
      k_6 = ATgetArgument(j_6, 0);
      {
        ATerm m_6 = NULL;
        t = not_null(k_6);
        {
          t = x_45(t);
          {
            m_6 = t;
            t = (ATerm) ATmakeAppl(sym_CLibDir_1, not_null(m_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Dir_1 (ATerm t, ATerm t_45 (ATerm))
{
  ATerm t_6 = NULL,u_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym_Dir_1))
    {
      u_6 = ATgetArgument(t_6, 0);
      {
        ATerm w_6 = NULL;
        t = not_null(u_6);
        {
          t = t_45(t);
          {
            w_6 = t;
            t = (ATerm) ATmakeAppl(sym_Dir_1, not_null(w_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm cc2_0 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,m_7 = NULL,n_7 = NULL;
  ATerm b_17;
  b_17 = t;
  {
    t = term_i_17;
    t = printnl_0(t);
  }
  t = b_17;
  {
    ATerm b_0 (ATerm t)
    {
      ATerm c_0 (ATerm t)
      {
        ATerm m_0 (ATerm t)
        {
          ATerm j_17 = t;
          int o_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_0 (ATerm t)
              {
                ATerm j_7 = NULL;
                j_7 = t;
                if(((g_7 != NULL) && (g_7 != j_7)))
                  _fail(j_7);
                else
                  g_7 = j_7;
                return(t);
              }
              t = Dir_1(t, n_0);
              LocalPopChoice(o_17);
            }
          else
            {
              t = j_17;
              {
                ATerm p_17 = t;
                int q_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_0 (ATerm t)
                    {
                      ATerm k_7 = NULL;
                      k_7 = t;
                      if(((h_7 != NULL) && (h_7 != k_7)))
                        _fail(k_7);
                      else
                        h_7 = k_7;
                      return(t);
                    }
                    t = CLibDir_1(t, o_0);
                    LocalPopChoice(q_17);
                  }
                else
                  {
                    t = p_17;
                    {
                      ATerm p_0 (ATerm t)
                      {
                        ATerm l_7 = NULL;
                        l_7 = t;
                        if(((i_7 != NULL) && (i_7 != l_7)))
                          _fail(l_7);
                        else
                          i_7 = l_7;
                        return(t);
                      }
                      t = Output_1(t, p_0);
                    }
                  }
              }
            }
          return(t);
        }
        t = try_1(t, m_0);
        return(t);
      }
      t = list_1(t, c_0);
      return(t);
    }
    t = _2(t, b_0, _id);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm r_17;
        r_17 = t;
        {
          ATerm o_7 = NULL;
          t = conc_strings_0(t);
          {
            o_7 = t;
            if(((m_7 != NULL) && (m_7 != o_7)))
              _fail(o_7);
            else
              m_7 = o_7;
          }
        }
        t = r_17;
        {
          ATerm r_0 (ATerm t)
          {
            ATerm t_0 (ATerm t)
            {
              t = not_null(i_7);
              return(t);
            }
            t = try_1(t, t_0);
            return(t);
          }
          ATerm s_0 (ATerm t)
          {
            t = term_s_17;
            return(t);
          }
          t = _2(t, r_0, s_0);
          {
            ATerm x_17;
            x_17 = t;
            {
              ATerm p_7 = NULL;
              t = conc_strings_0(t);
              {
                p_7 = t;
                if(((n_7 != NULL) && (n_7 != p_7)))
                  _fail(p_7);
                else
                  n_7 = p_7;
              }
            }
            t = x_17;
            {
              ATerm y_17;
              y_17 = t;
              {
                ATerm q_7 = NULL;
                ATerm r_7 = NULL;
                t = not_null(h_7);
                {
                  t = map_1(t, split_at_space_0);
                  {
                    t = concat_0(t);
                    {
                      r_7 = t;
                      if(((q_7 != NULL) && (q_7 != r_7)))
                        _fail(r_7);
                      else
                        q_7 = r_7;
                    }
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_7)), not_null(n_7)), term_z_17), not_null(m_7));
                  t = gcc_0(t);
                }
              }
              t = y_17;
            }
          }
        }
        return(t);
      }
      t = _2(t, _id, q_0);
    }
  }
  return(t);
}
ATerm gcc_0 (ATerm t)
{
  ATerm z_7 = NULL;
  z_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_18, not_null(z_7));
    t = call_0(t);
  }
  return(t);
}
ATerm CInclDir_1 (ATerm t, ATerm w_45 (ATerm))
{
  ATerm f_8 = NULL,g_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_CInclDir_1))
    {
      g_8 = ATgetArgument(f_8, 0);
      {
        ATerm i_8 = NULL;
        t = not_null(g_8);
        {
          t = w_45(t);
          {
            i_8 = t;
            t = (ATerm) ATmakeAppl(sym_CInclDir_1, not_null(i_8));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm cc1_0 (ATerm t)
{
  ATerm p_8 = NULL,r_8 = NULL,s_8 = NULL;
  ATerm b_18;
  b_18 = t;
  {
    t = term_h_18;
    t = printnl_0(t);
  }
  t = b_18;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        ATerm w_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            ATerm q_8 = NULL;
            q_8 = t;
            if(((p_8 != NULL) && (p_8 != q_8)))
              _fail(q_8);
            else
              p_8 = q_8;
            return(t);
          }
          t = CInclDir_1(t, x_0);
          return(t);
        }
        t = try_1(t, w_0);
        return(t);
      }
      t = list_1(t, v_0);
      return(t);
    }
    t = _2(t, u_0, _id);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm i_18;
        i_18 = t;
        {
          ATerm t_8 = NULL;
          t = conc_strings_0(t);
          {
            t_8 = t;
            if(((r_8 != NULL) && (r_8 != t_8)))
              _fail(t_8);
            else
              r_8 = t_8;
          }
        }
        t = i_18;
        {
          ATerm z_0 (ATerm t)
          {
            t = term_z_15;
            return(t);
          }
          t = _2(t, _id, z_0);
          {
            ATerm j_18;
            j_18 = t;
            {
              ATerm u_8 = NULL;
              t = conc_strings_0(t);
              {
                u_8 = t;
                if(((s_8 != NULL) && (s_8 != u_8)))
                  _fail(u_8);
                else
                  s_8 = u_8;
              }
            }
            t = j_18;
            {
              ATerm k_18;
              k_18 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_8)), term_z_17), not_null(r_8)), term_n_18));
                {
                  t = conc_0(t);
                  t = gcc_0(t);
                }
              }
              t = k_18;
            }
          }
        }
        return(t);
      }
      t = _2(t, _id, y_0);
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm pp_c_1 (ATerm t, ATerm v_68 (ATerm))
{
  ATerm a_9 = NULL;
  ATerm o_18;
  o_18 = t;
  t = dtime_0(t);
  t = o_18;
  {
    ATerm a_1 (ATerm t)
    {
      t = term_p_18;
      t = pref_1(t, v_68);
      return(t);
    }
    ATerm b_1 (ATerm t)
    {
      t = term_s_18;
      return(t);
    }
    t = pipe_2(t, a_1, b_1);
    {
      ATerm t_18;
      t_18 = t;
      {
        ATerm b_9 = NULL;
        ATerm c_9 = NULL;
        t = dtime_0(t);
        {
          b_9 = t;
          {
            if(((a_9 != NULL) && (a_9 != b_9)))
              _fail(b_9);
            else
              a_9 = b_9;
            {
              ATerm d_9 = NULL;
              t = term_p_18;
              {
                t = pref_1(t, v_68);
                {
                  d_9 = t;
                  if(((c_9 != NULL) && (c_9 != d_9)))
                    _fail(d_9);
                  else
                    c_9 = d_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_w_18), not_null(a_9)), term_u_18), not_null(c_9)));
                t = printnl_0(t);
              }
            }
          }
        }
      }
      t = t_18;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_52 (ATerm))
{
  ATerm x_18;
  x_18 = t;
  {
    ATerm i_9 = NULL,k_9 = NULL;
    ATerm y_18;
    y_18 = t;
    {
      ATerm j_9 = NULL;
      t = c_52(t);
      {
        j_9 = t;
        if(((i_9 != NULL) && (i_9 != j_9)))
          _fail(j_9);
        else
          i_9 = j_9;
      }
    }
    t = y_18;
    {
      ATerm l_9 = NULL;
      l_9 = t;
      if(((k_9 != NULL) && (k_9 != l_9)))
        _fail(l_9);
      else
        k_9 = l_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_9)), not_null(i_9)));
        t = printnl_0(t);
      }
    }
  }
  t = x_18;
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm p_9 = NULL;
  p_9 = t;
  t = SSL_table_keys(not_null(p_9));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  {
    t = table_keys_0(t);
    {
      ATerm c_1 (ATerm t)
      {
        ATerm x_9 = NULL;
        ATerm z_9 = NULL;
        x_9 = t;
        {
          ATerm a_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(x_9));
          {
            t = table_get_0(t);
            {
              a_10 = t;
              if(((z_9 != NULL) && (z_9 != a_10)))
                _fail(a_10);
              else
                z_9 = a_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(z_9));
        }
        return(t);
      }
      t = map_1(t, c_1);
    }
  }
  return(t);
}
ATerm get_traced_funs_0 (ATerm t)
{
  t = term_h_19;
  {
    t = table_getlist_0(t);
    {
      ATerm d_1 (ATerm t)
      {
        ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
        g_10 = t;
        f_10 :
        if(match_cons(g_10, sym__2))
          {
            h_10 = ATgetArgument(g_10, 0);
            i_10 = ATgetArgument(g_10, 1);
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_10)), term_i_19);
          }
        else
          _fail(t);
        return(t);
      }
      t = map_1(t, d_1);
      {
        t = concat_0(t);
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              {
                ATerm e_1 (ATerm t)
                {
                  t = term_l_19;
                  return(t);
                }
                t = debug_1(t, e_1);
              }
            }
        }
      }
    }
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  n_10 = t;
  m_10 :
  if(((ATgetType(n_10) == AT_LIST) && ((ATermList) n_10 != ATempty)))
    {
      o_10 = ATgetFirst((ATermList) n_10);
      p_10 = (ATerm) ATgetNext((ATermList) n_10);
      t = not_null(o_10);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym__2))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_10), not_null(x_10));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm n_46 (ATerm))
{
  ATerm d_11 = NULL;
  ATerm f_11 = NULL;
  d_11 = t;
  {
    ATerm g_11 = NULL;
    t = term_m_19;
    {
      t = n_46(t);
      {
        g_11 = t;
        if(((f_11 != NULL) && (f_11 != g_11)))
          _fail(g_11);
        else
          f_11 = g_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_11), not_null(d_11));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm TraceAllFuns_0 (ATerm t)
{
  ATerm s_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym__0))
    {
      ATerm t_11 = NULL,v_11 = NULL;
      t = term_q_19;
      {
        ATerm f_1 (ATerm t)
        {
          t = term_s_19;
          return(t);
        }
        t = rewrite_1(t, f_1);
        {
          t_11 = t;
          k_11 :
          if(match_cons(t_11, sym_Defined_1))
            {
              v_11 = ATgetArgument(t_11, 0);
              l_11 :
              if(!(match_string(v_11, "d_0")))
                _fail(t);
            }
          else
            _fail(t);
        }
      }
      t = term_m_19;
    }
  else
    _fail(t);
  return(t);
}
ATerm s2c_1 (ATerm t, ATerm n_68 (ATerm))
{
  ATerm g_1 (ATerm t)
  {
    t = term_t_19;
    t = pref_1(t, n_68);
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = term_w_15;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_m_19;
    {
      ATerm u_19 = t;
      int v_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = TraceAllFuns_0(t);
          t = term_a_20;
          LocalPopChoice(v_19);
        }
      else
        {
          t = u_19;
          t = get_traced_funs_0(t);
        }
    }
    return(t);
  }
  t = pipe_3(t, g_1, h_1, i_1);
  return(t);
}
ATerm stratego_cf_1 (ATerm t, ATerm y_68 (ATerm))
{
  ATerm j_1 (ATerm t)
  {
    t = term_c_20;
    t = pref_1(t, y_68);
    return(t);
  }
  t = pipe_2(t, j_1, _id);
  return(t);
}
ATerm canonicalize_1 (ATerm t, ATerm m_68 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    t = term_d_20;
    t = pref_1(t, m_68);
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_v_15;
    return(t);
  }
  t = pipe_2(t, k_1, l_1);
  return(t);
}
ATerm optimize2_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm m_1 (ATerm t)
  {
    t = term_e_20;
    t = pref_1(t, l_68);
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    t = term_u_15;
    return(t);
  }
  t = pipe_2(t, m_1, n_1);
  return(t);
}
ATerm compile_match_1 (ATerm t, ATerm k_68 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    t = term_f_20;
    t = pref_1(t, k_68);
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_t_15;
    return(t);
  }
  t = pipe_2(t, o_1, p_1);
  return(t);
}
ATerm fusion_1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    t = term_g_20;
    t = pref_1(t, q_68);
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = term_k_20;
    return(t);
  }
  t = pipe_2(t, q_1, r_1);
  return(t);
}
ATerm FUSION_0 (ATerm t)
{
  ATerm y_11 = NULL;
  y_11 = t;
  x_11 :
  if(!(match_cons(y_11, sym_FUSION_0)))
    _fail(t);
  return(t);
}
ATerm optimize1_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm s_1 (ATerm t)
  {
    t = term_m_20;
    t = pref_1(t, j_68);
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = term_s_15;
    return(t);
  }
  t = pipe_2(t, s_1, u_1);
  return(t);
}
ATerm inline_1 (ATerm t, ATerm i_68 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    t = term_n_20;
    t = pref_1(t, i_68);
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    t = term_p_15;
    return(t);
  }
  t = pipe_2(t, v_1, w_1);
  return(t);
}
ATerm rename_defs_1 (ATerm t, ATerm h_68 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    t = term_o_20;
    t = pref_1(t, h_68);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_o_15;
    return(t);
  }
  t = pipe_2(t, b_2, c_2);
  return(t);
}
ATerm stratego_nf_1 (ATerm t, ATerm x_68 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    t = term_p_20;
    t = pref_1(t, x_68);
    return(t);
  }
  t = pipe_2(t, d_2, _id);
  return(t);
}
ATerm extract_1 (ATerm t, ATerm f_68 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    t = term_q_20;
    t = pref_1(t, f_68);
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    t = term_n_15;
    return(t);
  }
  t = pipe_2(t, e_2, g_2);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm r_20;
  r_20 = t;
  {
    ATerm a_12 = NULL;
    ATerm b_12 = NULL;
    b_12 = t;
    if(((a_12 != NULL) && (a_12 != b_12)))
      _fail(b_12);
    else
      a_12 = b_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_17, not_null(a_12));
      t = printnl_0(t);
    }
  }
  t = r_20;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm s_20;
  s_20 = t;
  {
    t = error_0(t);
    {
      t = term_u_20;
      t = exit_0(t);
    }
  }
  t = s_20;
  return(t);
}
ATerm extract_all_1 (ATerm t, ATerm g_68 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    t = term_h_21;
    t = pref_1(t, g_68);
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_i_21;
    return(t);
  }
  t = pipe_2(t, h_2, i_2);
  return(t);
}
ATerm FRONTEND_0 (ATerm t)
{
  ATerm e_12 = NULL;
  e_12 = t;
  d_12 :
  if(!(match_cons(e_12, sym_FRONTEND_0)))
    _fail(t);
  return(t);
}
ATerm output_frontend_1 (ATerm t, ATerm b_68 (ATerm))
{
  ATerm h_12 = NULL,i_12 = NULL;
  ATerm n_2 (ATerm t)
  {
    ATerm o_2 (ATerm t)
    {
      t = option_defined_1(t, FRONTEND_0);
      return(t);
    }
    t = _2(t, o_2, _id);
    {
      ATerm p_2 (ATerm t)
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = extract_all_1(t, b_68);
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            {
              t = term_m_21;
              t = fatal_error_0(t);
            }
          }
        return(t);
      }
      t = _2(t, _id, p_2);
      {
        ATerm q_2 (ATerm t)
        {
          ATerm y_2 (ATerm t)
          {
            ATerm j_12 = NULL;
            j_12 = t;
            if(((h_12 != NULL) && (h_12 != j_12)))
              _fail(j_12);
            else
              h_12 = j_12;
            return(t);
          }
          ATerm z_2 (ATerm t)
          {
            ATerm k_12 = NULL;
            k_12 = t;
            if(((i_12 != NULL) && (i_12 != k_12)))
              _fail(k_12);
            else
              i_12 = k_12;
            return(t);
          }
          t = _2(t, y_2, z_2);
          return(t);
        }
        t = _2(t, _id, q_2);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_12)), not_null(h_12)), term_n_21));
          {
            t = printnl_0(t);
            {
              t = term_q_21;
              t = exit_0(t);
            }
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, n_2);
  return(t);
}
ATerm pipe_2 (ATerm t, ATerm e_49 (ATerm), ATerm f_49 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = pipe_3(t, e_49, f_49, a_3);
  return(t);
}
ATerm frontend_1 (ATerm t, ATerm e_68 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    t = term_r_21;
    t = pref_1(t, e_68);
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_m_15;
    return(t);
  }
  t = pipe_2(t, b_3, c_3);
  return(t);
}
ATerm list_1 (ATerm t, ATerm p_60 (ATerm))
{
  ATerm n_12 (ATerm t)
  {
    ATerm v_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = v_21;
        t = Cons_2(t, p_60, n_12);
      }
    return(t);
  }
  t = n_12(t);
  return(t);
}
ATerm core_0 (ATerm t)
{
  ATerm p_12 = NULL;
  ATerm i_3 (ATerm t)
  {
    ATerm k_3 (ATerm t)
    {
      ATerm p_3 (ATerm t)
      {
        ATerm q_3 (ATerm t)
        {
          ATerm q_12 = NULL;
          q_12 = t;
          if(((p_12 != NULL) && (p_12 != q_12)))
            _fail(q_12);
          else
            p_12 = q_12;
          return(t);
        }
        t = ExecDir_1(t, q_3);
        return(t);
      }
      t = try_1(t, p_3);
      return(t);
    }
    t = list_1(t, k_3);
    return(t);
  }
  t = _2(t, i_3, _id);
  {
    ATerm r_3 (ATerm t)
    {
      ATerm s_3 (ATerm t)
      {
        t = not_null(p_12);
        return(t);
      }
      t = frontend_1(t, s_3);
      return(t);
    }
    t = _2(t, _id, r_3);
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(p_12);
        return(t);
      }
      t = output_frontend_1(t, t_3);
      {
        ATerm y_3 (ATerm t)
        {
          ATerm z_3 (ATerm t)
          {
            t = not_null(p_12);
            return(t);
          }
          t = extract_1(t, z_3);
          {
            ATerm b_4 (ATerm t)
            {
              t = not_null(p_12);
              return(t);
            }
            t = stratego_nf_1(t, b_4);
            {
              ATerm d_4 (ATerm t)
              {
                t = not_null(p_12);
                return(t);
              }
              t = rename_defs_1(t, d_4);
              {
                ATerm e_4 (ATerm t)
                {
                  t = not_null(p_12);
                  return(t);
                }
                t = inline_1(t, e_4);
                {
                  ATerm f_4 (ATerm t)
                  {
                    t = not_null(p_12);
                    return(t);
                  }
                  t = optimize1_1(t, f_4);
                }
              }
            }
          }
          return(t);
        }
        t = _2(t, _id, y_3);
        {
          ATerm g_4 (ATerm t)
          {
            ATerm i_4 (ATerm t)
            {
              t = option_defined_1(t, FUSION_0);
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              ATerm o_4 (ATerm t)
              {
                t = not_null(p_12);
                return(t);
              }
              t = fusion_1(t, o_4);
              return(t);
            }
            t = _2(t, i_4, n_4);
            return(t);
          }
          t = try_1(t, g_4);
          {
            ATerm p_4 (ATerm t)
            {
              ATerm q_4 (ATerm t)
              {
                t = not_null(p_12);
                return(t);
              }
              t = compile_match_1(t, q_4);
              {
                ATerm r_4 (ATerm t)
                {
                  t = not_null(p_12);
                  return(t);
                }
                t = optimize2_1(t, r_4);
              }
              return(t);
            }
            t = _2(t, _id, p_4);
            {
              ATerm b_5 (ATerm t)
              {
                ATerm c_5 (ATerm t)
                {
                  t = not_null(p_12);
                  return(t);
                }
                t = canonicalize_1(t, c_5);
                {
                  ATerm d_5 (ATerm t)
                  {
                    t = not_null(p_12);
                    return(t);
                  }
                  t = stratego_cf_1(t, d_5);
                  {
                    ATerm e_5 (ATerm t)
                    {
                      t = not_null(p_12);
                      return(t);
                    }
                    t = s2c_1(t, e_5);
                    {
                      ATerm f_5 (ATerm t)
                      {
                        t = not_null(p_12);
                        return(t);
                      }
                      t = pp_c_1(t, f_5);
                    }
                  }
                }
                return(t);
              }
              t = _2(t, _id, b_5);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm transform_file_2 (ATerm t, ATerm m_49 (ATerm), ATerm n_49 (ATerm))
{
  ATerm u_12 = NULL,w_12 = NULL;
  ATerm y_21;
  y_21 = t;
  {
    ATerm v_12 = NULL;
    t = conc_strings_0(t);
    {
      v_12 = t;
      if(((u_12 != NULL) && (u_12 != v_12)))
        _fail(v_12);
      else
        u_12 = v_12;
    }
  }
  t = y_21;
  {
    t = _2(t, _id, n_49);
    {
      ATerm z_21;
      z_21 = t;
      {
        ATerm x_12 = NULL;
        t = conc_strings_0(t);
        {
          x_12 = t;
          if(((w_12 != NULL) && (w_12 != x_12)))
            _fail(x_12);
          else
            w_12 = x_12;
        }
      }
      t = z_21;
      {
        ATerm a_22;
        a_22 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), not_null(w_12));
          t = apply_to_file_1(t, m_49);
        }
        t = a_22;
      }
    }
  }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm c_68 (ATerm))
{
  ATerm d_13 = NULL,e_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym_Specification_1))
    {
      e_13 = ATgetArgument(d_13, 0);
      {
        ATerm g_13 = NULL;
        ATerm h_13 = NULL;
        t = term_m_19;
        {
          t = c_68(t);
          {
            h_13 = t;
            if(((g_13 != NULL) && (g_13 != h_13)))
              _fail(h_13);
            else
              g_13 = h_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(e_13)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_b_22, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_13)), (ATerm) ATempty))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Main_1 (ATerm t, ATerm z_45 (ATerm))
{
  ATerm n_13 = NULL,o_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym_Main_1))
    {
      o_13 = ATgetArgument(n_13, 0);
      {
        ATerm q_13 = NULL;
        t = not_null(o_13);
        {
          t = z_45(t);
          {
            q_13 = t;
            t = (ATerm) ATmakeAppl(sym_Main_1, not_null(q_13));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm v_13 = NULL;
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 (ATerm t)
      {
        ATerm h_5 (ATerm t)
        {
          ATerm m_5 (ATerm t)
          {
            ATerm w_13 = NULL;
            w_13 = t;
            if(((v_13 != NULL) && (v_13 != w_13)))
              _fail(w_13);
            else
              v_13 = w_13;
            return(t);
          }
          t = Main_1(t, m_5);
          return(t);
        }
        t = option_defined_1(t, h_5);
        return(t);
      }
      t = _2(t, g_5, _id);
      {
        ATerm n_5 (ATerm t)
        {
          ATerm o_5 (ATerm t)
          {
            ATerm w_5 (ATerm t)
            {
              t = not_null(v_13);
              return(t);
            }
            t = AddMain_1(t, w_5);
            return(t);
          }
          ATerm v_5 (ATerm t)
          {
            t = term_h_15;
            return(t);
          }
          t = transform_file_2(t, o_5, v_5);
          return(t);
        }
        t = _2(t, _id, n_5);
      }
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      {
        ATerm z_5 (ATerm t)
        {
          ATerm a_6 (ATerm t)
          {
            t = term_h_15;
            return(t);
          }
          t = transform_file_2(t, _id, a_6);
          return(t);
        }
        t = _2(t, _id, z_5);
      }
    }
  return(t);
}
ATerm AST_0 (ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  y_13 :
  if(!(match_cons(z_13, sym_AST_0)))
    _fail(t);
  return(t);
}
ATerm output_ast_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL;
  ATerm b_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      t = option_defined_1(t, AST_0);
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      ATerm g_6 (ATerm t)
      {
        ATerm e_14 = NULL;
        e_14 = t;
        if(((c_14 != NULL) && (c_14 != e_14)))
          _fail(e_14);
        else
          c_14 = e_14;
        return(t);
      }
      ATerm h_6 (ATerm t)
      {
        ATerm f_14 = NULL;
        f_14 = t;
        if(((d_14 != NULL) && (d_14 != f_14)))
          _fail(f_14);
        else
          d_14 = f_14;
        return(t);
      }
      t = _2(t, g_6, h_6);
      return(t);
    }
    t = _2(t, d_6, e_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_14)), not_null(c_14)), term_j_22));
      {
        t = printnl_0(t);
        {
          t = term_q_21;
          t = exit_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, b_6);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym__2))
    {
      l_14 = ATgetArgument(k_14, 0);
      m_14 = ATgetArgument(k_14, 1);
      t = SSL_WriteToBinaryFile(not_null(l_14), not_null(m_14));
    }
  else
    _fail(t);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm a_15 = NULL;
  a_15 = t;
  t = SSL_ReadFromFile(not_null(a_15));
  return(t);
}
ATerm apply_to_file_1 (ATerm t, ATerm o_49 (ATerm))
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym__2))
    {
      k_15 = ATgetArgument(j_15, 0);
      l_15 = ATgetArgument(j_15, 1);
      {
        ATerm q_15 = NULL;
        ATerm k_22;
        k_22 = t;
        {
          ATerm r_15 = NULL;
          t = not_null(k_15);
          {
            t = ReadFromFile_0(t);
            {
              t = o_49(t);
              {
                r_15 = t;
                if(((q_15 != NULL) && (q_15 != r_15)))
                  _fail(r_15);
                else
                  q_15 = r_15;
              }
            }
          }
        }
        t = k_22;
        {
          ATerm l_22;
          l_22 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_15), not_null(q_15));
            t = WriteToBinaryFile_0(t);
          }
          t = l_22;
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm copy_file_3 (ATerm t, ATerm p_49 (ATerm), ATerm q_49 (ATerm), ATerm r_49 (ATerm))
{
  ATerm d_16 = NULL,q_16 = NULL,r_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym__2))
    {
      q_16 = ATgetArgument(d_16, 0);
      r_16 = ATgetArgument(d_16, 1);
      {
        ATerm d_17 = NULL,e_17 = NULL,h_17 = NULL;
        t = _2(t, q_49, r_49);
        {
          d_17 = t;
          y_15 :
          if(match_cons(d_17, sym__2))
            {
              e_17 = ATgetArgument(d_17, 0);
              h_17 = ATgetArgument(d_17, 1);
              {
                ATerm m_22;
                m_22 = t;
                {
                  ATerm k_17 = NULL,m_17 = NULL;
                  ATerm n_22;
                  n_22 = t;
                  {
                    ATerm l_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), not_null(r_16));
                    {
                      t = conc_strings_0(t);
                      {
                        l_17 = t;
                        if(((k_17 != NULL) && (k_17 != l_17)))
                          _fail(l_17);
                        else
                          k_17 = l_17;
                      }
                    }
                  }
                  t = n_22;
                  {
                    ATerm n_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_17), not_null(h_17));
                    {
                      t = conc_strings_0(t);
                      {
                        n_17 = t;
                        if(((m_17 != NULL) && (m_17 != n_17)))
                          _fail(n_17);
                        else
                          m_17 = n_17;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(m_17));
                      t = apply_to_file_1(t, p_49);
                    }
                  }
                }
                t = m_22;
              }
            }
          else
            _fail(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  u_17 = t;
  t_17 :
  if(match_cons(u_17, sym__2))
    {
      v_17 = ATgetArgument(u_17, 0);
      w_17 = ATgetArgument(u_17, 1);
      {
        t = not_null(v_17);
        {
          ATerm l_6 (ATerm t)
          {
            t = not_null(w_17);
            return(t);
          }
          t = at_end_1(t, l_6);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm pref_1 (ATerm t, ATerm d_68 (ATerm))
{
  ATerm c_18 = NULL;
  ATerm e_18 = NULL;
  c_18 = t;
  {
    ATerm f_18 = NULL;
    t = term_m_19;
    {
      t = d_68(t);
      {
        f_18 = t;
        if(((e_18 != NULL) && (e_18 != f_18)))
          _fail(f_18);
        else
          e_18 = f_18;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_18), not_null(c_18));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm m_18 = NULL,q_18 = NULL,r_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym__2))
    {
      q_18 = ATgetArgument(m_18, 0);
      r_18 = ATgetArgument(m_18, 1);
      t = SSL_call(not_null(q_18), not_null(r_18));
    }
  else
    _fail(t);
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
ATerm pipe_3 (ATerm t, ATerm g_49 (ATerm), ATerm h_49 (ATerm), ATerm i_49 (ATerm))
{
  ATerm z_18 = NULL,b_19 = NULL;
  ATerm o_22;
  o_22 = t;
  {
    ATerm a_19 = NULL;
    t = conc_strings_0(t);
    {
      a_19 = t;
      if(((z_18 != NULL) && (z_18 != a_19)))
        _fail(a_19);
      else
        z_18 = a_19;
    }
  }
  t = o_22;
  {
    t = _2(t, _id, h_49);
    {
      ATerm p_22;
      p_22 = t;
      {
        ATerm c_19 = NULL;
        t = conc_strings_0(t);
        {
          c_19 = t;
          if(((b_19 != NULL) && (b_19 != c_19)))
            _fail(c_19);
          else
            b_19 = c_19;
        }
      }
      t = p_22;
      {
        ATerm q_22;
        q_22 = t;
        {
          ATerm d_19 = NULL,f_19 = NULL;
          ATerm r_22;
          r_22 = t;
          {
            ATerm e_19 = NULL;
            t = term_m_19;
            {
              t = g_49(t);
              {
                e_19 = t;
                if(((d_19 != NULL) && (d_19 != e_19)))
                  _fail(e_19);
                else
                  d_19 = e_19;
              }
            }
          }
          t = r_22;
          {
            ATerm g_19 = NULL;
            t = term_m_19;
            {
              t = i_49(t);
              {
                g_19 = t;
                if(((f_19 != NULL) && (f_19 != g_19)))
                  _fail(g_19);
                else
                  f_19 = g_19;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(f_19)), not_null(b_19)), term_z_17), not_null(z_18)), term_s_22));
              t = call_0(t);
            }
          }
        }
        t = q_22;
      }
    }
  }
  return(t);
}
ATerm Output_1 (ATerm t, ATerm p_45 (ATerm))
{
  ATerm o_19 = NULL,p_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_Output_1))
    {
      p_19 = ATgetArgument(o_19, 0);
      {
        ATerm r_19 = NULL;
        t = not_null(p_19);
        {
          t = p_45(t);
          {
            r_19 = t;
            t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_19));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ExecDir_1 (ATerm t, ATerm u_45 (ATerm))
{
  ATerm y_19 = NULL,z_19 = NULL;
  y_19 = t;
  x_19 :
  if(match_cons(y_19, sym_ExecDir_1))
    {
      z_19 = ATgetArgument(y_19, 0);
      {
        ATerm b_20 = NULL;
        t = not_null(z_19);
        {
          t = u_45(t);
          {
            b_20 = t;
            t = (ATerm) ATmakeAppl(sym_ExecDir_1, not_null(b_20));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InclDir_1 (ATerm t, ATerm v_45 (ATerm))
{
  ATerm i_20 = NULL,j_20 = NULL;
  i_20 = t;
  h_20 :
  if(match_cons(i_20, sym_InclDir_1))
    {
      j_20 = ATgetArgument(i_20, 0);
      {
        ATerm l_20 = NULL;
        t = not_null(j_20);
        {
          t = v_45(t);
          {
            l_20 = t;
            t = (ATerm) ATmakeAppl(sym_InclDir_1, not_null(l_20));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
  ATerm n_6 (ATerm t)
  {
    ATerm p_6 (ATerm t)
    {
      ATerm q_6 (ATerm t)
      {
        ATerm z_20 = NULL;
        z_20 = t;
        if(((x_20 != NULL) && (x_20 != z_20)))
          _fail(z_20);
        else
          x_20 = z_20;
        return(t);
      }
      t = InclDir_1(t, q_6);
      return(t);
    }
    t = option_defined_1(t, p_6);
    {
      ATerm r_6 (ATerm t)
      {
        ATerm v_6 (ATerm t)
        {
          ATerm a_21 = NULL;
          a_21 = t;
          if(((v_20 != NULL) && (v_20 != a_21)))
            _fail(a_21);
          else
            v_20 = a_21;
          return(t);
        }
        t = ExecDir_1(t, v_6);
        return(t);
      }
      t = option_defined_1(t, r_6);
      {
        ATerm x_6 (ATerm t)
        {
          ATerm y_6 (ATerm t)
          {
            ATerm z_6 (ATerm t)
            {
              ATerm b_21 = NULL;
              b_21 = t;
              if(((y_20 != NULL) && (y_20 != b_21)))
                _fail(b_21);
              else
                y_20 = b_21;
              return(t);
            }
            t = Output_1(t, z_6);
            return(t);
          }
          t = option_defined_1(t, y_6);
          return(t);
        }
        t = try_1(t, x_6);
      }
    }
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
    c_21 = t;
    t_20 :
    if(match_cons(c_21, sym__2))
      {
        d_21 = ATgetArgument(c_21, 0);
        e_21 = ATgetArgument(c_21, 1);
        if(((w_20 != NULL) && (w_20 != d_21)))
          _fail(d_21);
        else
          w_20 = d_21;
      }
    else
      _fail(t);
    return(t);
  }
  t = _2(t, n_6, o_6);
  {
    ATerm a_7 (ATerm t)
    {
      ATerm b_7 (ATerm t)
      {
        t = term_t_22;
        {
          ATerm e_7 (ATerm t)
          {
            t = not_null(v_20);
            return(t);
          }
          t = pref_1(t, e_7);
        }
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        t = term_g_15;
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        ATerm f_21 = NULL;
        ATerm g_21 = NULL;
        t = term_m_19;
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_20)), term_w_22);
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_20)), term_w_22);
            }
          {
            g_21 = t;
            if(((f_21 != NULL) && (f_21 != g_21)))
              _fail(g_21);
            else
              f_21 = g_21;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), (ATerm) ATinsert(CheckATermList(not_null(x_20)), term_a_23));
          t = conc_0(t);
        }
        return(t);
      }
      t = pipe_3(t, b_7, c_7, d_7);
      return(t);
    }
    t = _2(t, _id, a_7);
    {
      ATerm f_7 (ATerm t)
      {
        ATerm s_7 (ATerm t)
        {
          ATerm t_7 (ATerm t)
          {
            t = not_null(y_20);
            return(t);
          }
          ATerm u_7 (ATerm t)
          {
            t = term_g_15;
            return(t);
          }
          t = copy_file_3(t, _id, t_7, u_7);
          return(t);
        }
        t = _2(t, _id, s_7);
        return(t);
      }
      t = try_1(t, f_7);
    }
  }
  return(t);
}
ATerm Verbose_0 (ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  o_21 :
  if(!(match_cons(p_21, sym_Verbose_0)))
    _fail(t);
  return(t);
}
ATerm sc_announce_0 (ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm w_7 (ATerm t)
    {
      t = option_defined_1(t, Verbose_0);
      return(t);
    }
    t = _2(t, w_7, _id);
    t = _2(t, sc_version_0, _id);
    return(t);
  }
  t = try_1(t, v_7);
  return(t);
}
ATerm DeclVersion_1 (ATerm t, ATerm r_45 (ATerm))
{
  ATerm t_21 = NULL,u_21 = NULL;
  t_21 = t;
  s_21 :
  if(match_cons(t_21, sym_DeclVersion_1))
    {
      u_21 = ATgetArgument(t_21, 0);
      {
        ATerm w_21 = NULL;
        t = not_null(u_21);
        {
          t = r_45(t);
          {
            w_21 = t;
            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(w_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm c_22 = NULL;
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_7 (ATerm t)
      {
        ATerm y_7 (ATerm t)
        {
          ATerm d_22 = NULL;
          d_22 = t;
          if(((c_22 != NULL) && (c_22 != d_22)))
            _fail(d_22);
          else
            c_22 = d_22;
          return(t);
        }
        t = DeclVersion_1(t, y_7);
        return(t);
      }
      t = option_defined_1(t, x_7);
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm e_22 = NULL;
        t = term_s_17;
        {
          e_22 = t;
          if(((c_22 != NULL) && (c_22 != e_22)))
            _fail(e_22);
          else
            c_22 = e_22;
        }
      }
    }
  {
    ATerm f_23;
    f_23 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATinsert(CheckATermList(term_w_18), not_null(c_22)), term_g_23));
      t = printnl_0(t);
    }
    t = f_23;
  }
  return(t);
}
ATerm sc_usage_0 (ATerm t)
{
  t = sc_version_0(t);
  {
    t = term_p_26;
    t = printnl_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_22 = NULL;
  i_22 = t;
  h_22 :
  if(!(match_cons(i_22, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_51 (ATerm))
{
  ATerm a_8 (ATerm t)
  {
    ATerm r_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(y_26);
      }
    else
      {
        t = r_26;
        {
          ATerm b_27 = t;
          int k_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(k_27);
            }
          else
            {
              t = b_27;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_8);
  t = p_51(t);
  return(t);
}
ATerm Input_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm y_22 = NULL,z_22 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_Input_1))
    {
      z_22 = ATgetArgument(y_22, 0);
      {
        ATerm p_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_23 = NULL;
            t = not_null(z_22);
            {
              t = l_0(t);
              {
                b_23 = t;
                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_23));
              }
            }
            LocalPopChoice(s_27);
          }
        else
          {
            t = p_27;
            {
              ATerm e_23 = NULL;
              t = not_null(z_22);
              {
                t = l_0(t);
                {
                  e_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_23));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_8 (ATerm t)
      {
        ATerm v_23 = NULL;
        v_23 = t;
        k_23 :
        if(!(match_string(v_23, "-S")))
          {
            if(!(match_string(v_23, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm c_8 (ATerm t)
      {
        t = term_c_28;
        return(t);
      }
      ATerm d_8 (ATerm t)
      {
        t = term_d_28;
        return(t);
      }
      t = Option_3(t, b_8, c_8, d_8);
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_8 (ATerm t)
            {
              ATerm w_23 = NULL;
              w_23 = t;
              l_23 :
              if(!(match_string(w_23, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm j_8 (ATerm t)
            {
              t = term_g_28;
              return(t);
            }
            ATerm k_8 (ATerm t)
            {
              t = term_h_28;
              return(t);
            }
            t = Option_3(t, h_8, j_8, k_8);
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
            {
              ATerm j_28 = t;
              int k_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_8 (ATerm t)
                  {
                    ATerm x_23 = NULL;
                    x_23 = t;
                    m_23 :
                    if(!(match_string(x_23, "-v")))
                      {
                        if(!(match_string(x_23, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm m_8 (ATerm t)
                  {
                    t = term_l_28;
                    return(t);
                  }
                  ATerm n_8 (ATerm t)
                  {
                    t = term_n_28;
                    return(t);
                  }
                  t = Option_3(t, l_8, m_8, n_8);
                  LocalPopChoice(k_28);
                }
              else
                {
                  t = j_28;
                  {
                    ATerm o_28 = t;
                    int q_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_8 (ATerm t)
                        {
                          ATerm y_23 = NULL;
                          y_23 = t;
                          n_23 :
                          if(!(match_string(y_23, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm v_8 (ATerm t)
                        {
                          ATerm z_23 = NULL;
                          ATerm a_24 = NULL;
                          a_24 = t;
                          if(((z_23 != NULL) && (z_23 != a_24)))
                            _fail(a_24);
                          else
                            z_23 = a_24;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(z_23));
                          return(t);
                        }
                        ATerm w_8 (ATerm t)
                        {
                          t = term_v_28;
                          return(t);
                        }
                        t = ArgOption_3(t, o_8, v_8, w_8);
                        LocalPopChoice(q_28);
                      }
                    else
                      {
                        t = o_28;
                        {
                          ATerm w_28 = t;
                          int x_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_8 (ATerm t)
                              {
                                ATerm b_24 = NULL;
                                b_24 = t;
                                p_23 :
                                if(!(match_string(b_24, "-i")))
                                  {
                                    if(!(match_string(b_24, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm y_8 (ATerm t)
                              {
                                ATerm c_24 = NULL;
                                ATerm d_24 = NULL;
                                d_24 = t;
                                if(((c_24 != NULL) && (c_24 != d_24)))
                                  _fail(d_24);
                                else
                                  c_24 = d_24;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_24));
                                return(t);
                              }
                              ATerm z_8 (ATerm t)
                              {
                                t = term_y_28;
                                return(t);
                              }
                              t = ArgOption_3(t, x_8, y_8, z_8);
                              LocalPopChoice(x_28);
                            }
                          else
                            {
                              t = w_28;
                              {
                                ATerm z_28 = t;
                                int b_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_9 (ATerm t)
                                    {
                                      ATerm e_24 = NULL;
                                      e_24 = t;
                                      r_23 :
                                      if(!(match_string(e_24, "-o")))
                                        {
                                          if(!(match_string(e_24, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm f_9 (ATerm t)
                                    {
                                      ATerm f_24 = NULL;
                                      ATerm g_24 = NULL;
                                      g_24 = t;
                                      if(((f_24 != NULL) && (f_24 != g_24)))
                                        _fail(g_24);
                                      else
                                        f_24 = g_24;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_24));
                                      return(t);
                                    }
                                    ATerm g_9 (ATerm t)
                                    {
                                      t = term_c_29;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_9, f_9, g_9);
                                    LocalPopChoice(b_29);
                                  }
                                else
                                  {
                                    t = z_28;
                                    {
                                      ATerm e_29 = t;
                                      int f_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_9 (ATerm t)
                                          {
                                            ATerm h_24 = NULL;
                                            h_24 = t;
                                            t_23 :
                                            if(!(match_string(h_24, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm m_9 (ATerm t)
                                          {
                                            t = term_g_29;
                                            return(t);
                                          }
                                          ATerm n_9 (ATerm t)
                                          {
                                            t = term_k_29;
                                            return(t);
                                          }
                                          t = Option_3(t, h_9, m_9, n_9);
                                          LocalPopChoice(f_29);
                                        }
                                      else
                                        {
                                          t = e_29;
                                          {
                                            ATerm o_9 (ATerm t)
                                            {
                                              ATerm i_24 = NULL;
                                              i_24 = t;
                                              u_23 :
                                              if(!(match_string(i_24, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm q_9 (ATerm t)
                                            {
                                              t = term_l_29;
                                              return(t);
                                            }
                                            ATerm r_9 (ATerm t)
                                            {
                                              t = term_m_29;
                                              return(t);
                                            }
                                            t = Option_3(t, o_9, q_9, r_9);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm assert_1 (ATerm t, ATerm l_46 (ATerm))
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym__2))
    {
      s_24 = ATgetArgument(r_24, 0);
      t_24 = ATgetArgument(r_24, 1);
      {
        ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
        ATerm n_29;
        n_29 = t;
        {
          ATerm z_24 = NULL;
          ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
          t = l_46(t);
          {
            z_24 = t;
            {
              if(((w_24 != NULL) && (w_24 != z_24)))
                _fail(z_24);
              else
                w_24 = z_24;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(w_24), not_null(s_24), not_null(t_24));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_29 = t;
                    int q_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_24), term_r_29);
                        t = table_get_0(t);
                        LocalPopChoice(q_29);
                      }
                    else
                      {
                        t = o_29;
                        t = term_u_29;
                      }
                    {
                      a_25 = t;
                      p_24 :
                      if(((ATgetType(a_25) == AT_LIST) && ((ATermList) a_25 != ATempty)))
                        {
                          b_25 = ATgetFirst((ATermList) a_25);
                          c_25 = (ATerm) ATgetNext((ATermList) a_25);
                          {
                            if(((x_24 != NULL) && (x_24 != b_25)))
                              _fail(b_25);
                            else
                              x_24 = b_25;
                            {
                              if(((y_24 != NULL) && (y_24 != c_25)))
                                _fail(c_25);
                              else
                                y_24 = c_25;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(w_24), term_r_29, (ATerm) ATinsert(CheckATermList(not_null(y_24)), (ATerm) ATinsert(CheckATermList(not_null(x_24)), not_null(s_24))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
            }
          }
        }
        t = n_29;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  l_25 = t;
  j_25 :
  if(match_string(l_25, "register-usage-info"))
    t = register_usage_1(t, k_0);
  else
    {
      if(((ATgetType(l_25) == AT_LIST) && ((ATermList) l_25 != ATempty)))
        {
          m_25 = ATgetFirst((ATermList) l_25);
          n_25 = (ATerm) ATgetNext((ATermList) l_25);
          k_25 :
          if(((ATgetType(n_25) == AT_LIST) && ((ATermList) n_25 != ATempty)))
            {
              o_25 = ATgetFirst((ATermList) n_25);
              p_25 = (ATerm) ATgetNext((ATermList) n_25);
              {
                ATerm t_25 = NULL;
                ATerm v_29;
                v_29 = t;
                {
                  t = not_null(m_25);
                  t = i_0(t);
                }
                t = v_29;
                {
                  ATerm u_25 = NULL;
                  t = not_null(o_25);
                  {
                    t = j_0(t);
                    {
                      u_25 = t;
                      if(((t_25 != NULL) && (t_25 != u_25)))
                        _fail(u_25);
                      else
                        t_25 = u_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_25)), not_null(t_25));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm s_9 (ATerm t)
  {
    t = term_s_17;
    return(t);
  }
  t = ArgOption_3(t, p_50, q_50, s_9);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm e_50 (ATerm), ATerm f_50 (ATerm))
{
  ATerm t_9 (ATerm t)
  {
    t = term_s_17;
    return(t);
  }
  t = Option_3(t, e_50, f_50, t_9);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm g_53 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm u_9 (ATerm t)
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, u_9);
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          {
            ATerm y_29 = t;
            int c_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_9 (ATerm t)
                {
                  ATerm a_26 = NULL;
                  a_26 = t;
                  y_25 :
                  if(!(match_int(a_26, 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2(t, w_9, _id);
                LocalPopChoice(c_30);
              }
            else
              {
                t = y_29;
                {
                  ATerm y_9 (ATerm t)
                  {
                    ATerm b_26 = NULL;
                    b_26 = t;
                    z_25 :
                    if(!(match_int(b_26, 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2(t, y_9, g_53);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, u_9);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm sc_options_0 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_10 (ATerm t)
      {
        ATerm z_26 = NULL;
        z_26 = t;
        d_26 :
        if(!(match_string(z_26, "-e")))
          _fail(t);
        return(t);
      }
      ATerm c_10 (ATerm t)
      {
        ATerm a_27 = NULL;
        a_27 = t;
        t = (ATerm) ATmakeAppl(sym_ExecDir_1, not_null(a_27));
        return(t);
      }
      t = ArgOption_2(t, b_10, c_10);
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_10 (ATerm t)
            {
              ATerm c_27 = NULL;
              c_27 = t;
              f_26 :
              if(!(match_string(c_27, "-I")))
                _fail(t);
              return(t);
            }
            ATerm e_10 (ATerm t)
            {
              t = term_i_30;
              return(t);
            }
            t = ArgOption_2(t, d_10, e_10);
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            {
              ATerm j_30 = t;
              int k_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_10 (ATerm t)
                  {
                    ATerm d_27 = NULL;
                    d_27 = t;
                    g_26 :
                    if(!(match_string(d_27, "--Include")))
                      _fail(t);
                    return(t);
                  }
                  ATerm k_10 (ATerm t)
                  {
                    t = term_i_30;
                    return(t);
                  }
                  t = ArgOption_2(t, j_10, k_10);
                  LocalPopChoice(k_30);
                }
              else
                {
                  t = j_30;
                  {
                    ATerm q_30 = t;
                    int t_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_10 (ATerm t)
                        {
                          ATerm e_27 = NULL;
                          e_27 = t;
                          h_26 :
                          if(!(match_string(e_27, "-CI")))
                            _fail(t);
                          return(t);
                        }
                        ATerm q_10 (ATerm t)
                        {
                          t = term_i_30;
                          return(t);
                        }
                        t = ArgOption_2(t, l_10, q_10);
                        LocalPopChoice(t_30);
                      }
                    else
                      {
                        t = q_30;
                        {
                          ATerm u_30 = t;
                          int v_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_10 (ATerm t)
                              {
                                ATerm f_27 = NULL;
                                f_27 = t;
                                i_26 :
                                if(!(match_string(f_27, "-CL")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm s_10 (ATerm t)
                              {
                                t = term_i_30;
                                return(t);
                              }
                              t = ArgOption_2(t, r_10, s_10);
                              LocalPopChoice(v_30);
                            }
                          else
                            {
                              t = u_30;
                              {
                                ATerm w_30 = t;
                                int x_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_10 (ATerm t)
                                    {
                                      ATerm g_27 = NULL;
                                      g_27 = t;
                                      j_26 :
                                      if(!(match_string(g_27, "-CC")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm y_10 (ATerm t)
                                    {
                                      t = term_y_30;
                                      return(t);
                                    }
                                    t = Option_2(t, t_10, y_10);
                                    LocalPopChoice(x_30);
                                  }
                                else
                                  {
                                    t = w_30;
                                    {
                                      ATerm c_31 = t;
                                      int e_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm z_10 (ATerm t)
                                          {
                                            ATerm h_27 = NULL;
                                            h_27 = t;
                                            k_26 :
                                            if(!(match_string(h_27, "--norm")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm a_11 (ATerm t)
                                          {
                                            t = term_f_31;
                                            return(t);
                                          }
                                          t = Option_2(t, z_10, a_11);
                                          LocalPopChoice(e_31);
                                        }
                                      else
                                        {
                                          t = c_31;
                                          {
                                            ATerm g_31 = t;
                                            int j_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm b_11 (ATerm t)
                                                {
                                                  ATerm i_27 = NULL;
                                                  i_27 = t;
                                                  l_26 :
                                                  if(!(match_string(i_27, "-i")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm c_11 (ATerm t)
                                                {
                                                  ATerm j_27 = NULL;
                                                  ATerm l_27 = NULL;
                                                  j_27 = t;
                                                  {
                                                    ATerm m_27 = NULL;
                                                    t = not_null(j_27);
                                                    {
                                                      t = basename_0(t);
                                                      {
                                                        m_27 = t;
                                                        if(((l_27 != NULL) && (l_27 != m_27)))
                                                          _fail(m_27);
                                                        else
                                                          l_27 = m_27;
                                                      }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_27));
                                                  }
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, b_11, c_11);
                                                LocalPopChoice(j_31);
                                              }
                                            else
                                              {
                                                t = g_31;
                                                {
                                                  ATerm o_31 = t;
                                                  int p_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_11 (ATerm t)
                                                      {
                                                        ATerm n_27 = NULL;
                                                        n_27 = t;
                                                        o_26 :
                                                        if(!(match_string(n_27, "--main")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm h_11 (ATerm t)
                                                      {
                                                        ATerm o_27 = NULL;
                                                        o_27 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Main_1, not_null(o_27));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, e_11, h_11);
                                                      LocalPopChoice(p_31);
                                                    }
                                                  else
                                                    {
                                                      t = o_31;
                                                      {
                                                        ATerm q_31 = t;
                                                        int r_31 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm i_11 (ATerm t)
                                                            {
                                                              ATerm q_27 = NULL;
                                                              q_27 = t;
                                                              q_26 :
                                                              if(!(match_string(q_27, "-m")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm j_11 (ATerm t)
                                                            {
                                                              ATerm r_27 = NULL;
                                                              r_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Main_1, not_null(r_27));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, i_11, j_11);
                                                            LocalPopChoice(r_31);
                                                          }
                                                        else
                                                          {
                                                            t = q_31;
                                                            {
                                                              ATerm s_31 = t;
                                                              int y_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_11 (ATerm t)
                                                                  {
                                                                    ATerm t_27 = NULL;
                                                                    t_27 = t;
                                                                    s_26 :
                                                                    if(!(match_string(t_27, "--ast")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm n_11 (ATerm t)
                                                                  {
                                                                    t = term_z_31;
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, m_11, n_11);
                                                                  LocalPopChoice(y_31);
                                                                }
                                                              else
                                                                {
                                                                  t = s_31;
                                                                  {
                                                                    ATerm a_32 = t;
                                                                    int b_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm o_11 (ATerm t)
                                                                        {
                                                                          ATerm u_27 = NULL;
                                                                          u_27 = t;
                                                                          t_26 :
                                                                          if(!(match_string(u_27, "-F")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm p_11 (ATerm t)
                                                                        {
                                                                          t = term_c_32;
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, o_11, p_11);
                                                                        LocalPopChoice(b_32);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_32;
                                                                        {
                                                                          ATerm d_32 = t;
                                                                          int e_32 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm q_11 (ATerm t)
                                                                              {
                                                                                ATerm v_27 = NULL;
                                                                                v_27 = t;
                                                                                u_26 :
                                                                                if(!(match_string(v_27, "--fusion")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm u_11 (ATerm t)
                                                                              {
                                                                                t = term_h_32;
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, q_11, u_11);
                                                                              LocalPopChoice(e_32);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_32;
                                                                              {
                                                                                ATerm i_32 = t;
                                                                                int j_32 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm w_11 (ATerm t)
                                                                                    {
                                                                                      ATerm w_27 = NULL;
                                                                                      w_27 = t;
                                                                                      v_26 :
                                                                                      if(!(match_string(w_27, "--csyntax")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm z_11 (ATerm t)
                                                                                    {
                                                                                      t = term_m_32;
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, w_11, z_11);
                                                                                    LocalPopChoice(j_32);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_32;
                                                                                    {
                                                                                      ATerm n_32 = t;
                                                                                      int o_32 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm c_12 (ATerm t)
                                                                                          {
                                                                                            ATerm x_27 = NULL;
                                                                                            x_27 = t;
                                                                                            w_26 :
                                                                                            if(!(match_string(x_27, "--trace-all")))
                                                                                              _fail(t);
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm f_12 (ATerm t)
                                                                                          {
                                                                                            t = term_p_32;
                                                                                            {
                                                                                              ATerm q_32;
                                                                                              q_32 = t;
                                                                                              {
                                                                                                t = term_u_32;
                                                                                                {
                                                                                                  ATerm g_12 (ATerm t)
                                                                                                  {
                                                                                                    t = term_s_19;
                                                                                                    return(t);
                                                                                                  }
                                                                                                  t = assert_1(t, g_12);
                                                                                                }
                                                                                              }
                                                                                              t = q_32;
                                                                                            }
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_2(t, c_12, f_12);
                                                                                          LocalPopChoice(o_32);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_32;
                                                                                          {
                                                                                            ATerm l_12 (ATerm t)
                                                                                            {
                                                                                              ATerm y_27 = NULL;
                                                                                              y_27 = t;
                                                                                              x_26 :
                                                                                              if(!(match_string(y_27, "-t")))
                                                                                                _fail(t);
                                                                                              return(t);
                                                                                            }
                                                                                            ATerm m_12 (ATerm t)
                                                                                            {
                                                                                              ATerm z_27 = NULL;
                                                                                              z_27 = t;
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(z_27)), term_w_32);
                                                                                                {
                                                                                                  ATerm o_12 (ATerm t)
                                                                                                  {
                                                                                                    t = term_h_19;
                                                                                                    return(t);
                                                                                                  }
                                                                                                  t = assert_1(t, o_12);
                                                                                                }
                                                                                                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(z_27));
                                                                                              }
                                                                                              return(t);
                                                                                            }
                                                                                            t = ArgOption_2(t, l_12, m_12);
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm i_28 = NULL;
  i_28 = t;
  t = SSL_table_destroy(not_null(i_28));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  t = SSL_implode_string(not_null(m_28));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_61 (ATerm))
{
  ATerm p_28 (ATerm t)
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_28);
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        {
          t = Nil_0(t);
          t = b_61(t);
        }
      }
    return(t);
  }
  t = p_28(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      {
        ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
        s_28 = t;
        r_28 :
        if(((ATgetType(s_28) == AT_LIST) && ((ATermList) s_28 != ATempty)))
          {
            t_28 = ATgetFirst((ATermList) s_28);
            u_28 = (ATerm) ATgetNext((ATermList) s_28);
            {
              t = not_null(t_28);
              {
                ATerm r_12 (ATerm t)
                {
                  t = not_null(u_28);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, r_12);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = SSL_explode_string(not_null(a_29));
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
ATerm long_description_1 (ATerm t, ATerm w_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_60 (ATerm))
{
  ATerm d_29 (ATerm t)
  {
    ATerm g_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_33);
      }
    else
      {
        t = g_33;
        t = Cons_2(t, n_60, d_29);
      }
    return(t);
  }
  t = d_29(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm i_29 = NULL,j_29 = NULL,p_29 = NULL;
  p_29 = t;
  h_29 :
  if(((ATgetType(p_29) == AT_LIST) && ((ATermList) p_29 != ATempty)))
    {
      i_29 = ATgetFirst((ATermList) p_29);
      j_29 = (ATerm) ATgetNext((ATermList) p_29);
      {
        t = not_null(j_29);
        {
          ATerm s_12 (ATerm t)
          {
            ATerm s_29 = NULL;
            ATerm t_29 = NULL;
            t = h_0(t);
            {
              t_29 = t;
              if(((s_29 != NULL) && (s_29 != t_29)))
                _fail(t_29);
              else
                s_29 = t_29;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(s_29)), not_null(i_29));
            return(t);
          }
          t = reverse_1(t, s_12);
        }
      }
    }
  else
    {
      if(((ATermList) p_29 == ATempty))
        {
          {
            t = term_m_19;
            t = h_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm t_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, t_12);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_49 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_45 (ATerm))
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym_Program_1))
    {
      b_30 = ATgetArgument(a_30, 0);
      {
        ATerm d_30 = NULL;
        t = not_null(b_30);
        {
          t = m_45(t);
          {
            d_30 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_30));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm l_30 = NULL;
  ATerm y_12 (ATerm t)
  {
    ATerm z_12 (ATerm t)
    {
      ATerm m_30 = NULL;
      m_30 = t;
      if(((l_30 != NULL) && (l_30 != m_30)))
        _fail(m_30);
      else
        l_30 = m_30;
      return(t);
    }
    t = Program_1(t, z_12);
    return(t);
  }
  t = option_defined_1(t, y_12);
  {
    ATerm a_13 (ATerm t)
    {
      ATerm n_30 = NULL;
      ATerm o_30 = NULL;
      t = term_m_19;
      {
        ATerm b_13 (ATerm t)
        {
          t = not_null(l_30);
          return(t);
        }
        t = short_description_1(t, b_13);
        {
          t = concat_strings_0(t);
          {
            o_30 = t;
            if(((n_30 != NULL) && (n_30 != o_30)))
              _fail(o_30);
            else
              n_30 = o_30;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATempty, not_null(n_30)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, a_13);
    {
      t = term_q_33;
      {
        t = printnl_0(t);
        {
          t = term_t_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_13 (ATerm t)
                {
                  ATerm p_30 = NULL;
                  p_30 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_30)), term_u_33));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_13);
                {
                  ATerm i_13 (ATerm t)
                  {
                    ATerm r_30 = NULL;
                    ATerm s_30 = NULL;
                    t = term_m_19;
                    {
                      ATerm j_13 (ATerm t)
                      {
                        t = not_null(l_30);
                        return(t);
                      }
                      t = long_description_1(t, j_13);
                      {
                        t = concat_strings_0(t);
                        {
                          s_30 = t;
                          if(((r_30 != NULL) && (r_30 != s_30)))
                            _fail(s_30);
                          else
                            r_30 = s_30;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_30)), term_v_33));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, i_13);
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
ATerm Undefined_1 (ATerm t, ATerm n_45 (ATerm))
{
  ATerm a_31 = NULL,b_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym_Undefined_1))
    {
      b_31 = ATgetArgument(a_31, 0);
      {
        ATerm d_31 = NULL;
        t = not_null(b_31);
        {
          t = n_45(t);
          {
            d_31 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_31));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_31 = NULL;
  i_31 = t;
  h_31 :
  if(!(match_cons(i_31, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym__2))
    {
      m_31 = ATgetArgument(l_31, 0);
      n_31 = ATgetArgument(l_31, 1);
      t = SSL_table_get(not_null(m_31), not_null(n_31));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym__3))
    {
      v_31 = ATgetArgument(u_31, 0);
      w_31 = ATgetArgument(u_31, 1);
      x_31 = ATgetArgument(u_31, 2);
      {
        ATerm w_33;
        w_33 = t;
        {
          ATerm f_32 = NULL;
          ATerm g_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_31), not_null(w_31));
          {
            ATerm x_33 = t;
            int y_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_33);
              }
            else
              {
                t = x_33;
                t = (ATerm) ATempty;
              }
            {
              g_32 = t;
              if(((f_32 != NULL) && (f_32 != g_32)))
                _fail(g_32);
              else
                f_32 = g_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_31), not_null(w_31), (ATerm) ATinsert(CheckATermList(not_null(f_32)), not_null(x_31)));
            t = table_put_0(t);
          }
        }
        t = w_33;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_50 (ATerm))
{
  ATerm k_32 = NULL;
  ATerm l_32 = NULL;
  t = term_m_19;
  {
    t = a_50(t);
    {
      l_32 = t;
      if(((k_32 != NULL) && (k_32 != l_32)))
        _fail(l_32);
      else
        k_32 = l_32;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_33, term_s_33, not_null(k_32));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  s_32 :
  if(match_string(x_32, "register-usage-info"))
    t = register_usage_1(t, g_0);
  else
    {
      if(((ATgetType(x_32) == AT_LIST) && ((ATermList) x_32 != ATempty)))
        {
          y_32 = ATgetFirst((ATermList) x_32);
          z_32 = (ATerm) ATgetNext((ATermList) x_32);
          {
            ATerm c_33 = NULL;
            ATerm z_33;
            z_33 = t;
            {
              t = not_null(y_32);
              t = a_0(t);
            }
            t = z_33;
            {
              ATerm d_33 = NULL;
              t = term_m_19;
              {
                t = f_0(t);
                {
                  d_33 = t;
                  if(((c_33 != NULL) && (c_33 != d_33)))
                    _fail(d_33);
                  else
                    c_33 = d_33;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_32)), not_null(c_33));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm k_13 (ATerm t)
  {
    ATerm i_33 = NULL;
    i_33 = t;
    h_33 :
    if(!(match_string(i_33, "--help")))
      {
        if(!(match_string(i_33, "-h")))
          {
            if(!(match_string(i_33, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm l_13 (ATerm t)
  {
    t = term_a_34;
    return(t);
  }
  ATerm p_13 (ATerm t)
  {
    t = term_b_34;
    return(t);
  }
  t = Option_3(t, k_13, l_13, p_13);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
  l_33 = t;
  k_33 :
  if(((ATgetType(l_33) == AT_LIST) && ((ATermList) l_33 != ATempty)))
    {
      m_33 = ATgetFirst((ATermList) l_33);
      n_33 = (ATerm) ATgetNext((ATermList) l_33);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_33)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_33)));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_49 (ATerm))
{
  ATerm c_34;
  c_34 = t;
  {
    ATerm r_13 (ATerm t)
    {
      t = term_d_34;
      t = y_49(t);
      return(t);
    }
    t = try_1(t, r_13);
  }
  t = c_34;
  {
    ATerm s_13 (ATerm t)
    {
      ATerm f_35 = NULL;
      f_35 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_35));
      return(t);
    }
    ATerm t_13 (ATerm t)
    {
      ATerm e_34 = t;
      int f_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_34 = t;
          int h_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(h_34);
            }
          else
            {
              t = g_34;
              {
                t = y_49(t);
                t = Cons_2(t, _id, t_13);
              }
            }
          LocalPopChoice(f_34);
        }
      else
        {
          t = e_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_13, t_13);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
  ATerm i_34;
  i_34 = t;
  {
    ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
    o_35 = t;
    k_35 :
    if(match_cons(o_35, sym__3))
      {
        p_35 = ATgetArgument(o_35, 0);
        q_35 = ATgetArgument(o_35, 1);
        r_35 = ATgetArgument(o_35, 2);
        {
          if(((l_35 != NULL) && (l_35 != p_35)))
            _fail(p_35);
          else
            l_35 = p_35;
          {
            if(((m_35 != NULL) && (m_35 != q_35)))
              _fail(q_35);
            else
              m_35 = q_35;
            {
              if(((n_35 != NULL) && (n_35 != r_35)))
                _fail(r_35);
              else
                n_35 = r_35;
              t = SSL_table_put(not_null(l_35), not_null(m_35), not_null(n_35));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = i_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_49 (ATerm))
{
  ATerm u_35 = NULL;
  ATerm j_34;
  j_34 = t;
  {
    t = term_k_34;
    t = table_put_0(t);
  }
  t = j_34;
  {
    ATerm u_13 (ATerm t)
    {
      ATerm l_34 = t;
      int m_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_49(t);
          LocalPopChoice(m_34);
        }
      else
        {
          t = l_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_13);
    {
      ATerm x_13 (ATerm t)
      {
        ATerm n_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_q_21;
                t = exit_0(t);
              }
            }
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            {
              ATerm a_14 (ATerm t)
              {
                ATerm b_14 (ATerm t)
                {
                  ATerm v_35 = NULL;
                  v_35 = t;
                  if(((u_35 != NULL) && (u_35 != v_35)))
                    _fail(v_35);
                  else
                    u_35 = v_35;
                  return(t);
                }
                t = Undefined_1(t, b_14);
                return(t);
              }
              t = option_defined_1(t, a_14);
              {
                ATerm p_34;
                p_34 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_35)), term_q_34));
                  t = printnl_0(t);
                }
                t = p_34;
                {
                  t = system_usage_0(t);
                  {
                    t = term_u_20;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, x_13);
      {
        ATerm r_34;
        r_34 = t;
        {
          t = term_r_33;
          t = table_destroy_0(t);
        }
        t = r_34;
      }
    }
  }
  return(t);
}
ATerm skip1_1 (ATerm t, ATerm u_54 (ATerm))
{
  t = at_tail_1(t, u_54);
  return(t);
}
ATerm filter_option_args_1 (ATerm t, ATerm w_54 (ATerm))
{
  ATerm g_14 (ATerm t)
  {
    t = Cons_2(t, w_54, _id);
    t = Tl_0(t);
    return(t);
  }
  ATerm x_35 (ATerm t, ATerm y_35 (ATerm))
  {
    t = at_tail_1(t, y_35);
    return(t);
  }
  t = filter_gen_2(t, g_14, x_35);
  return(t);
}
ATerm at_tail_1 (ATerm t, ATerm z_60 (ATerm))
{
  t = Cons_2(t, _id, z_60);
  return(t);
}
ATerm skip2_1 (ATerm t, ATerm v_54 (ATerm))
{
  ATerm h_14 (ATerm t)
  {
    t = at_tail_1(t, v_54);
    return(t);
  }
  t = at_tail_1(t, h_14);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_46 (ATerm), ATerm c_46 (ATerm))
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  d_36 = t;
  c_36 :
  if(((ATgetType(d_36) == AT_LIST) && ((ATermList) d_36 != ATempty)))
    {
      e_36 = ATgetFirst((ATermList) d_36);
      f_36 = (ATerm) ATgetNext((ATermList) d_36);
      {
        ATerm i_36 = NULL;
        t = not_null(e_36);
        {
          ATerm k_36 = NULL;
          t = b_46(t);
          {
            i_36 = t;
            {
              t = not_null(f_36);
              {
                t = c_46(t);
                {
                  k_36 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_36)), not_null(i_36));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  r_36 = t;
  q_36 :
  if(((ATgetType(r_36) == AT_LIST) && ((ATermList) r_36 != ATempty)))
    {
      s_36 = ATgetFirst((ATermList) r_36);
      t_36 = (ATerm) ATgetNext((ATermList) r_36);
      t = not_null(t_36);
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm y_36 = NULL;
  y_36 = t;
  x_36 :
  if(((ATermList) y_36 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_gen_2 (ATerm t, ATerm r_54 (ATerm), ATerm s_54 (ATerm, ATerm (ATerm)))
{
  ATerm z_36 (ATerm t)
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        {
          ATerm u_34 = t;
          int v_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_54(t);
              t = s_54(t, z_36);
              LocalPopChoice(v_34);
            }
          else
            {
              t = u_34;
              {
                t = Tl_0(t);
                t = z_36(t);
              }
            }
        }
      }
    return(t);
  }
  t = z_36(t);
  return(t);
}
ATerm filter_options_1 (ATerm t, ATerm x_54 (ATerm))
{
  ATerm i_14 (ATerm t)
  {
    t = Cons_2(t, x_54, _id);
    return(t);
  }
  t = filter_gen_2(t, i_14, skip2_1);
  return(t);
}
ATerm process_sc_options_0 (ATerm t)
{
  ATerm j_37 = NULL,m_37 = NULL,p_37 = NULL,s_37 = NULL;
  ATerm w_34;
  w_34 = t;
  {
    ATerm l_37 = NULL;
    ATerm n_14 (ATerm t)
    {
      ATerm k_37 = NULL;
      k_37 = t;
      a_37 :
      if(!(match_string(k_37, "-I")))
        _fail(t);
      return(t);
    }
    t = filter_options_1(t, n_14);
    {
      l_37 = t;
      if(((j_37 != NULL) && (j_37 != l_37)))
        _fail(l_37);
      else
        j_37 = l_37;
    }
  }
  t = w_34;
  {
    ATerm x_34;
    x_34 = t;
    {
      ATerm o_37 = NULL;
      ATerm o_14 (ATerm t)
      {
        ATerm n_37 = NULL;
        n_37 = t;
        c_37 :
        if(!(match_string(n_37, "-CI")))
          _fail(t);
        return(t);
      }
      t = filter_option_args_1(t, o_14);
      {
        o_37 = t;
        if(((m_37 != NULL) && (m_37 != o_37)))
          _fail(o_37);
        else
          m_37 = o_37;
      }
    }
    t = x_34;
    {
      ATerm y_34;
      y_34 = t;
      {
        ATerm r_37 = NULL;
        ATerm p_14 (ATerm t)
        {
          ATerm q_37 = NULL;
          q_37 = t;
          e_37 :
          if(!(match_string(q_37, "-CL")))
            _fail(t);
          return(t);
        }
        t = filter_option_args_1(t, p_14);
        {
          r_37 = t;
          if(((p_37 != NULL) && (p_37 != r_37)))
            _fail(r_37);
          else
            p_37 = r_37;
        }
      }
      t = y_34;
      {
        ATerm q_14 (ATerm t)
        {
          ATerm z_34 = t;
          int a_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = sc_options_0(t);
              LocalPopChoice(a_35);
            }
          else
            {
              t = z_34;
              t = io_options_0(t);
            }
          return(t);
        }
        t = parse_options_1(t, q_14);
        {
          ATerm b_35 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_37 = NULL;
              ATerm r_14 (ATerm t)
              {
                ATerm s_14 (ATerm t)
                {
                  ATerm t_37 = NULL;
                  t_37 = t;
                  if(((s_37 != NULL) && (s_37 != t_37)))
                    _fail(t_37);
                  else
                    s_37 = t_37;
                  return(t);
                }
                t = Input_1(t, s_14);
                return(t);
              }
              t = option_defined_1(t, r_14);
              {
                u_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(not_null(u_37)), (ATerm) ATmakeAppl(sym_CLibDir_1, not_null(p_37))), (ATerm) ATmakeAppl(sym_CInclDir_1, not_null(m_37))), (ATerm) ATmakeAppl(sym_InclDir_1, not_null(j_37))), (ATerm) ATmakeAppl(sym__2, not_null(s_37), term_g_35));
              }
              LocalPopChoice(c_35);
            }
          else
            {
              t = b_35;
              {
                ATerm w_37 = NULL;
                w_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_37)), term_a_34), term_s_17);
              }
            }
        }
      }
    }
  }
  return(t);
}
ATerm sc_0 (ATerm t)
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = process_sc_options_0(t);
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      {
        t = sc_usage_0(t);
        {
          t = term_u_20;
          t = exit_0(t);
        }
      }
    }
  {
    ATerm j_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_14 (ATerm t)
        {
          ATerm u_14 (ATerm t)
          {
            t = sc_usage_0(t);
            {
              t = term_u_20;
              t = exit_0(t);
            }
            return(t);
          }
          t = need_help_1(t, u_14);
          return(t);
        }
        t = _2(t, t_14, _id);
        LocalPopChoice(s_35);
      }
    else
      {
        t = j_35;
        {
          ATerm t_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = sc_announce_0(t);
              {
                t = parse_0(t);
                {
                  t = output_ast_0(t);
                  {
                    t = add_main_0(t);
                    {
                      t = core_0(t);
                      {
                        t = cc1_0(t);
                        {
                          t = cc2_0(t);
                          {
                            ATerm v_14 (ATerm t)
                            {
                              ATerm z_35 = t;
                              if((PushChoice() == 0))
                                {
                                  ATerm w_14 (ATerm t)
                                  {
                                    ATerm x_14 (ATerm t)
                                    {
                                      ATerm f_38 = NULL;
                                      f_38 = t;
                                      e_38 :
                                      if(!(match_cons(f_38, sym_NORM_0)))
                                        _fail(t);
                                      return(t);
                                    }
                                    t = option_defined_1(t, x_14);
                                    return(t);
                                  }
                                  t = _2(t, w_14, _id);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                t = z_35;
                              t = _2(t, _id, remove_intermediates_0);
                              return(t);
                            }
                            t = try_1(t, v_14);
                            {
                              t = term_g_36;
                              {
                                t = printnl_0(t);
                                {
                                  t = term_q_21;
                                  t = exit_0(t);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              LocalPopChoice(w_35);
            }
          else
            {
              t = t_35;
              {
                t = term_l_36;
                {
                  t = printnl_0(t);
                  {
                    t = term_u_20;
                    t = exit_0(t);
                  }
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sc_0(t);
  return(t);
}
