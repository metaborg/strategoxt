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
ATerm term_k_24;
ATerm term_c_24;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_i_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_n_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_d_20;
ATerm term_n_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_i_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_u_17;
ATerm term_q_17;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_s_13;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_q_11;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_u_8;
ATerm term_t_8;
void init_constant_terms (void)
{
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATinsert(ATempty, term_z_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATinsert(ATempty, term_g_9);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Op_2, term_c_15, (ATerm) ATempty);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATinsert(ATempty, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_FunType_2, term_f_15, term_e_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_i_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATinsert(ATempty, term_t_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATinsert(ATempty, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATinsert(ATempty, term_z_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_e_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATinsert(ATempty, term_i_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATinsert(ATempty, term_i_22);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_q_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__3, term_p_22, term_q_22, (ATerm) ATempty);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm));
ATerm SDef_3 (ATerm, ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm m_56 (ATerm));
ATerm Let_2 (ATerm, ATerm i_56 (ATerm), ATerm j_56 (ATerm));
ATerm sboundin_3 (ATerm, ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm l_70 (ATerm), ATerm m_70 (ATerm));
ATerm diff_1 (ATerm, ATerm q_70 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm y_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_66 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_69 (ATerm), ATerm h_69 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm d_80 (ATerm), ATerm e_80 (ATerm));
ATerm alltd_1 (ATerm, ATerm d_79 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm f_80 (ATerm), ATerm g_80 (ATerm));
ATerm substitute_1 (ATerm, ATerm h_80 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm n_56 (ATerm), ATerm o_56 (ATerm));
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
ATerm Explode_2 (ATerm, ATerm e_54 (ATerm), ATerm f_54 (ATerm));
ATerm Op_2 (ATerm, ATerm n_55 (ATerm), ATerm o_55 (ATerm));
ATerm pat_td_1 (ATerm, ATerm y_57 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm e_64 (ATerm), ATerm f_64 (ATerm));
ATerm repeat_1 (ATerm, ATerm h_64 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm y_53 (ATerm), ATerm z_53 (ATerm));
ATerm Con_3 (ATerm, ATerm v_53 (ATerm), ATerm w_53 (ATerm), ATerm x_53 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm k_57 (ATerm), ATerm l_57 (ATerm));
ATerm oncetd_1 (ATerm, ATerm p_78 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm x_76 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm g_76 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm v_69 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm l_74 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm g_74 (ATerm));
ATerm zip_1 (ATerm, ATerm i_74 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm m_58 (ATerm), ATerm n_58 (ATerm), ATerm o_58 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm v_64 (ATerm), ATerm w_64 (ATerm));
ATerm for_3 (ATerm, ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm a_65 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm x_58 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm g_58 (ATerm));
ATerm HdMember_1 (ATerm, ATerm k_70 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm i_58 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm k_69 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm g_55 (ATerm));
ATerm Cons_2 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm));
ATerm Specification_1 (ATerm, ATerm i_55 (ATerm));
ATerm _2 (ATerm, ATerm z_46 (ATerm), ATerm a_47 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_62 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm a_62 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_72 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_60 (ATerm));
ATerm map_1 (ATerm, ATerm l_72 (ATerm));
ATerm reverse_1 (ATerm, ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_60 (ATerm));
ATerm Program_1 (ATerm, ATerm o_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm p_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_61 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_76 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_60 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_60 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_60 (ATerm));
ATerm iowrap_3 (ATerm, ATerm p_61 (ATerm), ATerm q_61 (ATerm), ATerm r_61 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_61 (ATerm), ATerm l_61 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_61 (ATerm));
ATerm extract_0 (ATerm);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(term_a_9), not_null(t_2)), term_u_8), not_null(s_2)), term_t_8);
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(term_a_9), not_null(e_3)), term_u_8), not_null(d_3)), term_b_9), not_null(c_3)), term_t_8);
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
                ATerm c_9 = t;
                int d_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(d_9);
                  }
                else
                  {
                    t = c_9;
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
  ATerm e_9;
  e_9 = t;
  {
    t = error_0(t);
    {
      t = term_f_9;
      t = exit_0(t);
    }
  }
  t = e_9;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = term_j_9;
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm m_9;
  m_9 = t;
  {
    ATerm e_4 = NULL;
    ATerm f_4 = NULL;
    f_4 = t;
    if(((e_4 != NULL) && (e_4 != f_4)))
      _fail(f_4);
    else
      e_4 = f_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_9, not_null(e_4));
      t = printnl_0(t);
    }
  }
  t = m_9;
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
          ATerm r_9 = t;
          int s_9 = stack_ptr;
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
                            ATerm t_9 = t;
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
                              t = t_9;
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_4)), term_u_9);
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
              LocalPopChoice(s_9);
            }
          else
            {
              t = r_9;
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
ATerm Rec_2 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm))
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
          t = g_56(t);
          {
            u_5 = t;
            {
              t = not_null(r_5);
              {
                t = h_56(t);
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
ATerm SDef_3 (ATerm t, ATerm k_56 (ATerm), ATerm l_56 (ATerm), ATerm m_56 (ATerm))
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
          t = k_56(t);
          {
            n_6 = t;
            {
              t = not_null(i_6);
              {
                ATerm r_6 = NULL;
                t = l_56(t);
                {
                  p_6 = t;
                  {
                    t = not_null(j_6);
                    {
                      t = m_56(t);
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
ATerm Let_2 (ATerm t, ATerm i_56 (ATerm), ATerm j_56 (ATerm))
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
          t = i_56(t);
          {
            g_7 = t;
            {
              t = not_null(d_7);
              {
                t = j_56(t);
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
ATerm sboundin_3 (ATerm t, ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm))
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, a_81, a_81);
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, c_81, c_81, a_81);
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            t = Rec_2(t, c_81, a_81);
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
ATerm crush_3 (ATerm t, ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm))
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
      t = foldr_3(t, v_70, w_70, x_70);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm l_70 (ATerm), ATerm m_70 (ATerm))
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
  w_9 = t;
  v_9 :
  if(((ATgetType(w_9) == AT_LIST) && ((ATermList) w_9 != ATempty)))
    {
      x_9 = ATgetFirst((ATermList) w_9);
      y_9 = (ATerm) ATgetNext((ATermList) w_9);
      {
        t = m_70(t);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm b_10 = NULL;
            b_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(b_10));
              t = l_70(t);
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
ATerm diff_1 (ATerm t, ATerm q_70 (ATerm))
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
            ATerm e_10 = t;
            int f_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(f_10);
              }
            else
              {
                t = e_10;
                {
                  ATerm k_10 = t;
                  int l_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_0 (ATerm t)
                      {
                        t = not_null(j_10);
                        return(t);
                      }
                      t = HdMember_p__2(t, q_70, o_0);
                      t = n_10(t);
                      LocalPopChoice(l_10);
                    }
                  else
                    {
                      t = k_10;
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
ATerm free_vars2_4 (ATerm t, ATerm w_66 (ATerm), ATerm x_66 (ATerm), ATerm y_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_66 (ATerm))
{
  ATerm r_10 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm m_10 = t;
      int o_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_66(t);
          LocalPopChoice(o_10);
        }
      else
        {
          t = m_10;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm s_10 = t;
      int t_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_10 = NULL;
          ATerm u_10;
          u_10 = t;
          {
            ATerm q_10 = NULL;
            t = x_66(t);
            {
              q_10 = t;
              if(((p_10 != NULL) && (p_10 != q_10)))
                _fail(q_10);
              else
                p_10 = q_10;
            }
          }
          t = u_10;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(p_10);
                return(t);
              }
              t = split_2(t, r_10, t_0);
              t = diff_1(t, z_66);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = y_66(t, r_0, r_10, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          LocalPopChoice(t_10);
        }
      else
        {
          t = s_10;
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
              ATerm g_11 = NULL;
              ATerm h_11 = NULL;
              t = not_null(d_11);
              {
                t = length_0(t);
                {
                  h_11 = t;
                  if(((g_11 != NULL) && (g_11 != h_11)))
                    _fail(h_11);
                  else
                    g_11 = h_11;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(c_11), not_null(g_11)));
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
    ATerm x_10 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(e_11);
      }
    else
      {
        t = x_10;
        {
          ATerm f_11 = t;
          int n_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(n_11);
            }
          else
            {
              t = f_11;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
    i_11 = t;
    y_10 :
    if(match_cons(i_11, sym__2))
      {
        j_11 = ATgetArgument(i_11, 0);
        m_11 = ATgetArgument(i_11, 1);
        z_10 :
        if(match_cons(j_11, sym__2))
          {
            k_11 = ATgetArgument(j_11, 0);
            l_11 = ATgetArgument(j_11, 1);
            if(((k_11 != NULL) && (k_11 != m_11)))
              _fail(m_11);
            else
              k_11 = m_11;
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
  ATerm y_11 = NULL;
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
  y_11 = t;
  {
    ATerm d_12 = NULL;
    ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
    t = not_null(y_11);
    {
      d_12 = t;
      {
        t = SSL_explode_term(not_null(d_12));
        {
          f_12 = t;
          u_11 :
          if(match_cons(f_12, sym__2))
            {
              g_12 = ATgetArgument(f_12, 0);
              h_12 = ATgetArgument(f_12, 1);
              v_11 :
              if(match_string(g_12, ""))
                {
                  w_11 :
                  if(((ATgetType(h_12) == AT_LIST) && ((ATermList) h_12 != ATempty)))
                    {
                      i_12 = ATgetFirst((ATermList) h_12);
                      j_12 = (ATerm) ATgetNext((ATermList) h_12);
                      x_11 :
                      if(((ATgetType(j_12) == AT_LIST) && ((ATermList) j_12 != ATempty)))
                        {
                          k_12 = ATgetFirst((ATermList) j_12);
                          l_12 = (ATerm) ATgetNext((ATermList) j_12);
                          {
                            if(((a_12 != NULL) && (a_12 != i_12)))
                              _fail(i_12);
                            else
                              a_12 = i_12;
                            {
                              if(((c_12 != NULL) && (c_12 != k_12)))
                                _fail(k_12);
                              else
                                c_12 = k_12;
                              if(((b_12 != NULL) && (b_12 != l_12)))
                                _fail(l_12);
                              else
                                b_12 = l_12;
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
    t = not_null(c_12);
  }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_69 (ATerm), ATerm h_69 (ATerm))
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_69(t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
        s_12 = t;
        r_12 :
        if(((ATgetType(s_12) == AT_LIST) && ((ATermList) s_12 != ATempty)))
          {
            t_12 = ATgetFirst((ATermList) s_12);
            u_12 = (ATerm) ATgetNext((ATermList) s_12);
            {
              ATerm x_12 = NULL;
              ATerm y_12 = NULL;
              t = not_null(u_12);
              {
                t = foldr_2(t, g_69, h_69);
                {
                  y_12 = t;
                  if(((x_12 != NULL) && (x_12 != y_12)))
                    _fail(y_12);
                  else
                    x_12 = y_12;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), not_null(x_12));
                t = h_69(t);
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
    t = term_q_11;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm d_13 = NULL,f_13 = NULL;
    ATerm r_11;
    r_11 = t;
    {
      ATerm e_13 = NULL;
      t = Fst_0(t);
      {
        e_13 = t;
        if(((d_13 != NULL) && (d_13 != e_13)))
          _fail(e_13);
        else
          d_13 = e_13;
      }
    }
    t = r_11;
    {
      ATerm g_13 = NULL;
      t = Snd_0(t);
      {
        g_13 = t;
        if(((f_13 != NULL) && (f_13 != g_13)))
          _fail(g_13);
        else
          f_13 = g_13;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(d_13), not_null(f_13));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm n_13 = NULL,w_13 = NULL,x_13 = NULL,p_16 = NULL;
  n_13 = t;
  k_13 :
  if(match_cons(n_13, sym_Call_2))
    {
      w_13 = ATgetArgument(n_13, 0);
      p_16 = ATgetArgument(n_13, 1);
      l_13 :
      if(match_cons(w_13, sym_SVar_1))
        {
          x_13 = ATgetArgument(w_13, 0);
          m_13 :
          if(((ATermList) p_16 == ATempty))
            {
              t = not_null(x_13);
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
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  v_16 = t;
  t_16 :
  if(match_cons(v_16, sym__2))
    {
      w_16 = ATgetArgument(v_16, 0);
      x_16 = ATgetArgument(v_16, 1);
      u_16 :
      if(((ATgetType(x_16) == AT_LIST) && ((ATermList) x_16 != ATempty)))
        {
          y_16 = ATgetFirst((ATermList) x_16);
          z_16 = (ATerm) ATgetNext((ATermList) x_16);
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_16), not_null(z_16));
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
  ATerm h_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  h_17 = t;
  e_17 :
  if(match_cons(h_17, sym__2))
    {
      n_17 = ATgetArgument(h_17, 0);
      o_17 = ATgetArgument(h_17, 1);
      f_17 :
      if(((ATgetType(o_17) == AT_LIST) && ((ATermList) o_17 != ATempty)))
        {
          p_17 = ATgetFirst((ATermList) o_17);
          t_17 = (ATerm) ATgetNext((ATermList) o_17);
          g_17 :
          if(match_cons(p_17, sym__2))
            {
              r_17 = ATgetArgument(p_17, 0);
              s_17 = ATgetArgument(p_17, 1);
              {
                ATerm y_17 = NULL;
                if(((n_17 != NULL) && (n_17 != r_17)))
                  _fail(r_17);
                else
                  n_17 = r_17;
                {
                  if(((y_17 != NULL) && (y_17 != s_17)))
                    _fail(s_17);
                  else
                    y_17 = s_17;
                  t = not_null(y_17);
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
ATerm SubsVar_2 (ATerm t, ATerm d_80 (ATerm), ATerm e_80 (ATerm))
{
  ATerm e_18 = NULL;
  ATerm a_19 = NULL,b_19 = NULL;
  e_18 = t;
  {
    ATerm c_19 = NULL;
    t = not_null(e_18);
    {
      ATerm d_19 = NULL;
      t = d_80(t);
      {
        c_19 = t;
        {
          if(((a_19 != NULL) && (a_19 != c_19)))
            _fail(c_19);
          else
            a_19 = c_19;
          {
            t = e_80(t);
            {
              d_19 = t;
              if(((b_19 != NULL) && (b_19 != d_19)))
                _fail(d_19);
              else
                b_19 = d_19;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_19), not_null(b_19));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm r_19 (ATerm t)
  {
    ATerm z_11 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_79(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = z_11;
        t = _all(t, r_19);
      }
    return(t);
  }
  t = r_19(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym__2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      {
        ATerm b_20 = NULL;
        if(((b_20 != NULL) && (b_20 != y_19)))
          _fail(y_19);
        else
          b_20 = y_19;
      }
    }
  else
    {
      if(match_cons(w_19, sym__3))
        {
          x_19 = ATgetArgument(w_19, 0);
          y_19 = ATgetArgument(w_19, 1);
          z_19 = ATgetArgument(w_19, 2);
          {
            ATerm h_20 = NULL;
            ATerm i_20 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_19), not_null(y_19));
            {
              t = zip_1(t, _id);
              {
                i_20 = t;
                if(((h_20 != NULL) && (h_20 != i_20)))
                  _fail(i_20);
                else
                  h_20 = i_20;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), not_null(z_19));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm f_80 (ATerm), ATerm g_80 (ATerm))
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  t = subs_args_0(t);
  {
    v_20 = t;
    u_20 :
    if(match_cons(v_20, sym__2))
      {
        w_20 = ATgetArgument(v_20, 0);
        x_20 = ATgetArgument(v_20, 1);
        {
          t = not_null(x_20);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(w_20);
                return(t);
              }
              t = SubsVar_2(t, f_80, c_1);
              t = g_80(t);
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
ATerm substitute_1 (ATerm t, ATerm h_80 (ATerm))
{
  t = substitute_2(t, h_80, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm n_56 (ATerm), ATerm o_56 (ATerm))
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  h_21 :
  if(match_cons(k_21, sym_VarDec_2))
    {
      l_21 = ATgetArgument(k_21, 0);
      m_21 = ATgetArgument(k_21, 1);
      {
        ATerm p_21 = NULL;
        t = not_null(l_21);
        {
          ATerm r_21 = NULL;
          t = n_56(t);
          {
            p_21 = t;
            {
              t = not_null(m_21);
              {
                t = o_56(t);
                {
                  r_21 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(p_21), not_null(r_21));
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
  ATerm l_22 = NULL,m_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  l_22 = t;
  j_22 :
  if(((ATgetType(l_22) == AT_LIST) && ((ATermList) l_22 != ATempty)))
    {
      m_22 = ATgetFirst((ATermList) l_22);
      z_22 = (ATerm) ATgetNext((ATermList) l_22);
      k_22 :
      if(match_cons(m_22, sym_SDef_3))
        {
          w_22 = ATgetArgument(m_22, 0);
          x_22 = ATgetArgument(m_22, 1);
          y_22 = ATgetArgument(m_22, 2);
          {
            ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,t_24 = NULL;
            ATerm m_12;
            m_12 = t;
            {
              ATerm s_23 = NULL;
              t = not_null(x_22);
              {
                ATerm y_23 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  s_23 = t;
                  {
                    if(((p_23 != NULL) && (p_23 != s_23)))
                      _fail(s_23);
                    else
                      p_23 = s_23;
                    {
                      t = not_null(p_23);
                      {
                        ATerm s_24 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
                          t_23 = t;
                          a_22 :
                          if(match_cons(t_23, sym_VarDec_2))
                            {
                              u_23 = ATgetArgument(t_23, 0);
                              v_23 = ATgetArgument(t_23, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_23)), (ATerm) ATempty);
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          y_23 = t;
                          {
                            if(((q_23 != NULL) && (q_23 != y_23)))
                              _fail(y_23);
                            else
                              q_23 = y_23;
                            {
                              t = not_null(l_22);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,e_24 = NULL;
                                  z_23 = t;
                                  g_22 :
                                  if(match_cons(z_23, sym_SDef_3))
                                    {
                                      a_24 = ATgetArgument(z_23, 0);
                                      b_24 = ATgetArgument(z_23, 1);
                                      e_24 = ATgetArgument(z_23, 2);
                                      {
                                        ATerm h_24 = NULL;
                                        ATerm r_24 = NULL;
                                        t = not_null(b_24);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
                                            n_24 = t;
                                            e_22 :
                                            if(match_cons(n_24, sym_VarDec_2))
                                              {
                                                o_24 = ATgetArgument(n_24, 0);
                                                p_24 = ATgetArgument(n_24, 1);
                                                t = not_null(o_24);
                                              }
                                            else
                                              _fail(t);
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            r_24 = t;
                                            if(((h_24 != NULL) && (h_24 != r_24)))
                                              _fail(r_24);
                                            else
                                              h_24 = r_24;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(h_24), not_null(q_23), not_null(e_24));
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
                                  s_24 = t;
                                  if(((r_23 != NULL) && (r_23 != s_24)))
                                    _fail(s_24);
                                  else
                                    r_23 = s_24;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = m_12;
            {
              ATerm u_24 = NULL;
              t = not_null(r_23);
              {
                t = choices_0(t);
                {
                  u_24 = t;
                  if(((t_24 != NULL) && (t_24 != u_24)))
                    _fail(u_24);
                  else
                    t_24 = u_24;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(w_22), not_null(p_23), not_null(t_24));
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
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  j_25 :
  if(((ATgetType(l_25) == AT_LIST) && ((ATermList) l_25 != ATempty)))
    {
      m_25 = ATgetFirst((ATermList) l_25);
      n_25 = (ATerm) ATgetNext((ATermList) l_25);
      k_25 :
      if(((ATermList) n_25 == ATempty))
        {
          t = not_null(m_25);
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
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,a_26 = NULL;
  u_25 = t;
  s_25 :
  if(match_cons(u_25, sym__2))
    {
      v_25 = ATgetArgument(u_25, 0);
      a_26 = ATgetArgument(u_25, 1);
      t_25 :
      if(match_cons(v_25, sym__2))
        {
          w_25 = ATgetArgument(v_25, 0);
          x_25 = ATgetArgument(v_25, 1);
          {
            ATerm f_26 = NULL;
            ATerm g_26 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_25), not_null(x_25));
            {
              t = Definitions_0(t);
              {
                g_26 = t;
                if(((f_26 != NULL) && (f_26 != g_26)))
                  _fail(g_26);
                else
                  f_26 = g_26;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_26), not_null(a_26));
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
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  c_30 = t;
  a_30 :
  if(match_cons(c_30, sym_ExplodeCong_2))
    {
      d_30 = ATgetArgument(c_30, 0);
      b_30 = ATgetArgument(c_30, 1);
      {
        ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
        ATerm k_30 = NULL;
        ATerm l_30 = NULL;
        t = new_0(t);
        {
          k_30 = t;
          {
            if(((g_30 != NULL) && (g_30 != k_30)))
              _fail(k_30);
            else
              g_30 = k_30;
            {
              ATerm m_30 = NULL;
              t = new_0(t);
              {
                l_30 = t;
                {
                  if(((h_30 != NULL) && (h_30 != l_30)))
                    _fail(l_30);
                  else
                    h_30 = l_30;
                  {
                    ATerm n_30 = NULL;
                    t = new_0(t);
                    {
                      m_30 = t;
                      {
                        if(((i_30 != NULL) && (i_30 != m_30)))
                          _fail(m_30);
                        else
                          i_30 = m_30;
                        {
                          t = new_0(t);
                          {
                            n_30 = t;
                            if(((j_30 != NULL) && (j_30 != n_30)))
                              _fail(n_30);
                            else
                              j_30 = n_30;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(j_30)), not_null(i_30)), not_null(h_30)), not_null(g_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_30)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(d_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_30))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_30))))), (ATerm) ATmakeAppl(sym_Prim_2, term_p_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_30))), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_30)))))));
      }
    }
  else
    {
      if(match_cons(c_30, sym_Build_1))
        {
          d_30 = ATgetArgument(c_30, 0);
          {
            ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
            ATerm t_30 = NULL;
            ATerm z_30 = NULL;
            t = new_0(t);
            {
              t_30 = t;
              {
                if(((r_30 != NULL) && (r_30 != t_30)))
                  _fail(t_30);
                else
                  r_30 = t_30;
                {
                  t = not_null(d_30);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm u_30 = NULL,x_30 = NULL,y_30 = NULL;
                      u_30 = t;
                      s_26 :
                      if(match_cons(u_30, sym_Explode_2))
                        {
                          x_30 = ATgetArgument(u_30, 0);
                          y_30 = ATgetArgument(u_30, 1);
                          {
                            if(((p_30 != NULL) && (p_30 != x_30)))
                              _fail(x_30);
                            else
                              p_30 = x_30;
                            {
                              if(((q_30 != NULL) && (q_30 != y_30)))
                                _fail(y_30);
                              else
                                q_30 = y_30;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_30));
                            }
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      z_30 = t;
                      if(((s_30 != NULL) && (s_30 != z_30)))
                        _fail(z_30);
                      else
                        s_30 = z_30;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_p_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_30)), not_null(p_30))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_30))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_30)))));
          }
        }
      else
        {
          if(match_cons(c_30, sym_Match_1))
            {
              d_30 = ATgetArgument(c_30, 0);
              {
                ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
                ATerm g_31 = NULL;
                ATerm h_31 = NULL;
                t = new_0(t);
                {
                  g_31 = t;
                  {
                    if(((d_31 != NULL) && (d_31 != g_31)))
                      _fail(g_31);
                    else
                      d_31 = g_31;
                    {
                      ATerm l_31 = NULL;
                      t = new_0(t);
                      {
                        h_31 = t;
                        {
                          if(((e_31 != NULL) && (e_31 != h_31)))
                            _fail(h_31);
                          else
                            e_31 = h_31;
                          {
                            t = not_null(d_30);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
                                i_31 = t;
                                y_29 :
                                if(match_cons(i_31, sym_Explode_2))
                                  {
                                    j_31 = ATgetArgument(i_31, 0);
                                    k_31 = ATgetArgument(i_31, 1);
                                    {
                                      if(((b_31 != NULL) && (b_31 != j_31)))
                                        _fail(j_31);
                                      else
                                        b_31 = j_31;
                                      {
                                        if(((c_31 != NULL) && (c_31 != k_31)))
                                          _fail(k_31);
                                        else
                                          c_31 = k_31;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_31));
                                      }
                                    }
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = oncetd_1(t, i_1);
                              {
                                l_31 = t;
                                if(((f_31 != NULL) && (f_31 != l_31)))
                                  _fail(l_31);
                                else
                                  f_31 = l_31;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_31)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_31))), (ATerm) ATmakeAppl(sym_Prim_2, term_q_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_31)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_31)), (ATerm) ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_31)), not_null(b_31)))))));
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
  ATerm l_32 = NULL,m_32 = NULL;
  l_32 = t;
  k_32 :
  if(match_cons(l_32, sym_Match_1))
    {
      m_32 = ATgetArgument(l_32, 0);
      {
        ATerm w_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
            ATerm r_32 = NULL;
            ATerm u_32 = NULL;
            t = new_0(t);
            {
              r_32 = t;
              {
                if(((p_32 != NULL) && (p_32 != r_32)))
                  _fail(r_32);
                else
                  p_32 = r_32;
                {
                  t = not_null(m_32);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm s_32 = NULL,t_32 = NULL;
                      s_32 = t;
                      e_32 :
                      if(match_cons(s_32, sym_RootApp_1))
                        {
                          t_32 = ATgetArgument(s_32, 0);
                          {
                            if(((o_32 != NULL) && (o_32 != t_32)))
                              _fail(t_32);
                            else
                              o_32 = t_32;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_32));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      u_32 = t;
                      if(((q_32 != NULL) && (q_32 != u_32)))
                        _fail(u_32);
                      else
                        q_32 = u_32;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_32))), not_null(o_32))));
            LocalPopChoice(z_12);
          }
        else
          {
            t = w_12;
            {
              ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
              ATerm a_33 = NULL;
              ATerm e_33 = NULL;
              t = new_0(t);
              {
                a_33 = t;
                {
                  if(((y_32 != NULL) && (y_32 != a_33)))
                    _fail(a_33);
                  else
                    y_32 = a_33;
                  {
                    t = not_null(m_32);
                    {
                      ATerm k_1 (ATerm t)
                      {
                        ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
                        b_33 = t;
                        i_32 :
                        if(match_cons(b_33, sym_App_2))
                          {
                            c_33 = ATgetArgument(b_33, 0);
                            d_33 = ATgetArgument(b_33, 1);
                            {
                              if(((x_32 != NULL) && (x_32 != c_33)))
                                _fail(c_33);
                              else
                                x_32 = c_33;
                              {
                                if(((w_32 != NULL) && (w_32 != d_33)))
                                  _fail(d_33);
                                else
                                  w_32 = d_33;
                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_32));
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = pat_td_1(t, k_1);
                      {
                        e_33 = t;
                        if(((z_32 != NULL) && (z_32 != e_33)))
                          _fail(e_33);
                        else
                          z_32 = e_33;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_32))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_32)), not_null(x_32)))));
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
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
  r_33 = t;
  p_33 :
  if(match_cons(r_33, sym_Match_1))
    {
      s_33 = ATgetArgument(r_33, 0);
      q_33 :
      if(match_cons(s_33, sym_RootApp_1))
        {
          t_33 = ATgetArgument(s_33, 0);
          t = not_null(t_33);
        }
      else
        {
          if(match_cons(s_33, sym_App_2))
            {
              t_33 = ATgetArgument(s_33, 0);
              u_33 = ATgetArgument(s_33, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(t_33), not_null(u_33));
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
  ATerm g_34 = NULL,h_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym_Match_1))
    {
      h_34 = ATgetArgument(g_34, 0);
      {
        ATerm j_34 = NULL,k_34 = NULL;
        ATerm p_34 = NULL;
        t = not_null(h_34);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm l_34 = NULL,m_34 = NULL,o_34 = NULL;
            l_34 = t;
            c_34 :
            if(match_cons(l_34, sym_RootApp_1))
              {
                m_34 = ATgetArgument(l_34, 0);
                d_34 :
                if(match_cons(m_34, sym_Match_1))
                  {
                    o_34 = ATgetArgument(m_34, 0);
                    {
                      if(((j_34 != NULL) && (j_34 != o_34)))
                        _fail(o_34);
                      else
                        j_34 = o_34;
                      t = not_null(j_34);
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
            p_34 = t;
            if(((k_34 != NULL) && (k_34 != p_34)))
              _fail(p_34);
            else
              k_34 = p_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(k_34));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL;
  e_35 = t;
  d_35 :
  if(match_cons(e_35, sym_Build_1))
    {
      f_35 = ATgetArgument(e_35, 0);
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
            ATerm k_35 = NULL;
            ATerm n_35 = NULL;
            t = new_0(t);
            {
              k_35 = t;
              {
                if(((i_35 != NULL) && (i_35 != k_35)))
                  _fail(k_35);
                else
                  i_35 = k_35;
                {
                  t = not_null(f_35);
                  {
                    ATerm m_1 (ATerm t)
                    {
                      ATerm l_35 = NULL,m_35 = NULL;
                      l_35 = t;
                      x_34 :
                      if(match_cons(l_35, sym_RootApp_1))
                        {
                          m_35 = ATgetArgument(l_35, 0);
                          {
                            if(((h_35 != NULL) && (h_35 != m_35)))
                              _fail(m_35);
                            else
                              h_35 = m_35;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_35));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, m_1);
                    {
                      n_35 = t;
                      if(((j_35 != NULL) && (j_35 != n_35)))
                        _fail(n_35);
                      else
                        j_35 = n_35;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_35))));
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
              ATerm t_35 = NULL;
              ATerm x_35 = NULL;
              t = new_0(t);
              {
                t_35 = t;
                {
                  if(((r_35 != NULL) && (r_35 != t_35)))
                    _fail(t_35);
                  else
                    r_35 = t_35;
                  {
                    t = not_null(f_35);
                    {
                      ATerm n_1 (ATerm t)
                      {
                        ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
                        u_35 = t;
                        b_35 :
                        if(match_cons(u_35, sym_App_2))
                          {
                            v_35 = ATgetArgument(u_35, 0);
                            w_35 = ATgetArgument(u_35, 1);
                            {
                              if(((p_35 != NULL) && (p_35 != v_35)))
                                _fail(v_35);
                              else
                                p_35 = v_35;
                              {
                                if(((q_35 != NULL) && (q_35 != w_35)))
                                  _fail(w_35);
                                else
                                  q_35 = w_35;
                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_35));
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = pat_td_1(t, n_1);
                      {
                        x_35 = t;
                        if(((s_35 != NULL) && (s_35 != x_35)))
                          _fail(x_35);
                        else
                          s_35 = x_35;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_35), not_null(q_35), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_35)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_35))));
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
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
  k_36 = t;
  i_36 :
  if(match_cons(k_36, sym_Build_1))
    {
      l_36 = ATgetArgument(k_36, 0);
      j_36 :
      if(match_cons(l_36, sym_RootApp_1))
        {
          m_36 = ATgetArgument(l_36, 0);
          t = not_null(m_36);
        }
      else
        {
          if(match_cons(l_36, sym_App_2))
            {
              m_36 = ATgetArgument(l_36, 0);
              n_36 = ATgetArgument(l_36, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_36)), not_null(m_36));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm e_54 (ATerm), ATerm f_54 (ATerm))
{
  ATerm b_37 = NULL,c_37 = NULL,k_37 = NULL;
  b_37 = t;
  a_37 :
  if(match_cons(b_37, sym_Explode_2))
    {
      c_37 = ATgetArgument(b_37, 0);
      k_37 = ATgetArgument(b_37, 1);
      {
        ATerm r_37 = NULL;
        t = not_null(c_37);
        {
          ATerm t_37 = NULL;
          t = e_54(t);
          {
            r_37 = t;
            {
              t = not_null(k_37);
              {
                t = f_54(t);
                {
                  t_37 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(r_37), not_null(t_37));
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
ATerm Op_2 (ATerm t, ATerm n_55 (ATerm), ATerm o_55 (ATerm))
{
  ATerm n_38 = NULL,o_38 = NULL,q_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym_Op_2))
    {
      o_38 = ATgetArgument(n_38, 0);
      q_38 = ATgetArgument(n_38, 1);
      {
        ATerm t_38 = NULL;
        t = not_null(o_38);
        {
          ATerm v_38 = NULL;
          t = n_55(t);
          {
            t_38 = t;
            {
              t = not_null(q_38);
              {
                t = o_55(t);
                {
                  v_38 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(t_38), not_null(v_38));
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
ATerm pat_td_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm c_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_57(t);
      LocalPopChoice(h_13);
    }
  else
    {
      t = c_13;
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = pat_td_1(t, y_57);
                return(t);
              }
              t = fetch_1(t, p_1);
              return(t);
            }
            t = Op_2(t, _id, o_1);
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
                  ATerm q_1 (ATerm t)
                  {
                    t = pat_td_1(t, y_57);
                    return(t);
                  }
                  t = Explode_2(t, _id, q_1);
                  LocalPopChoice(p_13);
                }
              else
                {
                  t = o_13;
                  {
                    ATerm r_1 (ATerm t)
                    {
                      t = pat_td_1(t, y_57);
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
  ATerm s_39 = NULL,t_39 = NULL;
  s_39 = t;
  r_39 :
  if(match_cons(s_39, sym_Build_1))
    {
      t_39 = ATgetArgument(s_39, 0);
      {
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_39 = NULL,a_40 = NULL;
            ATerm i_40 = NULL;
            t = not_null(t_39);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm b_40 = NULL,c_40 = NULL,h_40 = NULL;
                b_40 = t;
                i_39 :
                if(match_cons(b_40, sym_RootApp_1))
                  {
                    c_40 = ATgetArgument(b_40, 0);
                    j_39 :
                    if(match_cons(c_40, sym_Build_1))
                      {
                        h_40 = ATgetArgument(c_40, 0);
                        {
                          if(((z_39 != NULL) && (z_39 != h_40)))
                            _fail(h_40);
                          else
                            z_39 = h_40;
                          t = not_null(z_39);
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
                i_40 = t;
                if(((a_40 != NULL) && (a_40 != i_40)))
                  _fail(i_40);
                else
                  a_40 = i_40;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_40));
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
            {
              ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
              ATerm t_40 = NULL;
              t = not_null(t_39);
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL;
                  p_40 = t;
                  m_39 :
                  if(match_cons(p_40, sym_App_2))
                    {
                      q_40 = ATgetArgument(p_40, 0);
                      s_40 = ATgetArgument(p_40, 1);
                      n_39 :
                      if(match_cons(q_40, sym_Build_1))
                        {
                          r_40 = ATgetArgument(q_40, 0);
                          {
                            if(((l_40 != NULL) && (l_40 != r_40)))
                              _fail(r_40);
                            else
                              l_40 = r_40;
                            {
                              if(((k_40 != NULL) && (k_40 != s_40)))
                                _fail(s_40);
                              else
                                k_40 = s_40;
                              t = not_null(l_40);
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
                  t_40 = t;
                  if(((m_40 != NULL) && (m_40 != t_40)))
                    _fail(t_40);
                  else
                    m_40 = t_40;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_40));
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
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
  u_41 = t;
  m_41 :
  if(match_cons(u_41, sym_InfixApp_3))
    {
      v_41 = ATgetArgument(u_41, 0);
      r_41 = ATgetArgument(u_41, 1);
      q_41 = ATgetArgument(u_41, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(r_41), (ATerm) ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_41)), not_null(v_41))));
    }
  else
    {
      if(match_cons(u_41, sym_BAM_3))
        {
          v_41 = ATgetArgument(u_41, 0);
          r_41 = ATgetArgument(u_41, 1);
          q_41 = ATgetArgument(u_41, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(q_41))), not_null(v_41)), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_41))));
        }
      else
        {
          if(match_cons(u_41, sym_AM_2))
            {
              v_41 = ATgetArgument(u_41, 0);
              r_41 = ATgetArgument(u_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_41), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_41)));
            }
          else
            {
              if(match_cons(u_41, sym_MA_2))
                {
                  v_41 = ATgetArgument(u_41, 0);
                  r_41 = ATgetArgument(u_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_41)), not_null(r_41));
                }
              else
                {
                  if(match_cons(u_41, sym_BA_2))
                    {
                      v_41 = ATgetArgument(u_41, 0);
                      r_41 = ATgetArgument(u_41, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_41)), not_null(v_41));
                    }
                  else
                    {
                      if(match_cons(u_41, sym_Lets_2))
                        {
                          v_41 = ATgetArgument(u_41, 0);
                          r_41 = ATgetArgument(u_41, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_41), not_null(r_41));
                        }
                      else
                        {
                          if(match_cons(u_41, sym_LChoices_1))
                            {
                              v_41 = ATgetArgument(u_41, 0);
                              n_41 :
                              if(((ATgetType(v_41) == AT_LIST) && ((ATermList) v_41 != ATempty)))
                                {
                                  s_41 = ATgetFirst((ATermList) v_41);
                                  t_41 = (ATerm) ATgetNext((ATermList) v_41);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_41), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(t_41)));
                                }
                              else
                                {
                                  if(((ATermList) v_41 == ATempty))
                                    {
                                      t = term_q_11;
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(u_41, sym_Choices_1))
                                {
                                  v_41 = ATgetArgument(u_41, 0);
                                  o_41 :
                                  if(((ATgetType(v_41) == AT_LIST) && ((ATermList) v_41 != ATempty)))
                                    {
                                      s_41 = ATgetFirst((ATermList) v_41);
                                      t_41 = (ATerm) ATgetNext((ATermList) v_41);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_41), (ATerm) ATmakeAppl(sym_Choices_1, not_null(t_41)));
                                    }
                                  else
                                    {
                                      if(((ATermList) v_41 == ATempty))
                                        {
                                          t = term_q_11;
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(u_41, sym_Seqs_1))
                                    {
                                      v_41 = ATgetArgument(u_41, 0);
                                      p_41 :
                                      if(((ATgetType(v_41) == AT_LIST) && ((ATermList) v_41 != ATempty)))
                                        {
                                          s_41 = ATgetFirst((ATermList) v_41);
                                          t_41 = (ATerm) ATgetNext((ATermList) v_41);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_41), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_41)));
                                        }
                                      else
                                        {
                                          if(((ATermList) v_41 == ATempty))
                                            {
                                              t = term_s_13;
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
ATerm repeat_2 (ATerm t, ATerm e_64 (ATerm), ATerm f_64 (ATerm))
{
  ATerm h_43 (ATerm t)
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_64(t);
        t = h_43(t);
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        t = f_64(t);
      }
    return(t);
  }
  t = h_43(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm h_64 (ATerm))
{
  t = repeat_2(t, h_64, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm j_43 = NULL;
  j_43 = t;
  i_43 :
  if(!(match_cons(j_43, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm v_13 = t;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, u_1);
      PopChoice();
      _fail(t);
    }
  else
    t = v_13;
  return(t);
}
ATerm App_2 (ATerm t, ATerm y_53 (ATerm), ATerm z_53 (ATerm))
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
  a_44 = t;
  z_43 :
  if(match_cons(a_44, sym_App_2))
    {
      b_44 = ATgetArgument(a_44, 0);
      c_44 = ATgetArgument(a_44, 1);
      {
        ATerm g_44 = NULL;
        t = not_null(b_44);
        {
          ATerm i_44 = NULL;
          t = y_53(t);
          {
            g_44 = t;
            {
              t = not_null(c_44);
              {
                t = z_53(t);
                {
                  i_44 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(g_44), not_null(i_44));
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
ATerm Con_3 (ATerm t, ATerm v_53 (ATerm), ATerm w_53 (ATerm), ATerm x_53 (ATerm))
{
  ATerm d_45 = NULL,e_45 = NULL,i_45 = NULL,j_45 = NULL;
  d_45 = t;
  c_45 :
  if(match_cons(d_45, sym_Con_3))
    {
      e_45 = ATgetArgument(d_45, 0);
      i_45 = ATgetArgument(d_45, 1);
      j_45 = ATgetArgument(d_45, 2);
      {
        ATerm n_45 = NULL;
        t = not_null(e_45);
        {
          ATerm p_45 = NULL;
          t = v_53(t);
          {
            n_45 = t;
            {
              t = not_null(i_45);
              {
                ATerm r_45 = NULL;
                t = w_53(t);
                {
                  p_45 = t;
                  {
                    t = not_null(j_45);
                    {
                      t = x_53(t);
                      {
                        r_45 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(n_45), not_null(p_45), not_null(r_45));
                      }
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
  ATerm a_14 = t;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, v_1);
      PopChoice();
      _fail(t);
    }
  else
    t = a_14;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
  b_46 = t;
  z_45 :
  if(match_cons(b_46, sym_SRule_1))
    {
      c_46 = ATgetArgument(b_46, 0);
      a_46 :
      if(match_cons(c_46, sym_StratRule_3))
        {
          d_46 = ATgetArgument(c_46, 0);
          e_46 = ATgetArgument(c_46, 1);
          f_46 = ATgetArgument(c_46, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_46)), (ATerm) ATmakeAppl(sym_Where_1, not_null(f_46))), not_null(d_46)));
        }
      else
        {
          if(match_cons(c_46, sym_Rule_3))
            {
              d_46 = ATgetArgument(c_46, 0);
              e_46 = ATgetArgument(c_46, 1);
              f_46 = ATgetArgument(c_46, 2);
              {
                t = not_null(d_46);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(e_46);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(e_46))), (ATerm) ATmakeAppl(sym_Where_1, not_null(f_46))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_46))));
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
ATerm Scope_2 (ATerm t, ATerm k_57 (ATerm), ATerm l_57 (ATerm))
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
  s_46 = t;
  r_46 :
  if(match_cons(s_46, sym_Scope_2))
    {
      t_46 = ATgetArgument(s_46, 0);
      u_46 = ATgetArgument(s_46, 1);
      {
        ATerm x_46 = NULL;
        t = not_null(t_46);
        {
          ATerm b_47 = NULL;
          t = k_57(t);
          {
            x_46 = t;
            {
              t = not_null(u_46);
              {
                t = l_57(t);
                {
                  b_47 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_46), not_null(b_47));
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
ATerm oncetd_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm g_47 (ATerm t)
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_78(t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = _one(t, g_47);
      }
    return(t);
  }
  t = g_47(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
  v_47 = t;
  t_47 :
  if(match_cons(v_47, sym_SRule_1))
    {
      w_47 = ATgetArgument(v_47, 0);
      u_47 :
      if(match_cons(w_47, sym_Rule_3))
        {
          x_47 = ATgetArgument(w_47, 0);
          y_47 = ATgetArgument(w_47, 1);
          z_47 = ATgetArgument(w_47, 2);
          {
            ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
            ATerm l_48 = NULL;
            ATerm r_48 = NULL;
            t = new_0(t);
            {
              l_48 = t;
              {
                if(((i_48 != NULL) && (i_48 != l_48)))
                  _fail(l_48);
                else
                  i_48 = l_48;
                {
                  t = not_null(x_47);
                  {
                    ATerm z_48 = NULL;
                    ATerm w_1 (ATerm t)
                    {
                      ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
                      m_48 = t;
                      k_47 :
                      if(match_cons(m_48, sym_Con_3))
                        {
                          n_48 = ATgetArgument(m_48, 0);
                          p_48 = ATgetArgument(m_48, 1);
                          q_48 = ATgetArgument(m_48, 2);
                          l_47 :
                          if(match_cons(n_48, sym_Var_1))
                            {
                              o_48 = ATgetArgument(n_48, 0);
                              {
                                if(((h_48 != NULL) && (h_48 != o_48)))
                                  _fail(o_48);
                                else
                                  h_48 = o_48;
                                {
                                  if(((f_48 != NULL) && (f_48 != p_48)))
                                    _fail(p_48);
                                  else
                                    f_48 = p_48;
                                  {
                                    if(((d_48 != NULL) && (d_48 != q_48)))
                                      _fail(q_48);
                                    else
                                      d_48 = q_48;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_48));
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
                      r_48 = t;
                      {
                        if(((j_48 != NULL) && (j_48 != r_48)))
                          _fail(r_48);
                        else
                          j_48 = r_48;
                        {
                          t = not_null(y_47);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
                              s_48 = t;
                              o_47 :
                              if(match_cons(s_48, sym_Con_3))
                                {
                                  t_48 = ATgetArgument(s_48, 0);
                                  v_48 = ATgetArgument(s_48, 1);
                                  w_48 = ATgetArgument(s_48, 2);
                                  p_47 :
                                  if(match_cons(t_48, sym_Var_1))
                                    {
                                      u_48 = ATgetArgument(t_48, 0);
                                      q_47 :
                                      if(match_cons(w_48, sym_Call_2))
                                        {
                                          x_48 = ATgetArgument(w_48, 0);
                                          y_48 = ATgetArgument(w_48, 1);
                                          r_47 :
                                          if(((ATermList) y_48 == ATempty))
                                            {
                                              {
                                                if(((h_48 != NULL) && (h_48 != u_48)))
                                                  _fail(u_48);
                                                else
                                                  h_48 = u_48;
                                                {
                                                  if(((g_48 != NULL) && (g_48 != v_48)))
                                                    _fail(v_48);
                                                  else
                                                    g_48 = v_48;
                                                  {
                                                    if(((e_48 != NULL) && (e_48 != x_48)))
                                                      _fail(x_48);
                                                    else
                                                      e_48 = x_48;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_48));
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
                              z_48 = t;
                              if(((k_48 != NULL) && (k_48 != z_48)))
                                _fail(z_48);
                              else
                                k_48 = z_48;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_48)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_48), not_null(k_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_47), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(e_48), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_48), not_null(g_48), term_s_13)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_48)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_48)))))));
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
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        {
          ATerm h_14 = t;
          int i_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(i_14);
            }
          else
            {
              t = h_14;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, y_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm x_76 (ATerm))
{
  ATerm h_49 (ATerm t)
  {
    t = x_76(t);
    t = _all(t, h_49);
    return(t);
  }
  t = h_49(t);
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
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HL_0(t);
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            {
              ATerm l_14 = t;
              int m_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_14 = t;
                  int o_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Bapp0_0(t);
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
                            t = Bapp1_0(t);
                            LocalPopChoice(q_14);
                          }
                        else
                          {
                            t = p_14;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  LocalPopChoice(m_14);
                }
              else
                {
                  t = l_14;
                  {
                    ATerm r_14 = t;
                    int s_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_14 = t;
                        int u_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Mapp0_0(t);
                            LocalPopChoice(u_14);
                          }
                        else
                          {
                            t = t_14;
                            {
                              ATerm v_14 = t;
                              int w_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Mapp1_0(t);
                                  LocalPopChoice(w_14);
                                }
                              else
                                {
                                  t = v_14;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        LocalPopChoice(s_14);
                      }
                    else
                      {
                        t = r_14;
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
  ATerm j_49 = NULL;
  j_49 = t;
  i_49 :
  if(!(match_cons(j_49, sym__0)))
    _fail(t);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm r_49 = NULL;
  ATerm t_49 = NULL,u_49 = NULL,c_50 = NULL;
  r_49 = t;
  {
    ATerm x_14;
    x_14 = t;
    {
      ATerm v_49 = NULL;
      ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
      t = not_null(r_49);
      {
        v_49 = t;
        {
          t = SSL_explode_term(not_null(v_49));
          {
            x_49 = t;
            n_49 :
            if(match_cons(x_49, sym__2))
              {
                y_49 = ATgetArgument(x_49, 0);
                z_49 = ATgetArgument(x_49, 1);
                o_49 :
                if(match_string(y_49, ""))
                  {
                    p_49 :
                    if(((ATgetType(z_49) == AT_LIST) && ((ATermList) z_49 != ATempty)))
                      {
                        a_50 = ATgetFirst((ATermList) z_49);
                        b_50 = (ATerm) ATgetNext((ATermList) z_49);
                        {
                          if(((t_49 != NULL) && (t_49 != a_50)))
                            _fail(a_50);
                          else
                            t_49 = a_50;
                          if(((u_49 != NULL) && (u_49 != b_50)))
                            _fail(b_50);
                          else
                            u_49 = b_50;
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
    t = x_14;
    {
      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(u_49));
      {
        c_50 = t;
        t = not_null(c_50);
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm o_50 = NULL;
  ATerm q_50 = NULL,r_50 = NULL;
  o_50 = t;
  {
    ATerm s_50 = NULL;
    ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
    t = not_null(o_50);
    {
      s_50 = t;
      {
        t = SSL_explode_term(not_null(s_50));
        {
          u_50 = t;
          l_50 :
          if(match_cons(u_50, sym__2))
            {
              v_50 = ATgetArgument(u_50, 0);
              w_50 = ATgetArgument(u_50, 1);
              m_50 :
              if(match_string(v_50, ""))
                {
                  n_50 :
                  if(((ATgetType(w_50) == AT_LIST) && ((ATermList) w_50 != ATempty)))
                    {
                      x_50 = ATgetFirst((ATermList) w_50);
                      y_50 = (ATerm) ATgetNext((ATermList) w_50);
                      {
                        if(((r_50 != NULL) && (r_50 != x_50)))
                          _fail(x_50);
                        else
                          r_50 = x_50;
                        if(((q_50 != NULL) && (q_50 != y_50)))
                          _fail(y_50);
                        else
                          q_50 = y_50;
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
    t = not_null(r_50);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm k_51 = NULL,m_51 = NULL;
  ATerm o_51 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_51 = NULL,i_51 = NULL;
        ATerm a_15;
        a_15 = t;
        {
          ATerm h_51 = NULL;
          t = map_1(t, Thd_0);
          {
            t = g_76(t);
            {
              h_51 = t;
              if(((g_51 != NULL) && (g_51 != h_51)))
                _fail(h_51);
              else
                g_51 = h_51;
            }
          }
        }
        t = a_15;
        {
          ATerm j_51 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = o_51(t);
            {
              j_51 = t;
              if(((i_51 != NULL) && (i_51 != j_51)))
                _fail(j_51);
              else
                i_51 = j_51;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(i_51)), not_null(g_51));
        }
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = o_51(t);
  {
    ATerm b_15;
    b_15 = t;
    {
      ATerm l_51 = NULL;
      l_51 = t;
      if(((k_51 != NULL) && (k_51 != l_51)))
        _fail(l_51);
      else
        k_51 = l_51;
    }
    t = b_15;
    {
      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(k_51));
      {
        m_51 = t;
        t = not_null(m_51);
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm x_51 = NULL;
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL;
  x_51 = t;
  {
    ATerm c_52 = NULL;
    ATerm d_52 = NULL;
    t = new_0(t);
    {
      c_52 = t;
      {
        if(((z_51 != NULL) && (z_51 != c_52)))
          _fail(c_52);
        else
          z_51 = c_52;
        {
          ATerm e_52 = NULL;
          t = new_0(t);
          {
            d_52 = t;
            {
              if(((a_52 != NULL) && (a_52 != d_52)))
                _fail(d_52);
              else
                a_52 = d_52;
              {
                t = new_0(t);
                {
                  e_52 = t;
                  if(((b_52 != NULL) && (b_52 != e_52)))
                    _fail(e_52);
                  else
                    b_52 = e_52;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_51)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_52)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_52))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(z_51), term_g_15), not_null(a_52), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_52)), not_null(b_52), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_52)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
  l_52 = t;
  k_52 :
  if(match_cons(l_52, sym__2))
    {
      m_52 = ATgetArgument(l_52, 0);
      n_52 = ATgetArgument(l_52, 1);
      {
        ATerm h_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(m_52), not_null(n_52));
            LocalPopChoice(i_15);
          }
        else
          {
            t = h_15;
            t = SSL_subtr(not_null(m_52), not_null(n_52));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
  v_52 = t;
  u_52 :
  if(match_cons(v_52, sym__2))
    {
      w_52 = ATgetArgument(v_52, 0);
      x_52 = ATgetArgument(v_52, 1);
      {
        ATerm j_15;
        j_15 = t;
        {
          ATerm k_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_52), not_null(x_52));
              LocalPopChoice(l_15);
            }
          else
            {
              t = k_15;
              t = SSL_gtr(not_null(w_52), not_null(x_52));
            }
        }
        t = j_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm d_53 = NULL;
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
      e_53 = t;
      c_53 :
      if(match_cons(e_53, sym__2))
        {
          f_53 = ATgetArgument(e_53, 0);
          g_53 = ATgetArgument(e_53, 1);
          {
            if(((d_53 != NULL) && (d_53 != f_53)))
              _fail(f_53);
            else
              d_53 = f_53;
            if(((d_53 != NULL) && (d_53 != g_53)))
              _fail(g_53);
            else
              d_53 = g_53;
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm v_69 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL;
    r_53 = t;
    j_53 :
    if(match_cons(r_53, sym__2))
      {
        s_53 = ATgetArgument(r_53, 0);
        t_53 = ATgetArgument(r_53, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_53), not_null(t_53), (ATerm) ATempty);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,g_54 = NULL;
    b_54 = t;
    l_53 :
    if(match_cons(b_54, sym__3))
      {
        c_54 = ATgetArgument(b_54, 0);
        d_54 = ATgetArgument(b_54, 1);
        g_54 = ATgetArgument(b_54, 2);
        m_53 :
        if(match_int(c_54, 0))
          t = not_null(g_54);
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
    j_54 = t;
    q_53 :
    if(match_cons(j_54, sym__3))
      {
        k_54 = ATgetArgument(j_54, 0);
        l_54 = ATgetArgument(j_54, 1);
        m_54 = ATgetArgument(j_54, 2);
        {
          ATerm q_54 = NULL,s_54 = NULL;
          ATerm o_15;
          o_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_54), term_f_9);
            t = geq_0(t);
          }
          t = o_15;
          {
            ATerm p_15;
            p_15 = t;
            {
              ATerm r_54 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_54), term_f_9);
              {
                t = subt_0(t);
                {
                  r_54 = t;
                  if(((q_54 != NULL) && (q_54 != r_54)))
                    _fail(r_54);
                  else
                    q_54 = r_54;
                }
              }
            }
            t = p_15;
            {
              ATerm t_54 = NULL;
              t = not_null(l_54);
              {
                t = v_69(t);
                {
                  t_54 = t;
                  if(((s_54 != NULL) && (s_54 != t_54)))
                    _fail(t_54);
                  else
                    s_54 = t_54;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(q_54), not_null(l_54), (ATerm) ATinsert(CheckATermList(not_null(m_54)), not_null(s_54)));
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
  ATerm e_55 = NULL,f_55 = NULL,h_55 = NULL;
  e_55 = t;
  d_55 :
  if(match_cons(e_55, sym__2))
    {
      f_55 = ATgetArgument(e_55, 0);
      h_55 = ATgetArgument(e_55, 1);
      {
        ATerm l_55 = NULL,m_55 = NULL,p_55 = NULL;
        ATerm q_55 = NULL;
        ATerm r_55 = NULL;
        t = new_0(t);
        {
          q_55 = t;
          {
            if(((l_55 != NULL) && (l_55 != q_55)))
              _fail(q_55);
            else
              l_55 = q_55;
            {
              ATerm s_55 = NULL;
              t = new_0(t);
              {
                r_55 = t;
                {
                  if(((m_55 != NULL) && (m_55 != r_55)))
                    _fail(r_55);
                  else
                    m_55 = r_55;
                  {
                    t = new_0(t);
                    {
                      s_55 = t;
                      if(((p_55 != NULL) && (p_55 != s_55)))
                        _fail(s_55);
                      else
                        p_55 = s_55;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_55)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_55))), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_55)))), (ATerm) ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_55))), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_55))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(l_55), term_g_15), not_null(m_55), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_55)), not_null(p_55), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_55)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL;
  a_56 = t;
  y_55 :
  if(match_cons(a_56, sym__2))
    {
      b_56 = ATgetArgument(a_56, 0);
      c_56 = ATgetArgument(a_56, 1);
      z_55 :
      if(((ATermList) c_56 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm l_74 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, l_74);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  p_56 = t;
  f_56 :
  if(((ATgetType(p_56) == AT_LIST) && ((ATermList) p_56 != ATempty)))
    {
      q_56 = ATgetFirst((ATermList) p_56);
      r_56 = (ATerm) ATgetNext((ATermList) p_56);
      t = not_null(r_56);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
  y_56 = t;
  w_56 :
  if(((ATgetType(y_56) == AT_LIST) && ((ATermList) y_56 != ATempty)))
    {
      z_56 = ATgetFirst((ATermList) y_56);
      a_57 = (ATerm) ATgetNext((ATermList) y_56);
      x_56 :
      if(((ATermList) a_57 == ATempty))
        {
          t = not_null(z_56);
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
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL;
  ATerm q_60 (ATerm t)
  {
    ATerm k_58 = NULL,l_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,y_58 = NULL,m_59 = NULL;
    ATerm s_15;
    s_15 = t;
    {
      ATerm z_58 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL;
      ATerm a_59 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_58), term_f_9);
      {
        t = add_0(t);
        {
          a_59 = t;
          if(((z_58 != NULL) && (z_58 != a_59)))
            _fail(a_59);
          else
            z_58 = a_59;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_58), term_t_15);
        {
          t = copy_1(t, new_0);
          {
            b_59 = t;
            o_57 :
            if(((ATgetType(b_59) == AT_LIST) && ((ATermList) b_59 != ATempty)))
              {
                c_59 = ATgetFirst((ATermList) b_59);
                d_59 = (ATerm) ATgetNext((ATermList) b_59);
                {
                  ATerm e_59 = NULL;
                  if(((l_58 != NULL) && (l_58 != c_59)))
                    _fail(c_59);
                  else
                    l_58 = c_59;
                  {
                    if(((p_58 != NULL) && (p_58 != d_59)))
                      _fail(d_59);
                    else
                      p_58 = d_59;
                    {
                      t = not_null(p_58);
                      {
                        ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL;
                        t = last_0(t);
                        {
                          e_59 = t;
                          {
                            if(((k_58 != NULL) && (k_58 != e_59)))
                              _fail(e_59);
                            else
                              k_58 = e_59;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_58)), not_null(l_58)), not_null(p_58));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    f_59 = t;
                                    n_57 :
                                    if(match_cons(f_59, sym__6))
                                      {
                                        g_59 = ATgetArgument(f_59, 0);
                                        h_59 = ATgetArgument(f_59, 1);
                                        i_59 = ATgetArgument(f_59, 2);
                                        j_59 = ATgetArgument(f_59, 3);
                                        k_59 = ATgetArgument(f_59, 4);
                                        l_59 = ATgetArgument(f_59, 5);
                                        {
                                          if(((q_58 != NULL) && (q_58 != g_59)))
                                            _fail(g_59);
                                          else
                                            q_58 = g_59;
                                          {
                                            if(((r_58 != NULL) && (r_58 != h_59)))
                                              _fail(h_59);
                                            else
                                              r_58 = h_59;
                                            {
                                              if(((s_58 != NULL) && (s_58 != i_59)))
                                                _fail(i_59);
                                              else
                                                s_58 = i_59;
                                              {
                                                if(((t_58 != NULL) && (t_58 != j_59)))
                                                  _fail(j_59);
                                                else
                                                  t_58 = j_59;
                                                {
                                                  if(((u_58 != NULL) && (u_58 != k_59)))
                                                    _fail(k_59);
                                                  else
                                                    u_58 = k_59;
                                                  if(((y_58 != NULL) && (y_58 != l_59)))
                                                    _fail(l_59);
                                                  else
                                                    y_58 = l_59;
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
    t = s_15;
    {
      ATerm n_59 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_58)), not_null(s_58)), not_null(p_58));
      {
        t = concat_0(t);
        {
          n_59 = t;
          if(((m_59 != NULL) && (m_59 != n_59)))
            _fail(n_59);
          else
            m_59 = n_59;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(d_58), term_u_15), not_null(r_58), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(m_59)), not_null(l_58)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_58))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_58), not_null(t_58)))), (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_58))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_58), not_null(y_58)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(q_58))))));
    }
    return(t);
  }
  ATerm r_60 (ATerm t)
  {
    ATerm p_59 = NULL;
    ATerm q_59 = NULL;
    t = new_0(t);
    {
      q_59 = t;
      if(((p_59 != NULL) && (p_59 != q_59)))
        _fail(q_59);
      else
        p_59 = q_59;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(d_58), term_u_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_59)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_58), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_58), (ATerm) ATempty))), term_s_13))));
    return(t);
  }
  ATerm s_60 (ATerm t)
  {
    ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,o_60 = NULL;
    ATerm v_15;
    v_15 = t;
    {
      ATerm a_60 = NULL;
      ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,m_60 = NULL,n_60 = NULL;
      t = new_0(t);
      {
        a_60 = t;
        {
          if(((t_59 != NULL) && (t_59 != a_60)))
            _fail(a_60);
          else
            t_59 = a_60;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_58), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_59)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  b_60 = t;
                  v_57 :
                  if(match_cons(b_60, sym__6))
                    {
                      c_60 = ATgetArgument(b_60, 0);
                      d_60 = ATgetArgument(b_60, 1);
                      e_60 = ATgetArgument(b_60, 2);
                      f_60 = ATgetArgument(b_60, 3);
                      m_60 = ATgetArgument(b_60, 4);
                      n_60 = ATgetArgument(b_60, 5);
                      {
                        if(((u_59 != NULL) && (u_59 != c_60)))
                          _fail(c_60);
                        else
                          u_59 = c_60;
                        {
                          if(((v_59 != NULL) && (v_59 != d_60)))
                            _fail(d_60);
                          else
                            v_59 = d_60;
                          {
                            if(((w_59 != NULL) && (w_59 != e_60)))
                              _fail(e_60);
                            else
                              w_59 = e_60;
                            {
                              if(((x_59 != NULL) && (x_59 != f_60)))
                                _fail(f_60);
                              else
                                x_59 = f_60;
                              {
                                if(((y_59 != NULL) && (y_59 != m_60)))
                                  _fail(m_60);
                                else
                                  y_59 = m_60;
                                if(((z_59 != NULL) && (z_59 != n_60)))
                                  _fail(n_60);
                                else
                                  z_59 = n_60;
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
    t = v_15;
    {
      ATerm p_60 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_59), not_null(y_59));
      {
        t = conc_0(t);
        {
          p_60 = t;
          if(((o_60 != NULL) && (o_60 != p_60)))
            _fail(p_60);
          else
            o_60 = p_60;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(d_58), term_w_15), not_null(v_59), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(o_60)), not_null(t_59)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_58), not_null(x_59)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(d_58), not_null(z_59)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_59))))));
    }
    return(t);
  }
  c_58 = t;
  x_57 :
  if(match_cons(c_58, sym__3))
    {
      d_58 = ATgetArgument(c_58, 0);
      e_58 = ATgetArgument(c_58, 1);
      f_58 = ATgetArgument(c_58, 2);
      a_58 :
      if(match_string(e_58, "T"))
        {
          b_58 :
          if(match_int(f_58, 0))
            {
              ATerm x_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_60(t);
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = x_15;
                  t = r_60(t);
                }
            }
          else
            t = q_60(t);
        }
      else
        {
          if(match_string(e_58, "D"))
            t = s_60(t);
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
  ATerm j_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  j_61 = t;
  e_61 :
  if(match_cons(j_61, sym__2))
    {
      m_61 = ATgetArgument(j_61, 0);
      u_61 = ATgetArgument(j_61, 1);
      g_61 :
      if(match_cons(m_61, sym__2))
        {
          n_61 = ATgetArgument(m_61, 0);
          t_61 = ATgetArgument(m_61, 1);
          i_61 :
          if(match_cons(n_61, sym_Mod_2))
            {
              o_61 = ATgetArgument(n_61, 0);
              s_61 = ATgetArgument(n_61, 1);
              {
                ATerm z_61 = NULL;
                ATerm c_62 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_61), not_null(s_61), not_null(t_61));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      c_62 = t;
                      if(((z_61 != NULL) && (z_61 != c_62)))
                        _fail(c_62);
                      else
                        z_61 = c_62;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_61), not_null(u_61));
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
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL;
  i_62 = t;
  g_62 :
  if(match_cons(i_62, sym__5))
    {
      j_62 = ATgetArgument(i_62, 0);
      m_62 = ATgetArgument(i_62, 1);
      n_62 = ATgetArgument(i_62, 2);
      o_62 = ATgetArgument(i_62, 3);
      p_62 = ATgetArgument(i_62, 4);
      h_62 :
      if(((ATgetType(j_62) == AT_LIST) && ((ATermList) j_62 != ATempty)))
        {
          k_62 = ATgetFirst((ATermList) j_62);
          l_62 = (ATerm) ATgetNext((ATermList) j_62);
          t = (ATerm) ATmakeAppl(sym__5, not_null(l_62), not_null(m_62), not_null(n_62), not_null(o_62), (ATerm) ATinsert(CheckATermList(not_null(p_62)), not_null(k_62)));
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
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL;
  z_62 = t;
  y_62 :
  if(match_cons(z_62, sym__2))
    {
      a_63 = ATgetArgument(z_62, 0);
      b_63 = ATgetArgument(z_62, 1);
      {
        t = not_null(a_63);
        {
          ATerm e_2 (ATerm t)
          {
            t = not_null(b_63);
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
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL;
  i_63 = t;
  g_63 :
  if(match_cons(i_63, sym__2))
    {
      j_63 = ATgetArgument(i_63, 0);
      k_63 = ATgetArgument(i_63, 1);
      h_63 :
      if(((ATgetType(k_63) == AT_LIST) && ((ATermList) k_63 != ATempty)))
        {
          l_63 = ATgetFirst((ATermList) k_63);
          m_63 = (ATerm) ATgetNext((ATermList) k_63);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_63)), not_null(l_63)), not_null(m_63));
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
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL;
  t_63 = t;
  s_63 :
  if(match_cons(t_63, sym__2))
    {
      u_63 = ATgetArgument(t_63, 0);
      v_63 = ATgetArgument(t_63, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_63)), not_null(u_63));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm d_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL;
  d_64 = t;
  a_64 :
  if(match_cons(d_64, sym__2))
    {
      i_64 = ATgetArgument(d_64, 0);
      l_64 = ATgetArgument(d_64, 1);
      b_64 :
      if(((ATgetType(i_64) == AT_LIST) && ((ATermList) i_64 != ATempty)))
        {
          j_64 = ATgetFirst((ATermList) i_64);
          k_64 = (ATerm) ATgetNext((ATermList) i_64);
          c_64 :
          if(((ATgetType(l_64) == AT_LIST) && ((ATermList) l_64 != ATempty)))
            {
              m_64 = ATgetFirst((ATermList) l_64);
              n_64 = (ATerm) ATgetNext((ATermList) l_64);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_64), not_null(m_64)), (ATerm) ATmakeAppl(sym__2, not_null(k_64), not_null(n_64)));
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
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
  d_65 = t;
  u_64 :
  if(match_cons(d_65, sym__2))
    {
      e_65 = ATgetArgument(d_65, 0);
      f_65 = ATgetArgument(d_65, 1);
      b_65 :
      if(((ATermList) e_65 == ATempty))
        {
          c_65 :
          if(((ATermList) f_65 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm g_74 (ATerm))
{
  ATerm h_65 (ATerm t)
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_74(t);
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        {
          t = e_74(t);
          {
            t = _2(t, g_74, h_65);
            t = f_74(t);
          }
        }
      }
    return(t);
  }
  t = h_65(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm i_74 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, i_74);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
  s_65 = t;
  q_65 :
  if(((ATgetType(s_65) == AT_LIST) && ((ATermList) s_65 != ATempty)))
    {
      t_65 = ATgetFirst((ATermList) s_65);
      w_65 = (ATerm) ATgetNext((ATermList) s_65);
      r_65 :
      if(match_cons(t_65, sym__2))
        {
          u_65 = ATgetArgument(t_65, 0);
          v_65 = ATgetArgument(t_65, 1);
          {
            ATerm a_66 = NULL,b_66 = NULL,h_66 = NULL,n_66 = NULL;
            ATerm d_16;
            d_16 = t;
            {
              ATerm c_66 = NULL;
              ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
              t = not_null(v_65);
              {
                c_66 = t;
                {
                  t = SSL_explode_term(not_null(c_66));
                  {
                    e_66 = t;
                    l_65 :
                    if(match_cons(e_66, sym__2))
                      {
                        f_66 = ATgetArgument(e_66, 0);
                        g_66 = ATgetArgument(e_66, 1);
                        {
                          if(((a_66 != NULL) && (a_66 != f_66)))
                            _fail(f_66);
                          else
                            a_66 = f_66;
                          if(((b_66 != NULL) && (b_66 != g_66)))
                            _fail(g_66);
                          else
                            b_66 = g_66;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = d_16;
            {
              ATerm e_16;
              e_16 = t;
              {
                ATerm i_66 = NULL;
                ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
                t = not_null(u_65);
                {
                  i_66 = t;
                  {
                    t = SSL_explode_term(not_null(i_66));
                    {
                      k_66 = t;
                      o_65 :
                      if(match_cons(k_66, sym__2))
                        {
                          l_66 = ATgetArgument(k_66, 0);
                          m_66 = ATgetArgument(k_66, 1);
                          {
                            if(((a_66 != NULL) && (a_66 != l_66)))
                              _fail(l_66);
                            else
                              a_66 = l_66;
                            if(((h_66 != NULL) && (h_66 != m_66)))
                              _fail(m_66);
                            else
                              h_66 = m_66;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = e_16;
              {
                ATerm o_66 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_66), not_null(b_66));
                {
                  t = zip_1(t, _id);
                  {
                    o_66 = t;
                    if(((n_66 != NULL) && (n_66 != o_66)))
                      _fail(o_66);
                    else
                      n_66 = o_66;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_66), not_null(w_65));
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
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL;
  d_67 = t;
  b_67 :
  if(((ATgetType(d_67) == AT_LIST) && ((ATermList) d_67 != ATempty)))
    {
      e_67 = ATgetFirst((ATermList) d_67);
      h_67 = (ATerm) ATgetNext((ATermList) d_67);
      c_67 :
      if(match_cons(e_67, sym__2))
        {
          f_67 = ATgetArgument(e_67, 0);
          g_67 = ATgetArgument(e_67, 1);
          {
            ATerm j_67 = NULL;
            if(((f_67 != NULL) && (f_67 != g_67)))
              _fail(g_67);
            else
              f_67 = g_67;
            {
              if(((j_67 != NULL) && (j_67 != h_67)))
                _fail(h_67);
              else
                j_67 = h_67;
              t = not_null(j_67);
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
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
      o_67 = t;
      m_67 :
      if(match_cons(o_67, sym__2))
        {
          p_67 = ATgetArgument(o_67, 0);
          q_67 = ATgetArgument(o_67, 1);
          {
            t = not_null(p_67);
            {
              ATerm w_67 (ATerm t)
              {
                ATerm h_16 = t;
                int i_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(i_16);
                  }
                else
                  {
                    t = h_16;
                    {
                      ATerm j_16 = t;
                      int k_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_2 (ATerm t)
                          {
                            t = not_null(q_67);
                            return(t);
                          }
                          t = HdMember_1(t, f_2);
                          t = w_67(t);
                          LocalPopChoice(k_16);
                        }
                      else
                        {
                          t = j_16;
                          t = Cons_2(t, _id, w_67);
                        }
                    }
                  }
                return(t);
              }
              t = w_67(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm t_67 = NULL;
          t_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(t_67));
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          ATerm l_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 (ATerm t)
              {
                ATerm n_16 = t;
                int o_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(o_16);
                  }
                else
                  {
                    t = n_16;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, j_2);
              LocalPopChoice(m_16);
            }
          else
            {
              t = l_16;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, g_2, h_2, i_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm m_58 (ATerm), ATerm n_58 (ATerm), ATerm o_58 (ATerm))
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL;
  i_68 = t;
  g_68 :
  if(match_cons(i_68, sym__5))
    {
      j_68 = ATgetArgument(i_68, 0);
      m_68 = ATgetArgument(i_68, 1);
      n_68 = ATgetArgument(i_68, 2);
      o_68 = ATgetArgument(i_68, 3);
      p_68 = ATgetArgument(i_68, 4);
      h_68 :
      if(((ATgetType(j_68) == AT_LIST) && ((ATermList) j_68 != ATempty)))
        {
          k_68 = ATgetFirst((ATermList) j_68);
          l_68 = (ATerm) ATgetNext((ATermList) j_68);
          {
            ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,f_69 = NULL,m_69 = NULL,o_69 = NULL;
            ATerm q_16;
            q_16 = t;
            {
              ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_68), not_null(n_68));
              {
                t = m_58(t);
                {
                  a_69 = t;
                  c_68 :
                  if(match_cons(a_69, sym__2))
                    {
                      b_69 = ATgetArgument(a_69, 0);
                      c_69 = ATgetArgument(a_69, 1);
                      {
                        ATerm d_69 = NULL;
                        if(((x_68 != NULL) && (x_68 != b_69)))
                          _fail(b_69);
                        else
                          x_68 = b_69;
                        {
                          if(((w_68 != NULL) && (w_68 != c_69)))
                            _fail(c_69);
                          else
                            w_68 = c_69;
                          {
                            t = not_null(x_68);
                            {
                              ATerm e_69 = NULL;
                              t = n_58(t);
                              {
                                d_69 = t;
                                {
                                  if(((y_68 != NULL) && (y_68 != d_69)))
                                    _fail(d_69);
                                  else
                                    y_68 = d_69;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_68), not_null(m_68));
                                    {
                                      t = diff_0(t);
                                      {
                                        e_69 = t;
                                        if(((z_68 != NULL) && (z_68 != e_69)))
                                          _fail(e_69);
                                        else
                                          z_68 = e_69;
                                      }
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
            t = q_16;
            {
              ATerm r_16;
              r_16 = t;
              {
                ATerm l_69 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_68), not_null(l_68));
                {
                  t = conc_0(t);
                  {
                    l_69 = t;
                    if(((f_69 != NULL) && (f_69 != l_69)))
                      _fail(l_69);
                    else
                      f_69 = l_69;
                  }
                }
              }
              t = r_16;
              {
                ATerm s_16;
                s_16 = t;
                {
                  ATerm n_69 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_68), not_null(m_68));
                  {
                    t = conc_0(t);
                    {
                      n_69 = t;
                      if(((m_69 != NULL) && (m_69 != n_69)))
                        _fail(n_69);
                      else
                        m_69 = n_69;
                    }
                  }
                }
                t = s_16;
                {
                  ATerm p_69 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(k_68), not_null(x_68), not_null(o_68));
                  {
                    t = o_58(t);
                    {
                      p_69 = t;
                      if(((o_69 != NULL) && (o_69 != p_69)))
                        _fail(p_69);
                      else
                        o_69 = p_69;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(f_69), not_null(m_69), not_null(w_68), not_null(o_69), not_null(p_68));
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
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  c_70 = t;
  a_70 :
  if(match_cons(c_70, sym__5))
    {
      d_70 = ATgetArgument(c_70, 0);
      e_70 = ATgetArgument(c_70, 1);
      g_70 = ATgetArgument(c_70, 2);
      h_70 = ATgetArgument(c_70, 3);
      i_70 = ATgetArgument(c_70, 4);
      b_70 :
      if(((ATermList) d_70 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_70), not_null(i_70));
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
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL;
  a_71 = t;
  z_70 :
  if(match_cons(a_71, sym__3))
    {
      b_71 = ATgetArgument(a_71, 0);
      c_71 = ATgetArgument(a_71, 1);
      d_71 = ATgetArgument(a_71, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(b_71), not_null(b_71), not_null(c_71), not_null(d_71), (ATerm) ATempty);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm v_64 (ATerm), ATerm w_64 (ATerm))
{
  ATerm i_71 (ATerm t)
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_64(t);
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
        {
          t = w_64(t);
          t = i_71(t);
        }
      }
    return(t);
  }
  t = i_71(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm a_65 (ATerm))
{
  t = y_64(t);
  t = while_not_2(t, z_64, a_65);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm x_58 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, v_58, w_58, x_58);
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
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
    ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL;
    l_71 = t;
    k_71 :
    if(match_cons(l_71, sym__3))
      {
        m_71 = ATgetArgument(l_71, 0);
        n_71 = ATgetArgument(l_71, 1);
        o_71 = ATgetArgument(l_71, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(o_71)), not_null(n_71));
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, l_2, m_2);
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        {
          t = MissingDefs_0(t);
          {
            t = term_f_9;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm g_58 (ATerm))
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
  x_71 = t;
  w_71 :
  if(match_cons(x_71, sym__2))
    {
      y_71 = ATgetArgument(x_71, 0);
      z_71 = ATgetArgument(x_71, 1);
      {
        ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL;
        ATerm k_17;
        k_17 = t;
        {
          ATerm f_72 = NULL;
          ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
          t = g_58(t);
          {
            f_72 = t;
            {
              if(((c_72 != NULL) && (c_72 != f_72)))
                _fail(f_72);
              else
                c_72 = f_72;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_72), not_null(y_71), not_null(z_71));
                {
                  t = table_push_0(t);
                  {
                    ATerm l_17 = t;
                    int m_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_72), term_q_17);
                        t = table_get_0(t);
                        LocalPopChoice(m_17);
                      }
                    else
                      {
                        t = l_17;
                        t = term_u_17;
                      }
                    {
                      g_72 = t;
                      v_71 :
                      if(((ATgetType(g_72) == AT_LIST) && ((ATermList) g_72 != ATempty)))
                        {
                          h_72 = ATgetFirst((ATermList) g_72);
                          i_72 = (ATerm) ATgetNext((ATermList) g_72);
                          {
                            if(((d_72 != NULL) && (d_72 != h_72)))
                              _fail(h_72);
                            else
                              d_72 = h_72;
                            {
                              if(((e_72 != NULL) && (e_72 != i_72)))
                                _fail(i_72);
                              else
                                e_72 = i_72;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_72), term_q_17, (ATerm) ATinsert(CheckATermList(not_null(e_72)), (ATerm) ATinsert(CheckATermList(not_null(d_72)), not_null(y_71))));
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
        t = k_17;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm k_70 (ATerm))
{
  ATerm r_72 = NULL,s_72 = NULL,v_72 = NULL;
  r_72 = t;
  q_72 :
  if(((ATgetType(r_72) == AT_LIST) && ((ATermList) r_72 != ATempty)))
    {
      s_72 = ATgetFirst((ATermList) r_72);
      v_72 = (ATerm) ATgetNext((ATermList) r_72);
      {
        t = k_70(t);
        {
          ATerm u_2 (ATerm t)
          {
            ATerm y_72 = NULL;
            y_72 = t;
            if(((s_72 != NULL) && (s_72 != y_72)))
              _fail(y_72);
            else
              s_72 = y_72;
            return(t);
          }
          t = fetch_1(t, u_2);
        }
        t = not_null(v_72);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL;
  f_73 = t;
  e_73 :
  if(match_cons(f_73, sym__2))
    {
      g_73 = ATgetArgument(f_73, 0);
      h_73 = ATgetArgument(f_73, 1);
      {
        t = not_null(g_73);
        {
          ATerm l_73 (ATerm t)
          {
            ATerm v_17 = t;
            int w_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(h_73);
                LocalPopChoice(w_17);
              }
            else
              {
                t = v_17;
                {
                  ATerm x_17 = t;
                  int z_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_2 (ATerm t)
                      {
                        t = not_null(h_73);
                        return(t);
                      }
                      t = HdMember_1(t, v_2);
                      t = l_73(t);
                      LocalPopChoice(z_17);
                    }
                  else
                    {
                      t = x_17;
                      t = Cons_2(t, _id, l_73);
                    }
                }
              }
            return(t);
          }
          t = l_73(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Arities_0 (ATerm t)
{
  ATerm q_73 = NULL;
  ATerm s_73 = NULL;
  q_73 = t;
  {
    ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_73));
    {
      ATerm w_2 (ATerm t)
      {
        t = term_a_18;
        return(t);
      }
      t = rewrite_1(t, w_2);
      {
        t_73 = t;
        o_73 :
        if(match_cons(t_73, sym_Defined_2))
          {
            u_73 = ATgetArgument(t_73, 0);
            v_73 = ATgetArgument(t_73, 1);
            p_73 :
            if(match_string(u_73, "e_0"))
              {
                if(((s_73 != NULL) && (s_73 != v_73)))
                  _fail(v_73);
                else
                  s_73 = v_73;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(s_73);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL,j_74 = NULL;
  b_74 = t;
  a_74 :
  if(((ATgetType(b_74) == AT_LIST) && ((ATermList) b_74 != ATempty)))
    {
      c_74 = ATgetFirst((ATermList) b_74);
      j_74 = (ATerm) ATgetNext((ATermList) b_74);
      t = not_null(c_74);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL;
  q_74 = t;
  p_74 :
  if(match_cons(q_74, sym__2))
    {
      r_74 = ATgetArgument(q_74, 0);
      s_74 = ATgetArgument(q_74, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_74), not_null(s_74));
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
ATerm rewrite_1 (ATerm t, ATerm i_58 (ATerm))
{
  ATerm y_74 = NULL;
  ATerm a_75 = NULL;
  y_74 = t;
  {
    ATerm b_75 = NULL;
    t = term_t_15;
    {
      t = i_58(t);
      {
        b_75 = t;
        if(((a_75 != NULL) && (a_75 != b_75)))
          _fail(b_75);
        else
          a_75 = b_75;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_75), not_null(y_74));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL;
  j_75 = t;
  i_75 :
  if(match_cons(j_75, sym__2))
    {
      k_75 = ATgetArgument(j_75, 0);
      l_75 = ATgetArgument(j_75, 1);
      {
        ATerm o_75 = NULL,p_75 = NULL;
        ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(l_75), not_null(k_75));
        {
          ATerm x_2 (ATerm t)
          {
            t = term_b_18;
            return(t);
          }
          t = rewrite_1(t, x_2);
          {
            s_75 = t;
            g_75 :
            if(match_cons(s_75, sym_Defined_3))
              {
                t_75 = ATgetArgument(s_75, 0);
                u_75 = ATgetArgument(s_75, 1);
                v_75 = ATgetArgument(s_75, 2);
                h_75 :
                if(match_string(t_75, "d_0"))
                  {
                    if(((o_75 != NULL) && (o_75 != u_75)))
                      _fail(u_75);
                    else
                      o_75 = u_75;
                    if(((p_75 != NULL) && (p_75 != v_75)))
                      _fail(v_75);
                    else
                      p_75 = v_75;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(p_75)), not_null(o_75));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL;
  a_76 = t;
  z_75 :
  if(match_cons(a_76, sym__2))
    {
      b_76 = ATgetArgument(a_76, 0);
      c_76 = ATgetArgument(a_76, 1);
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_76), not_null(c_76));
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            t = SSL_addr(not_null(b_76), not_null(c_76));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm k_69 (ATerm))
{
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_69(t);
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
      {
        ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL;
        n_76 = t;
        m_76 :
        if(((ATgetType(n_76) == AT_LIST) && ((ATermList) n_76 != ATempty)))
          {
            o_76 = ATgetFirst((ATermList) n_76);
            p_76 = (ATerm) ATgetNext((ATermList) n_76);
            {
              ATerm s_76 = NULL,u_76 = NULL;
              ATerm h_18;
              h_18 = t;
              {
                ATerm t_76 = NULL;
                t = not_null(o_76);
                {
                  t = k_69(t);
                  {
                    t_76 = t;
                    if(((s_76 != NULL) && (s_76 != t_76)))
                      _fail(t_76);
                    else
                      s_76 = t_76;
                  }
                }
              }
              t = h_18;
              {
                ATerm v_76 = NULL;
                t = not_null(p_76);
                {
                  t = foldr_3(t, i_69, j_69, k_69);
                  {
                    v_76 = t;
                    if(((u_76 != NULL) && (u_76 != v_76)))
                      _fail(v_76);
                    else
                      u_76 = v_76;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_76), not_null(u_76));
                  t = j_69(t);
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
ATerm length_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    t = term_i_18;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_f_9;
    return(t);
  }
  t = foldr_3(t, f_3, add_0, g_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL;
    h_77 = t;
    g_77 :
    if(match_cons(h_77, sym_SDef_3))
      {
        i_77 = ATgetArgument(h_77, 0);
        j_77 = ATgetArgument(h_77, 1);
        k_77 = ATgetArgument(h_77, 2);
        {
          ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
          ATerm j_18;
          j_18 = t;
          {
            ATerm s_77 = NULL;
            t = not_null(j_77);
            {
              ATerm t_77 = NULL;
              t = length_0(t);
              {
                s_77 = t;
                {
                  if(((q_77 != NULL) && (q_77 != s_77)))
                    _fail(s_77);
                  else
                    q_77 = s_77;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_77), not_null(q_77));
                    {
                      ATerm u_77 = NULL,w_77 = NULL;
                      ATerm k_18 = t;
                      int l_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(l_18);
                        }
                      else
                        {
                          t = k_18;
                          t = (ATerm) ATempty;
                        }
                      {
                        t_77 = t;
                        {
                          if(((p_77 != NULL) && (p_77 != t_77)))
                            _fail(t_77);
                          else
                            p_77 = t_77;
                          {
                            ATerm v_77 = NULL;
                            t = not_null(i_77);
                            {
                              ATerm m_18 = t;
                              int n_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(n_18);
                                }
                              else
                                {
                                  t = m_18;
                                  t = (ATerm) ATempty;
                                }
                              {
                                v_77 = t;
                                if(((u_77 != NULL) && (u_77 != v_77)))
                                  _fail(v_77);
                                else
                                  u_77 = v_77;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_77)), not_null(u_77));
                              {
                                t = union_0(t);
                                {
                                  w_77 = t;
                                  {
                                    if(((r_77 != NULL) && (r_77 != w_77)))
                                      _fail(w_77);
                                    else
                                      r_77 = w_77;
                                    {
                                      ATerm o_18;
                                      o_18 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(q_77), not_null(i_77)), (ATerm) ATmakeAppl(sym_Defined_3, term_p_18, not_null(h_77), not_null(p_77)));
                                        {
                                          ATerm i_3 (ATerm t)
                                          {
                                            t = term_b_18;
                                            return(t);
                                          }
                                          t = assert_1(t, i_3);
                                        }
                                      }
                                      t = o_18;
                                      {
                                        ATerm q_18;
                                        q_18 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(i_77)), (ATerm) ATmakeAppl(sym_Defined_2, term_r_18, not_null(r_77)));
                                          {
                                            ATerm j_3 (ATerm t)
                                            {
                                              t = term_a_18;
                                              return(t);
                                            }
                                            t = assert_1(t, j_3);
                                          }
                                        }
                                        t = q_18;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = j_18;
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, h_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm d_78 = NULL;
  ATerm e_78 = NULL;
  t = sort_defs_0(t);
  {
    e_78 = t;
    if(((d_78 != NULL) && (d_78 != e_78)))
      _fail(e_78);
    else
      d_78 = e_78;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_18, not_null(d_78), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm g_55 (ATerm))
{
  ATerm j_78 = NULL,k_78 = NULL;
  j_78 = t;
  i_78 :
  if(match_cons(j_78, sym_Strategies_1))
    {
      k_78 = ATgetArgument(j_78, 0);
      {
        ATerm m_78 = NULL;
        t = not_null(k_78);
        {
          t = g_55(t);
          {
            m_78 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(m_78));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm))
{
  ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL;
  w_78 = t;
  v_78 :
  if(((ATgetType(w_78) == AT_LIST) && ((ATermList) w_78 != ATempty)))
    {
      x_78 = ATgetFirst((ATermList) w_78);
      y_78 = (ATerm) ATgetNext((ATermList) w_78);
      {
        ATerm b_79 = NULL;
        t = not_null(x_78);
        {
          ATerm f_79 = NULL;
          t = p_57(t);
          {
            b_79 = t;
            {
              t = not_null(y_78);
              {
                t = q_57(t);
                {
                  f_79 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_79)), not_null(b_79));
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
ATerm Specification_1 (ATerm t, ATerm i_55 (ATerm))
{
  ATerm n_79 = NULL,o_79 = NULL;
  n_79 = t;
  m_79 :
  if(match_cons(n_79, sym_Specification_1))
    {
      o_79 = ATgetArgument(n_79, 0);
      {
        ATerm q_79 = NULL;
        t = not_null(o_79);
        {
          t = i_55(t);
          {
            q_79 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(q_79));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm z_46 (ATerm), ATerm a_47 (ATerm))
{
  ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL;
  y_79 = t;
  x_79 :
  if(match_cons(y_79, sym__2))
    {
      z_79 = ATgetArgument(y_79, 0);
      a_80 = ATgetArgument(y_79, 1);
      {
        ATerm i_80 = NULL;
        t = not_null(z_79);
        {
          ATerm k_80 = NULL;
          t = z_46(t);
          {
            i_80 = t;
            {
              t = not_null(a_80);
              {
                t = a_47(t);
                {
                  k_80 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_80), not_null(k_80));
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
  ATerm r_80 = NULL;
  ATerm v_18;
  v_18 = t;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm s_80 = NULL,t_80 = NULL;
      s_80 = t;
      q_80 :
      if(match_cons(s_80, sym_Program_1))
        {
          t_80 = ATgetArgument(s_80, 0);
          if(((r_80 != NULL) && (r_80 != t_80)))
            _fail(t_80);
          else
            r_80 = t_80;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, r_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(CheckATermList(term_y_18), not_null(r_80)), term_w_18));
      {
        t = printnl_0(t);
        {
          t = term_f_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_18;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_f_19;
  {
    t = printnl_0(t);
    {
      t = term_f_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL;
  ATerm s_3 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      ATerm g_19 = t;
      if((PushChoice() == 0))
        {
          ATerm u_3 (ATerm t)
          {
            ATerm f_81 = NULL;
            f_81 = t;
            v_80 :
            if(!(match_cons(f_81, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, u_3);
          PopChoice();
          _fail(t);
        }
      else
        t = g_19;
      return(t);
    }
    t = _2(t, t_3, _id);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm b_4 (ATerm t)
        {
          ATerm g_81 = NULL,h_81 = NULL;
          g_81 = t;
          x_80 :
          if(match_cons(g_81, sym_Runtime_1))
            {
              h_81 = ATgetArgument(g_81, 0);
              if(((e_81 != NULL) && (e_81 != h_81)))
                _fail(h_81);
              else
                e_81 = h_81;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, b_4);
        return(t);
      }
      t = _2(t, v_3, _id);
      {
        ATerm c_4 (ATerm t)
        {
          ATerm d_4 (ATerm t)
          {
            ATerm i_81 = NULL,j_81 = NULL;
            i_81 = t;
            z_80 :
            if(match_cons(i_81, sym_Program_1))
              {
                j_81 = ATgetArgument(i_81, 0);
                if(((d_81 != NULL) && (d_81 != j_81)))
                  _fail(j_81);
                else
                  d_81 = j_81;
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
          t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_j_19), not_null(e_81)), term_h_19), not_null(d_81)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, s_3);
  {
    t = term_i_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL;
  o_81 = t;
  n_81 :
  if(match_cons(o_81, sym__2))
    {
      p_81 = ATgetArgument(o_81, 0);
      q_81 = ATgetArgument(o_81, 1);
      t = SSL_WriteToTextFile(not_null(p_81), not_null(q_81));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL;
  w_81 = t;
  v_81 :
  if(match_cons(w_81, sym__2))
    {
      x_81 = ATgetArgument(w_81, 0);
      y_81 = ATgetArgument(w_81, 1);
      t = SSL_WriteToBinaryFile(not_null(x_81), not_null(y_81));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm g_82 = NULL;
  ATerm k_19;
  k_19 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm l_19 = t;
      int m_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_4 (ATerm t)
          {
            ATerm h_82 = NULL,i_82 = NULL;
            h_82 = t;
            d_82 :
            if(match_cons(h_82, sym_Output_1))
              {
                i_82 = ATgetArgument(h_82, 0);
                if(((g_82 != NULL) && (g_82 != i_82)))
                  _fail(i_82);
                else
                  g_82 = i_82;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, h_4);
          LocalPopChoice(m_19);
        }
      else
        {
          t = l_19;
          {
            ATerm j_82 = NULL;
            t = term_n_19;
            {
              j_82 = t;
              if(((g_82 != NULL) && (g_82 != j_82)))
                _fail(j_82);
              else
                g_82 = j_82;
            }
          }
        }
      return(t);
    }
    t = _2(t, g_4, _id);
  }
  t = k_19;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm j_4 (ATerm t)
      {
        t = not_null(g_82);
        return(t);
      }
      t = split_2(t, j_4, _id);
      return(t);
    }
    t = _2(t, _id, i_4);
    {
      ATerm o_19 = t;
      int p_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_4 (ATerm t)
          {
            ATerm v_4 (ATerm t)
            {
              ATerm k_82 = NULL;
              k_82 = t;
              f_82 :
              if(!(match_cons(k_82, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, v_4);
            return(t);
          }
          t = _2(t, n_4, WriteToBinaryFile_0);
          LocalPopChoice(p_19);
        }
      else
        {
          t = o_19;
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
ATerm apply_strategy_1 (ATerm t, ATerm b_62 (ATerm))
{
  ATerm q_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL;
  ATerm q_19;
  q_19 = t;
  t = dtime_0(t);
  t = q_19;
  {
    t = b_62(t);
    {
      ATerm s_19;
      s_19 = t;
      {
        ATerm r_82 = NULL;
        t = dtime_0(t);
        {
          r_82 = t;
          if(((q_82 != NULL) && (q_82 != r_82)))
            _fail(r_82);
          else
            q_82 = r_82;
        }
      }
      t = s_19;
      {
        s_82 = t;
        p_82 :
        if(match_cons(s_82, sym__2))
          {
            t_82 = ATgetArgument(s_82, 0);
            u_82 = ATgetArgument(s_82, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_82)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_82))), not_null(u_82));
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
  ATerm a_83 = NULL;
  a_83 = t;
  t = SSL_ReadFromFile(not_null(a_83));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_75 (ATerm), ATerm r_75 (ATerm))
{
  ATerm f_83 = NULL,h_83 = NULL;
  ATerm t_19;
  t_19 = t;
  {
    ATerm g_83 = NULL;
    t = q_75(t);
    {
      g_83 = t;
      if(((f_83 != NULL) && (f_83 != g_83)))
        _fail(g_83);
      else
        f_83 = g_83;
    }
  }
  t = t_19;
  {
    ATerm i_83 = NULL;
    t = r_75(t);
    {
      i_83 = t;
      if(((h_83 != NULL) && (h_83 != i_83)))
        _fail(i_83);
      else
        h_83 = i_83;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_83), not_null(h_83));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_83 = NULL;
  ATerm u_19;
  u_19 = t;
  {
    ATerm a_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 (ATerm t)
        {
          ATerm p_83 = NULL,q_83 = NULL;
          p_83 = t;
          m_83 :
          if(match_cons(p_83, sym_Input_1))
            {
              q_83 = ATgetArgument(p_83, 0);
              if(((o_83 != NULL) && (o_83 != q_83)))
                _fail(q_83);
              else
                o_83 = q_83;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, c_5);
        LocalPopChoice(c_20);
      }
    else
      {
        t = a_20;
        {
          ATerm r_83 = NULL;
          t = term_d_20;
          {
            r_83 = t;
            if(((o_83 != NULL) && (o_83 != r_83)))
              _fail(r_83);
            else
              o_83 = r_83;
          }
        }
      }
  }
  t = u_19;
  {
    ATerm h_5 (ATerm t)
    {
      t = not_null(o_83);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_83 = NULL;
  v_83 = t;
  u_83 :
  if(!(match_cons(v_83, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_62 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        {
          ATerm g_20 = t;
          int j_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_20);
            }
          else
            {
              t = g_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, i_5);
  t = a_62(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_83 = NULL;
  x_83 = t;
  t = SSL_table_create(not_null(x_83));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_84 = NULL;
  b_84 = t;
  {
    ATerm k_20;
    k_20 = t;
    {
      t = term_l_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_20, term_m_20, not_null(b_84));
          t = table_put_0(t);
        }
      }
    }
    t = k_20;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL;
  j_84 = t;
  h_84 :
  if(match_string(j_84, "register-usage-info"))
    t = register_usage_1(t, k_0);
  else
    {
      if(((ATgetType(j_84) == AT_LIST) && ((ATermList) j_84 != ATempty)))
        {
          k_84 = ATgetFirst((ATermList) j_84);
          l_84 = (ATerm) ATgetNext((ATermList) j_84);
          i_84 :
          if(((ATgetType(l_84) == AT_LIST) && ((ATermList) l_84 != ATempty)))
            {
              m_84 = ATgetFirst((ATermList) l_84);
              n_84 = (ATerm) ATgetNext((ATermList) l_84);
              {
                ATerm r_84 = NULL;
                ATerm n_20;
                n_20 = t;
                {
                  t = not_null(k_84);
                  t = i_0(t);
                }
                t = n_20;
                {
                  ATerm s_84 = NULL;
                  t = not_null(m_84);
                  {
                    t = j_0(t);
                    {
                      s_84 = t;
                      if(((r_84 != NULL) && (r_84 != s_84)))
                        _fail(s_84);
                      else
                        r_84 = s_84;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_84)), not_null(r_84));
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
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_5 (ATerm t)
      {
        ATerm h_85 = NULL;
        h_85 = t;
        w_84 :
        if(!(match_string(h_85, "-S")))
          {
            if(!(match_string(h_85, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        t = term_q_20;
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = term_r_20;
        return(t);
      }
      t = Option_3(t, j_5, k_5, l_5);
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              ATerm i_85 = NULL;
              i_85 = t;
              x_84 :
              if(!(match_string(i_85, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm n_5 (ATerm t)
            {
              t = term_y_20;
              return(t);
            }
            ATerm s_5 (ATerm t)
            {
              t = term_z_20;
              return(t);
            }
            t = Option_3(t, m_5, n_5, s_5);
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            {
              ATerm a_21 = t;
              int b_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_5 (ATerm t)
                  {
                    ATerm j_85 = NULL;
                    j_85 = t;
                    y_84 :
                    if(!(match_string(j_85, "-v")))
                      {
                        if(!(match_string(j_85, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm v_5 (ATerm t)
                  {
                    t = term_c_21;
                    return(t);
                  }
                  ATerm x_5 (ATerm t)
                  {
                    t = term_d_21;
                    return(t);
                  }
                  t = Option_3(t, t_5, v_5, x_5);
                  LocalPopChoice(b_21);
                }
              else
                {
                  t = a_21;
                  {
                    ATerm e_21 = t;
                    int f_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_5 (ATerm t)
                        {
                          ATerm k_85 = NULL;
                          k_85 = t;
                          z_84 :
                          if(!(match_string(k_85, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm z_5 (ATerm t)
                        {
                          ATerm l_85 = NULL;
                          ATerm m_85 = NULL;
                          m_85 = t;
                          if(((l_85 != NULL) && (l_85 != m_85)))
                            _fail(m_85);
                          else
                            l_85 = m_85;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(l_85));
                          return(t);
                        }
                        ATerm a_6 (ATerm t)
                        {
                          t = term_g_21;
                          return(t);
                        }
                        t = ArgOption_3(t, y_5, z_5, a_6);
                        LocalPopChoice(f_21);
                      }
                    else
                      {
                        t = e_21;
                        {
                          ATerm i_21 = t;
                          int j_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_6 (ATerm t)
                              {
                                ATerm n_85 = NULL;
                                n_85 = t;
                                b_85 :
                                if(!(match_string(n_85, "-i")))
                                  {
                                    if(!(match_string(n_85, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm c_6 (ATerm t)
                              {
                                ATerm o_85 = NULL;
                                ATerm p_85 = NULL;
                                p_85 = t;
                                if(((o_85 != NULL) && (o_85 != p_85)))
                                  _fail(p_85);
                                else
                                  o_85 = p_85;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_85));
                                return(t);
                              }
                              ATerm d_6 (ATerm t)
                              {
                                t = term_n_21;
                                return(t);
                              }
                              t = ArgOption_3(t, b_6, c_6, d_6);
                              LocalPopChoice(j_21);
                            }
                          else
                            {
                              t = i_21;
                              {
                                ATerm o_21 = t;
                                int q_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_6 (ATerm t)
                                    {
                                      ATerm q_85 = NULL;
                                      q_85 = t;
                                      d_85 :
                                      if(!(match_string(q_85, "-o")))
                                        {
                                          if(!(match_string(q_85, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm k_6 (ATerm t)
                                    {
                                      ATerm r_85 = NULL;
                                      ATerm s_85 = NULL;
                                      s_85 = t;
                                      if(((r_85 != NULL) && (r_85 != s_85)))
                                        _fail(s_85);
                                      else
                                        r_85 = s_85;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_85));
                                      return(t);
                                    }
                                    ATerm l_6 (ATerm t)
                                    {
                                      t = term_s_21;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_6, k_6, l_6);
                                    LocalPopChoice(q_21);
                                  }
                                else
                                  {
                                    t = o_21;
                                    {
                                      ATerm t_21 = t;
                                      int u_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_6 (ATerm t)
                                          {
                                            ATerm t_85 = NULL;
                                            t_85 = t;
                                            f_85 :
                                            if(!(match_string(t_85, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm o_6 (ATerm t)
                                          {
                                            t = term_v_21;
                                            return(t);
                                          }
                                          ATerm q_6 (ATerm t)
                                          {
                                            t = term_w_21;
                                            return(t);
                                          }
                                          t = Option_3(t, m_6, o_6, q_6);
                                          LocalPopChoice(u_21);
                                        }
                                      else
                                        {
                                          t = t_21;
                                          {
                                            ATerm s_6 (ATerm t)
                                            {
                                              ATerm u_85 = NULL;
                                              u_85 = t;
                                              g_85 :
                                              if(!(match_string(u_85, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm t_6 (ATerm t)
                                            {
                                              t = term_x_21;
                                              return(t);
                                            }
                                            ATerm u_6 (ATerm t)
                                            {
                                              t = term_y_21;
                                              return(t);
                                            }
                                            t = Option_3(t, s_6, t_6, u_6);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm z_85 = NULL;
  z_85 = t;
  t = SSL_table_destroy(not_null(z_85));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_86 = NULL;
  d_86 = t;
  t = SSL_exit(not_null(d_86));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm h_86 = NULL;
  h_86 = t;
  t = SSL_implode_string(not_null(h_86));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm k_86 (ATerm t)
  {
    ATerm z_21 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_86);
        LocalPopChoice(b_22);
      }
    else
      {
        t = z_21;
        {
          t = Nil_0(t);
          t = z_72(t);
        }
      }
    return(t);
  }
  t = k_86(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
        n_86 = t;
        m_86 :
        if(((ATgetType(n_86) == AT_LIST) && ((ATermList) n_86 != ATempty)))
          {
            o_86 = ATgetFirst((ATermList) n_86);
            p_86 = (ATerm) ATgetNext((ATermList) n_86);
            {
              t = not_null(o_86);
              {
                ATerm v_6 (ATerm t)
                {
                  t = not_null(p_86);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_6);
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
  ATerm v_86 = NULL;
  v_86 = t;
  t = SSL_explode_string(not_null(v_86));
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
ATerm long_description_1 (ATerm t, ATerm h_60 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_72 (ATerm))
{
  ATerm y_86 (ATerm t)
  {
    ATerm f_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(h_22);
      }
    else
      {
        t = f_22;
        t = Cons_2(t, l_72, y_86);
      }
    return(t);
  }
  t = y_86(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL;
  f_87 = t;
  c_87 :
  if(((ATgetType(f_87) == AT_LIST) && ((ATermList) f_87 != ATempty)))
    {
      d_87 = ATgetFirst((ATermList) f_87);
      e_87 = (ATerm) ATgetNext((ATermList) f_87);
      {
        t = not_null(e_87);
        {
          ATerm w_6 (ATerm t)
          {
            ATerm i_87 = NULL;
            ATerm j_87 = NULL;
            t = h_0(t);
            {
              j_87 = t;
              if(((i_87 != NULL) && (i_87 != j_87)))
                _fail(j_87);
              else
                i_87 = j_87;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(i_87)), not_null(d_87));
            return(t);
          }
          t = reverse_1(t, w_6);
        }
      }
    }
  else
    {
      if(((ATermList) f_87 == ATempty))
        {
          {
            t = term_t_15;
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
  ATerm x_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, x_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_60 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_52 (ATerm))
{
  ATerm q_87 = NULL,r_87 = NULL;
  q_87 = t;
  p_87 :
  if(match_cons(q_87, sym_Program_1))
    {
      r_87 = ATgetArgument(q_87, 0);
      {
        ATerm t_87 = NULL;
        t = not_null(r_87);
        {
          t = o_52(t);
          {
            t_87 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_87));
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
  ATerm b_88 = NULL;
  ATerm y_6 (ATerm t)
  {
    ATerm z_6 (ATerm t)
    {
      ATerm c_88 = NULL;
      c_88 = t;
      if(((b_88 != NULL) && (b_88 != c_88)))
        _fail(c_88);
      else
        b_88 = c_88;
      return(t);
    }
    t = Program_1(t, z_6);
    return(t);
  }
  t = option_defined_1(t, y_6);
  {
    ATerm e_7 (ATerm t)
    {
      ATerm d_88 = NULL;
      ATerm e_88 = NULL;
      t = term_t_15;
      {
        ATerm f_7 (ATerm t)
        {
          t = not_null(b_88);
          return(t);
        }
        t = short_description_1(t, f_7);
        {
          t = concat_strings_0(t);
          {
            e_88 = t;
            if(((d_88 != NULL) && (d_88 != e_88)))
              _fail(e_88);
            else
              d_88 = e_88;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATempty, not_null(d_88)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_7);
    {
      t = term_o_22;
      {
        t = printnl_0(t);
        {
          t = term_r_22;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm h_7 (ATerm t)
                {
                  ATerm f_88 = NULL;
                  f_88 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_88)), term_s_22));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_7);
                {
                  ATerm j_7 (ATerm t)
                  {
                    ATerm h_88 = NULL;
                    ATerm i_88 = NULL;
                    t = term_t_15;
                    {
                      ATerm k_7 (ATerm t)
                      {
                        t = not_null(b_88);
                        return(t);
                      }
                      t = long_description_1(t, k_7);
                      {
                        t = concat_strings_0(t);
                        {
                          i_88 = t;
                          if(((h_88 != NULL) && (h_88 != i_88)))
                            _fail(i_88);
                          else
                            h_88 = i_88;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_88)), term_t_22));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_7);
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
  ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL;
  p_88 = t;
  o_88 :
  if(match_cons(p_88, sym__2))
    {
      q_88 = ATgetArgument(p_88, 0);
      r_88 = ATgetArgument(p_88, 1);
      {
        ATerm u_22;
        u_22 = t;
        t = SSL_printnl(not_null(q_88), not_null(r_88));
        t = u_22;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_52 (ATerm))
{
  ATerm y_88 = NULL,z_88 = NULL;
  y_88 = t;
  x_88 :
  if(match_cons(y_88, sym_Undefined_1))
    {
      z_88 = ATgetArgument(y_88, 0);
      {
        ATerm b_89 = NULL;
        t = not_null(z_88);
        {
          t = p_52(t);
          {
            b_89 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_89));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm t_72 (ATerm))
{
  ATerm f_89 (ATerm t)
  {
    ATerm v_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_72, _id);
        LocalPopChoice(a_23);
      }
    else
      {
        t = v_22;
        t = Cons_2(t, _id, f_89);
      }
    return(t);
  }
  t = f_89(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_61 (ATerm))
{
  t = fetch_1(t, f_61);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_89 = NULL;
  h_89 = t;
  g_89 :
  if(!(match_cons(h_89, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_76 (ATerm))
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_76(t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_89 = NULL,l_89 = NULL,m_89 = NULL;
  k_89 = t;
  j_89 :
  if(match_cons(k_89, sym__2))
    {
      l_89 = ATgetArgument(k_89, 0);
      m_89 = ATgetArgument(k_89, 1);
      t = SSL_table_get(not_null(l_89), not_null(m_89));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL;
  t_89 = t;
  s_89 :
  if(match_cons(t_89, sym__3))
    {
      u_89 = ATgetArgument(t_89, 0);
      v_89 = ATgetArgument(t_89, 1);
      w_89 = ATgetArgument(t_89, 2);
      {
        ATerm d_23;
        d_23 = t;
        {
          ATerm a_90 = NULL;
          ATerm b_90 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_89), not_null(v_89));
          {
            ATerm e_23 = t;
            int f_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_23);
              }
            else
              {
                t = e_23;
                t = (ATerm) ATempty;
              }
            {
              b_90 = t;
              if(((a_90 != NULL) && (a_90 != b_90)))
                _fail(b_90);
              else
                a_90 = b_90;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_89), not_null(v_89), (ATerm) ATinsert(CheckATermList(not_null(a_90)), not_null(w_89)));
            t = table_put_0(t);
          }
        }
        t = d_23;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm f_90 = NULL;
  ATerm g_90 = NULL;
  t = term_t_15;
  {
    t = l_60(t);
    {
      g_90 = t;
      if(((f_90 != NULL) && (f_90 != g_90)))
        _fail(g_90);
      else
        f_90 = g_90;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_22, term_q_22, not_null(f_90));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL;
  m_90 = t;
  l_90 :
  if(match_string(m_90, "register-usage-info"))
    t = register_usage_1(t, g_0);
  else
    {
      if(((ATgetType(m_90) == AT_LIST) && ((ATermList) m_90 != ATempty)))
        {
          n_90 = ATgetFirst((ATermList) m_90);
          o_90 = (ATerm) ATgetNext((ATermList) m_90);
          {
            ATerm r_90 = NULL;
            ATerm g_23;
            g_23 = t;
            {
              t = not_null(n_90);
              t = a_0(t);
            }
            t = g_23;
            {
              ATerm s_90 = NULL;
              t = term_t_15;
              {
                t = f_0(t);
                {
                  s_90 = t;
                  if(((r_90 != NULL) && (r_90 != s_90)))
                    _fail(s_90);
                  else
                    r_90 = s_90;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_90)), not_null(r_90));
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
  ATerm l_7 (ATerm t)
  {
    ATerm x_90 = NULL;
    x_90 = t;
    w_90 :
    if(!(match_string(x_90, "--help")))
      {
        if(!(match_string(x_90, "-h")))
          {
            if(!(match_string(x_90, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    t = term_h_23;
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    t = term_i_23;
    return(t);
  }
  t = Option_3(t, l_7, m_7, n_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL;
  a_91 = t;
  z_90 :
  if(((ATgetType(a_91) == AT_LIST) && ((ATermList) a_91 != ATempty)))
    {
      b_91 = ATgetFirst((ATermList) a_91);
      c_91 = (ATerm) ATgetNext((ATermList) a_91);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_91)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_91)));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm j_23;
  j_23 = t;
  {
    ATerm s_7 (ATerm t)
    {
      t = term_k_23;
      t = j_60(t);
      return(t);
    }
    t = try_1(t, s_7);
  }
  t = j_23;
  {
    ATerm t_7 (ATerm t)
    {
      ATerm h_91 = NULL;
      h_91 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_91));
      return(t);
    }
    ATerm u_7 (ATerm t)
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_23 = t;
          int o_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_23);
            }
          else
            {
              t = n_23;
              {
                t = j_60(t);
                t = Cons_2(t, _id, u_7);
              }
            }
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_7, u_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL;
  ATerm w_23;
  w_23 = t;
  {
    ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL;
    q_91 = t;
    m_91 :
    if(match_cons(q_91, sym__3))
      {
        r_91 = ATgetArgument(q_91, 0);
        s_91 = ATgetArgument(q_91, 1);
        t_91 = ATgetArgument(q_91, 2);
        {
          if(((n_91 != NULL) && (n_91 != r_91)))
            _fail(r_91);
          else
            n_91 = r_91;
          {
            if(((o_91 != NULL) && (o_91 != s_91)))
              _fail(s_91);
            else
              o_91 = s_91;
            {
              if(((p_91 != NULL) && (p_91 != t_91)))
                _fail(t_91);
              else
                p_91 = t_91;
              t = SSL_table_put(not_null(n_91), not_null(o_91), not_null(p_91));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = w_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_60 (ATerm))
{
  ATerm w_91 = NULL;
  ATerm x_23;
  x_23 = t;
  {
    t = term_c_24;
    t = table_put_0(t);
  }
  t = x_23;
  {
    ATerm v_7 (ATerm t)
    {
      ATerm d_24 = t;
      int f_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_60(t);
          LocalPopChoice(f_24);
        }
      else
        {
          t = d_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_7);
    {
      ATerm w_7 (ATerm t)
      {
        ATerm g_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_i_18;
                t = exit_0(t);
              }
            }
            LocalPopChoice(i_24);
          }
        else
          {
            t = g_24;
            {
              ATerm d_8 (ATerm t)
              {
                ATerm e_8 (ATerm t)
                {
                  ATerm x_91 = NULL;
                  x_91 = t;
                  if(((w_91 != NULL) && (w_91 != x_91)))
                    _fail(x_91);
                  else
                    w_91 = x_91;
                  return(t);
                }
                t = Undefined_1(t, e_8);
                return(t);
              }
              t = option_defined_1(t, d_8);
              {
                ATerm j_24;
                j_24 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_91)), term_k_24));
                  t = printnl_0(t);
                }
                t = j_24;
                {
                  t = system_usage_0(t);
                  {
                    t = term_f_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, w_7);
      {
        ATerm l_24;
        l_24 = t;
        {
          t = term_p_22;
          t = table_destroy_0(t);
        }
        t = l_24;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm p_61 (ATerm), ATerm q_61 (ATerm), ATerm r_61 (ATerm))
{
  ATerm f_8 (ATerm t)
  {
    ATerm m_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_61(t);
        LocalPopChoice(q_24);
      }
    else
      {
        t = m_24;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_8);
  {
    t = store_options_0(t);
    {
      ATerm v_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, r_61);
          LocalPopChoice(w_24);
        }
      else
        {
          t = v_24;
          {
            ATerm x_24 = t;
            int y_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, p_61);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(y_24);
              }
            else
              {
                t = x_24;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_61 (ATerm), ATerm l_61 (ATerm))
{
  t = iowrap_3(t, k_61, l_61, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm j_8 (ATerm t)
  {
    t = _2(t, _id, h_61);
    return(t);
  }
  t = iowrap_2(t, j_8, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm k_8 (ATerm t)
  {
    ATerm l_8 (ATerm t)
    {
      ATerm m_8 (ATerm t)
      {
        ATerm n_8 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, n_8, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, m_8);
      return(t);
    }
    t = Specification_1(t, l_8);
    return(t);
  }
  t = iowrap_1(t, k_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
