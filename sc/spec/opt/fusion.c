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
Symbol sym_Mark_0;
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
  sym_Mark_0 = ATmakeSymbol("Mark", 0, ATfalse);
  ATprotectSymbol(sym_Mark_0);
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
ATerm term_e_39;
ATerm term_h_38;
ATerm term_x_37;
ATerm term_q_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_r_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_z_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_b_30;
ATerm term_r_29;
ATerm term_p_29;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_y_27;
ATerm term_r_27;
ATerm term_p_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_z_26;
ATerm term_x_26;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_b_22;
ATerm term_v_21;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_d_17;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_k_15;
ATerm term_c_15;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_l_10;
ATerm term_c_10;
ATerm term_f_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_i_8;
void init_constant_terms (void)
{
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Op_2, term_l_12, (ATerm) ATempty);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Call_2, term_k_15, (ATerm) ATempty);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Dummy_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Match_1, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Where_1, term_v_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Build_1, term_v_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_15, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_w_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_u_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_w_15, term_y_15);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_u_15, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_LChoice_2, term_v_15, term_v_15);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Choice_2, term_v_15, term_v_15);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("v_1", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_27);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__2, term_i_31, term_x_26);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__2, term_o_8, term_r_31);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__2, term_a_32, term_x_26);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_x_26);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, term_s_34, term_t_34);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_i_36, term_x_26);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym__3, term_s_34, term_t_34, (ATerm) ATempty);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm w_111 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm s_121 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm v_85 (ATerm), ATerm w_85 (ATerm));
ATerm Prim_2 (ATerm, ATerm s_81 (ATerm), ATerm t_81 (ATerm));
ATerm Explode_2 (ATerm, ATerm r_85 (ATerm), ATerm s_85 (ATerm));
ATerm Op_2 (ATerm, ATerm w_83 (ATerm), ATerm x_83 (ATerm));
ATerm pat_td_1 (ATerm, ATerm j_120 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm g_100 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm y_105 (ATerm), ATerm z_105 (ATerm));
ATerm repeat_1 (ATerm, ATerm b_106 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm l_85 (ATerm), ATerm m_85 (ATerm));
ATerm Con_3 (ATerm, ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm w_94 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm g_93 (ATerm));
ATerm desugar_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm l_111 (ATerm));
ATerm restore_always_2 (ATerm, ATerm u_96 (ATerm), ATerm v_96 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm k_111 (ATerm));
ATerm scope_2 (ATerm, ATerm m_111 (ATerm), ATerm n_111 (ATerm));
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
ATerm bottomup_1 (ATerm, ATerm h_93 (ATerm));
ATerm innermost_1 (ATerm, ATerm m_108 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm x_81 (ATerm));
ATerm Seq_2 (ATerm, ATerm n_82 (ATerm), ATerm o_82 (ATerm));
ATerm Match_1 (ATerm, ATerm w_81 (ATerm));
ATerm LChoice_2 (ATerm, ATerm r_82 (ATerm), ATerm s_82 (ATerm));
ATerm Choice_2 (ATerm, ATerm p_82 (ATerm), ATerm q_82 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm k_95 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm h_118 (ATerm), ATerm i_118 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm s_117 (ATerm), ATerm t_117 (ATerm));
ATerm substitute_1 (ATerm, ATerm u_117 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm g_121 (ATerm));
ATerm Rec_2 (ATerm, ATerm c_83 (ATerm), ATerm d_83 (ATerm));
ATerm SDef_3 (ATerm, ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm));
ATerm Let_2 (ATerm, ATerm e_83 (ATerm), ATerm f_83 (ATerm));
ATerm sboundin_3 (ATerm, ATerm h_121 (ATerm), ATerm i_121 (ATerm), ATerm j_121 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm b_83 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm c_121 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm g_85 (ATerm));
ATerm Scope_2 (ATerm, ATerm a_82 (ATerm), ATerm b_82 (ATerm));
ATerm tboundin_3 (ATerm, ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm f_121 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm s_103 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm n_104 (ATerm));
ATerm crush_3 (ATerm, ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm l_103 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm w_103 (ATerm), ATerm x_103 (ATerm));
ATerm diff_1 (ATerm, ATerm o_103 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm p_106 (ATerm), ATerm q_106 (ATerm));
ATerm for_3 (ATerm, ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm b_120 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm u_118 (ATerm), ATerm v_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm z_99 (ATerm));
ATerm zip_1 (ATerm, ATerm b_100 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm o_118 (ATerm), ATerm p_118 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm z_118 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm n_109 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm x_108 (ATerm));
ATerm rename_4 (ATerm, ATerm j_118 (ATerm, ATerm (ATerm)), ATerm k_118 (ATerm), ATerm l_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_118 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm q_111 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm o_111 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm k_84 (ATerm));
ATerm Signature_1 (ATerm, ATerm h_84 (ATerm));
ATerm Specification_1 (ATerm, ATerm m_84 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm h_80 (ATerm), ATerm i_80 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_98 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_111 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_112 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_96 (ATerm), ATerm z_96 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm j_104 (ATerm), ATerm k_104 (ATerm));
ATerm crush_2 (ATerm, ATerm h_103 (ATerm), ATerm i_103 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_121 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_112 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_116 (ATerm));
ATerm map_1 (ATerm, ATerm v_97 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_116 (ATerm));
ATerm Program_1 (ATerm, ATerm e_92 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_92 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_98 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_115 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_96 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_116 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_81 (ATerm), ATerm r_81 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_116 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_116 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm));
ATerm iowrap_4 (ATerm, ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm q_113 (ATerm));
ATerm iowrap_2 (ATerm, ATerm m_113 (ATerm), ATerm n_113 (ATerm));
ATerm iowrap_1 (ATerm, ATerm j_113 (ATerm));
ATerm fusion_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm h_8;
  h_8 = t;
  {
    ATerm w_1 = NULL;
    ATerm q_6 = NULL;
    q_6 = t;
    if(((w_1 != NULL) && (w_1 != q_6)))
      _fail(q_6);
    else
      w_1 = q_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATempty, not_null(w_1)));
      t = printnl_0(t);
    }
  }
  t = h_8;
  return(t);
}
ATerm say_1 (ATerm t, ATerm w_111 (ATerm))
{
  ATerm k_8;
  k_8 = t;
  {
    t = w_111(t);
    t = debug_0(t);
  }
  t = k_8;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm s_121 (ATerm))
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_8;
      n_8 = t;
      {
        ATerm g_7 = NULL;
        ATerm h_7 = NULL;
        t = term_o_8;
        {
          t = get_config_0(t);
          {
            h_7 = t;
            if(((g_7 != NULL) && (g_7 != h_7)))
              _fail(h_7);
            else
              g_7 = h_7;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), term_q_8);
          t = geq_0(t);
        }
      }
      t = n_8;
      t = s_121(t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      {
      }
    }
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  t_8 = t;
  r_8 :
  if(match_cons(t_8, sym_ExplodeCong_2))
    {
      u_8 = ATgetArgument(t_8, 0);
      s_8 = ATgetArgument(t_8, 1);
      {
        ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
        ATerm b_9 = NULL;
        ATerm c_9 = NULL;
        t = new_0(t);
        {
          b_9 = t;
          {
            if(((x_8 != NULL) && (x_8 != b_9)))
              _fail(b_9);
            else
              x_8 = b_9;
            {
              ATerm d_9 = NULL;
              t = new_0(t);
              {
                c_9 = t;
                {
                  if(((y_8 != NULL) && (y_8 != c_9)))
                    _fail(c_9);
                  else
                    y_8 = c_9;
                  {
                    ATerm e_9 = NULL;
                    t = new_0(t);
                    {
                      d_9 = t;
                      {
                        if(((z_8 != NULL) && (z_8 != d_9)))
                          _fail(d_9);
                        else
                          z_8 = d_9;
                        {
                          t = new_0(t);
                          {
                            e_9 = t;
                            if(((a_9 != NULL) && (a_9 != e_9)))
                              _fail(e_9);
                            else
                              a_9 = e_9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_9)), not_null(z_8)), not_null(y_8)), not_null(x_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_8)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(u_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_8))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_v_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_8)))))));
      }
    }
  else
    {
      if(match_cons(t_8, sym_Build_1))
        {
          u_8 = ATgetArgument(t_8, 0);
          {
            ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
            ATerm k_9 = NULL;
            ATerm o_9 = NULL;
            t = new_0(t);
            {
              k_9 = t;
              {
                if(((i_9 != NULL) && (i_9 != k_9)))
                  _fail(k_9);
                else
                  i_9 = k_9;
                {
                  t = not_null(u_8);
                  {
                    ATerm c_0 (ATerm t)
                    {
                      ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL;
                      l_9 = t;
                      j_8 :
                      if(match_cons(l_9, sym_Explode_2))
                        {
                          m_9 = ATgetArgument(l_9, 0);
                          n_9 = ATgetArgument(l_9, 1);
                          {
                            if(((g_9 != NULL) && (g_9 != m_9)))
                              _fail(m_9);
                            else
                              g_9 = m_9;
                            {
                              if(((h_9 != NULL) && (h_9 != n_9)))
                                _fail(n_9);
                              else
                                h_9 = n_9;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_9));
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
                      o_9 = t;
                      if(((j_9 != NULL) && (j_9 != o_9)))
                        _fail(o_9);
                      else
                        j_9 = o_9;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_9)), not_null(g_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_9))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_9)))));
          }
        }
      else
        {
          if(match_cons(t_8, sym_Match_1))
            {
              u_8 = ATgetArgument(t_8, 0);
              {
                ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
                ATerm v_9 = NULL;
                ATerm w_9 = NULL;
                t = new_0(t);
                {
                  v_9 = t;
                  {
                    if(((s_9 != NULL) && (s_9 != v_9)))
                      _fail(v_9);
                    else
                      s_9 = v_9;
                    {
                      ATerm a_10 = NULL;
                      t = new_0(t);
                      {
                        w_9 = t;
                        {
                          if(((t_9 != NULL) && (t_9 != w_9)))
                            _fail(w_9);
                          else
                            t_9 = w_9;
                          {
                            t = not_null(u_8);
                            {
                              ATerm e_0 (ATerm t)
                              {
                                ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
                                x_9 = t;
                                p_8 :
                                if(match_cons(x_9, sym_Explode_2))
                                  {
                                    y_9 = ATgetArgument(x_9, 0);
                                    z_9 = ATgetArgument(x_9, 1);
                                    {
                                      if(((q_9 != NULL) && (q_9 != y_9)))
                                        _fail(y_9);
                                      else
                                        q_9 = y_9;
                                      {
                                        if(((r_9 != NULL) && (r_9 != z_9)))
                                          _fail(z_9);
                                        else
                                          r_9 = z_9;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_9));
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
                                a_10 = t;
                                if(((u_9 != NULL) && (u_9 != a_10)))
                                  _fail(a_10);
                                else
                                  u_9 = a_10;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_9)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_9))), (ATerm) ATmakeAppl(sym_Prim_2, term_w_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_9)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_9)), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_9)), not_null(q_9)))))));
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
  ATerm f_11 = NULL,g_11 = NULL;
  f_11 = t;
  e_11 :
  if(match_cons(f_11, sym_Match_1))
    {
      g_11 = ATgetArgument(f_11, 0);
      {
        ATerm p_9 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
            ATerm m_11 = NULL;
            ATerm q_11 = NULL;
            t = new_0(t);
            {
              m_11 = t;
              {
                if(((k_11 != NULL) && (k_11 != m_11)))
                  _fail(m_11);
                else
                  k_11 = m_11;
                {
                  t = not_null(g_11);
                  {
                    ATerm r_0 (ATerm t)
                    {
                      ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
                      n_11 = t;
                      u_10 :
                      if(match_cons(n_11, sym_Anno_2))
                        {
                          o_11 = ATgetArgument(n_11, 0);
                          p_11 = ATgetArgument(n_11, 1);
                          {
                            if(((i_11 != NULL) && (i_11 != o_11)))
                              _fail(o_11);
                            else
                              i_11 = o_11;
                            {
                              if(((j_11 != NULL) && (j_11 != p_11)))
                                _fail(p_11);
                              else
                                j_11 = p_11;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_11)), not_null(i_11));
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
                      q_11 = t;
                      if(((l_11 != NULL) && (l_11 != q_11)))
                        _fail(q_11);
                      else
                        l_11 = q_11;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_11)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_11))))));
            LocalPopChoice(b_10);
          }
        else
          {
            t = p_9;
            {
              ATerm d_10 = t;
              int e_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
                  ATerm v_11 = NULL;
                  ATerm y_11 = NULL;
                  t = new_0(t);
                  {
                    v_11 = t;
                    {
                      if(((t_11 != NULL) && (t_11 != v_11)))
                        _fail(v_11);
                      else
                        t_11 = v_11;
                      {
                        t = not_null(g_11);
                        {
                          ATerm t_0 (ATerm t)
                          {
                            ATerm w_11 = NULL,x_11 = NULL;
                            w_11 = t;
                            y_10 :
                            if(match_cons(w_11, sym_RootApp_1))
                              {
                                x_11 = ATgetArgument(w_11, 0);
                                {
                                  if(((s_11 != NULL) && (s_11 != x_11)))
                                    _fail(x_11);
                                  else
                                    s_11 = x_11;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_11));
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
                            y_11 = t;
                            if(((u_11 != NULL) && (u_11 != y_11)))
                              _fail(y_11);
                            else
                              u_11 = y_11;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_11))), not_null(s_11))));
                  LocalPopChoice(e_10);
                }
              else
                {
                  t = d_10;
                  {
                    ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
                    ATerm e_12 = NULL;
                    ATerm i_12 = NULL;
                    t = new_0(t);
                    {
                      e_12 = t;
                      {
                        if(((c_12 != NULL) && (c_12 != e_12)))
                          _fail(e_12);
                        else
                          c_12 = e_12;
                        {
                          t = not_null(g_11);
                          {
                            ATerm u_0 (ATerm t)
                            {
                              ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
                              f_12 = t;
                              c_11 :
                              if(match_cons(f_12, sym_App_2))
                                {
                                  g_12 = ATgetArgument(f_12, 0);
                                  h_12 = ATgetArgument(f_12, 1);
                                  {
                                    if(((b_12 != NULL) && (b_12 != g_12)))
                                      _fail(g_12);
                                    else
                                      b_12 = g_12;
                                    {
                                      if(((a_12 != NULL) && (a_12 != h_12)))
                                        _fail(h_12);
                                      else
                                        a_12 = h_12;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_12));
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
                              i_12 = t;
                              if(((d_12 != NULL) && (d_12 != i_12)))
                                _fail(i_12);
                              else
                                d_12 = i_12;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_12))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_12)), not_null(b_12)))));
                  }
                }
            }
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
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
  z_12 = t;
  x_12 :
  if(match_cons(z_12, sym_Match_1))
    {
      a_13 = ATgetArgument(z_12, 0);
      y_12 :
      if(match_cons(a_13, sym_RootApp_1))
        {
          b_13 = ATgetArgument(a_13, 0);
          t = not_null(b_13);
        }
      else
        {
          if(match_cons(a_13, sym_App_2))
            {
              b_13 = ATgetArgument(a_13, 0);
              c_13 = ATgetArgument(a_13, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(b_13), not_null(c_13));
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
  ATerm o_13 = NULL,p_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym_Match_1))
    {
      p_13 = ATgetArgument(o_13, 0);
      {
        ATerm r_13 = NULL,s_13 = NULL;
        ATerm w_13 = NULL;
        t = not_null(p_13);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
            t_13 = t;
            k_13 :
            if(match_cons(t_13, sym_RootApp_1))
              {
                u_13 = ATgetArgument(t_13, 0);
                l_13 :
                if(match_cons(u_13, sym_Match_1))
                  {
                    v_13 = ATgetArgument(u_13, 0);
                    {
                      if(((r_13 != NULL) && (r_13 != v_13)))
                        _fail(v_13);
                      else
                        r_13 = v_13;
                      t = not_null(r_13);
                    }
                  }
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
          t = pat_td_1(t, w_0);
          {
            w_13 = t;
            if(((s_13 != NULL) && (s_13 != w_13)))
              _fail(w_13);
            else
              s_13 = w_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(s_13));
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
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym_Build_1))
    {
      r_14 = ATgetArgument(q_14, 0);
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
            ATerm x_14 = NULL;
            ATerm b_15 = NULL;
            t = new_0(t);
            {
              x_14 = t;
              {
                if(((v_14 != NULL) && (v_14 != x_14)))
                  _fail(x_14);
                else
                  v_14 = x_14;
                {
                  t = not_null(r_14);
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
                      y_14 = t;
                      f_14 :
                      if(match_cons(y_14, sym_Anno_2))
                        {
                          z_14 = ATgetArgument(y_14, 0);
                          a_15 = ATgetArgument(y_14, 1);
                          {
                            if(((t_14 != NULL) && (t_14 != z_14)))
                              _fail(z_14);
                            else
                              t_14 = z_14;
                            {
                              if(((u_14 != NULL) && (u_14 != a_15)))
                                _fail(a_15);
                              else
                                u_14 = a_15;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_14));
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
                      b_15 = t;
                      if(((w_14 != NULL) && (w_14 != b_15)))
                        _fail(b_15);
                      else
                        w_14 = b_15;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_14)), not_null(t_14))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_14))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_14))));
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
                  ATerm g_15 = NULL;
                  ATerm j_15 = NULL;
                  t = new_0(t);
                  {
                    g_15 = t;
                    {
                      if(((e_15 != NULL) && (e_15 != g_15)))
                        _fail(g_15);
                      else
                        e_15 = g_15;
                      {
                        t = not_null(r_14);
                        {
                          ATerm y_0 (ATerm t)
                          {
                            ATerm h_15 = NULL,i_15 = NULL;
                            h_15 = t;
                            j_14 :
                            if(match_cons(h_15, sym_RootApp_1))
                              {
                                i_15 = ATgetArgument(h_15, 0);
                                {
                                  if(((d_15 != NULL) && (d_15 != i_15)))
                                    _fail(i_15);
                                  else
                                    d_15 = i_15;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_15));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, y_0);
                          {
                            j_15 = t;
                            if(((f_15 != NULL) && (f_15 != j_15)))
                              _fail(j_15);
                            else
                              f_15 = j_15;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_15), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_15))));
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  {
                    ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
                    ATerm p_15 = NULL;
                    ATerm t_15 = NULL;
                    t = new_0(t);
                    {
                      p_15 = t;
                      {
                        if(((n_15 != NULL) && (n_15 != p_15)))
                          _fail(p_15);
                        else
                          n_15 = p_15;
                        {
                          t = not_null(r_14);
                          {
                            ATerm z_0 (ATerm t)
                            {
                              ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
                              q_15 = t;
                              n_14 :
                              if(match_cons(q_15, sym_App_2))
                                {
                                  r_15 = ATgetArgument(q_15, 0);
                                  s_15 = ATgetArgument(q_15, 1);
                                  {
                                    if(((l_15 != NULL) && (l_15 != r_15)))
                                      _fail(r_15);
                                    else
                                      l_15 = r_15;
                                    {
                                      if(((m_15 != NULL) && (m_15 != s_15)))
                                        _fail(s_15);
                                      else
                                        m_15 = s_15;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_15));
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
                              t_15 = t;
                              if(((o_15 != NULL) && (o_15 != t_15)))
                                _fail(t_15);
                              else
                                o_15 = t_15;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(l_15), not_null(m_15), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_15)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_15))));
                  }
                }
            }
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
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  k_16 = t;
  i_16 :
  if(match_cons(k_16, sym_Build_1))
    {
      l_16 = ATgetArgument(k_16, 0);
      j_16 :
      if(match_cons(l_16, sym_RootApp_1))
        {
          m_16 = ATgetArgument(l_16, 0);
          t = not_null(m_16);
        }
      else
        {
          if(match_cons(l_16, sym_App_2))
            {
              m_16 = ATgetArgument(l_16, 0);
              n_16 = ATgetArgument(l_16, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_16)), not_null(m_16));
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
ATerm As_2 (ATerm t, ATerm v_85 (ATerm), ATerm w_85 (ATerm))
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym_As_2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      {
        ATerm f_17 = NULL,h_17 = NULL;
        ATerm g_17 = NULL;
        t = SSLgetAnnotations(not_null(z_16));
        {
          g_17 = t;
          if(((f_17 != NULL) && (f_17 != g_17)))
            _fail(g_17);
          else
            f_17 = g_17;
        }
        {
          t = not_null(a_17);
          {
            ATerm j_17 = NULL;
            t = v_85(t);
            {
              h_17 = t;
              {
                t = not_null(b_17);
                {
                  ATerm l_17 = NULL;
                  t = w_85(t);
                  {
                    j_17 = t;
                    {
                      ATerm m_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(h_17), not_null(j_17)), not_null(f_17));
                      {
                        m_17 = t;
                        if(((l_17 != NULL) && (l_17 != m_17)))
                          _fail(m_17);
                        else
                          l_17 = m_17;
                      }
                      t = not_null(l_17);
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
ATerm Prim_2 (ATerm t, ATerm s_81 (ATerm), ATerm t_81 (ATerm))
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  x_17 :
  if(match_cons(y_17, sym_Prim_2))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      {
        ATerm e_18 = NULL,g_18 = NULL;
        ATerm f_18 = NULL;
        t = SSLgetAnnotations(not_null(y_17));
        {
          f_18 = t;
          if(((e_18 != NULL) && (e_18 != f_18)))
            _fail(f_18);
          else
            e_18 = f_18;
        }
        {
          t = not_null(z_17);
          {
            ATerm i_18 = NULL;
            t = s_81(t);
            {
              g_18 = t;
              {
                t = not_null(a_18);
                {
                  ATerm k_18 = NULL;
                  t = t_81(t);
                  {
                    i_18 = t;
                    {
                      ATerm l_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(g_18), not_null(i_18)), not_null(e_18));
                      {
                        l_18 = t;
                        if(((k_18 != NULL) && (k_18 != l_18)))
                          _fail(l_18);
                        else
                          k_18 = l_18;
                      }
                      t = not_null(k_18);
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
ATerm Explode_2 (ATerm t, ATerm r_85 (ATerm), ATerm s_85 (ATerm))
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym_Explode_2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm d_19 = NULL,f_19 = NULL;
        ATerm e_19 = NULL;
        t = SSLgetAnnotations(not_null(x_18));
        {
          e_19 = t;
          if(((d_19 != NULL) && (d_19 != e_19)))
            _fail(e_19);
          else
            d_19 = e_19;
        }
        {
          t = not_null(y_18);
          {
            ATerm h_19 = NULL;
            t = r_85(t);
            {
              f_19 = t;
              {
                t = not_null(z_18);
                {
                  ATerm j_19 = NULL;
                  t = s_85(t);
                  {
                    h_19 = t;
                    {
                      ATerm k_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(f_19), not_null(h_19)), not_null(d_19));
                      {
                        k_19 = t;
                        if(((j_19 != NULL) && (j_19 != k_19)))
                          _fail(k_19);
                        else
                          j_19 = k_19;
                      }
                      t = not_null(j_19);
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
ATerm Op_2 (ATerm t, ATerm w_83 (ATerm), ATerm x_83 (ATerm))
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym_Op_2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      {
        ATerm c_20 = NULL,e_20 = NULL;
        ATerm d_20 = NULL;
        t = SSLgetAnnotations(not_null(w_19));
        {
          d_20 = t;
          if(((c_20 != NULL) && (c_20 != d_20)))
            _fail(d_20);
          else
            c_20 = d_20;
        }
        {
          t = not_null(x_19);
          {
            ATerm g_20 = NULL;
            t = w_83(t);
            {
              e_20 = t;
              {
                t = not_null(y_19);
                {
                  ATerm i_20 = NULL;
                  t = x_83(t);
                  {
                    g_20 = t;
                    {
                      ATerm j_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(e_20), not_null(g_20)), not_null(c_20));
                      {
                        j_20 = t;
                        if(((i_20 != NULL) && (i_20 != j_20)))
                          _fail(j_20);
                        else
                          i_20 = j_20;
                      }
                      t = not_null(i_20);
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
ATerm pat_td_1 (ATerm t, ATerm j_120 (ATerm))
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_120(t);
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              ATerm b_1 (ATerm t)
              {
                t = pat_td_1(t, j_120);
                return(t);
              }
              t = fetch_1(t, b_1);
              return(t);
            }
            t = Op_2(t, _id, a_1);
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            {
              ATerm s_10 = t;
              int t_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_1 (ATerm t)
                  {
                    t = pat_td_1(t, j_120);
                    return(t);
                  }
                  t = Explode_2(t, _id, c_1);
                  LocalPopChoice(t_10);
                }
              else
                {
                  t = s_10;
                  {
                    ATerm v_10 = t;
                    int w_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_1 (ATerm t)
                        {
                          t = pat_td_1(t, j_120);
                          return(t);
                        }
                        t = Explode_2(t, d_1, _id);
                        LocalPopChoice(w_10);
                      }
                    else
                      {
                        t = v_10;
                        {
                          ATerm x_10 = t;
                          int z_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_1 (ATerm t)
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  t = pat_td_1(t, j_120);
                                  return(t);
                                }
                                t = fetch_1(t, f_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, e_1);
                              LocalPopChoice(z_10);
                            }
                          else
                            {
                              t = x_10;
                              {
                                ATerm g_1 (ATerm t)
                                {
                                  t = pat_td_1(t, j_120);
                                  return(t);
                                }
                                t = As_2(t, _id, g_1);
                              }
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
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym_Build_1))
    {
      b_21 = ATgetArgument(a_21, 0);
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_21 = NULL,e_21 = NULL;
            ATerm i_21 = NULL;
            t = not_null(b_21);
            {
              ATerm h_1 (ATerm t)
              {
                ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
                f_21 = t;
                s_20 :
                if(match_cons(f_21, sym_RootApp_1))
                  {
                    g_21 = ATgetArgument(f_21, 0);
                    t_20 :
                    if(match_cons(g_21, sym_Build_1))
                      {
                        h_21 = ATgetArgument(g_21, 0);
                        {
                          if(((d_21 != NULL) && (d_21 != h_21)))
                            _fail(h_21);
                          else
                            d_21 = h_21;
                          t = not_null(d_21);
                        }
                      }
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
              t = pat_td_1(t, h_1);
              {
                i_21 = t;
                if(((e_21 != NULL) && (e_21 != i_21)))
                  _fail(i_21);
                else
                  e_21 = i_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_21));
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
              ATerm r_21 = NULL;
              t = not_null(b_21);
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
                  n_21 = t;
                  w_20 :
                  if(match_cons(n_21, sym_App_2))
                    {
                      o_21 = ATgetArgument(n_21, 0);
                      q_21 = ATgetArgument(n_21, 1);
                      x_20 :
                      if(match_cons(o_21, sym_Build_1))
                        {
                          p_21 = ATgetArgument(o_21, 0);
                          {
                            if(((l_21 != NULL) && (l_21 != p_21)))
                              _fail(p_21);
                            else
                              l_21 = p_21;
                            {
                              if(((k_21 != NULL) && (k_21 != q_21)))
                                _fail(q_21);
                              else
                                k_21 = q_21;
                              t = not_null(l_21);
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
                t = pat_td_1(t, i_1);
                {
                  r_21 = t;
                  if(((m_21 != NULL) && (m_21 != r_21)))
                    _fail(r_21);
                  else
                    m_21 = r_21;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_21));
            }
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
  ATerm d_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = d_11;
      {
        ATerm r_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(z_11);
          }
        else
          {
            t = r_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  l_22 :
  if(match_cons(s_22, sym_Lets_2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_22), not_null(u_22));
    }
  else
    {
      if(match_cons(s_22, sym_LChoices_1))
        {
          t_22 = ATgetArgument(s_22, 0);
          m_22 :
          if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
            {
              p_22 = ATgetFirst((ATermList) t_22);
              q_22 = (ATerm) ATgetNext((ATermList) t_22);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_22), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(q_22)));
            }
          else
            {
              if(((ATgetType(t_22) == AT_LIST) && ATisEmpty(t_22)))
                {
                  t = term_j_12;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(s_22, sym_Choices_1))
            {
              t_22 = ATgetArgument(s_22, 0);
              n_22 :
              if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
                {
                  p_22 = ATgetFirst((ATermList) t_22);
                  q_22 = (ATerm) ATgetNext((ATermList) t_22);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(p_22), (ATerm) ATmakeAppl(sym_Choices_1, not_null(q_22)));
                }
              else
                {
                  if(((ATgetType(t_22) == AT_LIST) && ATisEmpty(t_22)))
                    {
                      t = term_j_12;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(s_22, sym_Seqs_1))
                {
                  t_22 = ATgetArgument(s_22, 0);
                  o_22 :
                  if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
                    {
                      p_22 = ATgetFirst((ATermList) t_22);
                      q_22 = (ATerm) ATgetNext((ATermList) t_22);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_22), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(q_22)));
                    }
                  else
                    {
                      if(((ATgetType(t_22) == AT_LIST) && ATisEmpty(t_22)))
                        {
                          t = term_k_12;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(s_22, sym_DefaultVarDec_1))
                    {
                      t_22 = ATgetArgument(s_22, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(t_22), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_12), term_n_12));
                    }
                  else
                    {
                      if(match_cons(s_22, sym_InfixApp_3))
                        {
                          t_22 = ATgetArgument(s_22, 0);
                          u_22 = ATgetArgument(s_22, 1);
                          r_22 = ATgetArgument(s_22, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_22), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_22)), not_null(t_22))));
                        }
                      else
                        {
                          if(match_cons(s_22, sym_BAM_3))
                            {
                              t_22 = ATgetArgument(s_22, 0);
                              u_22 = ATgetArgument(s_22, 1);
                              r_22 = ATgetArgument(s_22, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(r_22))), not_null(t_22)), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_22))));
                            }
                          else
                            {
                              if(match_cons(s_22, sym_AM_2))
                                {
                                  t_22 = ATgetArgument(s_22, 0);
                                  u_22 = ATgetArgument(s_22, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_22), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_22)));
                                }
                              else
                                {
                                  if(match_cons(s_22, sym_MA_2))
                                    {
                                      t_22 = ATgetArgument(s_22, 0);
                                      u_22 = ATgetArgument(s_22, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_22)), not_null(u_22));
                                    }
                                  else
                                    {
                                      if(match_cons(s_22, sym_BA_2))
                                        {
                                          t_22 = ATgetArgument(s_22, 0);
                                          u_22 = ATgetArgument(s_22, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_22)), not_null(t_22));
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
ATerm UnZip2_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  h_24 = t;
  e_24 :
  if(match_cons(h_24, sym__2))
    {
      i_24 = ATgetArgument(h_24, 0);
      l_24 = ATgetArgument(h_24, 1);
      f_24 :
      if(match_cons(i_24, sym__2))
        {
          j_24 = ATgetArgument(i_24, 0);
          k_24 = ATgetArgument(i_24, 1);
          g_24 :
          if(match_cons(l_24, sym__2))
            {
              m_24 = ATgetArgument(l_24, 0);
              n_24 = ATgetArgument(l_24, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_24)), not_null(j_24)), (ATerm) ATinsert(CheckATermList(not_null(n_24)), not_null(k_24)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
  v_24 = t;
  u_24 :
  if(((ATgetType(v_24) == AT_LIST) && !(ATisEmpty(v_24))))
    {
      w_24 = ATgetFirst((ATermList) v_24);
      x_24 = (ATerm) ATgetNext((ATermList) v_24);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_24), not_null(x_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  c_25 :
  if(((ATgetType(d_25) == AT_LIST) && ATisEmpty(d_25)))
    {
      t = term_o_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm g_100 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, g_100);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  ATerm p_25 (ATerm t)
  {
    ATerm m_25 = NULL;
    ATerm n_25 = NULL;
    t = not_null(j_25);
    {
      ATerm p_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_12;
        }
      {
        t = new_0(t);
        {
          n_25 = t;
          if(((m_25 != NULL) && (m_25 != n_25)))
            _fail(n_25);
          else
            m_25 = n_25;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(m_25)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_25)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_25))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_25))));
    return(t);
  }
  ATerm q_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_k_12, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25))));
    return(t);
  }
  j_25 = t;
  i_25 :
  if(match_cons(j_25, sym_Var_1))
    {
      k_25 = ATgetArgument(j_25, 0);
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_25(t);
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            t = q_25(t);
          }
      }
    }
  else
    {
      t = p_25(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym_Prim_2))
    {
      y_25 = ATgetArgument(x_25, 0);
      z_25 = ATgetArgument(x_25, 1);
      {
        ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
        ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
        t = not_null(z_25);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm s_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_12;
              }
            return(t);
          }
          t = fetch_1(t, j_1);
          {
            t = not_null(z_25);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm k_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, k_1);
                {
                  f_26 = t;
                  u_25 :
                  if(match_cons(f_26, sym__2))
                    {
                      g_26 = ATgetArgument(f_26, 0);
                      h_26 = ATgetArgument(f_26, 1);
                      v_25 :
                      if(match_cons(h_26, sym__2))
                        {
                          i_26 = ATgetArgument(h_26, 0);
                          j_26 = ATgetArgument(h_26, 1);
                          {
                            if(((c_26 != NULL) && (c_26 != g_26)))
                              _fail(g_26);
                            else
                              c_26 = g_26;
                            {
                              if(((d_26 != NULL) && (d_26 != i_26)))
                                _fail(i_26);
                              else
                                d_26 = i_26;
                              if(((e_26 != NULL) && (e_26 != j_26)))
                                _fail(j_26);
                              else
                                e_26 = j_26;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_26)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(y_25), not_null(e_26))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm y_105 (ATerm), ATerm z_105 (ATerm))
{
  ATerm m_26 (ATerm t)
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_105(t);
        t = m_26(t);
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        t = z_105(t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm b_106 (ATerm))
{
  t = repeat_2(t, b_106, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym_Wld_0))
    {
      ATerm t_26 = NULL,v_26 = NULL;
      ATerm v_12;
      v_12 = t;
      {
        ATerm u_26 = NULL;
        t = SSLgetAnnotations(not_null(r_26));
        {
          u_26 = t;
          if(((t_26 != NULL) && (t_26 != u_26)))
            _fail(u_26);
          else
            t_26 = u_26;
        }
      }
      t = v_12;
      {
        ATerm w_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(t_26));
        {
          w_26 = t;
          if(((v_26 != NULL) && (v_26 != w_26)))
            _fail(w_26);
          else
            v_26 = w_26;
        }
        t = not_null(v_26);
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
  ATerm w_12 = t;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, l_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm l_85 (ATerm), ATerm m_85 (ATerm))
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_App_2))
    {
      h_27 = ATgetArgument(g_27, 0);
      i_27 = ATgetArgument(g_27, 1);
      {
        ATerm m_27 = NULL,o_27 = NULL;
        ATerm n_27 = NULL;
        t = SSLgetAnnotations(not_null(g_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
        {
          t = not_null(h_27);
          {
            ATerm q_27 = NULL;
            t = l_85(t);
            {
              o_27 = t;
              {
                t = not_null(i_27);
                {
                  ATerm s_27 = NULL;
                  t = m_85(t);
                  {
                    q_27 = t;
                    {
                      ATerm t_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(o_27), not_null(q_27)), not_null(m_27));
                      {
                        t_27 = t;
                        if(((s_27 != NULL) && (s_27 != t_27)))
                          _fail(t_27);
                        else
                          s_27 = t_27;
                      }
                      t = not_null(s_27);
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
ATerm Con_3 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm))
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_Con_3))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      j_28 = ATgetArgument(g_28, 2);
      {
        ATerm o_28 = NULL,q_28 = NULL;
        ATerm p_28 = NULL;
        t = SSLgetAnnotations(not_null(g_28));
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
        {
          t = not_null(h_28);
          {
            ATerm s_28 = NULL;
            t = i_85(t);
            {
              q_28 = t;
              {
                t = not_null(i_28);
                {
                  ATerm u_28 = NULL;
                  t = j_85(t);
                  {
                    s_28 = t;
                    {
                      t = not_null(j_28);
                      {
                        ATerm w_28 = NULL;
                        t = k_85(t);
                        {
                          u_28 = t;
                          {
                            ATerm x_28 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(q_28), not_null(s_28), not_null(u_28)), not_null(o_28));
                            {
                              x_28 = t;
                              if(((w_28 != NULL) && (w_28 != x_28)))
                                _fail(x_28);
                              else
                                w_28 = x_28;
                            }
                            t = not_null(w_28);
                          }
                        }
                      }
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
  ATerm f_13 = t;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, m_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL;
  i_29 = t;
  g_29 :
  if(match_cons(i_29, sym_SRule_1))
    {
      j_29 = ATgetArgument(i_29, 0);
      h_29 :
      if(match_cons(j_29, sym_StratRule_3))
        {
          k_29 = ATgetArgument(j_29, 0);
          l_29 = ATgetArgument(j_29, 1);
          m_29 = ATgetArgument(j_29, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_29)), (ATerm) ATmakeAppl(sym_Where_1, not_null(m_29))), not_null(k_29)));
        }
      else
        {
          if(match_cons(j_29, sym_Rule_3))
            {
              k_29 = ATgetArgument(j_29, 0);
              l_29 = ATgetArgument(j_29, 1);
              m_29 = ATgetArgument(j_29, 2);
              {
                t = not_null(k_29);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(l_29);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(l_29))), (ATerm) ATmakeAppl(sym_Where_1, not_null(m_29))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_29))));
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
ATerm oncetd_1 (ATerm t, ATerm w_94 (ATerm))
{
  ATerm v_29 (ATerm t)
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_94(t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = _one(t, v_29);
      }
    return(t);
  }
  t = v_29(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  k_30 = t;
  i_30 :
  if(match_cons(k_30, sym_SRule_1))
    {
      l_30 = ATgetArgument(k_30, 0);
      j_30 :
      if(match_cons(l_30, sym_Rule_3))
        {
          m_30 = ATgetArgument(l_30, 0);
          n_30 = ATgetArgument(l_30, 1);
          o_30 = ATgetArgument(l_30, 2);
          {
            ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
            ATerm a_31 = NULL;
            ATerm q_33 = NULL;
            t = new_0(t);
            {
              a_31 = t;
              {
                if(((x_30 != NULL) && (x_30 != a_31)))
                  _fail(a_31);
                else
                  x_30 = a_31;
                {
                  t = not_null(m_30);
                  {
                    ATerm h_34 = NULL;
                    ATerm n_1 (ATerm t)
                    {
                      ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,v_31 = NULL,p_33 = NULL;
                      b_31 = t;
                      z_29 :
                      if(match_cons(b_31, sym_Con_3))
                        {
                          c_31 = ATgetArgument(b_31, 0);
                          v_31 = ATgetArgument(b_31, 1);
                          p_33 = ATgetArgument(b_31, 2);
                          a_30 :
                          if(match_cons(c_31, sym_Var_1))
                            {
                              d_31 = ATgetArgument(c_31, 0);
                              {
                                if(((w_30 != NULL) && (w_30 != d_31)))
                                  _fail(d_31);
                                else
                                  w_30 = d_31;
                                {
                                  if(((u_30 != NULL) && (u_30 != v_31)))
                                    _fail(v_31);
                                  else
                                    u_30 = v_31;
                                  {
                                    if(((s_30 != NULL) && (s_30 != p_33)))
                                      _fail(p_33);
                                    else
                                      s_30 = p_33;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_30));
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
                    t = oncetd_1(t, n_1);
                    {
                      q_33 = t;
                      {
                        if(((y_30 != NULL) && (y_30 != q_33)))
                          _fail(q_33);
                        else
                          y_30 = q_33;
                        {
                          t = not_null(n_30);
                          {
                            ATerm o_1 (ATerm t)
                            {
                              ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
                              a_34 = t;
                              d_30 :
                              if(match_cons(a_34, sym_Con_3))
                                {
                                  b_34 = ATgetArgument(a_34, 0);
                                  d_34 = ATgetArgument(a_34, 1);
                                  e_34 = ATgetArgument(a_34, 2);
                                  e_30 :
                                  if(match_cons(b_34, sym_Var_1))
                                    {
                                      c_34 = ATgetArgument(b_34, 0);
                                      f_30 :
                                      if(match_cons(e_34, sym_Call_2))
                                        {
                                          f_34 = ATgetArgument(e_34, 0);
                                          g_34 = ATgetArgument(e_34, 1);
                                          g_30 :
                                          if(((ATgetType(g_34) == AT_LIST) && ATisEmpty(g_34)))
                                            {
                                              {
                                                if(((w_30 != NULL) && (w_30 != c_34)))
                                                  _fail(c_34);
                                                else
                                                  w_30 = c_34;
                                                {
                                                  if(((v_30 != NULL) && (v_30 != d_34)))
                                                    _fail(d_34);
                                                  else
                                                    v_30 = d_34;
                                                  {
                                                    if(((t_30 != NULL) && (t_30 != f_34)))
                                                      _fail(f_34);
                                                    else
                                                      t_30 = f_34;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30));
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
                            t = oncetd_1(t, o_1);
                            {
                              h_34 = t;
                              if(((z_30 != NULL) && (z_30 != h_34)))
                                _fail(h_34);
                              else
                                z_30 = h_34;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_30)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_30), not_null(z_30), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_30), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(t_30), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_30), not_null(v_30), term_k_12)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_30)))))));
          }
        }
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
  ATerm m_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
          LocalPopChoice(y_13);
        }
      else
        {
          t = x_13;
          {
            ATerm z_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2(t, _id, desugarRule_0);
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
                t = RtoS_0(t);
              }
          }
        }
      LocalPopChoice(q_13);
    }
  else
    {
      t = m_13;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm g_93 (ATerm))
{
  t = g_93(t);
  {
    ATerm p_1 (ATerm t)
    {
      t = topdown_1(t, g_93);
      return(t);
    }
    t = _all(t, p_1);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0(t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
        }
      }
    {
      ATerm r_1 (ATerm t)
      {
        ATerm d_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(e_14);
          }
        else
          {
            t = d_14;
            {
              ATerm g_14 = t;
              int h_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(h_14);
                }
              else
                {
                  t = g_14;
                  {
                    ATerm i_14 = t;
                    int k_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(k_14);
                      }
                    else
                      {
                        t = i_14;
                        {
                          ATerm l_14 = t;
                          int m_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(m_14);
                            }
                          else
                            {
                              t = l_14;
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
      t = repeat_2(t, r_1, _id);
    }
    return(t);
  }
  t = topdown_1(t, q_1);
  return(t);
}
ATerm BottomupToVarIsId_Cond_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  q_35 = t;
  g_35 :
  if(match_cons(q_35, sym_Seq_2))
    {
      r_35 = ATgetArgument(q_35, 0);
      a_36 = ATgetArgument(q_35, 1);
      h_35 :
      if(match_cons(r_35, sym_Call_2))
        {
          x_35 = ATgetArgument(r_35, 0);
          z_35 = ATgetArgument(r_35, 1);
          i_35 :
          if(match_cons(x_35, sym_SVar_1))
            {
              y_35 = ATgetArgument(x_35, 0);
              j_35 :
              if(match_string(y_35, "mark"))
                {
                  k_35 :
                  if(((ATgetType(z_35) == AT_LIST) && ATisEmpty(z_35)))
                    {
                      l_35 :
                      if(match_cons(a_36, sym_Seq_2))
                        {
                          b_36 = ATgetArgument(a_36, 0);
                          d_36 = ATgetArgument(a_36, 1);
                          m_35 :
                          if(match_cons(b_36, sym_Match_1))
                            {
                              c_36 = ATgetArgument(b_36, 0);
                              n_35 :
                              if(match_cons(d_36, sym_Seq_2))
                                {
                                  e_36 = ATgetArgument(d_36, 0);
                                  g_36 = ATgetArgument(d_36, 1);
                                  o_35 :
                                  if(match_cons(e_36, sym_Where_1))
                                    {
                                      f_36 = ATgetArgument(e_36, 0);
                                      p_35 :
                                      if(match_cons(g_36, sym_Build_1))
                                        {
                                          h_36 = ATgetArgument(g_36, 0);
                                          {
                                            ATerm o_14 = t;
                                            int s_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
                                                ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
                                                t = term_b_16;
                                                {
                                                  ATerm s_1 (ATerm t)
                                                  {
                                                    t = term_c_16;
                                                    return(t);
                                                  }
                                                  t = rewrite_1(t, s_1);
                                                  {
                                                    u_36 = t;
                                                    v_34 :
                                                    if(match_cons(u_36, sym_Defined_2))
                                                      {
                                                        v_36 = ATgetArgument(u_36, 0);
                                                        w_36 = ATgetArgument(u_36, 1);
                                                        w_34 :
                                                        if(match_string(v_36, "s_0"))
                                                          {
                                                            ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
                                                            if(((r_36 != NULL) && (r_36 != w_36)))
                                                              _fail(w_36);
                                                            else
                                                              r_36 = w_36;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(r_36), not_null(c_36), (ATerm) ATmakeAppl(sym__2, not_null(f_36), not_null(h_36)));
                                                              {
                                                                t = replace_application_0(t);
                                                                {
                                                                  x_36 = t;
                                                                  u_34 :
                                                                  if(match_cons(x_36, sym__2))
                                                                    {
                                                                      y_36 = ATgetArgument(x_36, 0);
                                                                      z_36 = ATgetArgument(x_36, 1);
                                                                      {
                                                                        if(((s_36 != NULL) && (s_36 != y_36)))
                                                                          _fail(y_36);
                                                                        else
                                                                          s_36 = y_36;
                                                                        if(((t_36 != NULL) && (t_36 != z_36)))
                                                                          _fail(z_36);
                                                                        else
                                                                          t_36 = z_36;
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
                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(s_36)), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_36))));
                                                LocalPopChoice(s_14);
                                              }
                                            else
                                              {
                                                t = o_14;
                                                {
                                                  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL;
                                                  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
                                                  t = term_b_16;
                                                  {
                                                    ATerm t_1 (ATerm t)
                                                    {
                                                      t = term_c_16;
                                                      return(t);
                                                    }
                                                    t = rewrite_1(t, t_1);
                                                    {
                                                      j_37 = t;
                                                      e_35 :
                                                      if(match_cons(j_37, sym_Defined_2))
                                                        {
                                                          k_37 = ATgetArgument(j_37, 0);
                                                          l_37 = ATgetArgument(j_37, 1);
                                                          f_35 :
                                                          if(match_string(k_37, "h_0"))
                                                            {
                                                              ATerm m_37 = NULL;
                                                              if(((e_37 != NULL) && (e_37 != l_37)))
                                                                _fail(l_37);
                                                              else
                                                                e_37 = l_37;
                                                              {
                                                                ATerm n_37 = NULL;
                                                                t = not_null(e_37);
                                                                {
                                                                  m_37 = t;
                                                                  {
                                                                    if(((g_37 != NULL) && (g_37 != m_37)))
                                                                      _fail(m_37);
                                                                    else
                                                                      g_37 = m_37;
                                                                    {
                                                                      t = not_null(c_36);
                                                                      {
                                                                        t = tvars_0(t);
                                                                        {
                                                                          n_37 = t;
                                                                          {
                                                                            if(((f_37 != NULL) && (f_37 != n_37)))
                                                                              _fail(n_37);
                                                                            else
                                                                              f_37 = n_37;
                                                                            {
                                                                              ATerm u_1 (ATerm t)
                                                                              {
                                                                                t = term_d_16;
                                                                                return(t);
                                                                              }
                                                                              ATerm y_1 (ATerm t)
                                                                              {
                                                                                ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
                                                                                ATerm z_1 (ATerm t)
                                                                                {
                                                                                  ATerm o_37 = NULL,q_37 = NULL;
                                                                                  ATerm p_37 = NULL;
                                                                                  p_37 = t;
                                                                                  if(((o_37 != NULL) && (o_37 != p_37)))
                                                                                    _fail(p_37);
                                                                                  else
                                                                                    o_37 = p_37;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_37));
                                                                                    {
                                                                                      q_37 = t;
                                                                                      {
                                                                                        ATerm e_16;
                                                                                        e_16 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(g_37), not_null(q_37)), term_g_16);
                                                                                          {
                                                                                            ATerm a_2 (ATerm t)
                                                                                            {
                                                                                              t = term_d_16;
                                                                                              return(t);
                                                                                            }
                                                                                            t = assert_1(t, a_2);
                                                                                          }
                                                                                        }
                                                                                        t = e_16;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = map_1(t, z_1);
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), not_null(h_36));
                                                                                  {
                                                                                    t = alltd_1(t, Replace_0);
                                                                                    {
                                                                                      s_37 = t;
                                                                                      d_35 :
                                                                                      if(match_cons(s_37, sym__2))
                                                                                        {
                                                                                          t_37 = ATgetArgument(s_37, 0);
                                                                                          u_37 = ATgetArgument(s_37, 1);
                                                                                          {
                                                                                            if(((h_37 != NULL) && (h_37 != t_37)))
                                                                                              _fail(t_37);
                                                                                            else
                                                                                              h_37 = t_37;
                                                                                            if(((i_37 != NULL) && (i_37 != u_37)))
                                                                                              _fail(u_37);
                                                                                            else
                                                                                              i_37 = u_37;
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
                                                                              t = scope_2(t, u_1, y_1);
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
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(h_37)), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_36))));
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
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  ATerm w_39 (ATerm t)
  {
    ATerm o_39 = NULL,p_39 = NULL;
    t = not_null(v_38);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_d_16;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        o_39 = t;
        k_38 :
        if(match_cons(o_39, sym_Defined_1))
          {
            p_39 = ATgetArgument(o_39, 0);
            l_38 :
            if(!(match_string(p_39, "m_0")))
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
    t = not_null(x_38);
    return(t);
  }
  ATerm x_39 (ATerm t)
  {
    ATerm t_39 = NULL,u_39 = NULL;
    t = not_null(v_38);
    {
      ATerm c_2 (ATerm t)
      {
        t = term_d_16;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        t_39 = t;
        m_38 :
        if(match_cons(t_39, sym_Defined_1))
          {
            u_39 = ATgetArgument(t_39, 0);
            n_38 :
            if(!(match_string(u_39, "j_0")))
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
    t = not_null(x_38);
    return(t);
  }
  v_38 = t;
  s_38 :
  if(match_cons(v_38, sym_App_2))
    {
      w_38 = ATgetArgument(v_38, 0);
      x_38 = ATgetArgument(v_38, 1);
      t_38 :
      if(match_cons(x_38, sym_Var_1))
        {
          u_38 = ATgetArgument(x_38, 0);
          {
            ATerm h_16 = t;
            int o_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_39 = NULL,k_39 = NULL;
                t = not_null(v_38);
                {
                  ATerm d_2 (ATerm t)
                  {
                    t = term_d_16;
                    return(t);
                  }
                  t = rewrite_1(t, d_2);
                  {
                    j_39 = t;
                    i_38 :
                    if(match_cons(j_39, sym_Defined_1))
                      {
                        k_39 = ATgetArgument(j_39, 0);
                        j_38 :
                        if(!(match_string(k_39, "v_0")))
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_38));
                LocalPopChoice(o_16);
              }
            else
              {
                t = h_16;
                {
                  ATerm p_16 = t;
                  int q_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_39(t);
                      LocalPopChoice(q_16);
                    }
                  else
                    {
                      t = p_16;
                      t = x_39(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm r_16 = t;
          int s_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_39(t);
              LocalPopChoice(s_16);
            }
          else
            {
              t = r_16;
              t = x_39(t);
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
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  z_39 :
  if(((ATgetType(a_40) == AT_LIST) && !(ATisEmpty(a_40))))
    {
      b_40 = ATgetFirst((ATermList) a_40);
      c_40 = (ATerm) ATgetNext((ATermList) a_40);
      t = not_null(c_40);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym__2))
    {
      j_40 = ATgetArgument(i_40, 0);
      k_40 = ATgetArgument(i_40, 1);
      {
        ATerm t_16;
        t_16 = t;
        {
          ATerm n_40 = NULL;
          ATerm o_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_40), not_null(k_40));
          {
            ATerm u_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(v_16);
              }
            else
              {
                t = u_16;
                t = (ATerm) ATempty;
              }
            {
              o_40 = t;
              if(((n_40 != NULL) && (n_40 != o_40)))
                _fail(o_40);
              else
                n_40 = o_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_40), not_null(k_40), not_null(n_40));
            t = table_put_0(t);
          }
        }
        t = t_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm l_111 (ATerm))
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  ATerm w_16;
  w_16 = t;
  {
    ATerm y_40 = NULL;
    ATerm z_40 = NULL,a_41 = NULL,d_41 = NULL;
    t = l_111(t);
    {
      y_40 = t;
      {
        if(((x_40 != NULL) && (x_40 != y_40)))
          _fail(y_40);
        else
          x_40 = y_40;
        {
          ATerm x_16 = t;
          int c_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_40), term_d_17);
              t = table_get_0(t);
              LocalPopChoice(c_17);
            }
          else
            {
              t = x_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            z_40 = t;
            u_40 :
            if(((ATgetType(z_40) == AT_LIST) && !(ATisEmpty(z_40))))
              {
                a_41 = ATgetFirst((ATermList) z_40);
                d_41 = (ATerm) ATgetNext((ATermList) z_40);
                {
                  if(((w_40 != NULL) && (w_40 != a_41)))
                    _fail(a_41);
                  else
                    w_40 = a_41;
                  {
                    if(((v_40 != NULL) && (v_40 != d_41)))
                      _fail(d_41);
                    else
                      v_40 = d_41;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(x_40), term_d_17, not_null(v_40));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(w_40);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm e_41 = NULL;
                              e_41 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_40), not_null(e_41));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, e_2);
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
  t = w_16;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm u_96 (ATerm), ATerm v_96 (ATerm))
{
  ATerm e_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_96(t);
      t = v_96(t);
      LocalPopChoice(i_17);
    }
  else
    {
      t = e_17;
      {
        t = v_96(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm k_111 (ATerm))
{
  ATerm s_41 = NULL;
  ATerm k_17;
  k_17 = t;
  {
    ATerm t_41 = NULL;
    ATerm u_41 = NULL;
    t = k_111(t);
    {
      t_41 = t;
      {
        if(((s_41 != NULL) && (s_41 != t_41)))
          _fail(t_41);
        else
          s_41 = t_41;
        {
          ATerm v_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_41), term_d_17);
          {
            ATerm n_17 = t;
            int o_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_17);
              }
            else
              {
                t = n_17;
                t = (ATerm) ATempty;
              }
            {
              v_41 = t;
              if(((u_41 != NULL) && (u_41 != v_41)))
                _fail(v_41);
              else
                u_41 = v_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_41), term_d_17, (ATerm) ATinsert(CheckATermList(not_null(u_41)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_17;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm m_111 (ATerm), ATerm n_111 (ATerm))
{
  t = begin_scope_1(t, m_111);
  {
    ATerm f_2 (ATerm t)
    {
      t = end_scope_1(t, m_111);
      return(t);
    }
    t = restore_always_2(t, n_111, f_2);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
  k_42 = t;
  j_42 :
  if(match_cons(k_42, sym__3))
    {
      l_42 = ATgetArgument(k_42, 0);
      m_42 = ATgetArgument(k_42, 1);
      n_42 = ATgetArgument(k_42, 2);
      {
        ATerm r_42 = NULL;
        ATerm g_2 (ATerm t)
        {
          t = term_d_16;
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          ATerm u_42 = NULL;
          t = not_null(m_42);
          {
            t = tvars_0(t);
            {
              ATerm i_2 (ATerm t)
              {
                ATerm s_42 = NULL;
                s_42 = t;
                {
                  ATerm p_17;
                  p_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(l_42), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_42))), term_r_17);
                    {
                      ATerm j_2 (ATerm t)
                      {
                        t = term_d_16;
                        return(t);
                      }
                      t = assert_1(t, j_2);
                    }
                  }
                  t = p_17;
                }
                return(t);
              }
              t = map_1(t, i_2);
              {
                t = not_null(n_42);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    u_42 = t;
                    if(((r_42 != NULL) && (r_42 != u_42)))
                      _fail(u_42);
                    else
                      r_42 = u_42;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, g_2, h_2);
        t = not_null(r_42);
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
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  u_43 = t;
  m_43 :
  if(match_cons(u_43, sym_Seq_2))
    {
      v_43 = ATgetArgument(u_43, 0);
      z_43 = ATgetArgument(u_43, 1);
      n_43 :
      if(match_cons(v_43, sym_Call_2))
        {
          w_43 = ATgetArgument(v_43, 0);
          y_43 = ATgetArgument(v_43, 1);
          o_43 :
          if(match_cons(w_43, sym_SVar_1))
            {
              x_43 = ATgetArgument(w_43, 0);
              p_43 :
              if(match_string(x_43, "mark"))
                {
                  q_43 :
                  if(((ATgetType(y_43) == AT_LIST) && ATisEmpty(y_43)))
                    {
                      r_43 :
                      if(match_cons(z_43, sym_Seq_2))
                        {
                          a_44 = ATgetArgument(z_43, 0);
                          c_44 = ATgetArgument(z_43, 1);
                          s_43 :
                          if(match_cons(a_44, sym_Match_1))
                            {
                              b_44 = ATgetArgument(a_44, 0);
                              t_43 :
                              if(match_cons(c_44, sym_Build_1))
                                {
                                  d_44 = ATgetArgument(c_44, 0);
                                  {
                                    ATerm s_17 = t;
                                    int t_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm h_44 = NULL,i_44 = NULL;
                                        ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
                                        t = term_v_17;
                                        {
                                          ATerm k_2 (ATerm t)
                                          {
                                            t = term_w_17;
                                            return(t);
                                          }
                                          t = rewrite_1(t, k_2);
                                          {
                                            j_44 = t;
                                            c_43 :
                                            if(match_cons(j_44, sym_Defined_2))
                                              {
                                                k_44 = ATgetArgument(j_44, 0);
                                                l_44 = ATgetArgument(j_44, 1);
                                                d_43 :
                                                if(match_string(k_44, "p_0"))
                                                  {
                                                    ATerm m_44 = NULL;
                                                    if(((h_44 != NULL) && (h_44 != l_44)))
                                                      _fail(l_44);
                                                    else
                                                      h_44 = l_44;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(h_44), not_null(b_44), not_null(d_44));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          m_44 = t;
                                                          if(((i_44 != NULL) && (i_44 != m_44)))
                                                            _fail(m_44);
                                                          else
                                                            i_44 = m_44;
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
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_44)), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_44)));
                                        LocalPopChoice(t_17);
                                      }
                                    else
                                      {
                                        t = s_17;
                                        {
                                          ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
                                          ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
                                          t = term_v_17;
                                          {
                                            ATerm l_2 (ATerm t)
                                            {
                                              t = term_w_17;
                                              return(t);
                                            }
                                            t = rewrite_1(t, l_2);
                                            {
                                              u_44 = t;
                                              k_43 :
                                              if(match_cons(u_44, sym_Defined_2))
                                                {
                                                  v_44 = ATgetArgument(u_44, 0);
                                                  w_44 = ATgetArgument(u_44, 1);
                                                  l_43 :
                                                  if(match_string(v_44, "f_0"))
                                                    {
                                                      ATerm x_44 = NULL;
                                                      if(((q_44 != NULL) && (q_44 != w_44)))
                                                        _fail(w_44);
                                                      else
                                                        q_44 = w_44;
                                                      {
                                                        ATerm y_44 = NULL;
                                                        t = not_null(q_44);
                                                        {
                                                          x_44 = t;
                                                          {
                                                            if(((s_44 != NULL) && (s_44 != x_44)))
                                                              _fail(x_44);
                                                            else
                                                              s_44 = x_44;
                                                            {
                                                              t = not_null(b_44);
                                                              {
                                                                t = tvars_0(t);
                                                                {
                                                                  y_44 = t;
                                                                  {
                                                                    if(((r_44 != NULL) && (r_44 != y_44)))
                                                                      _fail(y_44);
                                                                    else
                                                                      r_44 = y_44;
                                                                    {
                                                                      ATerm m_2 (ATerm t)
                                                                      {
                                                                        t = term_d_16;
                                                                        return(t);
                                                                      }
                                                                      ATerm n_2 (ATerm t)
                                                                      {
                                                                        ATerm d_45 = NULL;
                                                                        ATerm o_2 (ATerm t)
                                                                        {
                                                                          ATerm z_44 = NULL,b_45 = NULL;
                                                                          ATerm a_45 = NULL;
                                                                          a_45 = t;
                                                                          if(((z_44 != NULL) && (z_44 != a_45)))
                                                                            _fail(a_45);
                                                                          else
                                                                            z_44 = a_45;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_44));
                                                                            {
                                                                              b_45 = t;
                                                                              {
                                                                                ATerm b_18;
                                                                                b_18 = t;
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(s_44), not_null(b_45)), term_d_18);
                                                                                  {
                                                                                    ATerm p_2 (ATerm t)
                                                                                    {
                                                                                      t = term_d_16;
                                                                                      return(t);
                                                                                    }
                                                                                    t = assert_1(t, p_2);
                                                                                  }
                                                                                }
                                                                                t = b_18;
                                                                              }
                                                                            }
                                                                          }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, o_2);
                                                                        {
                                                                          t = not_null(d_44);
                                                                          {
                                                                            t = alltd_1(t, Replace_0);
                                                                            {
                                                                              d_45 = t;
                                                                              if(((t_44 != NULL) && (t_44 != d_45)))
                                                                                _fail(d_45);
                                                                              else
                                                                                t_44 = d_45;
                                                                            }
                                                                          }
                                                                        }
                                                                        return(t);
                                                                      }
                                                                      t = scope_2(t, m_2, n_2);
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
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_44)), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_44)));
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
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  y_45 = t;
  r_45 :
  if(match_cons(y_45, sym_App_2))
    {
      z_45 = ATgetArgument(y_45, 0);
      f_46 = ATgetArgument(y_45, 1);
      s_45 :
      if(match_cons(z_45, sym_Call_2))
        {
          a_46 = ATgetArgument(z_45, 0);
          c_46 = ATgetArgument(z_45, 1);
          t_45 :
          if(match_cons(a_46, sym_SVar_1))
            {
              b_46 = ATgetArgument(a_46, 0);
              u_45 :
              if(match_string(b_46, "bottomup_1"))
                {
                  v_45 :
                  if(((ATgetType(c_46) == AT_LIST) && !(ATisEmpty(c_46))))
                    {
                      d_46 = ATgetFirst((ATermList) c_46);
                      e_46 = (ATerm) ATgetNext((ATermList) c_46);
                      w_45 :
                      if(((ATgetType(e_46) == AT_LIST) && ATisEmpty(e_46)))
                        {
                          x_45 :
                          if(match_cons(f_46, sym_Op_2))
                            {
                              g_46 = ATgetArgument(f_46, 0);
                              h_46 = ATgetArgument(f_46, 1);
                              {
                                ATerm l_46 = NULL;
                                ATerm o_46 = NULL;
                                t = not_null(h_46);
                                {
                                  ATerm q_2 (ATerm t)
                                  {
                                    ATerm m_46 = NULL;
                                    m_46 = t;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATempty, not_null(d_46))), not_null(m_46));
                                    return(t);
                                  }
                                  t = map_1(t, q_2);
                                  {
                                    o_46 = t;
                                    if(((l_46 != NULL) && (l_46 != o_46)))
                                      _fail(o_46);
                                    else
                                      l_46 = o_46;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_App_2, not_null(d_46), (ATerm) ATmakeAppl(sym_Op_2, not_null(g_46), not_null(l_46)));
                              }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
  v_46 = t;
  t_46 :
  if(match_cons(v_46, sym_Seq_2))
    {
      w_46 = ATgetArgument(v_46, 0);
      y_46 = ATgetArgument(v_46, 1);
      u_46 :
      if(match_cons(w_46, sym_Build_1))
        {
          x_46 = ATgetArgument(w_46, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(y_46), not_null(x_46)));
        }
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
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  j_47 = t;
  f_47 :
  if(match_cons(j_47, sym_LChoice_2))
    {
      k_47 = ATgetArgument(j_47, 0);
      n_47 = ATgetArgument(j_47, 1);
      g_47 :
      if(match_cons(k_47, sym_LChoice_2))
        {
          l_47 = ATgetArgument(k_47, 0);
          m_47 = ATgetArgument(k_47, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_47), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_47), not_null(n_47)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(j_47, sym_Seq_2))
        {
          k_47 = ATgetArgument(j_47, 0);
          n_47 = ATgetArgument(j_47, 1);
          h_47 :
          if(match_cons(k_47, sym_Seq_2))
            {
              l_47 = ATgetArgument(k_47, 0);
              m_47 = ATgetArgument(k_47, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_47), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_47), not_null(n_47)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(j_47, sym_Choice_2))
            {
              k_47 = ATgetArgument(j_47, 0);
              n_47 = ATgetArgument(j_47, 1);
              i_47 :
              if(match_cons(k_47, sym_Choice_2))
                {
                  l_47 = ATgetArgument(k_47, 0);
                  m_47 = ATgetArgument(k_47, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_47), (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_47), not_null(n_47)));
                }
              else
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
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
  d_48 = t;
  b_48 :
  if(match_cons(d_48, sym_Seq_2))
    {
      e_48 = ATgetArgument(d_48, 0);
      h_48 = ATgetArgument(d_48, 1);
      c_48 :
      if(match_cons(e_48, sym_Scope_2))
        {
          f_48 = ATgetArgument(e_48, 0);
          g_48 = ATgetArgument(e_48, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_48), not_null(h_48)));
        }
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
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  r_48 = t;
  p_48 :
  if(match_cons(r_48, sym_Seq_2))
    {
      s_48 = ATgetArgument(r_48, 0);
      v_48 = ATgetArgument(r_48, 1);
      q_48 :
      if(match_cons(s_48, sym_LChoice_2))
        {
          t_48 = ATgetArgument(s_48, 0);
          u_48 = ATgetArgument(s_48, 1);
          {
            ATerm a_49 = NULL,b_49 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_m_18, not_null(v_48));
            {
              ATerm r_2 (ATerm t)
              {
                t = term_n_18;
                return(t);
              }
              t = rewrite_1(t, r_2);
              {
                a_49 = t;
                n_48 :
                if(match_cons(a_49, sym_Defined_1))
                  {
                    b_49 = ATgetArgument(a_49, 0);
                    o_48 :
                    if(!(match_string(b_49, "x_1")))
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(t_48), not_null(v_48)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_48), not_null(v_48)));
          }
        }
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
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL;
  i_49 = t;
  g_49 :
  if(match_cons(i_49, sym_Seq_2))
    {
      j_49 = ATgetArgument(i_49, 0);
      m_49 = ATgetArgument(i_49, 1);
      h_49 :
      if(match_cons(j_49, sym_Choice_2))
        {
          k_49 = ATgetArgument(j_49, 0);
          l_49 = ATgetArgument(j_49, 1);
          {
            ATerm r_49 = NULL,s_49 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_18, not_null(m_49));
            {
              ATerm s_2 (ATerm t)
              {
                t = term_p_18;
                return(t);
              }
              t = rewrite_1(t, s_2);
              {
                r_49 = t;
                e_49 :
                if(match_cons(r_49, sym_Defined_1))
                  {
                    s_49 = ATgetArgument(r_49, 0);
                    f_49 :
                    if(!(match_string(s_49, "v_1")))
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(k_49), not_null(m_49)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_49), not_null(m_49)));
          }
        }
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
  ATerm t_2 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceR_0(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm s_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceR_0(t);
              LocalPopChoice(t_18);
            }
          else
            {
              t = s_18;
              {
                ATerm u_18 = t;
                int v_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SeqOverScopeR_0(t);
                    LocalPopChoice(v_18);
                  }
                else
                  {
                    t = u_18;
                    {
                      ATerm a_19 = t;
                      int b_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = AssociateR_0(t);
                          LocalPopChoice(b_19);
                        }
                      else
                        {
                          t = a_19;
                          {
                            ATerm c_19 = t;
                            int g_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = IntroduceApp_0(t);
                                LocalPopChoice(g_19);
                              }
                            else
                              {
                                t = c_19;
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
  t = innermost_1(t, t_2);
  return(t);
}
ATerm SeqOverScopeL_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
  x_49 = t;
  v_49 :
  if(match_cons(x_49, sym_Seq_2))
    {
      y_49 = ATgetArgument(x_49, 0);
      z_49 = ATgetArgument(x_49, 1);
      w_49 :
      if(match_cons(z_49, sym_Scope_2))
        {
          a_50 = ATgetArgument(z_49, 0);
          b_50 = ATgetArgument(z_49, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_50), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_49), not_null(b_50)));
        }
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
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  j_50 = t;
  h_50 :
  if(match_cons(j_50, sym_Seq_2))
    {
      k_50 = ATgetArgument(j_50, 0);
      l_50 = ATgetArgument(j_50, 1);
      i_50 :
      if(match_cons(l_50, sym_LChoice_2))
        {
          m_50 = ATgetArgument(l_50, 0);
          n_50 = ATgetArgument(l_50, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(k_50), not_null(m_50)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_50), not_null(n_50)));
        }
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
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
  y_50 = t;
  w_50 :
  if(match_cons(y_50, sym_Seq_2))
    {
      z_50 = ATgetArgument(y_50, 0);
      a_51 = ATgetArgument(y_50, 1);
      x_50 :
      if(match_cons(a_51, sym_Choice_2))
        {
          b_51 = ATgetArgument(a_51, 0);
          c_51 = ATgetArgument(a_51, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(z_50), not_null(b_51)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_50), not_null(c_51)));
        }
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
ATerm bottomup_1 (ATerm t, ATerm h_93 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    t = bottomup_1(t, h_93);
    return(t);
  }
  t = _all(t, u_2);
  t = h_93(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm m_108 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    ATerm i_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_108(t);
        t = bottomup_1(t, v_2);
        LocalPopChoice(l_19);
      }
    else
      {
        t = i_19;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, v_2);
  return(t);
}
ATerm propagate_mark_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceL_0(t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        {
          ATerm o_19 = t;
          int p_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceL_0(t);
              LocalPopChoice(p_19);
            }
          else
            {
              t = o_19;
              t = SeqOverScopeL_0(t);
            }
        }
      }
    return(t);
  }
  t = innermost_1(t, w_2);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm n_51 = NULL,o_51 = NULL;
  n_51 = t;
  m_51 :
  if(match_cons(n_51, sym_Build_1))
    {
      o_51 = ATgetArgument(n_51, 0);
      {
        ATerm r_51 = NULL,t_51 = NULL;
        ATerm s_51 = NULL;
        t = SSLgetAnnotations(not_null(n_51));
        {
          s_51 = t;
          if(((r_51 != NULL) && (r_51 != s_51)))
            _fail(s_51);
          else
            r_51 = s_51;
        }
        {
          t = not_null(o_51);
          {
            ATerm v_51 = NULL;
            t = x_81(t);
            {
              t_51 = t;
              {
                ATerm w_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(t_51)), not_null(r_51));
                {
                  w_51 = t;
                  if(((v_51 != NULL) && (v_51 != w_51)))
                    _fail(w_51);
                  else
                    v_51 = w_51;
                }
                t = not_null(v_51);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm n_82 (ATerm), ATerm o_82 (ATerm))
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
  h_52 = t;
  g_52 :
  if(match_cons(h_52, sym_Seq_2))
    {
      i_52 = ATgetArgument(h_52, 0);
      j_52 = ATgetArgument(h_52, 1);
      {
        ATerm n_52 = NULL,p_52 = NULL;
        ATerm o_52 = NULL;
        t = SSLgetAnnotations(not_null(h_52));
        {
          o_52 = t;
          if(((n_52 != NULL) && (n_52 != o_52)))
            _fail(o_52);
          else
            n_52 = o_52;
        }
        {
          t = not_null(i_52);
          {
            ATerm r_52 = NULL;
            t = n_82(t);
            {
              p_52 = t;
              {
                t = not_null(j_52);
                {
                  ATerm t_52 = NULL;
                  t = o_82(t);
                  {
                    r_52 = t;
                    {
                      ATerm u_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(p_52), not_null(r_52)), not_null(n_52));
                      {
                        u_52 = t;
                        if(((t_52 != NULL) && (t_52 != u_52)))
                          _fail(u_52);
                        else
                          t_52 = u_52;
                      }
                      t = not_null(t_52);
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
ATerm Match_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm f_53 = NULL,g_53 = NULL;
  f_53 = t;
  e_53 :
  if(match_cons(f_53, sym_Match_1))
    {
      g_53 = ATgetArgument(f_53, 0);
      {
        ATerm j_53 = NULL,l_53 = NULL;
        ATerm k_53 = NULL;
        t = SSLgetAnnotations(not_null(f_53));
        {
          k_53 = t;
          if(((j_53 != NULL) && (j_53 != k_53)))
            _fail(k_53);
          else
            j_53 = k_53;
        }
        {
          t = not_null(g_53);
          {
            ATerm n_53 = NULL;
            t = w_81(t);
            {
              l_53 = t;
              {
                ATerm o_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(l_53)), not_null(j_53));
                {
                  o_53 = t;
                  if(((n_53 != NULL) && (n_53 != o_53)))
                    _fail(o_53);
                  else
                    n_53 = o_53;
                }
                t = not_null(n_53);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm r_82 (ATerm), ATerm s_82 (ATerm))
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym_LChoice_2))
    {
      a_54 = ATgetArgument(z_53, 0);
      b_54 = ATgetArgument(z_53, 1);
      {
        ATerm f_54 = NULL,h_54 = NULL;
        ATerm g_54 = NULL;
        t = SSLgetAnnotations(not_null(z_53));
        {
          g_54 = t;
          if(((f_54 != NULL) && (f_54 != g_54)))
            _fail(g_54);
          else
            f_54 = g_54;
        }
        {
          t = not_null(a_54);
          {
            ATerm j_54 = NULL;
            t = r_82(t);
            {
              h_54 = t;
              {
                t = not_null(b_54);
                {
                  ATerm l_54 = NULL;
                  t = s_82(t);
                  {
                    j_54 = t;
                    {
                      ATerm m_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(h_54), not_null(j_54)), not_null(f_54));
                      {
                        m_54 = t;
                        if(((l_54 != NULL) && (l_54 != m_54)))
                          _fail(m_54);
                        else
                          l_54 = m_54;
                      }
                      t = not_null(l_54);
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
ATerm Choice_2 (ATerm t, ATerm p_82 (ATerm), ATerm q_82 (ATerm))
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  x_54 :
  if(match_cons(y_54, sym_Choice_2))
    {
      z_54 = ATgetArgument(y_54, 0);
      a_55 = ATgetArgument(y_54, 1);
      {
        ATerm e_55 = NULL,g_55 = NULL;
        ATerm f_55 = NULL;
        t = SSLgetAnnotations(not_null(y_54));
        {
          f_55 = t;
          if(((e_55 != NULL) && (e_55 != f_55)))
            _fail(f_55);
          else
            e_55 = f_55;
        }
        {
          t = not_null(z_54);
          {
            ATerm i_55 = NULL;
            t = p_82(t);
            {
              g_55 = t;
              {
                t = not_null(a_55);
                {
                  ATerm k_55 = NULL;
                  t = q_82(t);
                  {
                    i_55 = t;
                    {
                      ATerm l_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(g_55), not_null(i_55)), not_null(e_55));
                      {
                        l_55 = t;
                        if(((k_55 != NULL) && (k_55 != l_55)))
                          _fail(l_55);
                        else
                          k_55 = l_55;
                      }
                      t = not_null(k_55);
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
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_19 = t;
      int t_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Choice_2(t, inline_rules_0, inline_rules_0);
          LocalPopChoice(t_19);
        }
      else
        {
          t = s_19;
          {
            ATerm u_19 = t;
            int z_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = LChoice_2(t, inline_rules_0, inline_rules_0);
                LocalPopChoice(z_19);
              }
            else
              {
                t = u_19;
                {
                  ATerm a_20 = t;
                  int b_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_2 (ATerm t)
                      {
                        ATerm y_2 (ATerm t)
                        {
                          t = Match_1(t, _id);
                          return(t);
                        }
                        ATerm z_2 (ATerm t)
                        {
                          t = Build_1(t, _id);
                          return(t);
                        }
                        t = Seq_2(t, y_2, z_2);
                        return(t);
                      }
                      t = Scope_2(t, _id, x_2);
                      LocalPopChoice(b_20);
                    }
                  else
                    {
                      t = a_20;
                      {
                        ATerm f_20 = t;
                        int h_20 = stack_ptr;
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
                                ATerm d_3 (ATerm t)
                                {
                                  t = Build_1(t, _id);
                                  return(t);
                                }
                                t = Seq_2(t, _id, d_3);
                                return(t);
                              }
                              t = Seq_2(t, b_3, c_3);
                              return(t);
                            }
                            t = Scope_2(t, _id, a_3);
                            LocalPopChoice(h_20);
                          }
                        else
                          {
                            t = f_20;
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
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      {
      }
    }
  return(t);
}
ATerm bottomup_to_var_0 (ATerm t)
{
  ATerm w_55 = NULL;
  w_55 = t;
  {
    ATerm k_20;
    k_20 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_17, (ATerm) ATmakeAppl(sym_Defined_2, term_l_20, not_null(w_55)));
      {
        ATerm e_3 (ATerm t)
        {
          t = term_w_17;
          return(t);
        }
        t = assert_1(t, e_3);
      }
    }
    t = k_20;
    {
      ATerm m_20;
      m_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATmakeAppl(sym_Defined_2, term_n_20, not_null(w_55)));
        {
          ATerm f_3 (ATerm t)
          {
            t = term_c_16;
            return(t);
          }
          t = assert_1(t, f_3);
        }
      }
      t = m_20;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm a_56 = NULL;
  a_56 = t;
  {
    ATerm o_20;
    o_20 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_o_18, not_null(a_56)), term_q_20);
      {
        ATerm g_3 (ATerm t)
        {
          t = term_p_18;
          return(t);
        }
        t = assert_1(t, g_3);
      }
    }
    t = o_20;
    {
      ATerm r_20;
      r_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_m_18, not_null(a_56)), term_v_20);
        {
          ATerm h_3 (ATerm t)
          {
            t = term_n_18;
            return(t);
          }
          t = assert_1(t, h_3);
        }
      }
      t = r_20;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL;
  l_56 = t;
  g_56 :
  if(match_cons(l_56, sym_Call_2))
    {
      m_56 = ATgetArgument(l_56, 0);
      o_56 = ATgetArgument(l_56, 1);
      h_56 :
      if(match_cons(m_56, sym_SVar_1))
        {
          n_56 = ATgetArgument(m_56, 0);
          i_56 :
          if(match_string(n_56, "innermost_1"))
            {
              j_56 :
              if(((ATgetType(o_56) == AT_LIST) && !(ATisEmpty(o_56))))
                {
                  p_56 = ATgetFirst((ATermList) o_56);
                  q_56 = (ATerm) ATgetNext((ATermList) o_56);
                  k_56 :
                  if(((ATgetType(q_56) == AT_LIST) && ATisEmpty(q_56)))
                    {
                      {
                        ATerm s_56 = NULL,u_56 = NULL;
                        ATerm i_3 (ATerm t)
                        {
                          ATerm j_3 (ATerm t)
                          {
                            t = term_y_20;
                            return(t);
                          }
                          t = say_1(t, j_3);
                          return(t);
                        }
                        t = if_verbose2_1(t, i_3);
                        {
                          ATerm c_21;
                          c_21 = t;
                          {
                            ATerm t_56 = NULL;
                            t = new_0(t);
                            {
                              t_56 = t;
                              if(((s_56 != NULL) && (s_56 != t_56)))
                                _fail(t_56);
                              else
                                s_56 = t_56;
                            }
                          }
                          t = c_21;
                          {
                            ATerm j_21;
                            j_21 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_56)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = j_21;
                            {
                              ATerm s_21;
                              s_21 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_56)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = s_21;
                              {
                                ATerm v_56 = NULL;
                                t = not_null(p_56);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    v_56 = t;
                                    if(((u_56 != NULL) && (u_56 != v_56)))
                                      _fail(v_56);
                                    else
                                      u_56 = v_56;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(s_56), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_u_15, not_null(u_56)), (ATerm) ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_56)), (ATerm) ATempty)))), term_k_12))));
                                  {
                                    t = propagate_mark_0(t);
                                    {
                                      t = fuse_with_bottomup_0(t);
                                      {
                                        ATerm k_3 (ATerm t)
                                        {
                                          ATerm t_21 = t;
                                          int u_21 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = BottomupToVarIsId_UnCond_0(t);
                                              LocalPopChoice(u_21);
                                            }
                                          else
                                            {
                                              t = t_21;
                                              t = BottomupToVarIsId_Cond_0(t);
                                            }
                                          return(t);
                                        }
                                        t = alltd_1(t, k_3);
                                        {
                                          t = desugar_0(t);
                                          {
                                            ATerm l_3 (ATerm t)
                                            {
                                              ATerm m_3 (ATerm t)
                                              {
                                                t = term_v_21;
                                                return(t);
                                              }
                                              t = say_1(t, m_3);
                                              return(t);
                                            }
                                            t = if_verbose1_1(t, l_3);
                                          }
                                        }
                                      }
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
ATerm alltd_1 (ATerm t, ATerm k_95 (ATerm))
{
  ATerm z_56 (ATerm t)
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_95(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = _all(t, z_56);
      }
    return(t);
  }
  t = z_56(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm s_57 = NULL;
  ATerm y_21;
  y_21 = t;
  {
    ATerm t_57 = NULL;
    t = new_0(t);
    {
      t_57 = t;
      {
        if(((s_57 != NULL) && (s_57 != t_57)))
          _fail(t_57);
        else
          s_57 = t_57;
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_j_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_57)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
              {
                ATerm n_3 (ATerm t)
                {
                  ATerm o_3 (ATerm t)
                  {
                    t = term_b_22;
                    return(t);
                  }
                  t = say_1(t, o_3);
                  return(t);
                }
                t = if_verbose2_1(t, n_3);
                _fail(t);
              }
            }
          {
            ATerm c_22 = t;
            int d_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,j_58 = NULL,k_58 = NULL;
                u_57 = t;
                d_57 :
                if(match_cons(u_57, sym_Seq_2))
                  {
                    v_57 = ATgetArgument(u_57, 0);
                    f_58 = ATgetArgument(u_57, 1);
                    e_57 :
                    if(match_cons(v_57, sym_All_1))
                      {
                        w_57 = ATgetArgument(v_57, 0);
                        f_57 :
                        if(match_cons(w_57, sym_Call_2))
                          {
                            x_57 = ATgetArgument(w_57, 0);
                            z_57 = ATgetArgument(w_57, 1);
                            g_57 :
                            if(match_cons(x_57, sym_SVar_1))
                              {
                                y_57 = ATgetArgument(x_57, 0);
                                j_57 :
                                if(match_string(y_57, "bottomup_1"))
                                  {
                                    k_57 :
                                    if(((ATgetType(z_57) == AT_LIST) && !(ATisEmpty(z_57))))
                                      {
                                        a_58 = ATgetFirst((ATermList) z_57);
                                        e_58 = (ATerm) ATgetNext((ATermList) z_57);
                                        l_57 :
                                        if(match_cons(a_58, sym_Call_2))
                                          {
                                            b_58 = ATgetArgument(a_58, 0);
                                            d_58 = ATgetArgument(a_58, 1);
                                            m_57 :
                                            if(match_cons(b_58, sym_SVar_1))
                                              {
                                                c_58 = ATgetArgument(b_58, 0);
                                                n_57 :
                                                if(((ATgetType(d_58) == AT_LIST) && ATisEmpty(d_58)))
                                                  {
                                                    o_57 :
                                                    if(((ATgetType(e_58) == AT_LIST) && ATisEmpty(e_58)))
                                                      {
                                                        p_57 :
                                                        if(match_cons(f_58, sym_Call_2))
                                                          {
                                                            g_58 = ATgetArgument(f_58, 0);
                                                            k_58 = ATgetArgument(f_58, 1);
                                                            q_57 :
                                                            if(match_cons(g_58, sym_SVar_1))
                                                              {
                                                                j_58 = ATgetArgument(g_58, 0);
                                                                r_57 :
                                                                if(((ATgetType(k_58) == AT_LIST) && ATisEmpty(k_58)))
                                                                  {
                                                                    {
                                                                      if(((s_57 != NULL) && (s_57 != c_58)))
                                                                        _fail(c_58);
                                                                      else
                                                                        s_57 = c_58;
                                                                      if(((s_57 != NULL) && (s_57 != j_58)))
                                                                        _fail(j_58);
                                                                      else
                                                                        s_57 = j_58;
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        _fail(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(d_22);
              }
            else
              {
                t = c_22;
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm q_3 (ATerm t)
                    {
                      t = term_e_22;
                      return(t);
                    }
                    t = debug_1(t, q_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, p_3);
                  _fail(t);
                }
              }
            {
              ATerm r_3 (ATerm t)
              {
                ATerm s_3 (ATerm t)
                {
                  t = term_f_22;
                  return(t);
                }
                t = say_1(t, s_3);
                return(t);
              }
              t = if_verbose2_1(t, r_3);
            }
          }
        }
      }
    }
  }
  t = y_21;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL;
  ATerm g_22;
  g_22 = t;
  {
    ATerm i_60 = NULL;
    t = new_0(t);
    {
      i_60 = t;
      {
        if(((g_60 != NULL) && (g_60 != i_60)))
          _fail(i_60);
        else
          g_60 = i_60;
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_k_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_60)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              {
                ATerm t_3 (ATerm t)
                {
                  ATerm u_3 (ATerm t)
                  {
                    t = term_v_22;
                    return(t);
                  }
                  t = say_1(t, u_3);
                  return(t);
                }
                t = if_verbose2_1(t, t_3);
                _fail(t);
              }
            }
          {
            ATerm w_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL;
                j_60 = t;
                a_59 :
                if(match_cons(j_60, sym_Call_2))
                  {
                    k_60 = ATgetArgument(j_60, 0);
                    m_60 = ATgetArgument(j_60, 1);
                    c_59 :
                    if(match_cons(k_60, sym_SVar_1))
                      {
                        l_60 = ATgetArgument(k_60, 0);
                        d_59 :
                        if(match_string(l_60, "bottomup_1"))
                          {
                            e_59 :
                            if(((ATgetType(m_60) == AT_LIST) && !(ATisEmpty(m_60))))
                              {
                                n_60 = ATgetFirst((ATermList) m_60);
                                i_61 = (ATerm) ATgetNext((ATermList) m_60);
                                f_59 :
                                if(match_cons(n_60, sym_Rec_2))
                                  {
                                    o_60 = ATgetArgument(n_60, 0);
                                    p_60 = ATgetArgument(n_60, 1);
                                    g_59 :
                                    if(match_cons(p_60, sym_Call_2))
                                      {
                                        q_60 = ATgetArgument(p_60, 0);
                                        s_60 = ATgetArgument(p_60, 1);
                                        h_59 :
                                        if(match_cons(q_60, sym_SVar_1))
                                          {
                                            r_60 = ATgetArgument(q_60, 0);
                                            i_59 :
                                            if(match_string(r_60, "try_1"))
                                              {
                                                j_59 :
                                                if(((ATgetType(s_60) == AT_LIST) && !(ATisEmpty(s_60))))
                                                  {
                                                    t_60 = ATgetFirst((ATermList) s_60);
                                                    h_61 = (ATerm) ATgetNext((ATermList) s_60);
                                                    k_59 :
                                                    if(match_cons(t_60, sym_Seq_2))
                                                      {
                                                        u_60 = ATgetArgument(t_60, 0);
                                                        y_60 = ATgetArgument(t_60, 1);
                                                        l_59 :
                                                        if(match_cons(u_60, sym_Call_2))
                                                          {
                                                            v_60 = ATgetArgument(u_60, 0);
                                                            x_60 = ATgetArgument(u_60, 1);
                                                            m_59 :
                                                            if(match_cons(v_60, sym_SVar_1))
                                                              {
                                                                w_60 = ATgetArgument(v_60, 0);
                                                                n_59 :
                                                                if(((ATgetType(x_60) == AT_LIST) && ATisEmpty(x_60)))
                                                                  {
                                                                    o_59 :
                                                                    if(match_cons(y_60, sym_Call_2))
                                                                      {
                                                                        z_60 = ATgetArgument(y_60, 0);
                                                                        b_61 = ATgetArgument(y_60, 1);
                                                                        p_59 :
                                                                        if(match_cons(z_60, sym_SVar_1))
                                                                          {
                                                                            a_61 = ATgetArgument(z_60, 0);
                                                                            q_59 :
                                                                            if(match_string(a_61, "bottomup_1"))
                                                                              {
                                                                                r_59 :
                                                                                if(((ATgetType(b_61) == AT_LIST) && !(ATisEmpty(b_61))))
                                                                                  {
                                                                                    c_61 = ATgetFirst((ATermList) b_61);
                                                                                    g_61 = (ATerm) ATgetNext((ATermList) b_61);
                                                                                    s_59 :
                                                                                    if(match_cons(c_61, sym_Call_2))
                                                                                      {
                                                                                        d_61 = ATgetArgument(c_61, 0);
                                                                                        f_61 = ATgetArgument(c_61, 1);
                                                                                        v_59 :
                                                                                        if(match_cons(d_61, sym_SVar_1))
                                                                                          {
                                                                                            e_61 = ATgetArgument(d_61, 0);
                                                                                            w_59 :
                                                                                            if(((ATgetType(f_61) == AT_LIST) && ATisEmpty(f_61)))
                                                                                              {
                                                                                                x_59 :
                                                                                                if(((ATgetType(g_61) == AT_LIST) && ATisEmpty(g_61)))
                                                                                                  {
                                                                                                    y_59 :
                                                                                                    if(((ATgetType(h_61) == AT_LIST) && ATisEmpty(h_61)))
                                                                                                      {
                                                                                                        e_60 :
                                                                                                        if(((ATgetType(i_61) == AT_LIST) && ATisEmpty(i_61)))
                                                                                                          {
                                                                                                            {
                                                                                                              if(((h_60 != NULL) && (h_60 != o_60)))
                                                                                                                _fail(o_60);
                                                                                                              else
                                                                                                                h_60 = o_60;
                                                                                                              {
                                                                                                                if(((g_60 != NULL) && (g_60 != w_60)))
                                                                                                                  _fail(w_60);
                                                                                                                else
                                                                                                                  g_60 = w_60;
                                                                                                                if(((h_60 != NULL) && (h_60 != e_61)))
                                                                                                                  _fail(e_61);
                                                                                                                else
                                                                                                                  h_60 = e_61;
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
                LocalPopChoice(x_22);
              }
            else
              {
                t = w_22;
                {
                  ATerm v_3 (ATerm t)
                  {
                    ATerm w_3 (ATerm t)
                    {
                      t = term_y_22;
                      return(t);
                    }
                    t = debug_1(t, w_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, v_3);
                  _fail(t);
                }
              }
            {
              ATerm x_3 (ATerm t)
              {
                ATerm y_3 (ATerm t)
                {
                  t = term_z_22;
                  return(t);
                }
                t = say_1(t, y_3);
                return(t);
              }
              t = if_verbose2_1(t, x_3);
            }
          }
        }
      }
    }
  }
  t = g_22;
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL;
  p_61 = t;
  m_61 :
  if(match_cons(p_61, sym_Call_2))
    {
      q_61 = ATgetArgument(p_61, 0);
      s_61 = ATgetArgument(p_61, 1);
      n_61 :
      if(match_cons(q_61, sym_SVar_1))
        {
          r_61 = ATgetArgument(q_61, 0);
          o_61 :
          if(((ATgetType(s_61) == AT_LIST) && ATisEmpty(s_61)))
            {
              t = not_null(r_61);
            }
          else
            {
              _fail(t);
            }
        }
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
ATerm SubsVar_2 (ATerm t, ATerm h_118 (ATerm), ATerm i_118 (ATerm))
{
  ATerm y_61 = NULL;
  ATerm a_62 = NULL,b_62 = NULL;
  y_61 = t;
  {
    ATerm c_62 = NULL;
    t = not_null(y_61);
    {
      ATerm d_62 = NULL;
      t = h_118(t);
      {
        c_62 = t;
        {
          if(((a_62 != NULL) && (a_62 != c_62)))
            _fail(c_62);
          else
            a_62 = c_62;
          {
            t = i_118(t);
            {
              d_62 = t;
              if(((b_62 != NULL) && (b_62 != d_62)))
                _fail(d_62);
              else
                b_62 = d_62;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_62), not_null(b_62));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL;
  l_62 = t;
  k_62 :
  if(match_cons(l_62, sym__2))
    {
      m_62 = ATgetArgument(l_62, 0);
      n_62 = ATgetArgument(l_62, 1);
      {
        ATerm q_62 = NULL;
        if(((q_62 != NULL) && (q_62 != n_62)))
          _fail(n_62);
        else
          q_62 = n_62;
      }
    }
  else
    {
      if(match_cons(l_62, sym__3))
        {
          m_62 = ATgetArgument(l_62, 0);
          n_62 = ATgetArgument(l_62, 1);
          o_62 = ATgetArgument(l_62, 2);
          {
            ATerm d_63 = NULL;
            ATerm e_63 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_62), not_null(n_62));
            {
              t = zip_1(t, _id);
              {
                e_63 = t;
                if(((d_63 != NULL) && (d_63 != e_63)))
                  _fail(e_63);
                else
                  d_63 = e_63;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_63), not_null(o_62));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm s_117 (ATerm), ATerm t_117 (ATerm))
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  t = subs_args_0(t);
  {
    m_63 = t;
    l_63 :
    if(match_cons(m_63, sym__2))
      {
        n_63 = ATgetArgument(m_63, 0);
        o_63 = ATgetArgument(m_63, 1);
        {
          t = not_null(o_63);
          {
            ATerm z_3 (ATerm t)
            {
              ATerm a_4 (ATerm t)
              {
                t = not_null(n_63);
                return(t);
              }
              t = SubsVar_2(t, s_117, a_4);
              t = t_117(t);
              return(t);
            }
            t = alltd_1(t, z_3);
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
ATerm substitute_1 (ATerm t, ATerm u_117 (ATerm))
{
  t = substitute_2(t, u_117, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_2(t, IsSVar_0, _id);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm g_121 (ATerm))
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        t = split_2(t, _id, g_121);
        {
          ATerm c_4 (ATerm t)
          {
            ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
            m_64 = t;
            d_64 :
            if(match_cons(m_64, sym__2))
              {
                n_64 = ATgetArgument(m_64, 0);
                r_64 = ATgetArgument(m_64, 1);
                e_64 :
                if(match_cons(n_64, sym_SDef_3))
                  {
                    o_64 = ATgetArgument(n_64, 0);
                    p_64 = ATgetArgument(n_64, 1);
                    q_64 = ATgetArgument(n_64, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_64), not_null(p_64), not_null(q_64));
                  }
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
          t = zip_1(t, c_4);
        }
        return(t);
      }
      t = Let_2(t, b_4, _id);
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 (ATerm t)
            {
              t = split_2(t, _id, g_121);
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL;
                  v_64 = t;
                  g_64 :
                  if(match_cons(v_64, sym__2))
                    {
                      w_64 = ATgetArgument(v_64, 0);
                      z_64 = ATgetArgument(v_64, 1);
                      l_64 :
                      if(match_cons(w_64, sym_VarDec_2))
                        {
                          x_64 = ATgetArgument(w_64, 0);
                          y_64 = ATgetArgument(w_64, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_64), not_null(y_64));
                        }
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
                t = zip_1(t, e_4);
              }
              return(t);
            }
            t = SDef_3(t, _id, d_4, _id);
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm f_4 (ATerm t)
              {
                t = g_121(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, f_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm c_83 (ATerm), ATerm d_83 (ATerm))
{
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
  m_65 = t;
  l_65 :
  if(match_cons(m_65, sym_Rec_2))
    {
      n_65 = ATgetArgument(m_65, 0);
      o_65 = ATgetArgument(m_65, 1);
      {
        ATerm s_65 = NULL,u_65 = NULL;
        ATerm t_65 = NULL;
        t = SSLgetAnnotations(not_null(m_65));
        {
          t_65 = t;
          if(((s_65 != NULL) && (s_65 != t_65)))
            _fail(t_65);
          else
            s_65 = t_65;
        }
        {
          t = not_null(n_65);
          {
            ATerm w_65 = NULL;
            t = c_83(t);
            {
              u_65 = t;
              {
                t = not_null(o_65);
                {
                  ATerm y_65 = NULL;
                  t = d_83(t);
                  {
                    w_65 = t;
                    {
                      ATerm z_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(u_65), not_null(w_65)), not_null(s_65));
                      {
                        z_65 = t;
                        if(((y_65 != NULL) && (y_65 != z_65)))
                          _fail(z_65);
                        else
                          y_65 = z_65;
                      }
                      t = not_null(y_65);
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
ATerm SDef_3 (ATerm t, ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm))
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
  t_66 = t;
  s_66 :
  if(match_cons(t_66, sym_SDef_3))
    {
      u_66 = ATgetArgument(t_66, 0);
      v_66 = ATgetArgument(t_66, 1);
      w_66 = ATgetArgument(t_66, 2);
      {
        ATerm b_67 = NULL,d_67 = NULL;
        ATerm c_67 = NULL;
        t = SSLgetAnnotations(not_null(t_66));
        {
          c_67 = t;
          if(((b_67 != NULL) && (b_67 != c_67)))
            _fail(c_67);
          else
            b_67 = c_67;
        }
        {
          t = not_null(u_66);
          {
            ATerm f_67 = NULL;
            t = g_83(t);
            {
              d_67 = t;
              {
                t = not_null(v_66);
                {
                  ATerm h_67 = NULL;
                  t = h_83(t);
                  {
                    f_67 = t;
                    {
                      t = not_null(w_66);
                      {
                        ATerm j_67 = NULL;
                        t = i_83(t);
                        {
                          h_67 = t;
                          {
                            ATerm k_67 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(d_67), not_null(f_67), not_null(h_67)), not_null(b_67));
                            {
                              k_67 = t;
                              if(((j_67 != NULL) && (j_67 != k_67)))
                                _fail(k_67);
                              else
                                j_67 = k_67;
                            }
                            t = not_null(j_67);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm e_83 (ATerm), ATerm f_83 (ATerm))
{
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL;
  b_69 = t;
  y_68 :
  if(match_cons(b_69, sym_Let_2))
    {
      c_69 = ATgetArgument(b_69, 0);
      d_69 = ATgetArgument(b_69, 1);
      {
        ATerm h_69 = NULL,j_69 = NULL;
        ATerm i_69 = NULL;
        t = SSLgetAnnotations(not_null(b_69));
        {
          i_69 = t;
          if(((h_69 != NULL) && (h_69 != i_69)))
            _fail(i_69);
          else
            h_69 = i_69;
        }
        {
          t = not_null(c_69);
          {
            ATerm l_69 = NULL;
            t = e_83(t);
            {
              j_69 = t;
              {
                t = not_null(d_69);
                {
                  ATerm n_69 = NULL;
                  t = f_83(t);
                  {
                    l_69 = t;
                    {
                      ATerm o_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(j_69), not_null(l_69)), not_null(h_69));
                      {
                        o_69 = t;
                        if(((n_69 != NULL) && (n_69 != o_69)))
                          _fail(o_69);
                        else
                          n_69 = o_69;
                      }
                      t = not_null(n_69);
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
ATerm sboundin_3 (ATerm t, ATerm h_121 (ATerm), ATerm i_121 (ATerm), ATerm j_121 (ATerm))
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, h_121, h_121);
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, j_121, j_121, h_121);
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            t = Rec_2(t, j_121, h_121);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
  w_69 = t;
  v_69 :
  if(match_cons(w_69, sym_Rec_2))
    {
      x_69 = ATgetArgument(w_69, 0);
      y_69 = ATgetArgument(w_69, 1);
      t = (ATerm) ATinsert(ATempty, not_null(x_69));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm q_70 = NULL,s_70 = NULL,e_71 = NULL,f_71 = NULL;
  q_70 = t;
  p_70 :
  if(match_cons(q_70, sym_SDef_3))
    {
      s_70 = ATgetArgument(q_70, 0);
      e_71 = ATgetArgument(q_70, 1);
      f_71 = ATgetArgument(q_70, 2);
      {
        t = not_null(e_71);
        {
          ATerm g_4 (ATerm t)
          {
            ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
            j_71 = t;
            e_70 :
            if(match_cons(j_71, sym_VarDec_2))
              {
                k_71 = ATgetArgument(j_71, 0);
                l_71 = ATgetArgument(j_71, 1);
                t = not_null(k_71);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, g_4);
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
  ATerm t_71 = NULL,u_71 = NULL,s_72 = NULL;
  t_71 = t;
  s_71 :
  if(match_cons(t_71, sym_Let_2))
    {
      u_71 = ATgetArgument(t_71, 0);
      s_72 = ATgetArgument(t_71, 1);
      {
        t = not_null(u_71);
        {
          ATerm h_4 (ATerm t)
          {
            ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL;
            v_72 = t;
            r_71 :
            if(match_cons(v_72, sym_SDef_3))
              {
                w_72 = ATgetArgument(v_72, 0);
                x_72 = ATgetArgument(v_72, 1);
                y_72 = ATgetArgument(v_72, 2);
                t = not_null(w_72);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm b_83 (ATerm))
{
  ATerm d_77 = NULL,e_77 = NULL;
  d_77 = t;
  b_77 :
  if(match_cons(d_77, sym_SVar_1))
    {
      e_77 = ATgetArgument(d_77, 0);
      {
        ATerm h_77 = NULL,j_77 = NULL;
        ATerm i_77 = NULL;
        t = SSLgetAnnotations(not_null(d_77));
        {
          i_77 = t;
          if(((h_77 != NULL) && (h_77 != i_77)))
            _fail(i_77);
          else
            h_77 = i_77;
        }
        {
          t = not_null(e_77);
          {
            ATerm l_77 = NULL;
            t = b_83(t);
            {
              j_77 = t;
              {
                ATerm m_77 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(j_77)), not_null(h_77));
                {
                  m_77 = t;
                  if(((l_77 != NULL) && (l_77 != m_77)))
                    _fail(m_77);
                  else
                    l_77 = m_77;
                }
                t = not_null(l_77);
              }
            }
          }
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
  ATerm i_4 (ATerm t)
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, i_4, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm c_121 (ATerm))
{
  t = Scope_2(t, c_121, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm w_77 = NULL,x_77 = NULL;
  w_77 = t;
  v_77 :
  if(match_cons(w_77, sym_DynamicRules_1))
    {
      x_77 = ATgetArgument(w_77, 0);
      {
        ATerm a_78 = NULL,c_78 = NULL;
        ATerm b_78 = NULL;
        t = SSLgetAnnotations(not_null(w_77));
        {
          b_78 = t;
          if(((a_78 != NULL) && (a_78 != b_78)))
            _fail(b_78);
          else
            a_78 = b_78;
        }
        {
          t = not_null(x_77);
          {
            ATerm e_78 = NULL;
            t = g_85(t);
            {
              c_78 = t;
              {
                ATerm f_78 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(c_78)), not_null(a_78));
                {
                  f_78 = t;
                  if(((e_78 != NULL) && (e_78 != f_78)))
                    _fail(f_78);
                  else
                    e_78 = f_78;
                }
                t = not_null(e_78);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm a_82 (ATerm), ATerm b_82 (ATerm))
{
  ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL;
  q_78 = t;
  p_78 :
  if(match_cons(q_78, sym_Scope_2))
    {
      r_78 = ATgetArgument(q_78, 0);
      s_78 = ATgetArgument(q_78, 1);
      {
        ATerm w_78 = NULL,a_79 = NULL;
        ATerm z_78 = NULL;
        t = SSLgetAnnotations(not_null(q_78));
        {
          z_78 = t;
          if(((w_78 != NULL) && (w_78 != z_78)))
            _fail(z_78);
          else
            w_78 = z_78;
        }
        {
          t = not_null(r_78);
          {
            ATerm c_79 = NULL;
            t = a_82(t);
            {
              a_79 = t;
              {
                t = not_null(s_78);
                {
                  ATerm e_79 = NULL;
                  t = b_82(t);
                  {
                    c_79 = t;
                    {
                      ATerm f_79 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(a_79), not_null(c_79)), not_null(w_78));
                      {
                        f_79 = t;
                        if(((e_79 != NULL) && (e_79 != f_79)))
                          _fail(f_79);
                        else
                          e_79 = f_79;
                      }
                      t = not_null(e_79);
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
ATerm tboundin_3 (ATerm t, ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm f_121 (ATerm))
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, f_121, d_121);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = DynamicRules_1(t, d_121);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm p_80 = NULL,q_80 = NULL;
  p_80 = t;
  o_80 :
  if(match_cons(p_80, sym_DynamicRules_1))
    {
      q_80 = ATgetArgument(p_80, 0);
      {
        t = not_null(q_80);
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
  ATerm v_80 = NULL,w_80 = NULL;
  v_80 = t;
  u_80 :
  if(match_cons(v_80, sym_Var_1))
    {
      w_80 = ATgetArgument(v_80, 0);
      t = (ATerm) ATinsert(ATempty, not_null(w_80));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm s_103 (ATerm))
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL;
  b_81 = t;
  a_81 :
  if(match_cons(b_81, sym__2))
    {
      c_81 = ATgetArgument(b_81, 0);
      d_81 = ATgetArgument(b_81, 1);
      {
        t = not_null(c_81);
        {
          ATerm h_81 (ATerm t)
          {
            ATerm o_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(d_81);
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
                      ATerm j_4 (ATerm t)
                      {
                        t = not_null(d_81);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_103, j_4);
                      t = h_81(t);
                      LocalPopChoice(r_23);
                    }
                  else
                    {
                      t = q_23;
                      t = Cons_2(t, _id, h_81);
                    }
                }
              }
            return(t);
          }
          t = h_81(t);
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
ATerm foldr_3 (ATerm t, ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm n_104 (ATerm))
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_104(t);
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL;
        m_81 = t;
        l_81 :
        if(((ATgetType(m_81) == AT_LIST) && !(ATisEmpty(m_81))))
          {
            n_81 = ATgetFirst((ATermList) m_81);
            o_81 = (ATerm) ATgetNext((ATermList) m_81);
            {
              ATerm v_81 = NULL,z_81 = NULL;
              ATerm u_23;
              u_23 = t;
              {
                ATerm y_81 = NULL;
                t = not_null(n_81);
                {
                  t = n_104(t);
                  {
                    y_81 = t;
                    if(((v_81 != NULL) && (v_81 != y_81)))
                      _fail(y_81);
                    else
                      v_81 = y_81;
                  }
                }
              }
              t = u_23;
              {
                ATerm c_82 = NULL;
                t = not_null(o_81);
                {
                  t = foldr_3(t, l_104, m_104, n_104);
                  {
                    c_82 = t;
                    if(((z_81 != NULL) && (z_81 != c_82)))
                      _fail(c_82);
                    else
                      z_81 = c_82;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_81), not_null(z_81));
                  t = m_104(t);
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
ATerm crush_3 (ATerm t, ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm l_103 (ATerm))
{
  ATerm k_82 = NULL;
  ATerm m_82 = NULL;
  k_82 = t;
  {
    ATerm t_82 = NULL;
    ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL;
    t = not_null(k_82);
    {
      t_82 = t;
      {
        t = SSL_explode_term(not_null(t_82));
        {
          v_82 = t;
          j_82 :
          if(match_cons(v_82, sym__2))
            {
              w_82 = ATgetArgument(v_82, 0);
              x_82 = ATgetArgument(v_82, 1);
              if(((m_82 != NULL) && (m_82 != x_82)))
                _fail(x_82);
              else
                m_82 = x_82;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_82);
      t = foldr_3(t, j_103, k_103, l_103);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL;
  l_83 = t;
  k_83 :
  if(match_cons(l_83, sym__2))
    {
      m_83 = ATgetArgument(l_83, 0);
      n_83 = ATgetArgument(l_83, 1);
      if(((m_83 != NULL) && (m_83 != n_83)))
        _fail(n_83);
      else
        m_83 = n_83;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm w_103 (ATerm), ATerm x_103 (ATerm))
{
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL;
  t_83 = t;
  s_83 :
  if(((ATgetType(t_83) == AT_LIST) && !(ATisEmpty(t_83))))
    {
      u_83 = ATgetFirst((ATermList) t_83);
      v_83 = (ATerm) ATgetNext((ATermList) t_83);
      {
        t = x_103(t);
        {
          ATerm k_4 (ATerm t)
          {
            ATerm a_84 = NULL;
            a_84 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_83), not_null(a_84));
              t = w_103(t);
            }
            return(t);
          }
          t = fetch_1(t, k_4);
        }
        t = not_null(v_83);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm o_103 (ATerm))
{
  ATerm g_84 = NULL,i_84 = NULL,j_84 = NULL;
  g_84 = t;
  f_84 :
  if(match_cons(g_84, sym__2))
    {
      i_84 = ATgetArgument(g_84, 0);
      j_84 = ATgetArgument(g_84, 1);
      {
        t = not_null(i_84);
        {
          ATerm p_84 (ATerm t)
          {
            ATerm v_23 = t;
            int w_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(w_23);
              }
            else
              {
                t = v_23;
                {
                  ATerm x_23 = t;
                  int y_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_4 (ATerm t)
                      {
                        t = not_null(j_84);
                        return(t);
                      }
                      t = HdMember_p__2(t, o_103, l_4);
                      t = p_84(t);
                      LocalPopChoice(y_23);
                    }
                  else
                    {
                      t = x_23;
                      t = Cons_2(t, _id, p_84);
                    }
                }
              }
            return(t);
          }
          t = p_84(t);
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
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL;
  t_84 = t;
  r_84 :
  if(match_cons(t_84, sym__2))
    {
      u_84 = ATgetArgument(t_84, 0);
      v_84 = ATgetArgument(t_84, 1);
      s_84 :
      if(((ATgetType(v_84) == AT_LIST) && !(ATisEmpty(v_84))))
        {
          w_84 = ATgetFirst((ATermList) v_84);
          x_84 = (ATerm) ATgetNext((ATermList) v_84);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_84)), not_null(w_84)), not_null(x_84));
        }
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
  ATerm u_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL;
  u_85 = t;
  q_85 :
  if(((ATgetType(u_85) == AT_LIST) && !(ATisEmpty(u_85))))
    {
      x_85 = ATgetFirst((ATermList) u_85);
      a_86 = (ATerm) ATgetNext((ATermList) u_85);
      t_85 :
      if(match_cons(x_85, sym__2))
        {
          y_85 = ATgetArgument(x_85, 0);
          z_85 = ATgetArgument(x_85, 1);
          {
            ATerm e_86 = NULL,f_86 = NULL,l_86 = NULL,r_86 = NULL;
            ATerm z_23;
            z_23 = t;
            {
              ATerm g_86 = NULL;
              ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL;
              t = not_null(z_85);
              {
                g_86 = t;
                {
                  t = SSL_explode_term(not_null(g_86));
                  {
                    i_86 = t;
                    f_85 :
                    if(match_cons(i_86, sym__2))
                      {
                        j_86 = ATgetArgument(i_86, 0);
                        k_86 = ATgetArgument(i_86, 1);
                        {
                          if(((e_86 != NULL) && (e_86 != j_86)))
                            _fail(j_86);
                          else
                            e_86 = j_86;
                          if(((f_86 != NULL) && (f_86 != k_86)))
                            _fail(k_86);
                          else
                            f_86 = k_86;
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
            t = z_23;
            {
              ATerm a_24;
              a_24 = t;
              {
                ATerm m_86 = NULL;
                ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL;
                t = not_null(y_85);
                {
                  m_86 = t;
                  {
                    t = SSL_explode_term(not_null(m_86));
                    {
                      o_86 = t;
                      o_85 :
                      if(match_cons(o_86, sym__2))
                        {
                          p_86 = ATgetArgument(o_86, 0);
                          q_86 = ATgetArgument(o_86, 1);
                          {
                            if(((e_86 != NULL) && (e_86 != p_86)))
                              _fail(p_86);
                            else
                              e_86 = p_86;
                            if(((l_86 != NULL) && (l_86 != q_86)))
                              _fail(q_86);
                            else
                              l_86 = q_86;
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
              t = a_24;
              {
                ATerm s_86 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_86), not_null(f_86));
                {
                  t = zip_1(t, _id);
                  {
                    s_86 = t;
                    if(((r_86 != NULL) && (r_86 != s_86)))
                      _fail(s_86);
                    else
                      r_86 = s_86;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_86), not_null(a_86));
                  {
                    ATerm b_24 = t;
                    int c_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(c_24);
                      }
                    else
                      {
                        t = b_24;
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
  ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL;
  c_87 = t;
  a_87 :
  if(((ATgetType(c_87) == AT_LIST) && !(ATisEmpty(c_87))))
    {
      d_87 = ATgetFirst((ATermList) c_87);
      g_87 = (ATerm) ATgetNext((ATermList) c_87);
      b_87 :
      if(match_cons(d_87, sym__2))
        {
          e_87 = ATgetArgument(d_87, 0);
          f_87 = ATgetArgument(d_87, 1);
          {
            ATerm i_87 = NULL;
            if(((e_87 != NULL) && (e_87 != f_87)))
              _fail(f_87);
            else
              e_87 = f_87;
            {
              if(((i_87 != NULL) && (i_87 != g_87)))
                _fail(g_87);
              else
                i_87 = g_87;
              t = not_null(i_87);
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
ATerm while_not_2 (ATerm t, ATerm p_106 (ATerm), ATerm q_106 (ATerm))
{
  ATerm k_87 (ATerm t)
  {
    ATerm d_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_106(t);
        LocalPopChoice(o_24);
      }
    else
      {
        t = d_24;
        {
          t = q_106(t);
          t = k_87(t);
        }
      }
    return(t);
  }
  t = k_87(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm))
{
  t = s_106(t);
  t = while_not_2(t, t_106, u_106);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 (ATerm t)
      {
        ATerm m_87 = NULL;
        m_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(m_87));
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 (ATerm t)
            {
              ATerm t_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = t_24;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, p_4);
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, m_4, n_4, o_4);
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm b_120 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm s_87 (ATerm t)
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_119(t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm b_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_87 = NULL;
              ATerm f_25;
              f_25 = t;
              {
                ATerm r_87 = NULL;
                t = a_120(t);
                {
                  r_87 = t;
                  if(((q_87 != NULL) && (q_87 != r_87)))
                    _fail(r_87);
                  else
                    q_87 = r_87;
                }
              }
              t = f_25;
              {
                ATerm q_4 (ATerm t)
                {
                  ATerm s_4 (ATerm t)
                  {
                    t = not_null(q_87);
                    return(t);
                  }
                  t = split_2(t, s_87, s_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm r_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = b_120(t, q_4, s_87, r_4);
                {
                  ATerm t_4 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm u_4 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, t_4, u_4, _id);
                }
              }
              LocalPopChoice(e_25);
            }
          else
            {
              t = b_25;
              {
                ATerm v_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm w_4 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, v_4, w_4, s_87);
              }
            }
        }
      }
    return(t);
  }
  t = s_87(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, x_4, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL;
  b_88 = t;
  w_87 :
  if(match_cons(b_88, sym_LRule_1))
    {
      c_88 = ATgetArgument(b_88, 0);
      x_87 :
      if(match_cons(c_88, sym_Rule_3))
        {
          y_87 = ATgetArgument(c_88, 0);
          z_87 = ATgetArgument(c_88, 1);
          a_88 = ATgetArgument(c_88, 2);
          {
            t = not_null(y_87);
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
      if(match_cons(b_88, sym_Scope_2))
        {
          c_88 = ATgetArgument(b_88, 0);
          d_88 = ATgetArgument(b_88, 1);
          t = not_null(c_88);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm u_88 = NULL,v_88 = NULL;
  u_88 = t;
  t_88 :
  if(match_cons(u_88, sym_Var_1))
    {
      v_88 = ATgetArgument(u_88, 0);
      {
        ATerm l_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_88 = NULL,a_89 = NULL;
            ATerm z_88 = NULL;
            t = SSLgetAnnotations(not_null(u_88));
            {
              z_88 = t;
              if(((y_88 != NULL) && (y_88 != z_88)))
                _fail(z_88);
              else
                y_88 = z_88;
            }
            {
              t = not_null(v_88);
              {
                ATerm c_89 = NULL;
                t = q_0(t);
                {
                  a_89 = t;
                  {
                    ATerm d_89 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(a_89)), not_null(y_88));
                    {
                      d_89 = t;
                      if(((c_89 != NULL) && (c_89 != d_89)))
                        _fail(d_89);
                      else
                        c_89 = d_89;
                    }
                    t = not_null(c_89);
                  }
                }
              }
            }
            LocalPopChoice(o_25);
          }
        else
          {
            t = l_25;
            {
              ATerm g_89 = NULL,i_89 = NULL;
              ATerm h_89 = NULL;
              t = SSLgetAnnotations(not_null(u_88));
              {
                h_89 = t;
                if(((g_89 != NULL) && (g_89 != h_89)))
                  _fail(h_89);
                else
                  g_89 = h_89;
              }
              {
                t = not_null(v_88);
                {
                  ATerm k_89 = NULL;
                  t = q_0(t);
                  {
                    i_89 = t;
                    {
                      ATerm l_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_89)), not_null(g_89));
                      {
                        l_89 = t;
                        if(((k_89 != NULL) && (k_89 != l_89)))
                          _fail(l_89);
                        else
                          k_89 = l_89;
                      }
                      t = not_null(k_89);
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
ATerm DistBinding_2 (ATerm t, ATerm u_118 (ATerm), ATerm v_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm y_89 = NULL,z_89 = NULL,a_90 = NULL,b_90 = NULL;
  y_89 = t;
  x_89 :
  if(match_cons(y_89, sym__3))
    {
      z_89 = ATgetArgument(y_89, 0);
      a_90 = ATgetArgument(y_89, 1);
      b_90 = ATgetArgument(y_89, 2);
      {
        t = not_null(z_89);
        {
          ATerm y_4 (ATerm t)
          {
            ATerm f_90 = NULL;
            f_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_90), not_null(b_90));
              t = u_118(t);
            }
            return(t);
          }
          ATerm z_4 (ATerm t)
          {
            ATerm h_90 = NULL;
            h_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_90), not_null(a_90));
              t = u_118(t);
            }
            return(t);
          }
          t = v_118(t, y_4, z_4, _id);
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
  ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL;
  o_90 = t;
  n_90 :
  if(match_cons(o_90, sym__2))
    {
      p_90 = ATgetArgument(o_90, 0);
      q_90 = ATgetArgument(o_90, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_90)), not_null(p_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
  y_90 = t;
  v_90 :
  if(match_cons(y_90, sym__2))
    {
      z_90 = ATgetArgument(y_90, 0);
      c_91 = ATgetArgument(y_90, 1);
      w_90 :
      if(((ATgetType(z_90) == AT_LIST) && !(ATisEmpty(z_90))))
        {
          a_91 = ATgetFirst((ATermList) z_90);
          b_91 = (ATerm) ATgetNext((ATermList) z_90);
          x_90 :
          if(((ATgetType(c_91) == AT_LIST) && !(ATisEmpty(c_91))))
            {
              d_91 = ATgetFirst((ATermList) c_91);
              e_91 = (ATerm) ATgetNext((ATermList) c_91);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(a_91), not_null(d_91)), (ATerm) ATmakeAppl(sym__2, not_null(b_91), not_null(e_91)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL;
  o_91 = t;
  l_91 :
  if(match_cons(o_91, sym__2))
    {
      p_91 = ATgetArgument(o_91, 0);
      q_91 = ATgetArgument(o_91, 1);
      m_91 :
      if(((ATgetType(p_91) == AT_LIST) && ATisEmpty(p_91)))
        {
          n_91 :
          if(((ATgetType(q_91) == AT_LIST) && ATisEmpty(q_91)))
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
ATerm genzip_4 (ATerm t, ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm z_99 (ATerm))
{
  ATerm s_91 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_99(t);
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        {
          t = x_99(t);
          {
            t = _2(t, z_99, s_91);
            t = y_99(t);
          }
        }
      }
    return(t);
  }
  t = s_91(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm b_100 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, b_100);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm o_118 (ATerm), ATerm p_118 (ATerm, ATerm (ATerm)))
{
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL;
  a_92 = t;
  z_91 :
  if(match_cons(a_92, sym__2))
    {
      b_92 = ATgetArgument(a_92, 0);
      c_92 = ATgetArgument(a_92, 1);
      {
        ATerm h_92 = NULL,i_92 = NULL,j_92 = NULL,p_92 = NULL;
        ATerm t_25;
        t_25 = t;
        {
          ATerm k_92 = NULL;
          t = not_null(b_92);
          {
            ATerm l_92 = NULL;
            t = o_118(t);
            {
              k_92 = t;
              {
                if(((h_92 != NULL) && (h_92 != k_92)))
                  _fail(k_92);
                else
                  h_92 = k_92;
                {
                  ATerm m_92 = NULL,o_92 = NULL;
                  t = map_1(t, new_0);
                  {
                    l_92 = t;
                    {
                      if(((i_92 != NULL) && (i_92 != l_92)))
                        _fail(l_92);
                      else
                        i_92 = l_92;
                      {
                        ATerm n_92 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_92), not_null(i_92));
                        {
                          t = zip_1(t, _id);
                          {
                            n_92 = t;
                            if(((m_92 != NULL) && (m_92 != n_92)))
                              _fail(n_92);
                            else
                              m_92 = n_92;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_92), not_null(c_92));
                          {
                            ATerm a_26 = t;
                            int b_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(b_26);
                              }
                            else
                              {
                                t = a_26;
                                t = conc_more_lists_0(t);
                              }
                            {
                              o_92 = t;
                              if(((j_92 != NULL) && (j_92 != o_92)))
                                _fail(o_92);
                              else
                                j_92 = o_92;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = t_25;
        {
          ATerm q_92 = NULL;
          t = not_null(b_92);
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(i_92);
              return(t);
            }
            t = p_118(t, a_5);
            {
              q_92 = t;
              if(((p_92 != NULL) && (p_92 != q_92)))
                _fail(q_92);
              else
                p_92 = q_92;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(p_92), not_null(c_92), not_null(j_92));
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
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL;
  a_93 = t;
  y_92 :
  if(match_cons(a_93, sym__2))
    {
      b_93 = ATgetArgument(a_93, 0);
      c_93 = ATgetArgument(a_93, 1);
      z_92 :
      if(((ATgetType(c_93) == AT_LIST) && !(ATisEmpty(c_93))))
        {
          d_93 = ATgetFirst((ATermList) c_93);
          e_93 = (ATerm) ATgetNext((ATermList) c_93);
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_93), not_null(e_93));
        }
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
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL,u_93 = NULL,v_93 = NULL;
  p_93 = t;
  m_93 :
  if(match_cons(p_93, sym__2))
    {
      q_93 = ATgetArgument(p_93, 0);
      r_93 = ATgetArgument(p_93, 1);
      n_93 :
      if(((ATgetType(r_93) == AT_LIST) && !(ATisEmpty(r_93))))
        {
          s_93 = ATgetFirst((ATermList) r_93);
          v_93 = (ATerm) ATgetNext((ATermList) r_93);
          o_93 :
          if(match_cons(s_93, sym__2))
            {
              t_93 = ATgetArgument(s_93, 0);
              u_93 = ATgetArgument(s_93, 1);
              {
                ATerm x_93 = NULL;
                if(((q_93 != NULL) && (q_93 != t_93)))
                  _fail(t_93);
                else
                  q_93 = t_93;
                {
                  if(((x_93 != NULL) && (x_93 != u_93)))
                    _fail(u_93);
                  else
                    x_93 = u_93;
                  t = not_null(x_93);
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
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm z_118 (ATerm, ATerm (ATerm)))
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL;
  c_94 = t;
  b_94 :
  if(match_cons(c_94, sym__2))
    {
      d_94 = ATgetArgument(c_94, 0);
      e_94 = ATgetArgument(c_94, 1);
      {
        t = not_null(d_94);
        {
          ATerm b_5 (ATerm t)
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(e_94);
              return(t);
            }
            t = split_2(t, _id, c_5);
            t = lookup_0(t);
            return(t);
          }
          t = z_118(t, b_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm n_109 (ATerm))
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL;
  l_94 = t;
  k_94 :
  if(match_cons(l_94, sym__2))
    {
      m_94 = ATgetArgument(l_94, 0);
      n_94 = ATgetArgument(l_94, 1);
      {
        t = not_null(m_94);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm q_94 = NULL;
            q_94 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_94), not_null(n_94));
              t = n_109(t);
            }
            return(t);
          }
          t = _all(t, d_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm x_108 (ATerm))
{
  ATerm u_94 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_108(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = all_dist_1(t, u_94);
      }
    return(t);
  }
  t = u_94(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm j_118 (ATerm, ATerm (ATerm)), ATerm k_118 (ATerm), ATerm l_118 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_118 (ATerm, ATerm (ATerm)))
{
  ATerm y_94 = NULL;
  y_94 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_94), (ATerm) ATempty);
    {
      ATerm b_95 (ATerm t)
      {
        ATerm e_5 (ATerm t)
        {
          ATerm p_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, j_118);
              LocalPopChoice(s_26);
            }
          else
            {
              t = p_26;
              {
                t = RnBinding_2(t, k_118, m_118);
                t = DistBinding_2(t, b_95, l_118);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, e_5);
        return(t);
      }
      t = b_95(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm c_95 (ATerm t, ATerm d_95 (ATerm))
  {
    t = Scope_2(t, d_95, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, c_95);
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
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL;
  g_95 = t;
  f_95 :
  if(((ATgetType(g_95) == AT_LIST) && !(ATisEmpty(g_95))))
    {
      h_95 = ATgetFirst((ATermList) g_95);
      i_95 = (ATerm) ATgetNext((ATermList) g_95);
      t = not_null(h_95);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL;
  p_95 = t;
  o_95 :
  if(match_cons(p_95, sym__2))
    {
      q_95 = ATgetArgument(p_95, 0);
      r_95 = ATgetArgument(p_95, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_95), not_null(r_95));
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
ATerm rewrite_1 (ATerm t, ATerm q_111 (ATerm))
{
  ATerm x_95 = NULL;
  ATerm z_95 = NULL;
  x_95 = t;
  {
    ATerm a_96 = NULL;
    t = term_x_26;
    {
      t = q_111(t);
      {
        a_96 = t;
        if(((z_95 != NULL) && (z_95 != a_96)))
          _fail(a_96);
        else
          z_95 = a_96;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_95), not_null(x_95));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL;
  p_96 = t;
  n_96 :
  if(match_cons(p_96, sym_Call_2))
    {
      q_96 = ATgetArgument(p_96, 0);
      s_96 = ATgetArgument(p_96, 1);
      o_96 :
      if(match_cons(q_96, sym_SVar_1))
        {
          r_96 = ATgetArgument(q_96, 0);
          {
            ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,m_97 = NULL;
            ATerm y_26;
            y_26 = t;
            {
              ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL;
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_96)), (ATerm) ATinsert(ATempty, term_v_15));
              {
                ATerm f_5 (ATerm t)
                {
                  t = term_z_26;
                  return(t);
                }
                t = rewrite_1(t, f_5);
                {
                  e_97 = t;
                  h_96 :
                  if(match_cons(e_97, sym_Defined_3))
                    {
                      f_97 = ATgetArgument(e_97, 0);
                      g_97 = ATgetArgument(e_97, 1);
                      h_97 = ATgetArgument(e_97, 2);
                      i_96 :
                      if(match_string(f_97, "b_0"))
                        {
                          ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL;
                          if(((a_97 != NULL) && (a_97 != g_97)))
                            _fail(g_97);
                          else
                            a_97 = g_97;
                          {
                            if(((b_97 != NULL) && (b_97 != h_97)))
                              _fail(h_97);
                            else
                              b_97 = h_97;
                            {
                              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_96), not_null(a_97), not_null(b_97));
                              {
                                t = strename_0(t);
                                {
                                  i_97 = t;
                                  g_96 :
                                  if(match_cons(i_97, sym_SDef_3))
                                    {
                                      j_97 = ATgetArgument(i_97, 0);
                                      k_97 = ATgetArgument(i_97, 1);
                                      l_97 = ATgetArgument(i_97, 2);
                                      {
                                        if(((r_96 != NULL) && (r_96 != j_97)))
                                          _fail(j_97);
                                        else
                                          r_96 = j_97;
                                        {
                                          if(((c_97 != NULL) && (c_97 != k_97)))
                                            _fail(k_97);
                                          else
                                            c_97 = k_97;
                                          if(((d_97 != NULL) && (d_97 != l_97)))
                                            _fail(l_97);
                                          else
                                            d_97 = l_97;
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
            }
            t = y_26;
            {
              ATerm r_97 = NULL;
              t = not_null(a_97);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm n_97 = NULL,o_97 = NULL,p_97 = NULL;
                  n_97 = t;
                  l_96 :
                  if(match_cons(n_97, sym_VarDec_2))
                    {
                      o_97 = ATgetArgument(n_97, 0);
                      p_97 = ATgetArgument(n_97, 1);
                      t = not_null(o_97);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  r_97 = t;
                  if(((m_97 != NULL) && (m_97 != r_97)))
                    _fail(r_97);
                  else
                    m_97 = r_97;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(m_97), not_null(s_96), not_null(d_97));
                t = substitute_2(t, IsSVar_0, _id);
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
  ATerm j_98 = NULL;
  ATerm a_27;
  a_27 = t;
  {
    ATerm m_98 = NULL;
    t = new_0(t);
    {
      m_98 = t;
      {
        if(((j_98 != NULL) && (j_98 != m_98)))
          _fail(m_98);
        else
          j_98 = m_98;
        {
          ATerm b_27 = t;
          int c_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_e_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_98)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              LocalPopChoice(c_27);
            }
          else
            {
              t = b_27;
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm i_5 (ATerm t)
                  {
                    t = term_j_27;
                    return(t);
                  }
                  t = say_1(t, i_5);
                  return(t);
                }
                t = if_verbose2_1(t, h_5);
                _fail(t);
              }
            }
          {
            ATerm k_27 = t;
            int l_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL;
                n_98 = t;
                c_98 :
                if(match_cons(n_98, sym_LChoice_2))
                  {
                    o_98 = ATgetArgument(n_98, 0);
                    s_98 = ATgetArgument(n_98, 1);
                    d_98 :
                    if(match_cons(o_98, sym_Call_2))
                      {
                        p_98 = ATgetArgument(o_98, 0);
                        r_98 = ATgetArgument(o_98, 1);
                        g_98 :
                        if(match_cons(p_98, sym_SVar_1))
                          {
                            q_98 = ATgetArgument(p_98, 0);
                            h_98 :
                            if(((ATgetType(r_98) == AT_LIST) && ATisEmpty(r_98)))
                              {
                                i_98 :
                                if(match_cons(s_98, sym_Id_0))
                                  {
                                    if(((j_98 != NULL) && (j_98 != q_98)))
                                      _fail(q_98);
                                    else
                                      j_98 = q_98;
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(l_27);
              }
            else
              {
                t = k_27;
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm k_5 (ATerm t)
                    {
                      t = term_p_27;
                      return(t);
                    }
                    t = debug_1(t, k_5);
                    return(t);
                  }
                  t = if_verbose1_1(t, j_5);
                  _fail(t);
                }
              }
            {
              ATerm l_5 (ATerm t)
              {
                ATerm m_5 (ATerm t)
                {
                  t = term_r_27;
                  return(t);
                }
                t = say_1(t, m_5);
                return(t);
              }
              t = if_verbose2_1(t, l_5);
            }
          }
        }
      }
    }
  }
  t = a_27;
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
ATerm assert_1 (ATerm t, ATerm o_111 (ATerm))
{
  ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL;
  a_99 = t;
  z_98 :
  if(match_cons(a_99, sym__2))
    {
      b_99 = ATgetArgument(a_99, 0);
      c_99 = ATgetArgument(a_99, 1);
      {
        ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL;
        ATerm u_27;
        u_27 = t;
        {
          ATerm i_99 = NULL;
          ATerm j_99 = NULL,k_99 = NULL,l_99 = NULL;
          t = o_111(t);
          {
            i_99 = t;
            {
              if(((f_99 != NULL) && (f_99 != i_99)))
                _fail(i_99);
              else
                f_99 = i_99;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_99), not_null(b_99), not_null(c_99));
                {
                  t = table_push_0(t);
                  {
                    ATerm v_27 = t;
                    int w_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_99), term_d_17);
                        t = table_get_0(t);
                        LocalPopChoice(w_27);
                      }
                    else
                      {
                        t = v_27;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      j_99 = t;
                      y_98 :
                      if(((ATgetType(j_99) == AT_LIST) && !(ATisEmpty(j_99))))
                        {
                          k_99 = ATgetFirst((ATermList) j_99);
                          l_99 = (ATerm) ATgetNext((ATermList) j_99);
                          {
                            if(((g_99 != NULL) && (g_99 != k_99)))
                              _fail(k_99);
                            else
                              g_99 = k_99;
                            {
                              if(((h_99 != NULL) && (h_99 != l_99)))
                                _fail(l_99);
                              else
                                h_99 = l_99;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(f_99), term_d_17, (ATerm) ATinsert(CheckATermList(not_null(h_99)), (ATerm) ATinsert(CheckATermList(not_null(g_99)), not_null(b_99))));
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
        t = u_27;
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
  ATerm r_99 = NULL,s_99 = NULL,t_99 = NULL,u_99 = NULL;
  r_99 = t;
  q_99 :
  if(match_cons(r_99, sym_SDef_3))
    {
      s_99 = ATgetArgument(r_99, 0);
      t_99 = ATgetArgument(r_99, 1);
      u_99 = ATgetArgument(r_99, 2);
      {
        ATerm x_27;
        x_27 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_99)), (ATerm) ATinsert(ATempty, term_v_15)), (ATerm) ATmakeAppl(sym_Defined_3, term_y_27, not_null(t_99), not_null(u_99)));
          {
            ATerm n_5 (ATerm t)
            {
              t = term_z_26;
              return(t);
            }
            t = assert_1(t, n_5);
          }
        }
        t = x_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm k_84 (ATerm))
{
  ATerm l_100 = NULL,m_100 = NULL;
  l_100 = t;
  k_100 :
  if(match_cons(l_100, sym_Strategies_1))
    {
      m_100 = ATgetArgument(l_100, 0);
      {
        ATerm p_100 = NULL,r_100 = NULL;
        ATerm q_100 = NULL;
        t = SSLgetAnnotations(not_null(l_100));
        {
          q_100 = t;
          if(((p_100 != NULL) && (p_100 != q_100)))
            _fail(q_100);
          else
            p_100 = q_100;
        }
        {
          t = not_null(m_100);
          {
            ATerm t_100 = NULL;
            t = k_84(t);
            {
              r_100 = t;
              {
                ATerm u_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(r_100)), not_null(p_100));
                {
                  u_100 = t;
                  if(((t_100 != NULL) && (t_100 != u_100)))
                    _fail(u_100);
                  else
                    t_100 = u_100;
                }
                t = not_null(t_100);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm h_84 (ATerm))
{
  ATerm e_101 = NULL,f_101 = NULL;
  e_101 = t;
  d_101 :
  if(match_cons(e_101, sym_Signature_1))
    {
      f_101 = ATgetArgument(e_101, 0);
      {
        ATerm i_101 = NULL,k_101 = NULL;
        ATerm j_101 = NULL;
        t = SSLgetAnnotations(not_null(e_101));
        {
          j_101 = t;
          if(((i_101 != NULL) && (i_101 != j_101)))
            _fail(j_101);
          else
            i_101 = j_101;
        }
        {
          t = not_null(f_101);
          {
            ATerm m_101 = NULL;
            t = h_84(t);
            {
              k_101 = t;
              {
                ATerm n_101 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(k_101)), not_null(i_101));
                {
                  n_101 = t;
                  if(((m_101 != NULL) && (m_101 != n_101)))
                    _fail(n_101);
                  else
                    m_101 = n_101;
                }
                t = not_null(m_101);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm x_101 = NULL,y_101 = NULL;
  x_101 = t;
  w_101 :
  if(match_cons(x_101, sym_Specification_1))
    {
      y_101 = ATgetArgument(x_101, 0);
      {
        ATerm b_102 = NULL,d_102 = NULL;
        ATerm c_102 = NULL;
        t = SSLgetAnnotations(not_null(x_101));
        {
          c_102 = t;
          if(((b_102 != NULL) && (b_102 != c_102)))
            _fail(c_102);
          else
            b_102 = c_102;
        }
        {
          t = not_null(y_101);
          {
            ATerm f_102 = NULL;
            t = m_84(t);
            {
              d_102 = t;
              {
                ATerm g_102 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(d_102)), not_null(b_102));
                {
                  g_102 = t;
                  if(((f_102 != NULL) && (f_102 != g_102)))
                    _fail(g_102);
                  else
                    f_102 = g_102;
                }
                t = not_null(f_102);
              }
            }
          }
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
  ATerm o_5 (ATerm t)
  {
    ATerm p_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm q_5 (ATerm t)
    {
      ATerm r_5 (ATerm t)
      {
        ATerm s_5 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, s_5);
        return(t);
      }
      t = Cons_2(t, r_5, Nil_0);
      return(t);
    }
    t = Cons_2(t, p_5, q_5);
    return(t);
  }
  t = Specification_1(t, o_5);
  return(t);
}
ATerm _2 (ATerm t, ATerm h_80 (ATerm), ATerm i_80 (ATerm))
{
  ATerm r_102 = NULL,s_102 = NULL,t_102 = NULL;
  r_102 = t;
  q_102 :
  if(match_cons(r_102, sym__2))
    {
      s_102 = ATgetArgument(r_102, 0);
      t_102 = ATgetArgument(r_102, 1);
      {
        ATerm x_102 = NULL,z_102 = NULL;
        ATerm y_102 = NULL;
        t = SSLgetAnnotations(not_null(r_102));
        {
          y_102 = t;
          if(((x_102 != NULL) && (x_102 != y_102)))
            _fail(y_102);
          else
            x_102 = y_102;
        }
        {
          t = not_null(s_102);
          {
            ATerm b_103 = NULL;
            t = h_80(t);
            {
              z_102 = t;
              {
                t = not_null(t_102);
                {
                  ATerm d_103 = NULL;
                  t = i_80(t);
                  {
                    b_103 = t;
                    {
                      ATerm e_103 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_102), not_null(b_103)), not_null(x_102));
                      {
                        e_103 = t;
                        if(((d_103 != NULL) && (d_103 != e_103)))
                          _fail(e_103);
                        else
                          d_103 = e_103;
                      }
                      t = not_null(d_103);
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
  ATerm v_103 = NULL;
  ATerm z_27;
  z_27 = t;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm z_103 = NULL,a_104 = NULL;
      z_103 = t;
      u_103 :
      if(match_cons(z_103, sym_Program_1))
        {
          a_104 = ATgetArgument(z_103, 0);
          if(((v_103 != NULL) && (v_103 != a_104)))
            _fail(a_104);
          else
            v_103 = a_104;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, t_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_28), not_null(v_103)), term_a_28));
      {
        t = printnl_0(t);
        {
          t = term_c_28;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_27;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm e_104 = NULL,f_104 = NULL,g_104 = NULL;
  e_104 = t;
  d_104 :
  if(match_cons(e_104, sym__2))
    {
      f_104 = ATgetArgument(e_104, 0);
      g_104 = ATgetArgument(e_104, 1);
      {
        ATerm d_28;
        d_28 = t;
        t = SSL_printnl(not_null(f_104), not_null(g_104));
        t = d_28;
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
  ATerm q_104 = NULL;
  q_104 = t;
  t = SSL_implode_string(not_null(q_104));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_28);
    }
  else
    {
      t = e_28;
      {
        ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL;
        v_104 = t;
        u_104 :
        if(((ATgetType(v_104) == AT_LIST) && !(ATisEmpty(v_104))))
          {
            w_104 = ATgetFirst((ATermList) v_104);
            x_104 = (ATerm) ATgetNext((ATermList) v_104);
            {
              t = not_null(w_104);
              {
                ATerm u_5 (ATerm t)
                {
                  t = not_null(x_104);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_5);
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
  ATerm h_105 = NULL;
  ATerm j_105 = NULL;
  h_105 = t;
  {
    ATerm k_105 = NULL;
    ATerm m_105 = NULL,n_105 = NULL,o_105 = NULL;
    t = not_null(h_105);
    {
      k_105 = t;
      {
        t = SSL_explode_term(not_null(k_105));
        {
          m_105 = t;
          f_105 :
          if(match_cons(m_105, sym__2))
            {
              n_105 = ATgetArgument(m_105, 0);
              o_105 = ATgetArgument(m_105, 1);
              g_105 :
              if(match_string(n_105, ""))
                {
                  if(((j_105 != NULL) && (j_105 != o_105)))
                    _fail(o_105);
                  else
                    j_105 = o_105;
                }
              else
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
      t = not_null(j_105);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm s_105 (ATerm t)
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_105);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        {
          t = Nil_0(t);
          t = k_98(t);
        }
      }
    return(t);
  }
  t = s_105(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_105 = NULL,w_105 = NULL,x_105 = NULL;
  v_105 = t;
  u_105 :
  if(match_cons(v_105, sym__2))
    {
      w_105 = ATgetArgument(v_105, 0);
      x_105 = ATgetArgument(v_105, 1);
      {
        t = not_null(w_105);
        {
          ATerm v_5 (ATerm t)
          {
            t = not_null(x_105);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm n_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(r_28);
    }
  else
    {
      t = n_28;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_106 = NULL;
  g_106 = t;
  t = SSL_explode_string(not_null(g_106));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm t_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(v_28);
      }
    else
      {
        t = t_28;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_111 (ATerm))
{
  ATerm y_28;
  y_28 = t;
  {
    ATerm l_106 = NULL,n_106 = NULL;
    ATerm z_28;
    z_28 = t;
    {
      ATerm m_106 = NULL;
      t = v_111(t);
      {
        m_106 = t;
        if(((l_106 != NULL) && (l_106 != m_106)))
          _fail(m_106);
        else
          l_106 = m_106;
      }
    }
    t = z_28;
    {
      ATerm o_106 = NULL;
      o_106 = t;
      if(((n_106 != NULL) && (n_106 != o_106)))
        _fail(o_106);
      else
        n_106 = o_106;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_106)), not_null(l_106)));
        t = printnl_0(t);
      }
    }
  }
  t = y_28;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_106 = NULL;
  y_106 = t;
  t = SSL_is_string(not_null(y_106));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            ATerm w_5 (ATerm t)
            {
              ATerm e_29 = t;
              int f_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(f_29);
                }
              else
                {
                  t = e_29;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, w_5);
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            {
              ATerm h_107 = NULL,i_107 = NULL,j_107 = NULL;
              h_107 = t;
              g_107 :
              if(match_cons(h_107, sym_Path_1))
                {
                  i_107 = ATgetArgument(h_107, 0);
                  t = not_null(i_107);
                }
              else
                {
                  if(match_cons(h_107, sym_Var_1))
                    {
                      i_107 = ATgetArgument(h_107, 0);
                      {
                        t = not_null(i_107);
                        {
                          ATerm n_29 = t;
                          int o_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(o_29);
                            }
                          else
                            {
                              t = n_29;
                              {
                                ATerm x_5 (ATerm t)
                                {
                                  t = term_p_29;
                                  return(t);
                                }
                                t = debug_1(t, x_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_107, sym_Prefix_2))
                        {
                          i_107 = ATgetArgument(h_107, 0);
                          j_107 = ATgetArgument(h_107, 1);
                          {
                            ATerm o_107 = NULL,q_107 = NULL;
                            ATerm q_29;
                            q_29 = t;
                            {
                              ATerm p_107 = NULL;
                              t = not_null(i_107);
                              {
                                t = eval_config_0(t);
                                {
                                  p_107 = t;
                                  if(((o_107 != NULL) && (o_107 != p_107)))
                                    _fail(p_107);
                                  else
                                    o_107 = p_107;
                                }
                              }
                            }
                            t = q_29;
                            {
                              ATerm r_107 = NULL;
                              t = not_null(j_107);
                              {
                                t = eval_config_0(t);
                                {
                                  r_107 = t;
                                  if(((q_107 != NULL) && (q_107 != r_107)))
                                    _fail(r_107);
                                  else
                                    q_107 = r_107;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_107), not_null(q_107));
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
  ATerm z_107 = NULL;
  z_107 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_29, not_null(z_107));
    {
      t = table_get_0(t);
      {
        ATerm s_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm u_29;
              u_29 = t;
              {
                ATerm b_108 = NULL;
                ATerm c_108 = NULL;
                c_108 = t;
                if(((b_108 != NULL) && (b_108 != c_108)))
                  _fail(c_108);
                else
                  b_108 = c_108;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_r_29, not_null(z_107), not_null(b_108));
                  t = table_put_0(t);
                }
              }
              t = u_29;
            }
            LocalPopChoice(t_29);
          }
        else
          {
            t = s_29;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL;
  h_108 = t;
  g_108 :
  if(match_cons(h_108, sym__2))
    {
      i_108 = ATgetArgument(h_108, 0);
      j_108 = ATgetArgument(h_108, 1);
      t = SSL_WriteToTextFile(not_null(i_108), not_null(j_108));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_108 = NULL,s_108 = NULL,t_108 = NULL;
  r_108 = t;
  q_108 :
  if(match_cons(r_108, sym__2))
    {
      s_108 = ATgetArgument(r_108, 0);
      t_108 = ATgetArgument(r_108, 1);
      t = SSL_WriteToBinaryFile(not_null(s_108), not_null(t_108));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm d_109 = NULL;
  ATerm w_29;
  w_29 = t;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm x_29 = t;
      int y_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_5 (ATerm t)
          {
            ATerm e_109 = NULL,f_109 = NULL;
            e_109 = t;
            a_109 :
            if(match_cons(e_109, sym_Output_1))
              {
                f_109 = ATgetArgument(e_109, 0);
                if(((d_109 != NULL) && (d_109 != f_109)))
                  _fail(f_109);
                else
                  d_109 = f_109;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, z_5);
          LocalPopChoice(y_29);
        }
      else
        {
          t = x_29;
          {
            ATerm g_109 = NULL;
            t = term_b_30;
            {
              g_109 = t;
              if(((d_109 != NULL) && (d_109 != g_109)))
                _fail(g_109);
              else
                d_109 = g_109;
            }
          }
        }
      return(t);
    }
    t = _2(t, y_5, _id);
  }
  t = w_29;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        t = not_null(d_109);
        return(t);
      }
      t = split_2(t, b_6, _id);
      return(t);
    }
    t = _2(t, _id, a_6);
    {
      ATerm c_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_6 (ATerm t)
          {
            ATerm d_6 (ATerm t)
            {
              ATerm h_109 = NULL;
              h_109 = t;
              c_109 :
              if(!(match_cons(h_109, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, d_6);
            return(t);
          }
          t = _2(t, c_6, WriteToBinaryFile_0);
          LocalPopChoice(h_30);
        }
      else
        {
          t = c_30;
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
ATerm apply_strategy_1 (ATerm t, ATerm z_112 (ATerm))
{
  ATerm o_109 = NULL,q_109 = NULL,r_109 = NULL,s_109 = NULL;
  ATerm p_30;
  p_30 = t;
  t = dtime_0(t);
  t = p_30;
  {
    t = z_112(t);
    {
      ATerm q_30;
      q_30 = t;
      {
        ATerm p_109 = NULL;
        t = dtime_0(t);
        {
          p_109 = t;
          if(((o_109 != NULL) && (o_109 != p_109)))
            _fail(p_109);
          else
            o_109 = p_109;
        }
      }
      t = q_30;
      {
        q_109 = t;
        m_109 :
        if(match_cons(q_109, sym__2))
          {
            r_109 = ATgetArgument(q_109, 0);
            s_109 = ATgetArgument(q_109, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_109)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(o_109))), not_null(s_109));
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
  ATerm y_109 = NULL;
  y_109 = t;
  t = SSL_ReadFromFile(not_null(y_109));
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_96 (ATerm), ATerm z_96 (ATerm))
{
  ATerm d_110 = NULL,f_110 = NULL;
  ATerm r_30;
  r_30 = t;
  {
    ATerm e_110 = NULL;
    t = y_96(t);
    {
      e_110 = t;
      if(((d_110 != NULL) && (d_110 != e_110)))
        _fail(e_110);
      else
        d_110 = e_110;
    }
  }
  t = r_30;
  {
    ATerm g_110 = NULL;
    t = z_96(t);
    {
      g_110 = t;
      if(((f_110 != NULL) && (f_110 != g_110)))
        _fail(g_110);
      else
        f_110 = g_110;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_110), not_null(f_110));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm m_110 = NULL;
  ATerm e_31;
  e_31 = t;
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_6 (ATerm t)
        {
          ATerm n_110 = NULL,o_110 = NULL;
          n_110 = t;
          k_110 :
          if(match_cons(n_110, sym_Input_1))
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
        t = fetch_1(t, e_6);
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        {
          ATerm p_110 = NULL;
          t = term_h_31;
          {
            p_110 = t;
            if(((m_110 != NULL) && (m_110 != p_110)))
              _fail(p_110);
            else
              m_110 = p_110;
          }
        }
      }
  }
  t = e_31;
  {
    ATerm f_6 (ATerm t)
    {
      t = not_null(m_110);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_6);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm t_110 = NULL;
    t_110 = t;
    s_110 :
    if(!(match_string(t_110, "-v")))
      {
        if(!(match_string(t_110, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_j_31;
    t = set_config_0(t);
    t = term_k_31;
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_l_31;
    return(t);
  }
  t = Option_3(t, g_6, h_6, i_6);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm w_110 = NULL;
    w_110 = t;
    u_110 :
    if(!(match_string(w_110, "-k")))
      {
        if(!(match_string(w_110, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    ATerm m_31;
    m_31 = t;
    {
      ATerm x_110 = NULL;
      ATerm y_110 = NULL;
      t = string_to_int_0(t);
      {
        y_110 = t;
        if(((x_110 != NULL) && (x_110 != y_110)))
          _fail(y_110);
        else
          x_110 = y_110;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_31, not_null(x_110));
        t = set_config_0(t);
      }
    }
    t = m_31;
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_o_31;
    return(t);
  }
  t = ArgOption_3(t, j_6, k_6, l_6);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm b_111 = NULL;
  b_111 = t;
  t = SSL_string_to_int(not_null(b_111));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_6 (ATerm t)
      {
        ATerm j_111 = NULL;
        j_111 = t;
        e_111 :
        if(!(match_string(j_111, "-S")))
          {
            if(!(match_string(j_111, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_6 (ATerm t)
      {
        t = term_s_31;
        t = set_config_0(t);
        t = term_t_31;
        return(t);
      }
      ATerm o_6 (ATerm t)
      {
        t = term_u_31;
        return(t);
      }
      t = Option_3(t, m_6, n_6, o_6);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 (ATerm t)
            {
              ATerm p_111 = NULL;
              p_111 = t;
              f_111 :
              if(!(match_string(p_111, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm r_6 (ATerm t)
            {
              ATerm t_111 = NULL;
              ATerm y_31;
              y_31 = t;
              {
                ATerm r_111 = NULL;
                ATerm s_111 = NULL;
                t = string_to_int_0(t);
                {
                  s_111 = t;
                  if(((r_111 != NULL) && (r_111 != s_111)))
                    _fail(s_111);
                  else
                    r_111 = s_111;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_8, not_null(r_111));
                  t = set_config_0(t);
                }
              }
              t = y_31;
              {
                ATerm u_111 = NULL;
                u_111 = t;
                if(((t_111 != NULL) && (t_111 != u_111)))
                  _fail(u_111);
                else
                  t_111 = u_111;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_111));
              }
              return(t);
            }
            ATerm s_6 (ATerm t)
            {
              t = term_z_31;
              return(t);
            }
            t = ArgOption_3(t, p_6, r_6, s_6);
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            {
              ATerm t_6 (ATerm t)
              {
                ATerm x_111 = NULL;
                x_111 = t;
                i_111 :
                if(!(match_string(x_111, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm u_6 (ATerm t)
              {
                t = term_b_32;
                t = set_config_0(t);
                t = term_c_32;
                return(t);
              }
              ATerm v_6 (ATerm t)
              {
                t = term_d_32;
                return(t);
              }
              t = Option_3(t, t_6, u_6, v_6);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      {
        ATerm g_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(h_32);
          }
        else
          {
            t = g_32;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    ATerm d_112 = NULL;
    d_112 = t;
    a_112 :
    if(!(match_string(d_112, "-o")))
      {
        if(!(match_string(d_112, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_6 (ATerm t)
  {
    ATerm g_112 = NULL;
    ATerm i_32;
    i_32 = t;
    {
      ATerm e_112 = NULL;
      ATerm f_112 = NULL;
      f_112 = t;
      if(((e_112 != NULL) && (e_112 != f_112)))
        _fail(f_112);
      else
        e_112 = f_112;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_32, not_null(e_112));
        t = set_config_0(t);
      }
    }
    t = i_32;
    {
      ATerm h_112 = NULL;
      h_112 = t;
      if(((g_112 != NULL) && (g_112 != h_112)))
        _fail(h_112);
      else
        g_112 = h_112;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_112));
    }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    t = term_k_32;
    return(t);
  }
  t = ArgOption_3(t, w_6, x_6, y_6);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm z_6 (ATerm t)
        {
          ATerm l_112 = NULL;
          l_112 = t;
          k_112 :
          if(!(match_string(l_112, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm a_7 (ATerm t)
        {
          t = term_o_32;
          t = set_config_0(t);
          t = term_p_32;
          return(t);
        }
        ATerm b_7 (ATerm t)
        {
          t = term_q_32;
          return(t);
        }
        t = Option_3(t, z_6, a_7, b_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm r_112 = NULL,s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL;
  r_112 = t;
  p_112 :
  if(match_string(r_112, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(r_112) == AT_LIST) && !(ATisEmpty(r_112))))
        {
          s_112 = ATgetFirst((ATermList) r_112);
          t_112 = (ATerm) ATgetNext((ATermList) r_112);
          q_112 :
          if(((ATgetType(t_112) == AT_LIST) && !(ATisEmpty(t_112))))
            {
              u_112 = ATgetFirst((ATermList) t_112);
              v_112 = (ATerm) ATgetNext((ATermList) t_112);
              {
                ATerm b_113 = NULL;
                ATerm r_32;
                r_32 = t;
                {
                  t = not_null(s_112);
                  t = l_0(t);
                }
                t = r_32;
                {
                  ATerm c_113 = NULL;
                  t = not_null(u_112);
                  {
                    t = n_0(t);
                    {
                      c_113 = t;
                      if(((b_113 != NULL) && (b_113 != c_113)))
                        _fail(c_113);
                      else
                        b_113 = c_113;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_112)), not_null(b_113));
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
  ATerm c_7 (ATerm t)
  {
    ATerm t_113 = NULL;
    t_113 = t;
    l_113 :
    if(!(match_string(t_113, "-i")))
      {
        if(!(match_string(t_113, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_7 (ATerm t)
  {
    ATerm a_114 = NULL;
    ATerm s_32;
    s_32 = t;
    {
      ATerm y_113 = NULL;
      ATerm z_113 = NULL;
      z_113 = t;
      if(((y_113 != NULL) && (y_113 != z_113)))
        _fail(z_113);
      else
        y_113 = z_113;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_32, not_null(y_113));
        t = set_config_0(t);
      }
    }
    t = s_32;
    {
      ATerm b_114 = NULL;
      b_114 = t;
      if(((a_114 != NULL) && (a_114 != b_114)))
        _fail(b_114);
      else
        a_114 = b_114;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_114));
    }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    t = term_u_32;
    return(t);
  }
  t = ArgOption_3(t, c_7, d_7, e_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATempty, term_z_32));
  {
    t = printnl_0(t);
    {
      t = term_c_28;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm f_114 = NULL;
  f_114 = t;
  t = SSL_TicksToSeconds(not_null(f_114));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_114 = NULL,l_114 = NULL,m_114 = NULL;
  k_114 = t;
  j_114 :
  if(match_cons(k_114, sym__2))
    {
      l_114 = ATgetArgument(k_114, 0);
      m_114 = ATgetArgument(k_114, 1);
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_114), not_null(m_114));
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            t = SSL_addr(not_null(l_114), not_null(m_114));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_104 (ATerm), ATerm k_104 (ATerm))
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_104(t);
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      {
        ATerm t_114 = NULL,u_114 = NULL,v_114 = NULL;
        t_114 = t;
        s_114 :
        if(((ATgetType(t_114) == AT_LIST) && !(ATisEmpty(t_114))))
          {
            u_114 = ATgetFirst((ATermList) t_114);
            v_114 = (ATerm) ATgetNext((ATermList) t_114);
            {
              ATerm y_114 = NULL;
              ATerm z_114 = NULL;
              t = not_null(v_114);
              {
                t = foldr_2(t, j_104, k_104);
                {
                  z_114 = t;
                  if(((y_114 != NULL) && (y_114 != z_114)))
                    _fail(z_114);
                  else
                    y_114 = z_114;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_114), not_null(y_114));
                t = k_104(t);
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
ATerm crush_2 (ATerm t, ATerm h_103 (ATerm), ATerm i_103 (ATerm))
{
  ATerm h_115 = NULL;
  ATerm j_115 = NULL;
  h_115 = t;
  {
    ATerm k_115 = NULL;
    ATerm m_115 = NULL,n_115 = NULL,o_115 = NULL;
    t = not_null(h_115);
    {
      k_115 = t;
      {
        t = SSL_explode_term(not_null(k_115));
        {
          m_115 = t;
          f_115 :
          if(match_cons(m_115, sym__2))
            {
              n_115 = ATgetArgument(m_115, 0);
              o_115 = ATgetArgument(m_115, 1);
              if(((j_115 != NULL) && (j_115 != o_115)))
                _fail(o_115);
              else
                j_115 = o_115;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_115);
      t = foldr_2(t, h_103, i_103);
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
    ATerm f_7 (ATerm t)
    {
      t = term_r_31;
      return(t);
    }
    t = crush_2(t, f_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_115 = NULL,v_115 = NULL,w_115 = NULL;
  u_115 = t;
  t_115 :
  if(match_cons(u_115, sym__2))
    {
      v_115 = ATgetArgument(u_115, 0);
      w_115 = ATgetArgument(u_115, 1);
      {
        ATerm e_33;
        e_33 = t;
        {
          ATerm f_33 = t;
          int g_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_115), not_null(w_115));
              LocalPopChoice(g_33);
            }
          else
            {
              t = f_33;
              t = SSL_gtr(not_null(v_115), not_null(w_115));
            }
        }
        t = e_33;
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
  ATerm c_116 = NULL;
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_116 = NULL,e_116 = NULL,f_116 = NULL;
      d_116 = t;
      b_116 :
      if(match_cons(d_116, sym__2))
        {
          e_116 = ATgetArgument(d_116, 0);
          f_116 = ATgetArgument(d_116, 1);
          {
            if(((c_116 != NULL) && (c_116 != e_116)))
              _fail(e_116);
            else
              c_116 = e_116;
            if(((c_116 != NULL) && (c_116 != f_116)))
              _fail(f_116);
            else
              c_116 = f_116;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_121 (ATerm))
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_33;
      l_33 = t;
      {
        ATerm o_116 = NULL;
        ATerm p_116 = NULL;
        t = term_o_8;
        {
          t = get_config_0(t);
          {
            p_116 = t;
            if(((o_116 != NULL) && (o_116 != p_116)))
              _fail(p_116);
            else
              o_116 = p_116;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_116), term_c_28);
          t = geq_0(t);
        }
      }
      t = l_33;
      t = r_121(t);
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm t_116 = NULL,v_116 = NULL;
    ATerm m_33;
    m_33 = t;
    {
      ATerm u_116 = NULL;
      t = run_time_0(t);
      {
        u_116 = t;
        if(((t_116 != NULL) && (t_116 != u_116)))
          _fail(u_116);
        else
          t_116 = u_116;
      }
    }
    t = m_33;
    {
      ATerm w_116 = NULL;
      t = term_n_33;
      {
        t = get_config_0(t);
        {
          w_116 = t;
          if(((v_116 != NULL) && (v_116 != w_116)))
            _fail(w_116);
          else
            v_116 = w_116;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_33), not_null(t_116)), term_o_33), not_null(v_116)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, i_7);
  {
    t = term_r_31;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_117 = NULL;
  d_117 = t;
  c_117 :
  if(match_cons(d_117, sym_Version_0))
    {
      ATerm f_117 = NULL,h_117 = NULL;
      ATerm s_33;
      s_33 = t;
      {
        ATerm g_117 = NULL;
        t = SSLgetAnnotations(not_null(d_117));
        {
          g_117 = t;
          if(((f_117 != NULL) && (f_117 != g_117)))
            _fail(g_117);
          else
            f_117 = g_117;
        }
      }
      t = s_33;
      {
        ATerm i_117 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_117));
        {
          i_117 = t;
          if(((h_117 != NULL) && (h_117 != i_117)))
            _fail(i_117);
          else
            h_117 = i_117;
        }
        t = not_null(h_117);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_112 (ATerm))
{
  ATerm j_7 (ATerm t)
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        {
          ATerm v_33 = t;
          int w_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(w_33);
            }
          else
            {
              t = v_33;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, j_7);
  t = x_112(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_117 = NULL;
  n_117 = t;
  t = SSL_table_create(not_null(n_117));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_117 = NULL;
  r_117 = t;
  {
    ATerm x_33;
    x_33 = t;
    {
      t = term_y_33;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_33, term_z_33, not_null(r_117));
          t = table_put_0(t);
        }
      }
    }
    t = x_33;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm y_117 = NULL;
  y_117 = t;
  t = SSL_table_destroy(not_null(y_117));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_118 = NULL;
  c_118 = t;
  t = SSL_exit(not_null(c_118));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_118 = NULL,q_118 = NULL,r_118 = NULL;
  g_118 = t;
  f_118 :
  if(((ATgetType(g_118) == AT_LIST) && ATisEmpty(g_118)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_118) == AT_LIST) && !(ATisEmpty(g_118))))
        {
          q_118 = ATgetFirst((ATermList) g_118);
          r_118 = (ATerm) ATgetNext((ATermList) g_118);
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
  ATerm i_34;
  i_34 = t;
  {
    ATerm w_118 = NULL;
    ATerm a_119 = NULL;
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          ATerm x_118 = NULL;
          ATerm y_118 = NULL;
          y_118 = t;
          if(((x_118 != NULL) && (x_118 != y_118)))
            _fail(y_118);
          else
            x_118 = y_118;
          t = (ATerm) ATinsert(ATempty, not_null(x_118));
        }
      }
    {
      a_119 = t;
      if(((w_118 != NULL) && (w_118 != a_119)))
        _fail(a_119);
      else
        w_118 = a_119;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_30, not_null(w_118));
      t = printnl_0(t);
    }
  }
  t = i_34;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm h_116 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_97 (ATerm))
{
  ATerm d_119 (ATerm t)
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
        t = Cons_2(t, v_97, d_119);
      }
    return(t);
  }
  t = d_119(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm k_119 = NULL,l_119 = NULL,m_119 = NULL;
  m_119 = t;
  j_119 :
  if(((ATgetType(m_119) == AT_LIST) && !(ATisEmpty(m_119))))
    {
      k_119 = ATgetFirst((ATermList) m_119);
      l_119 = (ATerm) ATgetNext((ATermList) m_119);
      {
        ATerm p_119 = NULL;
        t = not_null(l_119);
        {
          ATerm n_34;
          n_34 = t;
          {
            ATerm q_119 = NULL,s_119 = NULL,u_119 = NULL;
            ATerm o_34;
            o_34 = t;
            {
              ATerm r_119 = NULL;
              t = k_0(t);
              {
                r_119 = t;
                if(((q_119 != NULL) && (q_119 != r_119)))
                  _fail(r_119);
                else
                  q_119 = r_119;
              }
            }
            t = o_34;
            {
              ATerm t_119 = NULL;
              t = not_null(k_119);
              {
                t = i_0(t);
                {
                  t_119 = t;
                  if(((s_119 != NULL) && (s_119 != t_119)))
                    _fail(t_119);
                  else
                    s_119 = t_119;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_119)), not_null(s_119));
                {
                  u_119 = t;
                  if(((p_119 != NULL) && (p_119 != u_119)))
                    _fail(u_119);
                  else
                    p_119 = u_119;
                }
              }
            }
          }
          t = n_34;
          {
            ATerm k_7 (ATerm t)
            {
              t = not_null(p_119);
              return(t);
            }
            t = reverse_acc_2(t, i_0, k_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_119) == AT_LIST) && ATisEmpty(m_119)))
        {
          {
            t = term_x_26;
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
  ATerm l_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_116 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_92 (ATerm))
{
  ATerm l_120 = NULL,m_120 = NULL;
  l_120 = t;
  k_120 :
  if(match_cons(l_120, sym_Program_1))
    {
      m_120 = ATgetArgument(l_120, 0);
      {
        ATerm p_120 = NULL,r_120 = NULL;
        ATerm q_120 = NULL;
        t = SSLgetAnnotations(not_null(l_120));
        {
          q_120 = t;
          if(((p_120 != NULL) && (p_120 != q_120)))
            _fail(q_120);
          else
            p_120 = q_120;
        }
        {
          t = not_null(m_120);
          {
            ATerm t_120 = NULL;
            t = e_92(t);
            {
              r_120 = t;
              {
                ATerm u_120 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_120)), not_null(p_120));
                {
                  u_120 = t;
                  if(((t_120 != NULL) && (t_120 != u_120)))
                    _fail(u_120);
                  else
                    t_120 = u_120;
                }
                t = not_null(t_120);
              }
            }
          }
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
  ATerm k_121 = NULL;
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_121 = NULL;
      t = term_n_33;
      {
        t = get_config_0(t);
        {
          l_121 = t;
          if(((k_121 != NULL) && (k_121 != l_121)))
            _fail(l_121);
          else
            k_121 = l_121;
        }
      }
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      {
        ATerm m_7 (ATerm t)
        {
          ATerm n_7 (ATerm t)
          {
            ATerm m_121 = NULL;
            m_121 = t;
            if(((k_121 != NULL) && (k_121 != m_121)))
              _fail(m_121);
            else
              k_121 = m_121;
            return(t);
          }
          t = Program_1(t, n_7);
          return(t);
        }
        t = fetch_1(t, m_7);
      }
    }
  {
    t = term_r_34;
    {
      t = echo_0(t);
      {
        t = term_x_34;
        {
          t = table_get_0(t);
          {
            ATerm o_7 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, o_7);
            {
              ATerm p_7 (ATerm t)
              {
                ATerm n_121 = NULL;
                ATerm o_121 = NULL;
                o_121 = t;
                if(((n_121 != NULL) && (n_121 != o_121)))
                  _fail(o_121);
                else
                  n_121 = o_121;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_121)), term_y_34);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, p_7);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_92 (ATerm))
{
  ATerm z_121 = NULL,a_122 = NULL;
  z_121 = t;
  y_121 :
  if(match_cons(z_121, sym_Undefined_1))
    {
      a_122 = ATgetArgument(z_121, 0);
      {
        ATerm d_122 = NULL,f_122 = NULL;
        ATerm e_122 = NULL;
        t = SSLgetAnnotations(not_null(z_121));
        {
          e_122 = t;
          if(((d_122 != NULL) && (d_122 != e_122)))
            _fail(e_122);
          else
            d_122 = e_122;
        }
        {
          t = not_null(a_122);
          {
            ATerm h_122 = NULL;
            t = f_92(t);
            {
              f_122 = t;
              {
                ATerm i_122 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_122)), not_null(d_122));
                {
                  i_122 = t;
                  if(((h_122 != NULL) && (h_122 != i_122)))
                    _fail(i_122);
                  else
                    h_122 = i_122;
                }
                t = not_null(h_122);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm e_98 (ATerm))
{
  ATerm n_122 (ATerm t)
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_98, _id);
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        t = Cons_2(t, _id, n_122);
      }
    return(t);
  }
  t = n_122(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_115 (ATerm))
{
  t = fetch_1(t, g_115);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_122 = NULL;
  s_122 = t;
  r_122 :
  if(match_cons(s_122, sym_Help_0))
    {
      ATerm u_122 = NULL,w_122 = NULL;
      ATerm b_35;
      b_35 = t;
      {
        ATerm v_122 = NULL;
        t = SSLgetAnnotations(not_null(s_122));
        {
          v_122 = t;
          if(((u_122 != NULL) && (u_122 != v_122)))
            _fail(v_122);
          else
            u_122 = v_122;
        }
      }
      t = b_35;
      {
        ATerm x_122 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_122));
        {
          x_122 = t;
          if(((w_122 != NULL) && (w_122 != x_122)))
            _fail(x_122);
          else
            w_122 = x_122;
        }
        t = not_null(w_122);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_96 (ATerm))
{
  ATerm c_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_96(t);
      LocalPopChoice(s_35);
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
  ATerm d_123 = NULL,e_123 = NULL,f_123 = NULL;
  d_123 = t;
  c_123 :
  if(match_cons(d_123, sym__2))
    {
      e_123 = ATgetArgument(d_123, 0);
      f_123 = ATgetArgument(d_123, 1);
      t = SSL_table_get(not_null(e_123), not_null(f_123));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_123 = NULL,n_123 = NULL,o_123 = NULL,p_123 = NULL;
  m_123 = t;
  l_123 :
  if(match_cons(m_123, sym__3))
    {
      n_123 = ATgetArgument(m_123, 0);
      o_123 = ATgetArgument(m_123, 1);
      p_123 = ATgetArgument(m_123, 2);
      {
        ATerm t_35;
        t_35 = t;
        {
          ATerm t_123 = NULL;
          ATerm u_123 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_123), not_null(o_123));
          {
            ATerm u_35 = t;
            int v_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_35);
              }
            else
              {
                t = u_35;
                t = (ATerm) ATempty;
              }
            {
              u_123 = t;
              if(((t_123 != NULL) && (t_123 != u_123)))
                _fail(u_123);
              else
                t_123 = u_123;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_123), not_null(o_123), (ATerm) ATinsert(CheckATermList(not_null(t_123)), not_null(p_123)));
            t = table_put_0(t);
          }
        }
        t = t_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_116 (ATerm))
{
  ATerm y_123 = NULL;
  ATerm z_123 = NULL;
  t = term_x_26;
  {
    t = l_116(t);
    {
      z_123 = t;
      if(((y_123 != NULL) && (y_123 != z_123)))
        _fail(z_123);
      else
        y_123 = z_123;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_34, term_t_34, not_null(y_123));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm f_124 = NULL,g_124 = NULL,h_124 = NULL;
  f_124 = t;
  e_124 :
  if(match_string(f_124, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(f_124) == AT_LIST) && !(ATisEmpty(f_124))))
        {
          g_124 = ATgetFirst((ATermList) f_124);
          h_124 = (ATerm) ATgetNext((ATermList) f_124);
          {
            ATerm k_124 = NULL;
            ATerm w_35;
            w_35 = t;
            {
              t = not_null(g_124);
              t = a_0(t);
            }
            t = w_35;
            {
              ATerm l_124 = NULL;
              t = term_x_26;
              {
                t = d_0(t);
                {
                  l_124 = t;
                  if(((k_124 != NULL) && (k_124 != l_124)))
                    _fail(l_124);
                  else
                    k_124 = l_124;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_124)), not_null(k_124));
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
  ATerm q_7 (ATerm t)
  {
    ATerm q_124 = NULL;
    q_124 = t;
    p_124 :
    if(!(match_string(q_124, "--help")))
      {
        if(!(match_string(q_124, "-h")))
          {
            if(!(match_string(q_124, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_7 (ATerm t)
  {
    t = term_j_36;
    {
      t = set_config_0(t);
      t = term_k_36;
    }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = term_l_36;
    return(t);
  }
  t = Option_3(t, q_7, r_7, s_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_124 = NULL,u_124 = NULL,v_124 = NULL;
  t_124 = t;
  s_124 :
  if(((ATgetType(t_124) == AT_LIST) && !(ATisEmpty(t_124))))
    {
      u_124 = ATgetFirst((ATermList) t_124);
      v_124 = (ATerm) ATgetNext((ATermList) t_124);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_124)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_124)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_81 (ATerm), ATerm r_81 (ATerm))
{
  ATerm f_125 = NULL,g_125 = NULL,h_125 = NULL;
  f_125 = t;
  e_125 :
  if(((ATgetType(f_125) == AT_LIST) && !(ATisEmpty(f_125))))
    {
      g_125 = ATgetFirst((ATermList) f_125);
      h_125 = (ATerm) ATgetNext((ATermList) f_125);
      {
        ATerm l_125 = NULL,n_125 = NULL;
        ATerm m_125 = NULL;
        t = SSLgetAnnotations(not_null(f_125));
        {
          m_125 = t;
          if(((l_125 != NULL) && (l_125 != m_125)))
            _fail(m_125);
          else
            l_125 = m_125;
        }
        {
          t = not_null(g_125);
          {
            ATerm p_125 = NULL;
            t = q_81(t);
            {
              n_125 = t;
              {
                t = not_null(h_125);
                {
                  ATerm r_125 = NULL;
                  t = r_81(t);
                  {
                    p_125 = t;
                    {
                      ATerm s_125 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(p_125)), not_null(n_125)), not_null(l_125));
                      {
                        s_125 = t;
                        if(((r_125 != NULL) && (r_125 != s_125)))
                          _fail(s_125);
                        else
                          r_125 = s_125;
                      }
                      t = not_null(r_125);
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
  ATerm e_126 = NULL;
  e_126 = t;
  d_126 :
  if(((ATgetType(e_126) == AT_LIST) && ATisEmpty(e_126)))
    {
      {
        ATerm g_126 = NULL,i_126 = NULL;
        ATerm m_36;
        m_36 = t;
        {
          ATerm h_126 = NULL;
          t = SSLgetAnnotations(not_null(e_126));
          {
            h_126 = t;
            if(((g_126 != NULL) && (g_126 != h_126)))
              _fail(h_126);
            else
              g_126 = h_126;
          }
        }
        t = m_36;
        {
          ATerm j_126 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_126));
          {
            j_126 = t;
            if(((i_126 != NULL) && (i_126 != j_126)))
              _fail(j_126);
            else
              i_126 = j_126;
          }
          t = not_null(i_126);
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
  ATerm p_126 = NULL,q_126 = NULL,r_126 = NULL;
  p_126 = t;
  o_126 :
  if(match_cons(p_126, sym__2))
    {
      q_126 = ATgetArgument(p_126, 0);
      r_126 = ATgetArgument(p_126, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_r_29, not_null(q_126), not_null(r_126));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_116 (ATerm))
{
  ATerm n_36;
  n_36 = t;
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_36;
        t = j_116(t);
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        {
        }
      }
  }
  t = n_36;
  {
    ATerm t_7 (ATerm t)
    {
      ATerm z_126 = NULL;
      ATerm a_37;
      a_37 = t;
      {
        ATerm x_126 = NULL;
        ATerm y_126 = NULL;
        y_126 = t;
        if(((x_126 != NULL) && (x_126 != y_126)))
          _fail(y_126);
        else
          x_126 = y_126;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_33, not_null(x_126));
          t = set_config_0(t);
        }
      }
      t = a_37;
      {
        ATerm a_127 = NULL;
        a_127 = t;
        if(((z_126 != NULL) && (z_126 != a_127)))
          _fail(a_127);
        else
          z_126 = a_127;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_126));
      }
      return(t);
    }
    ATerm u_7 (ATerm t)
    {
      ATerm b_37 = t;
      int c_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_37 = t;
          int r_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(r_37);
            }
          else
            {
              t = d_37;
              {
                t = j_116(t);
                t = Cons_2(t, _id, u_7);
              }
            }
          LocalPopChoice(c_37);
        }
      else
        {
          t = b_37;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_7, u_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_127 = NULL,h_127 = NULL,i_127 = NULL;
  ATerm v_37;
  v_37 = t;
  {
    ATerm j_127 = NULL,k_127 = NULL,l_127 = NULL,m_127 = NULL;
    j_127 = t;
    f_127 :
    if(match_cons(j_127, sym__3))
      {
        k_127 = ATgetArgument(j_127, 0);
        l_127 = ATgetArgument(j_127, 1);
        m_127 = ATgetArgument(j_127, 2);
        {
          if(((g_127 != NULL) && (g_127 != k_127)))
            _fail(k_127);
          else
            g_127 = k_127;
          {
            if(((h_127 != NULL) && (h_127 != l_127)))
              _fail(l_127);
            else
              h_127 = l_127;
            {
              if(((i_127 != NULL) && (i_127 != m_127)))
                _fail(m_127);
              else
                i_127 = m_127;
              t = SSL_table_put(not_null(g_127), not_null(h_127), not_null(i_127));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_116 (ATerm))
{
  ATerm p_127 = NULL;
  ATerm w_37;
  w_37 = t;
  {
    t = term_x_37;
    t = table_put_0(t);
  }
  t = w_37;
  {
    ATerm v_7 (ATerm t)
    {
      ATerm y_37 = t;
      int z_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_116(t);
          LocalPopChoice(z_37);
        }
      else
        {
          t = y_37;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_7);
    {
      ATerm a_38 = t;
      int b_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_38;
          c_38 = t;
          {
            ATerm d_38 = t;
            int e_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_i_36;
                t = get_config_0(t);
                LocalPopChoice(e_38);
              }
            else
              {
                t = d_38;
                t = fetch_1(t, Help_0);
              }
          }
          t = c_38;
          {
            t = system_usage_0(t);
            {
              t = term_r_31;
              t = exit_0(t);
            }
          }
          LocalPopChoice(b_38);
        }
      else
        {
          t = a_38;
          {
            ATerm f_38 = t;
            int g_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_7 (ATerm t)
                {
                  ATerm x_7 (ATerm t)
                  {
                    ATerm q_127 = NULL;
                    q_127 = t;
                    if(((p_127 != NULL) && (p_127 != q_127)))
                      _fail(q_127);
                    else
                      p_127 = q_127;
                    return(t);
                  }
                  t = Undefined_1(t, x_7);
                  return(t);
                }
                t = fetch_1(t, w_7);
                {
                  ATerm y_7 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_127)), term_h_38);
                    return(t);
                  }
                  t = say_1(t, y_7);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_28;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(g_38);
              }
            else
              {
                t = f_38;
                {
                }
              }
          }
        }
      {
        ATerm o_38;
        o_38 = t;
        {
          t = term_s_34;
          t = table_destroy_0(t);
        }
        t = o_38;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm))
{
  t = parse_options_1(t, d_113);
  {
    t = store_options_0(t);
    {
      t = f_113(t);
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, e_113);
            LocalPopChoice(q_38);
          }
        else
          {
            t = p_38;
            {
              ATerm r_38 = t;
              int y_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_113(t);
                  t = report_success_0(t);
                  LocalPopChoice(y_38);
                }
              else
                {
                  t = r_38;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm), ATerm x_113 (ATerm))
{
  ATerm z_7 (ATerm t)
  {
    ATerm z_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_113(t);
        LocalPopChoice(a_39);
      }
    else
      {
        t = z_38;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm a_8 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, u_113);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, z_7, w_113, x_113, a_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm q_113 (ATerm))
{
  ATerm b_8 (ATerm t)
  {
    ATerm c_8 (ATerm t)
    {
      ATerm b_39;
      b_39 = t;
      {
        ATerm t_127 = NULL;
        ATerm u_127 = NULL;
        t = term_n_33;
        {
          t = get_config_0(t);
          {
            u_127 = t;
            if(((t_127 != NULL) && (t_127 != u_127)))
              _fail(u_127);
            else
              t_127 = u_127;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATempty, not_null(t_127)));
          t = printnl_0(t);
        }
      }
      t = b_39;
      return(t);
    }
    t = if_verbose2_1(t, c_8);
    return(t);
  }
  t = iowrap_4(t, o_113, p_113, q_113, b_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm m_113 (ATerm), ATerm n_113 (ATerm))
{
  t = iowrap_3(t, m_113, n_113, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm j_113 (ATerm))
{
  ATerm d_8 (ATerm t)
  {
    t = _2(t, _id, j_113);
    return(t);
  }
  t = iowrap_2(t, d_8, _fail);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm e_8 (ATerm t)
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
        {
          ATerm f_8 (ATerm t)
          {
            ATerm g_8 (ATerm t)
            {
              t = term_e_39;
              return(t);
            }
            t = say_1(t, g_8);
            return(t);
          }
          t = if_verbose2_1(t, f_8);
        }
      }
    return(t);
  }
  t = iowrap_1(t, e_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_0(t);
  return(t);
}
