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
Symbol sym_Mark_0;
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
  sym_Mark_0 = ATmakeSymbol("Mark", 0, ATfalse);
  ATprotectSymbol(sym_Mark_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_m_35;
ATerm term_b_35;
ATerm term_t_34;
ATerm term_l_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_o_30;
ATerm term_k_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_y_28;
ATerm term_m_28;
ATerm term_d_28;
ATerm term_w_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_m_25;
ATerm term_e_25;
ATerm term_z_24;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_f_21;
ATerm term_y_20;
ATerm term_q_20;
ATerm term_i_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_a_17;
ATerm term_p_16;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_t_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_z_9;
void init_constant_terms (void)
{
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("x*", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Call_2, term_b_20, (ATerm) ATempty);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_a_30);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_z_24);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_z_24);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, term_g_31, term_z_24);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__2, term_r_33, term_s_33);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_f_34, term_z_24);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__3, term_r_33, term_s_33, (ATerm) ATempty);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm y_99 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm c_90 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm j_85 (ATerm), ATerm k_85 (ATerm));
ATerm Prim_2 (ATerm, ATerm d_89 (ATerm), ATerm e_89 (ATerm));
ATerm Explode_2 (ATerm, ATerm f_85 (ATerm), ATerm g_85 (ATerm));
ATerm Op_2 (ATerm, ATerm d_87 (ATerm), ATerm e_87 (ATerm));
ATerm pat_td_1 (ATerm, ATerm w_91 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm m_111 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm j_105 (ATerm), ATerm k_105 (ATerm));
ATerm repeat_1 (ATerm, ATerm m_105 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm z_84 (ATerm), ATerm a_85 (ATerm));
ATerm Con_3 (ATerm, ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm j_117 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm t_115 (ATerm));
ATerm desugar_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm q_100 (ATerm));
ATerm restore_always_2 (ATerm, ATerm r_115 (ATerm), ATerm s_115 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm p_100 (ATerm));
ATerm scope_2 (ATerm, ATerm r_100 (ATerm), ATerm s_100 (ATerm));
ATerm replace_application_0 (ATerm);
ATerm BottomupToVarIsId_UnCond_0 (ATerm);
ATerm BottomupOverConstructor_0 (ATerm);
ATerm IntroduceApp_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm SeqOverScopeR_0 (ATerm);
ATerm SeqOverLChoiceR_0 (ATerm);
ATerm SeqOverChoiceR_0 (ATerm);
ATerm fuse_with_bottomup_0 (ATerm);
ATerm SeqOverScopeL_0 (ATerm);
ATerm SeqOverLChoiceL_0 (ATerm);
ATerm SeqOverChoiceL_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm u_115 (ATerm));
ATerm innermost_1 (ATerm, ATerm l_103 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm x_88 (ATerm));
ATerm Seq_2 (ATerm, ATerm h_87 (ATerm), ATerm i_87 (ATerm));
ATerm Match_1 (ATerm, ATerm w_88 (ATerm));
ATerm LChoice_2 (ATerm, ATerm l_87 (ATerm), ATerm m_87 (ATerm));
ATerm Choice_2 (ATerm, ATerm j_87 (ATerm), ATerm k_87 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm x_117 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm x_93 (ATerm), ATerm y_93 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm z_93 (ATerm), ATerm a_94 (ATerm));
ATerm substitute_1 (ATerm, ATerm b_94 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm a_91 (ATerm));
ATerm Rec_2 (ATerm, ATerm w_87 (ATerm), ATerm x_87 (ATerm));
ATerm SDef_3 (ATerm, ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm));
ATerm Let_2 (ATerm, ATerm y_87 (ATerm), ATerm z_87 (ATerm));
ATerm sboundin_3 (ATerm, ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm d_91 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm v_87 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm w_90 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm d_86 (ATerm));
ATerm Scope_2 (ATerm, ATerm a_89 (ATerm), ATerm b_89 (ATerm));
ATerm tboundin_3 (ATerm, ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm z_90 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm j_108 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm e_107 (ATerm));
ATerm crush_3 (ATerm, ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm w_108 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_106 (ATerm), ATerm b_106 (ATerm));
ATerm for_3 (ATerm, ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_108 (ATerm), ATerm i_108 (ATerm));
ATerm diff_1 (ATerm, ATerm m_108 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm c_1 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm k_93 (ATerm), ATerm l_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm f_111 (ATerm));
ATerm zip_1 (ATerm, ATerm h_111 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm q_93 (ATerm), ATerm r_93 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm e_93 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm m_102 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm r_102 (ATerm));
ATerm rename_4 (ATerm, ATerm s_93 (ATerm, ATerm (ATerm)), ATerm t_93 (ATerm), ATerm u_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_93 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm v_100 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm t_100 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm n_86 (ATerm));
ATerm Signature_1 (ATerm, ATerm k_86 (ATerm));
ATerm Specification_1 (ATerm, ATerm p_86 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm d_77 (ATerm), ATerm e_77 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_113 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm x_99 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_99 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm m_114 (ATerm), ATerm n_114 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm a_107 (ATerm), ATerm b_107 (ATerm));
ATerm crush_2 (ATerm, ATerm s_108 (ATerm), ATerm t_108 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm b_90 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_99 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_95 (ATerm));
ATerm map_1 (ATerm, ATerm q_112 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_95 (ATerm));
ATerm Program_1 (ATerm, ATerm r_78 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_78 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_112 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_96 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_115 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_95 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_89 (ATerm), ATerm g_89 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_95 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_95 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm));
ATerm iowrap_4 (ATerm, ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_98 (ATerm), ATerm m_98 (ATerm));
ATerm iowrap_1 (ATerm, ATerm i_98 (ATerm));
ATerm fusion_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm y_9;
  y_9 = t;
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    r_6 = t;
    if(((q_6 != NULL) && (q_6 != r_6)))
      _fail(r_6);
    else
      q_6 = r_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATempty, not_null(q_6)));
      t = printnl_0(t);
    }
  }
  t = y_9;
  return(t);
}
ATerm say_1 (ATerm t, ATerm y_99 (ATerm))
{
  ATerm a_10;
  a_10 = t;
  {
    t = y_99(t);
    t = debug_0(t);
  }
  t = a_10;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    ATerm b_10;
    b_10 = t;
    {
      ATerm h_7 = NULL;
      ATerm i_7 = NULL;
      t = term_c_10;
      {
        t = get_config_0(t);
        {
          i_7 = t;
          if(((h_7 != NULL) && (h_7 != i_7)))
            _fail(i_7);
          else
            h_7 = i_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), term_d_10);
        t = geq_0(t);
      }
    }
    t = b_10;
    t = c_90(t);
    return(t);
  }
  t = try_1(t, e_0);
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  p_8 = t;
  n_8 :
  if(match_cons(p_8, sym_ExplodeCong_2))
    {
      q_8 = ATgetArgument(p_8, 0);
      o_8 = ATgetArgument(p_8, 1);
      {
        ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
        ATerm x_8 = NULL;
        ATerm y_8 = NULL;
        t = new_0(t);
        {
          x_8 = t;
          {
            if(((t_8 != NULL) && (t_8 != x_8)))
              _fail(x_8);
            else
              t_8 = x_8;
            {
              ATerm z_8 = NULL;
              t = new_0(t);
              {
                y_8 = t;
                {
                  if(((u_8 != NULL) && (u_8 != y_8)))
                    _fail(y_8);
                  else
                    u_8 = y_8;
                  {
                    ATerm a_9 = NULL;
                    t = new_0(t);
                    {
                      z_8 = t;
                      {
                        if(((v_8 != NULL) && (v_8 != z_8)))
                          _fail(z_8);
                        else
                          v_8 = z_8;
                        {
                          t = new_0(t);
                          {
                            a_9 = t;
                            if(((w_8 != NULL) && (w_8 != a_9)))
                              _fail(a_9);
                            else
                              w_8 = a_9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_8)), not_null(v_8)), not_null(u_8)), not_null(t_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_8)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(q_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_8))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(o_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_8))))), (ATerm) ATmakeAppl(sym_Prim_2, term_e_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_8))), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_8)))))));
      }
    }
  else
    {
      if(match_cons(p_8, sym_Build_1))
        {
          q_8 = ATgetArgument(p_8, 0);
          {
            ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
            ATerm g_9 = NULL;
            ATerm k_9 = NULL;
            t = new_0(t);
            {
              g_9 = t;
              {
                if(((e_9 != NULL) && (e_9 != g_9)))
                  _fail(g_9);
                else
                  e_9 = g_9;
                {
                  t = not_null(q_8);
                  {
                    ATerm f_0 (ATerm t)
                    {
                      ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
                      h_9 = t;
                      g_8 :
                      if(match_cons(h_9, sym_Explode_2))
                        {
                          i_9 = ATgetArgument(h_9, 0);
                          j_9 = ATgetArgument(h_9, 1);
                          {
                            if(((c_9 != NULL) && (c_9 != i_9)))
                              _fail(i_9);
                            else
                              c_9 = i_9;
                            {
                              if(((d_9 != NULL) && (d_9 != j_9)))
                                _fail(j_9);
                              else
                                d_9 = j_9;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_9));
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
                      k_9 = t;
                      if(((f_9 != NULL) && (f_9 != k_9)))
                        _fail(k_9);
                      else
                        f_9 = k_9;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_e_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_9)), not_null(c_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_9))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_9)))));
          }
        }
      else
        {
          if(match_cons(p_8, sym_Match_1))
            {
              q_8 = ATgetArgument(p_8, 0);
              {
                ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
                ATerm r_9 = NULL;
                ATerm s_9 = NULL;
                t = new_0(t);
                {
                  r_9 = t;
                  {
                    if(((o_9 != NULL) && (o_9 != r_9)))
                      _fail(r_9);
                    else
                      o_9 = r_9;
                    {
                      ATerm w_9 = NULL;
                      t = new_0(t);
                      {
                        s_9 = t;
                        {
                          if(((p_9 != NULL) && (p_9 != s_9)))
                            _fail(s_9);
                          else
                            p_9 = s_9;
                          {
                            t = not_null(q_8);
                            {
                              ATerm m_0 (ATerm t)
                              {
                                ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
                                t_9 = t;
                                l_8 :
                                if(match_cons(t_9, sym_Explode_2))
                                  {
                                    u_9 = ATgetArgument(t_9, 0);
                                    v_9 = ATgetArgument(t_9, 1);
                                    {
                                      if(((m_9 != NULL) && (m_9 != u_9)))
                                        _fail(u_9);
                                      else
                                        m_9 = u_9;
                                      {
                                        if(((n_9 != NULL) && (n_9 != v_9)))
                                          _fail(v_9);
                                        else
                                          n_9 = v_9;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_9));
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
                                w_9 = t;
                                if(((q_9 != NULL) && (q_9 != w_9)))
                                  _fail(w_9);
                                else
                                  q_9 = w_9;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_9)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_9))), (ATerm) ATmakeAppl(sym_Prim_2, term_f_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_9)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_9)), (ATerm) ATmakeAppl(sym_Op_2, term_g_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_9)), not_null(m_9)))))));
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
  ATerm b_11 = NULL,c_11 = NULL;
  b_11 = t;
  a_11 :
  if(match_cons(b_11, sym_Match_1))
    {
      c_11 = ATgetArgument(b_11, 0);
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
            ATerm i_11 = NULL;
            ATerm m_11 = NULL;
            t = new_0(t);
            {
              i_11 = t;
              {
                if(((g_11 != NULL) && (g_11 != i_11)))
                  _fail(i_11);
                else
                  g_11 = i_11;
                {
                  t = not_null(c_11);
                  {
                    ATerm n_0 (ATerm t)
                    {
                      ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
                      j_11 = t;
                      q_10 :
                      if(match_cons(j_11, sym_Anno_2))
                        {
                          k_11 = ATgetArgument(j_11, 0);
                          l_11 = ATgetArgument(j_11, 1);
                          {
                            if(((e_11 != NULL) && (e_11 != k_11)))
                              _fail(k_11);
                            else
                              e_11 = k_11;
                            {
                              if(((f_11 != NULL) && (f_11 != l_11)))
                                _fail(l_11);
                              else
                                f_11 = l_11;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_11)), not_null(e_11));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, n_0);
                    {
                      m_11 = t;
                      if(((h_11 != NULL) && (h_11 != m_11)))
                        _fail(m_11);
                      else
                        h_11 = m_11;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_j_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_11)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_11))))));
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            {
              ATerm k_10 = t;
              int l_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
                  ATerm r_11 = NULL;
                  ATerm u_11 = NULL;
                  t = new_0(t);
                  {
                    r_11 = t;
                    {
                      if(((p_11 != NULL) && (p_11 != r_11)))
                        _fail(r_11);
                      else
                        p_11 = r_11;
                      {
                        t = not_null(c_11);
                        {
                          ATerm o_0 (ATerm t)
                          {
                            ATerm s_11 = NULL,t_11 = NULL;
                            s_11 = t;
                            u_10 :
                            if(match_cons(s_11, sym_RootApp_1))
                              {
                                t_11 = ATgetArgument(s_11, 0);
                                {
                                  if(((o_11 != NULL) && (o_11 != t_11)))
                                    _fail(t_11);
                                  else
                                    o_11 = t_11;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_11));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, o_0);
                          {
                            u_11 = t;
                            if(((q_11 != NULL) && (q_11 != u_11)))
                              _fail(u_11);
                            else
                              q_11 = u_11;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_11))), not_null(o_11))));
                  LocalPopChoice(l_10);
                }
              else
                {
                  t = k_10;
                  {
                    ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
                    ATerm a_12 = NULL;
                    ATerm e_12 = NULL;
                    t = new_0(t);
                    {
                      a_12 = t;
                      {
                        if(((y_11 != NULL) && (y_11 != a_12)))
                          _fail(a_12);
                        else
                          y_11 = a_12;
                        {
                          t = not_null(c_11);
                          {
                            ATerm p_0 (ATerm t)
                            {
                              ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
                              b_12 = t;
                              y_10 :
                              if(match_cons(b_12, sym_App_2))
                                {
                                  c_12 = ATgetArgument(b_12, 0);
                                  d_12 = ATgetArgument(b_12, 1);
                                  {
                                    if(((x_11 != NULL) && (x_11 != c_12)))
                                      _fail(c_12);
                                    else
                                      x_11 = c_12;
                                    {
                                      if(((w_11 != NULL) && (w_11 != d_12)))
                                        _fail(d_12);
                                      else
                                        w_11 = d_12;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_11));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, p_0);
                            {
                              e_12 = t;
                              if(((z_11 != NULL) && (z_11 != e_12)))
                                _fail(e_12);
                              else
                                z_11 = e_12;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_11))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_11)), not_null(x_11)))));
                  }
                }
            }
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
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
  v_12 = t;
  t_12 :
  if(match_cons(v_12, sym_Match_1))
    {
      w_12 = ATgetArgument(v_12, 0);
      u_12 :
      if(match_cons(w_12, sym_RootApp_1))
        {
          x_12 = ATgetArgument(w_12, 0);
          t = not_null(x_12);
        }
      else
        {
          if(match_cons(w_12, sym_App_2))
            {
              x_12 = ATgetArgument(w_12, 0);
              y_12 = ATgetArgument(w_12, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(x_12), not_null(y_12));
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
  ATerm k_13 = NULL,l_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_Match_1))
    {
      l_13 = ATgetArgument(k_13, 0);
      {
        ATerm n_13 = NULL,o_13 = NULL;
        ATerm s_13 = NULL;
        t = not_null(l_13);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
            p_13 = t;
            g_13 :
            if(match_cons(p_13, sym_RootApp_1))
              {
                q_13 = ATgetArgument(p_13, 0);
                h_13 :
                if(match_cons(q_13, sym_Match_1))
                  {
                    r_13 = ATgetArgument(q_13, 0);
                    {
                      if(((n_13 != NULL) && (n_13 != r_13)))
                        _fail(r_13);
                      else
                        n_13 = r_13;
                      t = not_null(n_13);
                    }
                  }
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
          t = pat_td_1(t, q_0);
          {
            s_13 = t;
            if(((o_13 != NULL) && (o_13 != s_13)))
              _fail(s_13);
            else
              o_13 = s_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(o_13));
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
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym_Build_1))
    {
      n_14 = ATgetArgument(m_14, 0);
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
            ATerm t_14 = NULL;
            ATerm x_14 = NULL;
            t = new_0(t);
            {
              t_14 = t;
              {
                if(((r_14 != NULL) && (r_14 != t_14)))
                  _fail(t_14);
                else
                  r_14 = t_14;
                {
                  t = not_null(n_14);
                  {
                    ATerm r_0 (ATerm t)
                    {
                      ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
                      u_14 = t;
                      b_14 :
                      if(match_cons(u_14, sym_Anno_2))
                        {
                          v_14 = ATgetArgument(u_14, 0);
                          w_14 = ATgetArgument(u_14, 1);
                          {
                            if(((p_14 != NULL) && (p_14 != v_14)))
                              _fail(v_14);
                            else
                              p_14 = v_14;
                            {
                              if(((q_14 != NULL) && (q_14 != w_14)))
                                _fail(w_14);
                              else
                                q_14 = w_14;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_14));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, r_0);
                    {
                      x_14 = t;
                      if(((s_14 != NULL) && (s_14 != x_14)))
                        _fail(x_14);
                      else
                        s_14 = x_14;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_t_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_14)), not_null(p_14))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_14))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_14))));
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            {
              ATerm v_10 = t;
              int w_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
                  ATerm c_15 = NULL;
                  ATerm f_15 = NULL;
                  t = new_0(t);
                  {
                    c_15 = t;
                    {
                      if(((a_15 != NULL) && (a_15 != c_15)))
                        _fail(c_15);
                      else
                        a_15 = c_15;
                      {
                        t = not_null(n_14);
                        {
                          ATerm s_0 (ATerm t)
                          {
                            ATerm d_15 = NULL,e_15 = NULL;
                            d_15 = t;
                            f_14 :
                            if(match_cons(d_15, sym_RootApp_1))
                              {
                                e_15 = ATgetArgument(d_15, 0);
                                {
                                  if(((z_14 != NULL) && (z_14 != e_15)))
                                    _fail(e_15);
                                  else
                                    z_14 = e_15;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_15));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, s_0);
                          {
                            f_15 = t;
                            if(((b_15 != NULL) && (b_15 != f_15)))
                              _fail(f_15);
                            else
                              b_15 = f_15;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_14), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_15))));
                  LocalPopChoice(w_10);
                }
              else
                {
                  t = v_10;
                  {
                    ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
                    ATerm l_15 = NULL;
                    ATerm p_15 = NULL;
                    t = new_0(t);
                    {
                      l_15 = t;
                      {
                        if(((j_15 != NULL) && (j_15 != l_15)))
                          _fail(l_15);
                        else
                          j_15 = l_15;
                        {
                          t = not_null(n_14);
                          {
                            ATerm t_0 (ATerm t)
                            {
                              ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
                              m_15 = t;
                              j_14 :
                              if(match_cons(m_15, sym_App_2))
                                {
                                  n_15 = ATgetArgument(m_15, 0);
                                  o_15 = ATgetArgument(m_15, 1);
                                  {
                                    if(((h_15 != NULL) && (h_15 != n_15)))
                                      _fail(n_15);
                                    else
                                      h_15 = n_15;
                                    {
                                      if(((i_15 != NULL) && (i_15 != o_15)))
                                        _fail(o_15);
                                      else
                                        i_15 = o_15;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_15));
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
                              p_15 = t;
                              if(((k_15 != NULL) && (k_15 != p_15)))
                                _fail(p_15);
                              else
                                k_15 = p_15;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(h_15), not_null(i_15), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_15)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_15))));
                  }
                }
            }
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
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  g_16 = t;
  e_16 :
  if(match_cons(g_16, sym_Build_1))
    {
      h_16 = ATgetArgument(g_16, 0);
      f_16 :
      if(match_cons(h_16, sym_RootApp_1))
        {
          i_16 = ATgetArgument(h_16, 0);
          t = not_null(i_16);
        }
      else
        {
          if(match_cons(h_16, sym_App_2))
            {
              i_16 = ATgetArgument(h_16, 0);
              j_16 = ATgetArgument(h_16, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_16)), not_null(i_16));
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
ATerm As_2 (ATerm t, ATerm j_85 (ATerm), ATerm k_85 (ATerm))
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  u_16 :
  if(match_cons(v_16, sym_As_2))
    {
      w_16 = ATgetArgument(v_16, 0);
      x_16 = ATgetArgument(v_16, 1);
      {
        ATerm b_17 = NULL,d_17 = NULL;
        ATerm c_17 = NULL;
        t = SSLgetAnnotations(not_null(v_16));
        {
          c_17 = t;
          if(((b_17 != NULL) && (b_17 != c_17)))
            _fail(c_17);
          else
            b_17 = c_17;
        }
        {
          t = not_null(w_16);
          {
            ATerm f_17 = NULL;
            t = j_85(t);
            {
              d_17 = t;
              {
                t = not_null(x_16);
                {
                  ATerm h_17 = NULL;
                  t = k_85(t);
                  {
                    f_17 = t;
                    {
                      ATerm i_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(d_17), not_null(f_17)), not_null(b_17));
                      {
                        i_17 = t;
                        if(((h_17 != NULL) && (h_17 != i_17)))
                          _fail(i_17);
                        else
                          h_17 = i_17;
                      }
                      t = not_null(h_17);
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
ATerm Prim_2 (ATerm t, ATerm d_89 (ATerm), ATerm e_89 (ATerm))
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  u_17 = t;
  t_17 :
  if(match_cons(u_17, sym_Prim_2))
    {
      v_17 = ATgetArgument(u_17, 0);
      w_17 = ATgetArgument(u_17, 1);
      {
        ATerm a_18 = NULL,c_18 = NULL;
        ATerm b_18 = NULL;
        t = SSLgetAnnotations(not_null(u_17));
        {
          b_18 = t;
          if(((a_18 != NULL) && (a_18 != b_18)))
            _fail(b_18);
          else
            a_18 = b_18;
        }
        {
          t = not_null(v_17);
          {
            ATerm e_18 = NULL;
            t = d_89(t);
            {
              c_18 = t;
              {
                t = not_null(w_17);
                {
                  ATerm g_18 = NULL;
                  t = e_89(t);
                  {
                    e_18 = t;
                    {
                      ATerm h_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(c_18), not_null(e_18)), not_null(a_18));
                      {
                        h_18 = t;
                        if(((g_18 != NULL) && (g_18 != h_18)))
                          _fail(h_18);
                        else
                          g_18 = h_18;
                      }
                      t = not_null(g_18);
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
ATerm Explode_2 (ATerm t, ATerm f_85 (ATerm), ATerm g_85 (ATerm))
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym_Explode_2))
    {
      u_18 = ATgetArgument(t_18, 0);
      v_18 = ATgetArgument(t_18, 1);
      {
        ATerm z_18 = NULL,b_19 = NULL;
        ATerm a_19 = NULL;
        t = SSLgetAnnotations(not_null(t_18));
        {
          a_19 = t;
          if(((z_18 != NULL) && (z_18 != a_19)))
            _fail(a_19);
          else
            z_18 = a_19;
        }
        {
          t = not_null(u_18);
          {
            ATerm d_19 = NULL;
            t = f_85(t);
            {
              b_19 = t;
              {
                t = not_null(v_18);
                {
                  ATerm f_19 = NULL;
                  t = g_85(t);
                  {
                    d_19 = t;
                    {
                      ATerm g_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(b_19), not_null(d_19)), not_null(z_18));
                      {
                        g_19 = t;
                        if(((f_19 != NULL) && (f_19 != g_19)))
                          _fail(g_19);
                        else
                          f_19 = g_19;
                      }
                      t = not_null(f_19);
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
ATerm Op_2 (ATerm t, ATerm d_87 (ATerm), ATerm e_87 (ATerm))
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  r_19 :
  if(match_cons(s_19, sym_Op_2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      {
        ATerm y_19 = NULL,a_20 = NULL;
        ATerm z_19 = NULL;
        t = SSLgetAnnotations(not_null(s_19));
        {
          z_19 = t;
          if(((y_19 != NULL) && (y_19 != z_19)))
            _fail(z_19);
          else
            y_19 = z_19;
        }
        {
          t = not_null(t_19);
          {
            ATerm c_20 = NULL;
            t = d_87(t);
            {
              a_20 = t;
              {
                t = not_null(u_19);
                {
                  ATerm e_20 = NULL;
                  t = e_87(t);
                  {
                    c_20 = t;
                    {
                      ATerm f_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(a_20), not_null(c_20)), not_null(y_19));
                      {
                        f_20 = t;
                        if(((e_20 != NULL) && (e_20 != f_20)))
                          _fail(f_20);
                        else
                          e_20 = f_20;
                      }
                      t = not_null(e_20);
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
ATerm pat_td_1 (ATerm t, ATerm w_91 (ATerm))
{
  ATerm x_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_91(t);
      LocalPopChoice(z_10);
    }
  else
    {
      t = x_10;
      {
        ATerm d_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = pat_td_1(t, w_91);
                return(t);
              }
              t = fetch_1(t, e_1);
              return(t);
            }
            t = Op_2(t, _id, d_1);
            LocalPopChoice(n_11);
          }
        else
          {
            t = d_11;
            {
              ATerm v_11 = t;
              int f_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = pat_td_1(t, w_91);
                    return(t);
                  }
                  t = Explode_2(t, _id, f_1);
                  LocalPopChoice(f_12);
                }
              else
                {
                  t = v_11;
                  {
                    ATerm g_12 = t;
                    int h_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_1 (ATerm t)
                        {
                          t = pat_td_1(t, w_91);
                          return(t);
                        }
                        t = Explode_2(t, g_1, _id);
                        LocalPopChoice(h_12);
                      }
                    else
                      {
                        t = g_12;
                        {
                          ATerm i_12 = t;
                          int j_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_1 (ATerm t)
                              {
                                ATerm i_1 (ATerm t)
                                {
                                  t = pat_td_1(t, w_91);
                                  return(t);
                                }
                                t = fetch_1(t, i_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, h_1);
                              LocalPopChoice(j_12);
                            }
                          else
                            {
                              t = i_12;
                              {
                                ATerm j_1 (ATerm t)
                                {
                                  t = pat_td_1(t, w_91);
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
  ATerm w_20 = NULL,x_20 = NULL;
  w_20 = t;
  v_20 :
  if(match_cons(w_20, sym_Build_1))
    {
      x_20 = ATgetArgument(w_20, 0);
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_20 = NULL,a_21 = NULL;
            ATerm e_21 = NULL;
            t = not_null(x_20);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
                b_21 = t;
                o_20 :
                if(match_cons(b_21, sym_RootApp_1))
                  {
                    c_21 = ATgetArgument(b_21, 0);
                    p_20 :
                    if(match_cons(c_21, sym_Build_1))
                      {
                        d_21 = ATgetArgument(c_21, 0);
                        {
                          if(((z_20 != NULL) && (z_20 != d_21)))
                            _fail(d_21);
                          else
                            z_20 = d_21;
                          t = not_null(z_20);
                        }
                      }
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
                e_21 = t;
                if(((a_21 != NULL) && (a_21 != e_21)))
                  _fail(e_21);
                else
                  a_21 = e_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_21));
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            {
              ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
              ATerm n_21 = NULL;
              t = not_null(x_20);
              {
                ATerm l_1 (ATerm t)
                {
                  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
                  j_21 = t;
                  s_20 :
                  if(match_cons(j_21, sym_App_2))
                    {
                      k_21 = ATgetArgument(j_21, 0);
                      m_21 = ATgetArgument(j_21, 1);
                      t_20 :
                      if(match_cons(k_21, sym_Build_1))
                        {
                          l_21 = ATgetArgument(k_21, 0);
                          {
                            if(((h_21 != NULL) && (h_21 != l_21)))
                              _fail(l_21);
                            else
                              h_21 = l_21;
                            {
                              if(((g_21 != NULL) && (g_21 != m_21)))
                                _fail(m_21);
                              else
                                g_21 = m_21;
                              t = not_null(h_21);
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
                t = pat_td_1(t, l_1);
                {
                  n_21 = t;
                  if(((i_21 != NULL) && (i_21 != n_21)))
                    _fail(n_21);
                  else
                    i_21 = n_21;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_21));
            }
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
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  o_22 = t;
  g_22 :
  if(match_cons(o_22, sym_InfixApp_3))
    {
      p_22 = ATgetArgument(o_22, 0);
      l_22 = ATgetArgument(o_22, 1);
      k_22 = ATgetArgument(o_22, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(l_22), (ATerm) ATmakeAppl(sym_Op_2, term_g_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_22)), not_null(p_22))));
    }
  else
    {
      if(match_cons(o_22, sym_BAM_3))
        {
          p_22 = ATgetArgument(o_22, 0);
          l_22 = ATgetArgument(o_22, 1);
          k_22 = ATgetArgument(o_22, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(k_22))), not_null(p_22)), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_22))));
        }
      else
        {
          if(match_cons(o_22, sym_AM_2))
            {
              p_22 = ATgetArgument(o_22, 0);
              l_22 = ATgetArgument(o_22, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_22), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_22)));
            }
          else
            {
              if(match_cons(o_22, sym_MA_2))
                {
                  p_22 = ATgetArgument(o_22, 0);
                  l_22 = ATgetArgument(o_22, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_22)), not_null(l_22));
                }
              else
                {
                  if(match_cons(o_22, sym_BA_2))
                    {
                      p_22 = ATgetArgument(o_22, 0);
                      l_22 = ATgetArgument(o_22, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_22)), not_null(p_22));
                    }
                  else
                    {
                      if(match_cons(o_22, sym_Lets_2))
                        {
                          p_22 = ATgetArgument(o_22, 0);
                          l_22 = ATgetArgument(o_22, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_22), not_null(l_22));
                        }
                      else
                        {
                          if(match_cons(o_22, sym_LChoices_1))
                            {
                              p_22 = ATgetArgument(o_22, 0);
                              h_22 :
                              if(((ATgetType(p_22) == AT_LIST) && ((ATermList) p_22 != ATempty)))
                                {
                                  m_22 = ATgetFirst((ATermList) p_22);
                                  n_22 = (ATerm) ATgetNext((ATermList) p_22);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_22), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(n_22)));
                                }
                              else
                                {
                                  if(((ATermList) p_22 == ATempty))
                                    {
                                      t = term_q_12;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(o_22, sym_Choices_1))
                                {
                                  p_22 = ATgetArgument(o_22, 0);
                                  i_22 :
                                  if(((ATgetType(p_22) == AT_LIST) && ((ATermList) p_22 != ATempty)))
                                    {
                                      m_22 = ATgetFirst((ATermList) p_22);
                                      n_22 = (ATerm) ATgetNext((ATermList) p_22);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_22), (ATerm) ATmakeAppl(sym_Choices_1, not_null(n_22)));
                                    }
                                  else
                                    {
                                      if(((ATermList) p_22 == ATempty))
                                        {
                                          t = term_q_12;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(o_22, sym_Seqs_1))
                                    {
                                      p_22 = ATgetArgument(o_22, 0);
                                      j_22 :
                                      if(((ATgetType(p_22) == AT_LIST) && ((ATermList) p_22 != ATempty)))
                                        {
                                          m_22 = ATgetFirst((ATermList) p_22);
                                          n_22 = (ATerm) ATgetNext((ATermList) p_22);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_22), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(n_22)));
                                        }
                                      else
                                        {
                                          if(((ATermList) p_22 == ATempty))
                                            {
                                              t = term_r_12;
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
ATerm UnZip2_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  a_24 = t;
  x_23 :
  if(match_cons(a_24, sym__2))
    {
      b_24 = ATgetArgument(a_24, 0);
      e_24 = ATgetArgument(a_24, 1);
      y_23 :
      if(match_cons(b_24, sym__2))
        {
          c_24 = ATgetArgument(b_24, 0);
          d_24 = ATgetArgument(b_24, 1);
          z_23 :
          if(match_cons(e_24, sym__2))
            {
              f_24 = ATgetArgument(e_24, 0);
              g_24 = ATgetArgument(e_24, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_24)), not_null(c_24)), (ATerm) ATinsert(CheckATermList(not_null(g_24)), not_null(d_24)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
  o_24 = t;
  n_24 :
  if(((ATgetType(o_24) == AT_LIST) && ((ATermList) o_24 != ATempty)))
    {
      p_24 = ATgetFirst((ATermList) o_24);
      q_24 = (ATerm) ATgetNext((ATermList) o_24);
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_24), not_null(q_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  v_24 :
  if(((ATermList) w_24 == ATempty))
    {
      t = term_s_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm m_111 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, m_111);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL;
  ATerm i_25 (ATerm t)
  {
    ATerm f_25 = NULL;
    ATerm g_25 = NULL;
    t = not_null(c_25);
    {
      ATerm z_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_12;
        }
      {
        t = new_0(t);
        {
          g_25 = t;
          if(((f_25 != NULL) && (f_25 != g_25)))
            _fail(g_25);
          else
            f_25 = g_25;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(f_25)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_25)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25))));
    return(t);
  }
  ATerm j_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_12, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_25))));
    return(t);
  }
  c_25 = t;
  b_25 :
  if(match_cons(c_25, sym_Var_1))
    {
      d_25 = ATgetArgument(c_25, 0);
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_25(t);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            t = j_25(t);
          }
      }
    }
  else
    {
      t = i_25(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym_Prim_2))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      {
        ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
        ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
        t = not_null(s_25);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm c_13 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_13;
              }
            return(t);
          }
          t = fetch_1(t, m_1);
          {
            t = not_null(s_25);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm n_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, n_1);
                {
                  y_25 = t;
                  n_25 :
                  if(match_cons(y_25, sym__2))
                    {
                      z_25 = ATgetArgument(y_25, 0);
                      a_26 = ATgetArgument(y_25, 1);
                      o_25 :
                      if(match_cons(a_26, sym__2))
                        {
                          b_26 = ATgetArgument(a_26, 0);
                          c_26 = ATgetArgument(a_26, 1);
                          {
                            if(((v_25 != NULL) && (v_25 != z_25)))
                              _fail(z_25);
                            else
                              v_25 = z_25;
                            {
                              if(((w_25 != NULL) && (w_25 != b_26)))
                                _fail(b_26);
                              else
                                w_25 = b_26;
                              if(((x_25 != NULL) && (x_25 != c_26)))
                                _fail(c_26);
                              else
                                x_25 = c_26;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(w_25)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(r_25), not_null(x_25))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm j_105 (ATerm), ATerm k_105 (ATerm))
{
  ATerm f_26 (ATerm t)
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_105(t);
        t = f_26(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = k_105(t);
      }
    return(t);
  }
  t = f_26(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm m_105 (ATerm))
{
  t = repeat_2(t, m_105, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym_Wld_0))
    {
      ATerm m_26 = NULL,o_26 = NULL;
      ATerm f_13;
      f_13 = t;
      {
        ATerm n_26 = NULL;
        t = SSLgetAnnotations(not_null(k_26));
        {
          n_26 = t;
          if(((m_26 != NULL) && (m_26 != n_26)))
            _fail(n_26);
          else
            m_26 = n_26;
        }
      }
      t = f_13;
      {
        ATerm p_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(m_26));
        {
          p_26 = t;
          if(((o_26 != NULL) && (o_26 != p_26)))
            _fail(p_26);
          else
            o_26 = p_26;
        }
        t = not_null(o_26);
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
  ATerm i_13 = t;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm m_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(t_13);
          }
        else
          {
            t = m_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, o_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_13;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm z_84 (ATerm), ATerm a_85 (ATerm))
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym_App_2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      {
        ATerm f_27 = NULL,h_27 = NULL;
        ATerm g_27 = NULL;
        t = SSLgetAnnotations(not_null(z_26));
        {
          g_27 = t;
          if(((f_27 != NULL) && (f_27 != g_27)))
            _fail(g_27);
          else
            f_27 = g_27;
        }
        {
          t = not_null(a_27);
          {
            ATerm j_27 = NULL;
            t = z_84(t);
            {
              h_27 = t;
              {
                t = not_null(b_27);
                {
                  ATerm l_27 = NULL;
                  t = a_85(t);
                  {
                    j_27 = t;
                    {
                      ATerm m_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(h_27), not_null(j_27)), not_null(f_27));
                      {
                        m_27 = t;
                        if(((l_27 != NULL) && (l_27 != m_27)))
                          _fail(m_27);
                        else
                          l_27 = m_27;
                      }
                      t = not_null(l_27);
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
ATerm Con_3 (ATerm t, ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm))
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
  z_27 = t;
  y_27 :
  if(match_cons(z_27, sym_Con_3))
    {
      a_28 = ATgetArgument(z_27, 0);
      b_28 = ATgetArgument(z_27, 1);
      c_28 = ATgetArgument(z_27, 2);
      {
        ATerm h_28 = NULL,j_28 = NULL;
        ATerm i_28 = NULL;
        t = SSLgetAnnotations(not_null(z_27));
        {
          i_28 = t;
          if(((h_28 != NULL) && (h_28 != i_28)))
            _fail(i_28);
          else
            h_28 = i_28;
        }
        {
          t = not_null(a_28);
          {
            ATerm l_28 = NULL;
            t = w_84(t);
            {
              j_28 = t;
              {
                t = not_null(b_28);
                {
                  ATerm n_28 = NULL;
                  t = x_84(t);
                  {
                    l_28 = t;
                    {
                      t = not_null(c_28);
                      {
                        ATerm p_28 = NULL;
                        t = y_84(t);
                        {
                          n_28 = t;
                          {
                            ATerm q_28 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(j_28), not_null(l_28), not_null(n_28)), not_null(h_28));
                            {
                              q_28 = t;
                              if(((p_28 != NULL) && (p_28 != q_28)))
                                _fail(q_28);
                              else
                                p_28 = q_28;
                            }
                            t = not_null(p_28);
                          }
                        }
                      }
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
  ATerm u_13 = t;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, p_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  b_29 = t;
  z_28 :
  if(match_cons(b_29, sym_SRule_1))
    {
      c_29 = ATgetArgument(b_29, 0);
      a_29 :
      if(match_cons(c_29, sym_StratRule_3))
        {
          d_29 = ATgetArgument(c_29, 0);
          e_29 = ATgetArgument(c_29, 1);
          f_29 = ATgetArgument(c_29, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_29)), (ATerm) ATmakeAppl(sym_Where_1, not_null(f_29))), not_null(d_29)));
        }
      else
        {
          if(match_cons(c_29, sym_Rule_3))
            {
              d_29 = ATgetArgument(c_29, 0);
              e_29 = ATgetArgument(c_29, 1);
              f_29 = ATgetArgument(c_29, 2);
              {
                t = not_null(d_29);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(e_29);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(e_29))), (ATerm) ATmakeAppl(sym_Where_1, not_null(f_29))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_29))));
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
ATerm oncetd_1 (ATerm t, ATerm j_117 (ATerm))
{
  ATerm o_29 (ATerm t)
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_117(t);
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = _one(t, o_29);
      }
    return(t);
  }
  t = o_29(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  f_30 = t;
  d_30 :
  if(match_cons(f_30, sym_SRule_1))
    {
      g_30 = ATgetArgument(f_30, 0);
      e_30 :
      if(match_cons(g_30, sym_Rule_3))
        {
          h_30 = ATgetArgument(g_30, 0);
          i_30 = ATgetArgument(g_30, 1);
          j_30 = ATgetArgument(g_30, 2);
          {
            ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
            ATerm r_31 = NULL;
            ATerm x_31 = NULL;
            t = new_0(t);
            {
              r_31 = t;
              {
                if(((o_31 != NULL) && (o_31 != r_31)))
                  _fail(r_31);
                else
                  o_31 = r_31;
                {
                  t = not_null(h_30);
                  {
                    ATerm f_32 = NULL;
                    ATerm q_1 (ATerm t)
                    {
                      ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
                      s_31 = t;
                      s_29 :
                      if(match_cons(s_31, sym_Con_3))
                        {
                          t_31 = ATgetArgument(s_31, 0);
                          v_31 = ATgetArgument(s_31, 1);
                          w_31 = ATgetArgument(s_31, 2);
                          t_29 :
                          if(match_cons(t_31, sym_Var_1))
                            {
                              u_31 = ATgetArgument(t_31, 0);
                              {
                                if(((n_31 != NULL) && (n_31 != u_31)))
                                  _fail(u_31);
                                else
                                  n_31 = u_31;
                                {
                                  if(((l_31 != NULL) && (l_31 != v_31)))
                                    _fail(v_31);
                                  else
                                    l_31 = v_31;
                                  {
                                    if(((j_31 != NULL) && (j_31 != w_31)))
                                      _fail(w_31);
                                    else
                                      j_31 = w_31;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_31));
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
                    t = oncetd_1(t, q_1);
                    {
                      x_31 = t;
                      {
                        if(((p_31 != NULL) && (p_31 != x_31)))
                          _fail(x_31);
                        else
                          p_31 = x_31;
                        {
                          t = not_null(i_30);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
                              y_31 = t;
                              w_29 :
                              if(match_cons(y_31, sym_Con_3))
                                {
                                  z_31 = ATgetArgument(y_31, 0);
                                  b_32 = ATgetArgument(y_31, 1);
                                  c_32 = ATgetArgument(y_31, 2);
                                  x_29 :
                                  if(match_cons(z_31, sym_Var_1))
                                    {
                                      a_32 = ATgetArgument(z_31, 0);
                                      y_29 :
                                      if(match_cons(c_32, sym_Call_2))
                                        {
                                          d_32 = ATgetArgument(c_32, 0);
                                          e_32 = ATgetArgument(c_32, 1);
                                          z_29 :
                                          if(((ATermList) e_32 == ATempty))
                                            {
                                              {
                                                if(((n_31 != NULL) && (n_31 != a_32)))
                                                  _fail(a_32);
                                                else
                                                  n_31 = a_32;
                                                {
                                                  if(((m_31 != NULL) && (m_31 != b_32)))
                                                    _fail(b_32);
                                                  else
                                                    m_31 = b_32;
                                                  {
                                                    if(((k_31 != NULL) && (k_31 != d_32)))
                                                      _fail(d_32);
                                                    else
                                                      k_31 = d_32;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_31));
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
                            t = oncetd_1(t, r_1);
                            {
                              f_32 = t;
                              if(((q_31 != NULL) && (q_31 != f_32)))
                                _fail(f_32);
                              else
                                q_31 = f_32;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_31)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_31), not_null(q_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_30), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(k_31), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_31), not_null(m_31), term_r_12)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_31)))))));
          }
        }
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
  ATerm s_1 (ATerm t)
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, s_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm t_115 (ATerm))
{
  t = t_115(t);
  {
    ATerm t_1 (ATerm t)
    {
      t = topdown_1(t, t_115);
      return(t);
    }
    t = _all(t, t_1);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm v_1 (ATerm t)
      {
        ATerm e_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(g_14);
          }
        else
          {
            t = e_14;
            {
              ATerm h_14 = t;
              int i_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(i_14);
                }
              else
                {
                  t = h_14;
                  {
                    ATerm k_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(o_14);
                      }
                    else
                      {
                        t = k_14;
                        {
                          ATerm y_14 = t;
                          int g_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(g_15);
                            }
                          else
                            {
                              t = y_14;
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
      t = repeat_1(t, v_1);
    }
    return(t);
  }
  t = topdown_1(t, u_1);
  return(t);
}
ATerm BottomupToVarIsId_Cond_0 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  o_38 = t;
  w_36 :
  if(match_cons(o_38, sym_Seq_2))
    {
      p_38 = ATgetArgument(o_38, 0);
      t_38 = ATgetArgument(o_38, 1);
      x_36 :
      if(match_cons(p_38, sym_Call_2))
        {
          q_38 = ATgetArgument(p_38, 0);
          s_38 = ATgetArgument(p_38, 1);
          y_36 :
          if(match_cons(q_38, sym_SVar_1))
            {
              r_38 = ATgetArgument(q_38, 0);
              z_36 :
              if(match_string(r_38, "mark"))
                {
                  a_37 :
                  if(((ATermList) s_38 == ATempty))
                    {
                      b_37 :
                      if(match_cons(t_38, sym_Seq_2))
                        {
                          u_38 = ATgetArgument(t_38, 0);
                          w_38 = ATgetArgument(t_38, 1);
                          c_37 :
                          if(match_cons(u_38, sym_Match_1))
                            {
                              v_38 = ATgetArgument(u_38, 0);
                              l_38 :
                              if(match_cons(w_38, sym_Seq_2))
                                {
                                  x_38 = ATgetArgument(w_38, 0);
                                  z_38 = ATgetArgument(w_38, 1);
                                  m_38 :
                                  if(match_cons(x_38, sym_Where_1))
                                    {
                                      y_38 = ATgetArgument(x_38, 0);
                                      n_38 :
                                      if(match_cons(z_38, sym_Build_1))
                                        {
                                          a_39 = ATgetArgument(z_38, 0);
                                          {
                                            ATerm q_15 = t;
                                            int r_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm f_39 = NULL,q_39 = NULL,r_39 = NULL;
                                                ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
                                                t = term_s_15;
                                                {
                                                  ATerm w_1 (ATerm t)
                                                  {
                                                    t = term_t_15;
                                                    return(t);
                                                  }
                                                  t = rewrite_1(t, w_1);
                                                  {
                                                    s_39 = t;
                                                    u_32 :
                                                    if(match_cons(s_39, sym_Defined_2))
                                                      {
                                                        t_39 = ATgetArgument(s_39, 0);
                                                        u_39 = ATgetArgument(s_39, 1);
                                                        v_32 :
                                                        if(match_string(t_39, "a_1"))
                                                          {
                                                            ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
                                                            if(((f_39 != NULL) && (f_39 != u_39)))
                                                              _fail(u_39);
                                                            else
                                                              f_39 = u_39;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(f_39), not_null(v_38), (ATerm) ATmakeAppl(sym__2, not_null(y_38), not_null(a_39)));
                                                              {
                                                                t = replace_application_0(t);
                                                                {
                                                                  v_39 = t;
                                                                  s_32 :
                                                                  if(match_cons(v_39, sym__2))
                                                                    {
                                                                      w_39 = ATgetArgument(v_39, 0);
                                                                      x_39 = ATgetArgument(v_39, 1);
                                                                      {
                                                                        if(((q_39 != NULL) && (q_39 != w_39)))
                                                                          _fail(w_39);
                                                                        else
                                                                          q_39 = w_39;
                                                                        if(((r_39 != NULL) && (r_39 != x_39)))
                                                                          _fail(x_39);
                                                                        else
                                                                          r_39 = x_39;
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
                                                        else
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
                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(q_39)), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_39))));
                                                LocalPopChoice(r_15);
                                              }
                                            else
                                              {
                                                t = q_15;
                                                {
                                                  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
                                                  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
                                                  t = term_s_15;
                                                  {
                                                    ATerm x_1 (ATerm t)
                                                    {
                                                      t = term_t_15;
                                                      return(t);
                                                    }
                                                    t = rewrite_1(t, x_1);
                                                    {
                                                      g_40 = t;
                                                      u_36 :
                                                      if(match_cons(g_40, sym_Defined_2))
                                                        {
                                                          h_40 = ATgetArgument(g_40, 0);
                                                          i_40 = ATgetArgument(g_40, 1);
                                                          v_36 :
                                                          if(match_string(h_40, "w_0"))
                                                            {
                                                              ATerm j_40 = NULL;
                                                              if(((b_40 != NULL) && (b_40 != i_40)))
                                                                _fail(i_40);
                                                              else
                                                                b_40 = i_40;
                                                              {
                                                                ATerm k_40 = NULL;
                                                                t = not_null(b_40);
                                                                {
                                                                  j_40 = t;
                                                                  {
                                                                    if(((d_40 != NULL) && (d_40 != j_40)))
                                                                      _fail(j_40);
                                                                    else
                                                                      d_40 = j_40;
                                                                    {
                                                                      t = not_null(v_38);
                                                                      {
                                                                        t = tvars_0(t);
                                                                        {
                                                                          k_40 = t;
                                                                          {
                                                                            if(((c_40 != NULL) && (c_40 != k_40)))
                                                                              _fail(k_40);
                                                                            else
                                                                              c_40 = k_40;
                                                                            {
                                                                              ATerm y_1 (ATerm t)
                                                                              {
                                                                                t = term_u_15;
                                                                                return(t);
                                                                              }
                                                                              ATerm z_1 (ATerm t)
                                                                              {
                                                                                ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
                                                                                ATerm a_2 (ATerm t)
                                                                                {
                                                                                  ATerm n_40 = NULL,p_40 = NULL;
                                                                                  ATerm o_40 = NULL;
                                                                                  o_40 = t;
                                                                                  if(((n_40 != NULL) && (n_40 != o_40)))
                                                                                    _fail(o_40);
                                                                                  else
                                                                                    n_40 = o_40;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_40));
                                                                                    {
                                                                                      p_40 = t;
                                                                                      {
                                                                                        ATerm v_15;
                                                                                        v_15 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(p_40), not_null(d_40)), (ATerm) ATmakeAppl(sym_Defined_2, term_w_15, not_null(p_40)));
                                                                                          {
                                                                                            ATerm b_2 (ATerm t)
                                                                                            {
                                                                                              t = term_u_15;
                                                                                              return(t);
                                                                                            }
                                                                                            t = assert_1(t, b_2);
                                                                                          }
                                                                                        }
                                                                                        t = v_15;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = map_1(t, a_2);
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_38), not_null(a_39));
                                                                                  {
                                                                                    t = alltd_1(t, Replace_0);
                                                                                    {
                                                                                      r_40 = t;
                                                                                      t_36 :
                                                                                      if(match_cons(r_40, sym__2))
                                                                                        {
                                                                                          s_40 = ATgetArgument(r_40, 0);
                                                                                          t_40 = ATgetArgument(r_40, 1);
                                                                                          {
                                                                                            if(((e_40 != NULL) && (e_40 != s_40)))
                                                                                              _fail(s_40);
                                                                                            else
                                                                                              e_40 = s_40;
                                                                                            if(((f_40 != NULL) && (f_40 != t_40)))
                                                                                              _fail(t_40);
                                                                                            else
                                                                                              f_40 = t_40;
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
                                                                              t = scope_2(t, y_1, z_1);
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
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(e_40)), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_39))));
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
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm Replace_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,e_43 = NULL;
  ATerm w_43 (ATerm t)
  {
    ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(e_43), not_null(b_43));
    {
      ATerm c_2 (ATerm t)
      {
        t = term_u_15;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        m_43 = t;
        n_42 :
        if(match_cons(m_43, sym_Defined_2))
          {
            n_43 = ATgetArgument(m_43, 0);
            o_43 = ATgetArgument(m_43, 1);
            o_42 :
            if(match_string(n_43, "y_0"))
              {
                if(((e_43 != NULL) && (e_43 != o_43)))
                  _fail(o_43);
                else
                  e_43 = o_43;
              }
            else
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
    t = not_null(e_43);
    return(t);
  }
  ATerm x_43 (ATerm t)
  {
    ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(e_43), not_null(b_43));
    {
      ATerm d_2 (ATerm t)
      {
        t = term_u_15;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        s_43 = t;
        q_42 :
        if(match_cons(s_43, sym_Defined_2))
          {
            t_43 = ATgetArgument(s_43, 0);
            u_43 = ATgetArgument(s_43, 1);
            r_42 :
            if(match_string(t_43, "x_0"))
              {
                if(((e_43 != NULL) && (e_43 != u_43)))
                  _fail(u_43);
                else
                  e_43 = u_43;
              }
            else
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
    t = not_null(e_43);
    return(t);
  }
  a_43 = t;
  s_42 :
  if(match_cons(a_43, sym_App_2))
    {
      b_43 = ATgetArgument(a_43, 0);
      e_43 = ATgetArgument(a_43, 1);
      y_42 :
      if(match_cons(e_43, sym_Var_1))
        {
          z_42 = ATgetArgument(e_43, 0);
          {
            ATerm x_15 = t;
            int y_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL;
                t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(z_42), not_null(b_43));
                {
                  ATerm e_2 (ATerm t)
                  {
                    t = term_u_15;
                    return(t);
                  }
                  t = rewrite_1(t, e_2);
                  {
                    h_43 = t;
                    k_42 :
                    if(match_cons(h_43, sym_Defined_2))
                      {
                        i_43 = ATgetArgument(h_43, 0);
                        j_43 = ATgetArgument(h_43, 1);
                        l_42 :
                        if(match_string(i_43, "b_1"))
                          {
                            if(((z_42 != NULL) && (z_42 != j_43)))
                              _fail(j_43);
                            else
                              z_42 = j_43;
                          }
                        else
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_42));
                LocalPopChoice(y_15);
              }
            else
              {
                t = x_15;
                {
                  ATerm z_15 = t;
                  int a_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_43(t);
                      LocalPopChoice(a_16);
                    }
                  else
                    {
                      t = z_15;
                      t = x_43(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm b_16 = t;
          int c_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_43(t);
              LocalPopChoice(c_16);
            }
          else
            {
              t = b_16;
              t = x_43(t);
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
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  c_44 :
  if(((ATgetType(d_44) == AT_LIST) && ((ATermList) d_44 != ATempty)))
    {
      e_44 = ATgetFirst((ATermList) d_44);
      f_44 = (ATerm) ATgetNext((ATermList) d_44);
      t = not_null(f_44);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
  m_44 = t;
  l_44 :
  if(match_cons(m_44, sym__2))
    {
      n_44 = ATgetArgument(m_44, 0);
      o_44 = ATgetArgument(m_44, 1);
      {
        ATerm d_16;
        d_16 = t;
        {
          ATerm r_44 = NULL;
          ATerm s_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_44), not_null(o_44));
          {
            ATerm k_16 = t;
            int l_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(l_16);
              }
            else
              {
                t = k_16;
                t = (ATerm) ATempty;
              }
            {
              s_44 = t;
              if(((r_44 != NULL) && (r_44 != s_44)))
                _fail(s_44);
              else
                r_44 = s_44;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_44), not_null(o_44), not_null(r_44));
            t = table_put_0(t);
          }
        }
        t = d_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm q_100 (ATerm))
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  ATerm m_16;
  m_16 = t;
  {
    ATerm c_45 = NULL;
    ATerm d_45 = NULL,l_45 = NULL,m_45 = NULL;
    t = q_100(t);
    {
      c_45 = t;
      {
        if(((b_45 != NULL) && (b_45 != c_45)))
          _fail(c_45);
        else
          b_45 = c_45;
        {
          ATerm n_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_45), term_p_16);
              t = table_get_0(t);
              LocalPopChoice(o_16);
            }
          else
            {
              t = n_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            d_45 = t;
            y_44 :
            if(((ATgetType(d_45) == AT_LIST) && ((ATermList) d_45 != ATempty)))
              {
                l_45 = ATgetFirst((ATermList) d_45);
                m_45 = (ATerm) ATgetNext((ATermList) d_45);
                {
                  if(((a_45 != NULL) && (a_45 != l_45)))
                    _fail(l_45);
                  else
                    a_45 = l_45;
                  {
                    if(((z_44 != NULL) && (z_44 != m_45)))
                      _fail(m_45);
                    else
                      z_44 = m_45;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_45), term_p_16, not_null(z_44));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_45);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm n_45 = NULL;
                              n_45 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_45), not_null(n_45));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, f_2);
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
  t = m_16;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm r_115 (ATerm), ATerm s_115 (ATerm))
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_115(t);
      t = s_115(t);
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        t = s_115(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm p_100 (ATerm))
{
  ATerm w_45 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    ATerm x_45 = NULL;
    ATerm y_45 = NULL;
    t = p_100(t);
    {
      x_45 = t;
      {
        if(((w_45 != NULL) && (w_45 != x_45)))
          _fail(x_45);
        else
          w_45 = x_45;
        {
          ATerm z_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_45), term_p_16);
          {
            ATerm t_16 = t;
            int y_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_16);
              }
            else
              {
                t = t_16;
                t = (ATerm) ATempty;
              }
            {
              z_45 = t;
              if(((y_45 != NULL) && (y_45 != z_45)))
                _fail(z_45);
              else
                y_45 = z_45;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_45), term_p_16, (ATerm) ATinsert(CheckATermList(not_null(y_45)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = s_16;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm r_100 (ATerm), ATerm s_100 (ATerm))
{
  t = begin_scope_1(t, r_100);
  {
    ATerm g_2 (ATerm t)
    {
      t = end_scope_1(t, r_100);
      return(t);
    }
    t = restore_always_2(t, s_100, g_2);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
  g_46 = t;
  f_46 :
  if(match_cons(g_46, sym__3))
    {
      h_46 = ATgetArgument(g_46, 0);
      i_46 = ATgetArgument(g_46, 1);
      j_46 = ATgetArgument(g_46, 2);
      {
        ATerm p_46 = NULL;
        ATerm h_2 (ATerm t)
        {
          t = term_u_15;
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          ATerm s_46 = NULL;
          t = not_null(i_46);
          {
            t = tvars_0(t);
            {
              ATerm j_2 (ATerm t)
              {
                ATerm q_46 = NULL;
                q_46 = t;
                {
                  ATerm z_16;
                  z_16 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(q_46), not_null(h_46)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_17, not_null(q_46)));
                    {
                      ATerm k_2 (ATerm t)
                      {
                        t = term_u_15;
                        return(t);
                      }
                      t = assert_1(t, k_2);
                    }
                  }
                  t = z_16;
                }
                return(t);
              }
              t = map_1(t, j_2);
              {
                t = not_null(j_46);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    s_46 = t;
                    if(((p_46 != NULL) && (p_46 != s_46)))
                      _fail(s_46);
                    else
                      p_46 = s_46;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, h_2, i_2);
        t = not_null(p_46);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  f_48 = t;
  x_47 :
  if(match_cons(f_48, sym_Seq_2))
    {
      g_48 = ATgetArgument(f_48, 0);
      k_48 = ATgetArgument(f_48, 1);
      y_47 :
      if(match_cons(g_48, sym_Call_2))
        {
          h_48 = ATgetArgument(g_48, 0);
          j_48 = ATgetArgument(g_48, 1);
          z_47 :
          if(match_cons(h_48, sym_SVar_1))
            {
              i_48 = ATgetArgument(h_48, 0);
              a_48 :
              if(match_string(i_48, "mark"))
                {
                  b_48 :
                  if(((ATermList) j_48 == ATempty))
                    {
                      c_48 :
                      if(match_cons(k_48, sym_Seq_2))
                        {
                          l_48 = ATgetArgument(k_48, 0);
                          n_48 = ATgetArgument(k_48, 1);
                          d_48 :
                          if(match_cons(l_48, sym_Match_1))
                            {
                              m_48 = ATgetArgument(l_48, 0);
                              e_48 :
                              if(match_cons(n_48, sym_Build_1))
                                {
                                  o_48 = ATgetArgument(n_48, 0);
                                  {
                                    ATerm e_17 = t;
                                    int g_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm r_48 = NULL,s_48 = NULL;
                                        ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
                                        t = term_s_15;
                                        {
                                          ATerm l_2 (ATerm t)
                                          {
                                            t = term_j_17;
                                            return(t);
                                          }
                                          t = rewrite_1(t, l_2);
                                          {
                                            t_48 = t;
                                            m_47 :
                                            if(match_cons(t_48, sym_Defined_2))
                                              {
                                                u_48 = ATgetArgument(t_48, 0);
                                                v_48 = ATgetArgument(t_48, 1);
                                                o_47 :
                                                if(match_string(u_48, "z_0"))
                                                  {
                                                    ATerm w_48 = NULL;
                                                    if(((r_48 != NULL) && (r_48 != v_48)))
                                                      _fail(v_48);
                                                    else
                                                      r_48 = v_48;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(r_48), not_null(m_48), not_null(o_48));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          w_48 = t;
                                                          if(((s_48 != NULL) && (s_48 != w_48)))
                                                            _fail(w_48);
                                                          else
                                                            s_48 = w_48;
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
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_48)), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_48)));
                                        LocalPopChoice(g_17);
                                      }
                                    else
                                      {
                                        t = e_17;
                                        {
                                          ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL;
                                          ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
                                          t = term_s_15;
                                          {
                                            ATerm m_2 (ATerm t)
                                            {
                                              t = term_j_17;
                                              return(t);
                                            }
                                            t = rewrite_1(t, m_2);
                                            {
                                              d_49 = t;
                                              v_47 :
                                              if(match_cons(d_49, sym_Defined_2))
                                                {
                                                  e_49 = ATgetArgument(d_49, 0);
                                                  f_49 = ATgetArgument(d_49, 1);
                                                  w_47 :
                                                  if(match_string(e_49, "v_0"))
                                                    {
                                                      ATerm g_49 = NULL;
                                                      if(((z_48 != NULL) && (z_48 != f_49)))
                                                        _fail(f_49);
                                                      else
                                                        z_48 = f_49;
                                                      {
                                                        ATerm h_49 = NULL;
                                                        t = not_null(z_48);
                                                        {
                                                          g_49 = t;
                                                          {
                                                            if(((b_49 != NULL) && (b_49 != g_49)))
                                                              _fail(g_49);
                                                            else
                                                              b_49 = g_49;
                                                            {
                                                              t = not_null(m_48);
                                                              {
                                                                t = tvars_0(t);
                                                                {
                                                                  h_49 = t;
                                                                  {
                                                                    if(((a_49 != NULL) && (a_49 != h_49)))
                                                                      _fail(h_49);
                                                                    else
                                                                      a_49 = h_49;
                                                                    {
                                                                      ATerm n_2 (ATerm t)
                                                                      {
                                                                        t = term_u_15;
                                                                        return(t);
                                                                      }
                                                                      ATerm o_2 (ATerm t)
                                                                      {
                                                                        ATerm m_49 = NULL;
                                                                        ATerm p_2 (ATerm t)
                                                                        {
                                                                          ATerm i_49 = NULL,k_49 = NULL;
                                                                          ATerm j_49 = NULL;
                                                                          j_49 = t;
                                                                          if(((i_49 != NULL) && (i_49 != j_49)))
                                                                            _fail(j_49);
                                                                          else
                                                                            i_49 = j_49;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_49));
                                                                            {
                                                                              k_49 = t;
                                                                              {
                                                                                ATerm k_17;
                                                                                k_17 = t;
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(k_49), not_null(b_49)), (ATerm) ATmakeAppl(sym_Defined_2, term_l_17, not_null(k_49)));
                                                                                  {
                                                                                    ATerm q_2 (ATerm t)
                                                                                    {
                                                                                      t = term_u_15;
                                                                                      return(t);
                                                                                    }
                                                                                    t = assert_1(t, q_2);
                                                                                  }
                                                                                }
                                                                                t = k_17;
                                                                              }
                                                                            }
                                                                          }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, p_2);
                                                                        {
                                                                          t = not_null(o_48);
                                                                          {
                                                                            t = alltd_1(t, Replace_0);
                                                                            {
                                                                              m_49 = t;
                                                                              if(((c_49 != NULL) && (c_49 != m_49)))
                                                                                _fail(m_49);
                                                                              else
                                                                                c_49 = m_49;
                                                                            }
                                                                          }
                                                                        }
                                                                        return(t);
                                                                      }
                                                                      t = scope_2(t, n_2, o_2);
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
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_48)), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_49)));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BottomupOverConstructor_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
  b_51 = t;
  h_50 :
  if(match_cons(b_51, sym_App_2))
    {
      c_51 = ATgetArgument(b_51, 0);
      i_51 = ATgetArgument(b_51, 1);
      i_50 :
      if(match_cons(c_51, sym_Call_2))
        {
          d_51 = ATgetArgument(c_51, 0);
          f_51 = ATgetArgument(c_51, 1);
          j_50 :
          if(match_cons(d_51, sym_SVar_1))
            {
              e_51 = ATgetArgument(d_51, 0);
              u_50 :
              if(match_string(e_51, "bottomup_1"))
                {
                  v_50 :
                  if(((ATgetType(f_51) == AT_LIST) && ((ATermList) f_51 != ATempty)))
                    {
                      g_51 = ATgetFirst((ATermList) f_51);
                      h_51 = (ATerm) ATgetNext((ATermList) f_51);
                      w_50 :
                      if(((ATermList) h_51 == ATempty))
                        {
                          y_50 :
                          if(match_cons(i_51, sym_Op_2))
                            {
                              j_51 = ATgetArgument(i_51, 0);
                              k_51 = ATgetArgument(i_51, 1);
                              {
                                ATerm o_51 = NULL;
                                ATerm r_51 = NULL;
                                t = not_null(k_51);
                                {
                                  ATerm r_2 (ATerm t)
                                  {
                                    ATerm p_51 = NULL;
                                    p_51 = t;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_17, (ATerm) ATinsert(ATempty, not_null(g_51))), not_null(p_51));
                                    return(t);
                                  }
                                  t = map_1(t, r_2);
                                  {
                                    r_51 = t;
                                    if(((o_51 != NULL) && (o_51 != r_51)))
                                      _fail(r_51);
                                    else
                                      o_51 = r_51;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_App_2, not_null(g_51), (ATerm) ATmakeAppl(sym_Op_2, not_null(j_51), not_null(o_51)));
                              }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm IntroduceApp_0 (ATerm t)
{
  ATerm y_51 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL;
  y_51 = t;
  w_51 :
  if(match_cons(y_51, sym_Seq_2))
    {
      b_52 = ATgetArgument(y_51, 0);
      d_52 = ATgetArgument(y_51, 1);
      x_51 :
      if(match_cons(b_52, sym_Build_1))
        {
          c_52 = ATgetArgument(b_52, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(d_52), not_null(c_52)));
        }
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
ATerm AssociateR_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
  q_52 = t;
  m_52 :
  if(match_cons(q_52, sym_LChoice_2))
    {
      r_52 = ATgetArgument(q_52, 0);
      u_52 = ATgetArgument(q_52, 1);
      n_52 :
      if(match_cons(r_52, sym_LChoice_2))
        {
          s_52 = ATgetArgument(r_52, 0);
          t_52 = ATgetArgument(r_52, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_52), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_52), not_null(u_52)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(q_52, sym_Seq_2))
        {
          r_52 = ATgetArgument(q_52, 0);
          u_52 = ATgetArgument(q_52, 1);
          o_52 :
          if(match_cons(r_52, sym_Seq_2))
            {
              s_52 = ATgetArgument(r_52, 0);
              t_52 = ATgetArgument(r_52, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_52), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_52), not_null(u_52)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(q_52, sym_Choice_2))
            {
              r_52 = ATgetArgument(q_52, 0);
              u_52 = ATgetArgument(q_52, 1);
              p_52 :
              if(match_cons(r_52, sym_Choice_2))
                {
                  s_52 = ATgetArgument(r_52, 0);
                  t_52 = ATgetArgument(r_52, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_52), (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_52), not_null(u_52)));
                }
              else
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
ATerm SeqOverScopeR_0 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,w_53 = NULL;
  n_53 = t;
  i_53 :
  if(match_cons(n_53, sym_Seq_2))
    {
      o_53 = ATgetArgument(n_53, 0);
      w_53 = ATgetArgument(n_53, 1);
      j_53 :
      if(match_cons(o_53, sym_Scope_2))
        {
          p_53 = ATgetArgument(o_53, 0);
          s_53 = ATgetArgument(o_53, 1);
          k_53 :
          if(((ATgetType(p_53) == AT_LIST) && ((ATermList) p_53 != ATempty)))
            {
              q_53 = ATgetFirst((ATermList) p_53);
              r_53 = (ATerm) ATgetNext((ATermList) p_53);
              l_53 :
              if(match_string(q_53, "x*"))
                {
                  m_53 :
                  if(((ATermList) r_53 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_o_17), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_53), not_null(w_53)));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm SeqOverLChoiceR_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
  g_54 = t;
  e_54 :
  if(match_cons(g_54, sym_Seq_2))
    {
      h_54 = ATgetArgument(g_54, 0);
      k_54 = ATgetArgument(g_54, 1);
      f_54 :
      if(match_cons(h_54, sym_LChoice_2))
        {
          i_54 = ATgetArgument(h_54, 0);
          j_54 = ATgetArgument(h_54, 1);
          {
            ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(k_54));
            {
              ATerm s_2 (ATerm t)
              {
                t = term_p_17;
                return(t);
              }
              t = rewrite_1(t, s_2);
              {
                o_54 = t;
                c_54 :
                if(match_cons(o_54, sym_Defined_2))
                  {
                    p_54 = ATgetArgument(o_54, 0);
                    q_54 = ATgetArgument(o_54, 1);
                    d_54 :
                    if(match_string(p_54, "d_0"))
                      {
                        if(((k_54 != NULL) && (k_54 != q_54)))
                          _fail(q_54);
                        else
                          k_54 = q_54;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(i_54), not_null(k_54)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_54), not_null(k_54)));
          }
        }
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
ATerm SeqOverChoiceR_0 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL;
  z_54 = t;
  x_54 :
  if(match_cons(z_54, sym_Seq_2))
    {
      a_55 = ATgetArgument(z_54, 0);
      d_55 = ATgetArgument(z_54, 1);
      y_54 :
      if(match_cons(a_55, sym_Choice_2))
        {
          b_55 = ATgetArgument(a_55, 0);
          c_55 = ATgetArgument(a_55, 1);
          {
            ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(d_55));
            {
              ATerm t_2 (ATerm t)
              {
                t = term_q_17;
                return(t);
              }
              t = rewrite_1(t, t_2);
              {
                h_55 = t;
                v_54 :
                if(match_cons(h_55, sym_Defined_2))
                  {
                    i_55 = ATgetArgument(h_55, 0);
                    j_55 = ATgetArgument(h_55, 1);
                    w_54 :
                    if(match_string(i_55, "c_0"))
                      {
                        if(((d_55 != NULL) && (d_55 != j_55)))
                          _fail(j_55);
                        else
                          d_55 = j_55;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(b_55), not_null(d_55)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_55), not_null(d_55)));
          }
        }
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
ATerm fuse_with_bottomup_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceR_0(t);
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        {
          ATerm x_17 = t;
          int y_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceR_0(t);
              LocalPopChoice(y_17);
            }
          else
            {
              t = x_17;
              {
                ATerm z_17 = t;
                int d_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SeqOverScopeR_0(t);
                    LocalPopChoice(d_18);
                  }
                else
                  {
                    t = z_17;
                    {
                      ATerm f_18 = t;
                      int i_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = AssociateR_0(t);
                          LocalPopChoice(i_18);
                        }
                      else
                        {
                          t = f_18;
                          {
                            ATerm j_18 = t;
                            int k_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = IntroduceApp_0(t);
                                LocalPopChoice(k_18);
                              }
                            else
                              {
                                t = j_18;
                                t = BottomupOverConstructor_0(t);
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
  t = innermost_1(t, u_2);
  return(t);
}
ATerm SeqOverScopeL_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL;
  s_55 = t;
  n_55 :
  if(match_cons(s_55, sym_Seq_2))
    {
      t_55 = ATgetArgument(s_55, 0);
      u_55 = ATgetArgument(s_55, 1);
      o_55 :
      if(match_cons(u_55, sym_Scope_2))
        {
          v_55 = ATgetArgument(u_55, 0);
          y_55 = ATgetArgument(u_55, 1);
          p_55 :
          if(((ATgetType(v_55) == AT_LIST) && ((ATermList) v_55 != ATempty)))
            {
              w_55 = ATgetFirst((ATermList) v_55);
              x_55 = (ATerm) ATgetNext((ATermList) v_55);
              q_55 :
              if(match_string(w_55, "x*"))
                {
                  r_55 :
                  if(((ATermList) x_55 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_o_17), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_55), not_null(y_55)));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm SeqOverLChoiceL_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
  f_56 = t;
  d_56 :
  if(match_cons(f_56, sym_Seq_2))
    {
      g_56 = ATgetArgument(f_56, 0);
      h_56 = ATgetArgument(f_56, 1);
      e_56 :
      if(match_cons(h_56, sym_LChoice_2))
        {
          i_56 = ATgetArgument(h_56, 0);
          j_56 = ATgetArgument(h_56, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(g_56), not_null(i_56)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_56), not_null(j_56)));
        }
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
ATerm SeqOverChoiceL_0 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
  r_56 = t;
  p_56 :
  if(match_cons(r_56, sym_Seq_2))
    {
      s_56 = ATgetArgument(r_56, 0);
      t_56 = ATgetArgument(r_56, 1);
      q_56 :
      if(match_cons(t_56, sym_Choice_2))
        {
          u_56 = ATgetArgument(t_56, 0);
          v_56 = ATgetArgument(t_56, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(s_56), not_null(u_56)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_56), not_null(v_56)));
        }
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
ATerm bottomup_1 (ATerm t, ATerm u_115 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    t = bottomup_1(t, u_115);
    return(t);
  }
  t = _all(t, v_2);
  t = u_115(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm l_103 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    ATerm x_2 (ATerm t)
    {
      t = l_103(t);
      t = bottomup_1(t, w_2);
      return(t);
    }
    t = try_1(t, x_2);
    return(t);
  }
  t = bottomup_1(t, w_2);
  return(t);
}
ATerm propagate_mark_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceL_0(t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceL_0(t);
              LocalPopChoice(o_18);
            }
          else
            {
              t = n_18;
              t = SeqOverScopeL_0(t);
            }
        }
      }
    return(t);
  }
  t = innermost_1(t, y_2);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm x_88 (ATerm))
{
  ATerm g_57 = NULL,h_57 = NULL;
  g_57 = t;
  f_57 :
  if(match_cons(g_57, sym_Build_1))
    {
      h_57 = ATgetArgument(g_57, 0);
      {
        ATerm k_57 = NULL,p_57 = NULL;
        ATerm l_57 = NULL;
        t = SSLgetAnnotations(not_null(g_57));
        {
          l_57 = t;
          if(((k_57 != NULL) && (k_57 != l_57)))
            _fail(l_57);
          else
            k_57 = l_57;
        }
        {
          t = not_null(h_57);
          {
            ATerm r_57 = NULL;
            t = x_88(t);
            {
              p_57 = t;
              {
                ATerm s_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(p_57)), not_null(k_57));
                {
                  s_57 = t;
                  if(((r_57 != NULL) && (r_57 != s_57)))
                    _fail(s_57);
                  else
                    r_57 = s_57;
                }
                t = not_null(r_57);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm h_87 (ATerm), ATerm i_87 (ATerm))
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL;
  d_58 = t;
  c_58 :
  if(match_cons(d_58, sym_Seq_2))
    {
      e_58 = ATgetArgument(d_58, 0);
      f_58 = ATgetArgument(d_58, 1);
      {
        ATerm j_58 = NULL,l_58 = NULL;
        ATerm k_58 = NULL;
        t = SSLgetAnnotations(not_null(d_58));
        {
          k_58 = t;
          if(((j_58 != NULL) && (j_58 != k_58)))
            _fail(k_58);
          else
            j_58 = k_58;
        }
        {
          t = not_null(e_58);
          {
            ATerm n_58 = NULL;
            t = h_87(t);
            {
              l_58 = t;
              {
                t = not_null(f_58);
                {
                  ATerm p_58 = NULL;
                  t = i_87(t);
                  {
                    n_58 = t;
                    {
                      ATerm q_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(l_58), not_null(n_58)), not_null(j_58));
                      {
                        q_58 = t;
                        if(((p_58 != NULL) && (p_58 != q_58)))
                          _fail(q_58);
                        else
                          p_58 = q_58;
                      }
                      t = not_null(p_58);
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
ATerm Match_1 (ATerm t, ATerm w_88 (ATerm))
{
  ATerm b_59 = NULL,c_59 = NULL;
  b_59 = t;
  a_59 :
  if(match_cons(b_59, sym_Match_1))
    {
      c_59 = ATgetArgument(b_59, 0);
      {
        ATerm f_59 = NULL,h_59 = NULL;
        ATerm g_59 = NULL;
        t = SSLgetAnnotations(not_null(b_59));
        {
          g_59 = t;
          if(((f_59 != NULL) && (f_59 != g_59)))
            _fail(g_59);
          else
            f_59 = g_59;
        }
        {
          t = not_null(c_59);
          {
            ATerm j_59 = NULL;
            t = w_88(t);
            {
              h_59 = t;
              {
                ATerm k_59 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(h_59)), not_null(f_59));
                {
                  k_59 = t;
                  if(((j_59 != NULL) && (j_59 != k_59)))
                    _fail(k_59);
                  else
                    j_59 = k_59;
                }
                t = not_null(j_59);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm l_87 (ATerm), ATerm m_87 (ATerm))
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL;
  v_59 = t;
  u_59 :
  if(match_cons(v_59, sym_LChoice_2))
    {
      w_59 = ATgetArgument(v_59, 0);
      x_59 = ATgetArgument(v_59, 1);
      {
        ATerm b_60 = NULL,d_60 = NULL;
        ATerm c_60 = NULL;
        t = SSLgetAnnotations(not_null(v_59));
        {
          c_60 = t;
          if(((b_60 != NULL) && (b_60 != c_60)))
            _fail(c_60);
          else
            b_60 = c_60;
        }
        {
          t = not_null(w_59);
          {
            ATerm f_60 = NULL;
            t = l_87(t);
            {
              d_60 = t;
              {
                t = not_null(x_59);
                {
                  ATerm h_60 = NULL;
                  t = m_87(t);
                  {
                    f_60 = t;
                    {
                      ATerm i_60 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(d_60), not_null(f_60)), not_null(b_60));
                      {
                        i_60 = t;
                        if(((h_60 != NULL) && (h_60 != i_60)))
                          _fail(i_60);
                        else
                          h_60 = i_60;
                      }
                      t = not_null(h_60);
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
ATerm Choice_2 (ATerm t, ATerm j_87 (ATerm), ATerm k_87 (ATerm))
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL;
  u_60 = t;
  t_60 :
  if(match_cons(u_60, sym_Choice_2))
    {
      v_60 = ATgetArgument(u_60, 0);
      w_60 = ATgetArgument(u_60, 1);
      {
        ATerm a_61 = NULL,c_61 = NULL;
        ATerm b_61 = NULL;
        t = SSLgetAnnotations(not_null(u_60));
        {
          b_61 = t;
          if(((a_61 != NULL) && (a_61 != b_61)))
            _fail(b_61);
          else
            a_61 = b_61;
        }
        {
          t = not_null(v_60);
          {
            ATerm e_61 = NULL;
            t = j_87(t);
            {
              c_61 = t;
              {
                t = not_null(w_60);
                {
                  ATerm g_61 = NULL;
                  t = k_87(t);
                  {
                    e_61 = t;
                    {
                      ATerm h_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(c_61), not_null(e_61)), not_null(a_61));
                      {
                        h_61 = t;
                        if(((g_61 != NULL) && (g_61 != h_61)))
                          _fail(h_61);
                        else
                          g_61 = h_61;
                      }
                      t = not_null(g_61);
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
ATerm inline_rules_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Choice_2(t, inline_rules_0, inline_rules_0);
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        {
          ATerm r_18 = t;
          int w_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = LChoice_2(t, inline_rules_0, inline_rules_0);
              LocalPopChoice(w_18);
            }
          else
            {
              t = r_18;
              {
                ATerm x_18 = t;
                int y_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_3 (ATerm t)
                    {
                      ATerm b_3 (ATerm t)
                      {
                        t = Match_1(t, _id);
                        return(t);
                      }
                      ATerm c_3 (ATerm t)
                      {
                        t = Build_1(t, _id);
                        return(t);
                      }
                      t = Seq_2(t, b_3, c_3);
                      return(t);
                    }
                    t = Scope_2(t, _id, a_3);
                    LocalPopChoice(y_18);
                  }
                else
                  {
                    t = x_18;
                    {
                      ATerm c_19 = t;
                      int e_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_3 (ATerm t)
                          {
                            ATerm e_3 (ATerm t)
                            {
                              t = Match_1(t, _id);
                              return(t);
                            }
                            ATerm f_3 (ATerm t)
                            {
                              ATerm g_3 (ATerm t)
                              {
                                t = Build_1(t, _id);
                                return(t);
                              }
                              t = Seq_2(t, _id, g_3);
                              return(t);
                            }
                            t = Seq_2(t, e_3, f_3);
                            return(t);
                          }
                          t = Scope_2(t, _id, d_3);
                          LocalPopChoice(e_19);
                        }
                      else
                        {
                          t = c_19;
                          {
                            t = InlineStrat_0(t);
                            t = inline_rules_0(t);
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
  t = try_1(t, z_2);
  return(t);
}
ATerm bottomup_to_var_0 (ATerm t)
{
  ATerm p_61 = NULL;
  p_61 = t;
  {
    ATerm h_19;
    h_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_15, (ATerm) ATmakeAppl(sym_Defined_2, term_i_19, not_null(p_61)));
      {
        ATerm h_3 (ATerm t)
        {
          t = term_j_17;
          return(t);
        }
        t = assert_1(t, h_3);
      }
    }
    t = h_19;
    {
      ATerm j_19;
      j_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_15, (ATerm) ATmakeAppl(sym_Defined_2, term_k_19, not_null(p_61)));
        {
          ATerm i_3 (ATerm t)
          {
            t = term_t_15;
            return(t);
          }
          t = assert_1(t, i_3);
        }
      }
      t = j_19;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm t_61 = NULL;
  t_61 = t;
  {
    ATerm l_19;
    l_19 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(t_61)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_19, not_null(t_61)));
      {
        ATerm j_3 (ATerm t)
        {
          t = term_q_17;
          return(t);
        }
        t = assert_1(t, j_3);
      }
    }
    t = l_19;
    {
      ATerm n_19;
      n_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(t_61)), (ATerm) ATmakeAppl(sym_Defined_2, term_o_19, not_null(t_61)));
        {
          ATerm k_3 (ATerm t)
          {
            t = term_p_17;
            return(t);
          }
          t = assert_1(t, k_3);
        }
      }
      t = n_19;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL;
  e_62 = t;
  z_61 :
  if(match_cons(e_62, sym_Call_2))
    {
      f_62 = ATgetArgument(e_62, 0);
      h_62 = ATgetArgument(e_62, 1);
      a_62 :
      if(match_cons(f_62, sym_SVar_1))
        {
          g_62 = ATgetArgument(f_62, 0);
          b_62 :
          if(match_string(g_62, "innermost_1"))
            {
              c_62 :
              if(((ATgetType(h_62) == AT_LIST) && ((ATermList) h_62 != ATempty)))
                {
                  i_62 = ATgetFirst((ATermList) h_62);
                  j_62 = (ATerm) ATgetNext((ATermList) h_62);
                  d_62 :
                  if(((ATermList) j_62 == ATempty))
                    {
                      {
                        ATerm l_62 = NULL,n_62 = NULL;
                        ATerm l_3 (ATerm t)
                        {
                          ATerm m_3 (ATerm t)
                          {
                            t = term_p_19;
                            return(t);
                          }
                          t = say_1(t, m_3);
                          return(t);
                        }
                        t = if_verbose2_1(t, l_3);
                        {
                          ATerm q_19;
                          q_19 = t;
                          {
                            ATerm m_62 = NULL;
                            t = new_0(t);
                            {
                              m_62 = t;
                              if(((l_62 != NULL) && (l_62 != m_62)))
                                _fail(m_62);
                              else
                                l_62 = m_62;
                            }
                          }
                          t = q_19;
                          {
                            ATerm v_19;
                            v_19 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_n_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_62)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = v_19;
                            {
                              ATerm w_19;
                              w_19 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_n_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_62)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = w_19;
                              {
                                ATerm o_62 = NULL;
                                t = not_null(i_62);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    o_62 = t;
                                    if(((n_62 != NULL) && (n_62 != o_62)))
                                      _fail(o_62);
                                    else
                                      n_62 = o_62;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(l_62), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_d_20, not_null(n_62)), (ATerm) ATmakeAppl(sym_Call_2, term_n_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_62)), (ATerm) ATempty)))), term_r_12))));
                                  {
                                    t = propagate_mark_0(t);
                                    {
                                      t = fuse_with_bottomup_0(t);
                                      {
                                        ATerm n_3 (ATerm t)
                                        {
                                          ATerm g_20 = t;
                                          int h_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = BottomupToVarIsId_UnCond_0(t);
                                              LocalPopChoice(h_20);
                                            }
                                          else
                                            {
                                              t = g_20;
                                              t = BottomupToVarIsId_Cond_0(t);
                                            }
                                          return(t);
                                        }
                                        t = alltd_1(t, n_3);
                                        {
                                          t = desugar_0(t);
                                          {
                                            ATerm o_3 (ATerm t)
                                            {
                                              ATerm p_3 (ATerm t)
                                              {
                                                t = term_i_20;
                                                return(t);
                                              }
                                              t = say_1(t, p_3);
                                              return(t);
                                            }
                                            t = if_verbose1_1(t, o_3);
                                          }
                                        }
                                      }
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
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm alltd_1 (ATerm t, ATerm x_117 (ATerm))
{
  ATerm s_62 (ATerm t)
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_117(t);
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = _all(t, s_62);
      }
    return(t);
  }
  t = s_62(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm i_63 = NULL;
  ATerm l_20;
  l_20 = t;
  {
    ATerm j_63 = NULL;
    t = new_0(t);
    {
      j_63 = t;
      {
        if(((i_63 != NULL) && (i_63 != j_63)))
          _fail(j_63);
        else
          i_63 = j_63;
        {
          ATerm m_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_n_17, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_63)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(n_20);
            }
          else
            {
              t = m_20;
              {
                ATerm q_3 (ATerm t)
                {
                  ATerm r_3 (ATerm t)
                  {
                    t = term_q_20;
                    return(t);
                  }
                  t = say_1(t, r_3);
                  return(t);
                }
                t = if_verbose2_1(t, q_3);
                _fail(t);
              }
            }
          {
            ATerm r_20 = t;
            int u_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL;
                k_63 = t;
                v_62 :
                if(match_cons(k_63, sym_Seq_2))
                  {
                    l_63 = ATgetArgument(k_63, 0);
                    v_63 = ATgetArgument(k_63, 1);
                    w_62 :
                    if(match_cons(l_63, sym_All_1))
                      {
                        m_63 = ATgetArgument(l_63, 0);
                        x_62 :
                        if(match_cons(m_63, sym_Call_2))
                          {
                            n_63 = ATgetArgument(m_63, 0);
                            p_63 = ATgetArgument(m_63, 1);
                            y_62 :
                            if(match_cons(n_63, sym_SVar_1))
                              {
                                o_63 = ATgetArgument(n_63, 0);
                                z_62 :
                                if(match_string(o_63, "bottomup_1"))
                                  {
                                    a_63 :
                                    if(((ATgetType(p_63) == AT_LIST) && ((ATermList) p_63 != ATempty)))
                                      {
                                        q_63 = ATgetFirst((ATermList) p_63);
                                        u_63 = (ATerm) ATgetNext((ATermList) p_63);
                                        b_63 :
                                        if(match_cons(q_63, sym_Call_2))
                                          {
                                            r_63 = ATgetArgument(q_63, 0);
                                            t_63 = ATgetArgument(q_63, 1);
                                            c_63 :
                                            if(match_cons(r_63, sym_SVar_1))
                                              {
                                                s_63 = ATgetArgument(r_63, 0);
                                                d_63 :
                                                if(((ATermList) t_63 == ATempty))
                                                  {
                                                    e_63 :
                                                    if(((ATermList) u_63 == ATempty))
                                                      {
                                                        f_63 :
                                                        if(match_cons(v_63, sym_Call_2))
                                                          {
                                                            w_63 = ATgetArgument(v_63, 0);
                                                            y_63 = ATgetArgument(v_63, 1);
                                                            g_63 :
                                                            if(match_cons(w_63, sym_SVar_1))
                                                              {
                                                                x_63 = ATgetArgument(w_63, 0);
                                                                h_63 :
                                                                if(((ATermList) y_63 == ATempty))
                                                                  {
                                                                    {
                                                                      if(((i_63 != NULL) && (i_63 != s_63)))
                                                                        _fail(s_63);
                                                                      else
                                                                        i_63 = s_63;
                                                                      if(((i_63 != NULL) && (i_63 != x_63)))
                                                                        _fail(x_63);
                                                                      else
                                                                        i_63 = x_63;
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(u_20);
              }
            else
              {
                t = r_20;
                {
                  ATerm s_3 (ATerm t)
                  {
                    ATerm t_3 (ATerm t)
                    {
                      t = term_y_20;
                      return(t);
                    }
                    t = debug_1(t, t_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, s_3);
                  _fail(t);
                }
              }
            {
              ATerm u_3 (ATerm t)
              {
                ATerm v_3 (ATerm t)
                {
                  t = term_f_21;
                  return(t);
                }
                t = say_1(t, v_3);
                return(t);
              }
              t = if_verbose2_1(t, u_3);
            }
          }
        }
      }
    }
  }
  t = l_20;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL;
  ATerm o_21;
  o_21 = t;
  {
    ATerm c_65 = NULL;
    t = new_0(t);
    {
      c_65 = t;
      {
        if(((a_65 != NULL) && (a_65 != c_65)))
          _fail(c_65);
        else
          a_65 = c_65;
        {
          ATerm p_21 = t;
          int q_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_s_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_65)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(q_21);
            }
          else
            {
              t = p_21;
              {
                ATerm w_3 (ATerm t)
                {
                  ATerm x_3 (ATerm t)
                  {
                    t = term_t_21;
                    return(t);
                  }
                  t = say_1(t, x_3);
                  return(t);
                }
                t = if_verbose2_1(t, w_3);
                _fail(t);
              }
            }
          {
            ATerm u_21 = t;
            int v_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL;
                d_65 = t;
                d_64 :
                if(match_cons(d_65, sym_Call_2))
                  {
                    e_65 = ATgetArgument(d_65, 0);
                    g_65 = ATgetArgument(d_65, 1);
                    e_64 :
                    if(match_cons(e_65, sym_SVar_1))
                      {
                        f_65 = ATgetArgument(e_65, 0);
                        f_64 :
                        if(match_string(f_65, "bottomup_1"))
                          {
                            g_64 :
                            if(((ATgetType(g_65) == AT_LIST) && ((ATermList) g_65 != ATempty)))
                              {
                                h_65 = ATgetFirst((ATermList) g_65);
                                g_66 = (ATerm) ATgetNext((ATermList) g_65);
                                h_64 :
                                if(match_cons(h_65, sym_Rec_2))
                                  {
                                    i_65 = ATgetArgument(h_65, 0);
                                    j_65 = ATgetArgument(h_65, 1);
                                    i_64 :
                                    if(match_cons(j_65, sym_Call_2))
                                      {
                                        k_65 = ATgetArgument(j_65, 0);
                                        m_65 = ATgetArgument(j_65, 1);
                                        j_64 :
                                        if(match_cons(k_65, sym_SVar_1))
                                          {
                                            l_65 = ATgetArgument(k_65, 0);
                                            k_64 :
                                            if(match_string(l_65, "try_1"))
                                              {
                                                l_64 :
                                                if(((ATgetType(m_65) == AT_LIST) && ((ATermList) m_65 != ATempty)))
                                                  {
                                                    n_65 = ATgetFirst((ATermList) m_65);
                                                    f_66 = (ATerm) ATgetNext((ATermList) m_65);
                                                    m_64 :
                                                    if(match_cons(n_65, sym_Seq_2))
                                                      {
                                                        o_65 = ATgetArgument(n_65, 0);
                                                        w_65 = ATgetArgument(n_65, 1);
                                                        n_64 :
                                                        if(match_cons(o_65, sym_Call_2))
                                                          {
                                                            t_65 = ATgetArgument(o_65, 0);
                                                            v_65 = ATgetArgument(o_65, 1);
                                                            o_64 :
                                                            if(match_cons(t_65, sym_SVar_1))
                                                              {
                                                                u_65 = ATgetArgument(t_65, 0);
                                                                p_64 :
                                                                if(((ATermList) v_65 == ATempty))
                                                                  {
                                                                    q_64 :
                                                                    if(match_cons(w_65, sym_Call_2))
                                                                      {
                                                                        x_65 = ATgetArgument(w_65, 0);
                                                                        z_65 = ATgetArgument(w_65, 1);
                                                                        r_64 :
                                                                        if(match_cons(x_65, sym_SVar_1))
                                                                          {
                                                                            y_65 = ATgetArgument(x_65, 0);
                                                                            s_64 :
                                                                            if(match_string(y_65, "bottomup_1"))
                                                                              {
                                                                                t_64 :
                                                                                if(((ATgetType(z_65) == AT_LIST) && ((ATermList) z_65 != ATempty)))
                                                                                  {
                                                                                    a_66 = ATgetFirst((ATermList) z_65);
                                                                                    e_66 = (ATerm) ATgetNext((ATermList) z_65);
                                                                                    u_64 :
                                                                                    if(match_cons(a_66, sym_Call_2))
                                                                                      {
                                                                                        b_66 = ATgetArgument(a_66, 0);
                                                                                        d_66 = ATgetArgument(a_66, 1);
                                                                                        v_64 :
                                                                                        if(match_cons(b_66, sym_SVar_1))
                                                                                          {
                                                                                            c_66 = ATgetArgument(b_66, 0);
                                                                                            w_64 :
                                                                                            if(((ATermList) d_66 == ATempty))
                                                                                              {
                                                                                                x_64 :
                                                                                                if(((ATermList) e_66 == ATempty))
                                                                                                  {
                                                                                                    y_64 :
                                                                                                    if(((ATermList) f_66 == ATempty))
                                                                                                      {
                                                                                                        z_64 :
                                                                                                        if(((ATermList) g_66 == ATempty))
                                                                                                          {
                                                                                                            {
                                                                                                              if(((b_65 != NULL) && (b_65 != i_65)))
                                                                                                                _fail(i_65);
                                                                                                              else
                                                                                                                b_65 = i_65;
                                                                                                              {
                                                                                                                if(((a_65 != NULL) && (a_65 != u_65)))
                                                                                                                  _fail(u_65);
                                                                                                                else
                                                                                                                  a_65 = u_65;
                                                                                                                if(((b_65 != NULL) && (b_65 != c_66)))
                                                                                                                  _fail(c_66);
                                                                                                                else
                                                                                                                  b_65 = c_66;
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
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(v_21);
              }
            else
              {
                t = u_21;
                {
                  ATerm y_3 (ATerm t)
                  {
                    ATerm z_3 (ATerm t)
                    {
                      t = term_w_21;
                      return(t);
                    }
                    t = debug_1(t, z_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, y_3);
                  _fail(t);
                }
              }
            {
              ATerm a_4 (ATerm t)
              {
                ATerm b_4 (ATerm t)
                {
                  t = term_x_21;
                  return(t);
                }
                t = say_1(t, b_4);
                return(t);
              }
              t = if_verbose2_1(t, a_4);
            }
          }
        }
      }
    }
  }
  t = o_21;
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL;
  r_66 = t;
  k_66 :
  if(match_cons(r_66, sym_Call_2))
    {
      s_66 = ATgetArgument(r_66, 0);
      u_66 = ATgetArgument(r_66, 1);
      l_66 :
      if(match_cons(s_66, sym_SVar_1))
        {
          t_66 = ATgetArgument(s_66, 0);
          m_66 :
          if(((ATermList) u_66 == ATempty))
            {
              t = not_null(t_66);
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm SubsVar_2 (ATerm t, ATerm x_93 (ATerm), ATerm y_93 (ATerm))
{
  ATerm a_67 = NULL;
  ATerm c_67 = NULL,d_67 = NULL;
  a_67 = t;
  {
    ATerm l_67 = NULL;
    t = not_null(a_67);
    {
      ATerm m_67 = NULL;
      t = x_93(t);
      {
        l_67 = t;
        {
          if(((c_67 != NULL) && (c_67 != l_67)))
            _fail(l_67);
          else
            c_67 = l_67;
          {
            t = y_93(t);
            {
              m_67 = t;
              if(((d_67 != NULL) && (d_67 != m_67)))
                _fail(m_67);
              else
                d_67 = m_67;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_67), not_null(d_67));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
  w_67 = t;
  v_67 :
  if(match_cons(w_67, sym__2))
    {
      x_67 = ATgetArgument(w_67, 0);
      y_67 = ATgetArgument(w_67, 1);
      {
        ATerm b_68 = NULL;
        if(((b_68 != NULL) && (b_68 != y_67)))
          _fail(y_67);
        else
          b_68 = y_67;
      }
    }
  else
    {
      if(match_cons(w_67, sym__3))
        {
          x_67 = ATgetArgument(w_67, 0);
          y_67 = ATgetArgument(w_67, 1);
          z_67 = ATgetArgument(w_67, 2);
          {
            ATerm h_68 = NULL;
            ATerm i_68 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_67), not_null(y_67));
            {
              t = zip_1(t, _id);
              {
                i_68 = t;
                if(((h_68 != NULL) && (h_68 != i_68)))
                  _fail(i_68);
                else
                  h_68 = i_68;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_68), not_null(z_67));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm z_93 (ATerm), ATerm a_94 (ATerm))
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL;
  t = subs_args_0(t);
  {
    o_68 = t;
    n_68 :
    if(match_cons(o_68, sym__2))
      {
        p_68 = ATgetArgument(o_68, 0);
        q_68 = ATgetArgument(o_68, 1);
        {
          t = not_null(q_68);
          {
            ATerm c_4 (ATerm t)
            {
              ATerm d_4 (ATerm t)
              {
                t = not_null(p_68);
                return(t);
              }
              t = SubsVar_2(t, z_93, d_4);
              t = a_94(t);
              return(t);
            }
            t = alltd_1(t, c_4);
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
ATerm substitute_1 (ATerm t, ATerm b_94 (ATerm))
{
  t = substitute_2(t, b_94, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm a_91 (ATerm))
{
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_4 (ATerm t)
      {
        t = split_2(t, _id, a_91);
        {
          ATerm f_4 (ATerm t)
          {
            ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL;
            m_69 = t;
            z_68 :
            if(match_cons(m_69, sym__2))
              {
                n_69 = ATgetArgument(m_69, 0);
                r_69 = ATgetArgument(m_69, 1);
                a_69 :
                if(match_cons(n_69, sym_SDef_3))
                  {
                    o_69 = ATgetArgument(n_69, 0);
                    p_69 = ATgetArgument(n_69, 1);
                    q_69 = ATgetArgument(n_69, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_69), not_null(p_69), not_null(q_69));
                  }
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
          t = zip_1(t, f_4);
        }
        return(t);
      }
      t = Let_2(t, e_4, _id);
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_4 (ATerm t)
            {
              t = split_2(t, _id, a_91);
              {
                ATerm h_4 (ATerm t)
                {
                  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL;
                  v_69 = t;
                  c_69 :
                  if(match_cons(v_69, sym__2))
                    {
                      w_69 = ATgetArgument(v_69, 0);
                      z_69 = ATgetArgument(v_69, 1);
                      l_69 :
                      if(match_cons(w_69, sym_VarDec_2))
                        {
                          x_69 = ATgetArgument(w_69, 0);
                          y_69 = ATgetArgument(w_69, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_69), not_null(y_69));
                        }
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
                t = zip_1(t, h_4);
              }
              return(t);
            }
            t = SDef_3(t, _id, g_4, _id);
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            {
              ATerm i_4 (ATerm t)
              {
                t = a_91(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, i_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm w_87 (ATerm), ATerm x_87 (ATerm))
{
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
  l_70 = t;
  k_70 :
  if(match_cons(l_70, sym_Rec_2))
    {
      m_70 = ATgetArgument(l_70, 0);
      n_70 = ATgetArgument(l_70, 1);
      {
        ATerm r_70 = NULL,t_70 = NULL;
        ATerm s_70 = NULL;
        t = SSLgetAnnotations(not_null(l_70));
        {
          s_70 = t;
          if(((r_70 != NULL) && (r_70 != s_70)))
            _fail(s_70);
          else
            r_70 = s_70;
        }
        {
          t = not_null(m_70);
          {
            ATerm v_70 = NULL;
            t = w_87(t);
            {
              t_70 = t;
              {
                t = not_null(n_70);
                {
                  ATerm x_70 = NULL;
                  t = x_87(t);
                  {
                    v_70 = t;
                    {
                      ATerm y_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(t_70), not_null(v_70)), not_null(r_70));
                      {
                        y_70 = t;
                        if(((x_70 != NULL) && (x_70 != y_70)))
                          _fail(y_70);
                        else
                          x_70 = y_70;
                      }
                      t = not_null(x_70);
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
ATerm SDef_3 (ATerm t, ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm))
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL;
  l_71 = t;
  k_71 :
  if(match_cons(l_71, sym_SDef_3))
    {
      m_71 = ATgetArgument(l_71, 0);
      n_71 = ATgetArgument(l_71, 1);
      o_71 = ATgetArgument(l_71, 2);
      {
        ATerm t_71 = NULL,z_71 = NULL;
        ATerm u_71 = NULL;
        t = SSLgetAnnotations(not_null(l_71));
        {
          u_71 = t;
          if(((t_71 != NULL) && (t_71 != u_71)))
            _fail(u_71);
          else
            t_71 = u_71;
        }
        {
          t = not_null(m_71);
          {
            ATerm b_72 = NULL;
            t = a_88(t);
            {
              z_71 = t;
              {
                t = not_null(n_71);
                {
                  ATerm d_72 = NULL;
                  t = b_88(t);
                  {
                    b_72 = t;
                    {
                      t = not_null(o_71);
                      {
                        ATerm f_72 = NULL;
                        t = c_88(t);
                        {
                          d_72 = t;
                          {
                            ATerm g_72 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(z_71), not_null(b_72), not_null(d_72)), not_null(t_71));
                            {
                              g_72 = t;
                              if(((f_72 != NULL) && (f_72 != g_72)))
                                _fail(g_72);
                              else
                                f_72 = g_72;
                            }
                            t = not_null(f_72);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm y_87 (ATerm), ATerm z_87 (ATerm))
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL;
  b_73 = t;
  a_73 :
  if(match_cons(b_73, sym_Let_2))
    {
      c_73 = ATgetArgument(b_73, 0);
      d_73 = ATgetArgument(b_73, 1);
      {
        ATerm h_73 = NULL,j_73 = NULL;
        ATerm i_73 = NULL;
        t = SSLgetAnnotations(not_null(b_73));
        {
          i_73 = t;
          if(((h_73 != NULL) && (h_73 != i_73)))
            _fail(i_73);
          else
            h_73 = i_73;
        }
        {
          t = not_null(c_73);
          {
            ATerm l_73 = NULL;
            t = y_87(t);
            {
              j_73 = t;
              {
                t = not_null(d_73);
                {
                  ATerm n_73 = NULL;
                  t = z_87(t);
                  {
                    l_73 = t;
                    {
                      ATerm o_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(j_73), not_null(l_73)), not_null(h_73));
                      {
                        o_73 = t;
                        if(((n_73 != NULL) && (n_73 != o_73)))
                          _fail(o_73);
                        else
                          n_73 = o_73;
                      }
                      t = not_null(n_73);
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
ATerm sboundin_3 (ATerm t, ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm d_91 (ATerm))
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, b_91, b_91);
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, d_91, d_91, b_91);
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            t = Rec_2(t, d_91, b_91);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
  w_73 = t;
  v_73 :
  if(match_cons(w_73, sym_Rec_2))
    {
      x_73 = ATgetArgument(w_73, 0);
      y_73 = ATgetArgument(w_73, 1);
      t = (ATerm) ATinsert(ATempty, not_null(x_73));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL;
  q_74 = t;
  p_74 :
  if(match_cons(q_74, sym_SDef_3))
    {
      r_74 = ATgetArgument(q_74, 0);
      s_74 = ATgetArgument(q_74, 1);
      t_74 = ATgetArgument(q_74, 2);
      {
        t = not_null(s_74);
        {
          ATerm j_4 (ATerm t)
          {
            ATerm x_74 = NULL,y_74 = NULL,p_75 = NULL;
            x_74 = t;
            o_74 :
            if(match_cons(x_74, sym_VarDec_2))
              {
                y_74 = ATgetArgument(x_74, 0);
                p_75 = ATgetArgument(x_74, 1);
                t = not_null(y_74);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_4);
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
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL;
  l_77 = t;
  k_77 :
  if(match_cons(l_77, sym_Let_2))
    {
      m_77 = ATgetArgument(l_77, 0);
      n_77 = ATgetArgument(l_77, 1);
      {
        t = not_null(m_77);
        {
          ATerm k_4 (ATerm t)
          {
            ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
            q_77 = t;
            j_77 :
            if(match_cons(q_77, sym_SDef_3))
              {
                r_77 = ATgetArgument(q_77, 0);
                s_77 = ATgetArgument(q_77, 1);
                t_77 = ATgetArgument(q_77, 2);
                t = not_null(r_77);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, k_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm v_87 (ATerm))
{
  ATerm e_78 = NULL,f_78 = NULL;
  e_78 = t;
  d_78 :
  if(match_cons(e_78, sym_SVar_1))
    {
      f_78 = ATgetArgument(e_78, 0);
      {
        ATerm i_78 = NULL,k_78 = NULL;
        ATerm j_78 = NULL;
        t = SSLgetAnnotations(not_null(e_78));
        {
          j_78 = t;
          if(((i_78 != NULL) && (i_78 != j_78)))
            _fail(j_78);
          else
            i_78 = j_78;
        }
        {
          t = not_null(f_78);
          {
            ATerm m_78 = NULL;
            t = v_87(t);
            {
              k_78 = t;
              {
                ATerm n_78 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(k_78)), not_null(i_78));
                {
                  n_78 = t;
                  if(((m_78 != NULL) && (m_78 != n_78)))
                    _fail(n_78);
                  else
                    m_78 = n_78;
                }
                t = not_null(m_78);
              }
            }
          }
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
  ATerm l_4 (ATerm t)
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          ATerm s_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(t_22);
            }
          else
            {
              t = s_22;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, l_4, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm w_90 (ATerm))
{
  t = Scope_2(t, w_90, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm d_86 (ATerm))
{
  ATerm z_78 = NULL,a_79 = NULL;
  z_78 = t;
  y_78 :
  if(match_cons(z_78, sym_DynamicRules_1))
    {
      a_79 = ATgetArgument(z_78, 0);
      {
        ATerm d_79 = NULL,f_79 = NULL;
        ATerm e_79 = NULL;
        t = SSLgetAnnotations(not_null(z_78));
        {
          e_79 = t;
          if(((d_79 != NULL) && (d_79 != e_79)))
            _fail(e_79);
          else
            d_79 = e_79;
        }
        {
          t = not_null(a_79);
          {
            ATerm h_79 = NULL;
            t = d_86(t);
            {
              f_79 = t;
              {
                ATerm i_79 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(f_79)), not_null(d_79));
                {
                  i_79 = t;
                  if(((h_79 != NULL) && (h_79 != i_79)))
                    _fail(i_79);
                  else
                    h_79 = i_79;
                }
                t = not_null(h_79);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm a_89 (ATerm), ATerm b_89 (ATerm))
{
  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL;
  t_79 = t;
  s_79 :
  if(match_cons(t_79, sym_Scope_2))
    {
      u_79 = ATgetArgument(t_79, 0);
      v_79 = ATgetArgument(t_79, 1);
      {
        ATerm z_79 = NULL,b_80 = NULL;
        ATerm a_80 = NULL;
        t = SSLgetAnnotations(not_null(t_79));
        {
          a_80 = t;
          if(((z_79 != NULL) && (z_79 != a_80)))
            _fail(a_80);
          else
            z_79 = a_80;
        }
        {
          t = not_null(u_79);
          {
            ATerm d_80 = NULL;
            t = a_89(t);
            {
              b_80 = t;
              {
                t = not_null(v_79);
                {
                  ATerm f_80 = NULL;
                  t = b_89(t);
                  {
                    d_80 = t;
                    {
                      ATerm g_80 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(b_80), not_null(d_80)), not_null(z_79));
                      {
                        g_80 = t;
                        if(((f_80 != NULL) && (f_80 != g_80)))
                          _fail(g_80);
                        else
                          f_80 = g_80;
                      }
                      t = not_null(f_80);
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
ATerm tboundin_3 (ATerm t, ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm z_90 (ATerm))
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, z_90, x_90);
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      t = DynamicRules_1(t, x_90);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm o_80 = NULL,p_80 = NULL;
  o_80 = t;
  n_80 :
  if(match_cons(o_80, sym_DynamicRules_1))
    {
      p_80 = ATgetArgument(o_80, 0);
      {
        t = not_null(p_80);
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
  ATerm u_80 = NULL,v_80 = NULL;
  u_80 = t;
  t_80 :
  if(match_cons(u_80, sym_Var_1))
    {
      v_80 = ATgetArgument(u_80, 0);
      t = (ATerm) ATinsert(ATempty, not_null(v_80));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm j_108 (ATerm))
{
  ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL;
  a_81 = t;
  z_80 :
  if(match_cons(a_81, sym__2))
    {
      b_81 = ATgetArgument(a_81, 0);
      c_81 = ATgetArgument(a_81, 1);
      {
        t = not_null(b_81);
        {
          ATerm g_81 (ATerm t)
          {
            ATerm w_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(c_81);
                LocalPopChoice(x_22);
              }
            else
              {
                t = w_22;
                {
                  ATerm y_22 = t;
                  int z_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_4 (ATerm t)
                      {
                        t = not_null(c_81);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_108, m_4);
                      t = g_81(t);
                      LocalPopChoice(z_22);
                    }
                  else
                    {
                      t = y_22;
                      t = Cons_2(t, _id, g_81);
                    }
                }
              }
            return(t);
          }
          t = g_81(t);
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
ATerm foldr_3 (ATerm t, ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm e_107 (ATerm))
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_107(t);
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL;
        l_81 = t;
        k_81 :
        if(((ATgetType(l_81) == AT_LIST) && ((ATermList) l_81 != ATempty)))
          {
            m_81 = ATgetFirst((ATermList) l_81);
            n_81 = (ATerm) ATgetNext((ATermList) l_81);
            {
              ATerm q_81 = NULL,s_81 = NULL;
              ATerm c_23;
              c_23 = t;
              {
                ATerm r_81 = NULL;
                t = not_null(m_81);
                {
                  t = e_107(t);
                  {
                    r_81 = t;
                    if(((q_81 != NULL) && (q_81 != r_81)))
                      _fail(r_81);
                    else
                      q_81 = r_81;
                  }
                }
              }
              t = c_23;
              {
                ATerm t_81 = NULL;
                t = not_null(n_81);
                {
                  t = foldr_3(t, c_107, d_107, e_107);
                  {
                    t_81 = t;
                    if(((s_81 != NULL) && (s_81 != t_81)))
                      _fail(t_81);
                    else
                      s_81 = t_81;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_81), not_null(s_81));
                  t = d_107(t);
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
ATerm crush_3 (ATerm t, ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm w_108 (ATerm))
{
  ATerm b_82 = NULL;
  ATerm d_82 = NULL;
  b_82 = t;
  {
    ATerm e_82 = NULL;
    ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL;
    t = not_null(b_82);
    {
      e_82 = t;
      {
        t = SSL_explode_term(not_null(e_82));
        {
          g_82 = t;
          a_82 :
          if(match_cons(g_82, sym__2))
            {
              h_82 = ATgetArgument(g_82, 0);
              i_82 = ATgetArgument(g_82, 1);
              if(((d_82 != NULL) && (d_82 != i_82)))
                _fail(i_82);
              else
                d_82 = i_82;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_82);
      t = foldr_3(t, u_108, v_108, w_108);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL;
  p_82 = t;
  n_82 :
  if(match_cons(p_82, sym__2))
    {
      q_82 = ATgetArgument(p_82, 0);
      r_82 = ATgetArgument(p_82, 1);
      o_82 :
      if(((ATgetType(r_82) == AT_LIST) && ((ATermList) r_82 != ATempty)))
        {
          s_82 = ATgetFirst((ATermList) r_82);
          t_82 = (ATerm) ATgetNext((ATermList) r_82);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_82)), not_null(s_82)), not_null(t_82));
        }
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
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL;
  i_83 = t;
  g_83 :
  if(((ATgetType(i_83) == AT_LIST) && ((ATermList) i_83 != ATempty)))
    {
      j_83 = ATgetFirst((ATermList) i_83);
      m_83 = (ATerm) ATgetNext((ATermList) i_83);
      h_83 :
      if(match_cons(j_83, sym__2))
        {
          k_83 = ATgetArgument(j_83, 0);
          l_83 = ATgetArgument(j_83, 1);
          {
            ATerm q_83 = NULL,r_83 = NULL,x_83 = NULL,d_84 = NULL;
            ATerm d_23;
            d_23 = t;
            {
              ATerm s_83 = NULL;
              ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL;
              t = not_null(l_83);
              {
                s_83 = t;
                {
                  t = SSL_explode_term(not_null(s_83));
                  {
                    u_83 = t;
                    b_83 :
                    if(match_cons(u_83, sym__2))
                      {
                        v_83 = ATgetArgument(u_83, 0);
                        w_83 = ATgetArgument(u_83, 1);
                        {
                          if(((q_83 != NULL) && (q_83 != v_83)))
                            _fail(v_83);
                          else
                            q_83 = v_83;
                          if(((r_83 != NULL) && (r_83 != w_83)))
                            _fail(w_83);
                          else
                            r_83 = w_83;
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
            t = d_23;
            {
              ATerm e_23;
              e_23 = t;
              {
                ATerm y_83 = NULL;
                ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL;
                t = not_null(k_83);
                {
                  y_83 = t;
                  {
                    t = SSL_explode_term(not_null(y_83));
                    {
                      a_84 = t;
                      e_83 :
                      if(match_cons(a_84, sym__2))
                        {
                          b_84 = ATgetArgument(a_84, 0);
                          c_84 = ATgetArgument(a_84, 1);
                          {
                            if(((q_83 != NULL) && (q_83 != b_84)))
                              _fail(b_84);
                            else
                              q_83 = b_84;
                            if(((x_83 != NULL) && (x_83 != c_84)))
                              _fail(c_84);
                            else
                              x_83 = c_84;
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
              t = e_23;
              {
                ATerm e_84 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_83), not_null(r_83));
                {
                  t = zip_1(t, _id);
                  {
                    e_84 = t;
                    if(((d_84 != NULL) && (d_84 != e_84)))
                      _fail(e_84);
                    else
                      d_84 = e_84;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_84), not_null(m_83));
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
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL;
  o_84 = t;
  m_84 :
  if(((ATgetType(o_84) == AT_LIST) && ((ATermList) o_84 != ATempty)))
    {
      p_84 = ATgetFirst((ATermList) o_84);
      s_84 = (ATerm) ATgetNext((ATermList) o_84);
      n_84 :
      if(match_cons(p_84, sym__2))
        {
          q_84 = ATgetArgument(p_84, 0);
          r_84 = ATgetArgument(p_84, 1);
          {
            ATerm u_84 = NULL;
            if(((q_84 != NULL) && (q_84 != r_84)))
              _fail(r_84);
            else
              q_84 = r_84;
            {
              if(((u_84 != NULL) && (u_84 != s_84)))
                _fail(s_84);
              else
                u_84 = s_84;
              t = not_null(u_84);
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
ATerm while_not_2 (ATerm t, ATerm a_106 (ATerm), ATerm b_106 (ATerm))
{
  ATerm b_85 (ATerm t)
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_106(t);
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        {
          t = b_106(t);
          t = b_85(t);
        }
      }
    return(t);
  }
  t = b_85(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm))
{
  t = d_106(t);
  t = while_not_2(t, e_106, f_106);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm e_85 = NULL,h_85 = NULL,i_85 = NULL;
  e_85 = t;
  d_85 :
  if(match_cons(e_85, sym__2))
    {
      h_85 = ATgetArgument(e_85, 0);
      i_85 = ATgetArgument(e_85, 1);
      if(((h_85 != NULL) && (h_85 != i_85)))
        _fail(i_85);
      else
        h_85 = i_85;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_108 (ATerm), ATerm i_108 (ATerm))
{
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL;
  q_85 = t;
  p_85 :
  if(((ATgetType(q_85) == AT_LIST) && ((ATermList) q_85 != ATempty)))
    {
      r_85 = ATgetFirst((ATermList) q_85);
      s_85 = (ATerm) ATgetNext((ATermList) q_85);
      {
        t = i_108(t);
        {
          ATerm n_4 (ATerm t)
          {
            ATerm v_85 = NULL;
            v_85 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_85), not_null(v_85));
              t = h_108(t);
            }
            return(t);
          }
          t = fetch_1(t, n_4);
        }
        t = not_null(s_85);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm m_108 (ATerm))
{
  ATerm b_86 = NULL,c_86 = NULL,e_86 = NULL;
  b_86 = t;
  a_86 :
  if(match_cons(b_86, sym__2))
    {
      c_86 = ATgetArgument(b_86, 0);
      e_86 = ATgetArgument(b_86, 1);
      {
        t = not_null(c_86);
        {
          ATerm i_86 (ATerm t)
          {
            ATerm h_23 = t;
            int i_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
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
                      ATerm o_4 (ATerm t)
                      {
                        t = not_null(e_86);
                        return(t);
                      }
                      t = HdMember_p__2(t, m_108, o_4);
                      t = i_86(t);
                      LocalPopChoice(k_23);
                    }
                  else
                    {
                      t = j_23;
                      t = Cons_2(t, _id, i_86);
                    }
                }
              }
            return(t);
          }
          t = i_86(t);
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
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
        ATerm p_4 (ATerm t)
        {
          ATerm l_86 = NULL;
          l_86 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(l_86));
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          ATerm n_23 = t;
          int o_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_4 (ATerm t)
              {
                ATerm p_23 = t;
                int q_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(q_23);
                  }
                else
                  {
                    t = p_23;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, s_4);
              LocalPopChoice(o_23);
            }
          else
            {
              t = n_23;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, p_4, q_4, r_4);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm t_86 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_92(t);
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_86 = NULL;
              ATerm v_23;
              v_23 = t;
              {
                ATerm s_86 = NULL;
                t = c_92(t);
                {
                  s_86 = t;
                  if(((r_86 != NULL) && (r_86 != s_86)))
                    _fail(s_86);
                  else
                    r_86 = s_86;
                }
              }
              t = v_23;
              {
                ATerm t_4 (ATerm t)
                {
                  ATerm v_4 (ATerm t)
                  {
                    t = not_null(r_86);
                    return(t);
                  }
                  t = split_2(t, t_86, v_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm u_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = d_92(t, t_4, t_86, u_4);
                {
                  ATerm w_4 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, w_4, union_0, _id);
                }
              }
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              {
                ATerm x_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, x_4, union_0, t_86);
              }
            }
        }
      }
    return(t);
  }
  t = t_86(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm w_23 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = w_23;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, y_4, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,f_87 = NULL,g_87 = NULL;
  c_87 = t;
  x_86 :
  if(match_cons(c_87, sym_LRule_1))
    {
      f_87 = ATgetArgument(c_87, 0);
      y_86 :
      if(match_cons(f_87, sym_Rule_3))
        {
          z_86 = ATgetArgument(f_87, 0);
          a_87 = ATgetArgument(f_87, 1);
          b_87 = ATgetArgument(f_87, 2);
          {
            t = not_null(z_86);
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
      if(match_cons(c_87, sym_Scope_2))
        {
          f_87 = ATgetArgument(c_87, 0);
          g_87 = ATgetArgument(c_87, 1);
          t = not_null(f_87);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm c_1 (ATerm))
{
  ATerm l_88 = NULL,m_88 = NULL;
  l_88 = t;
  k_88 :
  if(match_cons(l_88, sym_Var_1))
    {
      m_88 = ATgetArgument(l_88, 0);
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_88 = NULL,r_88 = NULL;
            ATerm q_88 = NULL;
            t = SSLgetAnnotations(not_null(l_88));
            {
              q_88 = t;
              if(((p_88 != NULL) && (p_88 != q_88)))
                _fail(q_88);
              else
                p_88 = q_88;
            }
            {
              t = not_null(m_88);
              {
                ATerm t_88 = NULL;
                t = c_1(t);
                {
                  r_88 = t;
                  {
                    ATerm u_88 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_88)), not_null(p_88));
                    {
                      u_88 = t;
                      if(((t_88 != NULL) && (t_88 != u_88)))
                        _fail(u_88);
                      else
                        t_88 = u_88;
                    }
                    t = not_null(t_88);
                  }
                }
              }
            }
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            {
              ATerm z_88 = NULL,h_89 = NULL;
              ATerm c_89 = NULL;
              t = SSLgetAnnotations(not_null(l_88));
              {
                c_89 = t;
                if(((z_88 != NULL) && (z_88 != c_89)))
                  _fail(c_89);
                else
                  z_88 = c_89;
              }
              {
                t = not_null(m_88);
                {
                  ATerm j_89 = NULL;
                  t = c_1(t);
                  {
                    h_89 = t;
                    {
                      ATerm k_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_89)), not_null(z_88));
                      {
                        k_89 = t;
                        if(((j_89 != NULL) && (j_89 != k_89)))
                          _fail(k_89);
                        else
                          j_89 = k_89;
                      }
                      t = not_null(j_89);
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
ATerm DistBinding_2 (ATerm t, ATerm k_93 (ATerm), ATerm l_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm x_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL;
  x_89 = t;
  w_89 :
  if(match_cons(x_89, sym__3))
    {
      y_89 = ATgetArgument(x_89, 0);
      z_89 = ATgetArgument(x_89, 1);
      a_90 = ATgetArgument(x_89, 2);
      {
        t = not_null(y_89);
        {
          ATerm z_4 (ATerm t)
          {
            ATerm g_90 = NULL;
            g_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_90), not_null(a_90));
              t = k_93(t);
            }
            return(t);
          }
          ATerm a_5 (ATerm t)
          {
            ATerm i_90 = NULL;
            i_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_90), not_null(z_89));
              t = k_93(t);
            }
            return(t);
          }
          t = l_93(t, z_4, a_5, _id);
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
  ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL;
  p_90 = t;
  o_90 :
  if(match_cons(p_90, sym__2))
    {
      q_90 = ATgetArgument(p_90, 0);
      r_90 = ATgetArgument(p_90, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_90)), not_null(q_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL,n_91 = NULL;
  h_91 = t;
  e_91 :
  if(match_cons(h_91, sym__2))
    {
      i_91 = ATgetArgument(h_91, 0);
      l_91 = ATgetArgument(h_91, 1);
      f_91 :
      if(((ATgetType(i_91) == AT_LIST) && ((ATermList) i_91 != ATempty)))
        {
          j_91 = ATgetFirst((ATermList) i_91);
          k_91 = (ATerm) ATgetNext((ATermList) i_91);
          g_91 :
          if(((ATgetType(l_91) == AT_LIST) && ((ATermList) l_91 != ATempty)))
            {
              m_91 = ATgetFirst((ATermList) l_91);
              n_91 = (ATerm) ATgetNext((ATermList) l_91);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_91), not_null(m_91)), (ATerm) ATmakeAppl(sym__2, not_null(k_91), not_null(n_91)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm z_91 = NULL,a_92 = NULL,f_92 = NULL;
  z_91 = t;
  u_91 :
  if(match_cons(z_91, sym__2))
    {
      a_92 = ATgetArgument(z_91, 0);
      f_92 = ATgetArgument(z_91, 1);
      v_91 :
      if(((ATermList) a_92 == ATempty))
        {
          y_91 :
          if(((ATermList) f_92 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm f_111 (ATerm))
{
  ATerm h_92 (ATerm t)
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_111(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
          t = d_111(t);
          {
            t = _2(t, f_111, h_92);
            t = e_111(t);
          }
        }
      }
    return(t);
  }
  t = h_92(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm h_111 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, h_111);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm q_93 (ATerm), ATerm r_93 (ATerm, ATerm (ATerm)))
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL;
  p_92 = t;
  o_92 :
  if(match_cons(p_92, sym__2))
    {
      q_92 = ATgetArgument(p_92, 0);
      r_92 = ATgetArgument(p_92, 1);
      {
        ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL,c_93 = NULL;
        ATerm m_24;
        m_24 = t;
        {
          ATerm x_92 = NULL;
          t = not_null(q_92);
          {
            ATerm y_92 = NULL;
            t = q_93(t);
            {
              x_92 = t;
              {
                if(((u_92 != NULL) && (u_92 != x_92)))
                  _fail(x_92);
                else
                  u_92 = x_92;
                {
                  ATerm z_92 = NULL,b_93 = NULL;
                  t = map_1(t, new_0);
                  {
                    y_92 = t;
                    {
                      if(((v_92 != NULL) && (v_92 != y_92)))
                        _fail(y_92);
                      else
                        v_92 = y_92;
                      {
                        ATerm a_93 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_92), not_null(v_92));
                        {
                          t = zip_1(t, _id);
                          {
                            a_93 = t;
                            if(((z_92 != NULL) && (z_92 != a_93)))
                              _fail(a_93);
                            else
                              z_92 = a_93;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_92), not_null(r_92));
                          {
                            t = conc_0(t);
                            {
                              b_93 = t;
                              if(((w_92 != NULL) && (w_92 != b_93)))
                                _fail(b_93);
                              else
                                w_92 = b_93;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = m_24;
        {
          ATerm d_93 = NULL;
          t = not_null(q_92);
          {
            ATerm b_5 (ATerm t)
            {
              t = not_null(v_92);
              return(t);
            }
            t = r_93(t, b_5);
            {
              d_93 = t;
              if(((c_93 != NULL) && (c_93 != d_93)))
                _fail(d_93);
              else
                c_93 = d_93;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(c_93), not_null(r_92), not_null(w_92));
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
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL;
  c_94 = t;
  o_93 :
  if(match_cons(c_94, sym__2))
    {
      d_94 = ATgetArgument(c_94, 0);
      e_94 = ATgetArgument(c_94, 1);
      p_93 :
      if(((ATgetType(e_94) == AT_LIST) && ((ATermList) e_94 != ATempty)))
        {
          f_94 = ATgetFirst((ATermList) e_94);
          g_94 = (ATerm) ATgetNext((ATermList) e_94);
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_94), not_null(g_94));
        }
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
  ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL;
  o_94 = t;
  l_94 :
  if(match_cons(o_94, sym__2))
    {
      p_94 = ATgetArgument(o_94, 0);
      q_94 = ATgetArgument(o_94, 1);
      m_94 :
      if(((ATgetType(q_94) == AT_LIST) && ((ATermList) q_94 != ATempty)))
        {
          r_94 = ATgetFirst((ATermList) q_94);
          u_94 = (ATerm) ATgetNext((ATermList) q_94);
          n_94 :
          if(match_cons(r_94, sym__2))
            {
              s_94 = ATgetArgument(r_94, 0);
              t_94 = ATgetArgument(r_94, 1);
              {
                ATerm w_94 = NULL;
                if(((p_94 != NULL) && (p_94 != s_94)))
                  _fail(s_94);
                else
                  p_94 = s_94;
                {
                  if(((w_94 != NULL) && (w_94 != t_94)))
                    _fail(t_94);
                  else
                    w_94 = t_94;
                  t = not_null(w_94);
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
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm e_93 (ATerm, ATerm (ATerm)))
{
  ATerm b_95 = NULL,c_95 = NULL,d_95 = NULL;
  b_95 = t;
  a_95 :
  if(match_cons(b_95, sym__2))
    {
      c_95 = ATgetArgument(b_95, 0);
      d_95 = ATgetArgument(b_95, 1);
      {
        t = not_null(c_95);
        {
          ATerm c_5 (ATerm t)
          {
            ATerm d_5 (ATerm t)
            {
              t = not_null(d_95);
              return(t);
            }
            t = split_2(t, _id, d_5);
            t = lookup_0(t);
            return(t);
          }
          t = e_93(t, c_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm m_102 (ATerm))
{
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL;
  k_95 = t;
  j_95 :
  if(match_cons(k_95, sym__2))
    {
      l_95 = ATgetArgument(k_95, 0);
      m_95 = ATgetArgument(k_95, 1);
      {
        t = not_null(l_95);
        {
          ATerm e_5 (ATerm t)
          {
            ATerm p_95 = NULL;
            p_95 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_95), not_null(m_95));
              t = m_102(t);
            }
            return(t);
          }
          t = _all(t, e_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm r_102 (ATerm))
{
  ATerm z_95 (ATerm t)
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_102(t);
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        t = all_dist_1(t, z_95);
      }
    return(t);
  }
  t = z_95(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm s_93 (ATerm, ATerm (ATerm)), ATerm t_93 (ATerm), ATerm u_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_93 (ATerm, ATerm (ATerm)))
{
  ATerm b_96 = NULL;
  b_96 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_96), (ATerm) ATempty);
    {
      ATerm e_96 (ATerm t)
      {
        ATerm f_5 (ATerm t)
        {
          ATerm x_24 = t;
          int y_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, s_93);
              LocalPopChoice(y_24);
            }
          else
            {
              t = x_24;
              {
                t = RnBinding_2(t, t_93, v_93);
                t = DistBinding_2(t, e_96, u_93);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, f_5);
        return(t);
      }
      t = e_96(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm f_96 (ATerm t, ATerm g_96 (ATerm))
  {
    t = Scope_2(t, g_96, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, f_96);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL,l_96 = NULL;
  j_96 = t;
  i_96 :
  if(((ATgetType(j_96) == AT_LIST) && ((ATermList) j_96 != ATempty)))
    {
      k_96 = ATgetFirst((ATermList) j_96);
      l_96 = (ATerm) ATgetNext((ATermList) j_96);
      t = not_null(k_96);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL;
  r_96 = t;
  q_96 :
  if(match_cons(r_96, sym__2))
    {
      s_96 = ATgetArgument(r_96, 0);
      t_96 = ATgetArgument(r_96, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_96), not_null(t_96));
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
ATerm rewrite_1 (ATerm t, ATerm v_100 (ATerm))
{
  ATerm a_97 = NULL;
  ATerm c_97 = NULL;
  a_97 = t;
  {
    ATerm d_97 = NULL;
    t = term_z_24;
    {
      t = v_100(t);
      {
        d_97 = t;
        if(((c_97 != NULL) && (c_97 != d_97)))
          _fail(d_97);
        else
          c_97 = d_97;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_97), not_null(a_97));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL;
  r_97 = t;
  p_97 :
  if(match_cons(r_97, sym_Call_2))
    {
      s_97 = ATgetArgument(r_97, 0);
      u_97 = ATgetArgument(r_97, 1);
      q_97 :
      if(match_cons(s_97, sym_SVar_1))
        {
          t_97 = ATgetArgument(s_97, 0);
          {
            ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL,y_98 = NULL;
            ATerm a_25;
            a_25 = t;
            {
              ATerm b_98 = NULL,g_98 = NULL,h_98 = NULL,j_98 = NULL,k_98 = NULL;
              t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(t_97));
              {
                ATerm g_5 (ATerm t)
                {
                  t = term_e_25;
                  return(t);
                }
                t = rewrite_1(t, g_5);
                {
                  b_98 = t;
                  k_97 :
                  if(match_cons(b_98, sym_Defined_4))
                    {
                      g_98 = ATgetArgument(b_98, 0);
                      h_98 = ATgetArgument(b_98, 1);
                      j_98 = ATgetArgument(b_98, 2);
                      k_98 = ATgetArgument(b_98, 3);
                      l_97 :
                      if(match_string(g_98, "u_0"))
                        {
                          ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL,x_98 = NULL;
                          if(((t_97 != NULL) && (t_97 != h_98)))
                            _fail(h_98);
                          else
                            t_97 = h_98;
                          {
                            if(((x_97 != NULL) && (x_97 != j_98)))
                              _fail(j_98);
                            else
                              x_97 = j_98;
                            {
                              if(((y_97 != NULL) && (y_97 != k_98)))
                                _fail(k_98);
                              else
                                y_97 = k_98;
                              {
                                t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_97), not_null(x_97), not_null(y_97));
                                {
                                  t = strename_0(t);
                                  {
                                    q_98 = t;
                                    j_97 :
                                    if(match_cons(q_98, sym_SDef_3))
                                      {
                                        r_98 = ATgetArgument(q_98, 0);
                                        s_98 = ATgetArgument(q_98, 1);
                                        x_98 = ATgetArgument(q_98, 2);
                                        {
                                          if(((t_97 != NULL) && (t_97 != r_98)))
                                            _fail(r_98);
                                          else
                                            t_97 = r_98;
                                          {
                                            if(((z_97 != NULL) && (z_97 != s_98)))
                                              _fail(s_98);
                                            else
                                              z_97 = s_98;
                                            if(((a_98 != NULL) && (a_98 != x_98)))
                                              _fail(x_98);
                                            else
                                              a_98 = x_98;
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
                      else
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
            t = a_25;
            {
              ATerm d_99 = NULL;
              t = not_null(x_97);
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL;
                  z_98 = t;
                  n_97 :
                  if(match_cons(z_98, sym_VarDec_2))
                    {
                      a_99 = ATgetArgument(z_98, 0);
                      b_99 = ATgetArgument(z_98, 1);
                      t = not_null(a_99);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, h_5);
                {
                  d_99 = t;
                  if(((y_98 != NULL) && (y_98 != d_99)))
                    _fail(d_99);
                  else
                    y_98 = d_99;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(y_98), not_null(u_97), not_null(a_98));
                t = ssubs_0(t);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm check_that_try_is_try_0 (ATerm t)
{
  ATerm s_99 = NULL;
  ATerm h_25;
  h_25 = t;
  {
    ATerm t_99 = NULL;
    t = new_0(t);
    {
      t_99 = t;
      {
        if(((s_99 != NULL) && (s_99 != t_99)))
          _fail(t_99);
        else
          s_99 = t_99;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_t_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_99)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm j_5 (ATerm t)
                  {
                    t = term_u_25;
                    return(t);
                  }
                  t = say_1(t, j_5);
                  return(t);
                }
                t = if_verbose2_1(t, i_5);
                _fail(t);
              }
            }
          {
            ATerm d_26 = t;
            int e_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_99 = NULL,v_99 = NULL,w_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL;
                u_99 = t;
                n_99 :
                if(match_cons(u_99, sym_LChoice_2))
                  {
                    v_99 = ATgetArgument(u_99, 0);
                    b_100 = ATgetArgument(u_99, 1);
                    o_99 :
                    if(match_cons(v_99, sym_Call_2))
                      {
                        w_99 = ATgetArgument(v_99, 0);
                        a_100 = ATgetArgument(v_99, 1);
                        p_99 :
                        if(match_cons(w_99, sym_SVar_1))
                          {
                            z_99 = ATgetArgument(w_99, 0);
                            q_99 :
                            if(((ATermList) a_100 == ATempty))
                              {
                                r_99 :
                                if(match_cons(b_100, sym_Id_0))
                                  {
                                    if(((s_99 != NULL) && (s_99 != z_99)))
                                      _fail(z_99);
                                    else
                                      s_99 = z_99;
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(e_26);
              }
            else
              {
                t = d_26;
                {
                  ATerm k_5 (ATerm t)
                  {
                    ATerm l_5 (ATerm t)
                    {
                      t = term_g_26;
                      return(t);
                    }
                    t = debug_1(t, l_5);
                    return(t);
                  }
                  t = if_verbose1_1(t, k_5);
                  _fail(t);
                }
              }
            {
              ATerm m_5 (ATerm t)
              {
                ATerm n_5 (ATerm t)
                {
                  t = term_h_26;
                  return(t);
                }
                t = say_1(t, n_5);
                return(t);
              }
              t = if_verbose2_1(t, m_5);
            }
          }
        }
      }
    }
  }
  t = h_25;
  return(t);
}
ATerm check_library_definitions_0 (ATerm t)
{
  t = check_that_try_is_try_0(t);
  {
    t = check_that_innermost_is_innermost_0(t);
    t = check_that_bottomup_is_bottomup_0(t);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm t_100 (ATerm))
{
  ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL;
  j_100 = t;
  i_100 :
  if(match_cons(j_100, sym__2))
    {
      k_100 = ATgetArgument(j_100, 0);
      l_100 = ATgetArgument(j_100, 1);
      {
        ATerm o_100 = NULL,u_100 = NULL,w_100 = NULL;
        ATerm i_26;
        i_26 = t;
        {
          ATerm x_100 = NULL;
          ATerm y_100 = NULL,z_100 = NULL,a_101 = NULL;
          t = t_100(t);
          {
            x_100 = t;
            {
              if(((o_100 != NULL) && (o_100 != x_100)))
                _fail(x_100);
              else
                o_100 = x_100;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_100), not_null(k_100), not_null(l_100));
                {
                  t = table_push_0(t);
                  {
                    ATerm l_26 = t;
                    int q_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_100), term_p_16);
                        t = table_get_0(t);
                        LocalPopChoice(q_26);
                      }
                    else
                      {
                        t = l_26;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      y_100 = t;
                      h_100 :
                      if(((ATgetType(y_100) == AT_LIST) && ((ATermList) y_100 != ATempty)))
                        {
                          z_100 = ATgetFirst((ATermList) y_100);
                          a_101 = (ATerm) ATgetNext((ATermList) y_100);
                          {
                            if(((u_100 != NULL) && (u_100 != z_100)))
                              _fail(z_100);
                            else
                              u_100 = z_100;
                            {
                              if(((w_100 != NULL) && (w_100 != a_101)))
                                _fail(a_101);
                              else
                                w_100 = a_101;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_100), term_p_16, (ATerm) ATinsert(CheckATermList(not_null(w_100)), (ATerm) ATinsert(CheckATermList(not_null(u_100)), not_null(k_100))));
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
        t = i_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declare_inline_rule_0 (ATerm t)
{
  ATerm g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL;
  g_101 = t;
  f_101 :
  if(match_cons(g_101, sym_SDef_3))
    {
      h_101 = ATgetArgument(g_101, 0);
      i_101 = ATgetArgument(g_101, 1);
      j_101 = ATgetArgument(g_101, 2);
      {
        ATerm r_26;
        r_26 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_101)), (ATerm) ATmakeAppl(sym_Defined_4, term_s_26, not_null(h_101), not_null(i_101), not_null(j_101)));
          {
            ATerm o_5 (ATerm t)
            {
              t = term_e_25;
              return(t);
            }
            t = assert_1(t, o_5);
          }
        }
        t = r_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm n_86 (ATerm))
{
  ATerm t_101 = NULL,u_101 = NULL;
  t_101 = t;
  s_101 :
  if(match_cons(t_101, sym_Strategies_1))
    {
      u_101 = ATgetArgument(t_101, 0);
      {
        ATerm x_101 = NULL,z_101 = NULL;
        ATerm y_101 = NULL;
        t = SSLgetAnnotations(not_null(t_101));
        {
          y_101 = t;
          if(((x_101 != NULL) && (x_101 != y_101)))
            _fail(y_101);
          else
            x_101 = y_101;
        }
        {
          t = not_null(u_101);
          {
            ATerm b_102 = NULL;
            t = n_86(t);
            {
              z_101 = t;
              {
                ATerm c_102 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_101)), not_null(x_101));
                {
                  c_102 = t;
                  if(((b_102 != NULL) && (b_102 != c_102)))
                    _fail(c_102);
                  else
                    b_102 = c_102;
                }
                t = not_null(b_102);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm n_102 = NULL,o_102 = NULL;
  n_102 = t;
  l_102 :
  if(match_cons(n_102, sym_Signature_1))
    {
      o_102 = ATgetArgument(n_102, 0);
      {
        ATerm t_102 = NULL,v_102 = NULL;
        ATerm u_102 = NULL;
        t = SSLgetAnnotations(not_null(n_102));
        {
          u_102 = t;
          if(((t_102 != NULL) && (t_102 != u_102)))
            _fail(u_102);
          else
            t_102 = u_102;
        }
        {
          t = not_null(o_102);
          {
            ATerm x_102 = NULL;
            t = k_86(t);
            {
              v_102 = t;
              {
                ATerm y_102 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(v_102)), not_null(t_102));
                {
                  y_102 = t;
                  if(((x_102 != NULL) && (x_102 != y_102)))
                    _fail(y_102);
                  else
                    x_102 = y_102;
                }
                t = not_null(x_102);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm p_86 (ATerm))
{
  ATerm i_103 = NULL,j_103 = NULL;
  i_103 = t;
  h_103 :
  if(match_cons(i_103, sym_Specification_1))
    {
      j_103 = ATgetArgument(i_103, 0);
      {
        ATerm o_103 = NULL,q_103 = NULL;
        ATerm p_103 = NULL;
        t = SSLgetAnnotations(not_null(i_103));
        {
          p_103 = t;
          if(((o_103 != NULL) && (o_103 != p_103)))
            _fail(p_103);
          else
            o_103 = p_103;
        }
        {
          t = not_null(j_103);
          {
            ATerm s_103 = NULL;
            t = p_86(t);
            {
              q_103 = t;
              {
                ATerm t_103 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(q_103)), not_null(o_103));
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
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declare_inline_rules_0 (ATerm t)
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
        ATerm t_5 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, t_5);
        return(t);
      }
      t = Cons_2(t, s_5, Nil_0);
      return(t);
    }
    t = Cons_2(t, q_5, r_5);
    return(t);
  }
  t = Specification_1(t, p_5);
  return(t);
}
ATerm _2 (ATerm t, ATerm d_77 (ATerm), ATerm e_77 (ATerm))
{
  ATerm e_104 = NULL,f_104 = NULL,g_104 = NULL;
  e_104 = t;
  d_104 :
  if(match_cons(e_104, sym__2))
    {
      f_104 = ATgetArgument(e_104, 0);
      g_104 = ATgetArgument(e_104, 1);
      {
        ATerm k_104 = NULL,m_104 = NULL;
        ATerm l_104 = NULL;
        t = SSLgetAnnotations(not_null(e_104));
        {
          l_104 = t;
          if(((k_104 != NULL) && (k_104 != l_104)))
            _fail(l_104);
          else
            k_104 = l_104;
        }
        {
          t = not_null(f_104);
          {
            ATerm o_104 = NULL;
            t = d_77(t);
            {
              m_104 = t;
              {
                t = not_null(g_104);
                {
                  ATerm q_104 = NULL;
                  t = e_77(t);
                  {
                    o_104 = t;
                    {
                      ATerm r_104 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_104), not_null(o_104)), not_null(k_104));
                      {
                        r_104 = t;
                        if(((q_104 != NULL) && (q_104 != r_104)))
                          _fail(r_104);
                        else
                          q_104 = r_104;
                      }
                      t = not_null(q_104);
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
  ATerm z_104 = NULL;
  ATerm t_26;
  t_26 = t;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm a_105 = NULL,b_105 = NULL;
      a_105 = t;
      y_104 :
      if(match_cons(a_105, sym_Program_1))
        {
          b_105 = ATgetArgument(a_105, 0);
          if(((z_104 != NULL) && (z_104 != b_105)))
            _fail(b_105);
          else
            z_104 = b_105;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, u_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_26), not_null(z_104)), term_u_26));
      {
        t = printnl_0(t);
        {
          t = term_w_26;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_26;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm f_105 = NULL,g_105 = NULL,h_105 = NULL;
  f_105 = t;
  e_105 :
  if(match_cons(f_105, sym__2))
    {
      g_105 = ATgetArgument(f_105, 0);
      h_105 = ATgetArgument(f_105, 1);
      {
        ATerm x_26;
        x_26 = t;
        t = SSL_printnl(not_null(g_105), not_null(h_105));
        t = x_26;
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
  ATerm q_105 = NULL;
  q_105 = t;
  t = SSL_implode_string(not_null(q_105));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_27);
    }
  else
    {
      t = c_27;
      {
        ATerm v_105 = NULL,w_105 = NULL,x_105 = NULL;
        v_105 = t;
        u_105 :
        if(((ATgetType(v_105) == AT_LIST) && ((ATermList) v_105 != ATempty)))
          {
            w_105 = ATgetFirst((ATermList) v_105);
            x_105 = (ATerm) ATgetNext((ATermList) v_105);
            {
              t = not_null(w_105);
              {
                ATerm v_5 (ATerm t)
                {
                  t = not_null(x_105);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_5);
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
  ATerm n_106 = NULL;
  ATerm p_106 = NULL;
  n_106 = t;
  {
    ATerm q_106 = NULL;
    ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
    t = not_null(n_106);
    {
      q_106 = t;
      {
        t = SSL_explode_term(not_null(q_106));
        {
          s_106 = t;
          l_106 :
          if(match_cons(s_106, sym__2))
            {
              t_106 = ATgetArgument(s_106, 0);
              u_106 = ATgetArgument(s_106, 1);
              m_106 :
              if(match_string(t_106, ""))
                {
                  if(((p_106 != NULL) && (p_106 != u_106)))
                    _fail(u_106);
                  else
                    p_106 = u_106;
                }
              else
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
      t = not_null(p_106);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_113 (ATerm))
{
  ATerm y_106 (ATerm t)
  {
    ATerm e_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_106);
        LocalPopChoice(i_27);
      }
    else
      {
        t = e_27;
        {
          t = Nil_0(t);
          t = f_113(t);
        }
      }
    return(t);
  }
  t = y_106(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_107 = NULL,h_107 = NULL,i_107 = NULL;
  g_107 = t;
  f_107 :
  if(match_cons(g_107, sym__2))
    {
      h_107 = ATgetArgument(g_107, 0);
      i_107 = ATgetArgument(g_107, 1);
      {
        t = not_null(h_107);
        {
          ATerm w_5 (ATerm t)
          {
            t = not_null(i_107);
            return(t);
          }
          t = at_end_1(t, w_5);
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
  ATerm k_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = k_27;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_107 = NULL;
  n_107 = t;
  t = SSL_explode_string(not_null(n_107));
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
ATerm debug_1 (ATerm t, ATerm x_99 (ATerm))
{
  ATerm o_27;
  o_27 = t;
  {
    ATerm s_107 = NULL,u_107 = NULL;
    ATerm p_27;
    p_27 = t;
    {
      ATerm t_107 = NULL;
      t = x_99(t);
      {
        t_107 = t;
        if(((s_107 != NULL) && (s_107 != t_107)))
          _fail(t_107);
        else
          s_107 = t_107;
      }
    }
    t = p_27;
    {
      ATerm v_107 = NULL;
      v_107 = t;
      if(((u_107 != NULL) && (u_107 != v_107)))
        _fail(v_107);
      else
        u_107 = v_107;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_107)), not_null(s_107)));
        t = printnl_0(t);
      }
    }
  }
  t = o_27;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_107 = NULL;
  z_107 = t;
  t = SSL_is_string(not_null(z_107));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, x_5);
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            {
              ATerm p_108 = NULL,q_108 = NULL,r_108 = NULL;
              p_108 = t;
              o_108 :
              if(match_cons(p_108, sym_Path_1))
                {
                  q_108 = ATgetArgument(p_108, 0);
                  t = not_null(q_108);
                }
              else
                {
                  if(match_cons(p_108, sym_Var_1))
                    {
                      q_108 = ATgetArgument(p_108, 0);
                      {
                        t = not_null(q_108);
                        {
                          ATerm u_27 = t;
                          int v_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_27);
                            }
                          else
                            {
                              t = u_27;
                              {
                                ATerm y_5 (ATerm t)
                                {
                                  t = term_w_27;
                                  return(t);
                                }
                                t = debug_1(t, y_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(p_108, sym_Prefix_2))
                        {
                          q_108 = ATgetArgument(p_108, 0);
                          r_108 = ATgetArgument(p_108, 1);
                          {
                            ATerm b_109 = NULL,d_109 = NULL;
                            ATerm x_27;
                            x_27 = t;
                            {
                              ATerm c_109 = NULL;
                              t = not_null(q_108);
                              {
                                t = eval_config_0(t);
                                {
                                  c_109 = t;
                                  if(((b_109 != NULL) && (b_109 != c_109)))
                                    _fail(c_109);
                                  else
                                    b_109 = c_109;
                                }
                              }
                            }
                            t = x_27;
                            {
                              ATerm e_109 = NULL;
                              t = not_null(r_108);
                              {
                                t = eval_config_0(t);
                                {
                                  e_109 = t;
                                  if(((d_109 != NULL) && (d_109 != e_109)))
                                    _fail(e_109);
                                  else
                                    d_109 = e_109;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_109), not_null(d_109));
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
  ATerm m_109 = NULL;
  m_109 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_28, not_null(m_109));
    {
      t = table_get_0(t);
      {
        ATerm z_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_28;
            e_28 = t;
            {
              ATerm o_109 = NULL;
              ATerm p_109 = NULL;
              p_109 = t;
              if(((o_109 != NULL) && (o_109 != p_109)))
                _fail(p_109);
              else
                o_109 = p_109;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_d_28, not_null(m_109), not_null(o_109));
                t = table_put_0(t);
              }
            }
            t = e_28;
          }
          return(t);
        }
        t = try_1(t, z_5);
      }
    }
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL;
  u_109 = t;
  t_109 :
  if(match_cons(u_109, sym__2))
    {
      v_109 = ATgetArgument(u_109, 0);
      w_109 = ATgetArgument(u_109, 1);
      t = SSL_WriteToTextFile(not_null(v_109), not_null(w_109));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm c_110 = NULL,d_110 = NULL,e_110 = NULL;
  c_110 = t;
  b_110 :
  if(match_cons(c_110, sym__2))
    {
      d_110 = ATgetArgument(c_110, 0);
      e_110 = ATgetArgument(c_110, 1);
      t = SSL_WriteToBinaryFile(not_null(d_110), not_null(e_110));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm m_110 = NULL;
  ATerm f_28;
  f_28 = t;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm g_28 = t;
      int k_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_6 (ATerm t)
          {
            ATerm n_110 = NULL,o_110 = NULL;
            n_110 = t;
            j_110 :
            if(match_cons(n_110, sym_Output_1))
              {
                o_110 = ATgetArgument(n_110, 0);
                if(((m_110 != NULL) && (m_110 != o_110)))
                  _fail(o_110);
                else
                  m_110 = o_110;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, b_6);
          LocalPopChoice(k_28);
        }
      else
        {
          t = g_28;
          {
            ATerm p_110 = NULL;
            t = term_m_28;
            {
              p_110 = t;
              if(((m_110 != NULL) && (m_110 != p_110)))
                _fail(p_110);
              else
                m_110 = p_110;
            }
          }
        }
      return(t);
    }
    t = _2(t, a_6, _id);
  }
  t = f_28;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm d_6 (ATerm t)
      {
        t = not_null(m_110);
        return(t);
      }
      t = split_2(t, d_6, _id);
      return(t);
    }
    t = _2(t, _id, c_6);
    {
      ATerm o_28 = t;
      int r_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_6 (ATerm t)
          {
            ATerm f_6 (ATerm t)
            {
              ATerm q_110 = NULL;
              q_110 = t;
              l_110 :
              if(!(match_cons(q_110, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, f_6);
            return(t);
          }
          t = _2(t, e_6, WriteToBinaryFile_0);
          LocalPopChoice(r_28);
        }
      else
        {
          t = o_28;
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
ATerm apply_strategy_1 (ATerm t, ATerm h_99 (ATerm))
{
  ATerm w_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL;
  ATerm s_28;
  s_28 = t;
  t = dtime_0(t);
  t = s_28;
  {
    t = h_99(t);
    {
      ATerm t_28;
      t_28 = t;
      {
        ATerm x_110 = NULL;
        t = dtime_0(t);
        {
          x_110 = t;
          if(((w_110 != NULL) && (w_110 != x_110)))
            _fail(x_110);
          else
            w_110 = x_110;
        }
      }
      t = t_28;
      {
        y_110 = t;
        v_110 :
        if(match_cons(y_110, sym__2))
          {
            z_110 = ATgetArgument(y_110, 0);
            a_111 = ATgetArgument(y_110, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_110)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(w_110))), not_null(a_111));
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
  ATerm n_111 = NULL;
  n_111 = t;
  t = SSL_ReadFromFile(not_null(n_111));
  return(t);
}
ATerm split_2 (ATerm t, ATerm m_114 (ATerm), ATerm n_114 (ATerm))
{
  ATerm s_111 = NULL,u_111 = NULL;
  ATerm u_28;
  u_28 = t;
  {
    ATerm t_111 = NULL;
    t = m_114(t);
    {
      t_111 = t;
      if(((s_111 != NULL) && (s_111 != t_111)))
        _fail(t_111);
      else
        s_111 = t_111;
    }
  }
  t = u_28;
  {
    ATerm v_111 = NULL;
    t = n_114(t);
    {
      v_111 = t;
      if(((u_111 != NULL) && (u_111 != v_111)))
        _fail(v_111);
      else
        u_111 = v_111;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_111), not_null(u_111));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_112 = NULL;
  ATerm v_28;
  v_28 = t;
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_6 (ATerm t)
        {
          ATerm c_112 = NULL,d_112 = NULL;
          c_112 = t;
          z_111 :
          if(match_cons(c_112, sym_Input_1))
            {
              d_112 = ATgetArgument(c_112, 0);
              if(((b_112 != NULL) && (b_112 != d_112)))
                _fail(d_112);
              else
                b_112 = d_112;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, g_6);
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        {
          ATerm e_112 = NULL;
          t = term_y_28;
          {
            e_112 = t;
            if(((b_112 != NULL) && (b_112 != e_112)))
              _fail(e_112);
            else
              b_112 = e_112;
          }
        }
      }
  }
  t = v_28;
  {
    ATerm h_6 (ATerm t)
    {
      t = not_null(b_112);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_6);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_112 = NULL;
  i_112 = t;
  t = SSL_string_to_int(not_null(i_112));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL,w_112 = NULL;
  s_112 = t;
  o_112 :
  if(match_string(s_112, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_112) == AT_LIST) && ((ATermList) s_112 != ATempty)))
        {
          t_112 = ATgetFirst((ATermList) s_112);
          u_112 = (ATerm) ATgetNext((ATermList) s_112);
          p_112 :
          if(((ATgetType(u_112) == AT_LIST) && ((ATermList) u_112 != ATempty)))
            {
              v_112 = ATgetFirst((ATermList) u_112);
              w_112 = (ATerm) ATgetNext((ATermList) u_112);
              {
                ATerm c_113 = NULL;
                ATerm g_29;
                g_29 = t;
                {
                  t = not_null(t_112);
                  t = j_0(t);
                }
                t = g_29;
                {
                  ATerm d_113 = NULL;
                  t = not_null(v_112);
                  {
                    t = k_0(t);
                    {
                      d_113 = t;
                      if(((c_113 != NULL) && (c_113 != d_113)))
                        _fail(d_113);
                      else
                        c_113 = d_113;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_112)), not_null(c_113));
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
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_6 (ATerm t)
      {
        ATerm y_113 = NULL;
        y_113 = t;
        j_113 :
        if(!(match_string(y_113, "-i")))
          {
            if(!(match_string(y_113, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_6 (ATerm t)
      {
        ATerm b_114 = NULL;
        ATerm j_29;
        j_29 = t;
        {
          ATerm z_113 = NULL;
          ATerm a_114 = NULL;
          a_114 = t;
          if(((z_113 != NULL) && (z_113 != a_114)))
            _fail(a_114);
          else
            z_113 = a_114;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_k_29, not_null(z_113));
            t = set_config_0(t);
          }
        }
        t = j_29;
        {
          ATerm c_114 = NULL;
          c_114 = t;
          if(((b_114 != NULL) && (b_114 != c_114)))
            _fail(c_114);
          else
            b_114 = c_114;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_114));
        }
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        t = term_l_29;
        return(t);
      }
      t = ArgOption_3(t, i_6, j_6, k_6);
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 (ATerm t)
            {
              ATerm d_114 = NULL;
              d_114 = t;
              m_113 :
              if(!(match_string(d_114, "-o")))
                {
                  if(!(match_string(d_114, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm m_6 (ATerm t)
            {
              ATerm g_114 = NULL;
              ATerm p_29;
              p_29 = t;
              {
                ATerm e_114 = NULL;
                ATerm f_114 = NULL;
                f_114 = t;
                if(((e_114 != NULL) && (e_114 != f_114)))
                  _fail(f_114);
                else
                  e_114 = f_114;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_29, not_null(e_114));
                  t = set_config_0(t);
                }
              }
              t = p_29;
              {
                ATerm h_114 = NULL;
                h_114 = t;
                if(((g_114 != NULL) && (g_114 != h_114)))
                  _fail(h_114);
                else
                  g_114 = h_114;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_114));
              }
              return(t);
            }
            ATerm n_6 (ATerm t)
            {
              t = term_r_29;
              return(t);
            }
            t = ArgOption_3(t, l_6, m_6, n_6);
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            {
              ATerm u_29 = t;
              int v_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_6 (ATerm t)
                  {
                    ATerm j_114 = NULL;
                    j_114 = t;
                    p_113 :
                    if(!(match_string(j_114, "-S")))
                      {
                        if(!(match_string(j_114, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm p_6 (ATerm t)
                  {
                    t = term_b_30;
                    t = set_config_0(t);
                    t = term_c_30;
                    return(t);
                  }
                  ATerm s_6 (ATerm t)
                  {
                    t = term_k_30;
                    return(t);
                  }
                  t = Option_3(t, o_6, p_6, s_6);
                  LocalPopChoice(v_29);
                }
              else
                {
                  t = u_29;
                  {
                    ATerm l_30 = t;
                    int m_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_6 (ATerm t)
                        {
                          ATerm k_114 = NULL;
                          k_114 = t;
                          q_113 :
                          if(!(match_string(k_114, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm u_6 (ATerm t)
                        {
                          ATerm p_114 = NULL;
                          ATerm n_30;
                          n_30 = t;
                          {
                            ATerm l_114 = NULL;
                            ATerm o_114 = NULL;
                            t = string_to_int_0(t);
                            {
                              o_114 = t;
                              if(((l_114 != NULL) && (l_114 != o_114)))
                                _fail(o_114);
                              else
                                l_114 = o_114;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_c_10, not_null(l_114));
                              t = set_config_0(t);
                            }
                          }
                          t = n_30;
                          {
                            ATerm q_114 = NULL;
                            q_114 = t;
                            if(((p_114 != NULL) && (p_114 != q_114)))
                              _fail(q_114);
                            else
                              p_114 = q_114;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_114));
                          }
                          return(t);
                        }
                        ATerm v_6 (ATerm t)
                        {
                          t = term_o_30;
                          return(t);
                        }
                        t = ArgOption_3(t, t_6, u_6, v_6);
                        LocalPopChoice(m_30);
                      }
                    else
                      {
                        t = l_30;
                        {
                          ATerm p_30 = t;
                          int q_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_6 (ATerm t)
                              {
                                ATerm r_114 = NULL;
                                r_114 = t;
                                t_113 :
                                if(!(match_string(r_114, "-k")))
                                  {
                                    if(!(match_string(r_114, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm x_6 (ATerm t)
                              {
                                ATerm r_30;
                                r_30 = t;
                                {
                                  ATerm s_114 = NULL;
                                  ATerm t_114 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    t_114 = t;
                                    if(((s_114 != NULL) && (s_114 != t_114)))
                                      _fail(t_114);
                                    else
                                      s_114 = t_114;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_s_30, not_null(s_114));
                                    t = set_config_0(t);
                                  }
                                }
                                t = r_30;
                                return(t);
                              }
                              ATerm y_6 (ATerm t)
                              {
                                t = term_t_30;
                                return(t);
                              }
                              t = ArgOption_3(t, w_6, x_6, y_6);
                              LocalPopChoice(q_30);
                            }
                          else
                            {
                              t = p_30;
                              {
                                ATerm u_30 = t;
                                int v_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_6 (ATerm t)
                                    {
                                      ATerm u_114 = NULL;
                                      u_114 = t;
                                      v_113 :
                                      if(!(match_string(u_114, "-v")))
                                        {
                                          if(!(match_string(u_114, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm a_7 (ATerm t)
                                    {
                                      t = term_x_30;
                                      t = set_config_0(t);
                                      t = term_y_30;
                                      return(t);
                                    }
                                    ATerm b_7 (ATerm t)
                                    {
                                      t = term_z_30;
                                      return(t);
                                    }
                                    t = Option_3(t, z_6, a_7, b_7);
                                    LocalPopChoice(v_30);
                                  }
                                else
                                  {
                                    t = u_30;
                                    {
                                      ATerm a_31 = t;
                                      int b_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_7 (ATerm t)
                                          {
                                            ATerm v_114 = NULL;
                                            v_114 = t;
                                            w_113 :
                                            if(!(match_string(v_114, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm d_7 (ATerm t)
                                          {
                                            t = term_d_31;
                                            t = set_config_0(t);
                                            t = term_e_31;
                                            return(t);
                                          }
                                          ATerm e_7 (ATerm t)
                                          {
                                            t = term_f_31;
                                            return(t);
                                          }
                                          t = Option_3(t, c_7, d_7, e_7);
                                          LocalPopChoice(b_31);
                                        }
                                      else
                                        {
                                          t = a_31;
                                          {
                                            ATerm f_7 (ATerm t)
                                            {
                                              ATerm w_114 = NULL;
                                              w_114 = t;
                                              x_113 :
                                              if(!(match_string(w_114, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm g_7 (ATerm t)
                                            {
                                              t = term_h_31;
                                              t = set_config_0(t);
                                              t = term_i_31;
                                              return(t);
                                            }
                                            ATerm j_7 (ATerm t)
                                            {
                                              t = term_g_32;
                                              return(t);
                                            }
                                            t = Option_3(t, f_7, g_7, j_7);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATempty, term_h_32));
  {
    t = printnl_0(t);
    {
      t = term_w_26;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm g_115 = NULL;
  g_115 = t;
  t = SSL_TicksToSeconds(not_null(g_115));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL;
  l_115 = t;
  k_115 :
  if(match_cons(l_115, sym__2))
    {
      m_115 = ATgetArgument(l_115, 0);
      n_115 = ATgetArgument(l_115, 1);
      {
        ATerm i_32 = t;
        int j_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(m_115), not_null(n_115));
            LocalPopChoice(j_32);
          }
        else
          {
            t = i_32;
            t = SSL_addr(not_null(m_115), not_null(n_115));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_107 (ATerm), ATerm b_107 (ATerm))
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_107(t);
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      {
        ATerm y_115 = NULL,z_115 = NULL,a_116 = NULL;
        y_115 = t;
        x_115 :
        if(((ATgetType(y_115) == AT_LIST) && ((ATermList) y_115 != ATempty)))
          {
            z_115 = ATgetFirst((ATermList) y_115);
            a_116 = (ATerm) ATgetNext((ATermList) y_115);
            {
              ATerm d_116 = NULL;
              ATerm e_116 = NULL;
              t = not_null(a_116);
              {
                t = foldr_2(t, a_107, b_107);
                {
                  e_116 = t;
                  if(((d_116 != NULL) && (d_116 != e_116)))
                    _fail(e_116);
                  else
                    d_116 = e_116;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_115), not_null(d_116));
                t = b_107(t);
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
ATerm crush_2 (ATerm t, ATerm s_108 (ATerm), ATerm t_108 (ATerm))
{
  ATerm l_116 = NULL;
  ATerm n_116 = NULL;
  l_116 = t;
  {
    ATerm o_116 = NULL;
    ATerm q_116 = NULL,r_116 = NULL,s_116 = NULL;
    t = not_null(l_116);
    {
      o_116 = t;
      {
        t = SSL_explode_term(not_null(o_116));
        {
          q_116 = t;
          k_116 :
          if(match_cons(q_116, sym__2))
            {
              r_116 = ATgetArgument(q_116, 0);
              s_116 = ATgetArgument(q_116, 1);
              if(((n_116 != NULL) && (n_116 != s_116)))
                _fail(s_116);
              else
                n_116 = s_116;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_116);
      t = foldr_2(t, s_108, t_108);
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
    ATerm k_7 (ATerm t)
    {
      t = term_a_30;
      return(t);
    }
    t = crush_2(t, k_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_116 = NULL,z_116 = NULL,a_117 = NULL;
  y_116 = t;
  x_116 :
  if(match_cons(y_116, sym__2))
    {
      z_116 = ATgetArgument(y_116, 0);
      a_117 = ATgetArgument(y_116, 1);
      {
        ATerm m_32;
        m_32 = t;
        {
          ATerm n_32 = t;
          int o_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_116), not_null(a_117));
              LocalPopChoice(o_32);
            }
          else
            {
              t = n_32;
              t = SSL_gtr(not_null(z_116), not_null(a_117));
            }
        }
        t = m_32;
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
  ATerm g_117 = NULL;
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_117 = NULL,i_117 = NULL,l_117 = NULL;
      h_117 = t;
      f_117 :
      if(match_cons(h_117, sym__2))
        {
          i_117 = ATgetArgument(h_117, 0);
          l_117 = ATgetArgument(h_117, 1);
          {
            if(((g_117 != NULL) && (g_117 != i_117)))
              _fail(i_117);
            else
              g_117 = i_117;
            if(((g_117 != NULL) && (g_117 != l_117)))
              _fail(l_117);
            else
              g_117 = l_117;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm b_90 (ATerm))
{
  ATerm l_7 (ATerm t)
  {
    ATerm r_32;
    r_32 = t;
    {
      ATerm o_117 = NULL;
      ATerm p_117 = NULL;
      t = term_c_10;
      {
        t = get_config_0(t);
        {
          p_117 = t;
          if(((o_117 != NULL) && (o_117 != p_117)))
            _fail(p_117);
          else
            o_117 = p_117;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_117), term_w_26);
        t = geq_0(t);
      }
    }
    t = r_32;
    t = b_90(t);
    return(t);
  }
  t = try_1(t, l_7);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm t_117 = NULL,v_117 = NULL;
    ATerm t_32;
    t_32 = t;
    {
      ATerm u_117 = NULL;
      t = run_time_0(t);
      {
        u_117 = t;
        if(((t_117 != NULL) && (t_117 != u_117)))
          _fail(u_117);
        else
          t_117 = u_117;
      }
    }
    t = t_32;
    {
      ATerm w_117 = NULL;
      t = term_w_32;
      {
        t = get_config_0(t);
        {
          w_117 = t;
          if(((v_117 != NULL) && (v_117 != w_117)))
            _fail(w_117);
          else
            v_117 = w_117;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_32), not_null(t_117)), term_x_32), not_null(v_117)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, m_7);
  {
    t = term_a_30;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_118 = NULL;
  f_118 = t;
  e_118 :
  if(match_cons(f_118, sym_Version_0))
    {
      ATerm h_118 = NULL,j_118 = NULL;
      ATerm z_32;
      z_32 = t;
      {
        ATerm i_118 = NULL;
        t = SSLgetAnnotations(not_null(f_118));
        {
          i_118 = t;
          if(((h_118 != NULL) && (h_118 != i_118)))
            _fail(i_118);
          else
            h_118 = i_118;
        }
      }
      t = z_32;
      {
        ATerm k_118 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_118));
        {
          k_118 = t;
          if(((j_118 != NULL) && (j_118 != k_118)))
            _fail(k_118);
          else
            j_118 = k_118;
        }
        t = not_null(j_118);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_99 (ATerm))
{
  ATerm n_7 (ATerm t)
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        {
          ATerm c_33 = t;
          int d_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_7);
  t = f_99(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_118 = NULL;
  p_118 = t;
  t = SSL_table_create(not_null(p_118));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_118 = NULL;
  t_118 = t;
  {
    ATerm e_33;
    e_33 = t;
    {
      t = term_f_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_33, term_g_33, not_null(t_118));
          t = table_put_0(t);
        }
      }
    }
    t = e_33;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm y_118 = NULL;
  y_118 = t;
  t = SSL_table_destroy(not_null(y_118));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_119 = NULL;
  c_119 = t;
  t = SSL_exit(not_null(c_119));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_119 = NULL,h_119 = NULL,i_119 = NULL;
  g_119 = t;
  f_119 :
  if(((ATermList) g_119 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_119) == AT_LIST) && ((ATermList) g_119 != ATempty)))
        {
          h_119 = ATgetFirst((ATermList) g_119);
          i_119 = (ATerm) ATgetNext((ATermList) g_119);
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
  ATerm h_33;
  h_33 = t;
  {
    ATerm l_119 = NULL;
    ATerm o_119 = NULL;
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        {
          ATerm m_119 = NULL;
          ATerm n_119 = NULL;
          n_119 = t;
          if(((m_119 != NULL) && (m_119 != n_119)))
            _fail(n_119);
          else
            m_119 = n_119;
          t = (ATerm) ATinsert(ATempty, not_null(m_119));
        }
      }
    {
      o_119 = t;
      if(((l_119 != NULL) && (l_119 != o_119)))
        _fail(o_119);
      else
        l_119 = o_119;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_28, not_null(l_119));
      t = printnl_0(t);
    }
  }
  t = h_33;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_112 (ATerm))
{
  ATerm r_119 (ATerm t)
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        t = Cons_2(t, q_112, r_119);
      }
    return(t);
  }
  t = r_119(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL;
  a_120 = t;
  x_119 :
  if(((ATgetType(a_120) == AT_LIST) && ((ATermList) a_120 != ATempty)))
    {
      y_119 = ATgetFirst((ATermList) a_120);
      z_119 = (ATerm) ATgetNext((ATermList) a_120);
      {
        ATerm d_120 = NULL;
        t = not_null(z_119);
        {
          ATerm m_33;
          m_33 = t;
          {
            ATerm e_120 = NULL,g_120 = NULL,i_120 = NULL;
            ATerm n_33;
            n_33 = t;
            {
              ATerm f_120 = NULL;
              t = i_0(t);
              {
                f_120 = t;
                if(((e_120 != NULL) && (e_120 != f_120)))
                  _fail(f_120);
                else
                  e_120 = f_120;
              }
            }
            t = n_33;
            {
              ATerm h_120 = NULL;
              t = not_null(y_119);
              {
                t = h_0(t);
                {
                  h_120 = t;
                  if(((g_120 != NULL) && (g_120 != h_120)))
                    _fail(h_120);
                  else
                    g_120 = h_120;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_120)), not_null(g_120));
                {
                  i_120 = t;
                  if(((d_120 != NULL) && (d_120 != i_120)))
                    _fail(i_120);
                  else
                    d_120 = i_120;
                }
              }
            }
          }
          t = m_33;
          {
            ATerm o_7 (ATerm t)
            {
              t = not_null(d_120);
              return(t);
            }
            t = reverse_acc_2(t, h_0, o_7);
          }
        }
      }
    }
  else
    {
      if(((ATermList) a_120 == ATempty))
        {
          {
            t = term_z_24;
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
  ATerm p_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_78 (ATerm))
{
  ATerm t_120 = NULL,u_120 = NULL;
  t_120 = t;
  s_120 :
  if(match_cons(t_120, sym_Program_1))
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
            t = r_78(t);
            {
              z_120 = t;
              {
                ATerm c_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_120)), not_null(x_120));
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
ATerm system_usage_0 (ATerm t)
{
  ATerm l_121 = NULL;
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_121 = NULL;
      t = term_w_32;
      {
        t = get_config_0(t);
        {
          m_121 = t;
          if(((l_121 != NULL) && (l_121 != m_121)))
            _fail(m_121);
          else
            l_121 = m_121;
        }
      }
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
      {
        ATerm q_7 (ATerm t)
        {
          ATerm r_7 (ATerm t)
          {
            ATerm n_121 = NULL;
            n_121 = t;
            if(((l_121 != NULL) && (l_121 != n_121)))
              _fail(n_121);
            else
              l_121 = n_121;
            return(t);
          }
          t = Program_1(t, r_7);
          return(t);
        }
        t = option_defined_1(t, q_7);
      }
    }
  {
    ATerm s_7 (ATerm t)
    {
      ATerm t_7 (ATerm t)
      {
        t = not_null(l_121);
        return(t);
      }
      t = short_description_1(t, t_7);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, s_7);
    {
      t = term_q_33;
      {
        t = echo_0(t);
        {
          t = term_t_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm u_7 (ATerm t)
                {
                  ATerm o_121 = NULL;
                  ATerm p_121 = NULL;
                  p_121 = t;
                  if(((o_121 != NULL) && (o_121 != p_121)))
                    _fail(p_121);
                  else
                    o_121 = p_121;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_121)), term_u_33);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, u_7);
                {
                  ATerm v_7 (ATerm t)
                  {
                    ATerm q_121 = NULL;
                    ATerm r_121 = NULL;
                    ATerm w_7 (ATerm t)
                    {
                      t = not_null(l_121);
                      return(t);
                    }
                    t = long_description_1(t, w_7);
                    {
                      r_121 = t;
                      if(((q_121 != NULL) && (q_121 != r_121)))
                        _fail(r_121);
                      else
                        q_121 = r_121;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(q_121)), term_v_33);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_7);
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
ATerm Undefined_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm b_122 = NULL,c_122 = NULL;
  b_122 = t;
  a_122 :
  if(match_cons(b_122, sym_Undefined_1))
    {
      c_122 = ATgetArgument(b_122, 0);
      {
        ATerm f_122 = NULL,h_122 = NULL;
        ATerm g_122 = NULL;
        t = SSLgetAnnotations(not_null(b_122));
        {
          g_122 = t;
          if(((f_122 != NULL) && (f_122 != g_122)))
            _fail(g_122);
          else
            f_122 = g_122;
        }
        {
          t = not_null(c_122);
          {
            ATerm j_122 = NULL;
            t = s_78(t);
            {
              h_122 = t;
              {
                ATerm k_122 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(h_122)), not_null(f_122));
                {
                  k_122 = t;
                  if(((j_122 != NULL) && (j_122 != k_122)))
                    _fail(k_122);
                  else
                    j_122 = k_122;
                }
                t = not_null(j_122);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm z_112 (ATerm))
{
  ATerm p_122 (ATerm t)
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_112, _id);
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = Cons_2(t, _id, p_122);
      }
    return(t);
  }
  t = p_122(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_96 (ATerm))
{
  t = fetch_1(t, y_96);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_122 = NULL;
  u_122 = t;
  t_122 :
  if(match_cons(u_122, sym_Help_0))
    {
      ATerm x_122 = NULL,z_122 = NULL;
      ATerm y_33;
      y_33 = t;
      {
        ATerm y_122 = NULL;
        t = SSLgetAnnotations(not_null(u_122));
        {
          y_122 = t;
          if(((x_122 != NULL) && (x_122 != y_122)))
            _fail(y_122);
          else
            x_122 = y_122;
        }
      }
      t = y_33;
      {
        ATerm a_123 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_122));
        {
          a_123 = t;
          if(((z_122 != NULL) && (z_122 != a_123)))
            _fail(a_123);
          else
            z_122 = a_123;
        }
        t = not_null(z_122);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_115 (ATerm))
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_115(t);
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_123 = NULL,h_123 = NULL,i_123 = NULL;
  g_123 = t;
  f_123 :
  if(match_cons(g_123, sym__2))
    {
      h_123 = ATgetArgument(g_123, 0);
      i_123 = ATgetArgument(g_123, 1);
      t = SSL_table_get(not_null(h_123), not_null(i_123));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_123 = NULL,r_123 = NULL,s_123 = NULL,t_123 = NULL;
  q_123 = t;
  p_123 :
  if(match_cons(q_123, sym__3))
    {
      r_123 = ATgetArgument(q_123, 0);
      s_123 = ATgetArgument(q_123, 1);
      t_123 = ATgetArgument(q_123, 2);
      {
        ATerm b_34;
        b_34 = t;
        {
          ATerm x_123 = NULL;
          ATerm y_123 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_123), not_null(s_123));
          {
            ATerm c_34 = t;
            int d_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_34);
              }
            else
              {
                t = c_34;
                t = (ATerm) ATempty;
              }
            {
              y_123 = t;
              if(((x_123 != NULL) && (x_123 != y_123)))
                _fail(y_123);
              else
                x_123 = y_123;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_123), not_null(s_123), (ATerm) ATinsert(CheckATermList(not_null(x_123)), not_null(t_123)));
            t = table_put_0(t);
          }
        }
        t = b_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_95 (ATerm))
{
  ATerm c_124 = NULL;
  ATerm d_124 = NULL;
  t = term_z_24;
  {
    t = y_95(t);
    {
      d_124 = t;
      if(((c_124 != NULL) && (c_124 != d_124)))
        _fail(d_124);
      else
        c_124 = d_124;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_r_33, term_s_33, not_null(c_124));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm j_124 = NULL,k_124 = NULL,l_124 = NULL;
  j_124 = t;
  i_124 :
  if(match_string(j_124, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(j_124) == AT_LIST) && ((ATermList) j_124 != ATempty)))
        {
          k_124 = ATgetFirst((ATermList) j_124);
          l_124 = (ATerm) ATgetNext((ATermList) j_124);
          {
            ATerm o_124 = NULL;
            ATerm e_34;
            e_34 = t;
            {
              t = not_null(k_124);
              t = a_0(t);
            }
            t = e_34;
            {
              ATerm p_124 = NULL;
              t = term_z_24;
              {
                t = b_0(t);
                {
                  p_124 = t;
                  if(((o_124 != NULL) && (o_124 != p_124)))
                    _fail(p_124);
                  else
                    o_124 = p_124;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_124)), not_null(o_124));
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
  ATerm x_7 (ATerm t)
  {
    ATerm u_124 = NULL;
    u_124 = t;
    t_124 :
    if(!(match_string(u_124, "--help")))
      {
        if(!(match_string(u_124, "-h")))
          {
            if(!(match_string(u_124, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_7 (ATerm t)
  {
    t = term_g_34;
    {
      t = set_config_0(t);
      t = term_h_34;
    }
    return(t);
  }
  ATerm z_7 (ATerm t)
  {
    t = term_i_34;
    return(t);
  }
  t = Option_3(t, x_7, y_7, z_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_124 = NULL,y_124 = NULL,z_124 = NULL;
  x_124 = t;
  w_124 :
  if(((ATgetType(x_124) == AT_LIST) && ((ATermList) x_124 != ATempty)))
    {
      y_124 = ATgetFirst((ATermList) x_124);
      z_124 = (ATerm) ATgetNext((ATermList) x_124);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_124)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_124)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_89 (ATerm), ATerm g_89 (ATerm))
{
  ATerm j_125 = NULL,k_125 = NULL,l_125 = NULL;
  j_125 = t;
  i_125 :
  if(((ATgetType(j_125) == AT_LIST) && ((ATermList) j_125 != ATempty)))
    {
      k_125 = ATgetFirst((ATermList) j_125);
      l_125 = (ATerm) ATgetNext((ATermList) j_125);
      {
        ATerm p_125 = NULL,r_125 = NULL;
        ATerm q_125 = NULL;
        t = SSLgetAnnotations(not_null(j_125));
        {
          q_125 = t;
          if(((p_125 != NULL) && (p_125 != q_125)))
            _fail(q_125);
          else
            p_125 = q_125;
        }
        {
          t = not_null(k_125);
          {
            ATerm t_125 = NULL;
            t = f_89(t);
            {
              r_125 = t;
              {
                t = not_null(l_125);
                {
                  ATerm v_125 = NULL;
                  t = g_89(t);
                  {
                    t_125 = t;
                    {
                      ATerm w_125 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_125)), not_null(r_125)), not_null(p_125));
                      {
                        w_125 = t;
                        if(((v_125 != NULL) && (v_125 != w_125)))
                          _fail(w_125);
                        else
                          v_125 = w_125;
                      }
                      t = not_null(v_125);
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
  ATerm g_126 = NULL;
  g_126 = t;
  f_126 :
  if(((ATermList) g_126 == ATempty))
    {
      {
        ATerm i_126 = NULL,k_126 = NULL;
        ATerm j_34;
        j_34 = t;
        {
          ATerm j_126 = NULL;
          t = SSLgetAnnotations(not_null(g_126));
          {
            j_126 = t;
            if(((i_126 != NULL) && (i_126 != j_126)))
              _fail(j_126);
            else
              i_126 = j_126;
          }
        }
        t = j_34;
        {
          ATerm l_126 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_126));
          {
            l_126 = t;
            if(((k_126 != NULL) && (k_126 != l_126)))
              _fail(l_126);
            else
              k_126 = l_126;
          }
          t = not_null(k_126);
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
  ATerm r_126 = NULL,s_126 = NULL,t_126 = NULL;
  r_126 = t;
  q_126 :
  if(match_cons(r_126, sym__2))
    {
      s_126 = ATgetArgument(r_126, 0);
      t_126 = ATgetArgument(r_126, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_28, not_null(s_126), not_null(t_126));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_95 (ATerm))
{
  ATerm k_34;
  k_34 = t;
  {
    ATerm a_8 (ATerm t)
    {
      t = term_l_34;
      t = w_95(t);
      return(t);
    }
    t = try_1(t, a_8);
  }
  t = k_34;
  {
    ATerm b_8 (ATerm t)
    {
      ATerm b_127 = NULL;
      ATerm m_34;
      m_34 = t;
      {
        ATerm z_126 = NULL;
        ATerm a_127 = NULL;
        a_127 = t;
        if(((z_126 != NULL) && (z_126 != a_127)))
          _fail(a_127);
        else
          z_126 = a_127;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_32, not_null(z_126));
          t = set_config_0(t);
        }
      }
      t = m_34;
      {
        ATerm c_127 = NULL;
        c_127 = t;
        if(((b_127 != NULL) && (b_127 != c_127)))
          _fail(c_127);
        else
          b_127 = c_127;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_127));
      }
      return(t);
    }
    ATerm c_8 (ATerm t)
    {
      ATerm n_34 = t;
      int o_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_34 = t;
          int q_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_34);
            }
          else
            {
              t = p_34;
              {
                t = w_95(t);
                t = Cons_2(t, _id, c_8);
              }
            }
          LocalPopChoice(o_34);
        }
      else
        {
          t = n_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_8, c_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_127 = NULL,j_127 = NULL,k_127 = NULL;
  ATerm r_34;
  r_34 = t;
  {
    ATerm l_127 = NULL,m_127 = NULL,n_127 = NULL,o_127 = NULL;
    l_127 = t;
    h_127 :
    if(match_cons(l_127, sym__3))
      {
        m_127 = ATgetArgument(l_127, 0);
        n_127 = ATgetArgument(l_127, 1);
        o_127 = ATgetArgument(l_127, 2);
        {
          if(((i_127 != NULL) && (i_127 != m_127)))
            _fail(m_127);
          else
            i_127 = m_127;
          {
            if(((j_127 != NULL) && (j_127 != n_127)))
              _fail(n_127);
            else
              j_127 = n_127;
            {
              if(((k_127 != NULL) && (k_127 != o_127)))
                _fail(o_127);
              else
                k_127 = o_127;
              t = SSL_table_put(not_null(i_127), not_null(j_127), not_null(k_127));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_95 (ATerm))
{
  ATerm r_127 = NULL;
  ATerm s_34;
  s_34 = t;
  {
    t = term_t_34;
    t = table_put_0(t);
  }
  t = s_34;
  {
    ATerm d_8 (ATerm t)
    {
      ATerm u_34 = t;
      int v_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_95(t);
          LocalPopChoice(v_34);
        }
      else
        {
          t = u_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_8);
    {
      ATerm e_8 (ATerm t)
      {
        ATerm w_34 = t;
        int x_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_34;
            y_34 = t;
            {
              ATerm z_34 = t;
              int a_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_f_34;
                  t = get_config_0(t);
                  LocalPopChoice(a_35);
                }
              else
                {
                  t = z_34;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = y_34;
            {
              t = system_usage_0(t);
              {
                t = term_a_30;
                t = exit_0(t);
              }
            }
            LocalPopChoice(x_34);
          }
        else
          {
            t = w_34;
            {
              ATerm f_8 (ATerm t)
              {
                ATerm h_8 (ATerm t)
                {
                  ATerm s_127 = NULL;
                  s_127 = t;
                  if(((r_127 != NULL) && (r_127 != s_127)))
                    _fail(s_127);
                  else
                    r_127 = s_127;
                  return(t);
                }
                t = Undefined_1(t, h_8);
                return(t);
              }
              t = option_defined_1(t, f_8);
              {
                ATerm i_8 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_127)), term_b_35);
                  return(t);
                }
                t = say_1(t, i_8);
                {
                  t = system_usage_0(t);
                  {
                    t = term_w_26;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_8);
      {
        ATerm c_35;
        c_35 = t;
        {
          t = term_r_33;
          t = table_destroy_0(t);
        }
        t = c_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm))
{
  t = parse_options_1(t, c_98);
  {
    t = store_options_0(t);
    {
      t = e_98(t);
      {
        ATerm d_35 = t;
        int e_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_98);
            LocalPopChoice(e_35);
          }
        else
          {
            t = d_35;
            {
              ATerm f_35 = t;
              int g_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_98(t);
                  t = report_success_0(t);
                  LocalPopChoice(g_35);
                }
              else
                {
                  t = f_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm))
{
  ATerm j_8 (ATerm t)
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_98(t);
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm k_8 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, t_98);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, j_8, v_98, w_98, k_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm p_98 (ATerm))
{
  ATerm m_8 (ATerm t)
  {
    ATerm r_8 (ATerm t)
    {
      ATerm j_35;
      j_35 = t;
      {
        ATerm v_127 = NULL;
        ATerm w_127 = NULL;
        t = term_w_32;
        {
          t = get_config_0(t);
          {
            w_127 = t;
            if(((v_127 != NULL) && (v_127 != w_127)))
              _fail(w_127);
            else
              v_127 = w_127;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATempty, not_null(v_127)));
          t = printnl_0(t);
        }
      }
      t = j_35;
      return(t);
    }
    t = if_verbose2_1(t, r_8);
    return(t);
  }
  t = iowrap_4(t, n_98, o_98, p_98, m_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_98 (ATerm), ATerm m_98 (ATerm))
{
  t = iowrap_3(t, l_98, m_98, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm s_8 (ATerm t)
  {
    t = _2(t, _id, i_98);
    return(t);
  }
  t = iowrap_2(t, s_8, _fail);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm b_9 (ATerm t)
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        {
          ATerm l_9 (ATerm t)
          {
            ATerm x_9 (ATerm t)
            {
              t = term_m_35;
              return(t);
            }
            t = say_1(t, x_9);
            return(t);
          }
          t = if_verbose2_1(t, l_9);
        }
      }
    return(t);
  }
  t = iowrap_1(t, b_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_0(t);
  return(t);
}
