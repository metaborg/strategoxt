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
ATerm term_c_27;
ATerm term_w_26;
ATerm term_e_26;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_w_21;
ATerm term_y_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_v_12;
ATerm term_m_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_q_11;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
void init_constant_terms (void)
{
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetAnnotations", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Op_2, term_i_16, (ATerm) ATempty);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_ConstType_1, term_j_16);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_q_24, term_r_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__3, term_q_24, term_r_24, (ATerm) ATempty);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm c_56 (ATerm), ATerm d_56 (ATerm));
ATerm SDef_3 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm i_56 (ATerm));
ATerm Let_2 (ATerm, ATerm e_56 (ATerm), ATerm f_56 (ATerm));
ATerm sboundin_3 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm h_65 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm v_64 (ATerm), ATerm w_64 (ATerm));
ATerm diff_1 (ATerm, ATerm a_65 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm t_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm u_69 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_63 (ATerm), ATerm x_63 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm b_78 (ATerm), ATerm c_78 (ATerm));
ATerm alltd_1 (ATerm, ATerm b_77 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm d_78 (ATerm), ATerm e_78 (ATerm));
ATerm substitute_1 (ATerm, ATerm f_78 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm j_56 (ATerm), ATerm k_56 (ATerm));
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
ATerm Prim_2 (ATerm, ATerm j_57 (ATerm), ATerm k_57 (ATerm));
ATerm Explode_2 (ATerm, ATerm y_53 (ATerm), ATerm z_53 (ATerm));
ATerm Op_2 (ATerm, ATerm j_55 (ATerm), ATerm k_55 (ATerm));
ATerm pat_td_1 (ATerm, ATerm y_81 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm l_72 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm f_55 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm z_66 (ATerm), ATerm a_67 (ATerm));
ATerm repeat_1 (ATerm, ATerm c_67 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm s_53 (ATerm), ATerm t_53 (ATerm));
ATerm Con_3 (ATerm, ATerm p_53 (ATerm), ATerm q_53 (ATerm), ATerm r_53 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm g_57 (ATerm), ATerm h_57 (ATerm));
ATerm oncetd_1 (ATerm, ATerm n_76 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm v_74 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm e_74 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm l_64 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm j_72 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm e_72 (ATerm));
ATerm zip_1 (ATerm, ATerm g_72 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm f_58 (ATerm), ATerm g_58 (ATerm), ATerm h_58 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm q_67 (ATerm), ATerm r_67 (ATerm));
ATerm for_3 (ATerm, ATerm t_67 (ATerm), ATerm u_67 (ATerm), ATerm v_67 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm o_58 (ATerm), ATerm p_58 (ATerm), ATerm q_58 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_57 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_58 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm u_64 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm a_64 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm c_55 (ATerm));
ATerm Cons_2 (ATerm, ATerm l_57 (ATerm), ATerm m_57 (ATerm));
ATerm Specification_1 (ATerm, ATerm e_55 (ATerm));
ATerm _2 (ATerm, ATerm r_46 (ATerm), ATerm s_46 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm u_61 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_73 (ATerm), ATerm p_73 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_61 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_80 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_60 (ATerm));
ATerm map_1 (ATerm, ATerm w_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_59 (ATerm));
ATerm Program_1 (ATerm, ATerm g_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_80 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_60 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_74 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_60 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_60 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_60 (ATerm));
ATerm iowrap_3 (ATerm, ATerm i_61 (ATerm), ATerm j_61 (ATerm), ATerm k_61 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_61 (ATerm), ATerm e_61 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_61 (ATerm));
ATerm extract_all_0 (ATerm);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_9), not_null(a_3)), term_h_9), not_null(z_2)), term_g_9);
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_9), not_null(l_3)), term_h_9), not_null(k_3)), term_j_9), not_null(j_3)), term_g_9);
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
                ATerm k_9 = t;
                int l_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(l_9);
                  }
                else
                  {
                    t = k_9;
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
  ATerm m_9;
  m_9 = t;
  {
    t = error_0(t);
    {
      t = term_n_9;
      t = exit_0(t);
    }
  }
  t = m_9;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_9);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm t_9;
  t_9 = t;
  {
    ATerm l_4 = NULL;
    ATerm m_4 = NULL;
    m_4 = t;
    if(((l_4 != NULL) && (l_4 != m_4)))
      _fail(m_4);
    else
      l_4 = m_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, not_null(l_4));
      t = printnl_0(t);
    }
  }
  t = t_9;
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
          ATerm y_9 = t;
          int z_9 = stack_ptr;
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
                            ATerm a_10 = t;
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
                                t = a_10;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_5)), term_b_10);
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
              LocalPopChoice(z_9);
            }
          else
            {
              t = y_9;
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
ATerm Rec_2 (ATerm t, ATerm c_56 (ATerm), ATerm d_56 (ATerm))
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
          t = c_56(t);
          {
            b_6 = t;
            {
              t = not_null(y_5);
              {
                t = d_56(t);
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
ATerm SDef_3 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm i_56 (ATerm))
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
          t = g_56(t);
          {
            u_6 = t;
            {
              t = not_null(p_6);
              {
                ATerm y_6 = NULL;
                t = h_56(t);
                {
                  w_6 = t;
                  {
                    t = not_null(q_6);
                    {
                      t = i_56(t);
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
ATerm Let_2 (ATerm t, ATerm e_56 (ATerm), ATerm f_56 (ATerm))
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
          t = e_56(t);
          {
            n_7 = t;
            {
              t = not_null(k_7);
              {
                t = f_56(t);
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
ATerm sboundin_3 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm))
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, y_78, y_78);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, a_79, a_79, y_78);
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            t = Rec_2(t, a_79, y_78);
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
ATerm crush_3 (ATerm t, ATerm f_65 (ATerm), ATerm g_65 (ATerm), ATerm h_65 (ATerm))
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
      t = foldr_3(t, f_65, g_65, h_65);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_64 (ATerm), ATerm w_64 (ATerm))
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  d_10 = t;
  c_10 :
  if(((ATgetType(d_10) == AT_LIST) && ((ATermList) d_10 != ATempty)))
    {
      e_10 = ATgetFirst((ATermList) d_10);
      f_10 = (ATerm) ATgetNext((ATermList) d_10);
      {
        t = w_64(t);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm i_10 = NULL;
            i_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), not_null(i_10));
              t = v_64(t);
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
ATerm diff_1 (ATerm t, ATerm a_65 (ATerm))
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
            ATerm l_10 = t;
            int m_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(m_10);
              }
            else
              {
                t = l_10;
                {
                  ATerm r_10 = t;
                  int s_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_0 (ATerm t)
                      {
                        t = not_null(q_10);
                        return(t);
                      }
                      t = HdMember_p__2(t, a_65, p_0);
                      t = u_10(t);
                      LocalPopChoice(s_10);
                    }
                  else
                    {
                      t = r_10;
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
ATerm free_vars2_4 (ATerm t, ATerm r_69 (ATerm), ATerm s_69 (ATerm), ATerm t_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm u_69 (ATerm))
{
  ATerm y_10 (ATerm t)
  {
    ATerm q_0 (ATerm t)
    {
      ATerm t_10 = t;
      int v_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_69(t);
          LocalPopChoice(v_10);
        }
      else
        {
          t = t_10;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm r_0 (ATerm t)
    {
      ATerm z_10 = t;
      int a_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_10 = NULL;
          ATerm b_11;
          b_11 = t;
          {
            ATerm x_10 = NULL;
            t = s_69(t);
            {
              x_10 = t;
              if(((w_10 != NULL) && (w_10 != x_10)))
                _fail(x_10);
              else
                w_10 = x_10;
            }
          }
          t = b_11;
          {
            ATerm s_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                t = not_null(w_10);
                return(t);
              }
              t = split_2(t, y_10, u_0);
              t = diff_1(t, u_69);
              return(t);
            }
            ATerm t_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = t_69(t, s_0, y_10, t_0);
            {
              ATerm v_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, v_0, union_0, _id);
            }
          }
          LocalPopChoice(a_11);
        }
      else
        {
          t = z_10;
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
              ATerm s_11 = NULL;
              ATerm t_11 = NULL;
              t = not_null(k_11);
              {
                t = length_0(t);
                {
                  t_11 = t;
                  if(((s_11 != NULL) && (s_11 != t_11)))
                    _fail(t_11);
                  else
                    s_11 = t_11;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(j_11), not_null(s_11)));
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
    ATerm e_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(l_11);
      }
    else
      {
        t = e_11;
        {
          ATerm m_11 = t;
          int n_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(n_11);
            }
          else
            {
              t = m_11;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm z_0 (ATerm t)
  {
    ATerm u_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,c_12 = NULL;
    u_11 = t;
    f_11 :
    if(match_cons(u_11, sym__2))
      {
        w_11 = ATgetArgument(u_11, 0);
        c_12 = ATgetArgument(u_11, 1);
        g_11 :
        if(match_cons(w_11, sym__2))
          {
            x_11 = ATgetArgument(w_11, 0);
            y_11 = ATgetArgument(w_11, 1);
            if(((x_11 != NULL) && (x_11 != c_12)))
              _fail(c_12);
            else
              x_11 = c_12;
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
  ATerm i_13 = NULL;
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  i_13 = t;
  {
    ATerm x_13 = NULL;
    ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
    t = not_null(i_13);
    {
      x_13 = t;
      {
        t = SSL_explode_term(not_null(x_13));
        {
          z_13 = t;
          k_12 :
          if(match_cons(z_13, sym__2))
            {
              a_14 = ATgetArgument(z_13, 0);
              b_14 = ATgetArgument(z_13, 1);
              f_13 :
              if(match_string(a_14, ""))
                {
                  g_13 :
                  if(((ATgetType(b_14) == AT_LIST) && ((ATermList) b_14 != ATempty)))
                    {
                      c_14 = ATgetFirst((ATermList) b_14);
                      d_14 = (ATerm) ATgetNext((ATermList) b_14);
                      h_13 :
                      if(((ATgetType(d_14) == AT_LIST) && ((ATermList) d_14 != ATempty)))
                        {
                          e_14 = ATgetFirst((ATermList) d_14);
                          f_14 = (ATerm) ATgetNext((ATermList) d_14);
                          {
                            if(((u_13 != NULL) && (u_13 != c_14)))
                              _fail(c_14);
                            else
                              u_13 = c_14;
                            {
                              if(((w_13 != NULL) && (w_13 != e_14)))
                                _fail(e_14);
                              else
                                w_13 = e_14;
                              if(((v_13 != NULL) && (v_13 != f_14)))
                                _fail(f_14);
                              else
                                v_13 = f_14;
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
    t = not_null(w_13);
  }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_63 (ATerm), ATerm x_63 (ATerm))
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_63(t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm m_14 = NULL,n_14 = NULL,v_14 = NULL;
        m_14 = t;
        l_14 :
        if(((ATgetType(m_14) == AT_LIST) && ((ATermList) m_14 != ATempty)))
          {
            n_14 = ATgetFirst((ATermList) m_14);
            v_14 = (ATerm) ATgetNext((ATermList) m_14);
            {
              ATerm y_14 = NULL;
              ATerm z_14 = NULL;
              t = not_null(v_14);
              {
                t = foldr_2(t, w_63, x_63);
                {
                  z_14 = t;
                  if(((y_14 != NULL) && (y_14 != z_14)))
                    _fail(z_14);
                  else
                    y_14 = z_14;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), not_null(y_14));
                t = x_63(t);
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
    t = term_q_11;
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    ATerm e_15 = NULL,g_15 = NULL;
    ATerm r_11;
    r_11 = t;
    {
      ATerm f_15 = NULL;
      t = Fst_0(t);
      {
        f_15 = t;
        if(((e_15 != NULL) && (e_15 != f_15)))
          _fail(f_15);
        else
          e_15 = f_15;
      }
    }
    t = r_11;
    {
      ATerm h_15 = NULL;
      t = Snd_0(t);
      {
        h_15 = t;
        if(((g_15 != NULL) && (g_15 != h_15)))
          _fail(h_15);
        else
          g_15 = h_15;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_15), not_null(g_15));
    }
    return(t);
  }
  t = foldr_2(t, a_1, b_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  t_15 = t;
  o_15 :
  if(match_cons(t_15, sym_Call_2))
    {
      u_15 = ATgetArgument(t_15, 0);
      w_15 = ATgetArgument(t_15, 1);
      p_15 :
      if(match_cons(u_15, sym_SVar_1))
        {
          v_15 = ATgetArgument(u_15, 0);
          q_15 :
          if(((ATermList) w_15 == ATempty))
            {
              t = not_null(v_15);
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
  ATerm c_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  c_16 = t;
  a_16 :
  if(match_cons(c_16, sym__2))
    {
      e_16 = ATgetArgument(c_16, 0);
      f_16 = ATgetArgument(c_16, 1);
      b_16 :
      if(((ATgetType(f_16) == AT_LIST) && ((ATermList) f_16 != ATempty)))
        {
          g_16 = ATgetFirst((ATermList) f_16);
          h_16 = (ATerm) ATgetNext((ATermList) f_16);
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), not_null(h_16));
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
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
  p_16 = t;
  m_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      n_16 :
      if(((ATgetType(r_16) == AT_LIST) && ((ATermList) r_16 != ATempty)))
        {
          s_16 = ATgetFirst((ATermList) r_16);
          v_16 = (ATerm) ATgetNext((ATermList) r_16);
          o_16 :
          if(match_cons(s_16, sym__2))
            {
              t_16 = ATgetArgument(s_16, 0);
              u_16 = ATgetArgument(s_16, 1);
              {
                ATerm g_17 = NULL;
                if(((q_16 != NULL) && (q_16 != t_16)))
                  _fail(t_16);
                else
                  q_16 = t_16;
                {
                  if(((g_17 != NULL) && (g_17 != u_16)))
                    _fail(u_16);
                  else
                    g_17 = u_16;
                  t = not_null(g_17);
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
  ATerm v_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(z_11);
    }
  else
    {
      t = v_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm b_78 (ATerm), ATerm c_78 (ATerm))
{
  ATerm x_17 = NULL;
  ATerm z_17 = NULL,a_18 = NULL;
  x_17 = t;
  {
    ATerm b_18 = NULL;
    t = not_null(x_17);
    {
      ATerm c_18 = NULL;
      t = b_78(t);
      {
        b_18 = t;
        {
          if(((z_17 != NULL) && (z_17 != b_18)))
            _fail(b_18);
          else
            z_17 = b_18;
          {
            t = c_78(t);
            {
              c_18 = t;
              if(((a_18 != NULL) && (a_18 != c_18)))
                _fail(c_18);
              else
                a_18 = c_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(a_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm b_77 (ATerm))
{
  ATerm g_18 (ATerm t)
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_77(t);
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        t = _all(t, g_18);
      }
    return(t);
  }
  t = g_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  n_18 = t;
  k_18 :
  if(match_cons(n_18, sym__2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      {
        ATerm x_18 = NULL;
        if(((x_18 != NULL) && (x_18 != p_18)))
          _fail(p_18);
        else
          x_18 = p_18;
      }
    }
  else
    {
      if(match_cons(n_18, sym__3))
        {
          o_18 = ATgetArgument(n_18, 0);
          p_18 = ATgetArgument(n_18, 1);
          q_18 = ATgetArgument(n_18, 2);
          {
            ATerm d_19 = NULL;
            ATerm e_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), not_null(p_18));
            {
              t = zip_1(t, _id);
              {
                e_19 = t;
                if(((d_19 != NULL) && (d_19 != e_19)))
                  _fail(e_19);
                else
                  d_19 = e_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_19), not_null(q_18));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm d_78 (ATerm), ATerm e_78 (ATerm))
{
  ATerm m_19 = NULL,p_19 = NULL,q_19 = NULL;
  t = subs_args_0(t);
  {
    m_19 = t;
    l_19 :
    if(match_cons(m_19, sym__2))
      {
        p_19 = ATgetArgument(m_19, 0);
        q_19 = ATgetArgument(m_19, 1);
        {
          t = not_null(q_19);
          {
            ATerm c_1 (ATerm t)
            {
              ATerm d_1 (ATerm t)
              {
                t = not_null(p_19);
                return(t);
              }
              t = SubsVar_2(t, d_78, d_1);
              t = e_78(t);
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
ATerm substitute_1 (ATerm t, ATerm f_78 (ATerm))
{
  t = substitute_2(t, f_78, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm j_56 (ATerm), ATerm k_56 (ATerm))
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  x_19 :
  if(match_cons(y_19, sym_VarDec_2))
    {
      z_19 = ATgetArgument(y_19, 0);
      a_20 = ATgetArgument(y_19, 1);
      {
        ATerm d_20 = NULL;
        t = not_null(z_19);
        {
          ATerm f_20 = NULL;
          t = j_56(t);
          {
            d_20 = t;
            {
              t = not_null(a_20);
              {
                t = k_56(t);
                {
                  f_20 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(d_20), not_null(f_20));
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
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
  b_21 = t;
  z_20 :
  if(((ATgetType(b_21) == AT_LIST) && ((ATermList) b_21 != ATempty)))
    {
      c_21 = ATgetFirst((ATermList) b_21);
      g_21 = (ATerm) ATgetNext((ATermList) b_21);
      a_21 :
      if(match_cons(c_21, sym_SDef_3))
        {
          d_21 = ATgetArgument(c_21, 0);
          e_21 = ATgetArgument(c_21, 1);
          f_21 = ATgetArgument(c_21, 2);
          {
            ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,e_23 = NULL;
            ATerm d_12;
            d_12 = t;
            {
              ATerm o_21 = NULL;
              t = not_null(e_21);
              {
                ATerm y_21 = NULL;
                ATerm e_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, e_1);
                {
                  o_21 = t;
                  {
                    if(((l_21 != NULL) && (l_21 != o_21)))
                      _fail(o_21);
                    else
                      l_21 = o_21;
                    {
                      t = not_null(l_21);
                      {
                        ATerm d_23 = NULL;
                        ATerm f_1 (ATerm t)
                        {
                          ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
                          t_21 = t;
                          q_20 :
                          if(match_cons(t_21, sym_VarDec_2))
                            {
                              u_21 = ATgetArgument(t_21, 0);
                              v_21 = ATgetArgument(t_21, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_21)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, f_1);
                        {
                          y_21 = t;
                          {
                            if(((m_21 != NULL) && (m_21 != y_21)))
                              _fail(y_21);
                            else
                              m_21 = y_21;
                            {
                              t = not_null(b_21);
                              {
                                ATerm g_1 (ATerm t)
                                {
                                  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
                                  z_21 = t;
                                  w_20 :
                                  if(match_cons(z_21, sym_SDef_3))
                                    {
                                      a_22 = ATgetArgument(z_21, 0);
                                      b_22 = ATgetArgument(z_21, 1);
                                      c_22 = ATgetArgument(z_21, 2);
                                      {
                                        ATerm m_22 = NULL;
                                        ATerm r_22 = NULL;
                                        t = not_null(b_22);
                                        {
                                          ATerm h_1 (ATerm t)
                                          {
                                            ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
                                            n_22 = t;
                                            u_20 :
                                            if(match_cons(n_22, sym_VarDec_2))
                                              {
                                                o_22 = ATgetArgument(n_22, 0);
                                                p_22 = ATgetArgument(n_22, 1);
                                                t = not_null(o_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, h_1);
                                          {
                                            r_22 = t;
                                            if(((m_22 != NULL) && (m_22 != r_22)))
                                              _fail(r_22);
                                            else
                                              m_22 = r_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(m_22), not_null(m_21), not_null(c_22));
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
                                  d_23 = t;
                                  if(((n_21 != NULL) && (n_21 != d_23)))
                                    _fail(d_23);
                                  else
                                    n_21 = d_23;
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
            t = d_12;
            {
              ATerm f_23 = NULL;
              t = not_null(n_21);
              {
                t = choices_0(t);
                {
                  f_23 = t;
                  if(((e_23 != NULL) && (e_23 != f_23)))
                    _fail(f_23);
                  else
                    e_23 = f_23;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_21), not_null(l_21), not_null(e_23));
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
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  r_23 :
  if(((ATgetType(t_23) == AT_LIST) && ((ATermList) t_23 != ATempty)))
    {
      u_23 = ATgetFirst((ATermList) t_23);
      v_23 = (ATerm) ATgetNext((ATermList) t_23);
      s_23 :
      if(((ATermList) v_23 == ATempty))
        {
          t = not_null(u_23);
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
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
  e_24 = t;
  c_24 :
  if(match_cons(e_24, sym__2))
    {
      f_24 = ATgetArgument(e_24, 0);
      i_24 = ATgetArgument(e_24, 1);
      d_24 :
      if(match_cons(f_24, sym__2))
        {
          g_24 = ATgetArgument(f_24, 0);
          h_24 = ATgetArgument(f_24, 1);
          {
            ATerm m_24 = NULL;
            ATerm n_24 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_24), not_null(h_24));
            {
              t = Definitions_0(t);
              {
                n_24 = t;
                if(((m_24 != NULL) && (m_24 != n_24)))
                  _fail(n_24);
                else
                  m_24 = n_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_24), not_null(i_24));
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
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  i_25 = t;
  g_25 :
  if(match_cons(i_25, sym_ExplodeCong_2))
    {
      j_25 = ATgetArgument(i_25, 0);
      h_25 = ATgetArgument(i_25, 1);
      {
        ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
        ATerm q_25 = NULL;
        ATerm r_25 = NULL;
        t = new_0(t);
        {
          q_25 = t;
          {
            if(((m_25 != NULL) && (m_25 != q_25)))
              _fail(q_25);
            else
              m_25 = q_25;
            {
              ATerm s_25 = NULL;
              t = new_0(t);
              {
                r_25 = t;
                {
                  if(((n_25 != NULL) && (n_25 != r_25)))
                    _fail(r_25);
                  else
                    n_25 = r_25;
                  {
                    ATerm t_25 = NULL;
                    t = new_0(t);
                    {
                      s_25 = t;
                      {
                        if(((o_25 != NULL) && (o_25 != s_25)))
                          _fail(s_25);
                        else
                          o_25 = s_25;
                        {
                          t = new_0(t);
                          {
                            t_25 = t;
                            if(((p_25 != NULL) && (p_25 != t_25)))
                              _fail(t_25);
                            else
                              p_25 = t_25;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_25)), not_null(o_25)), not_null(n_25)), not_null(m_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(j_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_25))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(h_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_g_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_25)))))));
      }
    }
  else
    {
      if(match_cons(i_25, sym_Build_1))
        {
          j_25 = ATgetArgument(i_25, 0);
          {
            ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
            ATerm z_25 = NULL;
            ATerm d_26 = NULL;
            t = new_0(t);
            {
              z_25 = t;
              {
                if(((x_25 != NULL) && (x_25 != z_25)))
                  _fail(z_25);
                else
                  x_25 = z_25;
                {
                  t = not_null(j_25);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
                      a_26 = t;
                      z_24 :
                      if(match_cons(a_26, sym_Explode_2))
                        {
                          b_26 = ATgetArgument(a_26, 0);
                          c_26 = ATgetArgument(a_26, 1);
                          {
                            if(((v_25 != NULL) && (v_25 != b_26)))
                              _fail(b_26);
                            else
                              v_25 = b_26;
                            {
                              if(((w_25 != NULL) && (w_25 != c_26)))
                                _fail(c_26);
                              else
                                w_25 = c_26;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_25));
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
                      d_26 = t;
                      if(((y_25 != NULL) && (y_25 != d_26)))
                        _fail(d_26);
                      else
                        y_25 = d_26;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_g_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_25)), not_null(v_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_25)))));
          }
        }
      else
        {
          if(match_cons(i_25, sym_Match_1))
            {
              j_25 = ATgetArgument(i_25, 0);
              {
                ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
                ATerm k_26 = NULL;
                ATerm l_26 = NULL;
                t = new_0(t);
                {
                  k_26 = t;
                  {
                    if(((h_26 != NULL) && (h_26 != k_26)))
                      _fail(k_26);
                    else
                      h_26 = k_26;
                    {
                      ATerm p_26 = NULL;
                      t = new_0(t);
                      {
                        l_26 = t;
                        {
                          if(((i_26 != NULL) && (i_26 != l_26)))
                            _fail(l_26);
                          else
                            i_26 = l_26;
                          {
                            t = not_null(j_25);
                            {
                              ATerm j_1 (ATerm t)
                              {
                                ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
                                m_26 = t;
                                e_25 :
                                if(match_cons(m_26, sym_Explode_2))
                                  {
                                    n_26 = ATgetArgument(m_26, 0);
                                    o_26 = ATgetArgument(m_26, 1);
                                    {
                                      if(((f_26 != NULL) && (f_26 != n_26)))
                                        _fail(n_26);
                                      else
                                        f_26 = n_26;
                                      {
                                        if(((g_26 != NULL) && (g_26 != o_26)))
                                          _fail(o_26);
                                        else
                                          g_26 = o_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_26));
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
                                p_26 = t;
                                if(((j_26 != NULL) && (j_26 != p_26)))
                                  _fail(p_26);
                                else
                                  j_26 = p_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_26)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_26))), (ATerm) ATmakeAppl(sym_Prim_2, term_h_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_26)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_26)), (ATerm) ATmakeAppl(sym_Op_2, term_i_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_26)), not_null(f_26)))))));
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
  ATerm v_27 = NULL,w_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym_Match_1))
    {
      w_27 = ATgetArgument(v_27, 0);
      {
        ATerm j_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
            ATerm c_28 = NULL;
            ATerm g_28 = NULL;
            t = new_0(t);
            {
              c_28 = t;
              {
                if(((a_28 != NULL) && (a_28 != c_28)))
                  _fail(c_28);
                else
                  a_28 = c_28;
                {
                  t = not_null(w_27);
                  {
                    ATerm k_1 (ATerm t)
                    {
                      ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
                      d_28 = t;
                      j_27 :
                      if(match_cons(d_28, sym_Anno_2))
                        {
                          e_28 = ATgetArgument(d_28, 0);
                          f_28 = ATgetArgument(d_28, 1);
                          {
                            if(((y_27 != NULL) && (y_27 != e_28)))
                              _fail(e_28);
                            else
                              y_27 = e_28;
                            {
                              if(((z_27 != NULL) && (z_27 != f_28)))
                                _fail(f_28);
                              else
                                z_27 = f_28;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_28)), not_null(y_27));
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
                      g_28 = t;
                      if(((b_28 != NULL) && (b_28 != g_28)))
                        _fail(g_28);
                      else
                        b_28 = g_28;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_28)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_m_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_28)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_27))))));
            LocalPopChoice(l_12);
          }
        else
          {
            t = j_12;
            {
              ATerm n_12 = t;
              int o_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
                  ATerm l_28 = NULL;
                  ATerm o_28 = NULL;
                  t = new_0(t);
                  {
                    l_28 = t;
                    {
                      if(((j_28 != NULL) && (j_28 != l_28)))
                        _fail(l_28);
                      else
                        j_28 = l_28;
                      {
                        t = not_null(w_27);
                        {
                          ATerm l_1 (ATerm t)
                          {
                            ATerm m_28 = NULL,n_28 = NULL;
                            m_28 = t;
                            n_27 :
                            if(match_cons(m_28, sym_RootApp_1))
                              {
                                n_28 = ATgetArgument(m_28, 0);
                                {
                                  if(((i_28 != NULL) && (i_28 != n_28)))
                                    _fail(n_28);
                                  else
                                    i_28 = n_28;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_28));
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
                            o_28 = t;
                            if(((k_28 != NULL) && (k_28 != o_28)))
                              _fail(o_28);
                            else
                              k_28 = o_28;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_28))), not_null(i_28))));
                  LocalPopChoice(o_12);
                }
              else
                {
                  t = n_12;
                  {
                    ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
                    ATerm u_28 = NULL;
                    ATerm y_28 = NULL;
                    t = new_0(t);
                    {
                      u_28 = t;
                      {
                        if(((s_28 != NULL) && (s_28 != u_28)))
                          _fail(u_28);
                        else
                          s_28 = u_28;
                        {
                          t = not_null(w_27);
                          {
                            ATerm m_1 (ATerm t)
                            {
                              ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
                              v_28 = t;
                              s_27 :
                              if(match_cons(v_28, sym_App_2))
                                {
                                  w_28 = ATgetArgument(v_28, 0);
                                  x_28 = ATgetArgument(v_28, 1);
                                  {
                                    if(((r_28 != NULL) && (r_28 != w_28)))
                                      _fail(w_28);
                                    else
                                      r_28 = w_28;
                                    {
                                      if(((q_28 != NULL) && (q_28 != x_28)))
                                        _fail(x_28);
                                      else
                                        q_28 = x_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_28));
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
                              y_28 = t;
                              if(((t_28 != NULL) && (t_28 != y_28)))
                                _fail(y_28);
                              else
                                t_28 = y_28;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_28))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_28)), not_null(r_28)))));
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
  ATerm t_29 = NULL,u_29 = NULL,z_29 = NULL,a_30 = NULL;
  t_29 = t;
  r_29 :
  if(match_cons(t_29, sym_Match_1))
    {
      u_29 = ATgetArgument(t_29, 0);
      s_29 :
      if(match_cons(u_29, sym_RootApp_1))
        {
          z_29 = ATgetArgument(u_29, 0);
          t = not_null(z_29);
        }
      else
        {
          if(match_cons(u_29, sym_App_2))
            {
              z_29 = ATgetArgument(u_29, 0);
              a_30 = ATgetArgument(u_29, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(z_29), not_null(a_30));
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
  ATerm u_30 = NULL,v_30 = NULL;
  u_30 = t;
  t_30 :
  if(match_cons(u_30, sym_Match_1))
    {
      v_30 = ATgetArgument(u_30, 0);
      {
        ATerm x_30 = NULL,y_30 = NULL;
        ATerm c_31 = NULL;
        t = not_null(v_30);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
            z_30 = t;
            q_30 :
            if(match_cons(z_30, sym_RootApp_1))
              {
                a_31 = ATgetArgument(z_30, 0);
                r_30 :
                if(match_cons(a_31, sym_Match_1))
                  {
                    b_31 = ATgetArgument(a_31, 0);
                    {
                      if(((x_30 != NULL) && (x_30 != b_31)))
                        _fail(b_31);
                      else
                        x_30 = b_31;
                      t = not_null(x_30);
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
            c_31 = t;
            if(((y_30 != NULL) && (y_30 != c_31)))
              _fail(c_31);
            else
              y_30 = c_31;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(y_30));
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
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  w_31 = t;
  v_31 :
  if(match_cons(w_31, sym_Build_1))
    {
      x_31 = ATgetArgument(w_31, 0);
      {
        ATerm t_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
            ATerm d_32 = NULL;
            ATerm h_32 = NULL;
            t = new_0(t);
            {
              d_32 = t;
              {
                if(((b_32 != NULL) && (b_32 != d_32)))
                  _fail(d_32);
                else
                  b_32 = d_32;
                {
                  t = not_null(x_31);
                  {
                    ATerm o_1 (ATerm t)
                    {
                      ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
                      e_32 = t;
                      l_31 :
                      if(match_cons(e_32, sym_Anno_2))
                        {
                          f_32 = ATgetArgument(e_32, 0);
                          g_32 = ATgetArgument(e_32, 1);
                          {
                            if(((z_31 != NULL) && (z_31 != f_32)))
                              _fail(f_32);
                            else
                              z_31 = f_32;
                            {
                              if(((a_32 != NULL) && (a_32 != g_32)))
                                _fail(g_32);
                              else
                                a_32 = g_32;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_32));
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
                      h_32 = t;
                      if(((c_32 != NULL) && (c_32 != h_32)))
                        _fail(h_32);
                      else
                        c_32 = h_32;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_32)), not_null(z_31))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_32))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_32))));
            LocalPopChoice(u_12);
          }
        else
          {
            t = t_12;
            {
              ATerm w_12 = t;
              int x_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
                  ATerm m_32 = NULL;
                  ATerm p_32 = NULL;
                  t = new_0(t);
                  {
                    m_32 = t;
                    {
                      if(((k_32 != NULL) && (k_32 != m_32)))
                        _fail(m_32);
                      else
                        k_32 = m_32;
                      {
                        t = not_null(x_31);
                        {
                          ATerm p_1 (ATerm t)
                          {
                            ATerm n_32 = NULL,o_32 = NULL;
                            n_32 = t;
                            p_31 :
                            if(match_cons(n_32, sym_RootApp_1))
                              {
                                o_32 = ATgetArgument(n_32, 0);
                                {
                                  if(((j_32 != NULL) && (j_32 != o_32)))
                                    _fail(o_32);
                                  else
                                    j_32 = o_32;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_32));
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
                            p_32 = t;
                            if(((l_32 != NULL) && (l_32 != p_32)))
                              _fail(p_32);
                            else
                              l_32 = p_32;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_32), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_32))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_32))));
                  LocalPopChoice(x_12);
                }
              else
                {
                  t = w_12;
                  {
                    ATerm r_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
                    ATerm a_33 = NULL;
                    ATerm g_33 = NULL;
                    t = new_0(t);
                    {
                      a_33 = t;
                      {
                        if(((y_32 != NULL) && (y_32 != a_33)))
                          _fail(a_33);
                        else
                          y_32 = a_33;
                        {
                          t = not_null(x_31);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
                              b_33 = t;
                              t_31 :
                              if(match_cons(b_33, sym_App_2))
                                {
                                  c_33 = ATgetArgument(b_33, 0);
                                  d_33 = ATgetArgument(b_33, 1);
                                  {
                                    if(((r_32 != NULL) && (r_32 != c_33)))
                                      _fail(c_33);
                                    else
                                      r_32 = c_33;
                                    {
                                      if(((x_32 != NULL) && (x_32 != d_33)))
                                        _fail(d_33);
                                      else
                                        x_32 = d_33;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_32));
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
                              g_33 = t;
                              if(((z_32 != NULL) && (z_32 != g_33)))
                                _fail(g_33);
                              else
                                z_32 = g_33;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_32), not_null(x_32), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_32)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_32))));
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
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  t_34 = t;
  r_34 :
  if(match_cons(t_34, sym_Build_1))
    {
      u_34 = ATgetArgument(t_34, 0);
      s_34 :
      if(match_cons(u_34, sym_RootApp_1))
        {
          v_34 = ATgetArgument(u_34, 0);
          t = not_null(v_34);
        }
      else
        {
          if(match_cons(u_34, sym_App_2))
            {
              v_34 = ATgetArgument(u_34, 0);
              w_34 = ATgetArgument(u_34, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_34)), not_null(v_34));
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
ATerm Prim_2 (ATerm t, ATerm j_57 (ATerm), ATerm k_57 (ATerm))
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  j_35 = t;
  i_35 :
  if(match_cons(j_35, sym_Prim_2))
    {
      k_35 = ATgetArgument(j_35, 0);
      l_35 = ATgetArgument(j_35, 1);
      {
        ATerm o_35 = NULL;
        t = not_null(k_35);
        {
          ATerm q_35 = NULL;
          t = j_57(t);
          {
            o_35 = t;
            {
              t = not_null(l_35);
              {
                t = k_57(t);
                {
                  q_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(o_35), not_null(q_35));
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
ATerm Explode_2 (ATerm t, ATerm y_53 (ATerm), ATerm z_53 (ATerm))
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
  z_35 = t;
  y_35 :
  if(match_cons(z_35, sym_Explode_2))
    {
      a_36 = ATgetArgument(z_35, 0);
      b_36 = ATgetArgument(z_35, 1);
      {
        ATerm e_36 = NULL;
        t = not_null(a_36);
        {
          ATerm g_36 = NULL;
          t = y_53(t);
          {
            e_36 = t;
            {
              t = not_null(b_36);
              {
                t = z_53(t);
                {
                  g_36 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(e_36), not_null(g_36));
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
ATerm Op_2 (ATerm t, ATerm j_55 (ATerm), ATerm k_55 (ATerm))
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_cons(p_36, sym_Op_2))
    {
      q_36 = ATgetArgument(p_36, 0);
      r_36 = ATgetArgument(p_36, 1);
      {
        ATerm u_36 = NULL;
        t = not_null(q_36);
        {
          ATerm w_36 = NULL;
          t = j_55(t);
          {
            u_36 = t;
            {
              t = not_null(r_36);
              {
                t = k_55(t);
                {
                  w_36 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(u_36), not_null(w_36));
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
ATerm pat_td_1 (ATerm t, ATerm y_81 (ATerm))
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_81(t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              ATerm s_1 (ATerm t)
              {
                t = pat_td_1(t, y_81);
                return(t);
              }
              t = fetch_1(t, s_1);
              return(t);
            }
            t = Op_2(t, _id, r_1);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm c_13 = t;
              int d_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_1 (ATerm t)
                  {
                    t = pat_td_1(t, y_81);
                    return(t);
                  }
                  t = Explode_2(t, _id, t_1);
                  LocalPopChoice(d_13);
                }
              else
                {
                  t = c_13;
                  {
                    ATerm e_13 = t;
                    int j_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_1 (ATerm t)
                        {
                          t = pat_td_1(t, y_81);
                          return(t);
                        }
                        t = Explode_2(t, u_1, _id);
                        LocalPopChoice(j_13);
                      }
                    else
                      {
                        t = e_13;
                        {
                          ATerm v_1 (ATerm t)
                          {
                            ATerm w_1 (ATerm t)
                            {
                              t = pat_td_1(t, y_81);
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
  ATerm m_37 = NULL,n_37 = NULL;
  m_37 = t;
  l_37 :
  if(match_cons(m_37, sym_Build_1))
    {
      n_37 = ATgetArgument(m_37, 0);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_37 = NULL,v_37 = NULL;
            ATerm z_37 = NULL;
            t = not_null(n_37);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
                w_37 = t;
                e_37 :
                if(match_cons(w_37, sym_RootApp_1))
                  {
                    x_37 = ATgetArgument(w_37, 0);
                    f_37 :
                    if(match_cons(x_37, sym_Build_1))
                      {
                        y_37 = ATgetArgument(x_37, 0);
                        {
                          if(((u_37 != NULL) && (u_37 != y_37)))
                            _fail(y_37);
                          else
                            u_37 = y_37;
                          t = not_null(u_37);
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
                z_37 = t;
                if(((v_37 != NULL) && (v_37 != z_37)))
                  _fail(z_37);
                else
                  v_37 = z_37;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(v_37));
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            {
              ATerm b_38 = NULL,c_38 = NULL,g_38 = NULL;
              ATerm p_38 = NULL;
              t = not_null(n_37);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
                  h_38 = t;
                  i_37 :
                  if(match_cons(h_38, sym_App_2))
                    {
                      i_38 = ATgetArgument(h_38, 0);
                      k_38 = ATgetArgument(h_38, 1);
                      j_37 :
                      if(match_cons(i_38, sym_Build_1))
                        {
                          j_38 = ATgetArgument(i_38, 0);
                          {
                            if(((c_38 != NULL) && (c_38 != j_38)))
                              _fail(j_38);
                            else
                              c_38 = j_38;
                            {
                              if(((b_38 != NULL) && (b_38 != k_38)))
                                _fail(k_38);
                              else
                                b_38 = k_38;
                              t = not_null(c_38);
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
                  p_38 = t;
                  if(((g_38 != NULL) && (g_38 != p_38)))
                    _fail(p_38);
                  else
                    g_38 = p_38;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(g_38));
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
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
  f_43 = t;
  q_39 :
  if(match_cons(f_43, sym_InfixApp_3))
    {
      g_43 = ATgetArgument(f_43, 0);
      c_43 = ATgetArgument(f_43, 1);
      b_43 = ATgetArgument(f_43, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(c_43), (ATerm) ATmakeAppl(sym_Op_2, term_i_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_43)), not_null(g_43))));
    }
  else
    {
      if(match_cons(f_43, sym_BAM_3))
        {
          g_43 = ATgetArgument(f_43, 0);
          c_43 = ATgetArgument(f_43, 1);
          b_43 = ATgetArgument(f_43, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(b_43))), not_null(g_43)), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_43))));
        }
      else
        {
          if(match_cons(f_43, sym_AM_2))
            {
              g_43 = ATgetArgument(f_43, 0);
              c_43 = ATgetArgument(f_43, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_43), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_43)));
            }
          else
            {
              if(match_cons(f_43, sym_MA_2))
                {
                  g_43 = ATgetArgument(f_43, 0);
                  c_43 = ATgetArgument(f_43, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_43)), not_null(c_43));
                }
              else
                {
                  if(match_cons(f_43, sym_BA_2))
                    {
                      g_43 = ATgetArgument(f_43, 0);
                      c_43 = ATgetArgument(f_43, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_43)), not_null(g_43));
                    }
                  else
                    {
                      if(match_cons(f_43, sym_Lets_2))
                        {
                          g_43 = ATgetArgument(f_43, 0);
                          c_43 = ATgetArgument(f_43, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(g_43), not_null(c_43));
                        }
                      else
                        {
                          if(match_cons(f_43, sym_LChoices_1))
                            {
                              g_43 = ATgetArgument(f_43, 0);
                              r_39 :
                              if(((ATgetType(g_43) == AT_LIST) && ((ATermList) g_43 != ATempty)))
                                {
                                  d_43 = ATgetFirst((ATermList) g_43);
                                  e_43 = (ATerm) ATgetNext((ATermList) g_43);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(d_43), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(e_43)));
                                }
                              else
                                {
                                  if(((ATermList) g_43 == ATempty))
                                    {
                                      t = term_q_11;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(f_43, sym_Choices_1))
                                {
                                  g_43 = ATgetArgument(f_43, 0);
                                  z_42 :
                                  if(((ATgetType(g_43) == AT_LIST) && ((ATermList) g_43 != ATempty)))
                                    {
                                      d_43 = ATgetFirst((ATermList) g_43);
                                      e_43 = (ATerm) ATgetNext((ATermList) g_43);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(d_43), (ATerm) ATmakeAppl(sym_Choices_1, not_null(e_43)));
                                    }
                                  else
                                    {
                                      if(((ATermList) g_43 == ATempty))
                                        {
                                          t = term_q_11;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(f_43, sym_Seqs_1))
                                    {
                                      g_43 = ATgetArgument(f_43, 0);
                                      a_43 :
                                      if(((ATgetType(g_43) == AT_LIST) && ((ATermList) g_43 != ATempty)))
                                        {
                                          d_43 = ATgetFirst((ATermList) g_43);
                                          e_43 = (ATerm) ATgetNext((ATermList) g_43);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_43), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_43)));
                                        }
                                      else
                                        {
                                          if(((ATermList) g_43 == ATempty))
                                            {
                                              t = term_q_13;
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
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  w_47 = t;
  t_47 :
  if(match_cons(w_47, sym__2))
    {
      x_47 = ATgetArgument(w_47, 0);
      a_48 = ATgetArgument(w_47, 1);
      u_47 :
      if(match_cons(x_47, sym__2))
        {
          y_47 = ATgetArgument(x_47, 0);
          z_47 = ATgetArgument(x_47, 1);
          v_47 :
          if(match_cons(a_48, sym__2))
            {
              b_48 = ATgetArgument(a_48, 0);
              c_48 = ATgetArgument(a_48, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_48)), not_null(y_47)), (ATerm) ATinsert(CheckATermList(not_null(c_48)), not_null(z_47)));
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
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  j_48 :
  if(((ATgetType(k_48) == AT_LIST) && ((ATermList) k_48 != ATempty)))
    {
      l_48 = ATgetFirst((ATermList) k_48);
      m_48 = (ATerm) ATgetNext((ATermList) k_48);
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_48), not_null(m_48));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm s_48 = NULL;
  s_48 = t;
  r_48 :
  if(((ATermList) s_48 == ATempty))
    {
      t = term_r_13;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm l_72 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, l_72);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL;
  ATerm e_49 (ATerm t)
  {
    ATerm b_49 = NULL;
    ATerm c_49 = NULL;
    t = not_null(y_48);
    {
      ATerm s_13 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_13;
        }
      {
        t = new_0(t);
        {
          c_49 = t;
          if(((b_49 != NULL) && (b_49 != c_49)))
            _fail(c_49);
          else
            b_49 = c_49;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(b_49)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_48)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_49))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_49))));
    return(t);
  }
  ATerm f_49 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_q_13, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_48))));
    return(t);
  }
  y_48 = t;
  x_48 :
  if(match_cons(y_48, sym_Var_1))
    {
      z_48 = ATgetArgument(y_48, 0);
      {
        ATerm t_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_49(t);
            LocalPopChoice(y_13);
          }
        else
          {
            t = t_13;
            t = f_49(t);
          }
      }
    }
  else
    {
      t = e_49(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm f_55 (ATerm))
{
  ATerm k_49 = NULL,l_49 = NULL;
  k_49 = t;
  j_49 :
  if(match_cons(k_49, sym_Var_1))
    {
      l_49 = ATgetArgument(k_49, 0);
      {
        ATerm n_49 = NULL;
        t = not_null(l_49);
        {
          t = f_55(t);
          {
            n_49 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_49));
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
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
  w_49 = t;
  v_49 :
  if(match_cons(w_49, sym_Prim_2))
    {
      x_49 = ATgetArgument(w_49, 0);
      y_49 = ATgetArgument(w_49, 1);
      {
        ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
        ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
        t = not_null(y_49);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm g_14 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_14;
              }
            return(t);
          }
          t = fetch_1(t, z_1);
          {
            t = not_null(y_49);
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
                  e_50 = t;
                  t_49 :
                  if(match_cons(e_50, sym__2))
                    {
                      f_50 = ATgetArgument(e_50, 0);
                      g_50 = ATgetArgument(e_50, 1);
                      u_49 :
                      if(match_cons(g_50, sym__2))
                        {
                          h_50 = ATgetArgument(g_50, 0);
                          i_50 = ATgetArgument(g_50, 1);
                          {
                            if(((b_50 != NULL) && (b_50 != f_50)))
                              _fail(f_50);
                            else
                              b_50 = f_50;
                            {
                              if(((c_50 != NULL) && (c_50 != h_50)))
                                _fail(h_50);
                              else
                                c_50 = h_50;
                              if(((d_50 != NULL) && (d_50 != i_50)))
                                _fail(i_50);
                              else
                                d_50 = i_50;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_50), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_50)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(x_49), not_null(d_50))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm z_66 (ATerm), ATerm a_67 (ATerm))
{
  ATerm l_50 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_66(t);
        t = l_50(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = a_67(t);
      }
    return(t);
  }
  t = l_50(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm c_67 (ATerm))
{
  t = repeat_2(t, c_67, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm n_50 = NULL;
  n_50 = t;
  m_50 :
  if(!(match_cons(n_50, sym_Wld_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm j_14 = t;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm k_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(o_14);
          }
        else
          {
            t = k_14;
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
      t = j_14;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm s_53 (ATerm), ATerm t_53 (ATerm))
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  s_50 = t;
  r_50 :
  if(match_cons(s_50, sym_App_2))
    {
      t_50 = ATgetArgument(s_50, 0);
      u_50 = ATgetArgument(s_50, 1);
      {
        ATerm x_50 = NULL;
        t = not_null(t_50);
        {
          ATerm z_50 = NULL;
          t = s_53(t);
          {
            x_50 = t;
            {
              t = not_null(u_50);
              {
                t = t_53(t);
                {
                  z_50 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_50), not_null(z_50));
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
ATerm Con_3 (ATerm t, ATerm p_53 (ATerm), ATerm q_53 (ATerm), ATerm r_53 (ATerm))
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  j_51 = t;
  i_51 :
  if(match_cons(j_51, sym_Con_3))
    {
      k_51 = ATgetArgument(j_51, 0);
      l_51 = ATgetArgument(j_51, 1);
      m_51 = ATgetArgument(j_51, 2);
      {
        ATerm q_51 = NULL;
        t = not_null(k_51);
        {
          ATerm s_51 = NULL;
          t = p_53(t);
          {
            q_51 = t;
            {
              t = not_null(l_51);
              {
                ATerm u_51 = NULL;
                t = q_53(t);
                {
                  s_51 = t;
                  {
                    t = not_null(m_51);
                    {
                      t = r_53(t);
                      {
                        u_51 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(q_51), not_null(s_51), not_null(u_51));
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
  ATerm p_14 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
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
      t = p_14;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
  e_52 = t;
  c_52 :
  if(match_cons(e_52, sym_SRule_1))
    {
      f_52 = ATgetArgument(e_52, 0);
      d_52 :
      if(match_cons(f_52, sym_StratRule_3))
        {
          i_52 = ATgetArgument(f_52, 0);
          j_52 = ATgetArgument(f_52, 1);
          k_52 = ATgetArgument(f_52, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_52)), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_52))), not_null(i_52)));
        }
      else
        {
          if(match_cons(f_52, sym_Rule_3))
            {
              i_52 = ATgetArgument(f_52, 0);
              j_52 = ATgetArgument(f_52, 1);
              k_52 = ATgetArgument(f_52, 2);
              {
                t = not_null(i_52);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(j_52);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(j_52))), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_52))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_52))));
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
ATerm Scope_2 (ATerm t, ATerm g_57 (ATerm), ATerm h_57 (ATerm))
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
  x_52 = t;
  w_52 :
  if(match_cons(x_52, sym_Scope_2))
    {
      y_52 = ATgetArgument(x_52, 0);
      z_52 = ATgetArgument(x_52, 1);
      {
        ATerm c_53 = NULL;
        t = not_null(y_52);
        {
          ATerm e_53 = NULL;
          t = g_57(t);
          {
            c_53 = t;
            {
              t = not_null(z_52);
              {
                t = h_57(t);
                {
                  e_53 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_53), not_null(e_53));
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
ATerm oncetd_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm j_53 (ATerm t)
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_76(t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = _one(t, j_53);
      }
    return(t);
  }
  t = j_53(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
  f_54 = t;
  d_54 :
  if(match_cons(f_54, sym_SRule_1))
    {
      g_54 = ATgetArgument(f_54, 0);
      e_54 :
      if(match_cons(g_54, sym_Rule_3))
        {
          h_54 = ATgetArgument(g_54, 0);
          i_54 = ATgetArgument(g_54, 1);
          j_54 = ATgetArgument(g_54, 2);
          {
            ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
            ATerm v_54 = NULL;
            ATerm b_55 = NULL;
            t = new_0(t);
            {
              v_54 = t;
              {
                if(((s_54 != NULL) && (s_54 != v_54)))
                  _fail(v_54);
                else
                  s_54 = v_54;
                {
                  t = not_null(h_54);
                  {
                    ATerm o_55 = NULL;
                    ATerm d_2 (ATerm t)
                    {
                      ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
                      w_54 = t;
                      n_53 :
                      if(match_cons(w_54, sym_Con_3))
                        {
                          x_54 = ATgetArgument(w_54, 0);
                          z_54 = ATgetArgument(w_54, 1);
                          a_55 = ATgetArgument(w_54, 2);
                          o_53 :
                          if(match_cons(x_54, sym_Var_1))
                            {
                              y_54 = ATgetArgument(x_54, 0);
                              {
                                if(((r_54 != NULL) && (r_54 != y_54)))
                                  _fail(y_54);
                                else
                                  r_54 = y_54;
                                {
                                  if(((p_54 != NULL) && (p_54 != z_54)))
                                    _fail(z_54);
                                  else
                                    p_54 = z_54;
                                  {
                                    if(((n_54 != NULL) && (n_54 != a_55)))
                                      _fail(a_55);
                                    else
                                      n_54 = a_55;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_54));
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
                      b_55 = t;
                      {
                        if(((t_54 != NULL) && (t_54 != b_55)))
                          _fail(b_55);
                        else
                          t_54 = b_55;
                        {
                          t = not_null(i_54);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm d_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL;
                              d_55 = t;
                              w_53 :
                              if(match_cons(d_55, sym_Con_3))
                                {
                                  g_55 = ATgetArgument(d_55, 0);
                                  i_55 = ATgetArgument(d_55, 1);
                                  l_55 = ATgetArgument(d_55, 2);
                                  x_53 :
                                  if(match_cons(g_55, sym_Var_1))
                                    {
                                      h_55 = ATgetArgument(g_55, 0);
                                      a_54 :
                                      if(match_cons(l_55, sym_Call_2))
                                        {
                                          m_55 = ATgetArgument(l_55, 0);
                                          n_55 = ATgetArgument(l_55, 1);
                                          b_54 :
                                          if(((ATermList) n_55 == ATempty))
                                            {
                                              {
                                                if(((r_54 != NULL) && (r_54 != h_55)))
                                                  _fail(h_55);
                                                else
                                                  r_54 = h_55;
                                                {
                                                  if(((q_54 != NULL) && (q_54 != i_55)))
                                                    _fail(i_55);
                                                  else
                                                    q_54 = i_55;
                                                  {
                                                    if(((o_54 != NULL) && (o_54 != m_55)))
                                                      _fail(m_55);
                                                    else
                                                      o_54 = m_55;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_54));
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
                              o_55 = t;
                              if(((u_54 != NULL) && (u_54 != o_55)))
                                _fail(o_55);
                              else
                                u_54 = o_55;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_54)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_54), not_null(u_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_54), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(o_54), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_54), not_null(q_54), term_q_13)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_54)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_54)))))));
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
    ATerm u_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(w_14);
      }
    else
      {
        t = u_14;
        {
          ATerm x_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(a_15);
            }
          else
            {
              t = x_14;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm w_55 (ATerm t)
  {
    t = v_74(t);
    t = _all(t, w_55);
    return(t);
  }
  t = w_55(t);
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
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            {
              ATerm d_15 = t;
              int i_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(i_15);
                }
              else
                {
                  t = d_15;
                  {
                    ATerm j_15 = t;
                    int k_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(k_15);
                      }
                    else
                      {
                        t = j_15;
                        {
                          ATerm l_15 = t;
                          int m_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(m_15);
                            }
                          else
                            {
                              t = l_15;
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
  ATerm y_55 = NULL;
  y_55 = t;
  x_55 :
  if(!(match_cons(y_55, sym__0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm q_56 = NULL;
  ATerm s_56 = NULL,t_56 = NULL,b_57 = NULL,d_57 = NULL;
  q_56 = t;
  {
    ATerm n_15;
    n_15 = t;
    {
      ATerm u_56 = NULL;
      ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL;
      t = not_null(q_56);
      {
        u_56 = t;
        {
          t = SSL_explode_term(not_null(u_56));
          {
            w_56 = t;
            l_56 :
            if(match_cons(w_56, sym__2))
              {
                x_56 = ATgetArgument(w_56, 0);
                y_56 = ATgetArgument(w_56, 1);
                m_56 :
                if(match_string(x_56, ""))
                  {
                    n_56 :
                    if(((ATgetType(y_56) == AT_LIST) && ((ATermList) y_56 != ATempty)))
                      {
                        z_56 = ATgetFirst((ATermList) y_56);
                        a_57 = (ATerm) ATgetNext((ATermList) y_56);
                        {
                          if(((s_56 != NULL) && (s_56 != z_56)))
                            _fail(z_56);
                          else
                            s_56 = z_56;
                          if(((t_56 != NULL) && (t_56 != a_57)))
                            _fail(a_57);
                          else
                            t_56 = a_57;
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
    t = n_15;
    {
      ATerm r_15;
      r_15 = t;
      {
        ATerm c_57 = NULL;
        t = term_i_12;
        {
          c_57 = t;
          if(((b_57 != NULL) && (b_57 != c_57)))
            _fail(c_57);
          else
            b_57 = c_57;
        }
      }
      t = r_15;
      {
        t = SSL_mkterm(not_null(b_57), not_null(t_56));
        {
          d_57 = t;
          t = not_null(d_57);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm w_57 = NULL;
  ATerm y_57 = NULL,a_58 = NULL;
  w_57 = t;
  {
    ATerm c_58 = NULL;
    ATerm e_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL;
    t = not_null(w_57);
    {
      c_58 = t;
      {
        t = SSL_explode_term(not_null(c_58));
        {
          e_58 = t;
          t_57 :
          if(match_cons(e_58, sym__2))
            {
              i_58 = ATgetArgument(e_58, 0);
              j_58 = ATgetArgument(e_58, 1);
              u_57 :
              if(match_string(i_58, ""))
                {
                  v_57 :
                  if(((ATgetType(j_58) == AT_LIST) && ((ATermList) j_58 != ATempty)))
                    {
                      k_58 = ATgetFirst((ATermList) j_58);
                      l_58 = (ATerm) ATgetNext((ATermList) j_58);
                      {
                        if(((a_58 != NULL) && (a_58 != k_58)))
                          _fail(k_58);
                        else
                          a_58 = k_58;
                        if(((y_57 != NULL) && (y_57 != l_58)))
                          _fail(l_58);
                        else
                          y_57 = l_58;
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
    t = not_null(a_58);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm b_59 = NULL,d_59 = NULL,f_59 = NULL;
  ATerm h_59 (ATerm t)
  {
    ATerm s_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_58 = NULL,z_58 = NULL;
        ATerm y_15;
        y_15 = t;
        {
          ATerm y_58 = NULL;
          t = map_1(t, Thd_0);
          {
            t = e_74(t);
            {
              y_58 = t;
              if(((x_58 != NULL) && (x_58 != y_58)))
                _fail(y_58);
              else
                x_58 = y_58;
            }
          }
        }
        t = y_15;
        {
          ATerm a_59 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = h_59(t);
            {
              a_59 = t;
              if(((z_58 != NULL) && (z_58 != a_59)))
                _fail(a_59);
              else
                z_58 = a_59;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(z_58)), not_null(x_58));
        }
        LocalPopChoice(x_15);
      }
    else
      {
        t = s_15;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = h_59(t);
  {
    ATerm z_15;
    z_15 = t;
    {
      ATerm c_59 = NULL;
      c_59 = t;
      if(((b_59 != NULL) && (b_59 != c_59)))
        _fail(c_59);
      else
        b_59 = c_59;
    }
    t = z_15;
    {
      ATerm d_16;
      d_16 = t;
      {
        ATerm e_59 = NULL;
        t = term_i_12;
        {
          e_59 = t;
          if(((d_59 != NULL) && (d_59 != e_59)))
            _fail(e_59);
          else
            d_59 = e_59;
        }
      }
      t = d_16;
      {
        t = SSL_mkterm(not_null(d_59), not_null(b_59));
        {
          f_59 = t;
          t = not_null(f_59);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm r_59 = NULL;
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
  r_59 = t;
  {
    ATerm w_59 = NULL;
    ATerm x_59 = NULL;
    t = new_0(t);
    {
      w_59 = t;
      {
        if(((t_59 != NULL) && (t_59 != w_59)))
          _fail(w_59);
        else
          t_59 = w_59;
        {
          ATerm y_59 = NULL;
          t = new_0(t);
          {
            x_59 = t;
            {
              if(((u_59 != NULL) && (u_59 != x_59)))
                _fail(x_59);
              else
                u_59 = x_59;
              {
                t = new_0(t);
                {
                  y_59 = t;
                  if(((v_59 != NULL) && (v_59 != y_59)))
                    _fail(y_59);
                  else
                    v_59 = y_59;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_59)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_59)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_59)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_59))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(t_59), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_16), term_k_16)), not_null(u_59), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_59)), not_null(v_59), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_59)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL;
  l_60 = t;
  k_60 :
  if(match_cons(l_60, sym__2))
    {
      m_60 = ATgetArgument(l_60, 0);
      n_60 = ATgetArgument(l_60, 1);
      {
        ATerm l_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(m_60), not_null(n_60));
            LocalPopChoice(w_16);
          }
        else
          {
            t = l_16;
            t = SSL_subtr(not_null(m_60), not_null(n_60));
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
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
  t_60 = t;
  s_60 :
  if(match_cons(t_60, sym__2))
    {
      u_60 = ATgetArgument(t_60, 0);
      v_60 = ATgetArgument(t_60, 1);
      {
        ATerm x_16;
        x_16 = t;
        {
          ATerm y_16 = t;
          int z_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_60), not_null(v_60));
              LocalPopChoice(z_16);
            }
          else
            {
              t = y_16;
              t = SSL_gtr(not_null(u_60), not_null(v_60));
            }
        }
        t = x_16;
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
  ATerm f_61 = NULL;
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_61 = NULL,h_61 = NULL,l_61 = NULL;
      g_61 = t;
      c_61 :
      if(match_cons(g_61, sym__2))
        {
          h_61 = ATgetArgument(g_61, 0);
          l_61 = ATgetArgument(g_61, 1);
          {
            if(((f_61 != NULL) && (f_61 != h_61)))
              _fail(h_61);
            else
              f_61 = h_61;
            if(((f_61 != NULL) && (f_61 != l_61)))
              _fail(l_61);
            else
              f_61 = l_61;
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
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL;
    y_61 = t;
    o_61 :
    if(match_cons(y_61, sym__2))
      {
        z_61 = ATgetArgument(y_61, 0);
        a_62 = ATgetArgument(y_61, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(z_61), not_null(a_62), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL;
    d_62 = t;
    q_61 :
    if(match_cons(d_62, sym__3))
      {
        e_62 = ATgetArgument(d_62, 0);
        f_62 = ATgetArgument(d_62, 1);
        g_62 = ATgetArgument(d_62, 2);
        r_61 :
        if(match_int(e_62, 0))
          {
            t = not_null(g_62);
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
    ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL;
    j_62 = t;
    x_61 :
    if(match_cons(j_62, sym__3))
      {
        k_62 = ATgetArgument(j_62, 0);
        l_62 = ATgetArgument(j_62, 1);
        m_62 = ATgetArgument(j_62, 2);
        {
          ATerm q_62 = NULL,s_62 = NULL;
          ATerm c_17;
          c_17 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_62), term_n_9);
            t = geq_0(t);
          }
          t = c_17;
          {
            ATerm d_17;
            d_17 = t;
            {
              ATerm r_62 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_62), term_n_9);
              {
                t = subt_0(t);
                {
                  r_62 = t;
                  if(((q_62 != NULL) && (q_62 != r_62)))
                    _fail(r_62);
                  else
                    q_62 = r_62;
                }
              }
            }
            t = d_17;
            {
              ATerm t_62 = NULL;
              t = not_null(l_62);
              {
                t = l_64(t);
                {
                  t_62 = t;
                  if(((s_62 != NULL) && (s_62 != t_62)))
                    _fail(t_62);
                  else
                    s_62 = t_62;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(q_62), not_null(l_62), (ATerm) ATinsert(CheckATermList(not_null(m_62)), not_null(s_62)));
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
  ATerm e_63 = NULL,f_63 = NULL,g_63 = NULL;
  e_63 = t;
  d_63 :
  if(match_cons(e_63, sym__2))
    {
      f_63 = ATgetArgument(e_63, 0);
      g_63 = ATgetArgument(e_63, 1);
      {
        ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
        ATerm m_63 = NULL;
        ATerm n_63 = NULL;
        t = new_0(t);
        {
          m_63 = t;
          {
            if(((j_63 != NULL) && (j_63 != m_63)))
              _fail(m_63);
            else
              j_63 = m_63;
            {
              ATerm o_63 = NULL;
              t = new_0(t);
              {
                n_63 = t;
                {
                  if(((k_63 != NULL) && (k_63 != n_63)))
                    _fail(n_63);
                  else
                    k_63 = n_63;
                  {
                    t = new_0(t);
                    {
                      o_63 = t;
                      if(((l_63 != NULL) && (l_63 != o_63)))
                        _fail(o_63);
                      else
                        l_63 = o_63;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_63)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_63))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_63)))), (ATerm) ATmakeAppl(sym_Op_2, term_i_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_63))), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_63))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_63), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_k_16), term_k_16)), not_null(k_63), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_63)), not_null(l_63), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_63)));
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
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL;
  b_64 = t;
  u_63 :
  if(match_cons(b_64, sym__2))
    {
      c_64 = ATgetArgument(b_64, 0);
      d_64 = ATgetArgument(b_64, 1);
      v_63 :
      if(((ATermList) d_64 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm j_72 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, j_72);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL;
  h_64 = t;
  g_64 :
  if(((ATgetType(h_64) == AT_LIST) && ((ATermList) h_64 != ATempty)))
    {
      i_64 = ATgetFirst((ATermList) h_64);
      j_64 = (ATerm) ATgetNext((ATermList) h_64);
      t = not_null(j_64);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,z_64 = NULL;
  s_64 = t;
  q_64 :
  if(((ATgetType(s_64) == AT_LIST) && ((ATermList) s_64 != ATempty)))
    {
      t_64 = ATgetFirst((ATermList) s_64);
      z_64 = (ATerm) ATgetNext((ATermList) s_64);
      r_64 :
      if(((ATermList) z_64 == ATempty))
        {
          t = not_null(t_64);
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
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL;
  ATerm k_68 (ATerm t)
  {
    ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,g_67 = NULL;
    ATerm h_17;
    h_17 = t;
    {
      ATerm p_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL;
      ATerm q_66 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_66), term_n_9);
      {
        t = add_0(t);
        {
          q_66 = t;
          if(((p_66 != NULL) && (p_66 != q_66)))
            _fail(q_66);
          else
            p_66 = q_66;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_66), term_i_17);
        {
          t = copy_1(t, new_0);
          {
            r_66 = t;
            q_65 :
            if(((ATgetType(r_66) == AT_LIST) && ((ATermList) r_66 != ATempty)))
              {
                s_66 = ATgetFirst((ATermList) r_66);
                t_66 = (ATerm) ATgetNext((ATermList) r_66);
                {
                  ATerm u_66 = NULL;
                  if(((h_66 != NULL) && (h_66 != s_66)))
                    _fail(s_66);
                  else
                    h_66 = s_66;
                  {
                    if(((i_66 != NULL) && (i_66 != t_66)))
                      _fail(t_66);
                    else
                      i_66 = t_66;
                    {
                      t = not_null(i_66);
                      {
                        ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
                        t = last_0(t);
                        {
                          u_66 = t;
                          {
                            if(((g_66 != NULL) && (g_66 != u_66)))
                              _fail(u_66);
                            else
                              g_66 = u_66;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_66)), not_null(h_66)), not_null(i_66));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    v_66 = t;
                                    p_65 :
                                    if(match_cons(v_66, sym__6))
                                      {
                                        w_66 = ATgetArgument(v_66, 0);
                                        x_66 = ATgetArgument(v_66, 1);
                                        y_66 = ATgetArgument(v_66, 2);
                                        d_67 = ATgetArgument(v_66, 3);
                                        e_67 = ATgetArgument(v_66, 4);
                                        f_67 = ATgetArgument(v_66, 5);
                                        {
                                          if(((j_66 != NULL) && (j_66 != w_66)))
                                            _fail(w_66);
                                          else
                                            j_66 = w_66;
                                          {
                                            if(((k_66 != NULL) && (k_66 != x_66)))
                                              _fail(x_66);
                                            else
                                              k_66 = x_66;
                                            {
                                              if(((l_66 != NULL) && (l_66 != y_66)))
                                                _fail(y_66);
                                              else
                                                l_66 = y_66;
                                              {
                                                if(((m_66 != NULL) && (m_66 != d_67)))
                                                  _fail(d_67);
                                                else
                                                  m_66 = d_67;
                                                {
                                                  if(((n_66 != NULL) && (n_66 != e_67)))
                                                    _fail(e_67);
                                                  else
                                                    n_66 = e_67;
                                                  if(((o_66 != NULL) && (o_66 != f_67)))
                                                    _fail(f_67);
                                                  else
                                                    o_66 = f_67;
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
    t = h_17;
    {
      ATerm h_67 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_66)), not_null(l_66)), not_null(i_66));
      {
        t = concat_0(t);
        {
          h_67 = t;
          if(((g_67 != NULL) && (g_67 != h_67)))
            _fail(h_67);
          else
            g_67 = h_67;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(b_66), term_j_17), not_null(k_66), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(g_67)), not_null(h_66)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_66))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_66), not_null(m_66)))), (ATerm)ATmakeAppl(sym_Op_2, term_i_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_66))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_66), not_null(o_66)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_66))))));
    }
    return(t);
  }
  ATerm l_68 (ATerm t)
  {
    ATerm j_67 = NULL;
    ATerm k_67 = NULL;
    t = new_0(t);
    {
      k_67 = t;
      if(((j_67 != NULL) && (j_67 != k_67)))
        _fail(k_67);
      else
        j_67 = k_67;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(b_66), term_j_17), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_67)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_67))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_66), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_i_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_67))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_66), (ATerm) ATempty))), term_q_13))));
    return(t);
  }
  ATerm m_68 (ATerm t)
  {
    ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,i_68 = NULL;
    ATerm k_17;
    k_17 = t;
    {
      ATerm a_68 = NULL;
      ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL;
      t = new_0(t);
      {
        a_68 = t;
        {
          if(((n_67 != NULL) && (n_67 != a_68)))
            _fail(a_68);
          else
            n_67 = a_68;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_66), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_67)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  b_68 = t;
                  v_65 :
                  if(match_cons(b_68, sym__6))
                    {
                      c_68 = ATgetArgument(b_68, 0);
                      d_68 = ATgetArgument(b_68, 1);
                      e_68 = ATgetArgument(b_68, 2);
                      f_68 = ATgetArgument(b_68, 3);
                      g_68 = ATgetArgument(b_68, 4);
                      h_68 = ATgetArgument(b_68, 5);
                      {
                        if(((o_67 != NULL) && (o_67 != c_68)))
                          _fail(c_68);
                        else
                          o_67 = c_68;
                        {
                          if(((p_67 != NULL) && (p_67 != d_68)))
                            _fail(d_68);
                          else
                            p_67 = d_68;
                          {
                            if(((w_67 != NULL) && (w_67 != e_68)))
                              _fail(e_68);
                            else
                              w_67 = e_68;
                            {
                              if(((x_67 != NULL) && (x_67 != f_68)))
                                _fail(f_68);
                              else
                                x_67 = f_68;
                              {
                                if(((y_67 != NULL) && (y_67 != g_68)))
                                  _fail(g_68);
                                else
                                  y_67 = g_68;
                                if(((z_67 != NULL) && (z_67 != h_68)))
                                  _fail(h_68);
                                else
                                  z_67 = h_68;
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
    t = k_17;
    {
      ATerm j_68 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_67), not_null(y_67));
      {
        t = conc_0(t);
        {
          j_68 = t;
          if(((i_68 != NULL) && (i_68 != j_68)))
            _fail(j_68);
          else
            i_68 = j_68;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(b_66), term_l_17), not_null(p_67), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(i_68)), not_null(n_67)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_67))), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_66), not_null(x_67)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(b_66), not_null(z_67)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_67))))));
    }
    return(t);
  }
  a_66 = t;
  x_65 :
  if(match_cons(a_66, sym__3))
    {
      b_66 = ATgetArgument(a_66, 0);
      c_66 = ATgetArgument(a_66, 1);
      d_66 = ATgetArgument(a_66, 2);
      y_65 :
      if(match_string(c_66, "T"))
        {
          z_65 :
          if(match_int(d_66, 0))
            {
              ATerm m_17 = t;
              int n_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_68(t);
                  LocalPopChoice(n_17);
                }
              else
                {
                  t = m_17;
                  t = l_68(t);
                }
            }
          else
            {
              t = k_68(t);
            }
        }
      else
        {
          if(match_string(c_66, "D"))
            {
              t = m_68(t);
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
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL;
  b_69 = t;
  y_68 :
  if(match_cons(b_69, sym__2))
    {
      c_69 = ATgetArgument(b_69, 0);
      h_69 = ATgetArgument(b_69, 1);
      z_68 :
      if(match_cons(c_69, sym__2))
        {
          d_69 = ATgetArgument(c_69, 0);
          g_69 = ATgetArgument(c_69, 1);
          a_69 :
          if(match_cons(d_69, sym_Mod_2))
            {
              e_69 = ATgetArgument(d_69, 0);
              f_69 = ATgetArgument(d_69, 1);
              {
                ATerm m_69 = NULL;
                ATerm n_69 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_69), not_null(f_69), not_null(g_69));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      n_69 = t;
                      if(((m_69 != NULL) && (m_69 != n_69)))
                        _fail(n_69);
                      else
                        m_69 = n_69;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_69), not_null(h_69));
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
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL;
  y_69 = t;
  w_69 :
  if(match_cons(y_69, sym__5))
    {
      z_69 = ATgetArgument(y_69, 0);
      c_70 = ATgetArgument(y_69, 1);
      d_70 = ATgetArgument(y_69, 2);
      e_70 = ATgetArgument(y_69, 3);
      f_70 = ATgetArgument(y_69, 4);
      x_69 :
      if(((ATgetType(z_69) == AT_LIST) && ((ATermList) z_69 != ATempty)))
        {
          a_70 = ATgetFirst((ATermList) z_69);
          b_70 = (ATerm) ATgetNext((ATermList) z_69);
          t = (ATerm) ATmakeAppl(sym__5, not_null(b_70), not_null(c_70), not_null(d_70), not_null(e_70), (ATerm) ATinsert(CheckATermList(not_null(f_70)), not_null(a_70)));
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
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL;
  p_70 = t;
  o_70 :
  if(match_cons(p_70, sym__2))
    {
      q_70 = ATgetArgument(p_70, 0);
      r_70 = ATgetArgument(p_70, 1);
      {
        t = not_null(q_70);
        {
          ATerm l_2 (ATerm t)
          {
            t = not_null(r_70);
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
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL;
  y_70 = t;
  w_70 :
  if(match_cons(y_70, sym__2))
    {
      z_70 = ATgetArgument(y_70, 0);
      a_71 = ATgetArgument(y_70, 1);
      x_70 :
      if(((ATgetType(a_71) == AT_LIST) && ((ATermList) a_71 != ATempty)))
        {
          b_71 = ATgetFirst((ATermList) a_71);
          c_71 = (ATerm) ATgetNext((ATermList) a_71);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_70)), not_null(b_71)), not_null(c_71));
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
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
  j_71 = t;
  i_71 :
  if(match_cons(j_71, sym__2))
    {
      k_71 = ATgetArgument(j_71, 0);
      l_71 = ATgetArgument(j_71, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_71)), not_null(k_71));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm t_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL;
  t_71 = t;
  q_71 :
  if(match_cons(t_71, sym__2))
    {
      v_71 = ATgetArgument(t_71, 0);
      y_71 = ATgetArgument(t_71, 1);
      r_71 :
      if(((ATgetType(v_71) == AT_LIST) && ((ATermList) v_71 != ATempty)))
        {
          w_71 = ATgetFirst((ATermList) v_71);
          x_71 = (ATerm) ATgetNext((ATermList) v_71);
          s_71 :
          if(((ATgetType(y_71) == AT_LIST) && ((ATermList) y_71 != ATempty)))
            {
              z_71 = ATgetFirst((ATermList) y_71);
              a_72 = (ATerm) ATgetNext((ATermList) y_71);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_71), not_null(z_71)), (ATerm) ATmakeAppl(sym__2, not_null(x_71), not_null(a_72)));
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
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL;
  s_72 = t;
  p_72 :
  if(match_cons(s_72, sym__2))
    {
      t_72 = ATgetArgument(s_72, 0);
      u_72 = ATgetArgument(s_72, 1);
      q_72 :
      if(((ATermList) t_72 == ATempty))
        {
          r_72 :
          if(((ATermList) u_72 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm e_72 (ATerm))
{
  ATerm w_72 (ATerm t)
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_72(t);
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        {
          t = c_72(t);
          {
            t = _2(t, e_72, w_72);
            t = d_72(t);
          }
        }
      }
    return(t);
  }
  t = w_72(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm g_72 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, g_72);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
  h_73 = t;
  f_73 :
  if(((ATgetType(h_73) == AT_LIST) && ((ATermList) h_73 != ATempty)))
    {
      i_73 = ATgetFirst((ATermList) h_73);
      l_73 = (ATerm) ATgetNext((ATermList) h_73);
      g_73 :
      if(match_cons(i_73, sym__2))
        {
          j_73 = ATgetArgument(i_73, 0);
          k_73 = ATgetArgument(i_73, 1);
          {
            ATerm r_73 = NULL,s_73 = NULL,y_73 = NULL,h_74 = NULL;
            ATerm s_17;
            s_17 = t;
            {
              ATerm t_73 = NULL;
              ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL;
              t = not_null(k_73);
              {
                t_73 = t;
                {
                  t = SSL_explode_term(not_null(t_73));
                  {
                    v_73 = t;
                    a_73 :
                    if(match_cons(v_73, sym__2))
                      {
                        w_73 = ATgetArgument(v_73, 0);
                        x_73 = ATgetArgument(v_73, 1);
                        {
                          if(((r_73 != NULL) && (r_73 != w_73)))
                            _fail(w_73);
                          else
                            r_73 = w_73;
                          if(((s_73 != NULL) && (s_73 != x_73)))
                            _fail(x_73);
                          else
                            s_73 = x_73;
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
            t = s_17;
            {
              ATerm t_17;
              t_17 = t;
              {
                ATerm z_73 = NULL;
                ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL;
                t = not_null(j_73);
                {
                  z_73 = t;
                  {
                    t = SSL_explode_term(not_null(z_73));
                    {
                      b_74 = t;
                      d_73 :
                      if(match_cons(b_74, sym__2))
                        {
                          c_74 = ATgetArgument(b_74, 0);
                          d_74 = ATgetArgument(b_74, 1);
                          {
                            if(((r_73 != NULL) && (r_73 != c_74)))
                              _fail(c_74);
                            else
                              r_73 = c_74;
                            if(((y_73 != NULL) && (y_73 != d_74)))
                              _fail(d_74);
                            else
                              y_73 = d_74;
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
              t = t_17;
              {
                ATerm i_74 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_73), not_null(s_73));
                {
                  t = zip_1(t, _id);
                  {
                    i_74 = t;
                    if(((h_74 != NULL) && (h_74 != i_74)))
                      _fail(i_74);
                    else
                      h_74 = i_74;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_74), not_null(l_73));
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
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,x_74 = NULL,y_74 = NULL;
  s_74 = t;
  q_74 :
  if(((ATgetType(s_74) == AT_LIST) && ((ATermList) s_74 != ATempty)))
    {
      t_74 = ATgetFirst((ATermList) s_74);
      y_74 = (ATerm) ATgetNext((ATermList) s_74);
      r_74 :
      if(match_cons(t_74, sym__2))
        {
          u_74 = ATgetArgument(t_74, 0);
          x_74 = ATgetArgument(t_74, 1);
          {
            ATerm a_75 = NULL;
            if(((u_74 != NULL) && (u_74 != x_74)))
              _fail(x_74);
            else
              u_74 = x_74;
            {
              if(((a_75 != NULL) && (a_75 != y_74)))
                _fail(y_74);
              else
                a_75 = y_74;
              t = not_null(a_75);
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
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL;
      f_75 = t;
      d_75 :
      if(match_cons(f_75, sym__2))
        {
          g_75 = ATgetArgument(f_75, 0);
          h_75 = ATgetArgument(f_75, 1);
          {
            t = not_null(g_75);
            {
              ATerm n_75 (ATerm t)
              {
                ATerm w_17 = t;
                int y_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(y_17);
                  }
                else
                  {
                    t = w_17;
                    {
                      ATerm d_18 = t;
                      int e_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_2 (ATerm t)
                          {
                            t = not_null(h_75);
                            return(t);
                          }
                          t = HdMember_1(t, m_2);
                          t = n_75(t);
                          LocalPopChoice(e_18);
                        }
                      else
                        {
                          t = d_18;
                          t = Cons_2(t, _id, n_75);
                        }
                    }
                  }
                return(t);
              }
              t = n_75(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm k_75 = NULL;
          k_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(k_75));
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          ATerm f_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_2 (ATerm t)
              {
                ATerm i_18 = t;
                int j_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(j_18);
                  }
                else
                  {
                    t = i_18;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, q_2);
              LocalPopChoice(h_18);
            }
          else
            {
              t = f_18;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, n_2, o_2, p_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm f_58 (ATerm), ATerm g_58 (ATerm), ATerm h_58 (ATerm))
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL;
  z_75 = t;
  x_75 :
  if(match_cons(z_75, sym__5))
    {
      a_76 = ATgetArgument(z_75, 0);
      d_76 = ATgetArgument(z_75, 1);
      e_76 = ATgetArgument(z_75, 2);
      f_76 = ATgetArgument(z_75, 3);
      g_76 = ATgetArgument(z_75, 4);
      y_75 :
      if(((ATgetType(a_76) == AT_LIST) && ((ATermList) a_76 != ATempty)))
        {
          b_76 = ATgetFirst((ATermList) a_76);
          c_76 = (ATerm) ATgetNext((ATermList) a_76);
          {
            ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,y_76 = NULL,a_77 = NULL,e_77 = NULL;
            ATerm l_18;
            l_18 = t;
            {
              ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_76), not_null(e_76));
              {
                t = f_58(t);
                {
                  t_76 = t;
                  t_75 :
                  if(match_cons(t_76, sym__2))
                    {
                      u_76 = ATgetArgument(t_76, 0);
                      v_76 = ATgetArgument(t_76, 1);
                      {
                        ATerm w_76 = NULL;
                        if(((q_76 != NULL) && (q_76 != u_76)))
                          _fail(u_76);
                        else
                          q_76 = u_76;
                        {
                          if(((p_76 != NULL) && (p_76 != v_76)))
                            _fail(v_76);
                          else
                            p_76 = v_76;
                          {
                            t = not_null(q_76);
                            {
                              ATerm x_76 = NULL;
                              t = g_58(t);
                              {
                                w_76 = t;
                                {
                                  if(((r_76 != NULL) && (r_76 != w_76)))
                                    _fail(w_76);
                                  else
                                    r_76 = w_76;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_76), not_null(d_76));
                                    {
                                      t = diff_0(t);
                                      {
                                        x_76 = t;
                                        if(((s_76 != NULL) && (s_76 != x_76)))
                                          _fail(x_76);
                                        else
                                          s_76 = x_76;
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
            t = l_18;
            {
              ATerm m_18;
              m_18 = t;
              {
                ATerm z_76 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_76), not_null(c_76));
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
              t = m_18;
              {
                ATerm r_18;
                r_18 = t;
                {
                  ATerm d_77 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_76), not_null(d_76));
                  {
                    t = conc_0(t);
                    {
                      d_77 = t;
                      if(((a_77 != NULL) && (a_77 != d_77)))
                        _fail(d_77);
                      else
                        a_77 = d_77;
                    }
                  }
                }
                t = r_18;
                {
                  ATerm f_77 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(b_76), not_null(q_76), not_null(f_76));
                  {
                    t = h_58(t);
                    {
                      f_77 = t;
                      if(((e_77 != NULL) && (e_77 != f_77)))
                        _fail(f_77);
                      else
                        e_77 = f_77;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(y_76), not_null(a_77), not_null(p_76), not_null(e_77), not_null(g_76));
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
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL;
  q_77 = t;
  o_77 :
  if(match_cons(q_77, sym__5))
    {
      r_77 = ATgetArgument(q_77, 0);
      s_77 = ATgetArgument(q_77, 1);
      t_77 = ATgetArgument(q_77, 2);
      u_77 = ATgetArgument(q_77, 3);
      v_77 = ATgetArgument(q_77, 4);
      p_77 :
      if(((ATermList) r_77 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_77), not_null(v_77));
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
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL;
  i_78 = t;
  h_78 :
  if(match_cons(i_78, sym__3))
    {
      j_78 = ATgetArgument(i_78, 0);
      k_78 = ATgetArgument(i_78, 1);
      l_78 = ATgetArgument(i_78, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(j_78), not_null(j_78), not_null(k_78), not_null(l_78), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm q_67 (ATerm), ATerm r_67 (ATerm))
{
  ATerm q_78 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_67(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        {
          t = r_67(t);
          t = q_78(t);
        }
      }
    return(t);
  }
  t = q_78(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm t_67 (ATerm), ATerm u_67 (ATerm), ATerm v_67 (ATerm))
{
  t = t_67(t);
  t = while_not_2(t, u_67, v_67);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm o_58 (ATerm), ATerm p_58 (ATerm), ATerm q_58 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, o_58, p_58, q_58);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
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
    ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL;
    t_78 = t;
    s_78 :
    if(match_cons(t_78, sym__3))
      {
        u_78 = ATgetArgument(t_78, 0);
        v_78 = ATgetArgument(t_78, 1);
        w_78 = ATgetArgument(t_78, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(w_78)), not_null(v_78));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, s_2, t_2);
  {
    ATerm w_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = w_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_n_9;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
  i_79 = t;
  h_79 :
  if(match_cons(i_79, sym__2))
    {
      j_79 = ATgetArgument(i_79, 0);
      k_79 = ATgetArgument(i_79, 1);
      {
        ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL;
        ATerm z_18;
        z_18 = t;
        {
          ATerm q_79 = NULL;
          ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL;
          t = z_57(t);
          {
            q_79 = t;
            {
              if(((n_79 != NULL) && (n_79 != q_79)))
                _fail(q_79);
              else
                n_79 = q_79;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(n_79), not_null(j_79), not_null(k_79));
                {
                  t = table_push_0(t);
                  {
                    ATerm a_19 = t;
                    int b_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_79), term_c_19);
                        t = table_get_0(t);
                        LocalPopChoice(b_19);
                      }
                    else
                      {
                        t = a_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      r_79 = t;
                      g_79 :
                      if(((ATgetType(r_79) == AT_LIST) && ((ATermList) r_79 != ATempty)))
                        {
                          s_79 = ATgetFirst((ATermList) r_79);
                          t_79 = (ATerm) ATgetNext((ATermList) r_79);
                          {
                            if(((o_79 != NULL) && (o_79 != s_79)))
                              _fail(s_79);
                            else
                              o_79 = s_79;
                            {
                              if(((p_79 != NULL) && (p_79 != t_79)))
                                _fail(t_79);
                              else
                                p_79 = t_79;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(n_79), term_c_19, (ATerm) ATinsert(CheckATermList(not_null(p_79)), (ATerm) ATinsert(CheckATermList(not_null(o_79)), not_null(j_79))));
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
        t = z_18;
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
  ATerm d_80 = NULL;
  ATerm h_80 = NULL;
  d_80 = t;
  {
    ATerm i_80 = NULL,j_80 = NULL,m_80 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(d_80));
    {
      ATerm b_3 (ATerm t)
      {
        t = term_f_19;
        return(t);
      }
      t = rewrite_1(t, b_3);
      {
        i_80 = t;
        b_80 :
        if(match_cons(i_80, sym_Defined_2))
          {
            j_80 = ATgetArgument(i_80, 0);
            m_80 = ATgetArgument(i_80, 1);
            c_80 :
            if(match_string(j_80, "g_0"))
              {
                if(((h_80 != NULL) && (h_80 != m_80)))
                  _fail(m_80);
                else
                  h_80 = m_80;
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
    t = not_null(h_80);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
  r_80 = t;
  q_80 :
  if(((ATgetType(r_80) == AT_LIST) && ((ATermList) r_80 != ATempty)))
    {
      s_80 = ATgetFirst((ATermList) r_80);
      t_80 = (ATerm) ATgetNext((ATermList) r_80);
      t = not_null(s_80);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
  z_80 = t;
  y_80 :
  if(match_cons(z_80, sym__2))
    {
      a_81 = ATgetArgument(z_80, 0);
      b_81 = ATgetArgument(z_80, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_81), not_null(b_81));
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
ATerm rewrite_1 (ATerm t, ATerm b_58 (ATerm))
{
  ATerm h_81 = NULL;
  ATerm j_81 = NULL;
  h_81 = t;
  {
    ATerm k_81 = NULL;
    t = term_i_17;
    {
      t = b_58(t);
      {
        k_81 = t;
        if(((j_81 != NULL) && (j_81 != k_81)))
          _fail(k_81);
        else
          j_81 = k_81;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_81), not_null(h_81));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL;
  t_81 = t;
  s_81 :
  if(match_cons(t_81, sym__2))
    {
      u_81 = ATgetArgument(t_81, 0);
      v_81 = ATgetArgument(t_81, 1);
      {
        ATerm a_82 = NULL,b_82 = NULL;
        ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(v_81), not_null(u_81));
        {
          ATerm c_3 (ATerm t)
          {
            t = term_g_19;
            return(t);
          }
          t = rewrite_1(t, c_3);
          {
            c_82 = t;
            q_81 :
            if(match_cons(c_82, sym_Defined_3))
              {
                d_82 = ATgetArgument(c_82, 0);
                e_82 = ATgetArgument(c_82, 1);
                f_82 = ATgetArgument(c_82, 2);
                r_81 :
                if(match_string(d_82, "b_0"))
                  {
                    if(((a_82 != NULL) && (a_82 != e_82)))
                      _fail(e_82);
                    else
                      a_82 = e_82;
                    if(((b_82 != NULL) && (b_82 != f_82)))
                      _fail(f_82);
                    else
                      b_82 = f_82;
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
        t = (ATerm) ATinsert(CheckATermList(not_null(b_82)), not_null(a_82));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL;
    o_82 = t;
    n_82 :
    if(match_cons(o_82, sym_SDef_3))
      {
        p_82 = ATgetArgument(o_82, 0);
        q_82 = ATgetArgument(o_82, 1);
        r_82 = ATgetArgument(o_82, 2);
        {
          ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL;
          ATerm h_19;
          h_19 = t;
          {
            ATerm z_82 = NULL;
            t = not_null(q_82);
            {
              ATerm a_83 = NULL;
              t = length_0(t);
              {
                z_82 = t;
                {
                  if(((x_82 != NULL) && (x_82 != z_82)))
                    _fail(z_82);
                  else
                    x_82 = z_82;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_82), not_null(x_82));
                    {
                      ATerm b_83 = NULL,d_83 = NULL;
                      ATerm i_19 = t;
                      int j_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(j_19);
                        }
                      else
                        {
                          t = i_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        a_83 = t;
                        {
                          if(((w_82 != NULL) && (w_82 != a_83)))
                            _fail(a_83);
                          else
                            w_82 = a_83;
                          {
                            ATerm c_83 = NULL;
                            t = not_null(p_82);
                            {
                              ATerm k_19 = t;
                              int n_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(n_19);
                                }
                              else
                                {
                                  t = k_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                c_83 = t;
                                if(((b_83 != NULL) && (b_83 != c_83)))
                                  _fail(c_83);
                                else
                                  b_83 = c_83;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(x_82)), not_null(b_83));
                              {
                                t = union_0(t);
                                {
                                  d_83 = t;
                                  {
                                    if(((y_82 != NULL) && (y_82 != d_83)))
                                      _fail(d_83);
                                    else
                                      y_82 = d_83;
                                    {
                                      ATerm o_19;
                                      o_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(x_82), not_null(p_82)), (ATerm) ATmakeAppl(sym_Defined_3, term_r_19, not_null(o_82), not_null(w_82)));
                                        {
                                          ATerm e_3 (ATerm t)
                                          {
                                            t = term_g_19;
                                            return(t);
                                          }
                                          t = assert_1(t, e_3);
                                        }
                                      }
                                      t = o_19;
                                      {
                                        ATerm s_19;
                                        s_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_82)), (ATerm) ATmakeAppl(sym_Defined_2, term_t_19, not_null(y_82)));
                                          {
                                            ATerm m_3 (ATerm t)
                                            {
                                              t = term_f_19;
                                              return(t);
                                            }
                                            t = assert_1(t, m_3);
                                          }
                                        }
                                        t = s_19;
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
          t = h_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, d_3);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL;
  l_83 = t;
  k_83 :
  if(match_cons(l_83, sym__2))
    {
      m_83 = ATgetArgument(l_83, 0);
      n_83 = ATgetArgument(l_83, 1);
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(m_83), not_null(n_83));
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            t = SSL_addr(not_null(m_83), not_null(n_83));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    t = term_w_19;
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_n_9;
    return(t);
  }
  t = foldr_3(t, n_3, add_0, o_3);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL;
  u_83 = t;
  t_83 :
  if(((ATgetType(u_83) == AT_LIST) && ((ATermList) u_83 != ATempty)))
    {
      v_83 = ATgetFirst((ATermList) u_83);
      w_83 = (ATerm) ATgetNext((ATermList) u_83);
      {
        t = u_64(t);
        {
          ATerm p_3 (ATerm t)
          {
            ATerm z_83 = NULL;
            z_83 = t;
            if(((v_83 != NULL) && (v_83 != z_83)))
              _fail(z_83);
            else
              v_83 = z_83;
            return(t);
          }
          t = fetch_1(t, p_3);
        }
        t = not_null(w_83);
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
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL;
  e_84 = t;
  d_84 :
  if(match_cons(e_84, sym__2))
    {
      f_84 = ATgetArgument(e_84, 0);
      g_84 = ATgetArgument(e_84, 1);
      {
        t = not_null(f_84);
        {
          ATerm k_84 (ATerm t)
          {
            ATerm b_20 = t;
            int c_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(g_84);
                LocalPopChoice(c_20);
              }
            else
              {
                t = b_20;
                {
                  ATerm e_20 = t;
                  int g_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_3 (ATerm t)
                      {
                        t = not_null(g_84);
                        return(t);
                      }
                      t = HdMember_1(t, q_3);
                      t = k_84(t);
                      LocalPopChoice(g_20);
                    }
                  else
                    {
                      t = e_20;
                      t = Cons_2(t, _id, k_84);
                    }
                }
              }
            return(t);
          }
          t = k_84(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm a_64 (ATerm))
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_63(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL;
        p_84 = t;
        o_84 :
        if(((ATgetType(p_84) == AT_LIST) && ((ATermList) p_84 != ATempty)))
          {
            q_84 = ATgetFirst((ATermList) p_84);
            r_84 = (ATerm) ATgetNext((ATermList) p_84);
            {
              ATerm u_84 = NULL,w_84 = NULL;
              ATerm j_20;
              j_20 = t;
              {
                ATerm v_84 = NULL;
                t = not_null(q_84);
                {
                  t = a_64(t);
                  {
                    v_84 = t;
                    if(((u_84 != NULL) && (u_84 != v_84)))
                      _fail(v_84);
                    else
                      u_84 = v_84;
                  }
                }
              }
              t = j_20;
              {
                ATerm x_84 = NULL;
                t = not_null(r_84);
                {
                  t = foldr_3(t, y_63, z_63, a_64);
                  {
                    x_84 = t;
                    if(((w_84 != NULL) && (w_84 != x_84)))
                      _fail(x_84);
                    else
                      w_84 = x_84;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_84), not_null(w_84));
                  t = z_63(t);
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
ATerm definition_names_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL;
    e_85 = t;
    d_85 :
    if(match_cons(e_85, sym_SDef_3))
      {
        f_85 = ATgetArgument(e_85, 0);
        g_85 = ATgetArgument(e_85, 1);
        h_85 = ATgetArgument(e_85, 2);
        {
          ATerm k_85 = NULL;
          ATerm l_85 = NULL;
          t = not_null(g_85);
          {
            t = length_0(t);
            {
              l_85 = t;
              if(((k_85 != NULL) && (k_85 != l_85)))
                _fail(l_85);
              else
                k_85 = l_85;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(f_85), not_null(k_85)));
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = foldr_3(t, y_3, union_0, z_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm q_85 = NULL,s_85 = NULL;
  ATerm k_20;
  k_20 = t;
  {
    ATerm r_85 = NULL;
    t = definition_names_0(t);
    {
      r_85 = t;
      if(((q_85 != NULL) && (q_85 != r_85)))
        _fail(r_85);
      else
        q_85 = r_85;
    }
  }
  t = k_20;
  {
    ATerm t_85 = NULL;
    t = sort_defs_0(t);
    {
      t_85 = t;
      if(((s_85 != NULL) && (s_85 != t_85)))
        _fail(t_85);
      else
        s_85 = t_85;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(q_85), not_null(s_85), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm c_55 (ATerm))
{
  ATerm z_85 = NULL,a_86 = NULL;
  z_85 = t;
  y_85 :
  if(match_cons(z_85, sym_Strategies_1))
    {
      a_86 = ATgetArgument(z_85, 0);
      {
        ATerm c_86 = NULL;
        t = not_null(a_86);
        {
          t = c_55(t);
          {
            c_86 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(c_86));
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
ATerm Cons_2 (ATerm t, ATerm l_57 (ATerm), ATerm m_57 (ATerm))
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL;
  k_86 = t;
  j_86 :
  if(((ATgetType(k_86) == AT_LIST) && ((ATermList) k_86 != ATempty)))
    {
      l_86 = ATgetFirst((ATermList) k_86);
      m_86 = (ATerm) ATgetNext((ATermList) k_86);
      {
        ATerm p_86 = NULL;
        t = not_null(l_86);
        {
          ATerm r_86 = NULL;
          t = l_57(t);
          {
            p_86 = t;
            {
              t = not_null(m_86);
              {
                t = m_57(t);
                {
                  r_86 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_86)), not_null(p_86));
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
ATerm Specification_1 (ATerm t, ATerm e_55 (ATerm))
{
  ATerm z_86 = NULL,a_87 = NULL;
  z_86 = t;
  y_86 :
  if(match_cons(z_86, sym_Specification_1))
    {
      a_87 = ATgetArgument(z_86, 0);
      {
        ATerm c_87 = NULL;
        t = not_null(a_87);
        {
          t = e_55(t);
          {
            c_87 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(c_87));
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
ATerm _2 (ATerm t, ATerm r_46 (ATerm), ATerm s_46 (ATerm))
{
  ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL;
  k_87 = t;
  j_87 :
  if(match_cons(k_87, sym__2))
    {
      l_87 = ATgetArgument(k_87, 0);
      m_87 = ATgetArgument(k_87, 1);
      {
        ATerm p_87 = NULL;
        t = not_null(l_87);
        {
          ATerm r_87 = NULL;
          t = r_46(t);
          {
            p_87 = t;
            {
              t = not_null(m_87);
              {
                t = s_46(t);
                {
                  r_87 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_87), not_null(r_87));
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
  ATerm y_87 = NULL;
  ATerm l_20;
  l_20 = t;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm z_87 = NULL,a_88 = NULL;
      z_87 = t;
      x_87 :
      if(match_cons(z_87, sym_Program_1))
        {
          a_88 = ATgetArgument(z_87, 0);
          if(((y_87 != NULL) && (y_87 != a_88)))
            _fail(a_88);
          else
            y_87 = a_88;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, a_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_20), not_null(y_87)), term_m_20));
      {
        t = printnl_0(t);
        {
          t = term_n_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_20;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATempty, term_o_20));
  {
    t = printnl_0(t);
    {
      t = term_n_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL;
  ATerm b_4 (ATerm t)
  {
    ATerm c_4 (ATerm t)
    {
      ATerm p_20 = t;
      if((PushChoice() == 0))
        {
          ATerm i_4 (ATerm t)
          {
            ATerm j_88 = NULL;
            j_88 = t;
            c_88 :
            if(!(match_cons(j_88, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, i_4);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_20;
        }
      return(t);
    }
    t = _2(t, c_4, _id);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm k_4 (ATerm t)
        {
          ATerm k_88 = NULL,l_88 = NULL;
          k_88 = t;
          e_88 :
          if(match_cons(k_88, sym_Runtime_1))
            {
              l_88 = ATgetArgument(k_88, 0);
              if(((i_88 != NULL) && (i_88 != l_88)))
                _fail(l_88);
              else
                i_88 = l_88;
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
        ATerm n_4 (ATerm t)
        {
          ATerm o_4 (ATerm t)
          {
            ATerm m_88 = NULL,o_88 = NULL;
            m_88 = t;
            g_88 :
            if(match_cons(m_88, sym_Program_1))
              {
                o_88 = ATgetArgument(m_88, 0);
                if(((h_88 != NULL) && (h_88 != o_88)))
                  _fail(o_88);
                else
                  h_88 = o_88;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_4);
          return(t);
        }
        t = _2(t, n_4, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_20), not_null(i_88)), term_r_20), not_null(h_88)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, b_4);
  {
    t = term_w_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL;
  t_88 = t;
  s_88 :
  if(match_cons(t_88, sym__2))
    {
      u_88 = ATgetArgument(t_88, 0);
      v_88 = ATgetArgument(t_88, 1);
      t = SSL_WriteToTextFile(not_null(u_88), not_null(v_88));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL;
  b_89 = t;
  a_89 :
  if(match_cons(b_89, sym__2))
    {
      c_89 = ATgetArgument(b_89, 0);
      d_89 = ATgetArgument(b_89, 1);
      t = SSL_WriteToBinaryFile(not_null(c_89), not_null(d_89));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_89 = NULL;
  ATerm t_20;
  t_20 = t;
  {
    ATerm p_4 (ATerm t)
    {
      ATerm v_20 = t;
      int x_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_4 (ATerm t)
          {
            ATerm m_89 = NULL,n_89 = NULL;
            m_89 = t;
            i_89 :
            if(match_cons(m_89, sym_Output_1))
              {
                n_89 = ATgetArgument(m_89, 0);
                if(((l_89 != NULL) && (l_89 != n_89)))
                  _fail(n_89);
                else
                  l_89 = n_89;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_4);
          LocalPopChoice(x_20);
        }
      else
        {
          t = v_20;
          {
            ATerm o_89 = NULL;
            t = term_y_20;
            {
              o_89 = t;
              if(((l_89 != NULL) && (l_89 != o_89)))
                _fail(o_89);
              else
                l_89 = o_89;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_4, _id);
  }
  t = t_20;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm c_5 (ATerm t)
      {
        t = not_null(l_89);
        return(t);
      }
      t = split_2(t, c_5, _id);
      return(t);
    }
    t = _2(t, _id, u_4);
    {
      ATerm h_21 = t;
      int i_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_5 (ATerm t)
          {
            ATerm o_5 (ATerm t)
            {
              ATerm p_89 = NULL;
              p_89 = t;
              k_89 :
              if(!(match_cons(p_89, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, o_5);
            return(t);
          }
          t = _2(t, j_5, WriteToBinaryFile_0);
          LocalPopChoice(i_21);
        }
      else
        {
          t = h_21;
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
ATerm apply_strategy_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm v_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL;
  ATerm j_21;
  j_21 = t;
  t = dtime_0(t);
  t = j_21;
  {
    t = u_61(t);
    {
      ATerm k_21;
      k_21 = t;
      {
        ATerm w_89 = NULL;
        t = dtime_0(t);
        {
          w_89 = t;
          if(((v_89 != NULL) && (v_89 != w_89)))
            _fail(w_89);
          else
            v_89 = w_89;
        }
      }
      t = k_21;
      {
        x_89 = t;
        u_89 :
        if(match_cons(x_89, sym__2))
          {
            y_89 = ATgetArgument(x_89, 0);
            z_89 = ATgetArgument(x_89, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_89)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(v_89))), not_null(z_89));
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
  ATerm f_90 = NULL;
  f_90 = t;
  t = SSL_ReadFromFile(not_null(f_90));
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_73 (ATerm), ATerm p_73 (ATerm))
{
  ATerm k_90 = NULL,m_90 = NULL;
  ATerm p_21;
  p_21 = t;
  {
    ATerm l_90 = NULL;
    t = o_73(t);
    {
      l_90 = t;
      if(((k_90 != NULL) && (k_90 != l_90)))
        _fail(l_90);
      else
        k_90 = l_90;
    }
  }
  t = p_21;
  {
    ATerm n_90 = NULL;
    t = p_73(t);
    {
      n_90 = t;
      if(((m_90 != NULL) && (m_90 != n_90)))
        _fail(n_90);
      else
        m_90 = n_90;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_90), not_null(m_90));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_90 = NULL;
  ATerm q_21;
  q_21 = t;
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_5 (ATerm t)
        {
          ATerm u_90 = NULL,v_90 = NULL;
          u_90 = t;
          r_90 :
          if(match_cons(u_90, sym_Input_1))
            {
              v_90 = ATgetArgument(u_90, 0);
              if(((t_90 != NULL) && (t_90 != v_90)))
                _fail(v_90);
              else
                t_90 = v_90;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, p_5);
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        {
          ATerm w_90 = NULL;
          t = term_w_21;
          {
            w_90 = t;
            if(((t_90 != NULL) && (t_90 != w_90)))
              _fail(w_90);
            else
              t_90 = w_90;
          }
        }
      }
  }
  t = q_21;
  {
    ATerm q_5 (ATerm t)
    {
      t = not_null(t_90);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, q_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_91 = NULL;
  a_91 = t;
  z_90 :
  if(!(match_cons(a_91, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_61 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    ATerm x_21 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = x_21;
        {
          ATerm e_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(f_22);
            }
          else
            {
              t = e_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, r_5);
  t = t_61(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_91 = NULL;
  c_91 = t;
  t = SSL_table_create(not_null(c_91));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_91 = NULL;
  g_91 = t;
  {
    ATerm g_22;
    g_22 = t;
    {
      t = term_h_22;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_22, term_i_22, not_null(g_91));
          t = table_put_0(t);
        }
      }
    }
    t = g_22;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL,s_91 = NULL;
  o_91 = t;
  m_91 :
  if(match_string(o_91, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(o_91) == AT_LIST) && ((ATermList) o_91 != ATempty)))
        {
          p_91 = ATgetFirst((ATermList) o_91);
          q_91 = (ATerm) ATgetNext((ATermList) o_91);
          n_91 :
          if(((ATgetType(q_91) == AT_LIST) && ((ATermList) q_91 != ATempty)))
            {
              r_91 = ATgetFirst((ATermList) q_91);
              s_91 = (ATerm) ATgetNext((ATermList) q_91);
              {
                ATerm w_91 = NULL;
                ATerm j_22;
                j_22 = t;
                {
                  t = not_null(p_91);
                  t = k_0(t);
                }
                t = j_22;
                {
                  ATerm x_91 = NULL;
                  t = not_null(r_91);
                  {
                    t = l_0(t);
                    {
                      x_91 = t;
                      if(((w_91 != NULL) && (w_91 != x_91)))
                        _fail(x_91);
                      else
                        w_91 = x_91;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_91)), not_null(w_91));
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
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 (ATerm t)
      {
        ATerm m_92 = NULL;
        m_92 = t;
        b_92 :
        if(!(match_string(m_92, "-S")))
          {
            if(!(match_string(m_92, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        t = term_q_22;
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        t = term_s_22;
        return(t);
      }
      t = Option_3(t, s_5, t_5, u_5);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_5 (ATerm t)
            {
              ATerm n_92 = NULL;
              n_92 = t;
              c_92 :
              if(!(match_string(n_92, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_6 (ATerm t)
            {
              t = term_v_22;
              return(t);
            }
            ATerm c_6 (ATerm t)
            {
              t = term_w_22;
              return(t);
            }
            t = Option_3(t, z_5, a_6, c_6);
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            {
              ATerm x_22 = t;
              int y_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_6 (ATerm t)
                  {
                    ATerm o_92 = NULL;
                    o_92 = t;
                    d_92 :
                    if(!(match_string(o_92, "-v")))
                      {
                        if(!(match_string(o_92, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm f_6 (ATerm t)
                  {
                    t = term_z_22;
                    return(t);
                  }
                  ATerm g_6 (ATerm t)
                  {
                    t = term_a_23;
                    return(t);
                  }
                  t = Option_3(t, e_6, f_6, g_6);
                  LocalPopChoice(y_22);
                }
              else
                {
                  t = x_22;
                  {
                    ATerm b_23 = t;
                    int c_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_6 (ATerm t)
                        {
                          ATerm p_92 = NULL;
                          p_92 = t;
                          e_92 :
                          if(!(match_string(p_92, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm i_6 (ATerm t)
                        {
                          ATerm q_92 = NULL;
                          ATerm r_92 = NULL;
                          r_92 = t;
                          if(((q_92 != NULL) && (q_92 != r_92)))
                            _fail(r_92);
                          else
                            q_92 = r_92;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(q_92));
                          return(t);
                        }
                        ATerm j_6 (ATerm t)
                        {
                          t = term_g_23;
                          return(t);
                        }
                        t = ArgOption_3(t, h_6, i_6, j_6);
                        LocalPopChoice(c_23);
                      }
                    else
                      {
                        t = b_23;
                        {
                          ATerm h_23 = t;
                          int i_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_6 (ATerm t)
                              {
                                ATerm s_92 = NULL;
                                s_92 = t;
                                g_92 :
                                if(!(match_string(s_92, "-i")))
                                  {
                                    if(!(match_string(s_92, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm l_6 (ATerm t)
                              {
                                ATerm t_92 = NULL;
                                ATerm u_92 = NULL;
                                u_92 = t;
                                if(((t_92 != NULL) && (t_92 != u_92)))
                                  _fail(u_92);
                                else
                                  t_92 = u_92;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_92));
                                return(t);
                              }
                              ATerm r_6 (ATerm t)
                              {
                                t = term_j_23;
                                return(t);
                              }
                              t = ArgOption_3(t, k_6, l_6, r_6);
                              LocalPopChoice(i_23);
                            }
                          else
                            {
                              t = h_23;
                              {
                                ATerm k_23 = t;
                                int l_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_6 (ATerm t)
                                    {
                                      ATerm v_92 = NULL;
                                      v_92 = t;
                                      i_92 :
                                      if(!(match_string(v_92, "-o")))
                                        {
                                          if(!(match_string(v_92, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm t_6 (ATerm t)
                                    {
                                      ATerm w_92 = NULL;
                                      ATerm x_92 = NULL;
                                      x_92 = t;
                                      if(((w_92 != NULL) && (w_92 != x_92)))
                                        _fail(x_92);
                                      else
                                        w_92 = x_92;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_92));
                                      return(t);
                                    }
                                    ATerm v_6 (ATerm t)
                                    {
                                      t = term_m_23;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, s_6, t_6, v_6);
                                    LocalPopChoice(l_23);
                                  }
                                else
                                  {
                                    t = k_23;
                                    {
                                      ATerm n_23 = t;
                                      int o_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_6 (ATerm t)
                                          {
                                            ATerm y_92 = NULL;
                                            y_92 = t;
                                            k_92 :
                                            if(!(match_string(y_92, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm z_6 (ATerm t)
                                          {
                                            t = term_p_23;
                                            return(t);
                                          }
                                          ATerm a_7 (ATerm t)
                                          {
                                            t = term_q_23;
                                            return(t);
                                          }
                                          t = Option_3(t, x_6, z_6, a_7);
                                          LocalPopChoice(o_23);
                                        }
                                      else
                                        {
                                          t = n_23;
                                          {
                                            ATerm b_7 (ATerm t)
                                            {
                                              ATerm z_92 = NULL;
                                              z_92 = t;
                                              l_92 :
                                              if(!(match_string(z_92, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm c_7 (ATerm t)
                                            {
                                              t = term_w_23;
                                              return(t);
                                            }
                                            ATerm d_7 (ATerm t)
                                            {
                                              t = term_x_23;
                                              return(t);
                                            }
                                            t = Option_3(t, b_7, c_7, d_7);
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
  ATerm e_93 = NULL;
  e_93 = t;
  t = SSL_table_destroy(not_null(e_93));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_93 = NULL;
  i_93 = t;
  t = SSL_exit(not_null(i_93));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_93 = NULL;
  m_93 = t;
  t = SSL_implode_string(not_null(m_93));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm p_93 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_93);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        {
          t = Nil_0(t);
          t = k_80(t);
        }
      }
    return(t);
  }
  t = p_93(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL;
        s_93 = t;
        r_93 :
        if(((ATgetType(s_93) == AT_LIST) && ((ATermList) s_93 != ATempty)))
          {
            t_93 = ATgetFirst((ATermList) s_93);
            u_93 = (ATerm) ATgetNext((ATermList) s_93);
            {
              t = not_null(t_93);
              {
                ATerm e_7 (ATerm t)
                {
                  t = not_null(u_93);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_7);
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
  ATerm b_94 = NULL;
  b_94 = t;
  t = SSL_explode_string(not_null(b_94));
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
ATerm long_description_1 (ATerm t, ATerm a_60 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_79 (ATerm))
{
  ATerm e_94 (ATerm t)
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = Cons_2(t, w_79, e_94);
      }
    return(t);
  }
  t = e_94(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm m_94 = NULL,n_94 = NULL,o_94 = NULL;
  o_94 = t;
  k_94 :
  if(((ATgetType(o_94) == AT_LIST) && ((ATermList) o_94 != ATempty)))
    {
      m_94 = ATgetFirst((ATermList) o_94);
      n_94 = (ATerm) ATgetNext((ATermList) o_94);
      {
        ATerm r_94 = NULL;
        t = not_null(n_94);
        {
          ATerm l_24;
          l_24 = t;
          {
            ATerm s_94 = NULL,u_94 = NULL,w_94 = NULL;
            ATerm o_24;
            o_24 = t;
            {
              ATerm t_94 = NULL;
              t = j_0(t);
              {
                t_94 = t;
                if(((s_94 != NULL) && (s_94 != t_94)))
                  _fail(t_94);
                else
                  s_94 = t_94;
              }
            }
            t = o_24;
            {
              ATerm v_94 = NULL;
              t = not_null(m_94);
              {
                t = i_0(t);
                {
                  v_94 = t;
                  if(((u_94 != NULL) && (u_94 != v_94)))
                    _fail(v_94);
                  else
                    u_94 = v_94;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_94)), not_null(u_94));
                {
                  w_94 = t;
                  if(((r_94 != NULL) && (r_94 != w_94)))
                    _fail(w_94);
                  else
                    r_94 = w_94;
                }
              }
            }
          }
          t = l_24;
          {
            ATerm f_7 (ATerm t)
            {
              t = not_null(r_94);
              return(t);
            }
            t = reverse_acc_2(t, i_0, f_7);
          }
        }
      }
    }
  else
    {
      if(((ATermList) o_94 == ATempty))
        {
          {
            t = term_i_17;
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
  ATerm g_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_59 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_52 (ATerm))
{
  ATerm g_95 = NULL,h_95 = NULL;
  g_95 = t;
  f_95 :
  if(match_cons(g_95, sym_Program_1))
    {
      h_95 = ATgetArgument(g_95, 0);
      {
        ATerm j_95 = NULL;
        t = not_null(h_95);
        {
          t = g_52(t);
          {
            j_95 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_95));
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
  ATerm r_95 = NULL;
  ATerm l_7 (ATerm t)
  {
    ATerm m_7 (ATerm t)
    {
      ATerm s_95 = NULL;
      s_95 = t;
      if(((r_95 != NULL) && (r_95 != s_95)))
        _fail(s_95);
      else
        r_95 = s_95;
      return(t);
    }
    t = Program_1(t, m_7);
    return(t);
  }
  t = option_defined_1(t, l_7);
  {
    ATerm o_7 (ATerm t)
    {
      ATerm t_95 = NULL;
      ATerm u_95 = NULL;
      t = term_i_17;
      {
        ATerm q_7 (ATerm t)
        {
          t = not_null(r_95);
          return(t);
        }
        t = short_description_1(t, q_7);
        {
          t = concat_strings_0(t);
          {
            u_95 = t;
            if(((t_95 != NULL) && (t_95 != u_95)))
              _fail(u_95);
            else
              t_95 = u_95;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATempty, not_null(t_95)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, o_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATempty, term_p_24));
      {
        t = printnl_0(t);
        {
          t = term_s_24;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_7 (ATerm t)
                {
                  ATerm v_95 = NULL;
                  v_95 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_95)), term_t_24));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_7);
                {
                  ATerm s_7 (ATerm t)
                  {
                    ATerm x_95 = NULL;
                    ATerm y_95 = NULL;
                    t = term_i_17;
                    {
                      ATerm t_7 (ATerm t)
                      {
                        t = not_null(r_95);
                        return(t);
                      }
                      t = long_description_1(t, t_7);
                      {
                        t = concat_strings_0(t);
                        {
                          y_95 = t;
                          if(((x_95 != NULL) && (x_95 != y_95)))
                            _fail(y_95);
                          else
                            x_95 = y_95;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_95)), term_u_24));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_7);
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
  ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL;
  f_96 = t;
  e_96 :
  if(match_cons(f_96, sym__2))
    {
      g_96 = ATgetArgument(f_96, 0);
      h_96 = ATgetArgument(f_96, 1);
      {
        ATerm v_24;
        v_24 = t;
        t = SSL_printnl(not_null(g_96), not_null(h_96));
        t = v_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_52 (ATerm))
{
  ATerm o_96 = NULL,p_96 = NULL;
  o_96 = t;
  n_96 :
  if(match_cons(o_96, sym_Undefined_1))
    {
      p_96 = ATgetArgument(o_96, 0);
      {
        ATerm r_96 = NULL;
        t = not_null(p_96);
        {
          t = h_52(t);
          {
            r_96 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_96));
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
ATerm fetch_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm v_96 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_80, _id);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = Cons_2(t, _id, v_96);
      }
    return(t);
  }
  t = v_96(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_60 (ATerm))
{
  t = fetch_1(t, y_60);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_96 = NULL;
  x_96 = t;
  w_96 :
  if(!(match_cons(x_96, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_74 (ATerm))
{
  ATerm y_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_74(t);
      LocalPopChoice(a_25);
    }
  else
    {
      t = y_24;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL;
  a_97 = t;
  z_96 :
  if(match_cons(a_97, sym__2))
    {
      b_97 = ATgetArgument(a_97, 0);
      c_97 = ATgetArgument(a_97, 1);
      t = SSL_table_get(not_null(b_97), not_null(c_97));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL;
  j_97 = t;
  i_97 :
  if(match_cons(j_97, sym__3))
    {
      k_97 = ATgetArgument(j_97, 0);
      l_97 = ATgetArgument(j_97, 1);
      m_97 = ATgetArgument(j_97, 2);
      {
        ATerm b_25;
        b_25 = t;
        {
          ATerm u_97 = NULL;
          ATerm v_97 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_97), not_null(l_97));
          {
            ATerm c_25 = t;
            int d_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_25);
              }
            else
              {
                t = c_25;
                t = (ATerm) ATempty;
              }
            {
              v_97 = t;
              if(((u_97 != NULL) && (u_97 != v_97)))
                _fail(v_97);
              else
                u_97 = v_97;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_97), not_null(l_97), (ATerm) ATinsert(CheckATermList(not_null(u_97)), not_null(m_97)));
            t = table_put_0(t);
          }
        }
        t = b_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_60 (ATerm))
{
  ATerm z_97 = NULL;
  ATerm a_98 = NULL;
  t = term_i_17;
  {
    t = e_60(t);
    {
      a_98 = t;
      if(((z_97 != NULL) && (z_97 != a_98)))
        _fail(a_98);
      else
        z_97 = a_98;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_24, term_r_24, not_null(z_97));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm g_98 = NULL,h_98 = NULL,i_98 = NULL;
  g_98 = t;
  f_98 :
  if(match_string(g_98, "register-usage-info"))
    {
      t = register_usage_1(t, h_0);
    }
  else
    {
      if(((ATgetType(g_98) == AT_LIST) && ((ATermList) g_98 != ATempty)))
        {
          h_98 = ATgetFirst((ATermList) g_98);
          i_98 = (ATerm) ATgetNext((ATermList) g_98);
          {
            ATerm l_98 = NULL;
            ATerm f_25;
            f_25 = t;
            {
              t = not_null(h_98);
              t = c_0(t);
            }
            t = f_25;
            {
              ATerm m_98 = NULL;
              t = term_i_17;
              {
                t = f_0(t);
                {
                  m_98 = t;
                  if(((l_98 != NULL) && (l_98 != m_98)))
                    _fail(m_98);
                  else
                    l_98 = m_98;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_98)), not_null(l_98));
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
  ATerm u_7 (ATerm t)
  {
    ATerm r_98 = NULL;
    r_98 = t;
    q_98 :
    if(!(match_string(r_98, "--help")))
      {
        if(!(match_string(r_98, "-h")))
          {
            if(!(match_string(r_98, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm z_7 (ATerm t)
  {
    t = term_k_25;
    return(t);
  }
  ATerm a_8 (ATerm t)
  {
    t = term_l_25;
    return(t);
  }
  t = Option_3(t, u_7, z_7, a_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_98 = NULL,v_98 = NULL,w_98 = NULL;
  u_98 = t;
  t_98 :
  if(((ATgetType(u_98) == AT_LIST) && ((ATermList) u_98 != ATempty)))
    {
      v_98 = ATgetFirst((ATermList) u_98);
      w_98 = (ATerm) ATgetNext((ATermList) u_98);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_98)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_98)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm u_25;
  u_25 = t;
  {
    ATerm b_8 (ATerm t)
    {
      t = term_e_26;
      t = c_60(t);
      return(t);
    }
    t = try_1(t, b_8);
  }
  t = u_25;
  {
    ATerm c_8 (ATerm t)
    {
      ATerm b_99 = NULL;
      b_99 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_99));
      return(t);
    }
    ATerm d_8 (ATerm t)
    {
      ATerm q_26 = t;
      int r_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_26);
            }
          else
            {
              t = s_26;
              {
                t = c_60(t);
                t = Cons_2(t, _id, d_8);
              }
            }
          LocalPopChoice(r_26);
        }
      else
        {
          t = q_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_8, d_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_99 = NULL,j_99 = NULL,k_99 = NULL;
  ATerm u_26;
  u_26 = t;
  {
    ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL,o_99 = NULL;
    l_99 = t;
    h_99 :
    if(match_cons(l_99, sym__3))
      {
        m_99 = ATgetArgument(l_99, 0);
        n_99 = ATgetArgument(l_99, 1);
        o_99 = ATgetArgument(l_99, 2);
        {
          if(((i_99 != NULL) && (i_99 != m_99)))
            _fail(m_99);
          else
            i_99 = m_99;
          {
            if(((j_99 != NULL) && (j_99 != n_99)))
              _fail(n_99);
            else
              j_99 = n_99;
            {
              if(((k_99 != NULL) && (k_99 != o_99)))
                _fail(o_99);
              else
                k_99 = o_99;
              t = SSL_table_put(not_null(i_99), not_null(j_99), not_null(k_99));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_26;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_60 (ATerm))
{
  ATerm r_99 = NULL;
  ATerm v_26;
  v_26 = t;
  {
    t = term_w_26;
    t = table_put_0(t);
  }
  t = v_26;
  {
    ATerm k_8 (ATerm t)
    {
      ATerm x_26 = t;
      int y_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_60(t);
          LocalPopChoice(y_26);
        }
      else
        {
          t = x_26;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_8);
    {
      ATerm l_8 (ATerm t)
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_w_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            {
              ATerm m_8 (ATerm t)
              {
                ATerm q_8 (ATerm t)
                {
                  ATerm s_99 = NULL;
                  s_99 = t;
                  if(((r_99 != NULL) && (r_99 != s_99)))
                    _fail(s_99);
                  else
                    r_99 = s_99;
                  return(t);
                }
                t = Undefined_1(t, q_8);
                return(t);
              }
              t = option_defined_1(t, m_8);
              {
                ATerm b_27;
                b_27 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_99)), term_c_27));
                  t = printnl_0(t);
                }
                t = b_27;
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, l_8);
      {
        ATerm d_27;
        d_27 = t;
        {
          t = term_q_24;
          t = table_destroy_0(t);
        }
        t = d_27;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_61 (ATerm), ATerm j_61 (ATerm), ATerm k_61 (ATerm))
{
  ATerm r_8 (ATerm t)
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_61(t);
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, r_8);
  {
    t = store_options_0(t);
    {
      ATerm g_27 = t;
      int h_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, k_61);
          LocalPopChoice(h_27);
        }
      else
        {
          t = g_27;
          {
            ATerm i_27 = t;
            int k_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, i_61);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(k_27);
              }
            else
              {
                t = i_27;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_61 (ATerm), ATerm e_61 (ATerm))
{
  t = iowrap_3(t, d_61, e_61, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm s_8 (ATerm t)
  {
    t = _2(t, _id, a_61);
    return(t);
  }
  t = iowrap_2(t, s_8, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm u_8 (ATerm t)
    {
      ATerm a_9 (ATerm t)
      {
        ATerm b_9 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, b_9, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, a_9);
      return(t);
    }
    t = Specification_1(t, u_8);
    return(t);
  }
  t = iowrap_1(t, t_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
