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
  sym_Ext_1 = ATmakeSymbol("Ext", 1, ATfalse);
  ATprotectSymbol(sym_Ext_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_m_21;
ATerm term_g_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_i_19;
ATerm term_f_19;
ATerm term_b_19;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_o_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_i_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_n_8;
ATerm term_g_8;
void init_constant_terms (void)
{
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("reading ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("mtree", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("module ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-I dir] [-i file]", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-dep target | -nodep]", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_l_10);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__2, term_l_17, term_l_10);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_t_17, term_l_10);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_l_10);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_l_10);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_m_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__3, term_h_20, term_m_20, (ATerm) ATempty);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_NoDependency_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego.config", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/pack-stratego-plugins", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".plugin", 0, ATtrue));
}
ATerm basename_1 (ATerm, ATerm n_70 (ATerm));
ATerm basename_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm m_60 (ATerm));
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
ATerm if_not_silent_1 (ATerm, ATerm p_68 (ATerm));
ATerm parse_file_1 (ATerm, ATerm n_0 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_71 (ATerm), ATerm h_71 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm p_70 (ATerm));
ATerm Tl_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm get_module_ext_1 (ATerm, ATerm x_85 (ATerm));
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm get_config_keys_1 (ATerm, ATerm u_61 (ATerm));
ATerm get_module_1 (ATerm, ATerm w_85 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm q_76 (ATerm));
ATerm zip_1 (ATerm, ATerm s_76 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm x_73 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_85 (ATerm), ATerm b_85 (ATerm));
ATerm for_3 (ATerm, ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm o_62 (ATerm), ATerm p_62 (ATerm), ATerm q_62 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm d_63 (ATerm), ATerm e_63 (ATerm), ATerm f_63 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm v_85 (ATerm));
ATerm exit_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm s_79 (ATerm));
ATerm separate_by_1 (ATerm, ATerm t_79 (ATerm));
ATerm obsolete_1 (ATerm, ATerm l_69 (ATerm));
ATerm open_file_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm h_62 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_67 (ATerm));
ATerm try_1 (ATerm, ATerm g_85 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm list_1 (ATerm, ATerm c_78 (ATerm));
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_68 (ATerm));
ATerm assert_1 (ATerm, ATerm b_62 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm o_67 (ATerm), ATerm p_67 (ATerm));
ATerm Option_2 (ATerm, ATerm d_67 (ATerm), ATerm e_67 (ATerm));
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_66 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_66 (ATerm));
ATerm Program_1 (ATerm, ATerm r_60 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_60 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_66 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_66 (ATerm));
ATerm parse_options_1 (ATerm, ATerm w_66 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm f_62 (ATerm, ATerm (ATerm)), ATerm g_62 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm y_49 (ATerm), ATerm z_49 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm s_78 (ATerm));
ATerm has_extension_1 (ATerm, ATerm q_70 (ATerm));
ATerm filter_1 (ATerm, ATerm y_71 (ATerm));
ATerm readdir_0 (ATerm);
ATerm find_plugins_2 (ATerm, ATerm p_61 (ATerm), ATerm q_61 (ATerm));
ATerm import_config_files_1 (ATerm, ATerm s_61 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_78 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm i_78 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm k_78 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm h_61 (ATerm), ATerm i_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm a_78 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm e_69 (ATerm));
ATerm import_config_file_1 (ATerm, ATerm r_61 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_61 (ATerm), ATerm c_61 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm n_70 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm d_0 (ATerm t)
    {
      ATerm g_1 = t;
      int c_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, d_0);
          LocalPopChoice(c_8);
        }
      else
        {
          t = g_1;
          {
            ATerm d_8 = t;
            int e_8 = stack_ptr;
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
                LocalPopChoice(e_8);
              }
            else
              {
                t = d_8;
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
                  t = Cons_2(t, g_0, n_70);
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
ATerm Imports_1 (ATerm t, ATerm m_60 (ATerm))
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
            t = m_60(t);
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
              ATerm f_8 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = f_8;
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
      t = term_g_8;
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
  ATerm m_8;
  m_8 = t;
  {
    ATerm w_4 = NULL;
    ATerm x_4 = NULL;
    x_4 = t;
    if(((w_4 != NULL) && (w_4 != x_4)))
      _fail(x_4);
    else
      w_4 = x_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_8, not_null(w_4));
      t = printnl_0(t);
    }
  }
  t = m_8;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm r_8;
  r_8 = t;
  {
    t = error_0(t);
    {
      t = term_s_8;
      t = exit_0(t);
    }
  }
  t = r_8;
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
ATerm if_not_silent_1 (ATerm t, ATerm p_68 (ATerm))
{
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_8;
      w_8 = t;
      {
        t = term_x_8;
        t = get_config_0(t);
      }
      t = w_8;
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      t = p_68(t);
    }
  return(t);
}
ATerm parse_file_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  ATerm f_6 (ATerm t)
  {
    ATerm c_6 = NULL;
    ATerm d_6 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(w_5));
    {
      ATerm z_8 = t;
      if((PushChoice() == 0))
        {
          t = eq_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_8;
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_5), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_5)), term_b_9), not_null(u_5)), term_a_9));
        {
          t = call_0(t);
          {
            t = not_null(v_5);
            {
              t = ReadFromFile_0(t);
              {
                d_6 = t;
                if(((c_6 != NULL) && (c_6 != d_6)))
                  _fail(d_6);
                else
                  c_6 = d_6;
              }
            }
          }
        }
      }
    }
    t = not_null(c_6);
    return(t);
  }
  t_5 = t;
  r_5 :
  if(match_cons(t_5, sym__3))
    {
      u_5 = ATgetArgument(t_5, 0);
      v_5 = ATgetArgument(t_5, 1);
      w_5 = ATgetArgument(t_5, 2);
      s_5 :
      if(match_cons(w_5, sym_None_0))
        {
          ATerm c_9 = t;
          int d_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = not_null(u_5);
              {
                ATerm t_0 (ATerm t)
                {
                  ATerm u_0 (ATerm t)
                  {
                    t = term_i_9;
                    return(t);
                  }
                  t = debug_1(t, u_0);
                  return(t);
                }
                t = if_not_silent_1(t, t_0);
                t = ReadFromFile_0(t);
              }
              LocalPopChoice(d_9);
            }
          else
            {
              t = c_9;
              t = f_6(t);
            }
        }
      else
        {
          t = f_6(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_6 = NULL;
  i_6 = t;
  t = SSL_is_string(not_null(i_6));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(a_10);
    }
  else
    {
      t = j_9;
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_0);
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
              r_6 = t;
              q_6 :
              if(match_cons(r_6, sym_Path_1))
                {
                  s_6 = ATgetArgument(r_6, 0);
                  t = not_null(s_6);
                }
              else
                {
                  if(match_cons(r_6, sym_Var_1))
                    {
                      s_6 = ATgetArgument(r_6, 0);
                      {
                        t = not_null(s_6);
                        {
                          ATerm d_10 = t;
                          int e_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(e_10);
                            }
                          else
                            {
                              t = d_10;
                              {
                                ATerm w_0 (ATerm t)
                                {
                                  t = term_f_10;
                                  return(t);
                                }
                                t = debug_1(t, w_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_6, sym_Prefix_2))
                        {
                          s_6 = ATgetArgument(r_6, 0);
                          t_6 = ATgetArgument(r_6, 1);
                          {
                            ATerm y_6 = NULL,a_7 = NULL;
                            ATerm g_10;
                            g_10 = t;
                            {
                              ATerm z_6 = NULL;
                              t = not_null(s_6);
                              {
                                t = eval_config_0(t);
                                {
                                  z_6 = t;
                                  if(((y_6 != NULL) && (y_6 != z_6)))
                                    _fail(z_6);
                                  else
                                    y_6 = z_6;
                                }
                              }
                            }
                            t = g_10;
                            {
                              ATerm b_7 = NULL;
                              t = not_null(t_6);
                              {
                                t = eval_config_0(t);
                                {
                                  b_7 = t;
                                  if(((a_7 != NULL) && (a_7 != b_7)))
                                    _fail(b_7);
                                  else
                                    a_7 = b_7;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_6), not_null(a_7));
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
  ATerm j_7 = NULL;
  j_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(j_7));
    {
      t = table_get_0(t);
      {
        ATerm x_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_10;
            i_10 = t;
            {
              ATerm l_7 = NULL;
              ATerm m_7 = NULL;
              m_7 = t;
              if(((l_7 != NULL) && (l_7 != m_7)))
                _fail(m_7);
              else
                l_7 = m_7;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_10, not_null(j_7), not_null(l_7));
                t = table_put_0(t);
              }
            }
            t = i_10;
          }
          return(t);
        }
        t = try_1(t, x_0);
      }
    }
  }
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_71 (ATerm), ATerm h_71 (ATerm))
{
  ATerm r_7 = NULL,t_7 = NULL;
  ATerm j_10;
  j_10 = t;
  {
    ATerm s_7 = NULL;
    t = g_71(t);
    {
      s_7 = t;
      if(((r_7 != NULL) && (r_7 != s_7)))
        _fail(s_7);
      else
        r_7 = s_7;
    }
  }
  t = j_10;
  {
    ATerm u_7 = NULL;
    t = h_71(t);
    {
      u_7 = t;
      if(((t_7 != NULL) && (t_7 != u_7)))
        _fail(u_7);
      else
        t_7 = u_7;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_7), not_null(t_7));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm p_70 (ATerm))
{
  t = basename_0(t);
  {
    ATerm y_0 (ATerm t)
    {
      t = term_l_10;
      t = p_70(t);
      return(t);
    }
    t = split_2(t, _id, y_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  z_7 = t;
  y_7 :
  if(((ATgetType(z_7) == AT_LIST) && ((ATermList) z_7 != ATempty)))
    {
      a_8 = ATgetFirst((ATermList) z_7);
      b_8 = (ATerm) ATgetNext((ATermList) z_7);
      t = not_null(b_8);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym__2))
    {
      k_8 = ATgetArgument(j_8, 0);
      l_8 = ATgetArgument(j_8, 1);
      {
        t = not_null(l_8);
        {
          ATerm t_8 (ATerm t)
          {
            ATerm m_10 = t;
            int n_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
                o_8 = t;
                h_8 :
                if(((ATgetType(o_8) == AT_LIST) && ((ATermList) o_8 != ATempty)))
                  {
                    p_8 = ATgetFirst((ATermList) o_8);
                    q_8 = (ATerm) ATgetNext((ATermList) o_8);
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_8)), term_o_10), not_null(p_8));
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
                LocalPopChoice(n_10);
              }
            else
              {
                t = m_10;
                {
                  t = Tl_0(t);
                  t = t_8(t);
                }
              }
            return(t);
          }
          t = t_8(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_module_ext_1 (ATerm t, ATerm x_85 (ATerm))
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
  f_9 = t;
  e_9 :
  if(match_cons(f_9, sym__2))
    {
      g_9 = ATgetArgument(f_9, 0);
      h_9 = ATgetArgument(f_9, 1);
      {
        ATerm k_9 = NULL,m_9 = NULL;
        t = not_null(h_9);
        {
          ATerm z_0 (ATerm t)
          {
            t = not_null(g_9);
            return(t);
          }
          t = guarantee_extension_1(t, z_0);
          {
            ATerm p_10;
            p_10 = t;
            {
              ATerm l_9 = NULL;
              l_9 = t;
              if(((k_9 != NULL) && (k_9 != l_9)))
                _fail(l_9);
              else
                k_9 = l_9;
            }
            t = p_10;
            {
              ATerm n_9 = NULL;
              t = x_85(t);
              {
                n_9 = t;
                if(((m_9 != NULL) && (m_9 != n_9)))
                  _fail(n_9);
                else
                  m_9 = n_9;
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_9), not_null(m_9));
                {
                  t = find_in_path_0(t);
                  {
                    ATerm r_10 = t;
                    int t_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_9 = NULL,q_9 = NULL;
                        ATerm w_10;
                        w_10 = t;
                        {
                          ATerm p_9 = NULL;
                          p_9 = t;
                          if(((o_9 != NULL) && (o_9 != p_9)))
                            _fail(p_9);
                          else
                            o_9 = p_9;
                        }
                        t = w_10;
                        {
                          ATerm r_9 = NULL,t_9 = NULL,v_9 = NULL,x_9 = NULL;
                          ATerm x_10;
                          x_10 = t;
                          {
                            ATerm s_9 = NULL;
                            s_9 = t;
                            if(((r_9 != NULL) && (r_9 != s_9)))
                              _fail(s_9);
                            else
                              r_9 = s_9;
                          }
                          t = x_10;
                          {
                            ATerm y_10;
                            y_10 = t;
                            {
                              ATerm u_9 = NULL;
                              t = basename_0(t);
                              {
                                ATerm a_1 (ATerm t)
                                {
                                  t = term_z_10;
                                  return(t);
                                }
                                t = guarantee_extension_1(t, a_1);
                                {
                                  u_9 = t;
                                  if(((t_9 != NULL) && (t_9 != u_9)))
                                    _fail(u_9);
                                  else
                                    t_9 = u_9;
                                }
                              }
                            }
                            t = y_10;
                            {
                              ATerm w_9 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Ext_1, not_null(g_9));
                              {
                                t = get_config_0(t);
                                {
                                  w_9 = t;
                                  if(((v_9 != NULL) && (v_9 != w_9)))
                                    _fail(w_9);
                                  else
                                    v_9 = w_9;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_9), not_null(t_9), not_null(v_9));
                                {
                                  t = parse_file_1(t, x_85);
                                  {
                                    x_9 = t;
                                    if(((q_9 != NULL) && (q_9 != x_9)))
                                      _fail(x_9);
                                    else
                                      q_9 = x_9;
                                  }
                                }
                              }
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_9), not_null(q_9));
                        }
                        LocalPopChoice(t_10);
                      }
                    else
                      {
                        t = r_10;
                        {
                          ATerm y_9 = NULL;
                          ATerm z_9 = NULL;
                          z_9 = t;
                          if(((y_9 != NULL) && (y_9 != z_9)))
                            _fail(z_9);
                          else
                            y_9 = z_9;
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_9)), term_a_11);
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
  ATerm k_10 = NULL;
  k_10 = t;
  t = SSL_table_keys(not_null(k_10));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm q_10 = NULL;
  q_10 = t;
  {
    t = table_keys_0(t);
    {
      ATerm b_1 (ATerm t)
      {
        ATerm s_10 = NULL;
        ATerm u_10 = NULL;
        s_10 = t;
        {
          ATerm v_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), not_null(s_10));
          {
            t = table_get_0(t);
            {
              v_10 = t;
              if(((u_10 != NULL) && (u_10 != v_10)))
                _fail(v_10);
              else
                u_10 = v_10;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), not_null(u_10));
        }
        return(t);
      }
      t = map_1(t, b_1);
    }
  }
  return(t);
}
ATerm get_config_keys_1 (ATerm t, ATerm u_61 (ATerm))
{
  t = term_h_10;
  {
    t = table_getlist_0(t);
    {
      ATerm c_1 (ATerm t)
      {
        t = _2(t, u_61, _id);
        t = Fst_0(t);
        return(t);
      }
      t = filter_1(t, c_1);
    }
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm e_11 = NULL;
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_11 = NULL;
      f_11 = t;
      {
        if(((e_11 != NULL) && (e_11 != f_11)))
          _fail(f_11);
        else
          e_11 = f_11;
        {
          ATerm d_1 (ATerm t)
          {
            ATerm g_11 = NULL,h_11 = NULL;
            g_11 = t;
            b_11 :
            if(match_cons(g_11, sym_Ext_1))
              {
                h_11 = ATgetArgument(g_11, 0);
                t = not_null(h_11);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = get_config_keys_1(t, d_1);
          {
            ATerm e_1 (ATerm t)
            {
              ATerm j_11 = NULL;
              ATerm k_11 = NULL;
              k_11 = t;
              if(((j_11 != NULL) && (j_11 != k_11)))
                _fail(k_11);
              else
                j_11 = k_11;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_11), not_null(e_11));
                t = get_module_ext_1(t, w_85);
              }
              return(t);
            }
            t = fetch_elem_1(t, e_1);
          }
        }
      }
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm l_11 = NULL;
        ATerm m_11 = NULL;
        m_11 = t;
        if(((l_11 != NULL) && (l_11 != m_11)))
          _fail(m_11);
        else
          l_11 = m_11;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_11), not_null(l_11)), term_i_11);
          t = fatal_error_0(t);
        }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm x_11 = NULL;
  ATerm z_11 = NULL,a_12 = NULL;
  x_11 = t;
  {
    ATerm b_12 = NULL;
    ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
    t = not_null(x_11);
    {
      b_12 = t;
      {
        t = SSL_explode_term(not_null(b_12));
        {
          d_12 = t;
          u_11 :
          if(match_cons(d_12, sym__2))
            {
              e_12 = ATgetArgument(d_12, 0);
              f_12 = ATgetArgument(d_12, 1);
              v_11 :
              if(match_string(e_12, ""))
                {
                  w_11 :
                  if(((ATgetType(f_12) == AT_LIST) && ((ATermList) f_12 != ATempty)))
                    {
                      g_12 = ATgetFirst((ATermList) f_12);
                      h_12 = (ATerm) ATgetNext((ATermList) f_12);
                      {
                        if(((a_12 != NULL) && (a_12 != g_12)))
                          _fail(g_12);
                        else
                          a_12 = g_12;
                        if(((z_11 != NULL) && (z_11 != h_12)))
                          _fail(h_12);
                        else
                          z_11 = h_12;
                      }
                    }
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
    t = not_null(a_12);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
  o_12 = t;
  m_12 :
  if(match_cons(o_12, sym__5))
    {
      p_12 = ATgetArgument(o_12, 0);
      s_12 = ATgetArgument(o_12, 1);
      t_12 = ATgetArgument(o_12, 2);
      u_12 = ATgetArgument(o_12, 3);
      v_12 = ATgetArgument(o_12, 4);
      n_12 :
      if(((ATgetType(p_12) == AT_LIST) && ((ATermList) p_12 != ATempty)))
        {
          q_12 = ATgetFirst((ATermList) p_12);
          r_12 = (ATerm) ATgetNext((ATermList) p_12);
          t = (ATerm) ATmakeAppl(sym__5, not_null(r_12), not_null(s_12), not_null(t_12), not_null(u_12), (ATerm) ATinsert(CheckATermList(not_null(v_12)), not_null(q_12)));
        }
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
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
  g_13 = t;
  e_13 :
  if(match_cons(g_13, sym__2))
    {
      h_13 = ATgetArgument(g_13, 0);
      i_13 = ATgetArgument(g_13, 1);
      f_13 :
      if(((ATgetType(i_13) == AT_LIST) && ((ATermList) i_13 != ATempty)))
        {
          j_13 = ATgetFirst((ATermList) i_13);
          k_13 = (ATerm) ATgetNext((ATermList) i_13);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_13)), not_null(j_13)), not_null(k_13));
        }
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
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
  r_13 = t;
  q_13 :
  if(match_cons(r_13, sym__2))
    {
      s_13 = ATgetArgument(r_13, 0);
      t_13 = ATgetArgument(r_13, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_13)), not_null(s_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  b_14 = t;
  y_13 :
  if(match_cons(b_14, sym__2))
    {
      c_14 = ATgetArgument(b_14, 0);
      f_14 = ATgetArgument(b_14, 1);
      z_13 :
      if(((ATgetType(c_14) == AT_LIST) && ((ATermList) c_14 != ATempty)))
        {
          d_14 = ATgetFirst((ATermList) c_14);
          e_14 = (ATerm) ATgetNext((ATermList) c_14);
          a_14 :
          if(((ATgetType(f_14) == AT_LIST) && ((ATermList) f_14 != ATempty)))
            {
              g_14 = ATgetFirst((ATermList) f_14);
              h_14 = (ATerm) ATgetNext((ATermList) f_14);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(d_14), not_null(g_14)), (ATerm) ATmakeAppl(sym__2, not_null(e_14), not_null(h_14)));
            }
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
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  o_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      t_14 = ATgetArgument(r_14, 1);
      p_14 :
      if(((ATermList) s_14 == ATempty))
        {
          q_14 :
          if(((ATermList) t_14 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm q_76 (ATerm))
{
  ATerm v_14 (ATerm t)
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_76(t);
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        {
          t = o_76(t);
          {
            t = _2(t, q_76, v_14);
            t = p_76(t);
          }
        }
      }
    return(t);
  }
  t = v_14(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm s_76 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, s_76);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
  g_15 = t;
  e_15 :
  if(((ATgetType(g_15) == AT_LIST) && ((ATermList) g_15 != ATempty)))
    {
      h_15 = ATgetFirst((ATermList) g_15);
      k_15 = (ATerm) ATgetNext((ATermList) g_15);
      f_15 :
      if(match_cons(h_15, sym__2))
        {
          i_15 = ATgetArgument(h_15, 0);
          j_15 = ATgetArgument(h_15, 1);
          {
            ATerm o_15 = NULL,p_15 = NULL,v_15 = NULL,b_16 = NULL;
            ATerm q_11;
            q_11 = t;
            {
              ATerm q_15 = NULL;
              ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
              t = not_null(j_15);
              {
                q_15 = t;
                {
                  t = SSL_explode_term(not_null(q_15));
                  {
                    s_15 = t;
                    z_14 :
                    if(match_cons(s_15, sym__2))
                      {
                        t_15 = ATgetArgument(s_15, 0);
                        u_15 = ATgetArgument(s_15, 1);
                        {
                          if(((o_15 != NULL) && (o_15 != t_15)))
                            _fail(t_15);
                          else
                            o_15 = t_15;
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
            t = q_11;
            {
              ATerm r_11;
              r_11 = t;
              {
                ATerm w_15 = NULL;
                ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
                t = not_null(i_15);
                {
                  w_15 = t;
                  {
                    t = SSL_explode_term(not_null(w_15));
                    {
                      y_15 = t;
                      c_15 :
                      if(match_cons(y_15, sym__2))
                        {
                          z_15 = ATgetArgument(y_15, 0);
                          a_16 = ATgetArgument(y_15, 1);
                          {
                            if(((o_15 != NULL) && (o_15 != z_15)))
                              _fail(z_15);
                            else
                              o_15 = z_15;
                            if(((v_15 != NULL) && (v_15 != a_16)))
                              _fail(a_16);
                            else
                              v_15 = a_16;
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
              t = r_11;
              {
                ATerm c_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), not_null(p_15));
                {
                  t = zip_1(t, _id);
                  {
                    c_16 = t;
                    if(((b_16 != NULL) && (b_16 != c_16)))
                      _fail(c_16);
                    else
                      b_16 = c_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_16), not_null(k_15));
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
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  m_16 = t;
  k_16 :
  if(((ATgetType(m_16) == AT_LIST) && ((ATermList) m_16 != ATempty)))
    {
      n_16 = ATgetFirst((ATermList) m_16);
      q_16 = (ATerm) ATgetNext((ATermList) m_16);
      l_16 :
      if(match_cons(n_16, sym__2))
        {
          o_16 = ATgetArgument(n_16, 0);
          p_16 = ATgetArgument(n_16, 1);
          {
            ATerm s_16 = NULL;
            if(((o_16 != NULL) && (o_16 != p_16)))
              _fail(p_16);
            else
              o_16 = p_16;
            {
              if(((s_16 != NULL) && (s_16 != q_16)))
                _fail(q_16);
              else
                s_16 = q_16;
              t = not_null(s_16);
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
ATerm HdMember_1 (ATerm t, ATerm x_73 (ATerm))
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  x_16 = t;
  w_16 :
  if(((ATgetType(x_16) == AT_LIST) && ((ATermList) x_16 != ATempty)))
    {
      y_16 = ATgetFirst((ATermList) x_16);
      z_16 = (ATerm) ATgetNext((ATermList) x_16);
      {
        t = x_73(t);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm c_17 = NULL;
            c_17 = t;
            if(((y_16 != NULL) && (y_16 != c_17)))
              _fail(c_17);
            else
              y_16 = c_17;
            return(t);
          }
          t = fetch_1(t, h_1);
        }
        t = not_null(z_16);
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
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
      i_17 = t;
      g_17 :
      if(match_cons(i_17, sym__2))
        {
          j_17 = ATgetArgument(i_17, 0);
          k_17 = ATgetArgument(i_17, 1);
          {
            t = not_null(j_17);
            {
              ATerm q_17 (ATerm t)
              {
                ATerm y_11 = t;
                int c_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(c_12);
                  }
                else
                  {
                    t = y_11;
                    {
                      ATerm i_12 = t;
                      int j_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_1 (ATerm t)
                          {
                            t = not_null(k_17);
                            return(t);
                          }
                          t = HdMember_1(t, i_1);
                          t = q_17(t);
                          LocalPopChoice(j_12);
                        }
                      else
                        {
                          t = i_12;
                          t = Cons_2(t, _id, q_17);
                        }
                    }
                  }
                return(t);
              }
              t = q_17(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        ATerm j_1 (ATerm t)
        {
          ATerm n_17 = NULL;
          n_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(n_17));
          return(t);
        }
        ATerm k_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm l_1 (ATerm t)
        {
          ATerm k_12 = t;
          int l_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_1 (ATerm t)
              {
                ATerm w_12 = t;
                int x_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(x_12);
                  }
                else
                  {
                    t = w_12;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, m_1);
              LocalPopChoice(l_12);
            }
          else
            {
              t = k_12;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, j_1, k_1, l_1);
      }
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm k_62 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  b_18 = t;
  z_17 :
  if(match_cons(b_18, sym__5))
    {
      c_18 = ATgetArgument(b_18, 0);
      f_18 = ATgetArgument(b_18, 1);
      g_18 = ATgetArgument(b_18, 2);
      h_18 = ATgetArgument(b_18, 3);
      i_18 = ATgetArgument(b_18, 4);
      a_18 :
      if(((ATgetType(c_18) == AT_LIST) && ((ATermList) c_18 != ATempty)))
        {
          d_18 = ATgetFirst((ATermList) c_18);
          e_18 = (ATerm) ATgetNext((ATermList) c_18);
          {
            ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,v_18 = NULL,x_18 = NULL,z_18 = NULL;
            ATerm y_12;
            y_12 = t;
            {
              ATerm s_18 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_18), not_null(g_18));
              {
                ATerm t_18 = NULL;
                t = i_62(t);
                {
                  s_18 = t;
                  {
                    if(((p_18 != NULL) && (p_18 != s_18)))
                      _fail(s_18);
                    else
                      p_18 = s_18;
                    {
                      t = not_null(p_18);
                      {
                        ATerm u_18 = NULL;
                        t = j_62(t);
                        {
                          t_18 = t;
                          {
                            if(((q_18 != NULL) && (q_18 != t_18)))
                              _fail(t_18);
                            else
                              q_18 = t_18;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(q_18), not_null(f_18));
                              {
                                t = diff_0(t);
                                {
                                  u_18 = t;
                                  if(((r_18 != NULL) && (r_18 != u_18)))
                                    _fail(u_18);
                                  else
                                    r_18 = u_18;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = y_12;
            {
              ATerm z_12;
              z_12 = t;
              {
                ATerm w_18 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(e_18));
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
              t = z_12;
              {
                ATerm a_13;
                a_13 = t;
                {
                  ATerm y_18 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(f_18));
                  {
                    t = conc_0(t);
                    {
                      y_18 = t;
                      if(((x_18 != NULL) && (x_18 != y_18)))
                        _fail(y_18);
                      else
                        x_18 = y_18;
                    }
                  }
                }
                t = a_13;
                {
                  ATerm a_19 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_18), not_null(p_18), not_null(h_18));
                  {
                    t = k_62(t);
                    {
                      a_19 = t;
                      if(((z_18 != NULL) && (z_18 != a_19)))
                        _fail(a_19);
                      else
                        z_18 = a_19;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(v_18), not_null(x_18), not_null(g_18), not_null(z_18), not_null(i_18));
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
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  l_19 = t;
  j_19 :
  if(match_cons(l_19, sym__5))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      o_19 = ATgetArgument(l_19, 2);
      p_19 = ATgetArgument(l_19, 3);
      q_19 = ATgetArgument(l_19, 4);
      k_19 :
      if(((ATermList) m_19 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_19), not_null(q_19));
        }
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
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL;
  y_19 = t;
  x_19 :
  if(match_cons(y_19, sym__3))
    {
      z_19 = ATgetArgument(y_19, 0);
      a_20 = ATgetArgument(y_19, 1);
      b_20 = ATgetArgument(y_19, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(z_19), not_null(z_19), not_null(a_20), not_null(b_20), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm a_85 (ATerm), ATerm b_85 (ATerm))
{
  ATerm g_20 (ATerm t)
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_85(t);
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        {
          t = b_85(t);
          t = g_20(t);
        }
      }
    return(t);
  }
  t = g_20(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm f_85 (ATerm))
{
  t = d_85(t);
  t = while_not_2(t, e_85, f_85);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm o_62 (ATerm), ATerm p_62 (ATerm), ATerm q_62 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm d_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, o_62, p_62, q_62);
        LocalPopChoice(l_13);
      }
    else
      {
        t = d_13;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, n_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm d_63 (ATerm), ATerm e_63 (ATerm), ATerm f_63 (ATerm))
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  t = graph_nodes_undef_roots_3(t, d_63, e_63, f_63);
  {
    j_20 = t;
    i_20 :
    if(match_cons(j_20, sym__2))
      {
        k_20 = ATgetArgument(j_20, 0);
        l_20 = ATgetArgument(j_20, 1);
        t = not_null(k_20);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm pack_stratego_1 (ATerm t, ATerm v_85 (ATerm))
{
  ATerm t_20 = NULL;
  t_20 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(t_20)), term_n_13), term_m_13), term_l_10, (ATerm) ATempty);
    {
      ATerm o_1 (ATerm t)
      {
        t = Fst_0(t);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm v_20 = NULL;
            ATerm x_20 = NULL;
            t = term_l_10;
            {
              t = v_85(t);
              {
                x_20 = t;
                if(((v_20 != NULL) && (v_20 != x_20)))
                  _fail(x_20);
                else
                  v_20 = x_20;
              }
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(v_20)), term_o_13);
            return(t);
          }
          t = get_module_1(t, q_1);
        }
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
        b_21 = t;
        s_20 :
        if(match_cons(b_21, sym__3))
          {
            c_21 = ATgetArgument(b_21, 0);
            d_21 = ATgetArgument(b_21, 1);
            e_21 = ATgetArgument(b_21, 2);
            t = (ATerm) ATinsert(CheckATermList(not_null(e_21)), not_null(d_21));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = graph_nodes_roots_3(t, o_1, get_stratego_imports_0, p_1);
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
  ATerm r_21 = NULL;
  r_21 = t;
  t = SSL_exit(not_null(r_21));
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  t = SSL_close_file(not_null(a_22));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  m_23 :
  if(((ATgetType(n_23) == AT_LIST) && ((ATermList) n_23 != ATempty)))
    {
      o_23 = ATgetFirst((ATermList) n_23);
      p_23 = (ATerm) ATgetNext((ATermList) n_23);
      {
        ATerm s_23 = NULL;
        ATerm t_23 = NULL;
        t = term_l_10;
        {
          t = s_79(t);
          {
            t_23 = t;
            if(((s_23 != NULL) && (s_23 != t_23)))
              _fail(t_23);
            else
              s_23 = t_23;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_23)), not_null(o_23)), not_null(s_23));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm p_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_13);
    }
  else
    {
      t = p_13;
      {
        ATerm r_1 (ATerm t)
        {
          ATerm v_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
              {
                t = Cons_2(t, _id, r_1);
                t = Sep_1(t, t_79);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, r_1);
      }
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm l_69 (ATerm))
{
  ATerm x_13;
  x_13 = t;
  {
    t = l_69(t);
    {
      ATerm s_1 (ATerm t)
      {
        t = term_i_14;
        return(t);
      }
      t = debug_1(t, s_1);
    }
  }
  t = x_13;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm n_24 = NULL,y_24 = NULL;
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
      z_24 = t;
      k_24 :
      if(match_cons(z_24, sym__2))
        {
          a_25 = ATgetArgument(z_24, 0);
          b_25 = ATgetArgument(z_24, 1);
          {
            if(((y_24 != NULL) && (y_24 != a_25)))
              _fail(a_25);
            else
              y_24 = a_25;
            {
              if(((n_24 != NULL) && (n_24 != b_25)))
                _fail(b_25);
              else
                n_24 = b_25;
              t = SSL_open_file(not_null(y_24), not_null(n_24));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      {
        ATerm c_25 = NULL;
        ATerm d_25 = NULL;
        ATerm t_1 (ATerm t)
        {
          t = term_l_14;
          return(t);
        }
        t = obsolete_1(t, t_1);
        {
          c_25 = t;
          {
            if(((y_24 != NULL) && (y_24 != c_25)))
              _fail(c_25);
            else
              y_24 = c_25;
            {
              ATerm m_14;
              m_14 = t;
              {
                ATerm e_25 = NULL;
                t = term_n_14;
                {
                  e_25 = t;
                  if(((d_25 != NULL) && (d_25 != e_25)))
                    _fail(e_25);
                  else
                    d_25 = e_25;
                }
              }
              t = m_14;
              t = SSL_open_file(not_null(y_24), not_null(d_25));
            }
          }
        }
      }
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym__2))
    {
      l_25 = ATgetArgument(k_25, 0);
      m_25 = ATgetArgument(k_25, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_25)), term_o_13), not_null(l_25));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_dep_file_1 (ATerm t, ATerm h_62 (ATerm))
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  v_25 :
  if(match_cons(w_25, sym__2))
    {
      x_25 = ATgetArgument(w_25, 0);
      y_25 = ATgetArgument(w_25, 1);
      {
        ATerm b_26 = NULL,c_26 = NULL;
        ATerm d_26 = NULL;
        t = not_null(x_25);
        {
          ATerm e_26 = NULL,g_26 = NULL;
          t = h_62(t);
          {
            d_26 = t;
            {
              if(((b_26 != NULL) && (b_26 != d_26)))
                _fail(d_26);
              else
                b_26 = d_26;
              {
                ATerm f_26 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_26), term_u_14);
                {
                  t = add_extension_0(t);
                  {
                    f_26 = t;
                    if(((e_26 != NULL) && (e_26 != f_26)))
                      _fail(f_26);
                    else
                      e_26 = f_26;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_26), term_n_14);
                  {
                    ATerm h_26 = NULL;
                    t = open_file_0(t);
                    {
                      g_26 = t;
                      {
                        if(((c_26 != NULL) && (c_26 != g_26)))
                          _fail(g_26);
                        else
                          c_26 = g_26;
                        {
                          ATerm i_26 = NULL;
                          t = (ATerm) ATinsert(CheckATermList(not_null(y_25)), term_w_14);
                          {
                            ATerm u_1 (ATerm t)
                            {
                              t = term_x_14;
                              return(t);
                            }
                            t = separate_by_1(t, u_1);
                            {
                              i_26 = t;
                              if(((h_26 != NULL) && (h_26 != i_26)))
                                _fail(i_26);
                              else
                                h_26 = i_26;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_26), (ATerm) ATinsert(CheckATermList(not_null(h_26)), not_null(b_26)));
                            {
                              t = printnl_0(t);
                              {
                                t = not_null(c_26);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_25), not_null(y_25));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_67 (ATerm))
{
  t = fetch_1(t, t_67);
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm y_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_85(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = y_14;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
  q_26 = t;
  p_26 :
  if(match_cons(q_26, sym__2))
    {
      r_26 = ATgetArgument(q_26, 0);
      s_26 = ATgetArgument(q_26, 1);
      t = SSL_WriteToTextFile(not_null(r_26), not_null(s_26));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
  y_26 = t;
  x_26 :
  if(match_cons(y_26, sym__2))
    {
      z_26 = ATgetArgument(y_26, 0);
      a_27 = ATgetArgument(y_26, 1);
      t = SSL_WriteToBinaryFile(not_null(z_26), not_null(a_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm k_27 (ATerm t)
  {
    ATerm b_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_15);
      }
    else
      {
        t = b_15;
        t = Cons_2(t, c_78, k_27);
      }
    return(t);
  }
  t = k_27(t);
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm o_27 = NULL;
  ATerm v_1 (ATerm t)
  {
    ATerm v_27 = NULL,w_27 = NULL;
    v_27 = t;
    n_27 :
    if(match_cons(v_27, sym_Program_1))
      {
        w_27 = ATgetArgument(v_27, 0);
        if(((o_27 != NULL) && (o_27 != w_27)))
          _fail(w_27);
        else
          o_27 = w_27;
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = option_defined_1(t, v_1);
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_15), term_n_15), term_m_15), not_null(o_27)), term_l_15));
    {
      t = printnl_0(t);
      {
        t = term_s_8;
        t = exit_0(t);
      }
    }
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_28 = NULL;
  f_28 = t;
  e_28 :
  if(match_cons(f_28, sym_Version_0))
    {
      ATerm h_28 = NULL,j_28 = NULL;
      ATerm x_15;
      x_15 = t;
      {
        ATerm i_28 = NULL;
        t = SSLgetAnnotations(not_null(f_28));
        {
          i_28 = t;
          if(((h_28 != NULL) && (h_28 != i_28)))
            _fail(i_28);
          else
            h_28 = i_28;
        }
      }
      t = x_15;
      {
        ATerm k_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_28));
        {
          k_28 = t;
          if(((j_28 != NULL) && (j_28 != k_28)))
            _fail(k_28);
          else
            j_28 = k_28;
        }
        t = not_null(j_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_68 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_1);
  t = o_68(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm b_62 (ATerm))
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  v_28 :
  if(match_cons(w_28, sym__2))
    {
      x_28 = ATgetArgument(w_28, 0);
      y_28 = ATgetArgument(w_28, 1);
      {
        ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
        ATerm h_16;
        h_16 = t;
        {
          ATerm e_29 = NULL;
          ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
          t = b_62(t);
          {
            e_29 = t;
            {
              if(((b_29 != NULL) && (b_29 != e_29)))
                _fail(e_29);
              else
                b_29 = e_29;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(b_29), not_null(x_28), not_null(y_28));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_16 = t;
                    int j_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_29), term_r_16);
                        t = table_get_0(t);
                        LocalPopChoice(j_16);
                      }
                    else
                      {
                        t = i_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      f_29 = t;
                      r_28 :
                      if(((ATgetType(f_29) == AT_LIST) && ((ATermList) f_29 != ATempty)))
                        {
                          g_29 = ATgetFirst((ATermList) f_29);
                          h_29 = (ATerm) ATgetNext((ATermList) f_29);
                          {
                            if(((c_29 != NULL) && (c_29 != g_29)))
                              _fail(g_29);
                            else
                              c_29 = g_29;
                            {
                              if(((d_29 != NULL) && (d_29 != h_29)))
                                _fail(h_29);
                              else
                                d_29 = h_29;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(b_29), term_r_16, (ATerm) ATinsert(CheckATermList(not_null(d_29)), (ATerm) ATinsert(CheckATermList(not_null(c_29)), not_null(x_28))));
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
        t = h_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm o_67 (ATerm), ATerm p_67 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    t = term_t_16;
    return(t);
  }
  t = ArgOption_3(t, o_67, p_67, x_1);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm d_67 (ATerm), ATerm e_67 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    t = term_t_16;
    return(t);
  }
  t = Option_3(t, d_67, e_67, y_1);
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm n_29 = NULL,x_29 = NULL,y_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym__2))
    {
      x_29 = ATgetArgument(n_29, 0);
      y_29 = ATgetArgument(n_29, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_10, not_null(x_29), not_null(y_29));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  j_30 = t;
  h_30 :
  if(match_string(j_30, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(j_30) == AT_LIST) && ((ATermList) j_30 != ATempty)))
        {
          k_30 = ATgetFirst((ATermList) j_30);
          l_30 = (ATerm) ATgetNext((ATermList) j_30);
          i_30 :
          if(((ATgetType(l_30) == AT_LIST) && ((ATermList) l_30 != ATempty)))
            {
              m_30 = ATgetFirst((ATermList) l_30);
              n_30 = (ATerm) ATgetNext((ATermList) l_30);
              {
                ATerm r_30 = NULL;
                ATerm u_16;
                u_16 = t;
                {
                  t = not_null(k_30);
                  t = k_0(t);
                }
                t = u_16;
                {
                  ATerm v_30 = NULL;
                  t = not_null(m_30);
                  {
                    t = l_0(t);
                    {
                      v_30 = t;
                      if(((r_30 != NULL) && (r_30 != v_30)))
                        _fail(v_30);
                      else
                        r_30 = v_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_30)), not_null(r_30));
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
  ATerm v_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm n_31 = NULL;
        n_31 = t;
        z_30 :
        if(!(match_string(n_31, "-S")))
          {
            if(!(match_string(n_31, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        t = term_b_17;
        t = set_config_0(t);
        t = term_d_17;
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        t = term_e_17;
        return(t);
      }
      t = Option_3(t, z_1, a_2, b_2);
      LocalPopChoice(a_17);
    }
  else
    {
      t = v_16;
      {
        ATerm f_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              ATerm o_31 = NULL;
              o_31 = t;
              a_31 :
              if(!(match_string(o_31, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              t = term_m_17;
              t = set_config_0(t);
              t = term_o_17;
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              t = term_p_17;
              return(t);
            }
            t = Option_3(t, c_2, d_2, e_2);
            LocalPopChoice(h_17);
          }
        else
          {
            t = f_17;
            {
              ATerm r_17 = t;
              int s_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_2 (ATerm t)
                  {
                    ATerm p_31 = NULL;
                    p_31 = t;
                    b_31 :
                    if(!(match_string(p_31, "-v")))
                      {
                        if(!(match_string(p_31, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm j_2 (ATerm t)
                  {
                    t = term_u_17;
                    t = set_config_0(t);
                    t = term_v_17;
                    return(t);
                  }
                  ATerm n_2 (ATerm t)
                  {
                    t = term_w_17;
                    return(t);
                  }
                  t = Option_3(t, i_2, j_2, n_2);
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
                        ATerm q_2 (ATerm t)
                        {
                          ATerm q_31 = NULL;
                          q_31 = t;
                          c_31 :
                          if(!(match_string(q_31, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm r_2 (ATerm t)
                        {
                          ATerm t_31 = NULL;
                          ATerm j_18;
                          j_18 = t;
                          {
                            ATerm r_31 = NULL;
                            ATerm s_31 = NULL;
                            s_31 = t;
                            if(((r_31 != NULL) && (r_31 != s_31)))
                              _fail(s_31);
                            else
                              r_31 = s_31;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_18, not_null(r_31));
                              t = set_config_0(t);
                            }
                          }
                          t = j_18;
                          {
                            ATerm u_31 = NULL;
                            u_31 = t;
                            if(((t_31 != NULL) && (t_31 != u_31)))
                              _fail(u_31);
                            else
                              t_31 = u_31;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(t_31));
                          }
                          return(t);
                        }
                        ATerm s_2 (ATerm t)
                        {
                          t = term_l_18;
                          return(t);
                        }
                        t = ArgOption_3(t, q_2, r_2, s_2);
                        LocalPopChoice(y_17);
                      }
                    else
                      {
                        t = x_17;
                        {
                          ATerm m_18 = t;
                          int n_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_2 (ATerm t)
                              {
                                ATerm v_31 = NULL;
                                v_31 = t;
                                f_31 :
                                if(!(match_string(v_31, "-i")))
                                  {
                                    if(!(match_string(v_31, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm u_2 (ATerm t)
                              {
                                ATerm y_31 = NULL;
                                ATerm o_18;
                                o_18 = t;
                                {
                                  ATerm w_31 = NULL;
                                  ATerm x_31 = NULL;
                                  x_31 = t;
                                  if(((w_31 != NULL) && (w_31 != x_31)))
                                    _fail(x_31);
                                  else
                                    w_31 = x_31;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_a_9, not_null(w_31));
                                    t = set_config_0(t);
                                  }
                                }
                                t = o_18;
                                {
                                  ATerm z_31 = NULL;
                                  z_31 = t;
                                  if(((y_31 != NULL) && (y_31 != z_31)))
                                    _fail(z_31);
                                  else
                                    y_31 = z_31;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_31));
                                }
                                return(t);
                              }
                              ATerm w_2 (ATerm t)
                              {
                                t = term_b_19;
                                return(t);
                              }
                              t = ArgOption_3(t, t_2, u_2, w_2);
                              LocalPopChoice(n_18);
                            }
                          else
                            {
                              t = m_18;
                              {
                                ATerm c_19 = t;
                                int d_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_2 (ATerm t)
                                    {
                                      ATerm a_32 = NULL;
                                      a_32 = t;
                                      i_31 :
                                      if(!(match_string(a_32, "-o")))
                                        {
                                          if(!(match_string(a_32, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm b_3 (ATerm t)
                                    {
                                      ATerm d_32 = NULL;
                                      ATerm e_19;
                                      e_19 = t;
                                      {
                                        ATerm b_32 = NULL;
                                        ATerm c_32 = NULL;
                                        c_32 = t;
                                        if(((b_32 != NULL) && (b_32 != c_32)))
                                          _fail(c_32);
                                        else
                                          b_32 = c_32;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(b_32));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = e_19;
                                      {
                                        ATerm e_32 = NULL;
                                        e_32 = t;
                                        if(((d_32 != NULL) && (d_32 != e_32)))
                                          _fail(e_32);
                                        else
                                          d_32 = e_32;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_32));
                                      }
                                      return(t);
                                    }
                                    ATerm c_3 (ATerm t)
                                    {
                                      t = term_f_19;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, z_2, b_3, c_3);
                                    LocalPopChoice(d_19);
                                  }
                                else
                                  {
                                    t = c_19;
                                    {
                                      ATerm g_19 = t;
                                      int h_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm f_32 = NULL;
                                            f_32 = t;
                                            l_31 :
                                            if(!(match_string(f_32, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm e_3 (ATerm t)
                                          {
                                            t = term_r_19;
                                            t = set_config_0(t);
                                            t = term_s_19;
                                            return(t);
                                          }
                                          ATerm p_3 (ATerm t)
                                          {
                                            t = term_t_19;
                                            return(t);
                                          }
                                          t = Option_3(t, d_3, e_3, p_3);
                                          LocalPopChoice(h_19);
                                        }
                                      else
                                        {
                                          t = g_19;
                                          {
                                            ATerm q_3 (ATerm t)
                                            {
                                              ATerm g_32 = NULL;
                                              g_32 = t;
                                              m_31 :
                                              if(!(match_string(g_32, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm r_3 (ATerm t)
                                            {
                                              t = term_v_19;
                                              t = set_config_0(t);
                                              t = term_w_19;
                                              return(t);
                                            }
                                            ATerm s_3 (ATerm t)
                                            {
                                              t = term_c_20;
                                              return(t);
                                            }
                                            t = Option_3(t, q_3, r_3, s_3);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm o_32 = NULL;
  o_32 = t;
  t = SSL_table_destroy(not_null(o_32));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm d_33 = NULL,j_33 = NULL,k_33 = NULL;
  k_33 = t;
  c_33 :
  if(((ATgetType(k_33) == AT_LIST) && ((ATermList) k_33 != ATempty)))
    {
      d_33 = ATgetFirst((ATermList) k_33);
      j_33 = (ATerm) ATgetNext((ATermList) k_33);
      {
        ATerm n_33 = NULL;
        t = not_null(j_33);
        {
          ATerm d_20;
          d_20 = t;
          {
            ATerm o_33 = NULL,q_33 = NULL,s_33 = NULL;
            ATerm e_20;
            e_20 = t;
            {
              ATerm p_33 = NULL;
              t = j_0(t);
              {
                p_33 = t;
                if(((o_33 != NULL) && (o_33 != p_33)))
                  _fail(p_33);
                else
                  o_33 = p_33;
              }
            }
            t = e_20;
            {
              ATerm r_33 = NULL;
              t = not_null(d_33);
              {
                t = i_0(t);
                {
                  r_33 = t;
                  if(((q_33 != NULL) && (q_33 != r_33)))
                    _fail(r_33);
                  else
                    q_33 = r_33;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_33)), not_null(q_33));
                {
                  s_33 = t;
                  if(((n_33 != NULL) && (n_33 != s_33)))
                    _fail(s_33);
                  else
                    n_33 = s_33;
                }
              }
            }
          }
          t = d_20;
          {
            ATerm t_3 (ATerm t)
            {
              t = not_null(n_33);
              return(t);
            }
            t = reverse_acc_2(t, i_0, t_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) k_33 == ATempty))
        {
          {
            t = term_l_10;
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
  ATerm u_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_60 (ATerm))
{
  ATerm d_34 = NULL,e_34 = NULL;
  d_34 = t;
  c_34 :
  if(match_cons(d_34, sym_Program_1))
    {
      e_34 = ATgetArgument(d_34, 0);
      {
        ATerm h_34 = NULL,j_34 = NULL;
        ATerm i_34 = NULL;
        t = SSLgetAnnotations(not_null(d_34));
        {
          i_34 = t;
          if(((h_34 != NULL) && (h_34 != i_34)))
            _fail(i_34);
          else
            h_34 = i_34;
        }
        {
          t = not_null(e_34);
          {
            ATerm l_34 = NULL;
            t = r_60(t);
            {
              j_34 = t;
              {
                ATerm m_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_34)), not_null(h_34));
                {
                  m_34 = t;
                  if(((l_34 != NULL) && (l_34 != m_34)))
                    _fail(m_34);
                  else
                    l_34 = m_34;
                }
                t = not_null(l_34);
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
  ATerm v_34 = NULL;
  ATerm z_3 (ATerm t)
  {
    ATerm a_4 (ATerm t)
    {
      ATerm w_34 = NULL;
      w_34 = t;
      if(((v_34 != NULL) && (v_34 != w_34)))
        _fail(w_34);
      else
        v_34 = w_34;
      return(t);
    }
    t = Program_1(t, a_4);
    return(t);
  }
  t = option_defined_1(t, z_3);
  {
    ATerm b_4 (ATerm t)
    {
      ATerm x_34 = NULL;
      ATerm y_34 = NULL;
      t = term_l_10;
      {
        ATerm c_4 (ATerm t)
        {
          t = not_null(v_34);
          return(t);
        }
        t = short_description_1(t, c_4);
        {
          t = concat_strings_0(t);
          {
            y_34 = t;
            if(((x_34 != NULL) && (x_34 != y_34)))
              _fail(y_34);
            else
              x_34 = y_34;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATempty, not_null(x_34)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, b_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATempty, term_f_20));
      {
        t = printnl_0(t);
        {
          t = term_n_20;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm z_34 = NULL;
                  z_34 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_34)), term_o_20));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_4);
                {
                  ATerm g_4 (ATerm t)
                  {
                    ATerm b_35 = NULL;
                    ATerm c_35 = NULL;
                    t = term_l_10;
                    {
                      ATerm h_4 (ATerm t)
                      {
                        t = not_null(v_34);
                        return(t);
                      }
                      t = long_description_1(t, h_4);
                      {
                        t = concat_strings_0(t);
                        {
                          c_35 = t;
                          if(((b_35 != NULL) && (b_35 != c_35)))
                            _fail(c_35);
                          else
                            b_35 = c_35;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_35)), term_p_20));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_4);
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
ATerm Undefined_1 (ATerm t, ATerm s_60 (ATerm))
{
  ATerm m_35 = NULL,n_35 = NULL;
  m_35 = t;
  l_35 :
  if(match_cons(m_35, sym_Undefined_1))
    {
      n_35 = ATgetArgument(m_35, 0);
      {
        ATerm q_35 = NULL,s_35 = NULL;
        ATerm r_35 = NULL;
        t = SSLgetAnnotations(not_null(m_35));
        {
          r_35 = t;
          if(((q_35 != NULL) && (q_35 != r_35)))
            _fail(r_35);
          else
            q_35 = r_35;
        }
        {
          t = not_null(n_35);
          {
            ATerm u_35 = NULL;
            t = s_60(t);
            {
              s_35 = t;
              {
                ATerm v_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_35)), not_null(q_35));
                {
                  v_35 = t;
                  if(((u_35 != NULL) && (u_35 != v_35)))
                    _fail(v_35);
                  else
                    u_35 = v_35;
                }
                t = not_null(u_35);
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
  ATerm e_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym_Help_0))
    {
      ATerm g_36 = NULL,i_36 = NULL;
      ATerm q_20;
      q_20 = t;
      {
        ATerm h_36 = NULL;
        t = SSLgetAnnotations(not_null(e_36));
        {
          h_36 = t;
          if(((g_36 != NULL) && (g_36 != h_36)))
            _fail(h_36);
          else
            g_36 = h_36;
        }
      }
      t = q_20;
      {
        ATerm j_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_36));
        {
          j_36 = t;
          if(((i_36 != NULL) && (i_36 != j_36)))
            _fail(j_36);
          else
            i_36 = j_36;
        }
        t = not_null(i_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_36 = NULL,t_36 = NULL,u_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_cons(p_36, sym__2))
    {
      t_36 = ATgetArgument(p_36, 0);
      u_36 = ATgetArgument(p_36, 1);
      t = SSL_table_get(not_null(t_36), not_null(u_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  b_37 = t;
  a_37 :
  if(match_cons(b_37, sym__3))
    {
      c_37 = ATgetArgument(b_37, 0);
      d_37 = ATgetArgument(b_37, 1);
      e_37 = ATgetArgument(b_37, 2);
      {
        ATerm r_20;
        r_20 = t;
        {
          ATerm i_37 = NULL;
          ATerm j_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_37), not_null(d_37));
          {
            ATerm u_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_20);
              }
            else
              {
                t = u_20;
                t = (ATerm) ATempty;
              }
            {
              j_37 = t;
              if(((i_37 != NULL) && (i_37 != j_37)))
                _fail(j_37);
              else
                i_37 = j_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_37), not_null(d_37), (ATerm) ATinsert(CheckATermList(not_null(i_37)), not_null(e_37)));
            t = table_put_0(t);
          }
        }
        t = r_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm n_37 = NULL;
  ATerm o_37 = NULL;
  t = term_l_10;
  {
    t = z_66(t);
    {
      o_37 = t;
      if(((n_37 != NULL) && (n_37 != o_37)))
        _fail(o_37);
      else
        n_37 = o_37;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_20, term_m_20, not_null(n_37));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  u_37 = t;
  t_37 :
  if(match_string(u_37, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(u_37) == AT_LIST) && ((ATermList) u_37 != ATempty)))
        {
          v_37 = ATgetFirst((ATermList) u_37);
          w_37 = (ATerm) ATgetNext((ATermList) u_37);
          {
            ATerm z_37 = NULL;
            ATerm y_20;
            y_20 = t;
            {
              t = not_null(v_37);
              t = a_0(t);
            }
            t = y_20;
            {
              ATerm d_38 = NULL;
              t = term_l_10;
              {
                t = b_0(t);
                {
                  d_38 = t;
                  if(((z_37 != NULL) && (z_37 != d_38)))
                    _fail(d_38);
                  else
                    z_37 = d_38;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_37)), not_null(z_37));
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
  ATerm p_4 (ATerm t)
  {
    ATerm i_38 = NULL;
    i_38 = t;
    h_38 :
    if(!(match_string(i_38, "--help")))
      {
        if(!(match_string(i_38, "-h")))
          {
            if(!(match_string(i_38, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_z_20;
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_a_21;
    return(t);
  }
  t = Option_3(t, p_4, s_4, t_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
  l_38 = t;
  k_38 :
  if(((ATgetType(l_38) == AT_LIST) && ((ATermList) l_38 != ATempty)))
    {
      m_38 = ATgetFirst((ATermList) l_38);
      n_38 = (ATerm) ATgetNext((ATermList) l_38);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_38)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_38)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm f_21;
  f_21 = t;
  {
    ATerm u_4 (ATerm t)
    {
      t = term_g_21;
      t = x_66(t);
      return(t);
    }
    t = try_1(t, u_4);
  }
  t = f_21;
  {
    ATerm v_4 (ATerm t)
    {
      ATerm s_38 = NULL;
      s_38 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_38));
      return(t);
    }
    ATerm y_4 (ATerm t)
    {
      ATerm h_21 = t;
      int i_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_21);
            }
          else
            {
              t = j_21;
              {
                t = x_66(t);
                t = Cons_2(t, _id, y_4);
              }
            }
          LocalPopChoice(i_21);
        }
      else
        {
          t = h_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_4, y_4);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm x_38 = NULL;
  ATerm l_21;
  l_21 = t;
  {
    t = term_m_21;
    t = table_put_0(t);
  }
  t = l_21;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm n_21 = t;
      int o_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_66(t);
          LocalPopChoice(o_21);
        }
      else
        {
          t = n_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_4);
    {
      ATerm e_5 (ATerm t)
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_s_21;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            {
              ATerm f_5 (ATerm t)
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm y_38 = NULL;
                  y_38 = t;
                  if(((x_38 != NULL) && (x_38 != y_38)))
                    _fail(y_38);
                  else
                    x_38 = y_38;
                  return(t);
                }
                t = Undefined_1(t, g_5);
                return(t);
              }
              t = option_defined_1(t, f_5);
              {
                ATerm t_21;
                t_21 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_38)), term_u_21));
                  t = printnl_0(t);
                }
                t = t_21;
                {
                  t = system_usage_0(t);
                  {
                    t = term_s_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_5);
      {
        ATerm v_21;
        v_21 = t;
        {
          t = term_h_20;
          t = table_destroy_0(t);
        }
        t = v_21;
      }
    }
  }
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_5 (ATerm t)
              {
                ATerm h_39 = NULL;
                h_39 = t;
                a_39 :
                if(!(match_string(h_39, "-I")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_5 (ATerm t)
              {
                ATerm i_39 = NULL;
                i_39 = t;
                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(i_39));
                return(t);
              }
              t = ArgOption_2(t, m_5, n_5);
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              {
                ATerm b_22 = t;
                int c_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_5 (ATerm t)
                    {
                      ATerm k_39 = NULL;
                      k_39 = t;
                      c_39 :
                      if(!(match_string(k_39, "-nodep")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm p_5 (ATerm t)
                    {
                      t = term_d_22;
                      return(t);
                    }
                    t = Option_2(t, o_5, p_5);
                    LocalPopChoice(c_22);
                  }
                else
                  {
                    t = b_22;
                    {
                      ATerm e_22 = t;
                      int f_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_5 (ATerm t)
                          {
                            ATerm l_39 = NULL;
                            l_39 = t;
                            d_39 :
                            if(!(match_string(l_39, "-dep")))
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          ATerm x_5 (ATerm t)
                          {
                            ATerm m_39 = NULL;
                            m_39 = t;
                            t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(m_39));
                            return(t);
                          }
                          t = ArgOption_2(t, q_5, x_5);
                          LocalPopChoice(f_22);
                        }
                      else
                        {
                          t = e_22;
                          {
                            ATerm y_5 (ATerm t)
                            {
                              ATerm o_39 = NULL;
                              o_39 = t;
                              f_39 :
                              if(!(match_string(o_39, "--prefix")))
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            ATerm z_5 (ATerm t)
                            {
                              ATerm p_39 = NULL;
                              p_39 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_g_22, (ATerm) ATmakeAppl(sym_Defined_2, term_h_22, not_null(p_39)));
                                {
                                  ATerm a_6 (ATerm t)
                                  {
                                    t = term_i_22;
                                    return(t);
                                  }
                                  t = assert_1(t, a_6);
                                }
                                t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(p_39));
                              }
                              return(t);
                            }
                            t = ArgOption_2(t, y_5, z_5);
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
  t = parse_options_1(t, h_5);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm f_62 (ATerm, ATerm (ATerm)), ATerm g_62 (ATerm))
{
  ATerm n_40 = NULL;
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,y_40 = NULL;
  t = pack_module_options_0(t);
  {
    n_40 = t;
    {
      ATerm b_6 (ATerm t)
      {
        t = need_help_1(t, pack_modules_usage_0);
        return(t);
      }
      t = try_1(t, b_6);
      {
        ATerm e_6 (ATerm t)
        {
          ATerm g_6 (ATerm t)
          {
            ATerm t_40 = NULL,u_40 = NULL;
            t_40 = t;
            z_39 :
            if(match_cons(t_40, sym_Program_1))
              {
                u_40 = ATgetArgument(t_40, 0);
                if(((p_40 != NULL) && (p_40 != u_40)))
                  _fail(u_40);
                else
                  p_40 = u_40;
              }
            else
              {
                if(match_cons(t_40, sym_Input_1))
                  {
                    u_40 = ATgetArgument(t_40, 0);
                    if(((q_40 != NULL) && (q_40 != u_40)))
                      _fail(u_40);
                    else
                      q_40 = u_40;
                  }
                else
                  {
                    if(match_cons(t_40, sym_Output_1))
                      {
                        u_40 = ATgetArgument(t_40, 0);
                        if(((r_40 != NULL) && (r_40 != u_40)))
                          _fail(u_40);
                        else
                          r_40 = u_40;
                      }
                    else
                      {
                        if(match_cons(t_40, sym_Dependency_1))
                          {
                            u_40 = ATgetArgument(t_40, 0);
                            if(((s_40 != NULL) && (s_40 != u_40)))
                              _fail(u_40);
                            else
                              s_40 = u_40;
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
          t = try_1(t, g_6);
          return(t);
        }
        t = list_1(t, e_6);
        {
          ATerm a_41 = NULL;
          ATerm h_6 (ATerm t)
          {
            ATerm v_40 = NULL,w_40 = NULL;
            v_40 = t;
            b_40 :
            if(match_cons(v_40, sym_Include_1))
              {
                w_40 = ATgetArgument(v_40, 0);
                t = not_null(w_40);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, h_6);
          {
            y_40 = t;
            {
              ATerm c_41 = NULL;
              ATerm j_22 = t;
              int k_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = not_null(q_40);
                  LocalPopChoice(k_22);
                }
              else
                {
                  t = j_22;
                  t = term_l_22;
                }
              {
                a_41 = t;
                {
                  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
                  ATerm m_22 = t;
                  int n_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = not_null(r_40);
                      LocalPopChoice(n_22);
                    }
                  else
                    {
                      t = m_22;
                      t = term_o_22;
                    }
                  {
                    c_41 = t;
                    {
                      t = not_null(a_41);
                      {
                        ATerm j_6 (ATerm t)
                        {
                          t = not_null(y_40);
                          return(t);
                        }
                        t = f_62(t, j_6);
                        {
                          e_41 = t;
                          m_40 :
                          if(match_cons(e_41, sym__2))
                            {
                              f_41 = ATgetArgument(e_41, 0);
                              g_41 = ATgetArgument(e_41, 1);
                              {
                                ATerm k_41 = NULL,n_41 = NULL;
                                t = not_null(n_40);
                                {
                                  ATerm p_22 = t;
                                  int q_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm k_6 (ATerm t)
                                      {
                                        ATerm j_41 = NULL;
                                        j_41 = t;
                                        g_40 :
                                        if(!(match_cons(j_41, sym_Binary_0)))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = option_defined_1(t, k_6);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_41), not_null(g_41));
                                        t = WriteToBinaryFile_0(t);
                                      }
                                      LocalPopChoice(q_22);
                                    }
                                  else
                                    {
                                      t = p_22;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_41), not_null(g_41));
                                        t = WriteToTextFile_0(t);
                                      }
                                    }
                                  {
                                    ATerm l_6 (ATerm t)
                                    {
                                      ATerm m_41 = NULL;
                                      ATerm r_22 = t;
                                      int s_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = not_null(s_40);
                                          LocalPopChoice(s_22);
                                        }
                                      else
                                        {
                                          t = r_22;
                                          {
                                            ATerm t_22 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(n_40);
                                                {
                                                  ATerm m_6 (ATerm t)
                                                  {
                                                    ATerm l_41 = NULL;
                                                    l_41 = t;
                                                    h_40 :
                                                    if(!(match_cons(l_41, sym_NoDependency_0)))
                                                      {
                                                        _fail(t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = option_defined_1(t, m_6);
                                                }
                                                PopChoice();
                                                _fail(t);
                                              }
                                            else
                                              {
                                                t = t_22;
                                              }
                                            t = g_62(t);
                                          }
                                        }
                                      {
                                        m_41 = t;
                                        {
                                          if(((k_41 != NULL) && (k_41 != m_41)))
                                            _fail(m_41);
                                          else
                                            k_41 = m_41;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_41), not_null(f_41));
                                            {
                                              ATerm n_6 (ATerm t)
                                              {
                                                t = not_null(k_41);
                                                return(t);
                                              }
                                              t = create_dep_file_1(t, n_6);
                                            }
                                          }
                                        }
                                      }
                                      return(t);
                                    }
                                    t = try_1(t, l_6);
                                    {
                                      t = dtime_0(t);
                                      {
                                        n_41 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_22), not_null(n_41)), term_u_22), not_null(p_40)));
                                          {
                                            t = printnl_0(t);
                                            {
                                              t = term_s_21;
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
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
  d_42 = t;
  c_42 :
  if(match_cons(d_42, sym__2))
    {
      e_42 = ATgetArgument(d_42, 0);
      f_42 = ATgetArgument(d_42, 1);
      {
        t = not_null(e_42);
        {
          ATerm o_6 (ATerm t)
          {
            t = not_null(f_42);
            return(t);
          }
          t = at_end_1(t, o_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm y_49 (ATerm), ATerm z_49 (ATerm))
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
  p_42 = t;
  o_42 :
  if(match_cons(p_42, sym__2))
    {
      q_42 = ATgetArgument(p_42, 0);
      r_42 = ATgetArgument(p_42, 1);
      {
        ATerm x_42 = NULL,z_42 = NULL;
        ATerm y_42 = NULL;
        t = SSLgetAnnotations(not_null(p_42));
        {
          y_42 = t;
          if(((x_42 != NULL) && (x_42 != y_42)))
            _fail(y_42);
          else
            x_42 = y_42;
        }
        {
          t = not_null(q_42);
          {
            ATerm d_43 = NULL;
            t = y_49(t);
            {
              z_42 = t;
              {
                t = not_null(r_42);
                {
                  ATerm f_43 = NULL;
                  t = z_49(t);
                  {
                    d_43 = t;
                    {
                      ATerm g_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_42), not_null(d_43)), not_null(x_42));
                      {
                        g_43 = t;
                        if(((f_43 != NULL) && (f_43 != g_43)))
                          _fail(g_43);
                        else
                          f_43 = g_43;
                      }
                      t = not_null(f_43);
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
ATerm at_suffix_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm m_43 (ATerm t)
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_78(t);
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        t = Cons_2(t, _id, m_43);
      }
    return(t);
  }
  t = m_43(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm q_70 (ATerm))
{
  ATerm p_43 = NULL;
  ATerm y_22;
  y_22 = t;
  {
    ATerm q_43 = NULL;
    t = q_70(t);
    {
      t = explode_string_0(t);
      {
        q_43 = t;
        if(((p_43 != NULL) && (p_43 != q_43)))
          _fail(q_43);
        else
          p_43 = q_43;
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
        ATerm p_6 (ATerm t)
        {
          ATerm r_43 = NULL;
          r_43 = t;
          if(((p_43 != NULL) && (p_43 != r_43)))
            _fail(r_43);
          else
            p_43 = r_43;
          return(t);
        }
        t = at_suffix_1(t, p_6);
      }
    }
    t = z_22;
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm y_71 (ATerm))
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
            ATerm u_6 (ATerm t)
            {
              t = filter_1(t, y_71);
              return(t);
            }
            t = Cons_2(t, y_71, u_6);
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
              w_43 = t;
              v_43 :
              if(((ATgetType(w_43) == AT_LIST) && ((ATermList) w_43 != ATempty)))
                {
                  x_43 = ATgetFirst((ATermList) w_43);
                  y_43 = (ATerm) ATgetNext((ATermList) w_43);
                  {
                    t = not_null(y_43);
                    t = filter_1(t, y_71);
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
  ATerm c_44 = NULL;
  c_44 = t;
  t = SSL_ReadDir(not_null(c_44));
  return(t);
}
ATerm find_plugins_2 (ATerm t, ATerm p_61 (ATerm), ATerm q_61 (ATerm))
{
  t = p_61(t);
  {
    ATerm v_6 (ATerm t)
    {
      ATerm h_44 = NULL;
      h_44 = t;
      {
        t = readdir_0(t);
        {
          ATerm w_6 (ATerm t)
          {
            ATerm j_44 = NULL;
            t = has_extension_1(t, q_61);
            {
              ATerm k_44 = NULL;
              k_44 = t;
              if(((j_44 != NULL) && (j_44 != k_44)))
                _fail(k_44);
              else
                j_44 = k_44;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_44)), term_o_10), not_null(h_44));
                t = concat_strings_0(t);
              }
            }
            return(t);
          }
          t = filter_1(t, w_6);
        }
      }
      return(t);
    }
    t = filter_1(t, v_6);
    t = concat_0(t);
  }
  return(t);
}
ATerm import_config_files_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm e_23;
  e_23 = t;
  {
    t = s_61(t);
    {
      ATerm x_6 (ATerm t)
      {
        ATerm s_44 = NULL;
        ATerm c_7 (ATerm t)
        {
          t = term_f_23;
          return(t);
        }
        t = debug_1(t, c_7);
        {
          t = ReadFromFile_0(t);
          {
            ATerm t_44 = NULL;
            t_44 = t;
            if(((s_44 != NULL) && (s_44 != t_44)))
              _fail(t_44);
            else
              s_44 = t_44;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(s_44));
              t = table_putlist_0(t);
            }
          }
        }
        return(t);
      }
      t = map_1(t, x_6);
    }
  }
  t = e_23;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm f_45 = NULL;
  ATerm h_45 = NULL;
  f_45 = t;
  {
    ATerm g_23;
    g_23 = t;
    {
      ATerm i_45 = NULL;
      t = term_h_23;
      {
        i_45 = t;
        if(((h_45 != NULL) && (h_45 != i_45)))
          _fail(i_45);
        else
          h_45 = i_45;
      }
    }
    t = g_23;
    {
      t = SSL_open_file(not_null(f_45), not_null(h_45));
      t = SSL_close_file(not_null(f_45));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_78 (ATerm))
{
  ATerm l_45 (ATerm t)
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_45);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          t = Nil_0(t);
          t = o_78(t);
        }
      }
    return(t);
  }
  t = l_45(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      {
        ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
        o_45 = t;
        n_45 :
        if(((ATgetType(o_45) == AT_LIST) && ((ATermList) o_45 != ATempty)))
          {
            p_45 = ATgetFirst((ATermList) o_45);
            q_45 = (ATerm) ATgetNext((ATermList) o_45);
            {
              t = not_null(p_45);
              {
                ATerm d_7 (ATerm t)
                {
                  t = not_null(q_45);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_7);
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
ATerm fetch_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm v_45 (ATerm t)
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_78, _id);
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        t = Cons_2(t, _id, v_45);
      }
    return(t);
  }
  t = v_45(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm k_78 (ATerm))
{
  ATerm x_45 = NULL;
  ATerm e_7 (ATerm t)
  {
    ATerm y_45 = NULL;
    t = k_78(t);
    {
      y_45 = t;
      if(((x_45 != NULL) && (x_45 != y_45)))
        _fail(y_45);
      else
        x_45 = y_45;
    }
    return(t);
  }
  t = fetch_1(t, e_7);
  t = not_null(x_45);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm h_61 (ATerm), ATerm i_61 (ATerm))
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_61(t);
      {
        ATerm f_7 (ATerm t)
        {
          ATerm c_46 = NULL,e_46 = NULL;
          ATerm w_23;
          w_23 = t;
          {
            ATerm d_46 = NULL;
            d_46 = t;
            if(((c_46 != NULL) && (c_46 != d_46)))
              _fail(d_46);
            else
              c_46 = d_46;
          }
          t = w_23;
          {
            ATerm f_46 = NULL;
            t = i_61(t);
            {
              f_46 = t;
              if(((e_46 != NULL) && (e_46 != f_46)))
                _fail(f_46);
              else
                e_46 = f_46;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_46)), term_o_10), not_null(c_46));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, f_7);
      }
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        t = term_n_11;
        {
          t = debug_1(t, i_61);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  ATerm x_23;
  x_23 = t;
  {
    ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL;
    n_46 = t;
    j_46 :
    if(match_cons(n_46, sym__3))
      {
        o_46 = ATgetArgument(n_46, 0);
        p_46 = ATgetArgument(n_46, 1);
        q_46 = ATgetArgument(n_46, 2);
        {
          if(((k_46 != NULL) && (k_46 != o_46)))
            _fail(o_46);
          else
            k_46 = o_46;
          {
            if(((l_46 != NULL) && (l_46 != p_46)))
              _fail(p_46);
            else
              l_46 = p_46;
            {
              if(((m_46 != NULL) && (m_46 != q_46)))
                _fail(q_46);
              else
                m_46 = q_46;
              t = SSL_table_put(not_null(k_46), not_null(l_46), not_null(m_46));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_23;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm w_46 = NULL;
  w_46 = t;
  v_46 :
  if(((ATermList) w_46 == ATempty))
    {
      {
        ATerm y_46 = NULL,a_47 = NULL;
        ATerm y_23;
        y_23 = t;
        {
          ATerm z_46 = NULL;
          t = SSLgetAnnotations(not_null(w_46));
          {
            z_46 = t;
            if(((y_46 != NULL) && (y_46 != z_46)))
              _fail(z_46);
            else
              y_46 = z_46;
          }
        }
        t = y_23;
        {
          ATerm b_47 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_46));
          {
            b_47 = t;
            if(((a_47 != NULL) && (a_47 != b_47)))
              _fail(b_47);
            else
              a_47 = b_47;
          }
          t = not_null(a_47);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm f_47 (ATerm t)
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        t = Cons_2(t, a_78, f_47);
      }
    return(t);
  }
  t = f_47(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,o_47 = NULL;
  k_47 = t;
  j_47 :
  if(match_cons(k_47, sym__2))
    {
      l_47 = ATgetArgument(k_47, 0);
      o_47 = ATgetArgument(k_47, 1);
      {
        t = not_null(o_47);
        {
          ATerm g_7 (ATerm t)
          {
            ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
            s_47 = t;
            i_47 :
            if(match_cons(s_47, sym__2))
              {
                t_47 = ATgetArgument(s_47, 0);
                u_47 = ATgetArgument(s_47, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(l_47), not_null(t_47), not_null(u_47));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, g_7);
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
  ATerm d_48 = NULL;
  d_48 = t;
  t = SSL_ReadFromFile(not_null(d_48));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
  o_48 = t;
  n_48 :
  if(match_cons(o_48, sym__2))
    {
      p_48 = ATgetArgument(o_48, 0);
      q_48 = ATgetArgument(o_48, 1);
      {
        ATerm b_24;
        b_24 = t;
        t = SSL_printnl(not_null(p_48), not_null(q_48));
        t = b_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm e_69 (ATerm))
{
  ATerm c_24;
  c_24 = t;
  {
    ATerm w_48 = NULL,y_48 = NULL;
    ATerm d_24;
    d_24 = t;
    {
      ATerm x_48 = NULL;
      t = e_69(t);
      {
        x_48 = t;
        if(((w_48 != NULL) && (w_48 != x_48)))
          _fail(x_48);
        else
          w_48 = x_48;
      }
    }
    t = d_24;
    {
      ATerm z_48 = NULL;
      z_48 = t;
      if(((y_48 != NULL) && (y_48 != z_48)))
        _fail(z_48);
      else
        y_48 = z_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_48)), not_null(w_48)));
        t = printnl_0(t);
      }
    }
  }
  t = c_24;
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm r_61 (ATerm))
{
  ATerm e_24;
  e_24 = t;
  {
    ATerm x_49 = NULL;
    t = r_61(t);
    {
      ATerm h_7 (ATerm t)
      {
        t = term_f_23;
        return(t);
      }
      t = debug_1(t, h_7);
      {
        t = ReadFromFile_0(t);
        {
          ATerm a_50 = NULL;
          a_50 = t;
          if(((x_49 != NULL) && (x_49 != a_50)))
            _fail(a_50);
          else
            x_49 = a_50;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_h_10, not_null(x_49));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = e_24;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm d_50 = NULL;
  d_50 = t;
  t = SSL_implode_string(not_null(d_50));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_50 = NULL;
  h_50 = t;
  t = SSL_explode_string(not_null(h_50));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_50 (ATerm t)
        {
          ATerm h_24 = t;
          int i_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, m_50);
              LocalPopChoice(i_24);
            }
          else
            {
              t = h_24;
              {
                ATerm i_7 (ATerm t)
                {
                  ATerm l_50 = NULL;
                  l_50 = t;
                  k_50 :
                  if(!(match_int(l_50, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm k_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, i_7, k_7);
              }
            }
          return(t);
        }
        t = m_50(t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_61 (ATerm), ATerm c_61 (ATerm))
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
  t_50 = t;
  s_50 :
  if(((ATgetType(t_50) == AT_LIST) && ((ATermList) t_50 != ATempty)))
    {
      u_50 = ATgetFirst((ATermList) t_50);
      v_50 = (ATerm) ATgetNext((ATermList) t_50);
      {
        ATerm z_50 = NULL,b_51 = NULL;
        ATerm a_51 = NULL;
        t = SSLgetAnnotations(not_null(t_50));
        {
          a_51 = t;
          if(((z_50 != NULL) && (z_50 != a_51)))
            _fail(a_51);
          else
            z_50 = a_51;
        }
        {
          t = not_null(u_50);
          {
            ATerm d_51 = NULL;
            t = b_61(t);
            {
              b_51 = t;
              {
                t = not_null(v_50);
                {
                  ATerm f_51 = NULL;
                  t = c_61(t);
                  {
                    d_51 = t;
                    {
                      ATerm g_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_51)), not_null(b_51)), not_null(z_50));
                      {
                        g_51 = t;
                        if(((f_51 != NULL) && (f_51 != g_51)))
                          _fail(g_51);
                        else
                          f_51 = g_51;
                      }
                      t = not_null(f_51);
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
  ATerm q_51 = NULL,s_51 = NULL,u_51 = NULL;
  ATerm j_24;
  j_24 = t;
  {
    ATerm n_7 (ATerm t)
    {
      ATerm r_51 = NULL;
      t = get_path_0(t);
      {
        r_51 = t;
        if(((q_51 != NULL) && (q_51 != r_51)))
          _fail(r_51);
        else
          q_51 = r_51;
      }
      return(t);
    }
    t = Cons_2(t, n_7, _id);
  }
  t = j_24;
  {
    ATerm l_24;
    l_24 = t;
    {
      ATerm t_51 = NULL;
      t = get_conf_datadir();
      {
        t_51 = t;
        if(((s_51 != NULL) && (s_51 != t_51)))
          _fail(t_51);
        else
          s_51 = t_51;
      }
    }
    t = l_24;
    {
      ATerm m_24;
      m_24 = t;
      {
        ATerm v_51 = NULL;
        t = get_conf_pkgdatadir();
        {
          v_51 = t;
          if(((u_51 != NULL) && (u_51 != v_51)))
            _fail(v_51);
          else
            u_51 = v_51;
        }
      }
      t = m_24;
      {
        ATerm o_7 (ATerm t)
        {
          ATerm p_7 (ATerm t)
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_51)), not_null(q_51));
            return(t);
          }
          ATerm q_7 (ATerm t)
          {
            t = term_o_24;
            return(t);
          }
          t = find_config_file_2(t, p_7, q_7);
          return(t);
        }
        t = import_config_file_1(t, o_7);
        {
          ATerm v_7 (ATerm t)
          {
            ATerm w_7 (ATerm t)
            {
              ATerm w_51 = NULL;
              ATerm x_51 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_51), term_p_24);
              {
                t = conc_strings_0(t);
                {
                  x_51 = t;
                  if(((w_51 != NULL) && (w_51 != x_51)))
                    _fail(x_51);
                  else
                    w_51 = x_51;
                }
              }
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_51)), not_null(q_51));
              return(t);
            }
            ATerm x_7 (ATerm t)
            {
              t = term_q_24;
              return(t);
            }
            t = find_plugins_2(t, w_7, x_7);
            return(t);
          }
          t = import_config_files_1(t, v_7);
          t = pack_modules_2(t, pack_stratego_1, basename_0);
        }
      }
    }
  }
  return(t);
}
