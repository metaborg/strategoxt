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
ATerm term_c_35;
ATerm term_s_34;
ATerm term_y_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_s_31;
ATerm term_o_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_x_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_s_29;
ATerm term_d_29;
ATerm term_l_28;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_v_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_k_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_x_24;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_z_19;
ATerm term_p_18;
ATerm term_i_17;
ATerm term_i_15;
ATerm term_x_14;
ATerm term_q_14;
ATerm term_r_13;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_a_7;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
void init_constant_terms (void)
{
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_v_26);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_26);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_i_32, term_u_6);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_o_32, term_u_6);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_s_32, term_u_6);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym__2, term_f_33, term_g_33);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__3, term_f_33, term_g_33, (ATerm) ATempty);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm r_94 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm c_111 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm c_115 (ATerm));
ATerm Rec_2 (ATerm, ATerm p_86 (ATerm), ATerm q_86 (ATerm));
ATerm Let_2 (ATerm, ATerm r_86 (ATerm), ATerm s_86 (ATerm));
ATerm sboundin_3 (ATerm, ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm f_115 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm y_114 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm f_85 (ATerm));
ATerm tboundin_3 (ATerm, ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm b_115 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm s_103 (ATerm));
ATerm union_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm u_97 (ATerm), ATerm v_97 (ATerm));
ATerm for_3 (ATerm, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm q_103 (ATerm), ATerm r_103 (ATerm));
ATerm diff_1 (ATerm, ATerm v_103 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm c_101 (ATerm), ATerm d_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm i_101 (ATerm), ATerm j_101 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm w_100 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm b_100 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm g_100 (ATerm));
ATerm rename_4 (ATerm, ATerm k_101 (ATerm, ATerm (ATerm)), ATerm l_101 (ATerm), ATerm m_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm n_101 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm m_94 (ATerm));
ATerm restore_always_2 (ATerm, ATerm a_111 (ATerm), ATerm b_111 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm l_94 (ATerm));
ATerm scope_2 (ATerm, ATerm n_94 (ATerm), ATerm o_94 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm p_94 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm));
ATerm crush_3 (ATerm, ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm f_104 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm e_86 (ATerm), ATerm f_86 (ATerm));
ATerm Choice_2 (ATerm, ATerm c_86 (ATerm), ATerm d_86 (ATerm));
ATerm Cong_2 (ATerm, ATerm h_87 (ATerm), ATerm i_87 (ATerm));
ATerm Match_1 (ATerm, ATerm p_87 (ATerm));
ATerm Seq_2 (ATerm, ATerm a_86 (ATerm), ATerm b_86 (ATerm));
ATerm Scope_2 (ATerm, ATerm t_87 (ATerm), ATerm u_87 (ATerm));
ATerm Build_1 (ATerm, ATerm q_87 (ATerm));
ATerm SVar_1 (ATerm, ATerm o_86 (ATerm));
ATerm Call_2 (ATerm, ATerm d_87 (ATerm), ATerm e_87 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm s_112 (ATerm));
ATerm SDef_3 (ATerm, ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm k_108 (ATerm));
ATerm zip_1 (ATerm, ATerm m_108 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm w_87 (ATerm), ATerm x_87 (ATerm));
ATerm Explode_2 (ATerm, ATerm k_84 (ATerm), ATerm l_84 (ATerm));
ATerm Op_2 (ATerm, ATerm w_85 (ATerm), ATerm x_85 (ATerm));
ATerm pat_td_1 (ATerm, ATerm a_89 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm d_97 (ATerm), ATerm e_97 (ATerm));
ATerm repeat_1 (ATerm, ATerm g_97 (ATerm));
ATerm downup_1 (ATerm, ATerm e_111 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm p_85 (ATerm));
ATerm Specification_1 (ATerm, ATerm r_85 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm z_75 (ATerm), ATerm a_76 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_88 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm w_91 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_102 (ATerm), ATerm k_102 (ATerm));
ATerm crush_2 (ATerm, ATerm b_104 (ATerm), ATerm c_104 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm v_91 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_94 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_109 (ATerm), ATerm w_109 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_93 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_106 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_90 (ATerm));
ATerm map_1 (ATerm, ATerm i_106 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_90 (ATerm));
ATerm Program_1 (ATerm, ATerm h_78 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_78 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_106 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_91 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_110 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_90 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm m_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_87 (ATerm), ATerm z_87 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_90 (ATerm));
ATerm iowrap_4 (ATerm, ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm p_93 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm i_93 (ATerm));
ATerm iowrap_2 (ATerm, ATerm e_93 (ATerm), ATerm f_93 (ATerm));
ATerm iowrap_1 (ATerm, ATerm b_93 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,c_6 = NULL;
  c_4 = t;
  b_4 :
  if(match_cons(c_4, sym__2))
    {
      d_4 = ATgetArgument(c_4, 0);
      c_6 = ATgetArgument(c_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), not_null(c_6));
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
ATerm rewrite_1 (ATerm t, ATerm r_94 (ATerm))
{
  ATerm f_7 = NULL;
  ATerm h_7 = NULL;
  f_7 = t;
  {
    ATerm l_7 = NULL;
    t = term_u_6;
    {
      t = r_94(t);
      {
        l_7 = t;
        if(((h_7 != NULL) && (h_7 != l_7)))
          _fail(l_7);
        else
          h_7 = l_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), not_null(f_7));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
  u_7 = t;
  s_7 :
  if(match_cons(u_7, sym_Call_2))
    {
      v_7 = ATgetArgument(u_7, 0);
      x_7 = ATgetArgument(u_7, 1);
      t_7 :
      if(match_cons(v_7, sym_SVar_1))
        {
          w_7 = ATgetArgument(v_7, 0);
          {
            ATerm a_8 = NULL;
            ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(w_7));
            {
              ATerm a_0 (ATerm t)
              {
                t = term_v_6;
                return(t);
              }
              t = rewrite_1(t, a_0);
              {
                b_8 = t;
                q_7 :
                if(match_cons(b_8, sym_Defined_2))
                  {
                    c_8 = ATgetArgument(b_8, 0);
                    d_8 = ATgetArgument(b_8, 1);
                    r_7 :
                    if(match_string(c_8, "l_0"))
                      {
                        if(((a_8 != NULL) && (a_8 != d_8)))
                          _fail(d_8);
                        else
                          a_8 = d_8;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_8)), not_null(x_7));
          }
        }
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
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
  n_8 = t;
  k_8 :
  if(match_cons(n_8, sym_Call_2))
    {
      o_8 = ATgetArgument(n_8, 0);
      q_8 = ATgetArgument(n_8, 1);
      l_8 :
      if(match_cons(o_8, sym_SVar_1))
        {
          p_8 = ATgetArgument(o_8, 0);
          m_8 :
          if(((ATermList) q_8 == ATempty))
            {
              {
                ATerm s_8 = NULL;
                ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
                t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_8));
                {
                  ATerm b_0 (ATerm t)
                  {
                    t = term_w_6;
                    return(t);
                  }
                  t = rewrite_1(t, b_0);
                  {
                    t_8 = t;
                    i_8 :
                    if(match_cons(t_8, sym_Defined_2))
                      {
                        u_8 = ATgetArgument(t_8, 0);
                        v_8 = ATgetArgument(t_8, 1);
                        j_8 :
                        if(match_string(u_8, "k_0"))
                          {
                            if(((s_8 != NULL) && (s_8 != v_8)))
                              _fail(v_8);
                            else
                              s_8 = v_8;
                          }
                        else
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
                  t = not_null(s_8);
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
ATerm topdown_1 (ATerm t, ATerm c_111 (ATerm))
{
  t = c_111(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = topdown_1(t, c_111);
      return(t);
    }
    t = _all(t, e_0);
  }
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  n_9 = t;
  a_9 :
  if(match_cons(n_9, sym__2))
    {
      o_9 = ATgetArgument(n_9, 0);
      v_9 = ATgetArgument(n_9, 1);
      b_9 :
      if(match_cons(o_9, sym_VarDec_2))
        {
          p_9 = ATgetArgument(o_9, 0);
          q_9 = ATgetArgument(o_9, 1);
          c_9 :
          if(match_cons(q_9, sym_FunType_2))
            {
              r_9 = ATgetArgument(q_9, 0);
              u_9 = ATgetArgument(q_9, 1);
              d_9 :
              if(((ATgetType(r_9) == AT_LIST) && ((ATermList) r_9 != ATempty)))
                {
                  s_9 = ATgetFirst((ATermList) r_9);
                  t_9 = (ATerm) ATgetNext((ATermList) r_9);
                  e_9 :
                  if(((ATgetType(t_9) == AT_LIST) && ((ATermList) t_9 != ATempty)))
                    {
                      i_9 = ATgetFirst((ATermList) t_9);
                      j_9 = (ATerm) ATgetNext((ATermList) t_9);
                      f_9 :
                      if(match_cons(v_9, sym_Call_2))
                        {
                          k_9 = ATgetArgument(v_9, 0);
                          m_9 = ATgetArgument(v_9, 1);
                          g_9 :
                          if(match_cons(k_9, sym_SVar_1))
                            {
                              l_9 = ATgetArgument(k_9, 0);
                              h_9 :
                              if(((ATermList) m_9 == ATempty))
                                {
                                  {
                                    ATerm x_6;
                                    x_6 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_6, not_null(l_9)));
                                      {
                                        ATerm f_0 (ATerm t)
                                        {
                                          t = term_v_6;
                                          return(t);
                                        }
                                        t = assert_1(t, f_0);
                                      }
                                    }
                                    t = x_6;
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATermList) t_9 == ATempty))
                        {
                          {
                            ATerm z_6;
                            z_6 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_7, not_null(v_9)));
                              {
                                ATerm g_0 (ATerm t)
                                {
                                  t = term_w_6;
                                  return(t);
                                }
                                t = assert_1(t, g_0);
                              }
                            }
                            t = z_6;
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
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  ATerm h_0 (ATerm t)
  {
    t = term_w_6;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_v_6;
      return(t);
    }
    ATerm v_0 (ATerm t)
    {
      ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
      h_10 = t;
      d_10 :
      if(match_cons(h_10, sym__3))
        {
          i_10 = ATgetArgument(h_10, 0);
          j_10 = ATgetArgument(h_10, 1);
          k_10 = ATgetArgument(h_10, 2);
          {
            if(((e_10 != NULL) && (e_10 != i_10)))
              _fail(i_10);
            else
              e_10 = i_10;
            {
              if(((f_10 != NULL) && (f_10 != j_10)))
                _fail(j_10);
              else
                f_10 = j_10;
              {
                if(((g_10 != NULL) && (g_10 != k_10)))
                  _fail(k_10);
                else
                  g_10 = k_10;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), not_null(f_10));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(g_10);
                      {
                        ATerm w_0 (ATerm t)
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm b_7 = t;
                            int c_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                LocalPopChoice(c_7);
                              }
                            else
                              {
                                t = b_7;
                                t = SubsArgCall2_0(t);
                              }
                            return(t);
                          }
                          t = try_1(t, x_0);
                          return(t);
                        }
                        t = topdown_1(t, w_0);
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
    t = scope_2(t, u_0, v_0);
    return(t);
  }
  t = scope_2(t, h_0, t_0);
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
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm c_115 (ATerm))
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        t = split_2(t, _id, c_115);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
            a_11 = t;
            v_10 :
            if(match_cons(a_11, sym__2))
              {
                b_11 = ATgetArgument(a_11, 0);
                f_11 = ATgetArgument(a_11, 1);
                w_10 :
                if(match_cons(b_11, sym_SDef_3))
                  {
                    c_11 = ATgetArgument(b_11, 0);
                    d_11 = ATgetArgument(b_11, 1);
                    e_11 = ATgetArgument(b_11, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_11), not_null(d_11), not_null(e_11));
                  }
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
      t = Let_2(t, y_0, _id);
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      {
        ATerm g_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              t = split_2(t, _id, c_115);
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
                  j_11 = t;
                  y_10 :
                  if(match_cons(j_11, sym__2))
                    {
                      k_11 = ATgetArgument(j_11, 0);
                      n_11 = ATgetArgument(j_11, 1);
                      z_10 :
                      if(match_cons(k_11, sym_VarDec_2))
                        {
                          l_11 = ATgetArgument(k_11, 0);
                          m_11 = ATgetArgument(k_11, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(n_11), not_null(m_11));
                        }
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
            LocalPopChoice(i_7);
          }
        else
          {
            t = g_7;
            {
              ATerm c_1 (ATerm t)
              {
                t = c_115(t);
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
ATerm Rec_2 (ATerm t, ATerm p_86 (ATerm), ATerm q_86 (ATerm))
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  y_11 :
  if(match_cons(z_11, sym_Rec_2))
    {
      a_12 = ATgetArgument(z_11, 0);
      b_12 = ATgetArgument(z_11, 1);
      {
        ATerm f_12 = NULL,h_12 = NULL;
        ATerm g_12 = NULL;
        t = SSLgetAnnotations(not_null(z_11));
        {
          g_12 = t;
          if(((f_12 != NULL) && (f_12 != g_12)))
            _fail(g_12);
          else
            f_12 = g_12;
        }
        {
          t = not_null(a_12);
          {
            ATerm j_12 = NULL;
            t = p_86(t);
            {
              h_12 = t;
              {
                t = not_null(b_12);
                {
                  ATerm l_12 = NULL;
                  t = q_86(t);
                  {
                    j_12 = t;
                    {
                      ATerm m_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(h_12), not_null(j_12)), not_null(f_12));
                      {
                        m_12 = t;
                        if(((l_12 != NULL) && (l_12 != m_12)))
                          _fail(m_12);
                        else
                          l_12 = m_12;
                      }
                      t = not_null(l_12);
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
ATerm Let_2 (ATerm t, ATerm r_86 (ATerm), ATerm s_86 (ATerm))
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym_Let_2))
    {
      z_12 = ATgetArgument(y_12, 0);
      a_13 = ATgetArgument(y_12, 1);
      {
        ATerm e_13 = NULL,g_13 = NULL;
        ATerm f_13 = NULL;
        t = SSLgetAnnotations(not_null(y_12));
        {
          f_13 = t;
          if(((e_13 != NULL) && (e_13 != f_13)))
            _fail(f_13);
          else
            e_13 = f_13;
        }
        {
          t = not_null(z_12);
          {
            ATerm i_13 = NULL;
            t = r_86(t);
            {
              g_13 = t;
              {
                t = not_null(a_13);
                {
                  ATerm k_13 = NULL;
                  t = s_86(t);
                  {
                    i_13 = t;
                    {
                      ATerm l_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(g_13), not_null(i_13)), not_null(e_13));
                      {
                        l_13 = t;
                        if(((k_13 != NULL) && (k_13 != l_13)))
                          _fail(l_13);
                        else
                          k_13 = l_13;
                      }
                      t = not_null(k_13);
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
ATerm sboundin_3 (ATerm t, ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm f_115 (ATerm))
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, d_115, d_115);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm m_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, f_115, f_115, d_115);
            LocalPopChoice(n_7);
          }
        else
          {
            t = m_7;
            t = Rec_2(t, f_115, d_115);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym_Rec_2))
    {
      u_13 = ATgetArgument(t_13, 0);
      v_13 = ATgetArgument(t_13, 1);
      t = (ATerm) ATinsert(ATempty, not_null(u_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  d_14 = t;
  c_14 :
  if(match_cons(d_14, sym_SDef_3))
    {
      e_14 = ATgetArgument(d_14, 0);
      f_14 = ATgetArgument(d_14, 1);
      g_14 = ATgetArgument(d_14, 2);
      {
        t = not_null(f_14);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
            k_14 = t;
            b_14 :
            if(match_cons(k_14, sym_VarDec_2))
              {
                l_14 = ATgetArgument(k_14, 0);
                m_14 = ATgetArgument(k_14, 1);
                t = not_null(l_14);
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
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym_Let_2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      {
        t = not_null(v_14);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
            z_14 = t;
            s_14 :
            if(match_cons(z_14, sym_SDef_3))
              {
                a_15 = ATgetArgument(z_14, 0);
                b_15 = ATgetArgument(z_14, 1);
                c_15 = ATgetArgument(z_14, 2);
                t = not_null(a_15);
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
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        {
          ATerm y_7 = t;
          int z_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(z_7);
            }
          else
            {
              t = y_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, f_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm y_114 (ATerm))
{
  t = Scope_2(t, y_114, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm n_15 = NULL,o_15 = NULL;
  n_15 = t;
  m_15 :
  if(match_cons(n_15, sym_DynamicRules_1))
    {
      o_15 = ATgetArgument(n_15, 0);
      {
        ATerm r_15 = NULL,t_15 = NULL;
        ATerm s_15 = NULL;
        t = SSLgetAnnotations(not_null(n_15));
        {
          s_15 = t;
          if(((r_15 != NULL) && (r_15 != s_15)))
            _fail(s_15);
          else
            r_15 = s_15;
        }
        {
          t = not_null(o_15);
          {
            ATerm v_15 = NULL;
            t = f_85(t);
            {
              t_15 = t;
              {
                ATerm w_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(t_15)), not_null(r_15));
                {
                  w_15 = t;
                  if(((v_15 != NULL) && (v_15 != w_15)))
                    _fail(w_15);
                  else
                    v_15 = w_15;
                }
                t = not_null(v_15);
              }
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
ATerm tboundin_3 (ATerm t, ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm b_115 (ATerm))
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, b_115, z_114);
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      t = DynamicRules_1(t, z_114);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym_DynamicRules_1))
    {
      e_16 = ATgetArgument(d_16, 0);
      {
        t = not_null(e_16);
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
  ATerm j_16 = NULL,k_16 = NULL;
  j_16 = t;
  i_16 :
  if(match_cons(j_16, sym_Var_1))
    {
      k_16 = ATgetArgument(j_16, 0);
      t = (ATerm) ATinsert(ATempty, not_null(k_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm s_103 (ATerm))
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      {
        t = not_null(q_16);
        {
          ATerm v_16 (ATerm t)
          {
            ATerm g_8 = t;
            int h_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_16);
                LocalPopChoice(h_8);
              }
            else
              {
                t = g_8;
                {
                  ATerm r_8 = t;
                  int w_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_1 (ATerm t)
                      {
                        t = not_null(r_16);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_103, g_1);
                      t = v_16(t);
                      LocalPopChoice(w_8);
                    }
                  else
                    {
                      t = r_8;
                      t = Cons_2(t, _id, v_16);
                    }
                }
              }
            return(t);
          }
          t = v_16(t);
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
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  z_16 = t;
  x_16 :
  if(match_cons(z_16, sym__2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      y_16 :
      if(((ATgetType(b_17) == AT_LIST) && ((ATermList) b_17 != ATempty)))
        {
          c_17 = ATgetFirst((ATermList) b_17);
          d_17 = (ATerm) ATgetNext((ATermList) b_17);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_17)), not_null(c_17)), not_null(d_17));
        }
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
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  s_17 = t;
  q_17 :
  if(((ATgetType(s_17) == AT_LIST) && ((ATermList) s_17 != ATempty)))
    {
      t_17 = ATgetFirst((ATermList) s_17);
      w_17 = (ATerm) ATgetNext((ATermList) s_17);
      r_17 :
      if(match_cons(t_17, sym__2))
        {
          u_17 = ATgetArgument(t_17, 0);
          v_17 = ATgetArgument(t_17, 1);
          {
            ATerm a_18 = NULL,b_18 = NULL,h_18 = NULL,n_18 = NULL;
            ATerm x_8;
            x_8 = t;
            {
              ATerm c_18 = NULL;
              ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
              t = not_null(v_17);
              {
                c_18 = t;
                {
                  t = SSL_explode_term(not_null(c_18));
                  {
                    e_18 = t;
                    l_17 :
                    if(match_cons(e_18, sym__2))
                      {
                        f_18 = ATgetArgument(e_18, 0);
                        g_18 = ATgetArgument(e_18, 1);
                        {
                          if(((a_18 != NULL) && (a_18 != f_18)))
                            _fail(f_18);
                          else
                            a_18 = f_18;
                          if(((b_18 != NULL) && (b_18 != g_18)))
                            _fail(g_18);
                          else
                            b_18 = g_18;
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
            t = x_8;
            {
              ATerm y_8;
              y_8 = t;
              {
                ATerm i_18 = NULL;
                ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
                t = not_null(u_17);
                {
                  i_18 = t;
                  {
                    t = SSL_explode_term(not_null(i_18));
                    {
                      k_18 = t;
                      o_17 :
                      if(match_cons(k_18, sym__2))
                        {
                          l_18 = ATgetArgument(k_18, 0);
                          m_18 = ATgetArgument(k_18, 1);
                          {
                            if(((a_18 != NULL) && (a_18 != l_18)))
                              _fail(l_18);
                            else
                              a_18 = l_18;
                            if(((h_18 != NULL) && (h_18 != m_18)))
                              _fail(m_18);
                            else
                              h_18 = m_18;
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
              t = y_8;
              {
                ATerm o_18 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(b_18));
                {
                  t = zip_1(t, _id);
                  {
                    o_18 = t;
                    if(((n_18 != NULL) && (n_18 != o_18)))
                      _fail(o_18);
                    else
                      n_18 = o_18;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), not_null(w_17));
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
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  y_18 = t;
  w_18 :
  if(((ATgetType(y_18) == AT_LIST) && ((ATermList) y_18 != ATempty)))
    {
      z_18 = ATgetFirst((ATermList) y_18);
      c_19 = (ATerm) ATgetNext((ATermList) y_18);
      x_18 :
      if(match_cons(z_18, sym__2))
        {
          a_19 = ATgetArgument(z_18, 0);
          b_19 = ATgetArgument(z_18, 1);
          {
            ATerm e_19 = NULL;
            if(((a_19 != NULL) && (a_19 != b_19)))
              _fail(b_19);
            else
              a_19 = b_19;
            {
              if(((e_19 != NULL) && (e_19 != c_19)))
                _fail(c_19);
              else
                e_19 = c_19;
              t = not_null(e_19);
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
ATerm while_not_2 (ATerm t, ATerm u_97 (ATerm), ATerm v_97 (ATerm))
{
  ATerm g_19 (ATerm t)
  {
    ATerm z_8 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_97(t);
        LocalPopChoice(w_9);
      }
    else
      {
        t = z_8;
        {
          t = v_97(t);
          t = g_19(t);
        }
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm))
{
  t = x_97(t);
  t = while_not_2(t, y_97, z_97);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  i_19 :
  if(match_cons(j_19, sym__2))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      if(((k_19 != NULL) && (k_19 != l_19)))
        _fail(l_19);
      else
        k_19 = l_19;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm q_103 (ATerm), ATerm r_103 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  q_19 :
  if(((ATgetType(r_19) == AT_LIST) && ((ATermList) r_19 != ATempty)))
    {
      s_19 = ATgetFirst((ATermList) r_19);
      t_19 = (ATerm) ATgetNext((ATermList) r_19);
      {
        t = r_103(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm w_19 = NULL;
            w_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), not_null(w_19));
              t = q_103(t);
            }
            return(t);
          }
          t = fetch_1(t, h_1);
        }
        t = not_null(t_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm v_103 (ATerm))
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym__2))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      {
        t = not_null(d_20);
        {
          ATerm i_20 (ATerm t)
          {
            ATerm x_9 = t;
            int y_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(y_9);
              }
            else
              {
                t = x_9;
                {
                  ATerm z_9 = t;
                  int a_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_1 (ATerm t)
                      {
                        t = not_null(e_20);
                        return(t);
                      }
                      t = HdMember_p__2(t, v_103, i_1);
                      t = i_20(t);
                      LocalPopChoice(a_10);
                    }
                  else
                    {
                      t = z_9;
                      t = Cons_2(t, _id, i_20);
                    }
                }
              }
            return(t);
          }
          t = i_20(t);
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
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm j_1 (ATerm t)
        {
          ATerm k_20 = NULL;
          k_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(k_20));
          return(t);
        }
        ATerm k_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm l_1 (ATerm t)
        {
          ATerm l_10 = t;
          int m_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_1 (ATerm t)
              {
                ATerm r_10 = t;
                int s_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(s_10);
                  }
                else
                  {
                    t = r_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, m_1);
              LocalPopChoice(m_10);
            }
          else
            {
              t = l_10;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, j_1, k_1, l_1);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm q_20 (ATerm t)
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_99(t);
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        {
          ATerm x_10 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_20 = NULL;
              ATerm h_11;
              h_11 = t;
              {
                ATerm p_20 = NULL;
                t = h_99(t);
                {
                  p_20 = t;
                  if(((o_20 != NULL) && (o_20 != p_20)))
                    _fail(p_20);
                  else
                    o_20 = p_20;
                }
              }
              t = h_11;
              {
                ATerm n_1 (ATerm t)
                {
                  ATerm p_1 (ATerm t)
                  {
                    t = not_null(o_20);
                    return(t);
                  }
                  t = split_2(t, q_20, p_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm o_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = i_99(t, n_1, q_20, o_1);
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, q_1, union_0, _id);
                }
              }
              LocalPopChoice(g_11);
            }
          else
            {
              t = x_10;
              {
                ATerm r_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, r_1, union_0, q_20);
              }
            }
        }
      }
    return(t);
  }
  t = q_20(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm i_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(o_11);
      }
    else
      {
        t = i_11;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, s_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  u_20 :
  if(match_cons(z_20, sym_LRule_1))
    {
      a_21 = ATgetArgument(z_20, 0);
      v_20 :
      if(match_cons(a_21, sym_Rule_3))
        {
          w_20 = ATgetArgument(a_21, 0);
          x_20 = ATgetArgument(a_21, 1);
          y_20 = ATgetArgument(a_21, 2);
          {
            t = not_null(w_20);
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
      if(match_cons(z_20, sym_Scope_2))
        {
          a_21 = ATgetArgument(z_20, 0);
          b_21 = ATgetArgument(z_20, 1);
          t = not_null(a_21);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_cons(s_21, sym_Var_1))
    {
      t_21 = ATgetArgument(s_21, 0);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_21 = NULL,y_21 = NULL;
            ATerm x_21 = NULL;
            t = SSLgetAnnotations(not_null(s_21));
            {
              x_21 = t;
              if(((w_21 != NULL) && (w_21 != x_21)))
                _fail(x_21);
              else
                w_21 = x_21;
            }
            {
              t = not_null(t_21);
              {
                ATerm a_22 = NULL;
                t = s_0(t);
                {
                  y_21 = t;
                  {
                    ATerm b_22 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(y_21)), not_null(w_21));
                    {
                      b_22 = t;
                      if(((a_22 != NULL) && (a_22 != b_22)))
                        _fail(b_22);
                      else
                        a_22 = b_22;
                    }
                    t = not_null(a_22);
                  }
                }
              }
            }
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            {
              ATerm e_22 = NULL,g_22 = NULL;
              ATerm f_22 = NULL;
              t = SSLgetAnnotations(not_null(s_21));
              {
                f_22 = t;
                if(((e_22 != NULL) && (e_22 != f_22)))
                  _fail(f_22);
                else
                  e_22 = f_22;
              }
              {
                t = not_null(t_21);
                {
                  ATerm i_22 = NULL;
                  t = s_0(t);
                  {
                    g_22 = t;
                    {
                      ATerm j_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(g_22)), not_null(e_22));
                      {
                        j_22 = t;
                        if(((i_22 != NULL) && (i_22 != j_22)))
                          _fail(j_22);
                        else
                          i_22 = j_22;
                      }
                      t = not_null(i_22);
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
ATerm DistBinding_2 (ATerm t, ATerm c_101 (ATerm), ATerm d_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym__3))
    {
      x_22 = ATgetArgument(w_22, 0);
      y_22 = ATgetArgument(w_22, 1);
      z_22 = ATgetArgument(w_22, 2);
      {
        t = not_null(x_22);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm d_23 = NULL;
            d_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), not_null(z_22));
              t = c_101(t);
            }
            return(t);
          }
          ATerm u_1 (ATerm t)
          {
            ATerm f_23 = NULL;
            f_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_23), not_null(y_22));
              t = c_101(t);
            }
            return(t);
          }
          t = d_101(t, t_1, u_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm i_101 (ATerm), ATerm j_101 (ATerm, ATerm (ATerm)))
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_cons(r_23, sym__2))
    {
      s_23 = ATgetArgument(r_23, 0);
      t_23 = ATgetArgument(r_23, 1);
      {
        ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,e_24 = NULL;
        ATerm r_11;
        r_11 = t;
        {
          ATerm z_23 = NULL;
          t = not_null(s_23);
          {
            ATerm a_24 = NULL;
            t = i_101(t);
            {
              z_23 = t;
              {
                if(((w_23 != NULL) && (w_23 != z_23)))
                  _fail(z_23);
                else
                  w_23 = z_23;
                {
                  ATerm b_24 = NULL,d_24 = NULL;
                  t = map_1(t, new_0);
                  {
                    a_24 = t;
                    {
                      if(((x_23 != NULL) && (x_23 != a_24)))
                        _fail(a_24);
                      else
                        x_23 = a_24;
                      {
                        ATerm c_24 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_23), not_null(x_23));
                        {
                          t = zip_1(t, _id);
                          {
                            c_24 = t;
                            if(((b_24 != NULL) && (b_24 != c_24)))
                              _fail(c_24);
                            else
                              b_24 = c_24;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), not_null(t_23));
                          {
                            t = conc_0(t);
                            {
                              d_24 = t;
                              if(((y_23 != NULL) && (y_23 != d_24)))
                                _fail(d_24);
                              else
                                y_23 = d_24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = r_11;
        {
          ATerm f_24 = NULL;
          t = not_null(s_23);
          {
            ATerm v_1 (ATerm t)
            {
              t = not_null(x_23);
              return(t);
            }
            t = j_101(t, v_1);
            {
              f_24 = t;
              if(((e_24 != NULL) && (e_24 != f_24)))
                _fail(f_24);
              else
                e_24 = f_24;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(e_24), not_null(t_23), not_null(y_23));
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
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  p_24 = t;
  n_24 :
  if(match_cons(p_24, sym__2))
    {
      q_24 = ATgetArgument(p_24, 0);
      r_24 = ATgetArgument(p_24, 1);
      o_24 :
      if(((ATgetType(r_24) == AT_LIST) && ((ATermList) r_24 != ATempty)))
        {
          s_24 = ATgetFirst((ATermList) r_24);
          t_24 = (ATerm) ATgetNext((ATermList) r_24);
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_24), not_null(t_24));
        }
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
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  b_25 = t;
  y_24 :
  if(match_cons(b_25, sym__2))
    {
      c_25 = ATgetArgument(b_25, 0);
      d_25 = ATgetArgument(b_25, 1);
      z_24 :
      if(((ATgetType(d_25) == AT_LIST) && ((ATermList) d_25 != ATempty)))
        {
          e_25 = ATgetFirst((ATermList) d_25);
          h_25 = (ATerm) ATgetNext((ATermList) d_25);
          a_25 :
          if(match_cons(e_25, sym__2))
            {
              f_25 = ATgetArgument(e_25, 0);
              g_25 = ATgetArgument(e_25, 1);
              {
                ATerm j_25 = NULL;
                if(((c_25 != NULL) && (c_25 != f_25)))
                  _fail(f_25);
                else
                  c_25 = f_25;
                {
                  if(((j_25 != NULL) && (j_25 != g_25)))
                    _fail(g_25);
                  else
                    j_25 = g_25;
                  t = not_null(j_25);
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
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm w_100 (ATerm, ATerm (ATerm)))
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym__2))
    {
      p_25 = ATgetArgument(o_25, 0);
      q_25 = ATgetArgument(o_25, 1);
      {
        t = not_null(p_25);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              t = not_null(q_25);
              return(t);
            }
            t = split_2(t, _id, x_1);
            t = lookup_0(t);
            return(t);
          }
          t = w_100(t, w_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm b_100 (ATerm))
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym__2))
    {
      y_25 = ATgetArgument(x_25, 0);
      z_25 = ATgetArgument(x_25, 1);
      {
        t = not_null(y_25);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm c_26 = NULL;
            c_26 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_26), not_null(z_25));
              t = b_100(t);
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
ATerm env_alltd_1 (ATerm t, ATerm g_100 (ATerm))
{
  ATerm g_26 (ATerm t)
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_100(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        t = all_dist_1(t, g_26);
      }
    return(t);
  }
  t = g_26(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm k_101 (ATerm, ATerm (ATerm)), ATerm l_101 (ATerm), ATerm m_101 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm n_101 (ATerm, ATerm (ATerm)))
{
  ATerm i_26 = NULL;
  i_26 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_26), (ATerm) ATempty);
    {
      ATerm l_26 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm w_11 = t;
          int x_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, k_101);
              LocalPopChoice(x_11);
            }
          else
            {
              t = w_11;
              {
                t = RnBinding_2(t, l_101, n_101);
                t = DistBinding_2(t, l_26, m_101);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, z_1);
        return(t);
      }
      t = l_26(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm m_26 (ATerm t, ATerm n_26 (ATerm))
  {
    t = Scope_2(t, n_26, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, m_26);
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
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  ATerm f_29 (ATerm t)
  {
    ATerm u_27 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_27));
    {
      ATerm a_2 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = rewrite_1(t, a_2);
      {
        u_27 = t;
        u_26 :
        if(match_cons(u_27, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_u_6;
    return(t);
  }
  ATerm g_29 (ATerm t)
  {
    ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
    ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_27));
    {
      ATerm b_2 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        a_28 = t;
        a_27 :
        if(match_cons(a_28, sym_Defined_3))
          {
            b_28 = ATgetArgument(a_28, 0);
            c_28 = ATgetArgument(a_28, 1);
            d_28 = ATgetArgument(a_28, 2);
            b_27 :
            if(match_string(b_28, "j_0"))
              {
                ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
                if(((w_27 != NULL) && (w_27 != c_28)))
                  _fail(c_28);
                else
                  w_27 = c_28;
                {
                  if(((r_27 != NULL) && (r_27 != d_28)))
                    _fail(d_28);
                  else
                    r_27 = d_28;
                  {
                    t = not_null(w_27);
                    {
                      t = strename_0(t);
                      {
                        e_28 = t;
                        y_26 :
                        if(match_cons(e_28, sym_SDef_3))
                          {
                            f_28 = ATgetArgument(e_28, 0);
                            g_28 = ATgetArgument(e_28, 1);
                            j_28 = ATgetArgument(e_28, 2);
                            z_26 :
                            if(((ATgetType(g_28) == AT_LIST) && ((ATermList) g_28 != ATempty)))
                              {
                                h_28 = ATgetFirst((ATermList) g_28);
                                i_28 = (ATerm) ATgetNext((ATermList) g_28);
                                {
                                  ATerm k_28 = NULL;
                                  if(((r_27 != NULL) && (r_27 != f_28)))
                                    _fail(f_28);
                                  else
                                    r_27 = f_28;
                                  {
                                    if(((x_27 != NULL) && (x_27 != g_28)))
                                      _fail(g_28);
                                    else
                                      x_27 = g_28;
                                    {
                                      if(((y_27 != NULL) && (y_27 != j_28)))
                                        _fail(j_28);
                                      else
                                        y_27 = j_28;
                                      {
                                        t = new_0(t);
                                        {
                                          k_28 = t;
                                          {
                                            if(((z_27 != NULL) && (z_27 != k_28)))
                                              _fail(k_28);
                                            else
                                              z_27 = k_28;
                                            {
                                              ATerm d_12;
                                              d_12 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_27)), term_e_12);
                                                {
                                                  ATerm c_2 (ATerm t)
                                                  {
                                                    t = term_c_12;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, c_2);
                                                }
                                              }
                                              t = d_12;
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
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_27), not_null(x_27), not_null(y_27))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_27)), (ATerm) ATempty));
    return(t);
  }
  ATerm h_29 (ATerm t)
  {
    ATerm m_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_27));
    {
      ATerm d_2 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        m_28 = t;
        d_27 :
        if(match_cons(m_28, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_u_6;
    return(t);
  }
  ATerm i_29 (ATerm t)
  {
    ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
    ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_27));
    {
      ATerm e_2 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        t_28 = t;
        i_27 :
        if(match_cons(t_28, sym_Defined_3))
          {
            u_28 = ATgetArgument(t_28, 0);
            v_28 = ATgetArgument(t_28, 1);
            w_28 = ATgetArgument(t_28, 2);
            j_27 :
            if(match_string(u_28, "i_0"))
              {
                ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
                if(((p_28 != NULL) && (p_28 != v_28)))
                  _fail(v_28);
                else
                  p_28 = v_28;
                {
                  if(((r_27 != NULL) && (r_27 != w_28)))
                    _fail(w_28);
                  else
                    r_27 = w_28;
                  {
                    t = not_null(p_28);
                    {
                      t = strename_0(t);
                      {
                        x_28 = t;
                        h_27 :
                        if(match_cons(x_28, sym_SDef_3))
                          {
                            y_28 = ATgetArgument(x_28, 0);
                            z_28 = ATgetArgument(x_28, 1);
                            a_29 = ATgetArgument(x_28, 2);
                            {
                              ATerm b_29 = NULL;
                              if(((r_27 != NULL) && (r_27 != y_28)))
                                _fail(y_28);
                              else
                                r_27 = y_28;
                              {
                                if(((q_28 != NULL) && (q_28 != z_28)))
                                  _fail(z_28);
                                else
                                  q_28 = z_28;
                                {
                                  if(((r_28 != NULL) && (r_28 != a_29)))
                                    _fail(a_29);
                                  else
                                    r_28 = a_29;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, not_null(q_28), not_null(s_27), not_null(r_28));
                                    {
                                      t = substitute_args_0(t);
                                      {
                                        b_29 = t;
                                        {
                                          if(((s_28 != NULL) && (s_28 != b_29)))
                                            _fail(b_29);
                                          else
                                            s_28 = b_29;
                                          {
                                            ATerm i_12;
                                            i_12 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_27)), term_e_12);
                                              {
                                                ATerm f_2 (ATerm t)
                                                {
                                                  t = term_c_12;
                                                  return(t);
                                                }
                                                t = assert_1(t, f_2);
                                              }
                                            }
                                            t = i_12;
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
    t = not_null(s_28);
    return(t);
  }
  ATerm j_29 (ATerm t)
  {
    ATerm e_29 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_27));
    {
      ATerm g_2 (ATerm t)
      {
        t = term_c_12;
        return(t);
      }
      t = rewrite_1(t, g_2);
      {
        e_29 = t;
        l_27 :
        if(match_cons(e_29, sym_Undefined_0))
          {
            _fail(t);
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = term_u_6;
    return(t);
  }
  p_27 = t;
  m_27 :
  if(match_cons(p_27, sym_Call_2))
    {
      q_27 = ATgetArgument(p_27, 0);
      s_27 = ATgetArgument(p_27, 1);
      n_27 :
      if(match_cons(q_27, sym_SVar_1))
        {
          r_27 = ATgetArgument(q_27, 0);
          o_27 :
          if(((ATermList) s_27 == ATempty))
            {
              {
                ATerm k_12 = t;
                int n_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_29(t);
                    LocalPopChoice(n_12);
                  }
                else
                  {
                    t = k_12;
                    {
                      ATerm o_12 = t;
                      int p_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_29(t);
                          LocalPopChoice(p_12);
                        }
                      else
                        {
                          t = o_12;
                          {
                            ATerm q_12 = t;
                            int r_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = h_29(t);
                                LocalPopChoice(r_12);
                              }
                            else
                              {
                                t = q_12;
                                {
                                  ATerm s_12 = t;
                                  int t_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = i_29(t);
                                      LocalPopChoice(t_12);
                                    }
                                  else
                                    {
                                      t = s_12;
                                      t = j_29(t);
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
              ATerm u_12 = t;
              int v_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_29(t);
                  LocalPopChoice(v_12);
                }
              else
                {
                  t = u_12;
                  {
                    ATerm w_12 = t;
                    int b_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = h_29(t);
                        LocalPopChoice(b_13);
                      }
                    else
                      {
                        t = w_12;
                        {
                          ATerm c_13 = t;
                          int d_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = i_29(t);
                              LocalPopChoice(d_13);
                            }
                          else
                            {
                              t = c_13;
                              t = j_29(t);
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
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym_SDef_3))
    {
      w_29 = ATgetArgument(v_29, 0);
      x_29 = ATgetArgument(v_29, 1);
      y_29 = ATgetArgument(v_29, 2);
      {
        ATerm h_13;
        h_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_29)), term_e_12);
          {
            ATerm h_2 (ATerm t)
            {
              t = term_c_12;
              return(t);
            }
            t = assert_1(t, h_2);
          }
        }
        t = h_13;
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
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  f_30 = t;
  e_30 :
  if(((ATgetType(f_30) == AT_LIST) && ((ATermList) f_30 != ATempty)))
    {
      g_30 = ATgetFirst((ATermList) f_30);
      h_30 = (ATerm) ATgetNext((ATermList) f_30);
      t = not_null(h_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  s_30 :
  if(match_cons(t_30, sym__2))
    {
      u_30 = ATgetArgument(t_30, 0);
      v_30 = ATgetArgument(t_30, 1);
      {
        ATerm j_13;
        j_13 = t;
        {
          ATerm y_30 = NULL;
          ATerm z_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_30), not_null(v_30));
          {
            ATerm m_13 = t;
            int n_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(n_13);
              }
            else
              {
                t = m_13;
                t = (ATerm) ATempty;
              }
            {
              z_30 = t;
              if(((y_30 != NULL) && (y_30 != z_30)))
                _fail(z_30);
              else
                y_30 = z_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_30), not_null(v_30), not_null(y_30));
            t = table_put_0(t);
          }
        }
        t = j_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm m_94 (ATerm))
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  ATerm o_13;
  o_13 = t;
  {
    ATerm j_31 = NULL;
    ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
    t = m_94(t);
    {
      j_31 = t;
      {
        if(((h_31 != NULL) && (h_31 != j_31)))
          _fail(j_31);
        else
          h_31 = j_31;
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_31), term_r_13);
              t = table_get_0(t);
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            k_31 = t;
            f_31 :
            if(((ATgetType(k_31) == AT_LIST) && ((ATermList) k_31 != ATempty)))
              {
                l_31 = ATgetFirst((ATermList) k_31);
                m_31 = (ATerm) ATgetNext((ATermList) k_31);
                {
                  if(((i_31 != NULL) && (i_31 != l_31)))
                    _fail(l_31);
                  else
                    i_31 = l_31;
                  {
                    if(((g_31 != NULL) && (g_31 != m_31)))
                      _fail(m_31);
                    else
                      g_31 = m_31;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(h_31), term_r_13, not_null(g_31));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(i_31);
                          {
                            ATerm i_2 (ATerm t)
                            {
                              ATerm n_31 = NULL;
                              n_31 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_31), not_null(n_31));
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
ATerm restore_always_2 (ATerm t, ATerm a_111 (ATerm), ATerm b_111 (ATerm))
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_111(t);
      t = b_111(t);
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      {
        t = b_111(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm l_94 (ATerm))
{
  ATerm u_31 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm v_31 = NULL;
    ATerm w_31 = NULL;
    t = l_94(t);
    {
      v_31 = t;
      {
        if(((u_31 != NULL) && (u_31 != v_31)))
          _fail(v_31);
        else
          u_31 = v_31;
        {
          ATerm x_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_31), term_r_13);
          {
            ATerm z_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
                t = (ATerm) ATempty;
              }
            {
              x_31 = t;
              if(((w_31 != NULL) && (w_31 != x_31)))
                _fail(x_31);
              else
                w_31 = x_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_31), term_r_13, (ATerm) ATinsert(CheckATermList(not_null(w_31)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_13;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm n_94 (ATerm), ATerm o_94 (ATerm))
{
  t = begin_scope_1(t, n_94);
  {
    ATerm j_2 (ATerm t)
    {
      t = end_scope_1(t, n_94);
      return(t);
    }
    t = restore_always_2(t, o_94, j_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    t = term_c_12;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, k_2, l_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm p_94 (ATerm))
{
  ATerm g_32 = NULL,h_32 = NULL,m_33 = NULL;
  g_32 = t;
  f_32 :
  if(match_cons(g_32, sym__2))
    {
      h_32 = ATgetArgument(g_32, 0);
      m_33 = ATgetArgument(g_32, 1);
      {
        ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
        ATerm j_14;
        j_14 = t;
        {
          ATerm f_34 = NULL;
          ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
          t = p_94(t);
          {
            f_34 = t;
            {
              if(((c_34 != NULL) && (c_34 != f_34)))
                _fail(f_34);
              else
                c_34 = f_34;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_34), not_null(h_32), not_null(m_33));
                {
                  t = table_push_0(t);
                  {
                    ATerm n_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_34), term_r_13);
                        t = table_get_0(t);
                        LocalPopChoice(o_14);
                      }
                    else
                      {
                        t = n_14;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      g_34 = t;
                      e_32 :
                      if(((ATgetType(g_34) == AT_LIST) && ((ATermList) g_34 != ATempty)))
                        {
                          h_34 = ATgetFirst((ATermList) g_34);
                          i_34 = (ATerm) ATgetNext((ATermList) g_34);
                          {
                            if(((d_34 != NULL) && (d_34 != h_34)))
                              _fail(h_34);
                            else
                              d_34 = h_34;
                            {
                              if(((e_34 != NULL) && (e_34 != i_34)))
                                _fail(i_34);
                              else
                                e_34 = i_34;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_34), term_r_13, (ATerm) ATinsert(CheckATermList(not_null(e_34)), (ATerm) ATinsert(CheckATermList(not_null(d_34)), not_null(h_32))));
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
        t = j_14;
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
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym_SDef_3))
    {
      p_34 = ATgetArgument(o_34, 0);
      q_34 = ATgetArgument(o_34, 1);
      r_34 = ATgetArgument(o_34, 2);
      {
        ATerm p_14;
        p_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_34)), (ATerm) ATmakeAppl(sym_Defined_3, term_q_14, not_null(o_34), not_null(p_34)));
          {
            ATerm m_2 (ATerm t)
            {
              t = term_c_12;
              return(t);
            }
            t = assert_1(t, m_2);
          }
        }
        t = p_14;
        {
          ATerm r_14;
          r_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_34)), (ATerm) ATmakeAppl(sym_Defined_3, term_x_14, not_null(o_34), not_null(p_34)));
            {
              ATerm n_2 (ATerm t)
              {
                t = term_c_12;
                return(t);
              }
              t = assert_1(t, n_2);
            }
          }
          t = r_14;
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
  ATerm y_14 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_14;
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm))
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_102(t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
        z_34 = t;
        y_34 :
        if(((ATgetType(z_34) == AT_LIST) && ((ATermList) z_34 != ATempty)))
          {
            a_35 = ATgetFirst((ATermList) z_34);
            b_35 = (ATerm) ATgetNext((ATermList) z_34);
            {
              ATerm e_35 = NULL,g_35 = NULL;
              ATerm f_15;
              f_15 = t;
              {
                ATerm f_35 = NULL;
                t = not_null(a_35);
                {
                  t = n_102(t);
                  {
                    f_35 = t;
                    if(((e_35 != NULL) && (e_35 != f_35)))
                      _fail(f_35);
                    else
                      e_35 = f_35;
                  }
                }
              }
              t = f_15;
              {
                ATerm h_35 = NULL;
                t = not_null(b_35);
                {
                  t = foldr_3(t, l_102, m_102, n_102);
                  {
                    h_35 = t;
                    if(((g_35 != NULL) && (g_35 != h_35)))
                      _fail(h_35);
                    else
                      g_35 = h_35;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_35), not_null(g_35));
                  t = m_102(t);
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
ATerm crush_3 (ATerm t, ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm f_104 (ATerm))
{
  ATerm p_35 = NULL;
  ATerm r_35 = NULL;
  p_35 = t;
  {
    ATerm s_35 = NULL;
    ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
    t = not_null(p_35);
    {
      s_35 = t;
      {
        t = SSL_explode_term(not_null(s_35));
        {
          u_35 = t;
          o_35 :
          if(match_cons(u_35, sym__2))
            {
              v_35 = ATgetArgument(u_35, 0);
              w_35 = ATgetArgument(u_35, 1);
              if(((r_35 != NULL) && (r_35 != w_35)))
                _fail(w_35);
              else
                r_35 = w_35;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_35);
      t = foldr_3(t, d_104, e_104, f_104);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_36 (ATerm t)
      {
        ATerm o_2 (ATerm t)
        {
          t = term_i_15;
          return(t);
        }
        t = crush_3(t, o_2, add_0, a_36);
        return(t);
      }
      t = a_36(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        ATerm p_2 (ATerm t)
        {
          t = term_i_15;
          return(t);
        }
        t = crush_3(t, p_2, add_0, term_size_0);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm e_86 (ATerm), ATerm f_86 (ATerm))
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_cons(h_36, sym_LChoice_2))
    {
      i_36 = ATgetArgument(h_36, 0);
      j_36 = ATgetArgument(h_36, 1);
      {
        ATerm n_36 = NULL,p_36 = NULL;
        ATerm o_36 = NULL;
        t = SSLgetAnnotations(not_null(h_36));
        {
          o_36 = t;
          if(((n_36 != NULL) && (n_36 != o_36)))
            _fail(o_36);
          else
            n_36 = o_36;
        }
        {
          t = not_null(i_36);
          {
            ATerm r_36 = NULL;
            t = e_86(t);
            {
              p_36 = t;
              {
                t = not_null(j_36);
                {
                  ATerm t_36 = NULL;
                  t = f_86(t);
                  {
                    r_36 = t;
                    {
                      ATerm u_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(p_36), not_null(r_36)), not_null(n_36));
                      {
                        u_36 = t;
                        if(((t_36 != NULL) && (t_36 != u_36)))
                          _fail(u_36);
                        else
                          t_36 = u_36;
                      }
                      t = not_null(t_36);
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
ATerm Choice_2 (ATerm t, ATerm c_86 (ATerm), ATerm d_86 (ATerm))
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym_Choice_2))
    {
      h_37 = ATgetArgument(g_37, 0);
      i_37 = ATgetArgument(g_37, 1);
      {
        ATerm n_37 = NULL,p_37 = NULL;
        ATerm o_37 = NULL;
        t = SSLgetAnnotations(not_null(g_37));
        {
          o_37 = t;
          if(((n_37 != NULL) && (n_37 != o_37)))
            _fail(o_37);
          else
            n_37 = o_37;
        }
        {
          t = not_null(h_37);
          {
            ATerm r_37 = NULL;
            t = c_86(t);
            {
              p_37 = t;
              {
                t = not_null(i_37);
                {
                  ATerm t_37 = NULL;
                  t = d_86(t);
                  {
                    r_37 = t;
                    {
                      ATerm u_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(p_37), not_null(r_37)), not_null(n_37));
                      {
                        u_37 = t;
                        if(((t_37 != NULL) && (t_37 != u_37)))
                          _fail(u_37);
                        else
                          t_37 = u_37;
                      }
                      t = not_null(t_37);
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
ATerm Cong_2 (ATerm t, ATerm h_87 (ATerm), ATerm i_87 (ATerm))
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym_Cong_2))
    {
      h_38 = ATgetArgument(g_38, 0);
      i_38 = ATgetArgument(g_38, 1);
      {
        ATerm m_38 = NULL,o_38 = NULL;
        ATerm n_38 = NULL;
        t = SSLgetAnnotations(not_null(g_38));
        {
          n_38 = t;
          if(((m_38 != NULL) && (m_38 != n_38)))
            _fail(n_38);
          else
            m_38 = n_38;
        }
        {
          t = not_null(h_38);
          {
            ATerm q_38 = NULL;
            t = h_87(t);
            {
              o_38 = t;
              {
                t = not_null(i_38);
                {
                  ATerm s_38 = NULL;
                  t = i_87(t);
                  {
                    q_38 = t;
                    {
                      ATerm t_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(o_38), not_null(q_38)), not_null(m_38));
                      {
                        t_38 = t;
                        if(((s_38 != NULL) && (s_38 != t_38)))
                          _fail(t_38);
                        else
                          s_38 = t_38;
                      }
                      t = not_null(s_38);
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
ATerm Match_1 (ATerm t, ATerm p_87 (ATerm))
{
  ATerm e_39 = NULL,f_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym_Match_1))
    {
      f_39 = ATgetArgument(e_39, 0);
      {
        ATerm i_39 = NULL,k_39 = NULL;
        ATerm j_39 = NULL;
        t = SSLgetAnnotations(not_null(e_39));
        {
          j_39 = t;
          if(((i_39 != NULL) && (i_39 != j_39)))
            _fail(j_39);
          else
            i_39 = j_39;
        }
        {
          t = not_null(f_39);
          {
            ATerm m_39 = NULL;
            t = p_87(t);
            {
              k_39 = t;
              {
                ATerm n_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(k_39)), not_null(i_39));
                {
                  n_39 = t;
                  if(((m_39 != NULL) && (m_39 != n_39)))
                    _fail(n_39);
                  else
                    m_39 = n_39;
                }
                t = not_null(m_39);
              }
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
ATerm Seq_2 (ATerm t, ATerm a_86 (ATerm), ATerm b_86 (ATerm))
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
  y_39 = t;
  x_39 :
  if(match_cons(y_39, sym_Seq_2))
    {
      z_39 = ATgetArgument(y_39, 0);
      a_40 = ATgetArgument(y_39, 1);
      {
        ATerm e_40 = NULL,g_40 = NULL;
        ATerm f_40 = NULL;
        t = SSLgetAnnotations(not_null(y_39));
        {
          f_40 = t;
          if(((e_40 != NULL) && (e_40 != f_40)))
            _fail(f_40);
          else
            e_40 = f_40;
        }
        {
          t = not_null(z_39);
          {
            ATerm i_40 = NULL;
            t = a_86(t);
            {
              g_40 = t;
              {
                t = not_null(a_40);
                {
                  ATerm k_40 = NULL;
                  t = b_86(t);
                  {
                    i_40 = t;
                    {
                      ATerm l_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(g_40), not_null(i_40)), not_null(e_40));
                      {
                        l_40 = t;
                        if(((k_40 != NULL) && (k_40 != l_40)))
                          _fail(l_40);
                        else
                          k_40 = l_40;
                      }
                      t = not_null(k_40);
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
ATerm Scope_2 (ATerm t, ATerm t_87 (ATerm), ATerm u_87 (ATerm))
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  e_41 :
  if(match_cons(r_41, sym_Scope_2))
    {
      s_41 = ATgetArgument(r_41, 0);
      t_41 = ATgetArgument(r_41, 1);
      {
        ATerm x_41 = NULL,z_41 = NULL;
        ATerm y_41 = NULL;
        t = SSLgetAnnotations(not_null(r_41));
        {
          y_41 = t;
          if(((x_41 != NULL) && (x_41 != y_41)))
            _fail(y_41);
          else
            x_41 = y_41;
        }
        {
          t = not_null(s_41);
          {
            ATerm b_42 = NULL;
            t = t_87(t);
            {
              z_41 = t;
              {
                t = not_null(t_41);
                {
                  ATerm d_42 = NULL;
                  t = u_87(t);
                  {
                    b_42 = t;
                    {
                      ATerm e_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(z_41), not_null(b_42)), not_null(x_41));
                      {
                        e_42 = t;
                        if(((d_42 != NULL) && (d_42 != e_42)))
                          _fail(e_42);
                        else
                          d_42 = e_42;
                      }
                      t = not_null(d_42);
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
ATerm Build_1 (ATerm t, ATerm q_87 (ATerm))
{
  ATerm r_43 = NULL,s_43 = NULL;
  r_43 = t;
  h_43 :
  if(match_cons(r_43, sym_Build_1))
    {
      s_43 = ATgetArgument(r_43, 0);
      {
        ATerm v_43 = NULL,x_43 = NULL;
        ATerm w_43 = NULL;
        t = SSLgetAnnotations(not_null(r_43));
        {
          w_43 = t;
          if(((v_43 != NULL) && (v_43 != w_43)))
            _fail(w_43);
          else
            v_43 = w_43;
        }
        {
          t = not_null(s_43);
          {
            ATerm z_43 = NULL;
            t = q_87(t);
            {
              x_43 = t;
              {
                ATerm a_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(x_43)), not_null(v_43));
                {
                  a_44 = t;
                  if(((z_43 != NULL) && (z_43 != a_44)))
                    _fail(a_44);
                  else
                    z_43 = a_44;
                }
                t = not_null(z_43);
              }
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
ATerm SVar_1 (ATerm t, ATerm o_86 (ATerm))
{
  ATerm k_44 = NULL,l_44 = NULL;
  k_44 = t;
  j_44 :
  if(match_cons(k_44, sym_SVar_1))
    {
      l_44 = ATgetArgument(k_44, 0);
      {
        ATerm o_44 = NULL,q_44 = NULL;
        ATerm p_44 = NULL;
        t = SSLgetAnnotations(not_null(k_44));
        {
          p_44 = t;
          if(((o_44 != NULL) && (o_44 != p_44)))
            _fail(p_44);
          else
            o_44 = p_44;
        }
        {
          t = not_null(l_44);
          {
            ATerm s_44 = NULL;
            t = o_86(t);
            {
              q_44 = t;
              {
                ATerm t_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(q_44)), not_null(o_44));
                {
                  t_44 = t;
                  if(((s_44 != NULL) && (s_44 != t_44)))
                    _fail(t_44);
                  else
                    s_44 = t_44;
                }
                t = not_null(s_44);
              }
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
ATerm Call_2 (ATerm t, ATerm d_87 (ATerm), ATerm e_87 (ATerm))
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  e_45 = t;
  d_45 :
  if(match_cons(e_45, sym_Call_2))
    {
      f_45 = ATgetArgument(e_45, 0);
      g_45 = ATgetArgument(e_45, 1);
      {
        ATerm k_45 = NULL,m_45 = NULL;
        ATerm l_45 = NULL;
        t = SSLgetAnnotations(not_null(e_45));
        {
          l_45 = t;
          if(((k_45 != NULL) && (k_45 != l_45)))
            _fail(l_45);
          else
            k_45 = l_45;
        }
        {
          t = not_null(f_45);
          {
            ATerm o_45 = NULL;
            t = d_87(t);
            {
              m_45 = t;
              {
                t = not_null(g_45);
                {
                  ATerm q_45 = NULL;
                  t = e_87(t);
                  {
                    o_45 = t;
                    {
                      ATerm r_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(m_45), not_null(o_45)), not_null(k_45));
                      {
                        r_45 = t;
                        if(((q_45 != NULL) && (q_45 != r_45)))
                          _fail(r_45);
                        else
                          q_45 = r_45;
                      }
                      t = not_null(q_45);
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
  ATerm b_46 = NULL;
  b_46 = t;
  a_46 :
  if(match_cons(b_46, sym_Fail_0))
    {
      ATerm m_46 = NULL,g_47 = NULL;
      ATerm j_15;
      j_15 = t;
      {
        ATerm n_46 = NULL;
        t = SSLgetAnnotations(not_null(b_46));
        {
          n_46 = t;
          if(((m_46 != NULL) && (m_46 != n_46)))
            _fail(n_46);
          else
            m_46 = n_46;
        }
      }
      t = j_15;
      {
        ATerm h_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(m_46));
        {
          h_47 = t;
          if(((g_47 != NULL) && (g_47 != h_47)))
            _fail(h_47);
          else
            g_47 = h_47;
        }
        t = not_null(g_47);
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
  ATerm p_47 = NULL;
  p_47 = t;
  o_47 :
  if(match_cons(p_47, sym_Id_0))
    {
      ATerm r_47 = NULL,t_47 = NULL;
      ATerm k_15;
      k_15 = t;
      {
        ATerm s_47 = NULL;
        t = SSLgetAnnotations(not_null(p_47));
        {
          s_47 = t;
          if(((r_47 != NULL) && (r_47 != s_47)))
            _fail(s_47);
          else
            r_47 = s_47;
        }
      }
      t = k_15;
      {
        ATerm u_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(r_47));
        {
          u_47 = t;
          if(((t_47 != NULL) && (t_47 != u_47)))
            _fail(u_47);
          else
            t_47 = u_47;
        }
        t = not_null(t_47);
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
  ATerm y_47 (ATerm t)
  {
    ATerm l_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = l_15;
        {
          ATerm q_15 = t;
          int u_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              LocalPopChoice(u_15);
            }
          else
            {
              t = q_15;
              {
                ATerm x_15 = t;
                int y_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, q_2, _id);
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
                          t = Build_1(t, _id);
                          LocalPopChoice(a_16);
                        }
                      else
                        {
                          t = z_15;
                          {
                            ATerm b_16 = t;
                            int f_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                LocalPopChoice(f_16);
                              }
                            else
                              {
                                t = b_16;
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
                                        ATerm l_16 = t;
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
                                            t = l_16;
                                            {
                                              ATerm n_16 = t;
                                              int s_16 = stack_ptr;
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
                                                  LocalPopChoice(s_16);
                                                }
                                              else
                                                {
                                                  t = n_16;
                                                  {
                                                    ATerm t_16 = t;
                                                    int u_16 = stack_ptr;
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
                                                        LocalPopChoice(u_16);
                                                      }
                                                    else
                                                      {
                                                        t = t_16;
                                                        {
                                                          ATerm w_16 = t;
                                                          int e_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              LocalPopChoice(e_17);
                                                            }
                                                          else
                                                            {
                                                              t = w_16;
                                                              {
                                                                ATerm f_17 = t;
                                                                int g_17 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, y_47, y_47);
                                                                    LocalPopChoice(g_17);
                                                                  }
                                                                else
                                                                  {
                                                                    t = f_17;
                                                                    t = LChoice_2(t, y_47, y_47);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = y_47(t);
  {
    ATerm h_17;
    h_17 = t;
    {
      ATerm y_2 (ATerm t)
      {
        t = term_i_17;
        return(t);
      }
      t = split_2(t, term_size_0, y_2);
      t = leq_0(t);
    }
    t = h_17;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm s_112 (ATerm))
{
  ATerm z_47 (ATerm t)
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_112(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = _one(t, z_47);
      }
    return(t);
  }
  t = z_47(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm))
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  o_48 = t;
  n_48 :
  if(match_cons(o_48, sym_SDef_3))
    {
      p_48 = ATgetArgument(o_48, 0);
      q_48 = ATgetArgument(o_48, 1);
      r_48 = ATgetArgument(o_48, 2);
      {
        ATerm b_49 = NULL,d_49 = NULL;
        ATerm c_49 = NULL;
        t = SSLgetAnnotations(not_null(o_48));
        {
          c_49 = t;
          if(((b_49 != NULL) && (b_49 != c_49)))
            _fail(c_49);
          else
            b_49 = c_49;
        }
        {
          t = not_null(p_48);
          {
            ATerm h_49 = NULL;
            t = t_86(t);
            {
              d_49 = t;
              {
                t = not_null(q_48);
                {
                  ATerm j_49 = NULL;
                  t = u_86(t);
                  {
                    h_49 = t;
                    {
                      t = not_null(r_48);
                      {
                        ATerm l_49 = NULL;
                        t = v_86(t);
                        {
                          j_49 = t;
                          {
                            ATerm m_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(d_49), not_null(h_49), not_null(j_49)), not_null(b_49));
                            {
                              m_49 = t;
                              if(((l_49 != NULL) && (l_49 != m_49)))
                                _fail(m_49);
                              else
                                l_49 = m_49;
                            }
                            t = not_null(l_49);
                          }
                        }
                      }
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
  ATerm a_50 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm c_50 = NULL;
    ATerm m_17 = t;
    if((PushChoice() == 0))
      {
        ATerm b_50 = NULL;
        b_50 = t;
        u_49 :
        if(!(match_string(b_50, "main_0")))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_17;
      }
    {
      c_50 = t;
      if(((a_50 != NULL) && (a_50 != c_50)))
        _fail(c_50);
      else
        a_50 = c_50;
    }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm n_17;
    n_17 = t;
    {
      ATerm p_17 = t;
      if((PushChoice() == 0))
        {
          ATerm b_3 (ATerm t)
          {
            ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
            d_50 = t;
            x_49 :
            if(match_cons(d_50, sym_Call_2))
              {
                e_50 = ATgetArgument(d_50, 0);
                g_50 = ATgetArgument(d_50, 1);
                y_49 :
                if(match_cons(e_50, sym_SVar_1))
                  {
                    f_50 = ATgetArgument(e_50, 0);
                    z_49 :
                    if(((ATermList) g_50 == ATempty))
                      {
                        if(((a_50 != NULL) && (a_50 != f_50)))
                          _fail(f_50);
                        else
                          a_50 = f_50;
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
          t = p_17;
        }
    }
    t = n_17;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, z_2, _id, a_3);
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  a_51 = t;
  z_50 :
  if(match_cons(a_51, sym_Cong_2))
    {
      b_51 = ATgetArgument(a_51, 0);
      c_51 = ATgetArgument(a_51, 1);
      {
        ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,q_52 = NULL,s_52 = NULL,u_52 = NULL;
        ATerm x_17;
        x_17 = t;
        {
          ATerm v_51 = NULL;
          t = not_null(c_51);
          {
            ATerm z_51 = NULL;
            t = map_1(t, new_0);
            {
              v_51 = t;
              {
                if(((q_51 != NULL) && (q_51 != v_51)))
                  _fail(v_51);
                else
                  q_51 = v_51;
                {
                  t = not_null(q_51);
                  {
                    ATerm a_52 = NULL;
                    ATerm c_3 (ATerm t)
                    {
                      ATerm x_51 = NULL;
                      ATerm y_51 = NULL;
                      y_51 = t;
                      if(((x_51 != NULL) && (x_51 != y_51)))
                        _fail(y_51);
                      else
                        x_51 = y_51;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_51));
                      return(t);
                    }
                    t = map_1(t, c_3);
                    {
                      z_51 = t;
                      {
                        if(((n_51 != NULL) && (n_51 != z_51)))
                          _fail(z_51);
                        else
                          n_51 = z_51;
                        {
                          ATerm b_52 = NULL;
                          t = new_0(t);
                          {
                            a_52 = t;
                            {
                              if(((o_51 != NULL) && (o_51 != a_52)))
                                _fail(a_52);
                              else
                                o_51 = a_52;
                              {
                                t = not_null(c_51);
                                {
                                  ATerm e_52 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    b_52 = t;
                                    {
                                      if(((r_51 != NULL) && (r_51 != b_52)))
                                        _fail(b_52);
                                      else
                                        r_51 = b_52;
                                      {
                                        t = not_null(r_51);
                                        {
                                          ATerm f_52 = NULL,p_52 = NULL;
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm c_52 = NULL;
                                            ATerm d_52 = NULL;
                                            d_52 = t;
                                            if(((c_52 != NULL) && (c_52 != d_52)))
                                              _fail(d_52);
                                            else
                                              c_52 = d_52;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_52));
                                            return(t);
                                          }
                                          t = map_1(t, d_3);
                                          {
                                            e_52 = t;
                                            {
                                              if(((p_51 != NULL) && (p_51 != e_52)))
                                                _fail(e_52);
                                              else
                                                p_51 = e_52;
                                              {
                                                ATerm g_52 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_51), not_null(r_51));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    g_52 = t;
                                                    if(((f_52 != NULL) && (f_52 != g_52)))
                                                      _fail(g_52);
                                                    else
                                                      f_52 = g_52;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_52), not_null(c_51));
                                                  {
                                                    ATerm e_3 (ATerm t)
                                                    {
                                                      ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL;
                                                      h_52 = t;
                                                      t_50 :
                                                      if(match_cons(h_52, sym__2))
                                                        {
                                                          i_52 = ATgetArgument(h_52, 0);
                                                          l_52 = ATgetArgument(h_52, 1);
                                                          u_50 :
                                                          if(match_cons(i_52, sym__2))
                                                            {
                                                              j_52 = ATgetArgument(i_52, 0);
                                                              k_52 = ATgetArgument(i_52, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_52))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_52), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_52)))));
                                                            }
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
                                                      p_52 = t;
                                                      if(((s_51 != NULL) && (s_51 != p_52)))
                                                        _fail(p_52);
                                                      else
                                                        s_51 = p_52;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = x_17;
        {
          ATerm y_17;
          y_17 = t;
          {
            ATerm r_52 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_51), not_null(r_51));
            {
              t = conc_0(t);
              {
                r_52 = t;
                if(((q_52 != NULL) && (q_52 != r_52)))
                  _fail(r_52);
                else
                  q_52 = r_52;
              }
            }
          }
          t = y_17;
          {
            ATerm z_17;
            z_17 = t;
            {
              ATerm t_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(b_51), not_null(n_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_51))));
              {
                t = Mapp2_0(t);
                {
                  t_52 = t;
                  if(((s_52 != NULL) && (s_52 != t_52)))
                    _fail(t_52);
                  else
                    s_52 = t_52;
                }
              }
            }
            t = z_17;
            {
              ATerm v_52 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(b_51), not_null(p_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_51))));
              {
                t = Bapp2_0(t);
                {
                  v_52 = t;
                  if(((u_52 != NULL) && (u_52 != v_52)))
                    _fail(v_52);
                  else
                    u_52 = v_52;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(q_52)), not_null(o_51)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_51)), not_null(u_52))));
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
  ATerm c_54 = NULL,d_54 = NULL;
  c_54 = t;
  b_54 :
  if(match_cons(c_54, sym_Build_1))
    {
      d_54 = ATgetArgument(c_54, 0);
      {
        ATerm d_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,o_54 = NULL;
            ATerm p_54 = NULL;
            ATerm z_54 = NULL;
            t = new_0(t);
            {
              p_54 = t;
              {
                if(((h_54 != NULL) && (h_54 != p_54)))
                  _fail(p_54);
                else
                  h_54 = p_54;
                {
                  t = not_null(d_54);
                  {
                    ATerm f_3 (ATerm t)
                    {
                      ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
                      w_54 = t;
                      p_53 :
                      if(match_cons(w_54, sym_Anno_2))
                        {
                          x_54 = ATgetArgument(w_54, 0);
                          y_54 = ATgetArgument(w_54, 1);
                          {
                            if(((f_54 != NULL) && (f_54 != x_54)))
                              _fail(x_54);
                            else
                              f_54 = x_54;
                            {
                              if(((g_54 != NULL) && (g_54 != y_54)))
                                _fail(y_54);
                              else
                                g_54 = y_54;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_54));
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
                      z_54 = t;
                      if(((o_54 != NULL) && (o_54 != z_54)))
                        _fail(z_54);
                      else
                        o_54 = z_54;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_54)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_p_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_54)), not_null(f_54))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_54))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_54))));
            LocalPopChoice(j_18);
          }
        else
          {
            t = d_18;
            {
              ATerm q_18 = t;
              int r_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
                  ATerm e_55 = NULL;
                  ATerm h_55 = NULL;
                  t = new_0(t);
                  {
                    e_55 = t;
                    {
                      if(((c_55 != NULL) && (c_55 != e_55)))
                        _fail(e_55);
                      else
                        c_55 = e_55;
                      {
                        t = not_null(d_54);
                        {
                          ATerm g_3 (ATerm t)
                          {
                            ATerm f_55 = NULL,g_55 = NULL;
                            f_55 = t;
                            t_53 :
                            if(match_cons(f_55, sym_RootApp_1))
                              {
                                g_55 = ATgetArgument(f_55, 0);
                                {
                                  if(((b_55 != NULL) && (b_55 != g_55)))
                                    _fail(g_55);
                                  else
                                    b_55 = g_55;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_55));
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
                            h_55 = t;
                            if(((d_55 != NULL) && (d_55 != h_55)))
                              _fail(h_55);
                            else
                              d_55 = h_55;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_55), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_55))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_55))));
                  LocalPopChoice(r_18);
                }
              else
                {
                  t = q_18;
                  {
                    ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL;
                    ATerm x_55 = NULL;
                    ATerm e_56 = NULL;
                    t = new_0(t);
                    {
                      x_55 = t;
                      {
                        if(((l_55 != NULL) && (l_55 != x_55)))
                          _fail(x_55);
                        else
                          l_55 = x_55;
                        {
                          t = not_null(d_54);
                          {
                            ATerm h_3 (ATerm t)
                            {
                              ATerm y_55 = NULL,z_55 = NULL,b_56 = NULL;
                              y_55 = t;
                              x_53 :
                              if(match_cons(y_55, sym_App_2))
                                {
                                  z_55 = ATgetArgument(y_55, 0);
                                  b_56 = ATgetArgument(y_55, 1);
                                  {
                                    if(((j_55 != NULL) && (j_55 != z_55)))
                                      _fail(z_55);
                                    else
                                      j_55 = z_55;
                                    {
                                      if(((k_55 != NULL) && (k_55 != b_56)))
                                        _fail(b_56);
                                      else
                                        k_55 = b_56;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_55));
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
                              e_56 = t;
                              if(((m_55 != NULL) && (m_55 != e_56)))
                                _fail(e_56);
                              else
                                m_55 = e_56;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_55)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_55), not_null(k_55), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_55)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_55))));
                  }
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
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
  t_56 = t;
  s_56 :
  if(match_cons(t_56, sym__2))
    {
      u_56 = ATgetArgument(t_56, 0);
      v_56 = ATgetArgument(t_56, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_56)), not_null(u_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,j_57 = NULL,k_57 = NULL,m_57 = NULL,n_57 = NULL;
  f_57 = t;
  a_57 :
  if(match_cons(f_57, sym__2))
    {
      g_57 = ATgetArgument(f_57, 0);
      k_57 = ATgetArgument(f_57, 1);
      b_57 :
      if(((ATgetType(g_57) == AT_LIST) && ((ATermList) g_57 != ATempty)))
        {
          h_57 = ATgetFirst((ATermList) g_57);
          j_57 = (ATerm) ATgetNext((ATermList) g_57);
          e_57 :
          if(((ATgetType(k_57) == AT_LIST) && ((ATermList) k_57 != ATempty)))
            {
              m_57 = ATgetFirst((ATermList) k_57);
              n_57 = (ATerm) ATgetNext((ATermList) k_57);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(h_57), not_null(m_57)), (ATerm) ATmakeAppl(sym__2, not_null(j_57), not_null(n_57)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
  x_57 = t;
  u_57 :
  if(match_cons(x_57, sym__2))
    {
      y_57 = ATgetArgument(x_57, 0);
      z_57 = ATgetArgument(x_57, 1);
      v_57 :
      if(((ATermList) y_57 == ATempty))
        {
          w_57 :
          if(((ATermList) z_57 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm k_108 (ATerm))
{
  ATerm b_58 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_108(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        {
          t = i_108(t);
          {
            t = _2(t, k_108, b_58);
            t = j_108(t);
          }
        }
      }
    return(t);
  }
  t = b_58(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm m_108 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, m_108);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
  d_59 = t;
  w_58 :
  if(match_cons(d_59, sym_Call_2))
    {
      e_59 = ATgetArgument(d_59, 0);
      g_59 = ATgetArgument(d_59, 1);
      x_58 :
      if(match_cons(e_59, sym_SVar_1))
        {
          f_59 = ATgetArgument(e_59, 0);
          y_58 :
          if(match_string(f_59, "Anno_Cong__"))
            {
              z_58 :
              if(((ATgetType(g_59) == AT_LIST) && ((ATermList) g_59 != ATempty)))
                {
                  h_59 = ATgetFirst((ATermList) g_59);
                  k_59 = (ATerm) ATgetNext((ATermList) g_59);
                  a_59 :
                  if(match_cons(h_59, sym_Cong_2))
                    {
                      i_59 = ATgetArgument(h_59, 0);
                      j_59 = ATgetArgument(h_59, 1);
                      b_59 :
                      if(((ATgetType(k_59) == AT_LIST) && ((ATermList) k_59 != ATempty)))
                        {
                          l_59 = ATgetFirst((ATermList) k_59);
                          m_59 = (ATerm) ATgetNext((ATermList) k_59);
                          c_59 :
                          if(((ATermList) m_59 == ATempty))
                            {
                              {
                                ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,u_60 = NULL,w_60 = NULL,y_60 = NULL;
                                ATerm u_18;
                                u_18 = t;
                                {
                                  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(j_59)), not_null(l_59));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      x_59 = t;
                                      p_58 :
                                      if(((ATgetType(x_59) == AT_LIST) && ((ATermList) x_59 != ATempty)))
                                        {
                                          y_59 = ATgetFirst((ATermList) x_59);
                                          z_59 = (ATerm) ATgetNext((ATermList) x_59);
                                          {
                                            ATerm c_60 = NULL;
                                            if(((q_59 != NULL) && (q_59 != y_59)))
                                              _fail(y_59);
                                            else
                                              q_59 = y_59;
                                            {
                                              if(((u_59 != NULL) && (u_59 != z_59)))
                                                _fail(z_59);
                                              else
                                                u_59 = z_59;
                                              {
                                                ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL;
                                                ATerm i_3 (ATerm t)
                                                {
                                                  ATerm a_60 = NULL;
                                                  ATerm b_60 = NULL;
                                                  b_60 = t;
                                                  if(((a_60 != NULL) && (a_60 != b_60)))
                                                    _fail(b_60);
                                                  else
                                                    a_60 = b_60;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_60));
                                                  return(t);
                                                }
                                                t = map_1(t, i_3);
                                                {
                                                  c_60 = t;
                                                  {
                                                    if(((r_59 != NULL) && (r_59 != c_60)))
                                                      _fail(c_60);
                                                    else
                                                      r_59 = c_60;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(j_59)), not_null(l_59));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          d_60 = t;
                                                          o_58 :
                                                          if(((ATgetType(d_60) == AT_LIST) && ((ATermList) d_60 != ATempty)))
                                                            {
                                                              e_60 = ATgetFirst((ATermList) d_60);
                                                              f_60 = (ATerm) ATgetNext((ATermList) d_60);
                                                              {
                                                                ATerm i_60 = NULL;
                                                                if(((s_59 != NULL) && (s_59 != e_60)))
                                                                  _fail(e_60);
                                                                else
                                                                  s_59 = e_60;
                                                                {
                                                                  if(((v_59 != NULL) && (v_59 != f_60)))
                                                                    _fail(f_60);
                                                                  else
                                                                    v_59 = f_60;
                                                                  {
                                                                    ATerm j_60 = NULL,t_60 = NULL;
                                                                    ATerm j_3 (ATerm t)
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
                                                                    t = map_1(t, j_3);
                                                                    {
                                                                      i_60 = t;
                                                                      {
                                                                        if(((t_59 != NULL) && (t_59 != i_60)))
                                                                          _fail(i_60);
                                                                        else
                                                                          t_59 = i_60;
                                                                        {
                                                                          ATerm k_60 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_59), not_null(v_59));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              k_60 = t;
                                                                              if(((j_60 != NULL) && (j_60 != k_60)))
                                                                                _fail(k_60);
                                                                              else
                                                                                j_60 = k_60;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(j_60), (ATerm) ATinsert(CheckATermList(not_null(j_59)), not_null(l_59)));
                                                                            {
                                                                              ATerm k_3 (ATerm t)
                                                                              {
                                                                                ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL;
                                                                                l_60 = t;
                                                                                l_58 :
                                                                                if(match_cons(l_60, sym__2))
                                                                                  {
                                                                                    m_60 = ATgetArgument(l_60, 0);
                                                                                    p_60 = ATgetArgument(l_60, 1);
                                                                                    m_58 :
                                                                                    if(match_cons(m_60, sym__2))
                                                                                      {
                                                                                        n_60 = ATgetArgument(m_60, 0);
                                                                                        o_60 = ATgetArgument(m_60, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_60))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_60), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_60)))));
                                                                                      }
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
                                                                                t_60 = t;
                                                                                if(((w_59 != NULL) && (w_59 != t_60)))
                                                                                  _fail(t_60);
                                                                                else
                                                                                  w_59 = t_60;
                                                                              }
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
                                t = u_18;
                                {
                                  ATerm v_18;
                                  v_18 = t;
                                  {
                                    ATerm v_60 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_59), not_null(v_59));
                                    {
                                      t = conc_0(t);
                                      {
                                        v_60 = t;
                                        if(((u_60 != NULL) && (u_60 != v_60)))
                                          _fail(v_60);
                                        else
                                          u_60 = v_60;
                                      }
                                    }
                                  }
                                  t = v_18;
                                  {
                                    ATerm d_19;
                                    d_19 = t;
                                    {
                                      ATerm x_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_59), not_null(r_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_59))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          x_60 = t;
                                          if(((w_60 != NULL) && (w_60 != x_60)))
                                            _fail(x_60);
                                          else
                                            w_60 = x_60;
                                        }
                                      }
                                    }
                                    t = d_19;
                                    {
                                      ATerm z_60 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(i_59), not_null(t_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_59))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          z_60 = t;
                                          if(((y_60 != NULL) && (y_60 != z_60)))
                                            _fail(z_60);
                                          else
                                            y_60 = z_60;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(u_60)), not_null(s_59)), not_null(q_59)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_60), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(w_59)), not_null(y_60))));
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
ATerm Prim_2 (ATerm t, ATerm w_87 (ATerm), ATerm x_87 (ATerm))
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
  t_61 = t;
  s_61 :
  if(match_cons(t_61, sym_Prim_2))
    {
      u_61 = ATgetArgument(t_61, 0);
      v_61 = ATgetArgument(t_61, 1);
      {
        ATerm z_61 = NULL,b_62 = NULL;
        ATerm a_62 = NULL;
        t = SSLgetAnnotations(not_null(t_61));
        {
          a_62 = t;
          if(((z_61 != NULL) && (z_61 != a_62)))
            _fail(a_62);
          else
            z_61 = a_62;
        }
        {
          t = not_null(u_61);
          {
            ATerm d_62 = NULL;
            t = w_87(t);
            {
              b_62 = t;
              {
                t = not_null(v_61);
                {
                  ATerm f_62 = NULL;
                  t = x_87(t);
                  {
                    d_62 = t;
                    {
                      ATerm g_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(b_62), not_null(d_62)), not_null(z_61));
                      {
                        g_62 = t;
                        if(((f_62 != NULL) && (f_62 != g_62)))
                          _fail(g_62);
                        else
                          f_62 = g_62;
                      }
                      t = not_null(f_62);
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
ATerm Explode_2 (ATerm t, ATerm k_84 (ATerm), ATerm l_84 (ATerm))
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL;
  w_62 = t;
  v_62 :
  if(match_cons(w_62, sym_Explode_2))
    {
      x_62 = ATgetArgument(w_62, 0);
      y_62 = ATgetArgument(w_62, 1);
      {
        ATerm e_63 = NULL,g_63 = NULL;
        ATerm f_63 = NULL;
        t = SSLgetAnnotations(not_null(w_62));
        {
          f_63 = t;
          if(((e_63 != NULL) && (e_63 != f_63)))
            _fail(f_63);
          else
            e_63 = f_63;
        }
        {
          t = not_null(x_62);
          {
            ATerm i_63 = NULL;
            t = k_84(t);
            {
              g_63 = t;
              {
                t = not_null(y_62);
                {
                  ATerm k_63 = NULL;
                  t = l_84(t);
                  {
                    i_63 = t;
                    {
                      ATerm l_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(g_63), not_null(i_63)), not_null(e_63));
                      {
                        l_63 = t;
                        if(((k_63 != NULL) && (k_63 != l_63)))
                          _fail(l_63);
                        else
                          k_63 = l_63;
                      }
                      t = not_null(k_63);
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
ATerm Op_2 (ATerm t, ATerm w_85 (ATerm), ATerm x_85 (ATerm))
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
  i_64 = t;
  h_64 :
  if(match_cons(i_64, sym_Op_2))
    {
      j_64 = ATgetArgument(i_64, 0);
      k_64 = ATgetArgument(i_64, 1);
      {
        ATerm s_64 = NULL,u_64 = NULL;
        ATerm t_64 = NULL;
        t = SSLgetAnnotations(not_null(i_64));
        {
          t_64 = t;
          if(((s_64 != NULL) && (s_64 != t_64)))
            _fail(t_64);
          else
            s_64 = t_64;
        }
        {
          t = not_null(j_64);
          {
            ATerm w_64 = NULL;
            t = w_85(t);
            {
              u_64 = t;
              {
                t = not_null(k_64);
                {
                  ATerm y_64 = NULL;
                  t = x_85(t);
                  {
                    w_64 = t;
                    {
                      ATerm z_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(u_64), not_null(w_64)), not_null(s_64));
                      {
                        z_64 = t;
                        if(((y_64 != NULL) && (y_64 != z_64)))
                          _fail(z_64);
                        else
                          y_64 = z_64;
                      }
                      t = not_null(y_64);
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
ATerm pat_td_1 (ATerm t, ATerm a_89 (ATerm))
{
  ATerm f_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_89(t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = f_19;
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm m_3 (ATerm t)
              {
                t = pat_td_1(t, a_89);
                return(t);
              }
              t = fetch_1(t, m_3);
              return(t);
            }
            t = Op_2(t, _id, l_3);
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
                  ATerm n_3 (ATerm t)
                  {
                    t = pat_td_1(t, a_89);
                    return(t);
                  }
                  t = Explode_2(t, _id, n_3);
                  LocalPopChoice(p_19);
                }
              else
                {
                  t = o_19;
                  {
                    ATerm u_19 = t;
                    int v_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_3 (ATerm t)
                        {
                          t = pat_td_1(t, a_89);
                          return(t);
                        }
                        t = Explode_2(t, o_3, _id);
                        LocalPopChoice(v_19);
                      }
                    else
                      {
                        t = u_19;
                        {
                          ATerm p_3 (ATerm t)
                          {
                            ATerm q_3 (ATerm t)
                            {
                              t = pat_td_1(t, a_89);
                              return(t);
                            }
                            t = fetch_1(t, q_3);
                            return(t);
                          }
                          t = Prim_2(t, _id, p_3);
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
  ATerm z_65 = NULL,a_66 = NULL;
  z_65 = t;
  y_65 :
  if(match_cons(z_65, sym_Match_1))
    {
      a_66 = ATgetArgument(z_65, 0);
      {
        ATerm x_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_66 = NULL,k_66 = NULL,l_66 = NULL,o_66 = NULL;
            ATerm p_66 = NULL;
            ATerm t_66 = NULL;
            t = new_0(t);
            {
              p_66 = t;
              {
                if(((l_66 != NULL) && (l_66 != p_66)))
                  _fail(p_66);
                else
                  l_66 = p_66;
                {
                  t = not_null(a_66);
                  {
                    ATerm r_3 (ATerm t)
                    {
                      ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
                      q_66 = t;
                      k_65 :
                      if(match_cons(q_66, sym_Anno_2))
                        {
                          r_66 = ATgetArgument(q_66, 0);
                          s_66 = ATgetArgument(q_66, 1);
                          {
                            if(((c_66 != NULL) && (c_66 != r_66)))
                              _fail(r_66);
                            else
                              c_66 = r_66;
                            {
                              if(((k_66 != NULL) && (k_66 != s_66)))
                                _fail(s_66);
                              else
                                k_66 = s_66;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_66)), not_null(c_66));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, r_3);
                    {
                      t_66 = t;
                      if(((o_66 != NULL) && (o_66 != t_66)))
                        _fail(t_66);
                      else
                        o_66 = t_66;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_66)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_66)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_19, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_66)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_66))))));
            LocalPopChoice(y_19);
          }
        else
          {
            t = x_19;
            {
              ATerm a_20 = t;
              int f_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
                  ATerm y_66 = NULL;
                  ATerm b_67 = NULL;
                  t = new_0(t);
                  {
                    y_66 = t;
                    {
                      if(((w_66 != NULL) && (w_66 != y_66)))
                        _fail(y_66);
                      else
                        w_66 = y_66;
                      {
                        t = not_null(a_66);
                        {
                          ATerm s_3 (ATerm t)
                          {
                            ATerm z_66 = NULL,a_67 = NULL;
                            z_66 = t;
                            s_65 :
                            if(match_cons(z_66, sym_RootApp_1))
                              {
                                a_67 = ATgetArgument(z_66, 0);
                                {
                                  if(((v_66 != NULL) && (v_66 != a_67)))
                                    _fail(a_67);
                                  else
                                    v_66 = a_67;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_66));
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
                            b_67 = t;
                            if(((x_66 != NULL) && (x_66 != b_67)))
                              _fail(b_67);
                            else
                              x_66 = b_67;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_66)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_66)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_66))), not_null(v_66))));
                  LocalPopChoice(f_20);
                }
              else
                {
                  t = a_20;
                  {
                    ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL;
                    ATerm h_67 = NULL;
                    ATerm l_67 = NULL;
                    t = new_0(t);
                    {
                      h_67 = t;
                      {
                        if(((f_67 != NULL) && (f_67 != h_67)))
                          _fail(h_67);
                        else
                          f_67 = h_67;
                        {
                          t = not_null(a_66);
                          {
                            ATerm t_3 (ATerm t)
                            {
                              ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
                              i_67 = t;
                              w_65 :
                              if(match_cons(i_67, sym_App_2))
                                {
                                  j_67 = ATgetArgument(i_67, 0);
                                  k_67 = ATgetArgument(i_67, 1);
                                  {
                                    if(((e_67 != NULL) && (e_67 != j_67)))
                                      _fail(j_67);
                                    else
                                      e_67 = j_67;
                                    {
                                      if(((d_67 != NULL) && (d_67 != k_67)))
                                        _fail(k_67);
                                      else
                                        d_67 = k_67;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_67));
                                    }
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
                              l_67 = t;
                              if(((g_67 != NULL) && (g_67 != l_67)))
                                _fail(l_67);
                              else
                                g_67 = l_67;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_67)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_67))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_67)), not_null(e_67)))));
                  }
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
  ATerm l_68 = NULL,m_68 = NULL,r_68 = NULL;
  l_68 = t;
  k_68 :
  if(match_cons(l_68, sym_Cong_2))
    {
      m_68 = ATgetArgument(l_68, 0);
      r_68 = ATgetArgument(l_68, 1);
      {
        ATerm u_68 = NULL;
        ATerm c_69 = NULL;
        t = not_null(r_68);
        {
          ATerm u_3 (ATerm t)
          {
            ATerm z_68 = NULL,a_69 = NULL;
            a_69 = t;
            i_68 :
            if(match_cons(a_69, sym_Match_1))
              {
                z_68 = ATgetArgument(a_69, 0);
                t = not_null(z_68);
              }
            else
              {
                if(match_cons(a_69, sym_Id_0))
                  {
                    t = term_g_20;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, u_3);
          {
            c_69 = t;
            if(((u_68 != NULL) && (u_68 != c_69)))
              _fail(c_69);
            else
              u_68 = c_69;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(m_68), not_null(u_68)));
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
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL;
  m_69 = t;
  k_69 :
  if(match_cons(m_69, sym_Scope_2))
    {
      n_69 = ATgetArgument(m_69, 0);
      o_69 = ATgetArgument(m_69, 1);
      l_69 :
      if(((ATermList) n_69 == ATempty))
        {
          t = not_null(o_69);
        }
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
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL;
  k_70 = t;
  x_69 :
  if(match_cons(k_70, sym_Where_1))
    {
      l_70 = ATgetArgument(k_70, 0);
      y_69 :
      if(match_cons(l_70, sym_Seq_2))
        {
          j_70 = ATgetArgument(l_70, 0);
          f_70 = ATgetArgument(l_70, 1);
          z_69 :
          if(match_cons(j_70, sym_Where_1))
            {
              e_70 = ATgetArgument(j_70, 0);
              a_70 :
              if(match_cons(f_70, sym_Seq_2))
                {
                  g_70 = ATgetArgument(f_70, 0);
                  i_70 = ATgetArgument(f_70, 1);
                  b_70 :
                  if(match_cons(g_70, sym_Build_1))
                    {
                      h_70 = ATgetArgument(g_70, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_70), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_70)), not_null(i_70))));
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(l_70, sym_Where_1))
            {
              j_70 = ATgetArgument(l_70, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(j_70));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(k_70, sym_Test_1))
        {
          l_70 = ATgetArgument(k_70, 0);
          c_70 :
          if(match_cons(l_70, sym_Test_1))
            {
              j_70 = ATgetArgument(l_70, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(j_70));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(k_70, sym_Not_1))
            {
              l_70 = ATgetArgument(k_70, 0);
              d_70 :
              if(match_cons(l_70, sym_Not_1))
                {
                  j_70 = ATgetArgument(l_70, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(j_70));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(k_70, sym_LChoice_2))
                {
                  l_70 = ATgetArgument(k_70, 0);
                  m_70 = ATgetArgument(k_70, 1);
                  {
                    if(((l_70 != NULL) && (l_70 != m_70)))
                      _fail(m_70);
                    else
                      l_70 = m_70;
                    t = not_null(l_70);
                  }
                }
              else
                {
                  if(match_cons(k_70, sym_Choice_2))
                    {
                      l_70 = ATgetArgument(k_70, 0);
                      m_70 = ATgetArgument(k_70, 1);
                      {
                        if(((l_70 != NULL) && (l_70 != m_70)))
                          _fail(m_70);
                        else
                          l_70 = m_70;
                        t = not_null(l_70);
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
  ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL;
  i_71 = t;
  e_71 :
  if(match_cons(i_71, sym_LChoice_2))
    {
      j_71 = ATgetArgument(i_71, 0);
      m_71 = ATgetArgument(i_71, 1);
      f_71 :
      if(match_cons(j_71, sym_LChoice_2))
        {
          k_71 = ATgetArgument(j_71, 0);
          l_71 = ATgetArgument(j_71, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_71), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_71), not_null(m_71)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(i_71, sym_Seq_2))
        {
          j_71 = ATgetArgument(i_71, 0);
          m_71 = ATgetArgument(i_71, 1);
          g_71 :
          if(match_cons(j_71, sym_Seq_2))
            {
              k_71 = ATgetArgument(j_71, 0);
              l_71 = ATgetArgument(j_71, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_71), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_71), not_null(m_71)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(i_71, sym_Choice_2))
            {
              j_71 = ATgetArgument(i_71, 0);
              m_71 = ATgetArgument(i_71, 1);
              h_71 :
              if(match_cons(j_71, sym_Choice_2))
                {
                  k_71 = ATgetArgument(j_71, 0);
                  l_71 = ATgetArgument(j_71, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_71), (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_71), not_null(m_71)));
                }
              else
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
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL;
  t_72 = t;
  l_72 :
  if(match_cons(t_72, sym_InfixApp_3))
    {
      u_72 = ATgetArgument(t_72, 0);
      q_72 = ATgetArgument(t_72, 1);
      p_72 = ATgetArgument(t_72, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(q_72), (ATerm) ATmakeAppl(sym_Op_2, term_h_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_72)), not_null(u_72))));
    }
  else
    {
      if(match_cons(t_72, sym_BAM_3))
        {
          u_72 = ATgetArgument(t_72, 0);
          q_72 = ATgetArgument(t_72, 1);
          p_72 = ATgetArgument(t_72, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(p_72))), not_null(u_72)), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_72))));
        }
      else
        {
          if(match_cons(t_72, sym_AM_2))
            {
              u_72 = ATgetArgument(t_72, 0);
              q_72 = ATgetArgument(t_72, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_72), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_72)));
            }
          else
            {
              if(match_cons(t_72, sym_MA_2))
                {
                  u_72 = ATgetArgument(t_72, 0);
                  q_72 = ATgetArgument(t_72, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_72)), not_null(q_72));
                }
              else
                {
                  if(match_cons(t_72, sym_BA_2))
                    {
                      u_72 = ATgetArgument(t_72, 0);
                      q_72 = ATgetArgument(t_72, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_72)), not_null(u_72));
                    }
                  else
                    {
                      if(match_cons(t_72, sym_Lets_2))
                        {
                          u_72 = ATgetArgument(t_72, 0);
                          q_72 = ATgetArgument(t_72, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_72), not_null(q_72));
                        }
                      else
                        {
                          if(match_cons(t_72, sym_LChoices_1))
                            {
                              u_72 = ATgetArgument(t_72, 0);
                              m_72 :
                              if(((ATgetType(u_72) == AT_LIST) && ((ATermList) u_72 != ATempty)))
                                {
                                  r_72 = ATgetFirst((ATermList) u_72);
                                  s_72 = (ATerm) ATgetNext((ATermList) u_72);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_72), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(s_72)));
                                }
                              else
                                {
                                  if(((ATermList) u_72 == ATempty))
                                    {
                                      t = term_j_20;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t_72, sym_Choices_1))
                                {
                                  u_72 = ATgetArgument(t_72, 0);
                                  n_72 :
                                  if(((ATgetType(u_72) == AT_LIST) && ((ATermList) u_72 != ATempty)))
                                    {
                                      r_72 = ATgetFirst((ATermList) u_72);
                                      s_72 = (ATerm) ATgetNext((ATermList) u_72);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_72), (ATerm) ATmakeAppl(sym_Choices_1, not_null(s_72)));
                                    }
                                  else
                                    {
                                      if(((ATermList) u_72 == ATempty))
                                        {
                                          t = term_j_20;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t_72, sym_Seqs_1))
                                    {
                                      u_72 = ATgetArgument(t_72, 0);
                                      o_72 :
                                      if(((ATgetType(u_72) == AT_LIST) && ((ATermList) u_72 != ATempty)))
                                        {
                                          r_72 = ATgetFirst((ATermList) u_72);
                                          s_72 = (ATerm) ATgetNext((ATermList) u_72);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_72), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_72)));
                                        }
                                      else
                                        {
                                          if(((ATermList) u_72 == ATempty))
                                            {
                                              t = term_l_20;
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
  ATerm k_76 = NULL,l_76 = NULL;
  k_76 = t;
  i_76 :
  if(match_cons(k_76, sym_Where_1))
    {
      l_76 = ATgetArgument(k_76, 0);
      j_76 :
      if(match_cons(l_76, sym_Fail_0))
        {
          t = term_j_20;
        }
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
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
  q_76 = t;
  o_76 :
  if(match_cons(q_76, sym_LChoice_2))
    {
      r_76 = ATgetArgument(q_76, 0);
      s_76 = ATgetArgument(q_76, 1);
      p_76 :
      if(match_cons(s_76, sym_Fail_0))
        {
          t = not_null(r_76);
        }
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
  ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL;
  y_76 = t;
  w_76 :
  if(match_cons(y_76, sym_LChoice_2))
    {
      z_76 = ATgetArgument(y_76, 0);
      a_77 = ATgetArgument(y_76, 1);
      x_76 :
      if(match_cons(z_76, sym_Fail_0))
        {
          t = not_null(a_77);
        }
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
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL;
  g_77 = t;
  e_77 :
  if(match_cons(g_77, sym_Choice_2))
    {
      h_77 = ATgetArgument(g_77, 0);
      i_77 = ATgetArgument(g_77, 1);
      f_77 :
      if(match_cons(i_77, sym_Fail_0))
        {
          t = not_null(h_77);
        }
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
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL;
  o_77 = t;
  m_77 :
  if(match_cons(o_77, sym_Choice_2))
    {
      p_77 = ATgetArgument(o_77, 0);
      q_77 = ATgetArgument(o_77, 1);
      n_77 :
      if(match_cons(p_77, sym_Fail_0))
        {
          t = not_null(q_77);
        }
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
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL;
  w_77 = t;
  v_77 :
  if(match_cons(w_77, sym_Cong_2))
    {
      x_77 = ATgetArgument(w_77, 0);
      y_77 = ATgetArgument(w_77, 1);
      {
        t = not_null(y_77);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm b_78 = NULL;
            b_78 = t;
            u_77 :
            if(!(match_cons(b_78, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, v_3);
        }
        t = term_j_20;
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
  ATerm g_78 = NULL,j_78 = NULL,k_78 = NULL;
  g_78 = t;
  e_78 :
  if(match_cons(g_78, sym_Path_2))
    {
      j_78 = ATgetArgument(g_78, 0);
      k_78 = ATgetArgument(g_78, 1);
      f_78 :
      if(match_cons(k_78, sym_Fail_0))
        {
          t = term_j_20;
        }
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
  ATerm q_78 = NULL,r_78 = NULL;
  q_78 = t;
  o_78 :
  if(match_cons(q_78, sym_One_1))
    {
      r_78 = ATgetArgument(q_78, 0);
      p_78 :
      if(match_cons(r_78, sym_Fail_0))
        {
          t = term_j_20;
        }
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
  ATerm w_78 = NULL,x_78 = NULL;
  w_78 = t;
  u_78 :
  if(match_cons(w_78, sym_Some_1))
    {
      x_78 = ATgetArgument(w_78, 0);
      v_78 :
      if(match_cons(x_78, sym_Fail_0))
        {
          t = term_j_20;
        }
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
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL;
  c_79 = t;
  a_79 :
  if(match_cons(c_79, sym_Rec_2))
    {
      d_79 = ATgetArgument(c_79, 0);
      e_79 = ATgetArgument(c_79, 1);
      b_79 :
      if(match_cons(e_79, sym_Fail_0))
        {
          t = term_j_20;
        }
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
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
  k_79 = t;
  i_79 :
  if(match_cons(k_79, sym_Scope_2))
    {
      l_79 = ATgetArgument(k_79, 0);
      m_79 = ATgetArgument(k_79, 1);
      j_79 :
      if(match_cons(m_79, sym_Fail_0))
        {
          t = term_j_20;
        }
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
  ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL;
  s_79 = t;
  q_79 :
  if(match_cons(s_79, sym_Seq_2))
    {
      t_79 = ATgetArgument(s_79, 0);
      u_79 = ATgetArgument(s_79, 1);
      r_79 :
      if(match_cons(t_79, sym_Fail_0))
        {
          t = term_j_20;
        }
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
  ATerm a_80 = NULL,b_80 = NULL;
  a_80 = t;
  y_79 :
  if(match_cons(a_80, sym_Not_1))
    {
      b_80 = ATgetArgument(a_80, 0);
      z_79 :
      if(match_cons(b_80, sym_Fail_0))
        {
          t = term_l_20;
        }
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
  ATerm g_80 = NULL,h_80 = NULL;
  g_80 = t;
  e_80 :
  if(match_cons(g_80, sym_Test_1))
    {
      h_80 = ATgetArgument(g_80, 0);
      f_80 :
      if(match_cons(h_80, sym_Fail_0))
        {
          t = term_j_20;
        }
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
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            {
              ATerm t_20 = t;
              int c_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(c_21);
                }
              else
                {
                  t = t_20;
                  {
                    ATerm d_21 = t;
                    int e_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(e_21);
                      }
                    else
                      {
                        t = d_21;
                        {
                          ATerm f_21 = t;
                          int g_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(g_21);
                            }
                          else
                            {
                              t = f_21;
                              {
                                ATerm h_21 = t;
                                int i_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(i_21);
                                  }
                                else
                                  {
                                    t = h_21;
                                    {
                                      ATerm j_21 = t;
                                      int k_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(k_21);
                                        }
                                      else
                                        {
                                          t = j_21;
                                          {
                                            ATerm l_21 = t;
                                            int m_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(m_21);
                                              }
                                            else
                                              {
                                                t = l_21;
                                                {
                                                  ATerm n_21 = t;
                                                  int o_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(o_21);
                                                    }
                                                  else
                                                    {
                                                      t = n_21;
                                                      {
                                                        ATerm p_21 = t;
                                                        int q_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(q_21);
                                                          }
                                                        else
                                                          {
                                                            t = p_21;
                                                            {
                                                              ATerm u_21 = t;
                                                              int v_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(v_21);
                                                                }
                                                              else
                                                                {
                                                                  t = u_21;
                                                                  {
                                                                    ATerm z_21 = t;
                                                                    int c_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(c_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_21;
                                                                        {
                                                                          ATerm d_22 = t;
                                                                          int h_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(h_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_22;
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
  ATerm m_80 = NULL,n_80 = NULL;
  m_80 = t;
  k_80 :
  if(match_cons(m_80, sym_Match_1))
    {
      n_80 = ATgetArgument(m_80, 0);
      l_80 :
      if(match_cons(n_80, sym_Wld_0))
        {
          t = term_l_20;
        }
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
  ATerm s_80 = NULL,t_80 = NULL;
  s_80 = t;
  q_80 :
  if(match_cons(s_80, sym_Where_1))
    {
      t_80 = ATgetArgument(s_80, 0);
      r_80 :
      if(match_cons(t_80, sym_Id_0))
        {
          t = term_l_20;
        }
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
  ATerm y_80 = NULL,z_80 = NULL;
  y_80 = t;
  w_80 :
  if(match_cons(y_80, sym_All_1))
    {
      z_80 = ATgetArgument(y_80, 0);
      x_80 :
      if(match_cons(z_80, sym_Id_0))
        {
          t = term_l_20;
        }
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
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL;
  e_81 = t;
  c_81 :
  if(match_cons(e_81, sym_Rec_2))
    {
      f_81 = ATgetArgument(e_81, 0);
      g_81 = ATgetArgument(e_81, 1);
      d_81 :
      if(match_cons(g_81, sym_Id_0))
        {
          t = term_l_20;
        }
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
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL;
  m_81 = t;
  k_81 :
  if(match_cons(m_81, sym_Scope_2))
    {
      n_81 = ATgetArgument(m_81, 0);
      o_81 = ATgetArgument(m_81, 1);
      l_81 :
      if(match_cons(o_81, sym_Id_0))
        {
          t = term_l_20;
        }
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
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL;
  u_81 = t;
  s_81 :
  if(match_cons(u_81, sym_LChoice_2))
    {
      v_81 = ATgetArgument(u_81, 0);
      w_81 = ATgetArgument(u_81, 1);
      t_81 :
      if(match_cons(v_81, sym_Id_0))
        {
          t = term_l_20;
        }
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
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
  c_82 = t;
  a_82 :
  if(match_cons(c_82, sym_Seq_2))
    {
      d_82 = ATgetArgument(c_82, 0);
      e_82 = ATgetArgument(c_82, 1);
      b_82 :
      if(match_cons(e_82, sym_Id_0))
        {
          t = not_null(d_82);
        }
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
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  k_82 = t;
  i_82 :
  if(match_cons(k_82, sym_Seq_2))
    {
      l_82 = ATgetArgument(k_82, 0);
      m_82 = ATgetArgument(k_82, 1);
      j_82 :
      if(match_cons(l_82, sym_Id_0))
        {
          t = not_null(m_82);
        }
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
  ATerm s_82 = NULL,t_82 = NULL;
  s_82 = t;
  q_82 :
  if(match_cons(s_82, sym_Not_1))
    {
      t_82 = ATgetArgument(s_82, 0);
      r_82 :
      if(match_cons(t_82, sym_Id_0))
        {
          t = term_j_20;
        }
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
  ATerm y_82 = NULL,z_82 = NULL;
  y_82 = t;
  w_82 :
  if(match_cons(y_82, sym_Test_1))
    {
      z_82 = ATgetArgument(y_82, 0);
      x_82 :
      if(match_cons(z_82, sym_Id_0))
        {
          t = term_l_20;
        }
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
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            {
              ATerm o_22 = t;
              int p_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(p_22);
                }
              else
                {
                  t = o_22;
                  {
                    ATerm q_22 = t;
                    int r_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
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
                              t = I7_0(t);
                              LocalPopChoice(t_22);
                            }
                          else
                            {
                              t = s_22;
                              {
                                ATerm u_22 = t;
                                int a_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(a_23);
                                  }
                                else
                                  {
                                    t = u_22;
                                    {
                                      ATerm b_23 = t;
                                      int c_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(c_23);
                                        }
                                      else
                                        {
                                          t = b_23;
                                          {
                                            ATerm e_23 = t;
                                            int g_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(g_23);
                                              }
                                            else
                                              {
                                                t = e_23;
                                                {
                                                  ATerm h_23 = t;
                                                  int i_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(i_23);
                                                    }
                                                  else
                                                    {
                                                      t = h_23;
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
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            {
              ATerm n_23 = t;
              int o_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(o_23);
                }
              else
                {
                  t = n_23;
                  {
                    ATerm p_23 = t;
                    int u_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(u_23);
                      }
                    else
                      {
                        t = p_23;
                        {
                          ATerm v_23 = t;
                          int g_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(g_24);
                            }
                          else
                            {
                              t = v_23;
                              {
                                ATerm h_24 = t;
                                int i_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(i_24);
                                  }
                                else
                                  {
                                    t = h_24;
                                    {
                                      ATerm j_24 = t;
                                      int k_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(k_24);
                                        }
                                      else
                                        {
                                          t = j_24;
                                          {
                                            ATerm l_24 = t;
                                            int m_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(m_24);
                                              }
                                            else
                                              {
                                                t = l_24;
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
ATerm repeat_2 (ATerm t, ATerm d_97 (ATerm), ATerm e_97 (ATerm))
{
  ATerm b_83 (ATerm t)
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_97(t);
        t = b_83(t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = e_97(t);
      }
    return(t);
  }
  t = b_83(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm g_97 (ATerm))
{
  t = repeat_2(t, g_97, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm e_111 (ATerm))
{
  ATerm c_83 (ATerm t)
  {
    t = e_111(t);
    {
      t = _all(t, c_83);
      t = e_111(t);
    }
    return(t);
  }
  t = c_83(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, w_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm y_3 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, y_3);
    }
    return(t);
  }
  t = map_1(t, x_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm p_85 (ATerm))
{
  ATerm i_83 = NULL,j_83 = NULL;
  i_83 = t;
  h_83 :
  if(match_cons(i_83, sym_Strategies_1))
    {
      j_83 = ATgetArgument(i_83, 0);
      {
        ATerm m_83 = NULL,o_83 = NULL;
        ATerm n_83 = NULL;
        t = SSLgetAnnotations(not_null(i_83));
        {
          n_83 = t;
          if(((m_83 != NULL) && (m_83 != n_83)))
            _fail(n_83);
          else
            m_83 = n_83;
        }
        {
          t = not_null(j_83);
          {
            ATerm q_83 = NULL;
            t = p_85(t);
            {
              o_83 = t;
              {
                ATerm r_83 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(o_83)), not_null(m_83));
                {
                  r_83 = t;
                  if(((q_83 != NULL) && (q_83 != r_83)))
                    _fail(r_83);
                  else
                    q_83 = r_83;
                }
                t = not_null(q_83);
              }
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
ATerm Specification_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm b_84 = NULL,c_84 = NULL;
  b_84 = t;
  a_84 :
  if(match_cons(b_84, sym_Specification_1))
    {
      c_84 = ATgetArgument(b_84, 0);
      {
        ATerm f_84 = NULL,h_84 = NULL;
        ATerm g_84 = NULL;
        t = SSLgetAnnotations(not_null(b_84));
        {
          g_84 = t;
          if(((f_84 != NULL) && (f_84 != g_84)))
            _fail(g_84);
          else
            f_84 = g_84;
        }
        {
          t = not_null(c_84);
          {
            ATerm j_84 = NULL;
            t = r_85(t);
            {
              h_84 = t;
              {
                ATerm m_84 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(h_84)), not_null(f_84));
                {
                  m_84 = t;
                  if(((j_84 != NULL) && (j_84 != m_84)))
                    _fail(m_84);
                  else
                    j_84 = m_84;
                }
                t = not_null(j_84);
              }
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
  ATerm z_3 (ATerm t)
  {
    ATerm a_4 (ATerm t)
    {
      ATerm e_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, e_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, a_4);
    return(t);
  }
  t = Specification_1(t, z_3);
  return(t);
}
ATerm _2 (ATerm t, ATerm z_75 (ATerm), ATerm a_76 (ATerm))
{
  ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL;
  x_84 = t;
  w_84 :
  if(match_cons(x_84, sym__2))
    {
      y_84 = ATgetArgument(x_84, 0);
      z_84 = ATgetArgument(x_84, 1);
      {
        ATerm d_85 = NULL,g_85 = NULL;
        ATerm e_85 = NULL;
        t = SSLgetAnnotations(not_null(x_84));
        {
          e_85 = t;
          if(((d_85 != NULL) && (d_85 != e_85)))
            _fail(e_85);
          else
            d_85 = e_85;
        }
        {
          t = not_null(y_84);
          {
            ATerm i_85 = NULL;
            t = z_75(t);
            {
              g_85 = t;
              {
                t = not_null(z_84);
                {
                  ATerm k_85 = NULL;
                  t = a_76(t);
                  {
                    i_85 = t;
                    {
                      ATerm l_85 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_85), not_null(i_85)), not_null(d_85));
                      {
                        l_85 = t;
                        if(((k_85 != NULL) && (k_85 != l_85)))
                          _fail(l_85);
                        else
                          k_85 = l_85;
                      }
                      t = not_null(k_85);
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
  ATerm v_85 = NULL;
  ATerm w_24;
  w_24 = t;
  {
    ATerm f_4 (ATerm t)
    {
      ATerm y_85 = NULL,z_85 = NULL;
      y_85 = t;
      u_85 :
      if(match_cons(y_85, sym_Program_1))
        {
          z_85 = ATgetArgument(y_85, 0);
          if(((v_85 != NULL) && (v_85 != z_85)))
            _fail(z_85);
          else
            v_85 = z_85;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, f_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_25), not_null(v_85)), term_i_25));
      {
        t = printnl_0(t);
        {
          t = term_i_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = w_24;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL;
  j_86 = t;
  i_86 :
  if(match_cons(j_86, sym__2))
    {
      k_86 = ATgetArgument(j_86, 0);
      l_86 = ATgetArgument(j_86, 1);
      {
        ATerm l_25;
        l_25 = t;
        t = SSL_printnl(not_null(k_86), not_null(l_86));
        t = l_25;
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
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL;
  z_86 = t;
  y_86 :
  if(match_cons(z_86, sym__2))
    {
      a_87 = ATgetArgument(z_86, 0);
      b_87 = ATgetArgument(z_86, 1);
      {
        t = not_null(a_87);
        {
          ATerm g_4 (ATerm t)
          {
            t = not_null(b_87);
            return(t);
          }
          t = at_end_1(t, g_4);
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
ATerm debug_1 (ATerm t, ATerm h_88 (ATerm))
{
  ATerm m_25;
  m_25 = t;
  {
    ATerm l_87 = NULL,n_87 = NULL;
    ATerm r_25;
    r_25 = t;
    {
      ATerm m_87 = NULL;
      t = h_88(t);
      {
        m_87 = t;
        if(((l_87 != NULL) && (l_87 != m_87)))
          _fail(m_87);
        else
          l_87 = m_87;
      }
    }
    t = r_25;
    {
      ATerm o_87 = NULL;
      o_87 = t;
      if(((n_87 != NULL) && (n_87 != o_87)))
        _fail(o_87);
      else
        n_87 = o_87;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_87)), not_null(l_87)));
        t = printnl_0(t);
      }
    }
  }
  t = m_25;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_88 = NULL;
  a_88 = t;
  t = SSL_is_string(not_null(a_88));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_4);
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            {
              ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
              k_88 = t;
              j_88 :
              if(match_cons(k_88, sym_Path_1))
                {
                  l_88 = ATgetArgument(k_88, 0);
                  t = not_null(l_88);
                }
              else
                {
                  if(match_cons(k_88, sym_Var_1))
                    {
                      l_88 = ATgetArgument(k_88, 0);
                      {
                        t = not_null(l_88);
                        {
                          ATerm a_26 = t;
                          int b_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(b_26);
                            }
                          else
                            {
                              t = a_26;
                              {
                                ATerm i_4 (ATerm t)
                                {
                                  t = term_d_26;
                                  return(t);
                                }
                                t = debug_1(t, i_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_88, sym_Prefix_2))
                        {
                          l_88 = ATgetArgument(k_88, 0);
                          m_88 = ATgetArgument(k_88, 1);
                          {
                            ATerm r_88 = NULL,t_88 = NULL;
                            ATerm e_26;
                            e_26 = t;
                            {
                              ATerm s_88 = NULL;
                              t = not_null(l_88);
                              {
                                t = eval_config_0(t);
                                {
                                  s_88 = t;
                                  if(((r_88 != NULL) && (r_88 != s_88)))
                                    _fail(s_88);
                                  else
                                    r_88 = s_88;
                                }
                              }
                            }
                            t = e_26;
                            {
                              ATerm u_88 = NULL;
                              t = not_null(m_88);
                              {
                                t = eval_config_0(t);
                                {
                                  u_88 = t;
                                  if(((t_88 != NULL) && (t_88 != u_88)))
                                    _fail(u_88);
                                  else
                                    t_88 = u_88;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_88), not_null(t_88));
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
  ATerm d_89 = NULL;
  d_89 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_26, not_null(d_89));
    {
      t = table_get_0(t);
      {
        ATerm j_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm h_26;
            h_26 = t;
            {
              ATerm f_89 = NULL;
              ATerm g_89 = NULL;
              g_89 = t;
              if(((f_89 != NULL) && (f_89 != g_89)))
                _fail(g_89);
              else
                f_89 = g_89;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_26, not_null(d_89), not_null(f_89));
                t = table_put_0(t);
              }
            }
            t = h_26;
          }
          return(t);
        }
        t = try_1(t, j_4);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm w_91 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm j_26;
    j_26 = t;
    {
      ATerm k_89 = NULL;
      ATerm l_89 = NULL;
      t = term_k_26;
      {
        t = get_config_0(t);
        {
          l_89 = t;
          if(((k_89 != NULL) && (k_89 != l_89)))
            _fail(l_89);
          else
            k_89 = l_89;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_89), term_o_26);
        t = geq_0(t);
      }
    }
    t = j_26;
    t = w_91(t);
    return(t);
  }
  t = try_1(t, k_4);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATinsert(ATempty, term_p_26));
  {
    t = printnl_0(t);
    {
      t = term_i_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_89 = NULL;
  o_89 = t;
  t = SSL_TicksToSeconds(not_null(o_89));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL;
  t_89 = t;
  s_89 :
  if(match_cons(t_89, sym__2))
    {
      u_89 = ATgetArgument(t_89, 0);
      v_89 = ATgetArgument(t_89, 1);
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_89), not_null(v_89));
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            t = SSL_addr(not_null(u_89), not_null(v_89));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_102 (ATerm), ATerm k_102 (ATerm))
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_102(t);
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL;
        c_90 = t;
        b_90 :
        if(((ATgetType(c_90) == AT_LIST) && ((ATermList) c_90 != ATempty)))
          {
            d_90 = ATgetFirst((ATermList) c_90);
            e_90 = (ATerm) ATgetNext((ATermList) c_90);
            {
              ATerm h_90 = NULL;
              ATerm i_90 = NULL;
              t = not_null(e_90);
              {
                t = foldr_2(t, j_102, k_102);
                {
                  i_90 = t;
                  if(((h_90 != NULL) && (h_90 != i_90)))
                    _fail(i_90);
                  else
                    h_90 = i_90;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_90), not_null(h_90));
                t = k_102(t);
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
ATerm crush_2 (ATerm t, ATerm b_104 (ATerm), ATerm c_104 (ATerm))
{
  ATerm v_90 = NULL;
  ATerm x_90 = NULL;
  v_90 = t;
  {
    ATerm y_90 = NULL;
    ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL;
    t = not_null(v_90);
    {
      y_90 = t;
      {
        t = SSL_explode_term(not_null(y_90));
        {
          a_91 = t;
          u_90 :
          if(match_cons(a_91, sym__2))
            {
              b_91 = ATgetArgument(a_91, 0);
              c_91 = ATgetArgument(a_91, 1);
              if(((x_90 != NULL) && (x_90 != c_91)))
                _fail(c_91);
              else
                x_90 = c_91;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_90);
      t = foldr_2(t, b_104, c_104);
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
    ATerm l_4 (ATerm t)
    {
      t = term_v_26;
      return(t);
    }
    t = crush_2(t, l_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL;
  i_91 = t;
  h_91 :
  if(match_cons(i_91, sym__2))
    {
      j_91 = ATgetArgument(i_91, 0);
      k_91 = ATgetArgument(i_91, 1);
      {
        ATerm w_26;
        w_26 = t;
        {
          ATerm x_26 = t;
          int c_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_91), not_null(k_91));
              LocalPopChoice(c_27);
            }
          else
            {
              t = x_26;
              t = SSL_gtr(not_null(j_91), not_null(k_91));
            }
        }
        t = w_26;
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
  ATerm q_91 = NULL;
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_91 = NULL,s_91 = NULL,u_91 = NULL;
      r_91 = t;
      p_91 :
      if(match_cons(r_91, sym__2))
        {
          s_91 = ATgetArgument(r_91, 0);
          u_91 = ATgetArgument(r_91, 1);
          {
            if(((q_91 != NULL) && (q_91 != s_91)))
              _fail(s_91);
            else
              q_91 = s_91;
            if(((q_91 != NULL) && (q_91 != u_91)))
              _fail(u_91);
            else
              q_91 = u_91;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm v_91 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm g_27;
    g_27 = t;
    {
      ATerm z_91 = NULL;
      ATerm a_92 = NULL;
      t = term_k_26;
      {
        t = get_config_0(t);
        {
          a_92 = t;
          if(((z_91 != NULL) && (z_91 != a_92)))
            _fail(a_92);
          else
            z_91 = a_92;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_91), term_i_15);
        t = geq_0(t);
      }
    }
    t = g_27;
    t = v_91(t);
    return(t);
  }
  t = try_1(t, m_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm e_92 = NULL,g_92 = NULL;
    ATerm k_27;
    k_27 = t;
    {
      ATerm f_92 = NULL;
      t = run_time_0(t);
      {
        f_92 = t;
        if(((e_92 != NULL) && (e_92 != f_92)))
          _fail(f_92);
        else
          e_92 = f_92;
      }
    }
    t = k_27;
    {
      ATerm h_92 = NULL;
      t = term_t_27;
      {
        t = get_config_0(t);
        {
          h_92 = t;
          if(((g_92 != NULL) && (g_92 != h_92)))
            _fail(h_92);
          else
            g_92 = h_92;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_28), not_null(e_92)), term_v_27), not_null(g_92)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_4);
  {
    t = term_v_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL;
  m_92 = t;
  l_92 :
  if(match_cons(m_92, sym__2))
    {
      n_92 = ATgetArgument(m_92, 0);
      o_92 = ATgetArgument(m_92, 1);
      t = SSL_WriteToTextFile(not_null(n_92), not_null(o_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL;
  u_92 = t;
  t_92 :
  if(match_cons(u_92, sym__2))
    {
      v_92 = ATgetArgument(u_92, 0);
      w_92 = ATgetArgument(u_92, 1);
      t = SSL_WriteToBinaryFile(not_null(v_92), not_null(w_92));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm k_93 = NULL;
  ATerm n_28;
  n_28 = t;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm o_28 = t;
      int c_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_4 (ATerm t)
          {
            ATerm l_93 = NULL,q_93 = NULL;
            l_93 = t;
            c_93 :
            if(match_cons(l_93, sym_Output_1))
              {
                q_93 = ATgetArgument(l_93, 0);
                if(((k_93 != NULL) && (k_93 != q_93)))
                  _fail(q_93);
                else
                  k_93 = q_93;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_4);
          LocalPopChoice(c_29);
        }
      else
        {
          t = o_28;
          {
            ATerm r_93 = NULL;
            t = term_d_29;
            {
              r_93 = t;
              if(((k_93 != NULL) && (k_93 != r_93)))
                _fail(r_93);
              else
                k_93 = r_93;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_4, _id);
  }
  t = n_28;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm r_4 (ATerm t)
      {
        t = not_null(k_93);
        return(t);
      }
      t = split_2(t, r_4, _id);
      return(t);
    }
    t = _2(t, _id, q_4);
    {
      ATerm k_29 = t;
      int l_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_4 (ATerm t)
          {
            ATerm t_4 (ATerm t)
            {
              ATerm s_93 = NULL;
              s_93 = t;
              j_93 :
              if(!(match_cons(s_93, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_4);
            return(t);
          }
          t = _2(t, s_4, WriteToBinaryFile_0);
          LocalPopChoice(l_29);
        }
      else
        {
          t = k_29;
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
ATerm apply_strategy_1 (ATerm t, ATerm a_94 (ATerm))
{
  ATerm z_93 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL;
  ATerm m_29;
  m_29 = t;
  t = dtime_0(t);
  t = m_29;
  {
    t = a_94(t);
    {
      ATerm n_29;
      n_29 = t;
      {
        ATerm b_94 = NULL;
        t = dtime_0(t);
        {
          b_94 = t;
          if(((z_93 != NULL) && (z_93 != b_94)))
            _fail(b_94);
          else
            z_93 = b_94;
        }
      }
      t = n_29;
      {
        c_94 = t;
        x_93 :
        if(match_cons(c_94, sym__2))
          {
            d_94 = ATgetArgument(c_94, 0);
            e_94 = ATgetArgument(c_94, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_94)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_93))), not_null(e_94));
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
  ATerm k_94 = NULL;
  k_94 = t;
  t = SSL_ReadFromFile(not_null(k_94));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_109 (ATerm), ATerm w_109 (ATerm))
{
  ATerm v_94 = NULL,x_94 = NULL;
  ATerm o_29;
  o_29 = t;
  {
    ATerm w_94 = NULL;
    t = v_109(t);
    {
      w_94 = t;
      if(((v_94 != NULL) && (v_94 != w_94)))
        _fail(w_94);
      else
        v_94 = w_94;
    }
  }
  t = o_29;
  {
    ATerm y_94 = NULL;
    t = w_109(t);
    {
      y_94 = t;
      if(((x_94 != NULL) && (x_94 != y_94)))
        _fail(y_94);
      else
        x_94 = y_94;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_94), not_null(x_94));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_95 = NULL;
  ATerm p_29;
  p_29 = t;
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 (ATerm t)
        {
          ATerm f_95 = NULL,g_95 = NULL;
          f_95 = t;
          c_95 :
          if(match_cons(f_95, sym_Input_1))
            {
              g_95 = ATgetArgument(f_95, 0);
              if(((e_95 != NULL) && (e_95 != g_95)))
                _fail(g_95);
              else
                e_95 = g_95;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, u_4);
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        {
          ATerm h_95 = NULL;
          t = term_s_29;
          {
            h_95 = t;
            if(((e_95 != NULL) && (e_95 != h_95)))
              _fail(h_95);
            else
              e_95 = h_95;
          }
        }
      }
  }
  t = p_29;
  {
    ATerm v_4 (ATerm t)
    {
      t = not_null(e_95);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_95 = NULL;
  o_95 = t;
  n_95 :
  if(match_cons(o_95, sym_Version_0))
    {
      ATerm q_95 = NULL,s_95 = NULL;
      ATerm t_29;
      t_29 = t;
      {
        ATerm r_95 = NULL;
        t = SSLgetAnnotations(not_null(o_95));
        {
          r_95 = t;
          if(((q_95 != NULL) && (q_95 != r_95)))
            _fail(r_95);
          else
            q_95 = r_95;
        }
      }
      t = t_29;
      {
        ATerm t_95 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_95));
        {
          t_95 = t;
          if(((s_95 != NULL) && (s_95 != t_95)))
            _fail(t_95);
          else
            s_95 = t_95;
        }
        t = not_null(s_95);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_93 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        {
          ATerm b_30 = t;
          int c_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(c_30);
            }
          else
            {
              t = b_30;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_4);
  t = y_93(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_95 = NULL;
  y_95 = t;
  t = SSL_table_create(not_null(y_95));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_96 = NULL;
  c_96 = t;
  {
    ATerm d_30;
    d_30 = t;
    {
      t = term_i_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_30, term_j_30, not_null(c_96));
          t = table_put_0(t);
        }
      }
    }
    t = d_30;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_96 = NULL;
  g_96 = t;
  t = SSL_string_to_int(not_null(g_96));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm o_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL;
  o_96 = t;
  m_96 :
  if(match_string(o_96, "register-usage-info"))
    {
      t = register_usage_1(t, r_0);
    }
  else
    {
      if(((ATgetType(o_96) == AT_LIST) && ((ATermList) o_96 != ATempty)))
        {
          p_96 = ATgetFirst((ATermList) o_96);
          q_96 = (ATerm) ATgetNext((ATermList) o_96);
          n_96 :
          if(((ATgetType(q_96) == AT_LIST) && ((ATermList) q_96 != ATempty)))
            {
              r_96 = ATgetFirst((ATermList) q_96);
              s_96 = (ATerm) ATgetNext((ATermList) q_96);
              {
                ATerm w_96 = NULL;
                ATerm k_30;
                k_30 = t;
                {
                  t = not_null(p_96);
                  t = p_0(t);
                }
                t = k_30;
                {
                  ATerm x_96 = NULL;
                  t = not_null(r_96);
                  {
                    t = q_0(t);
                    {
                      x_96 = t;
                      if(((w_96 != NULL) && (w_96 != x_96)))
                        _fail(x_96);
                      else
                        w_96 = x_96;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_96)), not_null(w_96));
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
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_4 (ATerm t)
      {
        ATerm a_98 = NULL;
        a_98 = t;
        b_97 :
        if(!(match_string(a_98, "-i")))
          {
            if(!(match_string(a_98, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        ATerm d_98 = NULL;
        ATerm n_30;
        n_30 = t;
        {
          ATerm b_98 = NULL;
          ATerm c_98 = NULL;
          c_98 = t;
          if(((b_98 != NULL) && (b_98 != c_98)))
            _fail(c_98);
          else
            b_98 = c_98;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_o_30, not_null(b_98));
            t = set_config_0(t);
          }
        }
        t = n_30;
        {
          ATerm e_98 = NULL;
          e_98 = t;
          if(((d_98 != NULL) && (d_98 != e_98)))
            _fail(e_98);
          else
            d_98 = e_98;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_98));
        }
        return(t);
      }
      ATerm z_4 (ATerm t)
      {
        t = term_p_30;
        return(t);
      }
      t = ArgOption_3(t, x_4, y_4, z_4);
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      {
        ATerm q_30 = t;
        int r_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 (ATerm t)
            {
              ATerm f_98 = NULL;
              f_98 = t;
              i_97 :
              if(!(match_string(f_98, "-o")))
                {
                  if(!(match_string(f_98, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm b_5 (ATerm t)
            {
              ATerm i_98 = NULL;
              ATerm w_30;
              w_30 = t;
              {
                ATerm g_98 = NULL;
                ATerm h_98 = NULL;
                h_98 = t;
                if(((g_98 != NULL) && (g_98 != h_98)))
                  _fail(h_98);
                else
                  g_98 = h_98;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_30, not_null(g_98));
                  t = set_config_0(t);
                }
              }
              t = w_30;
              {
                ATerm j_98 = NULL;
                j_98 = t;
                if(((i_98 != NULL) && (i_98 != j_98)))
                  _fail(j_98);
                else
                  i_98 = j_98;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_98));
              }
              return(t);
            }
            ATerm c_5 (ATerm t)
            {
              t = term_a_31;
              return(t);
            }
            t = ArgOption_3(t, a_5, b_5, c_5);
            LocalPopChoice(r_30);
          }
        else
          {
            t = q_30;
            {
              ATerm b_31 = t;
              int c_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_5 (ATerm t)
                  {
                    ATerm k_98 = NULL;
                    k_98 = t;
                    l_97 :
                    if(!(match_string(k_98, "-S")))
                      {
                        if(!(match_string(k_98, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm e_5 (ATerm t)
                  {
                    t = term_d_31;
                    t = set_config_0(t);
                    t = term_e_31;
                    return(t);
                  }
                  ATerm f_5 (ATerm t)
                  {
                    t = term_o_31;
                    return(t);
                  }
                  t = Option_3(t, d_5, e_5, f_5);
                  LocalPopChoice(c_31);
                }
              else
                {
                  t = b_31;
                  {
                    ATerm p_31 = t;
                    int q_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_5 (ATerm t)
                        {
                          ATerm l_98 = NULL;
                          l_98 = t;
                          m_97 :
                          if(!(match_string(l_98, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm h_5 (ATerm t)
                        {
                          ATerm o_98 = NULL;
                          ATerm r_31;
                          r_31 = t;
                          {
                            ATerm m_98 = NULL;
                            ATerm n_98 = NULL;
                            t = string_to_int_0(t);
                            {
                              n_98 = t;
                              if(((m_98 != NULL) && (m_98 != n_98)))
                                _fail(n_98);
                              else
                                m_98 = n_98;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_26, not_null(m_98));
                              t = set_config_0(t);
                            }
                          }
                          t = r_31;
                          {
                            ATerm p_98 = NULL;
                            p_98 = t;
                            if(((o_98 != NULL) && (o_98 != p_98)))
                              _fail(p_98);
                            else
                              o_98 = p_98;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_98));
                          }
                          return(t);
                        }
                        ATerm i_5 (ATerm t)
                        {
                          t = term_s_31;
                          return(t);
                        }
                        t = ArgOption_3(t, g_5, h_5, i_5);
                        LocalPopChoice(q_31);
                      }
                    else
                      {
                        t = p_31;
                        {
                          ATerm t_31 = t;
                          int y_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_5 (ATerm t)
                              {
                                ATerm q_98 = NULL;
                                q_98 = t;
                                p_97 :
                                if(!(match_string(q_98, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm k_5 (ATerm t)
                              {
                                ATerm z_31;
                                z_31 = t;
                                {
                                  ATerm r_98 = NULL;
                                  ATerm s_98 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    s_98 = t;
                                    if(((r_98 != NULL) && (r_98 != s_98)))
                                      _fail(s_98);
                                    else
                                      r_98 = s_98;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_a_32, not_null(r_98));
                                    t = set_config_0(t);
                                  }
                                }
                                t = z_31;
                                return(t);
                              }
                              ATerm l_5 (ATerm t)
                              {
                                t = term_b_32;
                                return(t);
                              }
                              t = ArgOption_3(t, j_5, k_5, l_5);
                              LocalPopChoice(y_31);
                            }
                          else
                            {
                              t = t_31;
                              {
                                ATerm c_32 = t;
                                int d_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_5 (ATerm t)
                                    {
                                      ATerm t_98 = NULL;
                                      t_98 = t;
                                      r_97 :
                                      if(!(match_string(t_98, "-v")))
                                        {
                                          if(!(match_string(t_98, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm n_5 (ATerm t)
                                    {
                                      t = term_j_32;
                                      t = set_config_0(t);
                                      t = term_k_32;
                                      return(t);
                                    }
                                    ATerm o_5 (ATerm t)
                                    {
                                      t = term_l_32;
                                      return(t);
                                    }
                                    t = Option_3(t, m_5, n_5, o_5);
                                    LocalPopChoice(d_32);
                                  }
                                else
                                  {
                                    t = c_32;
                                    {
                                      ATerm m_32 = t;
                                      int n_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_5 (ATerm t)
                                          {
                                            ATerm u_98 = NULL;
                                            u_98 = t;
                                            s_97 :
                                            if(!(match_string(u_98, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm q_5 (ATerm t)
                                          {
                                            t = term_p_32;
                                            t = set_config_0(t);
                                            t = term_q_32;
                                            return(t);
                                          }
                                          ATerm r_5 (ATerm t)
                                          {
                                            t = term_r_32;
                                            return(t);
                                          }
                                          t = Option_3(t, p_5, q_5, r_5);
                                          LocalPopChoice(n_32);
                                        }
                                      else
                                        {
                                          t = m_32;
                                          {
                                            ATerm s_5 (ATerm t)
                                            {
                                              ATerm v_98 = NULL;
                                              v_98 = t;
                                              t_97 :
                                              if(!(match_string(v_98, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm t_5 (ATerm t)
                                            {
                                              t = term_t_32;
                                              t = set_config_0(t);
                                              t = term_u_32;
                                              return(t);
                                            }
                                            ATerm u_5 (ATerm t)
                                            {
                                              t = term_v_32;
                                              return(t);
                                            }
                                            t = Option_3(t, s_5, t_5, u_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm e_99 = NULL;
  e_99 = t;
  t = SSL_table_destroy(not_null(e_99));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_99 = NULL;
  m_99 = t;
  t = SSL_exit(not_null(m_99));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm q_99 = NULL;
  q_99 = t;
  t = SSL_implode_string(not_null(q_99));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_106 (ATerm))
{
  ATerm t_99 (ATerm t)
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_99);
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        {
          t = Nil_0(t);
          t = x_106(t);
        }
      }
    return(t);
  }
  t = t_99(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      {
        ATerm w_99 = NULL,x_99 = NULL,y_99 = NULL;
        w_99 = t;
        v_99 :
        if(((ATgetType(w_99) == AT_LIST) && ((ATermList) w_99 != ATempty)))
          {
            x_99 = ATgetFirst((ATermList) w_99);
            y_99 = (ATerm) ATgetNext((ATermList) w_99);
            {
              t = not_null(x_99);
              {
                ATerm v_5 (ATerm t)
                {
                  t = not_null(y_99);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm f_100 = NULL;
  f_100 = t;
  t = SSL_explode_string(not_null(f_100));
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
ATerm long_description_1 (ATerm t, ATerm p_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_106 (ATerm))
{
  ATerm k_100 (ATerm t)
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
        t = Cons_2(t, i_106, k_100);
      }
    return(t);
  }
  t = k_100(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL;
  t_100 = t;
  q_100 :
  if(((ATgetType(t_100) == AT_LIST) && ((ATermList) t_100 != ATempty)))
    {
      r_100 = ATgetFirst((ATermList) t_100);
      s_100 = (ATerm) ATgetNext((ATermList) t_100);
      {
        ATerm x_100 = NULL;
        t = not_null(s_100);
        {
          ATerm c_33;
          c_33 = t;
          {
            ATerm y_100 = NULL,a_101 = NULL,e_101 = NULL;
            ATerm d_33;
            d_33 = t;
            {
              ATerm z_100 = NULL;
              t = o_0(t);
              {
                z_100 = t;
                if(((y_100 != NULL) && (y_100 != z_100)))
                  _fail(z_100);
                else
                  y_100 = z_100;
              }
            }
            t = d_33;
            {
              ATerm b_101 = NULL;
              t = not_null(r_100);
              {
                t = n_0(t);
                {
                  b_101 = t;
                  if(((a_101 != NULL) && (a_101 != b_101)))
                    _fail(b_101);
                  else
                    a_101 = b_101;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_100)), not_null(a_101));
                {
                  e_101 = t;
                  if(((x_100 != NULL) && (x_100 != e_101)))
                    _fail(e_101);
                  else
                    x_100 = e_101;
                }
              }
            }
          }
          t = c_33;
          {
            ATerm w_5 (ATerm t)
            {
              t = not_null(x_100);
              return(t);
            }
            t = reverse_acc_2(t, n_0, w_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) t_100 == ATempty))
        {
          {
            t = term_u_6;
            t = o_0(t);
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
  ATerm x_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_78 (ATerm))
{
  ATerm w_101 = NULL,x_101 = NULL;
  w_101 = t;
  v_101 :
  if(match_cons(w_101, sym_Program_1))
    {
      x_101 = ATgetArgument(w_101, 0);
      {
        ATerm a_102 = NULL,c_102 = NULL;
        ATerm b_102 = NULL;
        t = SSLgetAnnotations(not_null(w_101));
        {
          b_102 = t;
          if(((a_102 != NULL) && (a_102 != b_102)))
            _fail(b_102);
          else
            a_102 = b_102;
        }
        {
          t = not_null(x_101);
          {
            ATerm e_102 = NULL;
            t = h_78(t);
            {
              c_102 = t;
              {
                ATerm f_102 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_102)), not_null(a_102));
                {
                  f_102 = t;
                  if(((e_102 != NULL) && (e_102 != f_102)))
                    _fail(f_102);
                  else
                    e_102 = f_102;
                }
                t = not_null(e_102);
              }
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
  ATerm t_102 = NULL;
  ATerm y_5 (ATerm t)
  {
    ATerm z_5 (ATerm t)
    {
      ATerm u_102 = NULL;
      u_102 = t;
      if(((t_102 != NULL) && (t_102 != u_102)))
        _fail(u_102);
      else
        t_102 = u_102;
      return(t);
    }
    t = Program_1(t, z_5);
    return(t);
  }
  t = option_defined_1(t, y_5);
  {
    ATerm a_6 (ATerm t)
    {
      ATerm v_102 = NULL;
      ATerm w_102 = NULL;
      t = term_u_6;
      {
        ATerm b_6 (ATerm t)
        {
          t = not_null(t_102);
          return(t);
        }
        t = short_description_1(t, b_6);
        {
          t = concat_strings_0(t);
          {
            w_102 = t;
            if(((v_102 != NULL) && (v_102 != w_102)))
              _fail(w_102);
            else
              v_102 = w_102;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATinsert(ATempty, not_null(v_102)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, a_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATinsert(ATempty, term_e_33));
      {
        t = printnl_0(t);
        {
          t = term_h_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_6 (ATerm t)
                {
                  ATerm x_102 = NULL;
                  x_102 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_102)), term_i_33));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_6);
                {
                  ATerm e_6 (ATerm t)
                  {
                    ATerm z_102 = NULL;
                    ATerm a_103 = NULL;
                    t = term_u_6;
                    {
                      ATerm f_6 (ATerm t)
                      {
                        t = not_null(t_102);
                        return(t);
                      }
                      t = long_description_1(t, f_6);
                      {
                        t = concat_strings_0(t);
                        {
                          a_103 = t;
                          if(((z_102 != NULL) && (z_102 != a_103)))
                            _fail(a_103);
                          else
                            z_102 = a_103;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_102)), term_j_33));
                      t = printnl_0(t);
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
ATerm Undefined_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm l_103 = NULL,m_103 = NULL;
  l_103 = t;
  j_103 :
  if(match_cons(l_103, sym_Undefined_1))
    {
      m_103 = ATgetArgument(l_103, 0);
      {
        ATerm p_103 = NULL,x_103 = NULL;
        ATerm u_103 = NULL;
        t = SSLgetAnnotations(not_null(l_103));
        {
          u_103 = t;
          if(((p_103 != NULL) && (p_103 != u_103)))
            _fail(u_103);
          else
            p_103 = u_103;
        }
        {
          t = not_null(m_103);
          {
            ATerm z_103 = NULL;
            t = i_78(t);
            {
              x_103 = t;
              {
                ATerm a_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_103)), not_null(p_103));
                {
                  a_104 = t;
                  if(((z_103 != NULL) && (z_103 != a_104)))
                    _fail(a_104);
                  else
                    z_103 = a_104;
                }
                t = not_null(z_103);
              }
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
ATerm fetch_1 (ATerm t, ATerm r_106 (ATerm))
{
  ATerm k_104 (ATerm t)
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_106, _id);
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        t = Cons_2(t, _id, k_104);
      }
    return(t);
  }
  t = k_104(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_91 (ATerm))
{
  t = fetch_1(t, t_91);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_104 = NULL;
  p_104 = t;
  o_104 :
  if(match_cons(p_104, sym_Help_0))
    {
      ATerm r_104 = NULL,t_104 = NULL;
      ATerm n_33;
      n_33 = t;
      {
        ATerm s_104 = NULL;
        t = SSLgetAnnotations(not_null(p_104));
        {
          s_104 = t;
          if(((r_104 != NULL) && (r_104 != s_104)))
            _fail(s_104);
          else
            r_104 = s_104;
        }
      }
      t = n_33;
      {
        ATerm u_104 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(r_104));
        {
          u_104 = t;
          if(((t_104 != NULL) && (t_104 != u_104)))
            _fail(u_104);
          else
            t_104 = u_104;
        }
        t = not_null(t_104);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_110 (ATerm))
{
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_110(t);
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL;
  a_105 = t;
  z_104 :
  if(match_cons(a_105, sym__2))
    {
      b_105 = ATgetArgument(a_105, 0);
      c_105 = ATgetArgument(a_105, 1);
      t = SSL_table_get(not_null(b_105), not_null(c_105));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_105 = NULL,k_105 = NULL,l_105 = NULL,m_105 = NULL;
  j_105 = t;
  i_105 :
  if(match_cons(j_105, sym__3))
    {
      k_105 = ATgetArgument(j_105, 0);
      l_105 = ATgetArgument(j_105, 1);
      m_105 = ATgetArgument(j_105, 2);
      {
        ATerm q_33;
        q_33 = t;
        {
          ATerm q_105 = NULL;
          ATerm r_105 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_105), not_null(l_105));
          {
            ATerm r_33 = t;
            int s_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_33);
              }
            else
              {
                t = r_33;
                t = (ATerm) ATempty;
              }
            {
              r_105 = t;
              if(((q_105 != NULL) && (q_105 != r_105)))
                _fail(r_105);
              else
                q_105 = r_105;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_105), not_null(l_105), (ATerm) ATinsert(CheckATermList(not_null(q_105)), not_null(m_105)));
            t = table_put_0(t);
          }
        }
        t = q_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_90 (ATerm))
{
  ATerm v_105 = NULL;
  ATerm w_105 = NULL;
  t = term_u_6;
  {
    t = t_90(t);
    {
      w_105 = t;
      if(((v_105 != NULL) && (v_105 != w_105)))
        _fail(w_105);
      else
        v_105 = w_105;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_33, term_g_33, not_null(v_105));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL;
  c_106 = t;
  b_106 :
  if(match_string(c_106, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(c_106) == AT_LIST) && ((ATermList) c_106 != ATempty)))
        {
          d_106 = ATgetFirst((ATermList) c_106);
          e_106 = (ATerm) ATgetNext((ATermList) c_106);
          {
            ATerm h_106 = NULL;
            ATerm t_33;
            t_33 = t;
            {
              t = not_null(d_106);
              t = c_0(t);
            }
            t = t_33;
            {
              ATerm k_106 = NULL;
              t = term_u_6;
              {
                t = d_0(t);
                {
                  k_106 = t;
                  if(((h_106 != NULL) && (h_106 != k_106)))
                    _fail(k_106);
                  else
                    h_106 = k_106;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_106)), not_null(h_106));
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
    ATerm p_106 = NULL;
    p_106 = t;
    o_106 :
    if(!(match_string(p_106, "--help")))
      {
        if(!(match_string(p_106, "-h")))
          {
            if(!(match_string(p_106, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    t = term_u_33;
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_v_33;
    return(t);
  }
  t = Option_3(t, g_6, h_6, i_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL;
  u_106 = t;
  t_106 :
  if(((ATgetType(u_106) == AT_LIST) && ((ATermList) u_106 != ATempty)))
    {
      v_106 = ATgetFirst((ATermList) u_106);
      w_106 = (ATerm) ATgetNext((ATermList) u_106);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_106)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_106)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_87 (ATerm), ATerm z_87 (ATerm))
{
  ATerm i_107 = NULL,j_107 = NULL,k_107 = NULL;
  i_107 = t;
  h_107 :
  if(((ATgetType(i_107) == AT_LIST) && ((ATermList) i_107 != ATempty)))
    {
      j_107 = ATgetFirst((ATermList) i_107);
      k_107 = (ATerm) ATgetNext((ATermList) i_107);
      {
        ATerm o_107 = NULL,q_107 = NULL;
        ATerm p_107 = NULL;
        t = SSLgetAnnotations(not_null(i_107));
        {
          p_107 = t;
          if(((o_107 != NULL) && (o_107 != p_107)))
            _fail(p_107);
          else
            o_107 = p_107;
        }
        {
          t = not_null(j_107);
          {
            ATerm s_107 = NULL;
            t = y_87(t);
            {
              q_107 = t;
              {
                t = not_null(k_107);
                {
                  ATerm u_107 = NULL;
                  t = z_87(t);
                  {
                    s_107 = t;
                    {
                      ATerm v_107 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_107)), not_null(q_107)), not_null(o_107));
                      {
                        v_107 = t;
                        if(((u_107 != NULL) && (u_107 != v_107)))
                          _fail(v_107);
                        else
                          u_107 = v_107;
                      }
                      t = not_null(u_107);
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
  ATerm g_108 = NULL;
  g_108 = t;
  f_108 :
  if(((ATermList) g_108 == ATempty))
    {
      {
        ATerm o_108 = NULL,q_108 = NULL;
        ATerm w_33;
        w_33 = t;
        {
          ATerm p_108 = NULL;
          t = SSLgetAnnotations(not_null(g_108));
          {
            p_108 = t;
            if(((o_108 != NULL) && (o_108 != p_108)))
              _fail(p_108);
            else
              o_108 = p_108;
          }
        }
        t = w_33;
        {
          ATerm r_108 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(o_108));
          {
            r_108 = t;
            if(((q_108 != NULL) && (q_108 != r_108)))
              _fail(r_108);
            else
              q_108 = r_108;
          }
          t = not_null(q_108);
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
  ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL;
  x_108 = t;
  w_108 :
  if(match_cons(x_108, sym__2))
    {
      y_108 = ATgetArgument(x_108, 0);
      z_108 = ATgetArgument(x_108, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_26, not_null(y_108), not_null(z_108));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_90 (ATerm))
{
  ATerm x_33;
  x_33 = t;
  {
    ATerm j_6 (ATerm t)
    {
      t = term_y_33;
      t = r_90(t);
      return(t);
    }
    t = try_1(t, j_6);
  }
  t = x_33;
  {
    ATerm k_6 (ATerm t)
    {
      ATerm h_109 = NULL;
      ATerm z_33;
      z_33 = t;
      {
        ATerm f_109 = NULL;
        ATerm g_109 = NULL;
        g_109 = t;
        if(((f_109 != NULL) && (f_109 != g_109)))
          _fail(g_109);
        else
          f_109 = g_109;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_27, not_null(f_109));
          t = set_config_0(t);
        }
      }
      t = z_33;
      {
        ATerm i_109 = NULL;
        i_109 = t;
        if(((h_109 != NULL) && (h_109 != i_109)))
          _fail(i_109);
        else
          h_109 = i_109;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_109));
      }
      return(t);
    }
    ATerm l_6 (ATerm t)
    {
      ATerm a_34 = t;
      int b_34 = stack_ptr;
      if((PushChoice() == 0))
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
                t = r_90(t);
                t = Cons_2(t, _id, l_6);
              }
            }
          LocalPopChoice(b_34);
        }
      else
        {
          t = a_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_6, l_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_109 = NULL,p_109 = NULL,q_109 = NULL;
  ATerm l_34;
  l_34 = t;
  {
    ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL,u_109 = NULL;
    r_109 = t;
    n_109 :
    if(match_cons(r_109, sym__3))
      {
        s_109 = ATgetArgument(r_109, 0);
        t_109 = ATgetArgument(r_109, 1);
        u_109 = ATgetArgument(r_109, 2);
        {
          if(((o_109 != NULL) && (o_109 != s_109)))
            _fail(s_109);
          else
            o_109 = s_109;
          {
            if(((p_109 != NULL) && (p_109 != t_109)))
              _fail(t_109);
            else
              p_109 = t_109;
            {
              if(((q_109 != NULL) && (q_109 != u_109)))
                _fail(u_109);
              else
                q_109 = u_109;
              t = SSL_table_put(not_null(o_109), not_null(p_109), not_null(q_109));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_90 (ATerm))
{
  ATerm z_109 = NULL;
  ATerm m_34;
  m_34 = t;
  {
    t = term_s_34;
    t = table_put_0(t);
  }
  t = m_34;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm t_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_90(t);
          LocalPopChoice(u_34);
        }
      else
        {
          t = t_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_6);
    {
      ATerm n_6 (ATerm t)
      {
        ATerm v_34 = t;
        int w_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_v_26;
                t = exit_0(t);
              }
            }
            LocalPopChoice(w_34);
          }
        else
          {
            t = v_34;
            {
              ATerm o_6 (ATerm t)
              {
                ATerm p_6 (ATerm t)
                {
                  ATerm a_110 = NULL;
                  a_110 = t;
                  if(((z_109 != NULL) && (z_109 != a_110)))
                    _fail(a_110);
                  else
                    z_109 = a_110;
                  return(t);
                }
                t = Undefined_1(t, p_6);
                return(t);
              }
              t = option_defined_1(t, o_6);
              {
                ATerm x_34;
                x_34 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_109)), term_c_35));
                  t = printnl_0(t);
                }
                t = x_34;
                {
                  t = system_usage_0(t);
                  {
                    t = term_i_15;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_6);
      {
        ATerm d_35;
        d_35 = t;
        {
          t = term_f_33;
          t = table_destroy_0(t);
        }
        t = d_35;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm m_93 (ATerm), ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm p_93 (ATerm))
{
  ATerm q_6 (ATerm t)
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_93(t);
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, q_6);
  {
    t = store_options_0(t);
    {
      t = p_93(t);
      {
        ATerm k_35 = t;
        int l_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_93);
            LocalPopChoice(l_35);
          }
        else
          {
            t = k_35;
            {
              ATerm m_35 = t;
              int n_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, m_93);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(n_35);
                }
              else
                {
                  t = m_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm i_93 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm s_6 (ATerm t)
    {
      ATerm q_35;
      q_35 = t;
      {
        ATerm d_110 = NULL;
        ATerm e_110 = NULL;
        t = term_t_27;
        {
          t = get_config_0(t);
          {
            e_110 = t;
            if(((d_110 != NULL) && (d_110 != e_110)))
              _fail(e_110);
            else
              d_110 = e_110;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATinsert(ATempty, not_null(d_110)));
          t = printnl_0(t);
        }
      }
      t = q_35;
      return(t);
    }
    t = if_verbose2_1(t, s_6);
    return(t);
  }
  t = iowrap_4(t, g_93, h_93, i_93, r_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm e_93 (ATerm), ATerm f_93 (ATerm))
{
  t = iowrap_3(t, e_93, f_93, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm b_93 (ATerm))
{
  ATerm t_6 (ATerm t)
  {
    t = _2(t, _id, b_93);
    return(t);
  }
  t = iowrap_2(t, t_6, _fail);
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
