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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_y_24;
ATerm term_j_24;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_y_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_y_21;
ATerm term_m_21;
ATerm term_h_21;
ATerm term_y_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_x_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_q_9;
void init_constant_terms (void)
{
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition a: ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition b: ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition c: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition d: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("asource", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition e: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table a: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table b: ", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table c: ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table d: ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-cmod a: ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-cmod b: ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-cmod c: ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-cmod d: ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-cmod e: ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-cmod f: ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("/home/xt/xt/bin/meta-explode", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-cmod g: ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-cmod h: ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-cmod i: ", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-mod", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("mtree", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("module ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-I dir] [-i file]", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-dep target | -nodep]", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__3, term_f_20, term_g_20, (ATerm) ATempty);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_NoDependency_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
}
ATerm basename_1 (ATerm, ATerm x_56 (ATerm));
ATerm basename_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm z_47 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm _2 (ATerm, ATerm q_37 (ATerm), ATerm r_37 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm z_56 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm get_syntax_definition_1 (ATerm, ATerm c_72 (ATerm));
ATerm get_parse_table_1 (ATerm, ATerm b_72 (ATerm));
ATerm parse_cmod_1 (ATerm, ATerm a_72 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_49 (ATerm));
ATerm Prefix_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_pid_0 (ATerm);
ATerm parse_mod_0 (ATerm);
ATerm get_module_1 (ATerm, ATerm z_71 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm u_62 (ATerm), ATerm v_62 (ATerm), ATerm w_62 (ATerm), ATerm x_62 (ATerm));
ATerm zip_1 (ATerm, ATerm z_62 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm f_60 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm g_49 (ATerm), ATerm h_49 (ATerm), ATerm i_49 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm d_71 (ATerm), ATerm e_71 (ATerm));
ATerm for_3 (ATerm, ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm i_71 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm m_49 (ATerm), ATerm n_49 (ATerm), ATerm o_49 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm b_50 (ATerm), ATerm c_50 (ATerm), ATerm d_50 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm y_71 (ATerm));
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm x_65 (ATerm));
ATerm separate_by_1 (ATerm, ATerm y_65 (ATerm));
ATerm debug_1 (ATerm, ATerm s_55 (ATerm));
ATerm obsolete_1 (ATerm, ATerm z_55 (ATerm));
ATerm open_file_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm f_49 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_54 (ATerm));
ATerm try_1 (ATerm, ATerm j_71 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm filter_1 (ATerm, ATerm h_58 (ATerm));
ATerm list_1 (ATerm, ATerm j_64 (ATerm));
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_55 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm f_54 (ATerm), ATerm g_54 (ATerm));
ATerm Option_2 (ATerm, ATerm u_53 (ATerm), ATerm v_53 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_64 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_53 (ATerm));
ATerm map_1 (ATerm, ATerm h_64 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_53 (ATerm));
ATerm Program_1 (ATerm, ATerm e_48 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_48 (ATerm));
ATerm Help_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_53 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_53 (ATerm));
ATerm parse_options_1 (ATerm, ATerm n_53 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm d_49 (ATerm, ATerm (ATerm)), ATerm e_49 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_48 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm n_48 (ATerm), ATerm o_48 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm x_56 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm b_0 (ATerm t)
    {
      ATerm c_1 = t;
      int d_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, b_0);
          LocalPopChoice(d_6);
        }
      else
        {
          t = c_1;
          {
            ATerm n_9 = t;
            int o_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_0 (ATerm t)
                {
                  ATerm a_1 = NULL;
                  a_1 = t;
                  y_0 :
                  if(!(match_int(a_1, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, d_0, _id);
                LocalPopChoice(o_9);
              }
            else
              {
                t = n_9;
                {
                  ATerm e_0 (ATerm t)
                  {
                    ATerm b_1 = NULL;
                    b_1 = t;
                    z_0 :
                    if(!(match_int(b_1, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, e_0, x_56);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, b_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm z_47 (ATerm))
{
  ATerm g_1 = NULL,h_1 = NULL;
  g_1 = t;
  f_1 :
  if(match_cons(g_1, sym_Imports_1))
    {
      h_1 = ATgetArgument(g_1, 0);
      {
        ATerm j_1 = NULL;
        t = not_null(h_1);
        {
          t = z_47(t);
          {
            j_1 = t;
            t = (ATerm) ATmakeAppl(sym_Imports_1, not_null(j_1));
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
  ATerm t_1 = NULL;
  ATerm n_0 (ATerm t)
  {
    ATerm q_1 = NULL,r_1 = NULL;
    q_1 = t;
    o_1 :
    if(match_cons(q_1, sym_Specification_1))
      {
        r_1 = ATgetArgument(q_1, 0);
        {
          t = not_null(r_1);
          {
            ATerm o_0 (ATerm t)
            {
              ATerm p_9 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = p_9;
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
      t_1 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(t_1));
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm q_37 (ATerm), ATerm r_37 (ATerm))
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL;
  b_2 = t;
  a_2 :
  if(match_cons(b_2, sym__2))
    {
      c_2 = ATgetArgument(b_2, 0);
      d_2 = ATgetArgument(b_2, 1);
      {
        ATerm g_2 = NULL;
        t = not_null(c_2);
        {
          ATerm i_2 = NULL;
          t = q_37(t);
          {
            g_2 = t;
            {
              t = not_null(d_2);
              {
                t = r_37(t);
                {
                  i_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_2), not_null(i_2));
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
ATerm UnZip2_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  r_2 = t;
  o_2 :
  if(match_cons(r_2, sym__2))
    {
      s_2 = ATgetArgument(r_2, 0);
      v_2 = ATgetArgument(r_2, 1);
      p_2 :
      if(match_cons(s_2, sym__2))
        {
          t_2 = ATgetArgument(s_2, 0);
          u_2 = ATgetArgument(s_2, 1);
          q_2 :
          if(match_cons(v_2, sym__2))
            {
              w_2 = ATgetArgument(v_2, 0);
              x_2 = ATgetArgument(v_2, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_2)), not_null(t_2)), (ATerm) ATinsert(CheckATermList(not_null(x_2)), not_null(u_2)));
            }
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
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
  f_3 = t;
  e_3 :
  if(((ATgetType(f_3) == AT_LIST) && ((ATermList) f_3 != ATempty)))
    {
      g_3 = ATgetFirst((ATermList) f_3);
      h_3 = (ATerm) ATgetNext((ATermList) f_3);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_3), not_null(h_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  m_3 :
  if(((ATermList) n_3 == ATempty))
    {
      t = term_q_9;
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
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  u_3 = t;
  s_3 :
  if(match_cons(u_3, sym__2))
    {
      v_3 = ATgetArgument(u_3, 0);
      w_3 = ATgetArgument(u_3, 1);
      t_3 :
      if(match_cons(w_3, sym_Specification_1))
        {
          x_3 = ATgetArgument(w_3, 0);
          {
            t = not_null(x_3);
            {
              ATerm p_0 (ATerm t)
              {
                ATerm z_3 = NULL,a_4 = NULL;
                z_3 = t;
                r_3 :
                if(match_cons(z_3, sym_Imports_1))
                  {
                    a_4 = ATgetArgument(z_3, 0);
                    t = not_null(a_4);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = filter_1(t, p_0);
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
  ATerm r_9;
  r_9 = t;
  {
    ATerm f_4 = NULL;
    ATerm g_4 = NULL;
    g_4 = t;
    if(((f_4 != NULL) && (f_4 != g_4)))
      _fail(g_4);
    else
      f_4 = g_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(f_4));
      t = printnl_0(t);
    }
  }
  t = r_9;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm t_9;
  t_9 = t;
  {
    t = error_0(t);
    {
      t = term_u_9;
      t = exit_0(t);
    }
  }
  t = t_9;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm j_4 = NULL;
  j_4 = t;
  t = SSL_ReadFromFile(not_null(j_4));
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
  o_4 = t;
  n_4 :
  if(((ATgetType(o_4) == AT_LIST) && ((ATermList) o_4 != ATempty)))
    {
      p_4 = ATgetFirst((ATermList) o_4);
      q_4 = (ATerm) ATgetNext((ATermList) o_4);
      t = not_null(q_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym__2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      {
        t = not_null(a_5);
        {
          ATerm i_5 (ATerm t)
          {
            ATerm v_9 = t;
            int w_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
                d_5 = t;
                w_4 :
                if(((ATgetType(d_5) == AT_LIST) && ((ATermList) d_5 != ATempty)))
                  {
                    e_5 = ATgetFirst((ATermList) d_5);
                    f_5 = (ATerm) ATgetNext((ATermList) d_5);
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_4)), term_y_9), not_null(e_5));
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
                LocalPopChoice(w_9);
              }
            else
              {
                t = v_9;
                {
                  t = Tl_0(t);
                  t = i_5(t);
                }
              }
            return(t);
          }
          t = i_5(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm))
{
  ATerm m_5 = NULL,o_5 = NULL;
  ATerm z_9;
  z_9 = t;
  {
    ATerm n_5 = NULL;
    t = p_57(t);
    {
      n_5 = t;
      if(((m_5 != NULL) && (m_5 != n_5)))
        _fail(n_5);
      else
        m_5 = n_5;
    }
  }
  t = z_9;
  {
    ATerm p_5 = NULL;
    t = q_57(t);
    {
      p_5 = t;
      if(((o_5 != NULL) && (o_5 != p_5)))
        _fail(p_5);
      else
        o_5 = p_5;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_5), not_null(o_5));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm z_56 (ATerm))
{
  t = basename_0(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = term_a_10;
      t = z_56(t);
      return(t);
    }
    t = split_2(t, _id, q_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm u_5 = NULL;
  ATerm w_5 = NULL;
  u_5 = t;
  {
    ATerm f_10;
    f_10 = t;
    {
      ATerm x_5 = NULL;
      t = term_g_10;
      {
        x_5 = t;
        if(((w_5 != NULL) && (w_5 != x_5)))
          _fail(x_5);
        else
          w_5 = x_5;
      }
    }
    t = f_10;
    {
      t = SSL_open_file(not_null(u_5), not_null(w_5));
      t = SSL_close_file(not_null(u_5));
    }
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm b_6 = NULL;
  ATerm c_6 = NULL;
  t = term_a_10;
  {
    t = new_0(t);
    {
      c_6 = t;
      if(((b_6 != NULL) && (b_6 != c_6)))
        _fail(c_6);
      else
        b_6 = c_6;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_6), term_h_10);
    {
      t = conc_strings_0(t);
      {
        ATerm r_0 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, r_0);
      }
    }
  }
  return(t);
}
ATerm get_syntax_definition_1 (ATerm t, ATerm c_72 (ATerm))
{
  ATerm m_6 = NULL;
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
  m_6 = t;
  {
    ATerm r_6 = NULL;
    ATerm s_0 (ATerm t)
    {
      t = term_i_10;
      return(t);
    }
    t = debug_1(t, s_0);
    {
      t = not_null(m_6);
      {
        ATerm t_0 (ATerm t)
        {
          t = term_n_10;
          return(t);
        }
        t = guarantee_extension_1(t, t_0);
        {
          r_6 = t;
          {
            if(((q_6 != NULL) && (q_6 != r_6)))
              _fail(r_6);
            else
              q_6 = r_6;
            {
              ATerm u_0 (ATerm t)
              {
                t = term_o_10;
                return(t);
              }
              t = debug_1(t, u_0);
              {
                ATerm p_10 = t;
                int q_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_6 = NULL;
                    ATerm t_6 = NULL;
                    t = c_72(t);
                    {
                      t_6 = t;
                      if(((s_6 != NULL) && (s_6 != t_6)))
                        _fail(t_6);
                      else
                        s_6 = t_6;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_6), not_null(s_6));
                      {
                        t = find_in_path_0(t);
                        {
                          ATerm v_0 (ATerm t)
                          {
                            t = term_v_10;
                            return(t);
                          }
                          t = debug_1(t, v_0);
                        }
                      }
                    }
                    LocalPopChoice(q_10);
                  }
                else
                  {
                    t = p_10;
                    {
                      ATerm u_6 = NULL;
                      t = not_null(m_6);
                      {
                        ATerm v_6 = NULL;
                        ATerm w_0 (ATerm t)
                        {
                          t = term_w_10;
                          return(t);
                        }
                        t = guarantee_extension_1(t, w_0);
                        {
                          u_6 = t;
                          {
                            if(((o_6 != NULL) && (o_6 != u_6)))
                              _fail(u_6);
                            else
                              o_6 = u_6;
                            {
                              ATerm x_0 (ATerm t)
                              {
                                t = term_x_10;
                                return(t);
                              }
                              t = debug_1(t, x_0);
                              {
                                ATerm w_6 = NULL;
                                t = new_file_0(t);
                                {
                                  v_6 = t;
                                  {
                                    if(((p_6 != NULL) && (p_6 != v_6)))
                                      _fail(v_6);
                                    else
                                      p_6 = v_6;
                                    {
                                      ATerm z_6 = NULL;
                                      t = c_72(t);
                                      {
                                        ATerm d_1 (ATerm t)
                                        {
                                          ATerm x_6 = NULL;
                                          ATerm y_6 = NULL;
                                          y_6 = t;
                                          if(((x_6 != NULL) && (x_6 != y_6)))
                                            _fail(y_6);
                                          else
                                            x_6 = y_6;
                                          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_6)), term_y_10);
                                          return(t);
                                        }
                                        t = map_1(t, d_1);
                                        {
                                          t = concat_0(t);
                                          {
                                            z_6 = t;
                                            if(((w_6 != NULL) && (w_6 != z_6)))
                                              _fail(z_6);
                                            else
                                              w_6 = z_6;
                                          }
                                        }
                                      }
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_6)), not_null(p_6)), term_e_11), not_null(o_6)), term_b_11));
                                        {
                                          t = call_0(t);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_f_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_6)), term_e_11), not_null(p_6)), term_b_11));
                                            {
                                              t = call_0(t);
                                              {
                                                ATerm e_1 (ATerm t)
                                                {
                                                  t = term_g_11;
                                                  return(t);
                                                }
                                                t = debug_1(t, e_1);
                                                t = not_null(q_6);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
              }
            }
          }
        }
      }
    }
    t = not_null(q_6);
  }
  return(t);
}
ATerm get_parse_table_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
  m_7 = t;
  {
    ATerm r_7 = NULL;
    ATerm i_1 (ATerm t)
    {
      t = term_h_11;
      return(t);
    }
    t = debug_1(t, i_1);
    {
      t = not_null(m_7);
      {
        ATerm v_7 = NULL;
        ATerm k_1 (ATerm t)
        {
          t = term_i_11;
          return(t);
        }
        t = guarantee_extension_1(t, k_1);
        {
          r_7 = t;
          {
            if(((p_7 != NULL) && (p_7 != r_7)))
              _fail(r_7);
            else
              p_7 = r_7;
            {
              ATerm l_1 (ATerm t)
              {
                t = term_l_11;
                return(t);
              }
              t = debug_1(t, l_1);
              {
                ATerm q_11 = t;
                int r_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_7 = NULL;
                    ATerm t_7 = NULL;
                    t = b_72(t);
                    {
                      t_7 = t;
                      if(((s_7 != NULL) && (s_7 != t_7)))
                        _fail(t_7);
                      else
                        s_7 = t_7;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_7), not_null(s_7));
                      t = find_in_path_0(t);
                    }
                    LocalPopChoice(r_11);
                  }
                else
                  {
                    t = q_11;
                    {
                      ATerm u_7 = NULL;
                      t = not_null(m_7);
                      {
                        t = get_syntax_definition_1(t, b_72);
                        {
                          u_7 = t;
                          {
                            if(((o_7 != NULL) && (o_7 != u_7)))
                              _fail(u_7);
                            else
                              o_7 = u_7;
                            {
                              ATerm m_1 (ATerm t)
                              {
                                t = term_s_11;
                                return(t);
                              }
                              t = debug_1(t, m_1);
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_t_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_7)), term_u_11), not_null(p_7)), term_e_11), not_null(o_7)), term_b_11));
                                {
                                  t = call_0(t);
                                  {
                                    ATerm n_1 (ATerm t)
                                    {
                                      t = term_y_11;
                                      return(t);
                                    }
                                    t = debug_1(t, n_1);
                                    t = not_null(p_7);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                {
                  v_7 = t;
                  if(((q_7 != NULL) && (q_7 != v_7)))
                    _fail(v_7);
                  else
                    q_7 = v_7;
                }
              }
            }
          }
        }
      }
    }
    t = not_null(q_7);
  }
  return(t);
}
ATerm parse_cmod_1 (ATerm t, ATerm a_72 (ATerm))
{
  ATerm n_8 = NULL;
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  n_8 = t;
  {
    ATerm x_8 = NULL;
    ATerm p_1 (ATerm t)
    {
      t = term_z_11;
      return(t);
    }
    t = debug_1(t, p_1);
    {
      t = not_null(n_8);
      {
        t = basename_0(t);
        {
          ATerm s_1 (ATerm t)
          {
            t = term_a_12;
            return(t);
          }
          t = guarantee_extension_1(t, s_1);
          {
            ATerm e_9 = NULL;
            t = ReadFromFile_0(t);
            {
              x_8 = t;
              {
                ATerm b_12;
                b_12 = t;
                {
                  ATerm z_8 = NULL;
                  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
                  t = not_null(x_8);
                  {
                    z_8 = t;
                    {
                      t = SSL_explode_term(not_null(z_8));
                      {
                        b_9 = t;
                        f_8 :
                        if(match_cons(b_9, sym__2))
                          {
                            c_9 = ATgetArgument(b_9, 0);
                            d_9 = ATgetArgument(b_9, 1);
                            if(((p_8 != NULL) && (p_8 != c_9)))
                              _fail(c_9);
                            else
                              p_8 = c_9;
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    }
                  }
                }
                t = b_12;
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = term_c_12;
                    return(t);
                  }
                  t = debug_1(t, u_1);
                  {
                    t = not_null(p_8);
                    {
                      ATerm f_9 = NULL;
                      t = get_parse_table_1(t, a_72);
                      {
                        e_9 = t;
                        {
                          if(((r_8 != NULL) && (r_8 != e_9)))
                            _fail(e_9);
                          else
                            r_8 = e_9;
                          {
                            ATerm v_1 (ATerm t)
                            {
                              t = term_d_12;
                              return(t);
                            }
                            t = debug_1(t, v_1);
                            {
                              ATerm g_9 = NULL;
                              t = new_file_0(t);
                              {
                                f_9 = t;
                                {
                                  if(((s_8 != NULL) && (s_8 != f_9)))
                                    _fail(f_9);
                                  else
                                    s_8 = f_9;
                                  {
                                    ATerm h_9 = NULL;
                                    t = new_file_0(t);
                                    {
                                      g_9 = t;
                                      {
                                        if(((t_8 != NULL) && (t_8 != g_9)))
                                          _fail(g_9);
                                        else
                                          t_8 = g_9;
                                        {
                                          ATerm i_9 = NULL;
                                          t = new_file_0(t);
                                          {
                                            h_9 = t;
                                            {
                                              if(((u_8 != NULL) && (u_8 != h_9)))
                                                _fail(h_9);
                                              else
                                                u_8 = h_9;
                                              {
                                                ATerm j_9 = NULL;
                                                t = new_file_0(t);
                                                {
                                                  i_9 = t;
                                                  {
                                                    if(((v_8 != NULL) && (v_8 != i_9)))
                                                      _fail(i_9);
                                                    else
                                                      v_8 = i_9;
                                                    {
                                                      ATerm k_9 = NULL;
                                                      t = new_file_0(t);
                                                      {
                                                        j_9 = t;
                                                        {
                                                          if(((q_8 != NULL) && (q_8 != j_9)))
                                                            _fail(j_9);
                                                          else
                                                            q_8 = j_9;
                                                          {
                                                            ATerm w_1 (ATerm t)
                                                            {
                                                              t = term_e_12;
                                                              return(t);
                                                            }
                                                            t = debug_1(t, w_1);
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__2, term_f_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_8)), term_e_11), not_null(n_8)), term_b_11), not_null(r_8)), term_h_12), term_g_12));
                                                              {
                                                                t = call_0(t);
                                                                {
                                                                  ATerm x_1 (ATerm t)
                                                                  {
                                                                    t = term_i_12;
                                                                    return(t);
                                                                  }
                                                                  t = debug_1(t, x_1);
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym__2, term_j_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_8)), term_e_11), not_null(s_8)), term_b_11));
                                                                    {
                                                                      t = call_0(t);
                                                                      {
                                                                        ATerm y_1 (ATerm t)
                                                                        {
                                                                          t = term_k_12;
                                                                          return(t);
                                                                        }
                                                                        t = debug_1(t, y_1);
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym__2, term_l_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_8)), term_e_11), not_null(t_8)), term_b_11));
                                                                          {
                                                                            t = call_0(t);
                                                                            {
                                                                              ATerm z_1 (ATerm t)
                                                                              {
                                                                                t = term_m_12;
                                                                                return(t);
                                                                              }
                                                                              t = debug_1(t, z_1);
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym__2, term_n_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_8)), term_e_11), not_null(u_8)), term_b_11));
                                                                                {
                                                                                  t = call_0(t);
                                                                                  {
                                                                                    ATerm e_2 (ATerm t)
                                                                                    {
                                                                                      t = term_o_12;
                                                                                      return(t);
                                                                                    }
                                                                                    t = debug_1(t, e_2);
                                                                                    {
                                                                                      t = not_null(v_8);
                                                                                      {
                                                                                        t = ReadFromFile_0(t);
                                                                                        {
                                                                                          k_9 = t;
                                                                                          {
                                                                                            if(((w_8 != NULL) && (w_8 != k_9)))
                                                                                              _fail(k_9);
                                                                                            else
                                                                                              w_8 = k_9;
                                                                                            {
                                                                                              ATerm f_2 (ATerm t)
                                                                                              {
                                                                                                t = term_p_12;
                                                                                                return(t);
                                                                                              }
                                                                                              t = debug_1(t, f_2);
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = not_null(w_8);
  }
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  {
    ATerm q_12;
    q_12 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_12, (ATerm) ATinsert(CheckATermList(not_null(x_9)), term_s_12));
      t = call_0(t);
    }
    t = q_12;
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
  c_10 = t;
  b_10 :
  if(match_cons(c_10, sym__2))
    {
      d_10 = ATgetArgument(c_10, 0);
      e_10 = ATgetArgument(c_10, 1);
      t = SSL_call(not_null(d_10), not_null(e_10));
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
ATerm Hd_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
  k_10 = t;
  j_10 :
  if(((ATgetType(k_10) == AT_LIST) && ((ATermList) k_10 != ATempty)))
    {
      l_10 = ATgetFirst((ATermList) k_10);
      m_10 = (ATerm) ATgetNext((ATermList) k_10);
      t = not_null(l_10);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
  s_10 = t;
  r_10 :
  if(match_cons(s_10, sym__2))
    {
      t_10 = ATgetArgument(s_10, 0);
      u_10 = ATgetArgument(s_10, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_10), not_null(u_10));
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
ATerm rewrite_1 (ATerm t, ATerm b_49 (ATerm))
{
  ATerm a_11 = NULL;
  ATerm c_11 = NULL;
  a_11 = t;
  {
    ATerm d_11 = NULL;
    t = term_a_10;
    {
      t = b_49(t);
      {
        d_11 = t;
        if(((c_11 != NULL) && (c_11 != d_11)))
          _fail(d_11);
        else
          c_11 = d_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), not_null(a_11));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Prefix_0 (ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  o_11 :
  if(match_cons(p_11, sym__0))
    {
      ATerm t_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_11 = NULL;
          ATerm w_11 = NULL,x_11 = NULL,v_12 = NULL;
          t = term_y_12;
          {
            ATerm h_2 (ATerm t)
            {
              t = term_z_12;
              return(t);
            }
            t = rewrite_1(t, h_2);
            {
              w_11 = t;
              j_11 :
              if(match_cons(w_11, sym_Defined_2))
                {
                  x_11 = ATgetArgument(w_11, 0);
                  v_12 = ATgetArgument(w_11, 1);
                  k_11 :
                  if(match_string(x_11, "g_0"))
                    {
                      if(((v_11 != NULL) && (v_11 != v_12)))
                        _fail(v_12);
                      else
                        v_11 = v_12;
                    }
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
          t = not_null(v_11);
          LocalPopChoice(u_12);
        }
      else
        {
          t = t_12;
          {
            ATerm w_12 = NULL;
            ATerm x_12 = NULL,k_13 = NULL,l_13 = NULL;
            t = term_y_12;
            {
              ATerm j_2 (ATerm t)
              {
                t = term_z_12;
                return(t);
              }
              t = rewrite_1(t, j_2);
              {
                x_12 = t;
                m_11 :
                if(match_cons(x_12, sym_Defined_2))
                  {
                    k_13 = ATgetArgument(x_12, 0);
                    l_13 = ATgetArgument(x_12, 1);
                    n_11 :
                    if(match_string(k_13, "a_0"))
                      {
                        if(((w_12 != NULL) && (w_12 != l_13)))
                          _fail(l_13);
                        else
                          w_12 = l_13;
                      }
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
            t = not_null(w_12);
          }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  t = SSL_int_to_string(not_null(r_13));
  return(t);
}
ATerm get_pid_0 (ATerm t)
{
  t = SSL_get_pid();
  return(t);
}
ATerm parse_mod_0 (ATerm t)
{
  ATerm w_14 = NULL;
  ATerm y_14 = NULL,z_14 = NULL;
  w_14 = t;
  {
    ATerm a_15 = NULL,c_15 = NULL;
    ATerm b_15 = NULL;
    t = term_a_10;
    {
      t = get_pid_0(t);
      {
        t = int_to_string_0(t);
        {
          b_15 = t;
          if(((a_15 != NULL) && (a_15 != b_15)))
            _fail(b_15);
          else
            a_15 = b_15;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_13, not_null(a_15));
      {
        ATerm d_15 = NULL,h_15 = NULL;
        t = conc_strings_0(t);
        {
          c_15 = t;
          {
            if(((z_14 != NULL) && (z_14 != c_15)))
              _fail(c_15);
            else
              z_14 = c_15;
            {
              ATerm e_15 = NULL,g_15 = NULL;
              ATerm f_15 = NULL;
              t = term_a_10;
              {
                t = Prefix_0(t);
                {
                  f_15 = t;
                  if(((e_15 != NULL) && (e_15 != f_15)))
                    _fail(f_15);
                  else
                    e_15 = f_15;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), term_b_13);
                {
                  t = conc_strings_0(t);
                  {
                    g_15 = t;
                    if(((d_15 != NULL) && (d_15 != g_15)))
                      _fail(g_15);
                    else
                      d_15 = g_15;
                  }
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_15), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_14)), term_e_11), not_null(w_14)), term_b_11), term_c_13));
                {
                  t = call_0(t);
                  {
                    t = not_null(z_14);
                    {
                      t = ReadFromFile_0(t);
                      {
                        h_15 = t;
                        {
                          if(((y_14 != NULL) && (y_14 != h_15)))
                            _fail(h_15);
                          else
                            y_14 = h_15;
                          {
                            t = (ATerm) ATinsert(ATempty, not_null(z_14));
                            t = rm_files_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = not_null(y_14);
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_16 = NULL,f_16 = NULL;
      ATerm k_2 (ATerm t)
      {
        t = term_g_10;
        return(t);
      }
      t = guarantee_extension_1(t, k_2);
      {
        ATerm f_13;
        f_13 = t;
        {
          ATerm e_16 = NULL;
          e_16 = t;
          if(((d_16 != NULL) && (d_16 != e_16)))
            _fail(e_16);
          else
            d_16 = e_16;
        }
        t = f_13;
        {
          ATerm g_16 = NULL;
          t = z_71(t);
          {
            g_16 = t;
            if(((f_16 != NULL) && (f_16 != g_16)))
              _fail(g_16);
            else
              f_16 = g_16;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_16), not_null(f_16));
            {
              t = find_in_path_0(t);
              {
                ATerm g_13 = t;
                int h_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_16 = NULL,j_16 = NULL;
                    ATerm i_13;
                    i_13 = t;
                    {
                      ATerm i_16 = NULL;
                      i_16 = t;
                      if(((h_16 != NULL) && (h_16 != i_16)))
                        _fail(i_16);
                      else
                        h_16 = i_16;
                    }
                    t = i_13;
                    {
                      ATerm k_16 = NULL;
                      t = parse_mod_0(t);
                      {
                        k_16 = t;
                        if(((j_16 != NULL) && (j_16 != k_16)))
                          _fail(k_16);
                        else
                          j_16 = k_16;
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(j_16));
                    }
                    LocalPopChoice(h_13);
                  }
                else
                  {
                    t = g_13;
                    {
                      ATerm l_16 = NULL;
                      ATerm m_16 = NULL;
                      m_16 = t;
                      if(((l_16 != NULL) && (l_16 != m_16)))
                        _fail(m_16);
                      else
                        l_16 = m_16;
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_16)), term_j_13);
                        t = fatal_error_0(t);
                      }
                    }
                  }
              }
            }
          }
        }
      }
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_16 = NULL,p_16 = NULL;
            ATerm l_2 (ATerm t)
            {
              t = term_o_13;
              return(t);
            }
            t = guarantee_extension_1(t, l_2);
            {
              ATerm p_13;
              p_13 = t;
              {
                ATerm o_16 = NULL;
                o_16 = t;
                if(((n_16 != NULL) && (n_16 != o_16)))
                  _fail(o_16);
                else
                  n_16 = o_16;
              }
              t = p_13;
              {
                ATerm q_16 = NULL;
                t = z_71(t);
                {
                  q_16 = t;
                  if(((p_16 != NULL) && (p_16 != q_16)))
                    _fail(q_16);
                  else
                    p_16 = q_16;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), not_null(p_16));
                  {
                    t = find_in_path_0(t);
                    {
                      ATerm q_13 = t;
                      int s_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_16 = NULL,t_16 = NULL;
                          ATerm t_13;
                          t_13 = t;
                          {
                            ATerm s_16 = NULL;
                            s_16 = t;
                            if(((r_16 != NULL) && (r_16 != s_16)))
                              _fail(s_16);
                            else
                              r_16 = s_16;
                          }
                          t = t_13;
                          {
                            ATerm u_16 = NULL;
                            t = parse_cmod_1(t, z_71);
                            {
                              u_16 = t;
                              if(((t_16 != NULL) && (t_16 != u_16)))
                                _fail(u_16);
                              else
                                t_16 = u_16;
                            }
                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), not_null(t_16));
                          }
                          LocalPopChoice(s_13);
                        }
                      else
                        {
                          t = q_13;
                          {
                            ATerm v_16 = NULL;
                            ATerm w_16 = NULL;
                            w_16 = t;
                            if(((v_16 != NULL) && (v_16 != w_16)))
                              _fail(w_16);
                            else
                              v_16 = w_16;
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_16)), term_j_13);
                              t = fatal_error_0(t);
                            }
                          }
                        }
                    }
                  }
                }
              }
            }
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm u_13 = t;
              int v_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_16 = NULL,z_16 = NULL,b_17 = NULL,j_17 = NULL;
                  ATerm m_2 (ATerm t)
                  {
                    t = term_w_13;
                    return(t);
                  }
                  t = guarantee_extension_1(t, m_2);
                  {
                    ATerm x_13;
                    x_13 = t;
                    {
                      ATerm y_16 = NULL;
                      y_16 = t;
                      if(((x_16 != NULL) && (x_16 != y_16)))
                        _fail(y_16);
                      else
                        x_16 = y_16;
                    }
                    t = x_13;
                    {
                      ATerm a_17 = NULL;
                      t = z_71(t);
                      {
                        a_17 = t;
                        if(((z_16 != NULL) && (z_16 != a_17)))
                          _fail(a_17);
                        else
                          z_16 = a_17;
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_16), not_null(z_16));
                        {
                          t = find_in_path_0(t);
                          {
                            ATerm y_13;
                            y_13 = t;
                            {
                              ATerm i_17 = NULL;
                              i_17 = t;
                              if(((b_17 != NULL) && (b_17 != i_17)))
                                _fail(i_17);
                              else
                                b_17 = i_17;
                            }
                            t = y_13;
                            {
                              ATerm k_17 = NULL;
                              t = ReadFromFile_0(t);
                              {
                                k_17 = t;
                                if(((j_17 != NULL) && (j_17 != k_17)))
                                  _fail(k_17);
                                else
                                  j_17 = k_17;
                              }
                              t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), not_null(j_17));
                            }
                          }
                        }
                      }
                    }
                  }
                  LocalPopChoice(v_13);
                }
              else
                {
                  t = u_13;
                  {
                    ATerm l_17 = NULL;
                    ATerm m_17 = NULL;
                    m_17 = t;
                    if(((l_17 != NULL) && (l_17 != m_17)))
                      _fail(m_17);
                    else
                      l_17 = m_17;
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_14), not_null(l_17)), term_z_13);
                      t = fatal_error_0(t);
                    }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm n_18 = NULL;
  ATerm p_18 = NULL,t_18 = NULL;
  n_18 = t;
  {
    ATerm u_18 = NULL;
    ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
    t = not_null(n_18);
    {
      u_18 = t;
      {
        t = SSL_explode_term(not_null(u_18));
        {
          x_18 = t;
          k_18 :
          if(match_cons(x_18, sym__2))
            {
              y_18 = ATgetArgument(x_18, 0);
              z_18 = ATgetArgument(x_18, 1);
              l_18 :
              if(match_string(y_18, ""))
                {
                  m_18 :
                  if(((ATgetType(z_18) == AT_LIST) && ((ATermList) z_18 != ATempty)))
                    {
                      a_19 = ATgetFirst((ATermList) z_18);
                      b_19 = (ATerm) ATgetNext((ATermList) z_18);
                      {
                        if(((t_18 != NULL) && (t_18 != a_19)))
                          _fail(a_19);
                        else
                          t_18 = a_19;
                        if(((p_18 != NULL) && (p_18 != b_19)))
                          _fail(b_19);
                        else
                          p_18 = b_19;
                      }
                    }
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
    t = not_null(t_18);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm i_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  i_19 = t;
  g_19 :
  if(match_cons(i_19, sym__5))
    {
      s_19 = ATgetArgument(i_19, 0);
      v_19 = ATgetArgument(i_19, 1);
      y_19 = ATgetArgument(i_19, 2);
      z_19 = ATgetArgument(i_19, 3);
      a_20 = ATgetArgument(i_19, 4);
      h_19 :
      if(((ATgetType(s_19) == AT_LIST) && ((ATermList) s_19 != ATempty)))
        {
          t_19 = ATgetFirst((ATermList) s_19);
          u_19 = (ATerm) ATgetNext((ATermList) s_19);
          t = (ATerm) ATmakeAppl(sym__5, not_null(u_19), not_null(v_19), not_null(y_19), not_null(z_19), (ATerm) ATinsert(CheckATermList(not_null(a_20)), not_null(t_19)));
        }
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
ATerm conc_0 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym__2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      {
        t = not_null(l_20);
        {
          ATerm n_2 (ATerm t)
          {
            t = not_null(m_20);
            return(t);
          }
          t = at_end_1(t, n_2);
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
  ATerm c_21 = NULL,d_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  c_21 = t;
  a_21 :
  if(match_cons(c_21, sym__2))
    {
      d_21 = ATgetArgument(c_21, 0);
      j_21 = ATgetArgument(c_21, 1);
      b_21 :
      if(((ATgetType(j_21) == AT_LIST) && ((ATermList) j_21 != ATempty)))
        {
          k_21 = ATgetFirst((ATermList) j_21);
          l_21 = (ATerm) ATgetNext((ATermList) j_21);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_21)), not_null(k_21)), not_null(l_21));
        }
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
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_cons(s_21, sym__2))
    {
      t_21 = ATgetArgument(s_21, 0);
      u_21 = ATgetArgument(s_21, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_21)), not_null(t_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL;
  c_22 = t;
  z_21 :
  if(match_cons(c_22, sym__2))
    {
      d_22 = ATgetArgument(c_22, 0);
      g_22 = ATgetArgument(c_22, 1);
      a_22 :
      if(((ATgetType(d_22) == AT_LIST) && ((ATermList) d_22 != ATempty)))
        {
          e_22 = ATgetFirst((ATermList) d_22);
          f_22 = (ATerm) ATgetNext((ATermList) d_22);
          b_22 :
          if(((ATgetType(g_22) == AT_LIST) && ((ATermList) g_22 != ATempty)))
            {
              h_22 = ATgetFirst((ATermList) g_22);
              i_22 = (ATerm) ATgetNext((ATermList) g_22);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_22), not_null(h_22)), (ATerm) ATmakeAppl(sym__2, not_null(f_22), not_null(i_22)));
            }
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
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  p_22 :
  if(match_cons(s_22, sym__2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      q_22 :
      if(((ATermList) t_22 == ATempty))
        {
          r_22 :
          if(((ATermList) u_22 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm u_62 (ATerm), ATerm v_62 (ATerm), ATerm w_62 (ATerm), ATerm x_62 (ATerm))
{
  ATerm w_22 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_62(t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          t = v_62(t);
          {
            t = _2(t, x_62, w_22);
            t = w_62(t);
          }
        }
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm z_62 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, z_62);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  i_23 = t;
  g_23 :
  if(((ATgetType(i_23) == AT_LIST) && ((ATermList) i_23 != ATempty)))
    {
      j_23 = ATgetFirst((ATermList) i_23);
      m_23 = (ATerm) ATgetNext((ATermList) i_23);
      h_23 :
      if(match_cons(j_23, sym__2))
        {
          k_23 = ATgetArgument(j_23, 0);
          l_23 = ATgetArgument(j_23, 1);
          {
            ATerm q_23 = NULL,r_23 = NULL,x_23 = NULL,d_24 = NULL;
            ATerm d_14;
            d_14 = t;
            {
              ATerm s_23 = NULL;
              ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
              t = not_null(l_23);
              {
                s_23 = t;
                {
                  t = SSL_explode_term(not_null(s_23));
                  {
                    u_23 = t;
                    a_23 :
                    if(match_cons(u_23, sym__2))
                      {
                        v_23 = ATgetArgument(u_23, 0);
                        w_23 = ATgetArgument(u_23, 1);
                        {
                          if(((q_23 != NULL) && (q_23 != v_23)))
                            _fail(v_23);
                          else
                            q_23 = v_23;
                          if(((r_23 != NULL) && (r_23 != w_23)))
                            _fail(w_23);
                          else
                            r_23 = w_23;
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
            t = d_14;
            {
              ATerm e_14;
              e_14 = t;
              {
                ATerm y_23 = NULL;
                ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
                t = not_null(k_23);
                {
                  y_23 = t;
                  {
                    t = SSL_explode_term(not_null(y_23));
                    {
                      a_24 = t;
                      e_23 :
                      if(match_cons(a_24, sym__2))
                        {
                          b_24 = ATgetArgument(a_24, 0);
                          c_24 = ATgetArgument(a_24, 1);
                          {
                            if(((q_23 != NULL) && (q_23 != b_24)))
                              _fail(b_24);
                            else
                              q_23 = b_24;
                            if(((x_23 != NULL) && (x_23 != c_24)))
                              _fail(c_24);
                            else
                              x_23 = c_24;
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
              t = e_14;
              {
                ATerm e_24 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_23), not_null(r_23));
                {
                  t = zip_1(t, _id);
                  {
                    e_24 = t;
                    if(((d_24 != NULL) && (d_24 != e_24)))
                      _fail(e_24);
                    else
                      d_24 = e_24;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_24), not_null(m_23));
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
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  q_24 = t;
  o_24 :
  if(((ATgetType(q_24) == AT_LIST) && ((ATermList) q_24 != ATempty)))
    {
      r_24 = ATgetFirst((ATermList) q_24);
      u_24 = (ATerm) ATgetNext((ATermList) q_24);
      p_24 :
      if(match_cons(r_24, sym__2))
        {
          s_24 = ATgetArgument(r_24, 0);
          t_24 = ATgetArgument(r_24, 1);
          {
            ATerm w_24 = NULL;
            if(((s_24 != NULL) && (s_24 != t_24)))
              _fail(t_24);
            else
              s_24 = t_24;
            {
              if(((w_24 != NULL) && (w_24 != u_24)))
                _fail(u_24);
              else
                w_24 = u_24;
              t = not_null(w_24);
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
ATerm HdMember_1 (ATerm t, ATerm f_60 (ATerm))
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  a_25 :
  if(((ATgetType(b_25) == AT_LIST) && ((ATermList) b_25 != ATempty)))
    {
      c_25 = ATgetFirst((ATermList) b_25);
      d_25 = (ATerm) ATgetNext((ATermList) b_25);
      {
        t = f_60(t);
        {
          ATerm y_2 (ATerm t)
          {
            ATerm g_25 = NULL;
            g_25 = t;
            if(((c_25 != NULL) && (c_25 != g_25)))
              _fail(g_25);
            else
              c_25 = g_25;
            return(t);
          }
          t = fetch_1(t, y_2);
        }
        t = not_null(d_25);
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
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
      m_25 = t;
      k_25 :
      if(match_cons(m_25, sym__2))
        {
          n_25 = ATgetArgument(m_25, 0);
          o_25 = ATgetArgument(m_25, 1);
          {
            t = not_null(n_25);
            {
              ATerm w_25 (ATerm t)
              {
                ATerm h_14 = t;
                int i_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(i_14);
                  }
                else
                  {
                    t = h_14;
                    {
                      ATerm j_14 = t;
                      int k_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_2 (ATerm t)
                          {
                            t = not_null(o_25);
                            return(t);
                          }
                          t = HdMember_1(t, z_2);
                          t = w_25(t);
                          LocalPopChoice(k_14);
                        }
                      else
                        {
                          t = j_14;
                          t = Cons_2(t, _id, w_25);
                        }
                    }
                  }
                return(t);
              }
              t = w_25(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      {
        ATerm a_3 (ATerm t)
        {
          ATerm t_25 = NULL;
          t_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(t_25));
          return(t);
        }
        ATerm b_3 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm c_3 (ATerm t)
        {
          ATerm l_14 = t;
          int m_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_3 (ATerm t)
              {
                ATerm n_14 = t;
                int o_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(o_14);
                  }
                else
                  {
                    t = n_14;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, d_3);
              LocalPopChoice(m_14);
            }
          else
            {
              t = l_14;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, a_3, b_3, c_3);
      }
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm g_49 (ATerm), ATerm h_49 (ATerm), ATerm i_49 (ATerm))
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  h_26 = t;
  f_26 :
  if(match_cons(h_26, sym__5))
    {
      i_26 = ATgetArgument(h_26, 0);
      l_26 = ATgetArgument(h_26, 1);
      m_26 = ATgetArgument(h_26, 2);
      n_26 = ATgetArgument(h_26, 3);
      o_26 = ATgetArgument(h_26, 4);
      g_26 :
      if(((ATgetType(i_26) == AT_LIST) && ((ATermList) i_26 != ATempty)))
        {
          j_26 = ATgetFirst((ATermList) i_26);
          k_26 = (ATerm) ATgetNext((ATermList) i_26);
          {
            ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,b_27 = NULL,d_27 = NULL,f_27 = NULL;
            ATerm p_14;
            p_14 = t;
            {
              ATerm y_26 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_26), not_null(m_26));
              {
                ATerm z_26 = NULL;
                t = g_49(t);
                {
                  y_26 = t;
                  {
                    if(((v_26 != NULL) && (v_26 != y_26)))
                      _fail(y_26);
                    else
                      v_26 = y_26;
                    {
                      t = not_null(v_26);
                      {
                        ATerm a_27 = NULL;
                        t = h_49(t);
                        {
                          z_26 = t;
                          {
                            if(((w_26 != NULL) && (w_26 != z_26)))
                              _fail(z_26);
                            else
                              w_26 = z_26;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_26), not_null(l_26));
                              {
                                t = diff_0(t);
                                {
                                  a_27 = t;
                                  if(((x_26 != NULL) && (x_26 != a_27)))
                                    _fail(a_27);
                                  else
                                    x_26 = a_27;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = p_14;
            {
              ATerm q_14;
              q_14 = t;
              {
                ATerm c_27 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_26), not_null(k_26));
                {
                  t = conc_0(t);
                  {
                    c_27 = t;
                    if(((b_27 != NULL) && (b_27 != c_27)))
                      _fail(c_27);
                    else
                      b_27 = c_27;
                  }
                }
              }
              t = q_14;
              {
                ATerm r_14;
                r_14 = t;
                {
                  ATerm e_27 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_26), not_null(l_26));
                  {
                    t = conc_0(t);
                    {
                      e_27 = t;
                      if(((d_27 != NULL) && (d_27 != e_27)))
                        _fail(e_27);
                      else
                        d_27 = e_27;
                    }
                  }
                }
                t = r_14;
                {
                  ATerm g_27 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(j_26), not_null(v_26), not_null(n_26));
                  {
                    t = i_49(t);
                    {
                      g_27 = t;
                      if(((f_27 != NULL) && (f_27 != g_27)))
                        _fail(g_27);
                      else
                        f_27 = g_27;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(b_27), not_null(d_27), not_null(m_26), not_null(f_27), not_null(o_26));
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
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  r_27 = t;
  p_27 :
  if(match_cons(r_27, sym__5))
    {
      s_27 = ATgetArgument(r_27, 0);
      t_27 = ATgetArgument(r_27, 1);
      u_27 = ATgetArgument(r_27, 2);
      v_27 = ATgetArgument(r_27, 3);
      w_27 = ATgetArgument(r_27, 4);
      q_27 :
      if(((ATermList) s_27 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_27), not_null(w_27));
        }
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
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym__3))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      j_28 = ATgetArgument(g_28, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(h_28), not_null(h_28), not_null(i_28), not_null(j_28), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm d_71 (ATerm), ATerm e_71 (ATerm))
{
  ATerm o_28 (ATerm t)
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_71(t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        {
          t = e_71(t);
          t = o_28(t);
        }
      }
    return(t);
  }
  t = o_28(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm i_71 (ATerm))
{
  t = g_71(t);
  t = while_not_2(t, h_71, i_71);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm m_49 (ATerm), ATerm n_49 (ATerm), ATerm o_49 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, m_49, n_49, o_49);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, i_3);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm b_50 (ATerm), ATerm c_50 (ATerm), ATerm d_50 (ATerm))
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  t = graph_nodes_undef_roots_3(t, b_50, c_50, d_50);
  {
    r_28 = t;
    q_28 :
    if(match_cons(r_28, sym__2))
      {
        s_28 = ATgetArgument(r_28, 0);
        t_28 = ATgetArgument(r_28, 1);
        t = not_null(s_28);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm pack_stratego_1 (ATerm t, ATerm y_71 (ATerm))
{
  ATerm b_29 = NULL;
  b_29 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(b_29)), term_i_15), term_x_14), term_a_10, (ATerm) ATempty);
    {
      ATerm j_3 (ATerm t)
      {
        t = Fst_0(t);
        {
          ATerm l_3 (ATerm t)
          {
            ATerm d_29 = NULL;
            ATerm e_29 = NULL;
            t = term_a_10;
            {
              t = y_71(t);
              {
                e_29 = t;
                if(((d_29 != NULL) && (d_29 != e_29)))
                  _fail(e_29);
                else
                  d_29 = e_29;
              }
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(d_29)), term_j_15);
            return(t);
          }
          t = get_module_1(t, l_3);
        }
        return(t);
      }
      ATerm k_3 (ATerm t)
      {
        ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
        f_29 = t;
        a_29 :
        if(match_cons(f_29, sym__3))
          {
            g_29 = ATgetArgument(f_29, 0);
            h_29 = ATgetArgument(f_29, 1);
            i_29 = ATgetArgument(f_29, 2);
            t = (ATerm) ATinsert(CheckATermList(not_null(i_29)), not_null(h_29));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = graph_nodes_roots_3(t, j_3, get_stratego_imports_0, k_3);
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
  ATerm q_29 = NULL;
  q_29 = t;
  t = SSL_exit(not_null(q_29));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym__2))
    {
      w_29 = ATgetArgument(v_29, 0);
      x_29 = ATgetArgument(v_29, 1);
      {
        ATerm k_15;
        k_15 = t;
        t = SSL_printnl(not_null(w_29), not_null(x_29));
        t = k_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm c_30 = NULL;
  c_30 = t;
  t = SSL_close_file(not_null(c_30));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  k_30 = t;
  j_30 :
  if(((ATgetType(k_30) == AT_LIST) && ((ATermList) k_30 != ATempty)))
    {
      l_30 = ATgetFirst((ATermList) k_30);
      m_30 = (ATerm) ATgetNext((ATermList) k_30);
      {
        ATerm r_30 = NULL;
        ATerm s_30 = NULL;
        t = term_a_10;
        {
          t = x_65(t);
          {
            s_30 = t;
            if(((r_30 != NULL) && (r_30 != s_30)))
              _fail(s_30);
            else
              r_30 = s_30;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_30)), not_null(l_30)), not_null(r_30));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      {
        ATerm o_3 (ATerm t)
        {
          ATerm n_15 = t;
          int o_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_15);
            }
          else
            {
              t = n_15;
              {
                t = Cons_2(t, _id, o_3);
                t = Sep_1(t, y_65);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, o_3);
      }
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm p_15;
  p_15 = t;
  {
    ATerm y_30 = NULL,a_31 = NULL;
    ATerm q_15;
    q_15 = t;
    {
      ATerm z_30 = NULL;
      t = s_55(t);
      {
        z_30 = t;
        if(((y_30 != NULL) && (y_30 != z_30)))
          _fail(z_30);
        else
          y_30 = z_30;
      }
    }
    t = q_15;
    {
      ATerm b_31 = NULL;
      b_31 = t;
      if(((a_31 != NULL) && (a_31 != b_31)))
        _fail(b_31);
      else
        a_31 = b_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_31)), not_null(y_30)));
        t = printnl_0(t);
      }
    }
  }
  t = p_15;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm z_55 (ATerm))
{
  ATerm r_15;
  r_15 = t;
  {
    t = z_55(t);
    {
      ATerm p_3 (ATerm t)
      {
        t = term_s_15;
        return(t);
      }
      t = debug_1(t, p_3);
    }
  }
  t = r_15;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
      k_31 = t;
      f_31 :
      if(match_cons(k_31, sym__2))
        {
          l_31 = ATgetArgument(k_31, 0);
          m_31 = ATgetArgument(k_31, 1);
          {
            if(((j_31 != NULL) && (j_31 != l_31)))
              _fail(l_31);
            else
              j_31 = l_31;
            {
              if(((i_31 != NULL) && (i_31 != m_31)))
                _fail(m_31);
              else
                i_31 = m_31;
              t = SSL_open_file(not_null(j_31), not_null(i_31));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
      {
        ATerm n_31 = NULL;
        ATerm o_31 = NULL;
        ATerm q_3 (ATerm t)
        {
          t = term_v_15;
          return(t);
        }
        t = obsolete_1(t, q_3);
        {
          n_31 = t;
          {
            if(((j_31 != NULL) && (j_31 != n_31)))
              _fail(n_31);
            else
              j_31 = n_31;
            {
              ATerm w_15;
              w_15 = t;
              {
                ATerm p_31 = NULL;
                t = term_x_15;
                {
                  p_31 = t;
                  if(((o_31 != NULL) && (o_31 != p_31)))
                    _fail(p_31);
                  else
                    o_31 = p_31;
                }
              }
              t = w_15;
              t = SSL_open_file(not_null(j_31), not_null(o_31));
            }
          }
        }
      }
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  u_31 :
  if(match_cons(v_31, sym__2))
    {
      w_31 = ATgetArgument(v_31, 0);
      x_31 = ATgetArgument(v_31, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_31)), term_j_15), not_null(w_31));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_dep_file_1 (ATerm t, ATerm f_49 (ATerm))
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  s_32 :
  if(match_cons(t_32, sym__2))
    {
      u_32 = ATgetArgument(t_32, 0);
      v_32 = ATgetArgument(t_32, 1);
      {
        ATerm y_32 = NULL,z_32 = NULL;
        ATerm a_33 = NULL;
        t = not_null(u_32);
        {
          ATerm b_33 = NULL,d_33 = NULL;
          t = f_49(t);
          {
            a_33 = t;
            {
              if(((y_32 != NULL) && (y_32 != a_33)))
                _fail(a_33);
              else
                y_32 = a_33;
              {
                ATerm c_33 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_32), term_y_15);
                {
                  t = add_extension_0(t);
                  {
                    c_33 = t;
                    if(((b_33 != NULL) && (b_33 != c_33)))
                      _fail(c_33);
                    else
                      b_33 = c_33;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_33), term_x_15);
                  {
                    ATerm e_33 = NULL;
                    t = open_file_0(t);
                    {
                      d_33 = t;
                      {
                        if(((z_32 != NULL) && (z_32 != d_33)))
                          _fail(d_33);
                        else
                          z_32 = d_33;
                        {
                          ATerm f_33 = NULL;
                          t = (ATerm) ATinsert(CheckATermList(not_null(v_32)), term_z_15);
                          {
                            ATerm y_3 (ATerm t)
                            {
                              t = term_a_16;
                              return(t);
                            }
                            t = separate_by_1(t, y_3);
                            {
                              f_33 = t;
                              if(((e_33 != NULL) && (e_33 != f_33)))
                                _fail(f_33);
                              else
                                e_33 = f_33;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(z_32), (ATerm) ATinsert(CheckATermList(not_null(e_33)), not_null(y_32)));
                            {
                              t = printnl_0(t);
                              {
                                t = not_null(z_32);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_32), not_null(v_32));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm p_64 (ATerm))
{
  ATerm l_33 (ATerm t)
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_64, _id);
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = Cons_2(t, _id, l_33);
      }
    return(t);
  }
  t = l_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_54 (ATerm))
{
  t = fetch_1(t, k_54);
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_71 (ATerm))
{
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_71(t);
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  n_33 :
  if(match_cons(o_33, sym__2))
    {
      p_33 = ATgetArgument(o_33, 0);
      q_33 = ATgetArgument(o_33, 1);
      t = SSL_WriteToTextFile(not_null(p_33), not_null(q_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  v_33 :
  if(match_cons(w_33, sym__2))
    {
      x_33 = ATgetArgument(w_33, 0);
      y_33 = ATgetArgument(w_33, 1);
      t = SSL_WriteToBinaryFile(not_null(x_33), not_null(y_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm h_58 (ATerm))
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_4 (ATerm t)
            {
              t = filter_1(t, h_58);
              return(t);
            }
            t = Cons_2(t, h_58, b_4);
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            {
              ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
              e_34 = t;
              d_34 :
              if(((ATgetType(e_34) == AT_LIST) && ((ATermList) e_34 != ATempty)))
                {
                  f_34 = ATgetFirst((ATermList) e_34);
                  g_34 = (ATerm) ATgetNext((ATermList) e_34);
                  {
                    t = not_null(g_34);
                    t = filter_1(t, h_58);
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
ATerm list_1 (ATerm t, ATerm j_64 (ATerm))
{
  ATerm j_34 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = Cons_2(t, j_64, j_34);
      }
    return(t);
  }
  t = j_34(t);
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm m_34 = NULL;
  ATerm c_4 (ATerm t)
  {
    ATerm n_34 = NULL,o_34 = NULL;
    n_34 = t;
    l_34 :
    if(match_cons(n_34, sym_Program_1))
      {
        o_34 = ATgetArgument(n_34, 0);
        if(((m_34 != NULL) && (m_34 != o_34)))
          _fail(o_34);
        else
          m_34 = o_34;
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = option_defined_1(t, c_4);
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_17), term_r_17), term_q_17), not_null(m_34)), term_p_17));
    {
      t = printnl_0(t);
      {
        t = term_u_9;
        t = exit_0(t);
      }
    }
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  q_34 :
  if(!(match_cons(r_34, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_55 (ATerm))
{
  ATerm d_4 (ATerm t)
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
  t = option_defined_1(t, d_4);
  t = f_55(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm f_54 (ATerm), ATerm g_54 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    t = term_x_17;
    return(t);
  }
  t = ArgOption_3(t, f_54, g_54, e_4);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm u_53 (ATerm), ATerm v_53 (ATerm))
{
  ATerm h_4 (ATerm t)
  {
    t = term_x_17;
    return(t);
  }
  t = Option_3(t, u_53, v_53, h_4);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  b_35 = t;
  z_34 :
  if(match_string(b_35, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(b_35) == AT_LIST) && ((ATermList) b_35 != ATempty)))
        {
          c_35 = ATgetFirst((ATermList) b_35);
          d_35 = (ATerm) ATgetNext((ATermList) b_35);
          a_35 :
          if(((ATgetType(d_35) == AT_LIST) && ((ATermList) d_35 != ATempty)))
            {
              e_35 = ATgetFirst((ATermList) d_35);
              f_35 = (ATerm) ATgetNext((ATermList) d_35);
              {
                ATerm m_35 = NULL;
                ATerm y_17;
                y_17 = t;
                {
                  t = not_null(c_35);
                  t = k_0(t);
                }
                t = y_17;
                {
                  ATerm n_35 = NULL;
                  t = not_null(e_35);
                  {
                    t = l_0(t);
                    {
                      n_35 = t;
                      if(((m_35 != NULL) && (m_35 != n_35)))
                        _fail(n_35);
                      else
                        m_35 = n_35;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_35)), not_null(m_35));
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
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_4 (ATerm t)
      {
        ATerm i_36 = NULL;
        i_36 = t;
        x_35 :
        if(!(match_string(i_36, "-S")))
          {
            if(!(match_string(i_36, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_b_18;
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_c_18;
        return(t);
      }
      t = Option_3(t, i_4, k_4, l_4);
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              ATerm j_36 = NULL;
              j_36 = t;
              y_35 :
              if(!(match_string(j_36, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm r_4 (ATerm t)
            {
              t = term_f_18;
              return(t);
            }
            ATerm s_4 (ATerm t)
            {
              t = term_g_18;
              return(t);
            }
            t = Option_3(t, m_4, r_4, s_4);
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            {
              ATerm h_18 = t;
              int i_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_4 (ATerm t)
                  {
                    ATerm k_36 = NULL;
                    k_36 = t;
                    z_35 :
                    if(!(match_string(k_36, "-v")))
                      {
                        if(!(match_string(k_36, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm u_4 (ATerm t)
                  {
                    t = term_j_18;
                    return(t);
                  }
                  ATerm v_4 (ATerm t)
                  {
                    t = term_o_18;
                    return(t);
                  }
                  t = Option_3(t, t_4, u_4, v_4);
                  LocalPopChoice(i_18);
                }
              else
                {
                  t = h_18;
                  {
                    ATerm q_18 = t;
                    int r_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_5 (ATerm t)
                        {
                          ATerm p_37 = NULL;
                          p_37 = t;
                          a_36 :
                          if(!(match_string(p_37, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm c_5 (ATerm t)
                        {
                          ATerm s_37 = NULL;
                          ATerm t_37 = NULL;
                          t_37 = t;
                          if(((s_37 != NULL) && (s_37 != t_37)))
                            _fail(t_37);
                          else
                            s_37 = t_37;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(s_37));
                          return(t);
                        }
                        ATerm g_5 (ATerm t)
                        {
                          t = term_s_18;
                          return(t);
                        }
                        t = ArgOption_3(t, b_5, c_5, g_5);
                        LocalPopChoice(r_18);
                      }
                    else
                      {
                        t = q_18;
                        {
                          ATerm v_18 = t;
                          int w_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_5 (ATerm t)
                              {
                                ATerm u_37 = NULL;
                                u_37 = t;
                                c_36 :
                                if(!(match_string(u_37, "-i")))
                                  {
                                    if(!(match_string(u_37, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm j_5 (ATerm t)
                              {
                                ATerm v_37 = NULL;
                                ATerm w_37 = NULL;
                                w_37 = t;
                                if(((v_37 != NULL) && (v_37 != w_37)))
                                  _fail(w_37);
                                else
                                  v_37 = w_37;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_37));
                                return(t);
                              }
                              ATerm k_5 (ATerm t)
                              {
                                t = term_c_19;
                                return(t);
                              }
                              t = ArgOption_3(t, h_5, j_5, k_5);
                              LocalPopChoice(w_18);
                            }
                          else
                            {
                              t = v_18;
                              {
                                ATerm d_19 = t;
                                int e_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_5 (ATerm t)
                                    {
                                      ATerm x_37 = NULL;
                                      x_37 = t;
                                      e_36 :
                                      if(!(match_string(x_37, "-o")))
                                        {
                                          if(!(match_string(x_37, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm q_5 (ATerm t)
                                    {
                                      ATerm y_37 = NULL;
                                      ATerm z_37 = NULL;
                                      z_37 = t;
                                      if(((y_37 != NULL) && (y_37 != z_37)))
                                        _fail(z_37);
                                      else
                                        y_37 = z_37;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_37));
                                      return(t);
                                    }
                                    ATerm r_5 (ATerm t)
                                    {
                                      t = term_f_19;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, l_5, q_5, r_5);
                                    LocalPopChoice(e_19);
                                  }
                                else
                                  {
                                    t = d_19;
                                    {
                                      ATerm j_19 = t;
                                      int k_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_5 (ATerm t)
                                          {
                                            ATerm a_38 = NULL;
                                            a_38 = t;
                                            g_36 :
                                            if(!(match_string(a_38, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm t_5 (ATerm t)
                                          {
                                            t = term_l_19;
                                            return(t);
                                          }
                                          ATerm v_5 (ATerm t)
                                          {
                                            t = term_m_19;
                                            return(t);
                                          }
                                          t = Option_3(t, s_5, t_5, v_5);
                                          LocalPopChoice(k_19);
                                        }
                                      else
                                        {
                                          t = j_19;
                                          {
                                            ATerm y_5 (ATerm t)
                                            {
                                              ATerm b_38 = NULL;
                                              b_38 = t;
                                              h_36 :
                                              if(!(match_string(b_38, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm z_5 (ATerm t)
                                            {
                                              t = term_n_19;
                                              return(t);
                                            }
                                            ATerm a_6 (ATerm t)
                                            {
                                              t = term_o_19;
                                              return(t);
                                            }
                                            t = Option_3(t, y_5, z_5, a_6);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm g_38 = NULL;
  g_38 = t;
  t = SSL_table_destroy(not_null(g_38));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm j_38 (ATerm t)
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_38);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        {
          t = Nil_0(t);
          t = v_64(t);
        }
      }
    return(t);
  }
  t = j_38(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_19);
    }
  else
    {
      t = r_19;
      {
        ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
        m_38 = t;
        l_38 :
        if(((ATgetType(m_38) == AT_LIST) && ((ATermList) m_38 != ATempty)))
          {
            n_38 = ATgetFirst((ATermList) m_38);
            o_38 = (ATerm) ATgetNext((ATermList) m_38);
            {
              t = not_null(n_38);
              {
                ATerm e_6 (ATerm t)
                {
                  t = not_null(o_38);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_6);
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
ATerm long_description_1 (ATerm t, ATerm m_53 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_64 (ATerm))
{
  ATerm t_38 (ATerm t)
  {
    ATerm x_19 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = x_19;
        t = Cons_2(t, h_64, t_38);
      }
    return(t);
  }
  t = t_38(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
  c_39 = t;
  z_38 :
  if(((ATgetType(c_39) == AT_LIST) && ((ATermList) c_39 != ATempty)))
    {
      a_39 = ATgetFirst((ATermList) c_39);
      b_39 = (ATerm) ATgetNext((ATermList) c_39);
      {
        ATerm f_39 = NULL;
        t = not_null(b_39);
        {
          ATerm c_20;
          c_20 = t;
          {
            ATerm g_39 = NULL,i_39 = NULL,k_39 = NULL;
            ATerm d_20;
            d_20 = t;
            {
              ATerm h_39 = NULL;
              t = j_0(t);
              {
                h_39 = t;
                if(((g_39 != NULL) && (g_39 != h_39)))
                  _fail(h_39);
                else
                  g_39 = h_39;
              }
            }
            t = d_20;
            {
              ATerm j_39 = NULL;
              t = not_null(a_39);
              {
                t = i_0(t);
                {
                  j_39 = t;
                  if(((i_39 != NULL) && (i_39 != j_39)))
                    _fail(j_39);
                  else
                    i_39 = j_39;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_39)), not_null(i_39));
                {
                  k_39 = t;
                  if(((f_39 != NULL) && (f_39 != k_39)))
                    _fail(k_39);
                  else
                    f_39 = k_39;
                }
              }
            }
          }
          t = c_20;
          {
            ATerm f_6 (ATerm t)
            {
              t = not_null(f_39);
              return(t);
            }
            t = reverse_acc_2(t, i_0, f_6);
          }
        }
      }
    }
  else
    {
      if(((ATermList) c_39 == ATempty))
        {
          {
            t = term_a_10;
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
  ATerm g_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_53 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_48 (ATerm))
{
  ATerm t_39 = NULL,u_39 = NULL;
  t_39 = t;
  s_39 :
  if(match_cons(t_39, sym_Program_1))
    {
      u_39 = ATgetArgument(t_39, 0);
      {
        ATerm w_39 = NULL;
        t = not_null(u_39);
        {
          t = e_48(t);
          {
            w_39 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_39));
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
  ATerm e_40 = NULL;
  ATerm h_6 (ATerm t)
  {
    ATerm i_6 (ATerm t)
    {
      ATerm f_40 = NULL;
      f_40 = t;
      if(((e_40 != NULL) && (e_40 != f_40)))
        _fail(f_40);
      else
        e_40 = f_40;
      return(t);
    }
    t = Program_1(t, i_6);
    return(t);
  }
  t = option_defined_1(t, h_6);
  {
    ATerm j_6 (ATerm t)
    {
      ATerm g_40 = NULL;
      ATerm h_40 = NULL;
      t = term_a_10;
      {
        ATerm k_6 (ATerm t)
        {
          t = not_null(e_40);
          return(t);
        }
        t = short_description_1(t, k_6);
        {
          t = concat_strings_0(t);
          {
            h_40 = t;
            if(((g_40 != NULL) && (g_40 != h_40)))
              _fail(h_40);
            else
              g_40 = h_40;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATempty, not_null(g_40)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, j_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATempty, term_e_20));
      {
        t = printnl_0(t);
        {
          t = term_h_20;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_6 (ATerm t)
                {
                  ATerm i_40 = NULL;
                  i_40 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_40)), term_i_20));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_6);
                {
                  ATerm n_6 (ATerm t)
                  {
                    ATerm k_40 = NULL;
                    ATerm l_40 = NULL;
                    t = term_a_10;
                    {
                      ATerm a_7 (ATerm t)
                      {
                        t = not_null(e_40);
                        return(t);
                      }
                      t = long_description_1(t, a_7);
                      {
                        t = concat_strings_0(t);
                        {
                          l_40 = t;
                          if(((k_40 != NULL) && (k_40 != l_40)))
                            _fail(l_40);
                          else
                            k_40 = l_40;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_40)), term_n_20));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_6);
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
ATerm Undefined_1 (ATerm t, ATerm f_48 (ATerm))
{
  ATerm t_40 = NULL,u_40 = NULL;
  t_40 = t;
  s_40 :
  if(match_cons(t_40, sym_Undefined_1))
    {
      u_40 = ATgetArgument(t_40, 0);
      {
        ATerm w_40 = NULL;
        t = not_null(u_40);
        {
          t = f_48(t);
          {
            w_40 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_40));
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
  ATerm b_41 = NULL;
  b_41 = t;
  a_41 :
  if(!(match_cons(b_41, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_53 (ATerm))
{
  ATerm d_41 = NULL;
  ATerm e_41 = NULL;
  t = term_a_10;
  {
    t = q_53(t);
    {
      e_41 = t;
      if(((d_41 != NULL) && (d_41 != e_41)))
        _fail(e_41);
      else
        d_41 = e_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_20, term_g_20, not_null(d_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  j_41 :
  if(match_string(k_41, "register-usage-info"))
    {
      t = register_usage_1(t, h_0);
    }
  else
    {
      if(((ATgetType(k_41) == AT_LIST) && ((ATermList) k_41 != ATempty)))
        {
          l_41 = ATgetFirst((ATermList) k_41);
          m_41 = (ATerm) ATgetNext((ATermList) k_41);
          {
            ATerm p_41 = NULL;
            ATerm o_20;
            o_20 = t;
            {
              t = not_null(l_41);
              t = c_0(t);
            }
            t = o_20;
            {
              ATerm q_41 = NULL;
              t = term_a_10;
              {
                t = f_0(t);
                {
                  q_41 = t;
                  if(((p_41 != NULL) && (p_41 != q_41)))
                    _fail(q_41);
                  else
                    p_41 = q_41;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_41)), not_null(p_41));
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
  ATerm b_7 (ATerm t)
  {
    ATerm v_41 = NULL;
    v_41 = t;
    u_41 :
    if(!(match_string(v_41, "--help")))
      {
        if(!(match_string(v_41, "-h")))
          {
            if(!(match_string(v_41, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    t = term_p_20;
    return(t);
  }
  ATerm d_7 (ATerm t)
  {
    t = term_q_20;
    return(t);
  }
  t = Option_3(t, b_7, c_7, d_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  x_41 :
  if(((ATgetType(y_41) == AT_LIST) && ((ATermList) y_41 != ATempty)))
    {
      z_41 = ATgetFirst((ATermList) y_41);
      a_42 = (ATerm) ATgetNext((ATermList) y_41);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_41)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm f_42 = NULL;
  f_42 = t;
  e_42 :
  if(((ATermList) f_42 == ATempty))
    {
      {
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_53 (ATerm))
{
  ATerm r_20;
  r_20 = t;
  {
    ATerm e_7 (ATerm t)
    {
      t = term_s_20;
      t = o_53(t);
      return(t);
    }
    t = try_1(t, e_7);
  }
  t = r_20;
  {
    ATerm f_7 (ATerm t)
    {
      ATerm h_42 = NULL;
      h_42 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_42));
      return(t);
    }
    ATerm g_7 (ATerm t)
    {
      ATerm t_20 = t;
      int u_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_20 = t;
          int w_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_20);
            }
          else
            {
              t = v_20;
              {
                t = o_53(t);
                t = Cons_2(t, _id, g_7);
              }
            }
          LocalPopChoice(u_20);
        }
      else
        {
          t = t_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_7, g_7);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_53 (ATerm))
{
  ATerm m_42 = NULL;
  ATerm x_20;
  x_20 = t;
  {
    t = term_y_20;
    t = table_put_0(t);
  }
  t = x_20;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm z_20 = t;
      int e_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_53(t);
          LocalPopChoice(e_21);
        }
      else
        {
          t = z_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, h_7);
    {
      ATerm i_7 (ATerm t)
      {
        ATerm f_21 = t;
        int g_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_h_21;
                t = exit_0(t);
              }
            }
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            {
              ATerm j_7 (ATerm t)
              {
                ATerm k_7 (ATerm t)
                {
                  ATerm n_42 = NULL;
                  n_42 = t;
                  if(((m_42 != NULL) && (m_42 != n_42)))
                    _fail(n_42);
                  else
                    m_42 = n_42;
                  return(t);
                }
                t = Undefined_1(t, k_7);
                return(t);
              }
              t = option_defined_1(t, j_7);
              {
                ATerm i_21;
                i_21 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_42)), term_m_21));
                  t = printnl_0(t);
                }
                t = i_21;
                {
                  t = system_usage_0(t);
                  {
                    t = term_u_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, i_7);
      {
        ATerm n_21;
        n_21 = t;
        {
          t = term_f_20;
          t = table_destroy_0(t);
        }
        t = n_21;
      }
    }
  }
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        {
          ATerm q_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_7 (ATerm t)
              {
                ATerm w_42 = NULL;
                w_42 = t;
                p_42 :
                if(!(match_string(w_42, "-I")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_7 (ATerm t)
              {
                ATerm x_42 = NULL;
                x_42 = t;
                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(x_42));
                return(t);
              }
              t = ArgOption_2(t, n_7, w_7);
              LocalPopChoice(v_21);
            }
          else
            {
              t = q_21;
              {
                ATerm w_21 = t;
                int x_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_7 (ATerm t)
                    {
                      ATerm z_42 = NULL;
                      z_42 = t;
                      r_42 :
                      if(!(match_string(z_42, "-nodep")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm y_7 (ATerm t)
                    {
                      t = term_y_21;
                      return(t);
                    }
                    t = Option_2(t, x_7, y_7);
                    LocalPopChoice(x_21);
                  }
                else
                  {
                    t = w_21;
                    {
                      ATerm j_22 = t;
                      int k_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_7 (ATerm t)
                          {
                            ATerm a_43 = NULL;
                            a_43 = t;
                            s_42 :
                            if(!(match_string(a_43, "-dep")))
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          ATerm a_8 (ATerm t)
                          {
                            ATerm b_43 = NULL;
                            b_43 = t;
                            t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(b_43));
                            return(t);
                          }
                          t = ArgOption_2(t, z_7, a_8);
                          LocalPopChoice(k_22);
                        }
                      else
                        {
                          t = j_22;
                          {
                            ATerm b_8 (ATerm t)
                            {
                              ATerm d_43 = NULL;
                              d_43 = t;
                              u_42 :
                              if(!(match_string(d_43, "--prefix")))
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            ATerm c_8 (ATerm t)
                            {
                              ATerm e_43 = NULL;
                              e_43 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_y_12, (ATerm) ATmakeAppl(sym_Defined_2, term_l_22, not_null(e_43)));
                                {
                                  ATerm d_8 (ATerm t)
                                  {
                                    t = term_z_12;
                                    return(t);
                                  }
                                  t = assert_1(t, d_8);
                                }
                                t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(e_43));
                              }
                              return(t);
                            }
                            t = ArgOption_2(t, b_8, c_8);
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
  t = parse_options_1(t, l_7);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm d_49 (ATerm, ATerm (ATerm)), ATerm e_49 (ATerm))
{
  ATerm a_44 = NULL;
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,l_44 = NULL;
  t = pack_module_options_0(t);
  {
    a_44 = t;
    {
      ATerm e_8 (ATerm t)
      {
        t = need_help_1(t, pack_modules_usage_0);
        return(t);
      }
      t = try_1(t, e_8);
      {
        ATerm g_8 (ATerm t)
        {
          ATerm h_8 (ATerm t)
          {
            ATerm g_44 = NULL,h_44 = NULL;
            g_44 = t;
            o_43 :
            if(match_cons(g_44, sym_Program_1))
              {
                h_44 = ATgetArgument(g_44, 0);
                if(((c_44 != NULL) && (c_44 != h_44)))
                  _fail(h_44);
                else
                  c_44 = h_44;
              }
            else
              {
                if(match_cons(g_44, sym_Input_1))
                  {
                    h_44 = ATgetArgument(g_44, 0);
                    if(((d_44 != NULL) && (d_44 != h_44)))
                      _fail(h_44);
                    else
                      d_44 = h_44;
                  }
                else
                  {
                    if(match_cons(g_44, sym_Output_1))
                      {
                        h_44 = ATgetArgument(g_44, 0);
                        if(((e_44 != NULL) && (e_44 != h_44)))
                          _fail(h_44);
                        else
                          e_44 = h_44;
                      }
                    else
                      {
                        if(match_cons(g_44, sym_Dependency_1))
                          {
                            h_44 = ATgetArgument(g_44, 0);
                            if(((f_44 != NULL) && (f_44 != h_44)))
                              _fail(h_44);
                            else
                              f_44 = h_44;
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
          t = try_1(t, h_8);
          return(t);
        }
        t = list_1(t, g_8);
        {
          ATerm n_44 = NULL;
          ATerm i_8 (ATerm t)
          {
            ATerm i_44 = NULL,j_44 = NULL;
            i_44 = t;
            q_43 :
            if(match_cons(i_44, sym_Include_1))
              {
                j_44 = ATgetArgument(i_44, 0);
                t = not_null(j_44);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, i_8);
          {
            l_44 = t;
            {
              ATerm p_44 = NULL;
              ATerm m_22 = t;
              int n_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = not_null(d_44);
                  LocalPopChoice(n_22);
                }
              else
                {
                  t = m_22;
                  t = term_o_22;
                }
              {
                n_44 = t;
                {
                  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
                  ATerm v_22 = t;
                  int x_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = not_null(e_44);
                      LocalPopChoice(x_22);
                    }
                  else
                    {
                      t = v_22;
                      t = term_y_22;
                    }
                  {
                    p_44 = t;
                    {
                      t = not_null(n_44);
                      {
                        ATerm j_8 (ATerm t)
                        {
                          t = not_null(l_44);
                          return(t);
                        }
                        t = d_49(t, j_8);
                        {
                          r_44 = t;
                          z_43 :
                          if(match_cons(r_44, sym__2))
                            {
                              s_44 = ATgetArgument(r_44, 0);
                              t_44 = ATgetArgument(r_44, 1);
                              {
                                ATerm x_44 = NULL,a_45 = NULL;
                                t = not_null(a_44);
                                {
                                  ATerm z_22 = t;
                                  int b_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm k_8 (ATerm t)
                                      {
                                        ATerm w_44 = NULL;
                                        w_44 = t;
                                        v_43 :
                                        if(!(match_cons(w_44, sym_Binary_0)))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = option_defined_1(t, k_8);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_44), not_null(t_44));
                                        t = WriteToBinaryFile_0(t);
                                      }
                                      LocalPopChoice(b_23);
                                    }
                                  else
                                    {
                                      t = z_22;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_44), not_null(t_44));
                                        t = WriteToTextFile_0(t);
                                      }
                                    }
                                  {
                                    ATerm l_8 (ATerm t)
                                    {
                                      ATerm z_44 = NULL;
                                      ATerm c_23 = t;
                                      int d_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = not_null(f_44);
                                          LocalPopChoice(d_23);
                                        }
                                      else
                                        {
                                          t = c_23;
                                          {
                                            ATerm f_23 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(a_44);
                                                {
                                                  ATerm m_8 (ATerm t)
                                                  {
                                                    ATerm y_44 = NULL;
                                                    y_44 = t;
                                                    w_43 :
                                                    if(!(match_cons(y_44, sym_NoDependency_0)))
                                                      {
                                                        _fail(t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = option_defined_1(t, m_8);
                                                }
                                                PopChoice();
                                                _fail(t);
                                              }
                                            else
                                              {
                                                t = f_23;
                                              }
                                            t = e_49(t);
                                          }
                                        }
                                      {
                                        z_44 = t;
                                        {
                                          if(((x_44 != NULL) && (x_44 != z_44)))
                                            _fail(z_44);
                                          else
                                            x_44 = z_44;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_44), not_null(s_44));
                                            {
                                              ATerm o_8 (ATerm t)
                                              {
                                                t = not_null(x_44);
                                                return(t);
                                              }
                                              t = create_dep_file_1(t, o_8);
                                            }
                                          }
                                        }
                                      }
                                      return(t);
                                    }
                                    t = try_1(t, l_8);
                                    {
                                      t = dtime_0(t);
                                      {
                                        a_45 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_23), not_null(a_45)), term_n_23), not_null(c_44)));
                                          {
                                            t = printnl_0(t);
                                            {
                                              t = term_h_21;
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
ATerm table_put_0 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL;
  ATerm p_23;
  p_23 = t;
  {
    ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
    t_45 = t;
    p_45 :
    if(match_cons(t_45, sym__3))
      {
        u_45 = ATgetArgument(t_45, 0);
        v_45 = ATgetArgument(t_45, 1);
        w_45 = ATgetArgument(t_45, 2);
        {
          if(((q_45 != NULL) && (q_45 != u_45)))
            _fail(u_45);
          else
            q_45 = u_45;
          {
            if(((r_45 != NULL) && (r_45 != v_45)))
              _fail(v_45);
            else
              r_45 = v_45;
            {
              if(((s_45 != NULL) && (s_45 != w_45)))
                _fail(w_45);
              else
                s_45 = w_45;
              t = SSL_table_put(not_null(q_45), not_null(r_45), not_null(s_45));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_23;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
  a_46 = t;
  z_45 :
  if(match_cons(a_46, sym__2))
    {
      b_46 = ATgetArgument(a_46, 0);
      c_46 = ATgetArgument(a_46, 1);
      t = SSL_table_get(not_null(b_46), not_null(c_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL;
  j_46 = t;
  i_46 :
  if(match_cons(j_46, sym__3))
    {
      k_46 = ATgetArgument(j_46, 0);
      l_46 = ATgetArgument(j_46, 1);
      m_46 = ATgetArgument(j_46, 2);
      {
        ATerm t_23;
        t_23 = t;
        {
          ATerm q_46 = NULL;
          ATerm r_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_46), not_null(l_46));
          {
            ATerm z_23 = t;
            int f_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_24);
              }
            else
              {
                t = z_23;
                t = (ATerm) ATempty;
              }
            {
              r_46 = t;
              if(((q_46 != NULL) && (q_46 != r_46)))
                _fail(r_46);
              else
                q_46 = r_46;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_46), not_null(l_46), (ATerm) ATinsert(CheckATermList(not_null(q_46)), not_null(m_46)));
            t = table_put_0(t);
          }
        }
        t = t_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_48 (ATerm))
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
  z_46 = t;
  y_46 :
  if(match_cons(z_46, sym__2))
    {
      a_47 = ATgetArgument(z_46, 0);
      b_47 = ATgetArgument(z_46, 1);
      {
        ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
        ATerm g_24;
        g_24 = t;
        {
          ATerm h_47 = NULL;
          ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
          t = z_48(t);
          {
            h_47 = t;
            {
              if(((e_47 != NULL) && (e_47 != h_47)))
                _fail(h_47);
              else
                e_47 = h_47;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_47), not_null(a_47), not_null(b_47));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_24 = t;
                    int i_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_47), term_j_24);
                        t = table_get_0(t);
                        LocalPopChoice(i_24);
                      }
                    else
                      {
                        t = h_24;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      i_47 = t;
                      x_46 :
                      if(((ATgetType(i_47) == AT_LIST) && ((ATermList) i_47 != ATempty)))
                        {
                          j_47 = ATgetFirst((ATermList) i_47);
                          k_47 = (ATerm) ATgetNext((ATermList) i_47);
                          {
                            if(((f_47 != NULL) && (f_47 != j_47)))
                              _fail(j_47);
                            else
                              f_47 = j_47;
                            {
                              if(((g_47 != NULL) && (g_47 != k_47)))
                                _fail(k_47);
                              else
                                g_47 = k_47;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(e_47), term_j_24, (ATerm) ATinsert(CheckATermList(not_null(g_47)), (ATerm) ATinsert(CheckATermList(not_null(f_47)), not_null(a_47))));
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
        t = g_24;
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
  ATerm p_47 = NULL;
  p_47 = t;
  t = SSL_implode_string(not_null(p_47));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_47 = NULL;
  t_47 = t;
  t = SSL_explode_string(not_null(t_47));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_47 (ATerm t)
        {
          ATerm m_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, y_47);
              LocalPopChoice(n_24);
            }
          else
            {
              t = m_24;
              {
                ATerm y_8 (ATerm t)
                {
                  ATerm x_47 = NULL;
                  x_47 = t;
                  w_47 :
                  if(!(match_int(x_47, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm a_9 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, y_8, a_9);
              }
            }
          return(t);
        }
        t = y_47(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_48 (ATerm), ATerm o_48 (ATerm))
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
  g_48 = t;
  d_48 :
  if(((ATgetType(g_48) == AT_LIST) && ((ATermList) g_48 != ATempty)))
    {
      h_48 = ATgetFirst((ATermList) g_48);
      i_48 = (ATerm) ATgetNext((ATermList) g_48);
      {
        ATerm l_48 = NULL;
        t = not_null(h_48);
        {
          ATerm p_48 = NULL;
          t = n_48(t);
          {
            l_48 = t;
            {
              t = not_null(i_48);
              {
                t = o_48(t);
                {
                  p_48 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_48)), not_null(l_48));
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
  ATerm v_48 = NULL;
  ATerm v_24;
  v_24 = t;
  {
    ATerm l_9 (ATerm t)
    {
      ATerm w_48 = NULL;
      t = get_path_0(t);
      {
        w_48 = t;
        if(((v_48 != NULL) && (v_48 != w_48)))
          _fail(w_48);
        else
          v_48 = w_48;
      }
      return(t);
    }
    t = Cons_2(t, l_9, _id);
    {
      ATerm x_24;
      x_24 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_12, (ATerm) ATmakeAppl(sym_Defined_2, term_y_24, not_null(v_48)));
        {
          ATerm m_9 (ATerm t)
          {
            t = term_z_12;
            return(t);
          }
          t = assert_1(t, m_9);
        }
      }
      t = x_24;
    }
  }
  t = v_24;
  t = pack_modules_2(t, pack_stratego_1, basename_0);
  return(t);
}
