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
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_e_27;
ATerm term_u_26;
ATerm term_v_24;
ATerm term_t_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_a_24;
ATerm term_r_23;
ATerm term_l_23;
ATerm term_f_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_b_21;
ATerm term_p_20;
ATerm term_k_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_u_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_k_18;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_j_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_s_16;
ATerm term_p_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_w_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_r_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_a_10;
void init_constant_terms (void)
{
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("parsing: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("reading ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("mtree", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" extension: ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" tool: ", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-I dir] [-i file]", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-dep target | -nodep]", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d|--Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-nodep", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_g_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_NoDependency_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep f             write dependency to file f", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--prefix", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_m_10);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_10);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_p_11);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__2, term_u_21, term_p_11);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_a_22, term_p_11);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_k_22, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__3, term_k_22, term_l_22, (ATerm) ATempty);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego.config", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("/pack-stratego-plugins", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".plugin", 0, ATtrue));
}
ATerm basename_1 (ATerm, ATerm a_73 (ATerm));
ATerm basename_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm t_61 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm call_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm r_69 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm verbosity_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm parse_file_1 (ATerm, ATerm n_0 (ATerm));
ATerm if_verbose5_1 (ATerm, ATerm s_69 (ATerm));
ATerm split_2 (ATerm, ATerm t_73 (ATerm), ATerm u_73 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm c_73 (ATerm));
ATerm Tl_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm get_module_ext_1 (ATerm, ATerm b_90 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm get_config_keys_1 (ATerm, ATerm h_63 (ATerm));
ATerm get_module_1 (ATerm, ATerm a_90 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm));
ATerm zip_1 (ATerm, ATerm j_79 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm l_76 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm x_63 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_89 (ATerm), ATerm f_89 (ATerm));
ATerm for_3 (ATerm, ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm j_89 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm b_64 (ATerm), ATerm c_64 (ATerm), ATerm d_64 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm s_64 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm z_89 (ATerm));
ATerm exit_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm f_75 (ATerm), ATerm g_75 (ATerm));
ATerm crush_2 (ATerm, ATerm u_76 (ATerm), ATerm v_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_69 (ATerm));
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm j_82 (ATerm));
ATerm separate_by_1 (ATerm, ATerm k_82 (ATerm));
ATerm obsolete_1 (ATerm, ATerm y_71 (ATerm));
ATerm open_file_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm u_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_69 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm list_1 (ATerm, ATerm t_80 (ATerm));
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_70 (ATerm));
ATerm assert_1 (ATerm, ATerm o_63 (ATerm));
ATerm extend_config_0 (ATerm);
ATerm pack_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_68 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_68 (ATerm));
ATerm Program_1 (ATerm, ATerm d_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_68 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_68 (ATerm));
ATerm parse_options_1 (ATerm, ATerm p_68 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm s_63 (ATerm, ATerm (ATerm)), ATerm t_63 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm f_51 (ATerm), ATerm g_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm j_81 (ATerm));
ATerm has_extension_1 (ATerm, ATerm d_73 (ATerm));
ATerm filter_1 (ATerm, ATerm l_74 (ATerm));
ATerm readdir_0 (ATerm);
ATerm find_plugins_2 (ATerm, ATerm c_63 (ATerm), ATerm d_63 (ATerm));
ATerm import_config_files_1 (ATerm, ATerm f_63 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_81 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm z_80 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm b_81 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm u_62 (ATerm), ATerm v_62 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm r_71 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm r_80 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_89 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm p_69 (ATerm));
ATerm import_config_file_1 (ATerm, ATerm e_63 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_62 (ATerm), ATerm p_62 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm a_73 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm d_0 (ATerm t)
    {
      ATerm g_1 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, d_0);
          LocalPopChoice(g_9);
        }
      else
        {
          t = g_1;
          {
            ATerm h_9 = t;
            int y_9 = stack_ptr;
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
                LocalPopChoice(y_9);
              }
            else
              {
                t = h_9;
                {
                  ATerm g_0 (ATerm t)
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
                  t = Cons_2(t, g_0, a_73);
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
ATerm Imports_1 (ATerm t, ATerm t_61 (ATerm))
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
            t = t_61(t);
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
  ATerm h_0 (ATerm t)
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
              ATerm z_9 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = z_9;
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
  t = map_1(t, h_0);
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
      t = term_a_10;
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
  ATerm b_10;
  b_10 = t;
  {
    ATerm w_4 = NULL;
    ATerm x_4 = NULL;
    x_4 = t;
    if(((w_4 != NULL) && (w_4 != x_4)))
      _fail(x_4);
    else
      w_4 = x_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_10, not_null(w_4));
      t = printnl_0(t);
    }
  }
  t = b_10;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm d_10;
  d_10 = t;
  {
    t = error_0(t);
    {
      t = term_e_10;
      t = exit_0(t);
    }
  }
  t = d_10;
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(match_cons(b_5, sym__2))
    {
      c_5 = ATgetArgument(b_5, 0);
      d_5 = ATgetArgument(b_5, 1);
      t = SSL_call(not_null(c_5), not_null(d_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm f_10;
  f_10 = t;
  {
    ATerm i_5 = NULL;
    ATerm j_5 = NULL;
    j_5 = t;
    if(((i_5 != NULL) && (i_5 != j_5)))
      _fail(j_5);
    else
      i_5 = j_5;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATempty, not_null(i_5)));
      t = printnl_0(t);
    }
  }
  t = f_10;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm r_69 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm g_10;
    g_10 = t;
    {
      ATerm m_5 = NULL;
      ATerm n_5 = NULL;
      t = term_h_10;
      {
        t = get_config_0(t);
        {
          n_5 = t;
          if(((m_5 != NULL) && (m_5 != n_5)))
            _fail(n_5);
          else
            m_5 = n_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_5), term_j_10);
        t = geq_0(t);
      }
    }
    t = g_10;
    t = r_69(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm q_5 = NULL;
  q_5 = t;
  t = SSL_int_to_string(not_null(q_5));
  return(t);
}
ATerm verbosity_0 (ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_10;
      t = get_config_0(t);
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      t = term_m_10;
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  u_5 :
  if(match_cons(v_5, sym__2))
    {
      w_5 = ATgetArgument(v_5, 0);
      x_5 = ATgetArgument(v_5, 1);
      if(((w_5 != NULL) && (w_5 != x_5)))
        _fail(x_5);
      else
        w_5 = x_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_file_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
  ATerm d_7 (ATerm t)
  {
    ATerm s_6 = NULL;
    ATerm t_6 = NULL,v_6 = NULL,b_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_n_10, not_null(m_6));
    {
      ATerm p_10 = t;
      if((PushChoice() == 0))
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_10;
        }
      {
        ATerm u_0 (ATerm t)
        {
          t = not_null(k_6);
          {
            ATerm v_0 (ATerm t)
            {
              t = term_r_10;
              return(t);
            }
            t = debug_1(t, v_0);
          }
          return(t);
        }
        t = if_verbose2_1(t, u_0);
        {
          ATerm u_10;
          u_10 = t;
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
          t = u_10;
          {
            ATerm w_6 = NULL,y_6 = NULL,a_7 = NULL;
            ATerm v_10;
            v_10 = t;
            {
              ATerm x_6 = NULL;
              t = (ATerm) ATinsert(ATempty, term_w_10);
              {
                ATerm w_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = if_verbose2_1(t, w_0);
                {
                  x_6 = t;
                  if(((w_6 != NULL) && (w_6 != x_6)))
                    _fail(x_6);
                  else
                    w_6 = x_6;
                }
              }
            }
            t = v_10;
            {
              ATerm z_6 = NULL;
              t = term_x_10;
              {
                t = get_config_0(t);
                {
                  z_6 = t;
                  if(((y_6 != NULL) && (y_6 != z_6)))
                    _fail(z_6);
                  else
                    y_6 = z_6;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_6), not_null(w_6));
                {
                  t = conc_0(t);
                  {
                    a_7 = t;
                    if(((v_6 != NULL) && (v_6 != a_7)))
                      _fail(a_7);
                    else
                      v_6 = a_7;
                  }
                }
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_6), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(v_6)), not_null(t_6)), term_h_10), not_null(l_6)), term_a_11), not_null(k_6)), term_y_10));
              {
                t = if_verbose4_1(t, debug_0);
                {
                  t = call_0(t);
                  {
                    t = not_null(l_6);
                    {
                      t = ReadFromFile_0(t);
                      {
                        b_7 = t;
                        if(((s_6 != NULL) && (s_6 != b_7)))
                          _fail(b_7);
                        else
                          s_6 = b_7;
                      }
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
          ATerm b_11 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = not_null(k_6);
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm y_0 (ATerm t)
                  {
                    t = term_l_11;
                    return(t);
                  }
                  t = debug_1(t, y_0);
                  return(t);
                }
                t = if_verbose2_1(t, x_0);
                t = ReadFromFile_0(t);
              }
              LocalPopChoice(g_11);
            }
          else
            {
              t = b_11;
              t = d_7(t);
            }
        }
      else
        {
          t = d_7(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm s_69 (ATerm))
{
  ATerm z_0 (ATerm t)
  {
    ATerm m_11;
    m_11 = t;
    {
      ATerm k_7 = NULL;
      ATerm l_7 = NULL;
      t = term_h_10;
      {
        t = get_config_0(t);
        {
          l_7 = t;
          if(((k_7 != NULL) && (k_7 != l_7)))
            _fail(l_7);
          else
            k_7 = l_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_7), term_n_11);
        t = geq_0(t);
      }
    }
    t = m_11;
    t = s_69(t);
    return(t);
  }
  t = try_1(t, z_0);
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_73 (ATerm), ATerm u_73 (ATerm))
{
  ATerm p_7 = NULL,r_7 = NULL;
  ATerm o_11;
  o_11 = t;
  {
    ATerm q_7 = NULL;
    t = t_73(t);
    {
      q_7 = t;
      if(((p_7 != NULL) && (p_7 != q_7)))
        _fail(q_7);
      else
        p_7 = q_7;
    }
  }
  t = o_11;
  {
    ATerm s_7 = NULL;
    t = u_73(t);
    {
      s_7 = t;
      if(((r_7 != NULL) && (r_7 != s_7)))
        _fail(s_7);
      else
        r_7 = s_7;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_7), not_null(r_7));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm c_73 (ATerm))
{
  t = basename_0(t);
  {
    ATerm a_1 (ATerm t)
    {
      t = term_p_11;
      t = c_73(t);
      return(t);
    }
    t = split_2(t, _id, a_1);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
  x_7 = t;
  w_7 :
  if(((ATgetType(x_7) == AT_LIST) && ((ATermList) x_7 != ATempty)))
    {
      y_7 = ATgetFirst((ATermList) x_7);
      z_7 = (ATerm) ATgetNext((ATermList) x_7);
      t = not_null(z_7);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym__2))
    {
      i_8 = ATgetArgument(h_8, 0);
      j_8 = ATgetArgument(h_8, 1);
      {
        t = not_null(j_8);
        {
          ATerm r_8 (ATerm t)
          {
            ATerm q_11 = t;
            int r_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
                m_8 = t;
                f_8 :
                if(((ATgetType(m_8) == AT_LIST) && ((ATermList) m_8 != ATempty)))
                  {
                    n_8 = ATgetFirst((ATermList) m_8);
                    o_8 = (ATerm) ATgetNext((ATermList) m_8);
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_8)), term_w_11), not_null(n_8));
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
                LocalPopChoice(r_11);
              }
            else
              {
                t = q_11;
                {
                  t = Tl_0(t);
                  t = r_8(t);
                }
              }
            return(t);
          }
          t = r_8(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_module_ext_1 (ATerm t, ATerm b_90 (ATerm))
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym__2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      {
        ATerm i_9 = NULL,k_9 = NULL;
        t = not_null(f_9);
        {
          ATerm b_1 (ATerm t)
          {
            t = not_null(e_9);
            return(t);
          }
          t = guarantee_extension_1(t, b_1);
          {
            ATerm a_12;
            a_12 = t;
            {
              ATerm j_9 = NULL;
              j_9 = t;
              if(((i_9 != NULL) && (i_9 != j_9)))
                _fail(j_9);
              else
                i_9 = j_9;
            }
            t = a_12;
            {
              ATerm l_9 = NULL;
              t = b_90(t);
              {
                l_9 = t;
                if(((k_9 != NULL) && (k_9 != l_9)))
                  _fail(l_9);
                else
                  k_9 = l_9;
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), not_null(k_9));
                {
                  t = find_in_path_0(t);
                  {
                    ATerm g_12 = t;
                    int h_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_9 = NULL,o_9 = NULL;
                        ATerm i_12;
                        i_12 = t;
                        {
                          ATerm n_9 = NULL;
                          n_9 = t;
                          if(((m_9 != NULL) && (m_9 != n_9)))
                            _fail(n_9);
                          else
                            m_9 = n_9;
                        }
                        t = i_12;
                        {
                          ATerm p_9 = NULL,r_9 = NULL,t_9 = NULL,v_9 = NULL;
                          ATerm j_12;
                          j_12 = t;
                          {
                            ATerm q_9 = NULL;
                            q_9 = t;
                            if(((p_9 != NULL) && (p_9 != q_9)))
                              _fail(q_9);
                            else
                              p_9 = q_9;
                          }
                          t = j_12;
                          {
                            ATerm u_12;
                            u_12 = t;
                            {
                              ATerm s_9 = NULL;
                              t = basename_0(t);
                              {
                                ATerm c_1 (ATerm t)
                                {
                                  t = term_v_12;
                                  return(t);
                                }
                                t = guarantee_extension_1(t, c_1);
                                {
                                  s_9 = t;
                                  if(((r_9 != NULL) && (r_9 != s_9)))
                                    _fail(s_9);
                                  else
                                    r_9 = s_9;
                                }
                              }
                            }
                            t = u_12;
                            {
                              ATerm u_9 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Ext_1, not_null(e_9));
                              {
                                ATerm d_1 (ATerm t)
                                {
                                  ATerm e_1 (ATerm t)
                                  {
                                    t = term_w_12;
                                    return(t);
                                  }
                                  t = debug_1(t, e_1);
                                  return(t);
                                }
                                t = if_verbose5_1(t, d_1);
                                {
                                  t = get_config_0(t);
                                  {
                                    ATerm h_1 (ATerm t)
                                    {
                                      ATerm i_1 (ATerm t)
                                      {
                                        t = term_x_12;
                                        return(t);
                                      }
                                      t = debug_1(t, i_1);
                                      return(t);
                                    }
                                    t = if_verbose5_1(t, h_1);
                                    {
                                      u_9 = t;
                                      if(((t_9 != NULL) && (t_9 != u_9)))
                                        _fail(u_9);
                                      else
                                        t_9 = u_9;
                                    }
                                  }
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(p_9), not_null(r_9), not_null(t_9));
                                {
                                  t = parse_file_1(t, b_90);
                                  {
                                    v_9 = t;
                                    if(((o_9 != NULL) && (o_9 != v_9)))
                                      _fail(v_9);
                                    else
                                      o_9 = v_9;
                                  }
                                }
                              }
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), not_null(o_9));
                        }
                        LocalPopChoice(h_12);
                      }
                    else
                      {
                        t = g_12;
                        {
                          ATerm w_9 = NULL;
                          ATerm x_9 = NULL;
                          x_9 = t;
                          if(((w_9 != NULL) && (w_9 != x_9)))
                            _fail(x_9);
                          else
                            w_9 = x_9;
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_9)), term_y_12);
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
  ATerm i_10 = NULL;
  i_10 = t;
  t = SSL_table_keys(not_null(i_10));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  {
    t = table_keys_0(t);
    {
      ATerm j_1 (ATerm t)
      {
        ATerm q_10 = NULL;
        ATerm s_10 = NULL;
        q_10 = t;
        {
          ATerm t_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), not_null(q_10));
          {
            t = table_get_0(t);
            {
              t_10 = t;
              if(((s_10 != NULL) && (s_10 != t_10)))
                _fail(t_10);
              else
                s_10 = t_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), not_null(s_10));
        }
        return(t);
      }
      t = map_1(t, j_1);
    }
  }
  return(t);
}
ATerm get_config_keys_1 (ATerm t, ATerm h_63 (ATerm))
{
  t = term_z_12;
  {
    t = table_getlist_0(t);
    {
      ATerm k_1 (ATerm t)
      {
        t = _2(t, h_63, _id);
        t = Fst_0(t);
        return(t);
      }
      t = filter_1(t, k_1);
    }
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm c_11 = NULL;
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_11 = NULL;
      d_11 = t;
      {
        if(((c_11 != NULL) && (c_11 != d_11)))
          _fail(d_11);
        else
          c_11 = d_11;
        {
          ATerm l_1 (ATerm t)
          {
            ATerm e_11 = NULL,f_11 = NULL;
            e_11 = t;
            z_10 :
            if(match_cons(e_11, sym_Ext_1))
              {
                f_11 = ATgetArgument(e_11, 0);
                t = not_null(f_11);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = get_config_keys_1(t, l_1);
          {
            ATerm m_1 (ATerm t)
            {
              ATerm h_11 = NULL;
              ATerm i_11 = NULL;
              i_11 = t;
              if(((h_11 != NULL) && (h_11 != i_11)))
                _fail(i_11);
              else
                h_11 = i_11;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_11), not_null(c_11));
                t = get_module_ext_1(t, a_90);
              }
              return(t);
            }
            t = fetch_elem_1(t, m_1);
          }
        }
      }
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
        ATerm j_11 = NULL;
        ATerm k_11 = NULL;
        k_11 = t;
        if(((j_11 != NULL) && (j_11 != k_11)))
          _fail(k_11);
        else
          j_11 = k_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_13), not_null(j_11)), term_j_13);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm v_11 = NULL;
  ATerm x_11 = NULL,y_11 = NULL;
  v_11 = t;
  {
    ATerm z_11 = NULL;
    ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
    t = not_null(v_11);
    {
      z_11 = t;
      {
        t = SSL_explode_term(not_null(z_11));
        {
          b_12 = t;
          s_11 :
          if(match_cons(b_12, sym__2))
            {
              c_12 = ATgetArgument(b_12, 0);
              d_12 = ATgetArgument(b_12, 1);
              t_11 :
              if(match_string(c_12, ""))
                {
                  u_11 :
                  if(((ATgetType(d_12) == AT_LIST) && ((ATermList) d_12 != ATempty)))
                    {
                      e_12 = ATgetFirst((ATermList) d_12);
                      f_12 = (ATerm) ATgetNext((ATermList) d_12);
                      {
                        if(((y_11 != NULL) && (y_11 != e_12)))
                          _fail(e_12);
                        else
                          y_11 = e_12;
                        if(((x_11 != NULL) && (x_11 != f_12)))
                          _fail(f_12);
                        else
                          x_11 = f_12;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(y_11);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  m_12 = t;
  k_12 :
  if(match_cons(m_12, sym__5))
    {
      n_12 = ATgetArgument(m_12, 0);
      q_12 = ATgetArgument(m_12, 1);
      r_12 = ATgetArgument(m_12, 2);
      s_12 = ATgetArgument(m_12, 3);
      t_12 = ATgetArgument(m_12, 4);
      l_12 :
      if(((ATgetType(n_12) == AT_LIST) && ((ATermList) n_12 != ATempty)))
        {
          o_12 = ATgetFirst((ATermList) n_12);
          p_12 = (ATerm) ATgetNext((ATermList) n_12);
          t = (ATerm) ATmakeAppl(sym__5, not_null(p_12), not_null(q_12), not_null(r_12), not_null(s_12), (ATerm) ATinsert(CheckATermList(not_null(t_12)), not_null(o_12)));
        }
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
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  e_13 = t;
  c_13 :
  if(match_cons(e_13, sym__2))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      d_13 :
      if(((ATgetType(g_13) == AT_LIST) && ((ATermList) g_13 != ATempty)))
        {
          h_13 = ATgetFirst((ATermList) g_13);
          i_13 = (ATerm) ATgetNext((ATermList) g_13);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_13)), not_null(h_13)), not_null(i_13));
        }
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
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym__2))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_13)), not_null(q_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  z_13 = t;
  w_13 :
  if(match_cons(z_13, sym__2))
    {
      a_14 = ATgetArgument(z_13, 0);
      d_14 = ATgetArgument(z_13, 1);
      x_13 :
      if(((ATgetType(a_14) == AT_LIST) && ((ATermList) a_14 != ATempty)))
        {
          b_14 = ATgetFirst((ATermList) a_14);
          c_14 = (ATerm) ATgetNext((ATermList) a_14);
          y_13 :
          if(((ATgetType(d_14) == AT_LIST) && ((ATermList) d_14 != ATempty)))
            {
              e_14 = ATgetFirst((ATermList) d_14);
              f_14 = (ATerm) ATgetNext((ATermList) d_14);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_14), not_null(e_14)), (ATerm) ATmakeAppl(sym__2, not_null(c_14), not_null(f_14)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  m_14 :
  if(match_cons(p_14, sym__2))
    {
      q_14 = ATgetArgument(p_14, 0);
      r_14 = ATgetArgument(p_14, 1);
      n_14 :
      if(((ATermList) q_14 == ATempty))
        {
          o_14 :
          if(((ATermList) r_14 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm))
{
  ATerm t_14 (ATerm t)
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_79(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        {
          t = f_79(t);
          {
            t = _2(t, h_79, t_14);
            t = g_79(t);
          }
        }
      }
    return(t);
  }
  t = t_14(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm j_79 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, j_79);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  e_15 = t;
  c_15 :
  if(((ATgetType(e_15) == AT_LIST) && ((ATermList) e_15 != ATempty)))
    {
      f_15 = ATgetFirst((ATermList) e_15);
      i_15 = (ATerm) ATgetNext((ATermList) e_15);
      d_15 :
      if(match_cons(f_15, sym__2))
        {
          g_15 = ATgetArgument(f_15, 0);
          h_15 = ATgetArgument(f_15, 1);
          {
            ATerm m_15 = NULL,n_15 = NULL,t_15 = NULL,z_15 = NULL;
            ATerm n_13;
            n_13 = t;
            {
              ATerm o_15 = NULL;
              ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
              t = not_null(h_15);
              {
                o_15 = t;
                {
                  t = SSL_explode_term(not_null(o_15));
                  {
                    q_15 = t;
                    x_14 :
                    if(match_cons(q_15, sym__2))
                      {
                        r_15 = ATgetArgument(q_15, 0);
                        s_15 = ATgetArgument(q_15, 1);
                        {
                          if(((m_15 != NULL) && (m_15 != r_15)))
                            _fail(r_15);
                          else
                            m_15 = r_15;
                          if(((n_15 != NULL) && (n_15 != s_15)))
                            _fail(s_15);
                          else
                            n_15 = s_15;
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
            t = n_13;
            {
              ATerm s_13;
              s_13 = t;
              {
                ATerm u_15 = NULL;
                ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
                t = not_null(g_15);
                {
                  u_15 = t;
                  {
                    t = SSL_explode_term(not_null(u_15));
                    {
                      w_15 = t;
                      a_15 :
                      if(match_cons(w_15, sym__2))
                        {
                          x_15 = ATgetArgument(w_15, 0);
                          y_15 = ATgetArgument(w_15, 1);
                          {
                            if(((m_15 != NULL) && (m_15 != x_15)))
                              _fail(x_15);
                            else
                              m_15 = x_15;
                            if(((t_15 != NULL) && (t_15 != y_15)))
                              _fail(y_15);
                            else
                              t_15 = y_15;
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
              t = s_13;
              {
                ATerm a_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_15), not_null(n_15));
                {
                  t = zip_1(t, _id);
                  {
                    a_16 = t;
                    if(((z_15 != NULL) && (z_15 != a_16)))
                      _fail(a_16);
                    else
                      z_15 = a_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_15), not_null(i_15));
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
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  k_16 = t;
  i_16 :
  if(((ATgetType(k_16) == AT_LIST) && ((ATermList) k_16 != ATempty)))
    {
      l_16 = ATgetFirst((ATermList) k_16);
      o_16 = (ATerm) ATgetNext((ATermList) k_16);
      j_16 :
      if(match_cons(l_16, sym__2))
        {
          m_16 = ATgetArgument(l_16, 0);
          n_16 = ATgetArgument(l_16, 1);
          {
            ATerm q_16 = NULL;
            if(((m_16 != NULL) && (m_16 != n_16)))
              _fail(n_16);
            else
              m_16 = n_16;
            {
              if(((q_16 != NULL) && (q_16 != o_16)))
                _fail(o_16);
              else
                q_16 = o_16;
              t = not_null(q_16);
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
ATerm HdMember_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  u_16 :
  if(((ATgetType(v_16) == AT_LIST) && ((ATermList) v_16 != ATempty)))
    {
      w_16 = ATgetFirst((ATermList) v_16);
      x_16 = (ATerm) ATgetNext((ATermList) v_16);
      {
        t = l_76(t);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm a_17 = NULL;
            a_17 = t;
            if(((w_16 != NULL) && (w_16 != a_17)))
              _fail(a_17);
            else
              w_16 = a_17;
            return(t);
          }
          t = fetch_1(t, n_1);
        }
        t = not_null(x_16);
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
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
      g_17 = t;
      e_17 :
      if(match_cons(g_17, sym__2))
        {
          h_17 = ATgetArgument(g_17, 0);
          i_17 = ATgetArgument(g_17, 1);
          {
            t = not_null(h_17);
            {
              ATerm o_17 (ATerm t)
              {
                ATerm v_13 = t;
                int g_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(g_14);
                  }
                else
                  {
                    t = v_13;
                    {
                      ATerm h_14 = t;
                      int i_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_1 (ATerm t)
                          {
                            t = not_null(i_17);
                            return(t);
                          }
                          t = HdMember_1(t, o_1);
                          t = o_17(t);
                          LocalPopChoice(i_14);
                        }
                      else
                        {
                          t = h_14;
                          t = Cons_2(t, _id, o_17);
                        }
                    }
                  }
                return(t);
              }
              t = o_17(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm p_1 (ATerm t)
        {
          ATerm l_17 = NULL;
          l_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(l_17));
          return(t);
        }
        ATerm q_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm r_1 (ATerm t)
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_1 (ATerm t)
              {
                ATerm l_14 = t;
                int s_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(s_14);
                  }
                else
                  {
                    t = l_14;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, s_1);
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, p_1, q_1, r_1);
      }
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm x_63 (ATerm))
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
  z_17 = t;
  x_17 :
  if(match_cons(z_17, sym__5))
    {
      a_18 = ATgetArgument(z_17, 0);
      d_18 = ATgetArgument(z_17, 1);
      e_18 = ATgetArgument(z_17, 2);
      f_18 = ATgetArgument(z_17, 3);
      g_18 = ATgetArgument(z_17, 4);
      y_17 :
      if(((ATgetType(a_18) == AT_LIST) && ((ATermList) a_18 != ATempty)))
        {
          b_18 = ATgetFirst((ATermList) a_18);
          c_18 = (ATerm) ATgetNext((ATermList) a_18);
          {
            ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,t_18 = NULL,v_18 = NULL,x_18 = NULL;
            ATerm u_14;
            u_14 = t;
            {
              ATerm q_18 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_18), not_null(e_18));
              {
                ATerm r_18 = NULL;
                t = v_63(t);
                {
                  q_18 = t;
                  {
                    if(((n_18 != NULL) && (n_18 != q_18)))
                      _fail(q_18);
                    else
                      n_18 = q_18;
                    {
                      t = not_null(n_18);
                      {
                        ATerm s_18 = NULL;
                        t = w_63(t);
                        {
                          r_18 = t;
                          {
                            if(((o_18 != NULL) && (o_18 != r_18)))
                              _fail(r_18);
                            else
                              o_18 = r_18;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), not_null(d_18));
                              {
                                t = diff_0(t);
                                {
                                  s_18 = t;
                                  if(((p_18 != NULL) && (p_18 != s_18)))
                                    _fail(s_18);
                                  else
                                    p_18 = s_18;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = u_14;
            {
              ATerm v_14;
              v_14 = t;
              {
                ATerm u_18 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(c_18));
                {
                  t = conc_0(t);
                  {
                    u_18 = t;
                    if(((t_18 != NULL) && (t_18 != u_18)))
                      _fail(u_18);
                    else
                      t_18 = u_18;
                  }
                }
              }
              t = v_14;
              {
                ATerm w_14;
                w_14 = t;
                {
                  ATerm w_18 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(d_18));
                  {
                    t = conc_0(t);
                    {
                      w_18 = t;
                      if(((v_18 != NULL) && (v_18 != w_18)))
                        _fail(w_18);
                      else
                        v_18 = w_18;
                    }
                  }
                }
                t = w_14;
                {
                  ATerm y_18 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(b_18), not_null(n_18), not_null(f_18));
                  {
                    t = x_63(t);
                    {
                      y_18 = t;
                      if(((x_18 != NULL) && (x_18 != y_18)))
                        _fail(y_18);
                      else
                        x_18 = y_18;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(t_18), not_null(v_18), not_null(e_18), not_null(x_18), not_null(g_18));
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
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  j_19 = t;
  h_19 :
  if(match_cons(j_19, sym__5))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      m_19 = ATgetArgument(j_19, 2);
      n_19 = ATgetArgument(j_19, 3);
      o_19 = ATgetArgument(j_19, 4);
      i_19 :
      if(((ATermList) k_19 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), not_null(o_19));
        }
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
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym__3))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      z_19 = ATgetArgument(w_19, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(x_19), not_null(x_19), not_null(y_19), not_null(z_19), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm e_89 (ATerm), ATerm f_89 (ATerm))
{
  ATerm e_20 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_89(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          t = f_89(t);
          t = e_20(t);
        }
      }
    return(t);
  }
  t = e_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm j_89 (ATerm))
{
  t = h_89(t);
  t = while_not_2(t, i_89, j_89);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm b_64 (ATerm), ATerm c_64 (ATerm), ATerm d_64 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    ATerm b_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, b_64, c_64, d_64);
        LocalPopChoice(j_15);
      }
    else
      {
        t = b_15;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, t_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm q_64 (ATerm), ATerm r_64 (ATerm), ATerm s_64 (ATerm))
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
  t = graph_nodes_undef_roots_3(t, q_64, r_64, s_64);
  {
    h_20 = t;
    g_20 :
    if(match_cons(h_20, sym__2))
      {
        i_20 = ATgetArgument(h_20, 0);
        j_20 = ATgetArgument(h_20, 1);
        t = not_null(i_20);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm pack_stratego_1 (ATerm t, ATerm z_89 (ATerm))
{
  ATerm r_20 = NULL;
  r_20 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(r_20)), term_l_15), term_k_15), term_p_11, (ATerm) ATempty);
    {
      ATerm u_1 (ATerm t)
      {
        t = Fst_0(t);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm t_20 = NULL;
            ATerm u_20 = NULL;
            t = term_p_11;
            {
              t = z_89(t);
              {
                u_20 = t;
                if(((t_20 != NULL) && (t_20 != u_20)))
                  _fail(u_20);
                else
                  t_20 = u_20;
              }
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(t_20)), term_p_15);
            return(t);
          }
          t = get_module_1(t, w_1);
        }
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
        v_20 = t;
        q_20 :
        if(match_cons(v_20, sym__3))
          {
            w_20 = ATgetArgument(v_20, 0);
            x_20 = ATgetArgument(v_20, 1);
            y_20 = ATgetArgument(v_20, 2);
            t = (ATerm) ATinsert(CheckATermList(not_null(y_20)), not_null(x_20));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = graph_nodes_roots_3(t, u_1, get_stratego_imports_0, v_1);
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
  ATerm k_21 = NULL;
  k_21 = t;
  t = SSL_exit(not_null(k_21));
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  t = SSL_TicksToSeconds(not_null(v_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  f_22 = t;
  z_21 :
  if(match_cons(f_22, sym__2))
    {
      g_22 = ATgetArgument(f_22, 0);
      h_22 = ATgetArgument(f_22, 1);
      {
        ATerm v_15 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_22), not_null(h_22));
            LocalPopChoice(b_16);
          }
        else
          {
            t = v_15;
            t = SSL_addr(not_null(g_22), not_null(h_22));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_75 (ATerm), ATerm g_75 (ATerm))
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_75(t);
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      {
        ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
        t_23 = t;
        s_23 :
        if(((ATgetType(t_23) == AT_LIST) && ((ATermList) t_23 != ATempty)))
          {
            u_23 = ATgetFirst((ATermList) t_23);
            v_23 = (ATerm) ATgetNext((ATermList) t_23);
            {
              ATerm y_23 = NULL;
              ATerm z_23 = NULL;
              t = not_null(v_23);
              {
                t = foldr_2(t, f_75, g_75);
                {
                  z_23 = t;
                  if(((y_23 != NULL) && (y_23 != z_23)))
                    _fail(z_23);
                  else
                    y_23 = z_23;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), not_null(y_23));
                t = g_75(t);
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
ATerm crush_2 (ATerm t, ATerm u_76 (ATerm), ATerm v_76 (ATerm))
{
  ATerm s_24 = NULL;
  ATerm e_25 = NULL;
  s_24 = t;
  {
    ATerm f_25 = NULL;
    ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
    t = not_null(s_24);
    {
      f_25 = t;
      {
        t = SSL_explode_term(not_null(f_25));
        {
          h_25 = t;
          r_24 :
          if(match_cons(h_25, sym__2))
            {
              i_25 = ATgetArgument(h_25, 0);
              j_25 = ATgetArgument(h_25, 1);
              if(((e_25 != NULL) && (e_25 != j_25)))
                _fail(j_25);
              else
                e_25 = j_25;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_25);
      t = foldr_2(t, u_76, v_76);
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
    ATerm x_1 (ATerm t)
    {
      t = term_m_10;
      return(t);
    }
    t = crush_2(t, x_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_69 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    ATerm e_16;
    e_16 = t;
    {
      ATerm o_25 = NULL;
      ATerm p_25 = NULL;
      t = term_h_10;
      {
        t = get_config_0(t);
        {
          p_25 = t;
          if(((o_25 != NULL) && (o_25 != p_25)))
            _fail(p_25);
          else
            o_25 = p_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_25), term_e_10);
        t = geq_0(t);
      }
    }
    t = e_16;
    t = o_69(t);
    return(t);
  }
  t = try_1(t, y_1);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
  t = SSL_close_file(not_null(s_25));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm j_82 (ATerm))
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  x_25 :
  if(((ATgetType(y_25) == AT_LIST) && ((ATermList) y_25 != ATempty)))
    {
      z_25 = ATgetFirst((ATermList) y_25);
      a_26 = (ATerm) ATgetNext((ATermList) y_25);
      {
        ATerm d_26 = NULL;
        ATerm e_26 = NULL;
        t = term_p_11;
        {
          t = j_82(t);
          {
            e_26 = t;
            if(((d_26 != NULL) && (d_26 != e_26)))
              _fail(e_26);
            else
              d_26 = e_26;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_26)), not_null(z_25)), not_null(d_26));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm k_82 (ATerm))
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm z_1 (ATerm t)
        {
          ATerm h_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_16);
            }
          else
            {
              t = h_16;
              {
                t = Cons_2(t, _id, z_1);
                t = Sep_1(t, k_82);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, z_1);
      }
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm y_71 (ATerm))
{
  ATerm r_16;
  r_16 = t;
  {
    t = y_71(t);
    {
      ATerm a_2 (ATerm t)
      {
        t = term_s_16;
        return(t);
      }
      t = debug_1(t, a_2);
    }
  }
  t = r_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  ATerm t_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
      o_26 = t;
      j_26 :
      if(match_cons(o_26, sym__2))
        {
          p_26 = ATgetArgument(o_26, 0);
          q_26 = ATgetArgument(o_26, 1);
          {
            if(((n_26 != NULL) && (n_26 != p_26)))
              _fail(p_26);
            else
              n_26 = p_26;
            {
              if(((m_26 != NULL) && (m_26 != q_26)))
                _fail(q_26);
              else
                m_26 = q_26;
              t = SSL_open_file(not_null(n_26), not_null(m_26));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_16);
    }
  else
    {
      t = t_16;
      {
        ATerm r_26 = NULL;
        ATerm s_26 = NULL;
        ATerm b_2 (ATerm t)
        {
          t = term_z_16;
          return(t);
        }
        t = obsolete_1(t, b_2);
        {
          r_26 = t;
          {
            if(((n_26 != NULL) && (n_26 != r_26)))
              _fail(r_26);
            else
              n_26 = r_26;
            {
              ATerm b_17;
              b_17 = t;
              {
                ATerm t_26 = NULL;
                t = term_c_17;
                {
                  t_26 = t;
                  if(((s_26 != NULL) && (s_26 != t_26)))
                    _fail(t_26);
                  else
                    s_26 = t_26;
                }
              }
              t = b_17;
              t = SSL_open_file(not_null(n_26), not_null(s_26));
            }
          }
        }
      }
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym__2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_27)), term_p_15), not_null(a_27));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_dep_file_1 (ATerm t, ATerm u_63 (ATerm))
{
  ATerm r_27 = NULL,t_27 = NULL,u_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym__2))
    {
      t_27 = ATgetArgument(r_27, 0);
      u_27 = ATgetArgument(r_27, 1);
      {
        ATerm g_28 = NULL,h_28 = NULL;
        ATerm i_28 = NULL;
        t = not_null(t_27);
        {
          ATerm j_28 = NULL,l_28 = NULL;
          t = u_63(t);
          {
            i_28 = t;
            {
              if(((g_28 != NULL) && (g_28 != i_28)))
                _fail(i_28);
              else
                g_28 = i_28;
              {
                ATerm k_28 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_28), term_d_17);
                {
                  t = add_extension_0(t);
                  {
                    k_28 = t;
                    if(((j_28 != NULL) && (j_28 != k_28)))
                      _fail(k_28);
                    else
                      j_28 = k_28;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_28), term_c_17);
                  {
                    ATerm m_28 = NULL;
                    t = open_file_0(t);
                    {
                      l_28 = t;
                      {
                        if(((h_28 != NULL) && (h_28 != l_28)))
                          _fail(l_28);
                        else
                          h_28 = l_28;
                        {
                          ATerm n_28 = NULL;
                          t = (ATerm) ATinsert(CheckATermList(not_null(u_27)), term_f_17);
                          {
                            ATerm c_2 (ATerm t)
                            {
                              t = term_j_17;
                              return(t);
                            }
                            t = separate_by_1(t, c_2);
                            {
                              n_28 = t;
                              if(((m_28 != NULL) && (m_28 != n_28)))
                                _fail(n_28);
                              else
                                m_28 = n_28;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_28), (ATerm) ATinsert(CheckATermList(not_null(m_28)), not_null(g_28)));
                            {
                              t = printnl_0(t);
                              {
                                t = not_null(h_28);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), not_null(u_27));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_69 (ATerm))
{
  t = fetch_1(t, m_69);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym__2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      t = SSL_WriteToTextFile(not_null(w_28), not_null(x_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym__2))
    {
      f_29 = ATgetArgument(e_29, 0);
      g_29 = ATgetArgument(e_29, 1);
      t = SSL_WriteToBinaryFile(not_null(f_29), not_null(g_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm k_29 (ATerm t)
  {
    ATerm k_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = k_17;
        t = Cons_2(t, t_80, k_29);
      }
    return(t);
  }
  t = k_29(t);
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm p_29 = NULL;
  ATerm d_2 (ATerm t)
  {
    ATerm q_29 = NULL,r_29 = NULL;
    q_29 = t;
    m_29 :
    if(match_cons(q_29, sym_Program_1))
      {
        r_29 = ATgetArgument(q_29, 0);
        if(((p_29 != NULL) && (p_29 != r_29)))
          _fail(r_29);
        else
          p_29 = r_29;
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = option_defined_1(t, d_2);
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), term_q_17), term_p_17), not_null(p_29)), term_n_17));
    {
      t = printnl_0(t);
      {
        t = term_e_10;
        t = exit_0(t);
      }
    }
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  w_29 :
  if(match_cons(x_29, sym_Version_0))
    {
      ATerm z_29 = NULL,b_30 = NULL;
      ATerm s_17;
      s_17 = t;
      {
        ATerm a_30 = NULL;
        t = SSLgetAnnotations(not_null(x_29));
        {
          a_30 = t;
          if(((z_29 != NULL) && (z_29 != a_30)))
            _fail(a_30);
          else
            z_29 = a_30;
        }
      }
      t = s_17;
      {
        ATerm c_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_29));
        {
          c_30 = t;
          if(((b_30 != NULL) && (b_30 != c_30)))
            _fail(c_30);
          else
            b_30 = c_30;
        }
        t = not_null(b_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        {
          ATerm v_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(w_17);
            }
          else
            {
              t = v_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, e_2);
  t = z_70(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm o_63 (ATerm))
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  k_30 :
  if(match_cons(t_30, sym__2))
    {
      u_30 = ATgetArgument(t_30, 0);
      v_30 = ATgetArgument(t_30, 1);
      {
        ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
        ATerm h_18;
        h_18 = t;
        {
          ATerm d_31 = NULL;
          ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
          t = o_63(t);
          {
            d_31 = t;
            {
              if(((a_31 != NULL) && (a_31 != d_31)))
                _fail(d_31);
              else
                a_31 = d_31;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_31), not_null(u_30), not_null(v_30));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_18 = t;
                    int j_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_31), term_k_18);
                        t = table_get_0(t);
                        LocalPopChoice(j_18);
                      }
                    else
                      {
                        t = i_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      e_31 = t;
                      j_30 :
                      if(((ATgetType(e_31) == AT_LIST) && ((ATermList) e_31 != ATempty)))
                        {
                          f_31 = ATgetFirst((ATermList) e_31);
                          g_31 = (ATerm) ATgetNext((ATermList) e_31);
                          {
                            if(((b_31 != NULL) && (b_31 != f_31)))
                              _fail(f_31);
                            else
                              b_31 = f_31;
                            {
                              if(((c_31 != NULL) && (c_31 != g_31)))
                                _fail(g_31);
                              else
                                c_31 = g_31;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_31), term_k_18, (ATerm) ATinsert(CheckATermList(not_null(c_31)), (ATerm) ATinsert(CheckATermList(not_null(b_31)), not_null(u_30))));
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
        t = h_18;
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
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  q_31 :
  if(match_cons(s_31, sym__2))
    {
      t_31 = ATgetArgument(s_31, 0);
      u_31 = ATgetArgument(s_31, 1);
      {
        ATerm x_31 = NULL;
        ATerm y_31 = NULL,a_32 = NULL;
        ATerm z_31 = NULL;
        t = not_null(t_31);
        {
          ATerm l_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(m_18);
            }
          else
            {
              t = l_18;
              t = (ATerm) ATempty;
            }
          {
            z_31 = t;
            if(((y_31 != NULL) && (y_31 != z_31)))
              _fail(z_31);
            else
              y_31 = z_31;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_31), not_null(y_31));
          {
            t = conc_0(t);
            {
              a_32 = t;
              if(((x_31 != NULL) && (x_31 != a_32)))
                _fail(a_32);
              else
                x_31 = a_32;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_12, not_null(t_31), not_null(x_31));
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
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm o_32 = NULL;
        o_32 = t;
        e_32 :
        if(!(match_string(o_32, "-I")))
          {
            if(!(match_string(o_32, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        ATerm r_32 = NULL;
        ATerm b_19;
        b_19 = t;
        {
          ATerm p_32 = NULL;
          ATerm q_32 = NULL;
          q_32 = t;
          if(((p_32 != NULL) && (p_32 != q_32)))
            _fail(q_32);
          else
            p_32 = q_32;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_32)), term_x_10));
            t = extend_config_0(t);
          }
        }
        t = b_19;
        {
          ATerm s_32 = NULL;
          s_32 = t;
          if(((r_32 != NULL) && (r_32 != s_32)))
            _fail(s_32);
          else
            r_32 = s_32;
          t = (ATerm) ATmakeAppl(sym_Include_1, not_null(r_32));
        }
        return(t);
      }
      ATerm n_2 (ATerm t)
      {
        t = term_c_19;
        return(t);
      }
      t = ArgOption_3(t, i_2, j_2, n_2);
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
        ATerm d_19 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm t_32 = NULL;
              t_32 = t;
              h_32 :
              if(!(match_string(t_32, "-nodep")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm r_2 (ATerm t)
            {
              t = term_p_19;
              t = set_config_0(t);
              t = term_q_19;
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              t = term_f_19;
              return(t);
            }
            t = Option_3(t, q_2, r_2, s_2);
            LocalPopChoice(e_19);
          }
        else
          {
            t = d_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm u_32 = NULL;
                    u_32 = t;
                    i_32 :
                    if(!(match_string(u_32, "-dep")))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  ATerm u_2 (ATerm t)
                  {
                    ATerm x_32 = NULL;
                    ATerm t_19;
                    t_19 = t;
                    {
                      ATerm v_32 = NULL;
                      ATerm w_32 = NULL;
                      w_32 = t;
                      if(((v_32 != NULL) && (v_32 != w_32)))
                        _fail(w_32);
                      else
                        v_32 = w_32;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_u_19, not_null(v_32));
                        t = set_config_0(t);
                      }
                    }
                    t = t_19;
                    {
                      x_32 = t;
                      t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(x_32));
                    }
                    return(t);
                  }
                  ATerm w_2 (ATerm t)
                  {
                    t = term_a_20;
                    return(t);
                  }
                  t = ArgOption_3(t, t_2, u_2, w_2);
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  {
                    ATerm z_2 (ATerm t)
                    {
                      ATerm z_32 = NULL;
                      z_32 = t;
                      l_32 :
                      if(!(match_string(z_32, "--prefix")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm b_3 (ATerm t)
                    {
                      ATerm c_33 = NULL;
                      ATerm b_20;
                      b_20 = t;
                      {
                        ATerm a_33 = NULL;
                        ATerm b_33 = NULL;
                        b_33 = t;
                        if(((a_33 != NULL) && (a_33 != b_33)))
                          _fail(b_33);
                        else
                          a_33 = b_33;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_c_20, not_null(a_33));
                          t = set_config_0(t);
                        }
                      }
                      t = b_20;
                      {
                        c_33 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_d_20, (ATerm) ATmakeAppl(sym_Defined_2, term_f_20, not_null(c_33)));
                          {
                            ATerm d_3 (ATerm t)
                            {
                              t = term_k_20;
                              return(t);
                            }
                            t = assert_1(t, d_3);
                          }
                          t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(c_33));
                        }
                      }
                      return(t);
                    }
                    ATerm c_3 (ATerm t)
                    {
                      t = term_c_20;
                      return(t);
                    }
                    t = ArgOption_3(t, z_2, b_3, c_3);
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
  ATerm l_33 = NULL;
  l_33 = t;
  t = SSL_string_to_int(not_null(l_33));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  e_34 = t;
  x_33 :
  if(match_string(e_34, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(e_34) == AT_LIST) && ((ATermList) e_34 != ATempty)))
        {
          f_34 = ATgetFirst((ATermList) e_34);
          g_34 = (ATerm) ATgetNext((ATermList) e_34);
          y_33 :
          if(((ATgetType(g_34) == AT_LIST) && ((ATermList) g_34 != ATempty)))
            {
              h_34 = ATgetFirst((ATermList) g_34);
              i_34 = (ATerm) ATgetNext((ATermList) g_34);
              {
                ATerm m_34 = NULL;
                ATerm l_20;
                l_20 = t;
                {
                  t = not_null(f_34);
                  t = k_0(t);
                }
                t = l_20;
                {
                  ATerm n_34 = NULL;
                  t = not_null(h_34);
                  {
                    t = l_0(t);
                    {
                      n_34 = t;
                      if(((m_34 != NULL) && (m_34 != n_34)))
                        _fail(n_34);
                      else
                        m_34 = n_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_34)), not_null(m_34));
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
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 (ATerm t)
      {
        ATerm g_35 = NULL;
        g_35 = t;
        t_34 :
        if(!(match_string(g_35, "-i")))
          {
            if(!(match_string(g_35, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_3 (ATerm t)
      {
        ATerm j_35 = NULL;
        ATerm o_20;
        o_20 = t;
        {
          ATerm h_35 = NULL;
          ATerm i_35 = NULL;
          i_35 = t;
          if(((h_35 != NULL) && (h_35 != i_35)))
            _fail(i_35);
          else
            h_35 = i_35;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(h_35));
            t = set_config_0(t);
          }
        }
        t = o_20;
        {
          ATerm k_35 = NULL;
          k_35 = t;
          if(((j_35 != NULL) && (j_35 != k_35)))
            _fail(k_35);
          else
            j_35 = k_35;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_35));
        }
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        t = term_p_20;
        return(t);
      }
      t = ArgOption_3(t, e_3, p_3, q_3);
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      {
        ATerm s_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              ATerm l_35 = NULL;
              l_35 = t;
              w_34 :
              if(!(match_string(l_35, "-o")))
                {
                  if(!(match_string(l_35, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm s_3 (ATerm t)
            {
              ATerm o_35 = NULL;
              ATerm a_21;
              a_21 = t;
              {
                ATerm m_35 = NULL;
                ATerm n_35 = NULL;
                n_35 = t;
                if(((m_35 != NULL) && (m_35 != n_35)))
                  _fail(n_35);
                else
                  m_35 = n_35;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_11, not_null(m_35));
                  t = set_config_0(t);
                }
              }
              t = a_21;
              {
                ATerm r_35 = NULL;
                r_35 = t;
                if(((o_35 != NULL) && (o_35 != r_35)))
                  _fail(r_35);
                else
                  o_35 = r_35;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_35));
              }
              return(t);
            }
            ATerm t_3 (ATerm t)
            {
              t = term_b_21;
              return(t);
            }
            t = ArgOption_3(t, r_3, s_3, t_3);
            LocalPopChoice(z_20);
          }
        else
          {
            t = s_20;
            {
              ATerm c_21 = t;
              int d_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_3 (ATerm t)
                  {
                    ATerm s_35 = NULL;
                    s_35 = t;
                    z_34 :
                    if(!(match_string(s_35, "-S")))
                      {
                        if(!(match_string(s_35, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm z_3 (ATerm t)
                  {
                    t = term_e_21;
                    t = set_config_0(t);
                    t = term_f_21;
                    return(t);
                  }
                  ATerm a_4 (ATerm t)
                  {
                    t = term_g_21;
                    return(t);
                  }
                  t = Option_3(t, u_3, z_3, a_4);
                  LocalPopChoice(d_21);
                }
              else
                {
                  t = c_21;
                  {
                    ATerm h_21 = t;
                    int i_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_4 (ATerm t)
                        {
                          ATerm t_35 = NULL;
                          t_35 = t;
                          a_35 :
                          if(!(match_string(t_35, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm c_4 (ATerm t)
                        {
                          ATerm z_35 = NULL;
                          ATerm j_21;
                          j_21 = t;
                          {
                            ATerm u_35 = NULL;
                            ATerm w_35 = NULL;
                            t = string_to_int_0(t);
                            {
                              w_35 = t;
                              if(((u_35 != NULL) && (u_35 != w_35)))
                                _fail(w_35);
                              else
                                u_35 = w_35;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(u_35));
                              t = set_config_0(t);
                            }
                          }
                          t = j_21;
                          {
                            ATerm a_36 = NULL;
                            a_36 = t;
                            if(((z_35 != NULL) && (z_35 != a_36)))
                              _fail(a_36);
                            else
                              z_35 = a_36;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_35));
                          }
                          return(t);
                        }
                        ATerm f_4 (ATerm t)
                        {
                          t = term_l_21;
                          return(t);
                        }
                        t = ArgOption_3(t, b_4, c_4, f_4);
                        LocalPopChoice(i_21);
                      }
                    else
                      {
                        t = h_21;
                        {
                          ATerm m_21 = t;
                          int n_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_4 (ATerm t)
                              {
                                ATerm b_36 = NULL;
                                b_36 = t;
                                d_35 :
                                if(!(match_string(b_36, "-v")))
                                  {
                                    if(!(match_string(b_36, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm h_4 (ATerm t)
                              {
                                t = term_p_21;
                                t = set_config_0(t);
                                t = term_q_21;
                                return(t);
                              }
                              ATerm p_4 (ATerm t)
                              {
                                t = term_r_21;
                                return(t);
                              }
                              t = Option_3(t, g_4, h_4, p_4);
                              LocalPopChoice(n_21);
                            }
                          else
                            {
                              t = m_21;
                              {
                                ATerm s_21 = t;
                                int t_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_4 (ATerm t)
                                    {
                                      ATerm c_36 = NULL;
                                      c_36 = t;
                                      e_35 :
                                      if(!(match_string(c_36, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm t_4 (ATerm t)
                                    {
                                      t = term_w_21;
                                      t = set_config_0(t);
                                      t = term_x_21;
                                      return(t);
                                    }
                                    ATerm u_4 (ATerm t)
                                    {
                                      t = term_y_21;
                                      return(t);
                                    }
                                    t = Option_3(t, s_4, t_4, u_4);
                                    LocalPopChoice(t_21);
                                  }
                                else
                                  {
                                    t = s_21;
                                    {
                                      ATerm v_4 (ATerm t)
                                      {
                                        ATerm d_36 = NULL;
                                        d_36 = t;
                                        f_35 :
                                        if(!(match_string(d_36, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm y_4 (ATerm t)
                                      {
                                        t = term_b_22;
                                        t = set_config_0(t);
                                        t = term_c_22;
                                        return(t);
                                      }
                                      ATerm z_4 (ATerm t)
                                      {
                                        t = term_d_22;
                                        return(t);
                                      }
                                      t = Option_3(t, v_4, y_4, z_4);
                                    }
                                  }
                              }
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
  ATerm l_36 = NULL;
  l_36 = t;
  t = SSL_table_destroy(not_null(l_36));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  w_36 = t;
  t_36 :
  if(((ATgetType(w_36) == AT_LIST) && ((ATermList) w_36 != ATempty)))
    {
      u_36 = ATgetFirst((ATermList) w_36);
      v_36 = (ATerm) ATgetNext((ATermList) w_36);
      {
        ATerm z_36 = NULL;
        t = not_null(v_36);
        {
          ATerm e_22;
          e_22 = t;
          {
            ATerm a_37 = NULL,c_37 = NULL,e_37 = NULL;
            ATerm i_22;
            i_22 = t;
            {
              ATerm b_37 = NULL;
              t = j_0(t);
              {
                b_37 = t;
                if(((a_37 != NULL) && (a_37 != b_37)))
                  _fail(b_37);
                else
                  a_37 = b_37;
              }
            }
            t = i_22;
            {
              ATerm d_37 = NULL;
              t = not_null(u_36);
              {
                t = i_0(t);
                {
                  d_37 = t;
                  if(((c_37 != NULL) && (c_37 != d_37)))
                    _fail(d_37);
                  else
                    c_37 = d_37;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_37)), not_null(c_37));
                {
                  e_37 = t;
                  if(((z_36 != NULL) && (z_36 != e_37)))
                    _fail(e_37);
                  else
                    z_36 = e_37;
                }
              }
            }
          }
          t = e_22;
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(z_36);
              return(t);
            }
            t = reverse_acc_2(t, i_0, e_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) w_36 == ATempty))
        {
          {
            t = term_p_11;
            t = j_0(t);
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
  ATerm f_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm s_37 = NULL,t_37 = NULL;
  s_37 = t;
  r_37 :
  if(match_cons(s_37, sym_Program_1))
    {
      t_37 = ATgetArgument(s_37, 0);
      {
        ATerm w_37 = NULL,y_37 = NULL;
        ATerm x_37 = NULL;
        t = SSLgetAnnotations(not_null(s_37));
        {
          x_37 = t;
          if(((w_37 != NULL) && (w_37 != x_37)))
            _fail(x_37);
          else
            w_37 = x_37;
        }
        {
          t = not_null(t_37);
          {
            ATerm a_38 = NULL;
            t = d_62(t);
            {
              y_37 = t;
              {
                ATerm b_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_37)), not_null(w_37));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm k_38 = NULL;
  ATerm g_5 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      ATerm l_38 = NULL;
      l_38 = t;
      if(((k_38 != NULL) && (k_38 != l_38)))
        _fail(l_38);
      else
        k_38 = l_38;
      return(t);
    }
    t = Program_1(t, h_5);
    return(t);
  }
  t = option_defined_1(t, g_5);
  {
    ATerm k_5 (ATerm t)
    {
      ATerm m_38 = NULL;
      ATerm n_38 = NULL;
      t = term_p_11;
      {
        ATerm l_5 (ATerm t)
        {
          t = not_null(k_38);
          return(t);
        }
        t = short_description_1(t, l_5);
        {
          t = concat_strings_0(t);
          {
            n_38 = t;
            if(((m_38 != NULL) && (m_38 != n_38)))
              _fail(n_38);
            else
              m_38 = n_38;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATempty, not_null(m_38)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, k_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATempty, term_j_22));
      {
        t = printnl_0(t);
        {
          t = term_m_22;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm o_38 = NULL;
                  o_38 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_38)), term_n_22));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_5);
                {
                  ATerm p_5 (ATerm t)
                  {
                    ATerm q_38 = NULL;
                    ATerm r_38 = NULL;
                    t = term_p_11;
                    {
                      ATerm r_5 (ATerm t)
                      {
                        t = not_null(k_38);
                        return(t);
                      }
                      t = long_description_1(t, r_5);
                      {
                        t = concat_strings_0(t);
                        {
                          r_38 = t;
                          if(((q_38 != NULL) && (q_38 != r_38)))
                            _fail(r_38);
                          else
                            q_38 = r_38;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_38)), term_o_22));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_5);
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
ATerm Undefined_1 (ATerm t, ATerm e_62 (ATerm))
{
  ATerm e_39 = NULL,f_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym_Undefined_1))
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
            t = e_62(t);
            {
              k_39 = t;
              {
                ATerm n_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_39)), not_null(i_39));
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
ATerm Help_0 (ATerm t)
{
  ATerm w_39 = NULL;
  w_39 = t;
  v_39 :
  if(match_cons(w_39, sym_Help_0))
    {
      ATerm y_39 = NULL,a_40 = NULL;
      ATerm p_22;
      p_22 = t;
      {
        ATerm z_39 = NULL;
        t = SSLgetAnnotations(not_null(w_39));
        {
          z_39 = t;
          if(((y_39 != NULL) && (y_39 != z_39)))
            _fail(z_39);
          else
            y_39 = z_39;
        }
      }
      t = p_22;
      {
        ATerm b_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_39));
        {
          b_40 = t;
          if(((a_40 != NULL) && (a_40 != b_40)))
            _fail(b_40);
          else
            a_40 = b_40;
        }
        t = not_null(a_40);
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
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym__3))
    {
      j_40 = ATgetArgument(i_40, 0);
      k_40 = ATgetArgument(i_40, 1);
      l_40 = ATgetArgument(i_40, 2);
      {
        ATerm q_22;
        q_22 = t;
        {
          ATerm p_40 = NULL;
          ATerm q_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_40), not_null(k_40));
          {
            ATerm r_22 = t;
            int s_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_22);
              }
            else
              {
                t = r_22;
                t = (ATerm) ATempty;
              }
            {
              q_40 = t;
              if(((p_40 != NULL) && (p_40 != q_40)))
                _fail(q_40);
              else
                p_40 = q_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_40), not_null(k_40), (ATerm) ATinsert(CheckATermList(not_null(p_40)), not_null(l_40)));
            t = table_put_0(t);
          }
        }
        t = q_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_68 (ATerm))
{
  ATerm u_40 = NULL;
  ATerm v_40 = NULL;
  t = term_p_11;
  {
    t = s_68(t);
    {
      v_40 = t;
      if(((u_40 != NULL) && (u_40 != v_40)))
        _fail(v_40);
      else
        u_40 = v_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_22, term_l_22, not_null(u_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
  b_41 = t;
  a_41 :
  if(match_string(b_41, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(b_41) == AT_LIST) && ((ATermList) b_41 != ATempty)))
        {
          c_41 = ATgetFirst((ATermList) b_41);
          d_41 = (ATerm) ATgetNext((ATermList) b_41);
          {
            ATerm i_41 = NULL;
            ATerm t_22;
            t_22 = t;
            {
              t = not_null(c_41);
              t = a_0(t);
            }
            t = t_22;
            {
              ATerm j_41 = NULL;
              t = term_p_11;
              {
                t = b_0(t);
                {
                  j_41 = t;
                  if(((i_41 != NULL) && (i_41 != j_41)))
                    _fail(j_41);
                  else
                    i_41 = j_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_41)), not_null(i_41));
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
  ATerm s_5 (ATerm t)
  {
    ATerm o_41 = NULL;
    o_41 = t;
    n_41 :
    if(!(match_string(o_41, "--help")))
      {
        if(!(match_string(o_41, "-h")))
          {
            if(!(match_string(o_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_u_22;
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_v_22;
    return(t);
  }
  t = Option_3(t, s_5, t_5, y_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  q_41 :
  if(((ATgetType(r_41) == AT_LIST) && ((ATermList) r_41 != ATempty)))
    {
      s_41 = ATgetFirst((ATermList) r_41);
      t_41 = (ATerm) ATgetNext((ATermList) r_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
  z_41 = t;
  y_41 :
  if(match_cons(z_41, sym__2))
    {
      a_42 = ATgetArgument(z_41, 0);
      b_42 = ATgetArgument(z_41, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_12, not_null(a_42), not_null(b_42));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm w_22;
  w_22 = t;
  {
    ATerm z_5 (ATerm t)
    {
      t = term_x_22;
      t = q_68(t);
      return(t);
    }
    t = try_1(t, z_5);
  }
  t = w_22;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm l_42 = NULL;
      ATerm y_22;
      y_22 = t;
      {
        ATerm j_42 = NULL;
        ATerm k_42 = NULL;
        k_42 = t;
        if(((j_42 != NULL) && (j_42 != k_42)))
          _fail(k_42);
        else
          j_42 = k_42;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_22, not_null(j_42));
          t = set_config_0(t);
        }
      }
      t = y_22;
      {
        ATerm m_42 = NULL;
        m_42 = t;
        if(((l_42 != NULL) && (l_42 != m_42)))
          _fail(m_42);
        else
          l_42 = m_42;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_42));
      }
      return(t);
    }
    ATerm b_6 (ATerm t)
    {
      ATerm a_23 = t;
      int b_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_23 = t;
          int d_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_23);
            }
          else
            {
              t = c_23;
              {
                t = q_68(t);
                t = Cons_2(t, _id, b_6);
              }
            }
          LocalPopChoice(b_23);
        }
      else
        {
          t = a_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_6, b_6);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_68 (ATerm))
{
  ATerm r_42 = NULL;
  ATerm e_23;
  e_23 = t;
  {
    t = term_f_23;
    t = table_put_0(t);
  }
  t = e_23;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm g_23 = t;
      int h_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_68(t);
          LocalPopChoice(h_23);
        }
      else
        {
          t = g_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_6);
    {
      ATerm d_6 (ATerm t)
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_m_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            {
              ATerm e_6 (ATerm t)
              {
                ATerm f_6 (ATerm t)
                {
                  ATerm s_42 = NULL;
                  s_42 = t;
                  if(((r_42 != NULL) && (r_42 != s_42)))
                    _fail(s_42);
                  else
                    r_42 = s_42;
                  return(t);
                }
                t = Undefined_1(t, f_6);
                return(t);
              }
              t = option_defined_1(t, e_6);
              {
                ATerm k_23;
                k_23 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_42)), term_l_23));
                  t = printnl_0(t);
                }
                t = k_23;
                {
                  t = system_usage_0(t);
                  {
                    t = term_e_10;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, d_6);
      {
        ATerm m_23;
        m_23 = t;
        {
          t = term_k_22;
          t = table_destroy_0(t);
        }
        t = m_23;
      }
    }
  }
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        t = pack_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, g_6);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm s_63 (ATerm, ATerm (ATerm)), ATerm t_63 (ATerm))
{
  ATerm l_43 = NULL;
  ATerm n_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,a_44 = NULL;
  t = pack_module_options_0(t);
  {
    l_43 = t;
    {
      ATerm n_6 (ATerm t)
      {
        t = need_help_1(t, pack_modules_usage_0);
        return(t);
      }
      t = try_1(t, n_6);
      {
        ATerm o_6 (ATerm t)
        {
          ATerm p_6 (ATerm t)
          {
            ATerm t_43 = NULL,u_43 = NULL;
            t_43 = t;
            z_42 :
            if(match_cons(t_43, sym_Program_1))
              {
                u_43 = ATgetArgument(t_43, 0);
                if(((n_43 != NULL) && (n_43 != u_43)))
                  _fail(u_43);
                else
                  n_43 = u_43;
              }
            else
              {
                if(match_cons(t_43, sym_Input_1))
                  {
                    u_43 = ATgetArgument(t_43, 0);
                    if(((q_43 != NULL) && (q_43 != u_43)))
                      _fail(u_43);
                    else
                      q_43 = u_43;
                  }
                else
                  {
                    if(match_cons(t_43, sym_Output_1))
                      {
                        u_43 = ATgetArgument(t_43, 0);
                        if(((r_43 != NULL) && (r_43 != u_43)))
                          _fail(u_43);
                        else
                          r_43 = u_43;
                      }
                    else
                      {
                        if(match_cons(t_43, sym_Dependency_1))
                          {
                            u_43 = ATgetArgument(t_43, 0);
                            if(((s_43 != NULL) && (s_43 != u_43)))
                              _fail(u_43);
                            else
                              s_43 = u_43;
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
          t = try_1(t, p_6);
          return(t);
        }
        t = list_1(t, o_6);
        {
          ATerm d_44 = NULL;
          ATerm q_6 (ATerm t)
          {
            ATerm x_43 = NULL,y_43 = NULL;
            x_43 = t;
            b_43 :
            if(match_cons(x_43, sym_Include_1))
              {
                y_43 = ATgetArgument(x_43, 0);
                t = not_null(y_43);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, q_6);
          {
            a_44 = t;
            {
              ATerm f_44 = NULL;
              ATerm p_23 = t;
              int q_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = not_null(q_43);
                  LocalPopChoice(q_23);
                }
              else
                {
                  t = p_23;
                  t = term_r_23;
                }
              {
                d_44 = t;
                {
                  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
                  ATerm w_23 = t;
                  int x_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = not_null(r_43);
                      LocalPopChoice(x_23);
                    }
                  else
                    {
                      t = w_23;
                      t = term_a_24;
                    }
                  {
                    f_44 = t;
                    {
                      t = not_null(d_44);
                      {
                        ATerm r_6 (ATerm t)
                        {
                          t = not_null(a_44);
                          return(t);
                        }
                        t = s_63(t, r_6);
                        {
                          h_44 = t;
                          k_43 :
                          if(match_cons(h_44, sym__2))
                            {
                              i_44 = ATgetArgument(h_44, 0);
                              j_44 = ATgetArgument(h_44, 1);
                              {
                                ATerm n_44 = NULL;
                                t = not_null(l_43);
                                {
                                  ATerm b_24 = t;
                                  int c_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm c_7 (ATerm t)
                                      {
                                        ATerm m_44 = NULL;
                                        m_44 = t;
                                        g_43 :
                                        if(!(match_cons(m_44, sym_Binary_0)))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = option_defined_1(t, c_7);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_44), not_null(j_44));
                                        t = WriteToBinaryFile_0(t);
                                      }
                                      LocalPopChoice(c_24);
                                    }
                                  else
                                    {
                                      t = b_24;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_44), not_null(j_44));
                                        t = WriteToTextFile_0(t);
                                      }
                                    }
                                  {
                                    ATerm e_7 (ATerm t)
                                    {
                                      ATerm p_44 = NULL;
                                      ATerm d_24 = t;
                                      int e_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = not_null(s_43);
                                          LocalPopChoice(e_24);
                                        }
                                      else
                                        {
                                          t = d_24;
                                          {
                                            ATerm f_24 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(l_43);
                                                {
                                                  ATerm f_7 (ATerm t)
                                                  {
                                                    ATerm o_44 = NULL;
                                                    o_44 = t;
                                                    h_43 :
                                                    if(!(match_cons(o_44, sym_NoDependency_0)))
                                                      {
                                                        _fail(t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = option_defined_1(t, f_7);
                                                }
                                                PopChoice();
                                                _fail(t);
                                              }
                                            else
                                              {
                                                t = f_24;
                                              }
                                            t = t_63(t);
                                          }
                                        }
                                      {
                                        p_44 = t;
                                        {
                                          if(((n_44 != NULL) && (n_44 != p_44)))
                                            _fail(p_44);
                                          else
                                            n_44 = p_44;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(f_44), not_null(i_44));
                                            {
                                              ATerm g_7 (ATerm t)
                                              {
                                                t = not_null(n_44);
                                                return(t);
                                              }
                                              t = create_dep_file_1(t, g_7);
                                            }
                                          }
                                        }
                                      }
                                      return(t);
                                    }
                                    t = try_1(t, e_7);
                                    {
                                      ATerm h_7 (ATerm t)
                                      {
                                        ATerm q_44 = NULL;
                                        ATerm r_44 = NULL;
                                        t = run_time_0(t);
                                        {
                                          r_44 = t;
                                          if(((q_44 != NULL) && (q_44 != r_44)))
                                            _fail(r_44);
                                          else
                                            q_44 = r_44;
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_24), not_null(q_44)), term_g_24), not_null(n_43)));
                                          t = printnl_0(t);
                                        }
                                        return(t);
                                      }
                                      t = if_verbose1_1(t, h_7);
                                      {
                                        t = term_m_10;
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
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  f_45 :
  if(match_cons(k_45, sym__2))
    {
      l_45 = ATgetArgument(k_45, 0);
      m_45 = ATgetArgument(k_45, 1);
      {
        t = not_null(l_45);
        {
          ATerm i_7 (ATerm t)
          {
            t = not_null(m_45);
            return(t);
          }
          t = at_end_1(t, i_7);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm f_51 (ATerm), ATerm g_51 (ATerm))
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL;
  e_46 = t;
  d_46 :
  if(match_cons(e_46, sym__2))
    {
      f_46 = ATgetArgument(e_46, 0);
      g_46 = ATgetArgument(e_46, 1);
      {
        ATerm k_46 = NULL,m_46 = NULL;
        ATerm l_46 = NULL;
        t = SSLgetAnnotations(not_null(e_46));
        {
          l_46 = t;
          if(((k_46 != NULL) && (k_46 != l_46)))
            _fail(l_46);
          else
            k_46 = l_46;
        }
        {
          t = not_null(f_46);
          {
            ATerm o_46 = NULL;
            t = f_51(t);
            {
              m_46 = t;
              {
                t = not_null(g_46);
                {
                  ATerm q_46 = NULL;
                  t = g_51(t);
                  {
                    o_46 = t;
                    {
                      ATerm r_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_46), not_null(o_46)), not_null(k_46));
                      {
                        r_46 = t;
                        if(((q_46 != NULL) && (q_46 != r_46)))
                          _fail(r_46);
                        else
                          q_46 = r_46;
                      }
                      t = not_null(q_46);
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
ATerm at_suffix_1 (ATerm t, ATerm j_81 (ATerm))
{
  ATerm x_46 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_81(t);
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = Cons_2(t, _id, x_46);
      }
    return(t);
  }
  t = x_46(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm d_73 (ATerm))
{
  ATerm a_47 = NULL;
  ATerm k_24;
  k_24 = t;
  {
    ATerm b_47 = NULL;
    t = d_73(t);
    {
      t = explode_string_0(t);
      {
        b_47 = t;
        if(((a_47 != NULL) && (a_47 != b_47)))
          _fail(b_47);
        else
          a_47 = b_47;
      }
    }
  }
  t = k_24;
  {
    ATerm l_24;
    l_24 = t;
    {
      t = explode_string_0(t);
      {
        ATerm j_7 (ATerm t)
        {
          ATerm c_47 = NULL;
          c_47 = t;
          if(((a_47 != NULL) && (a_47 != c_47)))
            _fail(c_47);
          else
            a_47 = c_47;
          return(t);
        }
        t = at_suffix_1(t, j_7);
      }
    }
    t = l_24;
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm l_74 (ATerm))
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_7 (ATerm t)
            {
              t = filter_1(t, l_74);
              return(t);
            }
            t = Cons_2(t, l_74, m_7);
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
            {
              ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL;
              h_47 = t;
              g_47 :
              if(((ATgetType(h_47) == AT_LIST) && ((ATermList) h_47 != ATempty)))
                {
                  i_47 = ATgetFirst((ATermList) h_47);
                  j_47 = (ATerm) ATgetNext((ATermList) h_47);
                  {
                    t = not_null(j_47);
                    t = filter_1(t, l_74);
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
  ATerm n_47 = NULL;
  n_47 = t;
  t = SSL_readdir(not_null(n_47));
  return(t);
}
ATerm find_plugins_2 (ATerm t, ATerm c_63 (ATerm), ATerm d_63 (ATerm))
{
  t = c_63(t);
  {
    ATerm n_7 (ATerm t)
    {
      ATerm s_47 = NULL;
      s_47 = t;
      {
        t = readdir_0(t);
        {
          ATerm o_7 (ATerm t)
          {
            ATerm u_47 = NULL;
            t = has_extension_1(t, d_63);
            {
              ATerm v_47 = NULL;
              v_47 = t;
              if(((u_47 != NULL) && (u_47 != v_47)))
                _fail(v_47);
              else
                u_47 = v_47;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_47)), term_w_11), not_null(s_47));
                t = concat_strings_0(t);
              }
            }
            return(t);
          }
          t = filter_1(t, o_7);
        }
      }
      return(t);
    }
    t = filter_1(t, n_7);
    t = concat_0(t);
  }
  return(t);
}
ATerm import_config_files_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm q_24;
  q_24 = t;
  {
    t = f_63(t);
    {
      ATerm t_7 (ATerm t)
      {
        ATerm z_47 = NULL;
        ATerm u_7 (ATerm t)
        {
          ATerm v_7 (ATerm t)
          {
            t = term_t_24;
            return(t);
          }
          t = debug_1(t, v_7);
          return(t);
        }
        t = if_verbose2_1(t, u_7);
        {
          t = ReadFromFile_0(t);
          {
            ATerm a_48 = NULL;
            a_48 = t;
            if(((z_47 != NULL) && (z_47 != a_48)))
              _fail(a_48);
            else
              z_47 = a_48;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_z_12, not_null(z_47));
              t = table_putlist_0(t);
            }
          }
        }
        return(t);
      }
      t = map_1(t, t_7);
    }
  }
  t = q_24;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm e_48 = NULL;
  ATerm g_48 = NULL;
  e_48 = t;
  {
    ATerm u_24;
    u_24 = t;
    {
      ATerm j_48 = NULL;
      t = term_v_24;
      {
        j_48 = t;
        if(((g_48 != NULL) && (g_48 != j_48)))
          _fail(j_48);
        else
          g_48 = j_48;
      }
    }
    t = u_24;
    {
      t = SSL_open_file(not_null(e_48), not_null(g_48));
      t = SSL_close_file(not_null(e_48));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_81 (ATerm))
{
  ATerm n_48 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_48);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        {
          t = Nil_0(t);
          t = f_81(t);
        }
      }
    return(t);
  }
  t = n_48(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
        q_48 = t;
        p_48 :
        if(((ATgetType(q_48) == AT_LIST) && ((ATermList) q_48 != ATempty)))
          {
            r_48 = ATgetFirst((ATermList) q_48);
            s_48 = (ATerm) ATgetNext((ATermList) q_48);
            {
              t = not_null(r_48);
              {
                ATerm a_8 (ATerm t)
                {
                  t = not_null(s_48);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, a_8);
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
ATerm fetch_1 (ATerm t, ATerm z_80 (ATerm))
{
  ATerm a_49 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_80, _id);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = Cons_2(t, _id, a_49);
      }
    return(t);
  }
  t = a_49(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm i_49 = NULL;
  ATerm b_8 (ATerm t)
  {
    ATerm j_49 = NULL;
    t = b_81(t);
    {
      j_49 = t;
      if(((i_49 != NULL) && (i_49 != j_49)))
        _fail(j_49);
      else
        i_49 = j_49;
    }
    return(t);
  }
  t = fetch_1(t, b_8);
  t = not_null(i_49);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm u_62 (ATerm), ATerm v_62 (ATerm))
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_62(t);
      {
        ATerm c_8 (ATerm t)
        {
          ATerm n_49 = NULL,p_49 = NULL;
          ATerm g_25;
          g_25 = t;
          {
            ATerm o_49 = NULL;
            o_49 = t;
            if(((n_49 != NULL) && (n_49 != o_49)))
              _fail(o_49);
            else
              n_49 = o_49;
          }
          t = g_25;
          {
            ATerm q_49 = NULL;
            t = v_62(t);
            {
              q_49 = t;
              if(((p_49 != NULL) && (p_49 != q_49)))
                _fail(q_49);
              else
                p_49 = q_49;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_49)), term_w_11), not_null(n_49));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, c_8);
      }
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        t = term_k_13;
        {
          t = debug_1(t, v_62);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
  x_49 = t;
  w_49 :
  if(match_cons(x_49, sym__2))
    {
      y_49 = ATgetArgument(x_49, 0);
      z_49 = ATgetArgument(x_49, 1);
      {
        t = not_null(z_49);
        {
          ATerm d_8 (ATerm t)
          {
            ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
            c_50 = t;
            v_49 :
            if(match_cons(c_50, sym__2))
              {
                d_50 = ATgetArgument(c_50, 0);
                e_50 = ATgetArgument(c_50, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(y_49), not_null(d_50), not_null(e_50));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, d_8);
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
  ATerm e_51 = NULL;
  e_51 = t;
  t = SSL_ReadFromFile(not_null(e_51));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
  l_51 = t;
  k_51 :
  if(match_cons(l_51, sym__2))
    {
      m_51 = ATgetArgument(l_51, 0);
      n_51 = ATgetArgument(l_51, 1);
      {
        ATerm k_25;
        k_25 = t;
        t = SSL_printnl(not_null(m_51), not_null(n_51));
        t = k_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm r_71 (ATerm))
{
  ATerm l_25;
  l_25 = t;
  {
    ATerm t_51 = NULL,v_51 = NULL;
    ATerm m_25;
    m_25 = t;
    {
      ATerm u_51 = NULL;
      t = r_71(t);
      {
        u_51 = t;
        if(((t_51 != NULL) && (t_51 != u_51)))
          _fail(u_51);
        else
          t_51 = u_51;
      }
    }
    t = m_25;
    {
      ATerm w_51 = NULL;
      w_51 = t;
      if(((v_51 != NULL) && (v_51 != w_51)))
        _fail(w_51);
      else
        v_51 = w_51;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_51)), not_null(t_51)));
        t = printnl_0(t);
      }
    }
  }
  t = l_25;
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
  b_52 = t;
  a_52 :
  if(match_cons(b_52, sym__2))
    {
      c_52 = ATgetArgument(b_52, 0);
      d_52 = ATgetArgument(b_52, 1);
      {
        ATerm n_25;
        n_25 = t;
        {
          ATerm q_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_52), not_null(d_52));
              LocalPopChoice(r_25);
            }
          else
            {
              t = q_25;
              t = SSL_gtr(not_null(c_52), not_null(d_52));
            }
        }
        t = n_25;
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
  ATerm j_52 = NULL;
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
      k_52 = t;
      i_52 :
      if(match_cons(k_52, sym__2))
        {
          l_52 = ATgetArgument(k_52, 0);
          m_52 = ATgetArgument(k_52, 1);
          {
            if(((j_52 != NULL) && (j_52 != l_52)))
              _fail(l_52);
            else
              j_52 = l_52;
            if(((j_52 != NULL) && (j_52 != m_52)))
              _fail(m_52);
            else
              j_52 = m_52;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      t = gt_0(t);
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  ATerm v_25;
  v_25 = t;
  {
    ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
    t_52 = t;
    p_52 :
    if(match_cons(t_52, sym__3))
      {
        u_52 = ATgetArgument(t_52, 0);
        v_52 = ATgetArgument(t_52, 1);
        w_52 = ATgetArgument(t_52, 2);
        {
          if(((q_52 != NULL) && (q_52 != u_52)))
            _fail(u_52);
          else
            q_52 = u_52;
          {
            if(((r_52 != NULL) && (r_52 != v_52)))
              _fail(v_52);
            else
              r_52 = v_52;
            {
              if(((s_52 != NULL) && (s_52 != w_52)))
                _fail(w_52);
              else
                s_52 = w_52;
              t = SSL_table_put(not_null(q_52), not_null(r_52), not_null(s_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_25;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm c_53 = NULL;
  c_53 = t;
  b_53 :
  if(((ATermList) c_53 == ATempty))
    {
      {
        ATerm e_53 = NULL,g_53 = NULL;
        ATerm w_25;
        w_25 = t;
        {
          ATerm f_53 = NULL;
          t = SSLgetAnnotations(not_null(c_53));
          {
            f_53 = t;
            if(((e_53 != NULL) && (e_53 != f_53)))
              _fail(f_53);
            else
              e_53 = f_53;
          }
        }
        t = w_25;
        {
          ATerm h_53 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_53));
          {
            h_53 = t;
            if(((g_53 != NULL) && (g_53 != h_53)))
              _fail(h_53);
            else
              g_53 = h_53;
          }
          t = not_null(g_53);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm l_53 (ATerm t)
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = Cons_2(t, r_80, l_53);
      }
    return(t);
  }
  t = l_53(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_53 = NULL;
  n_53 = t;
  t = SSL_is_string(not_null(n_53));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_8 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, e_8);
            LocalPopChoice(i_26);
          }
        else
          {
            t = h_26;
            {
              ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL;
              w_53 = t;
              v_53 :
              if(match_cons(w_53, sym_Path_1))
                {
                  x_53 = ATgetArgument(w_53, 0);
                  t = not_null(x_53);
                }
              else
                {
                  if(match_cons(w_53, sym_Var_1))
                    {
                      x_53 = ATgetArgument(w_53, 0);
                      {
                        t = not_null(x_53);
                        {
                          ATerm k_26 = t;
                          int l_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_26);
                            }
                          else
                            {
                              t = k_26;
                              {
                                ATerm k_8 (ATerm t)
                                {
                                  t = term_u_26;
                                  return(t);
                                }
                                t = debug_1(t, k_8);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_53, sym_Prefix_2))
                        {
                          x_53 = ATgetArgument(w_53, 0);
                          y_53 = ATgetArgument(w_53, 1);
                          {
                            ATerm d_54 = NULL,f_54 = NULL;
                            ATerm v_26;
                            v_26 = t;
                            {
                              ATerm e_54 = NULL;
                              t = not_null(x_53);
                              {
                                t = eval_config_0(t);
                                {
                                  e_54 = t;
                                  if(((d_54 != NULL) && (d_54 != e_54)))
                                    _fail(e_54);
                                  else
                                    d_54 = e_54;
                                }
                              }
                            }
                            t = v_26;
                            {
                              ATerm g_54 = NULL;
                              t = not_null(y_53);
                              {
                                t = eval_config_0(t);
                                {
                                  g_54 = t;
                                  if(((f_54 != NULL) && (f_54 != g_54)))
                                    _fail(g_54);
                                  else
                                    f_54 = g_54;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_54), not_null(f_54));
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
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
  o_54 = t;
  n_54 :
  if(match_cons(o_54, sym__2))
    {
      p_54 = ATgetArgument(o_54, 0);
      q_54 = ATgetArgument(o_54, 1);
      t = SSL_table_get(not_null(p_54), not_null(q_54));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm w_54 = NULL;
  w_54 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_12, not_null(w_54));
    {
      t = table_get_0(t);
      {
        ATerm l_8 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_26;
            w_26 = t;
            {
              ATerm y_54 = NULL;
              ATerm z_54 = NULL;
              z_54 = t;
              if(((y_54 != NULL) && (y_54 != z_54)))
                _fail(z_54);
              else
                y_54 = z_54;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_12, not_null(w_54), not_null(y_54));
                t = table_put_0(t);
              }
            }
            t = w_26;
          }
          return(t);
        }
        t = try_1(t, l_8);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_89 (ATerm))
{
  ATerm x_26 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_89(t);
      LocalPopChoice(c_27);
    }
  else
    {
      t = x_26;
      {
      }
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm p_8 (ATerm t)
  {
    ATerm d_27;
    d_27 = t;
    {
      ATerm d_55 = NULL;
      ATerm e_55 = NULL;
      t = term_h_10;
      {
        t = get_config_0(t);
        {
          e_55 = t;
          if(((d_55 != NULL) && (d_55 != e_55)))
            _fail(e_55);
          else
            d_55 = e_55;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_55), term_e_27);
        t = geq_0(t);
      }
    }
    t = d_27;
    t = p_69(t);
    return(t);
  }
  t = try_1(t, p_8);
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm e_63 (ATerm))
{
  ATerm f_27;
  f_27 = t;
  {
    ATerm h_55 = NULL;
    t = e_63(t);
    {
      ATerm q_8 (ATerm t)
      {
        ATerm s_8 (ATerm t)
        {
          t = term_t_24;
          return(t);
        }
        t = debug_1(t, s_8);
        return(t);
      }
      t = if_verbose2_1(t, q_8);
      {
        t = ReadFromFile_0(t);
        {
          ATerm i_55 = NULL;
          i_55 = t;
          if(((h_55 != NULL) && (h_55 != i_55)))
            _fail(i_55);
          else
            h_55 = i_55;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_z_12, not_null(h_55));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = f_27;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm l_55 = NULL;
  l_55 = t;
  t = SSL_implode_string(not_null(l_55));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm p_55 = NULL;
  p_55 = t;
  t = SSL_explode_string(not_null(p_55));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_55 (ATerm t)
        {
          ATerm i_27 = t;
          int j_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, u_55);
              LocalPopChoice(j_27);
            }
          else
            {
              t = i_27;
              {
                ATerm t_8 (ATerm t)
                {
                  ATerm t_55 = NULL;
                  t_55 = t;
                  s_55 :
                  if(!(match_int(t_55, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm u_8 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, t_8, u_8);
              }
            }
          return(t);
        }
        t = u_55(t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_62 (ATerm), ATerm p_62 (ATerm))
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL;
  b_56 = t;
  a_56 :
  if(((ATgetType(b_56) == AT_LIST) && ((ATermList) b_56 != ATempty)))
    {
      c_56 = ATgetFirst((ATermList) b_56);
      d_56 = (ATerm) ATgetNext((ATermList) b_56);
      {
        ATerm h_56 = NULL,j_56 = NULL;
        ATerm i_56 = NULL;
        t = SSLgetAnnotations(not_null(b_56));
        {
          i_56 = t;
          if(((h_56 != NULL) && (h_56 != i_56)))
            _fail(i_56);
          else
            h_56 = i_56;
        }
        {
          t = not_null(c_56);
          {
            ATerm l_56 = NULL;
            t = o_62(t);
            {
              j_56 = t;
              {
                t = not_null(d_56);
                {
                  ATerm n_56 = NULL;
                  t = p_62(t);
                  {
                    l_56 = t;
                    {
                      ATerm o_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_56)), not_null(j_56)), not_null(h_56));
                      {
                        o_56 = t;
                        if(((n_56 != NULL) && (n_56 != o_56)))
                          _fail(o_56);
                        else
                          n_56 = o_56;
                      }
                      t = not_null(n_56);
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
  ATerm y_56 = NULL,a_57 = NULL,c_57 = NULL;
  ATerm k_27;
  k_27 = t;
  {
    ATerm v_8 (ATerm t)
    {
      ATerm z_56 = NULL;
      t = get_path_0(t);
      {
        z_56 = t;
        if(((y_56 != NULL) && (y_56 != z_56)))
          _fail(z_56);
        else
          y_56 = z_56;
      }
      return(t);
    }
    t = Cons_2(t, v_8, _id);
  }
  t = k_27;
  {
    ATerm l_27;
    l_27 = t;
    {
      ATerm b_57 = NULL;
      t = get_conf_datadir();
      {
        b_57 = t;
        if(((a_57 != NULL) && (a_57 != b_57)))
          _fail(b_57);
        else
          a_57 = b_57;
      }
    }
    t = l_27;
    {
      ATerm m_27;
      m_27 = t;
      {
        ATerm d_57 = NULL;
        t = get_conf_pkgdatadir();
        {
          d_57 = t;
          if(((c_57 != NULL) && (c_57 != d_57)))
            _fail(d_57);
          else
            c_57 = d_57;
        }
      }
      t = m_27;
      {
        ATerm w_8 (ATerm t)
        {
          ATerm x_8 (ATerm t)
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_57)), not_null(y_56));
            return(t);
          }
          ATerm y_8 (ATerm t)
          {
            t = term_n_27;
            return(t);
          }
          t = find_config_file_2(t, x_8, y_8);
          return(t);
        }
        t = import_config_file_1(t, w_8);
        {
          ATerm z_8 (ATerm t)
          {
            ATerm a_9 (ATerm t)
            {
              ATerm e_57 = NULL;
              ATerm f_57 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_57), term_o_27);
              {
                t = conc_strings_0(t);
                {
                  f_57 = t;
                  if(((e_57 != NULL) && (e_57 != f_57)))
                    _fail(f_57);
                  else
                    e_57 = f_57;
                }
              }
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_57)), not_null(y_56));
              return(t);
            }
            ATerm b_9 (ATerm t)
            {
              t = term_p_27;
              return(t);
            }
            t = find_plugins_2(t, a_9, b_9);
            return(t);
          }
          t = import_config_files_1(t, z_8);
          t = pack_modules_2(t, pack_stratego_1, basename_0);
        }
      }
    }
  }
  return(t);
}
