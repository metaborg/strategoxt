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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Final_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
  ATprotectSymbol(sym_Final_1);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
  ATprotectSymbol(sym_Continue_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
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
ATerm term_f_36;
ATerm term_q_35;
ATerm term_a_35;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_i_34;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_k_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_l_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_n_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_u_28;
ATerm term_e_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_q_26;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_f_18;
ATerm term_l_17;
ATerm term_l_15;
ATerm term_v_14;
ATerm term_q_14;
ATerm term_u_13;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
void init_constant_terms (void)
{
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_y_26, term_b_30);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_30);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_x_6);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_x_6);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_y_31, term_x_6);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym__2, term_m_33, term_n_33);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym__2, term_i_34, term_x_6);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym__3, term_m_33, term_n_33, (ATerm) ATempty);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm x_94 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm m_111 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm m_115 (ATerm));
ATerm Rec_2 (ATerm, ATerm x_85 (ATerm), ATerm y_85 (ATerm));
ATerm Let_2 (ATerm, ATerm z_85 (ATerm), ATerm a_86 (ATerm));
ATerm sboundin_3 (ATerm, ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm p_115 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm i_115 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm n_84 (ATerm));
ATerm tboundin_3 (ATerm, ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm l_115 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm c_104 (ATerm));
ATerm union_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm c_98 (ATerm), ATerm d_98 (ATerm));
ATerm for_3 (ATerm, ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm h_98 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm a_104 (ATerm), ATerm b_104 (ATerm));
ATerm diff_1 (ATerm, ATerm f_104 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm s_99 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm y_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm m_101 (ATerm), ATerm n_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm s_101 (ATerm), ATerm t_101 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm g_101 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm l_100 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm q_100 (ATerm));
ATerm rename_4 (ATerm, ATerm u_101 (ATerm, ATerm (ATerm)), ATerm v_101 (ATerm), ATerm w_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_101 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm s_94 (ATerm));
ATerm restore_always_2 (ATerm, ATerm k_111 (ATerm), ATerm l_111 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm r_94 (ATerm));
ATerm scope_2 (ATerm, ATerm t_94 (ATerm), ATerm u_94 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm v_94 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm));
ATerm crush_3 (ATerm, ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm m_85 (ATerm), ATerm n_85 (ATerm));
ATerm Choice_2 (ATerm, ATerm k_85 (ATerm), ATerm l_85 (ATerm));
ATerm Cong_2 (ATerm, ATerm p_86 (ATerm), ATerm q_86 (ATerm));
ATerm Match_1 (ATerm, ATerm x_86 (ATerm));
ATerm Seq_2 (ATerm, ATerm i_85 (ATerm), ATerm j_85 (ATerm));
ATerm Scope_2 (ATerm, ATerm b_87 (ATerm), ATerm c_87 (ATerm));
ATerm Build_1 (ATerm, ATerm y_86 (ATerm));
ATerm SVar_1 (ATerm, ATerm w_85 (ATerm));
ATerm Call_2 (ATerm, ATerm l_86 (ATerm), ATerm m_86 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm c_113 (ATerm));
ATerm SDef_3 (ATerm, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm u_108 (ATerm));
ATerm zip_1 (ATerm, ATerm w_108 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm As_2 (ATerm, ATerm t_83 (ATerm), ATerm u_83 (ATerm));
ATerm Prim_2 (ATerm, ATerm e_87 (ATerm), ATerm f_87 (ATerm));
ATerm Explode_2 (ATerm, ATerm p_83 (ATerm), ATerm q_83 (ATerm));
ATerm Op_2 (ATerm, ATerm e_85 (ATerm), ATerm f_85 (ATerm));
ATerm pat_td_1 (ATerm, ATerm l_88 (ATerm));
ATerm new_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm MatchingCongruence_0 (ATerm);
ATerm EmptyScope_0 (ATerm);
ATerm Idempotency_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm F15_0 (ATerm);
ATerm F14_0 (ATerm);
ATerm F13_0 (ATerm);
ATerm F12_0 (ATerm);
ATerm F11_0 (ATerm);
ATerm F10_0 (ATerm);
ATerm F9_0 (ATerm);
ATerm F8_0 (ATerm);
ATerm F7_0 (ATerm);
ATerm F6_0 (ATerm);
ATerm F5_0 (ATerm);
ATerm F3_0 (ATerm);
ATerm F2_0 (ATerm);
ATerm F1_0 (ATerm);
ATerm ElimFail_0 (ATerm);
ATerm I16_0 (ATerm);
ATerm I12_0 (ATerm);
ATerm I10_0 (ATerm);
ATerm I9_0 (ATerm);
ATerm I8_0 (ATerm);
ATerm I7_0 (ATerm);
ATerm I4_0 (ATerm);
ATerm I3_0 (ATerm);
ATerm I2_0 (ATerm);
ATerm I1_0 (ATerm);
ATerm ElimId_0 (ATerm);
ATerm Simplify_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm l_97 (ATerm), ATerm m_97 (ATerm));
ATerm repeat_1 (ATerm, ATerm o_97 (ATerm));
ATerm downup_1 (ATerm, ATerm o_111 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm x_84 (ATerm));
ATerm Specification_1 (ATerm, ATerm z_84 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm e_75 (ATerm), ATerm f_75 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_107 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm p_87 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm w_91 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_94 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_110 (ATerm), ATerm g_110 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm t_102 (ATerm), ATerm u_102 (ATerm));
ATerm crush_2 (ATerm, ATerm l_104 (ATerm), ATerm m_104 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm v_91 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_94 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_90 (ATerm));
ATerm map_1 (ATerm, ATerm s_106 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_90 (ATerm));
ATerm Program_1 (ATerm, ATerm m_77 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm q_87 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_77 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_107 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_91 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_110 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_87 (ATerm), ATerm h_87 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_90 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_93 (ATerm));
ATerm iowrap_4 (ATerm, ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm o_93 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_93 (ATerm), ATerm l_93 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_93 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,j_6 = NULL;
  c_4 = t;
  b_4 :
  if(match_cons(c_4, sym__2))
    {
      d_4 = ATgetArgument(c_4, 0);
      j_6 = ATgetArgument(c_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), not_null(j_6));
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
ATerm rewrite_1 (ATerm t, ATerm x_94 (ATerm))
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL;
  m_7 = t;
  {
    ATerm s_7 = NULL;
    t = term_x_6;
    {
      t = x_94(t);
      {
        s_7 = t;
        if(((o_7 != NULL) && (o_7 != s_7)))
          _fail(s_7);
        else
          o_7 = s_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_7), not_null(m_7));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  b_8 = t;
  z_7 :
  if(match_cons(b_8, sym_Call_2))
    {
      c_8 = ATgetArgument(b_8, 0);
      e_8 = ATgetArgument(b_8, 1);
      a_8 :
      if(match_cons(c_8, sym_SVar_1))
        {
          d_8 = ATgetArgument(c_8, 0);
          {
            ATerm h_8 = NULL;
            ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(d_8));
            {
              ATerm c_0 (ATerm t)
              {
                t = term_y_6;
                return(t);
              }
              t = rewrite_1(t, c_0);
              {
                i_8 = t;
                x_7 :
                if(match_cons(i_8, sym_Defined_2))
                  {
                    j_8 = ATgetArgument(i_8, 0);
                    k_8 = ATgetArgument(i_8, 1);
                    y_7 :
                    if(match_string(j_8, "x_0"))
                      {
                        if(((h_8 != NULL) && (h_8 != k_8)))
                          _fail(k_8);
                        else
                          h_8 = k_8;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_8)), not_null(e_8));
          }
        }
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
ATerm SubsArgCall1_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
  u_8 = t;
  r_8 :
  if(match_cons(u_8, sym_Call_2))
    {
      v_8 = ATgetArgument(u_8, 0);
      x_8 = ATgetArgument(u_8, 1);
      s_8 :
      if(match_cons(v_8, sym_SVar_1))
        {
          w_8 = ATgetArgument(v_8, 0);
          t_8 :
          if(((ATermList) x_8 == ATempty))
            {
              {
                ATerm z_8 = NULL;
                ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
                t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(w_8));
                {
                  ATerm d_0 (ATerm t)
                  {
                    t = term_z_6;
                    return(t);
                  }
                  t = rewrite_1(t, d_0);
                  {
                    a_9 = t;
                    p_8 :
                    if(match_cons(a_9, sym_Defined_2))
                      {
                        b_9 = ATgetArgument(a_9, 0);
                        c_9 = ATgetArgument(a_9, 1);
                        q_8 :
                        if(match_string(b_9, "w_0"))
                          {
                            if(((z_8 != NULL) && (z_8 != c_9)))
                              _fail(c_9);
                            else
                              z_8 = c_9;
                          }
                        else
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
                {
                  t = not_null(z_8);
                  t = strename_0(t);
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
ATerm topdown_1 (ATerm t, ATerm m_111 (ATerm))
{
  t = m_111(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = topdown_1(t, m_111);
      return(t);
    }
    t = _all(t, e_0);
  }
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
  u_9 = t;
  h_9 :
  if(match_cons(u_9, sym__2))
    {
      v_9 = ATgetArgument(u_9, 0);
      c_10 = ATgetArgument(u_9, 1);
      i_9 :
      if(match_cons(v_9, sym_VarDec_2))
        {
          w_9 = ATgetArgument(v_9, 0);
          x_9 = ATgetArgument(v_9, 1);
          j_9 :
          if(match_cons(x_9, sym_FunType_2))
            {
              y_9 = ATgetArgument(x_9, 0);
              b_10 = ATgetArgument(x_9, 1);
              k_9 :
              if(((ATgetType(y_9) == AT_LIST) && ((ATermList) y_9 != ATempty)))
                {
                  z_9 = ATgetFirst((ATermList) y_9);
                  a_10 = (ATerm) ATgetNext((ATermList) y_9);
                  l_9 :
                  if(((ATgetType(a_10) == AT_LIST) && ((ATermList) a_10 != ATempty)))
                    {
                      p_9 = ATgetFirst((ATermList) a_10);
                      q_9 = (ATerm) ATgetNext((ATermList) a_10);
                      m_9 :
                      if(match_cons(c_10, sym_Call_2))
                        {
                          r_9 = ATgetArgument(c_10, 0);
                          t_9 = ATgetArgument(c_10, 1);
                          n_9 :
                          if(match_cons(r_9, sym_SVar_1))
                            {
                              s_9 = ATgetArgument(r_9, 0);
                              o_9 :
                              if(((ATermList) t_9 == ATempty))
                                {
                                  {
                                    ATerm a_7;
                                    a_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_b_7, not_null(s_9)));
                                      {
                                        ATerm f_0 (ATerm t)
                                        {
                                          t = term_y_6;
                                          return(t);
                                        }
                                        t = assert_1(t, f_0);
                                      }
                                    }
                                    t = a_7;
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATermList) a_10 == ATempty))
                        {
                          {
                            ATerm c_7;
                            c_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_7, not_null(c_10)));
                              {
                                ATerm m_0 (ATerm t)
                                {
                                  t = term_z_6;
                                  return(t);
                                }
                                t = assert_1(t, m_0);
                              }
                            }
                            t = c_7;
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
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm substitute_args_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = term_z_6;
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      t = term_y_6;
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
      o_10 = t;
      k_10 :
      if(match_cons(o_10, sym__3))
        {
          p_10 = ATgetArgument(o_10, 0);
          q_10 = ATgetArgument(o_10, 1);
          r_10 = ATgetArgument(o_10, 2);
          {
            if(((l_10 != NULL) && (l_10 != p_10)))
              _fail(p_10);
            else
              l_10 = p_10;
            {
              if(((m_10 != NULL) && (m_10 != q_10)))
                _fail(q_10);
              else
                m_10 = q_10;
              {
                if(((n_10 != NULL) && (n_10 != r_10)))
                  _fail(r_10);
                else
                  n_10 = r_10;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), not_null(m_10));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(n_10);
                      {
                        ATerm r_0 (ATerm t)
                        {
                          ATerm s_0 (ATerm t)
                          {
                            ATerm e_7 = t;
                            int f_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                LocalPopChoice(f_7);
                              }
                            else
                              {
                                t = e_7;
                                t = SubsArgCall2_0(t);
                              }
                            return(t);
                          }
                          t = try_1(t, s_0);
                          return(t);
                        }
                        t = topdown_1(t, r_0);
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
    t = scope_2(t, p_0, q_0);
    return(t);
  }
  t = scope_2(t, n_0, o_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  u_10 :
  if(((ATgetType(v_10) == AT_LIST) && ((ATermList) v_10 != ATempty)))
    {
      w_10 = ATgetFirst((ATermList) v_10);
      x_10 = (ATerm) ATgetNext((ATermList) v_10);
      t = not_null(w_10);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm m_115 (ATerm))
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_0 (ATerm t)
      {
        t = split_2(t, _id, m_115);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
            h_11 = t;
            c_11 :
            if(match_cons(h_11, sym__2))
              {
                i_11 = ATgetArgument(h_11, 0);
                m_11 = ATgetArgument(h_11, 1);
                d_11 :
                if(match_cons(i_11, sym_SDef_3))
                  {
                    j_11 = ATgetArgument(i_11, 0);
                    k_11 = ATgetArgument(i_11, 1);
                    l_11 = ATgetArgument(i_11, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_11), not_null(k_11), not_null(l_11));
                  }
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
          t = zip_1(t, z_0);
        }
        return(t);
      }
      t = Let_2(t, t_0, _id);
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              t = split_2(t, _id, m_115);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
                  q_11 = t;
                  f_11 :
                  if(match_cons(q_11, sym__2))
                    {
                      r_11 = ATgetArgument(q_11, 0);
                      u_11 = ATgetArgument(q_11, 1);
                      g_11 :
                      if(match_cons(r_11, sym_VarDec_2))
                        {
                          s_11 = ATgetArgument(r_11, 0);
                          t_11 = ATgetArgument(r_11, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(u_11), not_null(t_11));
                        }
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
                t = zip_1(t, b_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, a_1, _id);
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            {
              ATerm c_1 (ATerm t)
              {
                t = m_115(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, c_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm x_85 (ATerm), ATerm y_85 (ATerm))
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
  g_12 = t;
  f_12 :
  if(match_cons(g_12, sym_Rec_2))
    {
      h_12 = ATgetArgument(g_12, 0);
      i_12 = ATgetArgument(g_12, 1);
      {
        ATerm m_12 = NULL,o_12 = NULL;
        ATerm n_12 = NULL;
        t = SSLgetAnnotations(not_null(g_12));
        {
          n_12 = t;
          if(((m_12 != NULL) && (m_12 != n_12)))
            _fail(n_12);
          else
            m_12 = n_12;
        }
        {
          t = not_null(h_12);
          {
            ATerm q_12 = NULL;
            t = x_85(t);
            {
              o_12 = t;
              {
                t = not_null(i_12);
                {
                  ATerm s_12 = NULL;
                  t = y_85(t);
                  {
                    q_12 = t;
                    {
                      ATerm t_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(o_12), not_null(q_12)), not_null(m_12));
                      {
                        t_12 = t;
                        if(((s_12 != NULL) && (s_12 != t_12)))
                          _fail(t_12);
                        else
                          s_12 = t_12;
                      }
                      t = not_null(s_12);
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
ATerm Let_2 (ATerm t, ATerm z_85 (ATerm), ATerm a_86 (ATerm))
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  f_13 = t;
  e_13 :
  if(match_cons(f_13, sym_Let_2))
    {
      g_13 = ATgetArgument(f_13, 0);
      h_13 = ATgetArgument(f_13, 1);
      {
        ATerm l_13 = NULL,n_13 = NULL;
        ATerm m_13 = NULL;
        t = SSLgetAnnotations(not_null(f_13));
        {
          m_13 = t;
          if(((l_13 != NULL) && (l_13 != m_13)))
            _fail(m_13);
          else
            l_13 = m_13;
        }
        {
          t = not_null(g_13);
          {
            ATerm p_13 = NULL;
            t = z_85(t);
            {
              n_13 = t;
              {
                t = not_null(h_13);
                {
                  ATerm r_13 = NULL;
                  t = a_86(t);
                  {
                    p_13 = t;
                    {
                      ATerm s_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(n_13), not_null(p_13)), not_null(l_13));
                      {
                        s_13 = t;
                        if(((r_13 != NULL) && (r_13 != s_13)))
                          _fail(s_13);
                        else
                          r_13 = s_13;
                      }
                      t = not_null(r_13);
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
ATerm sboundin_3 (ATerm t, ATerm n_115 (ATerm), ATerm o_115 (ATerm), ATerm p_115 (ATerm))
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, n_115, n_115);
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      {
        ATerm n_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, p_115, p_115, n_115);
            LocalPopChoice(p_7);
          }
        else
          {
            t = n_7;
            t = Rec_2(t, p_115, n_115);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
  a_14 = t;
  z_13 :
  if(match_cons(a_14, sym_Rec_2))
    {
      b_14 = ATgetArgument(a_14, 0);
      c_14 = ATgetArgument(a_14, 1);
      t = (ATerm) ATinsert(ATempty, not_null(b_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_SDef_3))
    {
      l_14 = ATgetArgument(k_14, 0);
      m_14 = ATgetArgument(k_14, 1);
      n_14 = ATgetArgument(k_14, 2);
      {
        t = not_null(m_14);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
            r_14 = t;
            i_14 :
            if(match_cons(r_14, sym_VarDec_2))
              {
                s_14 = ATgetArgument(r_14, 0);
                t_14 = ATgetArgument(r_14, 1);
                t = not_null(s_14);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, d_1);
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
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_Let_2))
    {
      c_15 = ATgetArgument(b_15, 0);
      d_15 = ATgetArgument(b_15, 1);
      {
        t = not_null(c_15);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
            g_15 = t;
            z_14 :
            if(match_cons(g_15, sym_SDef_3))
              {
                h_15 = ATgetArgument(g_15, 0);
                i_15 = ATgetArgument(g_15, 1);
                j_15 = ATgetArgument(g_15, 2);
                t = not_null(h_15);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, e_1);
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
  ATerm f_1 (ATerm t)
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        {
          ATerm t_7 = t;
          int u_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(u_7);
            }
          else
            {
              t = t_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, f_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm i_115 (ATerm))
{
  t = Scope_2(t, i_115, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm n_84 (ATerm))
{
  ATerm u_15 = NULL,v_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym_DynamicRules_1))
    {
      v_15 = ATgetArgument(u_15, 0);
      {
        ATerm y_15 = NULL,a_16 = NULL;
        ATerm z_15 = NULL;
        t = SSLgetAnnotations(not_null(u_15));
        {
          z_15 = t;
          if(((y_15 != NULL) && (y_15 != z_15)))
            _fail(z_15);
          else
            y_15 = z_15;
        }
        {
          t = not_null(v_15);
          {
            ATerm c_16 = NULL;
            t = n_84(t);
            {
              a_16 = t;
              {
                ATerm d_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(a_16)), not_null(y_15));
                {
                  d_16 = t;
                  if(((c_16 != NULL) && (c_16 != d_16)))
                    _fail(d_16);
                  else
                    c_16 = d_16;
                }
                t = not_null(c_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm l_115 (ATerm))
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, l_115, j_115);
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      t = DynamicRules_1(t, j_115);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL;
  k_16 = t;
  j_16 :
  if(match_cons(k_16, sym_DynamicRules_1))
    {
      l_16 = ATgetArgument(k_16, 0);
      {
        t = not_null(l_16);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL;
  q_16 = t;
  p_16 :
  if(match_cons(q_16, sym_Var_1))
    {
      r_16 = ATgetArgument(q_16, 0);
      t = (ATerm) ATinsert(ATempty, not_null(r_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm c_104 (ATerm))
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym__2))
    {
      x_16 = ATgetArgument(w_16, 0);
      y_16 = ATgetArgument(w_16, 1);
      {
        t = not_null(x_16);
        {
          ATerm c_17 (ATerm t)
          {
            ATerm f_8 = t;
            int g_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(y_16);
                LocalPopChoice(g_8);
              }
            else
              {
                t = f_8;
                {
                  ATerm l_8 = t;
                  int m_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(y_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, c_104, g_1);
                      t = c_17(t);
                      LocalPopChoice(m_8);
                    }
                  else
                    {
                      t = l_8;
                      t = Cons_2(t, _id, c_17);
                    }
                }
              }
            return(t);
          }
          t = c_17(t);
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
ATerm UfShift_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
  g_17 = t;
  e_17 :
  if(match_cons(g_17, sym__2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      f_17 :
      if(((ATgetType(i_17) == AT_LIST) && ((ATermList) i_17 != ATempty)))
        {
          j_17 = ATgetFirst((ATermList) i_17);
          k_17 = (ATerm) ATgetNext((ATermList) i_17);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_17)), not_null(j_17)), not_null(k_17));
        }
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
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
  z_17 = t;
  x_17 :
  if(((ATgetType(z_17) == AT_LIST) && ((ATermList) z_17 != ATempty)))
    {
      a_18 = ATgetFirst((ATermList) z_17);
      d_18 = (ATerm) ATgetNext((ATermList) z_17);
      y_17 :
      if(match_cons(a_18, sym__2))
        {
          b_18 = ATgetArgument(a_18, 0);
          c_18 = ATgetArgument(a_18, 1);
          {
            ATerm h_18 = NULL,i_18 = NULL,o_18 = NULL,u_18 = NULL;
            ATerm n_8;
            n_8 = t;
            {
              ATerm j_18 = NULL;
              ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
              t = not_null(c_18);
              {
                j_18 = t;
                {
                  t = SSL_explode_term(not_null(j_18));
                  {
                    l_18 = t;
                    s_17 :
                    if(match_cons(l_18, sym__2))
                      {
                        m_18 = ATgetArgument(l_18, 0);
                        n_18 = ATgetArgument(l_18, 1);
                        {
                          if(((h_18 != NULL) && (h_18 != m_18)))
                            _fail(m_18);
                          else
                            h_18 = m_18;
                          if(((i_18 != NULL) && (i_18 != n_18)))
                            _fail(n_18);
                          else
                            i_18 = n_18;
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
            t = n_8;
            {
              ATerm o_8;
              o_8 = t;
              {
                ATerm p_18 = NULL;
                ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
                t = not_null(b_18);
                {
                  p_18 = t;
                  {
                    t = SSL_explode_term(not_null(p_18));
                    {
                      r_18 = t;
                      v_17 :
                      if(match_cons(r_18, sym__2))
                        {
                          s_18 = ATgetArgument(r_18, 0);
                          t_18 = ATgetArgument(r_18, 1);
                          {
                            if(((h_18 != NULL) && (h_18 != s_18)))
                              _fail(s_18);
                            else
                              h_18 = s_18;
                            if(((o_18 != NULL) && (o_18 != t_18)))
                              _fail(t_18);
                            else
                              o_18 = t_18;
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
              t = o_8;
              {
                ATerm v_18 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), not_null(i_18));
                {
                  t = zip_1(t, _id);
                  {
                    v_18 = t;
                    if(((u_18 != NULL) && (u_18 != v_18)))
                      _fail(v_18);
                    else
                      u_18 = v_18;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_18), not_null(d_18));
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
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  f_19 = t;
  d_19 :
  if(((ATgetType(f_19) == AT_LIST) && ((ATermList) f_19 != ATempty)))
    {
      g_19 = ATgetFirst((ATermList) f_19);
      j_19 = (ATerm) ATgetNext((ATermList) f_19);
      e_19 :
      if(match_cons(g_19, sym__2))
        {
          h_19 = ATgetArgument(g_19, 0);
          i_19 = ATgetArgument(g_19, 1);
          {
            ATerm l_19 = NULL;
            if(((h_19 != NULL) && (h_19 != i_19)))
              _fail(i_19);
            else
              h_19 = i_19;
            {
              if(((l_19 != NULL) && (l_19 != j_19)))
                _fail(j_19);
              else
                l_19 = j_19;
              t = not_null(l_19);
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
ATerm while_not_2 (ATerm t, ATerm c_98 (ATerm), ATerm d_98 (ATerm))
{
  ATerm n_19 (ATerm t)
  {
    ATerm y_8 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_98(t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = y_8;
        {
          t = d_98(t);
          t = n_19(t);
        }
      }
    return(t);
  }
  t = n_19(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm h_98 (ATerm))
{
  t = f_98(t);
  t = while_not_2(t, g_98, h_98);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym__2))
    {
      r_19 = ATgetArgument(q_19, 0);
      s_19 = ATgetArgument(q_19, 1);
      if(((r_19 != NULL) && (r_19 != s_19)))
        _fail(s_19);
      else
        r_19 = s_19;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_104 (ATerm), ATerm b_104 (ATerm))
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  x_19 :
  if(((ATgetType(y_19) == AT_LIST) && ((ATermList) y_19 != ATempty)))
    {
      z_19 = ATgetFirst((ATermList) y_19);
      a_20 = (ATerm) ATgetNext((ATermList) y_19);
      {
        t = b_104(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm d_20 = NULL;
            d_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_19), not_null(d_20));
              t = a_104(t);
            }
            return(t);
          }
          t = fetch_1(t, h_1);
        }
        t = not_null(a_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm f_104 (ATerm))
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym__2))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      {
        t = not_null(k_20);
        {
          ATerm p_20 (ATerm t)
          {
            ATerm e_9 = t;
            int f_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(f_9);
              }
            else
              {
                t = e_9;
                {
                  ATerm g_9 = t;
                  int d_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_1 (ATerm t)
                      {
                        t = not_null(l_20);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_104, i_1);
                      t = p_20(t);
                      LocalPopChoice(d_10);
                    }
                  else
                    {
                      t = g_9;
                      t = Cons_2(t, _id, p_20);
                    }
                }
              }
            return(t);
          }
          t = p_20(t);
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
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm j_1 (ATerm t)
        {
          ATerm r_20 = NULL;
          r_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(r_20));
          return(t);
        }
        ATerm k_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm l_1 (ATerm t)
        {
          ATerm g_10 = t;
          int h_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_1 (ATerm t)
              {
                ATerm i_10 = t;
                int j_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(j_10);
                  }
                else
                  {
                    t = i_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, m_1);
              LocalPopChoice(h_10);
            }
          else
            {
              t = g_10;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, j_1, k_1, l_1);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm s_99 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm x_20 (ATerm t)
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_99(t);
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        {
          ATerm y_10 = t;
          int z_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_20 = NULL;
              ATerm a_11;
              a_11 = t;
              {
                ATerm w_20 = NULL;
                t = r_99(t);
                {
                  w_20 = t;
                  if(((v_20 != NULL) && (v_20 != w_20)))
                    _fail(w_20);
                  else
                    v_20 = w_20;
                }
              }
              t = a_11;
              {
                ATerm n_1 (ATerm t)
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = not_null(v_20);
                    return(t);
                  }
                  t = split_2(t, x_20, p_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm o_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = s_99(t, n_1, x_20, o_1);
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, q_1, union_0, _id);
                }
              }
              LocalPopChoice(z_10);
            }
          else
            {
              t = y_10;
              {
                ATerm r_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, r_1, union_0, x_20);
              }
            }
        }
      }
    return(t);
  }
  t = x_20(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm b_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(e_11);
      }
    else
      {
        t = b_11;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, s_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  b_21 :
  if(match_cons(g_21, sym_LRule_1))
    {
      h_21 = ATgetArgument(g_21, 0);
      c_21 :
      if(match_cons(h_21, sym_Rule_3))
        {
          d_21 = ATgetArgument(h_21, 0);
          e_21 = ATgetArgument(h_21, 1);
          f_21 = ATgetArgument(h_21, 2);
          {
            t = not_null(d_21);
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
      if(match_cons(g_21, sym_Scope_2))
        {
          h_21 = ATgetArgument(g_21, 0);
          i_21 = ATgetArgument(g_21, 1);
          t = not_null(h_21);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm y_0 (ATerm))
{
  ATerm z_21 = NULL,a_22 = NULL;
  z_21 = t;
  y_21 :
  if(match_cons(z_21, sym_Var_1))
    {
      a_22 = ATgetArgument(z_21, 0);
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_22 = NULL,f_22 = NULL;
            ATerm e_22 = NULL;
            t = SSLgetAnnotations(not_null(z_21));
            {
              e_22 = t;
              if(((d_22 != NULL) && (d_22 != e_22)))
                _fail(e_22);
              else
                d_22 = e_22;
            }
            {
              t = not_null(a_22);
              {
                ATerm h_22 = NULL;
                t = y_0(t);
                {
                  f_22 = t;
                  {
                    ATerm i_22 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_22)), not_null(d_22));
                    {
                      i_22 = t;
                      if(((h_22 != NULL) && (h_22 != i_22)))
                        _fail(i_22);
                      else
                        h_22 = i_22;
                    }
                    t = not_null(h_22);
                  }
                }
              }
            }
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            {
              ATerm l_22 = NULL,n_22 = NULL;
              ATerm m_22 = NULL;
              t = SSLgetAnnotations(not_null(z_21));
              {
                m_22 = t;
                if(((l_22 != NULL) && (l_22 != m_22)))
                  _fail(m_22);
                else
                  l_22 = m_22;
              }
              {
                t = not_null(a_22);
                {
                  ATerm p_22 = NULL;
                  t = y_0(t);
                  {
                    n_22 = t;
                    {
                      ATerm q_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_22)), not_null(l_22));
                      {
                        q_22 = t;
                        if(((p_22 != NULL) && (p_22 != q_22)))
                          _fail(q_22);
                        else
                          p_22 = q_22;
                      }
                      t = not_null(p_22);
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
ATerm DistBinding_2 (ATerm t, ATerm m_101 (ATerm), ATerm n_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  d_23 = t;
  c_23 :
  if(match_cons(d_23, sym__3))
    {
      e_23 = ATgetArgument(d_23, 0);
      f_23 = ATgetArgument(d_23, 1);
      g_23 = ATgetArgument(d_23, 2);
      {
        t = not_null(e_23);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm k_23 = NULL;
            k_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_23), not_null(g_23));
              t = m_101(t);
            }
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            ATerm m_23 = NULL;
            m_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_23), not_null(f_23));
              t = m_101(t);
            }
            return(t);
          }
          t = n_101(t, t_1, u_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm s_101 (ATerm), ATerm t_101 (ATerm, ATerm (ATerm)))
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym__2))
    {
      z_23 = ATgetArgument(y_23, 0);
      a_24 = ATgetArgument(y_23, 1);
      {
        ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,l_24 = NULL;
        ATerm p_11;
        p_11 = t;
        {
          ATerm g_24 = NULL;
          t = not_null(z_23);
          {
            ATerm h_24 = NULL;
            t = s_101(t);
            {
              g_24 = t;
              {
                if(((d_24 != NULL) && (d_24 != g_24)))
                  _fail(g_24);
                else
                  d_24 = g_24;
                {
                  ATerm i_24 = NULL,k_24 = NULL;
                  t = map_1(t, new_0);
                  {
                    h_24 = t;
                    {
                      if(((e_24 != NULL) && (e_24 != h_24)))
                        _fail(h_24);
                      else
                        e_24 = h_24;
                      {
                        ATerm j_24 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_24), not_null(e_24));
                        {
                          t = zip_1(t, _id);
                          {
                            j_24 = t;
                            if(((i_24 != NULL) && (i_24 != j_24)))
                              _fail(j_24);
                            else
                              i_24 = j_24;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(a_24));
                          {
                            t = conc_0(t);
                            {
                              k_24 = t;
                              if(((f_24 != NULL) && (f_24 != k_24)))
                                _fail(k_24);
                              else
                                f_24 = k_24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = p_11;
        {
          ATerm m_24 = NULL;
          t = not_null(z_23);
          {
            ATerm v_1 (ATerm t)
            {
              t = not_null(e_24);
              return(t);
            }
            t = t_101(t, v_1);
            {
              m_24 = t;
              if(((l_24 != NULL) && (l_24 != m_24)))
                _fail(m_24);
              else
                l_24 = m_24;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(l_24), not_null(a_24), not_null(f_24));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  w_24 = t;
  u_24 :
  if(match_cons(w_24, sym__2))
    {
      x_24 = ATgetArgument(w_24, 0);
      y_24 = ATgetArgument(w_24, 1);
      v_24 :
      if(((ATgetType(y_24) == AT_LIST) && ((ATermList) y_24 != ATempty)))
        {
          z_24 = ATgetFirst((ATermList) y_24);
          a_25 = (ATerm) ATgetNext((ATermList) y_24);
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_24), not_null(a_25));
        }
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
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  i_25 = t;
  f_25 :
  if(match_cons(i_25, sym__2))
    {
      j_25 = ATgetArgument(i_25, 0);
      k_25 = ATgetArgument(i_25, 1);
      g_25 :
      if(((ATgetType(k_25) == AT_LIST) && ((ATermList) k_25 != ATempty)))
        {
          l_25 = ATgetFirst((ATermList) k_25);
          o_25 = (ATerm) ATgetNext((ATermList) k_25);
          h_25 :
          if(match_cons(l_25, sym__2))
            {
              m_25 = ATgetArgument(l_25, 0);
              n_25 = ATgetArgument(l_25, 1);
              {
                ATerm q_25 = NULL;
                if(((j_25 != NULL) && (j_25 != m_25)))
                  _fail(m_25);
                else
                  j_25 = m_25;
                {
                  if(((q_25 != NULL) && (q_25 != n_25)))
                    _fail(n_25);
                  else
                    q_25 = n_25;
                  t = not_null(q_25);
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
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm g_101 (ATerm, ATerm (ATerm)))
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym__2))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      {
        t = not_null(w_25);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              t = not_null(x_25);
              return(t);
            }
            t = split_2(t, _id, x_1);
            t = lookup_0(t);
            return(t);
          }
          t = g_101(t, w_1);
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
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
  e_26 = t;
  d_26 :
  if(match_cons(e_26, sym__2))
    {
      f_26 = ATgetArgument(e_26, 0);
      g_26 = ATgetArgument(e_26, 1);
      {
        t = not_null(f_26);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm j_26 = NULL;
            j_26 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_26), not_null(g_26));
              t = l_100(t);
            }
            return(t);
          }
          t = _all(t, y_1);
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
  ATerm n_26 (ATerm t)
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_100(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = all_dist_1(t, n_26);
      }
    return(t);
  }
  t = n_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm u_101 (ATerm, ATerm (ATerm)), ATerm v_101 (ATerm), ATerm w_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_101 (ATerm, ATerm (ATerm)))
{
  ATerm p_26 = NULL;
  p_26 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), (ATerm) ATempty);
    {
      ATerm s_26 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm z_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, u_101);
              LocalPopChoice(a_12);
            }
          else
            {
              t = z_11;
              {
                t = RnBinding_2(t, v_101, x_101);
                t = DistBinding_2(t, s_26, w_101);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, z_1);
        return(t);
      }
      t = s_26(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm t_26 (ATerm t, ATerm u_26 (ATerm))
  {
    t = Scope_2(t, u_26, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, t_26);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm InlineCall_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  ATerm m_29 (ATerm t)
  {
    ATerm b_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_27));
    {
      ATerm a_2 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = rewrite_1(t, a_2);
      {
        b_28 = t;
        b_27 :
        if(match_cons(b_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_x_6;
    return(t);
  }
  ATerm n_29 (ATerm t)
  {
    ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
    ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_27));
    {
      ATerm b_2 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        h_28 = t;
        h_27 :
        if(match_cons(h_28, sym_Defined_3))
          {
            i_28 = ATgetArgument(h_28, 0);
            j_28 = ATgetArgument(h_28, 1);
            k_28 = ATgetArgument(h_28, 2);
            i_27 :
            if(match_string(i_28, "v_0"))
              {
                ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
                if(((d_28 != NULL) && (d_28 != j_28)))
                  _fail(j_28);
                else
                  d_28 = j_28;
                {
                  if(((y_27 != NULL) && (y_27 != k_28)))
                    _fail(k_28);
                  else
                    y_27 = k_28;
                  {
                    t = not_null(d_28);
                    {
                      t = strename_0(t);
                      {
                        l_28 = t;
                        f_27 :
                        if(match_cons(l_28, sym_SDef_3))
                          {
                            m_28 = ATgetArgument(l_28, 0);
                            n_28 = ATgetArgument(l_28, 1);
                            q_28 = ATgetArgument(l_28, 2);
                            g_27 :
                            if(((ATgetType(n_28) == AT_LIST) && ((ATermList) n_28 != ATempty)))
                              {
                                o_28 = ATgetFirst((ATermList) n_28);
                                p_28 = (ATerm) ATgetNext((ATermList) n_28);
                                {
                                  ATerm r_28 = NULL;
                                  if(((y_27 != NULL) && (y_27 != m_28)))
                                    _fail(m_28);
                                  else
                                    y_27 = m_28;
                                  {
                                    if(((e_28 != NULL) && (e_28 != n_28)))
                                      _fail(n_28);
                                    else
                                      e_28 = n_28;
                                    {
                                      if(((f_28 != NULL) && (f_28 != q_28)))
                                        _fail(q_28);
                                      else
                                        f_28 = q_28;
                                      {
                                        t = new_0(t);
                                        {
                                          r_28 = t;
                                          {
                                            if(((g_28 != NULL) && (g_28 != r_28)))
                                              _fail(r_28);
                                            else
                                              g_28 = r_28;
                                            {
                                              ATerm c_12;
                                              c_12 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(y_27)), term_d_12);
                                                {
                                                  ATerm c_2 (ATerm t)
                                                  {
                                                    t = term_b_12;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, c_2);
                                                }
                                              }
                                              t = c_12;
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
                        else
                          {
                            _fail(t);
                          }
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
      }
    }
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_28), not_null(e_28), not_null(f_28))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_28)), (ATerm) ATempty));
    return(t);
  }
  ATerm o_29 (ATerm t)
  {
    ATerm t_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_27));
    {
      ATerm d_2 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        t_28 = t;
        k_27 :
        if(match_cons(t_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_x_6;
    return(t);
  }
  ATerm p_29 (ATerm t)
  {
    ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
    ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_27));
    {
      ATerm e_2 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        a_29 = t;
        p_27 :
        if(match_cons(a_29, sym_Defined_3))
          {
            b_29 = ATgetArgument(a_29, 0);
            c_29 = ATgetArgument(a_29, 1);
            d_29 = ATgetArgument(a_29, 2);
            q_27 :
            if(match_string(b_29, "u_0"))
              {
                ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
                if(((w_28 != NULL) && (w_28 != c_29)))
                  _fail(c_29);
                else
                  w_28 = c_29;
                {
                  if(((y_27 != NULL) && (y_27 != d_29)))
                    _fail(d_29);
                  else
                    y_27 = d_29;
                  {
                    t = not_null(w_28);
                    {
                      t = strename_0(t);
                      {
                        e_29 = t;
                        o_27 :
                        if(match_cons(e_29, sym_SDef_3))
                          {
                            f_29 = ATgetArgument(e_29, 0);
                            g_29 = ATgetArgument(e_29, 1);
                            h_29 = ATgetArgument(e_29, 2);
                            {
                              ATerm i_29 = NULL;
                              if(((y_27 != NULL) && (y_27 != f_29)))
                                _fail(f_29);
                              else
                                y_27 = f_29;
                              {
                                if(((x_28 != NULL) && (x_28 != g_29)))
                                  _fail(g_29);
                                else
                                  x_28 = g_29;
                                {
                                  if(((y_28 != NULL) && (y_28 != h_29)))
                                    _fail(h_29);
                                  else
                                    y_28 = h_29;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, not_null(x_28), not_null(z_27), not_null(y_28));
                                    {
                                      t = substitute_args_0(t);
                                      {
                                        i_29 = t;
                                        {
                                          if(((z_28 != NULL) && (z_28 != i_29)))
                                            _fail(i_29);
                                          else
                                            z_28 = i_29;
                                          {
                                            ATerm e_12;
                                            e_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(y_27)), term_d_12);
                                              {
                                                ATerm f_2 (ATerm t)
                                                {
                                                  t = term_b_12;
                                                  return(t);
                                                }
                                                t = assert_1(t, f_2);
                                              }
                                            }
                                            t = e_12;
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
    t = not_null(z_28);
    return(t);
  }
  ATerm q_29 (ATerm t)
  {
    ATerm l_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_27));
    {
      ATerm g_2 (ATerm t)
      {
        t = term_b_12;
        return(t);
      }
      t = rewrite_1(t, g_2);
      {
        l_29 = t;
        s_27 :
        if(match_cons(l_29, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_x_6;
    return(t);
  }
  w_27 = t;
  t_27 :
  if(match_cons(w_27, sym_Call_2))
    {
      x_27 = ATgetArgument(w_27, 0);
      z_27 = ATgetArgument(w_27, 1);
      u_27 :
      if(match_cons(x_27, sym_SVar_1))
        {
          y_27 = ATgetArgument(x_27, 0);
          v_27 :
          if(((ATermList) z_27 == ATempty))
            {
              {
                ATerm j_12 = t;
                int k_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = m_29(t);
                    LocalPopChoice(k_12);
                  }
                else
                  {
                    t = j_12;
                    {
                      ATerm l_12 = t;
                      int p_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = n_29(t);
                          LocalPopChoice(p_12);
                        }
                      else
                        {
                          t = l_12;
                          {
                            ATerm r_12 = t;
                            int u_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = o_29(t);
                                LocalPopChoice(u_12);
                              }
                            else
                              {
                                t = r_12;
                                {
                                  ATerm v_12 = t;
                                  int w_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = p_29(t);
                                      LocalPopChoice(w_12);
                                    }
                                  else
                                    {
                                      t = v_12;
                                      t = q_29(t);
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
              ATerm x_12 = t;
              int y_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_29(t);
                  LocalPopChoice(y_12);
                }
              else
                {
                  t = x_12;
                  {
                    ATerm z_12 = t;
                    int a_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = o_29(t);
                        LocalPopChoice(a_13);
                      }
                    else
                      {
                        t = z_12;
                        {
                          ATerm b_13 = t;
                          int c_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = p_29(t);
                              LocalPopChoice(c_13);
                            }
                          else
                            {
                              t = b_13;
                              t = q_29(t);
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
ATerm UndefineSDef_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym_SDef_3))
    {
      k_30 = ATgetArgument(j_30, 0);
      l_30 = ATgetArgument(j_30, 1);
      m_30 = ATgetArgument(j_30, 2);
      {
        ATerm d_13;
        d_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(k_30)), term_d_12);
          {
            ATerm h_2 (ATerm t)
            {
              t = term_b_12;
              return(t);
            }
            t = assert_1(t, h_2);
          }
        }
        t = d_13;
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
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  q_30 :
  if(((ATgetType(r_30) == AT_LIST) && ((ATermList) r_30 != ATempty)))
    {
      s_30 = ATgetFirst((ATermList) r_30);
      t_30 = (ATerm) ATgetNext((ATermList) r_30);
      t = not_null(t_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym__2))
    {
      b_31 = ATgetArgument(a_31, 0);
      c_31 = ATgetArgument(a_31, 1);
      {
        ATerm i_13;
        i_13 = t;
        {
          ATerm f_31 = NULL;
          ATerm g_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_31), not_null(c_31));
          {
            ATerm j_13 = t;
            int k_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(k_13);
              }
            else
              {
                t = j_13;
                t = (ATerm) ATempty;
              }
            {
              g_31 = t;
              if(((f_31 != NULL) && (f_31 != g_31)))
                _fail(g_31);
              else
                f_31 = g_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_31), not_null(c_31), not_null(f_31));
            t = table_put_0(t);
          }
        }
        t = i_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm s_94 (ATerm))
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  ATerm o_13;
  o_13 = t;
  {
    ATerm q_31 = NULL;
    ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
    t = s_94(t);
    {
      q_31 = t;
      {
        if(((p_31 != NULL) && (p_31 != q_31)))
          _fail(q_31);
        else
          p_31 = q_31;
        {
          ATerm q_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_31), term_u_13);
              t = table_get_0(t);
              LocalPopChoice(t_13);
            }
          else
            {
              t = q_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            r_31 = t;
            m_31 :
            if(((ATgetType(r_31) == AT_LIST) && ((ATermList) r_31 != ATempty)))
              {
                s_31 = ATgetFirst((ATermList) r_31);
                t_31 = (ATerm) ATgetNext((ATermList) r_31);
                {
                  if(((o_31 != NULL) && (o_31 != s_31)))
                    _fail(s_31);
                  else
                    o_31 = s_31;
                  {
                    if(((n_31 != NULL) && (n_31 != t_31)))
                      _fail(t_31);
                    else
                      n_31 = t_31;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(p_31), term_u_13, not_null(n_31));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(o_31);
                          {
                            ATerm i_2 (ATerm t)
                            {
                              ATerm u_31 = NULL;
                              u_31 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_31), not_null(u_31));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, i_2);
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
  t = o_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm k_111 (ATerm), ATerm l_111 (ATerm))
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_111(t);
      t = l_111(t);
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        t = l_111(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm r_94 (ATerm))
{
  ATerm f_33 = NULL;
  ATerm x_13;
  x_13 = t;
  {
    ATerm g_33 = NULL;
    ATerm l_33 = NULL;
    t = r_94(t);
    {
      g_33 = t;
      {
        if(((f_33 != NULL) && (f_33 != g_33)))
          _fail(g_33);
        else
          f_33 = g_33;
        {
          ATerm v_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_33), term_u_13);
          {
            ATerm y_13 = t;
            int d_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_14);
              }
            else
              {
                t = y_13;
                t = (ATerm) ATempty;
              }
            {
              v_33 = t;
              if(((l_33 != NULL) && (l_33 != v_33)))
                _fail(v_33);
              else
                l_33 = v_33;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_33), term_u_13, (ATerm) ATinsert(CheckATermList(not_null(l_33)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = x_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm t_94 (ATerm), ATerm u_94 (ATerm))
{
  t = begin_scope_1(t, t_94);
  {
    ATerm j_2 (ATerm t)
    {
      t = end_scope_1(t, t_94);
      return(t);
    }
    t = restore_always_2(t, u_94, j_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    t = term_b_12;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, k_2, l_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm v_94 (ATerm))
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  d_34 :
  if(match_cons(e_34, sym__2))
    {
      f_34 = ATgetArgument(e_34, 0);
      g_34 = ATgetArgument(e_34, 1);
      {
        ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
        ATerm g_14;
        g_14 = t;
        {
          ATerm m_34 = NULL;
          ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
          t = v_94(t);
          {
            m_34 = t;
            {
              if(((j_34 != NULL) && (j_34 != m_34)))
                _fail(m_34);
              else
                j_34 = m_34;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_34), not_null(f_34), not_null(g_34));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_34), term_u_13);
                        t = table_get_0(t);
                        LocalPopChoice(o_14);
                      }
                    else
                      {
                        t = h_14;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_34 = t;
                      c_34 :
                      if(((ATgetType(n_34) == AT_LIST) && ((ATermList) n_34 != ATempty)))
                        {
                          o_34 = ATgetFirst((ATermList) n_34);
                          p_34 = (ATerm) ATgetNext((ATermList) n_34);
                          {
                            if(((k_34 != NULL) && (k_34 != o_34)))
                              _fail(o_34);
                            else
                              k_34 = o_34;
                            {
                              if(((l_34 != NULL) && (l_34 != p_34)))
                                _fail(p_34);
                              else
                                l_34 = p_34;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_34), term_u_13, (ATerm) ATinsert(CheckATermList(not_null(l_34)), (ATerm) ATinsert(CheckATermList(not_null(k_34)), not_null(f_34))));
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
        t = g_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AddSDef_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  v_34 = t;
  u_34 :
  if(match_cons(v_34, sym_SDef_3))
    {
      w_34 = ATgetArgument(v_34, 0);
      x_34 = ATgetArgument(v_34, 1);
      y_34 = ATgetArgument(v_34, 2);
      {
        ATerm p_14;
        p_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_34)), (ATerm) ATmakeAppl(sym_Defined_3, term_q_14, not_null(v_34), not_null(w_34)));
          {
            ATerm m_2 (ATerm t)
            {
              t = term_b_12;
              return(t);
            }
            t = assert_1(t, m_2);
          }
        }
        t = p_14;
        {
          ATerm u_14;
          u_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_34)), (ATerm) ATmakeAppl(sym_Defined_3, term_v_14, not_null(v_34), not_null(w_34)));
            {
              ATerm n_2 (ATerm t)
              {
                t = term_b_12;
                return(t);
              }
              t = assert_1(t, n_2);
            }
          }
          t = u_14;
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm w_14 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_14;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm))
{
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_102(t);
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      {
        ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
        g_35 = t;
        f_35 :
        if(((ATgetType(g_35) == AT_LIST) && ((ATermList) g_35 != ATempty)))
          {
            h_35 = ATgetFirst((ATermList) g_35);
            i_35 = (ATerm) ATgetNext((ATermList) g_35);
            {
              ATerm l_35 = NULL,n_35 = NULL;
              ATerm e_15;
              e_15 = t;
              {
                ATerm m_35 = NULL;
                t = not_null(h_35);
                {
                  t = x_102(t);
                  {
                    m_35 = t;
                    if(((l_35 != NULL) && (l_35 != m_35)))
                      _fail(m_35);
                    else
                      l_35 = m_35;
                  }
                }
              }
              t = e_15;
              {
                ATerm o_35 = NULL;
                t = not_null(i_35);
                {
                  t = foldr_3(t, v_102, w_102, x_102);
                  {
                    o_35 = t;
                    if(((n_35 != NULL) && (n_35 != o_35)))
                      _fail(o_35);
                    else
                      n_35 = o_35;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_35), not_null(n_35));
                  t = w_102(t);
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
ATerm crush_3 (ATerm t, ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm))
{
  ATerm w_35 = NULL;
  ATerm y_35 = NULL;
  w_35 = t;
  {
    ATerm z_35 = NULL;
    ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
    t = not_null(w_35);
    {
      z_35 = t;
      {
        t = SSL_explode_term(not_null(z_35));
        {
          b_36 = t;
          v_35 :
          if(match_cons(b_36, sym__2))
            {
              c_36 = ATgetArgument(b_36, 0);
              d_36 = ATgetArgument(b_36, 1);
              if(((y_35 != NULL) && (y_35 != d_36)))
                _fail(d_36);
              else
                y_35 = d_36;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_35);
      t = foldr_3(t, n_104, o_104, p_104);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm f_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_36 (ATerm t)
      {
        ATerm o_2 (ATerm t)
        {
          t = term_l_15;
          return(t);
        }
        t = crush_3(t, o_2, add_0, h_36);
        return(t);
      }
      t = h_36(t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = f_15;
      {
        ATerm p_2 (ATerm t)
        {
          t = term_l_15;
          return(t);
        }
        t = crush_3(t, p_2, add_0, term_size_0);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm m_85 (ATerm), ATerm n_85 (ATerm))
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
  o_36 = t;
  n_36 :
  if(match_cons(o_36, sym_LChoice_2))
    {
      p_36 = ATgetArgument(o_36, 0);
      q_36 = ATgetArgument(o_36, 1);
      {
        ATerm u_36 = NULL,w_36 = NULL;
        ATerm v_36 = NULL;
        t = SSLgetAnnotations(not_null(o_36));
        {
          v_36 = t;
          if(((u_36 != NULL) && (u_36 != v_36)))
            _fail(v_36);
          else
            u_36 = v_36;
        }
        {
          t = not_null(p_36);
          {
            ATerm y_36 = NULL;
            t = m_85(t);
            {
              w_36 = t;
              {
                t = not_null(q_36);
                {
                  ATerm a_37 = NULL;
                  t = n_85(t);
                  {
                    y_36 = t;
                    {
                      ATerm b_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(w_36), not_null(y_36)), not_null(u_36));
                      {
                        b_37 = t;
                        if(((a_37 != NULL) && (a_37 != b_37)))
                          _fail(b_37);
                        else
                          a_37 = b_37;
                      }
                      t = not_null(a_37);
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
ATerm Choice_2 (ATerm t, ATerm k_85 (ATerm), ATerm l_85 (ATerm))
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym_Choice_2))
    {
      p_37 = ATgetArgument(o_37, 0);
      q_37 = ATgetArgument(o_37, 1);
      {
        ATerm u_37 = NULL,w_37 = NULL;
        ATerm v_37 = NULL;
        t = SSLgetAnnotations(not_null(o_37));
        {
          v_37 = t;
          if(((u_37 != NULL) && (u_37 != v_37)))
            _fail(v_37);
          else
            u_37 = v_37;
        }
        {
          t = not_null(p_37);
          {
            ATerm y_37 = NULL;
            t = k_85(t);
            {
              w_37 = t;
              {
                t = not_null(q_37);
                {
                  ATerm a_38 = NULL;
                  t = l_85(t);
                  {
                    y_37 = t;
                    {
                      ATerm b_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(w_37), not_null(y_37)), not_null(u_37));
                      {
                        b_38 = t;
                        if(((a_38 != NULL) && (a_38 != b_38)))
                          _fail(b_38);
                        else
                          a_38 = b_38;
                      }
                      t = not_null(a_38);
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
ATerm Cong_2 (ATerm t, ATerm p_86 (ATerm), ATerm q_86 (ATerm))
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym_Cong_2))
    {
      o_38 = ATgetArgument(n_38, 0);
      p_38 = ATgetArgument(n_38, 1);
      {
        ATerm t_38 = NULL,v_38 = NULL;
        ATerm u_38 = NULL;
        t = SSLgetAnnotations(not_null(n_38));
        {
          u_38 = t;
          if(((t_38 != NULL) && (t_38 != u_38)))
            _fail(u_38);
          else
            t_38 = u_38;
        }
        {
          t = not_null(o_38);
          {
            ATerm x_38 = NULL;
            t = p_86(t);
            {
              v_38 = t;
              {
                t = not_null(p_38);
                {
                  ATerm z_38 = NULL;
                  t = q_86(t);
                  {
                    x_38 = t;
                    {
                      ATerm a_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(v_38), not_null(x_38)), not_null(t_38));
                      {
                        a_39 = t;
                        if(((z_38 != NULL) && (z_38 != a_39)))
                          _fail(a_39);
                        else
                          z_38 = a_39;
                      }
                      t = not_null(z_38);
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
ATerm Match_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_cons(f_40, sym_Match_1))
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
            t = x_86(t);
            {
              l_40 = t;
              {
                ATerm o_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(l_40)), not_null(j_40));
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
ATerm Seq_2 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm))
{
  ATerm s_41 = NULL,c_42 = NULL,d_42 = NULL;
  s_41 = t;
  r_41 :
  if(match_cons(s_41, sym_Seq_2))
    {
      c_42 = ATgetArgument(s_41, 0);
      d_42 = ATgetArgument(s_41, 1);
      {
        ATerm h_42 = NULL,j_42 = NULL;
        ATerm i_42 = NULL;
        t = SSLgetAnnotations(not_null(s_41));
        {
          i_42 = t;
          if(((h_42 != NULL) && (h_42 != i_42)))
            _fail(i_42);
          else
            h_42 = i_42;
        }
        {
          t = not_null(c_42);
          {
            ATerm l_42 = NULL;
            t = i_85(t);
            {
              j_42 = t;
              {
                t = not_null(d_42);
                {
                  ATerm n_42 = NULL;
                  t = j_85(t);
                  {
                    l_42 = t;
                    {
                      ATerm o_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(j_42), not_null(l_42)), not_null(h_42));
                      {
                        o_42 = t;
                        if(((n_42 != NULL) && (n_42 != o_42)))
                          _fail(o_42);
                        else
                          n_42 = o_42;
                      }
                      t = not_null(n_42);
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
ATerm Scope_2 (ATerm t, ATerm b_87 (ATerm), ATerm c_87 (ATerm))
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  z_42 :
  if(match_cons(a_43, sym_Scope_2))
    {
      b_43 = ATgetArgument(a_43, 0);
      c_43 = ATgetArgument(a_43, 1);
      {
        ATerm g_43 = NULL,i_43 = NULL;
        ATerm h_43 = NULL;
        t = SSLgetAnnotations(not_null(a_43));
        {
          h_43 = t;
          if(((g_43 != NULL) && (g_43 != h_43)))
            _fail(h_43);
          else
            g_43 = h_43;
        }
        {
          t = not_null(b_43);
          {
            ATerm k_43 = NULL;
            t = b_87(t);
            {
              i_43 = t;
              {
                t = not_null(c_43);
                {
                  ATerm m_43 = NULL;
                  t = c_87(t);
                  {
                    k_43 = t;
                    {
                      ATerm n_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(i_43), not_null(k_43)), not_null(g_43));
                      {
                        n_43 = t;
                        if(((m_43 != NULL) && (m_43 != n_43)))
                          _fail(n_43);
                        else
                          m_43 = n_43;
                      }
                      t = not_null(m_43);
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
ATerm Build_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm y_43 = NULL,z_43 = NULL;
  y_43 = t;
  x_43 :
  if(match_cons(y_43, sym_Build_1))
    {
      z_43 = ATgetArgument(y_43, 0);
      {
        ATerm c_44 = NULL,e_44 = NULL;
        ATerm d_44 = NULL;
        t = SSLgetAnnotations(not_null(y_43));
        {
          d_44 = t;
          if(((c_44 != NULL) && (c_44 != d_44)))
            _fail(d_44);
          else
            c_44 = d_44;
        }
        {
          t = not_null(z_43);
          {
            ATerm g_44 = NULL;
            t = y_86(t);
            {
              e_44 = t;
              {
                ATerm h_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(e_44)), not_null(c_44));
                {
                  h_44 = t;
                  if(((g_44 != NULL) && (g_44 != h_44)))
                    _fail(h_44);
                  else
                    g_44 = h_44;
                }
                t = not_null(g_44);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm s_45 = NULL,t_45 = NULL;
  s_45 = t;
  r_45 :
  if(match_cons(s_45, sym_SVar_1))
    {
      t_45 = ATgetArgument(s_45, 0);
      {
        ATerm w_45 = NULL,y_45 = NULL;
        ATerm x_45 = NULL;
        t = SSLgetAnnotations(not_null(s_45));
        {
          x_45 = t;
          if(((w_45 != NULL) && (w_45 != x_45)))
            _fail(x_45);
          else
            w_45 = x_45;
        }
        {
          t = not_null(t_45);
          {
            ATerm a_46 = NULL;
            t = w_85(t);
            {
              y_45 = t;
              {
                ATerm b_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(y_45)), not_null(w_45));
                {
                  b_46 = t;
                  if(((a_46 != NULL) && (a_46 != b_46)))
                    _fail(b_46);
                  else
                    a_46 = b_46;
                }
                t = not_null(a_46);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm l_86 (ATerm), ATerm m_86 (ATerm))
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL;
  t_46 = t;
  l_46 :
  if(match_cons(t_46, sym_Call_2))
    {
      u_46 = ATgetArgument(t_46, 0);
      v_46 = ATgetArgument(t_46, 1);
      {
        ATerm z_46 = NULL,b_47 = NULL;
        ATerm a_47 = NULL;
        t = SSLgetAnnotations(not_null(t_46));
        {
          a_47 = t;
          if(((z_46 != NULL) && (z_46 != a_47)))
            _fail(a_47);
          else
            z_46 = a_47;
        }
        {
          t = not_null(u_46);
          {
            ATerm d_47 = NULL;
            t = l_86(t);
            {
              b_47 = t;
              {
                t = not_null(v_46);
                {
                  ATerm f_47 = NULL;
                  t = m_86(t);
                  {
                    d_47 = t;
                    {
                      ATerm g_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(b_47), not_null(d_47)), not_null(z_46));
                      {
                        g_47 = t;
                        if(((f_47 != NULL) && (f_47 != g_47)))
                          _fail(g_47);
                        else
                          f_47 = g_47;
                      }
                      t = not_null(f_47);
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
ATerm Fail_0 (ATerm t)
{
  ATerm x_47 = NULL;
  x_47 = t;
  w_47 :
  if(match_cons(x_47, sym_Fail_0))
    {
      ATerm z_47 = NULL,b_48 = NULL;
      ATerm m_15;
      m_15 = t;
      {
        ATerm a_48 = NULL;
        t = SSLgetAnnotations(not_null(x_47));
        {
          a_48 = t;
          if(((z_47 != NULL) && (z_47 != a_48)))
            _fail(a_48);
          else
            z_47 = a_48;
        }
      }
      t = m_15;
      {
        ATerm c_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(z_47));
        {
          c_48 = t;
          if(((b_48 != NULL) && (b_48 != c_48)))
            _fail(c_48);
          else
            b_48 = c_48;
        }
        t = not_null(b_48);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm l_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym_Id_0))
    {
      ATerm n_48 = NULL,p_48 = NULL;
      ATerm n_15;
      n_15 = t;
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
      t = n_15;
      {
        ATerm q_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(n_48));
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
ATerm body_to_inline_0 (ATerm t)
{
  ATerm u_48 (ATerm t)
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        {
          ATerm q_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              LocalPopChoice(r_15);
            }
          else
            {
              t = q_15;
              {
                ATerm s_15 = t;
                int w_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, q_2, _id);
                    LocalPopChoice(w_15);
                  }
                else
                  {
                    t = s_15;
                    {
                      ATerm x_15 = t;
                      int b_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          LocalPopChoice(b_16);
                        }
                      else
                        {
                          t = x_15;
                          {
                            ATerm e_16 = t;
                            int f_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                LocalPopChoice(f_16);
                              }
                            else
                              {
                                t = e_16;
                                {
                                  ATerm g_16 = t;
                                  int h_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, r_2, _id);
                                      LocalPopChoice(h_16);
                                    }
                                  else
                                    {
                                      t = g_16;
                                      {
                                        ATerm i_16 = t;
                                        int m_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, s_2);
                                            LocalPopChoice(m_16);
                                          }
                                        else
                                          {
                                            t = i_16;
                                            {
                                              ATerm n_16 = t;
                                              int o_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_2 (ATerm t)
                                                  {
                                                    ATerm u_2 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, u_2, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, t_2);
                                                  LocalPopChoice(o_16);
                                                }
                                              else
                                                {
                                                  t = n_16;
                                                  {
                                                    ATerm s_16 = t;
                                                    int t_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm v_2 (ATerm t)
                                                        {
                                                          ATerm w_2 (ATerm t)
                                                          {
                                                            ATerm x_2 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, x_2, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, w_2);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, v_2, _id);
                                                        LocalPopChoice(t_16);
                                                      }
                                                    else
                                                      {
                                                        t = s_16;
                                                        {
                                                          ATerm u_16 = t;
                                                          int z_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              LocalPopChoice(z_16);
                                                            }
                                                          else
                                                            {
                                                              t = u_16;
                                                              {
                                                                ATerm a_17 = t;
                                                                int b_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, u_48, u_48);
                                                                    LocalPopChoice(b_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = a_17;
                                                                    t = LChoice_2(t, u_48, u_48);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = u_48(t);
  {
    ATerm d_17;
    d_17 = t;
    {
      ATerm y_2 (ATerm t)
      {
        t = term_l_17;
        return(t);
      }
      t = split_2(t, term_size_0, y_2);
      t = leq_0(t);
    }
    t = d_17;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm c_113 (ATerm))
{
  ATerm v_48 (ATerm t)
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_113(t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = _one(t, v_48);
      }
    return(t);
  }
  t = v_48(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm))
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL;
  d_49 = t;
  c_49 :
  if(match_cons(d_49, sym_SDef_3))
    {
      e_49 = ATgetArgument(d_49, 0);
      f_49 = ATgetArgument(d_49, 1);
      g_49 = ATgetArgument(d_49, 2);
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
            ATerm p_49 = NULL;
            t = b_86(t);
            {
              n_49 = t;
              {
                t = not_null(f_49);
                {
                  ATerm r_49 = NULL;
                  t = c_86(t);
                  {
                    p_49 = t;
                    {
                      t = not_null(g_49);
                      {
                        ATerm t_49 = NULL;
                        t = d_86(t);
                        {
                          r_49 = t;
                          {
                            ATerm u_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(n_49), not_null(p_49), not_null(r_49)), not_null(l_49));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inlineable_0 (ATerm t)
{
  ATerm r_50 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm t_50 = NULL;
    ATerm o_17 = t;
    if((PushChoice() == 0))
      {
        ATerm s_50 = NULL;
        s_50 = t;
        i_50 :
        if(!(match_string(s_50, "main_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_17;
      }
    {
      t_50 = t;
      if(((r_50 != NULL) && (r_50 != t_50)))
        _fail(t_50);
      else
        r_50 = t_50;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm p_17;
    p_17 = t;
    {
      ATerm q_17 = t;
      if((PushChoice() == 0))
        {
          ATerm b_3 (ATerm t)
          {
            ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
            u_50 = t;
            o_50 :
            if(match_cons(u_50, sym_Call_2))
              {
                v_50 = ATgetArgument(u_50, 0);
                x_50 = ATgetArgument(u_50, 1);
                p_50 :
                if(match_cons(v_50, sym_SVar_1))
                  {
                    w_50 = ATgetArgument(v_50, 0);
                    q_50 :
                    if(((ATermList) x_50 == ATempty))
                      {
                        if(((r_50 != NULL) && (r_50 != w_50)))
                          _fail(w_50);
                        else
                          r_50 = w_50;
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
          t = oncetd_1(t, b_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_17;
        }
    }
    t = p_17;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, z_2, _id, a_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
  r_51 = t;
  q_51 :
  if(match_cons(r_51, sym_Cong_2))
    {
      s_51 = ATgetArgument(r_51, 0);
      t_51 = ATgetArgument(r_51, 1);
      {
        ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,w_52 = NULL,a_53 = NULL,c_53 = NULL;
        ATerm r_17;
        r_17 = t;
        {
          ATerm c_52 = NULL;
          t = not_null(t_51);
          {
            ATerm f_52 = NULL;
            t = map_1(t, new_0);
            {
              c_52 = t;
              {
                if(((z_51 != NULL) && (z_51 != c_52)))
                  _fail(c_52);
                else
                  z_51 = c_52;
                {
                  t = not_null(z_51);
                  {
                    ATerm g_52 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      ATerm d_52 = NULL;
                      ATerm e_52 = NULL;
                      e_52 = t;
                      if(((d_52 != NULL) && (d_52 != e_52)))
                        _fail(e_52);
                      else
                        d_52 = e_52;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_52));
                      return(t);
                    }
                    t = map_1(t, c_3);
                    {
                      f_52 = t;
                      {
                        if(((w_51 != NULL) && (w_51 != f_52)))
                          _fail(f_52);
                        else
                          w_51 = f_52;
                        {
                          ATerm h_52 = NULL;
                          t = new_0(t);
                          {
                            g_52 = t;
                            {
                              if(((x_51 != NULL) && (x_51 != g_52)))
                                _fail(g_52);
                              else
                                x_51 = g_52;
                              {
                                t = not_null(t_51);
                                {
                                  ATerm k_52 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    h_52 = t;
                                    {
                                      if(((a_52 != NULL) && (a_52 != h_52)))
                                        _fail(h_52);
                                      else
                                        a_52 = h_52;
                                      {
                                        t = not_null(a_52);
                                        {
                                          ATerm l_52 = NULL,v_52 = NULL;
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm i_52 = NULL;
                                            ATerm j_52 = NULL;
                                            j_52 = t;
                                            if(((i_52 != NULL) && (i_52 != j_52)))
                                              _fail(j_52);
                                            else
                                              i_52 = j_52;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_52));
                                            return(t);
                                          }
                                          t = map_1(t, d_3);
                                          {
                                            k_52 = t;
                                            {
                                              if(((y_51 != NULL) && (y_51 != k_52)))
                                                _fail(k_52);
                                              else
                                                y_51 = k_52;
                                              {
                                                ATerm m_52 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_51), not_null(a_52));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    m_52 = t;
                                                    if(((l_52 != NULL) && (l_52 != m_52)))
                                                      _fail(m_52);
                                                    else
                                                      l_52 = m_52;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_52), not_null(t_51));
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL;
                                                      n_52 = t;
                                                      k_51 :
                                                      if(match_cons(n_52, sym__2))
                                                        {
                                                          o_52 = ATgetArgument(n_52, 0);
                                                          r_52 = ATgetArgument(n_52, 1);
                                                          l_51 :
                                                          if(match_cons(o_52, sym__2))
                                                            {
                                                              p_52 = ATgetArgument(o_52, 0);
                                                              q_52 = ATgetArgument(o_52, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_52))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_52)))));
                                                            }
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
                                                    t = zip_1(t, e_3);
                                                    {
                                                      v_52 = t;
                                                      if(((b_52 != NULL) && (b_52 != v_52)))
                                                        _fail(v_52);
                                                      else
                                                        b_52 = v_52;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = r_17;
        {
          ATerm t_17;
          t_17 = t;
          {
            ATerm z_52 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_51), not_null(a_52));
            {
              t = conc_0(t);
              {
                z_52 = t;
                if(((w_52 != NULL) && (w_52 != z_52)))
                  _fail(z_52);
                else
                  w_52 = z_52;
              }
            }
          }
          t = t_17;
          {
            ATerm u_17;
            u_17 = t;
            {
              ATerm b_53 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(s_51), not_null(w_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_51))));
              {
                t = Mapp2_0(t);
                {
                  b_53 = t;
                  if(((a_53 != NULL) && (a_53 != b_53)))
                    _fail(b_53);
                  else
                    a_53 = b_53;
                }
              }
            }
            t = u_17;
            {
              ATerm d_53 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(s_51), not_null(y_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_51))));
              {
                t = Bapp2_0(t);
                {
                  d_53 = t;
                  if(((c_53 != NULL) && (c_53 != d_53)))
                    _fail(d_53);
                  else
                    c_53 = d_53;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(w_52)), not_null(x_51)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(b_52)), not_null(c_53))));
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL;
  h_55 = t;
  g_55 :
  if(match_cons(h_55, sym_Build_1))
    {
      i_55 = ATgetArgument(h_55, 0);
      {
        ATerm w_17 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL;
            ATerm o_55 = NULL;
            ATerm s_55 = NULL;
            t = new_0(t);
            {
              o_55 = t;
              {
                if(((m_55 != NULL) && (m_55 != o_55)))
                  _fail(o_55);
                else
                  m_55 = o_55;
                {
                  t = not_null(i_55);
                  {
                    ATerm f_3 (ATerm t)
                    {
                      ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
                      p_55 = t;
                      t_54 :
                      if(match_cons(p_55, sym_Anno_2))
                        {
                          q_55 = ATgetArgument(p_55, 0);
                          r_55 = ATgetArgument(p_55, 1);
                          {
                            if(((k_55 != NULL) && (k_55 != q_55)))
                              _fail(q_55);
                            else
                              k_55 = q_55;
                            {
                              if(((l_55 != NULL) && (l_55 != r_55)))
                                _fail(r_55);
                              else
                                l_55 = r_55;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_55));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, f_3);
                    {
                      s_55 = t;
                      if(((n_55 != NULL) && (n_55 != s_55)))
                        _fail(s_55);
                      else
                        n_55 = s_55;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_f_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_55)), not_null(k_55))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_55))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_55))));
            LocalPopChoice(e_18);
          }
        else
          {
            t = w_17;
            {
              ATerm g_18 = t;
              int k_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL;
                  ATerm z_55 = NULL;
                  ATerm c_56 = NULL;
                  t = new_0(t);
                  {
                    z_55 = t;
                    {
                      if(((v_55 != NULL) && (v_55 != z_55)))
                        _fail(z_55);
                      else
                        v_55 = z_55;
                      {
                        t = not_null(i_55);
                        {
                          ATerm g_3 (ATerm t)
                          {
                            ATerm a_56 = NULL,b_56 = NULL;
                            a_56 = t;
                            a_55 :
                            if(match_cons(a_56, sym_RootApp_1))
                              {
                                b_56 = ATgetArgument(a_56, 0);
                                {
                                  if(((u_55 != NULL) && (u_55 != b_56)))
                                    _fail(b_56);
                                  else
                                    u_55 = b_56;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_55));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, g_3);
                          {
                            c_56 = t;
                            if(((w_55 != NULL) && (w_55 != c_56)))
                              _fail(c_56);
                            else
                              w_55 = c_56;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_55), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_55))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_55))));
                  LocalPopChoice(k_18);
                }
              else
                {
                  t = g_18;
                  {
                    ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
                    ATerm k_56 = NULL;
                    ATerm o_56 = NULL;
                    t = new_0(t);
                    {
                      k_56 = t;
                      {
                        if(((h_56 != NULL) && (h_56 != k_56)))
                          _fail(k_56);
                        else
                          h_56 = k_56;
                        {
                          t = not_null(i_55);
                          {
                            ATerm h_3 (ATerm t)
                            {
                              ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
                              l_56 = t;
                              e_55 :
                              if(match_cons(l_56, sym_App_2))
                                {
                                  m_56 = ATgetArgument(l_56, 0);
                                  n_56 = ATgetArgument(l_56, 1);
                                  {
                                    if(((f_56 != NULL) && (f_56 != m_56)))
                                      _fail(m_56);
                                    else
                                      f_56 = m_56;
                                    {
                                      if(((g_56 != NULL) && (g_56 != n_56)))
                                        _fail(n_56);
                                      else
                                        g_56 = n_56;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_56));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, h_3);
                            {
                              o_56 = t;
                              if(((i_56 != NULL) && (i_56 != o_56)))
                                _fail(o_56);
                              else
                                i_56 = o_56;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_56)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_56), not_null(g_56), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_56)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_56))));
                  }
                }
            }
          }
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
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL;
  d_57 = t;
  c_57 :
  if(match_cons(d_57, sym__2))
    {
      e_57 = ATgetArgument(d_57, 0);
      f_57 = ATgetArgument(d_57, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_57)), not_null(e_57));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,w_57 = NULL;
  n_57 = t;
  k_57 :
  if(match_cons(n_57, sym__2))
    {
      o_57 = ATgetArgument(n_57, 0);
      r_57 = ATgetArgument(n_57, 1);
      l_57 :
      if(((ATgetType(o_57) == AT_LIST) && ((ATermList) o_57 != ATempty)))
        {
          p_57 = ATgetFirst((ATermList) o_57);
          q_57 = (ATerm) ATgetNext((ATermList) o_57);
          m_57 :
          if(((ATgetType(r_57) == AT_LIST) && ((ATermList) r_57 != ATempty)))
            {
              s_57 = ATgetFirst((ATermList) r_57);
              w_57 = (ATerm) ATgetNext((ATermList) r_57);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(p_57), not_null(s_57)), (ATerm) ATmakeAppl(sym__2, not_null(q_57), not_null(w_57)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL;
  g_58 = t;
  d_58 :
  if(match_cons(g_58, sym__2))
    {
      h_58 = ATgetArgument(g_58, 0);
      i_58 = ATgetArgument(g_58, 1);
      e_58 :
      if(((ATermList) h_58 == ATempty))
        {
          f_58 :
          if(((ATermList) i_58 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm u_108 (ATerm))
{
  ATerm k_58 (ATerm t)
  {
    ATerm q_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_108(t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = q_18;
        {
          t = s_108(t);
          {
            t = _2(t, u_108, k_58);
            t = t_108(t);
          }
        }
      }
    return(t);
  }
  t = k_58(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm w_108 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_108);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  j_59 = t;
  c_59 :
  if(match_cons(j_59, sym_Call_2))
    {
      k_59 = ATgetArgument(j_59, 0);
      m_59 = ATgetArgument(j_59, 1);
      d_59 :
      if(match_cons(k_59, sym_SVar_1))
        {
          l_59 = ATgetArgument(k_59, 0);
          e_59 :
          if(match_string(l_59, "Anno_Cong__"))
            {
              f_59 :
              if(((ATgetType(m_59) == AT_LIST) && ((ATermList) m_59 != ATempty)))
                {
                  n_59 = ATgetFirst((ATermList) m_59);
                  q_59 = (ATerm) ATgetNext((ATermList) m_59);
                  g_59 :
                  if(match_cons(n_59, sym_Cong_2))
                    {
                      o_59 = ATgetArgument(n_59, 0);
                      p_59 = ATgetArgument(n_59, 1);
                      h_59 :
                      if(((ATgetType(q_59) == AT_LIST) && ((ATermList) q_59 != ATempty)))
                        {
                          r_59 = ATgetFirst((ATermList) q_59);
                          s_59 = (ATerm) ATgetNext((ATermList) q_59);
                          i_59 :
                          if(((ATermList) s_59 == ATempty))
                            {
                              {
                                ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,a_61 = NULL,c_61 = NULL,e_61 = NULL;
                                ATerm x_18;
                                x_18 = t;
                                {
                                  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(p_59)), not_null(r_59));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      d_60 = t;
                                      y_58 :
                                      if(((ATgetType(d_60) == AT_LIST) && ((ATermList) d_60 != ATempty)))
                                        {
                                          e_60 = ATgetFirst((ATermList) d_60);
                                          f_60 = (ATerm) ATgetNext((ATermList) d_60);
                                          {
                                            ATerm i_60 = NULL;
                                            if(((w_59 != NULL) && (w_59 != e_60)))
                                              _fail(e_60);
                                            else
                                              w_59 = e_60;
                                            {
                                              if(((a_60 != NULL) && (a_60 != f_60)))
                                                _fail(f_60);
                                              else
                                                a_60 = f_60;
                                              {
                                                ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL;
                                                ATerm i_3 (ATerm t)
                                                {
                                                  ATerm g_60 = NULL;
                                                  ATerm h_60 = NULL;
                                                  h_60 = t;
                                                  if(((g_60 != NULL) && (g_60 != h_60)))
                                                    _fail(h_60);
                                                  else
                                                    g_60 = h_60;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_60));
                                                  return(t);
                                                }
                                                t = map_1(t, i_3);
                                                {
                                                  i_60 = t;
                                                  {
                                                    if(((x_59 != NULL) && (x_59 != i_60)))
                                                      _fail(i_60);
                                                    else
                                                      x_59 = i_60;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(p_59)), not_null(r_59));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          j_60 = t;
                                                          x_58 :
                                                          if(((ATgetType(j_60) == AT_LIST) && ((ATermList) j_60 != ATempty)))
                                                            {
                                                              k_60 = ATgetFirst((ATermList) j_60);
                                                              l_60 = (ATerm) ATgetNext((ATermList) j_60);
                                                              {
                                                                ATerm o_60 = NULL;
                                                                if(((y_59 != NULL) && (y_59 != k_60)))
                                                                  _fail(k_60);
                                                                else
                                                                  y_59 = k_60;
                                                                {
                                                                  if(((b_60 != NULL) && (b_60 != l_60)))
                                                                    _fail(l_60);
                                                                  else
                                                                    b_60 = l_60;
                                                                  {
                                                                    ATerm p_60 = NULL,z_60 = NULL;
                                                                    ATerm j_3 (ATerm t)
                                                                    {
                                                                      ATerm m_60 = NULL;
                                                                      ATerm n_60 = NULL;
                                                                      n_60 = t;
                                                                      if(((m_60 != NULL) && (m_60 != n_60)))
                                                                        _fail(n_60);
                                                                      else
                                                                        m_60 = n_60;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_60));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, j_3);
                                                                    {
                                                                      o_60 = t;
                                                                      {
                                                                        if(((z_59 != NULL) && (z_59 != o_60)))
                                                                          _fail(o_60);
                                                                        else
                                                                          z_59 = o_60;
                                                                        {
                                                                          ATerm q_60 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_60), not_null(b_60));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              q_60 = t;
                                                                              if(((p_60 != NULL) && (p_60 != q_60)))
                                                                                _fail(q_60);
                                                                              else
                                                                                p_60 = q_60;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_60), (ATerm) ATinsert(CheckATermList(not_null(p_59)), not_null(r_59)));
                                                                            {
                                                                              ATerm k_3 (ATerm t)
                                                                              {
                                                                                ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL;
                                                                                r_60 = t;
                                                                                u_58 :
                                                                                if(match_cons(r_60, sym__2))
                                                                                  {
                                                                                    s_60 = ATgetArgument(r_60, 0);
                                                                                    v_60 = ATgetArgument(r_60, 1);
                                                                                    v_58 :
                                                                                    if(match_cons(s_60, sym__2))
                                                                                      {
                                                                                        t_60 = ATgetArgument(s_60, 0);
                                                                                        u_60 = ATgetArgument(s_60, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_60))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_60)))));
                                                                                      }
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
                                                                              t = zip_1(t, k_3);
                                                                              {
                                                                                z_60 = t;
                                                                                if(((c_60 != NULL) && (c_60 != z_60)))
                                                                                  _fail(z_60);
                                                                                else
                                                                                  c_60 = z_60;
                                                                              }
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
                                  }
                                }
                                t = x_18;
                                {
                                  ATerm y_18;
                                  y_18 = t;
                                  {
                                    ATerm b_61 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_60), not_null(b_60));
                                    {
                                      t = conc_0(t);
                                      {
                                        b_61 = t;
                                        if(((a_61 != NULL) && (a_61 != b_61)))
                                          _fail(b_61);
                                        else
                                          a_61 = b_61;
                                      }
                                    }
                                  }
                                  t = y_18;
                                  {
                                    ATerm z_18;
                                    z_18 = t;
                                    {
                                      ATerm d_61 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_59), not_null(x_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_59))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          d_61 = t;
                                          if(((c_61 != NULL) && (c_61 != d_61)))
                                            _fail(d_61);
                                          else
                                            c_61 = d_61;
                                        }
                                      }
                                    }
                                    t = z_18;
                                    {
                                      ATerm f_61 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(o_59), not_null(z_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_59))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          f_61 = t;
                                          if(((e_61 != NULL) && (e_61 != f_61)))
                                            _fail(f_61);
                                          else
                                            e_61 = f_61;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(a_61)), not_null(y_59)), not_null(w_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_61), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_60)), not_null(e_61))));
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
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm As_2 (ATerm t, ATerm t_83 (ATerm), ATerm u_83 (ATerm))
{
  ATerm d_62 = NULL,g_62 = NULL,h_62 = NULL;
  d_62 = t;
  c_62 :
  if(match_cons(d_62, sym_As_2))
    {
      g_62 = ATgetArgument(d_62, 0);
      h_62 = ATgetArgument(d_62, 1);
      {
        ATerm l_62 = NULL,n_62 = NULL;
        ATerm m_62 = NULL;
        t = SSLgetAnnotations(not_null(d_62));
        {
          m_62 = t;
          if(((l_62 != NULL) && (l_62 != m_62)))
            _fail(m_62);
          else
            l_62 = m_62;
        }
        {
          t = not_null(g_62);
          {
            ATerm p_62 = NULL;
            t = t_83(t);
            {
              n_62 = t;
              {
                t = not_null(h_62);
                {
                  ATerm c_63 = NULL;
                  t = u_83(t);
                  {
                    p_62 = t;
                    {
                      ATerm d_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(n_62), not_null(p_62)), not_null(l_62));
                      {
                        d_63 = t;
                        if(((c_63 != NULL) && (c_63 != d_63)))
                          _fail(d_63);
                        else
                          c_63 = d_63;
                      }
                      t = not_null(c_63);
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
ATerm Prim_2 (ATerm t, ATerm e_87 (ATerm), ATerm f_87 (ATerm))
{
  ATerm p_63 = NULL,q_63 = NULL,v_63 = NULL;
  p_63 = t;
  o_63 :
  if(match_cons(p_63, sym_Prim_2))
    {
      q_63 = ATgetArgument(p_63, 0);
      v_63 = ATgetArgument(p_63, 1);
      {
        ATerm z_63 = NULL,b_64 = NULL;
        ATerm a_64 = NULL;
        t = SSLgetAnnotations(not_null(p_63));
        {
          a_64 = t;
          if(((z_63 != NULL) && (z_63 != a_64)))
            _fail(a_64);
          else
            z_63 = a_64;
        }
        {
          t = not_null(q_63);
          {
            ATerm d_64 = NULL;
            t = e_87(t);
            {
              b_64 = t;
              {
                t = not_null(v_63);
                {
                  ATerm f_64 = NULL;
                  t = f_87(t);
                  {
                    d_64 = t;
                    {
                      ATerm g_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(b_64), not_null(d_64)), not_null(z_63));
                      {
                        g_64 = t;
                        if(((f_64 != NULL) && (f_64 != g_64)))
                          _fail(g_64);
                        else
                          f_64 = g_64;
                      }
                      t = not_null(f_64);
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
ATerm Explode_2 (ATerm t, ATerm p_83 (ATerm), ATerm q_83 (ATerm))
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL;
  w_64 = t;
  v_64 :
  if(match_cons(w_64, sym_Explode_2))
    {
      x_64 = ATgetArgument(w_64, 0);
      y_64 = ATgetArgument(w_64, 1);
      {
        ATerm c_65 = NULL,e_65 = NULL;
        ATerm d_65 = NULL;
        t = SSLgetAnnotations(not_null(w_64));
        {
          d_65 = t;
          if(((c_65 != NULL) && (c_65 != d_65)))
            _fail(d_65);
          else
            c_65 = d_65;
        }
        {
          t = not_null(x_64);
          {
            ATerm n_65 = NULL;
            t = p_83(t);
            {
              e_65 = t;
              {
                t = not_null(y_64);
                {
                  ATerm r_65 = NULL;
                  t = q_83(t);
                  {
                    n_65 = t;
                    {
                      ATerm s_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(e_65), not_null(n_65)), not_null(c_65));
                      {
                        s_65 = t;
                        if(((r_65 != NULL) && (r_65 != s_65)))
                          _fail(s_65);
                        else
                          r_65 = s_65;
                      }
                      t = not_null(r_65);
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
ATerm Op_2 (ATerm t, ATerm e_85 (ATerm), ATerm f_85 (ATerm))
{
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
  e_66 = t;
  d_66 :
  if(match_cons(e_66, sym_Op_2))
    {
      f_66 = ATgetArgument(e_66, 0);
      g_66 = ATgetArgument(e_66, 1);
      {
        ATerm k_66 = NULL,m_66 = NULL;
        ATerm l_66 = NULL;
        t = SSLgetAnnotations(not_null(e_66));
        {
          l_66 = t;
          if(((k_66 != NULL) && (k_66 != l_66)))
            _fail(l_66);
          else
            k_66 = l_66;
        }
        {
          t = not_null(f_66);
          {
            ATerm o_66 = NULL;
            t = e_85(t);
            {
              m_66 = t;
              {
                t = not_null(g_66);
                {
                  ATerm q_66 = NULL;
                  t = f_85(t);
                  {
                    o_66 = t;
                    {
                      ATerm r_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(m_66), not_null(o_66)), not_null(k_66));
                      {
                        r_66 = t;
                        if(((q_66 != NULL) && (q_66 != r_66)))
                          _fail(r_66);
                        else
                          q_66 = r_66;
                      }
                      t = not_null(q_66);
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
ATerm pat_td_1 (ATerm t, ATerm l_88 (ATerm))
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_88(t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      {
        ATerm c_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm m_3 (ATerm t)
              {
                t = pat_td_1(t, l_88);
                return(t);
              }
              t = fetch_1(t, m_3);
              return(t);
            }
            t = Op_2(t, _id, l_3);
            LocalPopChoice(k_19);
          }
        else
          {
            t = c_19;
            {
              ATerm m_19 = t;
              int o_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_3 (ATerm t)
                  {
                    t = pat_td_1(t, l_88);
                    return(t);
                  }
                  t = Explode_2(t, _id, n_3);
                  LocalPopChoice(o_19);
                }
              else
                {
                  t = m_19;
                  {
                    ATerm t_19 = t;
                    int u_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_3 (ATerm t)
                        {
                          t = pat_td_1(t, l_88);
                          return(t);
                        }
                        t = Explode_2(t, o_3, _id);
                        LocalPopChoice(u_19);
                      }
                    else
                      {
                        t = t_19;
                        {
                          ATerm v_19 = t;
                          int w_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_3 (ATerm t)
                              {
                                ATerm q_3 (ATerm t)
                                {
                                  t = pat_td_1(t, l_88);
                                  return(t);
                                }
                                t = fetch_1(t, q_3);
                                return(t);
                              }
                              t = Prim_2(t, _id, p_3);
                              LocalPopChoice(w_19);
                            }
                          else
                            {
                              t = v_19;
                              {
                                ATerm r_3 (ATerm t)
                                {
                                  t = pat_td_1(t, l_88);
                                  return(t);
                                }
                                t = As_2(t, _id, r_3);
                              }
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm z_67 = NULL,e_68 = NULL;
  z_67 = t;
  y_67 :
  if(match_cons(z_67, sym_Match_1))
    {
      e_68 = ATgetArgument(z_67, 0);
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
            ATerm m_68 = NULL;
            ATerm q_68 = NULL;
            t = new_0(t);
            {
              m_68 = t;
              {
                if(((i_68 != NULL) && (i_68 != m_68)))
                  _fail(m_68);
                else
                  i_68 = m_68;
                {
                  t = not_null(e_68);
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL;
                      n_68 = t;
                      g_67 :
                      if(match_cons(n_68, sym_Anno_2))
                        {
                          o_68 = ATgetArgument(n_68, 0);
                          p_68 = ATgetArgument(n_68, 1);
                          {
                            if(((g_68 != NULL) && (g_68 != o_68)))
                              _fail(o_68);
                            else
                              g_68 = o_68;
                            {
                              if(((h_68 != NULL) && (h_68 != p_68)))
                                _fail(p_68);
                              else
                                h_68 = p_68;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_68)), not_null(g_68));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, s_3);
                    {
                      q_68 = t;
                      if(((j_68 != NULL) && (j_68 != q_68)))
                        _fail(q_68);
                      else
                        j_68 = q_68;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_68)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_e_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_68)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_68))))));
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            {
              ATerm f_20 = t;
              int g_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL;
                  ATerm v_68 = NULL;
                  ATerm y_68 = NULL;
                  t = new_0(t);
                  {
                    v_68 = t;
                    {
                      if(((t_68 != NULL) && (t_68 != v_68)))
                        _fail(v_68);
                      else
                        t_68 = v_68;
                      {
                        t = not_null(e_68);
                        {
                          ATerm t_3 (ATerm t)
                          {
                            ATerm w_68 = NULL,x_68 = NULL;
                            w_68 = t;
                            n_67 :
                            if(match_cons(w_68, sym_RootApp_1))
                              {
                                x_68 = ATgetArgument(w_68, 0);
                                {
                                  if(((s_68 != NULL) && (s_68 != x_68)))
                                    _fail(x_68);
                                  else
                                    s_68 = x_68;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_68));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, t_3);
                          {
                            y_68 = t;
                            if(((u_68 != NULL) && (u_68 != y_68)))
                              _fail(y_68);
                            else
                              u_68 = y_68;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_68)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_68))), not_null(s_68))));
                  LocalPopChoice(g_20);
                }
              else
                {
                  t = f_20;
                  {
                    ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL;
                    ATerm e_69 = NULL;
                    ATerm i_69 = NULL;
                    t = new_0(t);
                    {
                      e_69 = t;
                      {
                        if(((c_69 != NULL) && (c_69 != e_69)))
                          _fail(e_69);
                        else
                          c_69 = e_69;
                        {
                          t = not_null(e_68);
                          {
                            ATerm u_3 (ATerm t)
                            {
                              ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
                              f_69 = t;
                              w_67 :
                              if(match_cons(f_69, sym_App_2))
                                {
                                  g_69 = ATgetArgument(f_69, 0);
                                  h_69 = ATgetArgument(f_69, 1);
                                  {
                                    if(((b_69 != NULL) && (b_69 != g_69)))
                                      _fail(g_69);
                                    else
                                      b_69 = g_69;
                                    {
                                      if(((a_69 != NULL) && (a_69 != h_69)))
                                        _fail(h_69);
                                      else
                                        a_69 = h_69;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_69));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, u_3);
                            {
                              i_69 = t;
                              if(((d_69 != NULL) && (d_69 != i_69)))
                                _fail(i_69);
                              else
                                d_69 = i_69;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_69)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_69))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_69)), not_null(b_69)))));
                  }
                }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL;
  b_70 = t;
  a_70 :
  if(match_cons(b_70, sym_Cong_2))
    {
      c_70 = ATgetArgument(b_70, 0);
      d_70 = ATgetArgument(b_70, 1);
      {
        ATerm g_70 = NULL;
        ATerm k_70 = NULL;
        t = not_null(d_70);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm h_70 = NULL,i_70 = NULL;
            i_70 = t;
            y_69 :
            if(match_cons(i_70, sym_Match_1))
              {
                h_70 = ATgetArgument(i_70, 0);
                t = not_null(h_70);
              }
            else
              {
                if(match_cons(i_70, sym_Id_0))
                  {
                    t = term_h_20;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, v_3);
          {
            k_70 = t;
            if(((g_70 != NULL) && (g_70 != k_70)))
              _fail(k_70);
            else
              g_70 = k_70;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(c_70), not_null(g_70)));
          t = Mapp2_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL;
  s_70 = t;
  q_70 :
  if(match_cons(s_70, sym_Scope_2))
    {
      t_70 = ATgetArgument(s_70, 0);
      u_70 = ATgetArgument(s_70, 1);
      r_70 :
      if(((ATermList) t_70 == ATempty))
        {
          t = not_null(u_70);
        }
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
ATerm Idempotency_0 (ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL;
  q_71 = t;
  d_71 :
  if(match_cons(q_71, sym_Where_1))
    {
      r_71 = ATgetArgument(q_71, 0);
      e_71 :
      if(match_cons(r_71, sym_Seq_2))
        {
          p_71 = ATgetArgument(r_71, 0);
          l_71 = ATgetArgument(r_71, 1);
          f_71 :
          if(match_cons(p_71, sym_Where_1))
            {
              k_71 = ATgetArgument(p_71, 0);
              g_71 :
              if(match_cons(l_71, sym_Seq_2))
                {
                  m_71 = ATgetArgument(l_71, 0);
                  o_71 = ATgetArgument(l_71, 1);
                  h_71 :
                  if(match_cons(m_71, sym_Build_1))
                    {
                      n_71 = ATgetArgument(m_71, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_71), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_71)), not_null(o_71))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(r_71, sym_Where_1))
            {
              p_71 = ATgetArgument(r_71, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(p_71));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(q_71, sym_Test_1))
        {
          r_71 = ATgetArgument(q_71, 0);
          i_71 :
          if(match_cons(r_71, sym_Test_1))
            {
              p_71 = ATgetArgument(r_71, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_71));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(q_71, sym_Not_1))
            {
              r_71 = ATgetArgument(q_71, 0);
              j_71 :
              if(match_cons(r_71, sym_Not_1))
                {
                  p_71 = ATgetArgument(r_71, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_71));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(q_71, sym_LChoice_2))
                {
                  r_71 = ATgetArgument(q_71, 0);
                  s_71 = ATgetArgument(q_71, 1);
                  {
                    if(((r_71 != NULL) && (r_71 != s_71)))
                      _fail(s_71);
                    else
                      r_71 = s_71;
                    t = not_null(r_71);
                  }
                }
              else
                {
                  if(match_cons(q_71, sym_Choice_2))
                    {
                      r_71 = ATgetArgument(q_71, 0);
                      s_71 = ATgetArgument(q_71, 1);
                      {
                        if(((r_71 != NULL) && (r_71 != s_71)))
                          _fail(s_71);
                        else
                          r_71 = s_71;
                        t = not_null(r_71);
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
ATerm AssociateR_0 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL;
  p_72 = t;
  l_72 :
  if(match_cons(p_72, sym_LChoice_2))
    {
      q_72 = ATgetArgument(p_72, 0);
      u_72 = ATgetArgument(p_72, 1);
      m_72 :
      if(match_cons(q_72, sym_LChoice_2))
        {
          s_72 = ATgetArgument(q_72, 0);
          t_72 = ATgetArgument(q_72, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_72), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_72), not_null(u_72)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(p_72, sym_Seq_2))
        {
          q_72 = ATgetArgument(p_72, 0);
          u_72 = ATgetArgument(p_72, 1);
          n_72 :
          if(match_cons(q_72, sym_Seq_2))
            {
              s_72 = ATgetArgument(q_72, 0);
              t_72 = ATgetArgument(q_72, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_72), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_72), not_null(u_72)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(p_72, sym_Choice_2))
            {
              q_72 = ATgetArgument(p_72, 0);
              u_72 = ATgetArgument(p_72, 1);
              o_72 :
              if(match_cons(q_72, sym_Choice_2))
                {
                  s_72 = ATgetArgument(q_72, 0);
                  t_72 = ATgetArgument(q_72, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_72), (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_72), not_null(u_72)));
                }
              else
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
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL;
  f_76 = t;
  x_75 :
  if(match_cons(f_76, sym_InfixApp_3))
    {
      g_76 = ATgetArgument(f_76, 0);
      c_76 = ATgetArgument(f_76, 1);
      b_76 = ATgetArgument(f_76, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(c_76), (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_76)), not_null(g_76))));
    }
  else
    {
      if(match_cons(f_76, sym_BAM_3))
        {
          g_76 = ATgetArgument(f_76, 0);
          c_76 = ATgetArgument(f_76, 1);
          b_76 = ATgetArgument(f_76, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(b_76))), not_null(g_76)), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_76))));
        }
      else
        {
          if(match_cons(f_76, sym_AM_2))
            {
              g_76 = ATgetArgument(f_76, 0);
              c_76 = ATgetArgument(f_76, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_76), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_76)));
            }
          else
            {
              if(match_cons(f_76, sym_MA_2))
                {
                  g_76 = ATgetArgument(f_76, 0);
                  c_76 = ATgetArgument(f_76, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_76)), not_null(c_76));
                }
              else
                {
                  if(match_cons(f_76, sym_BA_2))
                    {
                      g_76 = ATgetArgument(f_76, 0);
                      c_76 = ATgetArgument(f_76, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_76)), not_null(g_76));
                    }
                  else
                    {
                      if(match_cons(f_76, sym_Lets_2))
                        {
                          g_76 = ATgetArgument(f_76, 0);
                          c_76 = ATgetArgument(f_76, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(g_76), not_null(c_76));
                        }
                      else
                        {
                          if(match_cons(f_76, sym_LChoices_1))
                            {
                              g_76 = ATgetArgument(f_76, 0);
                              y_75 :
                              if(((ATgetType(g_76) == AT_LIST) && ((ATermList) g_76 != ATempty)))
                                {
                                  d_76 = ATgetFirst((ATermList) g_76);
                                  e_76 = (ATerm) ATgetNext((ATermList) g_76);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(d_76), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(e_76)));
                                }
                              else
                                {
                                  if(((ATermList) g_76 == ATempty))
                                    {
                                      t = term_n_20;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(f_76, sym_Choices_1))
                                {
                                  g_76 = ATgetArgument(f_76, 0);
                                  z_75 :
                                  if(((ATgetType(g_76) == AT_LIST) && ((ATermList) g_76 != ATempty)))
                                    {
                                      d_76 = ATgetFirst((ATermList) g_76);
                                      e_76 = (ATerm) ATgetNext((ATermList) g_76);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(d_76), (ATerm) ATmakeAppl(sym_Choices_1, not_null(e_76)));
                                    }
                                  else
                                    {
                                      if(((ATermList) g_76 == ATempty))
                                        {
                                          t = term_n_20;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(f_76, sym_Seqs_1))
                                    {
                                      g_76 = ATgetArgument(f_76, 0);
                                      a_76 :
                                      if(((ATgetType(g_76) == AT_LIST) && ((ATermList) g_76 != ATempty)))
                                        {
                                          d_76 = ATgetFirst((ATermList) g_76);
                                          e_76 = (ATerm) ATgetNext((ATermList) g_76);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_76), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_76)));
                                        }
                                      else
                                        {
                                          if(((ATermList) g_76 == ATempty))
                                            {
                                              t = term_o_20;
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
ATerm F15_0 (ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL;
  s_77 = t;
  q_77 :
  if(match_cons(s_77, sym_Where_1))
    {
      t_77 = ATgetArgument(s_77, 0);
      r_77 :
      if(match_cons(t_77, sym_Fail_0))
        {
          t = term_n_20;
        }
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
ATerm F14_0 (ATerm t)
{
  ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL;
  y_77 = t;
  w_77 :
  if(match_cons(y_77, sym_LChoice_2))
    {
      z_77 = ATgetArgument(y_77, 0);
      a_78 = ATgetArgument(y_77, 1);
      x_77 :
      if(match_cons(a_78, sym_Fail_0))
        {
          t = not_null(z_77);
        }
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
ATerm F13_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
  g_78 = t;
  e_78 :
  if(match_cons(g_78, sym_LChoice_2))
    {
      h_78 = ATgetArgument(g_78, 0);
      i_78 = ATgetArgument(g_78, 1);
      f_78 :
      if(match_cons(h_78, sym_Fail_0))
        {
          t = not_null(i_78);
        }
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
ATerm F12_0 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  o_78 = t;
  m_78 :
  if(match_cons(o_78, sym_Choice_2))
    {
      p_78 = ATgetArgument(o_78, 0);
      q_78 = ATgetArgument(o_78, 1);
      n_78 :
      if(match_cons(q_78, sym_Fail_0))
        {
          t = not_null(p_78);
        }
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
ATerm F11_0 (ATerm t)
{
  ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL;
  w_78 = t;
  u_78 :
  if(match_cons(w_78, sym_Choice_2))
    {
      x_78 = ATgetArgument(w_78, 0);
      y_78 = ATgetArgument(w_78, 1);
      v_78 :
      if(match_cons(x_78, sym_Fail_0))
        {
          t = not_null(y_78);
        }
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
ATerm F10_0 (ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL;
  e_79 = t;
  d_79 :
  if(match_cons(e_79, sym_Cong_2))
    {
      f_79 = ATgetArgument(e_79, 0);
      g_79 = ATgetArgument(e_79, 1);
      {
        t = not_null(g_79);
        {
          ATerm w_3 (ATerm t)
          {
            ATerm j_79 = NULL;
            j_79 = t;
            c_79 :
            if(!(match_cons(j_79, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, w_3);
        }
        t = term_n_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
  o_79 = t;
  m_79 :
  if(match_cons(o_79, sym_Path_2))
    {
      p_79 = ATgetArgument(o_79, 0);
      q_79 = ATgetArgument(o_79, 1);
      n_79 :
      if(match_cons(q_79, sym_Fail_0))
        {
          t = term_n_20;
        }
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
ATerm F8_0 (ATerm t)
{
  ATerm w_79 = NULL,x_79 = NULL;
  w_79 = t;
  u_79 :
  if(match_cons(w_79, sym_One_1))
    {
      x_79 = ATgetArgument(w_79, 0);
      v_79 :
      if(match_cons(x_79, sym_Fail_0))
        {
          t = term_n_20;
        }
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
ATerm F7_0 (ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL;
  c_80 = t;
  a_80 :
  if(match_cons(c_80, sym_Some_1))
    {
      d_80 = ATgetArgument(c_80, 0);
      b_80 :
      if(match_cons(d_80, sym_Fail_0))
        {
          t = term_n_20;
        }
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
ATerm F6_0 (ATerm t)
{
  ATerm i_80 = NULL,j_80 = NULL,k_80 = NULL;
  i_80 = t;
  g_80 :
  if(match_cons(i_80, sym_Rec_2))
    {
      j_80 = ATgetArgument(i_80, 0);
      k_80 = ATgetArgument(i_80, 1);
      h_80 :
      if(match_cons(k_80, sym_Fail_0))
        {
          t = term_n_20;
        }
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
ATerm F5_0 (ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL;
  q_80 = t;
  o_80 :
  if(match_cons(q_80, sym_Scope_2))
    {
      r_80 = ATgetArgument(q_80, 0);
      s_80 = ATgetArgument(q_80, 1);
      p_80 :
      if(match_cons(s_80, sym_Fail_0))
        {
          t = term_n_20;
        }
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
ATerm F3_0 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL;
  y_80 = t;
  w_80 :
  if(match_cons(y_80, sym_Seq_2))
    {
      z_80 = ATgetArgument(y_80, 0);
      a_81 = ATgetArgument(y_80, 1);
      x_80 :
      if(match_cons(z_80, sym_Fail_0))
        {
          t = term_n_20;
        }
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
ATerm F2_0 (ATerm t)
{
  ATerm g_81 = NULL,h_81 = NULL;
  g_81 = t;
  e_81 :
  if(match_cons(g_81, sym_Not_1))
    {
      h_81 = ATgetArgument(g_81, 0);
      f_81 :
      if(match_cons(h_81, sym_Fail_0))
        {
          t = term_o_20;
        }
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
ATerm F1_0 (ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL;
  m_81 = t;
  k_81 :
  if(match_cons(m_81, sym_Test_1))
    {
      n_81 = ATgetArgument(m_81, 0);
      l_81 :
      if(match_cons(n_81, sym_Fail_0))
        {
          t = term_n_20;
        }
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
ATerm ElimFail_0 (ATerm t)
{
  ATerm q_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(s_20);
    }
  else
    {
      t = q_20;
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm y_20 = t;
              int z_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(z_20);
                }
              else
                {
                  t = y_20;
                  {
                    ATerm a_21 = t;
                    int j_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(j_21);
                      }
                    else
                      {
                        t = a_21;
                        {
                          ATerm k_21 = t;
                          int l_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(l_21);
                            }
                          else
                            {
                              t = k_21;
                              {
                                ATerm m_21 = t;
                                int n_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(n_21);
                                  }
                                else
                                  {
                                    t = m_21;
                                    {
                                      ATerm o_21 = t;
                                      int p_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(p_21);
                                        }
                                      else
                                        {
                                          t = o_21;
                                          {
                                            ATerm q_21 = t;
                                            int r_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(r_21);
                                              }
                                            else
                                              {
                                                t = q_21;
                                                {
                                                  ATerm s_21 = t;
                                                  int t_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(t_21);
                                                    }
                                                  else
                                                    {
                                                      t = s_21;
                                                      {
                                                        ATerm u_21 = t;
                                                        int v_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(v_21);
                                                          }
                                                        else
                                                          {
                                                            t = u_21;
                                                            {
                                                              ATerm w_21 = t;
                                                              int x_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(x_21);
                                                                }
                                                              else
                                                                {
                                                                  t = w_21;
                                                                  {
                                                                    ATerm b_22 = t;
                                                                    int c_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(c_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_22;
                                                                        {
                                                                          ATerm g_22 = t;
                                                                          int j_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(j_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_22;
                                                                              t = F15_0(t);
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm I16_0 (ATerm t)
{
  ATerm s_81 = NULL,t_81 = NULL;
  s_81 = t;
  q_81 :
  if(match_cons(s_81, sym_Match_1))
    {
      t_81 = ATgetArgument(s_81, 0);
      r_81 :
      if(match_cons(t_81, sym_Wld_0))
        {
          t = term_o_20;
        }
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
ATerm I12_0 (ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL;
  y_81 = t;
  w_81 :
  if(match_cons(y_81, sym_Where_1))
    {
      z_81 = ATgetArgument(y_81, 0);
      x_81 :
      if(match_cons(z_81, sym_Id_0))
        {
          t = term_o_20;
        }
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
ATerm I10_0 (ATerm t)
{
  ATerm e_82 = NULL,f_82 = NULL;
  e_82 = t;
  c_82 :
  if(match_cons(e_82, sym_All_1))
    {
      f_82 = ATgetArgument(e_82, 0);
      d_82 :
      if(match_cons(f_82, sym_Id_0))
        {
          t = term_o_20;
        }
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
ATerm I9_0 (ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  k_82 = t;
  i_82 :
  if(match_cons(k_82, sym_Rec_2))
    {
      l_82 = ATgetArgument(k_82, 0);
      m_82 = ATgetArgument(k_82, 1);
      j_82 :
      if(match_cons(m_82, sym_Id_0))
        {
          t = term_o_20;
        }
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
ATerm I8_0 (ATerm t)
{
  ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL;
  s_82 = t;
  q_82 :
  if(match_cons(s_82, sym_Scope_2))
    {
      t_82 = ATgetArgument(s_82, 0);
      u_82 = ATgetArgument(s_82, 1);
      r_82 :
      if(match_cons(u_82, sym_Id_0))
        {
          t = term_o_20;
        }
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
ATerm I7_0 (ATerm t)
{
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL;
  a_83 = t;
  y_82 :
  if(match_cons(a_83, sym_LChoice_2))
    {
      b_83 = ATgetArgument(a_83, 0);
      c_83 = ATgetArgument(a_83, 1);
      z_82 :
      if(match_cons(b_83, sym_Id_0))
        {
          t = term_o_20;
        }
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
ATerm I4_0 (ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL;
  i_83 = t;
  g_83 :
  if(match_cons(i_83, sym_Seq_2))
    {
      j_83 = ATgetArgument(i_83, 0);
      k_83 = ATgetArgument(i_83, 1);
      h_83 :
      if(match_cons(k_83, sym_Id_0))
        {
          t = not_null(j_83);
        }
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
ATerm I3_0 (ATerm t)
{
  ATerm s_83 = NULL,v_83 = NULL,w_83 = NULL;
  s_83 = t;
  o_83 :
  if(match_cons(s_83, sym_Seq_2))
    {
      v_83 = ATgetArgument(s_83, 0);
      w_83 = ATgetArgument(s_83, 1);
      r_83 :
      if(match_cons(v_83, sym_Id_0))
        {
          t = not_null(w_83);
        }
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
ATerm I2_0 (ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL;
  c_84 = t;
  a_84 :
  if(match_cons(c_84, sym_Not_1))
    {
      d_84 = ATgetArgument(c_84, 0);
      b_84 :
      if(match_cons(d_84, sym_Id_0))
        {
          t = term_n_20;
        }
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
ATerm I1_0 (ATerm t)
{
  ATerm i_84 = NULL,j_84 = NULL;
  i_84 = t;
  g_84 :
  if(match_cons(i_84, sym_Test_1))
    {
      j_84 = ATgetArgument(i_84, 0);
      h_84 :
      if(match_cons(j_84, sym_Id_0))
        {
          t = term_o_20;
        }
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
ATerm ElimId_0 (ATerm t)
{
  ATerm k_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(o_22);
    }
  else
    {
      t = k_22;
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            {
              ATerm t_22 = t;
              int u_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(u_22);
                }
              else
                {
                  t = t_22;
                  {
                    ATerm v_22 = t;
                    int w_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(w_22);
                      }
                    else
                      {
                        t = v_22;
                        {
                          ATerm x_22 = t;
                          int y_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(y_22);
                            }
                          else
                            {
                              t = x_22;
                              {
                                ATerm z_22 = t;
                                int a_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(a_23);
                                  }
                                else
                                  {
                                    t = z_22;
                                    {
                                      ATerm b_23 = t;
                                      int h_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(h_23);
                                        }
                                      else
                                        {
                                          t = b_23;
                                          {
                                            ATerm i_23 = t;
                                            int j_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(j_23);
                                              }
                                            else
                                              {
                                                t = i_23;
                                                {
                                                  ATerm l_23 = t;
                                                  int n_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(n_23);
                                                    }
                                                  else
                                                    {
                                                      t = l_23;
                                                      t = I16_0(t);
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Simplify_0 (ATerm t)
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
      {
        ATerm q_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(r_23);
          }
        else
          {
            t = q_23;
            {
              ATerm s_23 = t;
              int t_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(t_23);
                }
              else
                {
                  t = s_23;
                  {
                    ATerm u_23 = t;
                    int v_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(v_23);
                      }
                    else
                      {
                        t = u_23;
                        {
                          ATerm w_23 = t;
                          int b_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(b_24);
                            }
                          else
                            {
                              t = w_23;
                              {
                                ATerm c_24 = t;
                                int n_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(n_24);
                                  }
                                else
                                  {
                                    t = c_24;
                                    {
                                      ATerm o_24 = t;
                                      int p_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(p_24);
                                        }
                                      else
                                        {
                                          t = o_24;
                                          {
                                            ATerm q_24 = t;
                                            int r_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(r_24);
                                              }
                                            else
                                              {
                                                t = q_24;
                                                t = TransformingCongruence_0(t);
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2 (ATerm t, ATerm l_97 (ATerm), ATerm m_97 (ATerm))
{
  ATerm l_84 (ATerm t)
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_97(t);
        t = l_84(t);
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = m_97(t);
      }
    return(t);
  }
  t = l_84(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm o_97 (ATerm))
{
  t = repeat_2(t, o_97, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm o_111 (ATerm))
{
  ATerm m_84 (ATerm t)
  {
    t = o_111(t);
    {
      t = _all(t, m_84);
      t = o_111(t);
    }
    return(t);
  }
  t = m_84(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, x_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm z_3 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, z_3);
    }
    return(t);
  }
  t = map_1(t, y_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm x_84 (ATerm))
{
  ATerm t_84 = NULL,u_84 = NULL;
  t_84 = t;
  s_84 :
  if(match_cons(t_84, sym_Strategies_1))
    {
      u_84 = ATgetArgument(t_84, 0);
      {
        ATerm y_84 = NULL,b_85 = NULL;
        ATerm a_85 = NULL;
        t = SSLgetAnnotations(not_null(t_84));
        {
          a_85 = t;
          if(((y_84 != NULL) && (y_84 != a_85)))
            _fail(a_85);
          else
            y_84 = a_85;
        }
        {
          t = not_null(u_84);
          {
            ATerm d_85 = NULL;
            t = x_84(t);
            {
              b_85 = t;
              {
                ATerm g_85 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(b_85)), not_null(y_84));
                {
                  g_85 = t;
                  if(((d_85 != NULL) && (d_85 != g_85)))
                    _fail(g_85);
                  else
                    d_85 = g_85;
                }
                t = not_null(d_85);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm z_84 (ATerm))
{
  ATerm e_86 = NULL,f_86 = NULL;
  e_86 = t;
  v_85 :
  if(match_cons(e_86, sym_Specification_1))
    {
      f_86 = ATgetArgument(e_86, 0);
      {
        ATerm i_86 = NULL,k_86 = NULL;
        ATerm j_86 = NULL;
        t = SSLgetAnnotations(not_null(e_86));
        {
          j_86 = t;
          if(((i_86 != NULL) && (i_86 != j_86)))
            _fail(j_86);
          else
            i_86 = j_86;
        }
        {
          t = not_null(f_86);
          {
            ATerm o_86 = NULL;
            t = z_84(t);
            {
              k_86 = t;
              {
                ATerm r_86 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(k_86)), not_null(i_86));
                {
                  r_86 = t;
                  if(((o_86 != NULL) && (o_86 != r_86)))
                    _fail(r_86);
                  else
                    o_86 = r_86;
                }
                t = not_null(o_86);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm inline_strategies_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm e_4 (ATerm t)
    {
      ATerm f_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, f_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, e_4);
    return(t);
  }
  t = Specification_1(t, a_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm e_75 (ATerm), ATerm f_75 (ATerm))
{
  ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL;
  k_87 = t;
  j_87 :
  if(match_cons(k_87, sym__2))
    {
      l_87 = ATgetArgument(k_87, 0);
      m_87 = ATgetArgument(k_87, 1);
      {
        ATerm s_87 = NULL,u_87 = NULL;
        ATerm t_87 = NULL;
        t = SSLgetAnnotations(not_null(k_87));
        {
          t_87 = t;
          if(((s_87 != NULL) && (s_87 != t_87)))
            _fail(t_87);
          else
            s_87 = t_87;
        }
        {
          t = not_null(l_87);
          {
            ATerm w_87 = NULL;
            t = e_75(t);
            {
              u_87 = t;
              {
                t = not_null(m_87);
                {
                  ATerm y_87 = NULL;
                  t = f_75(t);
                  {
                    w_87 = t;
                    {
                      ATerm z_87 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_87), not_null(w_87)), not_null(s_87));
                      {
                        z_87 = t;
                        if(((y_87 != NULL) && (y_87 != z_87)))
                          _fail(z_87);
                        else
                          y_87 = z_87;
                      }
                      t = not_null(y_87);
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
  ATerm h_88 = NULL;
  ATerm b_25;
  b_25 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm i_88 = NULL,j_88 = NULL;
      i_88 = t;
      g_88 :
      if(match_cons(i_88, sym_Program_1))
        {
          j_88 = ATgetArgument(i_88, 0);
          if(((h_88 != NULL) && (h_88 != j_88)))
            _fail(j_88);
          else
            h_88 = j_88;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_25), not_null(h_88)), term_d_25));
      {
        t = printnl_0(t);
        {
          t = term_l_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_25;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL;
  o_88 = t;
  n_88 :
  if(match_cons(o_88, sym__2))
    {
      p_88 = ATgetArgument(o_88, 0);
      q_88 = ATgetArgument(o_88, 1);
      {
        ATerm p_25;
        p_25 = t;
        t = SSL_printnl(not_null(p_88), not_null(q_88));
        t = p_25;
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
  ATerm v_88 = NULL;
  v_88 = t;
  t = SSL_implode_string(not_null(v_88));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL;
        a_89 = t;
        z_88 :
        if(((ATgetType(a_89) == AT_LIST) && ((ATermList) a_89 != ATempty)))
          {
            b_89 = ATgetFirst((ATermList) a_89);
            c_89 = (ATerm) ATgetNext((ATermList) a_89);
            {
              t = not_null(b_89);
              {
                ATerm h_4 (ATerm t)
                {
                  t = not_null(c_89);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_4);
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
  ATerm m_89 = NULL;
  ATerm o_89 = NULL;
  m_89 = t;
  {
    ATerm p_89 = NULL;
    ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL;
    t = not_null(m_89);
    {
      p_89 = t;
      {
        t = SSL_explode_term(not_null(p_89));
        {
          r_89 = t;
          k_89 :
          if(match_cons(r_89, sym__2))
            {
              s_89 = ATgetArgument(r_89, 0);
              t_89 = ATgetArgument(r_89, 1);
              l_89 :
              if(match_string(s_89, ""))
                {
                  if(((o_89 != NULL) && (o_89 != t_89)))
                    _fail(t_89);
                  else
                    o_89 = t_89;
                }
              else
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
      t = not_null(o_89);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_107 (ATerm))
{
  ATerm x_89 (ATerm t)
  {
    ATerm t_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_89);
        LocalPopChoice(y_25);
      }
    else
      {
        t = t_25;
        {
          t = Nil_0(t);
          t = h_107(t);
        }
      }
    return(t);
  }
  t = x_89(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL;
  g_90 = t;
  z_89 :
  if(match_cons(g_90, sym__2))
    {
      h_90 = ATgetArgument(g_90, 0);
      i_90 = ATgetArgument(g_90, 1);
      {
        t = not_null(h_90);
        {
          ATerm i_4 (ATerm t)
          {
            t = not_null(i_90);
            return(t);
          }
          t = at_end_1(t, i_4);
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
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_90 = NULL;
  n_90 = t;
  t = SSL_explode_string(not_null(n_90));
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
ATerm debug_1 (ATerm t, ATerm p_87 (ATerm))
{
  ATerm b_26;
  b_26 = t;
  {
    ATerm s_90 = NULL,u_90 = NULL;
    ATerm c_26;
    c_26 = t;
    {
      ATerm t_90 = NULL;
      t = p_87(t);
      {
        t_90 = t;
        if(((s_90 != NULL) && (s_90 != t_90)))
          _fail(t_90);
        else
          s_90 = t_90;
      }
    }
    t = c_26;
    {
      ATerm v_90 = NULL;
      v_90 = t;
      if(((u_90 != NULL) && (u_90 != v_90)))
        _fail(v_90);
      else
        u_90 = v_90;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_90)), not_null(s_90)));
        t = printnl_0(t);
      }
    }
  }
  t = b_26;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_90 = NULL;
  z_90 = t;
  t = SSL_is_string(not_null(z_90));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_4);
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
            {
              ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL;
              j_91 = t;
              i_91 :
              if(match_cons(j_91, sym_Path_1))
                {
                  k_91 = ATgetArgument(j_91, 0);
                  t = not_null(k_91);
                }
              else
                {
                  if(match_cons(j_91, sym_Var_1))
                    {
                      k_91 = ATgetArgument(j_91, 0);
                      {
                        t = not_null(k_91);
                        {
                          ATerm m_26 = t;
                          int o_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(o_26);
                            }
                          else
                            {
                              t = m_26;
                              {
                                ATerm k_4 (ATerm t)
                                {
                                  t = term_q_26;
                                  return(t);
                                }
                                t = debug_1(t, k_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_91, sym_Prefix_2))
                        {
                          k_91 = ATgetArgument(j_91, 0);
                          l_91 = ATgetArgument(j_91, 1);
                          {
                            ATerm q_91 = NULL,s_91 = NULL;
                            ATerm r_26;
                            r_26 = t;
                            {
                              ATerm r_91 = NULL;
                              t = not_null(k_91);
                              {
                                t = eval_config_0(t);
                                {
                                  r_91 = t;
                                  if(((q_91 != NULL) && (q_91 != r_91)))
                                    _fail(r_91);
                                  else
                                    q_91 = r_91;
                                }
                              }
                            }
                            t = r_26;
                            {
                              ATerm t_91 = NULL;
                              t = not_null(l_91);
                              {
                                t = eval_config_0(t);
                                {
                                  t_91 = t;
                                  if(((s_91 != NULL) && (s_91 != t_91)))
                                    _fail(t_91);
                                  else
                                    s_91 = t_91;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_91), not_null(s_91));
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
  ATerm d_92 = NULL;
  d_92 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_26, not_null(d_92));
    {
      t = table_get_0(t);
      {
        ATerm l_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_26;
            w_26 = t;
            {
              ATerm f_92 = NULL;
              ATerm g_92 = NULL;
              g_92 = t;
              if(((f_92 != NULL) && (f_92 != g_92)))
                _fail(g_92);
              else
                f_92 = g_92;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_26, not_null(d_92), not_null(f_92));
                t = table_put_0(t);
              }
            }
            t = w_26;
          }
          return(t);
        }
        t = try_1(t, l_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm w_91 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm x_26;
    x_26 = t;
    {
      ATerm k_92 = NULL;
      ATerm l_92 = NULL;
      t = term_y_26;
      {
        t = get_config_0(t);
        {
          l_92 = t;
          if(((k_92 != NULL) && (k_92 != l_92)))
            _fail(l_92);
          else
            k_92 = l_92;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_92), term_z_26);
        t = geq_0(t);
      }
    }
    t = x_26;
    t = w_91(t);
    return(t);
  }
  t = try_1(t, m_4);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL;
  p_92 = t;
  o_92 :
  if(match_cons(p_92, sym__2))
    {
      q_92 = ATgetArgument(p_92, 0);
      r_92 = ATgetArgument(p_92, 1);
      t = SSL_WriteToTextFile(not_null(q_92), not_null(r_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm x_92 = NULL,y_92 = NULL,z_92 = NULL;
  x_92 = t;
  w_92 :
  if(match_cons(x_92, sym__2))
    {
      y_92 = ATgetArgument(x_92, 0);
      z_92 = ATgetArgument(x_92, 1);
      t = SSL_WriteToBinaryFile(not_null(y_92), not_null(z_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm r_93 = NULL;
  ATerm a_27;
  a_27 = t;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm c_27 = t;
      int d_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_4 (ATerm t)
          {
            ATerm w_93 = NULL,x_93 = NULL;
            w_93 = t;
            j_93 :
            if(match_cons(w_93, sym_Output_1))
              {
                x_93 = ATgetArgument(w_93, 0);
                if(((r_93 != NULL) && (r_93 != x_93)))
                  _fail(x_93);
                else
                  r_93 = x_93;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_4);
          LocalPopChoice(d_27);
        }
      else
        {
          t = c_27;
          {
            ATerm y_93 = NULL;
            t = term_e_27;
            {
              y_93 = t;
              if(((r_93 != NULL) && (r_93 != y_93)))
                _fail(y_93);
              else
                r_93 = y_93;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_4, _id);
  }
  t = a_27;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm q_4 (ATerm t)
      {
        t = not_null(r_93);
        return(t);
      }
      t = split_2(t, q_4, _id);
      return(t);
    }
    t = _2(t, _id, p_4);
    {
      ATerm j_27 = t;
      int l_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_4 (ATerm t)
          {
            ATerm s_4 (ATerm t)
            {
              ATerm z_93 = NULL;
              z_93 = t;
              q_93 :
              if(!(match_cons(z_93, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, s_4);
            return(t);
          }
          t = _2(t, r_4, WriteToBinaryFile_0);
          LocalPopChoice(l_27);
        }
      else
        {
          t = j_27;
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
ATerm apply_strategy_1 (ATerm t, ATerm g_94 (ATerm))
{
  ATerm h_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL;
  ATerm m_27;
  m_27 = t;
  t = dtime_0(t);
  t = m_27;
  {
    t = g_94(t);
    {
      ATerm n_27;
      n_27 = t;
      {
        ATerm i_94 = NULL;
        t = dtime_0(t);
        {
          i_94 = t;
          if(((h_94 != NULL) && (h_94 != i_94)))
            _fail(i_94);
          else
            h_94 = i_94;
        }
      }
      t = n_27;
      {
        j_94 = t;
        f_94 :
        if(match_cons(j_94, sym__2))
          {
            k_94 = ATgetArgument(j_94, 0);
            l_94 = ATgetArgument(j_94, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_94)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_94))), not_null(l_94));
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
  ATerm w_94 = NULL;
  w_94 = t;
  t = SSL_ReadFromFile(not_null(w_94));
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_110 (ATerm), ATerm g_110 (ATerm))
{
  ATerm c_95 = NULL,e_95 = NULL;
  ATerm r_27;
  r_27 = t;
  {
    ATerm d_95 = NULL;
    t = f_110(t);
    {
      d_95 = t;
      if(((c_95 != NULL) && (c_95 != d_95)))
        _fail(d_95);
      else
        c_95 = d_95;
    }
  }
  t = r_27;
  {
    ATerm f_95 = NULL;
    t = g_110(t);
    {
      f_95 = t;
      if(((e_95 != NULL) && (e_95 != f_95)))
        _fail(f_95);
      else
        e_95 = f_95;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_95), not_null(e_95));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_95 = NULL;
  ATerm a_28;
  a_28 = t;
  {
    ATerm c_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 (ATerm t)
        {
          ATerm m_95 = NULL,n_95 = NULL;
          m_95 = t;
          j_95 :
          if(match_cons(m_95, sym_Input_1))
            {
              n_95 = ATgetArgument(m_95, 0);
              if(((l_95 != NULL) && (l_95 != n_95)))
                _fail(n_95);
              else
                l_95 = n_95;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, t_4);
        LocalPopChoice(s_28);
      }
    else
      {
        t = c_28;
        {
          ATerm o_95 = NULL;
          t = term_u_28;
          {
            o_95 = t;
            if(((l_95 != NULL) && (l_95 != o_95)))
              _fail(o_95);
            else
              l_95 = o_95;
          }
        }
      }
  }
  t = a_28;
  {
    ATerm u_4 (ATerm t)
    {
      t = not_null(l_95);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_4);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_95 = NULL;
  s_95 = t;
  t = SSL_string_to_int(not_null(s_95));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL;
  a_96 = t;
  y_95 :
  if(match_string(a_96, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(a_96) == AT_LIST) && ((ATermList) a_96 != ATempty)))
        {
          b_96 = ATgetFirst((ATermList) a_96);
          c_96 = (ATerm) ATgetNext((ATermList) a_96);
          z_95 :
          if(((ATgetType(c_96) == AT_LIST) && ((ATermList) c_96 != ATempty)))
            {
              d_96 = ATgetFirst((ATermList) c_96);
              e_96 = (ATerm) ATgetNext((ATermList) c_96);
              {
                ATerm i_96 = NULL;
                ATerm v_28;
                v_28 = t;
                {
                  t = not_null(b_96);
                  t = j_0(t);
                }
                t = v_28;
                {
                  ATerm j_96 = NULL;
                  t = not_null(d_96);
                  {
                    t = k_0(t);
                    {
                      j_96 = t;
                      if(((i_96 != NULL) && (i_96 != j_96)))
                        _fail(j_96);
                      else
                        i_96 = j_96;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_96)), not_null(i_96));
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
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_4 (ATerm t)
      {
        ATerm c_97 = NULL;
        c_97 = t;
        n_96 :
        if(!(match_string(c_97, "-i")))
          {
            if(!(match_string(c_97, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_4 (ATerm t)
      {
        ATerm f_97 = NULL;
        ATerm r_29;
        r_29 = t;
        {
          ATerm d_97 = NULL;
          ATerm e_97 = NULL;
          e_97 = t;
          if(((d_97 != NULL) && (d_97 != e_97)))
            _fail(e_97);
          else
            d_97 = e_97;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_s_29, not_null(d_97));
            t = set_config_0(t);
          }
        }
        t = r_29;
        {
          ATerm g_97 = NULL;
          g_97 = t;
          if(((f_97 != NULL) && (f_97 != g_97)))
            _fail(g_97);
          else
            f_97 = g_97;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_97));
        }
        return(t);
      }
      ATerm x_4 (ATerm t)
      {
        t = term_t_29;
        return(t);
      }
      t = ArgOption_3(t, v_4, w_4, x_4);
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 (ATerm t)
            {
              ATerm h_97 = NULL;
              h_97 = t;
              q_96 :
              if(!(match_string(h_97, "-o")))
                {
                  if(!(match_string(h_97, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm z_4 (ATerm t)
            {
              ATerm k_97 = NULL;
              ATerm w_29;
              w_29 = t;
              {
                ATerm i_97 = NULL;
                ATerm j_97 = NULL;
                j_97 = t;
                if(((i_97 != NULL) && (i_97 != j_97)))
                  _fail(j_97);
                else
                  i_97 = j_97;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_29, not_null(i_97));
                  t = set_config_0(t);
                }
              }
              t = w_29;
              {
                ATerm p_97 = NULL;
                p_97 = t;
                if(((k_97 != NULL) && (k_97 != p_97)))
                  _fail(p_97);
                else
                  k_97 = p_97;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_97));
              }
              return(t);
            }
            ATerm a_5 (ATerm t)
            {
              t = term_y_29;
              return(t);
            }
            t = ArgOption_3(t, y_4, z_4, a_5);
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            {
              ATerm z_29 = t;
              int a_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_5 (ATerm t)
                  {
                    ATerm q_97 = NULL;
                    q_97 = t;
                    t_96 :
                    if(!(match_string(q_97, "-S")))
                      {
                        if(!(match_string(q_97, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm c_5 (ATerm t)
                  {
                    t = term_c_30;
                    t = set_config_0(t);
                    t = term_d_30;
                    return(t);
                  }
                  ATerm d_5 (ATerm t)
                  {
                    t = term_e_30;
                    return(t);
                  }
                  t = Option_3(t, b_5, c_5, d_5);
                  LocalPopChoice(a_30);
                }
              else
                {
                  t = z_29;
                  {
                    ATerm f_30 = t;
                    int g_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_5 (ATerm t)
                        {
                          ATerm r_97 = NULL;
                          r_97 = t;
                          u_96 :
                          if(!(match_string(r_97, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm f_5 (ATerm t)
                        {
                          ATerm u_97 = NULL;
                          ATerm h_30;
                          h_30 = t;
                          {
                            ATerm s_97 = NULL;
                            ATerm t_97 = NULL;
                            t = string_to_int_0(t);
                            {
                              t_97 = t;
                              if(((s_97 != NULL) && (s_97 != t_97)))
                                _fail(t_97);
                              else
                                s_97 = t_97;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_y_26, not_null(s_97));
                              t = set_config_0(t);
                            }
                          }
                          t = h_30;
                          {
                            ATerm v_97 = NULL;
                            v_97 = t;
                            if(((u_97 != NULL) && (u_97 != v_97)))
                              _fail(v_97);
                            else
                              u_97 = v_97;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_97));
                          }
                          return(t);
                        }
                        ATerm g_5 (ATerm t)
                        {
                          t = term_n_30;
                          return(t);
                        }
                        t = ArgOption_3(t, e_5, f_5, g_5);
                        LocalPopChoice(g_30);
                      }
                    else
                      {
                        t = f_30;
                        {
                          ATerm o_30 = t;
                          int p_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_5 (ATerm t)
                              {
                                ATerm w_97 = NULL;
                                w_97 = t;
                                x_96 :
                                if(!(match_string(w_97, "-k")))
                                  {
                                    if(!(match_string(w_97, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm i_5 (ATerm t)
                              {
                                ATerm u_30;
                                u_30 = t;
                                {
                                  ATerm x_97 = NULL;
                                  ATerm y_97 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    y_97 = t;
                                    if(((x_97 != NULL) && (x_97 != y_97)))
                                      _fail(y_97);
                                    else
                                      x_97 = y_97;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_v_30, not_null(x_97));
                                    t = set_config_0(t);
                                  }
                                }
                                t = u_30;
                                return(t);
                              }
                              ATerm j_5 (ATerm t)
                              {
                                t = term_w_30;
                                return(t);
                              }
                              t = ArgOption_3(t, h_5, i_5, j_5);
                              LocalPopChoice(p_30);
                            }
                          else
                            {
                              t = o_30;
                              {
                                ATerm x_30 = t;
                                int y_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm k_5 (ATerm t)
                                    {
                                      ATerm z_97 = NULL;
                                      z_97 = t;
                                      z_96 :
                                      if(!(match_string(z_97, "-v")))
                                        {
                                          if(!(match_string(z_97, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm l_5 (ATerm t)
                                    {
                                      t = term_e_31;
                                      t = set_config_0(t);
                                      t = term_h_31;
                                      return(t);
                                    }
                                    ATerm m_5 (ATerm t)
                                    {
                                      t = term_i_31;
                                      return(t);
                                    }
                                    t = Option_3(t, k_5, l_5, m_5);
                                    LocalPopChoice(y_30);
                                  }
                                else
                                  {
                                    t = x_30;
                                    {
                                      ATerm j_31 = t;
                                      int k_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_5 (ATerm t)
                                          {
                                            ATerm a_98 = NULL;
                                            a_98 = t;
                                            a_97 :
                                            if(!(match_string(a_98, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm o_5 (ATerm t)
                                          {
                                            t = term_v_31;
                                            t = set_config_0(t);
                                            t = term_w_31;
                                            return(t);
                                          }
                                          ATerm p_5 (ATerm t)
                                          {
                                            t = term_x_31;
                                            return(t);
                                          }
                                          t = Option_3(t, n_5, o_5, p_5);
                                          LocalPopChoice(k_31);
                                        }
                                      else
                                        {
                                          t = j_31;
                                          {
                                            ATerm q_5 (ATerm t)
                                            {
                                              ATerm b_98 = NULL;
                                              b_98 = t;
                                              b_97 :
                                              if(!(match_string(b_98, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm r_5 (ATerm t)
                                            {
                                              t = term_z_31;
                                              t = set_config_0(t);
                                              t = term_a_32;
                                              return(t);
                                            }
                                            ATerm s_5 (ATerm t)
                                            {
                                              t = term_b_32;
                                              return(t);
                                            }
                                            t = Option_3(t, q_5, r_5, s_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATempty, term_c_32));
  {
    t = printnl_0(t);
    {
      t = term_l_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_98 = NULL;
  q_98 = t;
  t = SSL_TicksToSeconds(not_null(q_98));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_98 = NULL,w_98 = NULL,x_98 = NULL;
  v_98 = t;
  u_98 :
  if(match_cons(v_98, sym__2))
    {
      w_98 = ATgetArgument(v_98, 0);
      x_98 = ATgetArgument(v_98, 1);
      {
        ATerm d_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_98), not_null(x_98));
            LocalPopChoice(e_32);
          }
        else
          {
            t = d_32;
            t = SSL_addr(not_null(w_98), not_null(x_98));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm t_102 (ATerm), ATerm u_102 (ATerm))
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_102(t);
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      {
        ATerm e_99 = NULL,f_99 = NULL,g_99 = NULL;
        e_99 = t;
        d_99 :
        if(((ATgetType(e_99) == AT_LIST) && ((ATermList) e_99 != ATempty)))
          {
            f_99 = ATgetFirst((ATermList) e_99);
            g_99 = (ATerm) ATgetNext((ATermList) e_99);
            {
              ATerm j_99 = NULL;
              ATerm k_99 = NULL;
              t = not_null(g_99);
              {
                t = foldr_2(t, t_102, u_102);
                {
                  k_99 = t;
                  if(((j_99 != NULL) && (j_99 != k_99)))
                    _fail(k_99);
                  else
                    j_99 = k_99;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_99), not_null(j_99));
                t = u_102(t);
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
ATerm crush_2 (ATerm t, ATerm l_104 (ATerm), ATerm m_104 (ATerm))
{
  ATerm v_99 = NULL;
  ATerm x_99 = NULL;
  v_99 = t;
  {
    ATerm y_99 = NULL;
    ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL;
    t = not_null(v_99);
    {
      y_99 = t;
      {
        t = SSL_explode_term(not_null(y_99));
        {
          a_100 = t;
          u_99 :
          if(match_cons(a_100, sym__2))
            {
              b_100 = ATgetArgument(a_100, 0);
              c_100 = ATgetArgument(a_100, 1);
              if(((x_99 != NULL) && (x_99 != c_100)))
                _fail(c_100);
              else
                x_99 = c_100;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_99);
      t = foldr_2(t, l_104, m_104);
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
    ATerm t_5 (ATerm t)
    {
      t = term_b_30;
      return(t);
    }
    t = crush_2(t, t_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL;
  i_100 = t;
  h_100 :
  if(match_cons(i_100, sym__2))
    {
      j_100 = ATgetArgument(i_100, 0);
      k_100 = ATgetArgument(i_100, 1);
      {
        ATerm h_32;
        h_32 = t;
        {
          ATerm i_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_100), not_null(k_100));
              LocalPopChoice(j_32);
            }
          else
            {
              t = i_32;
              t = SSL_gtr(not_null(j_100), not_null(k_100));
            }
        }
        t = h_32;
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
  ATerm t_100 = NULL;
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_100 = NULL,v_100 = NULL,w_100 = NULL;
      u_100 = t;
      s_100 :
      if(match_cons(u_100, sym__2))
        {
          v_100 = ATgetArgument(u_100, 0);
          w_100 = ATgetArgument(u_100, 1);
          {
            if(((t_100 != NULL) && (t_100 != v_100)))
              _fail(v_100);
            else
              t_100 = v_100;
            if(((t_100 != NULL) && (t_100 != w_100)))
              _fail(w_100);
            else
              t_100 = w_100;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm v_91 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm m_32;
    m_32 = t;
    {
      ATerm z_100 = NULL;
      ATerm a_101 = NULL;
      t = term_y_26;
      {
        t = get_config_0(t);
        {
          a_101 = t;
          if(((z_100 != NULL) && (z_100 != a_101)))
            _fail(a_101);
          else
            z_100 = a_101;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_100), term_l_15);
        t = geq_0(t);
      }
    }
    t = m_32;
    t = v_91(t);
    return(t);
  }
  t = try_1(t, u_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm e_101 = NULL,h_101 = NULL;
    ATerm n_32;
    n_32 = t;
    {
      ATerm f_101 = NULL;
      t = run_time_0(t);
      {
        f_101 = t;
        if(((e_101 != NULL) && (e_101 != f_101)))
          _fail(f_101);
        else
          e_101 = f_101;
      }
    }
    t = n_32;
    {
      ATerm i_101 = NULL;
      t = term_o_32;
      {
        t = get_config_0(t);
        {
          i_101 = t;
          if(((h_101 != NULL) && (h_101 != i_101)))
            _fail(i_101);
          else
            h_101 = i_101;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_32), not_null(e_101)), term_p_32), not_null(h_101)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_5);
  {
    t = term_b_30;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_101 = NULL;
  r_101 = t;
  q_101 :
  if(match_cons(r_101, sym_Version_0))
    {
      ATerm a_102 = NULL,c_102 = NULL;
      ATerm r_32;
      r_32 = t;
      {
        ATerm b_102 = NULL;
        t = SSLgetAnnotations(not_null(r_101));
        {
          b_102 = t;
          if(((a_102 != NULL) && (a_102 != b_102)))
            _fail(b_102);
          else
            a_102 = b_102;
        }
      }
      t = r_32;
      {
        ATerm d_102 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_102));
        {
          d_102 = t;
          if(((c_102 != NULL) && (c_102 != d_102)))
            _fail(d_102);
          else
            c_102 = d_102;
        }
        t = not_null(c_102);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_5);
  t = e_94(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_102 = NULL;
  i_102 = t;
  t = SSL_table_create(not_null(i_102));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_102 = NULL;
  m_102 = t;
  {
    ATerm w_32;
    w_32 = t;
    {
      t = term_x_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_32, term_y_32, not_null(m_102));
          t = table_put_0(t);
        }
      }
    }
    t = w_32;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm q_102 = NULL;
  q_102 = t;
  t = SSL_table_destroy(not_null(q_102));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_102 = NULL;
  z_102 = t;
  t = SSL_exit(not_null(z_102));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_103 = NULL,e_103 = NULL,f_103 = NULL;
  d_103 = t;
  c_103 :
  if(((ATermList) d_103 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_103) == AT_LIST) && ((ATermList) d_103 != ATempty)))
        {
          e_103 = ATgetFirst((ATermList) d_103);
          f_103 = (ATerm) ATgetNext((ATermList) d_103);
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
  ATerm z_32;
  z_32 = t;
  {
    ATerm i_103 = NULL;
    ATerm l_103 = NULL;
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        {
          ATerm j_103 = NULL;
          ATerm k_103 = NULL;
          k_103 = t;
          if(((j_103 != NULL) && (j_103 != k_103)))
            _fail(k_103);
          else
            j_103 = k_103;
          t = (ATerm) ATinsert(ATempty, not_null(j_103));
        }
      }
    {
      l_103 = t;
      if(((i_103 != NULL) && (i_103 != l_103)))
        _fail(l_103);
      else
        i_103 = l_103;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_27, not_null(i_103));
      t = printnl_0(t);
    }
  }
  t = z_32;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_106 (ATerm))
{
  ATerm o_103 (ATerm t)
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = Cons_2(t, s_106, o_103);
      }
    return(t);
  }
  t = o_103(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_103 = NULL,x_103 = NULL,y_103 = NULL;
  y_103 = t;
  v_103 :
  if(((ATgetType(y_103) == AT_LIST) && ((ATermList) y_103 != ATempty)))
    {
      w_103 = ATgetFirst((ATermList) y_103);
      x_103 = (ATerm) ATgetNext((ATermList) y_103);
      {
        ATerm h_104 = NULL;
        t = not_null(x_103);
        {
          ATerm e_33;
          e_33 = t;
          {
            ATerm i_104 = NULL,k_104 = NULL,r_104 = NULL;
            ATerm h_33;
            h_33 = t;
            {
              ATerm j_104 = NULL;
              t = i_0(t);
              {
                j_104 = t;
                if(((i_104 != NULL) && (i_104 != j_104)))
                  _fail(j_104);
                else
                  i_104 = j_104;
              }
            }
            t = h_33;
            {
              ATerm q_104 = NULL;
              t = not_null(w_103);
              {
                t = h_0(t);
                {
                  q_104 = t;
                  if(((k_104 != NULL) && (k_104 != q_104)))
                    _fail(q_104);
                  else
                    k_104 = q_104;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_104)), not_null(k_104));
                {
                  r_104 = t;
                  if(((h_104 != NULL) && (h_104 != r_104)))
                    _fail(r_104);
                  else
                    h_104 = r_104;
                }
              }
            }
          }
          t = e_33;
          {
            ATerm x_5 (ATerm t)
            {
              t = not_null(h_104);
              return(t);
            }
            t = reverse_acc_2(t, h_0, x_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) y_103 == ATempty))
        {
          {
            t = term_x_6;
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
  ATerm y_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_77 (ATerm))
{
  ATerm c_105 = NULL,d_105 = NULL;
  c_105 = t;
  b_105 :
  if(match_cons(c_105, sym_Program_1))
    {
      d_105 = ATgetArgument(c_105, 0);
      {
        ATerm g_105 = NULL,i_105 = NULL;
        ATerm h_105 = NULL;
        t = SSLgetAnnotations(not_null(c_105));
        {
          h_105 = t;
          if(((g_105 != NULL) && (g_105 != h_105)))
            _fail(h_105);
          else
            g_105 = h_105;
        }
        {
          t = not_null(d_105);
          {
            ATerm k_105 = NULL;
            t = m_77(t);
            {
              i_105 = t;
              {
                ATerm l_105 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_105)), not_null(g_105));
                {
                  l_105 = t;
                  if(((k_105 != NULL) && (k_105 != l_105)))
                    _fail(l_105);
                  else
                    k_105 = l_105;
                }
                t = not_null(k_105);
              }
            }
          }
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
  ATerm u_105 = NULL;
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_105 = NULL;
      t = term_o_32;
      {
        t = get_config_0(t);
        {
          v_105 = t;
          if(((u_105 != NULL) && (u_105 != v_105)))
            _fail(v_105);
          else
            u_105 = v_105;
        }
      }
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      {
        ATerm z_5 (ATerm t)
        {
          ATerm a_6 (ATerm t)
          {
            ATerm w_105 = NULL;
            w_105 = t;
            if(((u_105 != NULL) && (u_105 != w_105)))
              _fail(w_105);
            else
              u_105 = w_105;
            return(t);
          }
          t = Program_1(t, a_6);
          return(t);
        }
        t = option_defined_1(t, z_5);
      }
    }
  {
    ATerm b_6 (ATerm t)
    {
      ATerm c_6 (ATerm t)
      {
        t = not_null(u_105);
        return(t);
      }
      t = short_description_1(t, c_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, b_6);
    {
      t = term_k_33;
      {
        t = echo_0(t);
        {
          t = term_o_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_6 (ATerm t)
                {
                  ATerm x_105 = NULL;
                  ATerm y_105 = NULL;
                  y_105 = t;
                  if(((x_105 != NULL) && (x_105 != y_105)))
                    _fail(y_105);
                  else
                    x_105 = y_105;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_105)), term_p_33);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_6);
                {
                  ATerm e_6 (ATerm t)
                  {
                    ATerm z_105 = NULL;
                    ATerm a_106 = NULL;
                    ATerm f_6 (ATerm t)
                    {
                      t = not_null(u_105);
                      return(t);
                    }
                    t = long_description_1(t, f_6);
                    {
                      a_106 = t;
                      if(((z_105 != NULL) && (z_105 != a_106)))
                        _fail(a_106);
                      else
                        z_105 = a_106;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_105)), term_q_33);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_6);
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
  ATerm r_33;
  r_33 = t;
  {
    ATerm g_106 = NULL;
    ATerm h_106 = NULL;
    h_106 = t;
    if(((g_106 != NULL) && (g_106 != h_106)))
      _fail(h_106);
    else
      g_106 = h_106;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATempty, not_null(g_106)));
      t = printnl_0(t);
    }
  }
  t = r_33;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_87 (ATerm))
{
  ATerm s_33;
  s_33 = t;
  {
    t = q_87(t);
    t = debug_0(t);
  }
  t = s_33;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_77 (ATerm))
{
  ATerm o_106 = NULL,p_106 = NULL;
  o_106 = t;
  n_106 :
  if(match_cons(o_106, sym_Undefined_1))
    {
      p_106 = ATgetArgument(o_106, 0);
      {
        ATerm u_106 = NULL,w_106 = NULL;
        ATerm v_106 = NULL;
        t = SSLgetAnnotations(not_null(o_106));
        {
          v_106 = t;
          if(((u_106 != NULL) && (u_106 != v_106)))
            _fail(v_106);
          else
            u_106 = v_106;
        }
        {
          t = not_null(p_106);
          {
            ATerm y_106 = NULL;
            t = n_77(t);
            {
              w_106 = t;
              {
                ATerm z_106 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_106)), not_null(u_106));
                {
                  z_106 = t;
                  if(((y_106 != NULL) && (y_106 != z_106)))
                    _fail(z_106);
                  else
                    y_106 = z_106;
                }
                t = not_null(y_106);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_107 (ATerm))
{
  ATerm g_107 (ATerm t)
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_107, _id);
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = Cons_2(t, _id, g_107);
      }
    return(t);
  }
  t = g_107(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_91 (ATerm))
{
  t = fetch_1(t, f_91);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_107 = NULL;
  n_107 = t;
  m_107 :
  if(match_cons(n_107, sym_Help_0))
    {
      ATerm p_107 = NULL,r_107 = NULL;
      ATerm w_33;
      w_33 = t;
      {
        ATerm q_107 = NULL;
        t = SSLgetAnnotations(not_null(n_107));
        {
          q_107 = t;
          if(((p_107 != NULL) && (p_107 != q_107)))
            _fail(q_107);
          else
            p_107 = q_107;
        }
      }
      t = w_33;
      {
        ATerm s_107 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_107));
        {
          s_107 = t;
          if(((r_107 != NULL) && (r_107 != s_107)))
            _fail(s_107);
          else
            r_107 = s_107;
        }
        t = not_null(r_107);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_110 (ATerm))
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_110(t);
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_107 = NULL,z_107 = NULL,a_108 = NULL;
  y_107 = t;
  x_107 :
  if(match_cons(y_107, sym__2))
    {
      z_107 = ATgetArgument(y_107, 0);
      a_108 = ATgetArgument(y_107, 1);
      t = SSL_table_get(not_null(z_107), not_null(a_108));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL,l_108 = NULL;
  h_108 = t;
  g_108 :
  if(match_cons(h_108, sym__3))
    {
      i_108 = ATgetArgument(h_108, 0);
      j_108 = ATgetArgument(h_108, 1);
      l_108 = ATgetArgument(h_108, 2);
      {
        ATerm z_33;
        z_33 = t;
        {
          ATerm p_108 = NULL;
          ATerm q_108 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_108), not_null(j_108));
          {
            ATerm a_34 = t;
            int b_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(b_34);
              }
            else
              {
                t = a_34;
                t = (ATerm) ATempty;
              }
            {
              q_108 = t;
              if(((p_108 != NULL) && (p_108 != q_108)))
                _fail(q_108);
              else
                p_108 = q_108;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_108), not_null(j_108), (ATerm) ATinsert(CheckATermList(not_null(p_108)), not_null(l_108)));
            t = table_put_0(t);
          }
        }
        t = z_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_90 (ATerm))
{
  ATerm a_109 = NULL;
  ATerm b_109 = NULL;
  t = term_x_6;
  {
    t = f_90(t);
    {
      b_109 = t;
      if(((a_109 != NULL) && (a_109 != b_109)))
        _fail(b_109);
      else
        a_109 = b_109;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_33, term_n_33, not_null(a_109));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL;
  h_109 = t;
  g_109 :
  if(match_string(h_109, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(h_109) == AT_LIST) && ((ATermList) h_109 != ATempty)))
        {
          i_109 = ATgetFirst((ATermList) h_109);
          j_109 = (ATerm) ATgetNext((ATermList) h_109);
          {
            ATerm m_109 = NULL;
            ATerm h_34;
            h_34 = t;
            {
              t = not_null(i_109);
              t = a_0(t);
            }
            t = h_34;
            {
              ATerm n_109 = NULL;
              t = term_x_6;
              {
                t = b_0(t);
                {
                  n_109 = t;
                  if(((m_109 != NULL) && (m_109 != n_109)))
                    _fail(n_109);
                  else
                    m_109 = n_109;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_109)), not_null(m_109));
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
  ATerm g_6 (ATerm t)
  {
    ATerm s_109 = NULL;
    s_109 = t;
    r_109 :
    if(!(match_string(s_109, "--help")))
      {
        if(!(match_string(s_109, "-h")))
          {
            if(!(match_string(s_109, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_q_34;
    {
      t = set_config_0(t);
      t = term_r_34;
    }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_s_34;
    return(t);
  }
  t = Option_3(t, g_6, h_6, i_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_109 = NULL,w_109 = NULL,x_109 = NULL;
  v_109 = t;
  u_109 :
  if(((ATgetType(v_109) == AT_LIST) && ((ATermList) v_109 != ATempty)))
    {
      w_109 = ATgetFirst((ATermList) v_109);
      x_109 = (ATerm) ATgetNext((ATermList) v_109);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_109)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_109)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_87 (ATerm), ATerm h_87 (ATerm))
{
  ATerm j_110 = NULL,k_110 = NULL,l_110 = NULL;
  j_110 = t;
  i_110 :
  if(((ATgetType(j_110) == AT_LIST) && ((ATermList) j_110 != ATempty)))
    {
      k_110 = ATgetFirst((ATermList) j_110);
      l_110 = (ATerm) ATgetNext((ATermList) j_110);
      {
        ATerm p_110 = NULL,r_110 = NULL;
        ATerm q_110 = NULL;
        t = SSLgetAnnotations(not_null(j_110));
        {
          q_110 = t;
          if(((p_110 != NULL) && (p_110 != q_110)))
            _fail(q_110);
          else
            p_110 = q_110;
        }
        {
          t = not_null(k_110);
          {
            ATerm t_110 = NULL;
            t = g_87(t);
            {
              r_110 = t;
              {
                t = not_null(l_110);
                {
                  ATerm v_110 = NULL;
                  t = h_87(t);
                  {
                    t_110 = t;
                    {
                      ATerm w_110 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_110)), not_null(r_110)), not_null(p_110));
                      {
                        w_110 = t;
                        if(((v_110 != NULL) && (v_110 != w_110)))
                          _fail(w_110);
                        else
                          v_110 = w_110;
                      }
                      t = not_null(v_110);
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
  ATerm h_111 = NULL;
  h_111 = t;
  g_111 :
  if(((ATermList) h_111 == ATempty))
    {
      {
        ATerm j_111 = NULL,q_111 = NULL;
        ATerm t_34;
        t_34 = t;
        {
          ATerm n_111 = NULL;
          t = SSLgetAnnotations(not_null(h_111));
          {
            n_111 = t;
            if(((j_111 != NULL) && (j_111 != n_111)))
              _fail(n_111);
            else
              j_111 = n_111;
          }
        }
        t = t_34;
        {
          ATerm r_111 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_111));
          {
            r_111 = t;
            if(((q_111 != NULL) && (q_111 != r_111)))
              _fail(r_111);
            else
              q_111 = r_111;
          }
          t = not_null(q_111);
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
  ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL;
  x_111 = t;
  w_111 :
  if(match_cons(x_111, sym__2))
    {
      y_111 = ATgetArgument(x_111, 0);
      z_111 = ATgetArgument(x_111, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_26, not_null(y_111), not_null(z_111));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm z_34;
  z_34 = t;
  {
    ATerm k_6 (ATerm t)
    {
      t = term_a_35;
      t = d_90(t);
      return(t);
    }
    t = try_1(t, k_6);
  }
  t = z_34;
  {
    ATerm l_6 (ATerm t)
    {
      ATerm h_112 = NULL;
      ATerm b_35;
      b_35 = t;
      {
        ATerm f_112 = NULL;
        ATerm g_112 = NULL;
        g_112 = t;
        if(((f_112 != NULL) && (f_112 != g_112)))
          _fail(g_112);
        else
          f_112 = g_112;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_32, not_null(f_112));
          t = set_config_0(t);
        }
      }
      t = b_35;
      {
        ATerm i_112 = NULL;
        i_112 = t;
        if(((h_112 != NULL) && (h_112 != i_112)))
          _fail(i_112);
        else
          h_112 = i_112;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_112));
      }
      return(t);
    }
    ATerm m_6 (ATerm t)
    {
      ATerm c_35 = t;
      int d_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_35 = t;
          int j_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_35);
            }
          else
            {
              t = e_35;
              {
                t = d_90(t);
                t = Cons_2(t, _id, m_6);
              }
            }
          LocalPopChoice(d_35);
        }
      else
        {
          t = c_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_6, m_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL;
  ATerm k_35;
  k_35 = t;
  {
    ATerm r_112 = NULL,s_112 = NULL,t_112 = NULL,u_112 = NULL;
    r_112 = t;
    n_112 :
    if(match_cons(r_112, sym__3))
      {
        s_112 = ATgetArgument(r_112, 0);
        t_112 = ATgetArgument(r_112, 1);
        u_112 = ATgetArgument(r_112, 2);
        {
          if(((o_112 != NULL) && (o_112 != s_112)))
            _fail(s_112);
          else
            o_112 = s_112;
          {
            if(((p_112 != NULL) && (p_112 != t_112)))
              _fail(t_112);
            else
              p_112 = t_112;
            {
              if(((q_112 != NULL) && (q_112 != u_112)))
                _fail(u_112);
              else
                q_112 = u_112;
              t = SSL_table_put(not_null(o_112), not_null(p_112), not_null(q_112));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm x_112 = NULL;
  ATerm p_35;
  p_35 = t;
  {
    t = term_q_35;
    t = table_put_0(t);
  }
  t = p_35;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm r_35 = t;
      int s_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_90(t);
          LocalPopChoice(s_35);
        }
      else
        {
          t = r_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_6);
    {
      ATerm o_6 (ATerm t)
      {
        ATerm t_35 = t;
        int u_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_35;
            x_35 = t;
            {
              ATerm a_36 = t;
              int e_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_34;
                  t = get_config_0(t);
                  LocalPopChoice(e_36);
                }
              else
                {
                  t = a_36;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = x_35;
            {
              t = system_usage_0(t);
              {
                t = term_b_30;
                t = exit_0(t);
              }
            }
            LocalPopChoice(u_35);
          }
        else
          {
            t = t_35;
            {
              ATerm p_6 (ATerm t)
              {
                ATerm q_6 (ATerm t)
                {
                  ATerm y_112 = NULL;
                  y_112 = t;
                  if(((x_112 != NULL) && (x_112 != y_112)))
                    _fail(y_112);
                  else
                    x_112 = y_112;
                  return(t);
                }
                t = Undefined_1(t, q_6);
                return(t);
              }
              t = option_defined_1(t, p_6);
              {
                ATerm r_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_112)), term_f_36);
                  return(t);
                }
                t = say_1(t, r_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_15;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, o_6);
      {
        ATerm g_36;
        g_36 = t;
        {
          t = term_m_33;
          t = table_destroy_0(t);
        }
        t = g_36;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_93 (ATerm))
{
  t = parse_options_1(t, b_93);
  {
    t = store_options_0(t);
    {
      t = d_93(t);
      {
        ATerm i_36 = t;
        int j_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_93);
            LocalPopChoice(j_36);
          }
        else
          {
            t = i_36;
            {
              ATerm k_36 = t;
              int l_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_93(t);
                  t = report_success_0(t);
                  LocalPopChoice(l_36);
                }
              else
                {
                  t = k_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm m_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_93(t);
        LocalPopChoice(r_36);
      }
    else
      {
        t = m_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, s_93);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, s_6, u_93, v_93, t_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm o_93 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm v_6 (ATerm t)
    {
      ATerm s_36;
      s_36 = t;
      {
        ATerm b_113 = NULL;
        ATerm e_113 = NULL;
        t = term_o_32;
        {
          t = get_config_0(t);
          {
            e_113 = t;
            if(((b_113 != NULL) && (b_113 != e_113)))
              _fail(e_113);
            else
              b_113 = e_113;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATempty, not_null(b_113)));
          t = printnl_0(t);
        }
      }
      t = s_36;
      return(t);
    }
    t = if_verbose2_1(t, v_6);
    return(t);
  }
  t = iowrap_4(t, m_93, n_93, o_93, u_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_93 (ATerm), ATerm l_93 (ATerm))
{
  t = iowrap_3(t, k_93, l_93, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_93 (ATerm))
{
  ATerm w_6 (ATerm t)
  {
    t = _2(t, _id, h_93);
    return(t);
  }
  t = iowrap_2(t, w_6, _fail);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = inline_0(t);
  return(t);
}
