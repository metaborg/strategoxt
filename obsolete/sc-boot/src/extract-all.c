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
ATerm term_b_29;
ATerm term_t_28;
ATerm term_k_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_p_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_q_25;
ATerm term_h_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_h_24;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_s_20;
ATerm term_n_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_16;
ATerm term_s_15;
ATerm term_r_15;
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
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_z_19);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_19);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_w_26, term_r_15);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_r_15);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_r_15);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_u_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, (ATerm) ATempty);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm));
ATerm SDef_3 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm Let_2 (ATerm, ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm sboundin_3 (ATerm, ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm h_100 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm c_86 (ATerm), ATerm d_86 (ATerm));
ATerm diff_1 (ATerm, ATerm h_86 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm b_91 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_91 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm i_99 (ATerm), ATerm j_99 (ATerm));
ATerm alltd_1 (ATerm, ATerm i_98 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm k_99 (ATerm), ATerm l_99 (ATerm));
ATerm substitute_1 (ATerm, ATerm m_99 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm));
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
ATerm Prim_2 (ATerm, ATerm p_76 (ATerm), ATerm q_76 (ATerm));
ATerm Explode_2 (ATerm, ATerm d_73 (ATerm), ATerm e_73 (ATerm));
ATerm Op_2 (ATerm, ATerm p_74 (ATerm), ATerm q_74 (ATerm));
ATerm pat_td_1 (ATerm, ATerm h_103 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm u_93 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm g_88 (ATerm), ATerm h_88 (ATerm));
ATerm repeat_1 (ATerm, ATerm j_88 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm x_72 (ATerm), ATerm y_72 (ATerm));
ATerm Con_3 (ATerm, ATerm u_72 (ATerm), ATerm v_72 (ATerm), ATerm w_72 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm m_76 (ATerm), ATerm n_76 (ATerm));
ATerm oncetd_1 (ATerm, ATerm u_97 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_96 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm n_95 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm r_85 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm s_93 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm m_93 (ATerm), ATerm n_93 (ATerm));
ATerm zip_1 (ATerm, ATerm p_93 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm x_88 (ATerm), ATerm y_88 (ATerm));
ATerm for_3 (ATerm, ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm c_89 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm f_77 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm h_77 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm b_86 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm i_74 (ATerm));
ATerm Cons_2 (ATerm, ATerm r_76 (ATerm), ATerm s_76 (ATerm));
ATerm Specification_1 (ATerm, ATerm k_74 (ATerm));
ATerm _2 (ATerm, ATerm r_65 (ATerm), ATerm s_65 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm e_83 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_80 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm c_85 (ATerm), ATerm d_85 (ATerm));
ATerm crush_2 (ATerm, ATerm k_86 (ATerm), ATerm l_86 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_80 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_82 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_94 (ATerm), ATerm y_94 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_82 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_101 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_79 (ATerm));
ATerm map_1 (ATerm, ATerm d_101 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_79 (ATerm));
ATerm Program_1 (ATerm, ATerm g_71 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_71 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_101 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_80 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_95 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_79 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_79 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_79 (ATerm));
ATerm iowrap_4 (ATerm, ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm d_82 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm w_81 (ATerm));
ATerm iowrap_2 (ATerm, ATerm s_81 (ATerm), ATerm t_81 (ATerm));
ATerm iowrap_1 (ATerm, ATerm p_81 (ATerm));
ATerm extract_all_0 (ATerm);
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
ATerm Rec_2 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm))
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
            t = i_75(t);
            {
              l_9 = t;
              {
                t = not_null(f_9);
                {
                  ATerm p_9 = NULL;
                  t = j_75(t);
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
ATerm SDef_3 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm o_75 (ATerm))
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
            t = m_75(t);
            {
              n_10 = t;
              {
                t = not_null(f_10);
                {
                  ATerm r_10 = NULL;
                  t = n_75(t);
                  {
                    p_10 = t;
                    {
                      t = not_null(g_10);
                      {
                        ATerm t_10 = NULL;
                        t = o_75(t);
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
ATerm Let_2 (ATerm t, ATerm k_75 (ATerm), ATerm l_75 (ATerm))
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
            t = k_75(t);
            {
              p_11 = t;
              {
                t = not_null(j_11);
                {
                  ATerm t_11 = NULL;
                  t = l_75(t);
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
ATerm sboundin_3 (ATerm t, ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm h_100 (ATerm))
{
  ATerm p_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, f_100, f_100);
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
            t = SDef_3(t, h_100, h_100, f_100);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            t = Rec_2(t, h_100, f_100);
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
ATerm crush_3 (ATerm t, ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm))
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
      t = foldr_3(t, m_86, n_86, o_86);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm c_86 (ATerm), ATerm d_86 (ATerm))
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  i_14 :
  if(((ATgetType(j_14) == AT_LIST) && ((ATermList) j_14 != ATempty)))
    {
      k_14 = ATgetFirst((ATermList) j_14);
      l_14 = (ATerm) ATgetNext((ATermList) j_14);
      {
        t = d_86(t);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm o_14 = NULL;
            o_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), not_null(o_14));
              t = c_86(t);
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
ATerm diff_1 (ATerm t, ATerm h_86 (ATerm))
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
                      t = HdMember_p__2(t, h_86, q_0);
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
ATerm free_vars2_4 (ATerm t, ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm b_91 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_91 (ATerm))
{
  ATerm e_15 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_90(t);
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
            t = a_91(t);
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
              t = diff_1(t, c_91);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = b_91(t, t_0, e_15, u_0);
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
ATerm SubsVar_2 (ATerm t, ATerm i_99 (ATerm), ATerm j_99 (ATerm))
{
  ATerm x_18 = NULL;
  ATerm z_18 = NULL,a_19 = NULL;
  x_18 = t;
  {
    ATerm b_19 = NULL;
    t = not_null(x_18);
    {
      ATerm c_19 = NULL;
      t = i_99(t);
      {
        b_19 = t;
        {
          if(((z_18 != NULL) && (z_18 != b_19)))
            _fail(b_19);
          else
            z_18 = b_19;
          {
            t = j_99(t);
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
ATerm alltd_1 (ATerm t, ATerm i_98 (ATerm))
{
  ATerm g_19 (ATerm t)
  {
    ATerm o_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_98(t);
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
ATerm substitute_2 (ATerm t, ATerm k_99 (ATerm), ATerm l_99 (ATerm))
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
              t = SubsVar_2(t, k_99, e_1);
              t = l_99(t);
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
ATerm substitute_1 (ATerm t, ATerm m_99 (ATerm))
{
  t = substitute_2(t, m_99, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm))
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
            t = p_75(t);
            {
              x_20 = t;
              {
                t = not_null(r_20);
                {
                  ATerm b_21 = NULL;
                  t = q_75(t);
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
                ATerm b_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,l_26 = NULL;
                ATerm m_26 = NULL;
                ATerm n_26 = NULL;
                t = new_0(t);
                {
                  m_26 = t;
                  {
                    if(((i_26 != NULL) && (i_26 != m_26)))
                      _fail(m_26);
                    else
                      i_26 = m_26;
                    {
                      ATerm u_26 = NULL;
                      t = new_0(t);
                      {
                        n_26 = t;
                        {
                          if(((j_26 != NULL) && (j_26 != n_26)))
                            _fail(n_26);
                          else
                            j_26 = n_26;
                          {
                            t = not_null(f_25);
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
                                r_26 = t;
                                a_25 :
                                if(match_cons(r_26, sym_Explode_2))
                                  {
                                    s_26 = ATgetArgument(r_26, 0);
                                    t_26 = ATgetArgument(r_26, 1);
                                    {
                                      if(((b_26 != NULL) && (b_26 != s_26)))
                                        _fail(s_26);
                                      else
                                        b_26 = s_26;
                                      {
                                        if(((h_26 != NULL) && (h_26 != t_26)))
                                          _fail(t_26);
                                        else
                                          h_26 = t_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_26));
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
                                u_26 = t;
                                if(((l_26 != NULL) && (l_26 != u_26)))
                                  _fail(u_26);
                                else
                                  l_26 = u_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_26)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_26))), (ATerm) ATmakeAppl(sym_Prim_2, term_w_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_26)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_26)), (ATerm) ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_26)), not_null(b_26)))))));
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
  ATerm k_29 = NULL,l_29 = NULL;
  k_29 = t;
  c_29 :
  if(match_cons(k_29, sym_Match_1))
    {
      l_29 = ATgetArgument(k_29, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
            ATerm r_29 = NULL;
            ATerm v_29 = NULL;
            t = new_0(t);
            {
              r_29 = t;
              {
                if(((p_29 != NULL) && (p_29 != r_29)))
                  _fail(r_29);
                else
                  p_29 = r_29;
                {
                  t = not_null(l_29);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
                      s_29 = t;
                      s_28 :
                      if(match_cons(s_29, sym_Anno_2))
                        {
                          t_29 = ATgetArgument(s_29, 0);
                          u_29 = ATgetArgument(s_29, 1);
                          {
                            if(((n_29 != NULL) && (n_29 != t_29)))
                              _fail(t_29);
                            else
                              n_29 = t_29;
                            {
                              if(((o_29 != NULL) && (o_29 != u_29)))
                                _fail(u_29);
                              else
                                o_29 = u_29;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_29)), not_null(n_29));
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
                      v_29 = t;
                      if(((q_29 != NULL) && (q_29 != v_29)))
                        _fail(v_29);
                      else
                        q_29 = v_29;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_29)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_29)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_29))))));
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
                  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
                  ATerm d_30 = NULL;
                  ATerm i_30 = NULL;
                  t = new_0(t);
                  {
                    d_30 = t;
                    {
                      if(((b_30 != NULL) && (b_30 != d_30)))
                        _fail(d_30);
                      else
                        b_30 = d_30;
                      {
                        t = not_null(l_29);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm e_30 = NULL,f_30 = NULL;
                            e_30 = t;
                            w_28 :
                            if(match_cons(e_30, sym_RootApp_1))
                              {
                                f_30 = ATgetArgument(e_30, 0);
                                {
                                  if(((a_30 != NULL) && (a_30 != f_30)))
                                    _fail(f_30);
                                  else
                                    a_30 = f_30;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_30));
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
                            i_30 = t;
                            if(((c_30 != NULL) && (c_30 != i_30)))
                              _fail(i_30);
                            else
                              c_30 = i_30;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_30))), not_null(a_30))));
                  LocalPopChoice(h_10);
                }
              else
                {
                  t = b_10;
                  {
                    ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
                    ATerm o_30 = NULL;
                    ATerm t_30 = NULL;
                    t = new_0(t);
                    {
                      o_30 = t;
                      {
                        if(((m_30 != NULL) && (m_30 != o_30)))
                          _fail(o_30);
                        else
                          m_30 = o_30;
                        {
                          t = not_null(l_29);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
                              p_30 = t;
                              a_29 :
                              if(match_cons(p_30, sym_App_2))
                                {
                                  q_30 = ATgetArgument(p_30, 0);
                                  r_30 = ATgetArgument(p_30, 1);
                                  {
                                    if(((l_30 != NULL) && (l_30 != q_30)))
                                      _fail(q_30);
                                    else
                                      l_30 = q_30;
                                    {
                                      if(((k_30 != NULL) && (k_30 != r_30)))
                                        _fail(r_30);
                                      else
                                        k_30 = r_30;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_30));
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
                              t_30 = t;
                              if(((n_30 != NULL) && (n_30 != t_30)))
                                _fail(t_30);
                              else
                                n_30 = t_30;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_30))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_30)), not_null(l_30)))));
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
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  k_31 = t;
  i_31 :
  if(match_cons(k_31, sym_Match_1))
    {
      l_31 = ATgetArgument(k_31, 0);
      j_31 :
      if(match_cons(l_31, sym_RootApp_1))
        {
          m_31 = ATgetArgument(l_31, 0);
          t = not_null(m_31);
        }
      else
        {
          if(match_cons(l_31, sym_App_2))
            {
              m_31 = ATgetArgument(l_31, 0);
              n_31 = ATgetArgument(l_31, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(m_31), not_null(n_31));
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
  ATerm l_32 = NULL,m_32 = NULL;
  l_32 = t;
  k_32 :
  if(match_cons(l_32, sym_Match_1))
    {
      m_32 = ATgetArgument(l_32, 0);
      {
        ATerm u_32 = NULL,v_32 = NULL;
        ATerm f_33 = NULL;
        t = not_null(m_32);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
            c_33 = t;
            h_32 :
            if(match_cons(c_33, sym_RootApp_1))
              {
                d_33 = ATgetArgument(c_33, 0);
                i_32 :
                if(match_cons(d_33, sym_Match_1))
                  {
                    e_33 = ATgetArgument(d_33, 0);
                    {
                      if(((u_32 != NULL) && (u_32 != e_33)))
                        _fail(e_33);
                      else
                        u_32 = e_33;
                      t = not_null(u_32);
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
            f_33 = t;
            if(((v_32 != NULL) && (v_32 != f_33)))
              _fail(f_33);
            else
              v_32 = f_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(v_32));
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
  ATerm a_34 = NULL,b_34 = NULL;
  a_34 = t;
  z_33 :
  if(match_cons(a_34, sym_Build_1))
    {
      b_34 = ATgetArgument(a_34, 0);
      {
        ATerm q_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
            ATerm h_34 = NULL;
            ATerm l_34 = NULL;
            t = new_0(t);
            {
              h_34 = t;
              {
                if(((f_34 != NULL) && (f_34 != h_34)))
                  _fail(h_34);
                else
                  f_34 = h_34;
                {
                  t = not_null(b_34);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
                      i_34 = t;
                      p_33 :
                      if(match_cons(i_34, sym_Anno_2))
                        {
                          j_34 = ATgetArgument(i_34, 0);
                          k_34 = ATgetArgument(i_34, 1);
                          {
                            if(((d_34 != NULL) && (d_34 != j_34)))
                              _fail(j_34);
                            else
                              d_34 = j_34;
                            {
                              if(((e_34 != NULL) && (e_34 != k_34)))
                                _fail(k_34);
                              else
                                e_34 = k_34;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_34));
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
                      l_34 = t;
                      if(((g_34 != NULL) && (g_34 != l_34)))
                        _fail(l_34);
                      else
                        g_34 = l_34;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_34)), not_null(d_34))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_34))));
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
                  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
                  ATerm q_34 = NULL;
                  ATerm t_34 = NULL;
                  t = new_0(t);
                  {
                    q_34 = t;
                    {
                      if(((o_34 != NULL) && (o_34 != q_34)))
                        _fail(q_34);
                      else
                        o_34 = q_34;
                      {
                        t = not_null(b_34);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm r_34 = NULL,s_34 = NULL;
                            r_34 = t;
                            t_33 :
                            if(match_cons(r_34, sym_RootApp_1))
                              {
                                s_34 = ATgetArgument(r_34, 0);
                                {
                                  if(((n_34 != NULL) && (n_34 != s_34)))
                                    _fail(s_34);
                                  else
                                    n_34 = s_34;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_34));
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
                            t_34 = t;
                            if(((p_34 != NULL) && (p_34 != t_34)))
                              _fail(t_34);
                            else
                              p_34 = t_34;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_34))));
                  LocalPopChoice(x_10);
                }
              else
                {
                  t = w_10;
                  {
                    ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
                    ATerm z_34 = NULL;
                    ATerm d_35 = NULL;
                    t = new_0(t);
                    {
                      z_34 = t;
                      {
                        if(((x_34 != NULL) && (x_34 != z_34)))
                          _fail(z_34);
                        else
                          x_34 = z_34;
                        {
                          t = not_null(b_34);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
                              a_35 = t;
                              x_33 :
                              if(match_cons(a_35, sym_App_2))
                                {
                                  b_35 = ATgetArgument(a_35, 0);
                                  c_35 = ATgetArgument(a_35, 1);
                                  {
                                    if(((v_34 != NULL) && (v_34 != b_35)))
                                      _fail(b_35);
                                    else
                                      v_34 = b_35;
                                    {
                                      if(((w_34 != NULL) && (w_34 != c_35)))
                                        _fail(c_35);
                                      else
                                        w_34 = c_35;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_34));
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
                              d_35 = t;
                              if(((y_34 != NULL) && (y_34 != d_35)))
                                _fail(d_35);
                              else
                                y_34 = d_35;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_34), not_null(w_34), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_34)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_34))));
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
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  b_36 = t;
  z_35 :
  if(match_cons(b_36, sym_Build_1))
    {
      c_36 = ATgetArgument(b_36, 0);
      a_36 :
      if(match_cons(c_36, sym_RootApp_1))
        {
          d_36 = ATgetArgument(c_36, 0);
          t = not_null(d_36);
        }
      else
        {
          if(match_cons(c_36, sym_App_2))
            {
              d_36 = ATgetArgument(c_36, 0);
              e_36 = ATgetArgument(c_36, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_36)), not_null(d_36));
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
ATerm Prim_2 (ATerm t, ATerm p_76 (ATerm), ATerm q_76 (ATerm))
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  t_36 :
  if(match_cons(u_36, sym_Prim_2))
    {
      v_36 = ATgetArgument(u_36, 0);
      w_36 = ATgetArgument(u_36, 1);
      {
        ATerm a_37 = NULL,c_37 = NULL;
        ATerm b_37 = NULL;
        t = SSLgetAnnotations(not_null(u_36));
        {
          b_37 = t;
          if(((a_37 != NULL) && (a_37 != b_37)))
            _fail(b_37);
          else
            a_37 = b_37;
        }
        {
          t = not_null(v_36);
          {
            ATerm e_37 = NULL;
            t = p_76(t);
            {
              c_37 = t;
              {
                t = not_null(w_36);
                {
                  ATerm g_37 = NULL;
                  t = q_76(t);
                  {
                    e_37 = t;
                    {
                      ATerm h_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(c_37), not_null(e_37)), not_null(a_37));
                      {
                        h_37 = t;
                        if(((g_37 != NULL) && (g_37 != h_37)))
                          _fail(h_37);
                        else
                          g_37 = h_37;
                      }
                      t = not_null(g_37);
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
ATerm Explode_2 (ATerm t, ATerm d_73 (ATerm), ATerm e_73 (ATerm))
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
  x_37 = t;
  w_37 :
  if(match_cons(x_37, sym_Explode_2))
    {
      y_37 = ATgetArgument(x_37, 0);
      z_37 = ATgetArgument(x_37, 1);
      {
        ATerm d_38 = NULL,f_38 = NULL;
        ATerm e_38 = NULL;
        t = SSLgetAnnotations(not_null(x_37));
        {
          e_38 = t;
          if(((d_38 != NULL) && (d_38 != e_38)))
            _fail(e_38);
          else
            d_38 = e_38;
        }
        {
          t = not_null(y_37);
          {
            ATerm h_38 = NULL;
            t = d_73(t);
            {
              f_38 = t;
              {
                t = not_null(z_37);
                {
                  ATerm j_38 = NULL;
                  t = e_73(t);
                  {
                    h_38 = t;
                    {
                      ATerm k_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(f_38), not_null(h_38)), not_null(d_38));
                      {
                        k_38 = t;
                        if(((j_38 != NULL) && (j_38 != k_38)))
                          _fail(k_38);
                        else
                          j_38 = k_38;
                      }
                      t = not_null(j_38);
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
ATerm Op_2 (ATerm t, ATerm p_74 (ATerm), ATerm q_74 (ATerm))
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
  w_38 = t;
  v_38 :
  if(match_cons(w_38, sym_Op_2))
    {
      x_38 = ATgetArgument(w_38, 0);
      y_38 = ATgetArgument(w_38, 1);
      {
        ATerm c_39 = NULL,i_39 = NULL;
        ATerm h_39 = NULL;
        t = SSLgetAnnotations(not_null(w_38));
        {
          h_39 = t;
          if(((c_39 != NULL) && (c_39 != h_39)))
            _fail(h_39);
          else
            c_39 = h_39;
        }
        {
          t = not_null(x_38);
          {
            ATerm k_39 = NULL;
            t = p_74(t);
            {
              i_39 = t;
              {
                t = not_null(y_38);
                {
                  ATerm m_39 = NULL;
                  t = q_74(t);
                  {
                    k_39 = t;
                    {
                      ATerm n_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(i_39), not_null(k_39)), not_null(c_39));
                      {
                        n_39 = t;
                        if(((m_39 != NULL) && (m_39 != n_39)))
                          _fail(n_39);
                        else
                          m_39 = n_39;
                      }
                      t = not_null(m_39);
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
ATerm pat_td_1 (ATerm t, ATerm h_103 (ATerm))
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_103(t);
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
                t = pat_td_1(t, h_103);
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
                    t = pat_td_1(t, h_103);
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
                          t = pat_td_1(t, h_103);
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
                              t = pat_td_1(t, h_103);
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
  ATerm y_40 = NULL,z_40 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym_Build_1))
    {
      z_40 = ATgetArgument(y_40, 0);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_41 = NULL,c_41 = NULL;
            ATerm g_41 = NULL;
            t = not_null(z_40);
            {
              ATerm y_1 (ATerm t)
              {
                ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
                d_41 = t;
                d_40 :
                if(match_cons(d_41, sym_RootApp_1))
                  {
                    e_41 = ATgetArgument(d_41, 0);
                    e_40 :
                    if(match_cons(e_41, sym_Build_1))
                      {
                        f_41 = ATgetArgument(e_41, 0);
                        {
                          if(((b_41 != NULL) && (b_41 != f_41)))
                            _fail(f_41);
                          else
                            b_41 = f_41;
                          t = not_null(b_41);
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
                g_41 = t;
                if(((c_41 != NULL) && (c_41 != g_41)))
                  _fail(g_41);
                else
                  c_41 = g_41;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_41));
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            {
              ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
              ATerm s_41 = NULL;
              t = not_null(z_40);
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm l_41 = NULL,m_41 = NULL,q_41 = NULL,r_41 = NULL;
                  l_41 = t;
                  s_40 :
                  if(match_cons(l_41, sym_App_2))
                    {
                      m_41 = ATgetArgument(l_41, 0);
                      r_41 = ATgetArgument(l_41, 1);
                      t_40 :
                      if(match_cons(m_41, sym_Build_1))
                        {
                          q_41 = ATgetArgument(m_41, 0);
                          {
                            if(((j_41 != NULL) && (j_41 != q_41)))
                              _fail(q_41);
                            else
                              j_41 = q_41;
                            {
                              if(((i_41 != NULL) && (i_41 != r_41)))
                                _fail(r_41);
                              else
                                i_41 = r_41;
                              t = not_null(j_41);
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
                  s_41 = t;
                  if(((k_41 != NULL) && (k_41 != s_41)))
                    _fail(s_41);
                  else
                    k_41 = s_41;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(k_41));
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
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL;
  t_42 = t;
  l_42 :
  if(match_cons(t_42, sym_InfixApp_3))
    {
      u_42 = ATgetArgument(t_42, 0);
      q_42 = ATgetArgument(t_42, 1);
      p_42 = ATgetArgument(t_42, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(q_42), (ATerm) ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_42)), not_null(u_42))));
    }
  else
    {
      if(match_cons(t_42, sym_BAM_3))
        {
          u_42 = ATgetArgument(t_42, 0);
          q_42 = ATgetArgument(t_42, 1);
          p_42 = ATgetArgument(t_42, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(p_42))), not_null(u_42)), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_42))));
        }
      else
        {
          if(match_cons(t_42, sym_AM_2))
            {
              u_42 = ATgetArgument(t_42, 0);
              q_42 = ATgetArgument(t_42, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_42), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_42)));
            }
          else
            {
              if(match_cons(t_42, sym_MA_2))
                {
                  u_42 = ATgetArgument(t_42, 0);
                  q_42 = ATgetArgument(t_42, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_42)), not_null(q_42));
                }
              else
                {
                  if(match_cons(t_42, sym_BA_2))
                    {
                      u_42 = ATgetArgument(t_42, 0);
                      q_42 = ATgetArgument(t_42, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_42)), not_null(u_42));
                    }
                  else
                    {
                      if(match_cons(t_42, sym_Lets_2))
                        {
                          u_42 = ATgetArgument(t_42, 0);
                          q_42 = ATgetArgument(t_42, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_42), not_null(q_42));
                        }
                      else
                        {
                          if(match_cons(t_42, sym_LChoices_1))
                            {
                              u_42 = ATgetArgument(t_42, 0);
                              m_42 :
                              if(((ATgetType(u_42) == AT_LIST) && ((ATermList) u_42 != ATempty)))
                                {
                                  r_42 = ATgetFirst((ATermList) u_42);
                                  s_42 = (ATerm) ATgetNext((ATermList) u_42);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_42), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(s_42)));
                                }
                              else
                                {
                                  if(((ATermList) u_42 == ATempty))
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
                              if(match_cons(t_42, sym_Choices_1))
                                {
                                  u_42 = ATgetArgument(t_42, 0);
                                  n_42 :
                                  if(((ATgetType(u_42) == AT_LIST) && ((ATermList) u_42 != ATempty)))
                                    {
                                      r_42 = ATgetFirst((ATermList) u_42);
                                      s_42 = (ATerm) ATgetNext((ATermList) u_42);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_42), (ATerm) ATmakeAppl(sym_Choices_1, not_null(s_42)));
                                    }
                                  else
                                    {
                                      if(((ATermList) u_42 == ATempty))
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
                                  if(match_cons(t_42, sym_Seqs_1))
                                    {
                                      u_42 = ATgetArgument(t_42, 0);
                                      o_42 :
                                      if(((ATgetType(u_42) == AT_LIST) && ((ATermList) u_42 != ATempty)))
                                        {
                                          r_42 = ATgetFirst((ATermList) u_42);
                                          s_42 = (ATerm) ATgetNext((ATermList) u_42);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_42), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_42)));
                                        }
                                      else
                                        {
                                          if(((ATermList) u_42 == ATempty))
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
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
  f_44 = t;
  c_44 :
  if(match_cons(f_44, sym__2))
    {
      g_44 = ATgetArgument(f_44, 0);
      j_44 = ATgetArgument(f_44, 1);
      d_44 :
      if(match_cons(g_44, sym__2))
        {
          h_44 = ATgetArgument(g_44, 0);
          i_44 = ATgetArgument(g_44, 1);
          e_44 :
          if(match_cons(j_44, sym__2))
            {
              k_44 = ATgetArgument(j_44, 0);
              l_44 = ATgetArgument(j_44, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_44)), not_null(h_44)), (ATerm) ATinsert(CheckATermList(not_null(l_44)), not_null(i_44)));
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
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  s_44 :
  if(((ATgetType(t_44) == AT_LIST) && ((ATermList) t_44 != ATempty)))
    {
      u_44 = ATgetFirst((ATermList) t_44);
      v_44 = (ATerm) ATgetNext((ATermList) t_44);
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_44), not_null(v_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  a_45 :
  if(((ATermList) b_45 == ATempty))
    {
      t = term_x_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm u_93 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, u_93);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  ATerm o_45 (ATerm t)
  {
    ATerm l_45 = NULL;
    ATerm m_45 = NULL;
    t = not_null(i_45);
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
          m_45 = t;
          if(((l_45 != NULL) && (l_45 != m_45)))
            _fail(m_45);
          else
            l_45 = m_45;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(l_45)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_45)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_45))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_45))));
    return(t);
  }
  ATerm p_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_45))));
    return(t);
  }
  i_45 = t;
  g_45 :
  if(match_cons(i_45, sym_Var_1))
    {
      j_45 = ATgetArgument(i_45, 0);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_45(t);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            t = p_45(t);
          }
      }
    }
  else
    {
      t = o_45(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm a_46 = NULL,b_46 = NULL;
  a_46 = t;
  z_45 :
  if(match_cons(a_46, sym_Var_1))
    {
      b_46 = ATgetArgument(a_46, 0);
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_46 = NULL,g_46 = NULL;
            ATerm f_46 = NULL;
            t = SSLgetAnnotations(not_null(a_46));
            {
              f_46 = t;
              if(((e_46 != NULL) && (e_46 != f_46)))
                _fail(f_46);
              else
                e_46 = f_46;
            }
            {
              t = not_null(b_46);
              {
                ATerm i_46 = NULL;
                t = o_0(t);
                {
                  g_46 = t;
                  {
                    ATerm j_46 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(g_46)), not_null(e_46));
                    {
                      j_46 = t;
                      if(((i_46 != NULL) && (i_46 != j_46)))
                        _fail(j_46);
                      else
                        i_46 = j_46;
                    }
                    t = not_null(i_46);
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
              ATerm m_46 = NULL,o_46 = NULL;
              ATerm n_46 = NULL;
              t = SSLgetAnnotations(not_null(a_46));
              {
                n_46 = t;
                if(((m_46 != NULL) && (m_46 != n_46)))
                  _fail(n_46);
                else
                  m_46 = n_46;
              }
              {
                t = not_null(b_46);
                {
                  ATerm q_46 = NULL;
                  t = o_0(t);
                  {
                    o_46 = t;
                    {
                      ATerm r_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_46)), not_null(m_46));
                      {
                        r_46 = t;
                        if(((q_46 != NULL) && (q_46 != r_46)))
                          _fail(r_46);
                        else
                          q_46 = r_46;
                      }
                      t = not_null(q_46);
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
  ATerm j_47 = NULL,k_47 = NULL,p_47 = NULL;
  j_47 = t;
  i_47 :
  if(match_cons(j_47, sym_Prim_2))
    {
      k_47 = ATgetArgument(j_47, 0);
      p_47 = ATgetArgument(j_47, 1);
      {
        ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
        ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
        t = not_null(p_47);
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
            t = not_null(p_47);
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
                  d_48 = t;
                  g_47 :
                  if(match_cons(d_48, sym__2))
                    {
                      e_48 = ATgetArgument(d_48, 0);
                      f_48 = ATgetArgument(d_48, 1);
                      h_47 :
                      if(match_cons(f_48, sym__2))
                        {
                          g_48 = ATgetArgument(f_48, 0);
                          h_48 = ATgetArgument(f_48, 1);
                          {
                            if(((s_47 != NULL) && (s_47 != e_48)))
                              _fail(e_48);
                            else
                              s_47 = e_48;
                            {
                              if(((t_47 != NULL) && (t_47 != g_48)))
                                _fail(g_48);
                              else
                                t_47 = g_48;
                              if(((u_47 != NULL) && (u_47 != h_48)))
                                _fail(h_48);
                              else
                                u_47 = h_48;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(t_47)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(k_47), not_null(u_47))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm g_88 (ATerm), ATerm h_88 (ATerm))
{
  ATerm k_48 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_88(t);
        t = k_48(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = h_88(t);
      }
    return(t);
  }
  t = k_48(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm j_88 (ATerm))
{
  t = repeat_2(t, j_88, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm p_48 = NULL;
  p_48 = t;
  o_48 :
  if(match_cons(p_48, sym_Wld_0))
    {
      ATerm r_48 = NULL,t_48 = NULL;
      ATerm q_12;
      q_12 = t;
      {
        ATerm s_48 = NULL;
        t = SSLgetAnnotations(not_null(p_48));
        {
          s_48 = t;
          if(((r_48 != NULL) && (r_48 != s_48)))
            _fail(s_48);
          else
            r_48 = s_48;
        }
      }
      t = q_12;
      {
        ATerm u_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(r_48));
        {
          u_48 = t;
          if(((t_48 != NULL) && (t_48 != u_48)))
            _fail(u_48);
          else
            t_48 = u_48;
        }
        t = not_null(t_48);
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
ATerm App_2 (ATerm t, ATerm x_72 (ATerm), ATerm y_72 (ATerm))
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  e_49 = t;
  d_49 :
  if(match_cons(e_49, sym_App_2))
    {
      f_49 = ATgetArgument(e_49, 0);
      g_49 = ATgetArgument(e_49, 1);
      {
        ATerm k_49 = NULL,m_49 = NULL;
        ATerm l_49 = NULL;
        t = SSLgetAnnotations(not_null(e_49));
        {
          l_49 = t;
          if(((k_49 != NULL) && (k_49 != l_49)))
            _fail(l_49);
          else
            k_49 = l_49;
        }
        {
          t = not_null(f_49);
          {
            ATerm o_49 = NULL;
            t = x_72(t);
            {
              m_49 = t;
              {
                t = not_null(g_49);
                {
                  ATerm q_49 = NULL;
                  t = y_72(t);
                  {
                    o_49 = t;
                    {
                      ATerm r_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(m_49), not_null(o_49)), not_null(k_49));
                      {
                        r_49 = t;
                        if(((q_49 != NULL) && (q_49 != r_49)))
                          _fail(r_49);
                        else
                          q_49 = r_49;
                      }
                      t = not_null(q_49);
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
ATerm Con_3 (ATerm t, ATerm u_72 (ATerm), ATerm v_72 (ATerm), ATerm w_72 (ATerm))
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  e_50 = t;
  d_50 :
  if(match_cons(e_50, sym_Con_3))
    {
      f_50 = ATgetArgument(e_50, 0);
      g_50 = ATgetArgument(e_50, 1);
      h_50 = ATgetArgument(e_50, 2);
      {
        ATerm r_50 = NULL,t_50 = NULL;
        ATerm s_50 = NULL;
        t = SSLgetAnnotations(not_null(e_50));
        {
          s_50 = t;
          if(((r_50 != NULL) && (r_50 != s_50)))
            _fail(s_50);
          else
            r_50 = s_50;
        }
        {
          t = not_null(f_50);
          {
            ATerm v_50 = NULL;
            t = u_72(t);
            {
              t_50 = t;
              {
                t = not_null(g_50);
                {
                  ATerm x_50 = NULL;
                  t = v_72(t);
                  {
                    v_50 = t;
                    {
                      t = not_null(h_50);
                      {
                        ATerm l_51 = NULL;
                        t = w_72(t);
                        {
                          x_50 = t;
                          {
                            ATerm m_51 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(t_50), not_null(v_50), not_null(x_50)), not_null(r_50));
                            {
                              m_51 = t;
                              if(((l_51 != NULL) && (l_51 != m_51)))
                                _fail(m_51);
                              else
                                l_51 = m_51;
                            }
                            t = not_null(l_51);
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
  ATerm y_51 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL;
  y_51 = t;
  w_51 :
  if(match_cons(y_51, sym_SRule_1))
    {
      k_52 = ATgetArgument(y_51, 0);
      x_51 :
      if(match_cons(k_52, sym_StratRule_3))
        {
          l_52 = ATgetArgument(k_52, 0);
          m_52 = ATgetArgument(k_52, 1);
          n_52 = ATgetArgument(k_52, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_52)), (ATerm) ATmakeAppl(sym_Where_1, not_null(n_52))), not_null(l_52)));
        }
      else
        {
          if(match_cons(k_52, sym_Rule_3))
            {
              l_52 = ATgetArgument(k_52, 0);
              m_52 = ATgetArgument(k_52, 1);
              n_52 = ATgetArgument(k_52, 2);
              {
                t = not_null(l_52);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(m_52);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(m_52))), (ATerm) ATmakeAppl(sym_Where_1, not_null(n_52))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_52))));
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
ATerm Scope_2 (ATerm t, ATerm m_76 (ATerm), ATerm n_76 (ATerm))
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
  f_53 = t;
  e_53 :
  if(match_cons(f_53, sym_Scope_2))
    {
      g_53 = ATgetArgument(f_53, 0);
      h_53 = ATgetArgument(f_53, 1);
      {
        ATerm l_53 = NULL,n_53 = NULL;
        ATerm m_53 = NULL;
        t = SSLgetAnnotations(not_null(f_53));
        {
          m_53 = t;
          if(((l_53 != NULL) && (l_53 != m_53)))
            _fail(m_53);
          else
            l_53 = m_53;
        }
        {
          t = not_null(g_53);
          {
            ATerm p_53 = NULL;
            t = m_76(t);
            {
              n_53 = t;
              {
                t = not_null(h_53);
                {
                  ATerm r_53 = NULL;
                  t = n_76(t);
                  {
                    p_53 = t;
                    {
                      ATerm s_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(n_53), not_null(p_53)), not_null(l_53));
                      {
                        s_53 = t;
                        if(((r_53 != NULL) && (r_53 != s_53)))
                          _fail(s_53);
                        else
                          r_53 = s_53;
                      }
                      t = not_null(r_53);
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
ATerm oncetd_1 (ATerm t, ATerm u_97 (ATerm))
{
  ATerm y_53 (ATerm t)
  {
    ATerm a_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_97(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = a_13;
        t = _one(t, y_53);
      }
    return(t);
  }
  t = y_53(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
  n_54 = t;
  l_54 :
  if(match_cons(n_54, sym_SRule_1))
    {
      o_54 = ATgetArgument(n_54, 0);
      m_54 :
      if(match_cons(o_54, sym_Rule_3))
        {
          p_54 = ATgetArgument(o_54, 0);
          q_54 = ATgetArgument(o_54, 1);
          r_54 = ATgetArgument(o_54, 2);
          {
            ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL;
            ATerm d_55 = NULL;
            ATerm o_55 = NULL;
            t = new_0(t);
            {
              d_55 = t;
              {
                if(((a_55 != NULL) && (a_55 != d_55)))
                  _fail(d_55);
                else
                  a_55 = d_55;
                {
                  t = not_null(p_54);
                  {
                    ATerm w_55 = NULL;
                    ATerm e_2 (ATerm t)
                    {
                      ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
                      e_55 = t;
                      c_54 :
                      if(match_cons(e_55, sym_Con_3))
                        {
                          f_55 = ATgetArgument(e_55, 0);
                          h_55 = ATgetArgument(e_55, 1);
                          i_55 = ATgetArgument(e_55, 2);
                          d_54 :
                          if(match_cons(f_55, sym_Var_1))
                            {
                              g_55 = ATgetArgument(f_55, 0);
                              {
                                if(((z_54 != NULL) && (z_54 != g_55)))
                                  _fail(g_55);
                                else
                                  z_54 = g_55;
                                {
                                  if(((x_54 != NULL) && (x_54 != h_55)))
                                    _fail(h_55);
                                  else
                                    x_54 = h_55;
                                  {
                                    if(((v_54 != NULL) && (v_54 != i_55)))
                                      _fail(i_55);
                                    else
                                      v_54 = i_55;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_54));
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
                      o_55 = t;
                      {
                        if(((b_55 != NULL) && (b_55 != o_55)))
                          _fail(o_55);
                        else
                          b_55 = o_55;
                        {
                          t = not_null(q_54);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL;
                              p_55 = t;
                              g_54 :
                              if(match_cons(p_55, sym_Con_3))
                                {
                                  q_55 = ATgetArgument(p_55, 0);
                                  s_55 = ATgetArgument(p_55, 1);
                                  t_55 = ATgetArgument(p_55, 2);
                                  h_54 :
                                  if(match_cons(q_55, sym_Var_1))
                                    {
                                      r_55 = ATgetArgument(q_55, 0);
                                      i_54 :
                                      if(match_cons(t_55, sym_Call_2))
                                        {
                                          u_55 = ATgetArgument(t_55, 0);
                                          v_55 = ATgetArgument(t_55, 1);
                                          j_54 :
                                          if(((ATermList) v_55 == ATempty))
                                            {
                                              {
                                                if(((z_54 != NULL) && (z_54 != r_55)))
                                                  _fail(r_55);
                                                else
                                                  z_54 = r_55;
                                                {
                                                  if(((y_54 != NULL) && (y_54 != s_55)))
                                                    _fail(s_55);
                                                  else
                                                    y_54 = s_55;
                                                  {
                                                    if(((w_54 != NULL) && (w_54 != u_55)))
                                                      _fail(u_55);
                                                    else
                                                      w_54 = u_55;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_55));
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
                              w_55 = t;
                              if(((c_55 != NULL) && (c_55 != w_55)))
                                _fail(w_55);
                              else
                                c_55 = w_55;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_55)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_55), not_null(c_55), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_54), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(w_54), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_54), not_null(y_54), term_w_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_54)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_55)))))));
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
ATerm topdown_1 (ATerm t, ATerm e_96 (ATerm))
{
  t = e_96(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, e_96);
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
  ATerm p_56 = NULL;
  p_56 = t;
  o_56 :
  if(match_cons(p_56, sym__0))
    {
      ATerm r_56 = NULL,t_56 = NULL;
      ATerm e_14;
      e_14 = t;
      {
        ATerm s_56 = NULL;
        t = SSLgetAnnotations(not_null(p_56));
        {
          s_56 = t;
          if(((r_56 != NULL) && (r_56 != s_56)))
            _fail(s_56);
          else
            r_56 = s_56;
        }
      }
      t = e_14;
      {
        ATerm u_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(r_56));
        {
          u_56 = t;
          if(((t_56 != NULL) && (t_56 != u_56)))
            _fail(u_56);
          else
            t_56 = u_56;
        }
        t = not_null(t_56);
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
  ATerm a_60 = NULL;
  ATerm c_60 = NULL,d_60 = NULL,l_60 = NULL,n_60 = NULL;
  a_60 = t;
  {
    ATerm f_14;
    f_14 = t;
    {
      ATerm e_60 = NULL;
      ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
      t = not_null(a_60);
      {
        e_60 = t;
        {
          t = SSL_explode_term(not_null(e_60));
          {
            g_60 = t;
            b_57 :
            if(match_cons(g_60, sym__2))
              {
                h_60 = ATgetArgument(g_60, 0);
                i_60 = ATgetArgument(g_60, 1);
                c_57 :
                if(match_string(h_60, ""))
                  {
                    l_57 :
                    if(((ATgetType(i_60) == AT_LIST) && ((ATermList) i_60 != ATempty)))
                      {
                        j_60 = ATgetFirst((ATermList) i_60);
                        k_60 = (ATerm) ATgetNext((ATermList) i_60);
                        {
                          if(((c_60 != NULL) && (c_60 != j_60)))
                            _fail(j_60);
                          else
                            c_60 = j_60;
                          if(((d_60 != NULL) && (d_60 != k_60)))
                            _fail(k_60);
                          else
                            d_60 = k_60;
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
        ATerm m_60 = NULL;
        t = term_x_9;
        {
          m_60 = t;
          if(((l_60 != NULL) && (l_60 != m_60)))
            _fail(m_60);
          else
            l_60 = m_60;
        }
      }
      t = g_14;
      {
        t = SSL_mkterm(not_null(l_60), not_null(d_60));
        {
          n_60 = t;
          t = not_null(n_60);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm i_62 = NULL;
  ATerm k_62 = NULL,l_62 = NULL;
  i_62 = t;
  {
    ATerm m_62 = NULL;
    ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL;
    t = not_null(i_62);
    {
      m_62 = t;
      {
        t = SSL_explode_term(not_null(m_62));
        {
          t_65 = t;
          f_62 :
          if(match_cons(t_65, sym__2))
            {
              u_65 = ATgetArgument(t_65, 0);
              v_65 = ATgetArgument(t_65, 1);
              g_62 :
              if(match_string(u_65, ""))
                {
                  h_62 :
                  if(((ATgetType(v_65) == AT_LIST) && ((ATermList) v_65 != ATempty)))
                    {
                      w_65 = ATgetFirst((ATermList) v_65);
                      x_65 = (ATerm) ATgetNext((ATermList) v_65);
                      {
                        if(((l_62 != NULL) && (l_62 != w_65)))
                          _fail(w_65);
                        else
                          l_62 = w_65;
                        if(((k_62 != NULL) && (k_62 != x_65)))
                          _fail(x_65);
                        else
                          k_62 = x_65;
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
    t = not_null(l_62);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm n_95 (ATerm))
{
  ATerm k_66 = NULL,m_66 = NULL,o_66 = NULL;
  ATerm q_66 (ATerm t)
  {
    ATerm h_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_66 = NULL,i_66 = NULL;
        ATerm n_14;
        n_14 = t;
        {
          ATerm h_66 = NULL;
          t = map_1(t, Thd_0);
          {
            t = n_95(t);
            {
              h_66 = t;
              if(((g_66 != NULL) && (g_66 != h_66)))
                _fail(h_66);
              else
                g_66 = h_66;
            }
          }
        }
        t = n_14;
        {
          ATerm j_66 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = q_66(t);
            {
              j_66 = t;
              if(((i_66 != NULL) && (i_66 != j_66)))
                _fail(j_66);
              else
                i_66 = j_66;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(i_66)), not_null(g_66));
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
  t = q_66(t);
  {
    ATerm p_14;
    p_14 = t;
    {
      ATerm l_66 = NULL;
      l_66 = t;
      if(((k_66 != NULL) && (k_66 != l_66)))
        _fail(l_66);
      else
        k_66 = l_66;
    }
    t = p_14;
    {
      ATerm q_14;
      q_14 = t;
      {
        ATerm n_66 = NULL;
        t = term_x_9;
        {
          n_66 = t;
          if(((m_66 != NULL) && (m_66 != n_66)))
            _fail(n_66);
          else
            m_66 = n_66;
        }
      }
      t = q_14;
      {
        t = SSL_mkterm(not_null(m_66), not_null(k_66));
        {
          o_66 = t;
          t = not_null(o_66);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm a_67 = NULL;
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL;
  a_67 = t;
  {
    ATerm f_67 = NULL;
    ATerm g_67 = NULL;
    t = new_0(t);
    {
      f_67 = t;
      {
        if(((c_67 != NULL) && (c_67 != f_67)))
          _fail(f_67);
        else
          c_67 = f_67;
        {
          ATerm h_67 = NULL;
          t = new_0(t);
          {
            g_67 = t;
            {
              if(((d_67 != NULL) && (d_67 != g_67)))
                _fail(g_67);
              else
                d_67 = g_67;
              {
                t = new_0(t);
                {
                  h_67 = t;
                  if(((e_67 != NULL) && (e_67 != h_67)))
                    _fail(h_67);
                  else
                    e_67 = h_67;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_67)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_67)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_67))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_67), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_14), term_x_14)), not_null(d_67), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_67)), not_null(e_67), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_67)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
  o_67 = t;
  n_67 :
  if(match_cons(o_67, sym__2))
    {
      p_67 = ATgetArgument(o_67, 0);
      q_67 = ATgetArgument(o_67, 1);
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(p_67), not_null(q_67));
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            t = SSL_subtr(not_null(p_67), not_null(q_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL;
    d_68 = t;
    v_67 :
    if(match_cons(d_68, sym__2))
      {
        e_68 = ATgetArgument(d_68, 0);
        f_68 = ATgetArgument(d_68, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(e_68), not_null(f_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL;
    i_68 = t;
    x_67 :
    if(match_cons(i_68, sym__3))
      {
        j_68 = ATgetArgument(i_68, 0);
        k_68 = ATgetArgument(i_68, 1);
        l_68 = ATgetArgument(i_68, 2);
        y_67 :
        if(match_int(j_68, 0))
          {
            t = not_null(l_68);
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
    ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL;
    o_68 = t;
    c_68 :
    if(match_cons(o_68, sym__3))
      {
        p_68 = ATgetArgument(o_68, 0);
        q_68 = ATgetArgument(o_68, 1);
        r_68 = ATgetArgument(o_68, 2);
        {
          ATerm v_68 = NULL,x_68 = NULL;
          ATerm b_15;
          b_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_68), term_v_6);
            t = geq_0(t);
          }
          t = b_15;
          {
            ATerm f_15;
            f_15 = t;
            {
              ATerm w_68 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_68), term_v_6);
              {
                t = subt_0(t);
                {
                  w_68 = t;
                  if(((v_68 != NULL) && (v_68 != w_68)))
                    _fail(w_68);
                  else
                    v_68 = w_68;
                }
              }
            }
            t = f_15;
            {
              ATerm y_68 = NULL;
              t = not_null(q_68);
              {
                t = r_85(t);
                {
                  y_68 = t;
                  if(((x_68 != NULL) && (x_68 != y_68)))
                    _fail(y_68);
                  else
                    x_68 = y_68;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(v_68), not_null(q_68), (ATerm) ATinsert(CheckATermList(not_null(r_68)), not_null(x_68)));
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
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
  j_69 = t;
  i_69 :
  if(match_cons(j_69, sym__2))
    {
      k_69 = ATgetArgument(j_69, 0);
      l_69 = ATgetArgument(j_69, 1);
      {
        ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
        ATerm r_69 = NULL;
        ATerm s_69 = NULL;
        t = new_0(t);
        {
          r_69 = t;
          {
            if(((o_69 != NULL) && (o_69 != r_69)))
              _fail(r_69);
            else
              o_69 = r_69;
            {
              ATerm t_69 = NULL;
              t = new_0(t);
              {
                s_69 = t;
                {
                  if(((p_69 != NULL) && (p_69 != s_69)))
                    _fail(s_69);
                  else
                    p_69 = s_69;
                  {
                    t = new_0(t);
                    {
                      t_69 = t;
                      if(((q_69 != NULL) && (q_69 != t_69)))
                        _fail(t_69);
                      else
                        q_69 = t_69;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_69)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_69)))), (ATerm) ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_69))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(o_69), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_14), term_x_14)), not_null(p_69), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_69)), not_null(q_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_69)));
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
  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL;
  b_70 = t;
  z_69 :
  if(match_cons(b_70, sym__2))
    {
      c_70 = ATgetArgument(b_70, 0);
      d_70 = ATgetArgument(b_70, 1);
      a_70 :
      if(((ATermList) d_70 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm s_93 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, s_93);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL;
  h_70 = t;
  g_70 :
  if(((ATgetType(h_70) == AT_LIST) && ((ATermList) h_70 != ATempty)))
    {
      i_70 = ATgetFirst((ATermList) h_70);
      j_70 = (ATerm) ATgetNext((ATermList) h_70);
      t = not_null(j_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL;
  q_70 = t;
  o_70 :
  if(((ATgetType(q_70) == AT_LIST) && ((ATermList) q_70 != ATempty)))
    {
      r_70 = ATgetFirst((ATermList) q_70);
      s_70 = (ATerm) ATgetNext((ATermList) q_70);
      p_70 :
      if(((ATermList) s_70 == ATempty))
        {
          t = not_null(r_70);
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
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL;
  ATerm x_73 (ATerm t)
  {
    ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,s_72 = NULL;
    ATerm k_15;
    k_15 = t;
    {
      ATerm f_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL;
      ATerm g_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_71), term_v_6);
      {
        t = add_0(t);
        {
          g_72 = t;
          if(((f_72 != NULL) && (f_72 != g_72)))
            _fail(g_72);
          else
            f_72 = g_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_72), term_r_15);
        {
          t = copy_1(t, new_0);
          {
            h_72 = t;
            e_71 :
            if(((ATgetType(h_72) == AT_LIST) && ((ATermList) h_72 != ATempty)))
              {
                i_72 = ATgetFirst((ATermList) h_72);
                j_72 = (ATerm) ATgetNext((ATermList) h_72);
                {
                  ATerm k_72 = NULL;
                  if(((x_71 != NULL) && (x_71 != i_72)))
                    _fail(i_72);
                  else
                    x_71 = i_72;
                  {
                    if(((y_71 != NULL) && (y_71 != j_72)))
                      _fail(j_72);
                    else
                      y_71 = j_72;
                    {
                      t = not_null(y_71);
                      {
                        ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL;
                        t = last_0(t);
                        {
                          k_72 = t;
                          {
                            if(((w_71 != NULL) && (w_71 != k_72)))
                              _fail(k_72);
                            else
                              w_71 = k_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_71)), not_null(x_71)), not_null(y_71));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    l_72 = t;
                                    d_71 :
                                    if(match_cons(l_72, sym__6))
                                      {
                                        m_72 = ATgetArgument(l_72, 0);
                                        n_72 = ATgetArgument(l_72, 1);
                                        o_72 = ATgetArgument(l_72, 2);
                                        p_72 = ATgetArgument(l_72, 3);
                                        q_72 = ATgetArgument(l_72, 4);
                                        r_72 = ATgetArgument(l_72, 5);
                                        {
                                          if(((z_71 != NULL) && (z_71 != m_72)))
                                            _fail(m_72);
                                          else
                                            z_71 = m_72;
                                          {
                                            if(((a_72 != NULL) && (a_72 != n_72)))
                                              _fail(n_72);
                                            else
                                              a_72 = n_72;
                                            {
                                              if(((b_72 != NULL) && (b_72 != o_72)))
                                                _fail(o_72);
                                              else
                                                b_72 = o_72;
                                              {
                                                if(((c_72 != NULL) && (c_72 != p_72)))
                                                  _fail(p_72);
                                                else
                                                  c_72 = p_72;
                                                {
                                                  if(((d_72 != NULL) && (d_72 != q_72)))
                                                    _fail(q_72);
                                                  else
                                                    d_72 = q_72;
                                                  if(((e_72 != NULL) && (e_72 != r_72)))
                                                    _fail(r_72);
                                                  else
                                                    e_72 = r_72;
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
    t = k_15;
    {
      ATerm t_72 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_72)), not_null(b_72)), not_null(y_71));
      {
        t = concat_0(t);
        {
          t_72 = t;
          if(((s_72 != NULL) && (s_72 != t_72)))
            _fail(t_72);
          else
            s_72 = t_72;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(r_71), term_s_15), not_null(a_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(s_72)), not_null(x_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_71), not_null(c_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_71), not_null(e_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(z_71))))));
    }
    return(t);
  }
  ATerm y_73 (ATerm t)
  {
    ATerm a_73 = NULL;
    ATerm b_73 = NULL;
    t = new_0(t);
    {
      b_73 = t;
      if(((a_73 != NULL) && (a_73 != b_73)))
        _fail(b_73);
      else
        a_73 = b_73;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(r_71), term_s_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_71), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_71), (ATerm) ATempty))), term_w_11))));
    return(t);
  }
  ATerm z_73 (ATerm t)
  {
    ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,v_73 = NULL;
    ATerm a_16;
    a_16 = t;
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
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_71), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_73)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  o_73 = t;
                  l_71 :
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
    t = a_16;
    {
      ATerm w_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_73), not_null(l_73));
      {
        t = conc_0(t);
        {
          w_73 = t;
          if(((v_73 != NULL) && (v_73 != w_73)))
            _fail(w_73);
          else
            v_73 = w_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(r_71), term_b_16), not_null(i_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(v_73)), not_null(g_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_71), not_null(k_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(r_71), not_null(m_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_73))))));
    }
    return(t);
  }
  q_71 = t;
  n_71 :
  if(match_cons(q_71, sym__3))
    {
      r_71 = ATgetArgument(q_71, 0);
      s_71 = ATgetArgument(q_71, 1);
      t_71 = ATgetArgument(q_71, 2);
      o_71 :
      if(match_string(s_71, "T"))
        {
          p_71 :
          if(match_int(t_71, 0))
            {
              ATerm c_16 = t;
              int d_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_73(t);
                  LocalPopChoice(d_16);
                }
              else
                {
                  t = c_16;
                  t = y_73(t);
                }
            }
          else
            {
              t = x_73(t);
            }
        }
      else
        {
          if(match_string(s_71, "D"))
            {
              t = z_73(t);
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
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL;
  s_74 = t;
  n_74 :
  if(match_cons(s_74, sym__2))
    {
      t_74 = ATgetArgument(s_74, 0);
      y_74 = ATgetArgument(s_74, 1);
      o_74 :
      if(match_cons(t_74, sym__2))
        {
          u_74 = ATgetArgument(t_74, 0);
          x_74 = ATgetArgument(t_74, 1);
          r_74 :
          if(match_cons(u_74, sym_Mod_2))
            {
              v_74 = ATgetArgument(u_74, 0);
              w_74 = ATgetArgument(u_74, 1);
              {
                ATerm d_75 = NULL;
                ATerm e_75 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_74), not_null(w_74), not_null(x_74));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      e_75 = t;
                      if(((d_75 != NULL) && (d_75 != e_75)))
                        _fail(e_75);
                      else
                        d_75 = e_75;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_75), not_null(y_74));
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
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL;
  t_75 = t;
  r_75 :
  if(match_cons(t_75, sym__5))
    {
      u_75 = ATgetArgument(t_75, 0);
      x_75 = ATgetArgument(t_75, 1);
      y_75 = ATgetArgument(t_75, 2);
      z_75 = ATgetArgument(t_75, 3);
      a_76 = ATgetArgument(t_75, 4);
      s_75 :
      if(((ATgetType(u_75) == AT_LIST) && ((ATermList) u_75 != ATempty)))
        {
          v_75 = ATgetFirst((ATermList) u_75);
          w_75 = (ATerm) ATgetNext((ATermList) u_75);
          t = (ATerm) ATmakeAppl(sym__5, not_null(w_75), not_null(x_75), not_null(y_75), not_null(z_75), (ATerm) ATinsert(CheckATermList(not_null(a_76)), not_null(v_75)));
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
  ATerm l_76 = NULL,o_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
  l_76 = t;
  j_76 :
  if(match_cons(l_76, sym__2))
    {
      o_76 = ATgetArgument(l_76, 0);
      t_76 = ATgetArgument(l_76, 1);
      k_76 :
      if(((ATgetType(t_76) == AT_LIST) && ((ATermList) t_76 != ATempty)))
        {
          u_76 = ATgetFirst((ATermList) t_76);
          v_76 = (ATerm) ATgetNext((ATermList) t_76);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_76)), not_null(u_76)), not_null(v_76));
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
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  c_77 = t;
  b_77 :
  if(match_cons(c_77, sym__2))
    {
      d_77 = ATgetArgument(c_77, 0);
      e_77 = ATgetArgument(c_77, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_77)), not_null(d_77));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL;
  r_77 = t;
  o_77 :
  if(match_cons(r_77, sym__2))
    {
      s_77 = ATgetArgument(r_77, 0);
      y_77 = ATgetArgument(r_77, 1);
      p_77 :
      if(((ATgetType(s_77) == AT_LIST) && ((ATermList) s_77 != ATempty)))
        {
          t_77 = ATgetFirst((ATermList) s_77);
          x_77 = (ATerm) ATgetNext((ATermList) s_77);
          q_77 :
          if(((ATgetType(y_77) == AT_LIST) && ((ATermList) y_77 != ATempty)))
            {
              z_77 = ATgetFirst((ATermList) y_77);
              a_78 = (ATerm) ATgetNext((ATermList) y_77);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(t_77), not_null(z_77)), (ATerm) ATmakeAppl(sym__2, not_null(x_77), not_null(a_78)));
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
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL;
  k_78 = t;
  h_78 :
  if(match_cons(k_78, sym__2))
    {
      l_78 = ATgetArgument(k_78, 0);
      m_78 = ATgetArgument(k_78, 1);
      i_78 :
      if(((ATermList) l_78 == ATempty))
        {
          j_78 :
          if(((ATermList) m_78 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm m_93 (ATerm), ATerm n_93 (ATerm))
{
  ATerm o_78 (ATerm t)
  {
    ATerm g_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_93(t);
        LocalPopChoice(m_16);
      }
    else
      {
        t = g_16;
        {
          t = l_93(t);
          {
            t = _2(t, n_93, o_78);
            t = m_93(t);
          }
        }
      }
    return(t);
  }
  t = o_78(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm p_93 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, p_93);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL;
  z_78 = t;
  x_78 :
  if(((ATgetType(z_78) == AT_LIST) && ((ATermList) z_78 != ATempty)))
    {
      a_79 = ATgetFirst((ATermList) z_78);
      d_79 = (ATerm) ATgetNext((ATermList) z_78);
      y_78 :
      if(match_cons(a_79, sym__2))
        {
          b_79 = ATgetArgument(a_79, 0);
          c_79 = ATgetArgument(a_79, 1);
          {
            ATerm h_79 = NULL,i_79 = NULL,u_79 = NULL,a_80 = NULL;
            ATerm r_16;
            r_16 = t;
            {
              ATerm j_79 = NULL;
              ATerm l_79 = NULL,s_79 = NULL,t_79 = NULL;
              t = not_null(c_79);
              {
                j_79 = t;
                {
                  t = SSL_explode_term(not_null(j_79));
                  {
                    l_79 = t;
                    s_78 :
                    if(match_cons(l_79, sym__2))
                      {
                        s_79 = ATgetArgument(l_79, 0);
                        t_79 = ATgetArgument(l_79, 1);
                        {
                          if(((h_79 != NULL) && (h_79 != s_79)))
                            _fail(s_79);
                          else
                            h_79 = s_79;
                          if(((i_79 != NULL) && (i_79 != t_79)))
                            _fail(t_79);
                          else
                            i_79 = t_79;
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
            t = r_16;
            {
              ATerm z_16;
              z_16 = t;
              {
                ATerm v_79 = NULL;
                ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
                t = not_null(b_79);
                {
                  v_79 = t;
                  {
                    t = SSL_explode_term(not_null(v_79));
                    {
                      x_79 = t;
                      v_78 :
                      if(match_cons(x_79, sym__2))
                        {
                          y_79 = ATgetArgument(x_79, 0);
                          z_79 = ATgetArgument(x_79, 1);
                          {
                            if(((h_79 != NULL) && (h_79 != y_79)))
                              _fail(y_79);
                            else
                              h_79 = y_79;
                            if(((u_79 != NULL) && (u_79 != z_79)))
                              _fail(z_79);
                            else
                              u_79 = z_79;
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
                ATerm b_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_79), not_null(i_79));
                {
                  t = zip_1(t, _id);
                  {
                    b_80 = t;
                    if(((a_80 != NULL) && (a_80 != b_80)))
                      _fail(b_80);
                    else
                      a_80 = b_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_80), not_null(d_79));
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
  ATerm m_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL;
  m_80 = t;
  j_80 :
  if(((ATgetType(m_80) == AT_LIST) && ((ATermList) m_80 != ATempty)))
    {
      p_80 = ATgetFirst((ATermList) m_80);
      s_80 = (ATerm) ATgetNext((ATermList) m_80);
      k_80 :
      if(match_cons(p_80, sym__2))
        {
          q_80 = ATgetArgument(p_80, 0);
          r_80 = ATgetArgument(p_80, 1);
          {
            ATerm u_80 = NULL;
            if(((q_80 != NULL) && (q_80 != r_80)))
              _fail(r_80);
            else
              q_80 = r_80;
            {
              if(((u_80 != NULL) && (u_80 != s_80)))
                _fail(s_80);
              else
                u_80 = s_80;
              t = not_null(u_80);
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
      ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
      z_80 = t;
      x_80 :
      if(match_cons(z_80, sym__2))
        {
          a_81 = ATgetArgument(z_80, 0);
          b_81 = ATgetArgument(z_80, 1);
          {
            t = not_null(a_81);
            {
              ATerm h_81 (ATerm t)
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
                      ATerm i_17 = t;
                      int j_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_2 (ATerm t)
                          {
                            t = not_null(b_81);
                            return(t);
                          }
                          t = HdMember_1(t, n_2);
                          t = h_81(t);
                          LocalPopChoice(j_17);
                        }
                      else
                        {
                          t = i_17;
                          t = Cons_2(t, _id, h_81);
                        }
                    }
                  }
                return(t);
              }
              t = h_81(t);
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
        ATerm o_2 (ATerm t)
        {
          ATerm e_81 = NULL;
          e_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(e_81));
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          ATerm k_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_2 (ATerm t)
              {
                ATerm t_17 = t;
                int u_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(u_17);
                  }
                else
                  {
                    t = t_17;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, r_2);
              LocalPopChoice(s_17);
            }
          else
            {
              t = k_17;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, o_2, p_2, q_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  ATerm z_81 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL;
  z_81 = t;
  x_81 :
  if(match_cons(z_81, sym__5))
    {
      e_82 = ATgetArgument(z_81, 0);
      h_82 = ATgetArgument(z_81, 1);
      i_82 = ATgetArgument(z_81, 2);
      j_82 = ATgetArgument(z_81, 3);
      k_82 = ATgetArgument(z_81, 4);
      y_81 :
      if(((ATgetType(e_82) == AT_LIST) && ((ATermList) e_82 != ATempty)))
        {
          f_82 = ATgetFirst((ATermList) e_82);
          g_82 = (ATerm) ATgetNext((ATermList) e_82);
          {
            ATerm t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL,c_83 = NULL,f_83 = NULL,h_83 = NULL;
            ATerm c_18;
            c_18 = t;
            {
              ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_82), not_null(i_82));
              {
                t = l_77(t);
                {
                  x_82 = t;
                  n_81 :
                  if(match_cons(x_82, sym__2))
                    {
                      y_82 = ATgetArgument(x_82, 0);
                      z_82 = ATgetArgument(x_82, 1);
                      {
                        ATerm a_83 = NULL;
                        if(((u_82 != NULL) && (u_82 != y_82)))
                          _fail(y_82);
                        else
                          u_82 = y_82;
                        {
                          if(((t_82 != NULL) && (t_82 != z_82)))
                            _fail(z_82);
                          else
                            t_82 = z_82;
                          {
                            t = not_null(u_82);
                            {
                              ATerm b_83 = NULL;
                              t = m_77(t);
                              {
                                a_83 = t;
                                {
                                  if(((v_82 != NULL) && (v_82 != a_83)))
                                    _fail(a_83);
                                  else
                                    v_82 = a_83;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_82), not_null(h_82));
                                    {
                                      t = diff_0(t);
                                      {
                                        b_83 = t;
                                        if(((w_82 != NULL) && (w_82 != b_83)))
                                          _fail(b_83);
                                        else
                                          w_82 = b_83;
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
            t = c_18;
            {
              ATerm d_18;
              d_18 = t;
              {
                ATerm d_83 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_82), not_null(g_82));
                {
                  t = conc_0(t);
                  {
                    d_83 = t;
                    if(((c_83 != NULL) && (c_83 != d_83)))
                      _fail(d_83);
                    else
                      c_83 = d_83;
                  }
                }
              }
              t = d_18;
              {
                ATerm e_18;
                e_18 = t;
                {
                  ATerm g_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_82), not_null(h_82));
                  {
                    t = conc_0(t);
                    {
                      g_83 = t;
                      if(((f_83 != NULL) && (f_83 != g_83)))
                        _fail(g_83);
                      else
                        f_83 = g_83;
                    }
                  }
                }
                t = e_18;
                {
                  ATerm i_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_82), not_null(u_82), not_null(j_82));
                  {
                    t = n_77(t);
                    {
                      i_83 = t;
                      if(((h_83 != NULL) && (h_83 != i_83)))
                        _fail(i_83);
                      else
                        h_83 = i_83;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(c_83), not_null(f_83), not_null(t_82), not_null(h_83), not_null(k_82));
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
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL;
  t_83 = t;
  r_83 :
  if(match_cons(t_83, sym__5))
    {
      u_83 = ATgetArgument(t_83, 0);
      v_83 = ATgetArgument(t_83, 1);
      w_83 = ATgetArgument(t_83, 2);
      x_83 = ATgetArgument(t_83, 3);
      y_83 = ATgetArgument(t_83, 4);
      s_83 :
      if(((ATermList) u_83 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_83), not_null(y_83));
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
  ATerm g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL;
  g_84 = t;
  f_84 :
  if(match_cons(g_84, sym__3))
    {
      h_84 = ATgetArgument(g_84, 0);
      i_84 = ATgetArgument(g_84, 1);
      j_84 = ATgetArgument(g_84, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(h_84), not_null(h_84), not_null(i_84), not_null(j_84), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm x_88 (ATerm), ATerm y_88 (ATerm))
{
  ATerm o_84 (ATerm t)
  {
    ATerm f_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_88(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = f_18;
        {
          t = y_88(t);
          t = o_84(t);
        }
      }
    return(t);
  }
  t = o_84(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm c_89 (ATerm))
{
  t = a_89(t);
  t = while_not_2(t, b_89, c_89);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm u_77 (ATerm), ATerm v_77 (ATerm), ATerm w_77 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, u_77, v_77, w_77);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, s_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm v_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, v_2);
    }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL;
    r_84 = t;
    q_84 :
    if(match_cons(r_84, sym__3))
      {
        s_84 = ATgetArgument(r_84, 0);
        t_84 = ATgetArgument(r_84, 1);
        u_84 = ATgetArgument(r_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(u_84)), not_null(t_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, t_2, u_2);
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
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
ATerm assert_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
  i_85 = t;
  h_85 :
  if(match_cons(i_85, sym__2))
    {
      j_85 = ATgetArgument(i_85, 0);
      k_85 = ATgetArgument(i_85, 1);
      {
        ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL;
        ATerm w_18;
        w_18 = t;
        {
          ATerm s_85 = NULL;
          ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
          t = f_77(t);
          {
            s_85 = t;
            {
              if(((n_85 != NULL) && (n_85 != s_85)))
                _fail(s_85);
              else
                n_85 = s_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(n_85), not_null(j_85), not_null(k_85));
                {
                  t = table_push_0(t);
                  {
                    ATerm y_18 = t;
                    int d_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_85), term_e_19);
                        t = table_get_0(t);
                        LocalPopChoice(d_19);
                      }
                    else
                      {
                        t = y_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      t_85 = t;
                      b_85 :
                      if(((ATgetType(t_85) == AT_LIST) && ((ATermList) t_85 != ATempty)))
                        {
                          u_85 = ATgetFirst((ATermList) t_85);
                          v_85 = (ATerm) ATgetNext((ATermList) t_85);
                          {
                            if(((o_85 != NULL) && (o_85 != u_85)))
                              _fail(u_85);
                            else
                              o_85 = u_85;
                            {
                              if(((p_85 != NULL) && (p_85 != v_85)))
                                _fail(v_85);
                              else
                                p_85 = v_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(n_85), term_e_19, (ATerm) ATinsert(CheckATermList(not_null(p_85)), (ATerm) ATinsert(CheckATermList(not_null(o_85)), not_null(j_85))));
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
        t = w_18;
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
  ATerm p_86 = NULL;
  ATerm r_86 = NULL;
  p_86 = t;
  {
    ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(p_86));
    {
      ATerm w_2 (ATerm t)
      {
        t = term_f_19;
        return(t);
      }
      t = rewrite_1(t, w_2);
      {
        s_86 = t;
        g_86 :
        if(match_cons(s_86, sym_Defined_2))
          {
            t_86 = ATgetArgument(s_86, 0);
            u_86 = ATgetArgument(s_86, 1);
            j_86 :
            if(match_string(t_86, "f_0"))
              {
                if(((r_86 != NULL) && (r_86 != u_86)))
                  _fail(u_86);
                else
                  r_86 = u_86;
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
    t = not_null(r_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL;
  z_86 = t;
  y_86 :
  if(((ATgetType(z_86) == AT_LIST) && ((ATermList) z_86 != ATempty)))
    {
      a_87 = ATgetFirst((ATermList) z_86);
      b_87 = (ATerm) ATgetNext((ATermList) z_86);
      t = not_null(a_87);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL;
  h_87 = t;
  g_87 :
  if(match_cons(h_87, sym__2))
    {
      i_87 = ATgetArgument(h_87, 0);
      j_87 = ATgetArgument(h_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_87), not_null(j_87));
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
ATerm rewrite_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm p_87 = NULL;
  ATerm r_87 = NULL;
  p_87 = t;
  {
    ATerm s_87 = NULL;
    t = term_r_15;
    {
      t = h_77(t);
      {
        s_87 = t;
        if(((r_87 != NULL) && (r_87 != s_87)))
          _fail(s_87);
        else
          r_87 = s_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_87), not_null(p_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL;
  a_88 = t;
  z_87 :
  if(match_cons(a_88, sym__2))
    {
      b_88 = ATgetArgument(a_88, 0);
      c_88 = ATgetArgument(a_88, 1);
      {
        ATerm f_88 = NULL,k_88 = NULL;
        ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(c_88), not_null(b_88));
        {
          ATerm x_2 (ATerm t)
          {
            t = term_h_19;
            return(t);
          }
          t = rewrite_1(t, x_2);
          {
            l_88 = t;
            x_87 :
            if(match_cons(l_88, sym_Defined_3))
              {
                m_88 = ATgetArgument(l_88, 0);
                n_88 = ATgetArgument(l_88, 1);
                o_88 = ATgetArgument(l_88, 2);
                y_87 :
                if(match_string(m_88, "e_0"))
                  {
                    if(((f_88 != NULL) && (f_88 != n_88)))
                      _fail(n_88);
                    else
                      f_88 = n_88;
                    if(((k_88 != NULL) && (k_88 != o_88)))
                      _fail(o_88);
                    else
                      k_88 = o_88;
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
        t = (ATerm) ATinsert(CheckATermList(not_null(k_88)), not_null(f_88));
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
  ATerm y_2 (ATerm t)
  {
    ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL;
    d_89 = t;
    w_88 :
    if(match_cons(d_89, sym_SDef_3))
      {
        e_89 = ATgetArgument(d_89, 0);
        f_89 = ATgetArgument(d_89, 1);
        g_89 = ATgetArgument(d_89, 2);
        {
          ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
          ATerm i_19;
          i_19 = t;
          {
            ATerm o_89 = NULL;
            t = not_null(f_89);
            {
              ATerm p_89 = NULL;
              t = length_0(t);
              {
                o_89 = t;
                {
                  if(((m_89 != NULL) && (m_89 != o_89)))
                    _fail(o_89);
                  else
                    m_89 = o_89;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_89), not_null(m_89));
                    {
                      ATerm q_89 = NULL,s_89 = NULL;
                      ATerm j_19 = t;
                      int p_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(p_19);
                        }
                      else
                        {
                          t = j_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        p_89 = t;
                        {
                          if(((l_89 != NULL) && (l_89 != p_89)))
                            _fail(p_89);
                          else
                            l_89 = p_89;
                          {
                            ATerm r_89 = NULL;
                            t = not_null(e_89);
                            {
                              ATerm r_19 = t;
                              int s_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(s_19);
                                }
                              else
                                {
                                  t = r_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                r_89 = t;
                                if(((q_89 != NULL) && (q_89 != r_89)))
                                  _fail(r_89);
                                else
                                  q_89 = r_89;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(m_89)), not_null(q_89));
                              {
                                t = union_0(t);
                                {
                                  s_89 = t;
                                  {
                                    if(((n_89 != NULL) && (n_89 != s_89)))
                                      _fail(s_89);
                                    else
                                      n_89 = s_89;
                                    {
                                      ATerm t_19;
                                      t_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(m_89), not_null(e_89)), (ATerm) ATmakeAppl(sym_Defined_3, term_u_19, not_null(d_89), not_null(l_89)));
                                        {
                                          ATerm z_2 (ATerm t)
                                          {
                                            t = term_h_19;
                                            return(t);
                                          }
                                          t = assert_1(t, z_2);
                                        }
                                      }
                                      t = t_19;
                                      {
                                        ATerm v_19;
                                        v_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(e_89)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_19, not_null(n_89)));
                                          {
                                            ATerm c_3 (ATerm t)
                                            {
                                              t = term_f_19;
                                              return(t);
                                            }
                                            t = assert_1(t, c_3);
                                          }
                                        }
                                        t = v_19;
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
          t = i_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, y_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    t = term_z_19;
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
ATerm HdMember_1 (ATerm t, ATerm b_86 (ATerm))
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL;
  b_90 = t;
  a_90 :
  if(((ATgetType(b_90) == AT_LIST) && ((ATermList) b_90 != ATempty)))
    {
      c_90 = ATgetFirst((ATermList) b_90);
      d_90 = (ATerm) ATgetNext((ATermList) b_90);
      {
        t = b_86(t);
        {
          ATerm f_3 (ATerm t)
          {
            ATerm g_90 = NULL;
            g_90 = t;
            if(((c_90 != NULL) && (c_90 != g_90)))
              _fail(g_90);
            else
              c_90 = g_90;
            return(t);
          }
          t = fetch_1(t, f_3);
        }
        t = not_null(d_90);
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
  ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL;
  l_90 = t;
  k_90 :
  if(match_cons(l_90, sym__2))
    {
      m_90 = ATgetArgument(l_90, 0);
      n_90 = ATgetArgument(l_90, 1);
      {
        t = not_null(m_90);
        {
          ATerm r_90 (ATerm t)
          {
            ATerm a_20 = t;
            int b_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(n_90);
                LocalPopChoice(b_20);
              }
            else
              {
                t = a_20;
                {
                  ATerm g_20 = t;
                  int h_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = not_null(n_90);
                        return(t);
                      }
                      t = HdMember_1(t, g_3);
                      t = r_90(t);
                      LocalPopChoice(h_20);
                    }
                  else
                    {
                      t = g_20;
                      t = Cons_2(t, _id, r_90);
                    }
                }
              }
            return(t);
          }
          t = r_90(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm g_85 (ATerm))
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_85(t);
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL;
        w_90 = t;
        v_90 :
        if(((ATgetType(w_90) == AT_LIST) && ((ATermList) w_90 != ATempty)))
          {
            x_90 = ATgetFirst((ATermList) w_90);
            y_90 = (ATerm) ATgetNext((ATermList) w_90);
            {
              ATerm g_91 = NULL,i_91 = NULL;
              ATerm k_20;
              k_20 = t;
              {
                ATerm h_91 = NULL;
                t = not_null(x_90);
                {
                  t = g_85(t);
                  {
                    h_91 = t;
                    if(((g_91 != NULL) && (g_91 != h_91)))
                      _fail(h_91);
                    else
                      g_91 = h_91;
                  }
                }
              }
              t = k_20;
              {
                ATerm j_91 = NULL;
                t = not_null(y_90);
                {
                  t = foldr_3(t, e_85, f_85, g_85);
                  {
                    j_91 = t;
                    if(((i_91 != NULL) && (i_91 != j_91)))
                      _fail(j_91);
                    else
                      i_91 = j_91;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_91), not_null(i_91));
                  t = f_85(t);
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
  ATerm h_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL;
    q_91 = t;
    p_91 :
    if(match_cons(q_91, sym_SDef_3))
      {
        r_91 = ATgetArgument(q_91, 0);
        s_91 = ATgetArgument(q_91, 1);
        t_91 = ATgetArgument(q_91, 2);
        {
          ATerm w_91 = NULL;
          ATerm x_91 = NULL;
          t = not_null(s_91);
          {
            t = length_0(t);
            {
              x_91 = t;
              if(((w_91 != NULL) && (w_91 != x_91)))
                _fail(x_91);
              else
                w_91 = x_91;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(r_91), not_null(w_91)));
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = foldr_3(t, h_3, union_0, i_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm c_92 = NULL,e_92 = NULL;
  ATerm l_20;
  l_20 = t;
  {
    ATerm d_92 = NULL;
    t = definition_names_0(t);
    {
      d_92 = t;
      if(((c_92 != NULL) && (c_92 != d_92)))
        _fail(d_92);
      else
        c_92 = d_92;
    }
  }
  t = l_20;
  {
    ATerm f_92 = NULL;
    t = sort_defs_0(t);
    {
      f_92 = t;
      if(((e_92 != NULL) && (e_92 != f_92)))
        _fail(f_92);
      else
        e_92 = f_92;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(c_92), not_null(e_92), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm i_74 (ATerm))
{
  ATerm n_92 = NULL,o_92 = NULL;
  n_92 = t;
  m_92 :
  if(match_cons(n_92, sym_Strategies_1))
    {
      o_92 = ATgetArgument(n_92, 0);
      {
        ATerm r_92 = NULL,t_92 = NULL;
        ATerm s_92 = NULL;
        t = SSLgetAnnotations(not_null(n_92));
        {
          s_92 = t;
          if(((r_92 != NULL) && (r_92 != s_92)))
            _fail(s_92);
          else
            r_92 = s_92;
        }
        {
          t = not_null(o_92);
          {
            ATerm v_92 = NULL;
            t = i_74(t);
            {
              t_92 = t;
              {
                ATerm w_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(t_92)), not_null(r_92));
                {
                  w_92 = t;
                  if(((v_92 != NULL) && (v_92 != w_92)))
                    _fail(w_92);
                  else
                    v_92 = w_92;
                }
                t = not_null(v_92);
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
ATerm Cons_2 (ATerm t, ATerm r_76 (ATerm), ATerm s_76 (ATerm))
{
  ATerm i_93 = NULL,j_93 = NULL,q_93 = NULL;
  i_93 = t;
  h_93 :
  if(((ATgetType(i_93) == AT_LIST) && ((ATermList) i_93 != ATempty)))
    {
      j_93 = ATgetFirst((ATermList) i_93);
      q_93 = (ATerm) ATgetNext((ATermList) i_93);
      {
        ATerm w_93 = NULL,y_93 = NULL;
        ATerm x_93 = NULL;
        t = SSLgetAnnotations(not_null(i_93));
        {
          x_93 = t;
          if(((w_93 != NULL) && (w_93 != x_93)))
            _fail(x_93);
          else
            w_93 = x_93;
        }
        {
          t = not_null(j_93);
          {
            ATerm a_94 = NULL;
            t = r_76(t);
            {
              y_93 = t;
              {
                t = not_null(q_93);
                {
                  ATerm c_94 = NULL;
                  t = s_76(t);
                  {
                    a_94 = t;
                    {
                      ATerm d_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_94)), not_null(y_93)), not_null(w_93));
                      {
                        d_94 = t;
                        if(((c_94 != NULL) && (c_94 != d_94)))
                          _fail(d_94);
                        else
                          c_94 = d_94;
                      }
                      t = not_null(c_94);
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
ATerm Specification_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm o_94 = NULL,p_94 = NULL;
  o_94 = t;
  n_94 :
  if(match_cons(o_94, sym_Specification_1))
    {
      p_94 = ATgetArgument(o_94, 0);
      {
        ATerm s_94 = NULL,u_94 = NULL;
        ATerm t_94 = NULL;
        t = SSLgetAnnotations(not_null(o_94));
        {
          t_94 = t;
          if(((s_94 != NULL) && (s_94 != t_94)))
            _fail(t_94);
          else
            s_94 = t_94;
        }
        {
          t = not_null(p_94);
          {
            ATerm w_94 = NULL;
            t = k_74(t);
            {
              u_94 = t;
              {
                ATerm z_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(u_94)), not_null(s_94));
                {
                  z_94 = t;
                  if(((w_94 != NULL) && (w_94 != z_94)))
                    _fail(z_94);
                  else
                    w_94 = z_94;
                }
                t = not_null(w_94);
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
ATerm _2 (ATerm t, ATerm r_65 (ATerm), ATerm s_65 (ATerm))
{
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL;
  k_95 = t;
  j_95 :
  if(match_cons(k_95, sym__2))
    {
      l_95 = ATgetArgument(k_95, 0);
      m_95 = ATgetArgument(k_95, 1);
      {
        ATerm t_95 = NULL,v_95 = NULL;
        ATerm u_95 = NULL;
        t = SSLgetAnnotations(not_null(k_95));
        {
          u_95 = t;
          if(((t_95 != NULL) && (t_95 != u_95)))
            _fail(u_95);
          else
            t_95 = u_95;
        }
        {
          t = not_null(l_95);
          {
            ATerm x_95 = NULL;
            t = r_65(t);
            {
              v_95 = t;
              {
                t = not_null(m_95);
                {
                  ATerm z_95 = NULL;
                  t = s_65(t);
                  {
                    x_95 = t;
                    {
                      ATerm a_96 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_95), not_null(x_95)), not_null(t_95));
                      {
                        a_96 = t;
                        if(((z_95 != NULL) && (z_95 != a_96)))
                          _fail(a_96);
                        else
                          z_95 = a_96;
                      }
                      t = not_null(z_95);
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
  ATerm j_96 = NULL;
  ATerm m_20;
  m_20 = t;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm k_96 = NULL,l_96 = NULL;
      k_96 = t;
      i_96 :
      if(match_cons(k_96, sym_Program_1))
        {
          l_96 = ATgetArgument(k_96, 0);
          if(((j_96 != NULL) && (j_96 != l_96)))
            _fail(l_96);
          else
            j_96 = l_96;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_20), not_null(j_96)), term_n_20));
      {
        t = printnl_0(t);
        {
          t = term_v_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL;
  p_96 = t;
  o_96 :
  if(match_cons(p_96, sym__2))
    {
      q_96 = ATgetArgument(p_96, 0);
      r_96 = ATgetArgument(p_96, 1);
      {
        ATerm t_20;
        t_20 = t;
        t = SSL_printnl(not_null(q_96), not_null(r_96));
        t = t_20;
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
  ATerm x_96 = NULL,y_96 = NULL,z_96 = NULL;
  x_96 = t;
  w_96 :
  if(match_cons(x_96, sym__2))
    {
      y_96 = ATgetArgument(x_96, 0);
      z_96 = ATgetArgument(x_96, 1);
      {
        t = not_null(y_96);
        {
          ATerm k_3 (ATerm t)
          {
            t = not_null(z_96);
            return(t);
          }
          t = at_end_1(t, k_3);
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
ATerm debug_1 (ATerm t, ATerm e_83 (ATerm))
{
  ATerm u_20;
  u_20 = t;
  {
    ATerm f_97 = NULL,h_97 = NULL;
    ATerm y_20;
    y_20 = t;
    {
      ATerm g_97 = NULL;
      t = e_83(t);
      {
        g_97 = t;
        if(((f_97 != NULL) && (f_97 != g_97)))
          _fail(g_97);
        else
          f_97 = g_97;
      }
    }
    t = y_20;
    {
      ATerm i_97 = NULL;
      i_97 = t;
      if(((h_97 != NULL) && (h_97 != i_97)))
        _fail(i_97);
      else
        h_97 = i_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_97)), not_null(f_97)));
        t = printnl_0(t);
      }
    }
  }
  t = u_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_97 = NULL;
  m_97 = t;
  t = SSL_is_string(not_null(m_97));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = a_21;
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_3);
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            {
              ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL;
              x_97 = t;
              w_97 :
              if(match_cons(x_97, sym_Path_1))
                {
                  y_97 = ATgetArgument(x_97, 0);
                  t = not_null(y_97);
                }
              else
                {
                  if(match_cons(x_97, sym_Var_1))
                    {
                      y_97 = ATgetArgument(x_97, 0);
                      {
                        t = not_null(y_97);
                        {
                          ATerm g_21 = t;
                          int h_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_21);
                            }
                          else
                            {
                              t = g_21;
                              {
                                ATerm m_3 (ATerm t)
                                {
                                  t = term_i_21;
                                  return(t);
                                }
                                t = debug_1(t, m_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_97, sym_Prefix_2))
                        {
                          y_97 = ATgetArgument(x_97, 0);
                          z_97 = ATgetArgument(x_97, 1);
                          {
                            ATerm e_98 = NULL,g_98 = NULL;
                            ATerm j_21;
                            j_21 = t;
                            {
                              ATerm f_98 = NULL;
                              t = not_null(y_97);
                              {
                                t = eval_config_0(t);
                                {
                                  f_98 = t;
                                  if(((e_98 != NULL) && (e_98 != f_98)))
                                    _fail(f_98);
                                  else
                                    e_98 = f_98;
                                }
                              }
                            }
                            t = j_21;
                            {
                              ATerm h_98 = NULL;
                              t = not_null(z_97);
                              {
                                t = eval_config_0(t);
                                {
                                  h_98 = t;
                                  if(((g_98 != NULL) && (g_98 != h_98)))
                                    _fail(h_98);
                                  else
                                    g_98 = h_98;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_98), not_null(g_98));
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
  ATerm r_98 = NULL;
  r_98 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_21, not_null(r_98));
    {
      t = table_get_0(t);
      {
        ATerm n_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_21;
            m_21 = t;
            {
              ATerm t_98 = NULL;
              ATerm u_98 = NULL;
              u_98 = t;
              if(((t_98 != NULL) && (t_98 != u_98)))
                _fail(u_98);
              else
                t_98 = u_98;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_k_21, not_null(r_98), not_null(t_98));
                t = table_put_0(t);
              }
            }
            t = m_21;
          }
          return(t);
        }
        t = try_1(t, n_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm n_21;
    n_21 = t;
    {
      ATerm y_98 = NULL;
      ATerm z_98 = NULL;
      t = term_o_21;
      {
        t = get_config_0(t);
        {
          z_98 = t;
          if(((y_98 != NULL) && (y_98 != z_98)))
            _fail(z_98);
          else
            y_98 = z_98;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_98), term_q_21);
        t = geq_0(t);
      }
    }
    t = n_21;
    t = o_80(t);
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_s_21));
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
  ATerm c_99 = NULL;
  c_99 = t;
  t = SSL_TicksToSeconds(not_null(c_99));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_99 = NULL,n_99 = NULL,o_99 = NULL;
  h_99 = t;
  g_99 :
  if(match_cons(h_99, sym__2))
    {
      n_99 = ATgetArgument(h_99, 0);
      o_99 = ATgetArgument(h_99, 1);
      {
        ATerm t_21 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(n_99), not_null(o_99));
            LocalPopChoice(c_22);
          }
        else
          {
            t = t_21;
            t = SSL_addr(not_null(n_99), not_null(o_99));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_85 (ATerm), ATerm d_85 (ATerm))
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_85(t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL;
        v_99 = t;
        u_99 :
        if(((ATgetType(v_99) == AT_LIST) && ((ATermList) v_99 != ATempty)))
          {
            w_99 = ATgetFirst((ATermList) v_99);
            x_99 = (ATerm) ATgetNext((ATermList) v_99);
            {
              ATerm a_100 = NULL;
              ATerm b_100 = NULL;
              t = not_null(x_99);
              {
                t = foldr_2(t, c_85, d_85);
                {
                  b_100 = t;
                  if(((a_100 != NULL) && (a_100 != b_100)))
                    _fail(b_100);
                  else
                    a_100 = b_100;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_99), not_null(a_100));
                t = d_85(t);
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
ATerm crush_2 (ATerm t, ATerm k_86 (ATerm), ATerm l_86 (ATerm))
{
  ATerm l_100 = NULL;
  ATerm n_100 = NULL;
  l_100 = t;
  {
    ATerm o_100 = NULL;
    ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL;
    t = not_null(l_100);
    {
      o_100 = t;
      {
        t = SSL_explode_term(not_null(o_100));
        {
          q_100 = t;
          k_100 :
          if(match_cons(q_100, sym__2))
            {
              r_100 = ATgetArgument(q_100, 0);
              s_100 = ATgetArgument(q_100, 1);
              if(((n_100 != NULL) && (n_100 != s_100)))
                _fail(s_100);
              else
                n_100 = s_100;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_100);
      t = foldr_2(t, k_86, l_86);
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
    ATerm p_3 (ATerm t)
    {
      t = term_z_19;
      return(t);
    }
    t = crush_2(t, p_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_100 = NULL,z_100 = NULL,a_101 = NULL;
  y_100 = t;
  x_100 :
  if(match_cons(y_100, sym__2))
    {
      z_100 = ATgetArgument(y_100, 0);
      a_101 = ATgetArgument(y_100, 1);
      {
        ATerm f_22;
        f_22 = t;
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_100), not_null(a_101));
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              t = SSL_gtr(not_null(z_100), not_null(a_101));
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
ATerm geq_0 (ATerm t)
{
  ATerm i_101 = NULL;
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_101 = NULL,k_101 = NULL,n_101 = NULL;
      j_101 = t;
      h_101 :
      if(match_cons(j_101, sym__2))
        {
          k_101 = ATgetArgument(j_101, 0);
          n_101 = ATgetArgument(j_101, 1);
          {
            if(((i_101 != NULL) && (i_101 != k_101)))
              _fail(k_101);
            else
              i_101 = k_101;
            if(((i_101 != NULL) && (i_101 != n_101)))
              _fail(n_101);
            else
              i_101 = n_101;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm a_23;
    a_23 = t;
    {
      ATerm q_101 = NULL;
      ATerm t_101 = NULL;
      t = term_o_21;
      {
        t = get_config_0(t);
        {
          t_101 = t;
          if(((q_101 != NULL) && (q_101 != t_101)))
            _fail(t_101);
          else
            q_101 = t_101;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_101), term_v_6);
        t = geq_0(t);
      }
    }
    t = a_23;
    t = n_80(t);
    return(t);
  }
  t = try_1(t, q_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm x_101 = NULL,z_101 = NULL;
    ATerm f_23;
    f_23 = t;
    {
      ATerm y_101 = NULL;
      t = run_time_0(t);
      {
        y_101 = t;
        if(((x_101 != NULL) && (x_101 != y_101)))
          _fail(y_101);
        else
          x_101 = y_101;
      }
    }
    t = f_23;
    {
      ATerm a_102 = NULL;
      t = term_g_23;
      {
        t = get_config_0(t);
        {
          a_102 = t;
          if(((z_101 != NULL) && (z_101 != a_102)))
            _fail(a_102);
          else
            z_101 = a_102;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_23), not_null(x_101)), term_h_23), not_null(z_101)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_3);
  {
    t = term_z_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL;
  f_102 = t;
  e_102 :
  if(match_cons(f_102, sym__2))
    {
      g_102 = ATgetArgument(f_102, 0);
      h_102 = ATgetArgument(f_102, 1);
      t = SSL_WriteToTextFile(not_null(g_102), not_null(h_102));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm n_102 = NULL,o_102 = NULL,p_102 = NULL;
  n_102 = t;
  m_102 :
  if(match_cons(n_102, sym__2))
    {
      o_102 = ATgetArgument(n_102, 0);
      p_102 = ATgetArgument(n_102, 1);
      t = SSL_WriteToBinaryFile(not_null(o_102), not_null(p_102));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_102 = NULL;
  ATerm j_23;
  j_23 = t;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm k_23 = t;
      int l_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_3 (ATerm t)
          {
            ATerm z_102 = NULL,a_103 = NULL;
            z_102 = t;
            v_102 :
            if(match_cons(z_102, sym_Output_1))
              {
                a_103 = ATgetArgument(z_102, 0);
                if(((y_102 != NULL) && (y_102 != a_103)))
                  _fail(a_103);
                else
                  y_102 = a_103;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_3);
          LocalPopChoice(l_23);
        }
      else
        {
          t = k_23;
          {
            ATerm b_103 = NULL;
            t = term_m_23;
            {
              b_103 = t;
              if(((y_102 != NULL) && (y_102 != b_103)))
                _fail(b_103);
              else
                y_102 = b_103;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_3, _id);
  }
  t = j_23;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm v_3 (ATerm t)
      {
        t = not_null(y_102);
        return(t);
      }
      t = split_2(t, v_3, _id);
      return(t);
    }
    t = _2(t, _id, u_3);
    {
      ATerm n_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_3 (ATerm t)
          {
            ATerm x_3 (ATerm t)
            {
              ATerm c_103 = NULL;
              c_103 = t;
              x_102 :
              if(!(match_cons(c_103, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, x_3);
            return(t);
          }
          t = _2(t, w_3, WriteToBinaryFile_0);
          LocalPopChoice(o_23);
        }
      else
        {
          t = n_23;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_82 (ATerm))
{
  ATerm k_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL;
  ATerm u_23;
  u_23 = t;
  t = dtime_0(t);
  t = u_23;
  {
    t = o_82(t);
    {
      ATerm v_23;
      v_23 = t;
      {
        ATerm l_103 = NULL;
        t = dtime_0(t);
        {
          l_103 = t;
          if(((k_103 != NULL) && (k_103 != l_103)))
            _fail(l_103);
          else
            k_103 = l_103;
        }
      }
      t = v_23;
      {
        m_103 = t;
        j_103 :
        if(match_cons(m_103, sym__2))
          {
            n_103 = ATgetArgument(m_103, 0);
            o_103 = ATgetArgument(m_103, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_103)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_103))), not_null(o_103));
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
  ATerm u_103 = NULL;
  u_103 = t;
  t = SSL_ReadFromFile(not_null(u_103));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_94 (ATerm), ATerm y_94 (ATerm))
{
  ATerm z_103 = NULL,b_104 = NULL;
  ATerm w_23;
  w_23 = t;
  {
    ATerm a_104 = NULL;
    t = x_94(t);
    {
      a_104 = t;
      if(((z_103 != NULL) && (z_103 != a_104)))
        _fail(a_104);
      else
        z_103 = a_104;
    }
  }
  t = w_23;
  {
    ATerm c_104 = NULL;
    t = y_94(t);
    {
      c_104 = t;
      if(((b_104 != NULL) && (b_104 != c_104)))
        _fail(c_104);
      else
        b_104 = c_104;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_103), not_null(b_104));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_104 = NULL;
  ATerm x_23;
  x_23 = t;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          ATerm j_104 = NULL,k_104 = NULL;
          j_104 = t;
          g_104 :
          if(match_cons(j_104, sym_Input_1))
            {
              k_104 = ATgetArgument(j_104, 0);
              if(((i_104 != NULL) && (i_104 != k_104)))
                _fail(k_104);
              else
                i_104 = k_104;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_3);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          ATerm l_104 = NULL;
          t = term_h_24;
          {
            l_104 = t;
            if(((i_104 != NULL) && (i_104 != l_104)))
              _fail(l_104);
            else
              i_104 = l_104;
          }
        }
      }
  }
  t = x_23;
  {
    ATerm z_3 (ATerm t)
    {
      t = not_null(i_104);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_104 = NULL;
  s_104 = t;
  r_104 :
  if(match_cons(s_104, sym_Version_0))
    {
      ATerm u_104 = NULL,w_104 = NULL;
      ATerm k_24;
      k_24 = t;
      {
        ATerm v_104 = NULL;
        t = SSLgetAnnotations(not_null(s_104));
        {
          v_104 = t;
          if(((u_104 != NULL) && (u_104 != v_104)))
            _fail(v_104);
          else
            u_104 = v_104;
        }
      }
      t = k_24;
      {
        ATerm x_104 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_104));
        {
          x_104 = t;
          if(((w_104 != NULL) && (w_104 != x_104)))
            _fail(x_104);
          else
            w_104 = x_104;
        }
        t = not_null(w_104);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_4);
  t = m_82(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_105 = NULL;
  c_105 = t;
  t = SSL_table_create(not_null(c_105));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_105 = NULL;
  g_105 = t;
  {
    ATerm p_24;
    p_24 = t;
    {
      t = term_q_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_24, term_r_24, not_null(g_105));
          t = table_put_0(t);
        }
      }
    }
    t = p_24;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_105 = NULL;
  k_105 = t;
  t = SSL_string_to_int(not_null(k_105));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm s_105 = NULL,t_105 = NULL,u_105 = NULL,v_105 = NULL,w_105 = NULL;
  s_105 = t;
  q_105 :
  if(match_string(s_105, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(s_105) == AT_LIST) && ((ATermList) s_105 != ATempty)))
        {
          t_105 = ATgetFirst((ATermList) s_105);
          u_105 = (ATerm) ATgetNext((ATermList) s_105);
          r_105 :
          if(((ATgetType(u_105) == AT_LIST) && ((ATermList) u_105 != ATempty)))
            {
              v_105 = ATgetFirst((ATermList) u_105);
              w_105 = (ATerm) ATgetNext((ATermList) u_105);
              {
                ATerm a_106 = NULL;
                ATerm s_24;
                s_24 = t;
                {
                  t = not_null(t_105);
                  t = l_0(t);
                }
                t = s_24;
                {
                  ATerm b_106 = NULL;
                  t = not_null(v_105);
                  {
                    t = m_0(t);
                    {
                      b_106 = t;
                      if(((a_106 != NULL) && (a_106 != b_106)))
                        _fail(b_106);
                      else
                        a_106 = b_106;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_105)), not_null(a_106));
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
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        ATerm s_106 = NULL;
        s_106 = t;
        f_106 :
        if(!(match_string(s_106, "-i")))
          {
            if(!(match_string(s_106, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        ATerm v_106 = NULL;
        ATerm w_24;
        w_24 = t;
        {
          ATerm t_106 = NULL;
          ATerm u_106 = NULL;
          u_106 = t;
          if(((t_106 != NULL) && (t_106 != u_106)))
            _fail(u_106);
          else
            t_106 = u_106;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_24, not_null(t_106));
            t = set_config_0(t);
          }
        }
        t = w_24;
        {
          ATerm w_106 = NULL;
          w_106 = t;
          if(((v_106 != NULL) && (v_106 != w_106)))
            _fail(w_106);
          else
            v_106 = w_106;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_106));
        }
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = term_y_24;
        return(t);
      }
      t = ArgOption_3(t, b_4, c_4, g_4);
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm z_24 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 (ATerm t)
            {
              ATerm x_106 = NULL;
              x_106 = t;
              i_106 :
              if(!(match_string(x_106, "-o")))
                {
                  if(!(match_string(x_106, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              ATerm a_107 = NULL;
              ATerm g_25;
              g_25 = t;
              {
                ATerm y_106 = NULL;
                ATerm z_106 = NULL;
                z_106 = t;
                if(((y_106 != NULL) && (y_106 != z_106)))
                  _fail(z_106);
                else
                  y_106 = z_106;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_25, not_null(y_106));
                  t = set_config_0(t);
                }
              }
              t = g_25;
              {
                ATerm b_107 = NULL;
                b_107 = t;
                if(((a_107 != NULL) && (a_107 != b_107)))
                  _fail(b_107);
                else
                  a_107 = b_107;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_107));
              }
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              t = term_q_25;
              return(t);
            }
            t = ArgOption_3(t, h_4, i_4, j_4);
            LocalPopChoice(b_25);
          }
        else
          {
            t = z_24;
            {
              ATerm a_26 = t;
              int c_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_4 (ATerm t)
                  {
                    ATerm c_107 = NULL;
                    c_107 = t;
                    l_106 :
                    if(!(match_string(c_107, "-S")))
                      {
                        if(!(match_string(c_107, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm l_4 (ATerm t)
                  {
                    t = term_d_26;
                    t = set_config_0(t);
                    t = term_e_26;
                    return(t);
                  }
                  ATerm m_4 (ATerm t)
                  {
                    t = term_f_26;
                    return(t);
                  }
                  t = Option_3(t, k_4, l_4, m_4);
                  LocalPopChoice(c_26);
                }
              else
                {
                  t = a_26;
                  {
                    ATerm g_26 = t;
                    int k_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_4 (ATerm t)
                        {
                          ATerm d_107 = NULL;
                          d_107 = t;
                          m_106 :
                          if(!(match_string(d_107, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm o_4 (ATerm t)
                        {
                          ATerm g_107 = NULL;
                          ATerm o_26;
                          o_26 = t;
                          {
                            ATerm e_107 = NULL;
                            ATerm f_107 = NULL;
                            t = string_to_int_0(t);
                            {
                              f_107 = t;
                              if(((e_107 != NULL) && (e_107 != f_107)))
                                _fail(f_107);
                              else
                                e_107 = f_107;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_o_21, not_null(e_107));
                              t = set_config_0(t);
                            }
                          }
                          t = o_26;
                          {
                            ATerm h_107 = NULL;
                            h_107 = t;
                            if(((g_107 != NULL) && (g_107 != h_107)))
                              _fail(h_107);
                            else
                              g_107 = h_107;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_107));
                          }
                          return(t);
                        }
                        ATerm p_4 (ATerm t)
                        {
                          t = term_p_26;
                          return(t);
                        }
                        t = ArgOption_3(t, n_4, o_4, p_4);
                        LocalPopChoice(k_26);
                      }
                    else
                      {
                        t = g_26;
                        {
                          ATerm q_26 = t;
                          int v_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_4 (ATerm t)
                              {
                                ATerm i_107 = NULL;
                                i_107 = t;
                                p_106 :
                                if(!(match_string(i_107, "-v")))
                                  {
                                    if(!(match_string(i_107, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm r_4 (ATerm t)
                              {
                                t = term_x_26;
                                t = set_config_0(t);
                                t = term_y_26;
                                return(t);
                              }
                              ATerm s_4 (ATerm t)
                              {
                                t = term_z_26;
                                return(t);
                              }
                              t = Option_3(t, q_4, r_4, s_4);
                              LocalPopChoice(v_26);
                            }
                          else
                            {
                              t = q_26;
                              {
                                ATerm a_27 = t;
                                int b_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_4 (ATerm t)
                                    {
                                      ATerm j_107 = NULL;
                                      j_107 = t;
                                      q_106 :
                                      if(!(match_string(j_107, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm u_4 (ATerm t)
                                    {
                                      t = term_d_27;
                                      t = set_config_0(t);
                                      t = term_e_27;
                                      return(t);
                                    }
                                    ATerm v_4 (ATerm t)
                                    {
                                      t = term_f_27;
                                      return(t);
                                    }
                                    t = Option_3(t, t_4, u_4, v_4);
                                    LocalPopChoice(b_27);
                                  }
                                else
                                  {
                                    t = a_27;
                                    {
                                      ATerm w_4 (ATerm t)
                                      {
                                        ATerm k_107 = NULL;
                                        k_107 = t;
                                        r_106 :
                                        if(!(match_string(k_107, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm x_4 (ATerm t)
                                      {
                                        t = term_h_27;
                                        t = set_config_0(t);
                                        t = term_i_27;
                                        return(t);
                                      }
                                      ATerm y_4 (ATerm t)
                                      {
                                        t = term_j_27;
                                        return(t);
                                      }
                                      t = Option_3(t, w_4, x_4, y_4);
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
  ATerm s_107 = NULL;
  s_107 = t;
  t = SSL_table_destroy(not_null(s_107));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_107 = NULL;
  w_107 = t;
  t = SSL_exit(not_null(w_107));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm a_108 = NULL;
  a_108 = t;
  t = SSL_implode_string(not_null(a_108));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_101 (ATerm))
{
  ATerm d_108 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_108);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        {
          t = Nil_0(t);
          t = r_101(t);
        }
      }
    return(t);
  }
  t = d_108(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm g_108 = NULL,h_108 = NULL,i_108 = NULL;
        g_108 = t;
        f_108 :
        if(((ATgetType(g_108) == AT_LIST) && ((ATermList) g_108 != ATempty)))
          {
            h_108 = ATgetFirst((ATermList) g_108);
            i_108 = (ATerm) ATgetNext((ATermList) g_108);
            {
              t = not_null(h_108);
              {
                ATerm z_4 (ATerm t)
                {
                  t = not_null(i_108);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_4);
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
  ATerm o_108 = NULL;
  o_108 = t;
  t = SSL_explode_string(not_null(o_108));
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
ATerm long_description_1 (ATerm t, ATerm n_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_101 (ATerm))
{
  ATerm r_108 (ATerm t)
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = Cons_2(t, d_101, r_108);
      }
    return(t);
  }
  t = r_108(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL;
  a_109 = t;
  x_108 :
  if(((ATgetType(a_109) == AT_LIST) && ((ATermList) a_109 != ATempty)))
    {
      y_108 = ATgetFirst((ATermList) a_109);
      z_108 = (ATerm) ATgetNext((ATermList) a_109);
      {
        ATerm d_109 = NULL;
        t = not_null(z_108);
        {
          ATerm q_27;
          q_27 = t;
          {
            ATerm e_109 = NULL,g_109 = NULL,i_109 = NULL;
            ATerm r_27;
            r_27 = t;
            {
              ATerm f_109 = NULL;
              t = k_0(t);
              {
                f_109 = t;
                if(((e_109 != NULL) && (e_109 != f_109)))
                  _fail(f_109);
                else
                  e_109 = f_109;
              }
            }
            t = r_27;
            {
              ATerm h_109 = NULL;
              t = not_null(y_108);
              {
                t = j_0(t);
                {
                  h_109 = t;
                  if(((g_109 != NULL) && (g_109 != h_109)))
                    _fail(h_109);
                  else
                    g_109 = h_109;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_109)), not_null(g_109));
                {
                  i_109 = t;
                  if(((d_109 != NULL) && (d_109 != i_109)))
                    _fail(i_109);
                  else
                    d_109 = i_109;
                }
              }
            }
          }
          t = q_27;
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(d_109);
              return(t);
            }
            t = reverse_acc_2(t, j_0, a_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) a_109 == ATempty))
        {
          {
            t = term_r_15;
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
  ATerm b_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_71 (ATerm))
{
  ATerm u_109 = NULL,v_109 = NULL;
  u_109 = t;
  s_109 :
  if(match_cons(u_109, sym_Program_1))
    {
      v_109 = ATgetArgument(u_109, 0);
      {
        ATerm y_109 = NULL,a_110 = NULL;
        ATerm z_109 = NULL;
        t = SSLgetAnnotations(not_null(u_109));
        {
          z_109 = t;
          if(((y_109 != NULL) && (y_109 != z_109)))
            _fail(z_109);
          else
            y_109 = z_109;
        }
        {
          t = not_null(v_109);
          {
            ATerm c_110 = NULL;
            t = g_71(t);
            {
              a_110 = t;
              {
                ATerm d_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_110)), not_null(y_109));
                {
                  d_110 = t;
                  if(((c_110 != NULL) && (c_110 != d_110)))
                    _fail(d_110);
                  else
                    c_110 = d_110;
                }
                t = not_null(c_110);
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
  ATerm m_110 = NULL;
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      ATerm n_110 = NULL;
      n_110 = t;
      if(((m_110 != NULL) && (m_110 != n_110)))
        _fail(n_110);
      else
        m_110 = n_110;
      return(t);
    }
    t = Program_1(t, d_5);
    return(t);
  }
  t = option_defined_1(t, c_5);
  {
    ATerm e_5 (ATerm t)
    {
      ATerm o_110 = NULL;
      ATerm p_110 = NULL;
      t = term_r_15;
      {
        ATerm f_5 (ATerm t)
        {
          t = not_null(m_110);
          return(t);
        }
        t = short_description_1(t, f_5);
        {
          t = concat_strings_0(t);
          {
            p_110 = t;
            if(((o_110 != NULL) && (o_110 != p_110)))
              _fail(p_110);
            else
              o_110 = p_110;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(o_110)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_s_27));
      {
        t = printnl_0(t);
        {
          t = term_v_27;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm q_110 = NULL;
                  q_110 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_110)), term_w_27));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  ATerm i_5 (ATerm t)
                  {
                    ATerm s_110 = NULL;
                    ATerm t_110 = NULL;
                    t = term_r_15;
                    {
                      ATerm j_5 (ATerm t)
                      {
                        t = not_null(m_110);
                        return(t);
                      }
                      t = long_description_1(t, j_5);
                      {
                        t = concat_strings_0(t);
                        {
                          t_110 = t;
                          if(((s_110 != NULL) && (s_110 != t_110)))
                            _fail(t_110);
                          else
                            s_110 = t_110;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_110)), term_x_27));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, i_5);
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
ATerm Undefined_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm d_111 = NULL,e_111 = NULL;
  d_111 = t;
  c_111 :
  if(match_cons(d_111, sym_Undefined_1))
    {
      e_111 = ATgetArgument(d_111, 0);
      {
        ATerm h_111 = NULL,j_111 = NULL;
        ATerm i_111 = NULL;
        t = SSLgetAnnotations(not_null(d_111));
        {
          i_111 = t;
          if(((h_111 != NULL) && (h_111 != i_111)))
            _fail(i_111);
          else
            h_111 = i_111;
        }
        {
          t = not_null(e_111);
          {
            ATerm l_111 = NULL;
            t = h_71(t);
            {
              j_111 = t;
              {
                ATerm m_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_111)), not_null(h_111));
                {
                  m_111 = t;
                  if(((l_111 != NULL) && (l_111 != m_111)))
                    _fail(m_111);
                  else
                    l_111 = m_111;
                }
                t = not_null(l_111);
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
ATerm fetch_1 (ATerm t, ATerm l_101 (ATerm))
{
  ATerm r_111 (ATerm t)
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_101, _id);
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = Cons_2(t, _id, r_111);
      }
    return(t);
  }
  t = r_111(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_80 (ATerm))
{
  t = fetch_1(t, l_80);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_111 = NULL;
  w_111 = t;
  v_111 :
  if(match_cons(w_111, sym_Help_0))
    {
      ATerm y_111 = NULL,a_112 = NULL;
      ATerm a_28;
      a_28 = t;
      {
        ATerm z_111 = NULL;
        t = SSLgetAnnotations(not_null(w_111));
        {
          z_111 = t;
          if(((y_111 != NULL) && (y_111 != z_111)))
            _fail(z_111);
          else
            y_111 = z_111;
        }
      }
      t = a_28;
      {
        ATerm b_112 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_111));
        {
          b_112 = t;
          if(((a_112 != NULL) && (a_112 != b_112)))
            _fail(b_112);
          else
            a_112 = b_112;
        }
        t = not_null(a_112);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_95 (ATerm))
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_95(t);
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_112 = NULL,i_112 = NULL,j_112 = NULL;
  h_112 = t;
  g_112 :
  if(match_cons(h_112, sym__2))
    {
      i_112 = ATgetArgument(h_112, 0);
      j_112 = ATgetArgument(h_112, 1);
      t = SSL_table_get(not_null(i_112), not_null(j_112));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_112 = NULL,r_112 = NULL,s_112 = NULL,t_112 = NULL;
  q_112 = t;
  p_112 :
  if(match_cons(q_112, sym__3))
    {
      r_112 = ATgetArgument(q_112, 0);
      s_112 = ATgetArgument(q_112, 1);
      t_112 = ATgetArgument(q_112, 2);
      {
        ATerm d_28;
        d_28 = t;
        {
          ATerm x_112 = NULL;
          ATerm y_112 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_112), not_null(s_112));
          {
            ATerm e_28 = t;
            int f_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_28);
              }
            else
              {
                t = e_28;
                t = (ATerm) ATempty;
              }
            {
              y_112 = t;
              if(((x_112 != NULL) && (x_112 != y_112)))
                _fail(y_112);
              else
                x_112 = y_112;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_112), not_null(s_112), (ATerm) ATinsert(CheckATermList(not_null(x_112)), not_null(t_112)));
            t = table_put_0(t);
          }
        }
        t = d_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm c_113 = NULL;
  ATerm d_113 = NULL;
  t = term_r_15;
  {
    t = r_79(t);
    {
      d_113 = t;
      if(((c_113 != NULL) && (c_113 != d_113)))
        _fail(d_113);
      else
        c_113 = d_113;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, not_null(c_113));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL;
  j_113 = t;
  i_113 :
  if(match_string(j_113, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(j_113) == AT_LIST) && ((ATermList) j_113 != ATempty)))
        {
          k_113 = ATgetFirst((ATermList) j_113);
          l_113 = (ATerm) ATgetNext((ATermList) j_113);
          {
            ATerm o_113 = NULL;
            ATerm g_28;
            g_28 = t;
            {
              t = not_null(k_113);
              t = a_0(t);
            }
            t = g_28;
            {
              ATerm p_113 = NULL;
              t = term_r_15;
              {
                t = b_0(t);
                {
                  p_113 = t;
                  if(((o_113 != NULL) && (o_113 != p_113)))
                    _fail(p_113);
                  else
                    o_113 = p_113;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_113)), not_null(o_113));
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
    ATerm u_113 = NULL;
    u_113 = t;
    t_113 :
    if(!(match_string(u_113, "--help")))
      {
        if(!(match_string(u_113, "-h")))
          {
            if(!(match_string(u_113, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_h_28;
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  t = Option_3(t, k_5, l_5, m_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_113 = NULL,y_113 = NULL,z_113 = NULL;
  x_113 = t;
  w_113 :
  if(((ATgetType(x_113) == AT_LIST) && ((ATermList) x_113 != ATempty)))
    {
      y_113 = ATgetFirst((ATermList) x_113);
      z_113 = (ATerm) ATgetNext((ATermList) x_113);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_113)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_113)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm f_114 = NULL,g_114 = NULL,h_114 = NULL;
  f_114 = t;
  e_114 :
  if(match_cons(f_114, sym__2))
    {
      g_114 = ATgetArgument(f_114, 0);
      h_114 = ATgetArgument(f_114, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_21, not_null(g_114), not_null(h_114));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm j_28;
  j_28 = t;
  {
    ATerm n_5 (ATerm t)
    {
      t = term_k_28;
      t = p_79(t);
      return(t);
    }
    t = try_1(t, n_5);
  }
  t = j_28;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm p_114 = NULL;
      ATerm l_28;
      l_28 = t;
      {
        ATerm n_114 = NULL;
        ATerm o_114 = NULL;
        o_114 = t;
        if(((n_114 != NULL) && (n_114 != o_114)))
          _fail(o_114);
        else
          n_114 = o_114;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_23, not_null(n_114));
          t = set_config_0(t);
        }
      }
      t = l_28;
      {
        ATerm q_114 = NULL;
        q_114 = t;
        if(((p_114 != NULL) && (p_114 != q_114)))
          _fail(q_114);
        else
          p_114 = q_114;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_114));
      }
      return(t);
    }
    ATerm p_5 (ATerm t)
    {
      ATerm m_28 = t;
      int n_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_28 = t;
          int p_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_28);
            }
          else
            {
              t = o_28;
              {
                t = p_79(t);
                t = Cons_2(t, _id, p_5);
              }
            }
          LocalPopChoice(n_28);
        }
      else
        {
          t = m_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_5, p_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_114 = NULL,x_114 = NULL,y_114 = NULL;
  ATerm q_28;
  q_28 = t;
  {
    ATerm z_114 = NULL,a_115 = NULL,c_115 = NULL,d_115 = NULL;
    z_114 = t;
    v_114 :
    if(match_cons(z_114, sym__3))
      {
        a_115 = ATgetArgument(z_114, 0);
        c_115 = ATgetArgument(z_114, 1);
        d_115 = ATgetArgument(z_114, 2);
        {
          if(((w_114 != NULL) && (w_114 != a_115)))
            _fail(a_115);
          else
            w_114 = a_115;
          {
            if(((x_114 != NULL) && (x_114 != c_115)))
              _fail(c_115);
            else
              x_114 = c_115;
            {
              if(((y_114 != NULL) && (y_114 != d_115)))
                _fail(d_115);
              else
                y_114 = d_115;
              t = SSL_table_put(not_null(w_114), not_null(x_114), not_null(y_114));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm g_115 = NULL;
  ATerm r_28;
  r_28 = t;
  {
    t = term_t_28;
    t = table_put_0(t);
  }
  t = r_28;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm u_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_79(t);
          LocalPopChoice(v_28);
        }
      else
        {
          t = u_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_5);
    {
      ATerm r_5 (ATerm t)
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_z_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            {
              ATerm s_5 (ATerm t)
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm h_115 = NULL;
                  h_115 = t;
                  if(((g_115 != NULL) && (g_115 != h_115)))
                    _fail(h_115);
                  else
                    g_115 = h_115;
                  return(t);
                }
                t = Undefined_1(t, t_5);
                return(t);
              }
              t = option_defined_1(t, s_5);
              {
                ATerm z_28;
                z_28 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_115)), term_b_29));
                  t = printnl_0(t);
                }
                t = z_28;
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
      t = try_1(t, r_5);
      {
        ATerm d_29;
        d_29 = t;
        {
          t = term_t_27;
          t = table_destroy_0(t);
        }
        t = d_29;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm c_82 (ATerm), ATerm d_82 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_82(t);
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, u_5);
  {
    t = store_options_0(t);
    {
      t = d_82(t);
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_82);
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            {
              ATerm i_29 = t;
              int j_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, a_82);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(j_29);
                }
              else
                {
                  t = i_29;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm w_81 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm w_5 (ATerm t)
    {
      ATerm m_29;
      m_29 = t;
      {
        ATerm k_115 = NULL;
        ATerm l_115 = NULL;
        t = term_g_23;
        {
          t = get_config_0(t);
          {
            l_115 = t;
            if(((k_115 != NULL) && (k_115 != l_115)))
              _fail(l_115);
            else
              k_115 = l_115;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(k_115)));
          t = printnl_0(t);
        }
      }
      t = m_29;
      return(t);
    }
    t = if_verbose2_1(t, w_5);
    return(t);
  }
  t = iowrap_4(t, u_81, v_81, w_81, v_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm s_81 (ATerm), ATerm t_81 (ATerm))
{
  t = iowrap_3(t, s_81, t_81, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm p_81 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    t = _2(t, _id, p_81);
    return(t);
  }
  t = iowrap_2(t, x_5, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        ATerm c_6 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
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
  t = extract_all_0(t);
  return(t);
}
