#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "conf.h"
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Include_1;
Symbol sym_Prefix_1;
Symbol sym_Ignore_0;
Symbol sym_NoDependency_0;
Symbol sym_Dependency_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Ext_1;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_Prefix_1 = ATmakeSymbol("Prefix", 1, ATfalse);
  ATprotectSymbol(sym_Prefix_1);
  sym_Ignore_0 = ATmakeSymbol("Ignore", 0, ATfalse);
  ATprotectSymbol(sym_Ignore_0);
  sym_NoDependency_0 = ATmakeSymbol("NoDependency", 0, ATfalse);
  ATprotectSymbol(sym_NoDependency_0);
  sym_Dependency_1 = ATmakeSymbol("Dependency", 1, ATfalse);
  ATprotectSymbol(sym_Dependency_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_Ext_1 = ATmakeSymbol("Ext", 1, ATfalse);
  ATprotectSymbol(sym_Ext_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_w_27;
ATerm term_q_27;
ATerm term_l_25;
ATerm term_j_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_d_24;
ATerm term_v_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_d_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_t_19;
ATerm term_q_19;
ATerm term_y_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_k_17;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_f_10;
void init_constant_terms (void)
{
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("parsing: ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("reading ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("mtree", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" extension: ", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" tool: ", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-I dir] [-i file]", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-dep target | -nodep]", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d|--Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-nodep", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_t_19, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_NoDependency_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep f             write dependency to file f", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--prefix", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_w_10);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_10);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_l_12);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_l_12);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_l_12);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_y_22, term_z_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__3, term_y_22, term_z_22, (ATerm) ATempty);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego.config", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("/pack-stratego-plugins", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".plugin", 0, ATtrue));
}
ATerm basename_1 (ATerm, ATerm r_73 (ATerm));
ATerm basename_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm e_62 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm rm_files_0 (ATerm);
ATerm call_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm i_70 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm verbosity_0 (ATerm);
ATerm parse_file_1 (ATerm, ATerm m_0 (ATerm));
ATerm if_verbose5_1 (ATerm, ATerm j_70 (ATerm));
ATerm split_2 (ATerm, ATerm k_74 (ATerm), ATerm l_74 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm t_73 (ATerm));
ATerm Tl_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm get_module_ext_1 (ATerm, ATerm x_90 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm get_config_keys_1 (ATerm, ATerm s_63 (ATerm));
ATerm get_module_1 (ATerm, ATerm w_90 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm b_80 (ATerm));
ATerm zip_1 (ATerm, ATerm d_80 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm d_77 (ATerm), ATerm e_77 (ATerm));
ATerm diff_1 (ATerm, ATerm i_77 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm i_64 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_90 (ATerm), ATerm b_90 (ATerm));
ATerm for_3 (ATerm, ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm f_90 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm o_64 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm d_65 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm v_90 (ATerm));
ATerm exit_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm));
ATerm crush_2 (ATerm, ATerm o_77 (ATerm), ATerm p_77 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_70 (ATerm));
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm f_83 (ATerm));
ATerm separate_by_1 (ATerm, ATerm g_83 (ATerm));
ATerm obsolete_1 (ATerm, ATerm p_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm f_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_70 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm list_1 (ATerm, ATerm o_81 (ATerm));
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_71 (ATerm));
ATerm assert_1 (ATerm, ATerm z_63 (ATerm));
ATerm extend_config_0 (ATerm);
ATerm pack_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_68 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_68 (ATerm));
ATerm Program_1 (ATerm, ATerm o_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm p_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_69 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_69 (ATerm));
ATerm parse_options_1 (ATerm, ATerm a_69 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm d_64 (ATerm, ATerm (ATerm)), ATerm e_64 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm q_51 (ATerm), ATerm r_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm f_82 (ATerm));
ATerm has_extension_1 (ATerm, ATerm u_73 (ATerm));
ATerm filter_1 (ATerm, ATerm c_75 (ATerm));
ATerm readdir_0 (ATerm);
ATerm find_plugins_2 (ATerm, ATerm n_63 (ATerm), ATerm o_63 (ATerm));
ATerm import_config_files_1 (ATerm, ATerm q_63 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_82 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm v_81 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm x_81 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm f_63 (ATerm), ATerm g_63 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_72 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm m_81 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_90 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm g_70 (ATerm));
ATerm import_config_file_1 (ATerm, ATerm p_63 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_62 (ATerm), ATerm a_63 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm r_73 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm d_0 (ATerm t)
    {
      ATerm g_1 = t;
      int l_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, d_0);
          LocalPopChoice(l_9);
        }
      else
        {
          t = g_1;
          {
            ATerm m_9 = t;
            int d_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_0 (ATerm t)
                {
                  ATerm r_0 = NULL;
                  r_0 = t;
                  p_0 :
                  if(!(match_int(r_0, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, e_0, _id);
                LocalPopChoice(d_10);
              }
            else
              {
                t = m_9;
                {
                  ATerm f_0 (ATerm t)
                  {
                    ATerm f_1 = NULL;
                    f_1 = t;
                    q_0 :
                    if(!(match_int(f_1, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, f_0, r_73);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, d_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm e_62 (ATerm))
{
  ATerm g_2 = NULL,h_2 = NULL;
  g_2 = t;
  f_2 :
  if(match_cons(g_2, sym_Imports_1))
    {
      h_2 = ATgetArgument(g_2, 0);
      {
        ATerm k_2 = NULL,m_2 = NULL;
        ATerm l_2 = NULL;
        t = SSLgetAnnotations(not_null(g_2));
        {
          l_2 = t;
          if(((k_2 != NULL) && (k_2 != l_2)))
            _fail(l_2);
          else
            k_2 = l_2;
        }
        {
          t = not_null(h_2);
          {
            ATerm o_2 = NULL;
            t = e_62(t);
            {
              m_2 = t;
              {
                ATerm p_2 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, not_null(m_2)), not_null(k_2));
                {
                  p_2 = t;
                  if(((o_2 != NULL) && (o_2 != p_2)))
                    _fail(p_2);
                  else
                    o_2 = p_2;
                }
                t = not_null(o_2);
              }
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
ATerm flatten_stratego_0 (ATerm t)
{
  ATerm a_3 = NULL;
  ATerm n_0 (ATerm t)
  {
    ATerm x_2 = NULL,y_2 = NULL;
    x_2 = t;
    v_2 :
    if(match_cons(x_2, sym_Specification_1))
      {
        y_2 = ATgetArgument(x_2, 0);
        {
          t = not_null(y_2);
          {
            ATerm o_0 (ATerm t)
            {
              ATerm e_10 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = e_10;
                }
              return(t);
            }
            t = filter_1(t, o_0);
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, n_0);
  {
    t = concat_0(t);
    {
      a_3 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(a_3));
    }
  }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
  i_3 = t;
  f_3 :
  if(match_cons(i_3, sym__2))
    {
      j_3 = ATgetArgument(i_3, 0);
      m_3 = ATgetArgument(i_3, 1);
      g_3 :
      if(match_cons(j_3, sym__2))
        {
          k_3 = ATgetArgument(j_3, 0);
          l_3 = ATgetArgument(j_3, 1);
          h_3 :
          if(match_cons(m_3, sym__2))
            {
              n_3 = ATgetArgument(m_3, 0);
              o_3 = ATgetArgument(m_3, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_3)), not_null(k_3)), (ATerm) ATinsert(CheckATermList(not_null(o_3)), not_null(l_3)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  w_3 = t;
  v_3 :
  if(((ATgetType(w_3) == AT_LIST) && ((ATermList) w_3 != ATempty)))
    {
      x_3 = ATgetFirst((ATermList) w_3);
      y_3 = (ATerm) ATgetNext((ATermList) w_3);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), not_null(y_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm e_4 = NULL;
  e_4 = t;
  d_4 :
  if(((ATermList) e_4 == ATempty))
    {
      t = term_f_10;
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
ATerm get_stratego_imports_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  l_4 = t;
  j_4 :
  if(match_cons(l_4, sym__2))
    {
      m_4 = ATgetArgument(l_4, 0);
      n_4 = ATgetArgument(l_4, 1);
      k_4 :
      if(match_cons(n_4, sym_Specification_1))
        {
          o_4 = ATgetArgument(n_4, 0);
          {
            t = not_null(o_4);
            {
              ATerm s_0 (ATerm t)
              {
                ATerm q_4 = NULL,r_4 = NULL;
                q_4 = t;
                i_4 :
                if(match_cons(q_4, sym_Imports_1))
                  {
                    r_4 = ATgetArgument(q_4, 0);
                    t = not_null(r_4);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = filter_1(t, s_0);
              t = concat_0(t);
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
ATerm error_0 (ATerm t)
{
  ATerm g_10;
  g_10 = t;
  {
    ATerm w_4 = NULL;
    ATerm x_4 = NULL;
    x_4 = t;
    if(((w_4 != NULL) && (w_4 != x_4)))
      _fail(x_4);
    else
      w_4 = x_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(w_4));
      t = printnl_0(t);
    }
  }
  t = g_10;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm i_10;
  i_10 = t;
  {
    t = error_0(t);
    {
      t = term_j_10;
      t = exit_0(t);
    }
  }
  t = i_10;
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm a_5 = NULL;
  a_5 = t;
  {
    ATerm k_10;
    k_10 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_10, (ATerm) ATinsert(CheckATermList(not_null(a_5)), term_m_10));
      t = call_0(t);
    }
    t = k_10;
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym__2))
    {
      g_5 = ATgetArgument(f_5, 0);
      h_5 = ATgetArgument(f_5, 1);
      t = SSL_call(not_null(g_5), not_null(h_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm o_10;
  o_10 = t;
  {
    ATerm m_5 = NULL;
    ATerm n_5 = NULL;
    n_5 = t;
    if(((m_5 != NULL) && (m_5 != n_5)))
      _fail(n_5);
    else
      m_5 = n_5;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_10, (ATerm) ATinsert(ATempty, not_null(m_5)));
      t = printnl_0(t);
    }
  }
  t = o_10;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm p_10;
    p_10 = t;
    {
      ATerm q_5 = NULL;
      ATerm r_5 = NULL;
      t = term_q_10;
      {
        t = get_config_0(t);
        {
          r_5 = t;
          if(((q_5 != NULL) && (q_5 != r_5)))
            _fail(r_5);
          else
            q_5 = r_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), term_r_10);
        t = geq_0(t);
      }
    }
    t = p_10;
    t = i_70(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm u_5 = NULL;
  u_5 = t;
  t = SSL_int_to_string(not_null(u_5));
  return(t);
}
ATerm verbosity_0 (ATerm t)
{
  ATerm s_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_10;
      t = get_config_0(t);
      LocalPopChoice(u_10);
    }
  else
    {
      t = s_10;
      t = term_w_10;
    }
  return(t);
}
ATerm parse_file_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
  ATerm g_7 (ATerm t)
  {
    ATerm s_6 = NULL;
    ATerm t_6 = NULL,v_6 = NULL,x_6 = NULL,d_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(m_6));
    {
      ATerm a_11 = t;
      if((PushChoice() == 0))
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_11;
        }
      {
        ATerm u_0 (ATerm t)
        {
          t = not_null(k_6);
          {
            ATerm v_0 (ATerm t)
            {
              t = term_b_11;
              return(t);
            }
            t = debug_1(t, v_0);
          }
          return(t);
        }
        t = if_verbose2_1(t, u_0);
        {
          ATerm c_11;
          c_11 = t;
          {
            ATerm u_6 = NULL;
            t = verbosity_0(t);
            {
              t = int_to_string_0(t);
              {
                u_6 = t;
                if(((t_6 != NULL) && (t_6 != u_6)))
                  _fail(u_6);
                else
                  t_6 = u_6;
              }
            }
          }
          t = c_11;
          {
            ATerm d_11;
            d_11 = t;
            {
              ATerm w_6 = NULL;
              t = term_f_11;
              {
                t = get_config_0(t);
                {
                  t = int_to_string_0(t);
                  {
                    w_6 = t;
                    if(((v_6 != NULL) && (v_6 != w_6)))
                      _fail(w_6);
                    else
                      v_6 = w_6;
                  }
                }
              }
            }
            t = d_11;
            {
              ATerm y_6 = NULL,a_7 = NULL,c_7 = NULL;
              ATerm g_11;
              g_11 = t;
              {
                ATerm z_6 = NULL;
                t = (ATerm) ATinsert(ATempty, term_l_11);
                {
                  ATerm w_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = if_verbose2_1(t, w_0);
                  {
                    z_6 = t;
                    if(((y_6 != NULL) && (y_6 != z_6)))
                      _fail(z_6);
                    else
                      y_6 = z_6;
                  }
                }
              }
              t = g_11;
              {
                ATerm b_7 = NULL;
                t = term_q_11;
                {
                  t = get_config_0(t);
                  {
                    b_7 = t;
                    if(((a_7 != NULL) && (a_7 != b_7)))
                      _fail(b_7);
                    else
                      a_7 = b_7;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_7), not_null(y_6));
                  {
                    t = conc_0(t);
                    {
                      c_7 = t;
                      if(((x_6 != NULL) && (x_6 != c_7)))
                        _fail(c_7);
                      else
                        x_6 = c_7;
                    }
                  }
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_6), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(x_6)), not_null(v_6)), term_f_11), not_null(t_6)), term_q_10), not_null(l_6)), term_s_11), not_null(k_6)), term_r_11));
                {
                  t = if_verbose4_1(t, debug_0);
                  {
                    t = call_0(t);
                    {
                      t = not_null(l_6);
                      {
                        t = ReadFromFile_0(t);
                        {
                          d_7 = t;
                          {
                            if(((s_6 != NULL) && (s_6 != d_7)))
                              _fail(d_7);
                            else
                              s_6 = d_7;
                            {
                              ATerm x_0 (ATerm t)
                              {
                                ATerm e_7 = NULL;
                                t = term_f_11;
                                {
                                  t = get_config_0(t);
                                  {
                                    e_7 = t;
                                    g_6 :
                                    if(match_int(e_7, 0))
                                      {
                                        t = (ATerm) ATinsert(ATempty, not_null(l_6));
                                        t = rm_files_0(t);
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                }
                                return(t);
                              }
                              t = try_1(t, x_0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = not_null(s_6);
    return(t);
  }
  j_6 = t;
  h_6 :
  if(match_cons(j_6, sym__3))
    {
      k_6 = ATgetArgument(j_6, 0);
      l_6 = ATgetArgument(j_6, 1);
      m_6 = ATgetArgument(j_6, 2);
      i_6 :
      if(match_cons(m_6, sym_None_0))
        {
          ATerm t_11 = t;
          int u_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = not_null(k_6);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = term_v_11;
                    return(t);
                  }
                  t = debug_1(t, z_0);
                  return(t);
                }
                t = if_verbose2_1(t, y_0);
                t = ReadFromFile_0(t);
              }
              LocalPopChoice(u_11);
            }
          else
            {
              t = t_11;
              t = g_7(t);
            }
        }
      else
        {
          t = g_7(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm j_70 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    ATerm w_11;
    w_11 = t;
    {
      ATerm p_7 = NULL;
      ATerm q_7 = NULL;
      t = term_q_10;
      {
        t = get_config_0(t);
        {
          q_7 = t;
          if(((p_7 != NULL) && (p_7 != q_7)))
            _fail(q_7);
          else
            p_7 = q_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_7), term_b_12);
        t = geq_0(t);
      }
    }
    t = w_11;
    t = j_70(t);
    return(t);
  }
  t = try_1(t, a_1);
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_74 (ATerm), ATerm l_74 (ATerm))
{
  ATerm u_7 = NULL,w_7 = NULL;
  ATerm f_12;
  f_12 = t;
  {
    ATerm v_7 = NULL;
    t = k_74(t);
    {
      v_7 = t;
      if(((u_7 != NULL) && (u_7 != v_7)))
        _fail(v_7);
      else
        u_7 = v_7;
    }
  }
  t = f_12;
  {
    ATerm x_7 = NULL;
    t = l_74(t);
    {
      x_7 = t;
      if(((w_7 != NULL) && (w_7 != x_7)))
        _fail(x_7);
      else
        w_7 = x_7;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_7), not_null(w_7));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm t_73 (ATerm))
{
  t = basename_0(t);
  {
    ATerm b_1 (ATerm t)
    {
      t = term_l_12;
      t = t_73(t);
      return(t);
    }
    t = split_2(t, _id, b_1);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  b_8 :
  if(((ATgetType(c_8) == AT_LIST) && ((ATermList) c_8 != ATempty)))
    {
      d_8 = ATgetFirst((ATermList) c_8);
      e_8 = (ATerm) ATgetNext((ATermList) c_8);
      t = not_null(e_8);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
  m_8 = t;
  l_8 :
  if(match_cons(m_8, sym__2))
    {
      n_8 = ATgetArgument(m_8, 0);
      o_8 = ATgetArgument(m_8, 1);
      {
        t = not_null(o_8);
        {
          ATerm w_8 (ATerm t)
          {
            ATerm m_12 = t;
            int n_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
                r_8 = t;
                k_8 :
                if(((ATgetType(r_8) == AT_LIST) && ((ATermList) r_8 != ATempty)))
                  {
                    s_8 = ATgetFirst((ATermList) r_8);
                    t_8 = (ATerm) ATgetNext((ATermList) r_8);
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_8)), term_o_12), not_null(s_8));
                      {
                        t = concat_strings_0(t);
                        t = file_exists_0(t);
                      }
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(n_12);
              }
            else
              {
                t = m_12;
                {
                  t = Tl_0(t);
                  t = w_8(t);
                }
              }
            return(t);
          }
          t = w_8(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_module_ext_1 (ATerm t, ATerm x_90 (ATerm))
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym__2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      {
        ATerm n_9 = NULL,p_9 = NULL;
        t = not_null(k_9);
        {
          ATerm c_1 (ATerm t)
          {
            t = not_null(j_9);
            return(t);
          }
          t = guarantee_extension_1(t, c_1);
          {
            ATerm z_12;
            z_12 = t;
            {
              ATerm o_9 = NULL;
              o_9 = t;
              if(((n_9 != NULL) && (n_9 != o_9)))
                _fail(o_9);
              else
                n_9 = o_9;
            }
            t = z_12;
            {
              ATerm q_9 = NULL;
              t = x_90(t);
              {
                q_9 = t;
                if(((p_9 != NULL) && (p_9 != q_9)))
                  _fail(q_9);
                else
                  p_9 = q_9;
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(p_9));
                {
                  t = find_in_path_0(t);
                  {
                    ATerm a_13 = t;
                    int b_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_9 = NULL,t_9 = NULL;
                        ATerm c_13;
                        c_13 = t;
                        {
                          ATerm s_9 = NULL;
                          s_9 = t;
                          if(((r_9 != NULL) && (r_9 != s_9)))
                            _fail(s_9);
                          else
                            r_9 = s_9;
                        }
                        t = c_13;
                        {
                          ATerm u_9 = NULL,w_9 = NULL,y_9 = NULL,a_10 = NULL;
                          ATerm d_13;
                          d_13 = t;
                          {
                            ATerm v_9 = NULL;
                            v_9 = t;
                            if(((u_9 != NULL) && (u_9 != v_9)))
                              _fail(v_9);
                            else
                              u_9 = v_9;
                          }
                          t = d_13;
                          {
                            ATerm e_13;
                            e_13 = t;
                            {
                              ATerm x_9 = NULL;
                              t = basename_0(t);
                              {
                                ATerm d_1 (ATerm t)
                                {
                                  t = term_f_13;
                                  return(t);
                                }
                                t = guarantee_extension_1(t, d_1);
                                {
                                  x_9 = t;
                                  if(((w_9 != NULL) && (w_9 != x_9)))
                                    _fail(x_9);
                                  else
                                    w_9 = x_9;
                                }
                              }
                            }
                            t = e_13;
                            {
                              ATerm z_9 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Ext_1, not_null(j_9));
                              {
                                ATerm e_1 (ATerm t)
                                {
                                  ATerm h_1 (ATerm t)
                                  {
                                    t = term_g_13;
                                    return(t);
                                  }
                                  t = debug_1(t, h_1);
                                  return(t);
                                }
                                t = if_verbose5_1(t, e_1);
                                {
                                  t = get_config_0(t);
                                  {
                                    ATerm i_1 (ATerm t)
                                    {
                                      ATerm j_1 (ATerm t)
                                      {
                                        t = term_o_13;
                                        return(t);
                                      }
                                      t = debug_1(t, j_1);
                                      return(t);
                                    }
                                    t = if_verbose5_1(t, i_1);
                                    {
                                      z_9 = t;
                                      if(((y_9 != NULL) && (y_9 != z_9)))
                                        _fail(z_9);
                                      else
                                        y_9 = z_9;
                                    }
                                  }
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(u_9), not_null(w_9), not_null(y_9));
                                {
                                  t = parse_file_1(t, x_90);
                                  {
                                    a_10 = t;
                                    if(((t_9 != NULL) && (t_9 != a_10)))
                                      _fail(a_10);
                                    else
                                      t_9 = a_10;
                                  }
                                }
                              }
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_9), not_null(t_9));
                        }
                        LocalPopChoice(b_13);
                      }
                    else
                      {
                        t = a_13;
                        {
                          ATerm b_10 = NULL;
                          ATerm c_10 = NULL;
                          c_10 = t;
                          if(((b_10 != NULL) && (b_10 != c_10)))
                            _fail(c_10);
                          else
                            b_10 = c_10;
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_10)), term_p_13);
                            t = fatal_error_0(t);
                          }
                        }
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
ATerm table_keys_0 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  t = SSL_table_keys(not_null(n_10));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  {
    t = table_keys_0(t);
    {
      ATerm k_1 (ATerm t)
      {
        ATerm v_10 = NULL;
        ATerm x_10 = NULL;
        v_10 = t;
        {
          ATerm y_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_10), not_null(v_10));
          {
            t = table_get_0(t);
            {
              y_10 = t;
              if(((x_10 != NULL) && (x_10 != y_10)))
                _fail(y_10);
              else
                x_10 = y_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), not_null(x_10));
        }
        return(t);
      }
      t = map_1(t, k_1);
    }
  }
  return(t);
}
ATerm get_config_keys_1 (ATerm t, ATerm s_63 (ATerm))
{
  t = term_q_13;
  {
    t = table_getlist_0(t);
    {
      ATerm l_1 (ATerm t)
      {
        t = _2(t, s_63, _id);
        t = Fst_0(t);
        return(t);
      }
      t = filter_1(t, l_1);
    }
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm w_90 (ATerm))
{
  ATerm h_11 = NULL;
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL;
      i_11 = t;
      {
        if(((h_11 != NULL) && (h_11 != i_11)))
          _fail(i_11);
        else
          h_11 = i_11;
        {
          ATerm m_1 (ATerm t)
          {
            ATerm j_11 = NULL,k_11 = NULL;
            j_11 = t;
            e_11 :
            if(match_cons(j_11, sym_Ext_1))
              {
                k_11 = ATgetArgument(j_11, 0);
                t = not_null(k_11);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = get_config_keys_1(t, m_1);
          {
            ATerm n_1 (ATerm t)
            {
              ATerm m_11 = NULL;
              ATerm n_11 = NULL;
              n_11 = t;
              if(((m_11 != NULL) && (m_11 != n_11)))
                _fail(n_11);
              else
                m_11 = n_11;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_11), not_null(h_11));
                t = get_module_ext_1(t, w_90);
              }
              return(t);
            }
            t = fetch_elem_1(t, n_1);
          }
        }
      }
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm o_11 = NULL;
        ATerm p_11 = NULL;
        p_11 = t;
        if(((o_11 != NULL) && (o_11 != p_11)))
          _fail(p_11);
        else
          o_11 = p_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_13), not_null(o_11)), term_x_13);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm a_12 = NULL;
  ATerm c_12 = NULL,d_12 = NULL;
  a_12 = t;
  {
    ATerm e_12 = NULL;
    ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
    t = not_null(a_12);
    {
      e_12 = t;
      {
        t = SSL_explode_term(not_null(e_12));
        {
          g_12 = t;
          x_11 :
          if(match_cons(g_12, sym__2))
            {
              h_12 = ATgetArgument(g_12, 0);
              i_12 = ATgetArgument(g_12, 1);
              y_11 :
              if(match_string(h_12, ""))
                {
                  z_11 :
                  if(((ATgetType(i_12) == AT_LIST) && ((ATermList) i_12 != ATempty)))
                    {
                      j_12 = ATgetFirst((ATermList) i_12);
                      k_12 = (ATerm) ATgetNext((ATermList) i_12);
                      {
                        if(((d_12 != NULL) && (d_12 != j_12)))
                          _fail(j_12);
                        else
                          d_12 = j_12;
                        if(((c_12 != NULL) && (c_12 != k_12)))
                          _fail(k_12);
                        else
                          c_12 = k_12;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(d_12);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
  r_12 = t;
  p_12 :
  if(match_cons(r_12, sym__5))
    {
      s_12 = ATgetArgument(r_12, 0);
      v_12 = ATgetArgument(r_12, 1);
      w_12 = ATgetArgument(r_12, 2);
      x_12 = ATgetArgument(r_12, 3);
      y_12 = ATgetArgument(r_12, 4);
      q_12 :
      if(((ATgetType(s_12) == AT_LIST) && ((ATermList) s_12 != ATempty)))
        {
          t_12 = ATgetFirst((ATermList) s_12);
          u_12 = (ATerm) ATgetNext((ATermList) s_12);
          t = (ATerm) ATmakeAppl(sym__5, not_null(u_12), not_null(v_12), not_null(w_12), not_null(x_12), (ATerm) ATinsert(CheckATermList(not_null(y_12)), not_null(t_12)));
        }
      else
        {
          _fail(t);
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
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
  j_13 = t;
  h_13 :
  if(match_cons(j_13, sym__2))
    {
      k_13 = ATgetArgument(j_13, 0);
      l_13 = ATgetArgument(j_13, 1);
      i_13 :
      if(((ATgetType(l_13) == AT_LIST) && ((ATermList) l_13 != ATempty)))
        {
          m_13 = ATgetFirst((ATermList) l_13);
          n_13 = (ATerm) ATgetNext((ATermList) l_13);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_13)), not_null(m_13)), not_null(n_13));
        }
      else
        {
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
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym__2))
    {
      v_13 = ATgetArgument(u_13, 0);
      w_13 = ATgetArgument(u_13, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_13)), not_null(v_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  e_14 = t;
  b_14 :
  if(match_cons(e_14, sym__2))
    {
      f_14 = ATgetArgument(e_14, 0);
      i_14 = ATgetArgument(e_14, 1);
      c_14 :
      if(((ATgetType(f_14) == AT_LIST) && ((ATermList) f_14 != ATempty)))
        {
          g_14 = ATgetFirst((ATermList) f_14);
          h_14 = (ATerm) ATgetNext((ATermList) f_14);
          d_14 :
          if(((ATgetType(i_14) == AT_LIST) && ((ATermList) i_14 != ATempty)))
            {
              j_14 = ATgetFirst((ATermList) i_14);
              k_14 = (ATerm) ATgetNext((ATermList) i_14);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_14), not_null(j_14)), (ATerm) ATmakeAppl(sym__2, not_null(h_14), not_null(k_14)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
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
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  r_14 :
  if(match_cons(u_14, sym__2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      s_14 :
      if(((ATermList) v_14 == ATempty))
        {
          t_14 :
          if(((ATermList) w_14 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm b_80 (ATerm))
{
  ATerm y_14 (ATerm t)
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_79(t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        {
          t = z_79(t);
          {
            t = _2(t, b_80, y_14);
            t = a_80(t);
          }
        }
      }
    return(t);
  }
  t = y_14(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm d_80 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, d_80);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  j_15 = t;
  h_15 :
  if(((ATgetType(j_15) == AT_LIST) && ((ATermList) j_15 != ATempty)))
    {
      k_15 = ATgetFirst((ATermList) j_15);
      n_15 = (ATerm) ATgetNext((ATermList) j_15);
      i_15 :
      if(match_cons(k_15, sym__2))
        {
          l_15 = ATgetArgument(k_15, 0);
          m_15 = ATgetArgument(k_15, 1);
          {
            ATerm r_15 = NULL,s_15 = NULL,y_15 = NULL,e_16 = NULL;
            ATerm l_14;
            l_14 = t;
            {
              ATerm t_15 = NULL;
              ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
              t = not_null(m_15);
              {
                t_15 = t;
                {
                  t = SSL_explode_term(not_null(t_15));
                  {
                    v_15 = t;
                    c_15 :
                    if(match_cons(v_15, sym__2))
                      {
                        w_15 = ATgetArgument(v_15, 0);
                        x_15 = ATgetArgument(v_15, 1);
                        {
                          if(((r_15 != NULL) && (r_15 != w_15)))
                            _fail(w_15);
                          else
                            r_15 = w_15;
                          if(((s_15 != NULL) && (s_15 != x_15)))
                            _fail(x_15);
                          else
                            s_15 = x_15;
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
            t = l_14;
            {
              ATerm m_14;
              m_14 = t;
              {
                ATerm z_15 = NULL;
                ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
                t = not_null(l_15);
                {
                  z_15 = t;
                  {
                    t = SSL_explode_term(not_null(z_15));
                    {
                      b_16 = t;
                      f_15 :
                      if(match_cons(b_16, sym__2))
                        {
                          c_16 = ATgetArgument(b_16, 0);
                          d_16 = ATgetArgument(b_16, 1);
                          {
                            if(((r_15 != NULL) && (r_15 != c_16)))
                              _fail(c_16);
                            else
                              r_15 = c_16;
                            if(((y_15 != NULL) && (y_15 != d_16)))
                              _fail(d_16);
                            else
                              y_15 = d_16;
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
              t = m_14;
              {
                ATerm f_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_15), not_null(s_15));
                {
                  t = zip_1(t, _id);
                  {
                    f_16 = t;
                    if(((e_16 != NULL) && (e_16 != f_16)))
                      _fail(f_16);
                    else
                      e_16 = f_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), not_null(n_15));
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
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  p_16 = t;
  n_16 :
  if(((ATgetType(p_16) == AT_LIST) && ((ATermList) p_16 != ATempty)))
    {
      q_16 = ATgetFirst((ATermList) p_16);
      t_16 = (ATerm) ATgetNext((ATermList) p_16);
      o_16 :
      if(match_cons(q_16, sym__2))
        {
          r_16 = ATgetArgument(q_16, 0);
          s_16 = ATgetArgument(q_16, 1);
          {
            ATerm v_16 = NULL;
            if(((r_16 != NULL) && (r_16 != s_16)))
              _fail(s_16);
            else
              r_16 = s_16;
            {
              if(((v_16 != NULL) && (v_16 != t_16)))
                _fail(t_16);
              else
                v_16 = t_16;
              t = not_null(v_16);
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
ATerm eq_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym__2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      if(((a_17 != NULL) && (a_17 != b_17)))
        _fail(b_17);
      else
        a_17 = b_17;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_77 (ATerm), ATerm e_77 (ATerm))
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  h_17 = t;
  g_17 :
  if(((ATgetType(h_17) == AT_LIST) && ((ATermList) h_17 != ATempty)))
    {
      i_17 = ATgetFirst((ATermList) h_17);
      j_17 = (ATerm) ATgetNext((ATermList) h_17);
      {
        t = e_77(t);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm m_17 = NULL;
            m_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_17), not_null(m_17));
              t = d_77(t);
            }
            return(t);
          }
          t = fetch_1(t, o_1);
        }
        t = not_null(j_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
  s_17 = t;
  r_17 :
  if(match_cons(s_17, sym__2))
    {
      t_17 = ATgetArgument(s_17, 0);
      u_17 = ATgetArgument(s_17, 1);
      {
        t = not_null(t_17);
        {
          ATerm y_17 (ATerm t)
          {
            ATerm n_14 = t;
            int o_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(o_14);
              }
            else
              {
                t = n_14;
                {
                  ATerm p_14 = t;
                  int q_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_1 (ATerm t)
                      {
                        t = not_null(u_17);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_77, p_1);
                      t = y_17(t);
                      LocalPopChoice(q_14);
                    }
                  else
                    {
                      t = p_14;
                      t = Cons_2(t, _id, y_17);
                    }
                }
              }
            return(t);
          }
          t = y_17(t);
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
  ATerm x_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(z_14);
    }
  else
    {
      t = x_14;
      {
        ATerm q_1 (ATerm t)
        {
          ATerm a_18 = NULL;
          a_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(a_18));
          return(t);
        }
        ATerm r_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm s_1 (ATerm t)
        {
          ATerm a_15 = t;
          int b_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_1 (ATerm t)
              {
                ATerm d_15 = t;
                int e_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(e_15);
                  }
                else
                  {
                    t = d_15;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, t_1);
              LocalPopChoice(b_15);
            }
          else
            {
              t = a_15;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, q_1, r_1, s_1);
      }
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm i_64 (ATerm))
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  m_18 = t;
  k_18 :
  if(match_cons(m_18, sym__5))
    {
      n_18 = ATgetArgument(m_18, 0);
      q_18 = ATgetArgument(m_18, 1);
      r_18 = ATgetArgument(m_18, 2);
      s_18 = ATgetArgument(m_18, 3);
      t_18 = ATgetArgument(m_18, 4);
      l_18 :
      if(((ATgetType(n_18) == AT_LIST) && ((ATermList) n_18 != ATempty)))
        {
          o_18 = ATgetFirst((ATermList) n_18);
          p_18 = (ATerm) ATgetNext((ATermList) n_18);
          {
            ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,g_19 = NULL,i_19 = NULL,k_19 = NULL;
            ATerm g_15;
            g_15 = t;
            {
              ATerm d_19 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), not_null(r_18));
              {
                ATerm e_19 = NULL;
                t = g_64(t);
                {
                  d_19 = t;
                  {
                    if(((a_19 != NULL) && (a_19 != d_19)))
                      _fail(d_19);
                    else
                      a_19 = d_19;
                    {
                      t = not_null(a_19);
                      {
                        ATerm f_19 = NULL;
                        t = h_64(t);
                        {
                          e_19 = t;
                          {
                            if(((b_19 != NULL) && (b_19 != e_19)))
                              _fail(e_19);
                            else
                              b_19 = e_19;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(q_18));
                              {
                                t = diff_0(t);
                                {
                                  f_19 = t;
                                  if(((c_19 != NULL) && (c_19 != f_19)))
                                    _fail(f_19);
                                  else
                                    c_19 = f_19;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = g_15;
            {
              ATerm o_15;
              o_15 = t;
              {
                ATerm h_19 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), not_null(p_18));
                {
                  t = conc_0(t);
                  {
                    h_19 = t;
                    if(((g_19 != NULL) && (g_19 != h_19)))
                      _fail(h_19);
                    else
                      g_19 = h_19;
                  }
                }
              }
              t = o_15;
              {
                ATerm p_15;
                p_15 = t;
                {
                  ATerm j_19 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), not_null(q_18));
                  {
                    t = conc_0(t);
                    {
                      j_19 = t;
                      if(((i_19 != NULL) && (i_19 != j_19)))
                        _fail(j_19);
                      else
                        i_19 = j_19;
                    }
                  }
                }
                t = p_15;
                {
                  ATerm l_19 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(o_18), not_null(a_19), not_null(s_18));
                  {
                    t = i_64(t);
                    {
                      l_19 = t;
                      if(((k_19 != NULL) && (k_19 != l_19)))
                        _fail(l_19);
                      else
                        k_19 = l_19;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(g_19), not_null(i_19), not_null(r_18), not_null(k_19), not_null(t_18));
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
ATerm GnExit_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
  w_19 = t;
  u_19 :
  if(match_cons(w_19, sym__5))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      z_19 = ATgetArgument(w_19, 2);
      a_20 = ATgetArgument(w_19, 3);
      b_20 = ATgetArgument(w_19, 4);
      v_19 :
      if(((ATermList) x_19 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), not_null(b_20));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym__3))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      m_20 = ATgetArgument(j_20, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(k_20), not_null(k_20), not_null(l_20), not_null(m_20), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm a_90 (ATerm), ATerm b_90 (ATerm))
{
  ATerm r_20 (ATerm t)
  {
    ATerm q_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_90(t);
        LocalPopChoice(u_15);
      }
    else
      {
        t = q_15;
        {
          t = b_90(t);
          t = r_20(t);
        }
      }
    return(t);
  }
  t = r_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm f_90 (ATerm))
{
  t = d_90(t);
  t = while_not_2(t, e_90, f_90);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm m_64 (ATerm), ATerm n_64 (ATerm), ATerm o_64 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm a_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, m_64, n_64, o_64);
        LocalPopChoice(g_16);
      }
    else
      {
        t = a_16;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, u_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm d_65 (ATerm))
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
  t = graph_nodes_undef_roots_3(t, b_65, c_65, d_65);
  {
    u_20 = t;
    t_20 :
    if(match_cons(u_20, sym__2))
      {
        v_20 = ATgetArgument(u_20, 0);
        w_20 = ATgetArgument(u_20, 1);
        t = not_null(v_20);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm pack_stratego_1 (ATerm t, ATerm v_90 (ATerm))
{
  ATerm f_21 = NULL;
  f_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(f_21)), term_i_16), term_h_16), term_l_12, (ATerm) ATempty);
    {
      ATerm v_1 (ATerm t)
      {
        t = Fst_0(t);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm h_21 = NULL;
            ATerm i_21 = NULL;
            t = term_l_12;
            {
              t = v_90(t);
              {
                i_21 = t;
                if(((h_21 != NULL) && (h_21 != i_21)))
                  _fail(i_21);
                else
                  h_21 = i_21;
              }
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(h_21)), term_j_16);
            return(t);
          }
          t = get_module_1(t, x_1);
        }
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,p_21 = NULL;
        j_21 = t;
        e_21 :
        if(match_cons(j_21, sym__3))
          {
            k_21 = ATgetArgument(j_21, 0);
            l_21 = ATgetArgument(j_21, 1);
            p_21 = ATgetArgument(j_21, 2);
            t = (ATerm) ATinsert(CheckATermList(not_null(p_21)), not_null(l_21));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = graph_nodes_roots_3(t, v_1, get_stratego_imports_0, w_1);
      {
        t = unzip_0(t);
        t = _2(t, _id, flatten_stratego_0);
      }
    }
  }
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_22 = NULL;
  e_22 = t;
  t = SSL_exit(not_null(e_22));
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  t = SSL_TicksToSeconds(not_null(n_22));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_23 = NULL,y_23 = NULL,z_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym__2))
    {
      y_23 = ATgetArgument(l_23, 0);
      z_23 = ATgetArgument(l_23, 1);
      {
        ATerm k_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_23), not_null(z_23));
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            t = SSL_addr(not_null(y_23), not_null(z_23));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm))
{
  ATerm m_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_75(t);
      LocalPopChoice(u_16);
    }
  else
    {
      t = m_16;
      {
        ATerm g_24 = NULL,h_24 = NULL,s_24 = NULL;
        g_24 = t;
        f_24 :
        if(((ATgetType(g_24) == AT_LIST) && ((ATermList) g_24 != ATempty)))
          {
            h_24 = ATgetFirst((ATermList) g_24);
            s_24 = (ATerm) ATgetNext((ATermList) g_24);
            {
              ATerm x_24 = NULL;
              ATerm y_24 = NULL;
              t = not_null(s_24);
              {
                t = foldr_2(t, w_75, x_75);
                {
                  y_24 = t;
                  if(((x_24 != NULL) && (x_24 != y_24)))
                    _fail(y_24);
                  else
                    x_24 = y_24;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_24), not_null(x_24));
                t = x_75(t);
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
ATerm crush_2 (ATerm t, ATerm o_77 (ATerm), ATerm p_77 (ATerm))
{
  ATerm p_25 = NULL;
  ATerm r_25 = NULL;
  p_25 = t;
  {
    ATerm s_25 = NULL;
    ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
    t = not_null(p_25);
    {
      s_25 = t;
      {
        t = SSL_explode_term(not_null(s_25));
        {
          u_25 = t;
          o_25 :
          if(match_cons(u_25, sym__2))
            {
              v_25 = ATgetArgument(u_25, 0);
              w_25 = ATgetArgument(u_25, 1);
              if(((r_25 != NULL) && (r_25 != w_25)))
                _fail(w_25);
              else
                r_25 = w_25;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_25);
      t = foldr_2(t, o_77, p_77);
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
    ATerm y_1 (ATerm t)
    {
      t = term_w_10;
      return(t);
    }
    t = crush_2(t, y_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm w_16;
    w_16 = t;
    {
      ATerm b_26 = NULL;
      ATerm c_26 = NULL;
      t = term_q_10;
      {
        t = get_config_0(t);
        {
          c_26 = t;
          if(((b_26 != NULL) && (b_26 != c_26)))
            _fail(c_26);
          else
            b_26 = c_26;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_26), term_j_10);
        t = geq_0(t);
      }
    }
    t = w_16;
    t = f_70(t);
    return(t);
  }
  t = try_1(t, z_1);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  t = SSL_close_file(not_null(f_26));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm f_83 (ATerm))
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  l_26 = t;
  k_26 :
  if(((ATgetType(l_26) == AT_LIST) && ((ATermList) l_26 != ATempty)))
    {
      m_26 = ATgetFirst((ATermList) l_26);
      n_26 = (ATerm) ATgetNext((ATermList) l_26);
      {
        ATerm q_26 = NULL;
        ATerm r_26 = NULL;
        t = term_l_12;
        {
          t = f_83(t);
          {
            r_26 = t;
            if(((q_26 != NULL) && (q_26 != r_26)))
              _fail(r_26);
            else
              q_26 = r_26;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_26)), not_null(m_26)), not_null(q_26));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm g_83 (ATerm))
{
  ATerm x_16 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = x_16;
      {
        ATerm a_2 (ATerm t)
        {
          ATerm d_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_17);
            }
          else
            {
              t = d_17;
              {
                t = Cons_2(t, _id, a_2);
                t = Sep_1(t, g_83);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, a_2);
      }
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm p_72 (ATerm))
{
  ATerm f_17;
  f_17 = t;
  {
    t = p_72(t);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_k_17;
        return(t);
      }
      t = debug_1(t, b_2);
    }
  }
  t = f_17;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL;
  ATerm l_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
      b_27 = t;
      w_26 :
      if(match_cons(b_27, sym__2))
        {
          c_27 = ATgetArgument(b_27, 0);
          d_27 = ATgetArgument(b_27, 1);
          {
            if(((a_27 != NULL) && (a_27 != c_27)))
              _fail(c_27);
            else
              a_27 = c_27;
            {
              if(((z_26 != NULL) && (z_26 != d_27)))
                _fail(d_27);
              else
                z_26 = d_27;
              t = SSL_open_file(not_null(a_27), not_null(z_26));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_17);
    }
  else
    {
      t = l_17;
      {
        ATerm e_27 = NULL;
        ATerm f_27 = NULL;
        ATerm c_2 (ATerm t)
        {
          t = term_o_17;
          return(t);
        }
        t = obsolete_1(t, c_2);
        {
          e_27 = t;
          {
            if(((a_27 != NULL) && (a_27 != e_27)))
              _fail(e_27);
            else
              a_27 = e_27;
            {
              ATerm p_17;
              p_17 = t;
              {
                ATerm g_27 = NULL;
                t = term_q_17;
                {
                  g_27 = t;
                  if(((f_27 != NULL) && (f_27 != g_27)))
                    _fail(g_27);
                  else
                    f_27 = g_27;
                }
              }
              t = p_17;
              t = SSL_open_file(not_null(a_27), not_null(f_27));
            }
          }
        }
      }
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym__2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_27)), term_j_16), not_null(n_27));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_dep_file_1 (ATerm t, ATerm f_64 (ATerm))
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
  o_28 = t;
  n_28 :
  if(match_cons(o_28, sym__2))
    {
      p_28 = ATgetArgument(o_28, 0);
      q_28 = ATgetArgument(o_28, 1);
      {
        ATerm t_28 = NULL,u_28 = NULL;
        ATerm v_28 = NULL;
        t = not_null(p_28);
        {
          ATerm w_28 = NULL,y_28 = NULL;
          t = f_64(t);
          {
            v_28 = t;
            {
              if(((t_28 != NULL) && (t_28 != v_28)))
                _fail(v_28);
              else
                t_28 = v_28;
              {
                ATerm x_28 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_28), term_v_17);
                {
                  t = add_extension_0(t);
                  {
                    x_28 = t;
                    if(((w_28 != NULL) && (w_28 != x_28)))
                      _fail(x_28);
                    else
                      w_28 = x_28;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), term_q_17);
                  {
                    ATerm z_28 = NULL;
                    t = open_file_0(t);
                    {
                      y_28 = t;
                      {
                        if(((u_28 != NULL) && (u_28 != y_28)))
                          _fail(y_28);
                        else
                          u_28 = y_28;
                        {
                          ATerm a_29 = NULL;
                          t = (ATerm) ATinsert(CheckATermList(not_null(q_28)), term_w_17);
                          {
                            ATerm d_2 (ATerm t)
                            {
                              t = term_x_17;
                              return(t);
                            }
                            t = separate_by_1(t, d_2);
                            {
                              a_29 = t;
                              if(((z_28 != NULL) && (z_28 != a_29)))
                                _fail(a_29);
                              else
                                z_28 = a_29;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_28), (ATerm) ATinsert(CheckATermList(not_null(z_28)), not_null(t_28)));
                            {
                              t = printnl_0(t);
                              {
                                t = not_null(u_28);
                                t = close_file_0(t);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_28), not_null(q_28));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_70 (ATerm))
{
  t = fetch_1(t, d_70);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_cons(j_29, sym__2))
    {
      k_29 = ATgetArgument(j_29, 0);
      l_29 = ATgetArgument(j_29, 1);
      t = SSL_WriteToTextFile(not_null(k_29), not_null(l_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,v_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_cons(r_29, sym__2))
    {
      s_29 = ATgetArgument(r_29, 0);
      v_29 = ATgetArgument(r_29, 1);
      t = SSL_WriteToBinaryFile(not_null(s_29), not_null(v_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm o_81 (ATerm))
{
  ATerm z_29 (ATerm t)
  {
    ATerm z_17 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = z_17;
        t = Cons_2(t, o_81, z_29);
      }
    return(t);
  }
  t = z_29(t);
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm d_30 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm e_30 = NULL,f_30 = NULL;
    e_30 = t;
    c_30 :
    if(match_cons(e_30, sym_Program_1))
      {
        f_30 = ATgetArgument(e_30, 0);
        if(((d_30 != NULL) && (d_30 != f_30)))
          _fail(f_30);
        else
          d_30 = f_30;
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = option_defined_1(t, e_2);
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_18), term_e_18), term_d_18), not_null(d_30)), term_c_18));
    {
      t = printnl_0(t);
      {
        t = term_j_10;
        t = exit_0(t);
      }
    }
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_30 = NULL;
  l_30 = t;
  k_30 :
  if(match_cons(l_30, sym_Version_0))
    {
      ATerm n_30 = NULL,p_30 = NULL;
      ATerm g_18;
      g_18 = t;
      {
        ATerm o_30 = NULL;
        t = SSLgetAnnotations(not_null(l_30));
        {
          o_30 = t;
          if(((n_30 != NULL) && (n_30 != o_30)))
            _fail(o_30);
          else
            n_30 = o_30;
        }
      }
      t = g_18;
      {
        ATerm q_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_30));
        {
          q_30 = t;
          if(((p_30 != NULL) && (p_30 != q_30)))
            _fail(q_30);
          else
            p_30 = q_30;
        }
        t = not_null(p_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_71 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        {
          ATerm j_18 = t;
          int u_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_18);
            }
          else
            {
              t = j_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, i_2);
  t = q_71(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_63 (ATerm))
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  g_31 :
  if(match_cons(j_31, sym__2))
    {
      k_31 = ATgetArgument(j_31, 0);
      l_31 = ATgetArgument(j_31, 1);
      {
        ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
        ATerm v_18;
        v_18 = t;
        {
          ATerm r_31 = NULL;
          ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
          t = z_63(t);
          {
            r_31 = t;
            {
              if(((o_31 != NULL) && (o_31 != r_31)))
                _fail(r_31);
              else
                o_31 = r_31;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_31), not_null(k_31), not_null(l_31));
                {
                  t = table_push_0(t);
                  {
                    ATerm w_18 = t;
                    int x_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_31), term_y_18);
                        t = table_get_0(t);
                        LocalPopChoice(x_18);
                      }
                    else
                      {
                        t = w_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      s_31 = t;
                      f_31 :
                      if(((ATgetType(s_31) == AT_LIST) && ((ATermList) s_31 != ATempty)))
                        {
                          t_31 = ATgetFirst((ATermList) s_31);
                          u_31 = (ATerm) ATgetNext((ATermList) s_31);
                          {
                            if(((p_31 != NULL) && (p_31 != t_31)))
                              _fail(t_31);
                            else
                              p_31 = t_31;
                            {
                              if(((q_31 != NULL) && (q_31 != u_31)))
                                _fail(u_31);
                              else
                                q_31 = u_31;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_31), term_y_18, (ATerm) ATinsert(CheckATermList(not_null(q_31)), (ATerm) ATinsert(CheckATermList(not_null(p_31)), not_null(k_31))));
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
        t = v_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  f_32 :
  if(match_cons(g_32, sym__2))
    {
      h_32 = ATgetArgument(g_32, 0);
      i_32 = ATgetArgument(g_32, 1);
      {
        ATerm l_32 = NULL;
        ATerm m_32 = NULL,o_32 = NULL;
        ATerm n_32 = NULL;
        t = not_null(h_32);
        {
          ATerm z_18 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(m_19);
            }
          else
            {
              t = z_18;
              t = (ATerm) ATempty;
            }
          {
            n_32 = t;
            if(((m_32 != NULL) && (m_32 != n_32)))
              _fail(n_32);
            else
              m_32 = n_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_32), not_null(m_32));
          {
            t = conc_0(t);
            {
              o_32 = t;
              if(((l_32 != NULL) && (l_32 != o_32)))
                _fail(o_32);
              else
                l_32 = o_32;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_13, not_null(h_32), not_null(l_32));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pack_options_0 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        ATerm c_33 = NULL;
        c_33 = t;
        s_32 :
        if(!(match_string(c_33, "-I")))
          {
            if(!(match_string(c_33, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_2 (ATerm t)
      {
        ATerm f_33 = NULL;
        ATerm p_19;
        p_19 = t;
        {
          ATerm d_33 = NULL;
          ATerm e_33 = NULL;
          e_33 = t;
          if(((d_33 != NULL) && (d_33 != e_33)))
            _fail(e_33);
          else
            d_33 = e_33;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_q_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_33)), term_q_11));
            t = extend_config_0(t);
          }
        }
        t = p_19;
        {
          ATerm g_33 = NULL;
          g_33 = t;
          if(((f_33 != NULL) && (f_33 != g_33)))
            _fail(g_33);
          else
            f_33 = g_33;
          t = (ATerm) ATmakeAppl(sym_Include_1, not_null(f_33));
        }
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = term_q_19;
        return(t);
      }
      t = ArgOption_3(t, j_2, n_2, q_2);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              ATerm h_33 = NULL;
              h_33 = t;
              v_32 :
              if(!(match_string(h_33, "-nodep")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              t = term_d_20;
              t = set_config_0(t);
              t = term_e_20;
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              t = term_t_19;
              return(t);
            }
            t = Option_3(t, r_2, s_2, t_2);
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            {
              ATerm f_20 = t;
              int g_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_2 (ATerm t)
                  {
                    ATerm i_33 = NULL;
                    i_33 = t;
                    w_32 :
                    if(!(match_string(i_33, "-dep")))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  ATerm w_2 (ATerm t)
                  {
                    ATerm l_33 = NULL;
                    ATerm h_20;
                    h_20 = t;
                    {
                      ATerm j_33 = NULL;
                      ATerm k_33 = NULL;
                      k_33 = t;
                      if(((j_33 != NULL) && (j_33 != k_33)))
                        _fail(k_33);
                      else
                        j_33 = k_33;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_n_20, not_null(j_33));
                        t = set_config_0(t);
                      }
                    }
                    t = h_20;
                    {
                      l_33 = t;
                      t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(l_33));
                    }
                    return(t);
                  }
                  ATerm z_2 (ATerm t)
                  {
                    t = term_o_20;
                    return(t);
                  }
                  t = ArgOption_3(t, u_2, w_2, z_2);
                  LocalPopChoice(g_20);
                }
              else
                {
                  t = f_20;
                  {
                    ATerm b_3 (ATerm t)
                    {
                      ATerm n_33 = NULL;
                      n_33 = t;
                      z_32 :
                      if(!(match_string(n_33, "--prefix")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm c_3 (ATerm t)
                    {
                      ATerm q_33 = NULL;
                      ATerm p_20;
                      p_20 = t;
                      {
                        ATerm o_33 = NULL;
                        ATerm p_33 = NULL;
                        p_33 = t;
                        if(((o_33 != NULL) && (o_33 != p_33)))
                          _fail(p_33);
                        else
                          o_33 = p_33;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_q_20, not_null(o_33));
                          t = set_config_0(t);
                        }
                      }
                      t = p_20;
                      {
                        q_33 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_s_20, (ATerm) ATmakeAppl(sym_Defined_2, term_x_20, not_null(q_33)));
                          {
                            ATerm e_3 (ATerm t)
                            {
                              t = term_y_20;
                              return(t);
                            }
                            t = assert_1(t, e_3);
                          }
                          t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(q_33));
                        }
                      }
                      return(t);
                    }
                    ATerm d_3 (ATerm t)
                    {
                      t = term_q_20;
                      return(t);
                    }
                    t = ArgOption_3(t, b_3, c_3, d_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_34 = NULL;
  f_34 = t;
  t = SSL_string_to_int(not_null(f_34));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  s_34 = t;
  q_34 :
  if(match_string(s_34, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_34) == AT_LIST) && ((ATermList) s_34 != ATempty)))
        {
          t_34 = ATgetFirst((ATermList) s_34);
          u_34 = (ATerm) ATgetNext((ATermList) s_34);
          r_34 :
          if(((ATgetType(u_34) == AT_LIST) && ((ATermList) u_34 != ATempty)))
            {
              v_34 = ATgetFirst((ATermList) u_34);
              w_34 = (ATerm) ATgetNext((ATermList) u_34);
              {
                ATerm c_35 = NULL;
                ATerm z_20;
                z_20 = t;
                {
                  t = not_null(t_34);
                  t = j_0(t);
                }
                t = z_20;
                {
                  ATerm d_35 = NULL;
                  t = not_null(v_34);
                  {
                    t = k_0(t);
                    {
                      d_35 = t;
                      if(((c_35 != NULL) && (c_35 != d_35)))
                        _fail(d_35);
                      else
                        c_35 = d_35;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_34)), not_null(c_35));
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
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_3 (ATerm t)
      {
        ATerm w_35 = NULL;
        w_35 = t;
        h_35 :
        if(!(match_string(w_35, "-i")))
          {
            if(!(match_string(w_35, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        ATerm b_36 = NULL;
        ATerm c_21;
        c_21 = t;
        {
          ATerm x_35 = NULL;
          ATerm y_35 = NULL;
          y_35 = t;
          if(((x_35 != NULL) && (x_35 != y_35)))
            _fail(y_35);
          else
            x_35 = y_35;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_r_11, not_null(x_35));
            t = set_config_0(t);
          }
        }
        t = c_21;
        {
          ATerm c_36 = NULL;
          c_36 = t;
          if(((b_36 != NULL) && (b_36 != c_36)))
            _fail(c_36);
          else
            b_36 = c_36;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_36));
        }
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        t = term_d_21;
        return(t);
      }
      t = ArgOption_3(t, p_3, q_3, r_3);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm g_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 (ATerm t)
            {
              ATerm d_36 = NULL;
              d_36 = t;
              k_35 :
              if(!(match_string(d_36, "-o")))
                {
                  if(!(match_string(d_36, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm t_3 (ATerm t)
            {
              ATerm j_36 = NULL;
              ATerm n_21;
              n_21 = t;
              {
                ATerm e_36 = NULL;
                ATerm g_36 = NULL;
                g_36 = t;
                if(((e_36 != NULL) && (e_36 != g_36)))
                  _fail(g_36);
                else
                  e_36 = g_36;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_11, not_null(e_36));
                  t = set_config_0(t);
                }
              }
              t = n_21;
              {
                ATerm k_36 = NULL;
                k_36 = t;
                if(((j_36 != NULL) && (j_36 != k_36)))
                  _fail(k_36);
                else
                  j_36 = k_36;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_36));
              }
              return(t);
            }
            ATerm u_3 (ATerm t)
            {
              t = term_o_21;
              return(t);
            }
            t = ArgOption_3(t, s_3, t_3, u_3);
            LocalPopChoice(m_21);
          }
        else
          {
            t = g_21;
            {
              ATerm q_21 = t;
              int r_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_3 (ATerm t)
                  {
                    ATerm l_36 = NULL;
                    l_36 = t;
                    n_35 :
                    if(!(match_string(l_36, "-S")))
                      {
                        if(!(match_string(l_36, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm a_4 (ATerm t)
                  {
                    t = term_s_21;
                    t = set_config_0(t);
                    t = term_t_21;
                    return(t);
                  }
                  ATerm b_4 (ATerm t)
                  {
                    t = term_u_21;
                    return(t);
                  }
                  t = Option_3(t, z_3, a_4, b_4);
                  LocalPopChoice(r_21);
                }
              else
                {
                  t = q_21;
                  {
                    ATerm v_21 = t;
                    int w_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_4 (ATerm t)
                        {
                          ATerm m_36 = NULL;
                          m_36 = t;
                          o_35 :
                          if(!(match_string(m_36, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm f_4 (ATerm t)
                        {
                          ATerm p_36 = NULL;
                          ATerm x_21;
                          x_21 = t;
                          {
                            ATerm n_36 = NULL;
                            ATerm o_36 = NULL;
                            t = string_to_int_0(t);
                            {
                              o_36 = t;
                              if(((n_36 != NULL) && (n_36 != o_36)))
                                _fail(o_36);
                              else
                                n_36 = o_36;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_q_10, not_null(n_36));
                              t = set_config_0(t);
                            }
                          }
                          t = x_21;
                          {
                            ATerm q_36 = NULL;
                            q_36 = t;
                            if(((p_36 != NULL) && (p_36 != q_36)))
                              _fail(q_36);
                            else
                              p_36 = q_36;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_36));
                          }
                          return(t);
                        }
                        ATerm g_4 (ATerm t)
                        {
                          t = term_y_21;
                          return(t);
                        }
                        t = ArgOption_3(t, c_4, f_4, g_4);
                        LocalPopChoice(w_21);
                      }
                    else
                      {
                        t = v_21;
                        {
                          ATerm z_21 = t;
                          int a_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_4 (ATerm t)
                              {
                                ATerm r_36 = NULL;
                                r_36 = t;
                                r_35 :
                                if(!(match_string(r_36, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm p_4 (ATerm t)
                              {
                                ATerm b_22;
                                b_22 = t;
                                {
                                  ATerm s_36 = NULL;
                                  ATerm t_36 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    t_36 = t;
                                    if(((s_36 != NULL) && (s_36 != t_36)))
                                      _fail(t_36);
                                    else
                                      s_36 = t_36;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(s_36));
                                    t = set_config_0(t);
                                  }
                                }
                                t = b_22;
                                return(t);
                              }
                              ATerm s_4 (ATerm t)
                              {
                                t = term_c_22;
                                return(t);
                              }
                              t = ArgOption_3(t, h_4, p_4, s_4);
                              LocalPopChoice(a_22);
                            }
                          else
                            {
                              t = z_21;
                              {
                                ATerm d_22 = t;
                                int f_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_4 (ATerm t)
                                    {
                                      ATerm u_36 = NULL;
                                      u_36 = t;
                                      t_35 :
                                      if(!(match_string(u_36, "-v")))
                                        {
                                          if(!(match_string(u_36, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm u_4 (ATerm t)
                                    {
                                      t = term_h_22;
                                      t = set_config_0(t);
                                      t = term_i_22;
                                      return(t);
                                    }
                                    ATerm v_4 (ATerm t)
                                    {
                                      t = term_j_22;
                                      return(t);
                                    }
                                    t = Option_3(t, t_4, u_4, v_4);
                                    LocalPopChoice(f_22);
                                  }
                                else
                                  {
                                    t = d_22;
                                    {
                                      ATerm k_22 = t;
                                      int l_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm y_4 (ATerm t)
                                          {
                                            ATerm v_36 = NULL;
                                            v_36 = t;
                                            u_35 :
                                            if(!(match_string(v_36, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm z_4 (ATerm t)
                                          {
                                            t = term_o_22;
                                            t = set_config_0(t);
                                            t = term_p_22;
                                            return(t);
                                          }
                                          ATerm b_5 (ATerm t)
                                          {
                                            t = term_q_22;
                                            return(t);
                                          }
                                          t = Option_3(t, y_4, z_4, b_5);
                                          LocalPopChoice(l_22);
                                        }
                                      else
                                        {
                                          t = k_22;
                                          {
                                            ATerm c_5 (ATerm t)
                                            {
                                              ATerm w_36 = NULL;
                                              w_36 = t;
                                              v_35 :
                                              if(!(match_string(w_36, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm d_5 (ATerm t)
                                            {
                                              t = term_s_22;
                                              t = set_config_0(t);
                                              t = term_t_22;
                                              return(t);
                                            }
                                            ATerm i_5 (ATerm t)
                                            {
                                              t = term_u_22;
                                              return(t);
                                            }
                                            t = Option_3(t, c_5, d_5, i_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm f_37 = NULL;
  f_37 = t;
  t = SSL_table_destroy(not_null(f_37));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm z_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  q_37 = t;
  n_37 :
  if(((ATgetType(q_37) == AT_LIST) && ((ATermList) q_37 != ATempty)))
    {
      o_37 = ATgetFirst((ATermList) q_37);
      p_37 = (ATerm) ATgetNext((ATermList) q_37);
      {
        ATerm w_37 = NULL;
        t = not_null(p_37);
        {
          ATerm v_22;
          v_22 = t;
          {
            ATerm x_37 = NULL,z_37 = NULL,b_38 = NULL;
            ATerm w_22;
            w_22 = t;
            {
              ATerm y_37 = NULL;
              t = i_0(t);
              {
                y_37 = t;
                if(((x_37 != NULL) && (x_37 != y_37)))
                  _fail(y_37);
                else
                  x_37 = y_37;
              }
            }
            t = w_22;
            {
              ATerm a_38 = NULL;
              t = not_null(o_37);
              {
                t = h_0(t);
                {
                  a_38 = t;
                  if(((z_37 != NULL) && (z_37 != a_38)))
                    _fail(a_38);
                  else
                    z_37 = a_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_37)), not_null(z_37));
                {
                  b_38 = t;
                  if(((w_37 != NULL) && (w_37 != b_38)))
                    _fail(b_38);
                  else
                    w_37 = b_38;
                }
              }
            }
          }
          t = v_22;
          {
            ATerm j_5 (ATerm t)
            {
              t = not_null(w_37);
              return(t);
            }
            t = reverse_acc_2(t, h_0, j_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) q_37 == ATempty))
        {
          {
            t = term_l_12;
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
  ATerm k_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm y_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm m_38 = NULL,n_38 = NULL;
  m_38 = t;
  l_38 :
  if(match_cons(m_38, sym_Program_1))
    {
      n_38 = ATgetArgument(m_38, 0);
      {
        ATerm q_38 = NULL,s_38 = NULL;
        ATerm r_38 = NULL;
        t = SSLgetAnnotations(not_null(m_38));
        {
          r_38 = t;
          if(((q_38 != NULL) && (q_38 != r_38)))
            _fail(r_38);
          else
            q_38 = r_38;
        }
        {
          t = not_null(n_38);
          {
            ATerm u_38 = NULL;
            t = o_62(t);
            {
              s_38 = t;
              {
                ATerm v_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_38)), not_null(q_38));
                {
                  v_38 = t;
                  if(((u_38 != NULL) && (u_38 != v_38)))
                    _fail(v_38);
                  else
                    u_38 = v_38;
                }
                t = not_null(u_38);
              }
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
  ATerm h_39 = NULL;
  ATerm l_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      ATerm i_39 = NULL;
      i_39 = t;
      if(((h_39 != NULL) && (h_39 != i_39)))
        _fail(i_39);
      else
        h_39 = i_39;
      return(t);
    }
    t = Program_1(t, o_5);
    return(t);
  }
  t = option_defined_1(t, l_5);
  {
    ATerm p_5 (ATerm t)
    {
      ATerm j_39 = NULL;
      ATerm k_39 = NULL;
      t = term_l_12;
      {
        ATerm s_5 (ATerm t)
        {
          t = not_null(h_39);
          return(t);
        }
        t = short_description_1(t, s_5);
        {
          t = concat_strings_0(t);
          {
            k_39 = t;
            if(((j_39 != NULL) && (j_39 != k_39)))
              _fail(k_39);
            else
              j_39 = k_39;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_10, (ATerm) ATinsert(ATempty, not_null(j_39)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, p_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_10, (ATerm) ATinsert(ATempty, term_x_22));
      {
        t = printnl_0(t);
        {
          t = term_a_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm l_39 = NULL;
                  l_39 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_h_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_39)), term_b_23));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_5);
                {
                  ATerm v_5 (ATerm t)
                  {
                    ATerm n_39 = NULL;
                    ATerm o_39 = NULL;
                    t = term_l_12;
                    {
                      ATerm w_5 (ATerm t)
                      {
                        t = not_null(h_39);
                        return(t);
                      }
                      t = long_description_1(t, w_5);
                      {
                        t = concat_strings_0(t);
                        {
                          o_39 = t;
                          if(((n_39 != NULL) && (n_39 != o_39)))
                            _fail(o_39);
                          else
                            n_39 = o_39;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_39)), term_c_23));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_5);
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
ATerm Undefined_1 (ATerm t, ATerm p_62 (ATerm))
{
  ATerm y_39 = NULL,z_39 = NULL;
  y_39 = t;
  x_39 :
  if(match_cons(y_39, sym_Undefined_1))
    {
      z_39 = ATgetArgument(y_39, 0);
      {
        ATerm c_40 = NULL,e_40 = NULL;
        ATerm d_40 = NULL;
        t = SSLgetAnnotations(not_null(y_39));
        {
          d_40 = t;
          if(((c_40 != NULL) && (c_40 != d_40)))
            _fail(d_40);
          else
            c_40 = d_40;
        }
        {
          t = not_null(z_39);
          {
            ATerm g_40 = NULL;
            t = p_62(t);
            {
              e_40 = t;
              {
                ATerm h_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_40)), not_null(c_40));
                {
                  h_40 = t;
                  if(((g_40 != NULL) && (g_40 != h_40)))
                    _fail(h_40);
                  else
                    g_40 = h_40;
                }
                t = not_null(g_40);
              }
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
ATerm Help_0 (ATerm t)
{
  ATerm q_40 = NULL;
  q_40 = t;
  p_40 :
  if(match_cons(q_40, sym_Help_0))
    {
      ATerm s_40 = NULL,u_40 = NULL;
      ATerm d_23;
      d_23 = t;
      {
        ATerm t_40 = NULL;
        t = SSLgetAnnotations(not_null(q_40));
        {
          t_40 = t;
          if(((s_40 != NULL) && (s_40 != t_40)))
            _fail(t_40);
          else
            s_40 = t_40;
        }
      }
      t = d_23;
      {
        ATerm v_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_40));
        {
          v_40 = t;
          if(((u_40 != NULL) && (u_40 != v_40)))
            _fail(v_40);
          else
            u_40 = v_40;
        }
        t = not_null(u_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  c_41 = t;
  b_41 :
  if(match_cons(c_41, sym__3))
    {
      d_41 = ATgetArgument(c_41, 0);
      e_41 = ATgetArgument(c_41, 1);
      f_41 = ATgetArgument(c_41, 2);
      {
        ATerm e_23;
        e_23 = t;
        {
          ATerm j_41 = NULL;
          ATerm k_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_41), not_null(e_41));
          {
            ATerm f_23 = t;
            int g_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_23);
              }
            else
              {
                t = f_23;
                t = (ATerm) ATempty;
              }
            {
              k_41 = t;
              if(((j_41 != NULL) && (j_41 != k_41)))
                _fail(k_41);
              else
                j_41 = k_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_41), not_null(e_41), (ATerm) ATinsert(CheckATermList(not_null(j_41)), not_null(f_41)));
            t = table_put_0(t);
          }
        }
        t = e_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm d_69 (ATerm))
{
  ATerm q_41 = NULL;
  ATerm r_41 = NULL;
  t = term_l_12;
  {
    t = d_69(t);
    {
      r_41 = t;
      if(((q_41 != NULL) && (q_41 != r_41)))
        _fail(r_41);
      else
        q_41 = r_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_22, term_z_22, not_null(q_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  w_41 :
  if(match_string(x_41, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(x_41) == AT_LIST) && ((ATermList) x_41 != ATempty)))
        {
          y_41 = ATgetFirst((ATermList) x_41);
          z_41 = (ATerm) ATgetNext((ATermList) x_41);
          {
            ATerm c_42 = NULL;
            ATerm h_23;
            h_23 = t;
            {
              t = not_null(y_41);
              t = a_0(t);
            }
            t = h_23;
            {
              ATerm d_42 = NULL;
              t = term_l_12;
              {
                t = b_0(t);
                {
                  d_42 = t;
                  if(((c_42 != NULL) && (c_42 != d_42)))
                    _fail(d_42);
                  else
                    c_42 = d_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_41)), not_null(c_42));
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
  ATerm x_5 (ATerm t)
  {
    ATerm i_42 = NULL;
    i_42 = t;
    h_42 :
    if(!(match_string(i_42, "--help")))
      {
        if(!(match_string(i_42, "-h")))
          {
            if(!(match_string(i_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_i_23;
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = term_j_23;
    return(t);
  }
  t = Option_3(t, x_5, y_5, z_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
  l_42 = t;
  k_42 :
  if(((ATgetType(l_42) == AT_LIST) && ((ATermList) l_42 != ATempty)))
    {
      m_42 = ATgetFirst((ATermList) l_42);
      n_42 = (ATerm) ATgetNext((ATermList) l_42);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_42)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym__2))
    {
      w_42 = ATgetArgument(v_42, 0);
      x_42 = ATgetArgument(v_42, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_q_13, not_null(w_42), not_null(x_42));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm m_23;
  m_23 = t;
  {
    ATerm a_6 (ATerm t)
    {
      t = term_n_23;
      t = b_69(t);
      return(t);
    }
    t = try_1(t, a_6);
  }
  t = m_23;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm f_43 = NULL;
      ATerm o_23;
      o_23 = t;
      {
        ATerm d_43 = NULL;
        ATerm e_43 = NULL;
        e_43 = t;
        if(((d_43 != NULL) && (d_43 != e_43)))
          _fail(e_43);
        else
          d_43 = e_43;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_23, not_null(d_43));
          t = set_config_0(t);
        }
      }
      t = o_23;
      {
        ATerm g_43 = NULL;
        g_43 = t;
        if(((f_43 != NULL) && (f_43 != g_43)))
          _fail(g_43);
        else
          f_43 = g_43;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_43));
      }
      return(t);
    }
    ATerm c_6 (ATerm t)
    {
      ATerm q_23 = t;
      int r_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_23);
            }
          else
            {
              t = s_23;
              {
                t = b_69(t);
                t = Cons_2(t, _id, c_6);
              }
            }
          LocalPopChoice(r_23);
        }
      else
        {
          t = q_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_6, c_6);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_69 (ATerm))
{
  ATerm l_43 = NULL;
  ATerm u_23;
  u_23 = t;
  {
    t = term_v_23;
    t = table_put_0(t);
  }
  t = u_23;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_69(t);
          LocalPopChoice(x_23);
        }
      else
        {
          t = w_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_6);
    {
      ATerm e_6 (ATerm t)
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_w_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            {
              ATerm f_6 (ATerm t)
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm m_43 = NULL;
                  m_43 = t;
                  if(((l_43 != NULL) && (l_43 != m_43)))
                    _fail(m_43);
                  else
                    l_43 = m_43;
                  return(t);
                }
                t = Undefined_1(t, n_6);
                return(t);
              }
              t = option_defined_1(t, f_6);
              {
                ATerm c_24;
                c_24 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_43)), term_d_24));
                  t = printnl_0(t);
                }
                t = c_24;
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_10;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_6);
      {
        ATerm e_24;
        e_24 = t;
        {
          t = term_y_22;
          t = table_destroy_0(t);
        }
        t = e_24;
      }
    }
  }
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = pack_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, o_6);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm d_64 (ATerm, ATerm (ATerm)), ATerm e_64 (ATerm))
{
  ATerm l_44 = NULL;
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,w_44 = NULL;
  t = pack_module_options_0(t);
  {
    l_44 = t;
    {
      ATerm p_6 (ATerm t)
      {
        t = need_help_1(t, pack_modules_usage_0);
        return(t);
      }
      t = try_1(t, p_6);
      {
        ATerm q_6 (ATerm t)
        {
          ATerm r_6 (ATerm t)
          {
            ATerm r_44 = NULL,s_44 = NULL;
            r_44 = t;
            t_43 :
            if(match_cons(r_44, sym_Program_1))
              {
                s_44 = ATgetArgument(r_44, 0);
                if(((n_44 != NULL) && (n_44 != s_44)))
                  _fail(s_44);
                else
                  n_44 = s_44;
              }
            else
              {
                if(match_cons(r_44, sym_Input_1))
                  {
                    s_44 = ATgetArgument(r_44, 0);
                    if(((o_44 != NULL) && (o_44 != s_44)))
                      _fail(s_44);
                    else
                      o_44 = s_44;
                  }
                else
                  {
                    if(match_cons(r_44, sym_Output_1))
                      {
                        s_44 = ATgetArgument(r_44, 0);
                        if(((p_44 != NULL) && (p_44 != s_44)))
                          _fail(s_44);
                        else
                          p_44 = s_44;
                      }
                    else
                      {
                        if(match_cons(r_44, sym_Dependency_1))
                          {
                            s_44 = ATgetArgument(r_44, 0);
                            if(((q_44 != NULL) && (q_44 != s_44)))
                              _fail(s_44);
                            else
                              q_44 = s_44;
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
          t = try_1(t, r_6);
          return(t);
        }
        t = list_1(t, q_6);
        {
          ATerm y_44 = NULL;
          ATerm f_7 (ATerm t)
          {
            ATerm t_44 = NULL,u_44 = NULL;
            t_44 = t;
            v_43 :
            if(match_cons(t_44, sym_Include_1))
              {
                u_44 = ATgetArgument(t_44, 0);
                t = not_null(u_44);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, f_7);
          {
            w_44 = t;
            {
              ATerm a_45 = NULL;
              ATerm k_24 = t;
              int l_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = not_null(o_44);
                  LocalPopChoice(l_24);
                }
              else
                {
                  t = k_24;
                  t = term_m_24;
                }
              {
                y_44 = t;
                {
                  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
                  ATerm n_24 = t;
                  int o_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = not_null(p_44);
                      LocalPopChoice(o_24);
                    }
                  else
                    {
                      t = n_24;
                      t = term_p_24;
                    }
                  {
                    a_45 = t;
                    {
                      t = not_null(y_44);
                      {
                        ATerm h_7 (ATerm t)
                        {
                          t = not_null(w_44);
                          return(t);
                        }
                        t = d_64(t, h_7);
                        {
                          c_45 = t;
                          k_44 :
                          if(match_cons(c_45, sym__2))
                            {
                              d_45 = ATgetArgument(c_45, 0);
                              e_45 = ATgetArgument(c_45, 1);
                              {
                                ATerm i_45 = NULL;
                                t = not_null(l_44);
                                {
                                  ATerm q_24 = t;
                                  int r_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm i_7 (ATerm t)
                                      {
                                        ATerm h_45 = NULL;
                                        h_45 = t;
                                        f_44 :
                                        if(!(match_cons(h_45, sym_Binary_0)))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = option_defined_1(t, i_7);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_45), not_null(e_45));
                                        t = WriteToBinaryFile_0(t);
                                      }
                                      LocalPopChoice(r_24);
                                    }
                                  else
                                    {
                                      t = q_24;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_45), not_null(e_45));
                                        t = WriteToTextFile_0(t);
                                      }
                                    }
                                  {
                                    ATerm j_7 (ATerm t)
                                    {
                                      ATerm k_45 = NULL;
                                      ATerm t_24 = t;
                                      int u_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = not_null(q_44);
                                          LocalPopChoice(u_24);
                                        }
                                      else
                                        {
                                          t = t_24;
                                          {
                                            ATerm v_24 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(l_44);
                                                {
                                                  ATerm k_7 (ATerm t)
                                                  {
                                                    ATerm j_45 = NULL;
                                                    j_45 = t;
                                                    g_44 :
                                                    if(!(match_cons(j_45, sym_NoDependency_0)))
                                                      {
                                                        _fail(t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = option_defined_1(t, k_7);
                                                }
                                                PopChoice();
                                                _fail(t);
                                              }
                                            else
                                              {
                                                t = v_24;
                                              }
                                            t = e_64(t);
                                          }
                                        }
                                      {
                                        k_45 = t;
                                        {
                                          if(((i_45 != NULL) && (i_45 != k_45)))
                                            _fail(k_45);
                                          else
                                            i_45 = k_45;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_45), not_null(d_45));
                                            {
                                              ATerm l_7 (ATerm t)
                                              {
                                                t = not_null(i_45);
                                                return(t);
                                              }
                                              t = create_dep_file_1(t, l_7);
                                            }
                                          }
                                        }
                                      }
                                      return(t);
                                    }
                                    t = try_1(t, j_7);
                                    {
                                      ATerm m_7 (ATerm t)
                                      {
                                        ATerm l_45 = NULL;
                                        ATerm m_45 = NULL;
                                        t = run_time_0(t);
                                        {
                                          m_45 = t;
                                          if(((l_45 != NULL) && (l_45 != m_45)))
                                            _fail(m_45);
                                          else
                                            l_45 = m_45;
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_h_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_24), not_null(l_45)), term_w_24), not_null(n_44)));
                                          t = printnl_0(t);
                                        }
                                        return(t);
                                      }
                                      t = if_verbose1_1(t, m_7);
                                      {
                                        t = term_w_10;
                                        t = exit_0(t);
                                      }
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
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
  n_46 = t;
  m_46 :
  if(match_cons(n_46, sym__2))
    {
      o_46 = ATgetArgument(n_46, 0);
      p_46 = ATgetArgument(n_46, 1);
      {
        t = not_null(o_46);
        {
          ATerm n_7 (ATerm t)
          {
            t = not_null(p_46);
            return(t);
          }
          t = at_end_1(t, n_7);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm q_51 (ATerm), ATerm r_51 (ATerm))
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
  z_46 = t;
  y_46 :
  if(match_cons(z_46, sym__2))
    {
      a_47 = ATgetArgument(z_46, 0);
      b_47 = ATgetArgument(z_46, 1);
      {
        ATerm f_47 = NULL,h_47 = NULL;
        ATerm g_47 = NULL;
        t = SSLgetAnnotations(not_null(z_46));
        {
          g_47 = t;
          if(((f_47 != NULL) && (f_47 != g_47)))
            _fail(g_47);
          else
            f_47 = g_47;
        }
        {
          t = not_null(a_47);
          {
            ATerm j_47 = NULL;
            t = q_51(t);
            {
              h_47 = t;
              {
                t = not_null(b_47);
                {
                  ATerm l_47 = NULL;
                  t = r_51(t);
                  {
                    j_47 = t;
                    {
                      ATerm m_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_47), not_null(j_47)), not_null(f_47));
                      {
                        m_47 = t;
                        if(((l_47 != NULL) && (l_47 != m_47)))
                          _fail(m_47);
                        else
                          l_47 = m_47;
                      }
                      t = not_null(l_47);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm f_82 (ATerm))
{
  ATerm s_47 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_82(t);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = Cons_2(t, _id, s_47);
      }
    return(t);
  }
  t = s_47(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm v_47 = NULL;
  ATerm c_25;
  c_25 = t;
  {
    ATerm w_47 = NULL;
    t = u_73(t);
    {
      t = explode_string_0(t);
      {
        w_47 = t;
        if(((v_47 != NULL) && (v_47 != w_47)))
          _fail(w_47);
        else
          v_47 = w_47;
      }
    }
  }
  t = c_25;
  {
    ATerm d_25;
    d_25 = t;
    {
      t = explode_string_0(t);
      {
        ATerm o_7 (ATerm t)
        {
          ATerm x_47 = NULL;
          x_47 = t;
          if(((v_47 != NULL) && (v_47 != x_47)))
            _fail(x_47);
          else
            v_47 = x_47;
          return(t);
        }
        t = at_suffix_1(t, o_7);
      }
    }
    t = d_25;
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_7 (ATerm t)
            {
              t = filter_1(t, c_75);
              return(t);
            }
            t = Cons_2(t, c_75, r_7);
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            {
              ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
              c_48 = t;
              b_48 :
              if(((ATgetType(c_48) == AT_LIST) && ((ATermList) c_48 != ATempty)))
                {
                  d_48 = ATgetFirst((ATermList) c_48);
                  e_48 = (ATerm) ATgetNext((ATermList) c_48);
                  {
                    t = not_null(e_48);
                    t = filter_1(t, c_75);
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
ATerm readdir_0 (ATerm t)
{
  ATerm i_48 = NULL;
  i_48 = t;
  t = SSL_readdir(not_null(i_48));
  return(t);
}
ATerm find_plugins_2 (ATerm t, ATerm n_63 (ATerm), ATerm o_63 (ATerm))
{
  t = n_63(t);
  {
    ATerm s_7 (ATerm t)
    {
      ATerm n_48 = NULL;
      n_48 = t;
      {
        t = readdir_0(t);
        {
          ATerm t_7 (ATerm t)
          {
            ATerm p_48 = NULL;
            t = has_extension_1(t, o_63);
            {
              ATerm q_48 = NULL;
              q_48 = t;
              if(((p_48 != NULL) && (p_48 != q_48)))
                _fail(q_48);
              else
                p_48 = q_48;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_48)), term_o_12), not_null(n_48));
                t = concat_strings_0(t);
              }
            }
            return(t);
          }
          t = filter_1(t, t_7);
        }
      }
      return(t);
    }
    t = filter_1(t, s_7);
    t = concat_0(t);
  }
  return(t);
}
ATerm import_config_files_1 (ATerm t, ATerm q_63 (ATerm))
{
  ATerm i_25;
  i_25 = t;
  {
    t = q_63(t);
    {
      ATerm y_7 (ATerm t)
      {
        ATerm w_48 = NULL;
        ATerm z_7 (ATerm t)
        {
          ATerm a_8 (ATerm t)
          {
            t = term_j_25;
            return(t);
          }
          t = debug_1(t, a_8);
          return(t);
        }
        t = if_verbose2_1(t, z_7);
        {
          t = ReadFromFile_0(t);
          {
            ATerm y_48 = NULL;
            y_48 = t;
            if(((w_48 != NULL) && (w_48 != y_48)))
              _fail(y_48);
            else
              w_48 = y_48;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_q_13, not_null(w_48));
              t = table_putlist_0(t);
            }
          }
        }
        return(t);
      }
      t = map_1(t, y_7);
    }
  }
  t = i_25;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm c_49 = NULL;
  ATerm e_49 = NULL;
  c_49 = t;
  {
    ATerm k_25;
    k_25 = t;
    {
      ATerm i_49 = NULL;
      t = term_l_25;
      {
        i_49 = t;
        if(((e_49 != NULL) && (e_49 != i_49)))
          _fail(i_49);
        else
          e_49 = i_49;
      }
    }
    t = k_25;
    {
      t = SSL_open_file(not_null(c_49), not_null(e_49));
      t = SSL_close_file(not_null(c_49));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_82 (ATerm))
{
  ATerm l_49 (ATerm t)
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_49);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        {
          t = Nil_0(t);
          t = b_82(t);
        }
      }
    return(t);
  }
  t = l_49(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_25);
    }
  else
    {
      t = q_25;
      {
        ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
        u_49 = t;
        t_49 :
        if(((ATgetType(u_49) == AT_LIST) && ((ATermList) u_49 != ATempty)))
          {
            v_49 = ATgetFirst((ATermList) u_49);
            w_49 = (ATerm) ATgetNext((ATermList) u_49);
            {
              t = not_null(v_49);
              {
                ATerm f_8 (ATerm t)
                {
                  t = not_null(w_49);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_8);
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
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm v_81 (ATerm))
{
  ATerm b_50 (ATerm t)
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_81, _id);
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = Cons_2(t, _id, b_50);
      }
    return(t);
  }
  t = b_50(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm d_50 = NULL;
  ATerm g_8 (ATerm t)
  {
    ATerm e_50 = NULL;
    t = x_81(t);
    {
      e_50 = t;
      if(((d_50 != NULL) && (d_50 != e_50)))
        _fail(e_50);
      else
        d_50 = e_50;
    }
    return(t);
  }
  t = fetch_1(t, g_8);
  t = not_null(d_50);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm f_63 (ATerm), ATerm g_63 (ATerm))
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_63(t);
      {
        ATerm h_8 (ATerm t)
        {
          ATerm i_50 = NULL,k_50 = NULL;
          ATerm d_26;
          d_26 = t;
          {
            ATerm j_50 = NULL;
            j_50 = t;
            if(((i_50 != NULL) && (i_50 != j_50)))
              _fail(j_50);
            else
              i_50 = j_50;
          }
          t = d_26;
          {
            ATerm l_50 = NULL;
            t = g_63(t);
            {
              l_50 = t;
              if(((k_50 != NULL) && (k_50 != l_50)))
                _fail(l_50);
              else
                k_50 = l_50;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_50)), term_o_12), not_null(i_50));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, h_8);
      }
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        t = term_y_13;
        {
          t = debug_1(t, g_63);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  s_50 = t;
  r_50 :
  if(match_cons(s_50, sym__2))
    {
      t_50 = ATgetArgument(s_50, 0);
      u_50 = ATgetArgument(s_50, 1);
      {
        t = not_null(u_50);
        {
          ATerm i_8 (ATerm t)
          {
            ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
            t_51 = t;
            q_50 :
            if(match_cons(t_51, sym__2))
              {
                u_51 = ATgetArgument(t_51, 0);
                v_51 = ATgetArgument(t_51, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(t_50), not_null(u_51), not_null(v_51));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, i_8);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm b_52 = NULL;
  b_52 = t;
  t = SSL_ReadFromFile(not_null(b_52));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  g_52 = t;
  f_52 :
  if(match_cons(g_52, sym__2))
    {
      h_52 = ATgetArgument(g_52, 0);
      i_52 = ATgetArgument(g_52, 1);
      {
        ATerm e_26;
        e_26 = t;
        t = SSL_printnl(not_null(h_52), not_null(i_52));
        t = e_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm i_72 (ATerm))
{
  ATerm g_26;
  g_26 = t;
  {
    ATerm o_52 = NULL,q_52 = NULL;
    ATerm h_26;
    h_26 = t;
    {
      ATerm p_52 = NULL;
      t = i_72(t);
      {
        p_52 = t;
        if(((o_52 != NULL) && (o_52 != p_52)))
          _fail(p_52);
        else
          o_52 = p_52;
      }
    }
    t = h_26;
    {
      ATerm r_52 = NULL;
      r_52 = t;
      if(((q_52 != NULL) && (q_52 != r_52)))
        _fail(r_52);
      else
        q_52 = r_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_52)), not_null(o_52)));
        t = printnl_0(t);
      }
    }
  }
  t = g_26;
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
  w_52 = t;
  v_52 :
  if(match_cons(w_52, sym__2))
    {
      x_52 = ATgetArgument(w_52, 0);
      y_52 = ATgetArgument(w_52, 1);
      {
        ATerm i_26;
        i_26 = t;
        {
          ATerm j_26 = t;
          int o_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_52), not_null(y_52));
              LocalPopChoice(o_26);
            }
          else
            {
              t = j_26;
              t = SSL_gtr(not_null(x_52), not_null(y_52));
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
ATerm geq_0 (ATerm t)
{
  ATerm e_53 = NULL;
  ATerm p_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
      f_53 = t;
      d_53 :
      if(match_cons(f_53, sym__2))
        {
          g_53 = ATgetArgument(f_53, 0);
          h_53 = ATgetArgument(f_53, 1);
          {
            if(((e_53 != NULL) && (e_53 != g_53)))
              _fail(g_53);
            else
              e_53 = g_53;
            if(((e_53 != NULL) && (e_53 != h_53)))
              _fail(h_53);
            else
              e_53 = h_53;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_26);
    }
  else
    {
      t = p_26;
      t = gt_0(t);
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL;
  ATerm t_26;
  t_26 = t;
  {
    ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
    o_53 = t;
    k_53 :
    if(match_cons(o_53, sym__3))
      {
        p_53 = ATgetArgument(o_53, 0);
        q_53 = ATgetArgument(o_53, 1);
        r_53 = ATgetArgument(o_53, 2);
        {
          if(((l_53 != NULL) && (l_53 != p_53)))
            _fail(p_53);
          else
            l_53 = p_53;
          {
            if(((m_53 != NULL) && (m_53 != q_53)))
              _fail(q_53);
            else
              m_53 = q_53;
            {
              if(((n_53 != NULL) && (n_53 != r_53)))
                _fail(r_53);
              else
                n_53 = r_53;
              t = SSL_table_put(not_null(l_53), not_null(m_53), not_null(n_53));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_26;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm x_53 = NULL;
  x_53 = t;
  w_53 :
  if(((ATermList) x_53 == ATempty))
    {
      {
        ATerm z_53 = NULL,b_54 = NULL;
        ATerm u_26;
        u_26 = t;
        {
          ATerm a_54 = NULL;
          t = SSLgetAnnotations(not_null(x_53));
          {
            a_54 = t;
            if(((z_53 != NULL) && (z_53 != a_54)))
              _fail(a_54);
            else
              z_53 = a_54;
          }
        }
        t = u_26;
        {
          ATerm c_54 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_53));
          {
            c_54 = t;
            if(((b_54 != NULL) && (b_54 != c_54)))
              _fail(c_54);
            else
              b_54 = c_54;
          }
          t = not_null(b_54);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_81 (ATerm))
{
  ATerm g_54 (ATerm t)
  {
    ATerm v_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = v_26;
        t = Cons_2(t, m_81, g_54);
      }
    return(t);
  }
  t = g_54(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_54 = NULL;
  i_54 = t;
  t = SSL_is_string(not_null(i_54));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm y_26 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(h_27);
    }
  else
    {
      t = y_26;
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_8);
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            {
              ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL;
              r_54 = t;
              q_54 :
              if(match_cons(r_54, sym_Path_1))
                {
                  s_54 = ATgetArgument(r_54, 0);
                  t = not_null(s_54);
                }
              else
                {
                  if(match_cons(r_54, sym_Var_1))
                    {
                      s_54 = ATgetArgument(r_54, 0);
                      {
                        t = not_null(s_54);
                        {
                          ATerm k_27 = t;
                          int p_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_27);
                            }
                          else
                            {
                              t = k_27;
                              {
                                ATerm p_8 (ATerm t)
                                {
                                  t = term_q_27;
                                  return(t);
                                }
                                t = debug_1(t, p_8);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_54, sym_Prefix_2))
                        {
                          s_54 = ATgetArgument(r_54, 0);
                          t_54 = ATgetArgument(r_54, 1);
                          {
                            ATerm y_54 = NULL,a_55 = NULL;
                            ATerm r_27;
                            r_27 = t;
                            {
                              ATerm z_54 = NULL;
                              t = not_null(s_54);
                              {
                                t = eval_config_0(t);
                                {
                                  z_54 = t;
                                  if(((y_54 != NULL) && (y_54 != z_54)))
                                    _fail(z_54);
                                  else
                                    y_54 = z_54;
                                }
                              }
                            }
                            t = r_27;
                            {
                              ATerm b_55 = NULL;
                              t = not_null(t_54);
                              {
                                t = eval_config_0(t);
                                {
                                  b_55 = t;
                                  if(((a_55 != NULL) && (a_55 != b_55)))
                                    _fail(b_55);
                                  else
                                    a_55 = b_55;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_54), not_null(a_55));
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
ATerm table_get_0 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
  j_55 = t;
  i_55 :
  if(match_cons(j_55, sym__2))
    {
      k_55 = ATgetArgument(j_55, 0);
      l_55 = ATgetArgument(j_55, 1);
      t = SSL_table_get(not_null(k_55), not_null(l_55));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm r_55 = NULL;
  r_55 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_q_13, not_null(r_55));
    {
      t = table_get_0(t);
      {
        ATerm q_8 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm s_27;
            s_27 = t;
            {
              ATerm t_55 = NULL;
              ATerm u_55 = NULL;
              u_55 = t;
              if(((t_55 != NULL) && (t_55 != u_55)))
                _fail(u_55);
              else
                t_55 = u_55;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_13, not_null(r_55), not_null(t_55));
                t = table_put_0(t);
              }
            }
            t = s_27;
          }
          return(t);
        }
        t = try_1(t, q_8);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_90 (ATerm))
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_90(t);
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
ATerm if_verbose2_1 (ATerm t, ATerm g_70 (ATerm))
{
  ATerm u_8 (ATerm t)
  {
    ATerm v_27;
    v_27 = t;
    {
      ATerm y_55 = NULL;
      ATerm z_55 = NULL;
      t = term_q_10;
      {
        t = get_config_0(t);
        {
          z_55 = t;
          if(((y_55 != NULL) && (y_55 != z_55)))
            _fail(z_55);
          else
            y_55 = z_55;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_55), term_w_27);
        t = geq_0(t);
      }
    }
    t = v_27;
    t = g_70(t);
    return(t);
  }
  t = try_1(t, u_8);
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm x_27;
  x_27 = t;
  {
    ATerm c_56 = NULL;
    t = p_63(t);
    {
      ATerm v_8 (ATerm t)
      {
        ATerm x_8 (ATerm t)
        {
          t = term_j_25;
          return(t);
        }
        t = debug_1(t, x_8);
        return(t);
      }
      t = if_verbose2_1(t, v_8);
      {
        t = ReadFromFile_0(t);
        {
          ATerm d_56 = NULL;
          d_56 = t;
          if(((c_56 != NULL) && (c_56 != d_56)))
            _fail(d_56);
          else
            c_56 = d_56;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_q_13, not_null(c_56));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = x_27;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm g_56 = NULL;
  g_56 = t;
  t = SSL_implode_string(not_null(g_56));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_56 = NULL;
  k_56 = t;
  t = SSL_explode_string(not_null(k_56));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_56 (ATerm t)
        {
          ATerm a_28 = t;
          int b_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, p_56);
              LocalPopChoice(b_28);
            }
          else
            {
              t = a_28;
              {
                ATerm y_8 (ATerm t)
                {
                  ATerm o_56 = NULL;
                  o_56 = t;
                  n_56 :
                  if(!(match_int(o_56, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm z_8 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, y_8, z_8);
              }
            }
          return(t);
        }
        t = p_56(t);
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_62 (ATerm), ATerm a_63 (ATerm))
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  v_56 :
  if(((ATgetType(w_56) == AT_LIST) && ((ATermList) w_56 != ATempty)))
    {
      x_56 = ATgetFirst((ATermList) w_56);
      y_56 = (ATerm) ATgetNext((ATermList) w_56);
      {
        ATerm c_57 = NULL,e_57 = NULL;
        ATerm d_57 = NULL;
        t = SSLgetAnnotations(not_null(w_56));
        {
          d_57 = t;
          if(((c_57 != NULL) && (c_57 != d_57)))
            _fail(d_57);
          else
            c_57 = d_57;
        }
        {
          t = not_null(x_56);
          {
            ATerm g_57 = NULL;
            t = z_62(t);
            {
              e_57 = t;
              {
                t = not_null(y_56);
                {
                  ATerm i_57 = NULL;
                  t = a_63(t);
                  {
                    g_57 = t;
                    {
                      ATerm j_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_57)), not_null(e_57)), not_null(c_57));
                      {
                        j_57 = t;
                        if(((i_57 != NULL) && (i_57 != j_57)))
                          _fail(j_57);
                        else
                          i_57 = j_57;
                      }
                      t = not_null(i_57);
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
ATerm main_0 (ATerm t)
{
  ATerm t_57 = NULL,v_57 = NULL,x_57 = NULL;
  ATerm c_28;
  c_28 = t;
  {
    ATerm a_9 (ATerm t)
    {
      ATerm u_57 = NULL;
      t = get_path_0(t);
      {
        u_57 = t;
        if(((t_57 != NULL) && (t_57 != u_57)))
          _fail(u_57);
        else
          t_57 = u_57;
      }
      return(t);
    }
    t = Cons_2(t, a_9, _id);
  }
  t = c_28;
  {
    ATerm d_28;
    d_28 = t;
    {
      ATerm w_57 = NULL;
      t = get_conf_datadir();
      {
        w_57 = t;
        if(((v_57 != NULL) && (v_57 != w_57)))
          _fail(w_57);
        else
          v_57 = w_57;
      }
    }
    t = d_28;
    {
      ATerm e_28;
      e_28 = t;
      {
        ATerm y_57 = NULL;
        t = get_conf_pkgdatadir();
        {
          y_57 = t;
          if(((x_57 != NULL) && (x_57 != y_57)))
            _fail(y_57);
          else
            x_57 = y_57;
        }
      }
      t = e_28;
      {
        ATerm b_9 (ATerm t)
        {
          ATerm c_9 (ATerm t)
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_57)), not_null(t_57));
            return(t);
          }
          ATerm d_9 (ATerm t)
          {
            t = term_f_28;
            return(t);
          }
          t = find_config_file_2(t, c_9, d_9);
          return(t);
        }
        t = import_config_file_1(t, b_9);
        {
          ATerm e_9 (ATerm t)
          {
            ATerm f_9 (ATerm t)
            {
              ATerm z_57 = NULL;
              ATerm a_58 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_57), term_g_28);
              {
                t = conc_strings_0(t);
                {
                  a_58 = t;
                  if(((z_57 != NULL) && (z_57 != a_58)))
                    _fail(a_58);
                  else
                    z_57 = a_58;
                }
              }
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_57)), not_null(t_57));
              return(t);
            }
            ATerm g_9 (ATerm t)
            {
              t = term_h_28;
              return(t);
            }
            t = find_plugins_2(t, f_9, g_9);
            return(t);
          }
          t = import_config_files_1(t, e_9);
          t = pack_modules_2(t, pack_stratego_1, basename_0);
        }
      }
    }
  }
  return(t);
}
