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
ATerm term_i_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_w_24;
ATerm term_q_24;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_b_22;
ATerm term_o_21;
ATerm term_g_21;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_l_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_y_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_k_17;
ATerm term_g_17;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_h_14;
ATerm term_x_13;
ATerm term_q_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_y_10;
ATerm term_u_10;
ATerm term_p_10;
ATerm term_e_10;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_d_9;
void init_constant_terms (void)
{
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("reading ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("mtree", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("module ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-I dir] [-i file]", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-dep target | -nodep]", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_x_13);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_13);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_w_9);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym__2, term_b_19, term_w_9);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_k_19, term_w_9);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__3, term_z_19, term_a_20, (ATerm) ATempty);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_NoDependency_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego.config", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("/pack-stratego-plugins", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".plugin", 0, ATtrue));
}
ATerm basename_1 (ATerm, ATerm n_72 (ATerm));
ATerm basename_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm h_61 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm call_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm parse_file_1 (ATerm, ATerm n_0 (ATerm));
ATerm split_2 (ATerm, ATerm g_73 (ATerm), ATerm h_73 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm p_72 (ATerm));
ATerm Tl_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm get_module_ext_1 (ATerm, ATerm x_87 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm get_config_keys_1 (ATerm, ATerm v_62 (ATerm));
ATerm get_module_1 (ATerm, ATerm w_87 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm q_78 (ATerm));
ATerm zip_1 (ATerm, ATerm s_78 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm x_75 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm j_63 (ATerm), ATerm k_63 (ATerm), ATerm l_63 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_87 (ATerm), ATerm b_87 (ATerm));
ATerm for_3 (ATerm, ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm r_63 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm g_64 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm v_87 (ATerm));
ATerm exit_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm s_74 (ATerm), ATerm t_74 (ATerm));
ATerm crush_2 (ATerm, ATerm g_76 (ATerm), ATerm h_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm b_69 (ATerm));
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm s_81 (ATerm));
ATerm separate_by_1 (ATerm, ATerm t_81 (ATerm));
ATerm obsolete_1 (ATerm, ATerm l_71 (ATerm));
ATerm open_file_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm i_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_68 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm list_1 (ATerm, ATerm c_80 (ATerm));
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_70 (ATerm));
ATerm assert_1 (ATerm, ATerm c_63 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm u_68 (ATerm), ATerm v_68 (ATerm));
ATerm Option_2 (ATerm, ATerm j_68 (ATerm), ATerm k_68 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_68 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_68 (ATerm));
ATerm Program_1 (ATerm, ATerm r_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_61 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_68 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_68 (ATerm));
ATerm parse_options_1 (ATerm, ATerm c_68 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm g_63 (ATerm, ATerm (ATerm)), ATerm h_63 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm t_50 (ATerm), ATerm u_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm s_80 (ATerm));
ATerm has_extension_1 (ATerm, ATerm q_72 (ATerm));
ATerm filter_1 (ATerm, ATerm y_73 (ATerm));
ATerm readdir_0 (ATerm);
ATerm find_plugins_2 (ATerm, ATerm q_62 (ATerm), ATerm r_62 (ATerm));
ATerm import_config_files_1 (ATerm, ATerm t_62 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_80 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm i_80 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm k_80 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm i_62 (ATerm), ATerm j_62 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm e_71 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm a_80 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_87 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm c_69 (ATerm));
ATerm import_config_file_1 (ATerm, ATerm s_62 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_62 (ATerm), ATerm d_62 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm n_72 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm d_0 (ATerm t)
    {
      ATerm g_1 = t;
      int z_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, d_0);
          LocalPopChoice(z_8);
        }
      else
        {
          t = g_1;
          {
            ATerm a_9 = t;
            int b_9 = stack_ptr;
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
                LocalPopChoice(b_9);
              }
            else
              {
                t = a_9;
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
                  t = Cons_2(t, g_0, n_72);
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
ATerm Imports_1 (ATerm t, ATerm h_61 (ATerm))
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
            t = h_61(t);
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
  ATerm e_9;
  e_9 = t;
  {
    ATerm w_4 = NULL;
    ATerm x_4 = NULL;
    x_4 = t;
    if(((w_4 != NULL) && (w_4 != x_4)))
      _fail(x_4);
    else
      w_4 = x_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_9, not_null(w_4));
      t = printnl_0(t);
    }
  }
  t = e_9;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm h_9;
  h_9 = t;
  {
    t = error_0(t);
    {
      t = term_i_9;
      t = exit_0(t);
    }
  }
  t = h_9;
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
ATerm eq_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      if(((k_5 != NULL) && (k_5 != l_5)))
        _fail(l_5);
      else
        k_5 = l_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_file_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
  ATerm i_6 (ATerm t)
  {
    ATerm d_6 = NULL;
    ATerm e_6 = NULL,g_6 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_j_9, not_null(x_5));
    {
      ATerm k_9 = t;
      if((PushChoice() == 0))
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_9;
        }
      {
        ATerm f_6 = NULL;
        t = (ATerm) ATinsert(ATempty, term_l_9);
        {
          ATerm t_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = if_verbose2_1(t, t_0);
          {
            f_6 = t;
            if(((e_6 != NULL) && (e_6 != f_6)))
              _fail(f_6);
            else
              e_6 = f_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_5), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(e_6)), not_null(w_5)), term_p_9), not_null(v_5)), term_n_9));
          {
            t = call_0(t);
            {
              t = not_null(w_5);
              {
                t = ReadFromFile_0(t);
                {
                  g_6 = t;
                  if(((d_6 != NULL) && (d_6 != g_6)))
                    _fail(g_6);
                  else
                    d_6 = g_6;
                }
              }
            }
          }
        }
      }
    }
    t = not_null(d_6);
    return(t);
  }
  u_5 = t;
  s_5 :
  if(match_cons(u_5, sym__3))
    {
      v_5 = ATgetArgument(u_5, 0);
      w_5 = ATgetArgument(u_5, 1);
      x_5 = ATgetArgument(u_5, 2);
      t_5 :
      if(match_cons(x_5, sym_None_0))
        {
          ATerm s_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = not_null(v_5);
              {
                ATerm u_0 (ATerm t)
                {
                  ATerm v_0 (ATerm t)
                  {
                    t = term_u_9;
                    return(t);
                  }
                  t = debug_1(t, v_0);
                  return(t);
                }
                t = if_verbose2_1(t, u_0);
                t = ReadFromFile_0(t);
              }
              LocalPopChoice(t_9);
            }
          else
            {
              t = s_9;
              t = i_6(t);
            }
        }
      else
        {
          t = i_6(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_73 (ATerm), ATerm h_73 (ATerm))
{
  ATerm n_6 = NULL,p_6 = NULL;
  ATerm v_9;
  v_9 = t;
  {
    ATerm o_6 = NULL;
    t = g_73(t);
    {
      o_6 = t;
      if(((n_6 != NULL) && (n_6 != o_6)))
        _fail(o_6);
      else
        n_6 = o_6;
    }
  }
  t = v_9;
  {
    ATerm q_6 = NULL;
    t = h_73(t);
    {
      q_6 = t;
      if(((p_6 != NULL) && (p_6 != q_6)))
        _fail(q_6);
      else
        p_6 = q_6;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_6), not_null(p_6));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm p_72 (ATerm))
{
  t = basename_0(t);
  {
    ATerm w_0 (ATerm t)
    {
      t = term_w_9;
      t = p_72(t);
      return(t);
    }
    t = split_2(t, _id, w_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  v_6 = t;
  u_6 :
  if(((ATgetType(v_6) == AT_LIST) && ((ATermList) v_6 != ATempty)))
    {
      w_6 = ATgetFirst((ATermList) v_6);
      x_6 = (ATerm) ATgetNext((ATermList) v_6);
      t = not_null(x_6);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      {
        t = not_null(h_7);
        {
          ATerm p_7 (ATerm t)
          {
            ATerm y_9 = t;
            int z_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
                k_7 = t;
                d_7 :
                if(((ATgetType(k_7) == AT_LIST) && ((ATermList) k_7 != ATempty)))
                  {
                    l_7 = ATgetFirst((ATermList) k_7);
                    m_7 = (ATerm) ATgetNext((ATermList) k_7);
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_7)), term_e_10), not_null(l_7));
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
                LocalPopChoice(z_9);
              }
            else
              {
                t = y_9;
                {
                  t = Tl_0(t);
                  t = p_7(t);
                }
              }
            return(t);
          }
          t = p_7(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_module_ext_1 (ATerm t, ATerm x_87 (ATerm))
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym__2))
    {
      c_8 = ATgetArgument(b_8, 0);
      d_8 = ATgetArgument(b_8, 1);
      {
        ATerm g_8 = NULL,i_8 = NULL;
        t = not_null(d_8);
        {
          ATerm x_0 (ATerm t)
          {
            t = not_null(c_8);
            return(t);
          }
          t = guarantee_extension_1(t, x_0);
          {
            ATerm j_10;
            j_10 = t;
            {
              ATerm h_8 = NULL;
              h_8 = t;
              if(((g_8 != NULL) && (g_8 != h_8)))
                _fail(h_8);
              else
                g_8 = h_8;
            }
            t = j_10;
            {
              ATerm j_8 = NULL;
              t = x_87(t);
              {
                j_8 = t;
                if(((i_8 != NULL) && (i_8 != j_8)))
                  _fail(j_8);
                else
                  i_8 = j_8;
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_8), not_null(i_8));
                {
                  t = find_in_path_0(t);
                  {
                    ATerm k_10 = t;
                    int l_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_8 = NULL,m_8 = NULL;
                        ATerm m_10;
                        m_10 = t;
                        {
                          ATerm l_8 = NULL;
                          l_8 = t;
                          if(((k_8 != NULL) && (k_8 != l_8)))
                            _fail(l_8);
                          else
                            k_8 = l_8;
                        }
                        t = m_10;
                        {
                          ATerm n_8 = NULL,p_8 = NULL,r_8 = NULL,t_8 = NULL;
                          ATerm n_10;
                          n_10 = t;
                          {
                            ATerm o_8 = NULL;
                            o_8 = t;
                            if(((n_8 != NULL) && (n_8 != o_8)))
                              _fail(o_8);
                            else
                              n_8 = o_8;
                          }
                          t = n_10;
                          {
                            ATerm o_10;
                            o_10 = t;
                            {
                              ATerm q_8 = NULL;
                              t = basename_0(t);
                              {
                                ATerm y_0 (ATerm t)
                                {
                                  t = term_p_10;
                                  return(t);
                                }
                                t = guarantee_extension_1(t, y_0);
                                {
                                  q_8 = t;
                                  if(((p_8 != NULL) && (p_8 != q_8)))
                                    _fail(q_8);
                                  else
                                    p_8 = q_8;
                                }
                              }
                            }
                            t = o_10;
                            {
                              ATerm s_8 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Ext_1, not_null(c_8));
                              {
                                t = get_config_0(t);
                                {
                                  s_8 = t;
                                  if(((r_8 != NULL) && (r_8 != s_8)))
                                    _fail(s_8);
                                  else
                                    r_8 = s_8;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(n_8), not_null(p_8), not_null(r_8));
                                {
                                  t = parse_file_1(t, x_87);
                                  {
                                    t_8 = t;
                                    if(((m_8 != NULL) && (m_8 != t_8)))
                                      _fail(t_8);
                                    else
                                      m_8 = t_8;
                                  }
                                }
                              }
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), not_null(m_8));
                        }
                        LocalPopChoice(l_10);
                      }
                    else
                      {
                        t = k_10;
                        {
                          ATerm u_8 = NULL;
                          ATerm v_8 = NULL;
                          v_8 = t;
                          if(((u_8 != NULL) && (u_8 != v_8)))
                            _fail(v_8);
                          else
                            u_8 = v_8;
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_8)), term_u_10);
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
  ATerm g_9 = NULL;
  g_9 = t;
  t = SSL_table_keys(not_null(g_9));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm m_9 = NULL;
  m_9 = t;
  {
    t = table_keys_0(t);
    {
      ATerm z_0 (ATerm t)
      {
        ATerm o_9 = NULL;
        ATerm q_9 = NULL;
        o_9 = t;
        {
          ATerm r_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), not_null(o_9));
          {
            t = table_get_0(t);
            {
              r_9 = t;
              if(((q_9 != NULL) && (q_9 != r_9)))
                _fail(r_9);
              else
                q_9 = r_9;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_9), not_null(q_9));
        }
        return(t);
      }
      t = map_1(t, z_0);
    }
  }
  return(t);
}
ATerm get_config_keys_1 (ATerm t, ATerm v_62 (ATerm))
{
  t = term_y_10;
  {
    t = table_getlist_0(t);
    {
      ATerm a_1 (ATerm t)
      {
        t = _2(t, v_62, _id);
        t = Fst_0(t);
        return(t);
      }
      t = filter_1(t, a_1);
    }
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm w_87 (ATerm))
{
  ATerm a_10 = NULL;
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_10 = NULL;
      b_10 = t;
      {
        if(((a_10 != NULL) && (a_10 != b_10)))
          _fail(b_10);
        else
          a_10 = b_10;
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_10 = NULL,d_10 = NULL;
            c_10 = t;
            x_9 :
            if(match_cons(c_10, sym_Ext_1))
              {
                d_10 = ATgetArgument(c_10, 0);
                t = not_null(d_10);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = get_config_keys_1(t, b_1);
          {
            ATerm c_1 (ATerm t)
            {
              ATerm f_10 = NULL;
              ATerm g_10 = NULL;
              g_10 = t;
              if(((f_10 != NULL) && (f_10 != g_10)))
                _fail(g_10);
              else
                f_10 = g_10;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_10), not_null(a_10));
                t = get_module_ext_1(t, w_87);
              }
              return(t);
            }
            t = fetch_elem_1(t, c_1);
          }
        }
      }
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      {
        ATerm h_10 = NULL;
        ATerm i_10 = NULL;
        i_10 = t;
        if(((h_10 != NULL) && (h_10 != i_10)))
          _fail(i_10);
        else
          h_10 = i_10;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_11), not_null(h_10)), term_g_11);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm t_10 = NULL;
  ATerm v_10 = NULL,w_10 = NULL;
  t_10 = t;
  {
    ATerm x_10 = NULL;
    ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
    t = not_null(t_10);
    {
      x_10 = t;
      {
        t = SSL_explode_term(not_null(x_10));
        {
          z_10 = t;
          q_10 :
          if(match_cons(z_10, sym__2))
            {
              a_11 = ATgetArgument(z_10, 0);
              b_11 = ATgetArgument(z_10, 1);
              r_10 :
              if(match_string(a_11, ""))
                {
                  s_10 :
                  if(((ATgetType(b_11) == AT_LIST) && ((ATermList) b_11 != ATempty)))
                    {
                      c_11 = ATgetFirst((ATermList) b_11);
                      d_11 = (ATerm) ATgetNext((ATermList) b_11);
                      {
                        if(((w_10 != NULL) && (w_10 != c_11)))
                          _fail(c_11);
                        else
                          w_10 = c_11;
                        if(((v_10 != NULL) && (v_10 != d_11)))
                          _fail(d_11);
                        else
                          v_10 = d_11;
                      }
                    }
                  else
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
    t = not_null(w_10);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  k_11 = t;
  i_11 :
  if(match_cons(k_11, sym__5))
    {
      l_11 = ATgetArgument(k_11, 0);
      o_11 = ATgetArgument(k_11, 1);
      p_11 = ATgetArgument(k_11, 2);
      q_11 = ATgetArgument(k_11, 3);
      r_11 = ATgetArgument(k_11, 4);
      j_11 :
      if(((ATgetType(l_11) == AT_LIST) && ((ATermList) l_11 != ATempty)))
        {
          m_11 = ATgetFirst((ATermList) l_11);
          n_11 = (ATerm) ATgetNext((ATermList) l_11);
          t = (ATerm) ATmakeAppl(sym__5, not_null(n_11), not_null(o_11), not_null(p_11), not_null(q_11), (ATerm) ATinsert(CheckATermList(not_null(r_11)), not_null(m_11)));
        }
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
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  c_12 = t;
  a_12 :
  if(match_cons(c_12, sym__2))
    {
      d_12 = ATgetArgument(c_12, 0);
      e_12 = ATgetArgument(c_12, 1);
      b_12 :
      if(((ATgetType(e_12) == AT_LIST) && ((ATermList) e_12 != ATempty)))
        {
          f_12 = ATgetFirst((ATermList) e_12);
          g_12 = (ATerm) ATgetNext((ATermList) e_12);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_12)), not_null(f_12)), not_null(g_12));
        }
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
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym__2))
    {
      o_12 = ATgetArgument(n_12, 0);
      p_12 = ATgetArgument(n_12, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_12)), not_null(o_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  x_12 = t;
  u_12 :
  if(match_cons(x_12, sym__2))
    {
      y_12 = ATgetArgument(x_12, 0);
      b_13 = ATgetArgument(x_12, 1);
      v_12 :
      if(((ATgetType(y_12) == AT_LIST) && ((ATermList) y_12 != ATempty)))
        {
          z_12 = ATgetFirst((ATermList) y_12);
          a_13 = (ATerm) ATgetNext((ATermList) y_12);
          w_12 :
          if(((ATgetType(b_13) == AT_LIST) && ((ATermList) b_13 != ATempty)))
            {
              c_13 = ATgetFirst((ATermList) b_13);
              d_13 = (ATerm) ATgetNext((ATermList) b_13);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(z_12), not_null(c_13)), (ATerm) ATmakeAppl(sym__2, not_null(a_13), not_null(d_13)));
            }
          else
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
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  n_13 = t;
  k_13 :
  if(match_cons(n_13, sym__2))
    {
      o_13 = ATgetArgument(n_13, 0);
      p_13 = ATgetArgument(n_13, 1);
      l_13 :
      if(((ATermList) o_13 == ATempty))
        {
          m_13 :
          if(((ATermList) p_13 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm), ATerm q_78 (ATerm))
{
  ATerm r_13 (ATerm t)
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_78(t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        {
          t = o_78(t);
          {
            t = _2(t, q_78, r_13);
            t = p_78(t);
          }
        }
      }
    return(t);
  }
  t = r_13(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm s_78 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, s_78);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  c_14 = t;
  a_14 :
  if(((ATgetType(c_14) == AT_LIST) && ((ATermList) c_14 != ATempty)))
    {
      d_14 = ATgetFirst((ATermList) c_14);
      g_14 = (ATerm) ATgetNext((ATermList) c_14);
      b_14 :
      if(match_cons(d_14, sym__2))
        {
          e_14 = ATgetArgument(d_14, 0);
          f_14 = ATgetArgument(d_14, 1);
          {
            ATerm k_14 = NULL,l_14 = NULL,r_14 = NULL,x_14 = NULL;
            ATerm u_11;
            u_11 = t;
            {
              ATerm m_14 = NULL;
              ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
              t = not_null(f_14);
              {
                m_14 = t;
                {
                  t = SSL_explode_term(not_null(m_14));
                  {
                    o_14 = t;
                    v_13 :
                    if(match_cons(o_14, sym__2))
                      {
                        p_14 = ATgetArgument(o_14, 0);
                        q_14 = ATgetArgument(o_14, 1);
                        {
                          if(((k_14 != NULL) && (k_14 != p_14)))
                            _fail(p_14);
                          else
                            k_14 = p_14;
                          if(((l_14 != NULL) && (l_14 != q_14)))
                            _fail(q_14);
                          else
                            l_14 = q_14;
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
            t = u_11;
            {
              ATerm v_11;
              v_11 = t;
              {
                ATerm s_14 = NULL;
                ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
                t = not_null(e_14);
                {
                  s_14 = t;
                  {
                    t = SSL_explode_term(not_null(s_14));
                    {
                      u_14 = t;
                      y_13 :
                      if(match_cons(u_14, sym__2))
                        {
                          v_14 = ATgetArgument(u_14, 0);
                          w_14 = ATgetArgument(u_14, 1);
                          {
                            if(((k_14 != NULL) && (k_14 != v_14)))
                              _fail(v_14);
                            else
                              k_14 = v_14;
                            if(((r_14 != NULL) && (r_14 != w_14)))
                              _fail(w_14);
                            else
                              r_14 = w_14;
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
              t = v_11;
              {
                ATerm y_14 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), not_null(l_14));
                {
                  t = zip_1(t, _id);
                  {
                    y_14 = t;
                    if(((x_14 != NULL) && (x_14 != y_14)))
                      _fail(y_14);
                    else
                      x_14 = y_14;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_14), not_null(g_14));
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
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL;
  i_15 = t;
  g_15 :
  if(((ATgetType(i_15) == AT_LIST) && ((ATermList) i_15 != ATempty)))
    {
      j_15 = ATgetFirst((ATermList) i_15);
      m_15 = (ATerm) ATgetNext((ATermList) i_15);
      h_15 :
      if(match_cons(j_15, sym__2))
        {
          k_15 = ATgetArgument(j_15, 0);
          l_15 = ATgetArgument(j_15, 1);
          {
            ATerm o_15 = NULL;
            if(((k_15 != NULL) && (k_15 != l_15)))
              _fail(l_15);
            else
              k_15 = l_15;
            {
              if(((o_15 != NULL) && (o_15 != m_15)))
                _fail(m_15);
              else
                o_15 = m_15;
              t = not_null(o_15);
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
ATerm HdMember_1 (ATerm t, ATerm x_75 (ATerm))
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  t_15 = t;
  s_15 :
  if(((ATgetType(t_15) == AT_LIST) && ((ATermList) t_15 != ATempty)))
    {
      u_15 = ATgetFirst((ATermList) t_15);
      v_15 = (ATerm) ATgetNext((ATermList) t_15);
      {
        t = x_75(t);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm y_15 = NULL;
            y_15 = t;
            if(((u_15 != NULL) && (u_15 != y_15)))
              _fail(y_15);
            else
              u_15 = y_15;
            return(t);
          }
          t = fetch_1(t, d_1);
        }
        t = not_null(v_15);
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
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
      e_16 = t;
      c_16 :
      if(match_cons(e_16, sym__2))
        {
          f_16 = ATgetArgument(e_16, 0);
          g_16 = ATgetArgument(e_16, 1);
          {
            t = not_null(f_16);
            {
              ATerm m_16 (ATerm t)
              {
                ATerm y_11 = t;
                int z_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(z_11);
                  }
                else
                  {
                    t = y_11;
                    {
                      ATerm h_12 = t;
                      int i_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_1 (ATerm t)
                          {
                            t = not_null(g_16);
                            return(t);
                          }
                          t = HdMember_1(t, e_1);
                          t = m_16(t);
                          LocalPopChoice(i_12);
                        }
                      else
                        {
                          t = h_12;
                          t = Cons_2(t, _id, m_16);
                        }
                    }
                  }
                return(t);
              }
              t = m_16(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      {
        ATerm h_1 (ATerm t)
        {
          ATerm j_16 = NULL;
          j_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(j_16));
          return(t);
        }
        ATerm i_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm j_1 (ATerm t)
        {
          ATerm j_12 = t;
          int k_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_1 (ATerm t)
              {
                ATerm l_12 = t;
                int q_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(q_12);
                  }
                else
                  {
                    t = l_12;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, k_1);
              LocalPopChoice(k_12);
            }
          else
            {
              t = j_12;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, h_1, i_1, j_1);
      }
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm j_63 (ATerm), ATerm k_63 (ATerm), ATerm l_63 (ATerm))
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  x_16 = t;
  v_16 :
  if(match_cons(x_16, sym__5))
    {
      y_16 = ATgetArgument(x_16, 0);
      b_17 = ATgetArgument(x_16, 1);
      c_17 = ATgetArgument(x_16, 2);
      d_17 = ATgetArgument(x_16, 3);
      e_17 = ATgetArgument(x_16, 4);
      w_16 :
      if(((ATgetType(y_16) == AT_LIST) && ((ATermList) y_16 != ATempty)))
        {
          z_16 = ATgetFirst((ATermList) y_16);
          a_17 = (ATerm) ATgetNext((ATermList) y_16);
          {
            ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,r_17 = NULL,t_17 = NULL,v_17 = NULL;
            ATerm r_12;
            r_12 = t;
            {
              ATerm o_17 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_16), not_null(c_17));
              {
                ATerm p_17 = NULL;
                t = j_63(t);
                {
                  o_17 = t;
                  {
                    if(((l_17 != NULL) && (l_17 != o_17)))
                      _fail(o_17);
                    else
                      l_17 = o_17;
                    {
                      t = not_null(l_17);
                      {
                        ATerm q_17 = NULL;
                        t = k_63(t);
                        {
                          p_17 = t;
                          {
                            if(((m_17 != NULL) && (m_17 != p_17)))
                              _fail(p_17);
                            else
                              m_17 = p_17;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(m_17), not_null(b_17));
                              {
                                t = diff_0(t);
                                {
                                  q_17 = t;
                                  if(((n_17 != NULL) && (n_17 != q_17)))
                                    _fail(q_17);
                                  else
                                    n_17 = q_17;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = r_12;
            {
              ATerm s_12;
              s_12 = t;
              {
                ATerm s_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), not_null(a_17));
                {
                  t = conc_0(t);
                  {
                    s_17 = t;
                    if(((r_17 != NULL) && (r_17 != s_17)))
                      _fail(s_17);
                    else
                      r_17 = s_17;
                  }
                }
              }
              t = s_12;
              {
                ATerm t_12;
                t_12 = t;
                {
                  ATerm u_17 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), not_null(b_17));
                  {
                    t = conc_0(t);
                    {
                      u_17 = t;
                      if(((t_17 != NULL) && (t_17 != u_17)))
                        _fail(u_17);
                      else
                        t_17 = u_17;
                    }
                  }
                }
                t = t_12;
                {
                  ATerm w_17 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(z_16), not_null(l_17), not_null(d_17));
                  {
                    t = l_63(t);
                    {
                      w_17 = t;
                      if(((v_17 != NULL) && (v_17 != w_17)))
                        _fail(w_17);
                      else
                        v_17 = w_17;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(r_17), not_null(t_17), not_null(c_17), not_null(v_17), not_null(e_17));
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
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
  h_18 = t;
  f_18 :
  if(match_cons(h_18, sym__5))
    {
      i_18 = ATgetArgument(h_18, 0);
      j_18 = ATgetArgument(h_18, 1);
      k_18 = ATgetArgument(h_18, 2);
      l_18 = ATgetArgument(h_18, 3);
      m_18 = ATgetArgument(h_18, 4);
      g_18 :
      if(((ATermList) i_18 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(m_18));
        }
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
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym__3))
    {
      v_18 = ATgetArgument(u_18, 0);
      w_18 = ATgetArgument(u_18, 1);
      x_18 = ATgetArgument(u_18, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(v_18), not_null(v_18), not_null(w_18), not_null(x_18), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm a_87 (ATerm), ATerm b_87 (ATerm))
{
  ATerm c_19 (ATerm t)
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_87(t);
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        {
          t = b_87(t);
          t = c_19(t);
        }
      }
    return(t);
  }
  t = c_19(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm))
{
  t = d_87(t);
  t = while_not_2(t, e_87, f_87);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm r_63 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, p_63, q_63, r_63);
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, l_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm g_64 (ATerm))
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  t = graph_nodes_undef_roots_3(t, e_64, f_64, g_64);
  {
    f_19 = t;
    e_19 :
    if(match_cons(f_19, sym__2))
      {
        g_19 = ATgetArgument(f_19, 0);
        h_19 = ATgetArgument(f_19, 1);
        t = not_null(g_19);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm pack_stratego_1 (ATerm t, ATerm v_87 (ATerm))
{
  ATerm p_19 = NULL;
  p_19 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(p_19)), term_j_13), term_i_13), term_w_9, (ATerm) ATempty);
    {
      ATerm m_1 (ATerm t)
      {
        t = Fst_0(t);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm r_19 = NULL;
            ATerm s_19 = NULL;
            t = term_w_9;
            {
              t = v_87(t);
              {
                s_19 = t;
                if(((r_19 != NULL) && (r_19 != s_19)))
                  _fail(s_19);
                else
                  r_19 = s_19;
              }
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(r_19)), term_q_13);
            return(t);
          }
          t = get_module_1(t, o_1);
        }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL;
        t_19 = t;
        o_19 :
        if(match_cons(t_19, sym__3))
          {
            u_19 = ATgetArgument(t_19, 0);
            v_19 = ATgetArgument(t_19, 1);
            w_19 = ATgetArgument(t_19, 2);
            t = (ATerm) ATinsert(CheckATermList(not_null(w_19)), not_null(v_19));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = graph_nodes_roots_3(t, m_1, get_stratego_imports_0, n_1);
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
  ATerm e_20 = NULL;
  e_20 = t;
  t = SSL_exit(not_null(e_20));
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_20 = NULL;
  i_20 = t;
  t = SSL_TicksToSeconds(not_null(i_20));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  m_20 :
  if(match_cons(n_20, sym__2))
    {
      o_20 = ATgetArgument(n_20, 0);
      p_20 = ATgetArgument(n_20, 1);
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_20), not_null(p_20));
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            t = SSL_addr(not_null(o_20), not_null(p_20));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_74 (ATerm), ATerm t_74 (ATerm))
{
  ATerm u_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_74(t);
      LocalPopChoice(w_13);
    }
  else
    {
      t = u_13;
      {
        ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
        w_20 = t;
        v_20 :
        if(((ATgetType(w_20) == AT_LIST) && ((ATermList) w_20 != ATempty)))
          {
            x_20 = ATgetFirst((ATermList) w_20);
            y_20 = (ATerm) ATgetNext((ATermList) w_20);
            {
              ATerm c_21 = NULL;
              ATerm d_21 = NULL;
              t = not_null(y_20);
              {
                t = foldr_2(t, s_74, t_74);
                {
                  d_21 = t;
                  if(((c_21 != NULL) && (c_21 != d_21)))
                    _fail(d_21);
                  else
                    c_21 = d_21;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_20), not_null(c_21));
                t = t_74(t);
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
ATerm crush_2 (ATerm t, ATerm g_76 (ATerm), ATerm h_76 (ATerm))
{
  ATerm n_21 = NULL;
  ATerm p_21 = NULL;
  n_21 = t;
  {
    ATerm q_21 = NULL;
    ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
    t = not_null(n_21);
    {
      q_21 = t;
      {
        t = SSL_explode_term(not_null(q_21));
        {
          x_21 = t;
          m_21 :
          if(match_cons(x_21, sym__2))
            {
              y_21 = ATgetArgument(x_21, 0);
              z_21 = ATgetArgument(x_21, 1);
              if(((p_21 != NULL) && (p_21 != z_21)))
                _fail(z_21);
              else
                p_21 = z_21;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(p_21);
      t = foldr_2(t, g_76, h_76);
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
    ATerm p_1 (ATerm t)
    {
      t = term_x_13;
      return(t);
    }
    t = crush_2(t, p_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm z_13;
    z_13 = t;
    {
      ATerm j_22 = NULL;
      ATerm n_22 = NULL;
      t = term_h_14;
      {
        t = get_config_0(t);
        {
          n_22 = t;
          if(((j_22 != NULL) && (j_22 != n_22)))
            _fail(n_22);
          else
            j_22 = n_22;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_22), term_i_9);
        t = geq_0(t);
      }
    }
    t = z_13;
    t = b_69(t);
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm h_23 = NULL;
  h_23 = t;
  t = SSL_close_file(not_null(h_23));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  z_23 = t;
  y_23 :
  if(((ATgetType(z_23) == AT_LIST) && ((ATermList) z_23 != ATempty)))
    {
      a_24 = ATgetFirst((ATermList) z_23);
      b_24 = (ATerm) ATgetNext((ATermList) z_23);
      {
        ATerm o_24 = NULL;
        ATerm p_24 = NULL;
        t = term_w_9;
        {
          t = s_81(t);
          {
            p_24 = t;
            if(((o_24 != NULL) && (o_24 != p_24)))
              _fail(p_24);
            else
              o_24 = p_24;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_24)), not_null(a_24)), not_null(o_24));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm t_81 (ATerm))
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
        ATerm r_1 (ATerm t)
        {
          ATerm n_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_14);
            }
          else
            {
              t = n_14;
              {
                t = Cons_2(t, _id, r_1);
                t = Sep_1(t, t_81);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, r_1);
      }
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm l_71 (ATerm))
{
  ATerm z_14;
  z_14 = t;
  {
    t = l_71(t);
    {
      ATerm s_1 (ATerm t)
      {
        t = term_a_15;
        return(t);
      }
      t = debug_1(t, s_1);
    }
  }
  t = z_14;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
      l_25 = t;
      g_25 :
      if(match_cons(l_25, sym__2))
        {
          m_25 = ATgetArgument(l_25, 0);
          n_25 = ATgetArgument(l_25, 1);
          {
            if(((k_25 != NULL) && (k_25 != m_25)))
              _fail(m_25);
            else
              k_25 = m_25;
            {
              if(((j_25 != NULL) && (j_25 != n_25)))
                _fail(n_25);
              else
                j_25 = n_25;
              t = SSL_open_file(not_null(k_25), not_null(j_25));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
        ATerm o_25 = NULL;
        ATerm p_25 = NULL;
        ATerm t_1 (ATerm t)
        {
          t = term_d_15;
          return(t);
        }
        t = obsolete_1(t, t_1);
        {
          o_25 = t;
          {
            if(((k_25 != NULL) && (k_25 != o_25)))
              _fail(o_25);
            else
              k_25 = o_25;
            {
              ATerm e_15;
              e_15 = t;
              {
                ATerm q_25 = NULL;
                t = term_f_15;
                {
                  q_25 = t;
                  if(((p_25 != NULL) && (p_25 != q_25)))
                    _fail(q_25);
                  else
                    p_25 = q_25;
                }
              }
              t = e_15;
              t = SSL_open_file(not_null(k_25), not_null(p_25));
            }
          }
        }
      }
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  v_25 :
  if(match_cons(w_25, sym__2))
    {
      x_25 = ATgetArgument(w_25, 0);
      y_25 = ATgetArgument(w_25, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_25)), term_q_13), not_null(x_25));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_dep_file_1 (ATerm t, ATerm i_63 (ATerm))
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
  i_26 = t;
  h_26 :
  if(match_cons(i_26, sym__2))
    {
      j_26 = ATgetArgument(i_26, 0);
      k_26 = ATgetArgument(i_26, 1);
      {
        ATerm n_26 = NULL,o_26 = NULL;
        ATerm p_26 = NULL;
        t = not_null(j_26);
        {
          ATerm q_26 = NULL,s_26 = NULL;
          t = i_63(t);
          {
            p_26 = t;
            {
              if(((n_26 != NULL) && (n_26 != p_26)))
                _fail(p_26);
              else
                n_26 = p_26;
              {
                ATerm r_26 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_26), term_n_15);
                {
                  t = add_extension_0(t);
                  {
                    r_26 = t;
                    if(((q_26 != NULL) && (q_26 != r_26)))
                      _fail(r_26);
                    else
                      q_26 = r_26;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_26), term_f_15);
                  {
                    ATerm t_26 = NULL;
                    t = open_file_0(t);
                    {
                      s_26 = t;
                      {
                        if(((o_26 != NULL) && (o_26 != s_26)))
                          _fail(s_26);
                        else
                          o_26 = s_26;
                        {
                          ATerm u_26 = NULL;
                          t = (ATerm) ATinsert(CheckATermList(not_null(k_26)), term_p_15);
                          {
                            ATerm u_1 (ATerm t)
                            {
                              t = term_q_15;
                              return(t);
                            }
                            t = separate_by_1(t, u_1);
                            {
                              u_26 = t;
                              if(((t_26 != NULL) && (t_26 != u_26)))
                                _fail(u_26);
                              else
                                t_26 = u_26;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), (ATerm) ATinsert(CheckATermList(not_null(t_26)), not_null(n_26)));
                            {
                              t = printnl_0(t);
                              {
                                t = not_null(o_26);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_26), not_null(k_26));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_68 (ATerm))
{
  t = fetch_1(t, z_68);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym__2))
    {
      d_27 = ATgetArgument(c_27, 0);
      e_27 = ATgetArgument(c_27, 1);
      t = SSL_WriteToTextFile(not_null(d_27), not_null(e_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,s_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym__2))
    {
      l_27 = ATgetArgument(k_27, 0);
      s_27 = ATgetArgument(k_27, 1);
      t = SSL_WriteToBinaryFile(not_null(l_27), not_null(s_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm c_80 (ATerm))
{
  ATerm d_28 (ATerm t)
  {
    ATerm r_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_15);
      }
    else
      {
        t = r_15;
        t = Cons_2(t, c_80, d_28);
      }
    return(t);
  }
  t = d_28(t);
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm j_28 = NULL;
  ATerm v_1 (ATerm t)
  {
    ATerm k_28 = NULL,l_28 = NULL;
    k_28 = t;
    i_28 :
    if(match_cons(k_28, sym_Program_1))
      {
        l_28 = ATgetArgument(k_28, 0);
        if(((j_28 != NULL) && (j_28 != l_28)))
          _fail(l_28);
        else
          j_28 = l_28;
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = option_defined_1(t, v_1);
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_16), term_a_16), term_z_15), not_null(j_28)), term_x_15));
    {
      t = printnl_0(t);
      {
        t = term_i_9;
        t = exit_0(t);
      }
    }
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  q_28 :
  if(match_cons(r_28, sym_Version_0))
    {
      ATerm t_28 = NULL,v_28 = NULL;
      ATerm d_16;
      d_16 = t;
      {
        ATerm u_28 = NULL;
        t = SSLgetAnnotations(not_null(r_28));
        {
          u_28 = t;
          if(((t_28 != NULL) && (t_28 != u_28)))
            _fail(u_28);
          else
            t_28 = u_28;
        }
      }
      t = d_16;
      {
        ATerm w_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(t_28));
        {
          w_28 = t;
          if(((v_28 != NULL) && (v_28 != w_28)))
            _fail(w_28);
          else
            v_28 = w_28;
        }
        t = not_null(v_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_70 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        {
          ATerm k_16 = t;
          int l_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_16);
            }
          else
            {
              t = k_16;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_1);
  t = m_70(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm c_63 (ATerm))
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym__2))
    {
      h_29 = ATgetArgument(g_29, 0);
      i_29 = ATgetArgument(g_29, 1);
      {
        ATerm l_29 = NULL,m_29 = NULL,p_29 = NULL;
        ATerm n_16;
        n_16 = t;
        {
          ATerm q_29 = NULL;
          ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
          t = c_63(t);
          {
            q_29 = t;
            {
              if(((l_29 != NULL) && (l_29 != q_29)))
                _fail(q_29);
              else
                l_29 = q_29;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_29), not_null(h_29), not_null(i_29));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_16 = t;
                    int p_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_29), term_q_16);
                        t = table_get_0(t);
                        LocalPopChoice(p_16);
                      }
                    else
                      {
                        t = o_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      r_29 = t;
                      e_29 :
                      if(((ATgetType(r_29) == AT_LIST) && ((ATermList) r_29 != ATempty)))
                        {
                          s_29 = ATgetFirst((ATermList) r_29);
                          t_29 = (ATerm) ATgetNext((ATermList) r_29);
                          {
                            if(((m_29 != NULL) && (m_29 != s_29)))
                              _fail(s_29);
                            else
                              m_29 = s_29;
                            {
                              if(((p_29 != NULL) && (p_29 != t_29)))
                                _fail(t_29);
                              else
                                p_29 = t_29;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_29), term_q_16, (ATerm) ATinsert(CheckATermList(not_null(p_29)), (ATerm) ATinsert(CheckATermList(not_null(m_29)), not_null(h_29))));
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
        t = n_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm u_68 (ATerm), ATerm v_68 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    t = term_r_16;
    return(t);
  }
  t = ArgOption_3(t, u_68, v_68, x_1);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm j_68 (ATerm), ATerm k_68 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    t = term_r_16;
    return(t);
  }
  t = Option_3(t, j_68, k_68, y_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  t = SSL_string_to_int(not_null(y_29));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  g_30 = t;
  e_30 :
  if(match_string(g_30, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(g_30) == AT_LIST) && ((ATermList) g_30 != ATempty)))
        {
          h_30 = ATgetFirst((ATermList) g_30);
          i_30 = (ATerm) ATgetNext((ATermList) g_30);
          f_30 :
          if(((ATgetType(i_30) == AT_LIST) && ((ATermList) i_30 != ATempty)))
            {
              j_30 = ATgetFirst((ATermList) i_30);
              k_30 = (ATerm) ATgetNext((ATermList) i_30);
              {
                ATerm w_30 = NULL;
                ATerm s_16;
                s_16 = t;
                {
                  t = not_null(h_30);
                  t = k_0(t);
                }
                t = s_16;
                {
                  ATerm z_30 = NULL;
                  t = not_null(j_30);
                  {
                    t = l_0(t);
                    {
                      z_30 = t;
                      if(((w_30 != NULL) && (w_30 != z_30)))
                        _fail(z_30);
                      else
                        w_30 = z_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_30)), not_null(w_30));
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
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm u_31 = NULL;
        u_31 = t;
        d_31 :
        if(!(match_string(u_31, "-i")))
          {
            if(!(match_string(u_31, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        ATerm x_31 = NULL;
        ATerm f_17;
        f_17 = t;
        {
          ATerm v_31 = NULL;
          ATerm w_31 = NULL;
          w_31 = t;
          if(((v_31 != NULL) && (v_31 != w_31)))
            _fail(w_31);
          else
            v_31 = w_31;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_n_9, not_null(v_31));
            t = set_config_0(t);
          }
        }
        t = f_17;
        {
          ATerm y_31 = NULL;
          y_31 = t;
          if(((x_31 != NULL) && (x_31 != y_31)))
            _fail(y_31);
          else
            x_31 = y_31;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_31));
        }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = term_g_17;
        return(t);
      }
      t = ArgOption_3(t, z_1, a_2, b_2);
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              ATerm z_31 = NULL;
              z_31 = t;
              g_31 :
              if(!(match_string(z_31, "-o")))
                {
                  if(!(match_string(z_31, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              ATerm c_32 = NULL;
              ATerm j_17;
              j_17 = t;
              {
                ATerm a_32 = NULL;
                ATerm b_32 = NULL;
                b_32 = t;
                if(((a_32 != NULL) && (a_32 != b_32)))
                  _fail(b_32);
                else
                  a_32 = b_32;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(a_32));
                  t = set_config_0(t);
                }
              }
              t = j_17;
              {
                ATerm d_32 = NULL;
                d_32 = t;
                if(((c_32 != NULL) && (c_32 != d_32)))
                  _fail(d_32);
                else
                  c_32 = d_32;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_32));
              }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              t = term_k_17;
              return(t);
            }
            t = ArgOption_3(t, c_2, d_2, e_2);
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            {
              ATerm x_17 = t;
              int y_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_2 (ATerm t)
                  {
                    ATerm e_32 = NULL;
                    e_32 = t;
                    j_31 :
                    if(!(match_string(e_32, "-S")))
                      {
                        if(!(match_string(e_32, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm j_2 (ATerm t)
                  {
                    t = term_z_17;
                    t = set_config_0(t);
                    t = term_a_18;
                    return(t);
                  }
                  ATerm n_2 (ATerm t)
                  {
                    t = term_b_18;
                    return(t);
                  }
                  t = Option_3(t, i_2, j_2, n_2);
                  LocalPopChoice(y_17);
                }
              else
                {
                  t = x_17;
                  {
                    ATerm c_18 = t;
                    int d_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_2 (ATerm t)
                        {
                          ATerm f_32 = NULL;
                          f_32 = t;
                          k_31 :
                          if(!(match_string(f_32, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm r_2 (ATerm t)
                        {
                          ATerm i_32 = NULL;
                          ATerm e_18;
                          e_18 = t;
                          {
                            ATerm g_32 = NULL;
                            ATerm h_32 = NULL;
                            t = string_to_int_0(t);
                            {
                              h_32 = t;
                              if(((g_32 != NULL) && (g_32 != h_32)))
                                _fail(h_32);
                              else
                                g_32 = h_32;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_h_14, not_null(g_32));
                              t = set_config_0(t);
                            }
                          }
                          t = e_18;
                          {
                            ATerm j_32 = NULL;
                            j_32 = t;
                            if(((i_32 != NULL) && (i_32 != j_32)))
                              _fail(j_32);
                            else
                              i_32 = j_32;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(i_32));
                          }
                          return(t);
                        }
                        ATerm s_2 (ATerm t)
                        {
                          t = term_n_18;
                          return(t);
                        }
                        t = ArgOption_3(t, q_2, r_2, s_2);
                        LocalPopChoice(d_18);
                      }
                    else
                      {
                        t = c_18;
                        {
                          ATerm o_18 = t;
                          int p_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_2 (ATerm t)
                              {
                                ATerm k_32 = NULL;
                                k_32 = t;
                                q_31 :
                                if(!(match_string(k_32, "-v")))
                                  {
                                    if(!(match_string(k_32, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm u_2 (ATerm t)
                              {
                                t = term_r_18;
                                t = set_config_0(t);
                                t = term_s_18;
                                return(t);
                              }
                              ATerm w_2 (ATerm t)
                              {
                                t = term_y_18;
                                return(t);
                              }
                              t = Option_3(t, t_2, u_2, w_2);
                              LocalPopChoice(p_18);
                            }
                          else
                            {
                              t = o_18;
                              {
                                ATerm z_18 = t;
                                int a_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_2 (ATerm t)
                                    {
                                      ATerm l_32 = NULL;
                                      l_32 = t;
                                      s_31 :
                                      if(!(match_string(l_32, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm b_3 (ATerm t)
                                    {
                                      t = term_d_19;
                                      t = set_config_0(t);
                                      t = term_i_19;
                                      return(t);
                                    }
                                    ATerm c_3 (ATerm t)
                                    {
                                      t = term_j_19;
                                      return(t);
                                    }
                                    t = Option_3(t, z_2, b_3, c_3);
                                    LocalPopChoice(a_19);
                                  }
                                else
                                  {
                                    t = z_18;
                                    {
                                      ATerm d_3 (ATerm t)
                                      {
                                        ATerm m_32 = NULL;
                                        m_32 = t;
                                        t_31 :
                                        if(!(match_string(m_32, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm e_3 (ATerm t)
                                      {
                                        t = term_l_19;
                                        t = set_config_0(t);
                                        t = term_m_19;
                                        return(t);
                                      }
                                      ATerm p_3 (ATerm t)
                                      {
                                        t = term_n_19;
                                        return(t);
                                      }
                                      t = Option_3(t, d_3, e_3, p_3);
                                    }
                                  }
                              }
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
  ATerm u_32 = NULL;
  u_32 = t;
  t = SSL_table_destroy(not_null(u_32));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  f_33 = t;
  c_33 :
  if(((ATgetType(f_33) == AT_LIST) && ((ATermList) f_33 != ATempty)))
    {
      d_33 = ATgetFirst((ATermList) f_33);
      e_33 = (ATerm) ATgetNext((ATermList) f_33);
      {
        ATerm i_33 = NULL;
        t = not_null(e_33);
        {
          ATerm q_19;
          q_19 = t;
          {
            ATerm j_33 = NULL,l_33 = NULL,r_33 = NULL;
            ATerm x_19;
            x_19 = t;
            {
              ATerm k_33 = NULL;
              t = j_0(t);
              {
                k_33 = t;
                if(((j_33 != NULL) && (j_33 != k_33)))
                  _fail(k_33);
                else
                  j_33 = k_33;
              }
            }
            t = x_19;
            {
              ATerm q_33 = NULL;
              t = not_null(d_33);
              {
                t = i_0(t);
                {
                  q_33 = t;
                  if(((l_33 != NULL) && (l_33 != q_33)))
                    _fail(q_33);
                  else
                    l_33 = q_33;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_33)), not_null(l_33));
                {
                  r_33 = t;
                  if(((i_33 != NULL) && (i_33 != r_33)))
                    _fail(r_33);
                  else
                    i_33 = r_33;
                }
              }
            }
          }
          t = q_19;
          {
            ATerm q_3 (ATerm t)
            {
              t = not_null(i_33);
              return(t);
            }
            t = reverse_acc_2(t, i_0, q_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) f_33 == ATempty))
        {
          {
            t = term_w_9;
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
  ATerm r_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_61 (ATerm))
{
  ATerm j_34 = NULL,k_34 = NULL;
  j_34 = t;
  i_34 :
  if(match_cons(j_34, sym_Program_1))
    {
      k_34 = ATgetArgument(j_34, 0);
      {
        ATerm n_34 = NULL,r_34 = NULL;
        ATerm o_34 = NULL;
        t = SSLgetAnnotations(not_null(j_34));
        {
          o_34 = t;
          if(((n_34 != NULL) && (n_34 != o_34)))
            _fail(o_34);
          else
            n_34 = o_34;
        }
        {
          t = not_null(k_34);
          {
            ATerm t_34 = NULL;
            t = r_61(t);
            {
              r_34 = t;
              {
                ATerm u_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_34)), not_null(n_34));
                {
                  u_34 = t;
                  if(((t_34 != NULL) && (t_34 != u_34)))
                    _fail(u_34);
                  else
                    t_34 = u_34;
                }
                t = not_null(t_34);
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
  ATerm d_35 = NULL;
  ATerm s_3 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      ATerm e_35 = NULL;
      e_35 = t;
      if(((d_35 != NULL) && (d_35 != e_35)))
        _fail(e_35);
      else
        d_35 = e_35;
      return(t);
    }
    t = Program_1(t, t_3);
    return(t);
  }
  t = option_defined_1(t, s_3);
  {
    ATerm u_3 (ATerm t)
    {
      ATerm f_35 = NULL;
      ATerm g_35 = NULL;
      t = term_w_9;
      {
        ATerm z_3 (ATerm t)
        {
          t = not_null(d_35);
          return(t);
        }
        t = short_description_1(t, z_3);
        {
          t = concat_strings_0(t);
          {
            g_35 = t;
            if(((f_35 != NULL) && (f_35 != g_35)))
              _fail(g_35);
            else
              f_35 = g_35;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATempty, not_null(f_35)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, u_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATempty, term_y_19));
      {
        t = printnl_0(t);
        {
          t = term_b_20;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_4 (ATerm t)
                {
                  ATerm h_35 = NULL;
                  h_35 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_35)), term_c_20));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_4);
                {
                  ATerm b_4 (ATerm t)
                  {
                    ATerm j_35 = NULL;
                    ATerm k_35 = NULL;
                    t = term_w_9;
                    {
                      ATerm c_4 (ATerm t)
                      {
                        t = not_null(d_35);
                        return(t);
                      }
                      t = long_description_1(t, c_4);
                      {
                        t = concat_strings_0(t);
                        {
                          k_35 = t;
                          if(((j_35 != NULL) && (j_35 != k_35)))
                            _fail(k_35);
                          else
                            j_35 = k_35;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_35)), term_d_20));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_4);
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
ATerm Undefined_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm x_35 = NULL,z_35 = NULL;
  x_35 = t;
  w_35 :
  if(match_cons(x_35, sym_Undefined_1))
    {
      z_35 = ATgetArgument(x_35, 0);
      {
        ATerm c_36 = NULL,e_36 = NULL;
        ATerm d_36 = NULL;
        t = SSLgetAnnotations(not_null(x_35));
        {
          d_36 = t;
          if(((c_36 != NULL) && (c_36 != d_36)))
            _fail(d_36);
          else
            c_36 = d_36;
        }
        {
          t = not_null(z_35);
          {
            ATerm g_36 = NULL;
            t = s_61(t);
            {
              e_36 = t;
              {
                ATerm h_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_36)), not_null(c_36));
                {
                  h_36 = t;
                  if(((g_36 != NULL) && (g_36 != h_36)))
                    _fail(h_36);
                  else
                    g_36 = h_36;
                }
                t = not_null(g_36);
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
  ATerm q_36 = NULL;
  q_36 = t;
  p_36 :
  if(match_cons(q_36, sym_Help_0))
    {
      ATerm s_36 = NULL,u_36 = NULL;
      ATerm f_20;
      f_20 = t;
      {
        ATerm t_36 = NULL;
        t = SSLgetAnnotations(not_null(q_36));
        {
          t_36 = t;
          if(((s_36 != NULL) && (s_36 != t_36)))
            _fail(t_36);
          else
            s_36 = t_36;
        }
      }
      t = f_20;
      {
        ATerm v_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_36));
        {
          v_36 = t;
          if(((u_36 != NULL) && (u_36 != v_36)))
            _fail(v_36);
          else
            u_36 = v_36;
        }
        t = not_null(u_36);
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
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
  c_37 = t;
  b_37 :
  if(match_cons(c_37, sym__3))
    {
      d_37 = ATgetArgument(c_37, 0);
      e_37 = ATgetArgument(c_37, 1);
      f_37 = ATgetArgument(c_37, 2);
      {
        ATerm g_20;
        g_20 = t;
        {
          ATerm j_37 = NULL;
          ATerm k_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_37), not_null(e_37));
          {
            ATerm h_20 = t;
            int j_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_20);
              }
            else
              {
                t = h_20;
                t = (ATerm) ATempty;
              }
            {
              k_37 = t;
              if(((j_37 != NULL) && (j_37 != k_37)))
                _fail(k_37);
              else
                j_37 = k_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_37), not_null(e_37), (ATerm) ATinsert(CheckATermList(not_null(j_37)), not_null(f_37)));
            t = table_put_0(t);
          }
        }
        t = g_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_68 (ATerm))
{
  ATerm r_37 = NULL;
  ATerm s_37 = NULL;
  t = term_w_9;
  {
    t = f_68(t);
    {
      s_37 = t;
      if(((r_37 != NULL) && (r_37 != s_37)))
        _fail(s_37);
      else
        r_37 = s_37;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_19, term_a_20, not_null(r_37));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_string(y_37, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(y_37) == AT_LIST) && ((ATermList) y_37 != ATempty)))
        {
          z_37 = ATgetFirst((ATermList) y_37);
          a_38 = (ATerm) ATgetNext((ATermList) y_37);
          {
            ATerm d_38 = NULL;
            ATerm k_20;
            k_20 = t;
            {
              t = not_null(z_37);
              t = a_0(t);
            }
            t = k_20;
            {
              ATerm e_38 = NULL;
              t = term_w_9;
              {
                t = b_0(t);
                {
                  e_38 = t;
                  if(((d_38 != NULL) && (d_38 != e_38)))
                    _fail(e_38);
                  else
                    d_38 = e_38;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_38)), not_null(d_38));
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
  ATerm f_4 (ATerm t)
  {
    ATerm j_38 = NULL;
    j_38 = t;
    i_38 :
    if(!(match_string(j_38, "--help")))
      {
        if(!(match_string(j_38, "-h")))
          {
            if(!(match_string(j_38, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_l_20;
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_q_20;
    return(t);
  }
  t = Option_3(t, f_4, g_4, h_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
  m_38 = t;
  l_38 :
  if(((ATgetType(m_38) == AT_LIST) && ((ATermList) m_38 != ATempty)))
    {
      n_38 = ATgetFirst((ATermList) m_38);
      o_38 = (ATerm) ATgetNext((ATermList) m_38);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_38)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_38)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm u_38 = NULL,y_38 = NULL,z_38 = NULL;
  u_38 = t;
  t_38 :
  if(match_cons(u_38, sym__2))
    {
      y_38 = ATgetArgument(u_38, 0);
      z_38 = ATgetArgument(u_38, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_10, not_null(y_38), not_null(z_38));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_68 (ATerm))
{
  ATerm r_20;
  r_20 = t;
  {
    ATerm p_4 (ATerm t)
    {
      t = term_s_20;
      t = d_68(t);
      return(t);
    }
    t = try_1(t, p_4);
  }
  t = r_20;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm h_39 = NULL;
      ATerm t_20;
      t_20 = t;
      {
        ATerm f_39 = NULL;
        ATerm g_39 = NULL;
        g_39 = t;
        if(((f_39 != NULL) && (f_39 != g_39)))
          _fail(g_39);
        else
          f_39 = g_39;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_20, not_null(f_39));
          t = set_config_0(t);
        }
      }
      t = t_20;
      {
        ATerm i_39 = NULL;
        i_39 = t;
        if(((h_39 != NULL) && (h_39 != i_39)))
          _fail(i_39);
        else
          h_39 = i_39;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_39));
      }
      return(t);
    }
    ATerm t_4 (ATerm t)
    {
      ATerm z_20 = t;
      int a_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_21);
            }
          else
            {
              t = b_21;
              {
                t = d_68(t);
                t = Cons_2(t, _id, t_4);
              }
            }
          LocalPopChoice(a_21);
        }
      else
        {
          t = z_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_4, t_4);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_68 (ATerm))
{
  ATerm n_39 = NULL;
  ATerm f_21;
  f_21 = t;
  {
    t = term_g_21;
    t = table_put_0(t);
  }
  t = f_21;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm h_21 = t;
      int i_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_68(t);
          LocalPopChoice(i_21);
        }
      else
        {
          t = h_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_4);
    {
      ATerm v_4 (ATerm t)
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_x_13;
                t = exit_0(t);
              }
            }
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            {
              ATerm y_4 (ATerm t)
              {
                ATerm z_4 (ATerm t)
                {
                  ATerm o_39 = NULL;
                  o_39 = t;
                  if(((n_39 != NULL) && (n_39 != o_39)))
                    _fail(o_39);
                  else
                    n_39 = o_39;
                  return(t);
                }
                t = Undefined_1(t, z_4);
                return(t);
              }
              t = option_defined_1(t, y_4);
              {
                ATerm l_21;
                l_21 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_39)), term_o_21));
                  t = printnl_0(t);
                }
                t = l_21;
                {
                  t = system_usage_0(t);
                  {
                    t = term_i_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_4);
      {
        ATerm r_21;
        r_21 = t;
        {
          t = term_z_19;
          t = table_destroy_0(t);
        }
        t = r_21;
      }
    }
  }
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
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
              ATerm f_5 (ATerm t)
              {
                ATerm x_39 = NULL;
                x_39 = t;
                q_39 :
                if(!(match_string(x_39, "-I")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm g_5 (ATerm t)
              {
                ATerm y_39 = NULL;
                y_39 = t;
                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(y_39));
                return(t);
              }
              t = ArgOption_2(t, f_5, g_5);
              LocalPopChoice(v_21);
            }
          else
            {
              t = u_21;
              {
                ATerm w_21 = t;
                int a_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_5 (ATerm t)
                    {
                      ATerm a_40 = NULL;
                      a_40 = t;
                      s_39 :
                      if(!(match_string(a_40, "-nodep")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm m_5 (ATerm t)
                    {
                      t = term_b_22;
                      return(t);
                    }
                    t = Option_2(t, h_5, m_5);
                    LocalPopChoice(a_22);
                  }
                else
                  {
                    t = w_21;
                    {
                      ATerm c_22 = t;
                      int d_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_5 (ATerm t)
                          {
                            ATerm b_40 = NULL;
                            b_40 = t;
                            t_39 :
                            if(!(match_string(b_40, "-dep")))
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          ATerm o_5 (ATerm t)
                          {
                            ATerm c_40 = NULL;
                            c_40 = t;
                            t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(c_40));
                            return(t);
                          }
                          t = ArgOption_2(t, n_5, o_5);
                          LocalPopChoice(d_22);
                        }
                      else
                        {
                          t = c_22;
                          {
                            ATerm p_5 (ATerm t)
                            {
                              ATerm e_40 = NULL;
                              e_40 = t;
                              v_39 :
                              if(!(match_string(e_40, "--prefix")))
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            ATerm q_5 (ATerm t)
                            {
                              ATerm f_40 = NULL;
                              f_40 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATmakeAppl(sym_Defined_2, term_f_22, not_null(f_40)));
                                {
                                  ATerm r_5 (ATerm t)
                                  {
                                    t = term_g_22;
                                    return(t);
                                  }
                                  t = assert_1(t, r_5);
                                }
                                t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(f_40));
                              }
                              return(t);
                            }
                            t = ArgOption_2(t, p_5, q_5);
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
  t = parse_options_1(t, e_5);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm g_63 (ATerm, ATerm (ATerm)), ATerm h_63 (ATerm))
{
  ATerm b_41 = NULL;
  ATerm d_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,o_41 = NULL;
  t = pack_module_options_0(t);
  {
    b_41 = t;
    {
      ATerm y_5 (ATerm t)
      {
        t = need_help_1(t, pack_modules_usage_0);
        return(t);
      }
      t = try_1(t, y_5);
      {
        ATerm z_5 (ATerm t)
        {
          ATerm a_6 (ATerm t)
          {
            ATerm j_41 = NULL,k_41 = NULL;
            j_41 = t;
            p_40 :
            if(match_cons(j_41, sym_Program_1))
              {
                k_41 = ATgetArgument(j_41, 0);
                if(((d_41 != NULL) && (d_41 != k_41)))
                  _fail(k_41);
                else
                  d_41 = k_41;
              }
            else
              {
                if(match_cons(j_41, sym_Input_1))
                  {
                    k_41 = ATgetArgument(j_41, 0);
                    if(((g_41 != NULL) && (g_41 != k_41)))
                      _fail(k_41);
                    else
                      g_41 = k_41;
                  }
                else
                  {
                    if(match_cons(j_41, sym_Output_1))
                      {
                        k_41 = ATgetArgument(j_41, 0);
                        if(((h_41 != NULL) && (h_41 != k_41)))
                          _fail(k_41);
                        else
                          h_41 = k_41;
                      }
                    else
                      {
                        if(match_cons(j_41, sym_Dependency_1))
                          {
                            k_41 = ATgetArgument(j_41, 0);
                            if(((i_41 != NULL) && (i_41 != k_41)))
                              _fail(k_41);
                            else
                              i_41 = k_41;
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
          t = try_1(t, a_6);
          return(t);
        }
        t = list_1(t, z_5);
        {
          ATerm q_41 = NULL;
          ATerm b_6 (ATerm t)
          {
            ATerm l_41 = NULL,m_41 = NULL;
            l_41 = t;
            r_40 :
            if(match_cons(l_41, sym_Include_1))
              {
                m_41 = ATgetArgument(l_41, 0);
                t = not_null(m_41);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, b_6);
          {
            o_41 = t;
            {
              ATerm s_41 = NULL;
              ATerm h_22 = t;
              int i_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = not_null(g_41);
                  LocalPopChoice(i_22);
                }
              else
                {
                  t = h_22;
                  t = term_k_22;
                }
              {
                q_41 = t;
                {
                  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
                  ATerm l_22 = t;
                  int m_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = not_null(h_41);
                      LocalPopChoice(m_22);
                    }
                  else
                    {
                      t = l_22;
                      t = term_o_22;
                    }
                  {
                    s_41 = t;
                    {
                      t = not_null(q_41);
                      {
                        ATerm c_6 (ATerm t)
                        {
                          t = not_null(o_41);
                          return(t);
                        }
                        t = g_63(t, c_6);
                        {
                          u_41 = t;
                          a_41 :
                          if(match_cons(u_41, sym__2))
                            {
                              v_41 = ATgetArgument(u_41, 0);
                              w_41 = ATgetArgument(u_41, 1);
                              {
                                ATerm a_42 = NULL;
                                t = not_null(b_41);
                                {
                                  ATerm p_22 = t;
                                  int q_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm h_6 (ATerm t)
                                      {
                                        ATerm z_41 = NULL;
                                        z_41 = t;
                                        w_40 :
                                        if(!(match_cons(z_41, sym_Binary_0)))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = option_defined_1(t, h_6);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_41), not_null(w_41));
                                        t = WriteToBinaryFile_0(t);
                                      }
                                      LocalPopChoice(q_22);
                                    }
                                  else
                                    {
                                      t = p_22;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_41), not_null(w_41));
                                        t = WriteToTextFile_0(t);
                                      }
                                    }
                                  {
                                    ATerm j_6 (ATerm t)
                                    {
                                      ATerm c_42 = NULL;
                                      ATerm r_22 = t;
                                      int s_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = not_null(i_41);
                                          LocalPopChoice(s_22);
                                        }
                                      else
                                        {
                                          t = r_22;
                                          {
                                            ATerm t_22 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(b_41);
                                                {
                                                  ATerm k_6 (ATerm t)
                                                  {
                                                    ATerm b_42 = NULL;
                                                    b_42 = t;
                                                    x_40 :
                                                    if(!(match_cons(b_42, sym_NoDependency_0)))
                                                      {
                                                        _fail(t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = option_defined_1(t, k_6);
                                                }
                                                PopChoice();
                                                _fail(t);
                                              }
                                            else
                                              {
                                                t = t_22;
                                              }
                                            t = h_63(t);
                                          }
                                        }
                                      {
                                        c_42 = t;
                                        {
                                          if(((a_42 != NULL) && (a_42 != c_42)))
                                            _fail(c_42);
                                          else
                                            a_42 = c_42;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(s_41), not_null(v_41));
                                            {
                                              ATerm l_6 (ATerm t)
                                              {
                                                t = not_null(a_42);
                                                return(t);
                                              }
                                              t = create_dep_file_1(t, l_6);
                                            }
                                          }
                                        }
                                      }
                                      return(t);
                                    }
                                    t = try_1(t, j_6);
                                    {
                                      ATerm m_6 (ATerm t)
                                      {
                                        ATerm d_42 = NULL;
                                        ATerm e_42 = NULL;
                                        t = run_time_0(t);
                                        {
                                          e_42 = t;
                                          if(((d_42 != NULL) && (d_42 != e_42)))
                                            _fail(e_42);
                                          else
                                            d_42 = e_42;
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_22), not_null(d_42)), term_u_22), not_null(d_41)));
                                          t = printnl_0(t);
                                        }
                                        return(t);
                                      }
                                      t = if_verbose1_1(t, m_6);
                                      {
                                        t = term_x_13;
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
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  u_42 :
  if(match_cons(v_42, sym__2))
    {
      w_42 = ATgetArgument(v_42, 0);
      x_42 = ATgetArgument(v_42, 1);
      {
        t = not_null(w_42);
        {
          ATerm r_6 (ATerm t)
          {
            t = not_null(x_42);
            return(t);
          }
          t = at_end_1(t, r_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm t_50 (ATerm), ATerm u_50 (ATerm))
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL;
  h_43 = t;
  g_43 :
  if(match_cons(h_43, sym__2))
    {
      i_43 = ATgetArgument(h_43, 0);
      j_43 = ATgetArgument(h_43, 1);
      {
        ATerm n_43 = NULL,r_43 = NULL;
        ATerm q_43 = NULL;
        t = SSLgetAnnotations(not_null(h_43));
        {
          q_43 = t;
          if(((n_43 != NULL) && (n_43 != q_43)))
            _fail(q_43);
          else
            n_43 = q_43;
        }
        {
          t = not_null(i_43);
          {
            ATerm t_43 = NULL;
            t = t_50(t);
            {
              r_43 = t;
              {
                t = not_null(j_43);
                {
                  ATerm x_43 = NULL;
                  t = u_50(t);
                  {
                    t_43 = t;
                    {
                      ATerm y_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_43), not_null(t_43)), not_null(n_43));
                      {
                        y_43 = t;
                        if(((x_43 != NULL) && (x_43 != y_43)))
                          _fail(y_43);
                        else
                          x_43 = y_43;
                      }
                      t = not_null(x_43);
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
ATerm at_suffix_1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm f_44 (ATerm t)
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_80(t);
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        t = Cons_2(t, _id, f_44);
      }
    return(t);
  }
  t = f_44(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm q_72 (ATerm))
{
  ATerm i_44 = NULL;
  ATerm y_22;
  y_22 = t;
  {
    ATerm j_44 = NULL;
    t = q_72(t);
    {
      t = explode_string_0(t);
      {
        j_44 = t;
        if(((i_44 != NULL) && (i_44 != j_44)))
          _fail(j_44);
        else
          i_44 = j_44;
      }
    }
  }
  t = y_22;
  {
    ATerm z_22;
    z_22 = t;
    {
      t = explode_string_0(t);
      {
        ATerm s_6 (ATerm t)
        {
          ATerm k_44 = NULL;
          k_44 = t;
          if(((i_44 != NULL) && (i_44 != k_44)))
            _fail(k_44);
          else
            i_44 = k_44;
          return(t);
        }
        t = at_suffix_1(t, s_6);
      }
    }
    t = z_22;
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
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
            ATerm t_6 (ATerm t)
            {
              t = filter_1(t, y_73);
              return(t);
            }
            t = Cons_2(t, y_73, t_6);
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
              p_44 = t;
              o_44 :
              if(((ATgetType(p_44) == AT_LIST) && ((ATermList) p_44 != ATempty)))
                {
                  q_44 = ATgetFirst((ATermList) p_44);
                  r_44 = (ATerm) ATgetNext((ATermList) p_44);
                  {
                    t = not_null(r_44);
                    t = filter_1(t, y_73);
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
  ATerm v_44 = NULL;
  v_44 = t;
  t = SSL_readdir(not_null(v_44));
  return(t);
}
ATerm find_plugins_2 (ATerm t, ATerm q_62 (ATerm), ATerm r_62 (ATerm))
{
  t = q_62(t);
  {
    ATerm y_6 (ATerm t)
    {
      ATerm a_45 = NULL;
      a_45 = t;
      {
        t = readdir_0(t);
        {
          ATerm z_6 (ATerm t)
          {
            ATerm c_45 = NULL;
            t = has_extension_1(t, r_62);
            {
              ATerm d_45 = NULL;
              d_45 = t;
              if(((c_45 != NULL) && (c_45 != d_45)))
                _fail(d_45);
              else
                c_45 = d_45;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_45)), term_e_10), not_null(a_45));
                t = concat_strings_0(t);
              }
            }
            return(t);
          }
          t = filter_1(t, z_6);
        }
      }
      return(t);
    }
    t = filter_1(t, y_6);
    t = concat_0(t);
  }
  return(t);
}
ATerm import_config_files_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm e_23;
  e_23 = t;
  {
    t = t_62(t);
    {
      ATerm a_7 (ATerm t)
      {
        ATerm l_45 = NULL;
        ATerm b_7 (ATerm t)
        {
          ATerm c_7 (ATerm t)
          {
            t = term_f_23;
            return(t);
          }
          t = debug_1(t, c_7);
          return(t);
        }
        t = if_verbose2_1(t, b_7);
        {
          t = ReadFromFile_0(t);
          {
            ATerm m_45 = NULL;
            m_45 = t;
            if(((l_45 != NULL) && (l_45 != m_45)))
              _fail(m_45);
            else
              l_45 = m_45;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(l_45));
              t = table_putlist_0(t);
            }
          }
        }
        return(t);
      }
      t = map_1(t, a_7);
    }
  }
  t = e_23;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm y_45 = NULL;
  ATerm a_46 = NULL;
  y_45 = t;
  {
    ATerm g_23;
    g_23 = t;
    {
      ATerm b_46 = NULL;
      t = term_i_23;
      {
        b_46 = t;
        if(((a_46 != NULL) && (a_46 != b_46)))
          _fail(b_46);
        else
          a_46 = b_46;
      }
    }
    t = g_23;
    {
      t = SSL_open_file(not_null(y_45), not_null(a_46));
      t = SSL_close_file(not_null(y_45));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm e_46 (ATerm t)
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_46);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        {
          t = Nil_0(t);
          t = o_80(t);
        }
      }
    return(t);
  }
  t = e_46(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
        ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
        h_46 = t;
        g_46 :
        if(((ATgetType(h_46) == AT_LIST) && ((ATermList) h_46 != ATempty)))
          {
            i_46 = ATgetFirst((ATermList) h_46);
            j_46 = (ATerm) ATgetNext((ATermList) h_46);
            {
              t = not_null(i_46);
              {
                ATerm i_7 (ATerm t)
                {
                  t = not_null(j_46);
                  t = concat_0(t);
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
ATerm fetch_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm o_46 (ATerm t)
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_80, _id);
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        t = Cons_2(t, _id, o_46);
      }
    return(t);
  }
  t = o_46(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm q_46 = NULL;
  ATerm j_7 (ATerm t)
  {
    ATerm r_46 = NULL;
    t = k_80(t);
    {
      r_46 = t;
      if(((q_46 != NULL) && (q_46 != r_46)))
        _fail(r_46);
      else
        q_46 = r_46;
    }
    return(t);
  }
  t = fetch_1(t, j_7);
  t = not_null(q_46);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm i_62 (ATerm), ATerm j_62 (ATerm))
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_62(t);
      {
        ATerm n_7 (ATerm t)
        {
          ATerm v_46 = NULL,x_46 = NULL;
          ATerm r_23;
          r_23 = t;
          {
            ATerm w_46 = NULL;
            w_46 = t;
            if(((v_46 != NULL) && (v_46 != w_46)))
              _fail(w_46);
            else
              v_46 = w_46;
          }
          t = r_23;
          {
            ATerm y_46 = NULL;
            t = j_62(t);
            {
              y_46 = t;
              if(((x_46 != NULL) && (x_46 != y_46)))
                _fail(y_46);
              else
                x_46 = y_46;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_46)), term_e_10), not_null(v_46));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, n_7);
      }
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        t = term_h_11;
        {
          t = debug_1(t, j_62);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  f_47 = t;
  e_47 :
  if(match_cons(f_47, sym__2))
    {
      g_47 = ATgetArgument(f_47, 0);
      h_47 = ATgetArgument(f_47, 1);
      {
        t = not_null(h_47);
        {
          ATerm o_7 (ATerm t)
          {
            ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
            k_47 = t;
            d_47 :
            if(match_cons(k_47, sym__2))
              {
                l_47 = ATgetArgument(k_47, 0);
                m_47 = ATgetArgument(k_47, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(g_47), not_null(l_47), not_null(m_47));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, o_7);
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
  ATerm s_47 = NULL;
  s_47 = t;
  t = SSL_ReadFromFile(not_null(s_47));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  x_47 = t;
  w_47 :
  if(match_cons(x_47, sym__2))
    {
      y_47 = ATgetArgument(x_47, 0);
      z_47 = ATgetArgument(x_47, 1);
      {
        ATerm s_23;
        s_23 = t;
        t = SSL_printnl(not_null(y_47), not_null(z_47));
        t = s_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm e_71 (ATerm))
{
  ATerm t_23;
  t_23 = t;
  {
    ATerm f_48 = NULL,j_48 = NULL;
    ATerm u_23;
    u_23 = t;
    {
      ATerm g_48 = NULL;
      t = e_71(t);
      {
        g_48 = t;
        if(((f_48 != NULL) && (f_48 != g_48)))
          _fail(g_48);
        else
          f_48 = g_48;
      }
    }
    t = u_23;
    {
      ATerm k_48 = NULL;
      k_48 = t;
      if(((j_48 != NULL) && (j_48 != k_48)))
        _fail(k_48);
      else
        j_48 = k_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_48)), not_null(f_48)));
        t = printnl_0(t);
      }
    }
  }
  t = t_23;
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
  q_48 = t;
  p_48 :
  if(match_cons(q_48, sym__2))
    {
      r_48 = ATgetArgument(q_48, 0);
      s_48 = ATgetArgument(q_48, 1);
      {
        ATerm v_23;
        v_23 = t;
        {
          ATerm w_23 = t;
          int x_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_48), not_null(s_48));
              LocalPopChoice(x_23);
            }
          else
            {
              t = w_23;
              t = SSL_gtr(not_null(r_48), not_null(s_48));
            }
        }
        t = v_23;
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
  ATerm b_49 = NULL;
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
      i_49 = t;
      a_49 :
      if(match_cons(i_49, sym__2))
        {
          j_49 = ATgetArgument(i_49, 0);
          k_49 = ATgetArgument(i_49, 1);
          {
            if(((b_49 != NULL) && (b_49 != j_49)))
              _fail(j_49);
            else
              b_49 = j_49;
            if(((b_49 != NULL) && (b_49 != k_49)))
              _fail(k_49);
            else
              b_49 = k_49;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
  ATerm e_24;
  e_24 = t;
  {
    ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
    r_49 = t;
    n_49 :
    if(match_cons(r_49, sym__3))
      {
        s_49 = ATgetArgument(r_49, 0);
        t_49 = ATgetArgument(r_49, 1);
        u_49 = ATgetArgument(r_49, 2);
        {
          if(((o_49 != NULL) && (o_49 != s_49)))
            _fail(s_49);
          else
            o_49 = s_49;
          {
            if(((p_49 != NULL) && (p_49 != t_49)))
              _fail(t_49);
            else
              p_49 = t_49;
            {
              if(((q_49 != NULL) && (q_49 != u_49)))
                _fail(u_49);
              else
                q_49 = u_49;
              t = SSL_table_put(not_null(o_49), not_null(p_49), not_null(q_49));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_24;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm w_50 = NULL;
  w_50 = t;
  v_50 :
  if(((ATermList) w_50 == ATempty))
    {
      {
        ATerm y_50 = NULL,a_51 = NULL;
        ATerm f_24;
        f_24 = t;
        {
          ATerm z_50 = NULL;
          t = SSLgetAnnotations(not_null(w_50));
          {
            z_50 = t;
            if(((y_50 != NULL) && (y_50 != z_50)))
              _fail(z_50);
            else
              y_50 = z_50;
          }
        }
        t = f_24;
        {
          ATerm b_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_50));
          {
            b_51 = t;
            if(((a_51 != NULL) && (a_51 != b_51)))
              _fail(b_51);
            else
              a_51 = b_51;
          }
          t = not_null(a_51);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm f_51 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = Cons_2(t, a_80, f_51);
      }
    return(t);
  }
  t = f_51(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_51 = NULL;
  h_51 = t;
  t = SSL_is_string(not_null(h_51));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, q_7);
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            {
              ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
              q_51 = t;
              p_51 :
              if(match_cons(q_51, sym_Path_1))
                {
                  r_51 = ATgetArgument(q_51, 0);
                  t = not_null(r_51);
                }
              else
                {
                  if(match_cons(q_51, sym_Var_1))
                    {
                      r_51 = ATgetArgument(q_51, 0);
                      {
                        t = not_null(r_51);
                        {
                          ATerm m_24 = t;
                          int n_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(n_24);
                            }
                          else
                            {
                              t = m_24;
                              {
                                ATerm r_7 (ATerm t)
                                {
                                  t = term_q_24;
                                  return(t);
                                }
                                t = debug_1(t, r_7);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_51, sym_Prefix_2))
                        {
                          r_51 = ATgetArgument(q_51, 0);
                          s_51 = ATgetArgument(q_51, 1);
                          {
                            ATerm x_51 = NULL,z_51 = NULL;
                            ATerm r_24;
                            r_24 = t;
                            {
                              ATerm y_51 = NULL;
                              t = not_null(r_51);
                              {
                                t = eval_config_0(t);
                                {
                                  y_51 = t;
                                  if(((x_51 != NULL) && (x_51 != y_51)))
                                    _fail(y_51);
                                  else
                                    x_51 = y_51;
                                }
                              }
                            }
                            t = r_24;
                            {
                              ATerm a_52 = NULL;
                              t = not_null(s_51);
                              {
                                t = eval_config_0(t);
                                {
                                  a_52 = t;
                                  if(((z_51 != NULL) && (z_51 != a_52)))
                                    _fail(a_52);
                                  else
                                    z_51 = a_52;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_51), not_null(z_51));
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
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
  i_52 = t;
  h_52 :
  if(match_cons(i_52, sym__2))
    {
      j_52 = ATgetArgument(i_52, 0);
      k_52 = ATgetArgument(i_52, 1);
      t = SSL_table_get(not_null(j_52), not_null(k_52));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm q_52 = NULL;
  q_52 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(q_52));
    {
      t = table_get_0(t);
      {
        ATerm s_7 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm s_24;
            s_24 = t;
            {
              ATerm s_52 = NULL;
              ATerm t_52 = NULL;
              t_52 = t;
              if(((s_52 != NULL) && (s_52 != t_52)))
                _fail(t_52);
              else
                s_52 = t_52;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_10, not_null(q_52), not_null(s_52));
                t = table_put_0(t);
              }
            }
            t = s_24;
          }
          return(t);
        }
        t = try_1(t, s_7);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_87 (ATerm))
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_87(t);
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
      }
    }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm c_69 (ATerm))
{
  ATerm t_7 (ATerm t)
  {
    ATerm v_24;
    v_24 = t;
    {
      ATerm x_52 = NULL;
      ATerm y_52 = NULL;
      t = term_h_14;
      {
        t = get_config_0(t);
        {
          y_52 = t;
          if(((x_52 != NULL) && (x_52 != y_52)))
            _fail(y_52);
          else
            x_52 = y_52;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_52), term_w_24);
        t = geq_0(t);
      }
    }
    t = v_24;
    t = c_69(t);
    return(t);
  }
  t = try_1(t, t_7);
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm s_62 (ATerm))
{
  ATerm x_24;
  x_24 = t;
  {
    ATerm b_53 = NULL;
    t = s_62(t);
    {
      ATerm u_7 (ATerm t)
      {
        ATerm v_7 (ATerm t)
        {
          t = term_f_23;
          return(t);
        }
        t = debug_1(t, v_7);
        return(t);
      }
      t = if_verbose2_1(t, u_7);
      {
        t = ReadFromFile_0(t);
        {
          ATerm c_53 = NULL;
          c_53 = t;
          if(((b_53 != NULL) && (b_53 != c_53)))
            _fail(c_53);
          else
            b_53 = c_53;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(b_53));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = x_24;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm f_53 = NULL;
  f_53 = t;
  t = SSL_implode_string(not_null(f_53));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_53 = NULL;
  j_53 = t;
  t = SSL_explode_string(not_null(j_53));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_53 (ATerm t)
        {
          ATerm a_25 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, o_53);
              LocalPopChoice(b_25);
            }
          else
            {
              t = a_25;
              {
                ATerm w_7 (ATerm t)
                {
                  ATerm n_53 = NULL;
                  n_53 = t;
                  m_53 :
                  if(!(match_int(n_53, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm x_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, w_7, x_7);
              }
            }
          return(t);
        }
        t = o_53(t);
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_62 (ATerm), ATerm d_62 (ATerm))
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
  v_53 = t;
  u_53 :
  if(((ATgetType(v_53) == AT_LIST) && ((ATermList) v_53 != ATempty)))
    {
      w_53 = ATgetFirst((ATermList) v_53);
      x_53 = (ATerm) ATgetNext((ATermList) v_53);
      {
        ATerm b_54 = NULL,d_54 = NULL;
        ATerm c_54 = NULL;
        t = SSLgetAnnotations(not_null(v_53));
        {
          c_54 = t;
          if(((b_54 != NULL) && (b_54 != c_54)))
            _fail(c_54);
          else
            b_54 = c_54;
        }
        {
          t = not_null(w_53);
          {
            ATerm f_54 = NULL;
            t = c_62(t);
            {
              d_54 = t;
              {
                t = not_null(x_53);
                {
                  ATerm h_54 = NULL;
                  t = d_62(t);
                  {
                    f_54 = t;
                    {
                      ATerm i_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_54)), not_null(d_54)), not_null(b_54));
                      {
                        i_54 = t;
                        if(((h_54 != NULL) && (h_54 != i_54)))
                          _fail(i_54);
                        else
                          h_54 = i_54;
                      }
                      t = not_null(h_54);
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
  ATerm s_54 = NULL,u_54 = NULL,w_54 = NULL;
  ATerm c_25;
  c_25 = t;
  {
    ATerm y_7 (ATerm t)
    {
      ATerm t_54 = NULL;
      t = get_path_0(t);
      {
        t_54 = t;
        if(((s_54 != NULL) && (s_54 != t_54)))
          _fail(t_54);
        else
          s_54 = t_54;
      }
      return(t);
    }
    t = Cons_2(t, y_7, _id);
  }
  t = c_25;
  {
    ATerm d_25;
    d_25 = t;
    {
      ATerm v_54 = NULL;
      t = get_conf_datadir();
      {
        v_54 = t;
        if(((u_54 != NULL) && (u_54 != v_54)))
          _fail(v_54);
        else
          u_54 = v_54;
      }
    }
    t = d_25;
    {
      ATerm e_25;
      e_25 = t;
      {
        ATerm x_54 = NULL;
        t = get_conf_pkgdatadir();
        {
          x_54 = t;
          if(((w_54 != NULL) && (w_54 != x_54)))
            _fail(x_54);
          else
            w_54 = x_54;
        }
      }
      t = e_25;
      {
        ATerm z_7 (ATerm t)
        {
          ATerm e_8 (ATerm t)
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_54)), not_null(s_54));
            return(t);
          }
          ATerm f_8 (ATerm t)
          {
            t = term_f_25;
            return(t);
          }
          t = find_config_file_2(t, e_8, f_8);
          return(t);
        }
        t = import_config_file_1(t, z_7);
        {
          ATerm w_8 (ATerm t)
          {
            ATerm x_8 (ATerm t)
            {
              ATerm y_54 = NULL;
              ATerm z_54 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_54), term_h_25);
              {
                t = conc_strings_0(t);
                {
                  z_54 = t;
                  if(((y_54 != NULL) && (y_54 != z_54)))
                    _fail(z_54);
                  else
                    y_54 = z_54;
                }
              }
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_54)), not_null(s_54));
              return(t);
            }
            ATerm y_8 (ATerm t)
            {
              t = term_i_25;
              return(t);
            }
            t = find_plugins_2(t, x_8, y_8);
            return(t);
          }
          t = import_config_files_1(t, w_8);
          t = pack_modules_2(t, pack_stratego_1, basename_0);
        }
      }
    }
  }
  return(t);
}
