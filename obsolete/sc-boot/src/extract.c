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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
ATerm term_x_29;
ATerm term_p_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_u_28;
ATerm term_k_28;
ATerm term_c_28;
ATerm term_s_27;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_m_26;
ATerm term_a_26;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_a_23;
ATerm term_t_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_y_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_n_20;
ATerm term_g_20;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_p_19;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_g_9;
ATerm term_o_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_v_6;
ATerm term_r_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
void init_constant_terms (void)
{
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Op_2, term_r_14, (ATerm) ATempty);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_14);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_g_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_d_16);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_d_16);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_d_16);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_u_26, term_d_16);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym__2, term_y_26, term_d_16);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_o_27, term_s_27);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__3, term_o_27, term_s_27, (ATerm) ATempty);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm MissingDef_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm giving_up_0 (ATerm);
ATerm error_0 (ATerm);
ATerm DefinitionExists_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm SDef_3 (ATerm, ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm));
ATerm Let_2 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm));
ATerm sboundin_3 (ATerm, ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm x_93 (ATerm), ATerm y_93 (ATerm), ATerm z_93 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm n_93 (ATerm), ATerm o_93 (ATerm));
ATerm diff_1 (ATerm, ATerm s_93 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_90 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm m_103 (ATerm), ATerm n_103 (ATerm));
ATerm alltd_1 (ATerm, ATerm m_102 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm o_103 (ATerm), ATerm p_103 (ATerm));
ATerm substitute_1 (ATerm, ATerm q_103 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm e_78 (ATerm), ATerm f_78 (ATerm));
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm));
ATerm Explode_2 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm Op_2 (ATerm, ATerm e_77 (ATerm), ATerm f_77 (ATerm));
ATerm pat_td_1 (ATerm, ATerm r_79 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm y_97 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm e_87 (ATerm), ATerm f_87 (ATerm));
ATerm repeat_1 (ATerm, ATerm h_87 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm Con_3 (ATerm, ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm b_79 (ATerm), ATerm c_79 (ATerm));
ATerm oncetd_1 (ATerm, ATerm y_101 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm i_100 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm r_99 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm w_92 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm w_97 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm));
ATerm zip_1 (ATerm, ATerm t_97 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm v_87 (ATerm), ATerm w_87 (ATerm));
ATerm for_3 (ATerm, ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm a_88 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm q_80 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_79 (ATerm));
ATerm HdMember_1 (ATerm, ATerm m_93 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_80 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm x_76 (ATerm));
ATerm Cons_2 (ATerm, ATerm g_79 (ATerm), ATerm h_79 (ATerm));
ATerm Specification_1 (ATerm, ATerm z_76 (ATerm));
ATerm _2 (ATerm, ATerm h_68 (ATerm), ATerm i_68 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm h_92 (ATerm), ATerm i_92 (ATerm));
ATerm crush_2 (ATerm, ATerm v_93 (ATerm), ATerm w_93 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_84 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_99 (ATerm), ATerm c_99 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_96 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_82 (ATerm));
ATerm map_1 (ATerm, ATerm q_95 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_82 (ATerm));
ATerm Program_1 (ATerm, ATerm w_73 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_73 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_95 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_83 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_99 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_82 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_82 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_82 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm));
ATerm iowrap_2 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm));
ATerm iowrap_1 (ATerm, ATerm v_83 (ATerm));
ATerm extract_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  a_3 :
  if(((ATermList) b_3 == ATempty))
    {
      {
        ATerm d_4 = NULL,f_4 = NULL;
        ATerm g_6;
        g_6 = t;
        {
          ATerm e_4 = NULL;
          t = SSLgetAnnotations(not_null(b_3));
          {
            e_4 = t;
            if(((d_4 != NULL) && (d_4 != e_4)))
              _fail(e_4);
            else
              d_4 = e_4;
          }
        }
        t = g_6;
        {
          ATerm h_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_4));
          {
            h_5 = t;
            if(((f_4 != NULL) && (f_4 != h_5)))
              _fail(h_5);
            else
              f_4 = h_5;
          }
          t = not_null(f_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  d_6 = t;
  z_5 :
  if(match_cons(d_6, sym__2))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_6), not_null(f_6)), term_i_6), not_null(e_6)), term_h_6);
        t = error_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
  m_6 = t;
  k_6 :
  if(match_cons(m_6, sym__2))
    {
      n_6 = ATgetArgument(m_6, 0);
      q_6 = ATgetArgument(m_6, 1);
      l_6 :
      if(match_cons(n_6, sym_Mod_2))
        {
          o_6 = ATgetArgument(n_6, 0);
          p_6 = ATgetArgument(n_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_6), not_null(q_6)), term_i_6), not_null(p_6)), term_r_6), not_null(o_6)), term_h_6);
            t = error_0(t);
          }
        }
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
ATerm MissingDefs_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
  y_6 = t;
  w_6 :
  if(match_cons(y_6, sym__2))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      x_6 :
      if(((ATgetType(a_7) == AT_LIST) && ((ATermList) a_7 != ATempty)))
        {
          b_7 = ATgetFirst((ATermList) a_7);
          c_7 = (ATerm) ATgetNext((ATermList) a_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(c_7)), not_null(b_7));
            {
              ATerm c_0 (ATerm t)
              {
                ATerm s_6 = t;
                int t_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(t_6);
                  }
                else
                  {
                    t = s_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, c_0);
            }
            t = not_null(z_6);
          }
        }
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
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  i_7 :
  if(match_cons(k_7, sym__2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      j_7 :
      if(((ATermList) m_7 == ATempty))
        {
          t = not_null(l_7);
        }
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
ATerm fatal_error_0 (ATerm t)
{
  ATerm u_6;
  u_6 = t;
  {
    t = error_0(t);
    {
      t = term_v_6;
      t = exit_0(t);
    }
  }
  t = u_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_7);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm e_7;
  e_7 = t;
  {
    ATerm q_7 = NULL;
    ATerm r_7 = NULL;
    r_7 = t;
    if(((q_7 != NULL) && (q_7 != r_7)))
      _fail(r_7);
    else
      q_7 = r_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(q_7));
      t = printnl_0(t);
    }
  }
  t = e_7;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
  e_8 = t;
  c_8 :
  if(match_cons(e_8, sym__2))
    {
      f_8 = ATgetArgument(e_8, 0);
      g_8 = ATgetArgument(e_8, 1);
      d_8 :
      if(match_int(g_8, 0))
        {
          ATerm g_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
              t = not_null(f_8);
              {
                t = Arities_0(t);
                {
                  i_8 = t;
                  x_7 :
                  if(((ATgetType(i_8) == AT_LIST) && ((ATermList) i_8 != ATempty)))
                    {
                      j_8 = ATgetFirst((ATermList) i_8);
                      k_8 = (ATerm) ATgetNext((ATermList) i_8);
                      y_7 :
                      if(((ATgetType(k_8) == AT_LIST) && ((ATermList) k_8 != ATempty)))
                        {
                          l_8 = ATgetFirst((ATermList) k_8);
                          m_8 = (ATerm) ATgetNext((ATermList) k_8);
                          {
                            ATerm n_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm d_0 (ATerm t)
                                {
                                  ATerm n_8 = NULL;
                                  n_8 = t;
                                  w_7 :
                                  if(!(match_int(n_8, 0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, d_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = n_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_8)), term_o_7);
                              {
                                t = error_0(t);
                                t = giving_up_0(t);
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
              LocalPopChoice(h_7);
            }
          else
            {
              t = g_7;
              {
                ATerm p_8 = NULL;
                ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
                t = not_null(f_8);
                {
                  t = Arities_0(t);
                  {
                    q_8 = t;
                    a_8 :
                    if(((ATgetType(q_8) == AT_LIST) && ((ATermList) q_8 != ATempty)))
                      {
                        r_8 = ATgetFirst((ATermList) q_8);
                        s_8 = (ATerm) ATgetNext((ATermList) q_8);
                        b_8 :
                        if(((ATermList) s_8 == ATempty))
                          {
                            {
                              if(((p_8 != NULL) && (p_8 != r_8)))
                                _fail(r_8);
                              else
                                p_8 = r_8;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), not_null(p_8));
                                t = Definitions_0(t);
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), not_null(p_8));
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
ATerm Rec_2 (ATerm t, ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_Rec_2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      {
        ATerm j_9 = NULL,l_9 = NULL;
        ATerm k_9 = NULL;
        t = SSLgetAnnotations(not_null(d_9));
        {
          k_9 = t;
          if(((j_9 != NULL) && (j_9 != k_9)))
            _fail(k_9);
          else
            j_9 = k_9;
        }
        {
          t = not_null(e_9);
          {
            ATerm n_9 = NULL;
            t = x_77(t);
            {
              l_9 = t;
              {
                t = not_null(f_9);
                {
                  ATerm p_9 = NULL;
                  t = y_77(t);
                  {
                    n_9 = t;
                    {
                      ATerm q_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(l_9), not_null(n_9)), not_null(j_9));
                      {
                        q_9 = t;
                        if(((p_9 != NULL) && (p_9 != q_9)))
                          _fail(q_9);
                        else
                          p_9 = q_9;
                      }
                      t = not_null(p_9);
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
ATerm SDef_3 (ATerm t, ATerm b_78 (ATerm), ATerm c_78 (ATerm), ATerm d_78 (ATerm))
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  d_10 = t;
  c_10 :
  if(match_cons(d_10, sym_SDef_3))
    {
      e_10 = ATgetArgument(d_10, 0);
      f_10 = ATgetArgument(d_10, 1);
      g_10 = ATgetArgument(d_10, 2);
      {
        ATerm l_10 = NULL,n_10 = NULL;
        ATerm m_10 = NULL;
        t = SSLgetAnnotations(not_null(d_10));
        {
          m_10 = t;
          if(((l_10 != NULL) && (l_10 != m_10)))
            _fail(m_10);
          else
            l_10 = m_10;
        }
        {
          t = not_null(e_10);
          {
            ATerm p_10 = NULL;
            t = b_78(t);
            {
              n_10 = t;
              {
                t = not_null(f_10);
                {
                  ATerm r_10 = NULL;
                  t = c_78(t);
                  {
                    p_10 = t;
                    {
                      t = not_null(g_10);
                      {
                        ATerm t_10 = NULL;
                        t = d_78(t);
                        {
                          r_10 = t;
                          {
                            ATerm u_10 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(n_10), not_null(p_10), not_null(r_10)), not_null(l_10));
                            {
                              u_10 = t;
                              if(((t_10 != NULL) && (t_10 != u_10)))
                                _fail(u_10);
                              else
                                t_10 = u_10;
                            }
                            t = not_null(t_10);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm))
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym_Let_2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      {
        ATerm n_11 = NULL,p_11 = NULL;
        ATerm o_11 = NULL;
        t = SSLgetAnnotations(not_null(h_11));
        {
          o_11 = t;
          if(((n_11 != NULL) && (n_11 != o_11)))
            _fail(o_11);
          else
            n_11 = o_11;
        }
        {
          t = not_null(i_11);
          {
            ATerm r_11 = NULL;
            t = z_77(t);
            {
              p_11 = t;
              {
                t = not_null(j_11);
                {
                  ATerm t_11 = NULL;
                  t = a_78(t);
                  {
                    r_11 = t;
                    {
                      ATerm u_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_11), not_null(r_11)), not_null(n_11));
                      {
                        u_11 = t;
                        if(((t_11 != NULL) && (t_11 != u_11)))
                          _fail(u_11);
                        else
                          t_11 = u_11;
                      }
                      t = not_null(t_11);
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
ATerm sboundin_3 (ATerm t, ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm))
{
  ATerm p_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, j_104, j_104);
      LocalPopChoice(s_7);
    }
  else
    {
      t = p_7;
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, l_104, l_104, j_104);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            t = Rec_2(t, l_104, j_104);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_Rec_2))
    {
      d_12 = ATgetArgument(c_12, 0);
      e_12 = ATgetArgument(c_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(d_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  m_12 = t;
  l_12 :
  if(match_cons(m_12, sym_SDef_3))
    {
      n_12 = ATgetArgument(m_12, 0);
      o_12 = ATgetArgument(m_12, 1);
      p_12 = ATgetArgument(m_12, 2);
      {
        t = not_null(o_12);
        {
          ATerm g_0 (ATerm t)
          {
            ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
            t_12 = t;
            k_12 :
            if(match_cons(t_12, sym_VarDec_2))
              {
                u_12 = ATgetArgument(t_12, 0);
                v_12 = ATgetArgument(t_12, 1);
                t = not_null(u_12);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, g_0);
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
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym_Let_2))
    {
      e_13 = ATgetArgument(d_13, 0);
      f_13 = ATgetArgument(d_13, 1);
      {
        t = not_null(e_13);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
            i_13 = t;
            b_13 :
            if(match_cons(i_13, sym_SDef_3))
              {
                j_13 = ATgetArgument(i_13, 0);
                k_13 = ATgetArgument(i_13, 1);
                l_13 = ATgetArgument(i_13, 2);
                t = not_null(j_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm x_93 (ATerm), ATerm y_93 (ATerm), ATerm z_93 (ATerm))
{
  ATerm v_13 = NULL;
  ATerm x_13 = NULL;
  v_13 = t;
  {
    ATerm y_13 = NULL;
    ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
    t = not_null(v_13);
    {
      y_13 = t;
      {
        t = SSL_explode_term(not_null(y_13));
        {
          a_14 = t;
          u_13 :
          if(match_cons(a_14, sym__2))
            {
              b_14 = ATgetArgument(a_14, 0);
              c_14 = ATgetArgument(a_14, 1);
              if(((x_13 != NULL) && (x_13 != c_14)))
                _fail(c_14);
              else
                x_13 = c_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_13);
      t = foldr_3(t, x_93, y_93, z_93);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm n_93 (ATerm), ATerm o_93 (ATerm))
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  i_14 :
  if(((ATgetType(j_14) == AT_LIST) && ((ATermList) j_14 != ATempty)))
    {
      k_14 = ATgetFirst((ATermList) j_14);
      l_14 = (ATerm) ATgetNext((ATermList) j_14);
      {
        t = o_93(t);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm o_14 = NULL;
            o_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), not_null(o_14));
              t = n_93(t);
            }
            return(t);
          }
          t = fetch_1(t, p_0);
        }
        t = not_null(l_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm s_93 (ATerm))
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym__2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      {
        t = not_null(v_14);
        {
          ATerm a_15 (ATerm t)
          {
            ATerm v_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(z_7);
              }
            else
              {
                t = v_7;
                {
                  ATerm h_8 = t;
                  int o_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_0 (ATerm t)
                      {
                        t = not_null(w_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_93, q_0);
                      t = a_15(t);
                      LocalPopChoice(o_8);
                    }
                  else
                    {
                      t = h_8;
                      t = Cons_2(t, _id, a_15);
                    }
                }
              }
            return(t);
          }
          t = a_15(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_90 (ATerm))
{
  ATerm e_15 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_89(t);
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      ATerm v_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15 = NULL;
          ATerm x_8;
          x_8 = t;
          {
            ATerm d_15 = NULL;
            t = y_89(t);
            {
              d_15 = t;
              if(((c_15 != NULL) && (c_15 != d_15)))
                _fail(d_15);
              else
                c_15 = d_15;
            }
          }
          t = x_8;
          {
            ATerm t_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = not_null(c_15);
                return(t);
              }
              t = split_2(t, e_15, v_0);
              t = diff_1(t, a_90);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = z_89(t, t_0, e_15, u_0);
            {
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, w_0, union_0, _id);
            }
          }
          LocalPopChoice(w_8);
        }
      else
        {
          t = v_8;
          {
            ATerm x_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, x_0, union_0, e_15);
          }
        }
      return(t);
    }
    t = split_2(t, r_0, s_0);
    t = union_0(t);
    return(t);
  }
  t = e_15(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
    n_15 = t;
    i_15 :
    if(match_cons(n_15, sym_Call_2))
      {
        o_15 = ATgetArgument(n_15, 0);
        q_15 = ATgetArgument(n_15, 1);
        j_15 :
        if(match_cons(o_15, sym_SVar_1))
          {
            p_15 = ATgetArgument(o_15, 0);
            {
              ATerm t_15 = NULL;
              ATerm u_15 = NULL;
              t = not_null(q_15);
              {
                t = length_0(t);
                {
                  u_15 = t;
                  if(((t_15 != NULL) && (t_15 != u_15)))
                    _fail(u_15);
                  else
                    t_15 = u_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(t_15)));
            }
          }
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
  ATerm z_0 (ATerm t)
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        {
          ATerm a_9 = t;
          int b_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(b_9);
            }
          else
            {
              t = a_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
    v_15 = t;
    l_15 :
    if(match_cons(v_15, sym__2))
      {
        w_15 = ATgetArgument(v_15, 0);
        z_15 = ATgetArgument(v_15, 1);
        m_15 :
        if(match_cons(w_15, sym__2))
          {
            x_15 = ATgetArgument(w_15, 0);
            y_15 = ATgetArgument(w_15, 1);
            if(((x_15 != NULL) && (x_15 != z_15)))
              _fail(z_15);
            else
              x_15 = z_15;
          }
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
  t = free_vars2_4(t, y_0, z_0, sboundin_3, a_1);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm l_16 = NULL;
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  l_16 = t;
  {
    ATerm q_16 = NULL;
    ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
    t = not_null(l_16);
    {
      q_16 = t;
      {
        t = SSL_explode_term(not_null(q_16));
        {
          s_16 = t;
          h_16 :
          if(match_cons(s_16, sym__2))
            {
              t_16 = ATgetArgument(s_16, 0);
              u_16 = ATgetArgument(s_16, 1);
              i_16 :
              if(match_string(t_16, ""))
                {
                  j_16 :
                  if(((ATgetType(u_16) == AT_LIST) && ((ATermList) u_16 != ATempty)))
                    {
                      v_16 = ATgetFirst((ATermList) u_16);
                      w_16 = (ATerm) ATgetNext((ATermList) u_16);
                      k_16 :
                      if(((ATgetType(w_16) == AT_LIST) && ((ATermList) w_16 != ATempty)))
                        {
                          x_16 = ATgetFirst((ATermList) w_16);
                          y_16 = (ATerm) ATgetNext((ATermList) w_16);
                          {
                            if(((n_16 != NULL) && (n_16 != v_16)))
                              _fail(v_16);
                            else
                              n_16 = v_16;
                            {
                              if(((p_16 != NULL) && (p_16 != x_16)))
                                _fail(x_16);
                              else
                                p_16 = x_16;
                              if(((o_16 != NULL) && (o_16 != y_16)))
                                _fail(y_16);
                              else
                                o_16 = y_16;
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
      }
    }
    t = not_null(p_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_g_9;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm e_17 = NULL,g_17 = NULL;
    ATerm h_9;
    h_9 = t;
    {
      ATerm f_17 = NULL;
      t = Fst_0(t);
      {
        f_17 = t;
        if(((e_17 != NULL) && (e_17 != f_17)))
          _fail(f_17);
        else
          e_17 = f_17;
      }
    }
    t = h_9;
    {
      ATerm h_17 = NULL;
      t = Snd_0(t);
      {
        h_17 = t;
        if(((g_17 != NULL) && (g_17 != h_17)))
          _fail(h_17);
        else
          g_17 = h_17;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_17), not_null(g_17));
    }
    return(t);
  }
  t = foldr_2(t, b_1, c_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  o_17 = t;
  l_17 :
  if(match_cons(o_17, sym_Call_2))
    {
      p_17 = ATgetArgument(o_17, 0);
      r_17 = ATgetArgument(o_17, 1);
      m_17 :
      if(match_cons(p_17, sym_SVar_1))
        {
          q_17 = ATgetArgument(p_17, 0);
          n_17 :
          if(((ATermList) r_17 == ATempty))
            {
              t = not_null(q_17);
            }
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
ATerm Look2_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  x_17 = t;
  v_17 :
  if(match_cons(x_17, sym__2))
    {
      y_17 = ATgetArgument(x_17, 0);
      z_17 = ATgetArgument(x_17, 1);
      w_17 :
      if(((ATgetType(z_17) == AT_LIST) && ((ATermList) z_17 != ATempty)))
        {
          a_18 = ATgetFirst((ATermList) z_17);
          b_18 = (ATerm) ATgetNext((ATermList) z_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), not_null(b_18));
        }
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
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  j_18 = t;
  g_18 :
  if(match_cons(j_18, sym__2))
    {
      k_18 = ATgetArgument(j_18, 0);
      l_18 = ATgetArgument(j_18, 1);
      h_18 :
      if(((ATgetType(l_18) == AT_LIST) && ((ATermList) l_18 != ATempty)))
        {
          m_18 = ATgetFirst((ATermList) l_18);
          p_18 = (ATerm) ATgetNext((ATermList) l_18);
          i_18 :
          if(match_cons(m_18, sym__2))
            {
              n_18 = ATgetArgument(m_18, 0);
              o_18 = ATgetArgument(m_18, 1);
              {
                ATerm r_18 = NULL;
                if(((k_18 != NULL) && (k_18 != n_18)))
                  _fail(n_18);
                else
                  k_18 = n_18;
                {
                  if(((r_18 != NULL) && (r_18 != o_18)))
                    _fail(o_18);
                  else
                    r_18 = o_18;
                  t = not_null(r_18);
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
  ATerm i_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = i_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm m_103 (ATerm), ATerm n_103 (ATerm))
{
  ATerm x_18 = NULL;
  ATerm z_18 = NULL,a_19 = NULL;
  x_18 = t;
  {
    ATerm b_19 = NULL;
    t = not_null(x_18);
    {
      ATerm c_19 = NULL;
      t = m_103(t);
      {
        b_19 = t;
        {
          if(((z_18 != NULL) && (z_18 != b_19)))
            _fail(b_19);
          else
            z_18 = b_19;
          {
            t = n_103(t);
            {
              c_19 = t;
              if(((a_19 != NULL) && (a_19 != c_19)))
                _fail(c_19);
              else
                a_19 = c_19;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_18), not_null(a_19));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm m_102 (ATerm))
{
  ATerm g_19 (ATerm t)
  {
    ATerm o_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_102(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = o_9;
        t = _all(t, g_19);
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        ATerm q_19 = NULL;
        if(((q_19 != NULL) && (q_19 != n_19)))
          _fail(n_19);
        else
          q_19 = n_19;
      }
    }
  else
    {
      if(match_cons(l_19, sym__3))
        {
          m_19 = ATgetArgument(l_19, 0);
          n_19 = ATgetArgument(l_19, 1);
          o_19 = ATgetArgument(l_19, 2);
          {
            ATerm w_19 = NULL;
            ATerm x_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(n_19));
            {
              t = zip_1(t, _id);
              {
                x_19 = t;
                if(((w_19 != NULL) && (w_19 != x_19)))
                  _fail(x_19);
                else
                  w_19 = x_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(o_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm o_103 (ATerm), ATerm p_103 (ATerm))
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  t = subs_args_0(t);
  {
    d_20 = t;
    c_20 :
    if(match_cons(d_20, sym__2))
      {
        e_20 = ATgetArgument(d_20, 0);
        f_20 = ATgetArgument(d_20, 1);
        {
          t = not_null(f_20);
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = not_null(e_20);
                return(t);
              }
              t = SubsVar_2(t, o_103, e_1);
              t = p_103(t);
              return(t);
            }
            t = alltd_1(t, d_1);
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
ATerm substitute_1 (ATerm t, ATerm q_103 (ATerm))
{
  t = substitute_2(t, q_103, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm e_78 (ATerm), ATerm f_78 (ATerm))
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym_VarDec_2))
    {
      q_20 = ATgetArgument(p_20, 0);
      r_20 = ATgetArgument(p_20, 1);
      {
        ATerm v_20 = NULL,x_20 = NULL;
        ATerm w_20 = NULL;
        t = SSLgetAnnotations(not_null(p_20));
        {
          w_20 = t;
          if(((v_20 != NULL) && (v_20 != w_20)))
            _fail(w_20);
          else
            v_20 = w_20;
        }
        {
          t = not_null(q_20);
          {
            ATerm z_20 = NULL;
            t = e_78(t);
            {
              x_20 = t;
              {
                t = not_null(r_20);
                {
                  ATerm b_21 = NULL;
                  t = f_78(t);
                  {
                    z_20 = t;
                    {
                      ATerm c_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(x_20), not_null(z_20)), not_null(v_20));
                      {
                        c_21 = t;
                        if(((b_21 != NULL) && (b_21 != c_21)))
                          _fail(c_21);
                        else
                          b_21 = c_21;
                      }
                      t = not_null(b_21);
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
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  w_21 = t;
  u_21 :
  if(((ATgetType(w_21) == AT_LIST) && ((ATermList) w_21 != ATempty)))
    {
      x_21 = ATgetFirst((ATermList) w_21);
      b_22 = (ATerm) ATgetNext((ATermList) w_21);
      v_21 :
      if(match_cons(x_21, sym_SDef_3))
        {
          y_21 = ATgetArgument(x_21, 0);
          z_21 = ATgetArgument(x_21, 1);
          a_22 = ATgetArgument(x_21, 2);
          {
            ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,d_23 = NULL;
            ATerm s_9;
            s_9 = t;
            {
              ATerm j_22 = NULL;
              t = not_null(z_21);
              {
                ATerm p_22 = NULL;
                ATerm f_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, f_1);
                {
                  j_22 = t;
                  {
                    if(((g_22 != NULL) && (g_22 != j_22)))
                      _fail(j_22);
                    else
                      g_22 = j_22;
                    {
                      t = not_null(g_22);
                      {
                        ATerm c_23 = NULL;
                        ATerm g_1 (ATerm t)
                        {
                          ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
                          k_22 = t;
                          l_21 :
                          if(match_cons(k_22, sym_VarDec_2))
                            {
                              l_22 = ATgetArgument(k_22, 0);
                              m_22 = ATgetArgument(k_22, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_22)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, g_1);
                        {
                          p_22 = t;
                          {
                            if(((h_22 != NULL) && (h_22 != p_22)))
                              _fail(p_22);
                            else
                              h_22 = p_22;
                            {
                              t = not_null(w_21);
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
                                  q_22 = t;
                                  r_21 :
                                  if(match_cons(q_22, sym_SDef_3))
                                    {
                                      r_22 = ATgetArgument(q_22, 0);
                                      s_22 = ATgetArgument(q_22, 1);
                                      t_22 = ATgetArgument(q_22, 2);
                                      {
                                        ATerm w_22 = NULL;
                                        ATerm b_23 = NULL;
                                        t = not_null(s_22);
                                        {
                                          ATerm i_1 (ATerm t)
                                          {
                                            ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
                                            x_22 = t;
                                            p_21 :
                                            if(match_cons(x_22, sym_VarDec_2))
                                              {
                                                y_22 = ATgetArgument(x_22, 0);
                                                z_22 = ATgetArgument(x_22, 1);
                                                t = not_null(y_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, i_1);
                                          {
                                            b_23 = t;
                                            if(((w_22 != NULL) && (w_22 != b_23)))
                                              _fail(b_23);
                                            else
                                              w_22 = b_23;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(w_22), not_null(h_22), not_null(t_22));
                                          t = ssubs_0(t);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, h_1);
                                {
                                  c_23 = t;
                                  if(((i_22 != NULL) && (i_22 != c_23)))
                                    _fail(c_23);
                                  else
                                    i_22 = c_23;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = s_9;
            {
              ATerm e_23 = NULL;
              t = not_null(i_22);
              {
                t = choices_0(t);
                {
                  e_23 = t;
                  if(((d_23 != NULL) && (d_23 != e_23)))
                    _fail(e_23);
                  else
                    d_23 = e_23;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_21), not_null(g_22), not_null(d_23));
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
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  p_23 :
  if(((ATgetType(r_23) == AT_LIST) && ((ATermList) r_23 != ATempty)))
    {
      s_23 = ATgetFirst((ATermList) r_23);
      t_23 = (ATerm) ATgetNext((ATermList) r_23);
      q_23 :
      if(((ATermList) t_23 == ATempty))
        {
          t = not_null(s_23);
        }
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
ATerm joindefs_0 (ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
  a_24 = t;
  y_23 :
  if(match_cons(a_24, sym__2))
    {
      b_24 = ATgetArgument(a_24, 0);
      e_24 = ATgetArgument(a_24, 1);
      z_23 :
      if(match_cons(b_24, sym__2))
        {
          c_24 = ATgetArgument(b_24, 0);
          d_24 = ATgetArgument(b_24, 1);
          {
            ATerm i_24 = NULL;
            ATerm j_24 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_24), not_null(d_24));
            {
              t = Definitions_0(t);
              {
                j_24 = t;
                if(((i_24 != NULL) && (i_24 != j_24)))
                  _fail(j_24);
                else
                  i_24 = j_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(e_24));
          }
        }
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
ATerm Expl_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  e_25 = t;
  c_25 :
  if(match_cons(e_25, sym_ExplodeCong_2))
    {
      f_25 = ATgetArgument(e_25, 0);
      d_25 = ATgetArgument(e_25, 1);
      {
        ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
        ATerm m_25 = NULL;
        ATerm n_25 = NULL;
        t = new_0(t);
        {
          m_25 = t;
          {
            if(((i_25 != NULL) && (i_25 != m_25)))
              _fail(m_25);
            else
              i_25 = m_25;
            {
              ATerm o_25 = NULL;
              t = new_0(t);
              {
                n_25 = t;
                {
                  if(((j_25 != NULL) && (j_25 != n_25)))
                    _fail(n_25);
                  else
                    j_25 = n_25;
                  {
                    ATerm p_25 = NULL;
                    t = new_0(t);
                    {
                      o_25 = t;
                      {
                        if(((k_25 != NULL) && (k_25 != o_25)))
                          _fail(o_25);
                        else
                          k_25 = o_25;
                        {
                          t = new_0(t);
                          {
                            p_25 = t;
                            if(((l_25 != NULL) && (l_25 != p_25)))
                              _fail(p_25);
                            else
                              l_25 = p_25;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_25)), not_null(k_25)), not_null(j_25)), not_null(i_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(f_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(d_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25)))))));
      }
    }
  else
    {
      if(match_cons(e_25, sym_Build_1))
        {
          f_25 = ATgetArgument(e_25, 0);
          {
            ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
            ATerm v_25 = NULL;
            ATerm z_25 = NULL;
            t = new_0(t);
            {
              v_25 = t;
              {
                if(((t_25 != NULL) && (t_25 != v_25)))
                  _fail(v_25);
                else
                  t_25 = v_25;
                {
                  t = not_null(f_25);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
                      w_25 = t;
                      v_24 :
                      if(match_cons(w_25, sym_Explode_2))
                        {
                          x_25 = ATgetArgument(w_25, 0);
                          y_25 = ATgetArgument(w_25, 1);
                          {
                            if(((r_25 != NULL) && (r_25 != x_25)))
                              _fail(x_25);
                            else
                              r_25 = x_25;
                            {
                              if(((s_25 != NULL) && (s_25 != y_25)))
                                _fail(y_25);
                              else
                                s_25 = y_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_25));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, j_1);
                    {
                      z_25 = t;
                      if(((u_25 != NULL) && (u_25 != z_25)))
                        _fail(z_25);
                      else
                        u_25 = z_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_25)), not_null(r_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_25)))));
          }
        }
      else
        {
          if(match_cons(e_25, sym_Match_1))
            {
              f_25 = ATgetArgument(e_25, 0);
              {
                ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
                ATerm g_26 = NULL;
                ATerm h_26 = NULL;
                t = new_0(t);
                {
                  g_26 = t;
                  {
                    if(((d_26 != NULL) && (d_26 != g_26)))
                      _fail(g_26);
                    else
                      d_26 = g_26;
                    {
                      ATerm l_26 = NULL;
                      t = new_0(t);
                      {
                        h_26 = t;
                        {
                          if(((e_26 != NULL) && (e_26 != h_26)))
                            _fail(h_26);
                          else
                            e_26 = h_26;
                          {
                            t = not_null(f_25);
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
                                i_26 = t;
                                a_25 :
                                if(match_cons(i_26, sym_Explode_2))
                                  {
                                    j_26 = ATgetArgument(i_26, 0);
                                    k_26 = ATgetArgument(i_26, 1);
                                    {
                                      if(((b_26 != NULL) && (b_26 != j_26)))
                                        _fail(j_26);
                                      else
                                        b_26 = j_26;
                                      {
                                        if(((c_26 != NULL) && (c_26 != k_26)))
                                          _fail(k_26);
                                        else
                                          c_26 = k_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_26));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, k_1);
                              {
                                l_26 = t;
                                if(((f_26 != NULL) && (f_26 != l_26)))
                                  _fail(l_26);
                                else
                                  f_26 = l_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_26)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_26))), (ATerm) ATmakeAppl(sym_Prim_2, term_w_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_26)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_26)), (ATerm) ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_26)), not_null(b_26)))))));
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
  ATerm q_27 = NULL,r_27 = NULL;
  q_27 = t;
  p_27 :
  if(match_cons(q_27, sym_Match_1))
    {
      r_27 = ATgetArgument(q_27, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
            ATerm x_27 = NULL;
            ATerm b_28 = NULL;
            t = new_0(t);
            {
              x_27 = t;
              {
                if(((v_27 != NULL) && (v_27 != x_27)))
                  _fail(x_27);
                else
                  v_27 = x_27;
                {
                  t = not_null(r_27);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
                      y_27 = t;
                      f_27 :
                      if(match_cons(y_27, sym_Anno_2))
                        {
                          z_27 = ATgetArgument(y_27, 0);
                          a_28 = ATgetArgument(y_27, 1);
                          {
                            if(((t_27 != NULL) && (t_27 != z_27)))
                              _fail(z_27);
                            else
                              t_27 = z_27;
                            {
                              if(((u_27 != NULL) && (u_27 != a_28)))
                                _fail(a_28);
                              else
                                u_27 = a_28;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_27)), not_null(t_27));
                            }
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
                      b_28 = t;
                      if(((w_27 != NULL) && (w_27 != b_28)))
                        _fail(b_28);
                      else
                        w_27 = b_28;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_27))))));
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm b_10 = t;
              int h_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
                  ATerm g_28 = NULL;
                  ATerm j_28 = NULL;
                  t = new_0(t);
                  {
                    g_28 = t;
                    {
                      if(((e_28 != NULL) && (e_28 != g_28)))
                        _fail(g_28);
                      else
                        e_28 = g_28;
                      {
                        t = not_null(r_27);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm h_28 = NULL,i_28 = NULL;
                            h_28 = t;
                            j_27 :
                            if(match_cons(h_28, sym_RootApp_1))
                              {
                                i_28 = ATgetArgument(h_28, 0);
                                {
                                  if(((d_28 != NULL) && (d_28 != i_28)))
                                    _fail(i_28);
                                  else
                                    d_28 = i_28;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_28));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, m_1);
                          {
                            j_28 = t;
                            if(((f_28 != NULL) && (f_28 != j_28)))
                              _fail(j_28);
                            else
                              f_28 = j_28;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_28))), not_null(d_28))));
                  LocalPopChoice(h_10);
                }
              else
                {
                  t = b_10;
                  {
                    ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
                    ATerm p_28 = NULL;
                    ATerm t_28 = NULL;
                    t = new_0(t);
                    {
                      p_28 = t;
                      {
                        if(((n_28 != NULL) && (n_28 != p_28)))
                          _fail(p_28);
                        else
                          n_28 = p_28;
                        {
                          t = not_null(r_27);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
                              q_28 = t;
                              n_27 :
                              if(match_cons(q_28, sym_App_2))
                                {
                                  r_28 = ATgetArgument(q_28, 0);
                                  s_28 = ATgetArgument(q_28, 1);
                                  {
                                    if(((m_28 != NULL) && (m_28 != r_28)))
                                      _fail(r_28);
                                    else
                                      m_28 = r_28;
                                    {
                                      if(((l_28 != NULL) && (l_28 != s_28)))
                                        _fail(s_28);
                                      else
                                        l_28 = s_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_28));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, n_1);
                            {
                              t_28 = t;
                              if(((o_28 != NULL) && (o_28 != t_28)))
                                _fail(t_28);
                              else
                                o_28 = t_28;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_28))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_28)), not_null(m_28)))));
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
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  e_32 = t;
  q_29 :
  if(match_cons(e_32, sym_Match_1))
    {
      f_32 = ATgetArgument(e_32, 0);
      r_29 :
      if(match_cons(f_32, sym_RootApp_1))
        {
          g_32 = ATgetArgument(f_32, 0);
          t = not_null(g_32);
        }
      else
        {
          if(match_cons(f_32, sym_App_2))
            {
              g_32 = ATgetArgument(f_32, 0);
              h_32 = ATgetArgument(f_32, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(g_32), not_null(h_32));
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
  ATerm b_34 = NULL,c_34 = NULL;
  b_34 = t;
  s_32 :
  if(match_cons(b_34, sym_Match_1))
    {
      c_34 = ATgetArgument(b_34, 0);
      {
        ATerm e_34 = NULL,f_34 = NULL;
        ATerm j_34 = NULL;
        t = not_null(c_34);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
            g_34 = t;
            p_32 :
            if(match_cons(g_34, sym_RootApp_1))
              {
                h_34 = ATgetArgument(g_34, 0);
                q_32 :
                if(match_cons(h_34, sym_Match_1))
                  {
                    i_34 = ATgetArgument(h_34, 0);
                    {
                      if(((e_34 != NULL) && (e_34 != i_34)))
                        _fail(i_34);
                      else
                        e_34 = i_34;
                      t = not_null(e_34);
                    }
                  }
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
          t = pat_td_1(t, o_1);
          {
            j_34 = t;
            if(((f_34 != NULL) && (f_34 != j_34)))
              _fail(j_34);
            else
              f_34 = j_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(f_34));
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
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm k_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(o_10);
          }
        else
          {
            t = k_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL;
  m_35 = t;
  i_35 :
  if(match_cons(m_35, sym_Build_1))
    {
      n_35 = ATgetArgument(m_35, 0);
      {
        ATerm q_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
            ATerm t_35 = NULL;
            ATerm r_36 = NULL;
            t = new_0(t);
            {
              t_35 = t;
              {
                if(((r_35 != NULL) && (r_35 != t_35)))
                  _fail(t_35);
                else
                  r_35 = t_35;
                {
                  t = not_null(n_35);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm u_35 = NULL,p_36 = NULL,q_36 = NULL;
                      u_35 = t;
                      s_34 :
                      if(match_cons(u_35, sym_Anno_2))
                        {
                          p_36 = ATgetArgument(u_35, 0);
                          q_36 = ATgetArgument(u_35, 1);
                          {
                            if(((p_35 != NULL) && (p_35 != p_36)))
                              _fail(p_36);
                            else
                              p_35 = p_36;
                            {
                              if(((q_35 != NULL) && (q_35 != q_36)))
                                _fail(q_36);
                              else
                                q_35 = q_36;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_35));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, p_1);
                    {
                      r_36 = t;
                      if(((s_35 != NULL) && (s_35 != r_36)))
                        _fail(r_36);
                      else
                        s_35 = r_36;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_35)), not_null(p_35))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_35))));
            LocalPopChoice(s_10);
          }
        else
          {
            t = q_10;
            {
              ATerm w_10 = t;
              int x_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
                  ATerm g_37 = NULL;
                  ATerm j_37 = NULL;
                  t = new_0(t);
                  {
                    g_37 = t;
                    {
                      if(((e_37 != NULL) && (e_37 != g_37)))
                        _fail(g_37);
                      else
                        e_37 = g_37;
                      {
                        t = not_null(n_35);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm h_37 = NULL,i_37 = NULL;
                            h_37 = t;
                            w_34 :
                            if(match_cons(h_37, sym_RootApp_1))
                              {
                                i_37 = ATgetArgument(h_37, 0);
                                {
                                  if(((d_37 != NULL) && (d_37 != i_37)))
                                    _fail(i_37);
                                  else
                                    d_37 = i_37;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_37));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, q_1);
                          {
                            j_37 = t;
                            if(((f_37 != NULL) && (f_37 != j_37)))
                              _fail(j_37);
                            else
                              f_37 = j_37;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_37))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_37))));
                  LocalPopChoice(x_10);
                }
              else
                {
                  t = w_10;
                  {
                    ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
                    ATerm p_37 = NULL;
                    ATerm t_37 = NULL;
                    t = new_0(t);
                    {
                      p_37 = t;
                      {
                        if(((n_37 != NULL) && (n_37 != p_37)))
                          _fail(p_37);
                        else
                          n_37 = p_37;
                        {
                          t = not_null(n_35);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
                              q_37 = t;
                              g_35 :
                              if(match_cons(q_37, sym_App_2))
                                {
                                  r_37 = ATgetArgument(q_37, 0);
                                  s_37 = ATgetArgument(q_37, 1);
                                  {
                                    if(((l_37 != NULL) && (l_37 != r_37)))
                                      _fail(r_37);
                                    else
                                      l_37 = r_37;
                                    {
                                      if(((m_37 != NULL) && (m_37 != s_37)))
                                        _fail(s_37);
                                      else
                                        m_37 = s_37;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_37));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, r_1);
                            {
                              t_37 = t;
                              if(((o_37 != NULL) && (o_37 != t_37)))
                                _fail(t_37);
                              else
                                o_37 = t_37;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(l_37), not_null(m_37), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_37)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_37))));
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
  ATerm r_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  r_38 = t;
  p_38 :
  if(match_cons(r_38, sym_Build_1))
    {
      v_38 = ATgetArgument(r_38, 0);
      q_38 :
      if(match_cons(v_38, sym_RootApp_1))
        {
          w_38 = ATgetArgument(v_38, 0);
          t = not_null(w_38);
        }
      else
        {
          if(match_cons(v_38, sym_App_2))
            {
              w_38 = ATgetArgument(v_38, 0);
              x_38 = ATgetArgument(v_38, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_38)), not_null(w_38));
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
ATerm Prim_2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  ATerm l_39 = NULL,m_39 = NULL,o_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym_Prim_2))
    {
      m_39 = ATgetArgument(l_39, 0);
      o_39 = ATgetArgument(l_39, 1);
      {
        ATerm s_39 = NULL,u_39 = NULL;
        ATerm t_39 = NULL;
        t = SSLgetAnnotations(not_null(l_39));
        {
          t_39 = t;
          if(((s_39 != NULL) && (s_39 != t_39)))
            _fail(t_39);
          else
            s_39 = t_39;
        }
        {
          t = not_null(m_39);
          {
            ATerm w_39 = NULL;
            t = e_79(t);
            {
              u_39 = t;
              {
                t = not_null(o_39);
                {
                  ATerm y_39 = NULL;
                  t = f_79(t);
                  {
                    w_39 = t;
                    {
                      ATerm z_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(u_39), not_null(w_39)), not_null(s_39));
                      {
                        z_39 = t;
                        if(((y_39 != NULL) && (y_39 != z_39)))
                          _fail(z_39);
                        else
                          y_39 = z_39;
                      }
                      t = not_null(y_39);
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
ATerm Explode_2 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm))
{
  ATerm u_40 = NULL,v_40 = NULL,y_40 = NULL;
  u_40 = t;
  t_40 :
  if(match_cons(u_40, sym_Explode_2))
    {
      v_40 = ATgetArgument(u_40, 0);
      y_40 = ATgetArgument(u_40, 1);
      {
        ATerm e_41 = NULL,g_41 = NULL;
        ATerm f_41 = NULL;
        t = SSLgetAnnotations(not_null(u_40));
        {
          f_41 = t;
          if(((e_41 != NULL) && (e_41 != f_41)))
            _fail(f_41);
          else
            e_41 = f_41;
        }
        {
          t = not_null(v_40);
          {
            ATerm i_41 = NULL;
            t = s_75(t);
            {
              g_41 = t;
              {
                t = not_null(y_40);
                {
                  ATerm k_41 = NULL;
                  t = t_75(t);
                  {
                    i_41 = t;
                    {
                      ATerm l_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(g_41), not_null(i_41)), not_null(e_41));
                      {
                        l_41 = t;
                        if(((k_41 != NULL) && (k_41 != l_41)))
                          _fail(l_41);
                        else
                          k_41 = l_41;
                      }
                      t = not_null(k_41);
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
ATerm Op_2 (ATerm t, ATerm e_77 (ATerm), ATerm f_77 (ATerm))
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  g_42 = t;
  f_42 :
  if(match_cons(g_42, sym_Op_2))
    {
      h_42 = ATgetArgument(g_42, 0);
      i_42 = ATgetArgument(g_42, 1);
      {
        ATerm n_42 = NULL,p_42 = NULL;
        ATerm o_42 = NULL;
        t = SSLgetAnnotations(not_null(g_42));
        {
          o_42 = t;
          if(((n_42 != NULL) && (n_42 != o_42)))
            _fail(o_42);
          else
            n_42 = o_42;
        }
        {
          t = not_null(h_42);
          {
            ATerm r_42 = NULL;
            t = e_77(t);
            {
              p_42 = t;
              {
                t = not_null(i_42);
                {
                  ATerm t_42 = NULL;
                  t = f_77(t);
                  {
                    r_42 = t;
                    {
                      ATerm u_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(p_42), not_null(r_42)), not_null(n_42));
                      {
                        u_42 = t;
                        if(((t_42 != NULL) && (t_42 != u_42)))
                          _fail(u_42);
                        else
                          t_42 = u_42;
                      }
                      t = not_null(t_42);
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
ATerm pat_td_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_79(t);
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = pat_td_1(t, r_79);
                return(t);
              }
              t = fetch_1(t, t_1);
              return(t);
            }
            t = Op_2(t, _id, s_1);
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm c_11 = t;
              int d_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = pat_td_1(t, r_79);
                    return(t);
                  }
                  t = Explode_2(t, _id, u_1);
                  LocalPopChoice(d_11);
                }
              else
                {
                  t = c_11;
                  {
                    ATerm e_11 = t;
                    int f_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_1 (ATerm t)
                        {
                          t = pat_td_1(t, r_79);
                          return(t);
                        }
                        t = Explode_2(t, v_1, _id);
                        LocalPopChoice(f_11);
                      }
                    else
                      {
                        t = e_11;
                        {
                          ATerm w_1 (ATerm t)
                          {
                            ATerm x_1 (ATerm t)
                            {
                              t = pat_td_1(t, r_79);
                              return(t);
                            }
                            t = fetch_1(t, x_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, w_1);
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
  ATerm l_43 = NULL,m_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym_Build_1))
    {
      m_43 = ATgetArgument(l_43, 0);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_43 = NULL,p_43 = NULL;
            ATerm t_43 = NULL;
            t = not_null(m_43);
            {
              ATerm y_1 (ATerm t)
              {
                ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
                q_43 = t;
                d_43 :
                if(match_cons(q_43, sym_RootApp_1))
                  {
                    r_43 = ATgetArgument(q_43, 0);
                    e_43 :
                    if(match_cons(r_43, sym_Build_1))
                      {
                        s_43 = ATgetArgument(r_43, 0);
                        {
                          if(((o_43 != NULL) && (o_43 != s_43)))
                            _fail(s_43);
                          else
                            o_43 = s_43;
                          t = not_null(o_43);
                        }
                      }
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
              t = pat_td_1(t, y_1);
              {
                t_43 = t;
                if(((p_43 != NULL) && (p_43 != t_43)))
                  _fail(t_43);
                else
                  p_43 = t_43;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(p_43));
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            {
              ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
              ATerm c_44 = NULL;
              t = not_null(m_43);
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
                  y_43 = t;
                  h_43 :
                  if(match_cons(y_43, sym_App_2))
                    {
                      z_43 = ATgetArgument(y_43, 0);
                      b_44 = ATgetArgument(y_43, 1);
                      i_43 :
                      if(match_cons(z_43, sym_Build_1))
                        {
                          a_44 = ATgetArgument(z_43, 0);
                          {
                            if(((w_43 != NULL) && (w_43 != a_44)))
                              _fail(a_44);
                            else
                              w_43 = a_44;
                            {
                              if(((v_43 != NULL) && (v_43 != b_44)))
                                _fail(b_44);
                              else
                                v_43 = b_44;
                              t = not_null(w_43);
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
                t = pat_td_1(t, z_1);
                {
                  c_44 = t;
                  if(((x_43 != NULL) && (x_43 != c_44)))
                    _fail(c_44);
                  else
                    x_43 = c_44;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(x_43));
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
  ATerm m_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = m_11;
      {
        ATerm s_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(v_11);
          }
        else
          {
            t = s_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,o_45 = NULL,p_45 = NULL;
  o_45 = t;
  c_45 :
  if(match_cons(o_45, sym_InfixApp_3))
    {
      p_45 = ATgetArgument(o_45, 0);
      j_45 = ATgetArgument(o_45, 1);
      i_45 = ATgetArgument(o_45, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(j_45), (ATerm) ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_45)), not_null(p_45))));
    }
  else
    {
      if(match_cons(o_45, sym_BAM_3))
        {
          p_45 = ATgetArgument(o_45, 0);
          j_45 = ATgetArgument(o_45, 1);
          i_45 = ATgetArgument(o_45, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(i_45))), not_null(p_45)), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_45))));
        }
      else
        {
          if(match_cons(o_45, sym_AM_2))
            {
              p_45 = ATgetArgument(o_45, 0);
              j_45 = ATgetArgument(o_45, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_45), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_45)));
            }
          else
            {
              if(match_cons(o_45, sym_MA_2))
                {
                  p_45 = ATgetArgument(o_45, 0);
                  j_45 = ATgetArgument(o_45, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_45)), not_null(j_45));
                }
              else
                {
                  if(match_cons(o_45, sym_BA_2))
                    {
                      p_45 = ATgetArgument(o_45, 0);
                      j_45 = ATgetArgument(o_45, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_45)), not_null(p_45));
                    }
                  else
                    {
                      if(match_cons(o_45, sym_Lets_2))
                        {
                          p_45 = ATgetArgument(o_45, 0);
                          j_45 = ATgetArgument(o_45, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_45), not_null(j_45));
                        }
                      else
                        {
                          if(match_cons(o_45, sym_LChoices_1))
                            {
                              p_45 = ATgetArgument(o_45, 0);
                              d_45 :
                              if(((ATgetType(p_45) == AT_LIST) && ((ATermList) p_45 != ATempty)))
                                {
                                  k_45 = ATgetFirst((ATermList) p_45);
                                  l_45 = (ATerm) ATgetNext((ATermList) p_45);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(k_45), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(l_45)));
                                }
                              else
                                {
                                  if(((ATermList) p_45 == ATempty))
                                    {
                                      t = term_g_9;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(o_45, sym_Choices_1))
                                {
                                  p_45 = ATgetArgument(o_45, 0);
                                  e_45 :
                                  if(((ATgetType(p_45) == AT_LIST) && ((ATermList) p_45 != ATempty)))
                                    {
                                      k_45 = ATgetFirst((ATermList) p_45);
                                      l_45 = (ATerm) ATgetNext((ATermList) p_45);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_45), (ATerm) ATmakeAppl(sym_Choices_1, not_null(l_45)));
                                    }
                                  else
                                    {
                                      if(((ATermList) p_45 == ATempty))
                                        {
                                          t = term_g_9;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(o_45, sym_Seqs_1))
                                    {
                                      p_45 = ATgetArgument(o_45, 0);
                                      f_45 :
                                      if(((ATgetType(p_45) == AT_LIST) && ((ATermList) p_45 != ATempty)))
                                        {
                                          k_45 = ATgetFirst((ATermList) p_45);
                                          l_45 = (ATerm) ATgetNext((ATermList) p_45);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_45), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(l_45)));
                                        }
                                      else
                                        {
                                          if(((ATermList) p_45 == ATempty))
                                            {
                                              t = term_w_11;
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
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
  d_47 = t;
  a_47 :
  if(match_cons(d_47, sym__2))
    {
      e_47 = ATgetArgument(d_47, 0);
      h_47 = ATgetArgument(d_47, 1);
      b_47 :
      if(match_cons(e_47, sym__2))
        {
          f_47 = ATgetArgument(e_47, 0);
          g_47 = ATgetArgument(e_47, 1);
          c_47 :
          if(match_cons(h_47, sym__2))
            {
              i_47 = ATgetArgument(h_47, 0);
              j_47 = ATgetArgument(h_47, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_47)), not_null(f_47)), (ATerm) ATinsert(CheckATermList(not_null(j_47)), not_null(g_47)));
            }
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
  ATerm r_48 = NULL,s_48 = NULL,u_50 = NULL;
  r_48 = t;
  q_47 :
  if(((ATgetType(r_48) == AT_LIST) && ((ATermList) r_48 != ATempty)))
    {
      s_48 = ATgetFirst((ATermList) r_48);
      u_50 = (ATerm) ATgetNext((ATermList) r_48);
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_48), not_null(u_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm a_51 = NULL;
  a_51 = t;
  z_50 :
  if(((ATermList) a_51 == ATempty))
    {
      t = term_x_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm y_97 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, y_97);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  ATerm m_51 (ATerm t)
  {
    ATerm j_51 = NULL;
    ATerm k_51 = NULL;
    t = not_null(g_51);
    {
      ATerm y_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_11;
        }
      {
        t = new_0(t);
        {
          k_51 = t;
          if(((j_51 != NULL) && (j_51 != k_51)))
            _fail(k_51);
          else
            j_51 = k_51;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(j_51)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_51)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_51))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_51))));
    return(t);
  }
  ATerm n_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_51))));
    return(t);
  }
  g_51 = t;
  f_51 :
  if(match_cons(g_51, sym_Var_1))
    {
      h_51 = ATgetArgument(g_51, 0);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_51(t);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            t = n_51(t);
          }
      }
    }
  else
    {
      t = m_51(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm a_52 = NULL,b_52 = NULL;
  a_52 = t;
  z_51 :
  if(match_cons(a_52, sym_Var_1))
    {
      b_52 = ATgetArgument(a_52, 0);
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_52 = NULL,g_52 = NULL;
            ATerm f_52 = NULL;
            t = SSLgetAnnotations(not_null(a_52));
            {
              f_52 = t;
              if(((e_52 != NULL) && (e_52 != f_52)))
                _fail(f_52);
              else
                e_52 = f_52;
            }
            {
              t = not_null(b_52);
              {
                ATerm i_52 = NULL;
                t = o_0(t);
                {
                  g_52 = t;
                  {
                    ATerm j_52 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(g_52)), not_null(e_52));
                    {
                      j_52 = t;
                      if(((i_52 != NULL) && (i_52 != j_52)))
                        _fail(j_52);
                      else
                        i_52 = j_52;
                    }
                    t = not_null(i_52);
                  }
                }
              }
            }
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            {
              ATerm m_52 = NULL,o_52 = NULL;
              ATerm n_52 = NULL;
              t = SSLgetAnnotations(not_null(a_52));
              {
                n_52 = t;
                if(((m_52 != NULL) && (m_52 != n_52)))
                  _fail(n_52);
                else
                  m_52 = n_52;
              }
              {
                t = not_null(b_52);
                {
                  ATerm q_52 = NULL;
                  t = o_0(t);
                  {
                    o_52 = t;
                    {
                      ATerm r_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_52)), not_null(m_52));
                      {
                        r_52 = t;
                        if(((q_52 != NULL) && (q_52 != r_52)))
                          _fail(r_52);
                        else
                          q_52 = r_52;
                      }
                      t = not_null(q_52);
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
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
  f_53 = t;
  e_53 :
  if(match_cons(f_53, sym_Prim_2))
    {
      g_53 = ATgetArgument(f_53, 0);
      h_53 = ATgetArgument(f_53, 1);
      {
        ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL;
        ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
        t = not_null(h_53);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm h_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_12;
              }
            return(t);
          }
          t = fetch_1(t, a_2);
          {
            t = not_null(h_53);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm b_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, b_2);
                {
                  n_53 = t;
                  c_53 :
                  if(match_cons(n_53, sym__2))
                    {
                      o_53 = ATgetArgument(n_53, 0);
                      p_53 = ATgetArgument(n_53, 1);
                      d_53 :
                      if(match_cons(p_53, sym__2))
                        {
                          q_53 = ATgetArgument(p_53, 0);
                          r_53 = ATgetArgument(p_53, 1);
                          {
                            if(((k_53 != NULL) && (k_53 != o_53)))
                              _fail(o_53);
                            else
                              k_53 = o_53;
                            {
                              if(((l_53 != NULL) && (l_53 != q_53)))
                                _fail(q_53);
                              else
                                l_53 = q_53;
                              if(((m_53 != NULL) && (m_53 != r_53)))
                                _fail(r_53);
                              else
                                m_53 = r_53;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(l_53)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(g_53), not_null(m_53))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm e_87 (ATerm), ATerm f_87 (ATerm))
{
  ATerm u_53 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_87(t);
        t = u_53(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = f_87(t);
      }
    return(t);
  }
  t = u_53(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm h_87 (ATerm))
{
  t = repeat_2(t, h_87, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm z_53 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym_Wld_0))
    {
      ATerm b_54 = NULL,d_54 = NULL;
      ATerm q_12;
      q_12 = t;
      {
        ATerm c_54 = NULL;
        t = SSLgetAnnotations(not_null(z_53));
        {
          c_54 = t;
          if(((b_54 != NULL) && (b_54 != c_54)))
            _fail(c_54);
          else
            b_54 = c_54;
        }
      }
      t = q_12;
      {
        ATerm e_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(b_54));
        {
          e_54 = t;
          if(((d_54 != NULL) && (d_54 != e_54)))
            _fail(e_54);
          else
            d_54 = e_54;
        }
        t = not_null(d_54);
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
  ATerm r_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm s_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(w_12);
          }
        else
          {
            t = s_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, c_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
  o_54 = t;
  n_54 :
  if(match_cons(o_54, sym_App_2))
    {
      p_54 = ATgetArgument(o_54, 0);
      q_54 = ATgetArgument(o_54, 1);
      {
        ATerm u_54 = NULL,w_54 = NULL;
        ATerm v_54 = NULL;
        t = SSLgetAnnotations(not_null(o_54));
        {
          v_54 = t;
          if(((u_54 != NULL) && (u_54 != v_54)))
            _fail(v_54);
          else
            u_54 = v_54;
        }
        {
          t = not_null(p_54);
          {
            ATerm y_54 = NULL;
            t = m_75(t);
            {
              w_54 = t;
              {
                t = not_null(q_54);
                {
                  ATerm a_55 = NULL;
                  t = n_75(t);
                  {
                    y_54 = t;
                    {
                      ATerm b_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(w_54), not_null(y_54)), not_null(u_54));
                      {
                        b_55 = t;
                        if(((a_55 != NULL) && (a_55 != b_55)))
                          _fail(b_55);
                        else
                          a_55 = b_55;
                      }
                      t = not_null(a_55);
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
ATerm Con_3 (ATerm t, ATerm j_75 (ATerm), ATerm k_75 (ATerm), ATerm l_75 (ATerm))
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL;
  p_55 = t;
  o_55 :
  if(match_cons(p_55, sym_Con_3))
    {
      q_55 = ATgetArgument(p_55, 0);
      r_55 = ATgetArgument(p_55, 1);
      s_55 = ATgetArgument(p_55, 2);
      {
        ATerm x_55 = NULL,z_55 = NULL;
        ATerm y_55 = NULL;
        t = SSLgetAnnotations(not_null(p_55));
        {
          y_55 = t;
          if(((x_55 != NULL) && (x_55 != y_55)))
            _fail(y_55);
          else
            x_55 = y_55;
        }
        {
          t = not_null(q_55);
          {
            ATerm b_56 = NULL;
            t = j_75(t);
            {
              z_55 = t;
              {
                t = not_null(r_55);
                {
                  ATerm d_56 = NULL;
                  t = k_75(t);
                  {
                    b_56 = t;
                    {
                      t = not_null(s_55);
                      {
                        ATerm f_56 = NULL;
                        t = l_75(t);
                        {
                          d_56 = t;
                          {
                            ATerm g_56 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(z_55), not_null(b_56), not_null(d_56)), not_null(x_55));
                            {
                              g_56 = t;
                              if(((f_56 != NULL) && (f_56 != g_56)))
                                _fail(g_56);
                              else
                                f_56 = g_56;
                            }
                            t = not_null(f_56);
                          }
                        }
                      }
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
  ATerm x_12 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, d_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
  r_56 = t;
  p_56 :
  if(match_cons(r_56, sym_SRule_1))
    {
      s_56 = ATgetArgument(r_56, 0);
      q_56 :
      if(match_cons(s_56, sym_StratRule_3))
        {
          t_56 = ATgetArgument(s_56, 0);
          u_56 = ATgetArgument(s_56, 1);
          v_56 = ATgetArgument(s_56, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_56)), (ATerm) ATmakeAppl(sym_Where_1, not_null(v_56))), not_null(t_56)));
        }
      else
        {
          if(match_cons(s_56, sym_Rule_3))
            {
              t_56 = ATgetArgument(s_56, 0);
              u_56 = ATgetArgument(s_56, 1);
              v_56 = ATgetArgument(s_56, 2);
              {
                t = not_null(t_56);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(u_56);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(u_56))), (ATerm) ATmakeAppl(sym_Where_1, not_null(v_56))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_56))));
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
ATerm Scope_2 (ATerm t, ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL;
  k_57 = t;
  j_57 :
  if(match_cons(k_57, sym_Scope_2))
    {
      l_57 = ATgetArgument(k_57, 0);
      m_57 = ATgetArgument(k_57, 1);
      {
        ATerm u_57 = NULL,w_57 = NULL;
        ATerm v_57 = NULL;
        t = SSLgetAnnotations(not_null(k_57));
        {
          v_57 = t;
          if(((u_57 != NULL) && (u_57 != v_57)))
            _fail(v_57);
          else
            u_57 = v_57;
        }
        {
          t = not_null(l_57);
          {
            ATerm y_57 = NULL;
            t = b_79(t);
            {
              w_57 = t;
              {
                t = not_null(m_57);
                {
                  ATerm a_58 = NULL;
                  t = c_79(t);
                  {
                    y_57 = t;
                    {
                      ATerm b_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(w_57), not_null(y_57)), not_null(u_57));
                      {
                        b_58 = t;
                        if(((a_58 != NULL) && (a_58 != b_58)))
                          _fail(b_58);
                        else
                          a_58 = b_58;
                      }
                      t = not_null(a_58);
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
ATerm oncetd_1 (ATerm t, ATerm y_101 (ATerm))
{
  ATerm s_58 (ATerm t)
  {
    ATerm a_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_101(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = a_13;
        t = _one(t, s_58);
      }
    return(t);
  }
  t = s_58(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL;
  u_59 = t;
  s_59 :
  if(match_cons(u_59, sym_SRule_1))
    {
      v_59 = ATgetArgument(u_59, 0);
      t_59 :
      if(match_cons(v_59, sym_Rule_3))
        {
          w_59 = ATgetArgument(v_59, 0);
          x_59 = ATgetArgument(v_59, 1);
          y_59 = ATgetArgument(v_59, 2);
          {
            ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
            ATerm s_60 = NULL;
            ATerm c_61 = NULL;
            t = new_0(t);
            {
              s_60 = t;
              {
                if(((m_60 != NULL) && (m_60 != s_60)))
                  _fail(s_60);
                else
                  m_60 = s_60;
                {
                  t = not_null(w_59);
                  {
                    ATerm o_61 = NULL;
                    ATerm e_2 (ATerm t)
                    {
                      ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,b_61 = NULL;
                      t_60 = t;
                      w_58 :
                      if(match_cons(t_60, sym_Con_3))
                        {
                          u_60 = ATgetArgument(t_60, 0);
                          w_60 = ATgetArgument(t_60, 1);
                          b_61 = ATgetArgument(t_60, 2);
                          x_58 :
                          if(match_cons(u_60, sym_Var_1))
                            {
                              v_60 = ATgetArgument(u_60, 0);
                              {
                                if(((l_60 != NULL) && (l_60 != v_60)))
                                  _fail(v_60);
                                else
                                  l_60 = v_60;
                                {
                                  if(((j_60 != NULL) && (j_60 != w_60)))
                                    _fail(w_60);
                                  else
                                    j_60 = w_60;
                                  {
                                    if(((h_60 != NULL) && (h_60 != b_61)))
                                      _fail(b_61);
                                    else
                                      h_60 = b_61;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_60));
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
                    t = oncetd_1(t, e_2);
                    {
                      c_61 = t;
                      {
                        if(((n_60 != NULL) && (n_60 != c_61)))
                          _fail(c_61);
                        else
                          n_60 = c_61;
                        {
                          t = not_null(x_59);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm d_61 = NULL,e_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL;
                              d_61 = t;
                              a_59 :
                              if(match_cons(d_61, sym_Con_3))
                                {
                                  e_61 = ATgetArgument(d_61, 0);
                                  k_61 = ATgetArgument(d_61, 1);
                                  l_61 = ATgetArgument(d_61, 2);
                                  m_59 :
                                  if(match_cons(e_61, sym_Var_1))
                                    {
                                      j_61 = ATgetArgument(e_61, 0);
                                      n_59 :
                                      if(match_cons(l_61, sym_Call_2))
                                        {
                                          m_61 = ATgetArgument(l_61, 0);
                                          n_61 = ATgetArgument(l_61, 1);
                                          q_59 :
                                          if(((ATermList) n_61 == ATempty))
                                            {
                                              {
                                                if(((l_60 != NULL) && (l_60 != j_61)))
                                                  _fail(j_61);
                                                else
                                                  l_60 = j_61;
                                                {
                                                  if(((k_60 != NULL) && (k_60 != k_61)))
                                                    _fail(k_61);
                                                  else
                                                    k_60 = k_61;
                                                  {
                                                    if(((i_60 != NULL) && (i_60 != m_61)))
                                                      _fail(m_61);
                                                    else
                                                      i_60 = m_61;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_60));
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
                            t = oncetd_1(t, f_2);
                            {
                              o_61 = t;
                              if(((o_60 != NULL) && (o_60 != o_61)))
                                _fail(o_61);
                              else
                                o_60 = o_61;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_60), not_null(o_60), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_59), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(i_60), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_60), not_null(k_60), term_w_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_60)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_60)))))));
          }
        }
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
  ATerm g_2 (ATerm t)
  {
    ATerm h_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = h_13;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm i_100 (ATerm))
{
  t = i_100(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, i_100);
      return(t);
    }
    t = _all(t, h_2);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm j_2 (ATerm t)
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            {
              ATerm r_13 = t;
              int s_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(s_13);
                }
              else
                {
                  t = r_13;
                  {
                    ATerm t_13 = t;
                    int w_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(w_13);
                      }
                    else
                      {
                        t = t_13;
                        {
                          ATerm z_13 = t;
                          int d_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(d_14);
                            }
                          else
                            {
                              t = z_13;
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
      t = repeat_1(t, j_2);
    }
    return(t);
  }
  t = topdown_1(t, i_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm i_62 = NULL;
  i_62 = t;
  h_62 :
  if(match_cons(i_62, sym__0))
    {
      ATerm k_62 = NULL,m_62 = NULL;
      ATerm e_14;
      e_14 = t;
      {
        ATerm l_62 = NULL;
        t = SSLgetAnnotations(not_null(i_62));
        {
          l_62 = t;
          if(((k_62 != NULL) && (k_62 != l_62)))
            _fail(l_62);
          else
            k_62 = l_62;
        }
      }
      t = e_14;
      {
        ATerm n_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(k_62));
        {
          n_62 = t;
          if(((m_62 != NULL) && (m_62 != n_62)))
            _fail(n_62);
          else
            m_62 = n_62;
        }
        t = not_null(m_62);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm z_62 = NULL;
  ATerm b_63 = NULL,c_63 = NULL,k_63 = NULL,m_63 = NULL;
  z_62 = t;
  {
    ATerm f_14;
    f_14 = t;
    {
      ATerm d_63 = NULL;
      ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL;
      t = not_null(z_62);
      {
        d_63 = t;
        {
          t = SSL_explode_term(not_null(d_63));
          {
            f_63 = t;
            u_62 :
            if(match_cons(f_63, sym__2))
              {
                g_63 = ATgetArgument(f_63, 0);
                h_63 = ATgetArgument(f_63, 1);
                v_62 :
                if(match_string(g_63, ""))
                  {
                    w_62 :
                    if(((ATgetType(h_63) == AT_LIST) && ((ATermList) h_63 != ATempty)))
                      {
                        i_63 = ATgetFirst((ATermList) h_63);
                        j_63 = (ATerm) ATgetNext((ATermList) h_63);
                        {
                          if(((b_63 != NULL) && (b_63 != i_63)))
                            _fail(i_63);
                          else
                            b_63 = i_63;
                          if(((c_63 != NULL) && (c_63 != j_63)))
                            _fail(j_63);
                          else
                            c_63 = j_63;
                        }
                      }
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
    }
    t = f_14;
    {
      ATerm g_14;
      g_14 = t;
      {
        ATerm l_63 = NULL;
        t = term_x_9;
        {
          l_63 = t;
          if(((k_63 != NULL) && (k_63 != l_63)))
            _fail(l_63);
          else
            k_63 = l_63;
        }
      }
      t = g_14;
      {
        t = SSL_mkterm(not_null(k_63), not_null(c_63));
        {
          m_63 = t;
          t = not_null(m_63);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm z_63 = NULL;
  ATerm b_64 = NULL,c_64 = NULL;
  z_63 = t;
  {
    ATerm d_64 = NULL;
    ATerm f_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
    t = not_null(z_63);
    {
      d_64 = t;
      {
        t = SSL_explode_term(not_null(d_64));
        {
          f_64 = t;
          w_63 :
          if(match_cons(f_64, sym__2))
            {
              l_64 = ATgetArgument(f_64, 0);
              m_64 = ATgetArgument(f_64, 1);
              x_63 :
              if(match_string(l_64, ""))
                {
                  y_63 :
                  if(((ATgetType(m_64) == AT_LIST) && ((ATermList) m_64 != ATempty)))
                    {
                      n_64 = ATgetFirst((ATermList) m_64);
                      o_64 = (ATerm) ATgetNext((ATermList) m_64);
                      {
                        if(((c_64 != NULL) && (c_64 != n_64)))
                          _fail(n_64);
                        else
                          c_64 = n_64;
                        if(((b_64 != NULL) && (b_64 != o_64)))
                          _fail(o_64);
                        else
                          b_64 = o_64;
                      }
                    }
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
    t = not_null(c_64);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm r_99 (ATerm))
{
  ATerm o_65 = NULL,q_65 = NULL,s_65 = NULL;
  ATerm f_66 (ATerm t)
  {
    ATerm h_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_65 = NULL,m_65 = NULL;
        ATerm n_14;
        n_14 = t;
        {
          ATerm l_65 = NULL;
          t = map_1(t, Thd_0);
          {
            t = r_99(t);
            {
              l_65 = t;
              if(((j_65 != NULL) && (j_65 != l_65)))
                _fail(l_65);
              else
                j_65 = l_65;
            }
          }
        }
        t = n_14;
        {
          ATerm n_65 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = f_66(t);
            {
              n_65 = t;
              if(((m_65 != NULL) && (m_65 != n_65)))
                _fail(n_65);
              else
                m_65 = n_65;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(m_65)), not_null(j_65));
        }
        LocalPopChoice(m_14);
      }
    else
      {
        t = h_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = f_66(t);
  {
    ATerm p_14;
    p_14 = t;
    {
      ATerm p_65 = NULL;
      p_65 = t;
      if(((o_65 != NULL) && (o_65 != p_65)))
        _fail(p_65);
      else
        o_65 = p_65;
    }
    t = p_14;
    {
      ATerm q_14;
      q_14 = t;
      {
        ATerm r_65 = NULL;
        t = term_x_9;
        {
          r_65 = t;
          if(((q_65 != NULL) && (q_65 != r_65)))
            _fail(r_65);
          else
            q_65 = r_65;
        }
      }
      t = q_14;
      {
        t = SSL_mkterm(not_null(q_65), not_null(o_65));
        {
          s_65 = t;
          t = not_null(s_65);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm s_66 = NULL;
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL;
  s_66 = t;
  {
    ATerm x_66 = NULL;
    ATerm y_66 = NULL;
    t = new_0(t);
    {
      x_66 = t;
      {
        if(((u_66 != NULL) && (u_66 != x_66)))
          _fail(x_66);
        else
          u_66 = x_66;
        {
          ATerm z_66 = NULL;
          t = new_0(t);
          {
            y_66 = t;
            {
              if(((v_66 != NULL) && (v_66 != y_66)))
                _fail(y_66);
              else
                v_66 = y_66;
              {
                t = new_0(t);
                {
                  z_66 = t;
                  if(((w_66 != NULL) && (w_66 != z_66)))
                    _fail(z_66);
                  else
                    w_66 = z_66;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_66)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_66)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_66)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_66))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_66), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_14), term_x_14)), not_null(v_66), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_66)), not_null(w_66), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_66)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
  g_67 = t;
  f_67 :
  if(match_cons(g_67, sym__2))
    {
      h_67 = ATgetArgument(g_67, 0);
      i_67 = ATgetArgument(g_67, 1);
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(h_67), not_null(i_67));
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            t = SSL_subtr(not_null(h_67), not_null(i_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
  o_67 = t;
  n_67 :
  if(match_cons(o_67, sym__2))
    {
      p_67 = ATgetArgument(o_67, 0);
      q_67 = ATgetArgument(o_67, 1);
      {
        ATerm b_15;
        b_15 = t;
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_67), not_null(q_67));
              LocalPopChoice(g_15);
            }
          else
            {
              t = f_15;
              t = SSL_gtr(not_null(p_67), not_null(q_67));
            }
        }
        t = b_15;
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
  ATerm w_67 = NULL;
  ATerm h_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL;
      x_67 = t;
      v_67 :
      if(match_cons(x_67, sym__2))
        {
          y_67 = ATgetArgument(x_67, 0);
          z_67 = ATgetArgument(x_67, 1);
          {
            if(((w_67 != NULL) && (w_67 != y_67)))
              _fail(y_67);
            else
              w_67 = y_67;
            if(((w_67 != NULL) && (w_67 != z_67)))
              _fail(z_67);
            else
              w_67 = z_67;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_15);
    }
  else
    {
      t = h_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm w_92 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL;
    m_68 = t;
    c_68 :
    if(match_cons(m_68, sym__2))
      {
        n_68 = ATgetArgument(m_68, 0);
        o_68 = ATgetArgument(m_68, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_68), not_null(o_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL;
    r_68 = t;
    e_68 :
    if(match_cons(r_68, sym__3))
      {
        s_68 = ATgetArgument(r_68, 0);
        t_68 = ATgetArgument(r_68, 1);
        u_68 = ATgetArgument(r_68, 2);
        f_68 :
        if(match_int(s_68, 0))
          {
            t = not_null(u_68);
          }
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
  ATerm m_2 (ATerm t)
  {
    ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL;
    x_68 = t;
    l_68 :
    if(match_cons(x_68, sym__3))
      {
        y_68 = ATgetArgument(x_68, 0);
        z_68 = ATgetArgument(x_68, 1);
        a_69 = ATgetArgument(x_68, 2);
        {
          ATerm e_69 = NULL,g_69 = NULL;
          ATerm r_15;
          r_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_68), term_v_6);
            t = geq_0(t);
          }
          t = r_15;
          {
            ATerm s_15;
            s_15 = t;
            {
              ATerm f_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_68), term_v_6);
              {
                t = subt_0(t);
                {
                  f_69 = t;
                  if(((e_69 != NULL) && (e_69 != f_69)))
                    _fail(f_69);
                  else
                    e_69 = f_69;
                }
              }
            }
            t = s_15;
            {
              ATerm h_69 = NULL;
              t = not_null(z_68);
              {
                t = w_92(t);
                {
                  h_69 = t;
                  if(((g_69 != NULL) && (g_69 != h_69)))
                    _fail(h_69);
                  else
                    g_69 = h_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(e_69), not_null(z_68), (ATerm) ATinsert(CheckATermList(not_null(a_69)), not_null(g_69)));
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
  t = for_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL;
  s_69 = t;
  r_69 :
  if(match_cons(s_69, sym__2))
    {
      t_69 = ATgetArgument(s_69, 0);
      u_69 = ATgetArgument(s_69, 1);
      {
        ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL;
        ATerm a_70 = NULL;
        ATerm b_70 = NULL;
        t = new_0(t);
        {
          a_70 = t;
          {
            if(((x_69 != NULL) && (x_69 != a_70)))
              _fail(a_70);
            else
              x_69 = a_70;
            {
              ATerm c_70 = NULL;
              t = new_0(t);
              {
                b_70 = t;
                {
                  if(((y_69 != NULL) && (y_69 != b_70)))
                    _fail(b_70);
                  else
                    y_69 = b_70;
                  {
                    t = new_0(t);
                    {
                      c_70 = t;
                      if(((z_69 != NULL) && (z_69 != c_70)))
                        _fail(c_70);
                      else
                        z_69 = c_70;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_69)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_69)))), (ATerm) ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_69))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(x_69), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_14), term_x_14)), not_null(y_69), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_69)), not_null(z_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_69)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL;
  k_70 = t;
  i_70 :
  if(match_cons(k_70, sym__2))
    {
      l_70 = ATgetArgument(k_70, 0);
      m_70 = ATgetArgument(k_70, 1);
      j_70 :
      if(((ATermList) m_70 == ATempty))
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
  return(t);
}
ATerm zipr_1 (ATerm t, ATerm w_97 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, w_97);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL;
  q_70 = t;
  p_70 :
  if(((ATgetType(q_70) == AT_LIST) && ((ATermList) q_70 != ATempty)))
    {
      r_70 = ATgetFirst((ATermList) q_70);
      s_70 = (ATerm) ATgetNext((ATermList) q_70);
      t = not_null(s_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL;
  z_70 = t;
  x_70 :
  if(((ATgetType(z_70) == AT_LIST) && ((ATermList) z_70 != ATempty)))
    {
      a_71 = ATgetFirst((ATermList) z_70);
      b_71 = (ATerm) ATgetNext((ATermList) z_70);
      y_70 :
      if(((ATermList) b_71 == ATempty))
        {
          t = not_null(a_71);
        }
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
ATerm last_0 (ATerm t)
{
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL;
  ATerm z_73 (ATerm t)
  {
    ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,z_72 = NULL;
    ATerm c_16;
    c_16 = t;
    {
      ATerm m_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL;
      ATerm n_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_72), term_v_6);
      {
        t = add_0(t);
        {
          n_72 = t;
          if(((m_72 != NULL) && (m_72 != n_72)))
            _fail(n_72);
          else
            m_72 = n_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_72), term_d_16);
        {
          t = copy_1(t, new_0);
          {
            o_72 = t;
            n_71 :
            if(((ATgetType(o_72) == AT_LIST) && ((ATermList) o_72 != ATempty)))
              {
                p_72 = ATgetFirst((ATermList) o_72);
                q_72 = (ATerm) ATgetNext((ATermList) o_72);
                {
                  ATerm r_72 = NULL;
                  if(((e_72 != NULL) && (e_72 != p_72)))
                    _fail(p_72);
                  else
                    e_72 = p_72;
                  {
                    if(((f_72 != NULL) && (f_72 != q_72)))
                      _fail(q_72);
                    else
                      f_72 = q_72;
                    {
                      t = not_null(f_72);
                      {
                        ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL;
                        t = last_0(t);
                        {
                          r_72 = t;
                          {
                            if(((d_72 != NULL) && (d_72 != r_72)))
                              _fail(r_72);
                            else
                              d_72 = r_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_72)), not_null(e_72)), not_null(f_72));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    s_72 = t;
                                    m_71 :
                                    if(match_cons(s_72, sym__6))
                                      {
                                        t_72 = ATgetArgument(s_72, 0);
                                        u_72 = ATgetArgument(s_72, 1);
                                        v_72 = ATgetArgument(s_72, 2);
                                        w_72 = ATgetArgument(s_72, 3);
                                        x_72 = ATgetArgument(s_72, 4);
                                        y_72 = ATgetArgument(s_72, 5);
                                        {
                                          if(((g_72 != NULL) && (g_72 != t_72)))
                                            _fail(t_72);
                                          else
                                            g_72 = t_72;
                                          {
                                            if(((h_72 != NULL) && (h_72 != u_72)))
                                              _fail(u_72);
                                            else
                                              h_72 = u_72;
                                            {
                                              if(((i_72 != NULL) && (i_72 != v_72)))
                                                _fail(v_72);
                                              else
                                                i_72 = v_72;
                                              {
                                                if(((j_72 != NULL) && (j_72 != w_72)))
                                                  _fail(w_72);
                                                else
                                                  j_72 = w_72;
                                                {
                                                  if(((k_72 != NULL) && (k_72 != x_72)))
                                                    _fail(x_72);
                                                  else
                                                    k_72 = x_72;
                                                  if(((l_72 != NULL) && (l_72 != y_72)))
                                                    _fail(y_72);
                                                  else
                                                    l_72 = y_72;
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
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
    t = c_16;
    {
      ATerm a_73 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_72)), not_null(i_72)), not_null(f_72));
      {
        t = concat_0(t);
        {
          a_73 = t;
          if(((z_72 != NULL) && (z_72 != a_73)))
            _fail(a_73);
          else
            z_72 = a_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(y_71), term_e_16), not_null(h_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(z_72)), not_null(e_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(y_71), not_null(j_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(y_71), not_null(l_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_72))))));
    }
    return(t);
  }
  ATerm a_74 (ATerm t)
  {
    ATerm c_73 = NULL;
    ATerm d_73 = NULL;
    t = new_0(t);
    {
      d_73 = t;
      if(((c_73 != NULL) && (c_73 != d_73)))
        _fail(d_73);
      else
        c_73 = d_73;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(y_71), term_e_16), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(y_71), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(y_71), (ATerm) ATempty))), term_w_11))));
    return(t);
  }
  ATerm b_74 (ATerm t)
  {
    ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,v_73 = NULL;
    ATerm f_16;
    f_16 = t;
    {
      ATerm n_73 = NULL;
      ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL;
      t = new_0(t);
      {
        n_73 = t;
        {
          if(((g_73 != NULL) && (g_73 != n_73)))
            _fail(n_73);
          else
            g_73 = n_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_72), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_73)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  o_73 = t;
                  s_71 :
                  if(match_cons(o_73, sym__6))
                    {
                      p_73 = ATgetArgument(o_73, 0);
                      q_73 = ATgetArgument(o_73, 1);
                      r_73 = ATgetArgument(o_73, 2);
                      s_73 = ATgetArgument(o_73, 3);
                      t_73 = ATgetArgument(o_73, 4);
                      u_73 = ATgetArgument(o_73, 5);
                      {
                        if(((h_73 != NULL) && (h_73 != p_73)))
                          _fail(p_73);
                        else
                          h_73 = p_73;
                        {
                          if(((i_73 != NULL) && (i_73 != q_73)))
                            _fail(q_73);
                          else
                            i_73 = q_73;
                          {
                            if(((j_73 != NULL) && (j_73 != r_73)))
                              _fail(r_73);
                            else
                              j_73 = r_73;
                            {
                              if(((k_73 != NULL) && (k_73 != s_73)))
                                _fail(s_73);
                              else
                                k_73 = s_73;
                              {
                                if(((l_73 != NULL) && (l_73 != t_73)))
                                  _fail(t_73);
                                else
                                  l_73 = t_73;
                                if(((m_73 != NULL) && (m_73 != u_73)))
                                  _fail(u_73);
                                else
                                  m_73 = u_73;
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
    t = f_16;
    {
      ATerm y_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_73), not_null(l_73));
      {
        t = conc_0(t);
        {
          y_73 = t;
          if(((v_73 != NULL) && (v_73 != y_73)))
            _fail(y_73);
          else
            v_73 = y_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(y_71), term_g_16), not_null(i_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(v_73)), not_null(g_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(y_71), not_null(k_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(y_71), not_null(m_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_73))))));
    }
    return(t);
  }
  x_71 = t;
  u_71 :
  if(match_cons(x_71, sym__3))
    {
      y_71 = ATgetArgument(x_71, 0);
      z_71 = ATgetArgument(x_71, 1);
      a_72 = ATgetArgument(x_71, 2);
      v_71 :
      if(match_string(z_71, "T"))
        {
          w_71 :
          if(match_int(a_72, 0))
            {
              ATerm m_16 = t;
              int r_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_73(t);
                  LocalPopChoice(r_16);
                }
              else
                {
                  t = m_16;
                  t = a_74(t);
                }
            }
          else
            {
              t = z_73(t);
            }
        }
      else
        {
          if(match_string(z_71, "D"))
            {
              t = b_74(t);
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
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL;
  q_74 = t;
  n_74 :
  if(match_cons(q_74, sym__2))
    {
      r_74 = ATgetArgument(q_74, 0);
      w_74 = ATgetArgument(q_74, 1);
      o_74 :
      if(match_cons(r_74, sym__2))
        {
          s_74 = ATgetArgument(r_74, 0);
          v_74 = ATgetArgument(r_74, 1);
          p_74 :
          if(match_cons(s_74, sym_Mod_2))
            {
              t_74 = ATgetArgument(s_74, 0);
              u_74 = ATgetArgument(s_74, 1);
              {
                ATerm b_75 = NULL;
                ATerm c_75 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(t_74), not_null(u_74), not_null(v_74));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      c_75 = t;
                      if(((b_75 != NULL) && (b_75 != c_75)))
                        _fail(c_75);
                      else
                        b_75 = c_75;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_75), not_null(w_74));
              }
            }
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
ATerm get_definition_0 (ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm i_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL;
  i_75 = t;
  g_75 :
  if(match_cons(i_75, sym__5))
    {
      o_75 = ATgetArgument(i_75, 0);
      r_75 = ATgetArgument(i_75, 1);
      u_75 = ATgetArgument(i_75, 2);
      v_75 = ATgetArgument(i_75, 3);
      w_75 = ATgetArgument(i_75, 4);
      h_75 :
      if(((ATgetType(o_75) == AT_LIST) && ((ATermList) o_75 != ATempty)))
        {
          p_75 = ATgetFirst((ATermList) o_75);
          q_75 = (ATerm) ATgetNext((ATermList) o_75);
          t = (ATerm) ATmakeAppl(sym__5, not_null(q_75), not_null(r_75), not_null(u_75), not_null(v_75), (ATerm) ATinsert(CheckATermList(not_null(w_75)), not_null(p_75)));
        }
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
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
  g_76 = t;
  f_76 :
  if(match_cons(g_76, sym__2))
    {
      h_76 = ATgetArgument(g_76, 0);
      i_76 = ATgetArgument(g_76, 1);
      {
        t = not_null(h_76);
        {
          ATerm n_2 (ATerm t)
          {
            t = not_null(i_76);
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
  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL;
  p_76 = t;
  n_76 :
  if(match_cons(p_76, sym__2))
    {
      q_76 = ATgetArgument(p_76, 0);
      r_76 = ATgetArgument(p_76, 1);
      o_76 :
      if(((ATgetType(r_76) == AT_LIST) && ((ATermList) r_76 != ATempty)))
        {
          s_76 = ATgetFirst((ATermList) r_76);
          t_76 = (ATerm) ATgetNext((ATermList) r_76);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_76)), not_null(s_76)), not_null(t_76));
        }
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
  ATerm c_77 = NULL,d_77 = NULL,g_77 = NULL;
  c_77 = t;
  b_77 :
  if(match_cons(c_77, sym__2))
    {
      d_77 = ATgetArgument(c_77, 0);
      g_77 = ATgetArgument(c_77, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_77)), not_null(d_77));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL;
  o_77 = t;
  l_77 :
  if(match_cons(o_77, sym__2))
    {
      p_77 = ATgetArgument(o_77, 0);
      s_77 = ATgetArgument(o_77, 1);
      m_77 :
      if(((ATgetType(p_77) == AT_LIST) && ((ATermList) p_77 != ATempty)))
        {
          q_77 = ATgetFirst((ATermList) p_77);
          r_77 = (ATerm) ATgetNext((ATermList) p_77);
          n_77 :
          if(((ATgetType(s_77) == AT_LIST) && ((ATermList) s_77 != ATempty)))
            {
              t_77 = ATgetFirst((ATermList) s_77);
              u_77 = (ATerm) ATgetNext((ATermList) s_77);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(q_77), not_null(t_77)), (ATerm) ATmakeAppl(sym__2, not_null(r_77), not_null(u_77)));
            }
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
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL;
  n_78 = t;
  k_78 :
  if(match_cons(n_78, sym__2))
    {
      o_78 = ATgetArgument(n_78, 0);
      p_78 = ATgetArgument(n_78, 1);
      l_78 :
      if(((ATermList) o_78 == ATempty))
        {
          m_78 :
          if(((ATermList) p_78 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm))
{
  ATerm r_78 (ATerm t)
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_97(t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
          t = p_97(t);
          {
            t = _2(t, r_97, r_78);
            t = q_97(t);
          }
        }
      }
    return(t);
  }
  t = r_78(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm t_97 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, t_97);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL;
  i_79 = t;
  a_79 :
  if(((ATgetType(i_79) == AT_LIST) && ((ATermList) i_79 != ATempty)))
    {
      j_79 = ATgetFirst((ATermList) i_79);
      m_79 = (ATerm) ATgetNext((ATermList) i_79);
      d_79 :
      if(match_cons(j_79, sym__2))
        {
          k_79 = ATgetArgument(j_79, 0);
          l_79 = ATgetArgument(j_79, 1);
          {
            ATerm q_79 = NULL,t_79 = NULL,a_80 = NULL,k_80 = NULL;
            ATerm d_17;
            d_17 = t;
            {
              ATerm u_79 = NULL;
              ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL;
              t = not_null(l_79);
              {
                u_79 = t;
                {
                  t = SSL_explode_term(not_null(u_79));
                  {
                    w_79 = t;
                    v_78 :
                    if(match_cons(w_79, sym__2))
                      {
                        x_79 = ATgetArgument(w_79, 0);
                        y_79 = ATgetArgument(w_79, 1);
                        {
                          if(((q_79 != NULL) && (q_79 != x_79)))
                            _fail(x_79);
                          else
                            q_79 = x_79;
                          if(((t_79 != NULL) && (t_79 != y_79)))
                            _fail(y_79);
                          else
                            t_79 = y_79;
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
            t = d_17;
            {
              ATerm i_17;
              i_17 = t;
              {
                ATerm c_80 = NULL;
                ATerm e_80 = NULL,i_80 = NULL,j_80 = NULL;
                t = not_null(k_79);
                {
                  c_80 = t;
                  {
                    t = SSL_explode_term(not_null(c_80));
                    {
                      e_80 = t;
                      y_78 :
                      if(match_cons(e_80, sym__2))
                        {
                          i_80 = ATgetArgument(e_80, 0);
                          j_80 = ATgetArgument(e_80, 1);
                          {
                            if(((q_79 != NULL) && (q_79 != i_80)))
                              _fail(i_80);
                            else
                              q_79 = i_80;
                            if(((a_80 != NULL) && (a_80 != j_80)))
                              _fail(j_80);
                            else
                              a_80 = j_80;
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
              t = i_17;
              {
                ATerm l_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_80), not_null(t_79));
                {
                  t = zip_1(t, _id);
                  {
                    l_80 = t;
                    if(((k_80 != NULL) && (k_80 != l_80)))
                      _fail(l_80);
                    else
                      k_80 = l_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_80), not_null(m_79));
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
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL;
  y_80 = t;
  w_80 :
  if(((ATgetType(y_80) == AT_LIST) && ((ATermList) y_80 != ATempty)))
    {
      z_80 = ATgetFirst((ATermList) y_80);
      c_81 = (ATerm) ATgetNext((ATermList) y_80);
      x_80 :
      if(match_cons(z_80, sym__2))
        {
          a_81 = ATgetArgument(z_80, 0);
          b_81 = ATgetArgument(z_80, 1);
          {
            ATerm e_81 = NULL;
            if(((a_81 != NULL) && (a_81 != b_81)))
              _fail(b_81);
            else
              a_81 = b_81;
            {
              if(((e_81 != NULL) && (e_81 != c_81)))
                _fail(c_81);
              else
                e_81 = c_81;
              t = not_null(e_81);
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
ATerm diff_0 (ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL;
      j_81 = t;
      h_81 :
      if(match_cons(j_81, sym__2))
        {
          k_81 = ATgetArgument(j_81, 0);
          l_81 = ATgetArgument(j_81, 1);
          {
            t = not_null(k_81);
            {
              ATerm r_81 (ATerm t)
              {
                ATerm s_17 = t;
                int t_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(t_17);
                  }
                else
                  {
                    t = s_17;
                    {
                      ATerm u_17 = t;
                      int c_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_2 (ATerm t)
                          {
                            t = not_null(l_81);
                            return(t);
                          }
                          t = HdMember_1(t, o_2);
                          t = r_81(t);
                          LocalPopChoice(c_18);
                        }
                      else
                        {
                          t = u_17;
                          t = Cons_2(t, _id, r_81);
                        }
                    }
                  }
                return(t);
              }
              t = r_81(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      {
        ATerm p_2 (ATerm t)
        {
          ATerm o_81 = NULL;
          o_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(o_81));
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_2 (ATerm t)
              {
                ATerm f_18 = t;
                int q_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(q_18);
                  }
                else
                  {
                    t = f_18;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, s_2);
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, p_2, q_2, r_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm))
{
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL;
  d_82 = t;
  b_82 :
  if(match_cons(d_82, sym__5))
    {
      e_82 = ATgetArgument(d_82, 0);
      n_82 = ATgetArgument(d_82, 1);
      o_82 = ATgetArgument(d_82, 2);
      p_82 = ATgetArgument(d_82, 3);
      q_82 = ATgetArgument(d_82, 4);
      c_82 :
      if(((ATgetType(e_82) == AT_LIST) && ((ATermList) e_82 != ATempty)))
        {
          f_82 = ATgetFirst((ATermList) e_82);
          m_82 = (ATerm) ATgetNext((ATermList) e_82);
          {
            ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL,h_83 = NULL,j_83 = NULL,l_83 = NULL;
            ATerm s_18;
            s_18 = t;
            {
              ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_82), not_null(o_82));
              {
                t = f_80(t);
                {
                  b_83 = t;
                  x_81 :
                  if(match_cons(b_83, sym__2))
                    {
                      c_83 = ATgetArgument(b_83, 0);
                      d_83 = ATgetArgument(b_83, 1);
                      {
                        ATerm e_83 = NULL;
                        if(((y_82 != NULL) && (y_82 != c_83)))
                          _fail(c_83);
                        else
                          y_82 = c_83;
                        {
                          if(((x_82 != NULL) && (x_82 != d_83)))
                            _fail(d_83);
                          else
                            x_82 = d_83;
                          {
                            t = not_null(y_82);
                            {
                              ATerm g_83 = NULL;
                              t = g_80(t);
                              {
                                e_83 = t;
                                {
                                  if(((z_82 != NULL) && (z_82 != e_83)))
                                    _fail(e_83);
                                  else
                                    z_82 = e_83;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_82), not_null(n_82));
                                    {
                                      t = diff_0(t);
                                      {
                                        g_83 = t;
                                        if(((a_83 != NULL) && (a_83 != g_83)))
                                          _fail(g_83);
                                        else
                                          a_83 = g_83;
                                      }
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
            t = s_18;
            {
              ATerm t_18;
              t_18 = t;
              {
                ATerm i_83 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_83), not_null(m_82));
                {
                  t = conc_0(t);
                  {
                    i_83 = t;
                    if(((h_83 != NULL) && (h_83 != i_83)))
                      _fail(i_83);
                    else
                      h_83 = i_83;
                  }
                }
              }
              t = t_18;
              {
                ATerm u_18;
                u_18 = t;
                {
                  ATerm k_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_83), not_null(n_82));
                  {
                    t = conc_0(t);
                    {
                      k_83 = t;
                      if(((j_83 != NULL) && (j_83 != k_83)))
                        _fail(k_83);
                      else
                        j_83 = k_83;
                    }
                  }
                }
                t = u_18;
                {
                  ATerm m_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_82), not_null(y_82), not_null(p_82));
                  {
                    t = h_80(t);
                    {
                      m_83 = t;
                      if(((l_83 != NULL) && (l_83 != m_83)))
                        _fail(m_83);
                      else
                        l_83 = m_83;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(h_83), not_null(j_83), not_null(x_82), not_null(l_83), not_null(q_82));
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
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
  a_84 = t;
  w_83 :
  if(match_cons(a_84, sym__5))
    {
      b_84 = ATgetArgument(a_84, 0);
      c_84 = ATgetArgument(a_84, 1);
      g_84 = ATgetArgument(a_84, 2);
      h_84 = ATgetArgument(a_84, 3);
      i_84 = ATgetArgument(a_84, 4);
      x_83 :
      if(((ATermList) b_84 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_84), not_null(i_84));
        }
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
  ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL;
  s_84 = t;
  r_84 :
  if(match_cons(s_84, sym__3))
    {
      t_84 = ATgetArgument(s_84, 0);
      u_84 = ATgetArgument(s_84, 1);
      v_84 = ATgetArgument(s_84, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(t_84), not_null(t_84), not_null(u_84), not_null(v_84), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm v_87 (ATerm), ATerm w_87 (ATerm))
{
  ATerm a_85 (ATerm t)
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_87(t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        {
          t = w_87(t);
          t = a_85(t);
        }
      }
    return(t);
  }
  t = a_85(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm a_88 (ATerm))
{
  t = y_87(t);
  t = while_not_2(t, z_87, a_88);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm q_80 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm y_18 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, o_80, p_80, q_80);
        LocalPopChoice(d_19);
      }
    else
      {
        t = y_18;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, t_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm w_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, w_2);
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL;
    d_85 = t;
    c_85 :
    if(match_cons(d_85, sym__3))
      {
        e_85 = ATgetArgument(d_85, 0);
        f_85 = ATgetArgument(d_85, 1);
        g_85 = ATgetArgument(d_85, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(g_85)), not_null(f_85));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, u_2, v_2);
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        {
          t = MissingDefs_0(t);
          {
            t = term_v_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_79 (ATerm))
{
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
  p_85 = t;
  o_85 :
  if(match_cons(p_85, sym__2))
    {
      q_85 = ATgetArgument(p_85, 0);
      r_85 = ATgetArgument(p_85, 1);
      {
        ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL;
        ATerm h_19;
        h_19 = t;
        {
          ATerm x_85 = NULL;
          ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL;
          t = z_79(t);
          {
            x_85 = t;
            {
              if(((u_85 != NULL) && (u_85 != x_85)))
                _fail(x_85);
              else
                u_85 = x_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(u_85), not_null(q_85), not_null(r_85));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_19 = t;
                    int j_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_85), term_p_19);
                        t = table_get_0(t);
                        LocalPopChoice(j_19);
                      }
                    else
                      {
                        t = i_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      y_85 = t;
                      n_85 :
                      if(((ATgetType(y_85) == AT_LIST) && ((ATermList) y_85 != ATempty)))
                        {
                          z_85 = ATgetFirst((ATermList) y_85);
                          a_86 = (ATerm) ATgetNext((ATermList) y_85);
                          {
                            if(((v_85 != NULL) && (v_85 != z_85)))
                              _fail(z_85);
                            else
                              v_85 = z_85;
                            {
                              if(((w_85 != NULL) && (w_85 != a_86)))
                                _fail(a_86);
                              else
                                w_85 = a_86;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(u_85), term_p_19, (ATerm) ATinsert(CheckATermList(not_null(w_85)), (ATerm) ATinsert(CheckATermList(not_null(v_85)), not_null(q_85))));
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
        t = h_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm m_93 (ATerm))
{
  ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL;
  h_86 = t;
  g_86 :
  if(((ATgetType(h_86) == AT_LIST) && ((ATermList) h_86 != ATempty)))
    {
      i_86 = ATgetFirst((ATermList) h_86);
      j_86 = (ATerm) ATgetNext((ATermList) h_86);
      {
        t = m_93(t);
        {
          ATerm x_2 (ATerm t)
          {
            ATerm m_86 = NULL;
            m_86 = t;
            if(((i_86 != NULL) && (i_86 != m_86)))
              _fail(m_86);
            else
              i_86 = m_86;
            return(t);
          }
          t = fetch_1(t, x_2);
        }
        t = not_null(j_86);
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
  ATerm r_86 = NULL,s_86 = NULL,t_86 = NULL;
  r_86 = t;
  q_86 :
  if(match_cons(r_86, sym__2))
    {
      s_86 = ATgetArgument(r_86, 0);
      t_86 = ATgetArgument(r_86, 1);
      {
        t = not_null(s_86);
        {
          ATerm x_86 (ATerm t)
          {
            ATerm r_19 = t;
            int s_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_86);
                LocalPopChoice(s_19);
              }
            else
              {
                t = r_19;
                {
                  ATerm t_19 = t;
                  int u_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_2 (ATerm t)
                      {
                        t = not_null(t_86);
                        return(t);
                      }
                      t = HdMember_1(t, y_2);
                      t = x_86(t);
                      LocalPopChoice(u_19);
                    }
                  else
                    {
                      t = t_19;
                      t = Cons_2(t, _id, x_86);
                    }
                }
              }
            return(t);
          }
          t = x_86(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Arities_0 (ATerm t)
{
  ATerm c_87 = NULL;
  ATerm i_87 = NULL;
  c_87 = t;
  {
    ATerm j_87 = NULL,k_87 = NULL,l_87 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(c_87));
    {
      ATerm z_2 (ATerm t)
      {
        t = term_v_19;
        return(t);
      }
      t = rewrite_1(t, z_2);
      {
        j_87 = t;
        a_87 :
        if(match_cons(j_87, sym_Defined_2))
          {
            k_87 = ATgetArgument(j_87, 0);
            l_87 = ATgetArgument(j_87, 1);
            b_87 :
            if(match_string(k_87, "f_0"))
              {
                if(((i_87 != NULL) && (i_87 != l_87)))
                  _fail(l_87);
                else
                  i_87 = l_87;
              }
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
    t = not_null(i_87);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL;
  q_87 = t;
  p_87 :
  if(((ATgetType(q_87) == AT_LIST) && ((ATermList) q_87 != ATempty)))
    {
      r_87 = ATgetFirst((ATermList) q_87);
      s_87 = (ATerm) ATgetNext((ATermList) q_87);
      t = not_null(r_87);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm e_88 = NULL,f_88 = NULL,g_88 = NULL;
  e_88 = t;
  d_88 :
  if(match_cons(e_88, sym__2))
    {
      f_88 = ATgetArgument(e_88, 0);
      g_88 = ATgetArgument(e_88, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_88), not_null(g_88));
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
ATerm rewrite_1 (ATerm t, ATerm b_80 (ATerm))
{
  ATerm m_88 = NULL;
  ATerm o_88 = NULL;
  m_88 = t;
  {
    ATerm p_88 = NULL;
    t = term_d_16;
    {
      t = b_80(t);
      {
        p_88 = t;
        if(((o_88 != NULL) && (o_88 != p_88)))
          _fail(p_88);
        else
          o_88 = p_88;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_88), not_null(m_88));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL;
  x_88 = t;
  w_88 :
  if(match_cons(x_88, sym__2))
    {
      y_88 = ATgetArgument(x_88, 0);
      z_88 = ATgetArgument(x_88, 1);
      {
        ATerm c_89 = NULL,d_89 = NULL;
        ATerm e_89 = NULL,f_89 = NULL,g_89 = NULL,h_89 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(z_88), not_null(y_88));
        {
          ATerm c_3 (ATerm t)
          {
            t = term_y_19;
            return(t);
          }
          t = rewrite_1(t, c_3);
          {
            e_89 = t;
            u_88 :
            if(match_cons(e_89, sym_Defined_3))
              {
                f_89 = ATgetArgument(e_89, 0);
                g_89 = ATgetArgument(e_89, 1);
                h_89 = ATgetArgument(e_89, 2);
                v_88 :
                if(match_string(f_89, "e_0"))
                  {
                    if(((c_89 != NULL) && (c_89 != g_89)))
                      _fail(g_89);
                    else
                      c_89 = g_89;
                    if(((d_89 != NULL) && (d_89 != h_89)))
                      _fail(h_89);
                    else
                      d_89 = h_89;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(d_89)), not_null(c_89));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm))
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_92(t);
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      {
        ATerm o_89 = NULL,p_89 = NULL,q_89 = NULL;
        o_89 = t;
        n_89 :
        if(((ATgetType(o_89) == AT_LIST) && ((ATermList) o_89 != ATempty)))
          {
            p_89 = ATgetFirst((ATermList) o_89);
            q_89 = (ATerm) ATgetNext((ATermList) o_89);
            {
              ATerm t_89 = NULL,v_89 = NULL;
              ATerm b_20;
              b_20 = t;
              {
                ATerm u_89 = NULL;
                t = not_null(p_89);
                {
                  t = l_92(t);
                  {
                    u_89 = t;
                    if(((t_89 != NULL) && (t_89 != u_89)))
                      _fail(u_89);
                    else
                      t_89 = u_89;
                  }
                }
              }
              t = b_20;
              {
                ATerm w_89 = NULL;
                t = not_null(q_89);
                {
                  t = foldr_3(t, j_92, k_92, l_92);
                  {
                    w_89 = t;
                    if(((v_89 != NULL) && (v_89 != w_89)))
                      _fail(w_89);
                    else
                      v_89 = w_89;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_89), not_null(v_89));
                  t = k_92(t);
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
ATerm length_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    t = term_g_20;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_v_6;
    return(t);
  }
  t = foldr_3(t, d_3, add_0, e_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL;
    l_90 = t;
    k_90 :
    if(match_cons(l_90, sym_SDef_3))
      {
        m_90 = ATgetArgument(l_90, 0);
        n_90 = ATgetArgument(l_90, 1);
        o_90 = ATgetArgument(l_90, 2);
        {
          ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
          ATerm h_20;
          h_20 = t;
          {
            ATerm w_90 = NULL;
            t = not_null(n_90);
            {
              ATerm x_90 = NULL;
              t = length_0(t);
              {
                w_90 = t;
                {
                  if(((u_90 != NULL) && (u_90 != w_90)))
                    _fail(w_90);
                  else
                    u_90 = w_90;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_90), not_null(u_90));
                    {
                      ATerm y_90 = NULL,a_91 = NULL;
                      ATerm i_20 = t;
                      int j_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(j_20);
                        }
                      else
                        {
                          t = i_20;
                          t = (ATerm) ATempty;
                        }
                      {
                        x_90 = t;
                        {
                          if(((t_90 != NULL) && (t_90 != x_90)))
                            _fail(x_90);
                          else
                            t_90 = x_90;
                          {
                            ATerm z_90 = NULL;
                            t = not_null(m_90);
                            {
                              ATerm k_20 = t;
                              int l_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(l_20);
                                }
                              else
                                {
                                  t = k_20;
                                  t = (ATerm) ATempty;
                                }
                              {
                                z_90 = t;
                                if(((y_90 != NULL) && (y_90 != z_90)))
                                  _fail(z_90);
                                else
                                  y_90 = z_90;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(u_90)), not_null(y_90));
                              {
                                t = union_0(t);
                                {
                                  a_91 = t;
                                  {
                                    if(((v_90 != NULL) && (v_90 != a_91)))
                                      _fail(a_91);
                                    else
                                      v_90 = a_91;
                                    {
                                      ATerm m_20;
                                      m_20 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(u_90), not_null(m_90)), (ATerm) ATmakeAppl(sym_Defined_3, term_n_20, not_null(l_90), not_null(t_90)));
                                        {
                                          ATerm g_3 (ATerm t)
                                          {
                                            t = term_y_19;
                                            return(t);
                                          }
                                          t = assert_1(t, g_3);
                                        }
                                      }
                                      t = m_20;
                                      {
                                        ATerm s_20;
                                        s_20 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(m_90)), (ATerm) ATmakeAppl(sym_Defined_2, term_t_20, not_null(v_90)));
                                          {
                                            ATerm h_3 (ATerm t)
                                            {
                                              t = term_v_19;
                                              return(t);
                                            }
                                            t = assert_1(t, h_3);
                                          }
                                        }
                                        t = s_20;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = h_20;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, f_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm h_91 = NULL;
  ATerm i_91 = NULL;
  t = sort_defs_0(t);
  {
    i_91 = t;
    if(((h_91 != NULL) && (h_91 != i_91)))
      _fail(i_91);
    else
      h_91 = i_91;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_y_20), not_null(h_91), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm x_76 (ATerm))
{
  ATerm p_91 = NULL,q_91 = NULL;
  p_91 = t;
  o_91 :
  if(match_cons(p_91, sym_Strategies_1))
    {
      q_91 = ATgetArgument(p_91, 0);
      {
        ATerm t_91 = NULL,v_91 = NULL;
        ATerm u_91 = NULL;
        t = SSLgetAnnotations(not_null(p_91));
        {
          u_91 = t;
          if(((t_91 != NULL) && (t_91 != u_91)))
            _fail(u_91);
          else
            t_91 = u_91;
        }
        {
          t = not_null(q_91);
          {
            ATerm x_91 = NULL;
            t = x_76(t);
            {
              v_91 = t;
              {
                ATerm y_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(v_91)), not_null(t_91));
                {
                  y_91 = t;
                  if(((x_91 != NULL) && (x_91 != y_91)))
                    _fail(y_91);
                  else
                    x_91 = y_91;
                }
                t = not_null(x_91);
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
ATerm Cons_2 (ATerm t, ATerm g_79 (ATerm), ATerm h_79 (ATerm))
{
  ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL;
  o_92 = t;
  n_92 :
  if(((ATgetType(o_92) == AT_LIST) && ((ATermList) o_92 != ATempty)))
    {
      p_92 = ATgetFirst((ATermList) o_92);
      q_92 = (ATerm) ATgetNext((ATermList) o_92);
      {
        ATerm u_92 = NULL,y_92 = NULL;
        ATerm x_92 = NULL;
        t = SSLgetAnnotations(not_null(o_92));
        {
          x_92 = t;
          if(((u_92 != NULL) && (u_92 != x_92)))
            _fail(x_92);
          else
            u_92 = x_92;
        }
        {
          t = not_null(p_92);
          {
            ATerm a_93 = NULL;
            t = g_79(t);
            {
              y_92 = t;
              {
                t = not_null(q_92);
                {
                  ATerm c_93 = NULL;
                  t = h_79(t);
                  {
                    a_93 = t;
                    {
                      ATerm d_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_93)), not_null(y_92)), not_null(u_92));
                      {
                        d_93 = t;
                        if(((c_93 != NULL) && (c_93 != d_93)))
                          _fail(d_93);
                        else
                          c_93 = d_93;
                      }
                      t = not_null(c_93);
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
ATerm Specification_1 (ATerm t, ATerm z_76 (ATerm))
{
  ATerm b_94 = NULL,c_94 = NULL;
  b_94 = t;
  a_94 :
  if(match_cons(b_94, sym_Specification_1))
    {
      c_94 = ATgetArgument(b_94, 0);
      {
        ATerm f_94 = NULL,h_94 = NULL;
        ATerm g_94 = NULL;
        t = SSLgetAnnotations(not_null(b_94));
        {
          g_94 = t;
          if(((f_94 != NULL) && (f_94 != g_94)))
            _fail(g_94);
          else
            f_94 = g_94;
        }
        {
          t = not_null(c_94);
          {
            ATerm j_94 = NULL;
            t = z_76(t);
            {
              h_94 = t;
              {
                ATerm k_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(h_94)), not_null(f_94));
                {
                  k_94 = t;
                  if(((j_94 != NULL) && (j_94 != k_94)))
                    _fail(k_94);
                  else
                    j_94 = k_94;
                }
                t = not_null(j_94);
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
ATerm _2 (ATerm t, ATerm h_68 (ATerm), ATerm i_68 (ATerm))
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL;
  v_94 = t;
  u_94 :
  if(match_cons(v_94, sym__2))
    {
      w_94 = ATgetArgument(v_94, 0);
      x_94 = ATgetArgument(v_94, 1);
      {
        ATerm b_95 = NULL,d_95 = NULL;
        ATerm c_95 = NULL;
        t = SSLgetAnnotations(not_null(v_94));
        {
          c_95 = t;
          if(((b_95 != NULL) && (b_95 != c_95)))
            _fail(c_95);
          else
            b_95 = c_95;
        }
        {
          t = not_null(w_94);
          {
            ATerm f_95 = NULL;
            t = h_68(t);
            {
              d_95 = t;
              {
                t = not_null(x_94);
                {
                  ATerm h_95 = NULL;
                  t = i_68(t);
                  {
                    f_95 = t;
                    {
                      ATerm i_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_95), not_null(f_95)), not_null(b_95));
                      {
                        i_95 = t;
                        if(((h_95 != NULL) && (h_95 != i_95)))
                          _fail(i_95);
                        else
                          h_95 = i_95;
                      }
                      t = not_null(h_95);
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
  ATerm s_95 = NULL;
  ATerm a_21;
  a_21 = t;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm t_95 = NULL,u_95 = NULL;
      t_95 = t;
      p_95 :
      if(match_cons(t_95, sym_Program_1))
        {
          u_95 = ATgetArgument(t_95, 0);
          if(((s_95 != NULL) && (s_95 != u_95)))
            _fail(u_95);
          else
            s_95 = u_95;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, i_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_21), not_null(s_95)), term_d_21));
      {
        t = printnl_0(t);
        {
          t = term_v_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_f_21));
  {
    t = printnl_0(t);
    {
      t = term_v_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_95 = NULL;
  x_95 = t;
  t = SSL_TicksToSeconds(not_null(x_95));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_96 = NULL,h_96 = NULL,i_96 = NULL;
  g_96 = t;
  d_96 :
  if(match_cons(g_96, sym__2))
    {
      h_96 = ATgetArgument(g_96, 0);
      i_96 = ATgetArgument(g_96, 1);
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_96), not_null(i_96));
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            t = SSL_addr(not_null(h_96), not_null(i_96));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_92 (ATerm), ATerm i_92 (ATerm))
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_92(t);
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL;
        p_96 = t;
        o_96 :
        if(((ATgetType(p_96) == AT_LIST) && ((ATermList) p_96 != ATempty)))
          {
            q_96 = ATgetFirst((ATermList) p_96);
            r_96 = (ATerm) ATgetNext((ATermList) p_96);
            {
              ATerm u_96 = NULL;
              ATerm v_96 = NULL;
              t = not_null(r_96);
              {
                t = foldr_2(t, h_92, i_92);
                {
                  v_96 = t;
                  if(((u_96 != NULL) && (u_96 != v_96)))
                    _fail(v_96);
                  else
                    u_96 = v_96;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_96), not_null(u_96));
                t = i_92(t);
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
ATerm crush_2 (ATerm t, ATerm v_93 (ATerm), ATerm w_93 (ATerm))
{
  ATerm c_97 = NULL;
  ATerm e_97 = NULL;
  c_97 = t;
  {
    ATerm f_97 = NULL;
    ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL;
    t = not_null(c_97);
    {
      f_97 = t;
      {
        t = SSL_explode_term(not_null(f_97));
        {
          i_97 = t;
          b_97 :
          if(match_cons(i_97, sym__2))
            {
              j_97 = ATgetArgument(i_97, 0);
              k_97 = ATgetArgument(i_97, 1);
              if(((e_97 != NULL) && (e_97 != k_97)))
                _fail(k_97);
              else
                e_97 = k_97;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_97);
      t = foldr_2(t, v_93, w_93);
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
    ATerm j_3 (ATerm t)
    {
      t = term_g_20;
      return(t);
    }
    t = crush_2(t, j_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL;
  ATerm k_3 (ATerm t)
  {
    ATerm j_98 = NULL;
    ATerm l_3 (ATerm t)
    {
      ATerm k_21 = t;
      if((PushChoice() == 0))
        {
          ATerm m_3 (ATerm t)
          {
            ATerm e_98 = NULL;
            e_98 = t;
            u_97 :
            if(!(match_cons(e_98, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, m_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_21;
        }
      return(t);
    }
    t = _2(t, l_3, _id);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm o_3 (ATerm t)
        {
          ATerm f_98 = NULL,g_98 = NULL;
          f_98 = t;
          x_97 :
          if(match_cons(f_98, sym_Runtime_1))
            {
              g_98 = ATgetArgument(f_98, 0);
              if(((c_98 != NULL) && (c_98 != g_98)))
                _fail(g_98);
              else
                c_98 = g_98;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, o_3);
        return(t);
      }
      t = _2(t, n_3, _id);
      {
        ATerm p_3 (ATerm t)
        {
          ATerm q_3 (ATerm t)
          {
            ATerm h_98 = NULL,i_98 = NULL;
            h_98 = t;
            a_98 :
            if(match_cons(h_98, sym_Program_1))
              {
                i_98 = ATgetArgument(h_98, 0);
                if(((d_98 != NULL) && (d_98 != i_98)))
                  _fail(i_98);
                else
                  d_98 = i_98;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_3);
          return(t);
        }
        t = _2(t, p_3, _id);
        {
          ATerm k_98 = NULL;
          t = run_time_0(t);
          {
            k_98 = t;
            if(((j_98 != NULL) && (j_98 != k_98)))
              _fail(k_98);
            else
              j_98 = k_98;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_21), not_null(j_98)), term_m_21), not_null(d_98)));
            t = printnl_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, k_3);
  {
    t = term_g_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL;
  q_98 = t;
  p_98 :
  if(match_cons(q_98, sym__2))
    {
      r_98 = ATgetArgument(q_98, 0);
      s_98 = ATgetArgument(q_98, 1);
      t = SSL_WriteToTextFile(not_null(r_98), not_null(s_98));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL;
  y_98 = t;
  x_98 :
  if(match_cons(y_98, sym__2))
    {
      z_98 = ATgetArgument(y_98, 0);
      a_99 = ATgetArgument(y_98, 1);
      t = SSL_WriteToBinaryFile(not_null(z_98), not_null(a_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm k_99 = NULL;
  ATerm o_21;
  o_21 = t;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm q_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 (ATerm t)
          {
            ATerm l_99 = NULL,m_99 = NULL;
            l_99 = t;
            h_99 :
            if(match_cons(l_99, sym_Output_1))
              {
                m_99 = ATgetArgument(l_99, 0);
                if(((k_99 != NULL) && (k_99 != m_99)))
                  _fail(m_99);
                else
                  k_99 = m_99;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_3);
          LocalPopChoice(s_21);
        }
      else
        {
          t = q_21;
          {
            ATerm n_99 = NULL;
            t = term_t_21;
            {
              n_99 = t;
              if(((k_99 != NULL) && (k_99 != n_99)))
                _fail(n_99);
              else
                k_99 = n_99;
            }
          }
        }
      return(t);
    }
    t = _2(t, r_3, _id);
  }
  t = o_21;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm u_3 (ATerm t)
      {
        t = not_null(k_99);
        return(t);
      }
      t = split_2(t, u_3, _id);
      return(t);
    }
    t = _2(t, _id, t_3);
    {
      ATerm c_22 = t;
      int d_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_3 (ATerm t)
          {
            ATerm w_3 (ATerm t)
            {
              ATerm o_99 = NULL;
              o_99 = t;
              j_99 :
              if(!(match_cons(o_99, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, w_3);
            return(t);
          }
          t = _2(t, v_3, WriteToBinaryFile_0);
          LocalPopChoice(d_22);
        }
      else
        {
          t = c_22;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_84 (ATerm))
{
  ATerm x_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL;
  ATerm e_22;
  e_22 = t;
  t = dtime_0(t);
  t = e_22;
  {
    t = q_84(t);
    {
      ATerm f_22;
      f_22 = t;
      {
        ATerm y_99 = NULL;
        t = dtime_0(t);
        {
          y_99 = t;
          if(((x_99 != NULL) && (x_99 != y_99)))
            _fail(y_99);
          else
            x_99 = y_99;
        }
      }
      t = f_22;
      {
        z_99 = t;
        w_99 :
        if(match_cons(z_99, sym__2))
          {
            a_100 = ATgetArgument(z_99, 0);
            b_100 = ATgetArgument(z_99, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_100)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_99))), not_null(b_100));
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
  ATerm h_100 = NULL;
  h_100 = t;
  t = SSL_ReadFromFile(not_null(h_100));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_99 (ATerm), ATerm c_99 (ATerm))
{
  ATerm n_100 = NULL,p_100 = NULL;
  ATerm n_22;
  n_22 = t;
  {
    ATerm o_100 = NULL;
    t = b_99(t);
    {
      o_100 = t;
      if(((n_100 != NULL) && (n_100 != o_100)))
        _fail(o_100);
      else
        n_100 = o_100;
    }
  }
  t = n_22;
  {
    ATerm q_100 = NULL;
    t = c_99(t);
    {
      q_100 = t;
      if(((p_100 != NULL) && (p_100 != q_100)))
        _fail(q_100);
      else
        p_100 = q_100;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_100), not_null(p_100));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_100 = NULL;
  ATerm o_22;
  o_22 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 (ATerm t)
        {
          ATerm x_100 = NULL,y_100 = NULL;
          x_100 = t;
          u_100 :
          if(match_cons(x_100, sym_Input_1))
            {
              y_100 = ATgetArgument(x_100, 0);
              if(((w_100 != NULL) && (w_100 != y_100)))
                _fail(y_100);
              else
                w_100 = y_100;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_3);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm z_100 = NULL;
          t = term_a_23;
          {
            z_100 = t;
            if(((w_100 != NULL) && (w_100 != z_100)))
              _fail(z_100);
            else
              w_100 = z_100;
          }
        }
      }
  }
  t = o_22;
  {
    ATerm y_3 (ATerm t)
    {
      t = not_null(w_100);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_101 = NULL;
  g_101 = t;
  f_101 :
  if(match_cons(g_101, sym_Version_0))
    {
      ATerm i_101 = NULL,k_101 = NULL;
      ATerm f_23;
      f_23 = t;
      {
        ATerm j_101 = NULL;
        t = SSLgetAnnotations(not_null(g_101));
        {
          j_101 = t;
          if(((i_101 != NULL) && (i_101 != j_101)))
            _fail(j_101);
          else
            i_101 = j_101;
        }
      }
      t = f_23;
      {
        ATerm l_101 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_101));
        {
          l_101 = t;
          if(((k_101 != NULL) && (k_101 != l_101)))
            _fail(l_101);
          else
            k_101 = l_101;
        }
        t = not_null(k_101);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_84 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        {
          ATerm i_23 = t;
          int j_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_23);
            }
          else
            {
              t = i_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_3);
  t = o_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_101 = NULL;
  q_101 = t;
  t = SSL_table_create(not_null(q_101));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_101 = NULL;
  u_101 = t;
  {
    ATerm k_23;
    k_23 = t;
    {
      t = term_l_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_23, term_m_23, not_null(u_101));
          t = table_put_0(t);
        }
      }
    }
    t = k_23;
  }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm b_102 = NULL,c_102 = NULL,d_102 = NULL;
  b_102 = t;
  a_102 :
  if(match_cons(b_102, sym__2))
    {
      c_102 = ATgetArgument(b_102, 0);
      d_102 = ATgetArgument(b_102, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_n_23, not_null(c_102), not_null(d_102));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL;
  o_102 = t;
  k_102 :
  if(match_string(o_102, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(o_102) == AT_LIST) && ((ATermList) o_102 != ATempty)))
        {
          p_102 = ATgetFirst((ATermList) o_102);
          q_102 = (ATerm) ATgetNext((ATermList) o_102);
          l_102 :
          if(((ATgetType(q_102) == AT_LIST) && ((ATermList) q_102 != ATempty)))
            {
              r_102 = ATgetFirst((ATermList) q_102);
              s_102 = (ATerm) ATgetNext((ATermList) q_102);
              {
                ATerm w_102 = NULL;
                ATerm o_23;
                o_23 = t;
                {
                  t = not_null(p_102);
                  t = l_0(t);
                }
                t = o_23;
                {
                  ATerm x_102 = NULL;
                  t = not_null(r_102);
                  {
                    t = m_0(t);
                    {
                      x_102 = t;
                      if(((w_102 != NULL) && (w_102 != x_102)))
                        _fail(x_102);
                      else
                        w_102 = x_102;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_102)), not_null(w_102));
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
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_4 (ATerm t)
      {
        ATerm u_103 = NULL;
        u_103 = t;
        b_103 :
        if(!(match_string(u_103, "-S")))
          {
            if(!(match_string(u_103, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = term_x_23;
        t = set_config_0(t);
        t = term_f_24;
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = term_g_24;
        return(t);
      }
      t = Option_3(t, a_4, b_4, c_4);
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm h_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_4 (ATerm t)
            {
              ATerm v_103 = NULL;
              v_103 = t;
              c_103 :
              if(!(match_string(v_103, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_4 (ATerm t)
            {
              t = term_m_24;
              t = set_config_0(t);
              t = term_n_24;
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              t = term_o_24;
              return(t);
            }
            t = Option_3(t, g_4, h_4, i_4);
            LocalPopChoice(k_24);
          }
        else
          {
            t = h_24;
            {
              ATerm p_24 = t;
              int q_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_4 (ATerm t)
                  {
                    ATerm w_103 = NULL;
                    w_103 = t;
                    d_103 :
                    if(!(match_string(w_103, "-v")))
                      {
                        if(!(match_string(w_103, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm k_4 (ATerm t)
                  {
                    t = term_s_24;
                    t = set_config_0(t);
                    t = term_t_24;
                    return(t);
                  }
                  ATerm l_4 (ATerm t)
                  {
                    t = term_u_24;
                    return(t);
                  }
                  t = Option_3(t, j_4, k_4, l_4);
                  LocalPopChoice(q_24);
                }
              else
                {
                  t = p_24;
                  {
                    ATerm w_24 = t;
                    int x_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_4 (ATerm t)
                        {
                          ATerm x_103 = NULL;
                          x_103 = t;
                          e_103 :
                          if(!(match_string(x_103, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm n_4 (ATerm t)
                        {
                          ATerm a_104 = NULL;
                          ATerm y_24;
                          y_24 = t;
                          {
                            ATerm y_103 = NULL;
                            ATerm z_103 = NULL;
                            z_103 = t;
                            if(((y_103 != NULL) && (y_103 != z_103)))
                              _fail(z_103);
                            else
                              y_103 = z_103;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_z_24, not_null(y_103));
                              t = set_config_0(t);
                            }
                          }
                          t = y_24;
                          {
                            ATerm b_104 = NULL;
                            b_104 = t;
                            if(((a_104 != NULL) && (a_104 != b_104)))
                              _fail(b_104);
                            else
                              a_104 = b_104;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(a_104));
                          }
                          return(t);
                        }
                        ATerm o_4 (ATerm t)
                        {
                          t = term_b_25;
                          return(t);
                        }
                        t = ArgOption_3(t, m_4, n_4, o_4);
                        LocalPopChoice(x_24);
                      }
                    else
                      {
                        t = w_24;
                        {
                          ATerm g_25 = t;
                          int h_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_4 (ATerm t)
                              {
                                ATerm c_104 = NULL;
                                c_104 = t;
                                h_103 :
                                if(!(match_string(c_104, "-i")))
                                  {
                                    if(!(match_string(c_104, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm q_4 (ATerm t)
                              {
                                ATerm f_104 = NULL;
                                ATerm q_25;
                                q_25 = t;
                                {
                                  ATerm d_104 = NULL;
                                  ATerm e_104 = NULL;
                                  e_104 = t;
                                  if(((d_104 != NULL) && (d_104 != e_104)))
                                    _fail(e_104);
                                  else
                                    d_104 = e_104;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_a_26, not_null(d_104));
                                    t = set_config_0(t);
                                  }
                                }
                                t = q_25;
                                {
                                  ATerm g_104 = NULL;
                                  g_104 = t;
                                  if(((f_104 != NULL) && (f_104 != g_104)))
                                    _fail(g_104);
                                  else
                                    f_104 = g_104;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_104));
                                }
                                return(t);
                              }
                              ATerm r_4 (ATerm t)
                              {
                                t = term_m_26;
                                return(t);
                              }
                              t = ArgOption_3(t, p_4, q_4, r_4);
                              LocalPopChoice(h_25);
                            }
                          else
                            {
                              t = g_25;
                              {
                                ATerm n_26 = t;
                                int o_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_4 (ATerm t)
                                    {
                                      ATerm h_104 = NULL;
                                      h_104 = t;
                                      k_103 :
                                      if(!(match_string(h_104, "-o")))
                                        {
                                          if(!(match_string(h_104, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm t_4 (ATerm t)
                                    {
                                      ATerm n_104 = NULL;
                                      ATerm p_26;
                                      p_26 = t;
                                      {
                                        ATerm i_104 = NULL;
                                        ATerm m_104 = NULL;
                                        m_104 = t;
                                        if(((i_104 != NULL) && (i_104 != m_104)))
                                          _fail(m_104);
                                        else
                                          i_104 = m_104;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_q_26, not_null(i_104));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = p_26;
                                      {
                                        ATerm o_104 = NULL;
                                        o_104 = t;
                                        if(((n_104 != NULL) && (n_104 != o_104)))
                                          _fail(o_104);
                                        else
                                          n_104 = o_104;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_104));
                                      }
                                      return(t);
                                    }
                                    ATerm u_4 (ATerm t)
                                    {
                                      t = term_r_26;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, s_4, t_4, u_4);
                                    LocalPopChoice(o_26);
                                  }
                                else
                                  {
                                    t = n_26;
                                    {
                                      ATerm s_26 = t;
                                      int t_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_4 (ATerm t)
                                          {
                                            ATerm p_104 = NULL;
                                            p_104 = t;
                                            s_103 :
                                            if(!(match_string(p_104, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm w_4 (ATerm t)
                                          {
                                            t = term_v_26;
                                            t = set_config_0(t);
                                            t = term_w_26;
                                            return(t);
                                          }
                                          ATerm x_4 (ATerm t)
                                          {
                                            t = term_x_26;
                                            return(t);
                                          }
                                          t = Option_3(t, v_4, w_4, x_4);
                                          LocalPopChoice(t_26);
                                        }
                                      else
                                        {
                                          t = s_26;
                                          {
                                            ATerm y_4 (ATerm t)
                                            {
                                              ATerm q_104 = NULL;
                                              q_104 = t;
                                              t_103 :
                                              if(!(match_string(q_104, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm z_4 (ATerm t)
                                            {
                                              t = term_z_26;
                                              t = set_config_0(t);
                                              t = term_a_27;
                                              return(t);
                                            }
                                            ATerm a_5 (ATerm t)
                                            {
                                              t = term_b_27;
                                              return(t);
                                            }
                                            t = Option_3(t, y_4, z_4, a_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm y_104 = NULL;
  y_104 = t;
  t = SSL_table_destroy(not_null(y_104));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_105 = NULL;
  c_105 = t;
  t = SSL_exit(not_null(c_105));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm g_105 = NULL;
  g_105 = t;
  t = SSL_implode_string(not_null(g_105));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_96 (ATerm))
{
  ATerm j_105 (ATerm t)
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_105);
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        {
          t = Nil_0(t);
          t = e_96(t);
        }
      }
    return(t);
  }
  t = j_105(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_27);
    }
  else
    {
      t = e_27;
      {
        ATerm m_105 = NULL,n_105 = NULL,o_105 = NULL;
        m_105 = t;
        l_105 :
        if(((ATgetType(m_105) == AT_LIST) && ((ATermList) m_105 != ATempty)))
          {
            n_105 = ATgetFirst((ATermList) m_105);
            o_105 = (ATerm) ATgetNext((ATermList) m_105);
            {
              t = not_null(n_105);
              {
                ATerm b_5 (ATerm t)
                {
                  t = not_null(o_105);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_5);
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
  ATerm u_105 = NULL;
  u_105 = t;
  t = SSL_explode_string(not_null(u_105));
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
ATerm long_description_1 (ATerm t, ATerm h_82 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_95 (ATerm))
{
  ATerm x_105 (ATerm t)
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = Cons_2(t, q_95, x_105);
      }
    return(t);
  }
  t = x_105(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm e_106 = NULL,f_106 = NULL,g_106 = NULL;
  g_106 = t;
  d_106 :
  if(((ATgetType(g_106) == AT_LIST) && ((ATermList) g_106 != ATempty)))
    {
      e_106 = ATgetFirst((ATermList) g_106);
      f_106 = (ATerm) ATgetNext((ATermList) g_106);
      {
        ATerm j_106 = NULL;
        t = not_null(f_106);
        {
          ATerm k_27;
          k_27 = t;
          {
            ATerm k_106 = NULL,m_106 = NULL,o_106 = NULL;
            ATerm l_27;
            l_27 = t;
            {
              ATerm l_106 = NULL;
              t = k_0(t);
              {
                l_106 = t;
                if(((k_106 != NULL) && (k_106 != l_106)))
                  _fail(l_106);
                else
                  k_106 = l_106;
              }
            }
            t = l_27;
            {
              ATerm n_106 = NULL;
              t = not_null(e_106);
              {
                t = j_0(t);
                {
                  n_106 = t;
                  if(((m_106 != NULL) && (m_106 != n_106)))
                    _fail(n_106);
                  else
                    m_106 = n_106;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_106)), not_null(m_106));
                {
                  o_106 = t;
                  if(((j_106 != NULL) && (j_106 != o_106)))
                    _fail(o_106);
                  else
                    j_106 = o_106;
                }
              }
            }
          }
          t = k_27;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(j_106);
              return(t);
            }
            t = reverse_acc_2(t, j_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) g_106 == ATempty))
        {
          {
            t = term_d_16;
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
  ATerm d_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_82 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_73 (ATerm))
{
  ATerm z_106 = NULL,a_107 = NULL;
  z_106 = t;
  y_106 :
  if(match_cons(z_106, sym_Program_1))
    {
      a_107 = ATgetArgument(z_106, 0);
      {
        ATerm d_107 = NULL,f_107 = NULL;
        ATerm e_107 = NULL;
        t = SSLgetAnnotations(not_null(z_106));
        {
          e_107 = t;
          if(((d_107 != NULL) && (d_107 != e_107)))
            _fail(e_107);
          else
            d_107 = e_107;
        }
        {
          t = not_null(a_107);
          {
            ATerm h_107 = NULL;
            t = w_73(t);
            {
              f_107 = t;
              {
                ATerm i_107 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_107)), not_null(d_107));
                {
                  i_107 = t;
                  if(((h_107 != NULL) && (h_107 != i_107)))
                    _fail(i_107);
                  else
                    h_107 = i_107;
                }
                t = not_null(h_107);
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
  ATerm r_107 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      ATerm s_107 = NULL;
      s_107 = t;
      if(((r_107 != NULL) && (r_107 != s_107)))
        _fail(s_107);
      else
        r_107 = s_107;
      return(t);
    }
    t = Program_1(t, f_5);
    return(t);
  }
  t = option_defined_1(t, e_5);
  {
    ATerm g_5 (ATerm t)
    {
      ATerm t_107 = NULL;
      ATerm u_107 = NULL;
      t = term_d_16;
      {
        ATerm i_5 (ATerm t)
        {
          t = not_null(r_107);
          return(t);
        }
        t = short_description_1(t, i_5);
        {
          t = concat_strings_0(t);
          {
            u_107 = t;
            if(((t_107 != NULL) && (t_107 != u_107)))
              _fail(u_107);
            else
              t_107 = u_107;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(t_107)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, g_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_m_27));
      {
        t = printnl_0(t);
        {
          t = term_c_28;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_5 (ATerm t)
                {
                  ATerm v_107 = NULL;
                  v_107 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_107)), term_k_28));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_5);
                {
                  ATerm k_5 (ATerm t)
                  {
                    ATerm x_107 = NULL;
                    ATerm y_107 = NULL;
                    t = term_d_16;
                    {
                      ATerm l_5 (ATerm t)
                      {
                        t = not_null(r_107);
                        return(t);
                      }
                      t = long_description_1(t, l_5);
                      {
                        t = concat_strings_0(t);
                        {
                          y_107 = t;
                          if(((x_107 != NULL) && (x_107 != y_107)))
                            _fail(y_107);
                          else
                            x_107 = y_107;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_107)), term_u_28));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_5);
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
ATerm printnl_0 (ATerm t)
{
  ATerm f_108 = NULL,g_108 = NULL,h_108 = NULL;
  f_108 = t;
  e_108 :
  if(match_cons(f_108, sym__2))
    {
      g_108 = ATgetArgument(f_108, 0);
      h_108 = ATgetArgument(f_108, 1);
      {
        ATerm v_28;
        v_28 = t;
        t = SSL_printnl(not_null(g_108), not_null(h_108));
        t = v_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_73 (ATerm))
{
  ATerm q_108 = NULL,r_108 = NULL;
  q_108 = t;
  p_108 :
  if(match_cons(q_108, sym_Undefined_1))
    {
      r_108 = ATgetArgument(q_108, 0);
      {
        ATerm u_108 = NULL,w_108 = NULL;
        ATerm v_108 = NULL;
        t = SSLgetAnnotations(not_null(q_108));
        {
          v_108 = t;
          if(((u_108 != NULL) && (u_108 != v_108)))
            _fail(v_108);
          else
            u_108 = v_108;
        }
        {
          t = not_null(r_108);
          {
            ATerm y_108 = NULL;
            t = x_73(t);
            {
              w_108 = t;
              {
                ATerm z_108 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_108)), not_null(u_108));
                {
                  z_108 = t;
                  if(((y_108 != NULL) && (y_108 != z_108)))
                    _fail(z_108);
                  else
                    y_108 = z_108;
                }
                t = not_null(y_108);
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
ATerm fetch_1 (ATerm t, ATerm y_95 (ATerm))
{
  ATerm e_109 (ATerm t)
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_95, _id);
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        t = Cons_2(t, _id, e_109);
      }
    return(t);
  }
  t = e_109(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_83 (ATerm))
{
  t = fetch_1(t, f_83);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_109 = NULL;
  j_109 = t;
  i_109 :
  if(match_cons(j_109, sym_Help_0))
    {
      ATerm l_109 = NULL,n_109 = NULL;
      ATerm y_28;
      y_28 = t;
      {
        ATerm m_109 = NULL;
        t = SSLgetAnnotations(not_null(j_109));
        {
          m_109 = t;
          if(((l_109 != NULL) && (l_109 != m_109)))
            _fail(m_109);
          else
            l_109 = m_109;
        }
      }
      t = y_28;
      {
        ATerm o_109 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_109));
        {
          o_109 = t;
          if(((n_109 != NULL) && (n_109 != o_109)))
            _fail(o_109);
          else
            n_109 = o_109;
        }
        t = not_null(n_109);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_99 (ATerm))
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_99(t);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL;
  u_109 = t;
  t_109 :
  if(match_cons(u_109, sym__2))
    {
      v_109 = ATgetArgument(u_109, 0);
      w_109 = ATgetArgument(u_109, 1);
      t = SSL_table_get(not_null(v_109), not_null(w_109));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_110 = NULL,e_110 = NULL,f_110 = NULL,g_110 = NULL;
  d_110 = t;
  c_110 :
  if(match_cons(d_110, sym__3))
    {
      e_110 = ATgetArgument(d_110, 0);
      f_110 = ATgetArgument(d_110, 1);
      g_110 = ATgetArgument(d_110, 2);
      {
        ATerm b_29;
        b_29 = t;
        {
          ATerm k_110 = NULL;
          ATerm l_110 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_110), not_null(f_110));
          {
            ATerm c_29 = t;
            int d_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_29);
              }
            else
              {
                t = c_29;
                t = (ATerm) ATempty;
              }
            {
              l_110 = t;
              if(((k_110 != NULL) && (k_110 != l_110)))
                _fail(l_110);
              else
                k_110 = l_110;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_110), not_null(f_110), (ATerm) ATinsert(CheckATermList(not_null(k_110)), not_null(g_110)));
            t = table_put_0(t);
          }
        }
        t = b_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_82 (ATerm))
{
  ATerm p_110 = NULL;
  ATerm q_110 = NULL;
  t = term_d_16;
  {
    t = l_82(t);
    {
      q_110 = t;
      if(((p_110 != NULL) && (p_110 != q_110)))
        _fail(q_110);
      else
        p_110 = q_110;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_27, term_s_27, not_null(p_110));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_110 = NULL,x_110 = NULL,y_110 = NULL;
  w_110 = t;
  v_110 :
  if(match_string(w_110, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(w_110) == AT_LIST) && ((ATermList) w_110 != ATempty)))
        {
          x_110 = ATgetFirst((ATermList) w_110);
          y_110 = (ATerm) ATgetNext((ATermList) w_110);
          {
            ATerm b_111 = NULL;
            ATerm e_29;
            e_29 = t;
            {
              t = not_null(x_110);
              t = a_0(t);
            }
            t = e_29;
            {
              ATerm c_111 = NULL;
              t = term_d_16;
              {
                t = b_0(t);
                {
                  c_111 = t;
                  if(((b_111 != NULL) && (b_111 != c_111)))
                    _fail(c_111);
                  else
                    b_111 = c_111;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_110)), not_null(b_111));
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
  ATerm m_5 (ATerm t)
  {
    ATerm h_111 = NULL;
    h_111 = t;
    g_111 :
    if(!(match_string(h_111, "--help")))
      {
        if(!(match_string(h_111, "-h")))
          {
            if(!(match_string(h_111, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_f_29;
    return(t);
  }
  ATerm o_5 (ATerm t)
  {
    t = term_g_29;
    return(t);
  }
  t = Option_3(t, m_5, n_5, o_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_111 = NULL,l_111 = NULL,m_111 = NULL;
  k_111 = t;
  j_111 :
  if(((ATgetType(k_111) == AT_LIST) && ((ATermList) k_111 != ATempty)))
    {
      l_111 = ATgetFirst((ATermList) k_111);
      m_111 = (ATerm) ATgetNext((ATermList) k_111);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_111)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_111)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_82 (ATerm))
{
  ATerm h_29;
  h_29 = t;
  {
    ATerm p_5 (ATerm t)
    {
      t = term_i_29;
      t = j_82(t);
      return(t);
    }
    t = try_1(t, p_5);
  }
  t = h_29;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm r_111 = NULL;
      r_111 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_111));
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm j_29 = t;
      int k_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              {
                t = j_82(t);
                t = Cons_2(t, _id, r_5);
              }
            }
          LocalPopChoice(k_29);
        }
      else
        {
          t = j_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_5, r_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL;
  ATerm n_29;
  n_29 = t;
  {
    ATerm a_112 = NULL,b_112 = NULL,c_112 = NULL,d_112 = NULL;
    a_112 = t;
    w_111 :
    if(match_cons(a_112, sym__3))
      {
        b_112 = ATgetArgument(a_112, 0);
        c_112 = ATgetArgument(a_112, 1);
        d_112 = ATgetArgument(a_112, 2);
        {
          if(((x_111 != NULL) && (x_111 != b_112)))
            _fail(b_112);
          else
            x_111 = b_112;
          {
            if(((y_111 != NULL) && (y_111 != c_112)))
              _fail(c_112);
            else
              y_111 = c_112;
            {
              if(((z_111 != NULL) && (z_111 != d_112)))
                _fail(d_112);
              else
                z_111 = d_112;
              t = SSL_table_put(not_null(x_111), not_null(y_111), not_null(z_111));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_82 (ATerm))
{
  ATerm g_112 = NULL;
  ATerm o_29;
  o_29 = t;
  {
    t = term_p_29;
    t = table_put_0(t);
  }
  t = o_29;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_82(t);
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_5);
    {
      ATerm t_5 (ATerm t)
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_g_20;
                t = exit_0(t);
              }
            }
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            {
              ATerm u_5 (ATerm t)
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm h_112 = NULL;
                  h_112 = t;
                  if(((g_112 != NULL) && (g_112 != h_112)))
                    _fail(h_112);
                  else
                    g_112 = h_112;
                  return(t);
                }
                t = Undefined_1(t, v_5);
                return(t);
              }
              t = option_defined_1(t, u_5);
              {
                ATerm w_29;
                w_29 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_112)), term_x_29));
                  t = printnl_0(t);
                }
                t = w_29;
                {
                  t = system_usage_0(t);
                  {
                    t = term_v_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, t_5);
      {
        ATerm y_29;
        y_29 = t;
        {
          t = term_o_27;
          t = table_destroy_0(t);
        }
        t = y_29;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_84(t);
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, w_5);
  {
    t = store_options_0(t);
    {
      ATerm b_30 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, f_84);
          LocalPopChoice(c_30);
        }
      else
        {
          t = b_30;
          {
            ATerm d_30 = t;
            int e_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, d_84);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(e_30);
              }
            else
              {
                t = d_30;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm))
{
  t = iowrap_3(t, y_83, z_83, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm v_83 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    t = _2(t, _id, v_83);
    return(t);
  }
  t = iowrap_2(t, x_5, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        ATerm c_6 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, c_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, b_6);
      return(t);
    }
    t = Specification_1(t, a_6);
    return(t);
  }
  t = iowrap_1(t, y_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
