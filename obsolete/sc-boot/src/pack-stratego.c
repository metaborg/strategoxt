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
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_h_26;
ATerm term_y_25;
ATerm term_j_24;
ATerm term_h_24;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_n_23;
ATerm term_k_23;
ATerm term_b_23;
ATerm term_v_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_v_20;
ATerm term_o_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_z_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_p_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_j_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_d_9;
void init_constant_terms (void)
{
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("parsing: ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("reading ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("mtree", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("module ", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-I dir] [-i file]", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-dep target | -nodep]", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d|--Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-nodep", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_NoDependency_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep f             write dependency to file f", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--prefix", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_f_10);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_10);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_c_11);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_c_11);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_c_11);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_z_21, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__3, term_z_21, term_a_22, (ATerm) ATempty);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego.config", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("/pack-stratego-plugins", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".plugin", 0, ATtrue));
}
ATerm basename_1 (ATerm, ATerm l_72 (ATerm));
ATerm basename_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm f_61 (ATerm));
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
ATerm if_verbose4_1 (ATerm, ATerm c_69 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm verbosity_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm parse_file_1 (ATerm, ATerm n_0 (ATerm));
ATerm split_2 (ATerm, ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm n_72 (ATerm));
ATerm Tl_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm get_module_ext_1 (ATerm, ATerm y_87 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm get_config_keys_1 (ATerm, ATerm t_62 (ATerm));
ATerm get_module_1 (ATerm, ATerm x_87 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm));
ATerm zip_1 (ATerm, ATerm q_78 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm v_75 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm j_63 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm b_87 (ATerm), ATerm c_87 (ATerm));
ATerm for_3 (ATerm, ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm p_63 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm c_64 (ATerm), ATerm d_64 (ATerm), ATerm e_64 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm w_87 (ATerm));
ATerm exit_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_74 (ATerm), ATerm r_74 (ATerm));
ATerm crush_2 (ATerm, ATerm e_76 (ATerm), ATerm f_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_68 (ATerm));
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm q_81 (ATerm));
ATerm separate_by_1 (ATerm, ATerm r_81 (ATerm));
ATerm obsolete_1 (ATerm, ATerm j_71 (ATerm));
ATerm open_file_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm g_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_68 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm list_1 (ATerm, ATerm a_80 (ATerm));
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_70 (ATerm));
ATerm assert_1 (ATerm, ATerm a_63 (ATerm));
ATerm extend_config_0 (ATerm);
ATerm pack_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_67 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_67 (ATerm));
ATerm Program_1 (ATerm, ATerm p_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm q_61 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_68 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_68 (ATerm));
ATerm parse_options_1 (ATerm, ATerm a_68 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm e_63 (ATerm, ATerm (ATerm)), ATerm f_63 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm r_50 (ATerm), ATerm s_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm q_80 (ATerm));
ATerm has_extension_1 (ATerm, ATerm o_72 (ATerm));
ATerm filter_1 (ATerm, ATerm w_73 (ATerm));
ATerm readdir_0 (ATerm);
ATerm find_plugins_2 (ATerm, ATerm o_62 (ATerm), ATerm p_62 (ATerm));
ATerm import_config_files_1 (ATerm, ATerm r_62 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_80 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm g_80 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm i_80 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm g_62 (ATerm), ATerm h_62 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_71 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm y_79 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_87 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm a_69 (ATerm));
ATerm import_config_file_1 (ATerm, ATerm q_62 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_62 (ATerm), ATerm b_62 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm l_72 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm d_0 (ATerm t)
    {
      ATerm g_1 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, d_0);
          LocalPopChoice(v_8);
        }
      else
        {
          t = g_1;
          {
            ATerm w_8 = t;
            int x_8 = stack_ptr;
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
                LocalPopChoice(x_8);
              }
            else
              {
                t = w_8;
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
                  t = Cons_2(t, g_0, l_72);
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
ATerm Imports_1 (ATerm t, ATerm f_61 (ATerm))
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
            t = f_61(t);
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
              ATerm c_9 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = c_9;
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
      t = term_d_9;
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
  ATerm u_9;
  u_9 = t;
  {
    ATerm w_4 = NULL;
    ATerm x_4 = NULL;
    x_4 = t;
    if(((w_4 != NULL) && (w_4 != x_4)))
      _fail(x_4);
    else
      w_4 = x_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_9, not_null(w_4));
      t = printnl_0(t);
    }
  }
  t = u_9;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm w_9;
  w_9 = t;
  {
    t = error_0(t);
    {
      t = term_x_9;
      t = exit_0(t);
    }
  }
  t = w_9;
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
  ATerm y_9;
  y_9 = t;
  {
    ATerm i_5 = NULL;
    ATerm j_5 = NULL;
    j_5 = t;
    if(((i_5 != NULL) && (i_5 != j_5)))
      _fail(j_5);
    else
      i_5 = j_5;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_9, (ATerm) ATinsert(ATempty, not_null(i_5)));
      t = printnl_0(t);
    }
  }
  t = y_9;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm c_69 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm z_9;
    z_9 = t;
    {
      ATerm m_5 = NULL;
      ATerm n_5 = NULL;
      t = term_a_10;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_5), term_b_10);
        t = geq_0(t);
      }
    }
    t = z_9;
    t = c_69(t);
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
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_10;
      t = get_config_0(t);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      t = term_f_10;
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
    t = (ATerm) ATmakeAppl(sym__2, term_g_10, not_null(m_6));
    {
      ATerm h_10 = t;
      if((PushChoice() == 0))
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_10;
        }
      {
        ATerm u_0 (ATerm t)
        {
          t = not_null(k_6);
          {
            ATerm v_0 (ATerm t)
            {
              t = term_i_10;
              return(t);
            }
            t = debug_1(t, v_0);
          }
          return(t);
        }
        t = if_verbose2_1(t, u_0);
        {
          ATerm j_10;
          j_10 = t;
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
          t = j_10;
          {
            ATerm w_6 = NULL,y_6 = NULL,a_7 = NULL;
            ATerm l_10;
            l_10 = t;
            {
              ATerm x_6 = NULL;
              t = (ATerm) ATinsert(ATempty, term_n_10);
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
            t = l_10;
            {
              ATerm z_6 = NULL;
              t = term_q_10;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_6), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(v_6)), not_null(t_6)), term_a_10), not_null(l_6)), term_s_10), not_null(k_6)), term_r_10));
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
          ATerm t_10 = t;
          int u_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = not_null(k_6);
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm y_0 (ATerm t)
                  {
                    t = term_w_10;
                    return(t);
                  }
                  t = debug_1(t, y_0);
                  return(t);
                }
                t = if_verbose2_1(t, x_0);
                t = ReadFromFile_0(t);
              }
              LocalPopChoice(u_10);
            }
          else
            {
              t = t_10;
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
ATerm split_2 (ATerm t, ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  ATerm l_7 = NULL,n_7 = NULL;
  ATerm x_10;
  x_10 = t;
  {
    ATerm m_7 = NULL;
    t = e_73(t);
    {
      m_7 = t;
      if(((l_7 != NULL) && (l_7 != m_7)))
        _fail(m_7);
      else
        l_7 = m_7;
    }
  }
  t = x_10;
  {
    ATerm o_7 = NULL;
    t = f_73(t);
    {
      o_7 = t;
      if(((n_7 != NULL) && (n_7 != o_7)))
        _fail(o_7);
      else
        n_7 = o_7;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_7), not_null(n_7));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm n_72 (ATerm))
{
  t = basename_0(t);
  {
    ATerm z_0 (ATerm t)
    {
      t = term_c_11;
      t = n_72(t);
      return(t);
    }
    t = split_2(t, _id, z_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  t_7 = t;
  s_7 :
  if(((ATgetType(t_7) == AT_LIST) && ((ATermList) t_7 != ATempty)))
    {
      u_7 = ATgetFirst((ATermList) t_7);
      v_7 = (ATerm) ATgetNext((ATermList) t_7);
      t = not_null(v_7);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym__2))
    {
      e_8 = ATgetArgument(d_8, 0);
      f_8 = ATgetArgument(d_8, 1);
      {
        t = not_null(f_8);
        {
          ATerm n_8 (ATerm t)
          {
            ATerm h_11 = t;
            int i_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
                i_8 = t;
                b_8 :
                if(((ATgetType(i_8) == AT_LIST) && ((ATermList) i_8 != ATempty)))
                  {
                    j_8 = ATgetFirst((ATermList) i_8);
                    k_8 = (ATerm) ATgetNext((ATermList) i_8);
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_8)), term_j_11), not_null(j_8));
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
                LocalPopChoice(i_11);
              }
            else
              {
                t = h_11;
                {
                  t = Tl_0(t);
                  t = n_8(t);
                }
              }
            return(t);
          }
          t = n_8(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_module_ext_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym__2))
    {
      a_9 = ATgetArgument(z_8, 0);
      b_9 = ATgetArgument(z_8, 1);
      {
        ATerm e_9 = NULL,g_9 = NULL;
        t = not_null(b_9);
        {
          ATerm a_1 (ATerm t)
          {
            t = not_null(a_9);
            return(t);
          }
          t = guarantee_extension_1(t, a_1);
          {
            ATerm k_11;
            k_11 = t;
            {
              ATerm f_9 = NULL;
              f_9 = t;
              if(((e_9 != NULL) && (e_9 != f_9)))
                _fail(f_9);
              else
                e_9 = f_9;
            }
            t = k_11;
            {
              ATerm h_9 = NULL;
              t = y_87(t);
              {
                h_9 = t;
                if(((g_9 != NULL) && (g_9 != h_9)))
                  _fail(h_9);
                else
                  g_9 = h_9;
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_9), not_null(g_9));
                {
                  t = find_in_path_0(t);
                  {
                    ATerm l_11 = t;
                    int m_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_9 = NULL,k_9 = NULL;
                        ATerm n_11;
                        n_11 = t;
                        {
                          ATerm j_9 = NULL;
                          j_9 = t;
                          if(((i_9 != NULL) && (i_9 != j_9)))
                            _fail(j_9);
                          else
                            i_9 = j_9;
                        }
                        t = n_11;
                        {
                          ATerm l_9 = NULL,n_9 = NULL,p_9 = NULL,r_9 = NULL;
                          ATerm s_11;
                          s_11 = t;
                          {
                            ATerm m_9 = NULL;
                            m_9 = t;
                            if(((l_9 != NULL) && (l_9 != m_9)))
                              _fail(m_9);
                            else
                              l_9 = m_9;
                          }
                          t = s_11;
                          {
                            ATerm w_11;
                            w_11 = t;
                            {
                              ATerm o_9 = NULL;
                              t = basename_0(t);
                              {
                                ATerm b_1 (ATerm t)
                                {
                                  t = term_c_12;
                                  return(t);
                                }
                                t = guarantee_extension_1(t, b_1);
                                {
                                  o_9 = t;
                                  if(((n_9 != NULL) && (n_9 != o_9)))
                                    _fail(o_9);
                                  else
                                    n_9 = o_9;
                                }
                              }
                            }
                            t = w_11;
                            {
                              ATerm q_9 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Ext_1, not_null(a_9));
                              {
                                t = get_config_0(t);
                                {
                                  q_9 = t;
                                  if(((p_9 != NULL) && (p_9 != q_9)))
                                    _fail(q_9);
                                  else
                                    p_9 = q_9;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_9), not_null(n_9), not_null(p_9));
                                {
                                  t = parse_file_1(t, y_87);
                                  {
                                    r_9 = t;
                                    if(((k_9 != NULL) && (k_9 != r_9)))
                                      _fail(r_9);
                                    else
                                      k_9 = r_9;
                                  }
                                }
                              }
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), not_null(k_9));
                        }
                        LocalPopChoice(m_11);
                      }
                    else
                      {
                        t = l_11;
                        {
                          ATerm s_9 = NULL;
                          ATerm t_9 = NULL;
                          t_9 = t;
                          if(((s_9 != NULL) && (s_9 != t_9)))
                            _fail(t_9);
                          else
                            s_9 = t_9;
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_9)), term_d_12);
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
  ATerm e_10 = NULL;
  e_10 = t;
  t = SSL_table_keys(not_null(e_10));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm k_10 = NULL;
  k_10 = t;
  {
    t = table_keys_0(t);
    {
      ATerm c_1 (ATerm t)
      {
        ATerm m_10 = NULL;
        ATerm o_10 = NULL;
        m_10 = t;
        {
          ATerm p_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_10), not_null(m_10));
          {
            t = table_get_0(t);
            {
              p_10 = t;
              if(((o_10 != NULL) && (o_10 != p_10)))
                _fail(p_10);
              else
                o_10 = p_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_10), not_null(o_10));
        }
        return(t);
      }
      t = map_1(t, c_1);
    }
  }
  return(t);
}
ATerm get_config_keys_1 (ATerm t, ATerm t_62 (ATerm))
{
  t = term_e_12;
  {
    t = table_getlist_0(t);
    {
      ATerm d_1 (ATerm t)
      {
        t = _2(t, t_62, _id);
        t = Fst_0(t);
        return(t);
      }
      t = filter_1(t, d_1);
    }
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm x_87 (ATerm))
{
  ATerm y_10 = NULL;
  ATerm f_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_10 = NULL;
      z_10 = t;
      {
        if(((y_10 != NULL) && (y_10 != z_10)))
          _fail(z_10);
        else
          y_10 = z_10;
        {
          ATerm e_1 (ATerm t)
          {
            ATerm a_11 = NULL,b_11 = NULL;
            a_11 = t;
            v_10 :
            if(match_cons(a_11, sym_Ext_1))
              {
                b_11 = ATgetArgument(a_11, 0);
                t = not_null(b_11);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = get_config_keys_1(t, e_1);
          {
            ATerm h_1 (ATerm t)
            {
              ATerm d_11 = NULL;
              ATerm e_11 = NULL;
              e_11 = t;
              if(((d_11 != NULL) && (d_11 != e_11)))
                _fail(e_11);
              else
                d_11 = e_11;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), not_null(y_10));
                t = get_module_ext_1(t, x_87);
              }
              return(t);
            }
            t = fetch_elem_1(t, h_1);
          }
        }
      }
      LocalPopChoice(q_12);
    }
  else
    {
      t = f_12;
      {
        ATerm f_11 = NULL;
        ATerm g_11 = NULL;
        g_11 = t;
        if(((f_11 != NULL) && (f_11 != g_11)))
          _fail(g_11);
        else
          f_11 = g_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_12), not_null(f_11)), term_r_12);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm r_11 = NULL;
  ATerm t_11 = NULL,u_11 = NULL;
  r_11 = t;
  {
    ATerm v_11 = NULL;
    ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
    t = not_null(r_11);
    {
      v_11 = t;
      {
        t = SSL_explode_term(not_null(v_11));
        {
          x_11 = t;
          o_11 :
          if(match_cons(x_11, sym__2))
            {
              y_11 = ATgetArgument(x_11, 0);
              z_11 = ATgetArgument(x_11, 1);
              p_11 :
              if(match_string(y_11, ""))
                {
                  q_11 :
                  if(((ATgetType(z_11) == AT_LIST) && ((ATermList) z_11 != ATempty)))
                    {
                      a_12 = ATgetFirst((ATermList) z_11);
                      b_12 = (ATerm) ATgetNext((ATermList) z_11);
                      {
                        if(((u_11 != NULL) && (u_11 != a_12)))
                          _fail(a_12);
                        else
                          u_11 = a_12;
                        if(((t_11 != NULL) && (t_11 != b_12)))
                          _fail(b_12);
                        else
                          t_11 = b_12;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(u_11);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  i_12 = t;
  g_12 :
  if(match_cons(i_12, sym__5))
    {
      j_12 = ATgetArgument(i_12, 0);
      m_12 = ATgetArgument(i_12, 1);
      n_12 = ATgetArgument(i_12, 2);
      o_12 = ATgetArgument(i_12, 3);
      p_12 = ATgetArgument(i_12, 4);
      h_12 :
      if(((ATgetType(j_12) == AT_LIST) && ((ATermList) j_12 != ATempty)))
        {
          k_12 = ATgetFirst((ATermList) j_12);
          l_12 = (ATerm) ATgetNext((ATermList) j_12);
          t = (ATerm) ATmakeAppl(sym__5, not_null(l_12), not_null(m_12), not_null(n_12), not_null(o_12), (ATerm) ATinsert(CheckATermList(not_null(p_12)), not_null(k_12)));
        }
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
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  a_13 = t;
  y_12 :
  if(match_cons(a_13, sym__2))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      z_12 :
      if(((ATgetType(c_13) == AT_LIST) && ((ATermList) c_13 != ATempty)))
        {
          d_13 = ATgetFirst((ATermList) c_13);
          e_13 = (ATerm) ATgetNext((ATermList) c_13);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_13)), not_null(d_13)), not_null(e_13));
        }
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
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym__2))
    {
      m_13 = ATgetArgument(l_13, 0);
      n_13 = ATgetArgument(l_13, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_13)), not_null(m_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
  v_13 = t;
  s_13 :
  if(match_cons(v_13, sym__2))
    {
      w_13 = ATgetArgument(v_13, 0);
      z_13 = ATgetArgument(v_13, 1);
      t_13 :
      if(((ATgetType(w_13) == AT_LIST) && ((ATermList) w_13 != ATempty)))
        {
          x_13 = ATgetFirst((ATermList) w_13);
          y_13 = (ATerm) ATgetNext((ATermList) w_13);
          u_13 :
          if(((ATgetType(z_13) == AT_LIST) && ((ATermList) z_13 != ATempty)))
            {
              a_14 = ATgetFirst((ATermList) z_13);
              b_14 = (ATerm) ATgetNext((ATermList) z_13);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_13), not_null(a_14)), (ATerm) ATmakeAppl(sym__2, not_null(y_13), not_null(b_14)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  i_14 :
  if(match_cons(l_14, sym__2))
    {
      m_14 = ATgetArgument(l_14, 0);
      n_14 = ATgetArgument(l_14, 1);
      j_14 :
      if(((ATermList) m_14 == ATempty))
        {
          k_14 :
          if(((ATermList) n_14 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm o_78 (ATerm))
{
  ATerm p_14 (ATerm t)
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_78(t);
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        {
          t = m_78(t);
          {
            t = _2(t, o_78, p_14);
            t = n_78(t);
          }
        }
      }
    return(t);
  }
  t = p_14(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm q_78 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, q_78);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  a_15 = t;
  y_14 :
  if(((ATgetType(a_15) == AT_LIST) && ((ATermList) a_15 != ATempty)))
    {
      b_15 = ATgetFirst((ATermList) a_15);
      e_15 = (ATerm) ATgetNext((ATermList) a_15);
      z_14 :
      if(match_cons(b_15, sym__2))
        {
          c_15 = ATgetArgument(b_15, 0);
          d_15 = ATgetArgument(b_15, 1);
          {
            ATerm i_15 = NULL,j_15 = NULL,p_15 = NULL,v_15 = NULL;
            ATerm v_12;
            v_12 = t;
            {
              ATerm k_15 = NULL;
              ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
              t = not_null(d_15);
              {
                k_15 = t;
                {
                  t = SSL_explode_term(not_null(k_15));
                  {
                    m_15 = t;
                    t_14 :
                    if(match_cons(m_15, sym__2))
                      {
                        n_15 = ATgetArgument(m_15, 0);
                        o_15 = ATgetArgument(m_15, 1);
                        {
                          if(((i_15 != NULL) && (i_15 != n_15)))
                            _fail(n_15);
                          else
                            i_15 = n_15;
                          if(((j_15 != NULL) && (j_15 != o_15)))
                            _fail(o_15);
                          else
                            j_15 = o_15;
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
            t = v_12;
            {
              ATerm w_12;
              w_12 = t;
              {
                ATerm q_15 = NULL;
                ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
                t = not_null(c_15);
                {
                  q_15 = t;
                  {
                    t = SSL_explode_term(not_null(q_15));
                    {
                      s_15 = t;
                      w_14 :
                      if(match_cons(s_15, sym__2))
                        {
                          t_15 = ATgetArgument(s_15, 0);
                          u_15 = ATgetArgument(s_15, 1);
                          {
                            if(((i_15 != NULL) && (i_15 != t_15)))
                              _fail(t_15);
                            else
                              i_15 = t_15;
                            if(((p_15 != NULL) && (p_15 != u_15)))
                              _fail(u_15);
                            else
                              p_15 = u_15;
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
              t = w_12;
              {
                ATerm w_15 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(j_15));
                {
                  t = zip_1(t, _id);
                  {
                    w_15 = t;
                    if(((v_15 != NULL) && (v_15 != w_15)))
                      _fail(w_15);
                    else
                      v_15 = w_15;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), not_null(e_15));
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
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
  g_16 = t;
  e_16 :
  if(((ATgetType(g_16) == AT_LIST) && ((ATermList) g_16 != ATempty)))
    {
      h_16 = ATgetFirst((ATermList) g_16);
      k_16 = (ATerm) ATgetNext((ATermList) g_16);
      f_16 :
      if(match_cons(h_16, sym__2))
        {
          i_16 = ATgetArgument(h_16, 0);
          j_16 = ATgetArgument(h_16, 1);
          {
            ATerm m_16 = NULL;
            if(((i_16 != NULL) && (i_16 != j_16)))
              _fail(j_16);
            else
              i_16 = j_16;
            {
              if(((m_16 != NULL) && (m_16 != k_16)))
                _fail(k_16);
              else
                m_16 = k_16;
              t = not_null(m_16);
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
ATerm HdMember_1 (ATerm t, ATerm v_75 (ATerm))
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  q_16 :
  if(((ATgetType(r_16) == AT_LIST) && ((ATermList) r_16 != ATempty)))
    {
      s_16 = ATgetFirst((ATermList) r_16);
      t_16 = (ATerm) ATgetNext((ATermList) r_16);
      {
        t = v_75(t);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm w_16 = NULL;
            w_16 = t;
            if(((s_16 != NULL) && (s_16 != w_16)))
              _fail(w_16);
            else
              s_16 = w_16;
            return(t);
          }
          t = fetch_1(t, i_1);
        }
        t = not_null(t_16);
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
  ATerm x_12 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
      c_17 = t;
      a_17 :
      if(match_cons(c_17, sym__2))
        {
          d_17 = ATgetArgument(c_17, 0);
          e_17 = ATgetArgument(c_17, 1);
          {
            t = not_null(d_17);
            {
              ATerm k_17 (ATerm t)
              {
                ATerm g_13 = t;
                int h_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(h_13);
                  }
                else
                  {
                    t = g_13;
                    {
                      ATerm i_13 = t;
                      int j_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_1 (ATerm t)
                          {
                            t = not_null(e_17);
                            return(t);
                          }
                          t = HdMember_1(t, j_1);
                          t = k_17(t);
                          LocalPopChoice(j_13);
                        }
                      else
                        {
                          t = i_13;
                          t = Cons_2(t, _id, k_17);
                        }
                    }
                  }
                return(t);
              }
              t = k_17(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_13);
    }
  else
    {
      t = x_12;
      {
        ATerm k_1 (ATerm t)
        {
          ATerm h_17 = NULL;
          h_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(h_17));
          return(t);
        }
        ATerm l_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm m_1 (ATerm t)
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_1 (ATerm t)
              {
                ATerm q_13 = t;
                int r_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(r_13);
                  }
                else
                  {
                    t = q_13;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, n_1);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, k_1, l_1, m_1);
      }
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm j_63 (ATerm))
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  v_17 = t;
  t_17 :
  if(match_cons(v_17, sym__5))
    {
      w_17 = ATgetArgument(v_17, 0);
      z_17 = ATgetArgument(v_17, 1);
      a_18 = ATgetArgument(v_17, 2);
      b_18 = ATgetArgument(v_17, 3);
      c_18 = ATgetArgument(v_17, 4);
      u_17 :
      if(((ATgetType(w_17) == AT_LIST) && ((ATermList) w_17 != ATempty)))
        {
          x_17 = ATgetFirst((ATermList) w_17);
          y_17 = (ATerm) ATgetNext((ATermList) w_17);
          {
            ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,p_18 = NULL,r_18 = NULL,t_18 = NULL;
            ATerm c_14;
            c_14 = t;
            {
              ATerm m_18 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), not_null(a_18));
              {
                ATerm n_18 = NULL;
                t = h_63(t);
                {
                  m_18 = t;
                  {
                    if(((j_18 != NULL) && (j_18 != m_18)))
                      _fail(m_18);
                    else
                      j_18 = m_18;
                    {
                      t = not_null(j_18);
                      {
                        ATerm o_18 = NULL;
                        t = i_63(t);
                        {
                          n_18 = t;
                          {
                            if(((k_18 != NULL) && (k_18 != n_18)))
                              _fail(n_18);
                            else
                              k_18 = n_18;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(k_18), not_null(z_17));
                              {
                                t = diff_0(t);
                                {
                                  o_18 = t;
                                  if(((l_18 != NULL) && (l_18 != o_18)))
                                    _fail(o_18);
                                  else
                                    l_18 = o_18;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = c_14;
            {
              ATerm d_14;
              d_14 = t;
              {
                ATerm q_18 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(y_17));
                {
                  t = conc_0(t);
                  {
                    q_18 = t;
                    if(((p_18 != NULL) && (p_18 != q_18)))
                      _fail(q_18);
                    else
                      p_18 = q_18;
                  }
                }
              }
              t = d_14;
              {
                ATerm e_14;
                e_14 = t;
                {
                  ATerm s_18 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(z_17));
                  {
                    t = conc_0(t);
                    {
                      s_18 = t;
                      if(((r_18 != NULL) && (r_18 != s_18)))
                        _fail(s_18);
                      else
                        r_18 = s_18;
                    }
                  }
                }
                t = e_14;
                {
                  ATerm u_18 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(x_17), not_null(j_18), not_null(b_18));
                  {
                    t = j_63(t);
                    {
                      u_18 = t;
                      if(((t_18 != NULL) && (t_18 != u_18)))
                        _fail(u_18);
                      else
                        t_18 = u_18;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(p_18), not_null(r_18), not_null(a_18), not_null(t_18), not_null(c_18));
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
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  f_19 = t;
  d_19 :
  if(match_cons(f_19, sym__5))
    {
      g_19 = ATgetArgument(f_19, 0);
      h_19 = ATgetArgument(f_19, 1);
      i_19 = ATgetArgument(f_19, 2);
      j_19 = ATgetArgument(f_19, 3);
      k_19 = ATgetArgument(f_19, 4);
      e_19 :
      if(((ATermList) g_19 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), not_null(k_19));
        }
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
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
  s_19 = t;
  r_19 :
  if(match_cons(s_19, sym__3))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      v_19 = ATgetArgument(s_19, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(t_19), not_null(t_19), not_null(u_19), not_null(v_19), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm b_87 (ATerm), ATerm c_87 (ATerm))
{
  ATerm a_20 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_87(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        {
          t = c_87(t);
          t = a_20(t);
        }
      }
    return(t);
  }
  t = a_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm))
{
  t = e_87(t);
  t = while_not_2(t, f_87, g_87);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm p_63 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm h_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, n_63, o_63, p_63);
        LocalPopChoice(o_14);
      }
    else
      {
        t = h_14;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, o_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm c_64 (ATerm), ATerm d_64 (ATerm), ATerm e_64 (ATerm))
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  t = graph_nodes_undef_roots_3(t, c_64, d_64, e_64);
  {
    d_20 = t;
    c_20 :
    if(match_cons(d_20, sym__2))
      {
        e_20 = ATgetArgument(d_20, 0);
        f_20 = ATgetArgument(d_20, 1);
        t = not_null(e_20);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm pack_stratego_1 (ATerm t, ATerm w_87 (ATerm))
{
  ATerm n_20 = NULL;
  n_20 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(n_20)), term_r_14), term_q_14), term_c_11, (ATerm) ATempty);
    {
      ATerm p_1 (ATerm t)
      {
        t = Fst_0(t);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm p_20 = NULL;
            ATerm q_20 = NULL;
            t = term_c_11;
            {
              t = w_87(t);
              {
                q_20 = t;
                if(((p_20 != NULL) && (p_20 != q_20)))
                  _fail(q_20);
                else
                  p_20 = q_20;
              }
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(p_20)), term_s_14);
            return(t);
          }
          t = get_module_1(t, r_1);
        }
        return(t);
      }
      ATerm q_1 (ATerm t)
      {
        ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
        r_20 = t;
        m_20 :
        if(match_cons(r_20, sym__3))
          {
            s_20 = ATgetArgument(r_20, 0);
            t_20 = ATgetArgument(r_20, 1);
            u_20 = ATgetArgument(r_20, 2);
            t = (ATerm) ATinsert(CheckATermList(not_null(u_20)), not_null(t_20));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = graph_nodes_roots_3(t, p_1, get_stratego_imports_0, q_1);
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
  ATerm d_21 = NULL;
  d_21 = t;
  t = SSL_exit(not_null(d_21));
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_21 = NULL;
  k_21 = t;
  t = SSL_TicksToSeconds(not_null(k_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym__2))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_21), not_null(y_21));
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            t = SSL_addr(not_null(x_21), not_null(y_21));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_74 (ATerm), ATerm r_74 (ATerm))
{
  ATerm x_14 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_74(t);
      LocalPopChoice(f_15);
    }
  else
    {
      t = x_14;
      {
        ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
        d_23 = t;
        l_22 :
        if(((ATgetType(d_23) == AT_LIST) && ((ATermList) d_23 != ATempty)))
          {
            e_23 = ATgetFirst((ATermList) d_23);
            f_23 = (ATerm) ATgetNext((ATermList) d_23);
            {
              ATerm u_23 = NULL;
              ATerm v_23 = NULL;
              t = not_null(f_23);
              {
                t = foldr_2(t, q_74, r_74);
                {
                  v_23 = t;
                  if(((u_23 != NULL) && (u_23 != v_23)))
                    _fail(v_23);
                  else
                    u_23 = v_23;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_23), not_null(u_23));
                t = r_74(t);
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
ATerm crush_2 (ATerm t, ATerm e_76 (ATerm), ATerm f_76 (ATerm))
{
  ATerm m_24 = NULL;
  ATerm q_24 = NULL;
  m_24 = t;
  {
    ATerm r_24 = NULL;
    ATerm t_24 = NULL,e_25 = NULL,f_25 = NULL;
    t = not_null(m_24);
    {
      r_24 = t;
      {
        t = SSL_explode_term(not_null(r_24));
        {
          t_24 = t;
          b_24 :
          if(match_cons(t_24, sym__2))
            {
              e_25 = ATgetArgument(t_24, 0);
              f_25 = ATgetArgument(t_24, 1);
              if(((q_24 != NULL) && (q_24 != f_25)))
                _fail(f_25);
              else
                q_24 = f_25;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_24);
      t = foldr_2(t, e_76, f_76);
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
    ATerm s_1 (ATerm t)
    {
      t = term_f_10;
      return(t);
    }
    t = crush_2(t, s_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_68 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    ATerm g_15;
    g_15 = t;
    {
      ATerm k_25 = NULL;
      ATerm l_25 = NULL;
      t = term_a_10;
      {
        t = get_config_0(t);
        {
          l_25 = t;
          if(((k_25 != NULL) && (k_25 != l_25)))
            _fail(l_25);
          else
            k_25 = l_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_25), term_x_9);
        t = geq_0(t);
      }
    }
    t = g_15;
    t = z_68(t);
    return(t);
  }
  t = try_1(t, t_1);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  t = SSL_close_file(not_null(o_25));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm q_81 (ATerm))
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t_25 :
  if(((ATgetType(u_25) == AT_LIST) && ((ATermList) u_25 != ATempty)))
    {
      v_25 = ATgetFirst((ATermList) u_25);
      w_25 = (ATerm) ATgetNext((ATermList) u_25);
      {
        ATerm z_25 = NULL;
        ATerm a_26 = NULL;
        t = term_c_11;
        {
          t = q_81(t);
          {
            a_26 = t;
            if(((z_25 != NULL) && (z_25 != a_26)))
              _fail(a_26);
            else
              z_25 = a_26;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(w_25)), not_null(v_25)), not_null(z_25));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm r_81 (ATerm))
{
  ATerm h_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_15);
    }
  else
    {
      t = h_15;
      {
        ATerm u_1 (ATerm t)
        {
          ATerm r_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_15);
            }
          else
            {
              t = r_15;
              {
                t = Cons_2(t, _id, u_1);
                t = Sep_1(t, r_81);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, u_1);
      }
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm j_71 (ATerm))
{
  ATerm y_15;
  y_15 = t;
  {
    t = j_71(t);
    {
      ATerm v_1 (ATerm t)
      {
        t = term_z_15;
        return(t);
      }
      t = debug_1(t, v_1);
    }
  }
  t = y_15;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL;
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
      k_26 = t;
      f_26 :
      if(match_cons(k_26, sym__2))
        {
          l_26 = ATgetArgument(k_26, 0);
          m_26 = ATgetArgument(k_26, 1);
          {
            if(((j_26 != NULL) && (j_26 != l_26)))
              _fail(l_26);
            else
              j_26 = l_26;
            {
              if(((i_26 != NULL) && (i_26 != m_26)))
                _fail(m_26);
              else
                i_26 = m_26;
              t = SSL_open_file(not_null(j_26), not_null(i_26));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      {
        ATerm n_26 = NULL;
        ATerm o_26 = NULL;
        ATerm w_1 (ATerm t)
        {
          t = term_c_16;
          return(t);
        }
        t = obsolete_1(t, w_1);
        {
          n_26 = t;
          {
            if(((j_26 != NULL) && (j_26 != n_26)))
              _fail(n_26);
            else
              j_26 = n_26;
            {
              ATerm d_16;
              d_16 = t;
              {
                ATerm p_26 = NULL;
                t = term_l_16;
                {
                  p_26 = t;
                  if(((o_26 != NULL) && (o_26 != p_26)))
                    _fail(p_26);
                  else
                    o_26 = p_26;
                }
              }
              t = d_16;
              t = SSL_open_file(not_null(j_26), not_null(o_26));
            }
          }
        }
      }
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym__2))
    {
      w_26 = ATgetArgument(v_26, 0);
      x_26 = ATgetArgument(v_26, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_26)), term_s_14), not_null(w_26));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_dep_file_1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym__2))
    {
      i_27 = ATgetArgument(h_27, 0);
      j_27 = ATgetArgument(h_27, 1);
      {
        ATerm t_27 = NULL,u_27 = NULL;
        ATerm b_28 = NULL;
        t = not_null(i_27);
        {
          ATerm c_28 = NULL,h_28 = NULL;
          t = g_63(t);
          {
            b_28 = t;
            {
              if(((t_27 != NULL) && (t_27 != b_28)))
                _fail(b_28);
              else
                t_27 = b_28;
              {
                ATerm g_28 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), term_n_16);
                {
                  t = add_extension_0(t);
                  {
                    g_28 = t;
                    if(((c_28 != NULL) && (c_28 != g_28)))
                      _fail(g_28);
                    else
                      c_28 = g_28;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_28), term_l_16);
                  {
                    ATerm i_28 = NULL;
                    t = open_file_0(t);
                    {
                      h_28 = t;
                      {
                        if(((u_27 != NULL) && (u_27 != h_28)))
                          _fail(h_28);
                        else
                          u_27 = h_28;
                        {
                          ATerm j_28 = NULL;
                          t = (ATerm) ATinsert(CheckATermList(not_null(j_27)), term_o_16);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              t = term_p_16;
                              return(t);
                            }
                            t = separate_by_1(t, x_1);
                            {
                              j_28 = t;
                              if(((i_28 != NULL) && (i_28 != j_28)))
                                _fail(j_28);
                              else
                                i_28 = j_28;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_27), (ATerm) ATinsert(CheckATermList(not_null(i_28)), not_null(t_27)));
                            {
                              t = printnl_0(t);
                              {
                                t = not_null(u_27);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_27), not_null(j_27));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_68 (ATerm))
{
  t = fetch_1(t, x_68);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  r_28 = t;
  q_28 :
  if(match_cons(r_28, sym__2))
    {
      s_28 = ATgetArgument(r_28, 0);
      t_28 = ATgetArgument(r_28, 1);
      t = SSL_WriteToTextFile(not_null(s_28), not_null(t_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  z_28 :
  if(match_cons(a_29, sym__2))
    {
      b_29 = ATgetArgument(a_29, 0);
      c_29 = ATgetArgument(a_29, 1);
      t = SSL_WriteToBinaryFile(not_null(b_29), not_null(c_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm g_29 (ATerm t)
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        t = Cons_2(t, a_80, g_29);
      }
    return(t);
  }
  t = g_29(t);
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm j_29 = NULL;
  ATerm y_1 (ATerm t)
  {
    ATerm k_29 = NULL,n_29 = NULL;
    k_29 = t;
    i_29 :
    if(match_cons(k_29, sym_Program_1))
      {
        n_29 = ATgetArgument(k_29, 0);
        if(((j_29 != NULL) && (j_29 != n_29)))
          _fail(n_29);
        else
          j_29 = n_29;
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = option_defined_1(t, y_1);
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_17), term_z_16), term_y_16), not_null(j_29)), term_x_16));
    {
      t = printnl_0(t);
      {
        t = term_x_9;
        t = exit_0(t);
      }
    }
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_29 = NULL;
  t_29 = t;
  s_29 :
  if(match_cons(t_29, sym_Version_0))
    {
      ATerm v_29 = NULL,x_29 = NULL;
      ATerm f_17;
      f_17 = t;
      {
        ATerm w_29 = NULL;
        t = SSLgetAnnotations(not_null(t_29));
        {
          w_29 = t;
          if(((v_29 != NULL) && (v_29 != w_29)))
            _fail(w_29);
          else
            v_29 = w_29;
        }
      }
      t = f_17;
      {
        ATerm y_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_29));
        {
          y_29 = t;
          if(((x_29 != NULL) && (x_29 != y_29)))
            _fail(y_29);
          else
            x_29 = y_29;
        }
        t = not_null(x_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_70 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm g_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = g_17;
        {
          ATerm j_17 = t;
          int l_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_17);
            }
          else
            {
              t = j_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_1);
  t = k_70(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm a_63 (ATerm))
{
  ATerm h_30 = NULL,i_30 = NULL,r_30 = NULL;
  h_30 = t;
  g_30 :
  if(match_cons(h_30, sym__2))
    {
      i_30 = ATgetArgument(h_30, 0);
      r_30 = ATgetArgument(h_30, 1);
      {
        ATerm u_30 = NULL,x_30 = NULL,y_30 = NULL;
        ATerm m_17;
        m_17 = t;
        {
          ATerm z_30 = NULL;
          ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
          t = a_63(t);
          {
            z_30 = t;
            {
              if(((u_30 != NULL) && (u_30 != z_30)))
                _fail(z_30);
              else
                u_30 = z_30;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(u_30), not_null(i_30), not_null(r_30));
                {
                  t = table_push_0(t);
                  {
                    ATerm n_17 = t;
                    int o_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_30), term_p_17);
                        t = table_get_0(t);
                        LocalPopChoice(o_17);
                      }
                    else
                      {
                        t = n_17;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      a_31 = t;
                      f_30 :
                      if(((ATgetType(a_31) == AT_LIST) && ((ATermList) a_31 != ATempty)))
                        {
                          b_31 = ATgetFirst((ATermList) a_31);
                          c_31 = (ATerm) ATgetNext((ATermList) a_31);
                          {
                            if(((x_30 != NULL) && (x_30 != b_31)))
                              _fail(b_31);
                            else
                              x_30 = b_31;
                            {
                              if(((y_30 != NULL) && (y_30 != c_31)))
                                _fail(c_31);
                              else
                                y_30 = c_31;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(u_30), term_p_17, (ATerm) ATinsert(CheckATermList(not_null(y_30)), (ATerm) ATinsert(CheckATermList(not_null(x_30)), not_null(i_30))));
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
        t = m_17;
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
  ATerm n_31 = NULL,o_31 = NULL,q_31 = NULL;
  n_31 = t;
  j_31 :
  if(match_cons(n_31, sym__2))
    {
      o_31 = ATgetArgument(n_31, 0);
      q_31 = ATgetArgument(n_31, 1);
      {
        ATerm t_31 = NULL;
        ATerm u_31 = NULL,w_31 = NULL;
        ATerm v_31 = NULL;
        t = not_null(o_31);
        {
          ATerm q_17 = t;
          int r_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(r_17);
            }
          else
            {
              t = q_17;
              t = (ATerm) ATempty;
            }
          {
            v_31 = t;
            if(((u_31 != NULL) && (u_31 != v_31)))
              _fail(v_31);
            else
              u_31 = v_31;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_31), not_null(u_31));
          {
            t = conc_0(t);
            {
              w_31 = t;
              if(((t_31 != NULL) && (t_31 != w_31)))
                _fail(w_31);
              else
                t_31 = w_31;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_12, not_null(o_31), not_null(t_31));
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
  ATerm s_17 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm k_32 = NULL;
        k_32 = t;
        a_32 :
        if(!(match_string(k_32, "-I")))
          {
            if(!(match_string(k_32, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        ATerm n_32 = NULL;
        ATerm e_18;
        e_18 = t;
        {
          ATerm l_32 = NULL;
          ATerm m_32 = NULL;
          m_32 = t;
          if(((l_32 != NULL) && (l_32 != m_32)))
            _fail(m_32);
          else
            l_32 = m_32;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_q_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_32)), term_q_10));
            t = extend_config_0(t);
          }
        }
        t = e_18;
        {
          ATerm o_32 = NULL;
          o_32 = t;
          if(((n_32 != NULL) && (n_32 != o_32)))
            _fail(o_32);
          else
            n_32 = o_32;
          t = (ATerm) ATmakeAppl(sym_Include_1, not_null(n_32));
        }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_f_18;
        return(t);
      }
      t = ArgOption_3(t, a_2, b_2, c_2);
      LocalPopChoice(d_18);
    }
  else
    {
      t = s_17;
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              ATerm p_32 = NULL;
              p_32 = t;
              d_32 :
              if(!(match_string(p_32, "-nodep")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              t = term_w_18;
              t = set_config_0(t);
              t = term_x_18;
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              t = term_i_18;
              return(t);
            }
            t = Option_3(t, d_2, e_2, i_2);
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            {
              ATerm y_18 = t;
              int z_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 (ATerm t)
                  {
                    ATerm q_32 = NULL;
                    q_32 = t;
                    e_32 :
                    if(!(match_string(q_32, "-dep")))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  ATerm n_2 (ATerm t)
                  {
                    ATerm t_32 = NULL;
                    ATerm a_19;
                    a_19 = t;
                    {
                      ATerm r_32 = NULL;
                      ATerm s_32 = NULL;
                      s_32 = t;
                      if(((r_32 != NULL) && (r_32 != s_32)))
                        _fail(s_32);
                      else
                        r_32 = s_32;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_b_19, not_null(r_32));
                        t = set_config_0(t);
                      }
                    }
                    t = a_19;
                    {
                      t_32 = t;
                      t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(t_32));
                    }
                    return(t);
                  }
                  ATerm q_2 (ATerm t)
                  {
                    t = term_c_19;
                    return(t);
                  }
                  t = ArgOption_3(t, j_2, n_2, q_2);
                  LocalPopChoice(z_18);
                }
              else
                {
                  t = y_18;
                  {
                    ATerm r_2 (ATerm t)
                    {
                      ATerm v_32 = NULL;
                      v_32 = t;
                      h_32 :
                      if(!(match_string(v_32, "--prefix")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm s_2 (ATerm t)
                    {
                      ATerm y_32 = NULL;
                      ATerm l_19;
                      l_19 = t;
                      {
                        ATerm w_32 = NULL;
                        ATerm x_32 = NULL;
                        x_32 = t;
                        if(((w_32 != NULL) && (w_32 != x_32)))
                          _fail(x_32);
                        else
                          w_32 = x_32;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_m_19, not_null(w_32));
                          t = set_config_0(t);
                        }
                      }
                      t = l_19;
                      {
                        y_32 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_n_19, (ATerm) ATmakeAppl(sym_Defined_2, term_o_19, not_null(y_32)));
                          {
                            ATerm u_2 (ATerm t)
                            {
                              t = term_p_19;
                              return(t);
                            }
                            t = assert_1(t, u_2);
                          }
                          t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(y_32));
                        }
                      }
                      return(t);
                    }
                    ATerm t_2 (ATerm t)
                    {
                      t = term_m_19;
                      return(t);
                    }
                    t = ArgOption_3(t, r_2, s_2, t_2);
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
  ATerm h_33 = NULL;
  h_33 = t;
  t = SSL_string_to_int(not_null(h_33));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm v_33 = NULL,w_33 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
  v_33 = t;
  t_33 :
  if(match_string(v_33, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(v_33) == AT_LIST) && ((ATermList) v_33 != ATempty)))
        {
          w_33 = ATgetFirst((ATermList) v_33);
          c_34 = (ATerm) ATgetNext((ATermList) v_33);
          u_33 :
          if(((ATgetType(c_34) == AT_LIST) && ((ATermList) c_34 != ATempty)))
            {
              d_34 = ATgetFirst((ATermList) c_34);
              e_34 = (ATerm) ATgetNext((ATermList) c_34);
              {
                ATerm i_34 = NULL;
                ATerm q_19;
                q_19 = t;
                {
                  t = not_null(w_33);
                  t = k_0(t);
                }
                t = q_19;
                {
                  ATerm j_34 = NULL;
                  t = not_null(d_34);
                  {
                    t = l_0(t);
                    {
                      j_34 = t;
                      if(((i_34 != NULL) && (i_34 != j_34)))
                        _fail(j_34);
                      else
                        i_34 = j_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_34)), not_null(i_34));
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
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 (ATerm t)
      {
        ATerm c_35 = NULL;
        c_35 = t;
        p_34 :
        if(!(match_string(c_35, "-i")))
          {
            if(!(match_string(c_35, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        ATerm f_35 = NULL;
        ATerm y_19;
        y_19 = t;
        {
          ATerm d_35 = NULL;
          ATerm e_35 = NULL;
          e_35 = t;
          if(((d_35 != NULL) && (d_35 != e_35)))
            _fail(e_35);
          else
            d_35 = e_35;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_r_10, not_null(d_35));
            t = set_config_0(t);
          }
        }
        t = y_19;
        {
          ATerm g_35 = NULL;
          g_35 = t;
          if(((f_35 != NULL) && (f_35 != g_35)))
            _fail(g_35);
          else
            f_35 = g_35;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_35));
        }
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_z_19;
        return(t);
      }
      t = ArgOption_3(t, w_2, z_2, b_3);
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
        ATerm b_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 (ATerm t)
            {
              ATerm h_35 = NULL;
              h_35 = t;
              s_34 :
              if(!(match_string(h_35, "-o")))
                {
                  if(!(match_string(h_35, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              ATerm k_35 = NULL;
              ATerm h_20;
              h_20 = t;
              {
                ATerm i_35 = NULL;
                ATerm j_35 = NULL;
                j_35 = t;
                if(((i_35 != NULL) && (i_35 != j_35)))
                  _fail(j_35);
                else
                  i_35 = j_35;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_10, not_null(i_35));
                  t = set_config_0(t);
                }
              }
              t = h_20;
              {
                ATerm l_35 = NULL;
                l_35 = t;
                if(((k_35 != NULL) && (k_35 != l_35)))
                  _fail(l_35);
                else
                  k_35 = l_35;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_35));
              }
              return(t);
            }
            ATerm e_3 (ATerm t)
            {
              t = term_i_20;
              return(t);
            }
            t = ArgOption_3(t, c_3, d_3, e_3);
            LocalPopChoice(g_20);
          }
        else
          {
            t = b_20;
            {
              ATerm j_20 = t;
              int k_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_3 (ATerm t)
                  {
                    ATerm m_35 = NULL;
                    m_35 = t;
                    v_34 :
                    if(!(match_string(m_35, "-S")))
                      {
                        if(!(match_string(m_35, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm q_3 (ATerm t)
                  {
                    t = term_l_20;
                    t = set_config_0(t);
                    t = term_o_20;
                    return(t);
                  }
                  ATerm r_3 (ATerm t)
                  {
                    t = term_v_20;
                    return(t);
                  }
                  t = Option_3(t, p_3, q_3, r_3);
                  LocalPopChoice(k_20);
                }
              else
                {
                  t = j_20;
                  {
                    ATerm w_20 = t;
                    int x_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_3 (ATerm t)
                        {
                          ATerm p_35 = NULL;
                          p_35 = t;
                          w_34 :
                          if(!(match_string(p_35, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm t_3 (ATerm t)
                        {
                          ATerm s_35 = NULL;
                          ATerm y_20;
                          y_20 = t;
                          {
                            ATerm q_35 = NULL;
                            ATerm r_35 = NULL;
                            t = string_to_int_0(t);
                            {
                              r_35 = t;
                              if(((q_35 != NULL) && (q_35 != r_35)))
                                _fail(r_35);
                              else
                                q_35 = r_35;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_a_10, not_null(q_35));
                              t = set_config_0(t);
                            }
                          }
                          t = y_20;
                          {
                            ATerm u_35 = NULL;
                            u_35 = t;
                            if(((s_35 != NULL) && (s_35 != u_35)))
                              _fail(u_35);
                            else
                              s_35 = u_35;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_35));
                          }
                          return(t);
                        }
                        ATerm u_3 (ATerm t)
                        {
                          t = term_z_20;
                          return(t);
                        }
                        t = ArgOption_3(t, s_3, t_3, u_3);
                        LocalPopChoice(x_20);
                      }
                    else
                      {
                        t = w_20;
                        {
                          ATerm a_21 = t;
                          int b_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_3 (ATerm t)
                              {
                                ATerm x_35 = NULL;
                                x_35 = t;
                                z_34 :
                                if(!(match_string(x_35, "-v")))
                                  {
                                    if(!(match_string(x_35, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm a_4 (ATerm t)
                              {
                                t = term_e_21;
                                t = set_config_0(t);
                                t = term_f_21;
                                return(t);
                              }
                              ATerm b_4 (ATerm t)
                              {
                                t = term_g_21;
                                return(t);
                              }
                              t = Option_3(t, z_3, a_4, b_4);
                              LocalPopChoice(b_21);
                            }
                          else
                            {
                              t = a_21;
                              {
                                ATerm h_21 = t;
                                int i_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_4 (ATerm t)
                                    {
                                      ATerm y_35 = NULL;
                                      y_35 = t;
                                      a_35 :
                                      if(!(match_string(y_35, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm f_4 (ATerm t)
                                    {
                                      t = term_l_21;
                                      t = set_config_0(t);
                                      t = term_m_21;
                                      return(t);
                                    }
                                    ATerm g_4 (ATerm t)
                                    {
                                      t = term_n_21;
                                      return(t);
                                    }
                                    t = Option_3(t, c_4, f_4, g_4);
                                    LocalPopChoice(i_21);
                                  }
                                else
                                  {
                                    t = h_21;
                                    {
                                      ATerm h_4 (ATerm t)
                                      {
                                        ATerm z_35 = NULL;
                                        z_35 = t;
                                        b_35 :
                                        if(!(match_string(z_35, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm p_4 (ATerm t)
                                      {
                                        t = term_p_21;
                                        t = set_config_0(t);
                                        t = term_q_21;
                                        return(t);
                                      }
                                      ATerm s_4 (ATerm t)
                                      {
                                        t = term_r_21;
                                        return(t);
                                      }
                                      t = Option_3(t, h_4, p_4, s_4);
                                    }
                                  }
                              }
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
  ATerm h_36 = NULL;
  h_36 = t;
  t = SSL_table_destroy(not_null(h_36));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm z_67 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
  s_36 = t;
  p_36 :
  if(((ATgetType(s_36) == AT_LIST) && ((ATermList) s_36 != ATempty)))
    {
      q_36 = ATgetFirst((ATermList) s_36);
      r_36 = (ATerm) ATgetNext((ATermList) s_36);
      {
        ATerm v_36 = NULL;
        t = not_null(r_36);
        {
          ATerm s_21;
          s_21 = t;
          {
            ATerm w_36 = NULL,y_36 = NULL,a_37 = NULL;
            ATerm t_21;
            t_21 = t;
            {
              ATerm x_36 = NULL;
              t = j_0(t);
              {
                x_36 = t;
                if(((w_36 != NULL) && (w_36 != x_36)))
                  _fail(x_36);
                else
                  w_36 = x_36;
              }
            }
            t = t_21;
            {
              ATerm z_36 = NULL;
              t = not_null(q_36);
              {
                t = i_0(t);
                {
                  z_36 = t;
                  if(((y_36 != NULL) && (y_36 != z_36)))
                    _fail(z_36);
                  else
                    y_36 = z_36;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_36)), not_null(y_36));
                {
                  a_37 = t;
                  if(((v_36 != NULL) && (v_36 != a_37)))
                    _fail(a_37);
                  else
                    v_36 = a_37;
                }
              }
            }
          }
          t = s_21;
          {
            ATerm t_4 (ATerm t)
            {
              t = not_null(v_36);
              return(t);
            }
            t = reverse_acc_2(t, i_0, t_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) s_36 == ATempty))
        {
          {
            t = term_c_11;
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
  ATerm u_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm y_67 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm o_37 = NULL,p_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym_Program_1))
    {
      p_37 = ATgetArgument(o_37, 0);
      {
        ATerm s_37 = NULL,u_37 = NULL;
        ATerm t_37 = NULL;
        t = SSLgetAnnotations(not_null(o_37));
        {
          t_37 = t;
          if(((s_37 != NULL) && (s_37 != t_37)))
            _fail(t_37);
          else
            s_37 = t_37;
        }
        {
          t = not_null(p_37);
          {
            ATerm w_37 = NULL;
            t = p_61(t);
            {
              u_37 = t;
              {
                ATerm x_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_37)), not_null(s_37));
                {
                  x_37 = t;
                  if(((w_37 != NULL) && (w_37 != x_37)))
                    _fail(x_37);
                  else
                    w_37 = x_37;
                }
                t = not_null(w_37);
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
  ATerm g_38 = NULL;
  ATerm v_4 (ATerm t)
  {
    ATerm y_4 (ATerm t)
    {
      ATerm h_38 = NULL;
      h_38 = t;
      if(((g_38 != NULL) && (g_38 != h_38)))
        _fail(h_38);
      else
        g_38 = h_38;
      return(t);
    }
    t = Program_1(t, y_4);
    return(t);
  }
  t = option_defined_1(t, v_4);
  {
    ATerm z_4 (ATerm t)
    {
      ATerm i_38 = NULL;
      ATerm j_38 = NULL;
      t = term_c_11;
      {
        ATerm e_5 (ATerm t)
        {
          t = not_null(g_38);
          return(t);
        }
        t = short_description_1(t, e_5);
        {
          t = concat_strings_0(t);
          {
            j_38 = t;
            if(((i_38 != NULL) && (i_38 != j_38)))
              _fail(j_38);
            else
              i_38 = j_38;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_9, (ATerm) ATinsert(ATempty, not_null(i_38)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, z_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_9, (ATerm) ATinsert(ATempty, term_u_21));
      {
        t = printnl_0(t);
        {
          t = term_b_22;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm k_38 = NULL;
                  k_38 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_38)), term_c_22));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_5);
                {
                  ATerm g_5 (ATerm t)
                  {
                    ATerm m_38 = NULL;
                    ATerm n_38 = NULL;
                    t = term_c_11;
                    {
                      ATerm h_5 (ATerm t)
                      {
                        t = not_null(g_38);
                        return(t);
                      }
                      t = long_description_1(t, h_5);
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
                      t = (ATerm) ATmakeAppl(sym__2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_38)), term_d_22));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_5);
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
ATerm Undefined_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm a_39 = NULL,b_39 = NULL;
  a_39 = t;
  z_38 :
  if(match_cons(a_39, sym_Undefined_1))
    {
      b_39 = ATgetArgument(a_39, 0);
      {
        ATerm e_39 = NULL,g_39 = NULL;
        ATerm f_39 = NULL;
        t = SSLgetAnnotations(not_null(a_39));
        {
          f_39 = t;
          if(((e_39 != NULL) && (e_39 != f_39)))
            _fail(f_39);
          else
            e_39 = f_39;
        }
        {
          t = not_null(b_39);
          {
            ATerm i_39 = NULL;
            t = q_61(t);
            {
              g_39 = t;
              {
                ATerm j_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_39)), not_null(e_39));
                {
                  j_39 = t;
                  if(((i_39 != NULL) && (i_39 != j_39)))
                    _fail(j_39);
                  else
                    i_39 = j_39;
                }
                t = not_null(i_39);
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
  ATerm s_39 = NULL;
  s_39 = t;
  r_39 :
  if(match_cons(s_39, sym_Help_0))
    {
      ATerm u_39 = NULL,w_39 = NULL;
      ATerm e_22;
      e_22 = t;
      {
        ATerm v_39 = NULL;
        t = SSLgetAnnotations(not_null(s_39));
        {
          v_39 = t;
          if(((u_39 != NULL) && (u_39 != v_39)))
            _fail(v_39);
          else
            u_39 = v_39;
        }
      }
      t = e_22;
      {
        ATerm x_39 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_39));
        {
          x_39 = t;
          if(((w_39 != NULL) && (w_39 != x_39)))
            _fail(x_39);
          else
            w_39 = x_39;
        }
        t = not_null(w_39);
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
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym__3))
    {
      f_40 = ATgetArgument(e_40, 0);
      g_40 = ATgetArgument(e_40, 1);
      h_40 = ATgetArgument(e_40, 2);
      {
        ATerm f_22;
        f_22 = t;
        {
          ATerm l_40 = NULL;
          ATerm m_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_40), not_null(g_40));
          {
            ATerm g_22 = t;
            int h_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_22);
              }
            else
              {
                t = g_22;
                t = (ATerm) ATempty;
              }
            {
              m_40 = t;
              if(((l_40 != NULL) && (l_40 != m_40)))
                _fail(m_40);
              else
                l_40 = m_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_40), not_null(g_40), (ATerm) ATinsert(CheckATermList(not_null(l_40)), not_null(h_40)));
            t = table_put_0(t);
          }
        }
        t = f_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm d_68 (ATerm))
{
  ATerm q_40 = NULL;
  ATerm r_40 = NULL;
  t = term_c_11;
  {
    t = d_68(t);
    {
      r_40 = t;
      if(((q_40 != NULL) && (q_40 != r_40)))
        _fail(r_40);
      else
        q_40 = r_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_21, term_a_22, not_null(q_40));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
  x_40 = t;
  w_40 :
  if(match_string(x_40, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(x_40) == AT_LIST) && ((ATermList) x_40 != ATempty)))
        {
          y_40 = ATgetFirst((ATermList) x_40);
          z_40 = (ATerm) ATgetNext((ATermList) x_40);
          {
            ATerm e_41 = NULL;
            ATerm i_22;
            i_22 = t;
            {
              t = not_null(y_40);
              t = a_0(t);
            }
            t = i_22;
            {
              ATerm f_41 = NULL;
              t = term_c_11;
              {
                t = b_0(t);
                {
                  f_41 = t;
                  if(((e_41 != NULL) && (e_41 != f_41)))
                    _fail(f_41);
                  else
                    e_41 = f_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_40)), not_null(e_41));
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
  ATerm k_5 (ATerm t)
  {
    ATerm k_41 = NULL;
    k_41 = t;
    j_41 :
    if(!(match_string(k_41, "--help")))
      {
        if(!(match_string(k_41, "-h")))
          {
            if(!(match_string(k_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_j_22;
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = term_k_22;
    return(t);
  }
  t = Option_3(t, k_5, l_5, o_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  m_41 :
  if(((ATgetType(n_41) == AT_LIST) && ((ATermList) n_41 != ATempty)))
    {
      o_41 = ATgetFirst((ATermList) n_41);
      p_41 = (ATerm) ATgetNext((ATermList) n_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_41)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym__2))
    {
      w_41 = ATgetArgument(v_41, 0);
      x_41 = ATgetArgument(v_41, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_12, not_null(w_41), not_null(x_41));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_68 (ATerm))
{
  ATerm m_22;
  m_22 = t;
  {
    ATerm p_5 (ATerm t)
    {
      t = term_n_22;
      t = b_68(t);
      return(t);
    }
    t = try_1(t, p_5);
  }
  t = m_22;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm h_42 = NULL;
      ATerm o_22;
      o_22 = t;
      {
        ATerm d_42 = NULL;
        ATerm e_42 = NULL;
        e_42 = t;
        if(((d_42 != NULL) && (d_42 != e_42)))
          _fail(e_42);
        else
          d_42 = e_42;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_22, not_null(d_42));
          t = set_config_0(t);
        }
      }
      t = o_22;
      {
        ATerm i_42 = NULL;
        i_42 = t;
        if(((h_42 != NULL) && (h_42 != i_42)))
          _fail(i_42);
        else
          h_42 = i_42;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_42));
      }
      return(t);
    }
    ATerm s_5 (ATerm t)
    {
      ATerm q_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_22);
            }
          else
            {
              t = s_22;
              {
                t = b_68(t);
                t = Cons_2(t, _id, s_5);
              }
            }
          LocalPopChoice(r_22);
        }
      else
        {
          t = q_22;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, r_5, s_5);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_68 (ATerm))
{
  ATerm n_42 = NULL;
  ATerm u_22;
  u_22 = t;
  {
    t = term_v_22;
    t = table_put_0(t);
  }
  t = u_22;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm w_22 = t;
      int x_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_68(t);
          LocalPopChoice(x_22);
        }
      else
        {
          t = w_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_5);
    {
      ATerm y_5 (ATerm t)
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_f_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            {
              ATerm z_5 (ATerm t)
              {
                ATerm a_6 (ATerm t)
                {
                  ATerm o_42 = NULL;
                  o_42 = t;
                  if(((n_42 != NULL) && (n_42 != o_42)))
                    _fail(o_42);
                  else
                    n_42 = o_42;
                  return(t);
                }
                t = Undefined_1(t, a_6);
                return(t);
              }
              t = option_defined_1(t, z_5);
              {
                ATerm a_23;
                a_23 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_42)), term_b_23));
                  t = printnl_0(t);
                }
                t = a_23;
                {
                  t = system_usage_0(t);
                  {
                    t = term_x_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, y_5);
      {
        ATerm c_23;
        c_23 = t;
        {
          t = term_z_21;
          t = table_destroy_0(t);
        }
        t = c_23;
      }
    }
  }
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = pack_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, b_6);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm e_63 (ATerm, ATerm (ATerm)), ATerm f_63 (ATerm))
{
  ATerm h_43 = NULL;
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,o_43 = NULL,w_43 = NULL;
  t = pack_module_options_0(t);
  {
    h_43 = t;
    {
      ATerm c_6 (ATerm t)
      {
        t = need_help_1(t, pack_modules_usage_0);
        return(t);
      }
      t = try_1(t, c_6);
      {
        ATerm d_6 (ATerm t)
        {
          ATerm e_6 (ATerm t)
          {
            ATerm p_43 = NULL,q_43 = NULL;
            p_43 = t;
            v_42 :
            if(match_cons(p_43, sym_Program_1))
              {
                q_43 = ATgetArgument(p_43, 0);
                if(((j_43 != NULL) && (j_43 != q_43)))
                  _fail(q_43);
                else
                  j_43 = q_43;
              }
            else
              {
                if(match_cons(p_43, sym_Input_1))
                  {
                    q_43 = ATgetArgument(p_43, 0);
                    if(((k_43 != NULL) && (k_43 != q_43)))
                      _fail(q_43);
                    else
                      k_43 = q_43;
                  }
                else
                  {
                    if(match_cons(p_43, sym_Output_1))
                      {
                        q_43 = ATgetArgument(p_43, 0);
                        if(((l_43 != NULL) && (l_43 != q_43)))
                          _fail(q_43);
                        else
                          l_43 = q_43;
                      }
                    else
                      {
                        if(match_cons(p_43, sym_Dependency_1))
                          {
                            q_43 = ATgetArgument(p_43, 0);
                            if(((o_43 != NULL) && (o_43 != q_43)))
                              _fail(q_43);
                            else
                              o_43 = q_43;
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
          t = try_1(t, e_6);
          return(t);
        }
        t = list_1(t, d_6);
        {
          ATerm y_43 = NULL;
          ATerm f_6 (ATerm t)
          {
            ATerm r_43 = NULL,s_43 = NULL;
            r_43 = t;
            x_42 :
            if(match_cons(r_43, sym_Include_1))
              {
                s_43 = ATgetArgument(r_43, 0);
                t = not_null(s_43);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, f_6);
          {
            w_43 = t;
            {
              ATerm b_44 = NULL;
              ATerm i_23 = t;
              int j_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = not_null(k_43);
                  LocalPopChoice(j_23);
                }
              else
                {
                  t = i_23;
                  t = term_k_23;
                }
              {
                y_43 = t;
                {
                  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
                  ATerm l_23 = t;
                  int m_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = not_null(l_43);
                      LocalPopChoice(m_23);
                    }
                  else
                    {
                      t = l_23;
                      t = term_n_23;
                    }
                  {
                    b_44 = t;
                    {
                      t = not_null(y_43);
                      {
                        ATerm g_6 (ATerm t)
                        {
                          t = not_null(w_43);
                          return(t);
                        }
                        t = e_63(t, g_6);
                        {
                          d_44 = t;
                          g_43 :
                          if(match_cons(d_44, sym__2))
                            {
                              e_44 = ATgetArgument(d_44, 0);
                              f_44 = ATgetArgument(d_44, 1);
                              {
                                ATerm j_44 = NULL;
                                t = not_null(h_43);
                                {
                                  ATerm o_23 = t;
                                  int p_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm n_6 (ATerm t)
                                      {
                                        ATerm i_44 = NULL;
                                        i_44 = t;
                                        c_43 :
                                        if(!(match_cons(i_44, sym_Binary_0)))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = option_defined_1(t, n_6);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_44), not_null(f_44));
                                        t = WriteToBinaryFile_0(t);
                                      }
                                      LocalPopChoice(p_23);
                                    }
                                  else
                                    {
                                      t = o_23;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_44), not_null(f_44));
                                        t = WriteToTextFile_0(t);
                                      }
                                    }
                                  {
                                    ATerm o_6 (ATerm t)
                                    {
                                      ATerm l_44 = NULL;
                                      ATerm q_23 = t;
                                      int r_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = not_null(o_43);
                                          LocalPopChoice(r_23);
                                        }
                                      else
                                        {
                                          t = q_23;
                                          {
                                            ATerm s_23 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(h_43);
                                                {
                                                  ATerm p_6 (ATerm t)
                                                  {
                                                    ATerm k_44 = NULL;
                                                    k_44 = t;
                                                    d_43 :
                                                    if(!(match_cons(k_44, sym_NoDependency_0)))
                                                      {
                                                        _fail(t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = option_defined_1(t, p_6);
                                                }
                                                PopChoice();
                                                _fail(t);
                                              }
                                            else
                                              {
                                                t = s_23;
                                              }
                                            t = f_63(t);
                                          }
                                        }
                                      {
                                        l_44 = t;
                                        {
                                          if(((j_44 != NULL) && (j_44 != l_44)))
                                            _fail(l_44);
                                          else
                                            j_44 = l_44;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(b_44), not_null(e_44));
                                            {
                                              ATerm q_6 (ATerm t)
                                              {
                                                t = not_null(j_44);
                                                return(t);
                                              }
                                              t = create_dep_file_1(t, q_6);
                                            }
                                          }
                                        }
                                      }
                                      return(t);
                                    }
                                    t = try_1(t, o_6);
                                    {
                                      ATerm r_6 (ATerm t)
                                      {
                                        ATerm m_44 = NULL;
                                        ATerm n_44 = NULL;
                                        t = run_time_0(t);
                                        {
                                          n_44 = t;
                                          if(((m_44 != NULL) && (m_44 != n_44)))
                                            _fail(n_44);
                                          else
                                            m_44 = n_44;
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_v_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_23), not_null(m_44)), term_t_23), not_null(j_43)));
                                          t = printnl_0(t);
                                        }
                                        return(t);
                                      }
                                      t = if_verbose1_1(t, r_6);
                                      {
                                        t = term_f_10;
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
  ATerm c_45 = NULL,d_45 = NULL,i_45 = NULL;
  c_45 = t;
  b_45 :
  if(match_cons(c_45, sym__2))
    {
      d_45 = ATgetArgument(c_45, 0);
      i_45 = ATgetArgument(c_45, 1);
      {
        t = not_null(d_45);
        {
          ATerm c_7 (ATerm t)
          {
            t = not_null(i_45);
            return(t);
          }
          t = at_end_1(t, c_7);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm r_50 (ATerm), ATerm s_50 (ATerm))
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
  a_46 = t;
  z_45 :
  if(match_cons(a_46, sym__2))
    {
      b_46 = ATgetArgument(a_46, 0);
      c_46 = ATgetArgument(a_46, 1);
      {
        ATerm g_46 = NULL,i_46 = NULL;
        ATerm h_46 = NULL;
        t = SSLgetAnnotations(not_null(a_46));
        {
          h_46 = t;
          if(((g_46 != NULL) && (g_46 != h_46)))
            _fail(h_46);
          else
            g_46 = h_46;
        }
        {
          t = not_null(b_46);
          {
            ATerm k_46 = NULL;
            t = r_50(t);
            {
              i_46 = t;
              {
                t = not_null(c_46);
                {
                  ATerm m_46 = NULL;
                  t = s_50(t);
                  {
                    k_46 = t;
                    {
                      ATerm n_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_46), not_null(k_46)), not_null(g_46));
                      {
                        n_46 = t;
                        if(((m_46 != NULL) && (m_46 != n_46)))
                          _fail(n_46);
                        else
                          m_46 = n_46;
                      }
                      t = not_null(m_46);
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
ATerm at_suffix_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm t_46 (ATerm t)
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_80(t);
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = Cons_2(t, _id, t_46);
      }
    return(t);
  }
  t = t_46(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm o_72 (ATerm))
{
  ATerm w_46 = NULL;
  ATerm z_23;
  z_23 = t;
  {
    ATerm x_46 = NULL;
    t = o_72(t);
    {
      t = explode_string_0(t);
      {
        x_46 = t;
        if(((w_46 != NULL) && (w_46 != x_46)))
          _fail(x_46);
        else
          w_46 = x_46;
      }
    }
  }
  t = z_23;
  {
    ATerm a_24;
    a_24 = t;
    {
      t = explode_string_0(t);
      {
        ATerm e_7 (ATerm t)
        {
          ATerm y_46 = NULL;
          y_46 = t;
          if(((w_46 != NULL) && (w_46 != y_46)))
            _fail(y_46);
          else
            w_46 = y_46;
          return(t);
        }
        t = at_suffix_1(t, e_7);
      }
    }
    t = a_24;
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm w_73 (ATerm))
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_7 (ATerm t)
            {
              t = filter_1(t, w_73);
              return(t);
            }
            t = Cons_2(t, w_73, f_7);
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            {
              ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
              d_47 = t;
              c_47 :
              if(((ATgetType(d_47) == AT_LIST) && ((ATermList) d_47 != ATempty)))
                {
                  e_47 = ATgetFirst((ATermList) d_47);
                  f_47 = (ATerm) ATgetNext((ATermList) d_47);
                  {
                    t = not_null(f_47);
                    t = filter_1(t, w_73);
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
  ATerm j_47 = NULL;
  j_47 = t;
  t = SSL_readdir(not_null(j_47));
  return(t);
}
ATerm find_plugins_2 (ATerm t, ATerm o_62 (ATerm), ATerm p_62 (ATerm))
{
  t = o_62(t);
  {
    ATerm g_7 (ATerm t)
    {
      ATerm o_47 = NULL;
      o_47 = t;
      {
        t = readdir_0(t);
        {
          ATerm h_7 (ATerm t)
          {
            ATerm q_47 = NULL;
            t = has_extension_1(t, p_62);
            {
              ATerm r_47 = NULL;
              r_47 = t;
              if(((q_47 != NULL) && (q_47 != r_47)))
                _fail(r_47);
              else
                q_47 = r_47;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_47)), term_j_11), not_null(o_47));
                t = concat_strings_0(t);
              }
            }
            return(t);
          }
          t = filter_1(t, h_7);
        }
      }
      return(t);
    }
    t = filter_1(t, g_7);
    t = concat_0(t);
  }
  return(t);
}
ATerm import_config_files_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm g_24;
  g_24 = t;
  {
    t = r_62(t);
    {
      ATerm i_7 (ATerm t)
      {
        ATerm v_47 = NULL;
        ATerm j_7 (ATerm t)
        {
          ATerm k_7 (ATerm t)
          {
            t = term_h_24;
            return(t);
          }
          t = debug_1(t, k_7);
          return(t);
        }
        t = if_verbose2_1(t, j_7);
        {
          t = ReadFromFile_0(t);
          {
            ATerm w_47 = NULL;
            w_47 = t;
            if(((v_47 != NULL) && (v_47 != w_47)))
              _fail(w_47);
            else
              v_47 = w_47;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_e_12, not_null(v_47));
              t = table_putlist_0(t);
            }
          }
        }
        return(t);
      }
      t = map_1(t, i_7);
    }
  }
  t = g_24;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm a_48 = NULL;
  ATerm c_48 = NULL;
  a_48 = t;
  {
    ATerm i_24;
    i_24 = t;
    {
      ATerm d_48 = NULL;
      t = term_j_24;
      {
        d_48 = t;
        if(((c_48 != NULL) && (c_48 != d_48)))
          _fail(d_48);
        else
          c_48 = d_48;
      }
    }
    t = i_24;
    {
      t = SSL_open_file(not_null(a_48), not_null(c_48));
      t = SSL_close_file(not_null(a_48));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm i_48 (ATerm t)
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_48);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
          t = Nil_0(t);
          t = m_80(t);
        }
      }
    return(t);
  }
  t = i_48(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      {
        ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL;
        m_48 = t;
        l_48 :
        if(((ATgetType(m_48) == AT_LIST) && ((ATermList) m_48 != ATempty)))
          {
            n_48 = ATgetFirst((ATermList) m_48);
            o_48 = (ATerm) ATgetNext((ATermList) m_48);
            {
              t = not_null(n_48);
              {
                ATerm p_7 (ATerm t)
                {
                  t = not_null(o_48);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_7);
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
ATerm fetch_1 (ATerm t, ATerm g_80 (ATerm))
{
  ATerm w_48 (ATerm t)
  {
    ATerm p_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_80, _id);
        LocalPopChoice(s_24);
      }
    else
      {
        t = p_24;
        t = Cons_2(t, _id, w_48);
      }
    return(t);
  }
  t = w_48(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm y_48 = NULL;
  ATerm q_7 (ATerm t)
  {
    ATerm z_48 = NULL;
    t = i_80(t);
    {
      z_48 = t;
      if(((y_48 != NULL) && (y_48 != z_48)))
        _fail(z_48);
      else
        y_48 = z_48;
    }
    return(t);
  }
  t = fetch_1(t, q_7);
  t = not_null(y_48);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm g_62 (ATerm), ATerm h_62 (ATerm))
{
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_62(t);
      {
        ATerm r_7 (ATerm t)
        {
          ATerm j_49 = NULL,l_49 = NULL;
          ATerm w_24;
          w_24 = t;
          {
            ATerm k_49 = NULL;
            k_49 = t;
            if(((j_49 != NULL) && (j_49 != k_49)))
              _fail(k_49);
            else
              j_49 = k_49;
          }
          t = w_24;
          {
            ATerm m_49 = NULL;
            t = h_62(t);
            {
              m_49 = t;
              if(((l_49 != NULL) && (l_49 != m_49)))
                _fail(m_49);
              else
                l_49 = m_49;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_49)), term_j_11), not_null(j_49));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, r_7);
      }
      LocalPopChoice(v_24);
    }
  else
    {
      t = u_24;
      {
        t = term_s_12;
        {
          t = debug_1(t, h_62);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
  t_49 = t;
  s_49 :
  if(match_cons(t_49, sym__2))
    {
      u_49 = ATgetArgument(t_49, 0);
      v_49 = ATgetArgument(t_49, 1);
      {
        t = not_null(v_49);
        {
          ATerm w_7 (ATerm t)
          {
            ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
            u_50 = t;
            r_49 :
            if(match_cons(u_50, sym__2))
              {
                v_50 = ATgetArgument(u_50, 0);
                w_50 = ATgetArgument(u_50, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(u_49), not_null(v_50), not_null(w_50));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, w_7);
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
  ATerm c_51 = NULL;
  c_51 = t;
  t = SSL_ReadFromFile(not_null(c_51));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  g_51 :
  if(match_cons(h_51, sym__2))
    {
      i_51 = ATgetArgument(h_51, 0);
      j_51 = ATgetArgument(h_51, 1);
      {
        ATerm x_24;
        x_24 = t;
        t = SSL_printnl(not_null(i_51), not_null(j_51));
        t = x_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_71 (ATerm))
{
  ATerm y_24;
  y_24 = t;
  {
    ATerm p_51 = NULL,r_51 = NULL;
    ATerm z_24;
    z_24 = t;
    {
      ATerm q_51 = NULL;
      t = c_71(t);
      {
        q_51 = t;
        if(((p_51 != NULL) && (p_51 != q_51)))
          _fail(q_51);
        else
          p_51 = q_51;
      }
    }
    t = z_24;
    {
      ATerm s_51 = NULL;
      s_51 = t;
      if(((r_51 != NULL) && (r_51 != s_51)))
        _fail(s_51);
      else
        r_51 = s_51;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_51)), not_null(p_51)));
        t = printnl_0(t);
      }
    }
  }
  t = y_24;
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  x_51 = t;
  w_51 :
  if(match_cons(x_51, sym__2))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      {
        ATerm a_25;
        a_25 = t;
        {
          ATerm b_25 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_51), not_null(z_51));
              LocalPopChoice(c_25);
            }
          else
            {
              t = b_25;
              t = SSL_gtr(not_null(y_51), not_null(z_51));
            }
        }
        t = a_25;
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
  ATerm f_52 = NULL;
  ATerm d_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
      g_52 = t;
      e_52 :
      if(match_cons(g_52, sym__2))
        {
          h_52 = ATgetArgument(g_52, 0);
          i_52 = ATgetArgument(g_52, 1);
          {
            if(((f_52 != NULL) && (f_52 != h_52)))
              _fail(h_52);
            else
              f_52 = h_52;
            if(((f_52 != NULL) && (f_52 != i_52)))
              _fail(i_52);
            else
              f_52 = i_52;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_25);
    }
  else
    {
      t = d_25;
      t = gt_0(t);
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
  ATerm h_25;
  h_25 = t;
  {
    ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
    p_52 = t;
    l_52 :
    if(match_cons(p_52, sym__3))
      {
        q_52 = ATgetArgument(p_52, 0);
        r_52 = ATgetArgument(p_52, 1);
        s_52 = ATgetArgument(p_52, 2);
        {
          if(((m_52 != NULL) && (m_52 != q_52)))
            _fail(q_52);
          else
            m_52 = q_52;
          {
            if(((n_52 != NULL) && (n_52 != r_52)))
              _fail(r_52);
            else
              n_52 = r_52;
            {
              if(((o_52 != NULL) && (o_52 != s_52)))
                _fail(s_52);
              else
                o_52 = s_52;
              t = SSL_table_put(not_null(m_52), not_null(n_52), not_null(o_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_25;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm y_52 = NULL;
  y_52 = t;
  x_52 :
  if(((ATermList) y_52 == ATempty))
    {
      {
        ATerm a_53 = NULL,c_53 = NULL;
        ATerm i_25;
        i_25 = t;
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
        t = i_25;
        {
          ATerm d_53 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_53));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_79 (ATerm))
{
  ATerm h_53 (ATerm t)
  {
    ATerm j_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_25);
      }
    else
      {
        t = j_25;
        t = Cons_2(t, y_79, h_53);
      }
    return(t);
  }
  t = h_53(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_53 = NULL;
  j_53 = t;
  t = SSL_is_string(not_null(j_53));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(p_25);
    }
  else
    {
      t = n_25;
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_7 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, x_7);
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            {
              ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL;
              s_53 = t;
              r_53 :
              if(match_cons(s_53, sym_Path_1))
                {
                  t_53 = ATgetArgument(s_53, 0);
                  t = not_null(t_53);
                }
              else
                {
                  if(match_cons(s_53, sym_Var_1))
                    {
                      t_53 = ATgetArgument(s_53, 0);
                      {
                        t = not_null(t_53);
                        {
                          ATerm s_25 = t;
                          int x_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(x_25);
                            }
                          else
                            {
                              t = s_25;
                              {
                                ATerm y_7 (ATerm t)
                                {
                                  t = term_y_25;
                                  return(t);
                                }
                                t = debug_1(t, y_7);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(s_53, sym_Prefix_2))
                        {
                          t_53 = ATgetArgument(s_53, 0);
                          u_53 = ATgetArgument(s_53, 1);
                          {
                            ATerm z_53 = NULL,b_54 = NULL;
                            ATerm b_26;
                            b_26 = t;
                            {
                              ATerm a_54 = NULL;
                              t = not_null(t_53);
                              {
                                t = eval_config_0(t);
                                {
                                  a_54 = t;
                                  if(((z_53 != NULL) && (z_53 != a_54)))
                                    _fail(a_54);
                                  else
                                    z_53 = a_54;
                                }
                              }
                            }
                            t = b_26;
                            {
                              ATerm c_54 = NULL;
                              t = not_null(u_53);
                              {
                                t = eval_config_0(t);
                                {
                                  c_54 = t;
                                  if(((b_54 != NULL) && (b_54 != c_54)))
                                    _fail(c_54);
                                  else
                                    b_54 = c_54;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_53), not_null(b_54));
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
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
  k_54 = t;
  j_54 :
  if(match_cons(k_54, sym__2))
    {
      l_54 = ATgetArgument(k_54, 0);
      m_54 = ATgetArgument(k_54, 1);
      t = SSL_table_get(not_null(l_54), not_null(m_54));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_12, not_null(s_54));
    {
      t = table_get_0(t);
      {
        ATerm z_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm c_26;
            c_26 = t;
            {
              ATerm u_54 = NULL;
              ATerm v_54 = NULL;
              v_54 = t;
              if(((u_54 != NULL) && (u_54 != v_54)))
                _fail(v_54);
              else
                u_54 = v_54;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_e_12, not_null(s_54), not_null(u_54));
                t = table_put_0(t);
              }
            }
            t = c_26;
          }
          return(t);
        }
        t = try_1(t, z_7);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_87 (ATerm))
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_87(t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
      }
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_69 (ATerm))
{
  ATerm a_8 (ATerm t)
  {
    ATerm g_26;
    g_26 = t;
    {
      ATerm z_54 = NULL;
      ATerm a_55 = NULL;
      t = term_a_10;
      {
        t = get_config_0(t);
        {
          a_55 = t;
          if(((z_54 != NULL) && (z_54 != a_55)))
            _fail(a_55);
          else
            z_54 = a_55;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_54), term_h_26);
        t = geq_0(t);
      }
    }
    t = g_26;
    t = a_69(t);
    return(t);
  }
  t = try_1(t, a_8);
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm q_26;
  q_26 = t;
  {
    ATerm d_55 = NULL;
    t = q_62(t);
    {
      ATerm g_8 (ATerm t)
      {
        ATerm h_8 (ATerm t)
        {
          t = term_h_24;
          return(t);
        }
        t = debug_1(t, h_8);
        return(t);
      }
      t = if_verbose2_1(t, g_8);
      {
        t = ReadFromFile_0(t);
        {
          ATerm e_55 = NULL;
          e_55 = t;
          if(((d_55 != NULL) && (d_55 != e_55)))
            _fail(e_55);
          else
            d_55 = e_55;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_e_12, not_null(d_55));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = q_26;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm h_55 = NULL;
  h_55 = t;
  t = SSL_implode_string(not_null(h_55));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm l_55 = NULL;
  l_55 = t;
  t = SSL_explode_string(not_null(l_55));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_55 (ATerm t)
        {
          ATerm t_26 = t;
          int y_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, q_55);
              LocalPopChoice(y_26);
            }
          else
            {
              t = t_26;
              {
                ATerm l_8 (ATerm t)
                {
                  ATerm p_55 = NULL;
                  p_55 = t;
                  o_55 :
                  if(!(match_int(p_55, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm m_8 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, l_8, m_8);
              }
            }
          return(t);
        }
        t = q_55(t);
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_62 (ATerm), ATerm b_62 (ATerm))
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  w_55 :
  if(((ATgetType(x_55) == AT_LIST) && ((ATermList) x_55 != ATempty)))
    {
      y_55 = ATgetFirst((ATermList) x_55);
      z_55 = (ATerm) ATgetNext((ATermList) x_55);
      {
        ATerm d_56 = NULL,f_56 = NULL;
        ATerm e_56 = NULL;
        t = SSLgetAnnotations(not_null(x_55));
        {
          e_56 = t;
          if(((d_56 != NULL) && (d_56 != e_56)))
            _fail(e_56);
          else
            d_56 = e_56;
        }
        {
          t = not_null(y_55);
          {
            ATerm h_56 = NULL;
            t = a_62(t);
            {
              f_56 = t;
              {
                t = not_null(z_55);
                {
                  ATerm j_56 = NULL;
                  t = b_62(t);
                  {
                    h_56 = t;
                    {
                      ATerm k_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_56)), not_null(f_56)), not_null(d_56));
                      {
                        k_56 = t;
                        if(((j_56 != NULL) && (j_56 != k_56)))
                          _fail(k_56);
                        else
                          j_56 = k_56;
                      }
                      t = not_null(j_56);
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
  ATerm u_56 = NULL,w_56 = NULL,y_56 = NULL;
  ATerm z_26;
  z_26 = t;
  {
    ATerm o_8 (ATerm t)
    {
      ATerm v_56 = NULL;
      t = get_path_0(t);
      {
        v_56 = t;
        if(((u_56 != NULL) && (u_56 != v_56)))
          _fail(v_56);
        else
          u_56 = v_56;
      }
      return(t);
    }
    t = Cons_2(t, o_8, _id);
  }
  t = z_26;
  {
    ATerm a_27;
    a_27 = t;
    {
      ATerm x_56 = NULL;
      t = get_conf_datadir();
      {
        x_56 = t;
        if(((w_56 != NULL) && (w_56 != x_56)))
          _fail(x_56);
        else
          w_56 = x_56;
      }
    }
    t = a_27;
    {
      ATerm b_27;
      b_27 = t;
      {
        ATerm z_56 = NULL;
        t = get_conf_pkgdatadir();
        {
          z_56 = t;
          if(((y_56 != NULL) && (y_56 != z_56)))
            _fail(z_56);
          else
            y_56 = z_56;
        }
      }
      t = b_27;
      {
        ATerm p_8 (ATerm t)
        {
          ATerm q_8 (ATerm t)
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_56)), not_null(u_56));
            return(t);
          }
          ATerm r_8 (ATerm t)
          {
            t = term_c_27;
            return(t);
          }
          t = find_config_file_2(t, q_8, r_8);
          return(t);
        }
        t = import_config_file_1(t, p_8);
        {
          ATerm s_8 (ATerm t)
          {
            ATerm t_8 (ATerm t)
            {
              ATerm a_57 = NULL;
              ATerm b_57 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_56), term_d_27);
              {
                t = conc_strings_0(t);
                {
                  b_57 = t;
                  if(((a_57 != NULL) && (a_57 != b_57)))
                    _fail(b_57);
                  else
                    a_57 = b_57;
                }
              }
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_57)), not_null(u_56));
              return(t);
            }
            ATerm u_8 (ATerm t)
            {
              t = term_e_27;
              return(t);
            }
            t = find_plugins_2(t, t_8, u_8);
            return(t);
          }
          t = import_config_files_1(t, s_8);
          t = pack_modules_2(t, pack_stratego_1, basename_0);
        }
      }
    }
  }
  return(t);
}
