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
ATerm term_n_26;
ATerm term_n_25;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_p_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_y_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_k_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_q_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_m_11;
ATerm term_a_10;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
void init_constant_terms (void)
{
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATinsert(ATempty, term_b_9);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATinsert(ATempty, term_m_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Op_2, term_u_14, (ATerm) ATempty);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATinsert(ATempty, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_FunType_2, term_x_14, term_w_14);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATinsert(ATempty, term_o_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATinsert(ATempty, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_v_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATinsert(ATempty, term_a_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATinsert(ATempty, term_k_23);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_l_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_t_23);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__3, term_s_23, term_t_23, (ATerm) ATempty);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm q_54 (ATerm), ATerm r_54 (ATerm));
ATerm SDef_3 (ATerm, ATerm u_54 (ATerm), ATerm v_54 (ATerm), ATerm w_54 (ATerm));
ATerm Let_2 (ATerm, ATerm s_54 (ATerm), ATerm t_54 (ATerm));
ATerm sboundin_3 (ATerm, ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm i_77 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm s_63 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm g_63 (ATerm), ATerm h_63 (ATerm));
ATerm diff_1 (ATerm, ATerm l_63 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm b_68 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_68 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm h_62 (ATerm), ATerm i_62 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm j_76 (ATerm), ATerm k_76 (ATerm));
ATerm alltd_1 (ATerm, ATerm j_75 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm l_76 (ATerm), ATerm m_76 (ATerm));
ATerm substitute_1 (ATerm, ATerm n_76 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm x_54 (ATerm), ATerm y_54 (ATerm));
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Explode_2 (ATerm, ATerm o_52 (ATerm), ATerm p_52 (ATerm));
ATerm Op_2 (ATerm, ATerm x_53 (ATerm), ATerm y_53 (ATerm));
ATerm pat_td_1 (ATerm, ATerm d_80 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm h_65 (ATerm), ATerm i_65 (ATerm));
ATerm repeat_1 (ATerm, ATerm k_65 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm i_52 (ATerm), ATerm j_52 (ATerm));
ATerm Con_3 (ATerm, ATerm f_52 (ATerm), ATerm g_52 (ATerm), ATerm h_52 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm u_55 (ATerm), ATerm v_55 (ATerm));
ATerm oncetd_1 (ATerm, ATerm v_74 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm d_73 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm m_72 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm w_62 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm r_70 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm m_70 (ATerm));
ATerm zip_1 (ATerm, ATerm o_70 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm y_65 (ATerm), ATerm z_65 (ATerm));
ATerm for_3 (ATerm, ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm d_66 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm a_57 (ATerm), ATerm b_57 (ATerm), ATerm c_57 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm l_56 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm n_56 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm f_63 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm j_62 (ATerm), ATerm k_62 (ATerm), ATerm l_62 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm q_53 (ATerm));
ATerm Cons_2 (ATerm, ATerm z_55 (ATerm), ATerm a_56 (ATerm));
ATerm Specification_1 (ATerm, ATerm s_53 (ATerm));
ATerm _2 (ATerm, ATerm j_45 (ATerm), ATerm k_45 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_60 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_71 (ATerm), ATerm x_71 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_60 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_78 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_58 (ATerm));
ATerm map_1 (ATerm, ATerm e_78 (ATerm));
ATerm reverse_1 (ATerm, ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_58 (ATerm));
ATerm Program_1 (ATerm, ATerm y_50 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_50 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_59 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_72 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_58 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_58 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_58 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm w_59 (ATerm));
ATerm iowrap_2 (ATerm, ATerm p_59 (ATerm), ATerm q_59 (ATerm));
ATerm iowrap_1 (ATerm, ATerm m_59 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm o_2 = NULL;
  o_2 = t;
  n_2 :
  if(((ATermList) o_2 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
  r_2 = t;
  q_2 :
  if(match_cons(r_2, sym__2))
    {
      s_2 = ATgetArgument(r_2, 0);
      t_2 = ATgetArgument(r_2, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(term_c_9), not_null(t_2)), term_a_9), not_null(s_2)), term_z_8);
        t = error_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  a_3 = t;
  y_2 :
  if(match_cons(a_3, sym__2))
    {
      b_3 = ATgetArgument(a_3, 0);
      e_3 = ATgetArgument(a_3, 1);
      z_2 :
      if(match_cons(b_3, sym_Mod_2))
        {
          c_3 = ATgetArgument(b_3, 0);
          d_3 = ATgetArgument(b_3, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(term_c_9), not_null(e_3)), term_a_9), not_null(d_3)), term_d_9), not_null(c_3)), term_z_8);
            t = error_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm MissingDefs_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  m_3 = t;
  k_3 :
  if(match_cons(m_3, sym__2))
    {
      n_3 = ATgetArgument(m_3, 0);
      o_3 = ATgetArgument(m_3, 1);
      l_3 :
      if(((ATgetType(o_3) == AT_LIST) && ((ATermList) o_3 != ATempty)))
        {
          p_3 = ATgetFirst((ATermList) o_3);
          q_3 = (ATerm) ATgetNext((ATermList) o_3);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(q_3)), not_null(p_3));
            {
              ATerm b_0 (ATerm t)
              {
                ATerm e_9 = t;
                int f_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(f_9);
                  }
                else
                  {
                    t = e_9;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, b_0);
            }
            t = not_null(n_3);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
  y_3 = t;
  w_3 :
  if(match_cons(y_3, sym__2))
    {
      z_3 = ATgetArgument(y_3, 0);
      a_4 = ATgetArgument(y_3, 1);
      x_3 :
      if(((ATermList) a_4 == ATempty))
        {
          t = not_null(z_3);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm g_9;
  g_9 = t;
  {
    t = error_0(t);
    {
      t = term_j_9;
      t = exit_0(t);
    }
  }
  t = g_9;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = term_q_9;
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm r_9;
  r_9 = t;
  {
    ATerm e_4 = NULL;
    ATerm f_4 = NULL;
    f_4 = t;
    if(((e_4 != NULL) && (e_4 != f_4)))
      _fail(f_4);
    else
      e_4 = f_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(e_4));
      t = printnl_0(t);
    }
  }
  t = r_9;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  s_4 = t;
  q_4 :
  if(match_cons(s_4, sym__2))
    {
      t_4 = ATgetArgument(s_4, 0);
      u_4 = ATgetArgument(s_4, 1);
      r_4 :
      if(match_int(u_4, 0))
        {
          ATerm t_9 = t;
          int u_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
              t = not_null(t_4);
              {
                t = Arities_0(t);
                {
                  w_4 = t;
                  l_4 :
                  if(((ATgetType(w_4) == AT_LIST) && ((ATermList) w_4 != ATempty)))
                    {
                      x_4 = ATgetFirst((ATermList) w_4);
                      y_4 = (ATerm) ATgetNext((ATermList) w_4);
                      m_4 :
                      if(((ATgetType(y_4) == AT_LIST) && ((ATermList) y_4 != ATempty)))
                        {
                          z_4 = ATgetFirst((ATermList) y_4);
                          a_5 = (ATerm) ATgetNext((ATermList) y_4);
                          {
                            ATerm z_9 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm c_0 (ATerm t)
                                {
                                  ATerm b_5 = NULL;
                                  b_5 = t;
                                  k_4 :
                                  if(!(match_int(b_5, 0)))
                                    _fail(t);
                                  return(t);
                                }
                                t = fetch_1(t, c_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = z_9;
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_4)), term_a_10);
                              {
                                t = error_0(t);
                                t = giving_up_0(t);
                              }
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              }
              LocalPopChoice(u_9);
            }
          else
            {
              t = t_9;
              {
                ATerm d_5 = NULL;
                ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
                t = not_null(t_4);
                {
                  t = Arities_0(t);
                  {
                    e_5 = t;
                    o_4 :
                    if(((ATgetType(e_5) == AT_LIST) && ((ATermList) e_5 != ATempty)))
                      {
                        f_5 = ATgetFirst((ATermList) e_5);
                        g_5 = (ATerm) ATgetNext((ATermList) e_5);
                        p_4 :
                        if(((ATermList) g_5 == ATempty))
                          {
                            {
                              if(((d_5 != NULL) && (d_5 != f_5)))
                                _fail(f_5);
                              else
                                d_5 = f_5;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), not_null(d_5));
                                t = Definitions_0(t);
                              }
                            }
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), not_null(d_5));
              }
            }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm q_54 (ATerm), ATerm r_54 (ATerm))
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  p_5 = t;
  o_5 :
  if(match_cons(p_5, sym_Rec_2))
    {
      q_5 = ATgetArgument(p_5, 0);
      r_5 = ATgetArgument(p_5, 1);
      {
        ATerm u_5 = NULL;
        t = not_null(q_5);
        {
          ATerm w_5 = NULL;
          t = q_54(t);
          {
            u_5 = t;
            {
              t = not_null(r_5);
              {
                t = r_54(t);
                {
                  w_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(u_5), not_null(w_5));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm u_54 (ATerm), ATerm v_54 (ATerm), ATerm w_54 (ATerm))
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym_SDef_3))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      j_6 = ATgetArgument(g_6, 2);
      {
        ATerm n_6 = NULL;
        t = not_null(h_6);
        {
          ATerm p_6 = NULL;
          t = u_54(t);
          {
            n_6 = t;
            {
              t = not_null(i_6);
              {
                ATerm r_6 = NULL;
                t = v_54(t);
                {
                  p_6 = t;
                  {
                    t = not_null(j_6);
                    {
                      t = w_54(t);
                      {
                        r_6 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_6), not_null(p_6), not_null(r_6));
                      }
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
    _fail(t);
  return(t);
}
ATerm Let_2 (ATerm t, ATerm s_54 (ATerm), ATerm t_54 (ATerm))
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym_Let_2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      {
        ATerm g_7 = NULL;
        t = not_null(c_7);
        {
          ATerm i_7 = NULL;
          t = s_54(t);
          {
            g_7 = t;
            {
              t = not_null(d_7);
              {
                t = t_54(t);
                {
                  i_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(g_7), not_null(i_7));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm g_77 (ATerm), ATerm h_77 (ATerm), ATerm i_77 (ATerm))
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, g_77, g_77);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, i_77, i_77, g_77);
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            t = Rec_2(t, i_77, g_77);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym_Rec_2))
    {
      q_7 = ATgetArgument(p_7, 0);
      r_7 = ATgetArgument(p_7, 1);
      t = (ATerm) ATinsert(ATempty, not_null(q_7));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_SDef_3))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      c_8 = ATgetArgument(z_7, 2);
      {
        t = not_null(b_8);
        {
          ATerm l_0 (ATerm t)
          {
            ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
            g_8 = t;
            x_7 :
            if(match_cons(g_8, sym_VarDec_2))
              {
                h_8 = ATgetArgument(g_8, 0);
                i_8 = ATgetArgument(g_8, 1);
                t = not_null(h_8);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, l_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym_Let_2))
    {
      r_8 = ATgetArgument(q_8, 0);
      s_8 = ATgetArgument(q_8, 1);
      {
        t = not_null(r_8);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
            v_8 = t;
            o_8 :
            if(match_cons(v_8, sym_SDef_3))
              {
                w_8 = ATgetArgument(v_8, 0);
                x_8 = ATgetArgument(v_8, 1);
                y_8 = ATgetArgument(v_8, 2);
                t = not_null(w_8);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, m_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm crush_3 (ATerm t, ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm s_63 (ATerm))
{
  ATerm i_9 = NULL;
  ATerm k_9 = NULL;
  i_9 = t;
  {
    ATerm l_9 = NULL;
    ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
    t = not_null(i_9);
    {
      l_9 = t;
      {
        t = SSL_explode_term(not_null(l_9));
        {
          n_9 = t;
          h_9 :
          if(match_cons(n_9, sym__2))
            {
              o_9 = ATgetArgument(n_9, 0);
              p_9 = ATgetArgument(n_9, 1);
              if(((k_9 != NULL) && (k_9 != p_9)))
                _fail(p_9);
              else
                k_9 = p_9;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(k_9);
      t = foldr_3(t, q_63, r_63, s_63);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm g_63 (ATerm), ATerm h_63 (ATerm))
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
  w_9 = t;
  v_9 :
  if(((ATgetType(w_9) == AT_LIST) && ((ATermList) w_9 != ATempty)))
    {
      x_9 = ATgetFirst((ATermList) w_9);
      y_9 = (ATerm) ATgetNext((ATermList) w_9);
      {
        t = h_63(t);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm b_10 = NULL;
            b_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(b_10));
              t = g_63(t);
            }
            return(t);
          }
          t = fetch_1(t, n_0);
        }
        t = not_null(y_9);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_1 (ATerm t, ATerm l_63 (ATerm))
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  g_10 :
  if(match_cons(h_10, sym__2))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      {
        t = not_null(i_10);
        {
          ATerm n_10 (ATerm t)
          {
            ATerm k_10 = t;
            int l_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(l_10);
              }
            else
              {
                t = k_10;
                {
                  ATerm m_10 = t;
                  int o_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_0 (ATerm t)
                      {
                        t = not_null(j_10);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_63, o_0);
                      t = n_10(t);
                      LocalPopChoice(o_10);
                    }
                  else
                    {
                      t = m_10;
                      t = Cons_2(t, _id, n_10);
                    }
                }
              }
            return(t);
          }
          t = n_10(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm b_68 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_68 (ATerm))
{
  ATerm r_10 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm s_10 = t;
      int t_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_67(t);
          LocalPopChoice(t_10);
        }
      else
        {
          t = s_10;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm u_10 = t;
      int x_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_10 = NULL;
          ATerm e_11;
          e_11 = t;
          {
            ATerm q_10 = NULL;
            t = a_68(t);
            {
              q_10 = t;
              if(((p_10 != NULL) && (p_10 != q_10)))
                _fail(q_10);
              else
                p_10 = q_10;
            }
          }
          t = e_11;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(p_10);
                return(t);
              }
              t = split_2(t, r_10, t_0);
              t = diff_1(t, c_68);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = b_68(t, r_0, r_10, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          LocalPopChoice(x_10);
        }
      else
        {
          t = u_10;
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, v_0, union_0, r_10);
          }
        }
      return(t);
    }
    t = split_2(t, p_0, q_0);
    t = union_0(t);
    return(t);
  }
  t = r_10(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
    a_11 = t;
    v_10 :
    if(match_cons(a_11, sym_Call_2))
      {
        b_11 = ATgetArgument(a_11, 0);
        d_11 = ATgetArgument(a_11, 1);
        w_10 :
        if(match_cons(b_11, sym_SVar_1))
          {
            c_11 = ATgetArgument(b_11, 0);
            {
              ATerm l_11 = NULL;
              ATerm n_11 = NULL;
              t = not_null(d_11);
              {
                t = length_0(t);
                {
                  n_11 = t;
                  if(((l_11 != NULL) && (l_11 != n_11)))
                    _fail(n_11);
                  else
                    l_11 = n_11;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(c_11), not_null(l_11)));
            }
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        {
          ATerm h_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(i_11);
            }
          else
            {
              t = h_11;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm o_11 = NULL,p_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
    o_11 = t;
    y_10 :
    if(match_cons(o_11, sym__2))
      {
        p_11 = ATgetArgument(o_11, 0);
        v_11 = ATgetArgument(o_11, 1);
        z_10 :
        if(match_cons(p_11, sym__2))
          {
            t_11 = ATgetArgument(p_11, 0);
            u_11 = ATgetArgument(p_11, 1);
            if(((t_11 != NULL) && (t_11 != v_11)))
              _fail(v_11);
            else
              t_11 = v_11;
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4(t, w_0, x_0, sboundin_3, y_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm l_13 = NULL;
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  l_13 = t;
  {
    ATerm q_13 = NULL;
    ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
    t = not_null(l_13);
    {
      q_13 = t;
      {
        t = SSL_explode_term(not_null(q_13));
        {
          s_13 = t;
          x_12 :
          if(match_cons(s_13, sym__2))
            {
              t_13 = ATgetArgument(s_13, 0);
              u_13 = ATgetArgument(s_13, 1);
              y_12 :
              if(match_string(t_13, ""))
                {
                  z_12 :
                  if(((ATgetType(u_13) == AT_LIST) && ((ATermList) u_13 != ATempty)))
                    {
                      v_13 = ATgetFirst((ATermList) u_13);
                      w_13 = (ATerm) ATgetNext((ATermList) u_13);
                      k_13 :
                      if(((ATgetType(w_13) == AT_LIST) && ((ATermList) w_13 != ATempty)))
                        {
                          x_13 = ATgetFirst((ATermList) w_13);
                          y_13 = (ATerm) ATgetNext((ATermList) w_13);
                          {
                            if(((n_13 != NULL) && (n_13 != v_13)))
                              _fail(v_13);
                            else
                              n_13 = v_13;
                            {
                              if(((p_13 != NULL) && (p_13 != x_13)))
                                _fail(x_13);
                              else
                                p_13 = x_13;
                              if(((o_13 != NULL) && (o_13 != y_13)))
                                _fail(y_13);
                              else
                                o_13 = y_13;
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      }
    }
    t = not_null(p_13);
  }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_62 (ATerm), ATerm i_62 (ATerm))
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_62(t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
        m_14 = t;
        e_14 :
        if(((ATgetType(m_14) == AT_LIST) && ((ATermList) m_14 != ATempty)))
          {
            n_14 = ATgetFirst((ATermList) m_14);
            o_14 = (ATerm) ATgetNext((ATermList) m_14);
            {
              ATerm r_14 = NULL;
              ATerm s_14 = NULL;
              t = not_null(o_14);
              {
                t = foldr_2(t, h_62, i_62);
                {
                  s_14 = t;
                  if(((r_14 != NULL) && (r_14 != s_14)))
                    _fail(s_14);
                  else
                    r_14 = s_14;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), not_null(r_14));
                t = i_62(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_m_11;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm a_15 = NULL,c_15 = NULL;
    ATerm q_11;
    q_11 = t;
    {
      ATerm b_15 = NULL;
      t = Fst_0(t);
      {
        b_15 = t;
        if(((a_15 != NULL) && (a_15 != b_15)))
          _fail(b_15);
        else
          a_15 = b_15;
      }
    }
    t = q_11;
    {
      ATerm d_15 = NULL;
      t = Snd_0(t);
      {
        d_15 = t;
        if(((c_15 != NULL) && (c_15 != d_15)))
          _fail(d_15);
        else
          c_15 = d_15;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_15), not_null(c_15));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  m_15 = t;
  j_15 :
  if(match_cons(m_15, sym_Call_2))
    {
      n_15 = ATgetArgument(m_15, 0);
      p_15 = ATgetArgument(m_15, 1);
      k_15 :
      if(match_cons(n_15, sym_SVar_1))
        {
          o_15 = ATgetArgument(n_15, 0);
          l_15 :
          if(((ATermList) p_15 == ATempty))
            {
              t = not_null(o_15);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
  w_15 = t;
  u_15 :
  if(match_cons(w_15, sym__2))
    {
      x_15 = ATgetArgument(w_15, 0);
      y_15 = ATgetArgument(w_15, 1);
      v_15 :
      if(((ATgetType(y_15) == AT_LIST) && ((ATermList) y_15 != ATempty)))
        {
          z_15 = ATgetFirst((ATermList) y_15);
          a_16 = (ATerm) ATgetNext((ATermList) y_15);
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), not_null(a_16));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look1_0 (ATerm t)
{
  ATerm i_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,z_16 = NULL,a_17 = NULL;
  i_16 = t;
  f_16 :
  if(match_cons(i_16, sym__2))
    {
      s_16 = ATgetArgument(i_16, 0);
      t_16 = ATgetArgument(i_16, 1);
      g_16 :
      if(((ATgetType(t_16) == AT_LIST) && ((ATermList) t_16 != ATempty)))
        {
          u_16 = ATgetFirst((ATermList) t_16);
          a_17 = (ATerm) ATgetNext((ATermList) t_16);
          h_16 :
          if(match_cons(u_16, sym__2))
            {
              v_16 = ATgetArgument(u_16, 0);
              z_16 = ATgetArgument(u_16, 1);
              {
                ATerm k_17 = NULL;
                if(((s_16 != NULL) && (s_16 != v_16)))
                  _fail(v_16);
                else
                  s_16 = v_16;
                {
                  if(((k_17 != NULL) && (k_17 != z_16)))
                    _fail(z_16);
                  else
                    k_17 = z_16;
                  t = not_null(k_17);
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm lookup_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm j_76 (ATerm), ATerm k_76 (ATerm))
{
  ATerm q_17 = NULL;
  ATerm s_17 = NULL,t_17 = NULL;
  q_17 = t;
  {
    ATerm u_17 = NULL;
    t = not_null(q_17);
    {
      ATerm v_17 = NULL;
      t = j_76(t);
      {
        u_17 = t;
        {
          if(((s_17 != NULL) && (s_17 != u_17)))
            _fail(u_17);
          else
            s_17 = u_17;
          {
            t = k_76(t);
            {
              v_17 = t;
              if(((t_17 != NULL) && (t_17 != v_17)))
                _fail(v_17);
              else
                t_17 = v_17;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), not_null(t_17));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm b_18 (ATerm t)
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_75(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = _all(t, b_18);
      }
    return(t);
  }
  t = b_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      {
        ATerm q_18 = NULL;
        if(((q_18 != NULL) && (q_18 != n_18)))
          _fail(n_18);
        else
          q_18 = n_18;
      }
    }
  else
    {
      if(match_cons(l_18, sym__3))
        {
          m_18 = ATgetArgument(l_18, 0);
          n_18 = ATgetArgument(l_18, 1);
          o_18 = ATgetArgument(l_18, 2);
          {
            ATerm y_18 = NULL;
            ATerm z_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_18), not_null(n_18));
            {
              t = zip_1(t, _id);
              {
                z_18 = t;
                if(((y_18 != NULL) && (y_18 != z_18)))
                  _fail(z_18);
                else
                  y_18 = z_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(o_18));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm l_76 (ATerm), ATerm m_76 (ATerm))
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  t = subs_args_0(t);
  {
    h_19 = t;
    g_19 :
    if(match_cons(h_19, sym__2))
      {
        i_19 = ATgetArgument(h_19, 0);
        j_19 = ATgetArgument(h_19, 1);
        {
          t = not_null(j_19);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(i_19);
                return(t);
              }
              t = SubsVar_2(t, l_76, c_1);
              t = m_76(t);
              return(t);
            }
            t = alltd_1(t, b_1);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_1 (ATerm t, ATerm n_76 (ATerm))
{
  t = substitute_2(t, n_76, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm x_54 (ATerm), ATerm y_54 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_VarDec_2))
    {
      s_19 = ATgetArgument(r_19, 0);
      t_19 = ATgetArgument(r_19, 1);
      {
        ATerm y_19 = NULL;
        t = not_null(s_19);
        {
          ATerm b_20 = NULL;
          t = x_54(t);
          {
            y_19 = t;
            {
              t = not_null(t_19);
              {
                t = y_54(t);
                {
                  b_20 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(y_19), not_null(b_20));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,c_21 = NULL,d_21 = NULL;
  u_20 = t;
  s_20 :
  if(((ATgetType(u_20) == AT_LIST) && ((ATermList) u_20 != ATempty)))
    {
      v_20 = ATgetFirst((ATermList) u_20);
      d_21 = (ATerm) ATgetNext((ATermList) u_20);
      t_20 :
      if(match_cons(v_20, sym_SDef_3))
        {
          w_20 = ATgetArgument(v_20, 0);
          x_20 = ATgetArgument(v_20, 1);
          c_21 = ATgetArgument(v_20, 2);
          {
            ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,y_22 = NULL;
            ATerm y_11;
            y_11 = t;
            {
              ATerm l_21 = NULL;
              t = not_null(x_20);
              {
                ATerm y_21 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  l_21 = t;
                  {
                    if(((i_21 != NULL) && (i_21 != l_21)))
                      _fail(l_21);
                    else
                      i_21 = l_21;
                    {
                      t = not_null(i_21);
                      {
                        ATerm x_22 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
                          t_21 = t;
                          j_20 :
                          if(match_cons(t_21, sym_VarDec_2))
                            {
                              u_21 = ATgetArgument(t_21, 0);
                              v_21 = ATgetArgument(t_21, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_21)), (ATerm) ATempty);
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          y_21 = t;
                          {
                            if(((j_21 != NULL) && (j_21 != y_21)))
                              _fail(y_21);
                            else
                              j_21 = y_21;
                            {
                              t = not_null(u_20);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm z_21 = NULL,a_22 = NULL,m_22 = NULL,n_22 = NULL;
                                  z_21 = t;
                                  p_20 :
                                  if(match_cons(z_21, sym_SDef_3))
                                    {
                                      a_22 = ATgetArgument(z_21, 0);
                                      m_22 = ATgetArgument(z_21, 1);
                                      n_22 = ATgetArgument(z_21, 2);
                                      {
                                        ATerm r_22 = NULL;
                                        ATerm w_22 = NULL;
                                        t = not_null(m_22);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
                                            s_22 = t;
                                            n_20 :
                                            if(match_cons(s_22, sym_VarDec_2))
                                              {
                                                t_22 = ATgetArgument(s_22, 0);
                                                u_22 = ATgetArgument(s_22, 1);
                                                t = not_null(t_22);
                                              }
                                            else
                                              _fail(t);
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            w_22 = t;
                                            if(((r_22 != NULL) && (r_22 != w_22)))
                                              _fail(w_22);
                                            else
                                              r_22 = w_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(r_22), not_null(j_21), not_null(n_22));
                                          t = ssubs_0(t);
                                        }
                                      }
                                    }
                                  else
                                    _fail(t);
                                  return(t);
                                }
                                t = map_1(t, f_1);
                                {
                                  x_22 = t;
                                  if(((k_21 != NULL) && (k_21 != x_22)))
                                    _fail(x_22);
                                  else
                                    k_21 = x_22;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = y_11;
            {
              ATerm z_22 = NULL;
              t = not_null(k_21);
              {
                t = choices_0(t);
                {
                  z_22 = t;
                  if(((y_22 != NULL) && (y_22 != z_22)))
                    _fail(z_22);
                  else
                    y_22 = z_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(w_20), not_null(i_21), not_null(y_22));
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  o_23 = t;
  m_23 :
  if(((ATgetType(o_23) == AT_LIST) && ((ATermList) o_23 != ATempty)))
    {
      p_23 = ATgetFirst((ATermList) o_23);
      q_23 = (ATerm) ATgetNext((ATermList) o_23);
      n_23 :
      if(((ATermList) q_23 == ATempty))
        {
          t = not_null(p_23);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  x_23 = t;
  v_23 :
  if(match_cons(x_23, sym__2))
    {
      y_23 = ATgetArgument(x_23, 0);
      b_24 = ATgetArgument(x_23, 1);
      w_23 :
      if(match_cons(y_23, sym__2))
        {
          z_23 = ATgetArgument(y_23, 0);
          a_24 = ATgetArgument(y_23, 1);
          {
            ATerm f_24 = NULL;
            ATerm g_24 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_23), not_null(a_24));
            {
              t = Definitions_0(t);
              {
                g_24 = t;
                if(((f_24 != NULL) && (f_24 != g_24)))
                  _fail(g_24);
                else
                  f_24 = g_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), not_null(b_24));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  b_25 = t;
  z_24 :
  if(match_cons(b_25, sym_ExplodeCong_2))
    {
      c_25 = ATgetArgument(b_25, 0);
      a_25 = ATgetArgument(b_25, 1);
      {
        ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
        ATerm j_25 = NULL;
        ATerm k_25 = NULL;
        t = new_0(t);
        {
          j_25 = t;
          {
            if(((f_25 != NULL) && (f_25 != j_25)))
              _fail(j_25);
            else
              f_25 = j_25;
            {
              ATerm l_25 = NULL;
              t = new_0(t);
              {
                k_25 = t;
                {
                  if(((g_25 != NULL) && (g_25 != k_25)))
                    _fail(k_25);
                  else
                    g_25 = k_25;
                  {
                    ATerm m_25 = NULL;
                    t = new_0(t);
                    {
                      l_25 = t;
                      {
                        if(((h_25 != NULL) && (h_25 != l_25)))
                          _fail(l_25);
                        else
                          h_25 = l_25;
                        {
                          t = new_0(t);
                          {
                            m_25 = t;
                            if(((i_25 != NULL) && (i_25 != m_25)))
                              _fail(m_25);
                            else
                              i_25 = m_25;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_25)), not_null(h_25)), not_null(g_25)), not_null(f_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(c_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_25))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_25)))))));
      }
    }
  else
    {
      if(match_cons(b_25, sym_Build_1))
        {
          c_25 = ATgetArgument(b_25, 0);
          {
            ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
            ATerm s_25 = NULL;
            ATerm w_25 = NULL;
            t = new_0(t);
            {
              s_25 = t;
              {
                if(((q_25 != NULL) && (q_25 != s_25)))
                  _fail(s_25);
                else
                  q_25 = s_25;
                {
                  t = not_null(c_25);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
                      t_25 = t;
                      s_24 :
                      if(match_cons(t_25, sym_Explode_2))
                        {
                          u_25 = ATgetArgument(t_25, 0);
                          v_25 = ATgetArgument(t_25, 1);
                          {
                            if(((o_25 != NULL) && (o_25 != u_25)))
                              _fail(u_25);
                            else
                              o_25 = u_25;
                            {
                              if(((p_25 != NULL) && (p_25 != v_25)))
                                _fail(v_25);
                              else
                                p_25 = v_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25));
                            }
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      w_25 = t;
                      if(((r_25 != NULL) && (r_25 != w_25)))
                        _fail(w_25);
                      else
                        r_25 = w_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_25)), not_null(o_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_25)))));
          }
        }
      else
        {
          if(match_cons(b_25, sym_Match_1))
            {
              c_25 = ATgetArgument(b_25, 0);
              {
                ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
                ATerm d_26 = NULL;
                ATerm e_26 = NULL;
                t = new_0(t);
                {
                  d_26 = t;
                  {
                    if(((a_26 != NULL) && (a_26 != d_26)))
                      _fail(d_26);
                    else
                      a_26 = d_26;
                    {
                      ATerm i_26 = NULL;
                      t = new_0(t);
                      {
                        e_26 = t;
                        {
                          if(((b_26 != NULL) && (b_26 != e_26)))
                            _fail(e_26);
                          else
                            b_26 = e_26;
                          {
                            t = not_null(c_25);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
                                f_26 = t;
                                x_24 :
                                if(match_cons(f_26, sym_Explode_2))
                                  {
                                    g_26 = ATgetArgument(f_26, 0);
                                    h_26 = ATgetArgument(f_26, 1);
                                    {
                                      if(((y_25 != NULL) && (y_25 != g_26)))
                                        _fail(g_26);
                                      else
                                        y_25 = g_26;
                                      {
                                        if(((z_25 != NULL) && (z_25 != h_26)))
                                          _fail(h_26);
                                        else
                                          z_25 = h_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_26));
                                      }
                                    }
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = oncetd_1(t, i_1);
                              {
                                i_26 = t;
                                if(((c_26 != NULL) && (c_26 != i_26)))
                                  _fail(i_26);
                                else
                                  c_26 = i_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_26)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_26))), (ATerm) ATmakeAppl(sym_Prim_2, term_c_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_26)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_26)), (ATerm) ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_25)), not_null(y_25)))))));
              }
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym_Match_1))
    {
      k_27 = ATgetArgument(j_27, 0);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
            ATerm p_27 = NULL;
            ATerm s_27 = NULL;
            t = new_0(t);
            {
              p_27 = t;
              {
                if(((n_27 != NULL) && (n_27 != p_27)))
                  _fail(p_27);
                else
                  n_27 = p_27;
                {
                  t = not_null(k_27);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm q_27 = NULL,r_27 = NULL;
                      q_27 = t;
                      c_27 :
                      if(match_cons(q_27, sym_RootApp_1))
                        {
                          r_27 = ATgetArgument(q_27, 0);
                          {
                            if(((m_27 != NULL) && (m_27 != r_27)))
                              _fail(r_27);
                            else
                              m_27 = r_27;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_27));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      s_27 = t;
                      if(((o_27 != NULL) && (o_27 != s_27)))
                        _fail(s_27);
                      else
                        o_27 = s_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_27))), not_null(m_27))));
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            {
              ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL;
              ATerm y_27 = NULL;
              ATerm c_28 = NULL;
              t = new_0(t);
              {
                y_27 = t;
                {
                  if(((w_27 != NULL) && (w_27 != y_27)))
                    _fail(y_27);
                  else
                    w_27 = y_27;
                  {
                    t = not_null(k_27);
                    {
                      ATerm k_1 (ATerm t)
                      {
                        ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
                        z_27 = t;
                        g_27 :
                        if(match_cons(z_27, sym_App_2))
                          {
                            a_28 = ATgetArgument(z_27, 0);
                            b_28 = ATgetArgument(z_27, 1);
                            {
                              if(((v_27 != NULL) && (v_27 != a_28)))
                                _fail(a_28);
                              else
                                v_27 = a_28;
                              {
                                if(((u_27 != NULL) && (u_27 != b_28)))
                                  _fail(b_28);
                                else
                                  u_27 = b_28;
                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_27));
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = pat_td_1(t, k_1);
                      {
                        c_28 = t;
                        if(((x_27 != NULL) && (x_27 != c_28)))
                          _fail(c_28);
                        else
                          x_27 = c_28;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_27))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_27)), not_null(v_27)))));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp1_0 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  p_28 = t;
  n_28 :
  if(match_cons(p_28, sym_Match_1))
    {
      q_28 = ATgetArgument(p_28, 0);
      o_28 :
      if(match_cons(q_28, sym_RootApp_1))
        {
          r_28 = ATgetArgument(q_28, 0);
          t = not_null(r_28);
        }
      else
        {
          if(match_cons(q_28, sym_App_2))
            {
              r_28 = ATgetArgument(q_28, 0);
              s_28 = ATgetArgument(q_28, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(r_28), not_null(s_28));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp0_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL;
  m_29 = t;
  l_29 :
  if(match_cons(m_29, sym_Match_1))
    {
      n_29 = ATgetArgument(m_29, 0);
      {
        ATerm r_29 = NULL,s_29 = NULL;
        ATerm w_29 = NULL;
        t = not_null(n_29);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
            t_29 = t;
            i_29 :
            if(match_cons(t_29, sym_RootApp_1))
              {
                u_29 = ATgetArgument(t_29, 0);
                j_29 :
                if(match_cons(u_29, sym_Match_1))
                  {
                    v_29 = ATgetArgument(u_29, 0);
                    {
                      if(((r_29 != NULL) && (r_29 != v_29)))
                        _fail(v_29);
                      else
                        r_29 = v_29;
                      t = not_null(r_29);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = pat_td_1(t, l_1);
          {
            w_29 = t;
            if(((s_29 != NULL) && (s_29 != w_29)))
              _fail(w_29);
            else
              s_29 = w_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(s_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL;
  l_30 = t;
  k_30 :
  if(match_cons(l_30, sym_Build_1))
    {
      m_30 = ATgetArgument(l_30, 0);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
            ATerm r_30 = NULL;
            ATerm u_30 = NULL;
            t = new_0(t);
            {
              r_30 = t;
              {
                if(((p_30 != NULL) && (p_30 != r_30)))
                  _fail(r_30);
                else
                  p_30 = r_30;
                {
                  t = not_null(m_30);
                  {
                    ATerm m_1 (ATerm t)
                    {
                      ATerm s_30 = NULL,t_30 = NULL;
                      s_30 = t;
                      e_30 :
                      if(match_cons(s_30, sym_RootApp_1))
                        {
                          t_30 = ATgetArgument(s_30, 0);
                          {
                            if(((o_30 != NULL) && (o_30 != t_30)))
                              _fail(t_30);
                            else
                              o_30 = t_30;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_30));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, m_1);
                    {
                      u_30 = t;
                      if(((q_30 != NULL) && (q_30 != u_30)))
                        _fail(u_30);
                      else
                        q_30 = u_30;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_30))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_30))));
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            {
              ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
              ATerm a_31 = NULL;
              ATerm e_31 = NULL;
              t = new_0(t);
              {
                a_31 = t;
                {
                  if(((y_30 != NULL) && (y_30 != a_31)))
                    _fail(a_31);
                  else
                    y_30 = a_31;
                  {
                    t = not_null(m_30);
                    {
                      ATerm n_1 (ATerm t)
                      {
                        ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
                        b_31 = t;
                        i_30 :
                        if(match_cons(b_31, sym_App_2))
                          {
                            c_31 = ATgetArgument(b_31, 0);
                            d_31 = ATgetArgument(b_31, 1);
                            {
                              if(((w_30 != NULL) && (w_30 != c_31)))
                                _fail(c_31);
                              else
                                w_30 = c_31;
                              {
                                if(((x_30 != NULL) && (x_30 != d_31)))
                                  _fail(d_31);
                                else
                                  x_30 = d_31;
                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_30));
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = pat_td_1(t, n_1);
                      {
                        e_31 = t;
                        if(((z_30 != NULL) && (z_30 != e_31)))
                          _fail(e_31);
                        else
                          z_30 = e_31;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(w_30), not_null(x_30), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_30)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_30))));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  r_31 = t;
  p_31 :
  if(match_cons(r_31, sym_Build_1))
    {
      s_31 = ATgetArgument(r_31, 0);
      q_31 :
      if(match_cons(s_31, sym_RootApp_1))
        {
          t_31 = ATgetArgument(s_31, 0);
          t = not_null(t_31);
        }
      else
        {
          if(match_cons(s_31, sym_App_2))
            {
              t_31 = ATgetArgument(s_31, 0);
              u_31 = ATgetArgument(s_31, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_31)), not_null(t_31));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm o_52 (ATerm), ATerm p_52 (ATerm))
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
  j_32 = t;
  i_32 :
  if(match_cons(j_32, sym_Explode_2))
    {
      k_32 = ATgetArgument(j_32, 0);
      l_32 = ATgetArgument(j_32, 1);
      {
        ATerm a_33 = NULL;
        t = not_null(k_32);
        {
          ATerm c_33 = NULL;
          t = o_52(t);
          {
            a_33 = t;
            {
              t = not_null(l_32);
              {
                t = p_52(t);
                {
                  c_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(a_33), not_null(c_33));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm x_53 (ATerm), ATerm y_53 (ATerm))
{
  ATerm m_33 = NULL,n_33 = NULL,z_33 = NULL;
  m_33 = t;
  l_33 :
  if(match_cons(m_33, sym_Op_2))
    {
      n_33 = ATgetArgument(m_33, 0);
      z_33 = ATgetArgument(m_33, 1);
      {
        ATerm c_34 = NULL;
        t = not_null(n_33);
        {
          ATerm e_34 = NULL;
          t = x_53(t);
          {
            c_34 = t;
            {
              t = not_null(z_33);
              {
                t = y_53(t);
                {
                  e_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_34), not_null(e_34));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm pat_td_1 (ATerm t, ATerm d_80 (ATerm))
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_80(t);
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = pat_td_1(t, d_80);
                return(t);
              }
              t = fetch_1(t, p_1);
              return(t);
            }
            t = Op_2(t, _id, o_1);
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            {
              ATerm m_12 = t;
              int n_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = pat_td_1(t, d_80);
                    return(t);
                  }
                  t = Explode_2(t, _id, q_1);
                  LocalPopChoice(n_12);
                }
              else
                {
                  t = m_12;
                  {
                    ATerm r_1 (ATerm t)
                    {
                      t = pat_td_1(t, d_80);
                      return(t);
                    }
                    t = Explode_2(t, r_1, _id);
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
  ATerm x_34 = NULL,y_34 = NULL;
  x_34 = t;
  w_34 :
  if(match_cons(x_34, sym_Build_1))
    {
      y_34 = ATgetArgument(x_34, 0);
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_35 = NULL,b_35 = NULL;
            ATerm f_35 = NULL;
            t = not_null(y_34);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
                c_35 = t;
                p_34 :
                if(match_cons(c_35, sym_RootApp_1))
                  {
                    d_35 = ATgetArgument(c_35, 0);
                    q_34 :
                    if(match_cons(d_35, sym_Build_1))
                      {
                        e_35 = ATgetArgument(d_35, 0);
                        {
                          if(((a_35 != NULL) && (a_35 != e_35)))
                            _fail(e_35);
                          else
                            a_35 = e_35;
                          t = not_null(a_35);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = pat_td_1(t, s_1);
              {
                f_35 = t;
                if(((b_35 != NULL) && (b_35 != f_35)))
                  _fail(f_35);
                else
                  b_35 = f_35;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_35));
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
              ATerm o_35 = NULL;
              t = not_null(y_34);
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
                  k_35 = t;
                  t_34 :
                  if(match_cons(k_35, sym_App_2))
                    {
                      l_35 = ATgetArgument(k_35, 0);
                      n_35 = ATgetArgument(k_35, 1);
                      u_34 :
                      if(match_cons(l_35, sym_Build_1))
                        {
                          m_35 = ATgetArgument(l_35, 0);
                          {
                            if(((i_35 != NULL) && (i_35 != m_35)))
                              _fail(m_35);
                            else
                              i_35 = m_35;
                            {
                              if(((h_35 != NULL) && (h_35 != n_35)))
                                _fail(n_35);
                              else
                                h_35 = n_35;
                              t = not_null(i_35);
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = pat_td_1(t, t_1);
                {
                  o_35 = t;
                  if(((j_35 != NULL) && (j_35 != o_35)))
                    _fail(o_35);
                  else
                    j_35 = o_35;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_35));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  p_36 = t;
  h_36 :
  if(match_cons(p_36, sym_InfixApp_3))
    {
      q_36 = ATgetArgument(p_36, 0);
      m_36 = ATgetArgument(p_36, 1);
      l_36 = ATgetArgument(p_36, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_36), (ATerm) ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_36)), not_null(q_36))));
    }
  else
    {
      if(match_cons(p_36, sym_BAM_3))
        {
          q_36 = ATgetArgument(p_36, 0);
          m_36 = ATgetArgument(p_36, 1);
          l_36 = ATgetArgument(p_36, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(l_36))), not_null(q_36)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_36))));
        }
      else
        {
          if(match_cons(p_36, sym_AM_2))
            {
              q_36 = ATgetArgument(p_36, 0);
              m_36 = ATgetArgument(p_36, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_36), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_36)));
            }
          else
            {
              if(match_cons(p_36, sym_MA_2))
                {
                  q_36 = ATgetArgument(p_36, 0);
                  m_36 = ATgetArgument(p_36, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_36)), not_null(m_36));
                }
              else
                {
                  if(match_cons(p_36, sym_BA_2))
                    {
                      q_36 = ATgetArgument(p_36, 0);
                      m_36 = ATgetArgument(p_36, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_36)), not_null(q_36));
                    }
                  else
                    {
                      if(match_cons(p_36, sym_Lets_2))
                        {
                          q_36 = ATgetArgument(p_36, 0);
                          m_36 = ATgetArgument(p_36, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_36), not_null(m_36));
                        }
                      else
                        {
                          if(match_cons(p_36, sym_LChoices_1))
                            {
                              q_36 = ATgetArgument(p_36, 0);
                              i_36 :
                              if(((ATgetType(q_36) == AT_LIST) && ((ATermList) q_36 != ATempty)))
                                {
                                  n_36 = ATgetFirst((ATermList) q_36);
                                  o_36 = (ATerm) ATgetNext((ATermList) q_36);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_36), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(o_36)));
                                }
                              else
                                {
                                  if(((ATermList) q_36 == ATempty))
                                    {
                                      t = term_m_11;
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(p_36, sym_Choices_1))
                                {
                                  q_36 = ATgetArgument(p_36, 0);
                                  j_36 :
                                  if(((ATgetType(q_36) == AT_LIST) && ((ATermList) q_36 != ATempty)))
                                    {
                                      n_36 = ATgetFirst((ATermList) q_36);
                                      o_36 = (ATerm) ATgetNext((ATermList) q_36);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_36), (ATerm) ATmakeAppl(sym_Choices_1, not_null(o_36)));
                                    }
                                  else
                                    {
                                      if(((ATermList) q_36 == ATempty))
                                        {
                                          t = term_m_11;
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(p_36, sym_Seqs_1))
                                    {
                                      q_36 = ATgetArgument(p_36, 0);
                                      k_36 :
                                      if(((ATgetType(q_36) == AT_LIST) && ((ATermList) q_36 != ATempty)))
                                        {
                                          n_36 = ATgetFirst((ATermList) q_36);
                                          o_36 = (ATerm) ATgetNext((ATermList) q_36);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_36), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_36)));
                                        }
                                      else
                                        {
                                          if(((ATermList) q_36 == ATempty))
                                            {
                                              t = term_q_12;
                                            }
                                          else
                                            _fail(t);
                                        }
                                    }
                                  else
                                    _fail(t);
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
ATerm repeat_2 (ATerm t, ATerm h_65 (ATerm), ATerm i_65 (ATerm))
{
  ATerm i_38 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_65(t);
        t = i_38(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = i_65(t);
      }
    return(t);
  }
  t = i_38(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm k_65 (ATerm))
{
  t = repeat_2(t, k_65, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm k_38 = NULL;
  k_38 = t;
  j_38 :
  if(!(match_cons(k_38, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm t_12 = t;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, u_1);
      PopChoice();
      _fail(t);
    }
  else
    t = t_12;
  return(t);
}
ATerm App_2 (ATerm t, ATerm i_52 (ATerm), ATerm j_52 (ATerm))
{
  ATerm p_38 = NULL,y_38 = NULL,z_38 = NULL;
  p_38 = t;
  o_38 :
  if(match_cons(p_38, sym_App_2))
    {
      y_38 = ATgetArgument(p_38, 0);
      z_38 = ATgetArgument(p_38, 1);
      {
        ATerm t_41 = NULL;
        t = not_null(y_38);
        {
          ATerm v_41 = NULL;
          t = i_52(t);
          {
            t_41 = t;
            {
              t = not_null(z_38);
              {
                t = j_52(t);
                {
                  v_41 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(t_41), not_null(v_41));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Con_3 (ATerm t, ATerm f_52 (ATerm), ATerm g_52 (ATerm), ATerm h_52 (ATerm))
{
  ATerm i_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  i_45 = t;
  e_42 :
  if(match_cons(i_45, sym_Con_3))
    {
      l_45 = ATgetArgument(i_45, 0);
      m_45 = ATgetArgument(i_45, 1);
      n_45 = ATgetArgument(i_45, 2);
      {
        ATerm r_45 = NULL;
        t = not_null(l_45);
        {
          ATerm t_45 = NULL;
          t = f_52(t);
          {
            r_45 = t;
            {
              t = not_null(m_45);
              {
                ATerm v_45 = NULL;
                t = g_52(t);
                {
                  t_45 = t;
                  {
                    t = not_null(n_45);
                    {
                      t = h_52(t);
                      {
                        v_45 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(r_45), not_null(t_45), not_null(v_45));
                      }
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
    _fail(t);
  return(t);
}
ATerm pureterm_0 (ATerm t)
{
  ATerm w_12 = t;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, v_1);
      PopChoice();
      _fail(t);
    }
  else
    t = w_12;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
  f_46 = t;
  d_46 :
  if(match_cons(f_46, sym_SRule_1))
    {
      g_46 = ATgetArgument(f_46, 0);
      e_46 :
      if(match_cons(g_46, sym_StratRule_3))
        {
          h_46 = ATgetArgument(g_46, 0);
          i_46 = ATgetArgument(g_46, 1);
          j_46 = ATgetArgument(g_46, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_46)), (ATerm) ATmakeAppl(sym_Where_1, not_null(j_46))), not_null(h_46)));
        }
      else
        {
          if(match_cons(g_46, sym_Rule_3))
            {
              h_46 = ATgetArgument(g_46, 0);
              i_46 = ATgetArgument(g_46, 1);
              j_46 = ATgetArgument(g_46, 2);
              {
                t = not_null(h_46);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(i_46);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(i_46))), (ATerm) ATmakeAppl(sym_Where_1, not_null(j_46))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_46))));
              }
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm u_55 (ATerm), ATerm v_55 (ATerm))
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  w_46 = t;
  v_46 :
  if(match_cons(w_46, sym_Scope_2))
    {
      x_46 = ATgetArgument(w_46, 0);
      y_46 = ATgetArgument(w_46, 1);
      {
        ATerm b_47 = NULL;
        t = not_null(x_46);
        {
          ATerm d_47 = NULL;
          t = u_55(t);
          {
            b_47 = t;
            {
              t = not_null(y_46);
              {
                t = v_55(t);
                {
                  d_47 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_47), not_null(d_47));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm i_47 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_74(t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = _one(t, i_47);
      }
    return(t);
  }
  t = i_47(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
  x_47 = t;
  v_47 :
  if(match_cons(x_47, sym_SRule_1))
    {
      y_47 = ATgetArgument(x_47, 0);
      w_47 :
      if(match_cons(y_47, sym_Rule_3))
        {
          z_47 = ATgetArgument(y_47, 0);
          a_48 = ATgetArgument(y_47, 1);
          b_48 = ATgetArgument(y_47, 2);
          {
            ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL;
            ATerm n_48 = NULL;
            ATerm t_48 = NULL;
            t = new_0(t);
            {
              n_48 = t;
              {
                if(((k_48 != NULL) && (k_48 != n_48)))
                  _fail(n_48);
                else
                  k_48 = n_48;
                {
                  t = not_null(z_47);
                  {
                    ATerm b_49 = NULL;
                    ATerm w_1 (ATerm t)
                    {
                      ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
                      o_48 = t;
                      m_47 :
                      if(match_cons(o_48, sym_Con_3))
                        {
                          p_48 = ATgetArgument(o_48, 0);
                          r_48 = ATgetArgument(o_48, 1);
                          s_48 = ATgetArgument(o_48, 2);
                          n_47 :
                          if(match_cons(p_48, sym_Var_1))
                            {
                              q_48 = ATgetArgument(p_48, 0);
                              {
                                if(((j_48 != NULL) && (j_48 != q_48)))
                                  _fail(q_48);
                                else
                                  j_48 = q_48;
                                {
                                  if(((h_48 != NULL) && (h_48 != r_48)))
                                    _fail(r_48);
                                  else
                                    h_48 = r_48;
                                  {
                                    if(((f_48 != NULL) && (f_48 != s_48)))
                                      _fail(s_48);
                                    else
                                      f_48 = s_48;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_48));
                                  }
                                }
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, w_1);
                    {
                      t_48 = t;
                      {
                        if(((l_48 != NULL) && (l_48 != t_48)))
                          _fail(t_48);
                        else
                          l_48 = t_48;
                        {
                          t = not_null(a_48);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL;
                              u_48 = t;
                              q_47 :
                              if(match_cons(u_48, sym_Con_3))
                                {
                                  v_48 = ATgetArgument(u_48, 0);
                                  x_48 = ATgetArgument(u_48, 1);
                                  y_48 = ATgetArgument(u_48, 2);
                                  r_47 :
                                  if(match_cons(v_48, sym_Var_1))
                                    {
                                      w_48 = ATgetArgument(v_48, 0);
                                      s_47 :
                                      if(match_cons(y_48, sym_Call_2))
                                        {
                                          z_48 = ATgetArgument(y_48, 0);
                                          a_49 = ATgetArgument(y_48, 1);
                                          t_47 :
                                          if(((ATermList) a_49 == ATempty))
                                            {
                                              {
                                                if(((j_48 != NULL) && (j_48 != w_48)))
                                                  _fail(w_48);
                                                else
                                                  j_48 = w_48;
                                                {
                                                  if(((i_48 != NULL) && (i_48 != x_48)))
                                                    _fail(x_48);
                                                  else
                                                    i_48 = x_48;
                                                  {
                                                    if(((g_48 != NULL) && (g_48 != z_48)))
                                                      _fail(z_48);
                                                    else
                                                      g_48 = z_48;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_48));
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = oncetd_1(t, x_1);
                            {
                              b_49 = t;
                              if(((m_48 != NULL) && (m_48 != b_49)))
                                _fail(b_49);
                              else
                                m_48 = b_49;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_48)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_48), not_null(m_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_48), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(g_48), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_48), not_null(i_48), term_q_12)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_48)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_48)))))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm desugarRule_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        {
          ATerm g_13 = t;
          int h_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(h_13);
            }
          else
            {
              t = g_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, y_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm d_73 (ATerm))
{
  ATerm j_49 (ATerm t)
  {
    t = d_73(t);
    t = _all(t, j_49);
    return(t);
  }
  t = j_49(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm a_2 (ATerm t)
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HL_0(t);
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm m_13 = t;
              int r_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_13 = t;
                  int a_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Bapp0_0(t);
                      LocalPopChoice(a_14);
                    }
                  else
                    {
                      t = z_13;
                      {
                        ATerm b_14 = t;
                        int c_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Bapp1_0(t);
                            LocalPopChoice(c_14);
                          }
                        else
                          {
                            t = b_14;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  LocalPopChoice(r_13);
                }
              else
                {
                  t = m_13;
                  {
                    ATerm d_14 = t;
                    int f_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_14 = t;
                        int h_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Mapp0_0(t);
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
                                  t = Mapp1_0(t);
                                  LocalPopChoice(j_14);
                                }
                              else
                                {
                                  t = i_14;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        LocalPopChoice(f_14);
                      }
                    else
                      {
                        t = d_14;
                        t = Expl_0(t);
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, a_2);
    }
    return(t);
  }
  t = topdown_1(t, z_1);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm l_49 = NULL;
  l_49 = t;
  k_49 :
  if(!(match_cons(l_49, sym__0)))
    _fail(t);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm t_49 = NULL;
  ATerm v_49 = NULL,w_49 = NULL,e_50 = NULL;
  t_49 = t;
  {
    ATerm k_14;
    k_14 = t;
    {
      ATerm x_49 = NULL;
      ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL;
      t = not_null(t_49);
      {
        x_49 = t;
        {
          t = SSL_explode_term(not_null(x_49));
          {
            z_49 = t;
            p_49 :
            if(match_cons(z_49, sym__2))
              {
                a_50 = ATgetArgument(z_49, 0);
                b_50 = ATgetArgument(z_49, 1);
                q_49 :
                if(match_string(a_50, ""))
                  {
                    r_49 :
                    if(((ATgetType(b_50) == AT_LIST) && ((ATermList) b_50 != ATempty)))
                      {
                        c_50 = ATgetFirst((ATermList) b_50);
                        d_50 = (ATerm) ATgetNext((ATermList) b_50);
                        {
                          if(((v_49 != NULL) && (v_49 != c_50)))
                            _fail(c_50);
                          else
                            v_49 = c_50;
                          if(((w_49 != NULL) && (w_49 != d_50)))
                            _fail(d_50);
                          else
                            w_49 = d_50;
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
      }
    }
    t = k_14;
    {
      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(w_49));
      {
        e_50 = t;
        t = not_null(e_50);
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm q_50 = NULL;
  ATerm s_50 = NULL,t_50 = NULL;
  q_50 = t;
  {
    ATerm u_50 = NULL;
    ATerm w_50 = NULL,x_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
    t = not_null(q_50);
    {
      u_50 = t;
      {
        t = SSL_explode_term(not_null(u_50));
        {
          w_50 = t;
          n_50 :
          if(match_cons(w_50, sym__2))
            {
              x_50 = ATgetArgument(w_50, 0);
              a_51 = ATgetArgument(w_50, 1);
              o_50 :
              if(match_string(x_50, ""))
                {
                  p_50 :
                  if(((ATgetType(a_51) == AT_LIST) && ((ATermList) a_51 != ATempty)))
                    {
                      b_51 = ATgetFirst((ATermList) a_51);
                      c_51 = (ATerm) ATgetNext((ATermList) a_51);
                      {
                        if(((t_50 != NULL) && (t_50 != b_51)))
                          _fail(b_51);
                        else
                          t_50 = b_51;
                        if(((s_50 != NULL) && (s_50 != c_51)))
                          _fail(c_51);
                        else
                          s_50 = c_51;
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      }
    }
    t = not_null(t_50);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm o_51 = NULL,q_51 = NULL;
  ATerm s_51 (ATerm t)
  {
    ATerm l_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_51 = NULL,m_51 = NULL;
        ATerm q_14;
        q_14 = t;
        {
          ATerm l_51 = NULL;
          t = map_1(t, Thd_0);
          {
            t = m_72(t);
            {
              l_51 = t;
              if(((k_51 != NULL) && (k_51 != l_51)))
                _fail(l_51);
              else
                k_51 = l_51;
            }
          }
        }
        t = q_14;
        {
          ATerm n_51 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = s_51(t);
            {
              n_51 = t;
              if(((m_51 != NULL) && (m_51 != n_51)))
                _fail(n_51);
              else
                m_51 = n_51;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(m_51)), not_null(k_51));
        }
        LocalPopChoice(p_14);
      }
    else
      {
        t = l_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = s_51(t);
  {
    ATerm t_14;
    t_14 = t;
    {
      ATerm p_51 = NULL;
      p_51 = t;
      if(((o_51 != NULL) && (o_51 != p_51)))
        _fail(p_51);
      else
        o_51 = p_51;
    }
    t = t_14;
    {
      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(o_51));
      {
        q_51 = t;
        t = not_null(q_51);
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm b_52 = NULL;
  ATerm d_52 = NULL,e_52 = NULL,k_52 = NULL;
  b_52 = t;
  {
    ATerm l_52 = NULL;
    ATerm m_52 = NULL;
    t = new_0(t);
    {
      l_52 = t;
      {
        if(((d_52 != NULL) && (d_52 != l_52)))
          _fail(l_52);
        else
          d_52 = l_52;
        {
          ATerm n_52 = NULL;
          t = new_0(t);
          {
            m_52 = t;
            {
              if(((e_52 != NULL) && (e_52 != m_52)))
                _fail(m_52);
              else
                e_52 = m_52;
              {
                t = new_0(t);
                {
                  n_52 = t;
                  if(((k_52 != NULL) && (k_52 != n_52)))
                    _fail(n_52);
                  else
                    k_52 = n_52;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_52)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_52)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_52)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_52))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_52), term_y_14), not_null(e_52), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_52)), not_null(k_52), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_52)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
  w_52 = t;
  v_52 :
  if(match_cons(w_52, sym__2))
    {
      x_52 = ATgetArgument(w_52, 0);
      y_52 = ATgetArgument(w_52, 1);
      {
        ATerm z_14 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(x_52), not_null(y_52));
            LocalPopChoice(e_15);
          }
        else
          {
            t = z_14;
            t = SSL_subtr(not_null(x_52), not_null(y_52));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  e_53 = t;
  d_53 :
  if(match_cons(e_53, sym__2))
    {
      f_53 = ATgetArgument(e_53, 0);
      g_53 = ATgetArgument(e_53, 1);
      {
        ATerm f_15;
        f_15 = t;
        {
          ATerm g_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_53), not_null(g_53));
              LocalPopChoice(h_15);
            }
          else
            {
              t = g_15;
              t = SSL_gtr(not_null(f_53), not_null(g_53));
            }
        }
        t = f_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm m_53 = NULL;
  ATerm i_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
      n_53 = t;
      l_53 :
      if(match_cons(n_53, sym__2))
        {
          o_53 = ATgetArgument(n_53, 0);
          p_53 = ATgetArgument(n_53, 1);
          {
            if(((m_53 != NULL) && (m_53 != o_53)))
              _fail(o_53);
            else
              m_53 = o_53;
            if(((m_53 != NULL) && (m_53 != p_53)))
              _fail(p_53);
            else
              m_53 = p_53;
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_15);
    }
  else
    {
      t = i_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
    e_54 = t;
    u_53 :
    if(match_cons(e_54, sym__2))
      {
        f_54 = ATgetArgument(e_54, 0);
        g_54 = ATgetArgument(e_54, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(f_54), not_null(g_54), (ATerm) ATempty);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
    j_54 = t;
    w_53 :
    if(match_cons(j_54, sym__3))
      {
        k_54 = ATgetArgument(j_54, 0);
        l_54 = ATgetArgument(j_54, 1);
        m_54 = ATgetArgument(j_54, 2);
        z_53 :
        if(match_int(k_54, 0))
          t = not_null(m_54);
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm p_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL;
    p_54 = t;
    d_54 :
    if(match_cons(p_54, sym__3))
      {
        z_54 = ATgetArgument(p_54, 0);
        a_55 = ATgetArgument(p_54, 1);
        b_55 = ATgetArgument(p_54, 2);
        {
          ATerm f_55 = NULL,h_55 = NULL;
          ATerm r_15;
          r_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_54), term_j_9);
            t = geq_0(t);
          }
          t = r_15;
          {
            ATerm s_15;
            s_15 = t;
            {
              ATerm g_55 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_54), term_j_9);
              {
                t = subt_0(t);
                {
                  g_55 = t;
                  if(((f_55 != NULL) && (f_55 != g_55)))
                    _fail(g_55);
                  else
                    f_55 = g_55;
                }
              }
            }
            t = s_15;
            {
              ATerm i_55 = NULL;
              t = not_null(a_55);
              {
                t = w_62(t);
                {
                  i_55 = t;
                  if(((h_55 != NULL) && (h_55 != i_55)))
                    _fail(i_55);
                  else
                    h_55 = i_55;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(f_55), not_null(a_55), (ATerm) ATinsert(CheckATermList(not_null(b_55)), not_null(h_55)));
            }
          }
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = for_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm t_55 = NULL,w_55 = NULL,x_55 = NULL;
  t_55 = t;
  s_55 :
  if(match_cons(t_55, sym__2))
    {
      w_55 = ATgetArgument(t_55, 0);
      x_55 = ATgetArgument(t_55, 1);
      {
        ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL;
        ATerm f_56 = NULL;
        ATerm g_56 = NULL;
        t = new_0(t);
        {
          f_56 = t;
          {
            if(((c_56 != NULL) && (c_56 != f_56)))
              _fail(f_56);
            else
              c_56 = f_56;
            {
              ATerm h_56 = NULL;
              t = new_0(t);
              {
                g_56 = t;
                {
                  if(((d_56 != NULL) && (d_56 != g_56)))
                    _fail(g_56);
                  else
                    d_56 = g_56;
                  {
                    t = new_0(t);
                    {
                      h_56 = t;
                      if(((e_56 != NULL) && (e_56 != h_56)))
                        _fail(h_56);
                      else
                        e_56 = h_56;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_56)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_55))), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_56)))), (ATerm) ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_55))), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_56))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_56), term_y_14), not_null(d_56), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_56)), not_null(e_56), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_56)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
  u_56 = t;
  p_56 :
  if(match_cons(u_56, sym__2))
    {
      v_56 = ATgetArgument(u_56, 0);
      w_56 = ATgetArgument(u_56, 1);
      q_56 :
      if(((ATermList) w_56 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm zipr_1 (ATerm t, ATerm r_70 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, r_70);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL;
  d_57 = t;
  z_56 :
  if(((ATgetType(d_57) == AT_LIST) && ((ATermList) d_57 != ATempty)))
    {
      e_57 = ATgetFirst((ATermList) d_57);
      f_57 = (ATerm) ATgetNext((ATermList) d_57);
      t = not_null(f_57);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
  m_57 = t;
  k_57 :
  if(((ATgetType(m_57) == AT_LIST) && ((ATermList) m_57 != ATempty)))
    {
      n_57 = ATgetFirst((ATermList) m_57);
      o_57 = (ATerm) ATgetNext((ATermList) m_57);
      l_57 :
      if(((ATermList) o_57 == ATempty))
        {
          t = not_null(n_57);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm t_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(b_16);
    }
  else
    {
      t = t_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm k_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
  ATerm z_60 (ATerm t)
  {
    ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,z_59 = NULL;
    ATerm c_16;
    c_16 = t;
    {
      ATerm f_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL;
      ATerm g_59 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_58), term_j_9);
      {
        t = add_0(t);
        {
          g_59 = t;
          if(((f_59 != NULL) && (f_59 != g_59)))
            _fail(g_59);
          else
            f_59 = g_59;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_59), term_d_16);
        {
          t = copy_1(t, new_0);
          {
            h_59 = t;
            a_58 :
            if(((ATgetType(h_59) == AT_LIST) && ((ATermList) h_59 != ATempty)))
              {
                i_59 = ATgetFirst((ATermList) h_59);
                j_59 = (ATerm) ATgetNext((ATermList) h_59);
                {
                  ATerm l_59 = NULL;
                  if(((x_58 != NULL) && (x_58 != i_59)))
                    _fail(i_59);
                  else
                    x_58 = i_59;
                  {
                    if(((y_58 != NULL) && (y_58 != j_59)))
                      _fail(j_59);
                    else
                      y_58 = j_59;
                    {
                      t = not_null(y_58);
                      {
                        ATerm n_59 = NULL,o_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,x_59 = NULL,y_59 = NULL;
                        t = last_0(t);
                        {
                          l_59 = t;
                          {
                            if(((w_58 != NULL) && (w_58 != l_59)))
                              _fail(l_59);
                            else
                              w_58 = l_59;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_58)), not_null(x_58)), not_null(y_58));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    n_59 = t;
                                    z_57 :
                                    if(match_cons(n_59, sym__6))
                                      {
                                        o_59 = ATgetArgument(n_59, 0);
                                        r_59 = ATgetArgument(n_59, 1);
                                        s_59 = ATgetArgument(n_59, 2);
                                        t_59 = ATgetArgument(n_59, 3);
                                        x_59 = ATgetArgument(n_59, 4);
                                        y_59 = ATgetArgument(n_59, 5);
                                        {
                                          if(((z_58 != NULL) && (z_58 != o_59)))
                                            _fail(o_59);
                                          else
                                            z_58 = o_59;
                                          {
                                            if(((a_59 != NULL) && (a_59 != r_59)))
                                              _fail(r_59);
                                            else
                                              a_59 = r_59;
                                            {
                                              if(((b_59 != NULL) && (b_59 != s_59)))
                                                _fail(s_59);
                                              else
                                                b_59 = s_59;
                                              {
                                                if(((c_59 != NULL) && (c_59 != t_59)))
                                                  _fail(t_59);
                                                else
                                                  c_59 = t_59;
                                                {
                                                  if(((d_59 != NULL) && (d_59 != x_59)))
                                                    _fail(x_59);
                                                  else
                                                    d_59 = x_59;
                                                  if(((e_59 != NULL) && (e_59 != y_59)))
                                                    _fail(y_59);
                                                  else
                                                    e_59 = y_59;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    else
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
            else
              _fail(t);
          }
        }
      }
    }
    t = c_16;
    {
      ATerm a_60 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_59)), not_null(b_59)), not_null(y_58));
      {
        t = concat_0(t);
        {
          a_60 = t;
          if(((z_59 != NULL) && (z_59 != a_60)))
            _fail(a_60);
          else
            z_59 = a_60;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(r_58), term_e_16), not_null(a_59), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(z_59)), not_null(x_58)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_58))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_58), not_null(c_59)))), (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_58))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_58), not_null(e_59)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(z_58))))));
    }
    return(t);
  }
  ATerm a_61 (ATerm t)
  {
    ATerm c_60 = NULL;
    ATerm d_60 = NULL;
    t = new_0(t);
    {
      d_60 = t;
      if(((c_60 != NULL) && (c_60 != d_60)))
        _fail(d_60);
      else
        c_60 = d_60;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(r_58), term_e_16), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_60))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_58), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_60))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_58), (ATerm) ATempty))), term_q_12))));
    return(t);
  }
  ATerm b_61 (ATerm t)
  {
    ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,x_60 = NULL;
    ATerm j_16;
    j_16 = t;
    {
      ATerm p_60 = NULL;
      ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL;
      t = new_0(t);
      {
        p_60 = t;
        {
          if(((i_60 != NULL) && (i_60 != p_60)))
            _fail(p_60);
          else
            i_60 = p_60;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_58), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_60)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  q_60 = t;
                  f_58 :
                  if(match_cons(q_60, sym__6))
                    {
                      r_60 = ATgetArgument(q_60, 0);
                      s_60 = ATgetArgument(q_60, 1);
                      t_60 = ATgetArgument(q_60, 2);
                      u_60 = ATgetArgument(q_60, 3);
                      v_60 = ATgetArgument(q_60, 4);
                      w_60 = ATgetArgument(q_60, 5);
                      {
                        if(((j_60 != NULL) && (j_60 != r_60)))
                          _fail(r_60);
                        else
                          j_60 = r_60;
                        {
                          if(((k_60 != NULL) && (k_60 != s_60)))
                            _fail(s_60);
                          else
                            k_60 = s_60;
                          {
                            if(((l_60 != NULL) && (l_60 != t_60)))
                              _fail(t_60);
                            else
                              l_60 = t_60;
                            {
                              if(((m_60 != NULL) && (m_60 != u_60)))
                                _fail(u_60);
                              else
                                m_60 = u_60;
                              {
                                if(((n_60 != NULL) && (n_60 != v_60)))
                                  _fail(v_60);
                                else
                                  n_60 = v_60;
                                if(((o_60 != NULL) && (o_60 != w_60)))
                                  _fail(w_60);
                                else
                                  o_60 = w_60;
                              }
                            }
                          }
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              }
            }
          }
        }
      }
    }
    t = j_16;
    {
      ATerm y_60 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_60), not_null(n_60));
      {
        t = conc_0(t);
        {
          y_60 = t;
          if(((x_60 != NULL) && (x_60 != y_60)))
            _fail(y_60);
          else
            x_60 = y_60;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(r_58), term_k_16), not_null(k_60), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(x_60)), not_null(i_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_60))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_58), not_null(m_60)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(r_58), not_null(o_60)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_60))))));
    }
    return(t);
  }
  k_58 = t;
  h_58 :
  if(match_cons(k_58, sym__3))
    {
      r_58 = ATgetArgument(k_58, 0);
      s_58 = ATgetArgument(k_58, 1);
      t_58 = ATgetArgument(k_58, 2);
      i_58 :
      if(match_string(s_58, "T"))
        {
          j_58 :
          if(match_int(t_58, 0))
            {
              ATerm l_16 = t;
              int m_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_60(t);
                  LocalPopChoice(m_16);
                }
              else
                {
                  t = l_16;
                  t = a_61(t);
                }
            }
          else
            t = z_60(t);
        }
      else
        {
          if(match_string(s_58, "D"))
            t = b_61(t);
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL;
  q_61 = t;
  n_61 :
  if(match_cons(q_61, sym__2))
    {
      r_61 = ATgetArgument(q_61, 0);
      w_61 = ATgetArgument(q_61, 1);
      o_61 :
      if(match_cons(r_61, sym__2))
        {
          s_61 = ATgetArgument(r_61, 0);
          v_61 = ATgetArgument(r_61, 1);
          p_61 :
          if(match_cons(s_61, sym_Mod_2))
            {
              t_61 = ATgetArgument(s_61, 0);
              u_61 = ATgetArgument(s_61, 1);
              {
                ATerm b_62 = NULL;
                ATerm c_62 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(t_61), not_null(u_61), not_null(v_61));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      c_62 = t;
                      if(((b_62 != NULL) && (b_62 != c_62)))
                        _fail(c_62);
                      else
                        b_62 = c_62;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_62), not_null(w_61));
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm get_definition_0 (ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL;
  n_62 = t;
  g_62 :
  if(match_cons(n_62, sym__5))
    {
      o_62 = ATgetArgument(n_62, 0);
      r_62 = ATgetArgument(n_62, 1);
      s_62 = ATgetArgument(n_62, 2);
      t_62 = ATgetArgument(n_62, 3);
      u_62 = ATgetArgument(n_62, 4);
      m_62 :
      if(((ATgetType(o_62) == AT_LIST) && ((ATermList) o_62 != ATempty)))
        {
          p_62 = ATgetFirst((ATermList) o_62);
          q_62 = (ATerm) ATgetNext((ATermList) o_62);
          t = (ATerm) ATmakeAppl(sym__5, not_null(q_62), not_null(r_62), not_null(s_62), not_null(t_62), (ATerm) ATinsert(CheckATermList(not_null(u_62)), not_null(p_62)));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL;
  n_63 = t;
  k_63 :
  if(match_cons(n_63, sym__2))
    {
      o_63 = ATgetArgument(n_63, 0);
      p_63 = ATgetArgument(n_63, 1);
      {
        t = not_null(o_63);
        {
          ATerm e_2 (ATerm t)
          {
            t = not_null(p_63);
            return(t);
          }
          t = at_end_1(t, e_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL;
  z_63 = t;
  x_63 :
  if(match_cons(z_63, sym__2))
    {
      a_64 = ATgetArgument(z_63, 0);
      b_64 = ATgetArgument(z_63, 1);
      y_63 :
      if(((ATgetType(b_64) == AT_LIST) && ((ATermList) b_64 != ATempty)))
        {
          c_64 = ATgetFirst((ATermList) b_64);
          d_64 = (ATerm) ATgetNext((ATermList) b_64);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_64)), not_null(c_64)), not_null(d_64));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL;
  k_64 = t;
  j_64 :
  if(match_cons(k_64, sym__2))
    {
      l_64 = ATgetArgument(k_64, 0);
      m_64 = ATgetArgument(k_64, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_64)), not_null(l_64));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
  u_64 = t;
  r_64 :
  if(match_cons(u_64, sym__2))
    {
      v_64 = ATgetArgument(u_64, 0);
      y_64 = ATgetArgument(u_64, 1);
      s_64 :
      if(((ATgetType(v_64) == AT_LIST) && ((ATermList) v_64 != ATempty)))
        {
          w_64 = ATgetFirst((ATermList) v_64);
          x_64 = (ATerm) ATgetNext((ATermList) v_64);
          t_64 :
          if(((ATgetType(y_64) == AT_LIST) && ((ATermList) y_64 != ATempty)))
            {
              z_64 = ATgetFirst((ATermList) y_64);
              a_65 = (ATerm) ATgetNext((ATermList) y_64);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_64), not_null(z_64)), (ATerm) ATmakeAppl(sym__2, not_null(x_64), not_null(a_65)));
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL;
  o_65 = t;
  l_65 :
  if(match_cons(o_65, sym__2))
    {
      p_65 = ATgetArgument(o_65, 0);
      q_65 = ATgetArgument(o_65, 1);
      m_65 :
      if(((ATermList) p_65 == ATempty))
        {
          n_65 :
          if(((ATermList) q_65 == ATempty))
            {
              t = (ATerm) ATempty;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm m_70 (ATerm))
{
  ATerm s_65 (ATerm t)
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_70(t);
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        {
          t = k_70(t);
          {
            t = _2(t, m_70, s_65);
            t = l_70(t);
          }
        }
      }
    return(t);
  }
  t = s_65(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm o_70 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, o_70);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL;
  j_66 = t;
  h_66 :
  if(((ATgetType(j_66) == AT_LIST) && ((ATermList) j_66 != ATempty)))
    {
      k_66 = ATgetFirst((ATermList) j_66);
      n_66 = (ATerm) ATgetNext((ATermList) j_66);
      i_66 :
      if(match_cons(k_66, sym__2))
        {
          l_66 = ATgetArgument(k_66, 0);
          m_66 = ATgetArgument(k_66, 1);
          {
            ATerm r_66 = NULL,s_66 = NULL,y_66 = NULL,e_67 = NULL;
            ATerm r_16;
            r_16 = t;
            {
              ATerm t_66 = NULL;
              ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
              t = not_null(m_66);
              {
                t_66 = t;
                {
                  t = SSL_explode_term(not_null(t_66));
                  {
                    v_66 = t;
                    w_65 :
                    if(match_cons(v_66, sym__2))
                      {
                        w_66 = ATgetArgument(v_66, 0);
                        x_66 = ATgetArgument(v_66, 1);
                        {
                          if(((r_66 != NULL) && (r_66 != w_66)))
                            _fail(w_66);
                          else
                            r_66 = w_66;
                          if(((s_66 != NULL) && (s_66 != x_66)))
                            _fail(x_66);
                          else
                            s_66 = x_66;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = r_16;
            {
              ATerm w_16;
              w_16 = t;
              {
                ATerm z_66 = NULL;
                ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
                t = not_null(l_66);
                {
                  z_66 = t;
                  {
                    t = SSL_explode_term(not_null(z_66));
                    {
                      b_67 = t;
                      f_66 :
                      if(match_cons(b_67, sym__2))
                        {
                          c_67 = ATgetArgument(b_67, 0);
                          d_67 = ATgetArgument(b_67, 1);
                          {
                            if(((r_66 != NULL) && (r_66 != c_67)))
                              _fail(c_67);
                            else
                              r_66 = c_67;
                            if(((y_66 != NULL) && (y_66 != d_67)))
                              _fail(d_67);
                            else
                              y_66 = d_67;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = w_16;
              {
                ATerm f_67 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_66), not_null(s_66));
                {
                  t = zip_1(t, _id);
                  {
                    f_67 = t;
                    if(((e_67 != NULL) && (e_67 != f_67)))
                      _fail(f_67);
                    else
                      e_67 = f_67;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_67), not_null(n_66));
                  t = conc_0(t);
                }
              }
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
  p_67 = t;
  n_67 :
  if(((ATgetType(p_67) == AT_LIST) && ((ATermList) p_67 != ATempty)))
    {
      q_67 = ATgetFirst((ATermList) p_67);
      t_67 = (ATerm) ATgetNext((ATermList) p_67);
      o_67 :
      if(match_cons(q_67, sym__2))
        {
          r_67 = ATgetArgument(q_67, 0);
          s_67 = ATgetArgument(q_67, 1);
          {
            ATerm v_67 = NULL;
            if(((r_67 != NULL) && (r_67 != s_67)))
              _fail(s_67);
            else
              r_67 = s_67;
            {
              if(((v_67 != NULL) && (v_67 != t_67)))
                _fail(t_67);
              else
                v_67 = t_67;
              t = not_null(v_67);
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL;
      f_68 = t;
      y_67 :
      if(match_cons(f_68, sym__2))
        {
          g_68 = ATgetArgument(f_68, 0);
          h_68 = ATgetArgument(f_68, 1);
          {
            t = not_null(g_68);
            {
              ATerm n_68 (ATerm t)
              {
                ATerm b_17 = t;
                int c_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(c_17);
                  }
                else
                  {
                    t = b_17;
                    {
                      ATerm d_17 = t;
                      int e_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_2 (ATerm t)
                          {
                            t = not_null(h_68);
                            return(t);
                          }
                          t = HdMember_1(t, f_2);
                          t = n_68(t);
                          LocalPopChoice(e_17);
                        }
                      else
                        {
                          t = d_17;
                          t = Cons_2(t, _id, n_68);
                        }
                    }
                  }
                return(t);
              }
              t = n_68(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm k_68 = NULL;
          k_68 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(k_68));
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          ATerm f_17 = t;
          int g_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 (ATerm t)
              {
                ATerm h_17 = t;
                int i_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(i_17);
                  }
                else
                  {
                    t = h_17;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, j_2);
              LocalPopChoice(g_17);
            }
          else
            {
              t = f_17;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, g_2, h_2, i_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
  z_68 = t;
  x_68 :
  if(match_cons(z_68, sym__5))
    {
      a_69 = ATgetArgument(z_68, 0);
      d_69 = ATgetArgument(z_68, 1);
      e_69 = ATgetArgument(z_68, 2);
      f_69 = ATgetArgument(z_68, 3);
      g_69 = ATgetArgument(z_68, 4);
      y_68 :
      if(((ATgetType(a_69) == AT_LIST) && ((ATermList) a_69 != ATempty)))
        {
          b_69 = ATgetFirst((ATermList) a_69);
          c_69 = (ATerm) ATgetNext((ATermList) a_69);
          {
            ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,w_69 = NULL,y_69 = NULL,a_70 = NULL;
            ATerm j_17;
            j_17 = t;
            {
              ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_69), not_null(e_69));
              {
                t = r_56(t);
                {
                  r_69 = t;
                  t_68 :
                  if(match_cons(r_69, sym__2))
                    {
                      s_69 = ATgetArgument(r_69, 0);
                      t_69 = ATgetArgument(r_69, 1);
                      {
                        ATerm u_69 = NULL;
                        if(((o_69 != NULL) && (o_69 != s_69)))
                          _fail(s_69);
                        else
                          o_69 = s_69;
                        {
                          if(((n_69 != NULL) && (n_69 != t_69)))
                            _fail(t_69);
                          else
                            n_69 = t_69;
                          {
                            t = not_null(o_69);
                            {
                              ATerm v_69 = NULL;
                              t = s_56(t);
                              {
                                u_69 = t;
                                {
                                  if(((p_69 != NULL) && (p_69 != u_69)))
                                    _fail(u_69);
                                  else
                                    p_69 = u_69;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_69), not_null(d_69));
                                    {
                                      t = diff_0(t);
                                      {
                                        v_69 = t;
                                        if(((q_69 != NULL) && (q_69 != v_69)))
                                          _fail(v_69);
                                        else
                                          q_69 = v_69;
                                      }
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
                    _fail(t);
                }
              }
            }
            t = j_17;
            {
              ATerm l_17;
              l_17 = t;
              {
                ATerm x_69 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_69), not_null(c_69));
                {
                  t = conc_0(t);
                  {
                    x_69 = t;
                    if(((w_69 != NULL) && (w_69 != x_69)))
                      _fail(x_69);
                    else
                      w_69 = x_69;
                  }
                }
              }
              t = l_17;
              {
                ATerm m_17;
                m_17 = t;
                {
                  ATerm z_69 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_69), not_null(d_69));
                  {
                    t = conc_0(t);
                    {
                      z_69 = t;
                      if(((y_69 != NULL) && (y_69 != z_69)))
                        _fail(z_69);
                      else
                        y_69 = z_69;
                    }
                  }
                }
                t = m_17;
                {
                  ATerm b_70 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(b_69), not_null(o_69), not_null(f_69));
                  {
                    t = t_56(t);
                    {
                      b_70 = t;
                      if(((a_70 != NULL) && (a_70 != b_70)))
                        _fail(b_70);
                      else
                        a_70 = b_70;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(w_69), not_null(y_69), not_null(n_69), not_null(a_70), not_null(g_69));
                }
              }
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnExit_0 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
  u_70 = t;
  s_70 :
  if(match_cons(u_70, sym__5))
    {
      v_70 = ATgetArgument(u_70, 0);
      w_70 = ATgetArgument(u_70, 1);
      x_70 = ATgetArgument(u_70, 2);
      y_70 = ATgetArgument(u_70, 3);
      z_70 = ATgetArgument(u_70, 4);
      t_70 :
      if(((ATermList) v_70 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_70), not_null(z_70));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL;
  h_71 = t;
  g_71 :
  if(match_cons(h_71, sym__3))
    {
      i_71 = ATgetArgument(h_71, 0);
      j_71 = ATgetArgument(h_71, 1);
      k_71 = ATgetArgument(h_71, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(i_71), not_null(i_71), not_null(j_71), not_null(k_71), (ATerm) ATempty);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm y_65 (ATerm), ATerm z_65 (ATerm))
{
  ATerm p_71 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_65(t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        {
          t = z_65(t);
          t = p_71(t);
        }
      }
    return(t);
  }
  t = p_71(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm b_66 (ATerm), ATerm c_66 (ATerm), ATerm d_66 (ATerm))
{
  t = b_66(t);
  t = while_not_2(t, c_66, d_66);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm a_57 (ATerm), ATerm b_57 (ATerm), ATerm c_57 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm p_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, a_57, b_57, c_57);
        LocalPopChoice(r_17);
      }
    else
      {
        t = p_17;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, k_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm p_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, p_2);
    }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
    s_71 = t;
    r_71 :
    if(match_cons(s_71, sym__3))
      {
        t_71 = ATgetArgument(s_71, 0);
        u_71 = ATgetArgument(s_71, 1);
        v_71 = ATgetArgument(s_71, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(v_71)), not_null(u_71));
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, l_2, m_2);
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        {
          t = MissingDefs_0(t);
          {
            t = term_j_9;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_56 (ATerm))
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
  g_72 = t;
  f_72 :
  if(match_cons(g_72, sym__2))
    {
      h_72 = ATgetArgument(g_72, 0);
      i_72 = ATgetArgument(g_72, 1);
      {
        ATerm l_72 = NULL,p_72 = NULL,q_72 = NULL;
        ATerm y_17;
        y_17 = t;
        {
          ATerm r_72 = NULL;
          ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL;
          t = l_56(t);
          {
            r_72 = t;
            {
              if(((l_72 != NULL) && (l_72 != r_72)))
                _fail(r_72);
              else
                l_72 = r_72;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_72), not_null(h_72), not_null(i_72));
                {
                  t = table_push_0(t);
                  {
                    ATerm z_17 = t;
                    int a_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_72), term_c_18);
                        t = table_get_0(t);
                        LocalPopChoice(a_18);
                      }
                    else
                      {
                        t = z_17;
                        t = term_d_18;
                      }
                    {
                      s_72 = t;
                      e_72 :
                      if(((ATgetType(s_72) == AT_LIST) && ((ATermList) s_72 != ATempty)))
                        {
                          t_72 = ATgetFirst((ATermList) s_72);
                          u_72 = (ATerm) ATgetNext((ATermList) s_72);
                          {
                            if(((p_72 != NULL) && (p_72 != t_72)))
                              _fail(t_72);
                            else
                              p_72 = t_72;
                            {
                              if(((q_72 != NULL) && (q_72 != u_72)))
                                _fail(u_72);
                              else
                                q_72 = u_72;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_72), term_c_18, (ATerm) ATinsert(CheckATermList(not_null(q_72)), (ATerm) ATinsert(CheckATermList(not_null(p_72)), not_null(h_72))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
            }
          }
        }
        t = y_17;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Arities_0 (ATerm t)
{
  ATerm c_73 = NULL;
  ATerm g_73 = NULL;
  c_73 = t;
  {
    ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(c_73));
    {
      ATerm u_2 (ATerm t)
      {
        t = term_e_18;
        return(t);
      }
      t = rewrite_1(t, u_2);
      {
        h_73 = t;
        a_73 :
        if(match_cons(h_73, sym_Defined_2))
          {
            i_73 = ATgetArgument(h_73, 0);
            j_73 = ATgetArgument(h_73, 1);
            b_73 :
            if(match_string(i_73, "e_0"))
              {
                if(((g_73 != NULL) && (g_73 != j_73)))
                  _fail(j_73);
                else
                  g_73 = j_73;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(g_73);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL;
  o_73 = t;
  n_73 :
  if(((ATgetType(o_73) == AT_LIST) && ((ATermList) o_73 != ATempty)))
    {
      p_73 = ATgetFirst((ATermList) o_73);
      q_73 = (ATerm) ATgetNext((ATermList) o_73);
      t = not_null(p_73);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
  w_73 = t;
  v_73 :
  if(match_cons(w_73, sym__2))
    {
      x_73 = ATgetArgument(w_73, 0);
      y_73 = ATgetArgument(w_73, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_73), not_null(y_73));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm n_56 (ATerm))
{
  ATerm e_74 = NULL;
  ATerm g_74 = NULL;
  e_74 = t;
  {
    ATerm h_74 = NULL;
    t = term_d_16;
    {
      t = n_56(t);
      {
        h_74 = t;
        if(((g_74 != NULL) && (g_74 != h_74)))
          _fail(h_74);
        else
          g_74 = h_74;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_74), not_null(e_74));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
  p_74 = t;
  o_74 :
  if(match_cons(p_74, sym__2))
    {
      q_74 = ATgetArgument(p_74, 0);
      r_74 = ATgetArgument(p_74, 1);
      {
        ATerm u_74 = NULL,x_74 = NULL;
        ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(r_74), not_null(q_74));
        {
          ATerm v_2 (ATerm t)
          {
            t = term_f_18;
            return(t);
          }
          t = rewrite_1(t, v_2);
          {
            y_74 = t;
            m_74 :
            if(match_cons(y_74, sym_Defined_3))
              {
                z_74 = ATgetArgument(y_74, 0);
                a_75 = ATgetArgument(y_74, 1);
                b_75 = ATgetArgument(y_74, 2);
                n_74 :
                if(match_string(z_74, "d_0"))
                  {
                    if(((u_74 != NULL) && (u_74 != a_75)))
                      _fail(a_75);
                    else
                      u_74 = a_75;
                    if(((x_74 != NULL) && (x_74 != b_75)))
                      _fail(b_75);
                    else
                      x_74 = b_75;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(x_74)), not_null(u_74));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL;
    m_75 = t;
    l_75 :
    if(match_cons(m_75, sym_SDef_3))
      {
        n_75 = ATgetArgument(m_75, 0);
        o_75 = ATgetArgument(m_75, 1);
        p_75 = ATgetArgument(m_75, 2);
        {
          ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL;
          ATerm g_18;
          g_18 = t;
          {
            ATerm x_75 = NULL;
            t = not_null(o_75);
            {
              ATerm y_75 = NULL;
              t = length_0(t);
              {
                x_75 = t;
                {
                  if(((v_75 != NULL) && (v_75 != x_75)))
                    _fail(x_75);
                  else
                    v_75 = x_75;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_75), not_null(v_75));
                    {
                      ATerm z_75 = NULL,b_76 = NULL;
                      ATerm h_18 = t;
                      int i_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(i_18);
                        }
                      else
                        {
                          t = h_18;
                          t = (ATerm) ATempty;
                        }
                      {
                        y_75 = t;
                        {
                          if(((u_75 != NULL) && (u_75 != y_75)))
                            _fail(y_75);
                          else
                            u_75 = y_75;
                          {
                            ATerm a_76 = NULL;
                            t = not_null(n_75);
                            {
                              ATerm j_18 = t;
                              int p_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(p_18);
                                }
                              else
                                {
                                  t = j_18;
                                  t = (ATerm) ATempty;
                                }
                              {
                                a_76 = t;
                                if(((z_75 != NULL) && (z_75 != a_76)))
                                  _fail(a_76);
                                else
                                  z_75 = a_76;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(v_75)), not_null(z_75));
                              {
                                t = union_0(t);
                                {
                                  b_76 = t;
                                  {
                                    if(((w_75 != NULL) && (w_75 != b_76)))
                                      _fail(b_76);
                                    else
                                      w_75 = b_76;
                                    {
                                      ATerm r_18;
                                      r_18 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(v_75), not_null(n_75)), (ATerm) ATmakeAppl(sym_Defined_3, term_s_18, not_null(m_75), not_null(u_75)));
                                        {
                                          ATerm x_2 (ATerm t)
                                          {
                                            t = term_f_18;
                                            return(t);
                                          }
                                          t = assert_1(t, x_2);
                                        }
                                      }
                                      t = r_18;
                                      {
                                        ATerm t_18;
                                        t_18 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(n_75)), (ATerm) ATmakeAppl(sym_Defined_2, term_u_18, not_null(w_75)));
                                          {
                                            ATerm f_3 (ATerm t)
                                            {
                                              t = term_e_18;
                                              return(t);
                                            }
                                            t = assert_1(t, f_3);
                                          }
                                        }
                                        t = t_18;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = g_18;
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, w_2);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL;
  o_76 = t;
  i_76 :
  if(match_cons(o_76, sym__2))
    {
      p_76 = ATgetArgument(o_76, 0);
      q_76 = ATgetArgument(o_76, 1);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(p_76), not_null(q_76));
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            t = SSL_addr(not_null(p_76), not_null(q_76));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = term_x_18;
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_j_9;
    return(t);
  }
  t = foldr_3(t, g_3, add_0, h_3);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
  x_76 = t;
  w_76 :
  if(((ATgetType(x_76) == AT_LIST) && ((ATermList) x_76 != ATempty)))
    {
      y_76 = ATgetFirst((ATermList) x_76);
      z_76 = (ATerm) ATgetNext((ATermList) x_76);
      {
        t = f_63(t);
        {
          ATerm i_3 (ATerm t)
          {
            ATerm c_77 = NULL;
            c_77 = t;
            if(((y_76 != NULL) && (y_76 != c_77)))
              _fail(c_77);
            else
              y_76 = c_77;
            return(t);
          }
          t = fetch_1(t, i_3);
        }
        t = not_null(z_76);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL;
  k_77 = t;
  j_77 :
  if(match_cons(k_77, sym__2))
    {
      l_77 = ATgetArgument(k_77, 0);
      m_77 = ATgetArgument(k_77, 1);
      {
        t = not_null(l_77);
        {
          ATerm q_77 (ATerm t)
          {
            ATerm a_19 = t;
            int b_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_77);
                LocalPopChoice(b_19);
              }
            else
              {
                t = a_19;
                {
                  ATerm c_19 = t;
                  int d_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_3 (ATerm t)
                      {
                        t = not_null(m_77);
                        return(t);
                      }
                      t = HdMember_1(t, j_3);
                      t = q_77(t);
                      LocalPopChoice(d_19);
                    }
                  else
                    {
                      t = c_19;
                      t = Cons_2(t, _id, q_77);
                    }
                }
              }
            return(t);
          }
          t = q_77(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm j_62 (ATerm), ATerm k_62 (ATerm), ATerm l_62 (ATerm))
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_62(t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL;
        v_77 = t;
        u_77 :
        if(((ATgetType(v_77) == AT_LIST) && ((ATermList) v_77 != ATempty)))
          {
            w_77 = ATgetFirst((ATermList) v_77);
            x_77 = (ATerm) ATgetNext((ATermList) v_77);
            {
              ATerm a_78 = NULL,c_78 = NULL;
              ATerm k_19;
              k_19 = t;
              {
                ATerm b_78 = NULL;
                t = not_null(w_77);
                {
                  t = l_62(t);
                  {
                    b_78 = t;
                    if(((a_78 != NULL) && (a_78 != b_78)))
                      _fail(b_78);
                    else
                      a_78 = b_78;
                  }
                }
              }
              t = k_19;
              {
                ATerm d_78 = NULL;
                t = not_null(x_77);
                {
                  t = foldr_3(t, j_62, k_62, l_62);
                  {
                    d_78 = t;
                    if(((c_78 != NULL) && (c_78 != d_78)))
                      _fail(d_78);
                    else
                      c_78 = d_78;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_78), not_null(c_78));
                  t = k_62(t);
                }
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm definition_names_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL;
    o_78 = t;
    l_78 :
    if(match_cons(o_78, sym_SDef_3))
      {
        p_78 = ATgetArgument(o_78, 0);
        q_78 = ATgetArgument(o_78, 1);
        r_78 = ATgetArgument(o_78, 2);
        {
          ATerm w_78 = NULL;
          ATerm x_78 = NULL;
          t = not_null(q_78);
          {
            t = length_0(t);
            {
              x_78 = t;
              if(((w_78 != NULL) && (w_78 != x_78)))
                _fail(x_78);
              else
                w_78 = x_78;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(p_78), not_null(w_78)));
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_3(t, r_3, union_0, s_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm c_79 = NULL,e_79 = NULL;
  ATerm l_19;
  l_19 = t;
  {
    ATerm d_79 = NULL;
    t = definition_names_0(t);
    {
      d_79 = t;
      if(((c_79 != NULL) && (c_79 != d_79)))
        _fail(d_79);
      else
        c_79 = d_79;
    }
  }
  t = l_19;
  {
    ATerm f_79 = NULL;
    t = sort_defs_0(t);
    {
      f_79 = t;
      if(((e_79 != NULL) && (e_79 != f_79)))
        _fail(f_79);
      else
        e_79 = f_79;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(c_79), not_null(e_79), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm q_53 (ATerm))
{
  ATerm l_79 = NULL,m_79 = NULL;
  l_79 = t;
  k_79 :
  if(match_cons(l_79, sym_Strategies_1))
    {
      m_79 = ATgetArgument(l_79, 0);
      {
        ATerm o_79 = NULL;
        t = not_null(m_79);
        {
          t = q_53(t);
          {
            o_79 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(o_79));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_55 (ATerm), ATerm a_56 (ATerm))
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
  x_79 = t;
  w_79 :
  if(((ATgetType(x_79) == AT_LIST) && ((ATermList) x_79 != ATempty)))
    {
      y_79 = ATgetFirst((ATermList) x_79);
      z_79 = (ATerm) ATgetNext((ATermList) x_79);
      {
        ATerm c_80 = NULL;
        t = not_null(y_79);
        {
          ATerm g_80 = NULL;
          t = z_55(t);
          {
            c_80 = t;
            {
              t = not_null(z_79);
              {
                t = a_56(t);
                {
                  g_80 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_80)), not_null(c_80));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm s_53 (ATerm))
{
  ATerm o_80 = NULL,p_80 = NULL;
  o_80 = t;
  n_80 :
  if(match_cons(o_80, sym_Specification_1))
    {
      p_80 = ATgetArgument(o_80, 0);
      {
        ATerm r_80 = NULL;
        t = not_null(p_80);
        {
          t = s_53(t);
          {
            r_80 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(r_80));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm j_45 (ATerm), ATerm k_45 (ATerm))
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
  z_80 = t;
  y_80 :
  if(match_cons(z_80, sym__2))
    {
      a_81 = ATgetArgument(z_80, 0);
      b_81 = ATgetArgument(z_80, 1);
      {
        ATerm e_81 = NULL;
        t = not_null(a_81);
        {
          ATerm g_81 = NULL;
          t = j_45(t);
          {
            e_81 = t;
            {
              t = not_null(b_81);
              {
                t = k_45(t);
                {
                  g_81 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_81), not_null(g_81));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm n_81 = NULL;
  ATerm m_19;
  m_19 = t;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm o_81 = NULL,p_81 = NULL;
      o_81 = t;
      m_81 :
      if(match_cons(o_81, sym_Program_1))
        {
          p_81 = ATgetArgument(o_81, 0);
          if(((n_81 != NULL) && (n_81 != p_81)))
            _fail(p_81);
          else
            n_81 = p_81;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, t_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(CheckATermList(term_p_19), not_null(n_81)), term_n_19));
      {
        t = printnl_0(t);
        {
          t = term_j_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_w_19;
  {
    t = printnl_0(t);
    {
      t = term_j_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL;
  ATerm u_3 (ATerm t)
  {
    ATerm v_3 (ATerm t)
    {
      ATerm x_19 = t;
      if((PushChoice() == 0))
        {
          ATerm b_4 (ATerm t)
          {
            ATerm y_81 = NULL;
            y_81 = t;
            r_81 :
            if(!(match_cons(y_81, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, b_4);
          PopChoice();
          _fail(t);
        }
      else
        t = x_19;
      return(t);
    }
    t = _2(t, v_3, _id);
    {
      ATerm c_4 (ATerm t)
      {
        ATerm d_4 (ATerm t)
        {
          ATerm z_81 = NULL,a_82 = NULL;
          z_81 = t;
          t_81 :
          if(match_cons(z_81, sym_Runtime_1))
            {
              a_82 = ATgetArgument(z_81, 0);
              if(((x_81 != NULL) && (x_81 != a_82)))
                _fail(a_82);
              else
                x_81 = a_82;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, d_4);
        return(t);
      }
      t = _2(t, c_4, _id);
      {
        ATerm g_4 (ATerm t)
        {
          ATerm h_4 (ATerm t)
          {
            ATerm b_82 = NULL,c_82 = NULL;
            b_82 = t;
            v_81 :
            if(match_cons(b_82, sym_Program_1))
              {
                c_82 = ATgetArgument(b_82, 0);
                if(((w_81 != NULL) && (w_81 != c_82)))
                  _fail(c_82);
                else
                  w_81 = c_82;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, h_4);
          return(t);
        }
        t = _2(t, g_4, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_c_20), not_null(x_81)), term_z_19), not_null(w_81)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, u_3);
  {
    t = term_x_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL;
  h_82 = t;
  g_82 :
  if(match_cons(h_82, sym__2))
    {
      i_82 = ATgetArgument(h_82, 0);
      j_82 = ATgetArgument(h_82, 1);
      t = SSL_WriteToTextFile(not_null(i_82), not_null(j_82));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL;
  p_82 = t;
  o_82 :
  if(match_cons(p_82, sym__2))
    {
      q_82 = ATgetArgument(p_82, 0);
      r_82 = ATgetArgument(p_82, 1);
      t = SSL_WriteToBinaryFile(not_null(q_82), not_null(r_82));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm z_82 = NULL;
  ATerm d_20;
  d_20 = t;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm e_20 = t;
      int f_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_4 (ATerm t)
          {
            ATerm a_83 = NULL,b_83 = NULL;
            a_83 = t;
            w_82 :
            if(match_cons(a_83, sym_Output_1))
              {
                b_83 = ATgetArgument(a_83, 0);
                if(((z_82 != NULL) && (z_82 != b_83)))
                  _fail(b_83);
                else
                  z_82 = b_83;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_4);
          LocalPopChoice(f_20);
        }
      else
        {
          t = e_20;
          {
            ATerm c_83 = NULL;
            t = term_g_20;
            {
              c_83 = t;
              if(((z_82 != NULL) && (z_82 != c_83)))
                _fail(c_83);
              else
                z_82 = c_83;
            }
          }
        }
      return(t);
    }
    t = _2(t, i_4, _id);
  }
  t = d_20;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm v_4 (ATerm t)
      {
        t = not_null(z_82);
        return(t);
      }
      t = split_2(t, v_4, _id);
      return(t);
    }
    t = _2(t, _id, n_4);
    {
      ATerm h_20 = t;
      int i_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_5 (ATerm t)
          {
            ATerm h_5 (ATerm t)
            {
              ATerm d_83 = NULL;
              d_83 = t;
              y_82 :
              if(!(match_cons(d_83, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, h_5);
            return(t);
          }
          t = _2(t, c_5, WriteToBinaryFile_0);
          LocalPopChoice(i_20);
        }
      else
        {
          t = h_20;
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
ATerm apply_strategy_1 (ATerm t, ATerm g_60 (ATerm))
{
  ATerm j_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL;
  ATerm k_20;
  k_20 = t;
  t = dtime_0(t);
  t = k_20;
  {
    t = g_60(t);
    {
      ATerm l_20;
      l_20 = t;
      {
        ATerm k_83 = NULL;
        t = dtime_0(t);
        {
          k_83 = t;
          if(((j_83 != NULL) && (j_83 != k_83)))
            _fail(k_83);
          else
            j_83 = k_83;
        }
      }
      t = l_20;
      {
        l_83 = t;
        i_83 :
        if(match_cons(l_83, sym__2))
          {
            m_83 = ATgetArgument(l_83, 0);
            n_83 = ATgetArgument(l_83, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_83)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_83))), not_null(n_83));
          }
        else
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm t_83 = NULL;
  t_83 = t;
  t = SSL_ReadFromFile(not_null(t_83));
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_71 (ATerm), ATerm x_71 (ATerm))
{
  ATerm y_83 = NULL,a_84 = NULL;
  ATerm m_20;
  m_20 = t;
  {
    ATerm z_83 = NULL;
    t = w_71(t);
    {
      z_83 = t;
      if(((y_83 != NULL) && (y_83 != z_83)))
        _fail(z_83);
      else
        y_83 = z_83;
    }
  }
  t = m_20;
  {
    ATerm c_84 = NULL;
    t = x_71(t);
    {
      c_84 = t;
      if(((a_84 != NULL) && (a_84 != c_84)))
        _fail(c_84);
      else
        a_84 = c_84;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_83), not_null(a_84));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_84 = NULL;
  ATerm o_20;
  o_20 = t;
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 (ATerm t)
        {
          ATerm j_84 = NULL,k_84 = NULL;
          j_84 = t;
          g_84 :
          if(match_cons(j_84, sym_Input_1))
            {
              k_84 = ATgetArgument(j_84, 0);
              if(((i_84 != NULL) && (i_84 != k_84)))
                _fail(k_84);
              else
                i_84 = k_84;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, i_5);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        {
          ATerm l_84 = NULL;
          t = term_y_20;
          {
            l_84 = t;
            if(((i_84 != NULL) && (i_84 != l_84)))
              _fail(l_84);
            else
              i_84 = l_84;
          }
        }
      }
  }
  t = o_20;
  {
    ATerm j_5 (ATerm t)
    {
      t = not_null(i_84);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_84 = NULL;
  p_84 = t;
  o_84 :
  if(!(match_cons(p_84, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_60 (ATerm))
{
  ATerm k_5 (ATerm t)
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        {
          ATerm b_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(e_21);
            }
          else
            {
              t = b_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_5);
  t = f_60(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_84 = NULL;
  r_84 = t;
  t = SSL_table_create(not_null(r_84));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_84 = NULL;
  v_84 = t;
  {
    ATerm f_21;
    f_21 = t;
    {
      t = term_g_21;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_21, term_h_21, not_null(v_84));
          t = table_put_0(t);
        }
      }
    }
    t = f_21;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL;
  d_85 = t;
  b_85 :
  if(match_string(d_85, "register-usage-info"))
    t = register_usage_1(t, k_0);
  else
    {
      if(((ATgetType(d_85) == AT_LIST) && ((ATermList) d_85 != ATempty)))
        {
          e_85 = ATgetFirst((ATermList) d_85);
          f_85 = (ATerm) ATgetNext((ATermList) d_85);
          c_85 :
          if(((ATgetType(f_85) == AT_LIST) && ((ATermList) f_85 != ATempty)))
            {
              g_85 = ATgetFirst((ATermList) f_85);
              h_85 = (ATerm) ATgetNext((ATermList) f_85);
              {
                ATerm l_85 = NULL;
                ATerm m_21;
                m_21 = t;
                {
                  t = not_null(e_85);
                  t = i_0(t);
                }
                t = m_21;
                {
                  ATerm m_85 = NULL;
                  t = not_null(g_85);
                  {
                    t = j_0(t);
                    {
                      m_85 = t;
                      if(((l_85 != NULL) && (l_85 != m_85)))
                        _fail(m_85);
                      else
                        l_85 = m_85;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_85)), not_null(l_85));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 (ATerm t)
      {
        ATerm b_86 = NULL;
        b_86 = t;
        q_85 :
        if(!(match_string(b_86, "-S")))
          {
            if(!(match_string(b_86, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = term_p_21;
        return(t);
      }
      ATerm n_5 (ATerm t)
      {
        t = term_q_21;
        return(t);
      }
      t = Option_3(t, l_5, m_5, n_5);
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              ATerm c_86 = NULL;
              c_86 = t;
              r_85 :
              if(!(match_string(c_86, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm t_5 (ATerm t)
            {
              t = term_w_21;
              return(t);
            }
            ATerm v_5 (ATerm t)
            {
              t = term_x_21;
              return(t);
            }
            t = Option_3(t, s_5, t_5, v_5);
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            {
              ATerm b_22 = t;
              int c_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_5 (ATerm t)
                  {
                    ATerm d_86 = NULL;
                    d_86 = t;
                    s_85 :
                    if(!(match_string(d_86, "-v")))
                      {
                        if(!(match_string(d_86, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm y_5 (ATerm t)
                  {
                    t = term_d_22;
                    return(t);
                  }
                  ATerm z_5 (ATerm t)
                  {
                    t = term_e_22;
                    return(t);
                  }
                  t = Option_3(t, x_5, y_5, z_5);
                  LocalPopChoice(c_22);
                }
              else
                {
                  t = b_22;
                  {
                    ATerm f_22 = t;
                    int g_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_6 (ATerm t)
                        {
                          ATerm e_86 = NULL;
                          e_86 = t;
                          t_85 :
                          if(!(match_string(e_86, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm b_6 (ATerm t)
                        {
                          ATerm f_86 = NULL;
                          ATerm g_86 = NULL;
                          g_86 = t;
                          if(((f_86 != NULL) && (f_86 != g_86)))
                            _fail(g_86);
                          else
                            f_86 = g_86;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(f_86));
                          return(t);
                        }
                        ATerm c_6 (ATerm t)
                        {
                          t = term_h_22;
                          return(t);
                        }
                        t = ArgOption_3(t, a_6, b_6, c_6);
                        LocalPopChoice(g_22);
                      }
                    else
                      {
                        t = f_22;
                        {
                          ATerm i_22 = t;
                          int j_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_6 (ATerm t)
                              {
                                ATerm h_86 = NULL;
                                h_86 = t;
                                v_85 :
                                if(!(match_string(h_86, "-i")))
                                  {
                                    if(!(match_string(h_86, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm e_6 (ATerm t)
                              {
                                ATerm i_86 = NULL;
                                ATerm j_86 = NULL;
                                j_86 = t;
                                if(((i_86 != NULL) && (i_86 != j_86)))
                                  _fail(j_86);
                                else
                                  i_86 = j_86;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_86));
                                return(t);
                              }
                              ATerm k_6 (ATerm t)
                              {
                                t = term_k_22;
                                return(t);
                              }
                              t = ArgOption_3(t, d_6, e_6, k_6);
                              LocalPopChoice(j_22);
                            }
                          else
                            {
                              t = i_22;
                              {
                                ATerm l_22 = t;
                                int o_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_6 (ATerm t)
                                    {
                                      ATerm k_86 = NULL;
                                      k_86 = t;
                                      x_85 :
                                      if(!(match_string(k_86, "-o")))
                                        {
                                          if(!(match_string(k_86, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm m_6 (ATerm t)
                                    {
                                      ATerm l_86 = NULL;
                                      ATerm m_86 = NULL;
                                      m_86 = t;
                                      if(((l_86 != NULL) && (l_86 != m_86)))
                                        _fail(m_86);
                                      else
                                        l_86 = m_86;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_86));
                                      return(t);
                                    }
                                    ATerm o_6 (ATerm t)
                                    {
                                      t = term_p_22;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, l_6, m_6, o_6);
                                    LocalPopChoice(o_22);
                                  }
                                else
                                  {
                                    t = l_22;
                                    {
                                      ATerm q_22 = t;
                                      int v_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_6 (ATerm t)
                                          {
                                            ATerm n_86 = NULL;
                                            n_86 = t;
                                            z_85 :
                                            if(!(match_string(n_86, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm s_6 (ATerm t)
                                          {
                                            t = term_a_23;
                                            return(t);
                                          }
                                          ATerm t_6 (ATerm t)
                                          {
                                            t = term_b_23;
                                            return(t);
                                          }
                                          t = Option_3(t, q_6, s_6, t_6);
                                          LocalPopChoice(v_22);
                                        }
                                      else
                                        {
                                          t = q_22;
                                          {
                                            ATerm u_6 (ATerm t)
                                            {
                                              ATerm o_86 = NULL;
                                              o_86 = t;
                                              a_86 :
                                              if(!(match_string(o_86, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm v_6 (ATerm t)
                                            {
                                              t = term_c_23;
                                              return(t);
                                            }
                                            ATerm w_6 (ATerm t)
                                            {
                                              t = term_d_23;
                                              return(t);
                                            }
                                            t = Option_3(t, u_6, v_6, w_6);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm t_86 = NULL;
  t_86 = t;
  t = SSL_table_destroy(not_null(t_86));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_86 = NULL;
  x_86 = t;
  t = SSL_exit(not_null(x_86));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_87 = NULL;
  b_87 = t;
  t = SSL_implode_string(not_null(b_87));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm e_87 (ATerm t)
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_87);
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        {
          t = Nil_0(t);
          t = s_78(t);
        }
      }
    return(t);
  }
  t = e_87(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      {
        ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL;
        h_87 = t;
        g_87 :
        if(((ATgetType(h_87) == AT_LIST) && ((ATermList) h_87 != ATempty)))
          {
            i_87 = ATgetFirst((ATermList) h_87);
            j_87 = (ATerm) ATgetNext((ATermList) h_87);
            {
              t = not_null(i_87);
              {
                ATerm x_6 (ATerm t)
                {
                  t = not_null(j_87);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_6);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm p_87 = NULL;
  p_87 = t;
  t = SSL_explode_string(not_null(p_87));
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
ATerm long_description_1 (ATerm t, ATerm m_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm s_87 (ATerm t)
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        t = Cons_2(t, e_78, s_87);
      }
    return(t);
  }
  t = s_87(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL;
  z_87 = t;
  w_87 :
  if(((ATgetType(z_87) == AT_LIST) && ((ATermList) z_87 != ATempty)))
    {
      x_87 = ATgetFirst((ATermList) z_87);
      y_87 = (ATerm) ATgetNext((ATermList) z_87);
      {
        t = not_null(y_87);
        {
          ATerm y_6 (ATerm t)
          {
            ATerm c_88 = NULL;
            ATerm d_88 = NULL;
            t = h_0(t);
            {
              d_88 = t;
              if(((c_88 != NULL) && (c_88 != d_88)))
                _fail(d_88);
              else
                c_88 = d_88;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(c_88)), not_null(x_87));
            return(t);
          }
          t = reverse_1(t, y_6);
        }
      }
    }
  else
    {
      if(((ATermList) z_87 == ATempty))
        {
          {
            t = term_d_16;
            t = h_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, z_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_50 (ATerm))
{
  ATerm l_88 = NULL,m_88 = NULL;
  l_88 = t;
  k_88 :
  if(match_cons(l_88, sym_Program_1))
    {
      m_88 = ATgetArgument(l_88, 0);
      {
        ATerm o_88 = NULL;
        t = not_null(m_88);
        {
          t = y_50(t);
          {
            o_88 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_88));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm x_88 = NULL;
  ATerm e_7 (ATerm t)
  {
    ATerm f_7 (ATerm t)
    {
      ATerm y_88 = NULL;
      y_88 = t;
      if(((x_88 != NULL) && (x_88 != y_88)))
        _fail(y_88);
      else
        x_88 = y_88;
      return(t);
    }
    t = Program_1(t, f_7);
    return(t);
  }
  t = option_defined_1(t, e_7);
  {
    ATerm h_7 (ATerm t)
    {
      ATerm a_89 = NULL;
      ATerm b_89 = NULL;
      t = term_d_16;
      {
        ATerm j_7 (ATerm t)
        {
          t = not_null(x_88);
          return(t);
        }
        t = short_description_1(t, j_7);
        {
          t = concat_strings_0(t);
          {
            b_89 = t;
            if(((a_89 != NULL) && (a_89 != b_89)))
              _fail(b_89);
            else
              a_89 = b_89;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATempty, not_null(a_89)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, h_7);
    {
      t = term_r_23;
      {
        t = printnl_0(t);
        {
          t = term_u_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_7 (ATerm t)
                {
                  ATerm c_89 = NULL;
                  c_89 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_89)), term_c_24));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_7);
                {
                  ATerm l_7 (ATerm t)
                  {
                    ATerm e_89 = NULL;
                    ATerm f_89 = NULL;
                    t = term_d_16;
                    {
                      ATerm m_7 (ATerm t)
                      {
                        t = not_null(x_88);
                        return(t);
                      }
                      t = long_description_1(t, m_7);
                      {
                        t = concat_strings_0(t);
                        {
                          f_89 = t;
                          if(((e_89 != NULL) && (e_89 != f_89)))
                            _fail(f_89);
                          else
                            e_89 = f_89;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_89)), term_d_24));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_7);
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
  ATerm m_89 = NULL,n_89 = NULL,o_89 = NULL;
  m_89 = t;
  l_89 :
  if(match_cons(m_89, sym__2))
    {
      n_89 = ATgetArgument(m_89, 0);
      o_89 = ATgetArgument(m_89, 1);
      {
        ATerm e_24;
        e_24 = t;
        t = SSL_printnl(not_null(n_89), not_null(o_89));
        t = e_24;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_50 (ATerm))
{
  ATerm v_89 = NULL,w_89 = NULL;
  v_89 = t;
  u_89 :
  if(match_cons(v_89, sym_Undefined_1))
    {
      w_89 = ATgetArgument(v_89, 0);
      {
        ATerm y_89 = NULL;
        t = not_null(w_89);
        {
          t = z_50(t);
          {
            y_89 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_89));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm m_78 (ATerm))
{
  ATerm c_90 (ATerm t)
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_78, _id);
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = Cons_2(t, _id, c_90);
      }
    return(t);
  }
  t = c_90(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_59 (ATerm))
{
  t = fetch_1(t, k_59);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_90 = NULL;
  e_90 = t;
  d_90 :
  if(!(match_cons(e_90, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_72 (ATerm))
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_72(t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  g_90 :
  if(match_cons(h_90, sym__2))
    {
      i_90 = ATgetArgument(h_90, 0);
      j_90 = ATgetArgument(h_90, 1);
      t = SSL_table_get(not_null(i_90), not_null(j_90));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
  q_90 = t;
  p_90 :
  if(match_cons(q_90, sym__3))
    {
      r_90 = ATgetArgument(q_90, 0);
      s_90 = ATgetArgument(q_90, 1);
      t_90 = ATgetArgument(q_90, 2);
      {
        ATerm l_24;
        l_24 = t;
        {
          ATerm x_90 = NULL;
          ATerm y_90 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_90), not_null(s_90));
          {
            ATerm m_24 = t;
            int n_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_24);
              }
            else
              {
                t = m_24;
                t = (ATerm) ATempty;
              }
            {
              y_90 = t;
              if(((x_90 != NULL) && (x_90 != y_90)))
                _fail(y_90);
              else
                x_90 = y_90;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_90), not_null(s_90), (ATerm) ATinsert(CheckATermList(not_null(x_90)), not_null(t_90)));
            t = table_put_0(t);
          }
        }
        t = l_24;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_58 (ATerm))
{
  ATerm e_91 = NULL;
  ATerm h_91 = NULL;
  t = term_d_16;
  {
    t = q_58(t);
    {
      h_91 = t;
      if(((e_91 != NULL) && (e_91 != h_91)))
        _fail(h_91);
      else
        e_91 = h_91;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_23, term_t_23, not_null(e_91));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL;
  n_91 = t;
  m_91 :
  if(match_string(n_91, "register-usage-info"))
    t = register_usage_1(t, g_0);
  else
    {
      if(((ATgetType(n_91) == AT_LIST) && ((ATermList) n_91 != ATempty)))
        {
          o_91 = ATgetFirst((ATermList) n_91);
          p_91 = (ATerm) ATgetNext((ATermList) n_91);
          {
            ATerm s_91 = NULL;
            ATerm o_24;
            o_24 = t;
            {
              t = not_null(o_91);
              t = a_0(t);
            }
            t = o_24;
            {
              ATerm t_91 = NULL;
              t = term_d_16;
              {
                t = f_0(t);
                {
                  t_91 = t;
                  if(((s_91 != NULL) && (s_91 != t_91)))
                    _fail(t_91);
                  else
                    s_91 = t_91;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_91)), not_null(s_91));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    ATerm y_91 = NULL;
    y_91 = t;
    x_91 :
    if(!(match_string(y_91, "--help")))
      {
        if(!(match_string(y_91, "-h")))
          {
            if(!(match_string(y_91, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = term_p_24;
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    t = term_q_24;
    return(t);
  }
  t = Option_3(t, n_7, s_7, t_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL;
  b_92 = t;
  a_92 :
  if(((ATgetType(b_92) == AT_LIST) && ((ATermList) b_92 != ATempty)))
    {
      c_92 = ATgetFirst((ATermList) b_92);
      d_92 = (ATerm) ATgetNext((ATermList) b_92);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_92)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_92)));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_58 (ATerm))
{
  ATerm r_24;
  r_24 = t;
  {
    ATerm u_7 (ATerm t)
    {
      t = term_t_24;
      t = o_58(t);
      return(t);
    }
    t = try_1(t, u_7);
  }
  t = r_24;
  {
    ATerm v_7 (ATerm t)
    {
      ATerm j_92 = NULL;
      j_92 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_92));
      return(t);
    }
    ATerm w_7 (ATerm t)
    {
      ATerm u_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_24 = t;
          int y_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_24);
            }
          else
            {
              t = w_24;
              {
                t = o_58(t);
                t = Cons_2(t, _id, w_7);
              }
            }
          LocalPopChoice(v_24);
        }
      else
        {
          t = u_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_7, w_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL;
  ATerm d_25;
  d_25 = t;
  {
    ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL;
    s_92 = t;
    o_92 :
    if(match_cons(s_92, sym__3))
      {
        t_92 = ATgetArgument(s_92, 0);
        u_92 = ATgetArgument(s_92, 1);
        v_92 = ATgetArgument(s_92, 2);
        {
          if(((p_92 != NULL) && (p_92 != t_92)))
            _fail(t_92);
          else
            p_92 = t_92;
          {
            if(((q_92 != NULL) && (q_92 != u_92)))
              _fail(u_92);
            else
              q_92 = u_92;
            {
              if(((r_92 != NULL) && (r_92 != v_92)))
                _fail(v_92);
              else
                r_92 = v_92;
              t = SSL_table_put(not_null(p_92), not_null(q_92), not_null(r_92));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = d_25;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_58 (ATerm))
{
  ATerm y_92 = NULL;
  ATerm e_25;
  e_25 = t;
  {
    t = term_n_25;
    t = table_put_0(t);
  }
  t = e_25;
  {
    ATerm d_8 (ATerm t)
    {
      ATerm x_25 = t;
      int j_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_58(t);
          LocalPopChoice(j_26);
        }
      else
        {
          t = x_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_8);
    {
      ATerm e_8 (ATerm t)
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_x_18;
                t = exit_0(t);
              }
            }
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
            {
              ATerm f_8 (ATerm t)
              {
                ATerm j_8 (ATerm t)
                {
                  ATerm z_92 = NULL;
                  z_92 = t;
                  if(((y_92 != NULL) && (y_92 != z_92)))
                    _fail(z_92);
                  else
                    y_92 = z_92;
                  return(t);
                }
                t = Undefined_1(t, j_8);
                return(t);
              }
              t = option_defined_1(t, f_8);
              {
                ATerm m_26;
                m_26 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_92)), term_n_26));
                  t = printnl_0(t);
                }
                t = m_26;
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_8);
      {
        ATerm o_26;
        o_26 = t;
        {
          t = term_s_23;
          t = table_destroy_0(t);
        }
        t = o_26;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_59 (ATerm), ATerm v_59 (ATerm), ATerm w_59 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_59(t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, k_8);
  {
    t = store_options_0(t);
    {
      ATerm r_26 = t;
      int s_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, w_59);
          LocalPopChoice(s_26);
        }
      else
        {
          t = r_26;
          {
            ATerm t_26 = t;
            int u_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, u_59);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(u_26);
              }
            else
              {
                t = t_26;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm p_59 (ATerm), ATerm q_59 (ATerm))
{
  t = iowrap_3(t, p_59, q_59, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm l_8 (ATerm t)
  {
    t = _2(t, _id, m_59);
    return(t);
  }
  t = iowrap_2(t, l_8, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm n_8 (ATerm t)
    {
      ATerm t_8 (ATerm t)
      {
        ATerm u_8 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, u_8, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, t_8);
      return(t);
    }
    t = Specification_1(t, n_8);
    return(t);
  }
  t = iowrap_1(t, m_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
