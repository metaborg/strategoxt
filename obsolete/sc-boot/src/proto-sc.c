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
Symbol sym_Anno_2;
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
Symbol sym_Anno_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
ATerm term_g_34;
ATerm term_f_34;
ATerm term_t_33;
ATerm term_y_32;
ATerm term_q_32;
ATerm term_h_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_l_30;
ATerm term_h_30;
ATerm term_f_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_w_29;
ATerm term_j_29;
ATerm term_y_28;
ATerm term_r_28;
ATerm term_f_28;
ATerm term_s_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_s_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_v_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_r_23;
ATerm term_p_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_u_21;
ATerm term_q_21;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_m_16;
ATerm term_e_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_f_15;
ATerm term_c_15;
void init_constant_terms (void)
{
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".ac.abox", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("linking", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/ac2c", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceFun", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("traced functions: ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TraceAllFuns", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/s2c", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/canonicalize", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/optimize2", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/compile-match", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/fusion", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".so2", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/optimize1", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/inline", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/rename-defs", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/extract", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/extract-all", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/frontend", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/pack-stratego", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--silent", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("The Stratego Compiler (version ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: sc [options] -i file\n", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Options:\n", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("  -i spec       Compile specification spec\n", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("  -o target     Name executable target\n", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("  --main s      Name main strategy [default: main]\n", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("  -I dir        Look in dir for imported Stratego modules\n", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("  -CI opt       Pass opt to gcc object compilation phase\n", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("  -CL opt       Pass opt to gcc linking phase\n", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("  --trace-all   Trace all strategies in the specification\n", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("  -t f	      Trace strategy f\n", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("  --ast         Output abstract syntax of specification\n", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("  --norm        Do not remove intermediate files\n", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("  -F	      Produce all definitions pre-processed by frontend\n", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("  -v	      Show version\n", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("  -h|--help     Display this message", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_Ignore_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_CC_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_NORM_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_FRONTEND_0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_FUSION_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_CSYNTAX_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_l_30);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_30);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__2, term_g_31, term_h_31);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym__3, term_g_31, term_h_31, (ATerm) ATempty);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".r", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm rm_files_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm genzip_4 (ATerm, ATerm y_59 (ATerm), ATerm z_59 (ATerm), ATerm a_60 (ATerm), ATerm b_60 (ATerm));
ATerm rzip_1 (ATerm, ATerm m_60 (ATerm));
ATerm remove_intermediates_0 (ATerm);
ATerm _2 (ATerm, ATerm q_35 (ATerm), ATerm r_35 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_61 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_51 (ATerm));
ATerm try_1 (ATerm, ATerm n_68 (ATerm));
ATerm eq_0 (ATerm);
ATerm SplitNext_0 (ATerm);
ATerm SplitExit_0 (ATerm);
ATerm SplitInit_0 (ATerm);
ATerm split_at_space_0 (ATerm);
ATerm CLibDir_1 (ATerm, ATerm o_46 (ATerm));
ATerm Dir_1 (ATerm, ATerm k_46 (ATerm));
ATerm cc2_0 (ATerm);
ATerm gcc_0 (ATerm);
ATerm CInclDir_1 (ATerm, ATerm n_46 (ATerm));
ATerm cc1_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm pp_c_1 (ATerm, ATerm w_69 (ATerm));
ATerm debug_1 (ATerm, ATerm v_52 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm get_traced_funs_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm g_47 (ATerm));
ATerm TraceAllFuns_0 (ATerm);
ATerm s2c_1 (ATerm, ATerm o_69 (ATerm));
ATerm stratego_cf_1 (ATerm, ATerm z_69 (ATerm));
ATerm canonicalize_1 (ATerm, ATerm n_69 (ATerm));
ATerm optimize2_1 (ATerm, ATerm m_69 (ATerm));
ATerm compile_match_1 (ATerm, ATerm l_69 (ATerm));
ATerm fusion_1 (ATerm, ATerm r_69 (ATerm));
ATerm FUSION_0 (ATerm);
ATerm optimize1_1 (ATerm, ATerm k_69 (ATerm));
ATerm inline_1 (ATerm, ATerm j_69 (ATerm));
ATerm rename_defs_1 (ATerm, ATerm i_69 (ATerm));
ATerm stratego_nf_1 (ATerm, ATerm y_69 (ATerm));
ATerm extract_1 (ATerm, ATerm g_69 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm extract_all_1 (ATerm, ATerm h_69 (ATerm));
ATerm FRONTEND_0 (ATerm);
ATerm output_frontend_1 (ATerm, ATerm c_69 (ATerm));
ATerm pipe_2 (ATerm, ATerm x_49 (ATerm), ATerm y_49 (ATerm));
ATerm frontend_1 (ATerm, ATerm f_69 (ATerm));
ATerm list_1 (ATerm, ATerm n_61 (ATerm));
ATerm core_0 (ATerm);
ATerm transform_file_2 (ATerm, ATerm f_50 (ATerm), ATerm g_50 (ATerm));
ATerm AddMain_1 (ATerm, ATerm d_69 (ATerm));
ATerm Main_1 (ATerm, ATerm q_46 (ATerm));
ATerm add_main_0 (ATerm);
ATerm AST_0 (ATerm);
ATerm output_ast_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm apply_to_file_1 (ATerm, ATerm h_50 (ATerm));
ATerm copy_file_3 (ATerm, ATerm i_50 (ATerm), ATerm j_50 (ATerm), ATerm k_50 (ATerm));
ATerm conc_0 (ATerm);
ATerm pref_1 (ATerm, ATerm e_69 (ATerm));
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm pipe_3 (ATerm, ATerm z_49 (ATerm), ATerm a_50 (ATerm), ATerm b_50 (ATerm));
ATerm Output_1 (ATerm, ATerm e_46 (ATerm));
ATerm ExecDir_1 (ATerm, ATerm l_46 (ATerm));
ATerm InclDir_1 (ATerm, ATerm m_46 (ATerm));
ATerm parse_0 (ATerm);
ATerm Verbose_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm DeclVersion_1 (ATerm, ATerm g_46 (ATerm));
ATerm sc_version_0 (ATerm);
ATerm sc_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_52 (ATerm));
ATerm Input_1 (ATerm, ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm assert_1 (ATerm, ATerm e_47 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm i_51 (ATerm), ATerm j_51 (ATerm));
ATerm Option_2 (ATerm, ATerm x_50 (ATerm), ATerm y_50 (ATerm));
ATerm basename_1 (ATerm, ATerm b_54 (ATerm));
ATerm basename_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_61 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_50 (ATerm));
ATerm map_1 (ATerm, ATerm l_61 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_50 (ATerm));
ATerm Program_1 (ATerm, ATerm b_46 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm c_46 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_50 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_50 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_50 (ATerm));
ATerm skip1_1 (ATerm, ATerm p_55 (ATerm));
ATerm filter_option_args_1 (ATerm, ATerm r_55 (ATerm));
ATerm at_tail_1 (ATerm, ATerm x_61 (ATerm));
ATerm skip2_1 (ATerm, ATerm q_55 (ATerm));
ATerm Cons_2 (ATerm, ATerm s_46 (ATerm), ATerm t_46 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm filter_gen_2 (ATerm, ATerm m_55 (ATerm), ATerm n_55 (ATerm, ATerm (ATerm)));
ATerm filter_options_1 (ATerm, ATerm s_55 (ATerm));
ATerm process_sc_options_0 (ATerm);
ATerm sc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm u_1 = NULL;
  u_1 = t;
  t = SSL_exit(not_null(u_1));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL;
  z_1 = t;
  y_1 :
  if(match_cons(z_1, sym__2))
    {
      a_2 = ATgetArgument(z_1, 0);
      b_2 = ATgetArgument(z_1, 1);
      {
        ATerm a_15;
        a_15 = t;
        t = SSL_printnl(not_null(a_2), not_null(b_2));
        t = a_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm g_2 = NULL;
  g_2 = t;
  {
    ATerm b_15;
    b_15 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_15, (ATerm) ATinsert(CheckATermList(not_null(g_2)), term_f_15));
      t = call_0(t);
    }
    t = b_15;
  }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL;
  l_2 = t;
  k_2 :
  if(match_cons(l_2, sym__2))
    {
      m_2 = ATgetArgument(l_2, 0);
      n_2 = ATgetArgument(l_2, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_2)), not_null(m_2));
    }
  else
    _fail(t);
  return(t);
}
ATerm RZip2_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
  u_2 = t;
  s_2 :
  if(match_cons(u_2, sym__2))
    {
      v_2 = ATgetArgument(u_2, 0);
      w_2 = ATgetArgument(u_2, 1);
      t_2 :
      if(((ATgetType(w_2) == AT_LIST) && ((ATermList) w_2 != ATempty)))
        {
          x_2 = ATgetFirst((ATermList) w_2);
          y_2 = (ATerm) ATgetNext((ATermList) w_2);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(v_2), not_null(x_2)), (ATerm) ATmakeAppl(sym__2, not_null(v_2), not_null(y_2)));
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
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  g_3 = t;
  e_3 :
  if(match_cons(g_3, sym__2))
    {
      h_3 = ATgetArgument(g_3, 0);
      i_3 = ATgetArgument(g_3, 1);
      f_3 :
      if(((ATermList) i_3 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm y_59 (ATerm), ATerm z_59 (ATerm), ATerm a_60 (ATerm), ATerm b_60 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_59(t);
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        {
          t = z_59(t);
          {
            t = _2(t, b_60, k_3);
            t = a_60(t);
          }
        }
      }
    return(t);
  }
  t = k_3(t);
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm m_60 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, m_60);
  return(t);
}
ATerm remove_intermediates_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
  n_3 = t;
  m_3 :
  if(match_cons(n_3, sym__2))
    {
      o_3 = ATgetArgument(n_3, 0);
      p_3 = ATgetArgument(n_3, 1);
      {
        ATerm k_15;
        k_15 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_3), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_16), term_y_15), term_x_15), term_w_15), term_v_15), term_u_15), term_t_15), term_s_15), term_r_15), term_o_15), term_n_15), term_m_15), term_l_15));
          {
            t = rzip_1(t, conc_strings_0);
            t = rm_files_0(t);
          }
        }
        t = k_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm q_35 (ATerm), ATerm r_35 (ATerm))
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  w_3 = t;
  v_3 :
  if(match_cons(w_3, sym__2))
    {
      x_3 = ATgetArgument(w_3, 0);
      y_3 = ATgetArgument(w_3, 1);
      {
        ATerm b_4 = NULL;
        t = not_null(x_3);
        {
          ATerm d_4 = NULL;
          t = q_35(t);
          {
            b_4 = t;
            {
              t = not_null(y_3);
              {
                t = r_35(t);
                {
                  d_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_4), not_null(d_4));
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
ATerm fetch_1 (ATerm t, ATerm t_61 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    ATerm f_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_61, _id);
        LocalPopChoice(h_16);
      }
    else
      {
        t = f_16;
        t = Cons_2(t, _id, i_4);
      }
    return(t);
  }
  t = i_4(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_51 (ATerm))
{
  t = fetch_1(t, n_51);
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_68 (ATerm))
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_68(t);
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      {
      }
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
  l_4 = t;
  k_4 :
  if(match_cons(l_4, sym__2))
    {
      m_4 = ATgetArgument(l_4, 0);
      n_4 = ATgetArgument(l_4, 1);
      if(((m_4 != NULL) && (m_4 != n_4)))
        _fail(n_4);
      else
        m_4 = n_4;
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitNext_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
  ATerm l_5 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_5), term_m_16);
    {
      ATerm n_16 = t;
      if((PushChoice() == 0))
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = n_16;
    }
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_4), (ATerm)ATinsert(CheckATermList(not_null(y_4)), not_null(a_5)), not_null(b_5));
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    ATerm j_5 = NULL;
    ATerm k_5 = NULL;
    t = not_null(y_4);
    {
      t = reverse_0(t);
      {
        t = implode_string_0(t);
        {
          k_5 = t;
          if(((j_5 != NULL) && (j_5 != k_5)))
            _fail(k_5);
          else
            j_5 = k_5;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(CheckATermList(not_null(x_4)), not_null(j_5)), (ATerm)ATempty, not_null(b_5));
    return(t);
  }
  w_4 = t;
  t_4 :
  if(match_cons(w_4, sym__3))
    {
      x_4 = ATgetArgument(w_4, 0);
      y_4 = ATgetArgument(w_4, 1);
      z_4 = ATgetArgument(w_4, 2);
      u_4 :
      if(((ATgetType(z_4) == AT_LIST) && ((ATermList) z_4 != ATempty)))
        {
          a_5 = ATgetFirst((ATermList) z_4);
          b_5 = (ATerm) ATgetNext((ATermList) z_4);
          v_4 :
          if(match_int(a_5, 32))
            {
              ATerm o_16 = t;
              int p_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_5(t);
                  LocalPopChoice(p_16);
                }
              else
                {
                  t = o_16;
                  t = m_5(t);
                }
            }
          else
            t = l_5(t);
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
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
  s_5 = t;
  q_5 :
  if(match_cons(s_5, sym__3))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      v_5 = ATgetArgument(s_5, 2);
      r_5 :
      if(((ATermList) v_5 == ATempty))
        {
          {
            ATerm y_5 = NULL;
            ATerm z_5 = NULL;
            t = not_null(u_5);
            {
              t = reverse_0(t);
              {
                t = implode_string_0(t);
                {
                  z_5 = t;
                  if(((y_5 != NULL) && (y_5 != z_5)))
                    _fail(z_5);
                  else
                    y_5 = z_5;
                }
              }
            }
            {
              t = (ATerm) ATinsert(CheckATermList(not_null(t_5)), not_null(y_5));
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
  ATerm d_6 = NULL;
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(d_6));
  return(t);
}
ATerm split_at_space_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = SplitInit_0(t);
    {
      ATerm g_6 (ATerm t)
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SplitExit_0(t);
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            {
              t = SplitNext_0(t);
              t = g_6(t);
            }
          }
        return(t);
      }
      t = g_6(t);
    }
  }
  return(t);
}
ATerm CLibDir_1 (ATerm t, ATerm o_46 (ATerm))
{
  ATerm k_6 = NULL,l_6 = NULL;
  k_6 = t;
  j_6 :
  if(match_cons(k_6, sym_CLibDir_1))
    {
      l_6 = ATgetArgument(k_6, 0);
      {
        ATerm n_6 = NULL;
        t = not_null(l_6);
        {
          t = o_46(t);
          {
            n_6 = t;
            t = (ATerm) ATmakeAppl(sym_CLibDir_1, not_null(n_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Dir_1 (ATerm t, ATerm k_46 (ATerm))
{
  ATerm u_6 = NULL,v_6 = NULL;
  u_6 = t;
  t_6 :
  if(match_cons(u_6, sym_Dir_1))
    {
      v_6 = ATgetArgument(u_6, 0);
      {
        ATerm x_6 = NULL;
        t = not_null(v_6);
        {
          t = k_46(t);
          {
            x_6 = t;
            t = (ATerm) ATmakeAppl(sym_Dir_1, not_null(x_6));
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
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL,n_7 = NULL,o_7 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATempty, term_u_16));
    t = printnl_0(t);
  }
  t = s_16;
  {
    ATerm a_0 (ATerm t)
    {
      ATerm d_0 (ATerm t)
      {
        ATerm n_0 (ATerm t)
        {
          ATerm v_16 = t;
          int w_16 = stack_ptr;
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
              t = Dir_1(t, o_0);
              LocalPopChoice(w_16);
            }
          else
            {
              t = v_16;
              {
                ATerm x_16 = t;
                int y_16 = stack_ptr;
                if((PushChoice() == 0))
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
                    t = CLibDir_1(t, p_0);
                    LocalPopChoice(y_16);
                  }
                else
                  {
                    t = x_16;
                    {
                      ATerm q_0 (ATerm t)
                      {
                        ATerm m_7 = NULL;
                        m_7 = t;
                        if(((j_7 != NULL) && (j_7 != m_7)))
                          _fail(m_7);
                        else
                          j_7 = m_7;
                        return(t);
                      }
                      t = Output_1(t, q_0);
                    }
                  }
              }
            }
          return(t);
        }
        t = try_1(t, n_0);
        return(t);
      }
      t = list_1(t, d_0);
      return(t);
    }
    t = _2(t, a_0, _id);
    {
      ATerm r_0 (ATerm t)
      {
        ATerm z_16;
        z_16 = t;
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
        t = z_16;
        {
          ATerm s_0 (ATerm t)
          {
            ATerm u_0 (ATerm t)
            {
              t = not_null(j_7);
              return(t);
            }
            t = try_1(t, u_0);
            return(t);
          }
          ATerm t_0 (ATerm t)
          {
            t = term_a_17;
            return(t);
          }
          t = _2(t, s_0, t_0);
          {
            ATerm b_17;
            b_17 = t;
            {
              ATerm q_7 = NULL;
              t = conc_strings_0(t);
              {
                q_7 = t;
                if(((o_7 != NULL) && (o_7 != q_7)))
                  _fail(q_7);
                else
                  o_7 = q_7;
              }
            }
            t = b_17;
            {
              ATerm c_17;
              c_17 = t;
              {
                ATerm r_7 = NULL;
                ATerm s_7 = NULL;
                t = not_null(i_7);
                {
                  t = map_1(t, split_at_space_0);
                  {
                    t = concat_0(t);
                    {
                      s_7 = t;
                      if(((r_7 != NULL) && (r_7 != s_7)))
                        _fail(s_7);
                      else
                        r_7 = s_7;
                    }
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(r_7)), not_null(o_7)), term_d_17), not_null(n_7));
                  t = gcc_0(t);
                }
              }
              t = c_17;
            }
          }
        }
        return(t);
      }
      t = _2(t, _id, r_0);
    }
  }
  return(t);
}
ATerm gcc_0 (ATerm t)
{
  ATerm a_8 = NULL;
  a_8 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_17, not_null(a_8));
    t = call_0(t);
  }
  return(t);
}
ATerm CInclDir_1 (ATerm t, ATerm n_46 (ATerm))
{
  ATerm g_8 = NULL,h_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_CInclDir_1))
    {
      h_8 = ATgetArgument(g_8, 0);
      {
        ATerm j_8 = NULL;
        t = not_null(h_8);
        {
          t = n_46(t);
          {
            j_8 = t;
            t = (ATerm) ATmakeAppl(sym_CInclDir_1, not_null(j_8));
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
  ATerm q_8 = NULL,s_8 = NULL,t_8 = NULL;
  ATerm f_17;
  f_17 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATempty, term_g_17));
    t = printnl_0(t);
  }
  t = f_17;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm w_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          ATerm y_0 (ATerm t)
          {
            ATerm r_8 = NULL;
            r_8 = t;
            if(((q_8 != NULL) && (q_8 != r_8)))
              _fail(r_8);
            else
              q_8 = r_8;
            return(t);
          }
          t = CInclDir_1(t, y_0);
          return(t);
        }
        t = try_1(t, x_0);
        return(t);
      }
      t = list_1(t, w_0);
      return(t);
    }
    t = _2(t, v_0, _id);
    {
      ATerm z_0 (ATerm t)
      {
        ATerm h_17;
        h_17 = t;
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
        t = h_17;
        {
          ATerm a_1 (ATerm t)
          {
            t = term_e_16;
            return(t);
          }
          t = _2(t, _id, a_1);
          {
            ATerm i_17;
            i_17 = t;
            {
              ATerm v_8 = NULL;
              t = conc_strings_0(t);
              {
                v_8 = t;
                if(((t_8 != NULL) && (t_8 != v_8)))
                  _fail(v_8);
                else
                  t_8 = v_8;
              }
            }
            t = i_17;
            {
              ATerm n_17;
              n_17 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_8)), term_d_17), not_null(s_8)), term_o_17));
                {
                  t = conc_0(t);
                  t = gcc_0(t);
                }
              }
              t = n_17;
            }
          }
        }
        return(t);
      }
      t = _2(t, _id, z_0);
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm pp_c_1 (ATerm t, ATerm w_69 (ATerm))
{
  ATerm b_9 = NULL;
  ATerm p_17;
  p_17 = t;
  t = dtime_0(t);
  t = p_17;
  {
    ATerm b_1 (ATerm t)
    {
      t = term_q_17;
      t = pref_1(t, w_69);
      return(t);
    }
    ATerm c_1 (ATerm t)
    {
      t = term_r_17;
      return(t);
    }
    t = pipe_2(t, b_1, c_1);
    {
      ATerm s_17;
      s_17 = t;
      {
        ATerm c_9 = NULL;
        ATerm d_9 = NULL;
        t = dtime_0(t);
        {
          c_9 = t;
          {
            if(((b_9 != NULL) && (b_9 != c_9)))
              _fail(c_9);
            else
              b_9 = c_9;
            {
              ATerm e_9 = NULL;
              t = term_q_17;
              {
                t = pref_1(t, w_69);
                {
                  e_9 = t;
                  if(((d_9 != NULL) && (d_9 != e_9)))
                    _fail(e_9);
                  else
                    d_9 = e_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_17), not_null(b_9)), term_t_17), not_null(d_9)));
                t = printnl_0(t);
              }
            }
          }
        }
      }
      t = s_17;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_52 (ATerm))
{
  ATerm z_17;
  z_17 = t;
  {
    ATerm j_9 = NULL,l_9 = NULL;
    ATerm a_18;
    a_18 = t;
    {
      ATerm k_9 = NULL;
      t = v_52(t);
      {
        k_9 = t;
        if(((j_9 != NULL) && (j_9 != k_9)))
          _fail(k_9);
        else
          j_9 = k_9;
      }
    }
    t = a_18;
    {
      ATerm m_9 = NULL;
      m_9 = t;
      if(((l_9 != NULL) && (l_9 != m_9)))
        _fail(m_9);
      else
        l_9 = m_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_9)), not_null(j_9)));
        t = printnl_0(t);
      }
    }
  }
  t = z_17;
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  t = SSL_table_keys(not_null(q_9));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm w_9 = NULL;
  w_9 = t;
  {
    t = table_keys_0(t);
    {
      ATerm d_1 (ATerm t)
      {
        ATerm y_9 = NULL;
        ATerm a_10 = NULL;
        y_9 = t;
        {
          ATerm b_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(y_9));
          {
            t = table_get_0(t);
            {
              b_10 = t;
              if(((a_10 != NULL) && (a_10 != b_10)))
                _fail(b_10);
              else
                a_10 = b_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_9), not_null(a_10));
        }
        return(t);
      }
      t = map_1(t, d_1);
    }
  }
  return(t);
}
ATerm get_traced_funs_0 (ATerm t)
{
  t = term_b_18;
  {
    t = table_getlist_0(t);
    {
      ATerm e_1 (ATerm t)
      {
        ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
        h_10 = t;
        g_10 :
        if(match_cons(h_10, sym__2))
          {
            i_10 = ATgetArgument(h_10, 0);
            j_10 = ATgetArgument(h_10, 1);
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_10)), term_c_18);
          }
        else
          _fail(t);
        return(t);
      }
      t = map_1(t, e_1);
      {
        t = concat_0(t);
        {
          ATerm e_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(h_18);
            }
          else
            {
              t = e_18;
              {
                ATerm f_1 (ATerm t)
                {
                  t = term_i_18;
                  return(t);
                }
                t = debug_1(t, f_1);
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
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(((ATgetType(o_10) == AT_LIST) && ((ATermList) o_10 != ATempty)))
    {
      p_10 = ATgetFirst((ATermList) o_10);
      q_10 = (ATerm) ATgetNext((ATermList) o_10);
      t = not_null(p_10);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  w_10 = t;
  v_10 :
  if(match_cons(w_10, sym__2))
    {
      x_10 = ATgetArgument(w_10, 0);
      y_10 = ATgetArgument(w_10, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), not_null(y_10));
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
ATerm rewrite_1 (ATerm t, ATerm g_47 (ATerm))
{
  ATerm e_11 = NULL;
  ATerm g_11 = NULL;
  e_11 = t;
  {
    ATerm h_11 = NULL;
    t = term_j_18;
    {
      t = g_47(t);
      {
        h_11 = t;
        if(((g_11 != NULL) && (g_11 != h_11)))
          _fail(h_11);
        else
          g_11 = h_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), not_null(e_11));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm TraceAllFuns_0 (ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym__0))
    {
      ATerm p_11 = NULL,q_11 = NULL;
      t = term_o_18;
      {
        ATerm g_1 (ATerm t)
        {
          t = term_p_18;
          return(t);
        }
        t = rewrite_1(t, g_1);
        {
          p_11 = t;
          l_11 :
          if(match_cons(p_11, sym_Defined_1))
            {
              q_11 = ATgetArgument(p_11, 0);
              m_11 :
              if(!(match_string(q_11, "b_0")))
                _fail(t);
            }
          else
            _fail(t);
        }
      }
      t = term_j_18;
    }
  else
    _fail(t);
  return(t);
}
ATerm s2c_1 (ATerm t, ATerm o_69 (ATerm))
{
  ATerm h_1 (ATerm t)
  {
    t = term_q_18;
    t = pref_1(t, o_69);
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_x_15;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    t = term_j_18;
    {
      ATerm r_18 = t;
      int s_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = TraceAllFuns_0(t);
          t = (ATerm) ATinsert(ATempty, term_t_18);
          LocalPopChoice(s_18);
        }
      else
        {
          t = r_18;
          t = get_traced_funs_0(t);
        }
    }
    return(t);
  }
  t = pipe_3(t, h_1, i_1, j_1);
  return(t);
}
ATerm stratego_cf_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    t = term_u_18;
    t = pref_1(t, z_69);
    return(t);
  }
  t = pipe_2(t, k_1, _id);
  return(t);
}
ATerm canonicalize_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    t = term_v_18;
    t = pref_1(t, n_69);
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = term_w_15;
    return(t);
  }
  t = pipe_2(t, l_1, m_1);
  return(t);
}
ATerm optimize2_1 (ATerm t, ATerm m_69 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    t = term_w_18;
    t = pref_1(t, m_69);
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_v_15;
    return(t);
  }
  t = pipe_2(t, n_1, o_1);
  return(t);
}
ATerm compile_match_1 (ATerm t, ATerm l_69 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    t = term_x_18;
    t = pref_1(t, l_69);
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    t = term_u_15;
    return(t);
  }
  t = pipe_2(t, p_1, q_1);
  return(t);
}
ATerm fusion_1 (ATerm t, ATerm r_69 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    t = term_y_18;
    t = pref_1(t, r_69);
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_z_18;
    return(t);
  }
  t = pipe_2(t, r_1, s_1);
  return(t);
}
ATerm FUSION_0 (ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  s_11 :
  if(!(match_cons(t_11, sym_FUSION_0)))
    _fail(t);
  return(t);
}
ATerm optimize1_1 (ATerm t, ATerm k_69 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    t = term_i_19;
    t = pref_1(t, k_69);
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    t = term_t_15;
    return(t);
  }
  t = pipe_2(t, t_1, v_1);
  return(t);
}
ATerm inline_1 (ATerm t, ATerm j_69 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    t = term_j_19;
    t = pref_1(t, j_69);
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_s_15;
    return(t);
  }
  t = pipe_2(t, w_1, x_1);
  return(t);
}
ATerm rename_defs_1 (ATerm t, ATerm i_69 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    t = term_k_19;
    t = pref_1(t, i_69);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    t = term_r_15;
    return(t);
  }
  t = pipe_2(t, c_2, d_2);
  return(t);
}
ATerm stratego_nf_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    t = term_l_19;
    t = pref_1(t, y_69);
    return(t);
  }
  t = pipe_2(t, e_2, _id);
  return(t);
}
ATerm extract_1 (ATerm t, ATerm g_69 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    t = term_m_19;
    t = pref_1(t, g_69);
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_o_15;
    return(t);
  }
  t = pipe_2(t, f_2, h_2);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm n_19;
  n_19 = t;
  {
    ATerm a_12 = NULL;
    ATerm b_12 = NULL;
    b_12 = t;
    if(((a_12 != NULL) && (a_12 != b_12)))
      _fail(b_12);
    else
      a_12 = b_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_16, not_null(a_12));
      t = printnl_0(t);
    }
  }
  t = n_19;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm r_19;
  r_19 = t;
  {
    t = error_0(t);
    {
      t = term_t_19;
      t = exit_0(t);
    }
  }
  t = r_19;
  return(t);
}
ATerm extract_all_1 (ATerm t, ATerm h_69 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    t = term_u_19;
    t = pref_1(t, h_69);
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_v_19;
    return(t);
  }
  t = pipe_2(t, i_2, j_2);
  return(t);
}
ATerm FRONTEND_0 (ATerm t)
{
  ATerm f_12 = NULL;
  f_12 = t;
  e_12 :
  if(!(match_cons(f_12, sym_FRONTEND_0)))
    _fail(t);
  return(t);
}
ATerm output_frontend_1 (ATerm t, ATerm c_69 (ATerm))
{
  ATerm i_12 = NULL,j_12 = NULL;
  ATerm o_2 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      t = option_defined_1(t, FRONTEND_0);
      return(t);
    }
    t = _2(t, p_2, _id);
    {
      ATerm q_2 (ATerm t)
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = extract_all_1(t, c_69);
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            {
              t = (ATerm) ATinsert(ATempty, term_b_20);
              t = fatal_error_0(t);
            }
          }
        return(t);
      }
      t = _2(t, _id, q_2);
      {
        ATerm r_2 (ATerm t)
        {
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
          ATerm a_3 (ATerm t)
          {
            ATerm l_12 = NULL;
            l_12 = t;
            if(((j_12 != NULL) && (j_12 != l_12)))
              _fail(l_12);
            else
              j_12 = l_12;
            return(t);
          }
          t = _2(t, z_2, a_3);
          return(t);
        }
        t = _2(t, _id, r_2);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_12)), not_null(i_12)), term_d_20));
          {
            t = printnl_0(t);
            {
              t = term_e_20;
              t = exit_0(t);
            }
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, o_2);
  return(t);
}
ATerm pipe_2 (ATerm t, ATerm x_49 (ATerm), ATerm y_49 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = pipe_3(t, x_49, y_49, b_3);
  return(t);
}
ATerm frontend_1 (ATerm t, ATerm f_69 (ATerm))
{
  ATerm c_3 (ATerm t)
  {
    t = term_f_20;
    t = pref_1(t, f_69);
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_n_15;
    return(t);
  }
  t = pipe_2(t, c_3, d_3);
  return(t);
}
ATerm list_1 (ATerm t, ATerm n_61 (ATerm))
{
  ATerm o_12 (ATerm t)
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = Cons_2(t, n_61, o_12);
      }
    return(t);
  }
  t = o_12(t);
  return(t);
}
ATerm core_0 (ATerm t)
{
  ATerm q_12 = NULL;
  ATerm j_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        ATerm r_3 (ATerm t)
        {
          ATerm r_12 = NULL;
          r_12 = t;
          if(((q_12 != NULL) && (q_12 != r_12)))
            _fail(r_12);
          else
            q_12 = r_12;
          return(t);
        }
        t = ExecDir_1(t, r_3);
        return(t);
      }
      t = try_1(t, q_3);
      return(t);
    }
    t = list_1(t, l_3);
    return(t);
  }
  t = _2(t, j_3, _id);
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(q_12);
        return(t);
      }
      t = frontend_1(t, t_3);
      return(t);
    }
    t = _2(t, _id, s_3);
    {
      ATerm u_3 (ATerm t)
      {
        t = not_null(q_12);
        return(t);
      }
      t = output_frontend_1(t, u_3);
      {
        ATerm z_3 (ATerm t)
        {
          ATerm a_4 (ATerm t)
          {
            t = not_null(q_12);
            return(t);
          }
          t = extract_1(t, a_4);
          {
            ATerm c_4 (ATerm t)
            {
              t = not_null(q_12);
              return(t);
            }
            t = stratego_nf_1(t, c_4);
            {
              ATerm e_4 (ATerm t)
              {
                t = not_null(q_12);
                return(t);
              }
              t = rename_defs_1(t, e_4);
              {
                ATerm f_4 (ATerm t)
                {
                  t = not_null(q_12);
                  return(t);
                }
                t = inline_1(t, f_4);
                {
                  ATerm g_4 (ATerm t)
                  {
                    t = not_null(q_12);
                    return(t);
                  }
                  t = optimize1_1(t, g_4);
                }
              }
            }
          }
          return(t);
        }
        t = _2(t, _id, z_3);
        {
          ATerm h_4 (ATerm t)
          {
            ATerm j_4 (ATerm t)
            {
              t = option_defined_1(t, FUSION_0);
              return(t);
            }
            ATerm o_4 (ATerm t)
            {
              ATerm p_4 (ATerm t)
              {
                t = not_null(q_12);
                return(t);
              }
              t = fusion_1(t, p_4);
              return(t);
            }
            t = _2(t, j_4, o_4);
            return(t);
          }
          t = try_1(t, h_4);
          {
            ATerm q_4 (ATerm t)
            {
              ATerm r_4 (ATerm t)
              {
                t = not_null(q_12);
                return(t);
              }
              t = compile_match_1(t, r_4);
              {
                ATerm s_4 (ATerm t)
                {
                  t = not_null(q_12);
                  return(t);
                }
                t = optimize2_1(t, s_4);
              }
              return(t);
            }
            t = _2(t, _id, q_4);
            {
              ATerm c_5 (ATerm t)
              {
                ATerm d_5 (ATerm t)
                {
                  t = not_null(q_12);
                  return(t);
                }
                t = canonicalize_1(t, d_5);
                {
                  ATerm e_5 (ATerm t)
                  {
                    t = not_null(q_12);
                    return(t);
                  }
                  t = stratego_cf_1(t, e_5);
                  {
                    ATerm f_5 (ATerm t)
                    {
                      t = not_null(q_12);
                      return(t);
                    }
                    t = s2c_1(t, f_5);
                    {
                      ATerm g_5 (ATerm t)
                      {
                        t = not_null(q_12);
                        return(t);
                      }
                      t = pp_c_1(t, g_5);
                    }
                  }
                }
                return(t);
              }
              t = _2(t, _id, c_5);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm transform_file_2 (ATerm t, ATerm f_50 (ATerm), ATerm g_50 (ATerm))
{
  ATerm v_12 = NULL,x_12 = NULL;
  ATerm l_20;
  l_20 = t;
  {
    ATerm w_12 = NULL;
    t = conc_strings_0(t);
    {
      w_12 = t;
      if(((v_12 != NULL) && (v_12 != w_12)))
        _fail(w_12);
      else
        v_12 = w_12;
    }
  }
  t = l_20;
  {
    t = _2(t, _id, g_50);
    {
      ATerm n_20;
      n_20 = t;
      {
        ATerm y_12 = NULL;
        t = conc_strings_0(t);
        {
          y_12 = t;
          if(((x_12 != NULL) && (x_12 != y_12)))
            _fail(y_12);
          else
            x_12 = y_12;
        }
      }
      t = n_20;
      {
        ATerm o_20;
        o_20 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), not_null(x_12));
          t = apply_to_file_1(t, f_50);
        }
        t = o_20;
      }
    }
  }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm d_69 (ATerm))
{
  ATerm e_13 = NULL,f_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym_Specification_1))
    {
      f_13 = ATgetArgument(e_13, 0);
      {
        ATerm h_13 = NULL;
        ATerm i_13 = NULL;
        t = term_j_18;
        {
          t = d_69(t);
          {
            i_13 = t;
            if(((h_13 != NULL) && (h_13 != i_13)))
              _fail(i_13);
            else
              h_13 = i_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(f_13)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_p_20, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_13)), (ATerm) ATempty))))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Main_1 (ATerm t, ATerm q_46 (ATerm))
{
  ATerm o_13 = NULL,p_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym_Main_1))
    {
      p_13 = ATgetArgument(o_13, 0);
      {
        ATerm r_13 = NULL;
        t = not_null(p_13);
        {
          t = q_46(t);
          {
            r_13 = t;
            t = (ATerm) ATmakeAppl(sym_Main_1, not_null(r_13));
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
  ATerm w_13 = NULL;
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_5 (ATerm t)
      {
        ATerm i_5 (ATerm t)
        {
          ATerm n_5 (ATerm t)
          {
            ATerm x_13 = NULL;
            x_13 = t;
            if(((w_13 != NULL) && (w_13 != x_13)))
              _fail(x_13);
            else
              w_13 = x_13;
            return(t);
          }
          t = Main_1(t, n_5);
          return(t);
        }
        t = option_defined_1(t, i_5);
        return(t);
      }
      t = _2(t, h_5, _id);
      {
        ATerm o_5 (ATerm t)
        {
          ATerm p_5 (ATerm t)
          {
            ATerm x_5 (ATerm t)
            {
              t = not_null(w_13);
              return(t);
            }
            t = AddMain_1(t, x_5);
            return(t);
          }
          ATerm w_5 (ATerm t)
          {
            t = term_m_15;
            return(t);
          }
          t = transform_file_2(t, p_5, w_5);
          return(t);
        }
        t = _2(t, _id, o_5);
      }
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm a_6 (ATerm t)
        {
          ATerm b_6 (ATerm t)
          {
            t = term_m_15;
            return(t);
          }
          t = transform_file_2(t, _id, b_6);
          return(t);
        }
        t = _2(t, _id, a_6);
      }
    }
  return(t);
}
ATerm AST_0 (ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  z_13 :
  if(!(match_cons(a_14, sym_AST_0)))
    _fail(t);
  return(t);
}
ATerm output_ast_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL;
  ATerm c_6 (ATerm t)
  {
    ATerm e_6 (ATerm t)
    {
      t = option_defined_1(t, AST_0);
      return(t);
    }
    ATerm f_6 (ATerm t)
    {
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
      ATerm i_6 (ATerm t)
      {
        ATerm g_14 = NULL;
        g_14 = t;
        if(((e_14 != NULL) && (e_14 != g_14)))
          _fail(g_14);
        else
          e_14 = g_14;
        return(t);
      }
      t = _2(t, h_6, i_6);
      return(t);
    }
    t = _2(t, e_6, f_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_14)), not_null(d_14)), term_s_20));
      {
        t = printnl_0(t);
        {
          t = term_e_20;
          t = exit_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, c_6);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym__2))
    {
      m_14 = ATgetArgument(l_14, 0);
      n_14 = ATgetArgument(l_14, 1);
      t = SSL_WriteToBinaryFile(not_null(m_14), not_null(n_14));
    }
  else
    _fail(t);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm s_14 = NULL;
  s_14 = t;
  t = SSL_ReadFromFile(not_null(s_14));
  return(t);
}
ATerm apply_to_file_1 (ATerm t, ATerm h_50 (ATerm))
{
  ATerm e_15 = NULL,i_15 = NULL,j_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym__2))
    {
      i_15 = ATgetArgument(e_15, 0);
      j_15 = ATgetArgument(e_15, 1);
      {
        ATerm p_15 = NULL;
        ATerm t_20;
        t_20 = t;
        {
          ATerm q_15 = NULL;
          t = not_null(i_15);
          {
            t = ReadFromFile_0(t);
            {
              t = h_50(t);
              {
                q_15 = t;
                if(((p_15 != NULL) && (p_15 != q_15)))
                  _fail(q_15);
                else
                  p_15 = q_15;
              }
            }
          }
        }
        t = t_20;
        {
          ATerm v_20;
          v_20 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), not_null(p_15));
            t = WriteToBinaryFile_0(t);
          }
          t = v_20;
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm copy_file_3 (ATerm t, ATerm i_50 (ATerm), ATerm j_50 (ATerm), ATerm k_50 (ATerm))
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
  b_16 = t;
  a_16 :
  if(match_cons(b_16, sym__2))
    {
      c_16 = ATgetArgument(b_16, 0);
      d_16 = ATgetArgument(b_16, 1);
      {
        ATerm g_16 = NULL,k_16 = NULL,l_16 = NULL;
        t = _2(t, j_50, k_50);
        {
          g_16 = t;
          z_15 :
          if(match_cons(g_16, sym__2))
            {
              k_16 = ATgetArgument(g_16, 0);
              l_16 = ATgetArgument(g_16, 1);
              {
                ATerm i_21;
                i_21 = t;
                {
                  ATerm j_17 = NULL,l_17 = NULL;
                  ATerm j_21;
                  j_21 = t;
                  {
                    ATerm k_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_16), not_null(d_16));
                    {
                      t = conc_strings_0(t);
                      {
                        k_17 = t;
                        if(((j_17 != NULL) && (j_17 != k_17)))
                          _fail(k_17);
                        else
                          j_17 = k_17;
                      }
                    }
                  }
                  t = j_21;
                  {
                    ATerm m_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_16), not_null(l_16));
                    {
                      t = conc_strings_0(t);
                      {
                        m_17 = t;
                        if(((l_17 != NULL) && (l_17 != m_17)))
                          _fail(m_17);
                        else
                          l_17 = m_17;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(j_17), not_null(l_17));
                      t = apply_to_file_1(t, i_50);
                    }
                  }
                }
                t = i_21;
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
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
  v_17 = t;
  u_17 :
  if(match_cons(v_17, sym__2))
    {
      w_17 = ATgetArgument(v_17, 0);
      x_17 = ATgetArgument(v_17, 1);
      {
        t = not_null(w_17);
        {
          ATerm m_6 (ATerm t)
          {
            t = not_null(x_17);
            return(t);
          }
          t = at_end_1(t, m_6);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm pref_1 (ATerm t, ATerm e_69 (ATerm))
{
  ATerm d_18 = NULL;
  ATerm f_18 = NULL;
  d_18 = t;
  {
    ATerm g_18 = NULL;
    t = term_j_18;
    {
      t = e_69(t);
      {
        g_18 = t;
        if(((f_18 != NULL) && (f_18 != g_18)))
          _fail(g_18);
        else
          f_18 = g_18;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(d_18));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      t = SSL_call(not_null(m_18), not_null(n_18));
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
ATerm pipe_3 (ATerm t, ATerm z_49 (ATerm), ATerm a_50 (ATerm), ATerm b_50 (ATerm))
{
  ATerm a_19 = NULL,c_19 = NULL;
  ATerm k_21;
  k_21 = t;
  {
    ATerm b_19 = NULL;
    t = conc_strings_0(t);
    {
      b_19 = t;
      if(((a_19 != NULL) && (a_19 != b_19)))
        _fail(b_19);
      else
        a_19 = b_19;
    }
  }
  t = k_21;
  {
    t = _2(t, _id, a_50);
    {
      ATerm l_21;
      l_21 = t;
      {
        ATerm d_19 = NULL;
        t = conc_strings_0(t);
        {
          d_19 = t;
          if(((c_19 != NULL) && (c_19 != d_19)))
            _fail(d_19);
          else
            c_19 = d_19;
        }
      }
      t = l_21;
      {
        ATerm m_21;
        m_21 = t;
        {
          ATerm e_19 = NULL,g_19 = NULL;
          ATerm p_21;
          p_21 = t;
          {
            ATerm f_19 = NULL;
            t = term_j_18;
            {
              t = z_49(t);
              {
                f_19 = t;
                if(((e_19 != NULL) && (e_19 != f_19)))
                  _fail(f_19);
                else
                  e_19 = f_19;
              }
            }
          }
          t = p_21;
          {
            ATerm h_19 = NULL;
            t = term_j_18;
            {
              t = b_50(t);
              {
                h_19 = t;
                if(((g_19 != NULL) && (g_19 != h_19)))
                  _fail(h_19);
                else
                  g_19 = h_19;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_19), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_19)), not_null(c_19)), term_d_17), not_null(a_19)), term_q_21));
              t = call_0(t);
            }
          }
        }
        t = m_21;
      }
    }
  }
  return(t);
}
ATerm Output_1 (ATerm t, ATerm e_46 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL;
  p_19 = t;
  o_19 :
  if(match_cons(p_19, sym_Output_1))
    {
      q_19 = ATgetArgument(p_19, 0);
      {
        ATerm s_19 = NULL;
        t = not_null(q_19);
        {
          t = e_46(t);
          {
            s_19 = t;
            t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_19));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ExecDir_1 (ATerm t, ATerm l_46 (ATerm))
{
  ATerm z_19 = NULL,a_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym_ExecDir_1))
    {
      a_20 = ATgetArgument(z_19, 0);
      {
        ATerm c_20 = NULL;
        t = not_null(a_20);
        {
          t = l_46(t);
          {
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym_ExecDir_1, not_null(c_20));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm InclDir_1 (ATerm t, ATerm m_46 (ATerm))
{
  ATerm j_20 = NULL,k_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym_InclDir_1))
    {
      k_20 = ATgetArgument(j_20, 0);
      {
        ATerm m_20 = NULL;
        t = not_null(k_20);
        {
          t = m_46(t);
          {
            m_20 = t;
            t = (ATerm) ATmakeAppl(sym_InclDir_1, not_null(m_20));
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
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  ATerm o_6 (ATerm t)
  {
    ATerm q_6 (ATerm t)
    {
      ATerm r_6 (ATerm t)
      {
        ATerm a_21 = NULL;
        a_21 = t;
        if(((y_20 != NULL) && (y_20 != a_21)))
          _fail(a_21);
        else
          y_20 = a_21;
        return(t);
      }
      t = InclDir_1(t, r_6);
      return(t);
    }
    t = option_defined_1(t, q_6);
    {
      ATerm s_6 (ATerm t)
      {
        ATerm w_6 (ATerm t)
        {
          ATerm b_21 = NULL;
          b_21 = t;
          if(((w_20 != NULL) && (w_20 != b_21)))
            _fail(b_21);
          else
            w_20 = b_21;
          return(t);
        }
        t = ExecDir_1(t, w_6);
        return(t);
      }
      t = option_defined_1(t, s_6);
      {
        ATerm y_6 (ATerm t)
        {
          ATerm z_6 (ATerm t)
          {
            ATerm a_7 (ATerm t)
            {
              ATerm c_21 = NULL;
              c_21 = t;
              if(((z_20 != NULL) && (z_20 != c_21)))
                _fail(c_21);
              else
                z_20 = c_21;
              return(t);
            }
            t = Output_1(t, a_7);
            return(t);
          }
          t = option_defined_1(t, z_6);
          return(t);
        }
        t = try_1(t, y_6);
      }
    }
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
    d_21 = t;
    u_20 :
    if(match_cons(d_21, sym__2))
      {
        e_21 = ATgetArgument(d_21, 0);
        f_21 = ATgetArgument(d_21, 1);
        if(((x_20 != NULL) && (x_20 != e_21)))
          _fail(e_21);
        else
          x_20 = e_21;
      }
    else
      _fail(t);
    return(t);
  }
  t = _2(t, o_6, p_6);
  {
    ATerm b_7 (ATerm t)
    {
      ATerm c_7 (ATerm t)
      {
        t = term_u_21;
        {
          ATerm f_7 (ATerm t)
          {
            t = not_null(w_20);
            return(t);
          }
          t = pref_1(t, f_7);
        }
        return(t);
      }
      ATerm d_7 (ATerm t)
      {
        t = term_l_15;
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        ATerm g_21 = NULL;
        ATerm h_21 = NULL;
        t = term_j_18;
        {
          ATerm w_21 = t;
          int x_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_20)), term_y_21);
              LocalPopChoice(x_21);
            }
          else
            {
              t = w_21;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_20)), term_y_21);
            }
          {
            h_21 = t;
            if(((g_21 != NULL) && (g_21 != h_21)))
              _fail(h_21);
            else
              g_21 = h_21;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_21), (ATerm) ATinsert(CheckATermList(not_null(y_20)), term_z_21));
          t = conc_0(t);
        }
        return(t);
      }
      t = pipe_3(t, c_7, d_7, e_7);
      return(t);
    }
    t = _2(t, _id, b_7);
    {
      ATerm g_7 (ATerm t)
      {
        ATerm t_7 (ATerm t)
        {
          ATerm u_7 (ATerm t)
          {
            t = not_null(z_20);
            return(t);
          }
          ATerm v_7 (ATerm t)
          {
            t = term_l_15;
            return(t);
          }
          t = copy_file_3(t, _id, u_7, v_7);
          return(t);
        }
        t = _2(t, _id, t_7);
        return(t);
      }
      t = try_1(t, g_7);
    }
  }
  return(t);
}
ATerm Verbose_0 (ATerm t)
{
  ATerm o_21 = NULL;
  o_21 = t;
  n_21 :
  if(!(match_cons(o_21, sym_Verbose_0)))
    _fail(t);
  return(t);
}
ATerm sc_announce_0 (ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm x_7 (ATerm t)
    {
      t = option_defined_1(t, Verbose_0);
      return(t);
    }
    t = _2(t, x_7, _id);
    t = _2(t, sc_version_0, _id);
    return(t);
  }
  t = try_1(t, w_7);
  return(t);
}
ATerm DeclVersion_1 (ATerm t, ATerm g_46 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_cons(s_21, sym_DeclVersion_1))
    {
      t_21 = ATgetArgument(s_21, 0);
      {
        ATerm v_21 = NULL;
        t = not_null(t_21);
        {
          t = g_46(t);
          {
            v_21 = t;
            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(v_21));
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
  ATerm d_22 = NULL;
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7 (ATerm t)
      {
        ATerm z_7 (ATerm t)
        {
          ATerm e_22 = NULL;
          e_22 = t;
          if(((d_22 != NULL) && (d_22 != e_22)))
            _fail(e_22);
          else
            d_22 = e_22;
          return(t);
        }
        t = DeclVersion_1(t, z_7);
        return(t);
      }
      t = option_defined_1(t, y_7);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm f_22 = NULL;
        t = term_a_17;
        {
          f_22 = t;
          if(((d_22 != NULL) && (d_22 != f_22)))
            _fail(f_22);
          else
            d_22 = f_22;
        }
      }
    }
  {
    ATerm c_22;
    c_22 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_17), not_null(d_22)), term_g_22));
      t = printnl_0(t);
    }
    t = c_22;
  }
  return(t);
}
ATerm sc_usage_0 (ATerm t)
{
  t = sc_version_0(t);
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_23), term_b_23), term_a_23), term_z_22), term_y_22), term_x_22), term_w_22), term_u_22), term_t_22), term_r_22), term_n_22), term_m_22), term_l_22), term_k_22), term_h_22));
    t = printnl_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_22 = NULL;
  j_22 = t;
  i_22 :
  if(!(match_cons(j_22, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_52 (ATerm))
{
  ATerm b_8 (ATerm t)
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, b_8);
  t = i_52(t);
  return(t);
}
ATerm Input_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm p_22 = NULL,q_22 = NULL;
  p_22 = t;
  o_22 :
  if(match_cons(p_22, sym_Input_1))
    {
      q_22 = ATgetArgument(p_22, 0);
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_22 = NULL;
            t = not_null(q_22);
            {
              t = m_0(t);
              {
                s_22 = t;
                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_22));
              }
            }
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            {
              ATerm v_22 = NULL;
              t = not_null(q_22);
              {
                t = m_0(t);
                {
                  v_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_22));
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
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_8 (ATerm t)
      {
        ATerm w_23 = NULL;
        w_23 = t;
        l_23 :
        if(!(match_string(w_23, "-S")))
          {
            if(!(match_string(w_23, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm d_8 (ATerm t)
      {
        t = term_p_23;
        return(t);
      }
      ATerm e_8 (ATerm t)
      {
        t = term_r_23;
        return(t);
      }
      t = Option_3(t, c_8, d_8, e_8);
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      {
        ATerm t_23 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_8 (ATerm t)
            {
              ATerm x_23 = NULL;
              x_23 = t;
              m_23 :
              if(!(match_string(x_23, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm k_8 (ATerm t)
            {
              t = term_l_24;
              return(t);
            }
            ATerm l_8 (ATerm t)
            {
              t = term_m_24;
              return(t);
            }
            t = Option_3(t, i_8, k_8, l_8);
            LocalPopChoice(k_24);
          }
        else
          {
            t = t_23;
            {
              ATerm n_24 = t;
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_8 (ATerm t)
                  {
                    ATerm y_23 = NULL;
                    y_23 = t;
                    n_23 :
                    if(!(match_string(y_23, "-v")))
                      {
                        if(!(match_string(y_23, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm n_8 (ATerm t)
                  {
                    t = term_p_24;
                    return(t);
                  }
                  ATerm o_8 (ATerm t)
                  {
                    t = term_v_24;
                    return(t);
                  }
                  t = Option_3(t, m_8, n_8, o_8);
                  LocalPopChoice(o_24);
                }
              else
                {
                  t = n_24;
                  {
                    ATerm w_24 = t;
                    int e_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_8 (ATerm t)
                        {
                          ATerm z_23 = NULL;
                          z_23 = t;
                          o_23 :
                          if(!(match_string(z_23, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_8 (ATerm t)
                        {
                          ATerm a_24 = NULL;
                          ATerm b_24 = NULL;
                          b_24 = t;
                          if(((a_24 != NULL) && (a_24 != b_24)))
                            _fail(b_24);
                          else
                            a_24 = b_24;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(a_24));
                          return(t);
                        }
                        ATerm x_8 (ATerm t)
                        {
                          t = term_f_25;
                          return(t);
                        }
                        t = ArgOption_3(t, p_8, w_8, x_8);
                        LocalPopChoice(e_25);
                      }
                    else
                      {
                        t = w_24;
                        {
                          ATerm g_25 = t;
                          int h_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_8 (ATerm t)
                              {
                                ATerm c_24 = NULL;
                                c_24 = t;
                                q_23 :
                                if(!(match_string(c_24, "-i")))
                                  {
                                    if(!(match_string(c_24, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm z_8 (ATerm t)
                              {
                                ATerm d_24 = NULL;
                                ATerm e_24 = NULL;
                                e_24 = t;
                                if(((d_24 != NULL) && (d_24 != e_24)))
                                  _fail(e_24);
                                else
                                  d_24 = e_24;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_24));
                                return(t);
                              }
                              ATerm a_9 (ATerm t)
                              {
                                t = term_i_25;
                                return(t);
                              }
                              t = ArgOption_3(t, y_8, z_8, a_9);
                              LocalPopChoice(h_25);
                            }
                          else
                            {
                              t = g_25;
                              {
                                ATerm j_25 = t;
                                int r_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_9 (ATerm t)
                                    {
                                      ATerm f_24 = NULL;
                                      f_24 = t;
                                      s_23 :
                                      if(!(match_string(f_24, "-o")))
                                        {
                                          if(!(match_string(f_24, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm g_9 (ATerm t)
                                    {
                                      ATerm g_24 = NULL;
                                      ATerm h_24 = NULL;
                                      h_24 = t;
                                      if(((g_24 != NULL) && (g_24 != h_24)))
                                        _fail(h_24);
                                      else
                                        g_24 = h_24;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_24));
                                      return(t);
                                    }
                                    ATerm h_9 (ATerm t)
                                    {
                                      t = term_s_25;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, f_9, g_9, h_9);
                                    LocalPopChoice(r_25);
                                  }
                                else
                                  {
                                    t = j_25;
                                    {
                                      ATerm t_25 = t;
                                      int w_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_9 (ATerm t)
                                          {
                                            ATerm i_24 = NULL;
                                            i_24 = t;
                                            u_23 :
                                            if(!(match_string(i_24, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm n_9 (ATerm t)
                                          {
                                            t = term_x_25;
                                            return(t);
                                          }
                                          ATerm o_9 (ATerm t)
                                          {
                                            t = term_y_25;
                                            return(t);
                                          }
                                          t = Option_3(t, i_9, n_9, o_9);
                                          LocalPopChoice(w_25);
                                        }
                                      else
                                        {
                                          t = t_25;
                                          {
                                            ATerm p_9 (ATerm t)
                                            {
                                              ATerm j_24 = NULL;
                                              j_24 = t;
                                              v_23 :
                                              if(!(match_string(j_24, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm r_9 (ATerm t)
                                            {
                                              t = term_d_26;
                                              return(t);
                                            }
                                            ATerm s_9 (ATerm t)
                                            {
                                              t = term_f_26;
                                              return(t);
                                            }
                                            t = Option_3(t, p_9, r_9, s_9);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm assert_1 (ATerm t, ATerm e_47 (ATerm))
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  s_24 = t;
  r_24 :
  if(match_cons(s_24, sym__2))
    {
      t_24 = ATgetArgument(s_24, 0);
      u_24 = ATgetArgument(s_24, 1);
      {
        ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
        ATerm n_26;
        n_26 = t;
        {
          ATerm a_25 = NULL;
          ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
          t = e_47(t);
          {
            a_25 = t;
            {
              if(((x_24 != NULL) && (x_24 != a_25)))
                _fail(a_25);
              else
                x_24 = a_25;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_24), not_null(t_24), not_null(u_24));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_26 = t;
                    int q_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_24), term_s_26);
                        t = table_get_0(t);
                        LocalPopChoice(q_26);
                      }
                    else
                      {
                        t = o_26;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      b_25 = t;
                      q_24 :
                      if(((ATgetType(b_25) == AT_LIST) && ((ATermList) b_25 != ATempty)))
                        {
                          c_25 = ATgetFirst((ATermList) b_25);
                          d_25 = (ATerm) ATgetNext((ATermList) b_25);
                          {
                            if(((y_24 != NULL) && (y_24 != c_25)))
                              _fail(c_25);
                            else
                              y_24 = c_25;
                            {
                              if(((z_24 != NULL) && (z_24 != d_25)))
                                _fail(d_25);
                              else
                                z_24 = d_25;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_24), term_s_26, (ATerm) ATinsert(CheckATermList(not_null(z_24)), (ATerm) ATinsert(CheckATermList(not_null(y_24)), not_null(t_24))));
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
        t = n_26;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
  m_25 = t;
  k_25 :
  if(match_string(m_25, "register-usage-info"))
    t = register_usage_1(t, l_0);
  else
    {
      if(((ATgetType(m_25) == AT_LIST) && ((ATermList) m_25 != ATempty)))
        {
          n_25 = ATgetFirst((ATermList) m_25);
          o_25 = (ATerm) ATgetNext((ATermList) m_25);
          l_25 :
          if(((ATgetType(o_25) == AT_LIST) && ((ATermList) o_25 != ATempty)))
            {
              p_25 = ATgetFirst((ATermList) o_25);
              q_25 = (ATerm) ATgetNext((ATermList) o_25);
              {
                ATerm u_25 = NULL;
                ATerm z_26;
                z_26 = t;
                {
                  t = not_null(n_25);
                  t = j_0(t);
                }
                t = z_26;
                {
                  ATerm v_25 = NULL;
                  t = not_null(p_25);
                  {
                    t = k_0(t);
                    {
                      v_25 = t;
                      if(((u_25 != NULL) && (u_25 != v_25)))
                        _fail(v_25);
                      else
                        u_25 = v_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_25)), not_null(u_25));
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
ATerm ArgOption_2 (ATerm t, ATerm i_51 (ATerm), ATerm j_51 (ATerm))
{
  ATerm t_9 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  t = ArgOption_3(t, i_51, j_51, t_9);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm x_50 (ATerm), ATerm y_50 (ATerm))
{
  ATerm u_9 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  t = Option_3(t, x_50, y_50, u_9);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm b_54 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm v_9 (ATerm t)
    {
      ATerm c_27 = t;
      int l_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, v_9);
          LocalPopChoice(l_27);
        }
      else
        {
          t = c_27;
          {
            ATerm q_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_9 (ATerm t)
                {
                  ATerm b_26 = NULL;
                  b_26 = t;
                  z_25 :
                  if(!(match_int(b_26, 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2(t, x_9, _id);
                LocalPopChoice(t_27);
              }
            else
              {
                t = q_27;
                {
                  ATerm z_9 (ATerm t)
                  {
                    ATerm c_26 = NULL;
                    c_26 = t;
                    a_26 :
                    if(!(match_int(c_26, 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2(t, z_9, b_54);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, v_9);
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
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_10 (ATerm t)
      {
        ATerm a_27 = NULL;
        a_27 = t;
        e_26 :
        if(!(match_string(a_27, "-e")))
          _fail(t);
        return(t);
      }
      ATerm d_10 (ATerm t)
      {
        ATerm b_27 = NULL;
        b_27 = t;
        t = (ATerm) ATmakeAppl(sym_ExecDir_1, not_null(b_27));
        return(t);
      }
      t = ArgOption_2(t, c_10, d_10);
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_10 (ATerm t)
            {
              ATerm d_27 = NULL;
              d_27 = t;
              g_26 :
              if(!(match_string(d_27, "-I")))
                _fail(t);
              return(t);
            }
            ATerm f_10 (ATerm t)
            {
              t = term_f_28;
              return(t);
            }
            t = ArgOption_2(t, e_10, f_10);
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            {
              ATerm g_28 = t;
              int h_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_10 (ATerm t)
                  {
                    ATerm e_27 = NULL;
                    e_27 = t;
                    h_26 :
                    if(!(match_string(e_27, "--Include")))
                      _fail(t);
                    return(t);
                  }
                  ATerm l_10 (ATerm t)
                  {
                    t = term_f_28;
                    return(t);
                  }
                  t = ArgOption_2(t, k_10, l_10);
                  LocalPopChoice(h_28);
                }
              else
                {
                  t = g_28;
                  {
                    ATerm i_28 = t;
                    int k_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_10 (ATerm t)
                        {
                          ATerm f_27 = NULL;
                          f_27 = t;
                          i_26 :
                          if(!(match_string(f_27, "-CI")))
                            _fail(t);
                          return(t);
                        }
                        ATerm r_10 (ATerm t)
                        {
                          t = term_f_28;
                          return(t);
                        }
                        t = ArgOption_2(t, m_10, r_10);
                        LocalPopChoice(k_28);
                      }
                    else
                      {
                        t = i_28;
                        {
                          ATerm l_28 = t;
                          int m_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_10 (ATerm t)
                              {
                                ATerm g_27 = NULL;
                                g_27 = t;
                                j_26 :
                                if(!(match_string(g_27, "-CL")))
                                  _fail(t);
                                return(t);
                              }
                              ATerm t_10 (ATerm t)
                              {
                                t = term_f_28;
                                return(t);
                              }
                              t = ArgOption_2(t, s_10, t_10);
                              LocalPopChoice(m_28);
                            }
                          else
                            {
                              t = l_28;
                              {
                                ATerm o_28 = t;
                                int p_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_10 (ATerm t)
                                    {
                                      ATerm h_27 = NULL;
                                      h_27 = t;
                                      k_26 :
                                      if(!(match_string(h_27, "-CC")))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm z_10 (ATerm t)
                                    {
                                      t = term_r_28;
                                      return(t);
                                    }
                                    t = Option_2(t, u_10, z_10);
                                    LocalPopChoice(p_28);
                                  }
                                else
                                  {
                                    t = o_28;
                                    {
                                      ATerm w_28 = t;
                                      int x_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm a_11 (ATerm t)
                                          {
                                            ATerm i_27 = NULL;
                                            i_27 = t;
                                            l_26 :
                                            if(!(match_string(i_27, "--norm")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm b_11 (ATerm t)
                                          {
                                            t = term_y_28;
                                            return(t);
                                          }
                                          t = Option_2(t, a_11, b_11);
                                          LocalPopChoice(x_28);
                                        }
                                      else
                                        {
                                          t = w_28;
                                          {
                                            ATerm z_28 = t;
                                            int a_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm c_11 (ATerm t)
                                                {
                                                  ATerm j_27 = NULL;
                                                  j_27 = t;
                                                  m_26 :
                                                  if(!(match_string(j_27, "-i")))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm d_11 (ATerm t)
                                                {
                                                  ATerm k_27 = NULL;
                                                  ATerm m_27 = NULL;
                                                  k_27 = t;
                                                  {
                                                    ATerm n_27 = NULL;
                                                    t = not_null(k_27);
                                                    {
                                                      t = basename_0(t);
                                                      {
                                                        n_27 = t;
                                                        if(((m_27 != NULL) && (m_27 != n_27)))
                                                          _fail(n_27);
                                                        else
                                                          m_27 = n_27;
                                                      }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_27));
                                                  }
                                                  return(t);
                                                }
                                                t = ArgOption_2(t, c_11, d_11);
                                                LocalPopChoice(a_29);
                                              }
                                            else
                                              {
                                                t = z_28;
                                                {
                                                  ATerm c_29 = t;
                                                  int d_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_11 (ATerm t)
                                                      {
                                                        ATerm o_27 = NULL;
                                                        o_27 = t;
                                                        p_26 :
                                                        if(!(match_string(o_27, "--main")))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm i_11 (ATerm t)
                                                      {
                                                        ATerm p_27 = NULL;
                                                        p_27 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Main_1, not_null(p_27));
                                                        return(t);
                                                      }
                                                      t = ArgOption_2(t, f_11, i_11);
                                                      LocalPopChoice(d_29);
                                                    }
                                                  else
                                                    {
                                                      t = c_29;
                                                      {
                                                        ATerm f_29 = t;
                                                        int g_29 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm j_11 (ATerm t)
                                                            {
                                                              ATerm r_27 = NULL;
                                                              r_27 = t;
                                                              r_26 :
                                                              if(!(match_string(r_27, "-m")))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm k_11 (ATerm t)
                                                            {
                                                              ATerm s_27 = NULL;
                                                              s_27 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Main_1, not_null(s_27));
                                                              return(t);
                                                            }
                                                            t = ArgOption_2(t, j_11, k_11);
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
                                                                  ATerm r_11 (ATerm t)
                                                                  {
                                                                    ATerm u_27 = NULL;
                                                                    u_27 = t;
                                                                    t_26 :
                                                                    if(!(match_string(u_27, "--ast")))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm u_11 (ATerm t)
                                                                  {
                                                                    t = term_j_29;
                                                                    return(t);
                                                                  }
                                                                  t = Option_2(t, r_11, u_11);
                                                                  LocalPopChoice(i_29);
                                                                }
                                                              else
                                                                {
                                                                  t = h_29;
                                                                  {
                                                                    ATerm o_29 = t;
                                                                    int p_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm v_11 (ATerm t)
                                                                        {
                                                                          ATerm v_27 = NULL;
                                                                          v_27 = t;
                                                                          u_26 :
                                                                          if(!(match_string(v_27, "-F")))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm w_11 (ATerm t)
                                                                        {
                                                                          t = term_w_29;
                                                                          return(t);
                                                                        }
                                                                        t = Option_2(t, v_11, w_11);
                                                                        LocalPopChoice(p_29);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_29;
                                                                        {
                                                                          ATerm x_29 = t;
                                                                          int y_29 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm x_11 (ATerm t)
                                                                              {
                                                                                ATerm w_27 = NULL;
                                                                                w_27 = t;
                                                                                v_26 :
                                                                                if(!(match_string(w_27, "--fusion")))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm y_11 (ATerm t)
                                                                              {
                                                                                t = term_z_29;
                                                                                return(t);
                                                                              }
                                                                              t = Option_2(t, x_11, y_11);
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
                                                                                    ATerm z_11 (ATerm t)
                                                                                    {
                                                                                      ATerm x_27 = NULL;
                                                                                      x_27 = t;
                                                                                      w_26 :
                                                                                      if(!(match_string(x_27, "--csyntax")))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm c_12 (ATerm t)
                                                                                    {
                                                                                      t = term_c_30;
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_2(t, z_11, c_12);
                                                                                    LocalPopChoice(b_30);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_30;
                                                                                    {
                                                                                      ATerm d_30 = t;
                                                                                      int e_30 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm d_12 (ATerm t)
                                                                                          {
                                                                                            ATerm y_27 = NULL;
                                                                                            y_27 = t;
                                                                                            x_26 :
                                                                                            if(!(match_string(y_27, "--trace-all")))
                                                                                              _fail(t);
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm g_12 (ATerm t)
                                                                                          {
                                                                                            t = term_f_30;
                                                                                            {
                                                                                              ATerm g_30;
                                                                                              g_30 = t;
                                                                                              {
                                                                                                t = term_n_30;
                                                                                                {
                                                                                                  ATerm h_12 (ATerm t)
                                                                                                  {
                                                                                                    t = term_p_18;
                                                                                                    return(t);
                                                                                                  }
                                                                                                  t = assert_1(t, h_12);
                                                                                                }
                                                                                              }
                                                                                              t = g_30;
                                                                                            }
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_2(t, d_12, g_12);
                                                                                          LocalPopChoice(e_30);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_30;
                                                                                          {
                                                                                            ATerm m_12 (ATerm t)
                                                                                            {
                                                                                              ATerm z_27 = NULL;
                                                                                              z_27 = t;
                                                                                              y_26 :
                                                                                              if(!(match_string(z_27, "-t")))
                                                                                                _fail(t);
                                                                                              return(t);
                                                                                            }
                                                                                            ATerm n_12 (ATerm t)
                                                                                            {
                                                                                              ATerm a_28 = NULL;
                                                                                              a_28 = t;
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(a_28)), term_p_30);
                                                                                                {
                                                                                                  ATerm p_12 (ATerm t)
                                                                                                  {
                                                                                                    t = term_b_18;
                                                                                                    return(t);
                                                                                                  }
                                                                                                  t = assert_1(t, p_12);
                                                                                                }
                                                                                                t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(a_28));
                                                                                              }
                                                                                              return(t);
                                                                                            }
                                                                                            t = ArgOption_2(t, m_12, n_12);
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm j_28 = NULL;
  j_28 = t;
  t = SSL_table_destroy(not_null(j_28));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  t = SSL_implode_string(not_null(n_28));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_61 (ATerm))
{
  ATerm q_28 (ATerm t)
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_28);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        {
          t = Nil_0(t);
          t = z_61(t);
        }
      }
    return(t);
  }
  t = q_28(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      {
        ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
        t_28 = t;
        s_28 :
        if(((ATgetType(t_28) == AT_LIST) && ((ATermList) t_28 != ATempty)))
          {
            u_28 = ATgetFirst((ATermList) t_28);
            v_28 = (ATerm) ATgetNext((ATermList) t_28);
            {
              t = not_null(u_28);
              {
                ATerm s_12 (ATerm t)
                {
                  t = not_null(v_28);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_12);
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
  ATerm b_29 = NULL;
  b_29 = t;
  t = SSL_explode_string(not_null(b_29));
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
ATerm long_description_1 (ATerm t, ATerm p_50 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm e_29 (ATerm t)
  {
    ATerm z_30 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_31);
      }
    else
      {
        t = z_30;
        t = Cons_2(t, l_61, e_29);
      }
    return(t);
  }
  t = e_29(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  n_29 = t;
  k_29 :
  if(((ATgetType(n_29) == AT_LIST) && ((ATermList) n_29 != ATempty)))
    {
      l_29 = ATgetFirst((ATermList) n_29);
      m_29 = (ATerm) ATgetNext((ATermList) n_29);
      {
        ATerm q_29 = NULL;
        t = not_null(m_29);
        {
          ATerm d_31;
          d_31 = t;
          {
            ATerm r_29 = NULL,t_29 = NULL,v_29 = NULL;
            ATerm e_31;
            e_31 = t;
            {
              ATerm s_29 = NULL;
              t = i_0(t);
              {
                s_29 = t;
                if(((r_29 != NULL) && (r_29 != s_29)))
                  _fail(s_29);
                else
                  r_29 = s_29;
              }
            }
            t = e_31;
            {
              ATerm u_29 = NULL;
              t = not_null(l_29);
              {
                t = h_0(t);
                {
                  u_29 = t;
                  if(((t_29 != NULL) && (t_29 != u_29)))
                    _fail(u_29);
                  else
                    t_29 = u_29;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_29)), not_null(t_29));
                {
                  v_29 = t;
                  if(((q_29 != NULL) && (q_29 != v_29)))
                    _fail(v_29);
                  else
                    q_29 = v_29;
                }
              }
            }
          }
          t = d_31;
          {
            ATerm t_12 (ATerm t)
            {
              t = not_null(q_29);
              return(t);
            }
            t = reverse_acc_2(t, h_0, t_12);
          }
        }
      }
    }
  else
    {
      if(((ATermList) n_29 == ATempty))
        {
          {
            t = term_j_18;
            t = i_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm u_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_12);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_50 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_46 (ATerm))
{
  ATerm j_30 = NULL,k_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym_Program_1))
    {
      k_30 = ATgetArgument(j_30, 0);
      {
        ATerm m_30 = NULL;
        t = not_null(k_30);
        {
          t = b_46(t);
          {
            m_30 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_30));
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
  ATerm u_30 = NULL;
  ATerm z_12 (ATerm t)
  {
    ATerm a_13 (ATerm t)
    {
      ATerm v_30 = NULL;
      v_30 = t;
      if(((u_30 != NULL) && (u_30 != v_30)))
        _fail(v_30);
      else
        u_30 = v_30;
      return(t);
    }
    t = Program_1(t, a_13);
    return(t);
  }
  t = option_defined_1(t, z_12);
  {
    ATerm b_13 (ATerm t)
    {
      ATerm w_30 = NULL;
      ATerm x_30 = NULL;
      t = term_j_18;
      {
        ATerm c_13 (ATerm t)
        {
          t = not_null(u_30);
          return(t);
        }
        t = short_description_1(t, c_13);
        {
          t = concat_strings_0(t);
          {
            x_30 = t;
            if(((w_30 != NULL) && (w_30 != x_30)))
              _fail(x_30);
            else
              w_30 = x_30;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATempty, not_null(w_30)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, b_13);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATempty, term_f_31));
      {
        t = printnl_0(t);
        {
          t = term_l_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_13 (ATerm t)
                {
                  ATerm y_30 = NULL;
                  y_30 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_30)), term_n_31));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_13);
                {
                  ATerm j_13 (ATerm t)
                  {
                    ATerm a_31 = NULL;
                    ATerm b_31 = NULL;
                    t = term_j_18;
                    {
                      ATerm k_13 (ATerm t)
                      {
                        t = not_null(u_30);
                        return(t);
                      }
                      t = long_description_1(t, k_13);
                      {
                        t = concat_strings_0(t);
                        {
                          b_31 = t;
                          if(((a_31 != NULL) && (a_31 != b_31)))
                            _fail(b_31);
                          else
                            a_31 = b_31;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_31)), term_o_31));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_13);
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
ATerm Undefined_1 (ATerm t, ATerm c_46 (ATerm))
{
  ATerm j_31 = NULL,k_31 = NULL;
  j_31 = t;
  i_31 :
  if(match_cons(j_31, sym_Undefined_1))
    {
      k_31 = ATgetArgument(j_31, 0);
      {
        ATerm m_31 = NULL;
        t = not_null(k_31);
        {
          t = c_46(t);
          {
            m_31 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_31));
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
  ATerm r_31 = NULL;
  r_31 = t;
  q_31 :
  if(!(match_cons(r_31, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym__2))
    {
      v_31 = ATgetArgument(u_31, 0);
      w_31 = ATgetArgument(u_31, 1);
      t = SSL_table_get(not_null(v_31), not_null(w_31));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  d_32 = t;
  c_32 :
  if(match_cons(d_32, sym__3))
    {
      e_32 = ATgetArgument(d_32, 0);
      f_32 = ATgetArgument(d_32, 1);
      g_32 = ATgetArgument(d_32, 2);
      {
        ATerm p_31;
        p_31 = t;
        {
          ATerm o_32 = NULL;
          ATerm p_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_32), not_null(f_32));
          {
            ATerm s_31 = t;
            int x_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_31);
              }
            else
              {
                t = s_31;
                t = (ATerm) ATempty;
              }
            {
              p_32 = t;
              if(((o_32 != NULL) && (o_32 != p_32)))
                _fail(p_32);
              else
                o_32 = p_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_32), not_null(f_32), (ATerm) ATinsert(CheckATermList(not_null(o_32)), not_null(g_32)));
            t = table_put_0(t);
          }
        }
        t = p_31;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_50 (ATerm))
{
  ATerm t_32 = NULL;
  ATerm u_32 = NULL;
  t = term_j_18;
  {
    t = t_50(t);
    {
      u_32 = t;
      if(((t_32 != NULL) && (t_32 != u_32)))
        _fail(u_32);
      else
        t_32 = u_32;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_31, term_h_31, not_null(t_32));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  c_33 :
  if(match_string(d_33, "register-usage-info"))
    t = register_usage_1(t, g_0);
  else
    {
      if(((ATgetType(d_33) == AT_LIST) && ((ATermList) d_33 != ATempty)))
        {
          e_33 = ATgetFirst((ATermList) d_33);
          f_33 = (ATerm) ATgetNext((ATermList) d_33);
          {
            ATerm m_33 = NULL;
            ATerm y_31;
            y_31 = t;
            {
              t = not_null(e_33);
              t = c_0(t);
            }
            t = y_31;
            {
              ATerm n_33 = NULL;
              t = term_j_18;
              {
                t = f_0(t);
                {
                  n_33 = t;
                  if(((m_33 != NULL) && (m_33 != n_33)))
                    _fail(n_33);
                  else
                    m_33 = n_33;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_33)), not_null(m_33));
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
  ATerm l_13 (ATerm t)
  {
    ATerm s_33 = NULL;
    s_33 = t;
    r_33 :
    if(!(match_string(s_33, "--help")))
      {
        if(!(match_string(s_33, "-h")))
          {
            if(!(match_string(s_33, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm m_13 (ATerm t)
  {
    t = term_z_31;
    return(t);
  }
  ATerm q_13 (ATerm t)
  {
    t = term_a_32;
    return(t);
  }
  t = Option_3(t, l_13, m_13, q_13);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  v_33 = t;
  u_33 :
  if(((ATgetType(v_33) == AT_LIST) && ((ATermList) v_33 != ATempty)))
    {
      w_33 = ATgetFirst((ATermList) v_33);
      x_33 = (ATerm) ATgetNext((ATermList) v_33);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_33)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_33)));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_50 (ATerm))
{
  ATerm b_32;
  b_32 = t;
  {
    ATerm s_13 (ATerm t)
    {
      t = term_h_32;
      t = r_50(t);
      return(t);
    }
    t = try_1(t, s_13);
  }
  t = b_32;
  {
    ATerm t_13 (ATerm t)
    {
      ATerm d_35 = NULL;
      d_35 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_35));
      return(t);
    }
    ATerm u_13 (ATerm t)
    {
      ATerm i_32 = t;
      int j_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_32 = t;
          int l_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(l_32);
            }
          else
            {
              t = k_32;
              {
                t = r_50(t);
                t = Cons_2(t, _id, u_13);
              }
            }
          LocalPopChoice(j_32);
        }
      else
        {
          t = i_32;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_13, u_13);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  ATerm m_32;
  m_32 = t;
  {
    ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
    y_35 = t;
    u_35 :
    if(match_cons(y_35, sym__3))
      {
        z_35 = ATgetArgument(y_35, 0);
        a_36 = ATgetArgument(y_35, 1);
        b_36 = ATgetArgument(y_35, 2);
        {
          if(((v_35 != NULL) && (v_35 != z_35)))
            _fail(z_35);
          else
            v_35 = z_35;
          {
            if(((w_35 != NULL) && (w_35 != a_36)))
              _fail(a_36);
            else
              w_35 = a_36;
            {
              if(((x_35 != NULL) && (x_35 != b_36)))
                _fail(b_36);
              else
                x_35 = b_36;
              t = SSL_table_put(not_null(v_35), not_null(w_35), not_null(x_35));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = m_32;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_50 (ATerm))
{
  ATerm e_36 = NULL;
  ATerm n_32;
  n_32 = t;
  {
    t = term_q_32;
    t = table_put_0(t);
  }
  t = n_32;
  {
    ATerm v_13 (ATerm t)
    {
      ATerm r_32 = t;
      int s_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_50(t);
          LocalPopChoice(s_32);
        }
      else
        {
          t = r_32;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_13);
    {
      ATerm y_13 (ATerm t)
      {
        ATerm v_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_e_20;
                t = exit_0(t);
              }
            }
            LocalPopChoice(w_32);
          }
        else
          {
            t = v_32;
            {
              ATerm b_14 (ATerm t)
              {
                ATerm c_14 (ATerm t)
                {
                  ATerm f_36 = NULL;
                  f_36 = t;
                  if(((e_36 != NULL) && (e_36 != f_36)))
                    _fail(f_36);
                  else
                    e_36 = f_36;
                  return(t);
                }
                t = Undefined_1(t, c_14);
                return(t);
              }
              t = option_defined_1(t, b_14);
              {
                ATerm x_32;
                x_32 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_36)), term_y_32));
                  t = printnl_0(t);
                }
                t = x_32;
                {
                  t = system_usage_0(t);
                  {
                    t = term_t_19;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, y_13);
      {
        ATerm z_32;
        z_32 = t;
        {
          t = term_g_31;
          t = table_destroy_0(t);
        }
        t = z_32;
      }
    }
  }
  return(t);
}
ATerm skip1_1 (ATerm t, ATerm p_55 (ATerm))
{
  t = at_tail_1(t, p_55);
  return(t);
}
ATerm filter_option_args_1 (ATerm t, ATerm r_55 (ATerm))
{
  ATerm h_14 (ATerm t)
  {
    t = Cons_2(t, r_55, _id);
    t = Tl_0(t);
    return(t);
  }
  ATerm h_36 (ATerm t, ATerm i_36 (ATerm))
  {
    t = at_tail_1(t, i_36);
    return(t);
  }
  t = filter_gen_2(t, h_14, h_36);
  return(t);
}
ATerm at_tail_1 (ATerm t, ATerm x_61 (ATerm))
{
  t = Cons_2(t, _id, x_61);
  return(t);
}
ATerm skip2_1 (ATerm t, ATerm q_55 (ATerm))
{
  ATerm i_14 (ATerm t)
  {
    t = at_tail_1(t, q_55);
    return(t);
  }
  t = at_tail_1(t, i_14);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_46 (ATerm), ATerm t_46 (ATerm))
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  m_36 :
  if(((ATgetType(n_36) == AT_LIST) && ((ATermList) n_36 != ATempty)))
    {
      o_36 = ATgetFirst((ATermList) n_36);
      p_36 = (ATerm) ATgetNext((ATermList) n_36);
      {
        ATerm s_36 = NULL;
        t = not_null(o_36);
        {
          ATerm u_36 = NULL;
          t = s_46(t);
          {
            s_36 = t;
            {
              t = not_null(p_36);
              {
                t = t_46(t);
                {
                  u_36 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_36)), not_null(s_36));
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
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
  b_37 = t;
  a_37 :
  if(((ATgetType(b_37) == AT_LIST) && ((ATermList) b_37 != ATempty)))
    {
      c_37 = ATgetFirst((ATermList) b_37);
      d_37 = (ATerm) ATgetNext((ATermList) b_37);
      t = not_null(d_37);
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  h_37 :
  if(((ATermList) i_37 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_gen_2 (ATerm t, ATerm m_55 (ATerm), ATerm n_55 (ATerm, ATerm (ATerm)))
{
  ATerm j_37 (ATerm t)
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        {
          ATerm g_33 = t;
          int h_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_55(t);
              t = n_55(t, j_37);
              LocalPopChoice(h_33);
            }
          else
            {
              t = g_33;
              {
                t = Tl_0(t);
                t = j_37(t);
              }
            }
        }
      }
    return(t);
  }
  t = j_37(t);
  return(t);
}
ATerm filter_options_1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm j_14 (ATerm t)
  {
    t = Cons_2(t, s_55, _id);
    return(t);
  }
  t = filter_gen_2(t, j_14, skip2_1);
  return(t);
}
ATerm process_sc_options_0 (ATerm t)
{
  ATerm t_37 = NULL,w_37 = NULL,z_37 = NULL,c_38 = NULL;
  ATerm i_33;
  i_33 = t;
  {
    ATerm v_37 = NULL;
    ATerm o_14 (ATerm t)
    {
      ATerm u_37 = NULL;
      u_37 = t;
      k_37 :
      if(!(match_string(u_37, "-I")))
        _fail(t);
      return(t);
    }
    t = filter_options_1(t, o_14);
    {
      v_37 = t;
      if(((t_37 != NULL) && (t_37 != v_37)))
        _fail(v_37);
      else
        t_37 = v_37;
    }
  }
  t = i_33;
  {
    ATerm j_33;
    j_33 = t;
    {
      ATerm y_37 = NULL;
      ATerm p_14 (ATerm t)
      {
        ATerm x_37 = NULL;
        x_37 = t;
        m_37 :
        if(!(match_string(x_37, "-CI")))
          _fail(t);
        return(t);
      }
      t = filter_option_args_1(t, p_14);
      {
        y_37 = t;
        if(((w_37 != NULL) && (w_37 != y_37)))
          _fail(y_37);
        else
          w_37 = y_37;
      }
    }
    t = j_33;
    {
      ATerm k_33;
      k_33 = t;
      {
        ATerm b_38 = NULL;
        ATerm q_14 (ATerm t)
        {
          ATerm a_38 = NULL;
          a_38 = t;
          o_37 :
          if(!(match_string(a_38, "-CL")))
            _fail(t);
          return(t);
        }
        t = filter_option_args_1(t, q_14);
        {
          b_38 = t;
          if(((z_37 != NULL) && (z_37 != b_38)))
            _fail(b_38);
          else
            z_37 = b_38;
        }
      }
      t = k_33;
      {
        ATerm r_14 (ATerm t)
        {
          ATerm l_33 = t;
          int o_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = sc_options_0(t);
              LocalPopChoice(o_33);
            }
          else
            {
              t = l_33;
              t = io_options_0(t);
            }
          return(t);
        }
        t = parse_options_1(t, r_14);
        {
          ATerm p_33 = t;
          int q_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_38 = NULL;
              ATerm t_14 (ATerm t)
              {
                ATerm u_14 (ATerm t)
                {
                  ATerm d_38 = NULL;
                  d_38 = t;
                  if(((c_38 != NULL) && (c_38 != d_38)))
                    _fail(d_38);
                  else
                    c_38 = d_38;
                  return(t);
                }
                t = Input_1(t, u_14);
                return(t);
              }
              t = option_defined_1(t, t_14);
              {
                e_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(not_null(e_38)), (ATerm) ATmakeAppl(sym_CLibDir_1, not_null(z_37))), (ATerm) ATmakeAppl(sym_CInclDir_1, not_null(w_37))), (ATerm) ATmakeAppl(sym_InclDir_1, not_null(t_37))), (ATerm) ATmakeAppl(sym__2, not_null(c_38), term_t_33));
              }
              LocalPopChoice(q_33);
            }
          else
            {
              t = p_33;
              {
                ATerm g_38 = NULL;
                g_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_38)), term_z_31), term_a_17);
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
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = process_sc_options_0(t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      {
        t = sc_usage_0(t);
        {
          t = term_t_19;
          t = exit_0(t);
        }
      }
    }
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_14 (ATerm t)
        {
          ATerm w_14 (ATerm t)
          {
            t = sc_usage_0(t);
            {
              t = term_t_19;
              t = exit_0(t);
            }
            return(t);
          }
          t = need_help_1(t, w_14);
          return(t);
        }
        t = _2(t, v_14, _id);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        {
          ATerm c_34 = t;
          int d_34 = stack_ptr;
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
                            ATerm x_14 (ATerm t)
                            {
                              ATerm e_34 = t;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_14 (ATerm t)
                                  {
                                    ATerm z_14 (ATerm t)
                                    {
                                      ATerm p_38 = NULL;
                                      p_38 = t;
                                      o_38 :
                                      if(!(match_cons(p_38, sym_NORM_0)))
                                        _fail(t);
                                      return(t);
                                    }
                                    t = option_defined_1(t, z_14);
                                    return(t);
                                  }
                                  t = _2(t, y_14, _id);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                t = e_34;
                              t = _2(t, _id, remove_intermediates_0);
                              return(t);
                            }
                            t = try_1(t, x_14);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATempty, term_f_34));
                              {
                                t = printnl_0(t);
                                {
                                  t = term_e_20;
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
              LocalPopChoice(d_34);
            }
          else
            {
              t = c_34;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATempty, term_g_34));
                {
                  t = printnl_0(t);
                  {
                    t = term_t_19;
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
