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
ATerm term_e_24;
ATerm term_l_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_p_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_e_20;
ATerm term_o_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_i_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_q_13;
ATerm term_a_13;
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
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Op_2, term_a_15, (ATerm) ATempty);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATinsert(ATempty, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_FunType_2, term_d_15, term_c_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
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
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATinsert(ATempty, term_y_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATinsert(ATempty, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_c_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATinsert(ATempty, term_g_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATinsert(ATempty, term_k_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_o_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__3, term_n_22, term_o_22, (ATerm) ATempty);
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
ATerm Rec_2 (ATerm, ATerm w_55 (ATerm), ATerm x_55 (ATerm));
ATerm SDef_3 (ATerm, ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm c_56 (ATerm));
ATerm Let_2 (ATerm, ATerm y_55 (ATerm), ATerm z_55 (ATerm));
ATerm sboundin_3 (ATerm, ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm b_70 (ATerm), ATerm c_70 (ATerm));
ATerm diff_1 (ATerm, ATerm g_70 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm o_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm p_66 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_68 (ATerm), ATerm x_68 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm q_79 (ATerm), ATerm r_79 (ATerm));
ATerm alltd_1 (ATerm, ATerm q_78 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm s_79 (ATerm), ATerm t_79 (ATerm));
ATerm substitute_1 (ATerm, ATerm u_79 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm d_56 (ATerm), ATerm e_56 (ATerm));
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
ATerm Explode_2 (ATerm, ATerm x_53 (ATerm), ATerm y_53 (ATerm));
ATerm Op_2 (ATerm, ATerm g_55 (ATerm), ATerm h_55 (ATerm));
ATerm pat_td_1 (ATerm, ATerm o_57 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm u_63 (ATerm), ATerm v_63 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_63 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm r_53 (ATerm), ATerm s_53 (ATerm));
ATerm Con_3 (ATerm, ATerm o_53 (ATerm), ATerm p_53 (ATerm), ATerm q_53 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm a_57 (ATerm), ATerm b_57 (ATerm));
ATerm oncetd_1 (ATerm, ATerm c_78 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm k_76 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm t_75 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm l_69 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm y_73 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t_73 (ATerm));
ATerm zip_1 (ATerm, ATerm v_73 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm c_58 (ATerm), ATerm d_58 (ATerm), ATerm e_58 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_64 (ATerm), ATerm m_64 (ATerm));
ATerm for_3 (ATerm, ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm q_64 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm l_58 (ATerm), ATerm m_58 (ATerm), ATerm n_58 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm w_57 (ATerm));
ATerm HdMember_1 (ATerm, ATerm a_70 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm y_57 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm z_54 (ATerm));
ATerm Cons_2 (ATerm, ATerm f_57 (ATerm), ATerm g_57 (ATerm));
ATerm Specification_1 (ATerm, ATerm b_55 (ATerm));
ATerm _2 (ATerm, ATerm s_46 (ATerm), ATerm t_46 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_61 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_75 (ATerm), ATerm e_75 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_61 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_72 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_59 (ATerm));
ATerm map_1 (ATerm, ATerm y_71 (ATerm));
ATerm reverse_1 (ATerm, ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_59 (ATerm));
ATerm Program_1 (ATerm, ATerm h_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_60 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_60 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_59 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_59 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_61 (ATerm), ATerm g_61 (ATerm), ATerm h_61 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_61 (ATerm), ATerm b_61 (ATerm));
ATerm iowrap_1 (ATerm, ATerm x_60 (ATerm));
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
ATerm Rec_2 (ATerm t, ATerm w_55 (ATerm), ATerm x_55 (ATerm))
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
          t = w_55(t);
          {
            u_5 = t;
            {
              t = not_null(r_5);
              {
                t = x_55(t);
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
ATerm SDef_3 (ATerm t, ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm c_56 (ATerm))
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
          t = a_56(t);
          {
            n_6 = t;
            {
              t = not_null(i_6);
              {
                ATerm r_6 = NULL;
                t = b_56(t);
                {
                  p_6 = t;
                  {
                    t = not_null(j_6);
                    {
                      t = c_56(t);
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
ATerm Let_2 (ATerm t, ATerm y_55 (ATerm), ATerm z_55 (ATerm))
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
          t = y_55(t);
          {
            g_7 = t;
            {
              t = not_null(d_7);
              {
                t = z_55(t);
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
ATerm sboundin_3 (ATerm t, ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm))
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, n_80, n_80);
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
            t = SDef_3(t, p_80, p_80, n_80);
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            t = Rec_2(t, p_80, n_80);
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
ATerm crush_3 (ATerm t, ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm))
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
      t = foldr_3(t, l_70, m_70, n_70);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm b_70 (ATerm), ATerm c_70 (ATerm))
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
  w_9 = t;
  v_9 :
  if(((ATgetType(w_9) == AT_LIST) && ((ATermList) w_9 != ATempty)))
    {
      x_9 = ATgetFirst((ATermList) w_9);
      y_9 = (ATerm) ATgetNext((ATermList) w_9);
      {
        t = c_70(t);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm b_10 = NULL;
            b_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(b_10));
              t = b_70(t);
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
ATerm diff_1 (ATerm t, ATerm g_70 (ATerm))
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
                      t = HdMember_p__2(t, g_70, o_0);
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
ATerm free_vars2_4 (ATerm t, ATerm m_66 (ATerm), ATerm n_66 (ATerm), ATerm o_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm p_66 (ATerm))
{
  ATerm r_10 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm m_10 = t;
      int o_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_66(t);
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
            t = n_66(t);
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
              t = diff_1(t, p_66);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = o_66(t, r_0, r_10, s_0);
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
ATerm foldr_2 (ATerm t, ATerm w_68 (ATerm), ATerm x_68 (ATerm))
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_68(t);
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
                t = foldr_2(t, w_68, x_68);
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
                t = x_68(t);
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
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  l_16 = t;
  k_13 :
  if(match_cons(l_16, sym_Call_2))
    {
      m_16 = ATgetArgument(l_16, 0);
      o_16 = ATgetArgument(l_16, 1);
      t_13 :
      if(match_cons(m_16, sym_SVar_1))
        {
          n_16 = ATgetArgument(m_16, 0);
          u_13 :
          if(((ATermList) o_16 == ATempty))
            {
              t = not_null(n_16);
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
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  u_16 = t;
  s_16 :
  if(match_cons(u_16, sym__2))
    {
      v_16 = ATgetArgument(u_16, 0);
      w_16 = ATgetArgument(u_16, 1);
      t_16 :
      if(((ATgetType(w_16) == AT_LIST) && ((ATermList) w_16 != ATempty)))
        {
          x_16 = ATgetFirst((ATermList) w_16);
          y_16 = (ATerm) ATgetNext((ATermList) w_16);
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_16), not_null(y_16));
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
  ATerm l_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  l_17 = t;
  d_17 :
  if(match_cons(l_17, sym__2))
    {
      n_17 = ATgetArgument(l_17, 0);
      o_17 = ATgetArgument(l_17, 1);
      j_17 :
      if(((ATgetType(o_17) == AT_LIST) && ((ATermList) o_17 != ATempty)))
        {
          p_17 = ATgetFirst((ATermList) o_17);
          v_17 = (ATerm) ATgetNext((ATermList) o_17);
          k_17 :
          if(match_cons(p_17, sym__2))
            {
              t_17 = ATgetArgument(p_17, 0);
              u_17 = ATgetArgument(p_17, 1);
              {
                ATerm x_17 = NULL;
                if(((n_17 != NULL) && (n_17 != t_17)))
                  _fail(t_17);
                else
                  n_17 = t_17;
                {
                  if(((x_17 != NULL) && (x_17 != u_17)))
                    _fail(u_17);
                  else
                    x_17 = u_17;
                  t = not_null(x_17);
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
ATerm SubsVar_2 (ATerm t, ATerm q_79 (ATerm), ATerm r_79 (ATerm))
{
  ATerm x_18 = NULL;
  ATerm z_18 = NULL,k_19 = NULL;
  x_18 = t;
  {
    ATerm l_19 = NULL;
    t = not_null(x_18);
    {
      ATerm m_19 = NULL;
      t = q_79(t);
      {
        l_19 = t;
        {
          if(((z_18 != NULL) && (z_18 != l_19)))
            _fail(l_19);
          else
            z_18 = l_19;
          {
            t = r_79(t);
            {
              m_19 = t;
              if(((k_19 != NULL) && (k_19 != m_19)))
                _fail(m_19);
              else
                k_19 = m_19;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_18), not_null(k_19));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm q_19 (ATerm t)
  {
    ATerm z_11 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_78(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = z_11;
        t = _all(t, q_19);
      }
    return(t);
  }
  t = q_19(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym__2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      {
        ATerm a_20 = NULL;
        if(((a_20 != NULL) && (a_20 != x_19)))
          _fail(x_19);
        else
          a_20 = x_19;
      }
    }
  else
    {
      if(match_cons(v_19, sym__3))
        {
          w_19 = ATgetArgument(v_19, 0);
          x_19 = ATgetArgument(v_19, 1);
          y_19 = ATgetArgument(v_19, 2);
          {
            ATerm n_20 = NULL;
            ATerm o_20 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(x_19));
            {
              t = zip_1(t, _id);
              {
                o_20 = t;
                if(((n_20 != NULL) && (n_20 != o_20)))
                  _fail(o_20);
                else
                  n_20 = o_20;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_20), not_null(y_19));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm s_79 (ATerm), ATerm t_79 (ATerm))
{
  ATerm u_20 = NULL,y_20 = NULL,z_20 = NULL;
  t = subs_args_0(t);
  {
    u_20 = t;
    t_20 :
    if(match_cons(u_20, sym__2))
      {
        y_20 = ATgetArgument(u_20, 0);
        z_20 = ATgetArgument(u_20, 1);
        {
          t = not_null(z_20);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(y_20);
                return(t);
              }
              t = SubsVar_2(t, s_79, c_1);
              t = t_79(t);
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
ATerm substitute_1 (ATerm t, ATerm u_79 (ATerm))
{
  t = substitute_2(t, u_79, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm d_56 (ATerm), ATerm e_56 (ATerm))
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_VarDec_2))
    {
      k_21 = ATgetArgument(j_21, 0);
      l_21 = ATgetArgument(j_21, 1);
      {
        ATerm o_21 = NULL;
        t = not_null(k_21);
        {
          ATerm r_21 = NULL;
          t = d_56(t);
          {
            o_21 = t;
            {
              t = not_null(l_21);
              {
                t = e_56(t);
                {
                  r_21 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(o_21), not_null(r_21));
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
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,z_22 = NULL,a_23 = NULL,j_23 = NULL;
  t_22 = t;
  i_22 :
  if(((ATgetType(t_22) == AT_LIST) && ((ATermList) t_22 != ATempty)))
    {
      u_22 = ATgetFirst((ATermList) t_22);
      j_23 = (ATerm) ATgetNext((ATermList) t_22);
      s_22 :
      if(match_cons(u_22, sym_SDef_3))
        {
          v_22 = ATgetArgument(u_22, 0);
          z_22 = ATgetArgument(u_22, 1);
          a_23 = ATgetArgument(u_22, 2);
          {
            ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,s_24 = NULL;
            ATerm m_12;
            m_12 = t;
            {
              ATerm r_23 = NULL;
              t = not_null(z_22);
              {
                ATerm x_23 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  r_23 = t;
                  {
                    if(((o_23 != NULL) && (o_23 != r_23)))
                      _fail(r_23);
                    else
                      o_23 = r_23;
                    {
                      t = not_null(o_23);
                      {
                        ATerm r_24 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
                          s_23 = t;
                          z_21 :
                          if(match_cons(s_23, sym_VarDec_2))
                            {
                              t_23 = ATgetArgument(s_23, 0);
                              u_23 = ATgetArgument(s_23, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_23)), (ATerm) ATempty);
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          x_23 = t;
                          {
                            if(((p_23 != NULL) && (p_23 != x_23)))
                              _fail(x_23);
                            else
                              p_23 = x_23;
                            {
                              t = not_null(t_22);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
                                  a_24 = t;
                                  f_22 :
                                  if(match_cons(a_24, sym_SDef_3))
                                    {
                                      b_24 = ATgetArgument(a_24, 0);
                                      c_24 = ATgetArgument(a_24, 1);
                                      d_24 = ATgetArgument(a_24, 2);
                                      {
                                        ATerm l_24 = NULL;
                                        ATerm q_24 = NULL;
                                        t = not_null(c_24);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
                                            m_24 = t;
                                            d_22 :
                                            if(match_cons(m_24, sym_VarDec_2))
                                              {
                                                n_24 = ATgetArgument(m_24, 0);
                                                o_24 = ATgetArgument(m_24, 1);
                                                t = not_null(n_24);
                                              }
                                            else
                                              _fail(t);
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            q_24 = t;
                                            if(((l_24 != NULL) && (l_24 != q_24)))
                                              _fail(q_24);
                                            else
                                              l_24 = q_24;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(l_24), not_null(p_23), not_null(d_24));
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
                                  r_24 = t;
                                  if(((q_23 != NULL) && (q_23 != r_24)))
                                    _fail(r_24);
                                  else
                                    q_23 = r_24;
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
              ATerm t_24 = NULL;
              t = not_null(q_23);
              {
                t = choices_0(t);
                {
                  t_24 = t;
                  if(((s_24 != NULL) && (s_24 != t_24)))
                    _fail(t_24);
                  else
                    s_24 = t_24;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_22), not_null(o_23), not_null(s_24));
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
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  i_25 :
  if(((ATgetType(k_25) == AT_LIST) && ((ATermList) k_25 != ATempty)))
    {
      l_25 = ATgetFirst((ATermList) k_25);
      m_25 = (ATerm) ATgetNext((ATermList) k_25);
      j_25 :
      if(((ATermList) m_25 == ATempty))
        {
          t = not_null(l_25);
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
  ATerm t_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL;
  t_25 = t;
  r_25 :
  if(match_cons(t_25, sym__2))
    {
      w_25 = ATgetArgument(t_25, 0);
      z_25 = ATgetArgument(t_25, 1);
      s_25 :
      if(match_cons(w_25, sym__2))
        {
          x_25 = ATgetArgument(w_25, 0);
          y_25 = ATgetArgument(w_25, 1);
          {
            ATerm e_26 = NULL;
            ATerm f_26 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_25), not_null(y_25));
            {
              t = Definitions_0(t);
              {
                f_26 = t;
                if(((e_26 != NULL) && (e_26 != f_26)))
                  _fail(f_26);
                else
                  e_26 = f_26;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_26), not_null(z_25));
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
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  b_30 = t;
  z_29 :
  if(match_cons(b_30, sym_ExplodeCong_2))
    {
      c_30 = ATgetArgument(b_30, 0);
      a_30 = ATgetArgument(b_30, 1);
      {
        ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
        ATerm j_30 = NULL;
        ATerm k_30 = NULL;
        t = new_0(t);
        {
          j_30 = t;
          {
            if(((f_30 != NULL) && (f_30 != j_30)))
              _fail(j_30);
            else
              f_30 = j_30;
            {
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
                          t = new_0(t);
                          {
                            m_30 = t;
                            if(((i_30 != NULL) && (i_30 != m_30)))
                              _fail(m_30);
                            else
                              i_30 = m_30;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_30)), not_null(h_30)), not_null(g_30)), not_null(f_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_30)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(c_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_30))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_30), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_30))))), (ATerm) ATmakeAppl(sym_Prim_2, term_p_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_30))), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_30)))))));
      }
    }
  else
    {
      if(match_cons(b_30, sym_Build_1))
        {
          c_30 = ATgetArgument(b_30, 0);
          {
            ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,t_30 = NULL;
            ATerm u_30 = NULL;
            ATerm y_30 = NULL;
            t = new_0(t);
            {
              u_30 = t;
              {
                if(((q_30 != NULL) && (q_30 != u_30)))
                  _fail(u_30);
                else
                  q_30 = u_30;
                {
                  t = not_null(c_30);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
                      v_30 = t;
                      s_29 :
                      if(match_cons(v_30, sym_Explode_2))
                        {
                          w_30 = ATgetArgument(v_30, 0);
                          x_30 = ATgetArgument(v_30, 1);
                          {
                            if(((o_30 != NULL) && (o_30 != w_30)))
                              _fail(w_30);
                            else
                              o_30 = w_30;
                            {
                              if(((p_30 != NULL) && (p_30 != x_30)))
                                _fail(x_30);
                              else
                                p_30 = x_30;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_30));
                            }
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      y_30 = t;
                      if(((t_30 != NULL) && (t_30 != y_30)))
                        _fail(y_30);
                      else
                        t_30 = y_30;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_p_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_30)), not_null(o_30))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_30))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_30)))));
          }
        }
      else
        {
          if(match_cons(b_30, sym_Match_1))
            {
              c_30 = ATgetArgument(b_30, 0);
              {
                ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
                ATerm f_31 = NULL;
                ATerm g_31 = NULL;
                t = new_0(t);
                {
                  f_31 = t;
                  {
                    if(((c_31 != NULL) && (c_31 != f_31)))
                      _fail(f_31);
                    else
                      c_31 = f_31;
                    {
                      ATerm k_31 = NULL;
                      t = new_0(t);
                      {
                        g_31 = t;
                        {
                          if(((d_31 != NULL) && (d_31 != g_31)))
                            _fail(g_31);
                          else
                            d_31 = g_31;
                          {
                            t = not_null(c_30);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
                                h_31 = t;
                                x_29 :
                                if(match_cons(h_31, sym_Explode_2))
                                  {
                                    i_31 = ATgetArgument(h_31, 0);
                                    j_31 = ATgetArgument(h_31, 1);
                                    {
                                      if(((a_31 != NULL) && (a_31 != i_31)))
                                        _fail(i_31);
                                      else
                                        a_31 = i_31;
                                      {
                                        if(((b_31 != NULL) && (b_31 != j_31)))
                                          _fail(j_31);
                                        else
                                          b_31 = j_31;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31));
                                      }
                                    }
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = oncetd_1(t, i_1);
                              {
                                k_31 = t;
                                if(((e_31 != NULL) && (e_31 != k_31)))
                                  _fail(k_31);
                                else
                                  e_31 = k_31;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_31)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_31))), (ATerm) ATmakeAppl(sym_Prim_2, term_q_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_31)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_31)), (ATerm) ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_31)), not_null(a_31)))))));
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
  ATerm j_32 = NULL,k_32 = NULL;
  j_32 = t;
  i_32 :
  if(match_cons(j_32, sym_Match_1))
    {
      k_32 = ATgetArgument(j_32, 0);
      {
        ATerm w_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
            ATerm p_32 = NULL;
            ATerm s_32 = NULL;
            t = new_0(t);
            {
              p_32 = t;
              {
                if(((n_32 != NULL) && (n_32 != p_32)))
                  _fail(p_32);
                else
                  n_32 = p_32;
                {
                  t = not_null(k_32);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm q_32 = NULL,r_32 = NULL;
                      q_32 = t;
                      d_32 :
                      if(match_cons(q_32, sym_RootApp_1))
                        {
                          r_32 = ATgetArgument(q_32, 0);
                          {
                            if(((m_32 != NULL) && (m_32 != r_32)))
                              _fail(r_32);
                            else
                              m_32 = r_32;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_32));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      s_32 = t;
                      if(((o_32 != NULL) && (o_32 != s_32)))
                        _fail(s_32);
                      else
                        o_32 = s_32;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_32))), not_null(m_32))));
            LocalPopChoice(z_12);
          }
        else
          {
            t = w_12;
            {
              ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
              ATerm a_33 = NULL;
              t = not_null(k_32);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
                  x_32 = t;
                  g_32 :
                  if(match_cons(x_32, sym_App_2))
                    {
                      y_32 = ATgetArgument(x_32, 0);
                      z_32 = ATgetArgument(x_32, 1);
                      {
                        if(((u_32 != NULL) && (u_32 != y_32)))
                          _fail(y_32);
                        else
                          u_32 = y_32;
                        {
                          if(((v_32 != NULL) && (v_32 != z_32)))
                            _fail(z_32);
                          else
                            v_32 = z_32;
                          t = term_a_13;
                        }
                      }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = pat_td_1(t, k_1);
                {
                  a_33 = t;
                  if(((w_32 != NULL) && (w_32 != a_33)))
                    _fail(a_33);
                  else
                    w_32 = a_33;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_32)), (ATerm) ATmakeAppl(sym_BA_2, not_null(u_32), not_null(v_32)));
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
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL;
  m_33 = t;
  k_33 :
  if(match_cons(m_33, sym_Match_1))
    {
      n_33 = ATgetArgument(m_33, 0);
      l_33 :
      if(match_cons(n_33, sym_RootApp_1))
        {
          o_33 = ATgetArgument(n_33, 0);
          t = not_null(o_33);
        }
      else
        {
          if(match_cons(n_33, sym_App_2))
            {
              o_33 = ATgetArgument(n_33, 0);
              p_33 = ATgetArgument(n_33, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(o_33), not_null(p_33));
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
  ATerm b_34 = NULL,c_34 = NULL;
  b_34 = t;
  a_34 :
  if(match_cons(b_34, sym_Match_1))
    {
      c_34 = ATgetArgument(b_34, 0);
      {
        ATerm e_34 = NULL,f_34 = NULL;
        ATerm k_34 = NULL;
        t = not_null(c_34);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
            g_34 = t;
            x_33 :
            if(match_cons(g_34, sym_RootApp_1))
              {
                h_34 = ATgetArgument(g_34, 0);
                y_33 :
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
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = pat_td_1(t, l_1);
          {
            k_34 = t;
            if(((f_34 != NULL) && (f_34 != k_34)))
              _fail(k_34);
            else
              f_34 = k_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(f_34));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  z_34 = t;
  y_34 :
  if(match_cons(z_34, sym_Build_1))
    {
      a_35 = ATgetArgument(z_34, 0);
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
            ATerm f_35 = NULL;
            ATerm i_35 = NULL;
            t = new_0(t);
            {
              f_35 = t;
              {
                if(((d_35 != NULL) && (d_35 != f_35)))
                  _fail(f_35);
                else
                  d_35 = f_35;
                {
                  t = not_null(a_35);
                  {
                    ATerm m_1 (ATerm t)
                    {
                      ATerm g_35 = NULL,h_35 = NULL;
                      g_35 = t;
                      s_34 :
                      if(match_cons(g_35, sym_RootApp_1))
                        {
                          h_35 = ATgetArgument(g_35, 0);
                          {
                            if(((c_35 != NULL) && (c_35 != h_35)))
                              _fail(h_35);
                            else
                              c_35 = h_35;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_35));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, m_1);
                    {
                      i_35 = t;
                      if(((e_35 != NULL) && (e_35 != i_35)))
                        _fail(i_35);
                      else
                        e_35 = i_35;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_35))));
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            {
              ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
              ATerm o_35 = NULL;
              ATerm s_35 = NULL;
              t = new_0(t);
              {
                o_35 = t;
                {
                  if(((m_35 != NULL) && (m_35 != o_35)))
                    _fail(o_35);
                  else
                    m_35 = o_35;
                  {
                    t = not_null(a_35);
                    {
                      ATerm n_1 (ATerm t)
                      {
                        ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
                        p_35 = t;
                        w_34 :
                        if(match_cons(p_35, sym_App_2))
                          {
                            q_35 = ATgetArgument(p_35, 0);
                            r_35 = ATgetArgument(p_35, 1);
                            {
                              if(((k_35 != NULL) && (k_35 != q_35)))
                                _fail(q_35);
                              else
                                k_35 = q_35;
                              {
                                if(((l_35 != NULL) && (l_35 != r_35)))
                                  _fail(r_35);
                                else
                                  l_35 = r_35;
                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_35));
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = pat_td_1(t, n_1);
                      {
                        s_35 = t;
                        if(((n_35 != NULL) && (n_35 != s_35)))
                          _fail(s_35);
                        else
                          n_35 = s_35;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(k_35), not_null(l_35), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_35)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_35))));
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
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  f_36 = t;
  d_36 :
  if(match_cons(f_36, sym_Build_1))
    {
      g_36 = ATgetArgument(f_36, 0);
      e_36 :
      if(match_cons(g_36, sym_RootApp_1))
        {
          h_36 = ATgetArgument(g_36, 0);
          t = not_null(h_36);
        }
      else
        {
          if(match_cons(g_36, sym_App_2))
            {
              h_36 = ATgetArgument(g_36, 0);
              i_36 = ATgetArgument(g_36, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_36)), not_null(h_36));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm x_53 (ATerm), ATerm y_53 (ATerm))
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
  w_36 = t;
  v_36 :
  if(match_cons(w_36, sym_Explode_2))
    {
      x_36 = ATgetArgument(w_36, 0);
      y_36 = ATgetArgument(w_36, 1);
      {
        ATerm m_37 = NULL;
        t = not_null(x_36);
        {
          ATerm o_37 = NULL;
          t = x_53(t);
          {
            m_37 = t;
            {
              t = not_null(y_36);
              {
                t = y_53(t);
                {
                  o_37 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(m_37), not_null(o_37));
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
ATerm Op_2 (ATerm t, ATerm g_55 (ATerm), ATerm h_55 (ATerm))
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
  i_38 = t;
  w_37 :
  if(match_cons(i_38, sym_Op_2))
    {
      j_38 = ATgetArgument(i_38, 0);
      k_38 = ATgetArgument(i_38, 1);
      {
        ATerm o_38 = NULL;
        t = not_null(j_38);
        {
          ATerm q_38 = NULL;
          t = g_55(t);
          {
            o_38 = t;
            {
              t = not_null(k_38);
              {
                t = h_55(t);
                {
                  q_38 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(o_38), not_null(q_38));
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
ATerm pat_td_1 (ATerm t, ATerm o_57 (ATerm))
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_57(t);
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm j_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = pat_td_1(t, o_57);
                return(t);
              }
              t = fetch_1(t, p_1);
              return(t);
            }
            t = Op_2(t, _id, o_1);
            LocalPopChoice(l_13);
          }
        else
          {
            t = j_13;
            {
              ATerm m_13 = t;
              int n_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = pat_td_1(t, o_57);
                    return(t);
                  }
                  t = Explode_2(t, _id, q_1);
                  LocalPopChoice(n_13);
                }
              else
                {
                  t = m_13;
                  {
                    ATerm r_1 (ATerm t)
                    {
                      t = pat_td_1(t, o_57);
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
  ATerm n_39 = NULL,s_39 = NULL;
  n_39 = t;
  m_39 :
  if(match_cons(n_39, sym_Build_1))
    {
      s_39 = ATgetArgument(n_39, 0);
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_39 = NULL,v_39 = NULL;
            ATerm d_40 = NULL;
            t = not_null(s_39);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
                a_40 = t;
                d_39 :
                if(match_cons(a_40, sym_RootApp_1))
                  {
                    b_40 = ATgetArgument(a_40, 0);
                    e_39 :
                    if(match_cons(b_40, sym_Build_1))
                      {
                        c_40 = ATgetArgument(b_40, 0);
                        {
                          if(((u_39 != NULL) && (u_39 != c_40)))
                            _fail(c_40);
                          else
                            u_39 = c_40;
                          t = not_null(u_39);
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
                d_40 = t;
                if(((v_39 != NULL) && (v_39 != d_40)))
                  _fail(d_40);
                else
                  v_39 = d_40;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(v_39));
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            {
              ATerm f_40 = NULL,i_40 = NULL,j_40 = NULL;
              ATerm o_40 = NULL;
              t = not_null(s_39);
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
                  k_40 = t;
                  j_39 :
                  if(match_cons(k_40, sym_App_2))
                    {
                      l_40 = ATgetArgument(k_40, 0);
                      n_40 = ATgetArgument(k_40, 1);
                      k_39 :
                      if(match_cons(l_40, sym_Build_1))
                        {
                          m_40 = ATgetArgument(l_40, 0);
                          {
                            if(((i_40 != NULL) && (i_40 != m_40)))
                              _fail(m_40);
                            else
                              i_40 = m_40;
                            {
                              if(((f_40 != NULL) && (f_40 != n_40)))
                                _fail(n_40);
                              else
                                f_40 = n_40;
                              t = not_null(i_40);
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
                  o_40 = t;
                  if(((j_40 != NULL) && (j_40 != o_40)))
                    _fail(o_40);
                  else
                    j_40 = o_40;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_40));
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
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
  p_41 = t;
  h_41 :
  if(match_cons(p_41, sym_InfixApp_3))
    {
      q_41 = ATgetArgument(p_41, 0);
      m_41 = ATgetArgument(p_41, 1);
      l_41 = ATgetArgument(p_41, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_41), (ATerm) ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_41)), not_null(q_41))));
    }
  else
    {
      if(match_cons(p_41, sym_BAM_3))
        {
          q_41 = ATgetArgument(p_41, 0);
          m_41 = ATgetArgument(p_41, 1);
          l_41 = ATgetArgument(p_41, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(l_41))), not_null(q_41)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_41))));
        }
      else
        {
          if(match_cons(p_41, sym_AM_2))
            {
              q_41 = ATgetArgument(p_41, 0);
              m_41 = ATgetArgument(p_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_41), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_41)));
            }
          else
            {
              if(match_cons(p_41, sym_MA_2))
                {
                  q_41 = ATgetArgument(p_41, 0);
                  m_41 = ATgetArgument(p_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_41)), not_null(m_41));
                }
              else
                {
                  if(match_cons(p_41, sym_BA_2))
                    {
                      q_41 = ATgetArgument(p_41, 0);
                      m_41 = ATgetArgument(p_41, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_41)), not_null(q_41));
                    }
                  else
                    {
                      if(match_cons(p_41, sym_Lets_2))
                        {
                          q_41 = ATgetArgument(p_41, 0);
                          m_41 = ATgetArgument(p_41, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_41), not_null(m_41));
                        }
                      else
                        {
                          if(match_cons(p_41, sym_LChoices_1))
                            {
                              q_41 = ATgetArgument(p_41, 0);
                              i_41 :
                              if(((ATgetType(q_41) == AT_LIST) && ((ATermList) q_41 != ATempty)))
                                {
                                  n_41 = ATgetFirst((ATermList) q_41);
                                  o_41 = (ATerm) ATgetNext((ATermList) q_41);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_41), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(o_41)));
                                }
                              else
                                {
                                  if(((ATermList) q_41 == ATempty))
                                    {
                                      t = term_q_11;
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(p_41, sym_Choices_1))
                                {
                                  q_41 = ATgetArgument(p_41, 0);
                                  j_41 :
                                  if(((ATgetType(q_41) == AT_LIST) && ((ATermList) q_41 != ATempty)))
                                    {
                                      n_41 = ATgetFirst((ATermList) q_41);
                                      o_41 = (ATerm) ATgetNext((ATermList) q_41);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_41), (ATerm) ATmakeAppl(sym_Choices_1, not_null(o_41)));
                                    }
                                  else
                                    {
                                      if(((ATermList) q_41 == ATempty))
                                        {
                                          t = term_q_11;
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(p_41, sym_Seqs_1))
                                    {
                                      q_41 = ATgetArgument(p_41, 0);
                                      k_41 :
                                      if(((ATgetType(q_41) == AT_LIST) && ((ATermList) q_41 != ATempty)))
                                        {
                                          n_41 = ATgetFirst((ATermList) q_41);
                                          o_41 = (ATerm) ATgetNext((ATermList) q_41);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_41), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_41)));
                                        }
                                      else
                                        {
                                          if(((ATermList) q_41 == ATempty))
                                            {
                                              t = term_q_13;
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
ATerm repeat_2 (ATerm t, ATerm u_63 (ATerm), ATerm v_63 (ATerm))
{
  ATerm c_43 (ATerm t)
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_63(t);
        t = c_43(t);
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        t = v_63(t);
      }
    return(t);
  }
  t = c_43(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_63 (ATerm))
{
  t = repeat_2(t, x_63, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm e_43 = NULL;
  e_43 = t;
  d_43 :
  if(!(match_cons(e_43, sym_Wld_0)))
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
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
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
ATerm App_2 (ATerm t, ATerm r_53 (ATerm), ATerm s_53 (ATerm))
{
  ATerm v_43 = NULL,w_43 = NULL,y_43 = NULL;
  v_43 = t;
  u_43 :
  if(match_cons(v_43, sym_App_2))
    {
      w_43 = ATgetArgument(v_43, 0);
      y_43 = ATgetArgument(v_43, 1);
      {
        ATerm b_44 = NULL;
        t = not_null(w_43);
        {
          ATerm d_44 = NULL;
          t = r_53(t);
          {
            b_44 = t;
            {
              t = not_null(y_43);
              {
                t = s_53(t);
                {
                  d_44 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(b_44), not_null(d_44));
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
ATerm Con_3 (ATerm t, ATerm o_53 (ATerm), ATerm p_53 (ATerm), ATerm q_53 (ATerm))
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL;
  b_45 = t;
  x_44 :
  if(match_cons(b_45, sym_Con_3))
    {
      c_45 = ATgetArgument(b_45, 0);
      d_45 = ATgetArgument(b_45, 1);
      e_45 = ATgetArgument(b_45, 2);
      {
        ATerm i_45 = NULL;
        t = not_null(c_45);
        {
          ATerm k_45 = NULL;
          t = o_53(t);
          {
            i_45 = t;
            {
              t = not_null(d_45);
              {
                ATerm m_45 = NULL;
                t = p_53(t);
                {
                  k_45 = t;
                  {
                    t = not_null(e_45);
                    {
                      t = q_53(t);
                      {
                        m_45 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(i_45), not_null(k_45), not_null(m_45));
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
  ATerm y_13 = t;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, v_1);
      PopChoice();
      _fail(t);
    }
  else
    t = y_13;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
  w_45 = t;
  u_45 :
  if(match_cons(w_45, sym_SRule_1))
    {
      x_45 = ATgetArgument(w_45, 0);
      v_45 :
      if(match_cons(x_45, sym_StratRule_3))
        {
          y_45 = ATgetArgument(x_45, 0);
          z_45 = ATgetArgument(x_45, 1);
          a_46 = ATgetArgument(x_45, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_45)), (ATerm) ATmakeAppl(sym_Where_1, not_null(a_46))), not_null(y_45)));
        }
      else
        {
          if(match_cons(x_45, sym_Rule_3))
            {
              y_45 = ATgetArgument(x_45, 0);
              z_45 = ATgetArgument(x_45, 1);
              a_46 = ATgetArgument(x_45, 2);
              {
                t = not_null(y_45);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(z_45);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(z_45))), (ATerm) ATmakeAppl(sym_Where_1, not_null(a_46))), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_45))));
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
ATerm Scope_2 (ATerm t, ATerm a_57 (ATerm), ATerm b_57 (ATerm))
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
  n_46 = t;
  m_46 :
  if(match_cons(n_46, sym_Scope_2))
    {
      o_46 = ATgetArgument(n_46, 0);
      p_46 = ATgetArgument(n_46, 1);
      {
        ATerm u_46 = NULL;
        t = not_null(o_46);
        {
          ATerm w_46 = NULL;
          t = a_57(t);
          {
            u_46 = t;
            {
              t = not_null(p_46);
              {
                t = b_57(t);
                {
                  w_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_46), not_null(w_46));
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
ATerm oncetd_1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm b_47 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_78(t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = _one(t, b_47);
      }
    return(t);
  }
  t = b_47(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
  q_47 = t;
  o_47 :
  if(match_cons(q_47, sym_SRule_1))
    {
      r_47 = ATgetArgument(q_47, 0);
      p_47 :
      if(match_cons(r_47, sym_Rule_3))
        {
          s_47 = ATgetArgument(r_47, 0);
          t_47 = ATgetArgument(r_47, 1);
          u_47 = ATgetArgument(r_47, 2);
          {
            ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL;
            ATerm g_48 = NULL;
            ATerm m_48 = NULL;
            t = new_0(t);
            {
              g_48 = t;
              {
                if(((d_48 != NULL) && (d_48 != g_48)))
                  _fail(g_48);
                else
                  d_48 = g_48;
                {
                  t = not_null(s_47);
                  {
                    ATerm u_48 = NULL;
                    ATerm w_1 (ATerm t)
                    {
                      ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
                      h_48 = t;
                      f_47 :
                      if(match_cons(h_48, sym_Con_3))
                        {
                          i_48 = ATgetArgument(h_48, 0);
                          k_48 = ATgetArgument(h_48, 1);
                          l_48 = ATgetArgument(h_48, 2);
                          g_47 :
                          if(match_cons(i_48, sym_Var_1))
                            {
                              j_48 = ATgetArgument(i_48, 0);
                              {
                                if(((c_48 != NULL) && (c_48 != j_48)))
                                  _fail(j_48);
                                else
                                  c_48 = j_48;
                                {
                                  if(((a_48 != NULL) && (a_48 != k_48)))
                                    _fail(k_48);
                                  else
                                    a_48 = k_48;
                                  {
                                    if(((y_47 != NULL) && (y_47 != l_48)))
                                      _fail(l_48);
                                    else
                                      y_47 = l_48;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_48));
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
                      m_48 = t;
                      {
                        if(((e_48 != NULL) && (e_48 != m_48)))
                          _fail(m_48);
                        else
                          e_48 = m_48;
                        {
                          t = not_null(t_47);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
                              n_48 = t;
                              j_47 :
                              if(match_cons(n_48, sym_Con_3))
                                {
                                  o_48 = ATgetArgument(n_48, 0);
                                  q_48 = ATgetArgument(n_48, 1);
                                  r_48 = ATgetArgument(n_48, 2);
                                  k_47 :
                                  if(match_cons(o_48, sym_Var_1))
                                    {
                                      p_48 = ATgetArgument(o_48, 0);
                                      l_47 :
                                      if(match_cons(r_48, sym_Call_2))
                                        {
                                          s_48 = ATgetArgument(r_48, 0);
                                          t_48 = ATgetArgument(r_48, 1);
                                          m_47 :
                                          if(((ATermList) t_48 == ATempty))
                                            {
                                              {
                                                if(((c_48 != NULL) && (c_48 != p_48)))
                                                  _fail(p_48);
                                                else
                                                  c_48 = p_48;
                                                {
                                                  if(((b_48 != NULL) && (b_48 != q_48)))
                                                    _fail(q_48);
                                                  else
                                                    b_48 = q_48;
                                                  {
                                                    if(((z_47 != NULL) && (z_47 != s_48)))
                                                      _fail(s_48);
                                                    else
                                                      z_47 = s_48;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_48));
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
                              u_48 = t;
                              if(((f_48 != NULL) && (f_48 != u_48)))
                                _fail(u_48);
                              else
                                f_48 = u_48;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_48)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_48), not_null(f_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_47), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(z_47), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_48), not_null(b_48), term_q_13)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_48)), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_48)))))));
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
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        {
          ATerm f_14 = t;
          int g_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(g_14);
            }
          else
            {
              t = f_14;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, y_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm k_76 (ATerm))
{
  ATerm c_49 (ATerm t)
  {
    t = k_76(t);
    t = _all(t, c_49);
    return(t);
  }
  t = c_49(t);
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
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HL_0(t);
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
                  ATerm l_14 = t;
                  int m_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Bapp0_0(t);
                      LocalPopChoice(m_14);
                    }
                  else
                    {
                      t = l_14;
                      {
                        ATerm n_14 = t;
                        int o_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Bapp1_0(t);
                            LocalPopChoice(o_14);
                          }
                        else
                          {
                            t = n_14;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  LocalPopChoice(k_14);
                }
              else
                {
                  t = j_14;
                  {
                    ATerm p_14 = t;
                    int q_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_14 = t;
                        int s_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Mapp0_0(t);
                            LocalPopChoice(s_14);
                          }
                        else
                          {
                            t = r_14;
                            {
                              ATerm t_14 = t;
                              int u_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Mapp1_0(t);
                                  LocalPopChoice(u_14);
                                }
                              else
                                {
                                  t = t_14;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        LocalPopChoice(q_14);
                      }
                    else
                      {
                        t = p_14;
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
  ATerm e_49 = NULL;
  e_49 = t;
  d_49 :
  if(!(match_cons(e_49, sym__0)))
    _fail(t);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm m_49 = NULL;
  ATerm o_49 = NULL,p_49 = NULL,x_49 = NULL;
  m_49 = t;
  {
    ATerm v_14;
    v_14 = t;
    {
      ATerm q_49 = NULL;
      ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL;
      t = not_null(m_49);
      {
        q_49 = t;
        {
          t = SSL_explode_term(not_null(q_49));
          {
            s_49 = t;
            i_49 :
            if(match_cons(s_49, sym__2))
              {
                t_49 = ATgetArgument(s_49, 0);
                u_49 = ATgetArgument(s_49, 1);
                j_49 :
                if(match_string(t_49, ""))
                  {
                    k_49 :
                    if(((ATgetType(u_49) == AT_LIST) && ((ATermList) u_49 != ATempty)))
                      {
                        v_49 = ATgetFirst((ATermList) u_49);
                        w_49 = (ATerm) ATgetNext((ATermList) u_49);
                        {
                          if(((o_49 != NULL) && (o_49 != v_49)))
                            _fail(v_49);
                          else
                            o_49 = v_49;
                          if(((p_49 != NULL) && (p_49 != w_49)))
                            _fail(w_49);
                          else
                            p_49 = w_49;
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
    t = v_14;
    {
      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(p_49));
      {
        x_49 = t;
        t = not_null(x_49);
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm j_50 = NULL;
  ATerm l_50 = NULL,m_50 = NULL;
  j_50 = t;
  {
    ATerm n_50 = NULL;
    ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
    t = not_null(j_50);
    {
      n_50 = t;
      {
        t = SSL_explode_term(not_null(n_50));
        {
          p_50 = t;
          g_50 :
          if(match_cons(p_50, sym__2))
            {
              q_50 = ATgetArgument(p_50, 0);
              r_50 = ATgetArgument(p_50, 1);
              h_50 :
              if(match_string(q_50, ""))
                {
                  i_50 :
                  if(((ATgetType(r_50) == AT_LIST) && ((ATermList) r_50 != ATempty)))
                    {
                      s_50 = ATgetFirst((ATermList) r_50);
                      t_50 = (ATerm) ATgetNext((ATermList) r_50);
                      {
                        if(((m_50 != NULL) && (m_50 != s_50)))
                          _fail(s_50);
                        else
                          m_50 = s_50;
                        if(((l_50 != NULL) && (l_50 != t_50)))
                          _fail(t_50);
                        else
                          l_50 = t_50;
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
    t = not_null(m_50);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm t_75 (ATerm))
{
  ATerm f_51 = NULL,h_51 = NULL;
  ATerm j_51 (ATerm t)
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_51 = NULL,d_51 = NULL;
        ATerm y_14;
        y_14 = t;
        {
          ATerm c_51 = NULL;
          t = map_1(t, Thd_0);
          {
            t = t_75(t);
            {
              c_51 = t;
              if(((b_51 != NULL) && (b_51 != c_51)))
                _fail(c_51);
              else
                b_51 = c_51;
            }
          }
        }
        t = y_14;
        {
          ATerm e_51 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = j_51(t);
            {
              e_51 = t;
              if(((d_51 != NULL) && (d_51 != e_51)))
                _fail(e_51);
              else
                d_51 = e_51;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(d_51)), not_null(b_51));
        }
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = j_51(t);
  {
    ATerm z_14;
    z_14 = t;
    {
      ATerm g_51 = NULL;
      g_51 = t;
      if(((f_51 != NULL) && (f_51 != g_51)))
        _fail(g_51);
      else
        f_51 = g_51;
    }
    t = z_14;
    {
      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(f_51));
      {
        h_51 = t;
        t = not_null(h_51);
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm s_51 = NULL;
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  s_51 = t;
  {
    ATerm x_51 = NULL;
    ATerm y_51 = NULL;
    t = new_0(t);
    {
      x_51 = t;
      {
        if(((u_51 != NULL) && (u_51 != x_51)))
          _fail(x_51);
        else
          u_51 = x_51;
        {
          ATerm z_51 = NULL;
          t = new_0(t);
          {
            y_51 = t;
            {
              if(((v_51 != NULL) && (v_51 != y_51)))
                _fail(y_51);
              else
                v_51 = y_51;
              {
                t = new_0(t);
                {
                  z_51 = t;
                  if(((w_51 != NULL) && (w_51 != z_51)))
                    _fail(z_51);
                  else
                    w_51 = z_51;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_51)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_51)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_51))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_51), term_e_15), not_null(v_51), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_51)), not_null(w_51), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_51)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm g_52 = NULL,j_52 = NULL,k_52 = NULL;
  g_52 = t;
  f_52 :
  if(match_cons(g_52, sym__2))
    {
      j_52 = ATgetArgument(g_52, 0);
      k_52 = ATgetArgument(g_52, 1);
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_52), not_null(k_52));
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            t = SSL_subtr(not_null(j_52), not_null(k_52));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  p_52 :
  if(match_cons(q_52, sym__2))
    {
      r_52 = ATgetArgument(q_52, 0);
      s_52 = ATgetArgument(q_52, 1);
      {
        ATerm h_15;
        h_15 = t;
        {
          ATerm i_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_52), not_null(s_52));
              LocalPopChoice(j_15);
            }
          else
            {
              t = i_15;
              t = SSL_gtr(not_null(r_52), not_null(s_52));
            }
        }
        t = h_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm y_52 = NULL;
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
      z_52 = t;
      x_52 :
      if(match_cons(z_52, sym__2))
        {
          a_53 = ATgetArgument(z_52, 0);
          b_53 = ATgetArgument(z_52, 1);
          {
            if(((y_52 != NULL) && (y_52 != a_53)))
              _fail(a_53);
            else
              y_52 = a_53;
            if(((y_52 != NULL) && (y_52 != b_53)))
              _fail(b_53);
            else
              y_52 = b_53;
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm l_69 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm m_53 = NULL,n_53 = NULL,t_53 = NULL;
    m_53 = t;
    e_53 :
    if(match_cons(m_53, sym__2))
      {
        n_53 = ATgetArgument(m_53, 0);
        t_53 = ATgetArgument(m_53, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_53), not_null(t_53), (ATerm) ATempty);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm w_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
    w_53 = t;
    g_53 :
    if(match_cons(w_53, sym__3))
      {
        z_53 = ATgetArgument(w_53, 0);
        a_54 = ATgetArgument(w_53, 1);
        b_54 = ATgetArgument(w_53, 2);
        h_53 :
        if(match_int(z_53, 0))
          t = not_null(b_54);
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
    e_54 = t;
    l_53 :
    if(match_cons(e_54, sym__3))
      {
        f_54 = ATgetArgument(e_54, 0);
        g_54 = ATgetArgument(e_54, 1);
        h_54 = ATgetArgument(e_54, 2);
        {
          ATerm l_54 = NULL,n_54 = NULL;
          ATerm m_15;
          m_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_54), term_f_9);
            t = geq_0(t);
          }
          t = m_15;
          {
            ATerm n_15;
            n_15 = t;
            {
              ATerm m_54 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_54), term_f_9);
              {
                t = subt_0(t);
                {
                  m_54 = t;
                  if(((l_54 != NULL) && (l_54 != m_54)))
                    _fail(m_54);
                  else
                    l_54 = m_54;
                }
              }
            }
            t = n_15;
            {
              ATerm o_54 = NULL;
              t = not_null(g_54);
              {
                t = l_69(t);
                {
                  o_54 = t;
                  if(((n_54 != NULL) && (n_54 != o_54)))
                    _fail(o_54);
                  else
                    n_54 = o_54;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(l_54), not_null(g_54), (ATerm) ATinsert(CheckATermList(not_null(h_54)), not_null(n_54)));
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
  ATerm a_55 = NULL,c_55 = NULL,d_55 = NULL;
  a_55 = t;
  y_54 :
  if(match_cons(a_55, sym__2))
    {
      c_55 = ATgetArgument(a_55, 0);
      d_55 = ATgetArgument(a_55, 1);
      {
        ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
        ATerm l_55 = NULL;
        ATerm m_55 = NULL;
        t = new_0(t);
        {
          l_55 = t;
          {
            if(((i_55 != NULL) && (i_55 != l_55)))
              _fail(l_55);
            else
              i_55 = l_55;
            {
              ATerm n_55 = NULL;
              t = new_0(t);
              {
                m_55 = t;
                {
                  if(((j_55 != NULL) && (j_55 != m_55)))
                    _fail(m_55);
                  else
                    j_55 = m_55;
                  {
                    t = new_0(t);
                    {
                      n_55 = t;
                      if(((k_55 != NULL) && (k_55 != n_55)))
                        _fail(n_55);
                      else
                        k_55 = n_55;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_55)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_55))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_55)))), (ATerm) ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_55))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_55))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(i_55), term_e_15), not_null(j_55), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_55)), not_null(k_55), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_55)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm v_55 = NULL,f_56 = NULL,g_56 = NULL;
  v_55 = t;
  t_55 :
  if(match_cons(v_55, sym__2))
    {
      f_56 = ATgetArgument(v_55, 0);
      g_56 = ATgetArgument(v_55, 1);
      u_55 :
      if(((ATermList) g_56 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm y_73 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, y_73);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
  k_56 = t;
  j_56 :
  if(((ATgetType(k_56) == AT_LIST) && ((ATermList) k_56 != ATempty)))
    {
      l_56 = ATgetFirst((ATermList) k_56);
      m_56 = (ATerm) ATgetNext((ATermList) k_56);
      t = not_null(m_56);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
  t_56 = t;
  r_56 :
  if(((ATgetType(t_56) == AT_LIST) && ((ATermList) t_56 != ATempty)))
    {
      u_56 = ATgetFirst((ATermList) t_56);
      v_56 = (ATerm) ATgetNext((ATermList) t_56);
      s_56 :
      if(((ATermList) v_56 == ATempty))
        {
          t = not_null(u_56);
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
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,f_58 = NULL;
  ATerm l_60 (ATerm t)
  {
    ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,h_59 = NULL;
    ATerm q_15;
    q_15 = t;
    {
      ATerm u_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
      ATerm v_58 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_58), term_f_9);
      {
        t = add_0(t);
        {
          v_58 = t;
          if(((u_58 != NULL) && (u_58 != v_58)))
            _fail(v_58);
          else
            u_58 = v_58;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_58), term_r_15);
        {
          t = copy_1(t, new_0);
          {
            w_58 = t;
            l_57 :
            if(((ATgetType(w_58) == AT_LIST) && ((ATermList) w_58 != ATempty)))
              {
                x_58 = ATgetFirst((ATermList) w_58);
                y_58 = (ATerm) ATgetNext((ATermList) w_58);
                {
                  ATerm z_58 = NULL;
                  if(((j_58 != NULL) && (j_58 != x_58)))
                    _fail(x_58);
                  else
                    j_58 = x_58;
                  {
                    if(((k_58 != NULL) && (k_58 != y_58)))
                      _fail(y_58);
                    else
                      k_58 = y_58;
                    {
                      t = not_null(k_58);
                      {
                        ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
                        t = last_0(t);
                        {
                          z_58 = t;
                          {
                            if(((i_58 != NULL) && (i_58 != z_58)))
                              _fail(z_58);
                            else
                              i_58 = z_58;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_58)), not_null(j_58)), not_null(k_58));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    a_59 = t;
                                    k_57 :
                                    if(match_cons(a_59, sym__6))
                                      {
                                        b_59 = ATgetArgument(a_59, 0);
                                        c_59 = ATgetArgument(a_59, 1);
                                        d_59 = ATgetArgument(a_59, 2);
                                        e_59 = ATgetArgument(a_59, 3);
                                        f_59 = ATgetArgument(a_59, 4);
                                        g_59 = ATgetArgument(a_59, 5);
                                        {
                                          if(((o_58 != NULL) && (o_58 != b_59)))
                                            _fail(b_59);
                                          else
                                            o_58 = b_59;
                                          {
                                            if(((p_58 != NULL) && (p_58 != c_59)))
                                              _fail(c_59);
                                            else
                                              p_58 = c_59;
                                            {
                                              if(((q_58 != NULL) && (q_58 != d_59)))
                                                _fail(d_59);
                                              else
                                                q_58 = d_59;
                                              {
                                                if(((r_58 != NULL) && (r_58 != e_59)))
                                                  _fail(e_59);
                                                else
                                                  r_58 = e_59;
                                                {
                                                  if(((s_58 != NULL) && (s_58 != f_59)))
                                                    _fail(f_59);
                                                  else
                                                    s_58 = f_59;
                                                  if(((t_58 != NULL) && (t_58 != g_59)))
                                                    _fail(g_59);
                                                  else
                                                    t_58 = g_59;
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
    t = q_15;
    {
      ATerm i_59 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(s_58)), not_null(q_58)), not_null(k_58));
      {
        t = concat_0(t);
        {
          i_59 = t;
          if(((h_59 != NULL) && (h_59 != i_59)))
            _fail(i_59);
          else
            h_59 = i_59;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(a_58), term_s_15), not_null(p_58), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(h_59)), not_null(j_58)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_58))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_58), not_null(r_58)))), (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_58))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_58), not_null(t_58)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_58))))));
    }
    return(t);
  }
  ATerm m_60 (ATerm t)
  {
    ATerm k_59 = NULL;
    ATerm l_59 = NULL;
    t = new_0(t);
    {
      l_59 = t;
      if(((k_59 != NULL) && (k_59 != l_59)))
        _fail(l_59);
      else
        k_59 = l_59;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(a_58), term_s_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_59)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_58), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_58), (ATerm) ATempty))), term_q_13))));
    return(t);
  }
  ATerm n_60 (ATerm t)
  {
    ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,j_60 = NULL;
    ATerm t_15;
    t_15 = t;
    {
      ATerm v_59 = NULL;
      ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL;
      t = new_0(t);
      {
        v_59 = t;
        {
          if(((o_59 != NULL) && (o_59 != v_59)))
            _fail(v_59);
          else
            o_59 = v_59;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_58), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_59)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  c_60 = t;
                  s_57 :
                  if(match_cons(c_60, sym__6))
                    {
                      d_60 = ATgetArgument(c_60, 0);
                      e_60 = ATgetArgument(c_60, 1);
                      f_60 = ATgetArgument(c_60, 2);
                      g_60 = ATgetArgument(c_60, 3);
                      h_60 = ATgetArgument(c_60, 4);
                      i_60 = ATgetArgument(c_60, 5);
                      {
                        if(((p_59 != NULL) && (p_59 != d_60)))
                          _fail(d_60);
                        else
                          p_59 = d_60;
                        {
                          if(((q_59 != NULL) && (q_59 != e_60)))
                            _fail(e_60);
                          else
                            q_59 = e_60;
                          {
                            if(((r_59 != NULL) && (r_59 != f_60)))
                              _fail(f_60);
                            else
                              r_59 = f_60;
                            {
                              if(((s_59 != NULL) && (s_59 != g_60)))
                                _fail(g_60);
                              else
                                s_59 = g_60;
                              {
                                if(((t_59 != NULL) && (t_59 != h_60)))
                                  _fail(h_60);
                                else
                                  t_59 = h_60;
                                if(((u_59 != NULL) && (u_59 != i_60)))
                                  _fail(i_60);
                                else
                                  u_59 = i_60;
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
    t = t_15;
    {
      ATerm k_60 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_59), not_null(t_59));
      {
        t = conc_0(t);
        {
          k_60 = t;
          if(((j_60 != NULL) && (j_60 != k_60)))
            _fail(k_60);
          else
            j_60 = k_60;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(a_58), term_u_15), not_null(q_59), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(j_60)), not_null(o_59)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_58), not_null(s_59)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(a_58), not_null(u_59)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_59))))));
    }
    return(t);
  }
  z_57 = t;
  u_57 :
  if(match_cons(z_57, sym__3))
    {
      a_58 = ATgetArgument(z_57, 0);
      b_58 = ATgetArgument(z_57, 1);
      f_58 = ATgetArgument(z_57, 2);
      v_57 :
      if(match_string(b_58, "T"))
        {
          x_57 :
          if(match_int(f_58, 0))
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_60(t);
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = v_15;
                  t = m_60(t);
                }
            }
          else
            t = l_60(t);
        }
      else
        {
          if(match_string(b_58, "D"))
            t = n_60(t);
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
  ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  j_61 = t;
  d_61 :
  if(match_cons(j_61, sym__2))
    {
      k_61 = ATgetArgument(j_61, 0);
      p_61 = ATgetArgument(j_61, 1);
      e_61 :
      if(match_cons(k_61, sym__2))
        {
          l_61 = ATgetArgument(k_61, 0);
          o_61 = ATgetArgument(k_61, 1);
          i_61 :
          if(match_cons(l_61, sym_Mod_2))
            {
              m_61 = ATgetArgument(l_61, 0);
              n_61 = ATgetArgument(l_61, 1);
              {
                ATerm w_61 = NULL;
                ATerm x_61 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(m_61), not_null(n_61), not_null(o_61));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      x_61 = t;
                      if(((w_61 != NULL) && (w_61 != x_61)))
                        _fail(x_61);
                      else
                        w_61 = x_61;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_61), not_null(p_61));
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
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL;
  d_62 = t;
  b_62 :
  if(match_cons(d_62, sym__5))
    {
      e_62 = ATgetArgument(d_62, 0);
      h_62 = ATgetArgument(d_62, 1);
      i_62 = ATgetArgument(d_62, 2);
      j_62 = ATgetArgument(d_62, 3);
      k_62 = ATgetArgument(d_62, 4);
      c_62 :
      if(((ATgetType(e_62) == AT_LIST) && ((ATermList) e_62 != ATempty)))
        {
          f_62 = ATgetFirst((ATermList) e_62);
          g_62 = (ATerm) ATgetNext((ATermList) e_62);
          t = (ATerm) ATmakeAppl(sym__5, not_null(g_62), not_null(h_62), not_null(i_62), not_null(j_62), (ATerm) ATinsert(CheckATermList(not_null(k_62)), not_null(f_62)));
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
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL;
  u_62 = t;
  t_62 :
  if(match_cons(u_62, sym__2))
    {
      v_62 = ATgetArgument(u_62, 0);
      w_62 = ATgetArgument(u_62, 1);
      {
        t = not_null(v_62);
        {
          ATerm e_2 (ATerm t)
          {
            t = not_null(w_62);
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
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL;
  d_63 = t;
  b_63 :
  if(match_cons(d_63, sym__2))
    {
      e_63 = ATgetArgument(d_63, 0);
      f_63 = ATgetArgument(d_63, 1);
      c_63 :
      if(((ATgetType(f_63) == AT_LIST) && ((ATermList) f_63 != ATempty)))
        {
          g_63 = ATgetFirst((ATermList) f_63);
          h_63 = (ATerm) ATgetNext((ATermList) f_63);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_63)), not_null(g_63)), not_null(h_63));
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
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
  o_63 = t;
  n_63 :
  if(match_cons(o_63, sym__2))
    {
      p_63 = ATgetArgument(o_63, 0);
      q_63 = ATgetArgument(o_63, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_63)), not_null(p_63));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL;
  c_64 = t;
  z_63 :
  if(match_cons(c_64, sym__2))
    {
      d_64 = ATgetArgument(c_64, 0);
      g_64 = ATgetArgument(c_64, 1);
      a_64 :
      if(((ATgetType(d_64) == AT_LIST) && ((ATermList) d_64 != ATempty)))
        {
          e_64 = ATgetFirst((ATermList) d_64);
          f_64 = (ATerm) ATgetNext((ATermList) d_64);
          b_64 :
          if(((ATgetType(g_64) == AT_LIST) && ((ATermList) g_64 != ATempty)))
            {
              h_64 = ATgetFirst((ATermList) g_64);
              i_64 = (ATerm) ATgetNext((ATermList) g_64);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_64), not_null(h_64)), (ATerm) ATmakeAppl(sym__2, not_null(f_64), not_null(i_64)));
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
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL;
  y_64 = t;
  v_64 :
  if(match_cons(y_64, sym__2))
    {
      z_64 = ATgetArgument(y_64, 0);
      a_65 = ATgetArgument(y_64, 1);
      w_64 :
      if(((ATermList) z_64 == ATempty))
        {
          x_64 :
          if(((ATermList) a_65 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t_73 (ATerm))
{
  ATerm c_65 (ATerm t)
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_73(t);
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        {
          t = r_73(t);
          {
            t = _2(t, t_73, c_65);
            t = s_73(t);
          }
        }
      }
    return(t);
  }
  t = c_65(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm v_73 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_73);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL;
  n_65 = t;
  l_65 :
  if(((ATgetType(n_65) == AT_LIST) && ((ATermList) n_65 != ATempty)))
    {
      o_65 = ATgetFirst((ATermList) n_65);
      r_65 = (ATerm) ATgetNext((ATermList) n_65);
      m_65 :
      if(match_cons(o_65, sym__2))
        {
          p_65 = ATgetArgument(o_65, 0);
          q_65 = ATgetArgument(o_65, 1);
          {
            ATerm v_65 = NULL,w_65 = NULL,c_66 = NULL,i_66 = NULL;
            ATerm b_16;
            b_16 = t;
            {
              ATerm x_65 = NULL;
              ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
              t = not_null(q_65);
              {
                x_65 = t;
                {
                  t = SSL_explode_term(not_null(x_65));
                  {
                    z_65 = t;
                    g_65 :
                    if(match_cons(z_65, sym__2))
                      {
                        a_66 = ATgetArgument(z_65, 0);
                        b_66 = ATgetArgument(z_65, 1);
                        {
                          if(((v_65 != NULL) && (v_65 != a_66)))
                            _fail(a_66);
                          else
                            v_65 = a_66;
                          if(((w_65 != NULL) && (w_65 != b_66)))
                            _fail(b_66);
                          else
                            w_65 = b_66;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = b_16;
            {
              ATerm c_16;
              c_16 = t;
              {
                ATerm d_66 = NULL;
                ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
                t = not_null(p_65);
                {
                  d_66 = t;
                  {
                    t = SSL_explode_term(not_null(d_66));
                    {
                      f_66 = t;
                      j_65 :
                      if(match_cons(f_66, sym__2))
                        {
                          g_66 = ATgetArgument(f_66, 0);
                          h_66 = ATgetArgument(f_66, 1);
                          {
                            if(((v_65 != NULL) && (v_65 != g_66)))
                              _fail(g_66);
                            else
                              v_65 = g_66;
                            if(((c_66 != NULL) && (c_66 != h_66)))
                              _fail(h_66);
                            else
                              c_66 = h_66;
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
                ATerm j_66 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_66), not_null(w_65));
                {
                  t = zip_1(t, _id);
                  {
                    j_66 = t;
                    if(((i_66 != NULL) && (i_66 != j_66)))
                      _fail(j_66);
                    else
                      i_66 = j_66;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_66), not_null(r_65));
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
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  y_66 = t;
  w_66 :
  if(((ATgetType(y_66) == AT_LIST) && ((ATermList) y_66 != ATempty)))
    {
      z_66 = ATgetFirst((ATermList) y_66);
      c_67 = (ATerm) ATgetNext((ATermList) y_66);
      x_66 :
      if(match_cons(z_66, sym__2))
        {
          a_67 = ATgetArgument(z_66, 0);
          b_67 = ATgetArgument(z_66, 1);
          {
            ATerm e_67 = NULL;
            if(((a_67 != NULL) && (a_67 != b_67)))
              _fail(b_67);
            else
              a_67 = b_67;
            {
              if(((e_67 != NULL) && (e_67 != c_67)))
                _fail(c_67);
              else
                e_67 = c_67;
              t = not_null(e_67);
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
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL;
      j_67 = t;
      h_67 :
      if(match_cons(j_67, sym__2))
        {
          k_67 = ATgetArgument(j_67, 0);
          l_67 = ATgetArgument(j_67, 1);
          {
            t = not_null(k_67);
            {
              ATerm r_67 (ATerm t)
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
                      ATerm h_16 = t;
                      int i_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_2 (ATerm t)
                          {
                            t = not_null(l_67);
                            return(t);
                          }
                          t = HdMember_1(t, f_2);
                          t = r_67(t);
                          LocalPopChoice(i_16);
                        }
                      else
                        {
                          t = h_16;
                          t = Cons_2(t, _id, r_67);
                        }
                    }
                  }
                return(t);
              }
              t = r_67(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm o_67 = NULL;
          o_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(o_67));
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          ATerm j_16 = t;
          int k_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 (ATerm t)
              {
                ATerm p_16 = t;
                int q_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(q_16);
                  }
                else
                  {
                    t = p_16;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, j_2);
              LocalPopChoice(k_16);
            }
          else
            {
              t = j_16;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, g_2, h_2, i_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm c_58 (ATerm), ATerm d_58 (ATerm), ATerm e_58 (ATerm))
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL;
  d_68 = t;
  b_68 :
  if(match_cons(d_68, sym__5))
    {
      e_68 = ATgetArgument(d_68, 0);
      h_68 = ATgetArgument(d_68, 1);
      i_68 = ATgetArgument(d_68, 2);
      j_68 = ATgetArgument(d_68, 3);
      k_68 = ATgetArgument(d_68, 4);
      c_68 :
      if(((ATgetType(e_68) == AT_LIST) && ((ATermList) e_68 != ATempty)))
        {
          f_68 = ATgetFirst((ATermList) e_68);
          g_68 = (ATerm) ATgetNext((ATermList) e_68);
          {
            ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,f_69 = NULL,h_69 = NULL,j_69 = NULL;
            ATerm r_16;
            r_16 = t;
            {
              ATerm v_68 = NULL,b_69 = NULL,c_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_68), not_null(i_68));
              {
                t = c_58(t);
                {
                  v_68 = t;
                  x_67 :
                  if(match_cons(v_68, sym__2))
                    {
                      b_69 = ATgetArgument(v_68, 0);
                      c_69 = ATgetArgument(v_68, 1);
                      {
                        ATerm d_69 = NULL;
                        if(((s_68 != NULL) && (s_68 != b_69)))
                          _fail(b_69);
                        else
                          s_68 = b_69;
                        {
                          if(((r_68 != NULL) && (r_68 != c_69)))
                            _fail(c_69);
                          else
                            r_68 = c_69;
                          {
                            t = not_null(s_68);
                            {
                              ATerm e_69 = NULL;
                              t = d_58(t);
                              {
                                d_69 = t;
                                {
                                  if(((t_68 != NULL) && (t_68 != d_69)))
                                    _fail(d_69);
                                  else
                                    t_68 = d_69;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_68), not_null(h_68));
                                    {
                                      t = diff_0(t);
                                      {
                                        e_69 = t;
                                        if(((u_68 != NULL) && (u_68 != e_69)))
                                          _fail(e_69);
                                        else
                                          u_68 = e_69;
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
            t = r_16;
            {
              ATerm z_16;
              z_16 = t;
              {
                ATerm g_69 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_68), not_null(g_68));
                {
                  t = conc_0(t);
                  {
                    g_69 = t;
                    if(((f_69 != NULL) && (f_69 != g_69)))
                      _fail(g_69);
                    else
                      f_69 = g_69;
                  }
                }
              }
              t = z_16;
              {
                ATerm a_17;
                a_17 = t;
                {
                  ATerm i_69 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_68), not_null(h_68));
                  {
                    t = conc_0(t);
                    {
                      i_69 = t;
                      if(((h_69 != NULL) && (h_69 != i_69)))
                        _fail(i_69);
                      else
                        h_69 = i_69;
                    }
                  }
                }
                t = a_17;
                {
                  ATerm m_69 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_68), not_null(s_68), not_null(j_68));
                  {
                    t = e_58(t);
                    {
                      m_69 = t;
                      if(((j_69 != NULL) && (j_69 != m_69)))
                        _fail(m_69);
                      else
                        j_69 = m_69;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(f_69), not_null(h_69), not_null(r_68), not_null(j_69), not_null(k_68));
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
  ATerm y_69 = NULL,z_69 = NULL,f_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL;
  y_69 = t;
  w_69 :
  if(match_cons(y_69, sym__5))
    {
      z_69 = ATgetArgument(y_69, 0);
      f_70 = ATgetArgument(y_69, 1);
      i_70 = ATgetArgument(y_69, 2);
      j_70 = ATgetArgument(y_69, 3);
      k_70 = ATgetArgument(y_69, 4);
      x_69 :
      if(((ATermList) z_69 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_70), not_null(k_70));
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
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
  v_70 = t;
  u_70 :
  if(match_cons(v_70, sym__3))
    {
      w_70 = ATgetArgument(v_70, 0);
      x_70 = ATgetArgument(v_70, 1);
      y_70 = ATgetArgument(v_70, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(w_70), not_null(w_70), not_null(x_70), not_null(y_70), (ATerm) ATempty);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm l_64 (ATerm), ATerm m_64 (ATerm))
{
  ATerm d_71 (ATerm t)
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_64(t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
          t = m_64(t);
          t = d_71(t);
        }
      }
    return(t);
  }
  t = d_71(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm q_64 (ATerm))
{
  t = o_64(t);
  t = while_not_2(t, p_64, q_64);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm l_58 (ATerm), ATerm m_58 (ATerm), ATerm n_58 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, l_58, m_58, n_58);
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
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
    ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL;
    g_71 = t;
    f_71 :
    if(match_cons(g_71, sym__3))
      {
        h_71 = ATgetArgument(g_71, 0);
        i_71 = ATgetArgument(g_71, 1);
        j_71 = ATgetArgument(g_71, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(j_71)), not_null(i_71));
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, l_2, m_2);
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
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
ATerm assert_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL;
  s_71 = t;
  r_71 :
  if(match_cons(s_71, sym__2))
    {
      t_71 = ATgetArgument(s_71, 0);
      u_71 = ATgetArgument(s_71, 1);
      {
        ATerm x_71 = NULL,a_72 = NULL,b_72 = NULL;
        ATerm i_17;
        i_17 = t;
        {
          ATerm c_72 = NULL;
          ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
          t = w_57(t);
          {
            c_72 = t;
            {
              if(((x_71 != NULL) && (x_71 != c_72)))
                _fail(c_72);
              else
                x_71 = c_72;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_71), not_null(t_71), not_null(u_71));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_17 = t;
                    int q_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_71), term_r_17);
                        t = table_get_0(t);
                        LocalPopChoice(q_17);
                      }
                    else
                      {
                        t = m_17;
                        t = term_s_17;
                      }
                    {
                      d_72 = t;
                      q_71 :
                      if(((ATgetType(d_72) == AT_LIST) && ((ATermList) d_72 != ATempty)))
                        {
                          e_72 = ATgetFirst((ATermList) d_72);
                          f_72 = (ATerm) ATgetNext((ATermList) d_72);
                          {
                            if(((a_72 != NULL) && (a_72 != e_72)))
                              _fail(e_72);
                            else
                              a_72 = e_72;
                            {
                              if(((b_72 != NULL) && (b_72 != f_72)))
                                _fail(f_72);
                              else
                                b_72 = f_72;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_71), term_r_17, (ATerm) ATinsert(CheckATermList(not_null(b_72)), (ATerm) ATinsert(CheckATermList(not_null(a_72)), not_null(t_71))));
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
        t = i_17;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm a_70 (ATerm))
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL;
  q_72 = t;
  p_72 :
  if(((ATgetType(q_72) == AT_LIST) && ((ATermList) q_72 != ATempty)))
    {
      r_72 = ATgetFirst((ATermList) q_72);
      s_72 = (ATerm) ATgetNext((ATermList) q_72);
      {
        t = a_70(t);
        {
          ATerm u_2 (ATerm t)
          {
            ATerm v_72 = NULL;
            v_72 = t;
            if(((r_72 != NULL) && (r_72 != v_72)))
              _fail(v_72);
            else
              r_72 = v_72;
            return(t);
          }
          t = fetch_1(t, u_2);
        }
        t = not_null(s_72);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL;
  a_73 = t;
  z_72 :
  if(match_cons(a_73, sym__2))
    {
      b_73 = ATgetArgument(a_73, 0);
      c_73 = ATgetArgument(a_73, 1);
      {
        t = not_null(b_73);
        {
          ATerm g_73 (ATerm t)
          {
            ATerm w_17 = t;
            int y_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(c_73);
                LocalPopChoice(y_17);
              }
            else
              {
                t = w_17;
                {
                  ATerm z_17 = t;
                  int a_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_2 (ATerm t)
                      {
                        t = not_null(c_73);
                        return(t);
                      }
                      t = HdMember_1(t, v_2);
                      t = g_73(t);
                      LocalPopChoice(a_18);
                    }
                  else
                    {
                      t = z_17;
                      t = Cons_2(t, _id, g_73);
                    }
                }
              }
            return(t);
          }
          t = g_73(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Arities_0 (ATerm t)
{
  ATerm m_73 = NULL;
  ATerm o_73 = NULL;
  m_73 = t;
  {
    ATerm p_73 = NULL,w_73 = NULL,x_73 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(m_73));
    {
      ATerm w_2 (ATerm t)
      {
        t = term_b_18;
        return(t);
      }
      t = rewrite_1(t, w_2);
      {
        p_73 = t;
        j_73 :
        if(match_cons(p_73, sym_Defined_2))
          {
            w_73 = ATgetArgument(p_73, 0);
            x_73 = ATgetArgument(p_73, 1);
            l_73 :
            if(match_string(w_73, "e_0"))
              {
                if(((o_73 != NULL) && (o_73 != x_73)))
                  _fail(x_73);
                else
                  o_73 = x_73;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(o_73);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
  d_74 = t;
  c_74 :
  if(((ATgetType(d_74) == AT_LIST) && ((ATermList) d_74 != ATempty)))
    {
      e_74 = ATgetFirst((ATermList) d_74);
      f_74 = (ATerm) ATgetNext((ATermList) d_74);
      t = not_null(e_74);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL;
  l_74 = t;
  k_74 :
  if(match_cons(l_74, sym__2))
    {
      m_74 = ATgetArgument(l_74, 0);
      n_74 = ATgetArgument(l_74, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_74), not_null(n_74));
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
ATerm rewrite_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm t_74 = NULL;
  ATerm v_74 = NULL;
  t_74 = t;
  {
    ATerm w_74 = NULL;
    t = term_r_15;
    {
      t = y_57(t);
      {
        w_74 = t;
        if(((v_74 != NULL) && (v_74 != w_74)))
          _fail(w_74);
        else
          v_74 = w_74;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_74), not_null(t_74));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL;
  g_75 = t;
  f_75 :
  if(match_cons(g_75, sym__2))
    {
      h_75 = ATgetArgument(g_75, 0);
      i_75 = ATgetArgument(g_75, 1);
      {
        ATerm l_75 = NULL,m_75 = NULL;
        ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(i_75), not_null(h_75));
        {
          ATerm x_2 (ATerm t)
          {
            t = term_c_18;
            return(t);
          }
          t = rewrite_1(t, x_2);
          {
            n_75 = t;
            b_75 :
            if(match_cons(n_75, sym_Defined_3))
              {
                o_75 = ATgetArgument(n_75, 0);
                p_75 = ATgetArgument(n_75, 1);
                q_75 = ATgetArgument(n_75, 2);
                c_75 :
                if(match_string(o_75, "d_0"))
                  {
                    if(((l_75 != NULL) && (l_75 != p_75)))
                      _fail(p_75);
                    else
                      l_75 = p_75;
                    if(((m_75 != NULL) && (m_75 != q_75)))
                      _fail(q_75);
                    else
                      m_75 = q_75;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(m_75)), not_null(l_75));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL;
  y_75 = t;
  x_75 :
  if(match_cons(y_75, sym__2))
    {
      z_75 = ATgetArgument(y_75, 0);
      a_76 = ATgetArgument(y_75, 1);
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_75), not_null(a_76));
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            t = SSL_addr(not_null(z_75), not_null(a_76));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm))
{
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_68(t);
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
      {
        ATerm i_76 = NULL,j_76 = NULL,m_76 = NULL;
        i_76 = t;
        h_76 :
        if(((ATgetType(i_76) == AT_LIST) && ((ATermList) i_76 != ATempty)))
          {
            j_76 = ATgetFirst((ATermList) i_76);
            m_76 = (ATerm) ATgetNext((ATermList) i_76);
            {
              ATerm p_76 = NULL,r_76 = NULL;
              ATerm h_18;
              h_18 = t;
              {
                ATerm q_76 = NULL;
                t = not_null(j_76);
                {
                  t = a_69(t);
                  {
                    q_76 = t;
                    if(((p_76 != NULL) && (p_76 != q_76)))
                      _fail(q_76);
                    else
                      p_76 = q_76;
                  }
                }
              }
              t = h_18;
              {
                ATerm s_76 = NULL;
                t = not_null(m_76);
                {
                  t = foldr_3(t, y_68, z_68, a_69);
                  {
                    s_76 = t;
                    if(((r_76 != NULL) && (r_76 != s_76)))
                      _fail(s_76);
                    else
                      r_76 = s_76;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_76), not_null(r_76));
                  t = z_68(t);
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
    ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL;
    c_77 = t;
    b_77 :
    if(match_cons(c_77, sym_SDef_3))
      {
        d_77 = ATgetArgument(c_77, 0);
        e_77 = ATgetArgument(c_77, 1);
        f_77 = ATgetArgument(c_77, 2);
        {
          ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL;
          ATerm j_18;
          j_18 = t;
          {
            ATerm n_77 = NULL;
            t = not_null(e_77);
            {
              ATerm o_77 = NULL;
              t = length_0(t);
              {
                n_77 = t;
                {
                  if(((l_77 != NULL) && (l_77 != n_77)))
                    _fail(n_77);
                  else
                    l_77 = n_77;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_77), not_null(l_77));
                    {
                      ATerm p_77 = NULL,r_77 = NULL;
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
                        o_77 = t;
                        {
                          if(((k_77 != NULL) && (k_77 != o_77)))
                            _fail(o_77);
                          else
                            k_77 = o_77;
                          {
                            ATerm q_77 = NULL;
                            t = not_null(d_77);
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
                                q_77 = t;
                                if(((p_77 != NULL) && (p_77 != q_77)))
                                  _fail(q_77);
                                else
                                  p_77 = q_77;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(l_77)), not_null(p_77));
                              {
                                t = union_0(t);
                                {
                                  r_77 = t;
                                  {
                                    if(((m_77 != NULL) && (m_77 != r_77)))
                                      _fail(r_77);
                                    else
                                      m_77 = r_77;
                                    {
                                      ATerm o_18;
                                      o_18 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(l_77), not_null(d_77)), (ATerm) ATmakeAppl(sym_Defined_3, term_p_18, not_null(c_77), not_null(k_77)));
                                        {
                                          ATerm i_3 (ATerm t)
                                          {
                                            t = term_c_18;
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
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(d_77)), (ATerm) ATmakeAppl(sym_Defined_2, term_r_18, not_null(m_77)));
                                          {
                                            ATerm j_3 (ATerm t)
                                            {
                                              t = term_b_18;
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
  ATerm y_77 = NULL;
  ATerm z_77 = NULL;
  t = sort_defs_0(t);
  {
    z_77 = t;
    if(((y_77 != NULL) && (y_77 != z_77)))
      _fail(z_77);
    else
      y_77 = z_77;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_18, not_null(y_77), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm z_54 (ATerm))
{
  ATerm g_78 = NULL,h_78 = NULL;
  g_78 = t;
  f_78 :
  if(match_cons(g_78, sym_Strategies_1))
    {
      h_78 = ATgetArgument(g_78, 0);
      {
        ATerm j_78 = NULL;
        t = not_null(h_78);
        {
          t = z_54(t);
          {
            j_78 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(j_78));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_57 (ATerm), ATerm g_57 (ATerm))
{
  ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL;
  t_78 = t;
  s_78 :
  if(((ATgetType(t_78) == AT_LIST) && ((ATermList) t_78 != ATempty)))
    {
      u_78 = ATgetFirst((ATermList) t_78);
      v_78 = (ATerm) ATgetNext((ATermList) t_78);
      {
        ATerm y_78 = NULL;
        t = not_null(u_78);
        {
          ATerm a_79 = NULL;
          t = f_57(t);
          {
            y_78 = t;
            {
              t = not_null(v_78);
              {
                t = g_57(t);
                {
                  a_79 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_79)), not_null(y_78));
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
ATerm Specification_1 (ATerm t, ATerm b_55 (ATerm))
{
  ATerm i_79 = NULL,j_79 = NULL;
  i_79 = t;
  h_79 :
  if(match_cons(i_79, sym_Specification_1))
    {
      j_79 = ATgetArgument(i_79, 0);
      {
        ATerm l_79 = NULL;
        t = not_null(j_79);
        {
          t = b_55(t);
          {
            l_79 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(l_79));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm s_46 (ATerm), ATerm t_46 (ATerm))
{
  ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL;
  y_79 = t;
  x_79 :
  if(match_cons(y_79, sym__2))
    {
      z_79 = ATgetArgument(y_79, 0);
      a_80 = ATgetArgument(y_79, 1);
      {
        ATerm d_80 = NULL;
        t = not_null(z_79);
        {
          ATerm f_80 = NULL;
          t = s_46(t);
          {
            d_80 = t;
            {
              t = not_null(a_80);
              {
                t = t_46(t);
                {
                  f_80 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_80), not_null(f_80));
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
  ATerm m_80 = NULL;
  ATerm v_18;
  v_18 = t;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm q_80 = NULL,r_80 = NULL;
      q_80 = t;
      l_80 :
      if(match_cons(q_80, sym_Program_1))
        {
          r_80 = ATgetArgument(q_80, 0);
          if(((m_80 != NULL) && (m_80 != r_80)))
            _fail(r_80);
          else
            m_80 = r_80;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, r_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(CheckATermList(term_a_19), not_null(m_80)), term_w_18));
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
  t = term_d_19;
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
  ATerm y_80 = NULL,z_80 = NULL;
  ATerm s_3 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      ATerm e_19 = t;
      if((PushChoice() == 0))
        {
          ATerm u_3 (ATerm t)
          {
            ATerm a_81 = NULL;
            a_81 = t;
            t_80 :
            if(!(match_cons(a_81, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, u_3);
          PopChoice();
          _fail(t);
        }
      else
        t = e_19;
      return(t);
    }
    t = _2(t, t_3, _id);
    {
      ATerm v_3 (ATerm t)
      {
        ATerm b_4 (ATerm t)
        {
          ATerm b_81 = NULL,c_81 = NULL;
          b_81 = t;
          v_80 :
          if(match_cons(b_81, sym_Runtime_1))
            {
              c_81 = ATgetArgument(b_81, 0);
              if(((z_80 != NULL) && (z_80 != c_81)))
                _fail(c_81);
              else
                z_80 = c_81;
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
            ATerm d_81 = NULL,e_81 = NULL;
            d_81 = t;
            x_80 :
            if(match_cons(d_81, sym_Program_1))
              {
                e_81 = ATgetArgument(d_81, 0);
                if(((y_80 != NULL) && (y_80 != e_81)))
                  _fail(e_81);
                else
                  y_80 = e_81;
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
          t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_h_19), not_null(z_80)), term_f_19), not_null(y_80)));
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
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL;
  j_81 = t;
  i_81 :
  if(match_cons(j_81, sym__2))
    {
      k_81 = ATgetArgument(j_81, 0);
      l_81 = ATgetArgument(j_81, 1);
      t = SSL_WriteToTextFile(not_null(k_81), not_null(l_81));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL;
  r_81 = t;
  q_81 :
  if(match_cons(r_81, sym__2))
    {
      s_81 = ATgetArgument(r_81, 0);
      t_81 = ATgetArgument(r_81, 1);
      t = SSL_WriteToBinaryFile(not_null(s_81), not_null(t_81));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_82 = NULL;
  ATerm i_19;
  i_19 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm j_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_4 (ATerm t)
          {
            ATerm c_82 = NULL,d_82 = NULL;
            c_82 = t;
            y_81 :
            if(match_cons(c_82, sym_Output_1))
              {
                d_82 = ATgetArgument(c_82, 0);
                if(((b_82 != NULL) && (b_82 != d_82)))
                  _fail(d_82);
                else
                  b_82 = d_82;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, h_4);
          LocalPopChoice(n_19);
        }
      else
        {
          t = j_19;
          {
            ATerm e_82 = NULL;
            t = term_o_19;
            {
              e_82 = t;
              if(((b_82 != NULL) && (b_82 != e_82)))
                _fail(e_82);
              else
                b_82 = e_82;
            }
          }
        }
      return(t);
    }
    t = _2(t, g_4, _id);
  }
  t = i_19;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm j_4 (ATerm t)
      {
        t = not_null(b_82);
        return(t);
      }
      t = split_2(t, j_4, _id);
      return(t);
    }
    t = _2(t, _id, i_4);
    {
      ATerm p_19 = t;
      int r_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_4 (ATerm t)
          {
            ATerm v_4 (ATerm t)
            {
              ATerm f_82 = NULL;
              f_82 = t;
              a_82 :
              if(!(match_cons(f_82, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, v_4);
            return(t);
          }
          t = _2(t, n_4, WriteToBinaryFile_0);
          LocalPopChoice(r_19);
        }
      else
        {
          t = p_19;
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
ATerm apply_strategy_1 (ATerm t, ATerm r_61 (ATerm))
{
  ATerm l_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
  ATerm s_19;
  s_19 = t;
  t = dtime_0(t);
  t = s_19;
  {
    t = r_61(t);
    {
      ATerm t_19;
      t_19 = t;
      {
        ATerm m_82 = NULL;
        t = dtime_0(t);
        {
          m_82 = t;
          if(((l_82 != NULL) && (l_82 != m_82)))
            _fail(m_82);
          else
            l_82 = m_82;
        }
      }
      t = t_19;
      {
        n_82 = t;
        k_82 :
        if(match_cons(n_82, sym__2))
          {
            o_82 = ATgetArgument(n_82, 0);
            p_82 = ATgetArgument(n_82, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_82)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_82))), not_null(p_82));
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
  ATerm v_82 = NULL;
  v_82 = t;
  t = SSL_ReadFromFile(not_null(v_82));
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_75 (ATerm), ATerm e_75 (ATerm))
{
  ATerm a_83 = NULL,c_83 = NULL;
  ATerm z_19;
  z_19 = t;
  {
    ATerm b_83 = NULL;
    t = d_75(t);
    {
      b_83 = t;
      if(((a_83 != NULL) && (a_83 != b_83)))
        _fail(b_83);
      else
        a_83 = b_83;
    }
  }
  t = z_19;
  {
    ATerm d_83 = NULL;
    t = e_75(t);
    {
      d_83 = t;
      if(((c_83 != NULL) && (c_83 != d_83)))
        _fail(d_83);
      else
        c_83 = d_83;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_83), not_null(c_83));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_83 = NULL;
  ATerm b_20;
  b_20 = t;
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 (ATerm t)
        {
          ATerm k_83 = NULL,l_83 = NULL;
          k_83 = t;
          h_83 :
          if(match_cons(k_83, sym_Input_1))
            {
              l_83 = ATgetArgument(k_83, 0);
              if(((j_83 != NULL) && (j_83 != l_83)))
                _fail(l_83);
              else
                j_83 = l_83;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, c_5);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        {
          ATerm m_83 = NULL;
          t = term_e_20;
          {
            m_83 = t;
            if(((j_83 != NULL) && (j_83 != m_83)))
              _fail(m_83);
            else
              j_83 = m_83;
          }
        }
      }
  }
  t = b_20;
  {
    ATerm h_5 (ATerm t)
    {
      t = not_null(j_83);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, h_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_83 = NULL;
  q_83 = t;
  p_83 :
  if(!(match_cons(q_83, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_20);
            }
          else
            {
              t = h_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, i_5);
  t = q_61(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_83 = NULL;
  s_83 = t;
  t = SSL_table_create(not_null(s_83));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_83 = NULL;
  w_83 = t;
  {
    ATerm j_20;
    j_20 = t;
    {
      t = term_k_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_20, term_l_20, not_null(w_83));
          t = table_put_0(t);
        }
      }
    }
    t = j_20;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
  e_84 = t;
  c_84 :
  if(match_string(e_84, "register-usage-info"))
    t = register_usage_1(t, k_0);
  else
    {
      if(((ATgetType(e_84) == AT_LIST) && ((ATermList) e_84 != ATempty)))
        {
          f_84 = ATgetFirst((ATermList) e_84);
          g_84 = (ATerm) ATgetNext((ATermList) e_84);
          d_84 :
          if(((ATgetType(g_84) == AT_LIST) && ((ATermList) g_84 != ATempty)))
            {
              h_84 = ATgetFirst((ATermList) g_84);
              i_84 = (ATerm) ATgetNext((ATermList) g_84);
              {
                ATerm m_84 = NULL;
                ATerm m_20;
                m_20 = t;
                {
                  t = not_null(f_84);
                  t = i_0(t);
                }
                t = m_20;
                {
                  ATerm n_84 = NULL;
                  t = not_null(h_84);
                  {
                    t = j_0(t);
                    {
                      n_84 = t;
                      if(((m_84 != NULL) && (m_84 != n_84)))
                        _fail(n_84);
                      else
                        m_84 = n_84;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_84)), not_null(m_84));
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
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_5 (ATerm t)
      {
        ATerm c_85 = NULL;
        c_85 = t;
        r_84 :
        if(!(match_string(c_85, "-S")))
          {
            if(!(match_string(c_85, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        t = term_r_20;
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = term_s_20;
        return(t);
      }
      t = Option_3(t, j_5, k_5, l_5);
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm v_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              ATerm d_85 = NULL;
              d_85 = t;
              s_84 :
              if(!(match_string(d_85, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm n_5 (ATerm t)
            {
              t = term_x_20;
              return(t);
            }
            ATerm s_5 (ATerm t)
            {
              t = term_a_21;
              return(t);
            }
            t = Option_3(t, m_5, n_5, s_5);
            LocalPopChoice(w_20);
          }
        else
          {
            t = v_20;
            {
              ATerm b_21 = t;
              int c_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_5 (ATerm t)
                  {
                    ATerm e_85 = NULL;
                    e_85 = t;
                    t_84 :
                    if(!(match_string(e_85, "-v")))
                      {
                        if(!(match_string(e_85, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm v_5 (ATerm t)
                  {
                    t = term_d_21;
                    return(t);
                  }
                  ATerm x_5 (ATerm t)
                  {
                    t = term_e_21;
                    return(t);
                  }
                  t = Option_3(t, t_5, v_5, x_5);
                  LocalPopChoice(c_21);
                }
              else
                {
                  t = b_21;
                  {
                    ATerm f_21 = t;
                    int g_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_5 (ATerm t)
                        {
                          ATerm f_85 = NULL;
                          f_85 = t;
                          u_84 :
                          if(!(match_string(f_85, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm z_5 (ATerm t)
                        {
                          ATerm g_85 = NULL;
                          ATerm h_85 = NULL;
                          h_85 = t;
                          if(((g_85 != NULL) && (g_85 != h_85)))
                            _fail(h_85);
                          else
                            g_85 = h_85;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(g_85));
                          return(t);
                        }
                        ATerm a_6 (ATerm t)
                        {
                          t = term_h_21;
                          return(t);
                        }
                        t = ArgOption_3(t, y_5, z_5, a_6);
                        LocalPopChoice(g_21);
                      }
                    else
                      {
                        t = f_21;
                        {
                          ATerm m_21 = t;
                          int n_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_6 (ATerm t)
                              {
                                ATerm i_85 = NULL;
                                i_85 = t;
                                w_84 :
                                if(!(match_string(i_85, "-i")))
                                  {
                                    if(!(match_string(i_85, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm c_6 (ATerm t)
                              {
                                ATerm j_85 = NULL;
                                ATerm k_85 = NULL;
                                k_85 = t;
                                if(((j_85 != NULL) && (j_85 != k_85)))
                                  _fail(k_85);
                                else
                                  j_85 = k_85;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_85));
                                return(t);
                              }
                              ATerm d_6 (ATerm t)
                              {
                                t = term_p_21;
                                return(t);
                              }
                              t = ArgOption_3(t, b_6, c_6, d_6);
                              LocalPopChoice(n_21);
                            }
                          else
                            {
                              t = m_21;
                              {
                                ATerm q_21 = t;
                                int s_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_6 (ATerm t)
                                    {
                                      ATerm l_85 = NULL;
                                      l_85 = t;
                                      y_84 :
                                      if(!(match_string(l_85, "-o")))
                                        {
                                          if(!(match_string(l_85, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm k_6 (ATerm t)
                                    {
                                      ATerm m_85 = NULL;
                                      ATerm n_85 = NULL;
                                      n_85 = t;
                                      if(((m_85 != NULL) && (m_85 != n_85)))
                                        _fail(n_85);
                                      else
                                        m_85 = n_85;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_85));
                                      return(t);
                                    }
                                    ATerm l_6 (ATerm t)
                                    {
                                      t = term_t_21;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_6, k_6, l_6);
                                    LocalPopChoice(s_21);
                                  }
                                else
                                  {
                                    t = q_21;
                                    {
                                      ATerm u_21 = t;
                                      int v_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_6 (ATerm t)
                                          {
                                            ATerm o_85 = NULL;
                                            o_85 = t;
                                            a_85 :
                                            if(!(match_string(o_85, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm o_6 (ATerm t)
                                          {
                                            t = term_w_21;
                                            return(t);
                                          }
                                          ATerm q_6 (ATerm t)
                                          {
                                            t = term_x_21;
                                            return(t);
                                          }
                                          t = Option_3(t, m_6, o_6, q_6);
                                          LocalPopChoice(v_21);
                                        }
                                      else
                                        {
                                          t = u_21;
                                          {
                                            ATerm s_6 (ATerm t)
                                            {
                                              ATerm p_85 = NULL;
                                              p_85 = t;
                                              b_85 :
                                              if(!(match_string(p_85, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm t_6 (ATerm t)
                                            {
                                              t = term_y_21;
                                              return(t);
                                            }
                                            ATerm u_6 (ATerm t)
                                            {
                                              t = term_a_22;
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
  ATerm u_85 = NULL;
  u_85 = t;
  t = SSL_table_destroy(not_null(u_85));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm y_85 = NULL;
  y_85 = t;
  t = SSL_exit(not_null(y_85));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm c_86 = NULL;
  c_86 = t;
  t = SSL_implode_string(not_null(c_86));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm f_86 (ATerm t)
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_86);
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        {
          t = Nil_0(t);
          t = m_72(t);
        }
      }
    return(t);
  }
  t = f_86(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_22);
    }
  else
    {
      t = e_22;
      {
        ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL;
        i_86 = t;
        h_86 :
        if(((ATgetType(i_86) == AT_LIST) && ((ATermList) i_86 != ATempty)))
          {
            j_86 = ATgetFirst((ATermList) i_86);
            k_86 = (ATerm) ATgetNext((ATermList) i_86);
            {
              t = not_null(j_86);
              {
                ATerm v_6 (ATerm t)
                {
                  t = not_null(k_86);
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
  ATerm q_86 = NULL;
  q_86 = t;
  t = SSL_explode_string(not_null(q_86));
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
ATerm long_description_1 (ATerm t, ATerm x_59 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_71 (ATerm))
{
  ATerm t_86 (ATerm t)
  {
    ATerm h_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = h_22;
        t = Cons_2(t, y_71, t_86);
      }
    return(t);
  }
  t = t_86(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL;
  a_87 = t;
  x_86 :
  if(((ATgetType(a_87) == AT_LIST) && ((ATermList) a_87 != ATempty)))
    {
      y_86 = ATgetFirst((ATermList) a_87);
      z_86 = (ATerm) ATgetNext((ATermList) a_87);
      {
        t = not_null(z_86);
        {
          ATerm w_6 (ATerm t)
          {
            ATerm d_87 = NULL;
            ATerm e_87 = NULL;
            t = h_0(t);
            {
              e_87 = t;
              if(((d_87 != NULL) && (d_87 != e_87)))
                _fail(e_87);
              else
                d_87 = e_87;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(d_87)), not_null(y_86));
            return(t);
          }
          t = reverse_1(t, w_6);
        }
      }
    }
  else
    {
      if(((ATermList) a_87 == ATempty))
        {
          {
            t = term_r_15;
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
ATerm short_description_1 (ATerm t, ATerm w_59 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_52 (ATerm))
{
  ATerm l_87 = NULL,m_87 = NULL;
  l_87 = t;
  k_87 :
  if(match_cons(l_87, sym_Program_1))
    {
      m_87 = ATgetArgument(l_87, 0);
      {
        ATerm o_87 = NULL;
        t = not_null(m_87);
        {
          t = h_52(t);
          {
            o_87 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_87));
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
  ATerm w_87 = NULL;
  ATerm y_6 (ATerm t)
  {
    ATerm z_6 (ATerm t)
    {
      ATerm x_87 = NULL;
      x_87 = t;
      if(((w_87 != NULL) && (w_87 != x_87)))
        _fail(x_87);
      else
        w_87 = x_87;
      return(t);
    }
    t = Program_1(t, z_6);
    return(t);
  }
  t = option_defined_1(t, y_6);
  {
    ATerm e_7 (ATerm t)
    {
      ATerm y_87 = NULL;
      ATerm z_87 = NULL;
      t = term_r_15;
      {
        ATerm f_7 (ATerm t)
        {
          t = not_null(w_87);
          return(t);
        }
        t = short_description_1(t, f_7);
        {
          t = concat_strings_0(t);
          {
            z_87 = t;
            if(((y_87 != NULL) && (y_87 != z_87)))
              _fail(z_87);
            else
              y_87 = z_87;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATempty, not_null(y_87)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_7);
    {
      t = term_m_22;
      {
        t = printnl_0(t);
        {
          t = term_p_22;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm h_7 (ATerm t)
                {
                  ATerm a_88 = NULL;
                  a_88 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_88)), term_q_22));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_7);
                {
                  ATerm j_7 (ATerm t)
                  {
                    ATerm c_88 = NULL;
                    ATerm d_88 = NULL;
                    t = term_r_15;
                    {
                      ATerm k_7 (ATerm t)
                      {
                        t = not_null(w_87);
                        return(t);
                      }
                      t = long_description_1(t, k_7);
                      {
                        t = concat_strings_0(t);
                        {
                          d_88 = t;
                          if(((c_88 != NULL) && (c_88 != d_88)))
                            _fail(d_88);
                          else
                            c_88 = d_88;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_88)), term_r_22));
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
  ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
  k_88 = t;
  j_88 :
  if(match_cons(k_88, sym__2))
    {
      l_88 = ATgetArgument(k_88, 0);
      m_88 = ATgetArgument(k_88, 1);
      {
        ATerm w_22;
        w_22 = t;
        t = SSL_printnl(not_null(l_88), not_null(m_88));
        t = w_22;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_52 (ATerm))
{
  ATerm t_88 = NULL,u_88 = NULL;
  t_88 = t;
  s_88 :
  if(match_cons(t_88, sym_Undefined_1))
    {
      u_88 = ATgetArgument(t_88, 0);
      {
        ATerm w_88 = NULL;
        t = not_null(u_88);
        {
          t = i_52(t);
          {
            w_88 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_88));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm a_89 (ATerm t)
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_72, _id);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = Cons_2(t, _id, a_89);
      }
    return(t);
  }
  t = a_89(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_60 (ATerm))
{
  t = fetch_1(t, v_60);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_89 = NULL;
  c_89 = t;
  b_89 :
  if(!(match_cons(c_89, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_75 (ATerm))
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_75(t);
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
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
  f_89 = t;
  e_89 :
  if(match_cons(f_89, sym__2))
    {
      g_89 = ATgetArgument(f_89, 0);
      h_89 = ATgetArgument(f_89, 1);
      t = SSL_table_get(not_null(g_89), not_null(h_89));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL;
  o_89 = t;
  n_89 :
  if(match_cons(o_89, sym__3))
    {
      p_89 = ATgetArgument(o_89, 0);
      q_89 = ATgetArgument(o_89, 1);
      r_89 = ATgetArgument(o_89, 2);
      {
        ATerm d_23;
        d_23 = t;
        {
          ATerm v_89 = NULL;
          ATerm w_89 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_89), not_null(q_89));
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
              w_89 = t;
              if(((v_89 != NULL) && (v_89 != w_89)))
                _fail(w_89);
              else
                v_89 = w_89;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_89), not_null(q_89), (ATerm) ATinsert(CheckATermList(not_null(v_89)), not_null(r_89)));
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
ATerm register_usage_1 (ATerm t, ATerm b_60 (ATerm))
{
  ATerm a_90 = NULL;
  ATerm b_90 = NULL;
  t = term_r_15;
  {
    t = b_60(t);
    {
      b_90 = t;
      if(((a_90 != NULL) && (a_90 != b_90)))
        _fail(b_90);
      else
        a_90 = b_90;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_22, term_o_22, not_null(a_90));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  g_90 :
  if(match_string(h_90, "register-usage-info"))
    t = register_usage_1(t, g_0);
  else
    {
      if(((ATgetType(h_90) == AT_LIST) && ((ATermList) h_90 != ATempty)))
        {
          i_90 = ATgetFirst((ATermList) h_90);
          j_90 = (ATerm) ATgetNext((ATermList) h_90);
          {
            ATerm m_90 = NULL;
            ATerm g_23;
            g_23 = t;
            {
              t = not_null(i_90);
              t = a_0(t);
            }
            t = g_23;
            {
              ATerm n_90 = NULL;
              t = term_r_15;
              {
                t = f_0(t);
                {
                  n_90 = t;
                  if(((m_90 != NULL) && (m_90 != n_90)))
                    _fail(n_90);
                  else
                    m_90 = n_90;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_90)), not_null(m_90));
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
    ATerm s_90 = NULL;
    s_90 = t;
    r_90 :
    if(!(match_string(s_90, "--help")))
      {
        if(!(match_string(s_90, "-h")))
          {
            if(!(match_string(s_90, "-?")))
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
  ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL;
  v_90 = t;
  u_90 :
  if(((ATgetType(v_90) == AT_LIST) && ((ATermList) v_90 != ATempty)))
    {
      w_90 = ATgetFirst((ATermList) v_90);
      x_90 = (ATerm) ATgetNext((ATermList) v_90);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_90)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_90)));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_59 (ATerm))
{
  ATerm k_23;
  k_23 = t;
  {
    ATerm s_7 (ATerm t)
    {
      t = term_l_23;
      t = z_59(t);
      return(t);
    }
    t = try_1(t, s_7);
  }
  t = k_23;
  {
    ATerm t_7 (ATerm t)
    {
      ATerm c_91 = NULL;
      c_91 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_91));
      return(t);
    }
    ATerm u_7 (ATerm t)
    {
      ATerm m_23 = t;
      int n_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
              {
                t = z_59(t);
                t = Cons_2(t, _id, u_7);
              }
            }
          LocalPopChoice(n_23);
        }
      else
        {
          t = m_23;
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
  ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL;
  ATerm y_23;
  y_23 = t;
  {
    ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL;
    l_91 = t;
    h_91 :
    if(match_cons(l_91, sym__3))
      {
        m_91 = ATgetArgument(l_91, 0);
        n_91 = ATgetArgument(l_91, 1);
        o_91 = ATgetArgument(l_91, 2);
        {
          if(((i_91 != NULL) && (i_91 != m_91)))
            _fail(m_91);
          else
            i_91 = m_91;
          {
            if(((j_91 != NULL) && (j_91 != n_91)))
              _fail(n_91);
            else
              j_91 = n_91;
            {
              if(((k_91 != NULL) && (k_91 != o_91)))
                _fail(o_91);
              else
                k_91 = o_91;
              t = SSL_table_put(not_null(i_91), not_null(j_91), not_null(k_91));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = y_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm r_91 = NULL;
  ATerm z_23;
  z_23 = t;
  {
    t = term_e_24;
    t = table_put_0(t);
  }
  t = z_23;
  {
    ATerm v_7 (ATerm t)
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_59(t);
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_7);
    {
      ATerm w_7 (ATerm t)
      {
        ATerm h_24 = t;
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
            t = h_24;
            {
              ATerm d_8 (ATerm t)
              {
                ATerm e_8 (ATerm t)
                {
                  ATerm s_91 = NULL;
                  s_91 = t;
                  if(((r_91 != NULL) && (r_91 != s_91)))
                    _fail(s_91);
                  else
                    r_91 = s_91;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_91)), term_k_24));
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
        ATerm p_24;
        p_24 = t;
        {
          t = term_n_22;
          t = table_destroy_0(t);
        }
        t = p_24;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_61 (ATerm), ATerm g_61 (ATerm), ATerm h_61 (ATerm))
{
  ATerm f_8 (ATerm t)
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_61(t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_8);
  {
    t = store_options_0(t);
    {
      ATerm w_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, h_61);
          LocalPopChoice(x_24);
        }
      else
        {
          t = w_24;
          {
            ATerm y_24 = t;
            int z_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, f_61);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(z_24);
              }
            else
              {
                t = y_24;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_61 (ATerm), ATerm b_61 (ATerm))
{
  t = iowrap_3(t, a_61, b_61, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm j_8 (ATerm t)
  {
    t = _2(t, _id, x_60);
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
