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
ATerm term_p_24;
ATerm term_j_24;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_x_20;
ATerm term_r_20;
ATerm term_k_20;
ATerm term_b_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_a_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_j_18;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_y_13;
ATerm term_d_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_v_11;
ATerm term_z_9;
ATerm term_q_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_a_9;
void init_constant_terms (void)
{
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Op_2, term_z_15, (ATerm) ATempty);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_ConstType_1, term_a_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym__2, term_n_19, term_a_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_y_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym__3, term_x_22, term_y_22, (ATerm) ATempty);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm s_57 (ATerm), ATerm t_57 (ATerm));
ATerm SDef_3 (ATerm, ATerm w_57 (ATerm), ATerm x_57 (ATerm), ATerm y_57 (ATerm));
ATerm Let_2 (ATerm, ATerm u_57 (ATerm), ATerm v_57 (ATerm));
ATerm sboundin_3 (ATerm, ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm m_72 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm a_72 (ATerm), ATerm b_72 (ATerm));
ATerm diff_1 (ATerm, ATerm f_72 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm n_68 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_68 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm v_70 (ATerm), ATerm w_70 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm y_81 (ATerm), ATerm z_81 (ATerm));
ATerm alltd_1 (ATerm, ATerm y_80 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm a_82 (ATerm), ATerm b_82 (ATerm));
ATerm substitute_1 (ATerm, ATerm c_82 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm z_57 (ATerm), ATerm a_58 (ATerm));
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
ATerm Prim_2 (ATerm, ATerm z_58 (ATerm), ATerm a_59 (ATerm));
ATerm Explode_2 (ATerm, ATerm o_55 (ATerm), ATerm p_55 (ATerm));
ATerm Op_2 (ATerm, ATerm z_56 (ATerm), ATerm a_57 (ATerm));
ATerm pat_td_1 (ATerm, ATerm m_59 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm i_76 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm v_56 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm t_65 (ATerm), ATerm u_65 (ATerm));
ATerm repeat_1 (ATerm, ATerm w_65 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm i_55 (ATerm), ATerm j_55 (ATerm));
ATerm Con_3 (ATerm, ATerm f_55 (ATerm), ATerm g_55 (ATerm), ATerm h_55 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm w_58 (ATerm), ATerm x_58 (ATerm));
ATerm oncetd_1 (ATerm, ATerm k_80 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm s_78 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm b_78 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm k_71 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm g_76 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm b_76 (ATerm));
ATerm zip_1 (ATerm, ATerm d_76 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm c_60 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm k_66 (ATerm), ATerm l_66 (ATerm));
ATerm for_3 (ATerm, ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm p_66 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm j_60 (ATerm), ATerm k_60 (ATerm), ATerm l_60 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm u_59 (ATerm));
ATerm HdMember_1 (ATerm, ATerm z_71 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm w_59 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_70 (ATerm), ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm s_56 (ATerm));
ATerm Cons_2 (ATerm, ATerm b_59 (ATerm), ATerm c_59 (ATerm));
ATerm Specification_1 (ATerm, ATerm u_56 (ATerm));
ATerm _2 (ATerm, ATerm h_48 (ATerm), ATerm i_48 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_63 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_77 (ATerm), ATerm m_77 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_63 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_74 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_61 (ATerm));
ATerm map_1 (ATerm, ATerm d_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_61 (ATerm));
ATerm Program_1 (ATerm, ATerm w_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_78 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_61 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_61 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_63 (ATerm), ATerm e_63 (ATerm), ATerm f_63 (ATerm));
ATerm iowrap_2 (ATerm, ATerm y_62 (ATerm), ATerm z_62 (ATerm));
ATerm iowrap_1 (ATerm, ATerm v_62 (ATerm));
ATerm extract_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  u_2 :
  if(((ATermList) v_2 == ATempty))
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
ATerm MissingDef_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  x_2 :
  if(match_cons(y_2, sym__2))
    {
      z_2 = ATgetArgument(y_2, 0);
      a_3 = ATgetArgument(y_2, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_9), not_null(a_3)), term_b_9), not_null(z_2)), term_a_9);
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
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  h_3 = t;
  f_3 :
  if(match_cons(h_3, sym__2))
    {
      i_3 = ATgetArgument(h_3, 0);
      l_3 = ATgetArgument(h_3, 1);
      g_3 :
      if(match_cons(i_3, sym_Mod_2))
        {
          j_3 = ATgetArgument(i_3, 0);
          k_3 = ATgetArgument(i_3, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_9), not_null(l_3)), term_b_9), not_null(k_3)), term_h_9), not_null(j_3)), term_a_9);
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
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  t_3 = t;
  r_3 :
  if(match_cons(t_3, sym__2))
    {
      u_3 = ATgetArgument(t_3, 0);
      v_3 = ATgetArgument(t_3, 1);
      s_3 :
      if(((ATgetType(v_3) == AT_LIST) && ((ATermList) v_3 != ATempty)))
        {
          w_3 = ATgetFirst((ATermList) v_3);
          x_3 = (ATerm) ATgetNext((ATermList) v_3);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(x_3)), not_null(w_3));
            {
              ATerm a_0 (ATerm t)
              {
                ATerm i_9 = t;
                int j_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(j_9);
                  }
                else
                  {
                    t = i_9;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, a_0);
            }
            t = not_null(u_3);
          }
        }
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
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL;
  f_4 = t;
  d_4 :
  if(match_cons(f_4, sym__2))
    {
      g_4 = ATgetArgument(f_4, 0);
      h_4 = ATgetArgument(f_4, 1);
      e_4 :
      if(((ATermList) h_4 == ATempty))
        {
          t = not_null(g_4);
        }
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
  ATerm k_9;
  k_9 = t;
  {
    t = error_0(t);
    {
      t = term_l_9;
      t = exit_0(t);
    }
  }
  t = k_9;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_m_9);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm n_9;
  n_9 = t;
  {
    ATerm l_4 = NULL;
    ATerm m_4 = NULL;
    m_4 = t;
    if(((l_4 != NULL) && (l_4 != m_4)))
      _fail(m_4);
    else
      l_4 = m_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_9, not_null(l_4));
      t = printnl_0(t);
    }
  }
  t = n_9;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  z_4 = t;
  x_4 :
  if(match_cons(z_4, sym__2))
    {
      a_5 = ATgetArgument(z_4, 0);
      b_5 = ATgetArgument(z_4, 1);
      y_4 :
      if(match_int(b_5, 0))
        {
          ATerm t_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
              t = not_null(a_5);
              {
                t = Arities_0(t);
                {
                  d_5 = t;
                  s_4 :
                  if(((ATgetType(d_5) == AT_LIST) && ((ATermList) d_5 != ATempty)))
                    {
                      e_5 = ATgetFirst((ATermList) d_5);
                      f_5 = (ATerm) ATgetNext((ATermList) d_5);
                      t_4 :
                      if(((ATgetType(f_5) == AT_LIST) && ((ATermList) f_5 != ATempty)))
                        {
                          g_5 = ATgetFirst((ATermList) f_5);
                          h_5 = (ATerm) ATgetNext((ATermList) f_5);
                          {
                            ATerm y_9 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm d_0 (ATerm t)
                                {
                                  ATerm i_5 = NULL;
                                  i_5 = t;
                                  r_4 :
                                  if(!(match_int(i_5, 0)))
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
                                t = y_9;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_5)), term_z_9);
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
              LocalPopChoice(x_9);
            }
          else
            {
              t = t_9;
              {
                ATerm k_5 = NULL;
                ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
                t = not_null(a_5);
                {
                  t = Arities_0(t);
                  {
                    l_5 = t;
                    v_4 :
                    if(((ATgetType(l_5) == AT_LIST) && ((ATermList) l_5 != ATempty)))
                      {
                        m_5 = ATgetFirst((ATermList) l_5);
                        n_5 = (ATerm) ATgetNext((ATermList) l_5);
                        w_4 :
                        if(((ATermList) n_5 == ATempty))
                          {
                            {
                              if(((k_5 != NULL) && (k_5 != m_5)))
                                _fail(m_5);
                              else
                                k_5 = m_5;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_5), not_null(k_5));
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_5), not_null(k_5));
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
ATerm Rec_2 (ATerm t, ATerm s_57 (ATerm), ATerm t_57 (ATerm))
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
  w_5 = t;
  v_5 :
  if(match_cons(w_5, sym_Rec_2))
    {
      x_5 = ATgetArgument(w_5, 0);
      y_5 = ATgetArgument(w_5, 1);
      {
        ATerm b_6 = NULL;
        t = not_null(x_5);
        {
          ATerm d_6 = NULL;
          t = s_57(t);
          {
            b_6 = t;
            {
              t = not_null(y_5);
              {
                t = t_57(t);
                {
                  d_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(b_6), not_null(d_6));
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
ATerm SDef_3 (ATerm t, ATerm w_57 (ATerm), ATerm x_57 (ATerm), ATerm y_57 (ATerm))
{
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
  n_6 = t;
  m_6 :
  if(match_cons(n_6, sym_SDef_3))
    {
      o_6 = ATgetArgument(n_6, 0);
      p_6 = ATgetArgument(n_6, 1);
      q_6 = ATgetArgument(n_6, 2);
      {
        ATerm u_6 = NULL;
        t = not_null(o_6);
        {
          ATerm w_6 = NULL;
          t = w_57(t);
          {
            u_6 = t;
            {
              t = not_null(p_6);
              {
                ATerm y_6 = NULL;
                t = x_57(t);
                {
                  w_6 = t;
                  {
                    t = not_null(q_6);
                    {
                      t = y_57(t);
                      {
                        y_6 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_6), not_null(w_6), not_null(y_6));
                      }
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
ATerm Let_2 (ATerm t, ATerm u_57 (ATerm), ATerm v_57 (ATerm))
{
  ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym_Let_2))
    {
      j_7 = ATgetArgument(i_7, 0);
      k_7 = ATgetArgument(i_7, 1);
      {
        ATerm n_7 = NULL;
        t = not_null(j_7);
        {
          ATerm p_7 = NULL;
          t = u_57(t);
          {
            n_7 = t;
            {
              t = not_null(k_7);
              {
                t = v_57(t);
                {
                  p_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(n_7), not_null(p_7));
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
ATerm sboundin_3 (ATerm t, ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm))
{
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, v_82, v_82);
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, x_82, x_82, v_82);
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
            t = Rec_2(t, x_82, v_82);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym_Rec_2))
    {
      x_7 = ATgetArgument(w_7, 0);
      y_7 = ATgetArgument(w_7, 1);
      t = (ATerm) ATinsert(ATempty, not_null(x_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_SDef_3))
    {
      h_8 = ATgetArgument(g_8, 0);
      i_8 = ATgetArgument(g_8, 1);
      j_8 = ATgetArgument(g_8, 2);
      {
        t = not_null(i_8);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
            n_8 = t;
            e_8 :
            if(match_cons(n_8, sym_VarDec_2))
              {
                o_8 = ATgetArgument(n_8, 0);
                p_8 = ATgetArgument(n_8, 1);
                t = not_null(o_8);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, e_0);
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
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym_Let_2))
    {
      y_8 = ATgetArgument(x_8, 0);
      z_8 = ATgetArgument(x_8, 1);
      {
        t = not_null(y_8);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
            c_9 = t;
            v_8 :
            if(match_cons(c_9, sym_SDef_3))
              {
                d_9 = ATgetArgument(c_9, 0);
                e_9 = ATgetArgument(c_9, 1);
                f_9 = ATgetArgument(c_9, 2);
                t = not_null(d_9);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm m_72 (ATerm))
{
  ATerm p_9 = NULL;
  ATerm r_9 = NULL;
  p_9 = t;
  {
    ATerm s_9 = NULL;
    ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
    t = not_null(p_9);
    {
      s_9 = t;
      {
        t = SSL_explode_term(not_null(s_9));
        {
          u_9 = t;
          o_9 :
          if(match_cons(u_9, sym__2))
            {
              v_9 = ATgetArgument(u_9, 0);
              w_9 = ATgetArgument(u_9, 1);
              if(((r_9 != NULL) && (r_9 != w_9)))
                _fail(w_9);
              else
                r_9 = w_9;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_9);
      t = foldr_3(t, k_72, l_72, m_72);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_72 (ATerm), ATerm b_72 (ATerm))
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  d_10 = t;
  c_10 :
  if(((ATgetType(d_10) == AT_LIST) && ((ATermList) d_10 != ATempty)))
    {
      e_10 = ATgetFirst((ATermList) d_10);
      f_10 = (ATerm) ATgetNext((ATermList) d_10);
      {
        t = b_72(t);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm i_10 = NULL;
            i_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), not_null(i_10));
              t = a_72(t);
            }
            return(t);
          }
          t = fetch_1(t, o_0);
        }
        t = not_null(f_10);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym__2))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      {
        t = not_null(p_10);
        {
          ATerm u_10 (ATerm t)
          {
            ATerm j_10 = t;
            int k_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(k_10);
              }
            else
              {
                t = j_10;
                {
                  ATerm l_10 = t;
                  int m_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_0 (ATerm t)
                      {
                        t = not_null(q_10);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_72, p_0);
                      t = u_10(t);
                      LocalPopChoice(m_10);
                    }
                  else
                    {
                      t = l_10;
                      t = Cons_2(t, _id, u_10);
                    }
                }
              }
            return(t);
          }
          t = u_10(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm n_68 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_68 (ATerm))
{
  ATerm y_10 (ATerm t)
  {
    ATerm q_0 (ATerm t)
    {
      ATerm r_10 = t;
      int s_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_68(t);
          LocalPopChoice(s_10);
        }
      else
        {
          t = r_10;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm r_0 (ATerm t)
    {
      ATerm t_10 = t;
      int v_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_10 = NULL;
          ATerm z_10;
          z_10 = t;
          {
            ATerm x_10 = NULL;
            t = m_68(t);
            {
              x_10 = t;
              if(((w_10 != NULL) && (w_10 != x_10)))
                _fail(x_10);
              else
                w_10 = x_10;
            }
          }
          t = z_10;
          {
            ATerm s_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                t = not_null(w_10);
                return(t);
              }
              t = split_2(t, y_10, u_0);
              t = diff_1(t, o_68);
              return(t);
            }
            ATerm t_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = n_68(t, s_0, y_10, t_0);
            {
              ATerm v_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, v_0, union_0, _id);
            }
          }
          LocalPopChoice(v_10);
        }
      else
        {
          t = t_10;
          {
            ATerm w_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, w_0, union_0, y_10);
          }
        }
      return(t);
    }
    t = split_2(t, q_0, r_0);
    t = union_0(t);
    return(t);
  }
  t = y_10(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
    h_11 = t;
    c_11 :
    if(match_cons(h_11, sym_Call_2))
      {
        i_11 = ATgetArgument(h_11, 0);
        k_11 = ATgetArgument(h_11, 1);
        d_11 :
        if(match_cons(i_11, sym_SVar_1))
          {
            j_11 = ATgetArgument(i_11, 0);
            {
              ATerm n_11 = NULL;
              ATerm o_11 = NULL;
              t = not_null(k_11);
              {
                t = length_0(t);
                {
                  o_11 = t;
                  if(((n_11 != NULL) && (n_11 != o_11)))
                    _fail(o_11);
                  else
                    n_11 = o_11;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(j_11), not_null(n_11)));
            }
          }
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
  ATerm y_0 (ATerm t)
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        {
          ATerm e_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(l_11);
            }
          else
            {
              t = e_11;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
    p_11 = t;
    f_11 :
    if(match_cons(p_11, sym__2))
      {
        q_11 = ATgetArgument(p_11, 0);
        t_11 = ATgetArgument(p_11, 1);
        g_11 :
        if(match_cons(q_11, sym__2))
          {
            r_11 = ATgetArgument(q_11, 0);
            s_11 = ATgetArgument(q_11, 1);
            if(((r_11 != NULL) && (r_11 != t_11)))
              _fail(t_11);
            else
              r_11 = t_11;
          }
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
  t = free_vars2_4(t, x_0, y_0, sboundin_3, z_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm f_12 = NULL;
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  f_12 = t;
  {
    ATerm k_12 = NULL;
    ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
    t = not_null(f_12);
    {
      k_12 = t;
      {
        t = SSL_explode_term(not_null(k_12));
        {
          m_12 = t;
          b_12 :
          if(match_cons(m_12, sym__2))
            {
              n_12 = ATgetArgument(m_12, 0);
              o_12 = ATgetArgument(m_12, 1);
              c_12 :
              if(match_string(n_12, ""))
                {
                  d_12 :
                  if(((ATgetType(o_12) == AT_LIST) && ((ATermList) o_12 != ATempty)))
                    {
                      p_12 = ATgetFirst((ATermList) o_12);
                      q_12 = (ATerm) ATgetNext((ATermList) o_12);
                      e_12 :
                      if(((ATgetType(q_12) == AT_LIST) && ((ATermList) q_12 != ATempty)))
                        {
                          r_12 = ATgetFirst((ATermList) q_12);
                          s_12 = (ATerm) ATgetNext((ATermList) q_12);
                          {
                            if(((h_12 != NULL) && (h_12 != p_12)))
                              _fail(p_12);
                            else
                              h_12 = p_12;
                            {
                              if(((j_12 != NULL) && (j_12 != r_12)))
                                _fail(r_12);
                              else
                                j_12 = r_12;
                              if(((i_12 != NULL) && (i_12 != s_12)))
                                _fail(s_12);
                              else
                                i_12 = s_12;
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
    t = not_null(j_12);
  }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_70 (ATerm), ATerm w_70 (ATerm))
{
  ATerm m_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_70(t);
      LocalPopChoice(u_11);
    }
  else
    {
      t = m_11;
      {
        ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
        z_12 = t;
        y_12 :
        if(((ATgetType(z_12) == AT_LIST) && ((ATermList) z_12 != ATempty)))
          {
            a_13 = ATgetFirst((ATermList) z_12);
            b_13 = (ATerm) ATgetNext((ATermList) z_12);
            {
              ATerm e_13 = NULL;
              ATerm f_13 = NULL;
              t = not_null(b_13);
              {
                t = foldr_2(t, v_70, w_70);
                {
                  f_13 = t;
                  if(((e_13 != NULL) && (e_13 != f_13)))
                    _fail(f_13);
                  else
                    e_13 = f_13;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), not_null(e_13));
                t = w_70(t);
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
ATerm choices_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    t = term_v_11;
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    ATerm k_13 = NULL,m_13 = NULL;
    ATerm w_11;
    w_11 = t;
    {
      ATerm l_13 = NULL;
      t = Fst_0(t);
      {
        l_13 = t;
        if(((k_13 != NULL) && (k_13 != l_13)))
          _fail(l_13);
        else
          k_13 = l_13;
      }
    }
    t = w_11;
    {
      ATerm n_13 = NULL;
      t = Snd_0(t);
      {
        n_13 = t;
        if(((m_13 != NULL) && (m_13 != n_13)))
          _fail(n_13);
        else
          m_13 = n_13;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_13), not_null(m_13));
    }
    return(t);
  }
  t = foldr_2(t, a_1, b_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,f_14 = NULL;
  u_13 = t;
  r_13 :
  if(match_cons(u_13, sym_Call_2))
    {
      v_13 = ATgetArgument(u_13, 0);
      f_14 = ATgetArgument(u_13, 1);
      s_13 :
      if(match_cons(v_13, sym_SVar_1))
        {
          w_13 = ATgetArgument(v_13, 0);
          t_13 :
          if(((ATermList) f_14 == ATempty))
            {
              t = not_null(w_13);
            }
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
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  s_17 = t;
  q_17 :
  if(match_cons(s_17, sym__2))
    {
      t_17 = ATgetArgument(s_17, 0);
      u_17 = ATgetArgument(s_17, 1);
      r_17 :
      if(((ATgetType(u_17) == AT_LIST) && ((ATermList) u_17 != ATempty)))
        {
          v_17 = ATgetFirst((ATermList) u_17);
          w_17 = (ATerm) ATgetNext((ATermList) u_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), not_null(w_17));
        }
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
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,q_18 = NULL;
  e_18 = t;
  b_18 :
  if(match_cons(e_18, sym__2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      c_18 :
      if(((ATgetType(g_18) == AT_LIST) && ((ATermList) g_18 != ATempty)))
        {
          m_18 = ATgetFirst((ATermList) g_18);
          q_18 = (ATerm) ATgetNext((ATermList) g_18);
          d_18 :
          if(match_cons(m_18, sym__2))
            {
              n_18 = ATgetArgument(m_18, 0);
              o_18 = ATgetArgument(m_18, 1);
              {
                ATerm s_18 = NULL;
                if(((f_18 != NULL) && (f_18 != n_18)))
                  _fail(n_18);
                else
                  f_18 = n_18;
                {
                  if(((s_18 != NULL) && (s_18 != o_18)))
                    _fail(o_18);
                  else
                    s_18 = o_18;
                  t = not_null(s_18);
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
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm y_81 (ATerm), ATerm z_81 (ATerm))
{
  ATerm b_19 = NULL;
  ATerm d_19 = NULL,e_19 = NULL;
  b_19 = t;
  {
    ATerm z_19 = NULL;
    t = not_null(b_19);
    {
      ATerm a_20 = NULL;
      t = y_81(t);
      {
        z_19 = t;
        {
          if(((d_19 != NULL) && (d_19 != z_19)))
            _fail(z_19);
          else
            d_19 = z_19;
          {
            t = z_81(t);
            {
              a_20 = t;
              if(((e_19 != NULL) && (e_19 != a_20)))
                _fail(a_20);
              else
                e_19 = a_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), not_null(e_19));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm y_80 (ATerm))
{
  ATerm o_20 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_80(t);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = _all(t, o_20);
      }
    return(t);
  }
  t = o_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym__2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        ATerm y_20 = NULL;
        if(((y_20 != NULL) && (y_20 != v_20)))
          _fail(v_20);
        else
          y_20 = v_20;
      }
    }
  else
    {
      if(match_cons(t_20, sym__3))
        {
          u_20 = ATgetArgument(t_20, 0);
          v_20 = ATgetArgument(t_20, 1);
          w_20 = ATgetArgument(t_20, 2);
          {
            ATerm e_21 = NULL;
            ATerm f_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_20), not_null(v_20));
            {
              t = zip_1(t, _id);
              {
                f_21 = t;
                if(((e_21 != NULL) && (e_21 != f_21)))
                  _fail(f_21);
                else
                  e_21 = f_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_21), not_null(w_20));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm a_82 (ATerm), ATerm b_82 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  t = subs_args_0(t);
  {
    s_21 = t;
    r_21 :
    if(match_cons(s_21, sym__2))
      {
        t_21 = ATgetArgument(s_21, 0);
        u_21 = ATgetArgument(s_21, 1);
        {
          t = not_null(u_21);
          {
            ATerm c_1 (ATerm t)
            {
              ATerm d_1 (ATerm t)
              {
                t = not_null(t_21);
                return(t);
              }
              t = SubsVar_2(t, a_82, d_1);
              t = b_82(t);
              return(t);
            }
            t = alltd_1(t, c_1);
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
ATerm substitute_1 (ATerm t, ATerm c_82 (ATerm))
{
  t = substitute_2(t, c_82, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm z_57 (ATerm), ATerm a_58 (ATerm))
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  f_22 = t;
  b_22 :
  if(match_cons(f_22, sym_VarDec_2))
    {
      g_22 = ATgetArgument(f_22, 0);
      h_22 = ATgetArgument(f_22, 1);
      {
        ATerm k_22 = NULL;
        t = not_null(g_22);
        {
          ATerm o_22 = NULL;
          t = z_57(t);
          {
            k_22 = t;
            {
              t = not_null(h_22);
              {
                t = a_58(t);
                {
                  o_22 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_22), not_null(o_22));
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
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  i_23 = t;
  g_23 :
  if(((ATgetType(i_23) == AT_LIST) && ((ATermList) i_23 != ATempty)))
    {
      j_23 = ATgetFirst((ATermList) i_23);
      n_23 = (ATerm) ATgetNext((ATermList) i_23);
      h_23 :
      if(match_cons(j_23, sym_SDef_3))
        {
          k_23 = ATgetArgument(j_23, 0);
          l_23 = ATgetArgument(j_23, 1);
          m_23 = ATgetArgument(j_23, 2);
          {
            ATerm b_24 = NULL,c_24 = NULL,g_24 = NULL,q_25 = NULL;
            ATerm g_12;
            g_12 = t;
            {
              ATerm h_24 = NULL;
              t = not_null(l_23);
              {
                ATerm v_24 = NULL;
                ATerm e_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, e_1);
                {
                  h_24 = t;
                  {
                    if(((b_24 != NULL) && (b_24 != h_24)))
                      _fail(h_24);
                    else
                      b_24 = h_24;
                    {
                      t = not_null(b_24);
                      {
                        ATerm k_25 = NULL;
                        ATerm f_1 (ATerm t)
                        {
                          ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
                          q_24 = t;
                          w_22 :
                          if(match_cons(q_24, sym_VarDec_2))
                            {
                              r_24 = ATgetArgument(q_24, 0);
                              s_24 = ATgetArgument(q_24, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_24)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, f_1);
                        {
                          v_24 = t;
                          {
                            if(((c_24 != NULL) && (c_24 != v_24)))
                              _fail(v_24);
                            else
                              c_24 = v_24;
                            {
                              t = not_null(i_23);
                              {
                                ATerm g_1 (ATerm t)
                                {
                                  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
                                  w_24 = t;
                                  d_23 :
                                  if(match_cons(w_24, sym_SDef_3))
                                    {
                                      x_24 = ATgetArgument(w_24, 0);
                                      y_24 = ATgetArgument(w_24, 1);
                                      z_24 = ATgetArgument(w_24, 2);
                                      {
                                        ATerm c_25 = NULL;
                                        ATerm j_25 = NULL;
                                        t = not_null(y_24);
                                        {
                                          ATerm h_1 (ATerm t)
                                          {
                                            ATerm d_25 = NULL,e_25 = NULL,h_25 = NULL;
                                            d_25 = t;
                                            b_23 :
                                            if(match_cons(d_25, sym_VarDec_2))
                                              {
                                                e_25 = ATgetArgument(d_25, 0);
                                                h_25 = ATgetArgument(d_25, 1);
                                                t = not_null(e_25);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, h_1);
                                          {
                                            j_25 = t;
                                            if(((c_25 != NULL) && (c_25 != j_25)))
                                              _fail(j_25);
                                            else
                                              c_25 = j_25;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(c_25), not_null(c_24), not_null(z_24));
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
                                t = map_1(t, g_1);
                                {
                                  k_25 = t;
                                  if(((g_24 != NULL) && (g_24 != k_25)))
                                    _fail(k_25);
                                  else
                                    g_24 = k_25;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = g_12;
            {
              ATerm r_25 = NULL;
              t = not_null(g_24);
              {
                t = choices_0(t);
                {
                  r_25 = t;
                  if(((q_25 != NULL) && (q_25 != r_25)))
                    _fail(r_25);
                  else
                    q_25 = r_25;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_23), not_null(b_24), not_null(q_25));
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
  ATerm g_26 = NULL,j_26 = NULL,k_26 = NULL;
  g_26 = t;
  e_26 :
  if(((ATgetType(g_26) == AT_LIST) && ((ATermList) g_26 != ATempty)))
    {
      j_26 = ATgetFirst((ATermList) g_26);
      k_26 = (ATerm) ATgetNext((ATermList) g_26);
      f_26 :
      if(((ATermList) k_26 == ATempty))
        {
          t = not_null(j_26);
        }
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
  ATerm l_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(t_12);
    }
  else
    {
      t = l_12;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  r_26 = t;
  p_26 :
  if(match_cons(r_26, sym__2))
    {
      s_26 = ATgetArgument(r_26, 0);
      v_26 = ATgetArgument(r_26, 1);
      q_26 :
      if(match_cons(s_26, sym__2))
        {
          t_26 = ATgetArgument(s_26, 0);
          u_26 = ATgetArgument(s_26, 1);
          {
            ATerm z_26 = NULL;
            ATerm a_27 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_26), not_null(u_26));
            {
              t = Definitions_0(t);
              {
                a_27 = t;
                if(((z_26 != NULL) && (z_26 != a_27)))
                  _fail(a_27);
                else
                  z_26 = a_27;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_26), not_null(v_26));
          }
        }
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
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  y_27 = t;
  w_27 :
  if(match_cons(y_27, sym_ExplodeCong_2))
    {
      z_27 = ATgetArgument(y_27, 0);
      x_27 = ATgetArgument(y_27, 1);
      {
        ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
        ATerm h_31 = NULL;
        ATerm i_31 = NULL;
        t = new_0(t);
        {
          h_31 = t;
          {
            if(((d_31 != NULL) && (d_31 != h_31)))
              _fail(h_31);
            else
              d_31 = h_31;
            {
              ATerm j_31 = NULL;
              t = new_0(t);
              {
                i_31 = t;
                {
                  if(((e_31 != NULL) && (e_31 != i_31)))
                    _fail(i_31);
                  else
                    e_31 = i_31;
                  {
                    ATerm k_31 = NULL;
                    t = new_0(t);
                    {
                      j_31 = t;
                      {
                        if(((f_31 != NULL) && (f_31 != j_31)))
                          _fail(j_31);
                        else
                          f_31 = j_31;
                        {
                          t = new_0(t);
                          {
                            k_31 = t;
                            if(((g_31 != NULL) && (g_31 != k_31)))
                              _fail(k_31);
                            else
                              g_31 = k_31;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_31)), not_null(f_31)), not_null(e_31)), not_null(d_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(d_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_31)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(z_27), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_31))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(x_27), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_31))))), (ATerm) ATmakeAppl(sym_Prim_2, term_u_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_31))), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_31)))))));
      }
    }
  else
    {
      if(match_cons(y_27, sym_Build_1))
        {
          z_27 = ATgetArgument(y_27, 0);
          {
            ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL;
            ATerm q_31 = NULL;
            ATerm u_31 = NULL;
            t = new_0(t);
            {
              q_31 = t;
              {
                if(((o_31 != NULL) && (o_31 != q_31)))
                  _fail(q_31);
                else
                  o_31 = q_31;
                {
                  t = not_null(z_27);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
                      r_31 = t;
                      p_27 :
                      if(match_cons(r_31, sym_Explode_2))
                        {
                          s_31 = ATgetArgument(r_31, 0);
                          t_31 = ATgetArgument(r_31, 1);
                          {
                            if(((m_31 != NULL) && (m_31 != s_31)))
                              _fail(s_31);
                            else
                              m_31 = s_31;
                            {
                              if(((n_31 != NULL) && (n_31 != t_31)))
                                _fail(t_31);
                              else
                                n_31 = t_31;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_31));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, i_1);
                    {
                      u_31 = t;
                      if(((p_31 != NULL) && (p_31 != u_31)))
                        _fail(u_31);
                      else
                        p_31 = u_31;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_u_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_31)), not_null(m_31))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_31))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_31)))));
          }
        }
      else
        {
          if(match_cons(y_27, sym_Match_1))
            {
              z_27 = ATgetArgument(y_27, 0);
              {
                ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
                ATerm b_32 = NULL;
                ATerm e_32 = NULL;
                t = new_0(t);
                {
                  b_32 = t;
                  {
                    if(((y_31 != NULL) && (y_31 != b_32)))
                      _fail(b_32);
                    else
                      y_31 = b_32;
                    {
                      ATerm i_32 = NULL;
                      t = new_0(t);
                      {
                        e_32 = t;
                        {
                          if(((z_31 != NULL) && (z_31 != e_32)))
                            _fail(e_32);
                          else
                            z_31 = e_32;
                          {
                            t = not_null(z_27);
                            {
                              ATerm j_1 (ATerm t)
                              {
                                ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
                                f_32 = t;
                                u_27 :
                                if(match_cons(f_32, sym_Explode_2))
                                  {
                                    g_32 = ATgetArgument(f_32, 0);
                                    h_32 = ATgetArgument(f_32, 1);
                                    {
                                      if(((w_31 != NULL) && (w_31 != g_32)))
                                        _fail(g_32);
                                      else
                                        w_31 = g_32;
                                      {
                                        if(((x_31 != NULL) && (x_31 != h_32)))
                                          _fail(h_32);
                                        else
                                          x_31 = h_32;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_31));
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
                                i_32 = t;
                                if(((a_32 != NULL) && (a_32 != i_32)))
                                  _fail(i_32);
                                else
                                  a_32 = i_32;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_32)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_31))), (ATerm) ATmakeAppl(sym_Prim_2, term_v_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_31)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_31)), (ATerm) ATmakeAppl(sym_Op_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_31)), not_null(w_31)))))));
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
  ATerm n_33 = NULL,o_33 = NULL;
  n_33 = t;
  m_33 :
  if(match_cons(n_33, sym_Match_1))
    {
      o_33 = ATgetArgument(n_33, 0);
      {
        ATerm x_12 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
            ATerm u_33 = NULL;
            ATerm y_33 = NULL;
            t = new_0(t);
            {
              u_33 = t;
              {
                if(((s_33 != NULL) && (s_33 != u_33)))
                  _fail(u_33);
                else
                  s_33 = u_33;
                {
                  t = not_null(o_33);
                  {
                    ATerm k_1 (ATerm t)
                    {
                      ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
                      v_33 = t;
                      c_33 :
                      if(match_cons(v_33, sym_Anno_2))
                        {
                          w_33 = ATgetArgument(v_33, 0);
                          x_33 = ATgetArgument(v_33, 1);
                          {
                            if(((q_33 != NULL) && (q_33 != w_33)))
                              _fail(w_33);
                            else
                              q_33 = w_33;
                            {
                              if(((r_33 != NULL) && (r_33 != x_33)))
                                _fail(x_33);
                              else
                                r_33 = x_33;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_33)), not_null(q_33));
                            }
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
                      y_33 = t;
                      if(((t_33 != NULL) && (t_33 != y_33)))
                        _fail(y_33);
                      else
                        t_33 = y_33;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_33)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_d_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_33)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_33))))));
            LocalPopChoice(c_13);
          }
        else
          {
            t = x_12;
            {
              ATerm g_13 = t;
              int h_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
                  ATerm d_34 = NULL;
                  ATerm g_34 = NULL;
                  t = new_0(t);
                  {
                    d_34 = t;
                    {
                      if(((b_34 != NULL) && (b_34 != d_34)))
                        _fail(d_34);
                      else
                        b_34 = d_34;
                      {
                        t = not_null(o_33);
                        {
                          ATerm l_1 (ATerm t)
                          {
                            ATerm e_34 = NULL,f_34 = NULL;
                            e_34 = t;
                            g_33 :
                            if(match_cons(e_34, sym_RootApp_1))
                              {
                                f_34 = ATgetArgument(e_34, 0);
                                {
                                  if(((a_34 != NULL) && (a_34 != f_34)))
                                    _fail(f_34);
                                  else
                                    a_34 = f_34;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_34));
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
                            g_34 = t;
                            if(((c_34 != NULL) && (c_34 != g_34)))
                              _fail(g_34);
                            else
                              c_34 = g_34;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_34))), not_null(a_34))));
                  LocalPopChoice(h_13);
                }
              else
                {
                  t = g_13;
                  {
                    ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
                    ATerm m_34 = NULL;
                    ATerm q_34 = NULL;
                    t = new_0(t);
                    {
                      m_34 = t;
                      {
                        if(((k_34 != NULL) && (k_34 != m_34)))
                          _fail(m_34);
                        else
                          k_34 = m_34;
                        {
                          t = not_null(o_33);
                          {
                            ATerm m_1 (ATerm t)
                            {
                              ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
                              n_34 = t;
                              k_33 :
                              if(match_cons(n_34, sym_App_2))
                                {
                                  o_34 = ATgetArgument(n_34, 0);
                                  p_34 = ATgetArgument(n_34, 1);
                                  {
                                    if(((j_34 != NULL) && (j_34 != o_34)))
                                      _fail(o_34);
                                    else
                                      j_34 = o_34;
                                    {
                                      if(((i_34 != NULL) && (i_34 != p_34)))
                                        _fail(p_34);
                                      else
                                        i_34 = p_34;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_34));
                                    }
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
                              q_34 = t;
                              if(((l_34 != NULL) && (l_34 != q_34)))
                                _fail(q_34);
                              else
                                l_34 = q_34;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_34))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_34)), not_null(j_34)))));
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
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  h_35 = t;
  f_35 :
  if(match_cons(h_35, sym_Match_1))
    {
      i_35 = ATgetArgument(h_35, 0);
      g_35 :
      if(match_cons(i_35, sym_RootApp_1))
        {
          j_35 = ATgetArgument(i_35, 0);
          t = not_null(j_35);
        }
      else
        {
          if(match_cons(i_35, sym_App_2))
            {
              j_35 = ATgetArgument(i_35, 0);
              k_35 = ATgetArgument(i_35, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(j_35), not_null(k_35));
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
  ATerm x_35 = NULL,y_35 = NULL;
  x_35 = t;
  w_35 :
  if(match_cons(x_35, sym_Match_1))
    {
      y_35 = ATgetArgument(x_35, 0);
      {
        ATerm a_36 = NULL,b_36 = NULL;
        ATerm f_36 = NULL;
        t = not_null(y_35);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
            c_36 = t;
            s_35 :
            if(match_cons(c_36, sym_RootApp_1))
              {
                d_36 = ATgetArgument(c_36, 0);
                t_35 :
                if(match_cons(d_36, sym_Match_1))
                  {
                    e_36 = ATgetArgument(d_36, 0);
                    {
                      if(((a_36 != NULL) && (a_36 != e_36)))
                        _fail(e_36);
                      else
                        a_36 = e_36;
                      t = not_null(a_36);
                    }
                  }
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
          t = pat_td_1(t, n_1);
          {
            f_36 = t;
            if(((b_36 != NULL) && (b_36 != f_36)))
              _fail(f_36);
            else
              b_36 = f_36;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(b_36));
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
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL;
  z_36 = t;
  y_36 :
  if(match_cons(z_36, sym_Build_1))
    {
      a_37 = ATgetArgument(z_36, 0);
      {
        ATerm q_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
            ATerm g_37 = NULL;
            ATerm k_37 = NULL;
            t = new_0(t);
            {
              g_37 = t;
              {
                if(((e_37 != NULL) && (e_37 != g_37)))
                  _fail(g_37);
                else
                  e_37 = g_37;
                {
                  t = not_null(a_37);
                  {
                    ATerm o_1 (ATerm t)
                    {
                      ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
                      h_37 = t;
                      o_36 :
                      if(match_cons(h_37, sym_Anno_2))
                        {
                          i_37 = ATgetArgument(h_37, 0);
                          j_37 = ATgetArgument(h_37, 1);
                          {
                            if(((c_37 != NULL) && (c_37 != i_37)))
                              _fail(i_37);
                            else
                              c_37 = i_37;
                            {
                              if(((d_37 != NULL) && (d_37 != j_37)))
                                _fail(j_37);
                              else
                                d_37 = j_37;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_37));
                            }
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
                      k_37 = t;
                      if(((f_37 != NULL) && (f_37 != k_37)))
                        _fail(k_37);
                      else
                        f_37 = k_37;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_37)), not_null(c_37))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_37))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_37))));
            LocalPopChoice(x_13);
          }
        else
          {
            t = q_13;
            {
              ATerm z_13 = t;
              int a_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
                  ATerm p_37 = NULL;
                  ATerm s_37 = NULL;
                  t = new_0(t);
                  {
                    p_37 = t;
                    {
                      if(((n_37 != NULL) && (n_37 != p_37)))
                        _fail(p_37);
                      else
                        n_37 = p_37;
                      {
                        t = not_null(a_37);
                        {
                          ATerm p_1 (ATerm t)
                          {
                            ATerm q_37 = NULL,r_37 = NULL;
                            q_37 = t;
                            s_36 :
                            if(match_cons(q_37, sym_RootApp_1))
                              {
                                r_37 = ATgetArgument(q_37, 0);
                                {
                                  if(((m_37 != NULL) && (m_37 != r_37)))
                                    _fail(r_37);
                                  else
                                    m_37 = r_37;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_37));
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
                            s_37 = t;
                            if(((o_37 != NULL) && (o_37 != s_37)))
                              _fail(s_37);
                            else
                              o_37 = s_37;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_37))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_37))));
                  LocalPopChoice(a_14);
                }
              else
                {
                  t = z_13;
                  {
                    ATerm u_37 = NULL,v_37 = NULL,a_38 = NULL,b_38 = NULL;
                    ATerm c_38 = NULL;
                    ATerm g_38 = NULL;
                    t = new_0(t);
                    {
                      c_38 = t;
                      {
                        if(((a_38 != NULL) && (a_38 != c_38)))
                          _fail(c_38);
                        else
                          a_38 = c_38;
                        {
                          t = not_null(a_37);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
                              d_38 = t;
                              w_36 :
                              if(match_cons(d_38, sym_App_2))
                                {
                                  e_38 = ATgetArgument(d_38, 0);
                                  f_38 = ATgetArgument(d_38, 1);
                                  {
                                    if(((u_37 != NULL) && (u_37 != e_38)))
                                      _fail(e_38);
                                    else
                                      u_37 = e_38;
                                    {
                                      if(((v_37 != NULL) && (v_37 != f_38)))
                                        _fail(f_38);
                                      else
                                        v_37 = f_38;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_38));
                                    }
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
                              g_38 = t;
                              if(((b_38 != NULL) && (b_38 != g_38)))
                                _fail(g_38);
                              else
                                b_38 = g_38;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_37), not_null(v_37), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_38)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_38))));
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
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,x_39 = NULL;
  t_39 = t;
  g_39 :
  if(match_cons(t_39, sym_Build_1))
    {
      u_39 = ATgetArgument(t_39, 0);
      h_39 :
      if(match_cons(u_39, sym_RootApp_1))
        {
          v_39 = ATgetArgument(u_39, 0);
          t = not_null(v_39);
        }
      else
        {
          if(match_cons(u_39, sym_App_2))
            {
              v_39 = ATgetArgument(u_39, 0);
              x_39 = ATgetArgument(u_39, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_39)), not_null(v_39));
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
ATerm Prim_2 (ATerm t, ATerm z_58 (ATerm), ATerm a_59 (ATerm))
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  g_40 :
  if(match_cons(m_40, sym_Prim_2))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      {
        ATerm r_40 = NULL;
        t = not_null(n_40);
        {
          ATerm t_40 = NULL;
          t = z_58(t);
          {
            r_40 = t;
            {
              t = not_null(o_40);
              {
                t = a_59(t);
                {
                  t_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(r_40), not_null(t_40));
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
ATerm Explode_2 (ATerm t, ATerm o_55 (ATerm), ATerm p_55 (ATerm))
{
  ATerm j_41 = NULL,k_41 = NULL,p_41 = NULL;
  j_41 = t;
  i_41 :
  if(match_cons(j_41, sym_Explode_2))
    {
      k_41 = ATgetArgument(j_41, 0);
      p_41 = ATgetArgument(j_41, 1);
      {
        ATerm s_41 = NULL;
        t = not_null(k_41);
        {
          ATerm u_41 = NULL;
          t = o_55(t);
          {
            s_41 = t;
            {
              t = not_null(p_41);
              {
                t = p_55(t);
                {
                  u_41 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(s_41), not_null(u_41));
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
ATerm Op_2 (ATerm t, ATerm z_56 (ATerm), ATerm a_57 (ATerm))
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
  l_42 = t;
  k_42 :
  if(match_cons(l_42, sym_Op_2))
    {
      m_42 = ATgetArgument(l_42, 0);
      n_42 = ATgetArgument(l_42, 1);
      {
        ATerm q_42 = NULL;
        t = not_null(m_42);
        {
          ATerm s_42 = NULL;
          t = z_56(t);
          {
            q_42 = t;
            {
              t = not_null(n_42);
              {
                t = a_57(t);
                {
                  s_42 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(q_42), not_null(s_42));
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
ATerm pat_td_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_59(t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      {
        ATerm d_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = pat_td_1(t, m_59);
                return(t);
              }
              t = fetch_1(t, s_1);
              return(t);
            }
            t = Op_2(t, _id, r_1);
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
                  ATerm t_1 (ATerm t)
                  {
                    t = pat_td_1(t, m_59);
                    return(t);
                  }
                  t = Explode_2(t, _id, t_1);
                  LocalPopChoice(h_14);
                }
              else
                {
                  t = g_14;
                  {
                    ATerm i_14 = t;
                    int j_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_1 (ATerm t)
                        {
                          t = pat_td_1(t, m_59);
                          return(t);
                        }
                        t = Explode_2(t, u_1, _id);
                        LocalPopChoice(j_14);
                      }
                    else
                      {
                        t = i_14;
                        {
                          ATerm v_1 (ATerm t)
                          {
                            ATerm w_1 (ATerm t)
                            {
                              t = pat_td_1(t, m_59);
                              return(t);
                            }
                            t = fetch_1(t, w_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, v_1);
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
  ATerm i_43 = NULL,j_43 = NULL;
  i_43 = t;
  h_43 :
  if(match_cons(i_43, sym_Build_1))
    {
      j_43 = ATgetArgument(i_43, 0);
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_43 = NULL,m_43 = NULL;
            ATerm q_43 = NULL;
            t = not_null(j_43);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
                n_43 = t;
                a_43 :
                if(match_cons(n_43, sym_RootApp_1))
                  {
                    o_43 = ATgetArgument(n_43, 0);
                    b_43 :
                    if(match_cons(o_43, sym_Build_1))
                      {
                        p_43 = ATgetArgument(o_43, 0);
                        {
                          if(((l_43 != NULL) && (l_43 != p_43)))
                            _fail(p_43);
                          else
                            l_43 = p_43;
                          t = not_null(l_43);
                        }
                      }
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
              t = pat_td_1(t, x_1);
              {
                q_43 = t;
                if(((m_43 != NULL) && (m_43 != q_43)))
                  _fail(q_43);
                else
                  m_43 = q_43;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_43));
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            {
              ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
              ATerm z_43 = NULL;
              t = not_null(j_43);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL;
                  v_43 = t;
                  e_43 :
                  if(match_cons(v_43, sym_App_2))
                    {
                      w_43 = ATgetArgument(v_43, 0);
                      y_43 = ATgetArgument(v_43, 1);
                      f_43 :
                      if(match_cons(w_43, sym_Build_1))
                        {
                          x_43 = ATgetArgument(w_43, 0);
                          {
                            if(((t_43 != NULL) && (t_43 != x_43)))
                              _fail(x_43);
                            else
                              t_43 = x_43;
                            {
                              if(((s_43 != NULL) && (s_43 != y_43)))
                                _fail(y_43);
                              else
                                s_43 = y_43;
                              t = not_null(t_43);
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
                t = pat_td_1(t, y_1);
                {
                  z_43 = t;
                  if(((u_43 != NULL) && (u_43 != z_43)))
                    _fail(z_43);
                  else
                    u_43 = z_43;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(u_43));
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
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
  s_45 = t;
  j_45 :
  if(match_cons(s_45, sym_InfixApp_3))
    {
      t_45 = ATgetArgument(s_45, 0);
      p_45 = ATgetArgument(s_45, 1);
      o_45 = ATgetArgument(s_45, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(p_45), (ATerm) ATmakeAppl(sym_Op_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_45)), not_null(t_45))));
    }
  else
    {
      if(match_cons(s_45, sym_BAM_3))
        {
          t_45 = ATgetArgument(s_45, 0);
          p_45 = ATgetArgument(s_45, 1);
          o_45 = ATgetArgument(s_45, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(o_45))), not_null(t_45)), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_45))));
        }
      else
        {
          if(match_cons(s_45, sym_AM_2))
            {
              t_45 = ATgetArgument(s_45, 0);
              p_45 = ATgetArgument(s_45, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_45), (ATerm) ATmakeAppl(sym_Match_1, not_null(p_45)));
            }
          else
            {
              if(match_cons(s_45, sym_MA_2))
                {
                  t_45 = ATgetArgument(s_45, 0);
                  p_45 = ATgetArgument(s_45, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_45)), not_null(p_45));
                }
              else
                {
                  if(match_cons(s_45, sym_BA_2))
                    {
                      t_45 = ATgetArgument(s_45, 0);
                      p_45 = ATgetArgument(s_45, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_45)), not_null(t_45));
                    }
                  else
                    {
                      if(match_cons(s_45, sym_Lets_2))
                        {
                          t_45 = ATgetArgument(s_45, 0);
                          p_45 = ATgetArgument(s_45, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_45), not_null(p_45));
                        }
                      else
                        {
                          if(match_cons(s_45, sym_LChoices_1))
                            {
                              t_45 = ATgetArgument(s_45, 0);
                              k_45 :
                              if(((ATgetType(t_45) == AT_LIST) && ((ATermList) t_45 != ATempty)))
                                {
                                  q_45 = ATgetFirst((ATermList) t_45);
                                  r_45 = (ATerm) ATgetNext((ATermList) t_45);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_45), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(r_45)));
                                }
                              else
                                {
                                  if(((ATermList) t_45 == ATempty))
                                    {
                                      t = term_v_11;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(s_45, sym_Choices_1))
                                {
                                  t_45 = ATgetArgument(s_45, 0);
                                  l_45 :
                                  if(((ATgetType(t_45) == AT_LIST) && ((ATermList) t_45 != ATempty)))
                                    {
                                      q_45 = ATgetFirst((ATermList) t_45);
                                      r_45 = (ATerm) ATgetNext((ATermList) t_45);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_45), (ATerm) ATmakeAppl(sym_Choices_1, not_null(r_45)));
                                    }
                                  else
                                    {
                                      if(((ATermList) t_45 == ATempty))
                                        {
                                          t = term_v_11;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(s_45, sym_Seqs_1))
                                    {
                                      t_45 = ATgetArgument(s_45, 0);
                                      n_45 :
                                      if(((ATgetType(t_45) == AT_LIST) && ((ATermList) t_45 != ATempty)))
                                        {
                                          q_45 = ATgetFirst((ATermList) t_45);
                                          r_45 = (ATerm) ATgetNext((ATermList) t_45);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_45), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(r_45)));
                                        }
                                      else
                                        {
                                          if(((ATermList) t_45 == ATempty))
                                            {
                                              t = term_q_14;
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
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL;
  s_47 = t;
  p_47 :
  if(match_cons(s_47, sym__2))
    {
      t_47 = ATgetArgument(s_47, 0);
      w_47 = ATgetArgument(s_47, 1);
      q_47 :
      if(match_cons(t_47, sym__2))
        {
          u_47 = ATgetArgument(t_47, 0);
          v_47 = ATgetArgument(t_47, 1);
          r_47 :
          if(match_cons(w_47, sym__2))
            {
              x_47 = ATgetArgument(w_47, 0);
              y_47 = ATgetArgument(w_47, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_47)), not_null(u_47)), (ATerm) ATinsert(CheckATermList(not_null(y_47)), not_null(v_47)));
            }
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
  ATerm g_48 = NULL,j_48 = NULL,k_48 = NULL;
  g_48 = t;
  f_48 :
  if(((ATgetType(g_48) == AT_LIST) && ((ATermList) g_48 != ATempty)))
    {
      j_48 = ATgetFirst((ATermList) g_48);
      k_48 = (ATerm) ATgetNext((ATermList) g_48);
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_48), not_null(k_48));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm q_48 = NULL;
  q_48 = t;
  p_48 :
  if(((ATermList) q_48 == ATempty))
    {
      t = term_r_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm i_76 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, i_76);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL;
  ATerm c_49 (ATerm t)
  {
    ATerm z_48 = NULL;
    ATerm a_49 = NULL;
    t = not_null(w_48);
    {
      ATerm s_14 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_14;
        }
      {
        t = new_0(t);
        {
          a_49 = t;
          if(((z_48 != NULL) && (z_48 != a_49)))
            _fail(a_49);
          else
            z_48 = a_49;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(z_48)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_48)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_48))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_48))));
    return(t);
  }
  ATerm d_49 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_48))));
    return(t);
  }
  w_48 = t;
  v_48 :
  if(match_cons(w_48, sym_Var_1))
    {
      x_48 = ATgetArgument(w_48, 0);
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_49(t);
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
            t = d_49(t);
          }
      }
    }
  else
    {
      t = c_49(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm v_56 (ATerm))
{
  ATerm i_49 = NULL,j_49 = NULL;
  i_49 = t;
  h_49 :
  if(match_cons(i_49, sym_Var_1))
    {
      j_49 = ATgetArgument(i_49, 0);
      {
        ATerm l_49 = NULL;
        t = not_null(j_49);
        {
          t = v_56(t);
          {
            l_49 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_49));
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
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
  u_49 = t;
  t_49 :
  if(match_cons(u_49, sym_Prim_2))
    {
      v_49 = ATgetArgument(u_49, 0);
      w_49 = ATgetArgument(u_49, 1);
      {
        ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
        ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
        t = not_null(w_49);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm v_14 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_14;
              }
            return(t);
          }
          t = fetch_1(t, z_1);
          {
            t = not_null(w_49);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm a_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, a_2);
                {
                  c_50 = t;
                  r_49 :
                  if(match_cons(c_50, sym__2))
                    {
                      d_50 = ATgetArgument(c_50, 0);
                      e_50 = ATgetArgument(c_50, 1);
                      s_49 :
                      if(match_cons(e_50, sym__2))
                        {
                          f_50 = ATgetArgument(e_50, 0);
                          g_50 = ATgetArgument(e_50, 1);
                          {
                            if(((z_49 != NULL) && (z_49 != d_50)))
                              _fail(d_50);
                            else
                              z_49 = d_50;
                            {
                              if(((a_50 != NULL) && (a_50 != f_50)))
                                _fail(f_50);
                              else
                                a_50 = f_50;
                              if(((b_50 != NULL) && (b_50 != g_50)))
                                _fail(g_50);
                              else
                                b_50 = g_50;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(a_50)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(v_49), not_null(b_50))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm t_65 (ATerm), ATerm u_65 (ATerm))
{
  ATerm j_50 (ATerm t)
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_65(t);
        t = j_50(t);
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = u_65(t);
      }
    return(t);
  }
  t = j_50(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm w_65 (ATerm))
{
  t = repeat_2(t, w_65, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm l_50 = NULL;
  l_50 = t;
  k_50 :
  if(!(match_cons(l_50, sym_Wld_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm y_14 = t;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, b_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_14;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm i_55 (ATerm), ATerm j_55 (ATerm))
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL;
  q_50 = t;
  p_50 :
  if(match_cons(q_50, sym_App_2))
    {
      r_50 = ATgetArgument(q_50, 0);
      s_50 = ATgetArgument(q_50, 1);
      {
        ATerm v_50 = NULL;
        t = not_null(r_50);
        {
          ATerm x_50 = NULL;
          t = i_55(t);
          {
            v_50 = t;
            {
              t = not_null(s_50);
              {
                t = j_55(t);
                {
                  x_50 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(v_50), not_null(x_50));
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
ATerm Con_3 (ATerm t, ATerm f_55 (ATerm), ATerm g_55 (ATerm), ATerm h_55 (ATerm))
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
  h_51 = t;
  g_51 :
  if(match_cons(h_51, sym_Con_3))
    {
      i_51 = ATgetArgument(h_51, 0);
      j_51 = ATgetArgument(h_51, 1);
      k_51 = ATgetArgument(h_51, 2);
      {
        ATerm o_51 = NULL;
        t = not_null(i_51);
        {
          ATerm q_51 = NULL;
          t = f_55(t);
          {
            o_51 = t;
            {
              t = not_null(j_51);
              {
                ATerm s_51 = NULL;
                t = g_55(t);
                {
                  q_51 = t;
                  {
                    t = not_null(k_51);
                    {
                      t = h_55(t);
                      {
                        s_51 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(o_51), not_null(q_51), not_null(s_51));
                      }
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
  ATerm b_15 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, c_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_15;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL;
  c_52 = t;
  a_52 :
  if(match_cons(c_52, sym_SRule_1))
    {
      d_52 = ATgetArgument(c_52, 0);
      b_52 :
      if(match_cons(d_52, sym_StratRule_3))
        {
          e_52 = ATgetArgument(d_52, 0);
          f_52 = ATgetArgument(d_52, 1);
          g_52 = ATgetArgument(d_52, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_52)), (ATerm) ATmakeAppl(sym_Where_1, not_null(g_52))), not_null(e_52)));
        }
      else
        {
          if(match_cons(d_52, sym_Rule_3))
            {
              e_52 = ATgetArgument(d_52, 0);
              f_52 = ATgetArgument(d_52, 1);
              g_52 = ATgetArgument(d_52, 2);
              {
                t = not_null(e_52);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(f_52);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(f_52))), (ATerm) ATmakeAppl(sym_Where_1, not_null(g_52))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_52))));
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
ATerm Scope_2 (ATerm t, ATerm w_58 (ATerm), ATerm x_58 (ATerm))
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
  t_52 = t;
  s_52 :
  if(match_cons(t_52, sym_Scope_2))
    {
      u_52 = ATgetArgument(t_52, 0);
      v_52 = ATgetArgument(t_52, 1);
      {
        ATerm y_52 = NULL;
        t = not_null(u_52);
        {
          ATerm a_53 = NULL;
          t = w_58(t);
          {
            y_52 = t;
            {
              t = not_null(v_52);
              {
                t = x_58(t);
                {
                  a_53 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_52), not_null(a_53));
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
ATerm oncetd_1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm f_53 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_80(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        t = _one(t, f_53);
      }
    return(t);
  }
  t = f_53(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL;
  u_53 = t;
  s_53 :
  if(match_cons(u_53, sym_SRule_1))
    {
      v_53 = ATgetArgument(u_53, 0);
      t_53 :
      if(match_cons(v_53, sym_Rule_3))
        {
          y_53 = ATgetArgument(v_53, 0);
          z_53 = ATgetArgument(v_53, 1);
          a_54 = ATgetArgument(v_53, 2);
          {
            ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
            ATerm m_54 = NULL;
            ATerm s_54 = NULL;
            t = new_0(t);
            {
              m_54 = t;
              {
                if(((j_54 != NULL) && (j_54 != m_54)))
                  _fail(m_54);
                else
                  j_54 = m_54;
                {
                  t = not_null(y_53);
                  {
                    ATerm a_55 = NULL;
                    ATerm d_2 (ATerm t)
                    {
                      ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
                      n_54 = t;
                      j_53 :
                      if(match_cons(n_54, sym_Con_3))
                        {
                          o_54 = ATgetArgument(n_54, 0);
                          q_54 = ATgetArgument(n_54, 1);
                          r_54 = ATgetArgument(n_54, 2);
                          k_53 :
                          if(match_cons(o_54, sym_Var_1))
                            {
                              p_54 = ATgetArgument(o_54, 0);
                              {
                                if(((i_54 != NULL) && (i_54 != p_54)))
                                  _fail(p_54);
                                else
                                  i_54 = p_54;
                                {
                                  if(((g_54 != NULL) && (g_54 != q_54)))
                                    _fail(q_54);
                                  else
                                    g_54 = q_54;
                                  {
                                    if(((e_54 != NULL) && (e_54 != r_54)))
                                      _fail(r_54);
                                    else
                                      e_54 = r_54;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_54));
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
                    t = oncetd_1(t, d_2);
                    {
                      s_54 = t;
                      {
                        if(((k_54 != NULL) && (k_54 != s_54)))
                          _fail(s_54);
                        else
                          k_54 = s_54;
                        {
                          t = not_null(z_53);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL;
                              t_54 = t;
                              n_53 :
                              if(match_cons(t_54, sym_Con_3))
                                {
                                  u_54 = ATgetArgument(t_54, 0);
                                  w_54 = ATgetArgument(t_54, 1);
                                  x_54 = ATgetArgument(t_54, 2);
                                  o_53 :
                                  if(match_cons(u_54, sym_Var_1))
                                    {
                                      v_54 = ATgetArgument(u_54, 0);
                                      p_53 :
                                      if(match_cons(x_54, sym_Call_2))
                                        {
                                          y_54 = ATgetArgument(x_54, 0);
                                          z_54 = ATgetArgument(x_54, 1);
                                          q_53 :
                                          if(((ATermList) z_54 == ATempty))
                                            {
                                              {
                                                if(((i_54 != NULL) && (i_54 != v_54)))
                                                  _fail(v_54);
                                                else
                                                  i_54 = v_54;
                                                {
                                                  if(((h_54 != NULL) && (h_54 != w_54)))
                                                    _fail(w_54);
                                                  else
                                                    h_54 = w_54;
                                                  {
                                                    if(((f_54 != NULL) && (f_54 != y_54)))
                                                      _fail(y_54);
                                                    else
                                                      f_54 = y_54;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_54));
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
                            t = oncetd_1(t, e_2);
                            {
                              a_55 = t;
                              if(((l_54 != NULL) && (l_54 != a_55)))
                                _fail(a_55);
                              else
                                l_54 = a_55;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_54)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_54), not_null(l_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_54), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(f_54), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_54), not_null(h_54), term_q_14)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_54)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_54)))))));
          }
        }
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
  ATerm f_2 (ATerm t)
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        {
          ATerm i_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(j_15);
            }
          else
            {
              t = i_15;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm n_55 (ATerm t)
  {
    t = s_78(t);
    t = _all(t, n_55);
    return(t);
  }
  t = n_55(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm h_2 (ATerm t)
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            {
              ATerm m_15 = t;
              int n_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(n_15);
                }
              else
                {
                  t = m_15;
                  {
                    ATerm o_15 = t;
                    int p_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(p_15);
                      }
                    else
                      {
                        t = o_15;
                        {
                          ATerm q_15 = t;
                          int r_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(r_15);
                            }
                          else
                            {
                              t = q_15;
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
      t = repeat_1(t, h_2);
    }
    return(t);
  }
  t = topdown_1(t, g_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm r_55 = NULL;
  r_55 = t;
  q_55 :
  if(!(match_cons(r_55, sym__0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm a_56 = NULL;
  ATerm c_56 = NULL,d_56 = NULL,l_56 = NULL,n_56 = NULL;
  a_56 = t;
  {
    ATerm s_15;
    s_15 = t;
    {
      ATerm e_56 = NULL;
      ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL;
      t = not_null(a_56);
      {
        e_56 = t;
        {
          t = SSL_explode_term(not_null(e_56));
          {
            g_56 = t;
            v_55 :
            if(match_cons(g_56, sym__2))
              {
                h_56 = ATgetArgument(g_56, 0);
                i_56 = ATgetArgument(g_56, 1);
                w_55 :
                if(match_string(h_56, ""))
                  {
                    x_55 :
                    if(((ATgetType(i_56) == AT_LIST) && ((ATermList) i_56 != ATempty)))
                      {
                        j_56 = ATgetFirst((ATermList) i_56);
                        k_56 = (ATerm) ATgetNext((ATermList) i_56);
                        {
                          if(((c_56 != NULL) && (c_56 != j_56)))
                            _fail(j_56);
                          else
                            c_56 = j_56;
                          if(((d_56 != NULL) && (d_56 != k_56)))
                            _fail(k_56);
                          else
                            d_56 = k_56;
                        }
                      }
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
    t = s_15;
    {
      ATerm t_15;
      t_15 = t;
      {
        ATerm m_56 = NULL;
        t = term_w_12;
        {
          m_56 = t;
          if(((l_56 != NULL) && (l_56 != m_56)))
            _fail(m_56);
          else
            l_56 = m_56;
        }
      }
      t = t_15;
      {
        t = SSL_mkterm(not_null(l_56), not_null(d_56));
        {
          n_56 = t;
          t = not_null(n_56);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm f_57 = NULL;
  ATerm h_57 = NULL,i_57 = NULL;
  f_57 = t;
  {
    ATerm j_57 = NULL;
    ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL;
    t = not_null(f_57);
    {
      j_57 = t;
      {
        t = SSL_explode_term(not_null(j_57));
        {
          l_57 = t;
          c_57 :
          if(match_cons(l_57, sym__2))
            {
              m_57 = ATgetArgument(l_57, 0);
              n_57 = ATgetArgument(l_57, 1);
              d_57 :
              if(match_string(m_57, ""))
                {
                  e_57 :
                  if(((ATgetType(n_57) == AT_LIST) && ((ATermList) n_57 != ATempty)))
                    {
                      o_57 = ATgetFirst((ATermList) n_57);
                      p_57 = (ATerm) ATgetNext((ATermList) n_57);
                      {
                        if(((i_57 != NULL) && (i_57 != o_57)))
                          _fail(o_57);
                        else
                          i_57 = o_57;
                        if(((h_57 != NULL) && (h_57 != p_57)))
                          _fail(p_57);
                        else
                          h_57 = p_57;
                      }
                    }
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
    t = not_null(i_57);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm b_78 (ATerm))
{
  ATerm l_58 = NULL,n_58 = NULL,p_58 = NULL;
  ATerm r_58 (ATerm t)
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_58 = NULL,j_58 = NULL;
        ATerm w_15;
        w_15 = t;
        {
          ATerm i_58 = NULL;
          t = map_1(t, Thd_0);
          {
            t = b_78(t);
            {
              i_58 = t;
              if(((h_58 != NULL) && (h_58 != i_58)))
                _fail(i_58);
              else
                h_58 = i_58;
            }
          }
        }
        t = w_15;
        {
          ATerm k_58 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = r_58(t);
            {
              k_58 = t;
              if(((j_58 != NULL) && (j_58 != k_58)))
                _fail(k_58);
              else
                j_58 = k_58;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(j_58)), not_null(h_58));
        }
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = r_58(t);
  {
    ATerm x_15;
    x_15 = t;
    {
      ATerm m_58 = NULL;
      m_58 = t;
      if(((l_58 != NULL) && (l_58 != m_58)))
        _fail(m_58);
      else
        l_58 = m_58;
    }
    t = x_15;
    {
      ATerm y_15;
      y_15 = t;
      {
        ATerm o_58 = NULL;
        t = term_w_12;
        {
          o_58 = t;
          if(((n_58 != NULL) && (n_58 != o_58)))
            _fail(o_58);
          else
            n_58 = o_58;
        }
      }
      t = y_15;
      {
        t = SSL_mkterm(not_null(n_58), not_null(l_58));
        {
          p_58 = t;
          t = not_null(p_58);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm h_59 = NULL;
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL;
  h_59 = t;
  {
    ATerm o_59 = NULL;
    ATerm p_59 = NULL;
    t = new_0(t);
    {
      o_59 = t;
      {
        if(((j_59 != NULL) && (j_59 != o_59)))
          _fail(o_59);
        else
          j_59 = o_59;
        {
          ATerm q_59 = NULL;
          t = new_0(t);
          {
            p_59 = t;
            {
              if(((k_59 != NULL) && (k_59 != p_59)))
                _fail(p_59);
              else
                k_59 = p_59;
              {
                t = new_0(t);
                {
                  q_59 = t;
                  if(((l_59 != NULL) && (l_59 != q_59)))
                    _fail(q_59);
                  else
                    l_59 = q_59;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_59)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_59)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_59))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_59), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_16), term_b_16)), not_null(k_59), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_59)), not_null(l_59), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_59)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm z_59 = NULL,d_60 = NULL,e_60 = NULL;
  z_59 = t;
  y_59 :
  if(match_cons(z_59, sym__2))
    {
      d_60 = ATgetArgument(z_59, 0);
      e_60 = ATgetArgument(z_59, 1);
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_60), not_null(e_60));
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            t = SSL_subtr(not_null(d_60), not_null(e_60));
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
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL;
  n_60 = t;
  m_60 :
  if(match_cons(n_60, sym__2))
    {
      o_60 = ATgetArgument(n_60, 0);
      p_60 = ATgetArgument(n_60, 1);
      {
        ATerm e_16;
        e_16 = t;
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_60), not_null(p_60));
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              t = SSL_gtr(not_null(o_60), not_null(p_60));
            }
        }
        t = e_16;
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
  ATerm v_60 = NULL;
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL;
      w_60 = t;
      u_60 :
      if(match_cons(w_60, sym__2))
        {
          x_60 = ATgetArgument(w_60, 0);
          y_60 = ATgetArgument(w_60, 1);
          {
            if(((v_60 != NULL) && (v_60 != x_60)))
              _fail(x_60);
            else
              v_60 = x_60;
            if(((v_60 != NULL) && (v_60 != y_60)))
              _fail(y_60);
            else
              v_60 = y_60;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm k_71 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL;
    j_61 = t;
    b_61 :
    if(match_cons(j_61, sym__2))
      {
        k_61 = ATgetArgument(j_61, 0);
        l_61 = ATgetArgument(j_61, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(k_61), not_null(l_61), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
    o_61 = t;
    d_61 :
    if(match_cons(o_61, sym__3))
      {
        p_61 = ATgetArgument(o_61, 0);
        q_61 = ATgetArgument(o_61, 1);
        r_61 = ATgetArgument(o_61, 2);
        e_61 :
        if(match_int(p_61, 0))
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
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
    a_62 = t;
    i_61 :
    if(match_cons(a_62, sym__3))
      {
        b_62 = ATgetArgument(a_62, 0);
        c_62 = ATgetArgument(a_62, 1);
        d_62 = ATgetArgument(a_62, 2);
        {
          ATerm h_62 = NULL,j_62 = NULL;
          ATerm j_16;
          j_16 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_62), term_l_9);
            t = geq_0(t);
          }
          t = j_16;
          {
            ATerm k_16;
            k_16 = t;
            {
              ATerm i_62 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_62), term_l_9);
              {
                t = subt_0(t);
                {
                  i_62 = t;
                  if(((h_62 != NULL) && (h_62 != i_62)))
                    _fail(i_62);
                  else
                    h_62 = i_62;
                }
              }
            }
            t = k_16;
            {
              ATerm k_62 = NULL;
              t = not_null(c_62);
              {
                t = k_71(t);
                {
                  k_62 = t;
                  if(((j_62 != NULL) && (j_62 != k_62)))
                    _fail(k_62);
                  else
                    j_62 = k_62;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(h_62), not_null(c_62), (ATerm) ATinsert(CheckATermList(not_null(d_62)), not_null(j_62)));
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
  t = for_3(t, i_2, j_2, k_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm x_62 = NULL,a_63 = NULL,b_63 = NULL;
  x_62 = t;
  w_62 :
  if(match_cons(x_62, sym__2))
    {
      a_63 = ATgetArgument(x_62, 0);
      b_63 = ATgetArgument(x_62, 1);
      {
        ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL;
        ATerm k_63 = NULL;
        ATerm l_63 = NULL;
        t = new_0(t);
        {
          k_63 = t;
          {
            if(((h_63 != NULL) && (h_63 != k_63)))
              _fail(k_63);
            else
              h_63 = k_63;
            {
              ATerm m_63 = NULL;
              t = new_0(t);
              {
                l_63 = t;
                {
                  if(((i_63 != NULL) && (i_63 != l_63)))
                    _fail(l_63);
                  else
                    i_63 = l_63;
                  {
                    t = new_0(t);
                    {
                      m_63 = t;
                      if(((j_63 != NULL) && (j_63 != m_63)))
                        _fail(m_63);
                      else
                        j_63 = m_63;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_63)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_63))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_63)))), (ATerm) ATmakeAppl(sym_Op_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_63))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_63))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(h_63), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_16), term_b_16)), not_null(i_63), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_63)), not_null(j_63), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_63)));
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
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  w_63 = t;
  u_63 :
  if(match_cons(w_63, sym__2))
    {
      x_63 = ATgetArgument(w_63, 0);
      y_63 = ATgetArgument(w_63, 1);
      v_63 :
      if(((ATermList) y_63 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm g_76 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, g_76);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
  c_64 = t;
  b_64 :
  if(((ATgetType(c_64) == AT_LIST) && ((ATermList) c_64 != ATempty)))
    {
      d_64 = ATgetFirst((ATermList) c_64);
      e_64 = (ATerm) ATgetNext((ATermList) c_64);
      t = not_null(e_64);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL;
  l_64 = t;
  j_64 :
  if(((ATgetType(l_64) == AT_LIST) && ((ATermList) l_64 != ATempty)))
    {
      m_64 = ATgetFirst((ATermList) l_64);
      n_64 = (ATerm) ATgetNext((ATermList) l_64);
      k_64 :
      if(((ATermList) n_64 == ATempty))
        {
          t = not_null(m_64);
        }
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
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL;
  ATerm t_67 (ATerm t)
  {
    ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,v_66 = NULL;
    ATerm n_16;
    n_16 = t;
    {
      ATerm c_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL;
      ATerm d_66 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_65), term_l_9);
      {
        t = add_0(t);
        {
          d_66 = t;
          if(((c_66 != NULL) && (c_66 != d_66)))
            _fail(d_66);
          else
            c_66 = d_66;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_66), term_o_16);
        {
          t = copy_1(t, new_0);
          {
            e_66 = t;
            z_64 :
            if(((ATgetType(e_66) == AT_LIST) && ((ATermList) e_66 != ATempty)))
              {
                f_66 = ATgetFirst((ATermList) e_66);
                g_66 = (ATerm) ATgetNext((ATermList) e_66);
                {
                  ATerm h_66 = NULL;
                  if(((q_65 != NULL) && (q_65 != f_66)))
                    _fail(f_66);
                  else
                    q_65 = f_66;
                  {
                    if(((r_65 != NULL) && (r_65 != g_66)))
                      _fail(g_66);
                    else
                      r_65 = g_66;
                    {
                      t = not_null(r_65);
                      {
                        ATerm i_66 = NULL,j_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL;
                        t = last_0(t);
                        {
                          h_66 = t;
                          {
                            if(((p_65 != NULL) && (p_65 != h_66)))
                              _fail(h_66);
                            else
                              p_65 = h_66;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_65)), not_null(q_65)), not_null(r_65));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    i_66 = t;
                                    y_64 :
                                    if(match_cons(i_66, sym__6))
                                      {
                                        j_66 = ATgetArgument(i_66, 0);
                                        q_66 = ATgetArgument(i_66, 1);
                                        r_66 = ATgetArgument(i_66, 2);
                                        s_66 = ATgetArgument(i_66, 3);
                                        t_66 = ATgetArgument(i_66, 4);
                                        u_66 = ATgetArgument(i_66, 5);
                                        {
                                          if(((s_65 != NULL) && (s_65 != j_66)))
                                            _fail(j_66);
                                          else
                                            s_65 = j_66;
                                          {
                                            if(((x_65 != NULL) && (x_65 != q_66)))
                                              _fail(q_66);
                                            else
                                              x_65 = q_66;
                                            {
                                              if(((y_65 != NULL) && (y_65 != r_66)))
                                                _fail(r_66);
                                              else
                                                y_65 = r_66;
                                              {
                                                if(((z_65 != NULL) && (z_65 != s_66)))
                                                  _fail(s_66);
                                                else
                                                  z_65 = s_66;
                                                {
                                                  if(((a_66 != NULL) && (a_66 != t_66)))
                                                    _fail(t_66);
                                                  else
                                                    a_66 = t_66;
                                                  if(((b_66 != NULL) && (b_66 != u_66)))
                                                    _fail(u_66);
                                                  else
                                                    b_66 = u_66;
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
    t = n_16;
    {
      ATerm w_66 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_66)), not_null(y_65)), not_null(r_65));
      {
        t = concat_0(t);
        {
          w_66 = t;
          if(((v_66 != NULL) && (v_66 != w_66)))
            _fail(w_66);
          else
            v_66 = w_66;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(k_65), term_p_16), not_null(x_65), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(v_66)), not_null(q_65)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_65))), (ATerm) ATmakeAppl(sym_Op_2, not_null(k_65), not_null(z_65)))), (ATerm)ATmakeAppl(sym_Op_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_65))), (ATerm) ATmakeAppl(sym_Op_2, not_null(k_65), not_null(b_66)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_65))))));
    }
    return(t);
  }
  ATerm u_67 (ATerm t)
  {
    ATerm y_66 = NULL;
    ATerm z_66 = NULL;
    t = new_0(t);
    {
      z_66 = t;
      if(((y_66 != NULL) && (y_66 != z_66)))
        _fail(z_66);
      else
        y_66 = z_66;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(k_65), term_p_16), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_66)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_66))), (ATerm) ATmakeAppl(sym_Op_2, not_null(k_65), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_66))), (ATerm) ATmakeAppl(sym_Op_2, not_null(k_65), (ATerm) ATempty))), term_q_14))));
    return(t);
  }
  ATerm v_67 (ATerm t)
  {
    ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,r_67 = NULL;
    ATerm q_16;
    q_16 = t;
    {
      ATerm j_67 = NULL;
      ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
      t = new_0(t);
      {
        j_67 = t;
        {
          if(((c_67 != NULL) && (c_67 != j_67)))
            _fail(j_67);
          else
            c_67 = j_67;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_65), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_67)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  k_67 = t;
                  e_65 :
                  if(match_cons(k_67, sym__6))
                    {
                      l_67 = ATgetArgument(k_67, 0);
                      m_67 = ATgetArgument(k_67, 1);
                      n_67 = ATgetArgument(k_67, 2);
                      o_67 = ATgetArgument(k_67, 3);
                      p_67 = ATgetArgument(k_67, 4);
                      q_67 = ATgetArgument(k_67, 5);
                      {
                        if(((d_67 != NULL) && (d_67 != l_67)))
                          _fail(l_67);
                        else
                          d_67 = l_67;
                        {
                          if(((e_67 != NULL) && (e_67 != m_67)))
                            _fail(m_67);
                          else
                            e_67 = m_67;
                          {
                            if(((f_67 != NULL) && (f_67 != n_67)))
                              _fail(n_67);
                            else
                              f_67 = n_67;
                            {
                              if(((g_67 != NULL) && (g_67 != o_67)))
                                _fail(o_67);
                              else
                                g_67 = o_67;
                              {
                                if(((h_67 != NULL) && (h_67 != p_67)))
                                  _fail(p_67);
                                else
                                  h_67 = p_67;
                                if(((i_67 != NULL) && (i_67 != q_67)))
                                  _fail(q_67);
                                else
                                  i_67 = q_67;
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
    t = q_16;
    {
      ATerm s_67 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_67), not_null(h_67));
      {
        t = conc_0(t);
        {
          s_67 = t;
          if(((r_67 != NULL) && (r_67 != s_67)))
            _fail(s_67);
          else
            r_67 = s_67;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(k_65), term_r_16), not_null(e_67), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(r_67)), not_null(c_67)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_67))), (ATerm) ATmakeAppl(sym_Op_2, not_null(k_65), not_null(g_67)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(k_65), not_null(i_67)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(d_67))))));
    }
    return(t);
  }
  j_65 = t;
  g_65 :
  if(match_cons(j_65, sym__3))
    {
      k_65 = ATgetArgument(j_65, 0);
      l_65 = ATgetArgument(j_65, 1);
      m_65 = ATgetArgument(j_65, 2);
      h_65 :
      if(match_string(l_65, "T"))
        {
          i_65 :
          if(match_int(m_65, 0))
            {
              ATerm s_16 = t;
              int t_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_67(t);
                  LocalPopChoice(t_16);
                }
              else
                {
                  t = s_16;
                  t = u_67(t);
                }
            }
          else
            {
              t = t_67(t);
            }
        }
      else
        {
          if(match_string(l_65, "D"))
            {
              t = v_67(t);
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
  ATerm k_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
  k_68 = t;
  h_68 :
  if(match_cons(k_68, sym__2))
    {
      q_68 = ATgetArgument(k_68, 0);
      v_68 = ATgetArgument(k_68, 1);
      i_68 :
      if(match_cons(q_68, sym__2))
        {
          r_68 = ATgetArgument(q_68, 0);
          u_68 = ATgetArgument(q_68, 1);
          j_68 :
          if(match_cons(r_68, sym_Mod_2))
            {
              s_68 = ATgetArgument(r_68, 0);
              t_68 = ATgetArgument(r_68, 1);
              {
                ATerm a_69 = NULL;
                ATerm b_69 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_68), not_null(t_68), not_null(u_68));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      b_69 = t;
                      if(((a_69 != NULL) && (a_69 != b_69)))
                        _fail(b_69);
                      else
                        a_69 = b_69;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_69), not_null(v_68));
              }
            }
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
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(v_16);
    }
  else
    {
      t = u_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL;
  h_69 = t;
  f_69 :
  if(match_cons(h_69, sym__5))
    {
      i_69 = ATgetArgument(h_69, 0);
      l_69 = ATgetArgument(h_69, 1);
      m_69 = ATgetArgument(h_69, 2);
      n_69 = ATgetArgument(h_69, 3);
      o_69 = ATgetArgument(h_69, 4);
      g_69 :
      if(((ATgetType(i_69) == AT_LIST) && ((ATermList) i_69 != ATempty)))
        {
          j_69 = ATgetFirst((ATermList) i_69);
          k_69 = (ATerm) ATgetNext((ATermList) i_69);
          t = (ATerm) ATmakeAppl(sym__5, not_null(k_69), not_null(l_69), not_null(m_69), not_null(n_69), (ATerm) ATinsert(CheckATermList(not_null(o_69)), not_null(j_69)));
        }
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
  ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
  y_69 = t;
  x_69 :
  if(match_cons(y_69, sym__2))
    {
      z_69 = ATgetArgument(y_69, 0);
      a_70 = ATgetArgument(y_69, 1);
      {
        t = not_null(z_69);
        {
          ATerm l_2 (ATerm t)
          {
            t = not_null(a_70);
            return(t);
          }
          t = at_end_1(t, l_2);
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
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL;
  h_70 = t;
  f_70 :
  if(match_cons(h_70, sym__2))
    {
      i_70 = ATgetArgument(h_70, 0);
      j_70 = ATgetArgument(h_70, 1);
      g_70 :
      if(((ATgetType(j_70) == AT_LIST) && ((ATermList) j_70 != ATempty)))
        {
          k_70 = ATgetFirst((ATermList) j_70);
          l_70 = (ATerm) ATgetNext((ATermList) j_70);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_70)), not_null(k_70)), not_null(l_70));
        }
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
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL;
  s_70 = t;
  r_70 :
  if(match_cons(s_70, sym__2))
    {
      t_70 = ATgetArgument(s_70, 0);
      u_70 = ATgetArgument(s_70, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_70)), not_null(t_70));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL;
  h_71 = t;
  e_71 :
  if(match_cons(h_71, sym__2))
    {
      i_71 = ATgetArgument(h_71, 0);
      n_71 = ATgetArgument(h_71, 1);
      f_71 :
      if(((ATgetType(i_71) == AT_LIST) && ((ATermList) i_71 != ATempty)))
        {
          l_71 = ATgetFirst((ATermList) i_71);
          m_71 = (ATerm) ATgetNext((ATermList) i_71);
          g_71 :
          if(((ATgetType(n_71) == AT_LIST) && ((ATermList) n_71 != ATempty)))
            {
              o_71 = ATgetFirst((ATermList) n_71);
              p_71 = (ATerm) ATgetNext((ATermList) n_71);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(l_71), not_null(o_71)), (ATerm) ATmakeAppl(sym__2, not_null(m_71), not_null(p_71)));
            }
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
  ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL;
  h_72 = t;
  x_71 :
  if(match_cons(h_72, sym__2))
    {
      i_72 = ATgetArgument(h_72, 0);
      j_72 = ATgetArgument(h_72, 1);
      y_71 :
      if(((ATermList) i_72 == ATempty))
        {
          e_72 :
          if(((ATermList) j_72 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm b_76 (ATerm))
{
  ATerm o_72 (ATerm t)
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_75(t);
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        {
          t = z_75(t);
          {
            t = _2(t, b_76, o_72);
            t = a_76(t);
          }
        }
      }
    return(t);
  }
  t = o_72(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm d_76 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, d_76);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL;
  z_72 = t;
  x_72 :
  if(((ATgetType(z_72) == AT_LIST) && ((ATermList) z_72 != ATempty)))
    {
      a_73 = ATgetFirst((ATermList) z_72);
      d_73 = (ATerm) ATgetNext((ATermList) z_72);
      y_72 :
      if(match_cons(a_73, sym__2))
        {
          b_73 = ATgetArgument(a_73, 0);
          c_73 = ATgetArgument(a_73, 1);
          {
            ATerm h_73 = NULL,i_73 = NULL,o_73 = NULL,u_73 = NULL;
            ATerm y_16;
            y_16 = t;
            {
              ATerm j_73 = NULL;
              ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL;
              t = not_null(c_73);
              {
                j_73 = t;
                {
                  t = SSL_explode_term(not_null(j_73));
                  {
                    l_73 = t;
                    s_72 :
                    if(match_cons(l_73, sym__2))
                      {
                        m_73 = ATgetArgument(l_73, 0);
                        n_73 = ATgetArgument(l_73, 1);
                        {
                          if(((h_73 != NULL) && (h_73 != m_73)))
                            _fail(m_73);
                          else
                            h_73 = m_73;
                          if(((i_73 != NULL) && (i_73 != n_73)))
                            _fail(n_73);
                          else
                            i_73 = n_73;
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
            t = y_16;
            {
              ATerm z_16;
              z_16 = t;
              {
                ATerm p_73 = NULL;
                ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
                t = not_null(b_73);
                {
                  p_73 = t;
                  {
                    t = SSL_explode_term(not_null(p_73));
                    {
                      r_73 = t;
                      v_72 :
                      if(match_cons(r_73, sym__2))
                        {
                          s_73 = ATgetArgument(r_73, 0);
                          t_73 = ATgetArgument(r_73, 1);
                          {
                            if(((h_73 != NULL) && (h_73 != s_73)))
                              _fail(s_73);
                            else
                              h_73 = s_73;
                            if(((o_73 != NULL) && (o_73 != t_73)))
                              _fail(t_73);
                            else
                              o_73 = t_73;
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
              t = z_16;
              {
                ATerm v_73 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_73), not_null(i_73));
                {
                  t = zip_1(t, _id);
                  {
                    v_73 = t;
                    if(((u_73 != NULL) && (u_73 != v_73)))
                      _fail(v_73);
                    else
                      u_73 = v_73;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_73), not_null(d_73));
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
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,n_74 = NULL;
  h_74 = t;
  f_74 :
  if(((ATgetType(h_74) == AT_LIST) && ((ATermList) h_74 != ATempty)))
    {
      i_74 = ATgetFirst((ATermList) h_74);
      n_74 = (ATerm) ATgetNext((ATermList) h_74);
      g_74 :
      if(match_cons(i_74, sym__2))
        {
          j_74 = ATgetArgument(i_74, 0);
          k_74 = ATgetArgument(i_74, 1);
          {
            ATerm p_74 = NULL;
            if(((j_74 != NULL) && (j_74 != k_74)))
              _fail(k_74);
            else
              j_74 = k_74;
            {
              if(((p_74 != NULL) && (p_74 != n_74)))
                _fail(n_74);
              else
                p_74 = n_74;
              t = not_null(p_74);
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
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL;
      w_74 = t;
      u_74 :
      if(match_cons(w_74, sym__2))
        {
          x_74 = ATgetArgument(w_74, 0);
          y_74 = ATgetArgument(w_74, 1);
          {
            t = not_null(x_74);
            {
              ATerm e_75 (ATerm t)
              {
                ATerm c_17 = t;
                int d_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(d_17);
                  }
                else
                  {
                    t = c_17;
                    {
                      ATerm e_17 = t;
                      int f_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_2 (ATerm t)
                          {
                            t = not_null(y_74);
                            return(t);
                          }
                          t = HdMember_1(t, m_2);
                          t = e_75(t);
                          LocalPopChoice(f_17);
                        }
                      else
                        {
                          t = e_17;
                          t = Cons_2(t, _id, e_75);
                        }
                    }
                  }
                return(t);
              }
              t = e_75(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm b_75 = NULL;
          b_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(b_75));
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_2 (ATerm t)
              {
                ATerm i_17 = t;
                int j_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(j_17);
                  }
                else
                  {
                    t = i_17;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, q_2);
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, n_2, o_2, p_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm c_60 (ATerm))
{
  ATerm q_75 = NULL,r_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,e_76 = NULL;
  q_75 = t;
  o_75 :
  if(match_cons(q_75, sym__5))
    {
      r_75 = ATgetArgument(q_75, 0);
      v_75 = ATgetArgument(q_75, 1);
      w_75 = ATgetArgument(q_75, 2);
      x_75 = ATgetArgument(q_75, 3);
      e_76 = ATgetArgument(q_75, 4);
      p_75 :
      if(((ATgetType(r_75) == AT_LIST) && ((ATermList) r_75 != ATempty)))
        {
          t_75 = ATgetFirst((ATermList) r_75);
          u_75 = (ATerm) ATgetNext((ATermList) r_75);
          {
            ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,w_76 = NULL,y_76 = NULL,a_77 = NULL;
            ATerm k_17;
            k_17 = t;
            {
              ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_75), not_null(w_75));
              {
                t = a_60(t);
                {
                  r_76 = t;
                  k_75 :
                  if(match_cons(r_76, sym__2))
                    {
                      s_76 = ATgetArgument(r_76, 0);
                      t_76 = ATgetArgument(r_76, 1);
                      {
                        ATerm u_76 = NULL;
                        if(((o_76 != NULL) && (o_76 != s_76)))
                          _fail(s_76);
                        else
                          o_76 = s_76;
                        {
                          if(((n_76 != NULL) && (n_76 != t_76)))
                            _fail(t_76);
                          else
                            n_76 = t_76;
                          {
                            t = not_null(o_76);
                            {
                              ATerm v_76 = NULL;
                              t = b_60(t);
                              {
                                u_76 = t;
                                {
                                  if(((p_76 != NULL) && (p_76 != u_76)))
                                    _fail(u_76);
                                  else
                                    p_76 = u_76;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_76), not_null(v_75));
                                    {
                                      t = diff_0(t);
                                      {
                                        v_76 = t;
                                        if(((q_76 != NULL) && (q_76 != v_76)))
                                          _fail(v_76);
                                        else
                                          q_76 = v_76;
                                      }
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
            t = k_17;
            {
              ATerm l_17;
              l_17 = t;
              {
                ATerm x_76 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_76), not_null(u_75));
                {
                  t = conc_0(t);
                  {
                    x_76 = t;
                    if(((w_76 != NULL) && (w_76 != x_76)))
                      _fail(x_76);
                    else
                      w_76 = x_76;
                  }
                }
              }
              t = l_17;
              {
                ATerm m_17;
                m_17 = t;
                {
                  ATerm z_76 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_76), not_null(v_75));
                  {
                    t = conc_0(t);
                    {
                      z_76 = t;
                      if(((y_76 != NULL) && (y_76 != z_76)))
                        _fail(z_76);
                      else
                        y_76 = z_76;
                    }
                  }
                }
                t = m_17;
                {
                  ATerm b_77 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(t_75), not_null(o_76), not_null(x_75));
                  {
                    t = c_60(t);
                    {
                      b_77 = t;
                      if(((a_77 != NULL) && (a_77 != b_77)))
                        _fail(b_77);
                      else
                        a_77 = b_77;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(w_76), not_null(y_76), not_null(n_76), not_null(a_77), not_null(e_76));
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
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
  o_77 = t;
  k_77 :
  if(match_cons(o_77, sym__5))
    {
      p_77 = ATgetArgument(o_77, 0);
      q_77 = ATgetArgument(o_77, 1);
      r_77 = ATgetArgument(o_77, 2);
      s_77 = ATgetArgument(o_77, 3);
      t_77 = ATgetArgument(o_77, 4);
      n_77 :
      if(((ATermList) p_77 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_77), not_null(t_77));
        }
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
  ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL;
  e_78 = t;
  a_78 :
  if(match_cons(e_78, sym__3))
    {
      f_78 = ATgetArgument(e_78, 0);
      g_78 = ATgetArgument(e_78, 1);
      h_78 = ATgetArgument(e_78, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(f_78), not_null(f_78), not_null(g_78), not_null(h_78), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm k_66 (ATerm), ATerm l_66 (ATerm))
{
  ATerm m_78 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_66(t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        {
          t = l_66(t);
          t = m_78(t);
        }
      }
    return(t);
  }
  t = m_78(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm p_66 (ATerm))
{
  t = n_66(t);
  t = while_not_2(t, o_66, p_66);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm j_60 (ATerm), ATerm k_60 (ATerm), ATerm l_60 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm p_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, j_60, k_60, l_60);
        LocalPopChoice(x_17);
      }
    else
      {
        t = p_17;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, r_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
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
  ATerm t_2 (ATerm t)
  {
    ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL,u_78 = NULL;
    p_78 = t;
    o_78 :
    if(match_cons(p_78, sym__3))
      {
        q_78 = ATgetArgument(p_78, 0);
        r_78 = ATgetArgument(p_78, 1);
        u_78 = ATgetArgument(p_78, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(u_78)), not_null(r_78));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, s_2, t_2);
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        {
          t = MissingDefs_0(t);
          {
            t = term_l_9;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_59 (ATerm))
{
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
  d_79 = t;
  c_79 :
  if(match_cons(d_79, sym__2))
    {
      e_79 = ATgetArgument(d_79, 0);
      f_79 = ATgetArgument(d_79, 1);
      {
        ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
        ATerm a_18;
        a_18 = t;
        {
          ATerm l_79 = NULL;
          ATerm m_79 = NULL,n_79 = NULL,o_79 = NULL;
          t = u_59(t);
          {
            l_79 = t;
            {
              if(((i_79 != NULL) && (i_79 != l_79)))
                _fail(l_79);
              else
                i_79 = l_79;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_79), not_null(e_79), not_null(f_79));
                {
                  t = table_push_0(t);
                  {
                    ATerm h_18 = t;
                    int i_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_79), term_j_18);
                        t = table_get_0(t);
                        LocalPopChoice(i_18);
                      }
                    else
                      {
                        t = h_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      m_79 = t;
                      b_79 :
                      if(((ATgetType(m_79) == AT_LIST) && ((ATermList) m_79 != ATempty)))
                        {
                          n_79 = ATgetFirst((ATermList) m_79);
                          o_79 = (ATerm) ATgetNext((ATermList) m_79);
                          {
                            if(((j_79 != NULL) && (j_79 != n_79)))
                              _fail(n_79);
                            else
                              j_79 = n_79;
                            {
                              if(((k_79 != NULL) && (k_79 != o_79)))
                                _fail(o_79);
                              else
                                k_79 = o_79;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_79), term_j_18, (ATerm) ATinsert(CheckATermList(not_null(k_79)), (ATerm) ATinsert(CheckATermList(not_null(j_79)), not_null(e_79))));
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
        t = a_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL;
  v_79 = t;
  u_79 :
  if(((ATgetType(v_79) == AT_LIST) && ((ATermList) v_79 != ATempty)))
    {
      w_79 = ATgetFirst((ATermList) v_79);
      x_79 = (ATerm) ATgetNext((ATermList) v_79);
      {
        t = z_71(t);
        {
          ATerm b_3 (ATerm t)
          {
            ATerm a_80 = NULL;
            a_80 = t;
            if(((w_79 != NULL) && (w_79 != a_80)))
              _fail(a_80);
            else
              w_79 = a_80;
            return(t);
          }
          t = fetch_1(t, b_3);
        }
        t = not_null(x_79);
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
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL;
  f_80 = t;
  e_80 :
  if(match_cons(f_80, sym__2))
    {
      g_80 = ATgetArgument(f_80, 0);
      h_80 = ATgetArgument(f_80, 1);
      {
        t = not_null(g_80);
        {
          ATerm n_80 (ATerm t)
          {
            ATerm k_18 = t;
            int l_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(h_80);
                LocalPopChoice(l_18);
              }
            else
              {
                t = k_18;
                {
                  ATerm p_18 = t;
                  int r_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_3 (ATerm t)
                      {
                        t = not_null(h_80);
                        return(t);
                      }
                      t = HdMember_1(t, c_3);
                      t = n_80(t);
                      LocalPopChoice(r_18);
                    }
                  else
                    {
                      t = p_18;
                      t = Cons_2(t, _id, n_80);
                    }
                }
              }
            return(t);
          }
          t = n_80(t);
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
  ATerm s_80 = NULL;
  ATerm u_80 = NULL;
  s_80 = t;
  {
    ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(s_80));
    {
      ATerm d_3 (ATerm t)
      {
        t = term_t_18;
        return(t);
      }
      t = rewrite_1(t, d_3);
      {
        v_80 = t;
        q_80 :
        if(match_cons(v_80, sym_Defined_2))
          {
            w_80 = ATgetArgument(v_80, 0);
            x_80 = ATgetArgument(v_80, 1);
            r_80 :
            if(match_string(w_80, "g_0"))
              {
                if(((u_80 != NULL) && (u_80 != x_80)))
                  _fail(x_80);
                else
                  u_80 = x_80;
              }
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
    t = not_null(u_80);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL;
  e_81 = t;
  d_81 :
  if(((ATgetType(e_81) == AT_LIST) && ((ATermList) e_81 != ATempty)))
    {
      f_81 = ATgetFirst((ATermList) e_81);
      g_81 = (ATerm) ATgetNext((ATermList) e_81);
      t = not_null(f_81);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL;
  m_81 = t;
  l_81 :
  if(match_cons(m_81, sym__2))
    {
      n_81 = ATgetArgument(m_81, 0);
      o_81 = ATgetArgument(m_81, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_81), not_null(o_81));
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
ATerm rewrite_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm u_81 = NULL;
  ATerm w_81 = NULL;
  u_81 = t;
  {
    ATerm x_81 = NULL;
    t = term_o_16;
    {
      t = w_59(t);
      {
        x_81 = t;
        if(((w_81 != NULL) && (w_81 != x_81)))
          _fail(x_81);
        else
          w_81 = x_81;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_81), not_null(u_81));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  k_82 = t;
  j_82 :
  if(match_cons(k_82, sym__2))
    {
      l_82 = ATgetArgument(k_82, 0);
      m_82 = ATgetArgument(k_82, 1);
      {
        ATerm p_82 = NULL,q_82 = NULL;
        ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(m_82), not_null(l_82));
        {
          ATerm e_3 (ATerm t)
          {
            t = term_u_18;
            return(t);
          }
          t = rewrite_1(t, e_3);
          {
            r_82 = t;
            h_82 :
            if(match_cons(r_82, sym_Defined_3))
              {
                s_82 = ATgetArgument(r_82, 0);
                t_82 = ATgetArgument(r_82, 1);
                u_82 = ATgetArgument(r_82, 2);
                i_82 :
                if(match_string(s_82, "b_0"))
                  {
                    if(((p_82 != NULL) && (p_82 != t_82)))
                      _fail(t_82);
                    else
                      p_82 = t_82;
                    if(((q_82 != NULL) && (q_82 != u_82)))
                      _fail(u_82);
                    else
                      q_82 = u_82;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(q_82)), not_null(p_82));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
  c_83 = t;
  b_83 :
  if(match_cons(c_83, sym__2))
    {
      d_83 = ATgetArgument(c_83, 0);
      e_83 = ATgetArgument(c_83, 1);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_83), not_null(e_83));
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            t = SSL_addr(not_null(d_83), not_null(e_83));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm), ATerm z_70 (ATerm))
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_70(t);
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      {
        ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL;
        m_83 = t;
        l_83 :
        if(((ATgetType(m_83) == AT_LIST) && ((ATermList) m_83 != ATempty)))
          {
            n_83 = ATgetFirst((ATermList) m_83);
            o_83 = (ATerm) ATgetNext((ATermList) m_83);
            {
              ATerm r_83 = NULL,t_83 = NULL;
              ATerm z_18;
              z_18 = t;
              {
                ATerm s_83 = NULL;
                t = not_null(n_83);
                {
                  t = z_70(t);
                  {
                    s_83 = t;
                    if(((r_83 != NULL) && (r_83 != s_83)))
                      _fail(s_83);
                    else
                      r_83 = s_83;
                  }
                }
              }
              t = z_18;
              {
                ATerm u_83 = NULL;
                t = not_null(o_83);
                {
                  t = foldr_3(t, x_70, y_70, z_70);
                  {
                    u_83 = t;
                    if(((t_83 != NULL) && (t_83 != u_83)))
                      _fail(u_83);
                    else
                      t_83 = u_83;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_83), not_null(t_83));
                  t = y_70(t);
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
  ATerm m_3 (ATerm t)
  {
    t = term_a_19;
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_l_9;
    return(t);
  }
  t = foldr_3(t, m_3, add_0, n_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL;
    e_84 = t;
    d_84 :
    if(match_cons(e_84, sym_SDef_3))
      {
        f_84 = ATgetArgument(e_84, 0);
        g_84 = ATgetArgument(e_84, 1);
        h_84 = ATgetArgument(e_84, 2);
        {
          ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL;
          ATerm c_19;
          c_19 = t;
          {
            ATerm p_84 = NULL;
            t = not_null(g_84);
            {
              ATerm q_84 = NULL;
              t = length_0(t);
              {
                p_84 = t;
                {
                  if(((n_84 != NULL) && (n_84 != p_84)))
                    _fail(p_84);
                  else
                    n_84 = p_84;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_84), not_null(n_84));
                    {
                      ATerm r_84 = NULL,t_84 = NULL;
                      ATerm f_19 = t;
                      int g_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(g_19);
                        }
                      else
                        {
                          t = f_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        q_84 = t;
                        {
                          if(((m_84 != NULL) && (m_84 != q_84)))
                            _fail(q_84);
                          else
                            m_84 = q_84;
                          {
                            ATerm s_84 = NULL;
                            t = not_null(f_84);
                            {
                              ATerm h_19 = t;
                              int i_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(i_19);
                                }
                              else
                                {
                                  t = h_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                s_84 = t;
                                if(((r_84 != NULL) && (r_84 != s_84)))
                                  _fail(s_84);
                                else
                                  r_84 = s_84;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(n_84)), not_null(r_84));
                              {
                                t = union_0(t);
                                {
                                  t_84 = t;
                                  {
                                    if(((o_84 != NULL) && (o_84 != t_84)))
                                      _fail(t_84);
                                    else
                                      o_84 = t_84;
                                    {
                                      ATerm j_19;
                                      j_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(n_84), not_null(f_84)), (ATerm) ATmakeAppl(sym_Defined_3, term_k_19, not_null(e_84), not_null(m_84)));
                                        {
                                          ATerm p_3 (ATerm t)
                                          {
                                            t = term_u_18;
                                            return(t);
                                          }
                                          t = assert_1(t, p_3);
                                        }
                                      }
                                      t = j_19;
                                      {
                                        ATerm l_19;
                                        l_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(f_84)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_19, not_null(o_84)));
                                          {
                                            ATerm q_3 (ATerm t)
                                            {
                                              t = term_t_18;
                                              return(t);
                                            }
                                            t = assert_1(t, q_3);
                                          }
                                        }
                                        t = l_19;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = c_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, o_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm a_85 = NULL;
  ATerm b_85 = NULL;
  t = sort_defs_0(t);
  {
    b_85 = t;
    if(((a_85 != NULL) && (a_85 != b_85)))
      _fail(b_85);
    else
      a_85 = b_85;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_o_19), not_null(a_85), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm s_56 (ATerm))
{
  ATerm g_85 = NULL,h_85 = NULL;
  g_85 = t;
  f_85 :
  if(match_cons(g_85, sym_Strategies_1))
    {
      h_85 = ATgetArgument(g_85, 0);
      {
        ATerm j_85 = NULL;
        t = not_null(h_85);
        {
          t = s_56(t);
          {
            j_85 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(j_85));
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
ATerm Cons_2 (ATerm t, ATerm b_59 (ATerm), ATerm c_59 (ATerm))
{
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
  r_85 = t;
  q_85 :
  if(((ATgetType(r_85) == AT_LIST) && ((ATermList) r_85 != ATempty)))
    {
      s_85 = ATgetFirst((ATermList) r_85);
      t_85 = (ATerm) ATgetNext((ATermList) r_85);
      {
        ATerm w_85 = NULL;
        t = not_null(s_85);
        {
          ATerm y_85 = NULL;
          t = b_59(t);
          {
            w_85 = t;
            {
              t = not_null(t_85);
              {
                t = c_59(t);
                {
                  y_85 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_85)), not_null(w_85));
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
ATerm Specification_1 (ATerm t, ATerm u_56 (ATerm))
{
  ATerm g_86 = NULL,h_86 = NULL;
  g_86 = t;
  f_86 :
  if(match_cons(g_86, sym_Specification_1))
    {
      h_86 = ATgetArgument(g_86, 0);
      {
        ATerm j_86 = NULL;
        t = not_null(h_86);
        {
          t = u_56(t);
          {
            j_86 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(j_86));
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
ATerm _2 (ATerm t, ATerm h_48 (ATerm), ATerm i_48 (ATerm))
{
  ATerm r_86 = NULL,s_86 = NULL,t_86 = NULL;
  r_86 = t;
  q_86 :
  if(match_cons(r_86, sym__2))
    {
      s_86 = ATgetArgument(r_86, 0);
      t_86 = ATgetArgument(r_86, 1);
      {
        ATerm w_86 = NULL;
        t = not_null(s_86);
        {
          ATerm y_86 = NULL;
          t = h_48(t);
          {
            w_86 = t;
            {
              t = not_null(t_86);
              {
                t = i_48(t);
                {
                  y_86 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_86), not_null(y_86));
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
  ATerm f_87 = NULL;
  ATerm p_19;
  p_19 = t;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm g_87 = NULL,h_87 = NULL;
      g_87 = t;
      e_87 :
      if(match_cons(g_87, sym_Program_1))
        {
          h_87 = ATgetArgument(g_87, 0);
          if(((f_87 != NULL) && (f_87 != h_87)))
            _fail(h_87);
          else
            f_87 = h_87;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, y_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_19), not_null(f_87)), term_q_19));
      {
        t = printnl_0(t);
        {
          t = term_l_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = p_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATempty, term_s_19));
  {
    t = printnl_0(t);
    {
      t = term_l_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL;
  ATerm z_3 (ATerm t)
  {
    ATerm a_4 (ATerm t)
    {
      ATerm t_19 = t;
      if((PushChoice() == 0))
        {
          ATerm b_4 (ATerm t)
          {
            ATerm q_87 = NULL;
            q_87 = t;
            j_87 :
            if(!(match_cons(q_87, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, b_4);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_19;
        }
      return(t);
    }
    t = _2(t, a_4, _id);
    {
      ATerm c_4 (ATerm t)
      {
        ATerm i_4 (ATerm t)
        {
          ATerm r_87 = NULL,s_87 = NULL;
          r_87 = t;
          l_87 :
          if(match_cons(r_87, sym_Runtime_1))
            {
              s_87 = ATgetArgument(r_87, 0);
              if(((p_87 != NULL) && (p_87 != s_87)))
                _fail(s_87);
              else
                p_87 = s_87;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_4);
        return(t);
      }
      t = _2(t, c_4, _id);
      {
        ATerm j_4 (ATerm t)
        {
          ATerm k_4 (ATerm t)
          {
            ATerm t_87 = NULL,u_87 = NULL;
            t_87 = t;
            n_87 :
            if(match_cons(t_87, sym_Program_1))
              {
                u_87 = ATgetArgument(t_87, 0);
                if(((o_87 != NULL) && (o_87 != u_87)))
                  _fail(u_87);
                else
                  o_87 = u_87;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, k_4);
          return(t);
        }
        t = _2(t, j_4, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_19), not_null(p_87)), term_u_19), not_null(o_87)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, z_3);
  {
    t = term_a_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL;
  z_87 = t;
  y_87 :
  if(match_cons(z_87, sym__2))
    {
      a_88 = ATgetArgument(z_87, 0);
      b_88 = ATgetArgument(z_87, 1);
      t = SSL_WriteToTextFile(not_null(a_88), not_null(b_88));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL;
  h_88 = t;
  g_88 :
  if(match_cons(h_88, sym__2))
    {
      i_88 = ATgetArgument(h_88, 0);
      j_88 = ATgetArgument(h_88, 1);
      t = SSL_WriteToBinaryFile(not_null(i_88), not_null(j_88));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm r_88 = NULL;
  ATerm w_19;
  w_19 = t;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm x_19 = t;
      int y_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_4 (ATerm t)
          {
            ATerm s_88 = NULL,t_88 = NULL;
            s_88 = t;
            o_88 :
            if(match_cons(s_88, sym_Output_1))
              {
                t_88 = ATgetArgument(s_88, 0);
                if(((r_88 != NULL) && (r_88 != t_88)))
                  _fail(t_88);
                else
                  r_88 = t_88;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_4);
          LocalPopChoice(y_19);
        }
      else
        {
          t = x_19;
          {
            ATerm u_88 = NULL;
            t = term_b_20;
            {
              u_88 = t;
              if(((r_88 != NULL) && (r_88 != u_88)))
                _fail(u_88);
              else
                r_88 = u_88;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_4, _id);
  }
  t = w_19;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm q_4 (ATerm t)
      {
        t = not_null(r_88);
        return(t);
      }
      t = split_2(t, q_4, _id);
      return(t);
    }
    t = _2(t, _id, p_4);
    {
      ATerm c_20 = t;
      int d_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_4 (ATerm t)
          {
            ATerm c_5 (ATerm t)
            {
              ATerm v_88 = NULL;
              v_88 = t;
              q_88 :
              if(!(match_cons(v_88, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, c_5);
            return(t);
          }
          t = _2(t, u_4, WriteToBinaryFile_0);
          LocalPopChoice(d_20);
        }
      else
        {
          t = c_20;
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
ATerm apply_strategy_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm b_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL;
  ATerm e_20;
  e_20 = t;
  t = dtime_0(t);
  t = e_20;
  {
    t = p_63(t);
    {
      ATerm f_20;
      f_20 = t;
      {
        ATerm c_89 = NULL;
        t = dtime_0(t);
        {
          c_89 = t;
          if(((b_89 != NULL) && (b_89 != c_89)))
            _fail(c_89);
          else
            b_89 = c_89;
        }
      }
      t = f_20;
      {
        d_89 = t;
        a_89 :
        if(match_cons(d_89, sym__2))
          {
            e_89 = ATgetArgument(d_89, 0);
            f_89 = ATgetArgument(d_89, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_89)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_89))), not_null(f_89));
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
  ATerm l_89 = NULL;
  l_89 = t;
  t = SSL_ReadFromFile(not_null(l_89));
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_77 (ATerm), ATerm m_77 (ATerm))
{
  ATerm q_89 = NULL,s_89 = NULL;
  ATerm g_20;
  g_20 = t;
  {
    ATerm r_89 = NULL;
    t = l_77(t);
    {
      r_89 = t;
      if(((q_89 != NULL) && (q_89 != r_89)))
        _fail(r_89);
      else
        q_89 = r_89;
    }
  }
  t = g_20;
  {
    ATerm t_89 = NULL;
    t = m_77(t);
    {
      t_89 = t;
      if(((s_89 != NULL) && (s_89 != t_89)))
        _fail(t_89);
      else
        s_89 = t_89;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_89), not_null(s_89));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_89 = NULL;
  ATerm h_20;
  h_20 = t;
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_5 (ATerm t)
        {
          ATerm a_90 = NULL,b_90 = NULL;
          a_90 = t;
          x_89 :
          if(match_cons(a_90, sym_Input_1))
            {
              b_90 = ATgetArgument(a_90, 0);
              if(((z_89 != NULL) && (z_89 != b_90)))
                _fail(b_90);
              else
                z_89 = b_90;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, j_5);
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        {
          ATerm c_90 = NULL;
          t = term_k_20;
          {
            c_90 = t;
            if(((z_89 != NULL) && (z_89 != c_90)))
              _fail(c_90);
            else
              z_89 = c_90;
          }
        }
      }
  }
  t = h_20;
  {
    ATerm o_5 (ATerm t)
    {
      t = not_null(z_89);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_90 = NULL;
  g_90 = t;
  f_90 :
  if(!(match_cons(g_90, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_63 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        {
          ATerm n_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(p_20);
            }
          else
            {
              t = n_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_5);
  t = o_63(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_90 = NULL;
  i_90 = t;
  t = SSL_table_create(not_null(i_90));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm m_90 = NULL;
  m_90 = t;
  {
    ATerm q_20;
    q_20 = t;
    {
      t = term_r_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_20, term_x_20, not_null(m_90));
          t = table_put_0(t);
        }
      }
    }
    t = q_20;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL;
  u_90 = t;
  s_90 :
  if(match_string(u_90, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(u_90) == AT_LIST) && ((ATermList) u_90 != ATempty)))
        {
          v_90 = ATgetFirst((ATermList) u_90);
          w_90 = (ATerm) ATgetNext((ATermList) u_90);
          t_90 :
          if(((ATgetType(w_90) == AT_LIST) && ((ATermList) w_90 != ATempty)))
            {
              x_90 = ATgetFirst((ATermList) w_90);
              y_90 = (ATerm) ATgetNext((ATermList) w_90);
              {
                ATerm c_91 = NULL;
                ATerm z_20;
                z_20 = t;
                {
                  t = not_null(v_90);
                  t = k_0(t);
                }
                t = z_20;
                {
                  ATerm d_91 = NULL;
                  t = not_null(x_90);
                  {
                    t = l_0(t);
                    {
                      d_91 = t;
                      if(((c_91 != NULL) && (c_91 != d_91)))
                        _fail(d_91);
                      else
                        c_91 = d_91;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_90)), not_null(c_91));
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
      ATerm q_5 (ATerm t)
      {
        ATerm s_91 = NULL;
        s_91 = t;
        h_91 :
        if(!(match_string(s_91, "-S")))
          {
            if(!(match_string(s_91, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = term_c_21;
        return(t);
      }
      ATerm s_5 (ATerm t)
      {
        t = term_d_21;
        return(t);
      }
      t = Option_3(t, q_5, r_5, s_5);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 (ATerm t)
            {
              ATerm t_91 = NULL;
              t_91 = t;
              i_91 :
              if(!(match_string(t_91, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_5 (ATerm t)
            {
              t = term_i_21;
              return(t);
            }
            ATerm z_5 (ATerm t)
            {
              t = term_j_21;
              return(t);
            }
            t = Option_3(t, t_5, u_5, z_5);
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            {
              ATerm k_21 = t;
              int l_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_6 (ATerm t)
                  {
                    ATerm u_91 = NULL;
                    u_91 = t;
                    j_91 :
                    if(!(match_string(u_91, "-v")))
                      {
                        if(!(match_string(u_91, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm c_6 (ATerm t)
                  {
                    t = term_m_21;
                    return(t);
                  }
                  ATerm e_6 (ATerm t)
                  {
                    t = term_n_21;
                    return(t);
                  }
                  t = Option_3(t, a_6, c_6, e_6);
                  LocalPopChoice(l_21);
                }
              else
                {
                  t = k_21;
                  {
                    ATerm o_21 = t;
                    int p_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_6 (ATerm t)
                        {
                          ATerm v_91 = NULL;
                          v_91 = t;
                          k_91 :
                          if(!(match_string(v_91, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm g_6 (ATerm t)
                        {
                          ATerm w_91 = NULL;
                          ATerm x_91 = NULL;
                          x_91 = t;
                          if(((w_91 != NULL) && (w_91 != x_91)))
                            _fail(x_91);
                          else
                            w_91 = x_91;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(w_91));
                          return(t);
                        }
                        ATerm h_6 (ATerm t)
                        {
                          t = term_q_21;
                          return(t);
                        }
                        t = ArgOption_3(t, f_6, g_6, h_6);
                        LocalPopChoice(p_21);
                      }
                    else
                      {
                        t = o_21;
                        {
                          ATerm v_21 = t;
                          int w_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_6 (ATerm t)
                              {
                                ATerm y_91 = NULL;
                                y_91 = t;
                                m_91 :
                                if(!(match_string(y_91, "-i")))
                                  {
                                    if(!(match_string(y_91, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm j_6 (ATerm t)
                              {
                                ATerm z_91 = NULL;
                                ATerm a_92 = NULL;
                                a_92 = t;
                                if(((z_91 != NULL) && (z_91 != a_92)))
                                  _fail(a_92);
                                else
                                  z_91 = a_92;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_91));
                                return(t);
                              }
                              ATerm k_6 (ATerm t)
                              {
                                t = term_x_21;
                                return(t);
                              }
                              t = ArgOption_3(t, i_6, j_6, k_6);
                              LocalPopChoice(w_21);
                            }
                          else
                            {
                              t = v_21;
                              {
                                ATerm y_21 = t;
                                int z_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_6 (ATerm t)
                                    {
                                      ATerm b_92 = NULL;
                                      b_92 = t;
                                      o_91 :
                                      if(!(match_string(b_92, "-o")))
                                        {
                                          if(!(match_string(b_92, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm r_6 (ATerm t)
                                    {
                                      ATerm c_92 = NULL;
                                      ATerm d_92 = NULL;
                                      d_92 = t;
                                      if(((c_92 != NULL) && (c_92 != d_92)))
                                        _fail(d_92);
                                      else
                                        c_92 = d_92;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_92));
                                      return(t);
                                    }
                                    ATerm s_6 (ATerm t)
                                    {
                                      t = term_a_22;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, l_6, r_6, s_6);
                                    LocalPopChoice(z_21);
                                  }
                                else
                                  {
                                    t = y_21;
                                    {
                                      ATerm c_22 = t;
                                      int d_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_6 (ATerm t)
                                          {
                                            ATerm e_92 = NULL;
                                            e_92 = t;
                                            q_91 :
                                            if(!(match_string(e_92, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm v_6 (ATerm t)
                                          {
                                            t = term_e_22;
                                            return(t);
                                          }
                                          ATerm x_6 (ATerm t)
                                          {
                                            t = term_i_22;
                                            return(t);
                                          }
                                          t = Option_3(t, t_6, v_6, x_6);
                                          LocalPopChoice(d_22);
                                        }
                                      else
                                        {
                                          t = c_22;
                                          {
                                            ATerm z_6 (ATerm t)
                                            {
                                              ATerm f_92 = NULL;
                                              f_92 = t;
                                              r_91 :
                                              if(!(match_string(f_92, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm a_7 (ATerm t)
                                            {
                                              t = term_j_22;
                                              return(t);
                                            }
                                            ATerm b_7 (ATerm t)
                                            {
                                              t = term_l_22;
                                              return(t);
                                            }
                                            t = Option_3(t, z_6, a_7, b_7);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm k_92 = NULL;
  k_92 = t;
  t = SSL_table_destroy(not_null(k_92));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_92 = NULL;
  o_92 = t;
  t = SSL_exit(not_null(o_92));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm s_92 = NULL;
  s_92 = t;
  t = SSL_implode_string(not_null(s_92));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm v_92 (ATerm t)
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_92);
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        {
          t = Nil_0(t);
          t = r_74(t);
        }
      }
    return(t);
  }
  t = v_92(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL;
        y_92 = t;
        x_92 :
        if(((ATgetType(y_92) == AT_LIST) && ((ATermList) y_92 != ATempty)))
          {
            z_92 = ATgetFirst((ATermList) y_92);
            a_93 = (ATerm) ATgetNext((ATermList) y_92);
            {
              t = not_null(z_92);
              {
                ATerm c_7 (ATerm t)
                {
                  t = not_null(a_93);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_93 = NULL;
  g_93 = t;
  t = SSL_explode_string(not_null(g_93));
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
ATerm long_description_1 (ATerm t, ATerm v_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm j_93 (ATerm t)
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        t = Cons_2(t, d_74, j_93);
      }
    return(t);
  }
  t = j_93(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL;
  s_93 = t;
  p_93 :
  if(((ATgetType(s_93) == AT_LIST) && ((ATermList) s_93 != ATempty)))
    {
      q_93 = ATgetFirst((ATermList) s_93);
      r_93 = (ATerm) ATgetNext((ATermList) s_93);
      {
        ATerm v_93 = NULL;
        t = not_null(r_93);
        {
          ATerm t_22;
          t_22 = t;
          {
            ATerm w_93 = NULL,y_93 = NULL,a_94 = NULL;
            ATerm u_22;
            u_22 = t;
            {
              ATerm x_93 = NULL;
              t = j_0(t);
              {
                x_93 = t;
                if(((w_93 != NULL) && (w_93 != x_93)))
                  _fail(x_93);
                else
                  w_93 = x_93;
              }
            }
            t = u_22;
            {
              ATerm z_93 = NULL;
              t = not_null(q_93);
              {
                t = i_0(t);
                {
                  z_93 = t;
                  if(((y_93 != NULL) && (y_93 != z_93)))
                    _fail(z_93);
                  else
                    y_93 = z_93;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_93)), not_null(y_93));
                {
                  a_94 = t;
                  if(((v_93 != NULL) && (v_93 != a_94)))
                    _fail(a_94);
                  else
                    v_93 = a_94;
                }
              }
            }
          }
          t = t_22;
          {
            ATerm d_7 (ATerm t)
            {
              t = not_null(v_93);
              return(t);
            }
            t = reverse_acc_2(t, i_0, d_7);
          }
        }
      }
    }
  else
    {
      if(((ATermList) s_93 == ATempty))
        {
          {
            t = term_o_16;
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
  ATerm e_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_53 (ATerm))
{
  ATerm j_94 = NULL,k_94 = NULL;
  j_94 = t;
  i_94 :
  if(match_cons(j_94, sym_Program_1))
    {
      k_94 = ATgetArgument(j_94, 0);
      {
        ATerm m_94 = NULL;
        t = not_null(k_94);
        {
          t = w_53(t);
          {
            m_94 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_94));
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
  ATerm u_94 = NULL;
  ATerm f_7 (ATerm t)
  {
    ATerm g_7 (ATerm t)
    {
      ATerm v_94 = NULL;
      v_94 = t;
      if(((u_94 != NULL) && (u_94 != v_94)))
        _fail(v_94);
      else
        u_94 = v_94;
      return(t);
    }
    t = Program_1(t, g_7);
    return(t);
  }
  t = option_defined_1(t, f_7);
  {
    ATerm l_7 (ATerm t)
    {
      ATerm w_94 = NULL;
      ATerm x_94 = NULL;
      t = term_o_16;
      {
        ATerm m_7 (ATerm t)
        {
          t = not_null(u_94);
          return(t);
        }
        t = short_description_1(t, m_7);
        {
          t = concat_strings_0(t);
          {
            x_94 = t;
            if(((w_94 != NULL) && (w_94 != x_94)))
              _fail(x_94);
            else
              w_94 = x_94;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATempty, not_null(w_94)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATempty, term_v_22));
      {
        t = printnl_0(t);
        {
          t = term_z_22;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_7 (ATerm t)
                {
                  ATerm y_94 = NULL;
                  y_94 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_94)), term_a_23));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_7);
                {
                  ATerm q_7 (ATerm t)
                  {
                    ATerm a_95 = NULL;
                    ATerm b_95 = NULL;
                    t = term_o_16;
                    {
                      ATerm r_7 (ATerm t)
                      {
                        t = not_null(u_94);
                        return(t);
                      }
                      t = long_description_1(t, r_7);
                      {
                        t = concat_strings_0(t);
                        {
                          b_95 = t;
                          if(((a_95 != NULL) && (a_95 != b_95)))
                            _fail(b_95);
                          else
                            a_95 = b_95;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_95)), term_c_23));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, q_7);
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
  ATerm i_95 = NULL,j_95 = NULL,k_95 = NULL;
  i_95 = t;
  h_95 :
  if(match_cons(i_95, sym__2))
    {
      j_95 = ATgetArgument(i_95, 0);
      k_95 = ATgetArgument(i_95, 1);
      {
        ATerm e_23;
        e_23 = t;
        t = SSL_printnl(not_null(j_95), not_null(k_95));
        t = e_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_53 (ATerm))
{
  ATerm r_95 = NULL,s_95 = NULL;
  r_95 = t;
  q_95 :
  if(match_cons(r_95, sym_Undefined_1))
    {
      s_95 = ATgetArgument(r_95, 0);
      {
        ATerm u_95 = NULL;
        t = not_null(s_95);
        {
          t = x_53(t);
          {
            u_95 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_95));
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
ATerm fetch_1 (ATerm t, ATerm l_74 (ATerm))
{
  ATerm y_95 (ATerm t)
  {
    ATerm f_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_74, _id);
        LocalPopChoice(o_23);
      }
    else
      {
        t = f_23;
        t = Cons_2(t, _id, y_95);
      }
    return(t);
  }
  t = y_95(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_62 (ATerm))
{
  t = fetch_1(t, t_62);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_96 = NULL;
  a_96 = t;
  z_95 :
  if(!(match_cons(a_96, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_78(t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL;
  d_96 = t;
  c_96 :
  if(match_cons(d_96, sym__2))
    {
      e_96 = ATgetArgument(d_96, 0);
      f_96 = ATgetArgument(d_96, 1);
      t = SSL_table_get(not_null(e_96), not_null(f_96));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL;
  m_96 = t;
  l_96 :
  if(match_cons(m_96, sym__3))
    {
      n_96 = ATgetArgument(m_96, 0);
      o_96 = ATgetArgument(m_96, 1);
      p_96 = ATgetArgument(m_96, 2);
      {
        ATerm r_23;
        r_23 = t;
        {
          ATerm t_96 = NULL;
          ATerm u_96 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_96), not_null(o_96));
          {
            ATerm s_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_23);
              }
            else
              {
                t = s_23;
                t = (ATerm) ATempty;
              }
            {
              u_96 = t;
              if(((t_96 != NULL) && (t_96 != u_96)))
                _fail(u_96);
              else
                t_96 = u_96;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_96), not_null(o_96), (ATerm) ATinsert(CheckATermList(not_null(t_96)), not_null(p_96)));
            t = table_put_0(t);
          }
        }
        t = r_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_61 (ATerm))
{
  ATerm y_96 = NULL;
  ATerm z_96 = NULL;
  t = term_o_16;
  {
    t = z_61(t);
    {
      z_96 = t;
      if(((y_96 != NULL) && (y_96 != z_96)))
        _fail(z_96);
      else
        y_96 = z_96;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_22, term_y_22, not_null(y_96));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL;
  f_97 = t;
  e_97 :
  if(match_string(f_97, "register-usage-info"))
    {
      t = register_usage_1(t, h_0);
    }
  else
    {
      if(((ATgetType(f_97) == AT_LIST) && ((ATermList) f_97 != ATempty)))
        {
          g_97 = ATgetFirst((ATermList) f_97);
          h_97 = (ATerm) ATgetNext((ATermList) f_97);
          {
            ATerm k_97 = NULL;
            ATerm u_23;
            u_23 = t;
            {
              t = not_null(g_97);
              t = c_0(t);
            }
            t = u_23;
            {
              ATerm l_97 = NULL;
              t = term_o_16;
              {
                t = f_0(t);
                {
                  l_97 = t;
                  if(((k_97 != NULL) && (k_97 != l_97)))
                    _fail(l_97);
                  else
                    k_97 = l_97;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_97)), not_null(k_97));
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
  ATerm s_7 (ATerm t)
  {
    ATerm q_97 = NULL;
    q_97 = t;
    p_97 :
    if(!(match_string(q_97, "--help")))
      {
        if(!(match_string(q_97, "-h")))
          {
            if(!(match_string(q_97, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    t = term_v_23;
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    t = term_w_23;
    return(t);
  }
  t = Option_3(t, s_7, t_7, u_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL;
  t_97 = t;
  s_97 :
  if(((ATgetType(t_97) == AT_LIST) && ((ATermList) t_97 != ATempty)))
    {
      u_97 = ATgetFirst((ATermList) t_97);
      v_97 = (ATerm) ATgetNext((ATermList) t_97);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_97)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_97)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm x_23;
  x_23 = t;
  {
    ATerm z_7 (ATerm t)
    {
      t = term_y_23;
      t = x_61(t);
      return(t);
    }
    t = try_1(t, z_7);
  }
  t = x_23;
  {
    ATerm a_8 (ATerm t)
    {
      ATerm a_98 = NULL;
      a_98 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_98));
      return(t);
    }
    ATerm b_8 (ATerm t)
    {
      ATerm z_23 = t;
      int a_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
              {
                t = x_61(t);
                t = Cons_2(t, _id, b_8);
              }
            }
          LocalPopChoice(a_24);
        }
      else
        {
          t = z_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_8, b_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_98 = NULL,h_98 = NULL,i_98 = NULL;
  ATerm f_24;
  f_24 = t;
  {
    ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL;
    j_98 = t;
    f_98 :
    if(match_cons(j_98, sym__3))
      {
        k_98 = ATgetArgument(j_98, 0);
        l_98 = ATgetArgument(j_98, 1);
        m_98 = ATgetArgument(j_98, 2);
        {
          if(((g_98 != NULL) && (g_98 != k_98)))
            _fail(k_98);
          else
            g_98 = k_98;
          {
            if(((h_98 != NULL) && (h_98 != l_98)))
              _fail(l_98);
            else
              h_98 = l_98;
            {
              if(((i_98 != NULL) && (i_98 != m_98)))
                _fail(m_98);
              else
                i_98 = m_98;
              t = SSL_table_put(not_null(g_98), not_null(h_98), not_null(i_98));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_61 (ATerm))
{
  ATerm p_98 = NULL;
  ATerm i_24;
  i_24 = t;
  {
    t = term_j_24;
    t = table_put_0(t);
  }
  t = i_24;
  {
    ATerm c_8 (ATerm t)
    {
      ATerm k_24 = t;
      int l_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_61(t);
          LocalPopChoice(l_24);
        }
      else
        {
          t = k_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_8);
    {
      ATerm d_8 (ATerm t)
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_a_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            {
              ATerm k_8 (ATerm t)
              {
                ATerm l_8 (ATerm t)
                {
                  ATerm q_98 = NULL;
                  q_98 = t;
                  if(((p_98 != NULL) && (p_98 != q_98)))
                    _fail(q_98);
                  else
                    p_98 = q_98;
                  return(t);
                }
                t = Undefined_1(t, l_8);
                return(t);
              }
              t = option_defined_1(t, k_8);
              {
                ATerm o_24;
                o_24 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_98)), term_p_24));
                  t = printnl_0(t);
                }
                t = o_24;
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, d_8);
      {
        ATerm t_24;
        t_24 = t;
        {
          t = term_x_22;
          t = table_destroy_0(t);
        }
        t = t_24;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_63 (ATerm), ATerm e_63 (ATerm), ATerm f_63 (ATerm))
{
  ATerm m_8 (ATerm t)
  {
    ATerm u_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_63(t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = u_24;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, m_8);
  {
    t = store_options_0(t);
    {
      ATerm b_25 = t;
      int f_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, f_63);
          LocalPopChoice(f_25);
        }
      else
        {
          t = b_25;
          {
            ATerm g_25 = t;
            int i_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, d_63);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(i_25);
              }
            else
              {
                t = g_25;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm y_62 (ATerm), ATerm z_62 (ATerm))
{
  t = iowrap_3(t, y_62, z_62, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm q_8 (ATerm t)
  {
    t = _2(t, _id, v_62);
    return(t);
  }
  t = iowrap_2(t, q_8, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm r_8 (ATerm t)
  {
    ATerm s_8 (ATerm t)
    {
      ATerm t_8 (ATerm t)
      {
        ATerm u_8 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, u_8, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, t_8);
      return(t);
    }
    t = Specification_1(t, s_8);
    return(t);
  }
  t = iowrap_1(t, r_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
