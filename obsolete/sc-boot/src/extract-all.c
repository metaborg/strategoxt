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
ATerm term_r_28;
ATerm term_l_28;
ATerm term_e_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_o_26;
ATerm term_k_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_g_25;
ATerm term_b_25;
ATerm term_w_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_x_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_f_23;
ATerm term_c_22;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_10;
ATerm term_h_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_i_9;
ATerm term_s_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_j_6;
void init_constant_terms (void)
{
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Op_2, term_x_14, (ATerm) ATempty);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_y_14);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_x_23, term_f_16);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_f_16);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_s_24, term_f_16);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_f_16);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_f_16);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_m_27, term_n_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__3, term_m_27, term_n_27, (ATerm) ATempty);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm j_75 (ATerm), ATerm k_75 (ATerm));
ATerm SDef_3 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm));
ATerm Let_2 (ATerm, ATerm l_75 (ATerm), ATerm m_75 (ATerm));
ATerm sboundin_3 (ATerm, ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm j_85 (ATerm), ATerm k_85 (ATerm));
ATerm diff_1 (ATerm, ATerm o_85 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm i_90 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm j_90 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm p_98 (ATerm), ATerm q_98 (ATerm));
ATerm alltd_1 (ATerm, ATerm p_97 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm r_98 (ATerm), ATerm s_98 (ATerm));
ATerm substitute_1 (ATerm, ATerm t_98 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm q_75 (ATerm), ATerm r_75 (ATerm));
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
ATerm Prim_2 (ATerm, ATerm q_76 (ATerm), ATerm r_76 (ATerm));
ATerm Explode_2 (ATerm, ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm Op_2 (ATerm, ATerm q_74 (ATerm), ATerm r_74 (ATerm));
ATerm pat_td_1 (ATerm, ATerm o_102 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm b_93 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm n_87 (ATerm), ATerm o_87 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_87 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm y_72 (ATerm), ATerm z_72 (ATerm));
ATerm Con_3 (ATerm, ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm x_72 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm n_76 (ATerm), ATerm o_76 (ATerm));
ATerm oncetd_1 (ATerm, ATerm b_97 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_95 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm u_94 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm y_84 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm z_92 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm));
ATerm zip_1 (ATerm, ATerm w_92 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_88 (ATerm), ATerm f_88 (ATerm));
ATerm for_3 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm g_77 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm i_77 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm i_85 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm j_74 (ATerm));
ATerm Cons_2 (ATerm, ATerm s_76 (ATerm), ATerm t_76 (ATerm));
ATerm Specification_1 (ATerm, ATerm l_74 (ATerm));
ATerm _2 (ATerm, ATerm t_65 (ATerm), ATerm u_65 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_84 (ATerm), ATerm k_84 (ATerm));
ATerm crush_2 (ATerm, ATerm r_85 (ATerm), ATerm s_85 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_81 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_94 (ATerm), ATerm f_94 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_81 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_100 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_79 (ATerm));
ATerm map_1 (ATerm, ATerm k_100 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_79 (ATerm));
ATerm Program_1 (ATerm, ATerm i_71 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_71 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_100 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_80 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_94 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_79 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_79 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_79 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm m_81 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_81 (ATerm), ATerm g_81 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_81 (ATerm));
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
        ATerm i_6;
        i_6 = t;
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
        t = i_6;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_6), not_null(f_6)), term_r_6), not_null(e_6)), term_j_6);
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_6), not_null(q_6)), term_r_6), not_null(p_6)), term_t_6), not_null(o_6)), term_j_6);
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
                ATerm u_6 = t;
                int v_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(v_6);
                  }
                else
                  {
                    t = u_6;
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
  ATerm d_7;
  d_7 = t;
  {
    t = error_0(t);
    {
      t = term_e_7;
      t = exit_0(t);
    }
  }
  t = d_7;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_7);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm g_7;
  g_7 = t;
  {
    ATerm q_7 = NULL;
    ATerm r_7 = NULL;
    r_7 = t;
    if(((q_7 != NULL) && (q_7 != r_7)))
      _fail(r_7);
    else
      q_7 = r_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_7, not_null(q_7));
      t = printnl_0(t);
    }
  }
  t = g_7;
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
          ATerm n_7 = t;
          int o_7 = stack_ptr;
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
                            ATerm p_7 = t;
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
                                t = p_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_8)), term_s_7);
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
              LocalPopChoice(o_7);
            }
          else
            {
              t = n_7;
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
ATerm Rec_2 (ATerm t, ATerm j_75 (ATerm), ATerm k_75 (ATerm))
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
            t = j_75(t);
            {
              l_9 = t;
              {
                t = not_null(f_9);
                {
                  ATerm p_9 = NULL;
                  t = k_75(t);
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
ATerm SDef_3 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm))
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
            t = n_75(t);
            {
              n_10 = t;
              {
                t = not_null(f_10);
                {
                  ATerm r_10 = NULL;
                  t = o_75(t);
                  {
                    p_10 = t;
                    {
                      t = not_null(g_10);
                      {
                        ATerm t_10 = NULL;
                        t = p_75(t);
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
ATerm Let_2 (ATerm t, ATerm l_75 (ATerm), ATerm m_75 (ATerm))
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
            t = l_75(t);
            {
              p_11 = t;
              {
                t = not_null(j_11);
                {
                  ATerm t_11 = NULL;
                  t = m_75(t);
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
ATerm sboundin_3 (ATerm t, ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm))
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, m_99, m_99);
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      {
        ATerm v_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, o_99, o_99, m_99);
            LocalPopChoice(z_7);
          }
        else
          {
            t = v_7;
            t = Rec_2(t, o_99, m_99);
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
ATerm crush_3 (ATerm t, ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm))
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
      t = foldr_3(t, t_85, u_85, v_85);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm j_85 (ATerm), ATerm k_85 (ATerm))
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  i_14 :
  if(((ATgetType(j_14) == AT_LIST) && ((ATermList) j_14 != ATempty)))
    {
      k_14 = ATgetFirst((ATermList) j_14);
      l_14 = (ATerm) ATgetNext((ATermList) j_14);
      {
        t = k_85(t);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm o_14 = NULL;
            o_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), not_null(o_14));
              t = j_85(t);
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
ATerm diff_1 (ATerm t, ATerm o_85 (ATerm))
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
            ATerm h_8 = t;
            int o_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(o_8);
              }
            else
              {
                t = h_8;
                {
                  ATerm t_8 = t;
                  int u_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_0 (ATerm t)
                      {
                        t = not_null(w_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, o_85, q_0);
                      t = a_15(t);
                      LocalPopChoice(u_8);
                    }
                  else
                    {
                      t = t_8;
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
ATerm free_vars2_4 (ATerm t, ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm i_90 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm j_90 (ATerm))
{
  ATerm e_15 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm v_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_90(t);
          LocalPopChoice(w_8);
        }
      else
        {
          t = v_8;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      ATerm x_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15 = NULL;
          ATerm z_8;
          z_8 = t;
          {
            ATerm d_15 = NULL;
            t = h_90(t);
            {
              d_15 = t;
              if(((c_15 != NULL) && (c_15 != d_15)))
                _fail(d_15);
              else
                c_15 = d_15;
            }
          }
          t = z_8;
          {
            ATerm t_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = not_null(c_15);
                return(t);
              }
              t = split_2(t, e_15, v_0);
              t = diff_1(t, j_90);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = i_90(t, t_0, e_15, u_0);
            {
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, w_0, union_0, _id);
            }
          }
          LocalPopChoice(y_8);
        }
      else
        {
          t = x_8;
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
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        {
          ATerm g_9 = t;
          int h_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(h_9);
            }
          else
            {
              t = g_9;
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
    t = term_i_9;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm e_17 = NULL,g_17 = NULL;
    ATerm m_9;
    m_9 = t;
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
    t = m_9;
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
  ATerm o_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(r_9);
    }
  else
    {
      t = o_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm p_98 (ATerm), ATerm q_98 (ATerm))
{
  ATerm x_18 = NULL;
  ATerm z_18 = NULL,a_19 = NULL;
  x_18 = t;
  {
    ATerm b_19 = NULL;
    t = not_null(x_18);
    {
      ATerm c_19 = NULL;
      t = p_98(t);
      {
        b_19 = t;
        {
          if(((z_18 != NULL) && (z_18 != b_19)))
            _fail(b_19);
          else
            z_18 = b_19;
          {
            t = q_98(t);
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
ATerm alltd_1 (ATerm t, ATerm p_97 (ATerm))
{
  ATerm g_19 (ATerm t)
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_97(t);
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
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
ATerm substitute_2 (ATerm t, ATerm r_98 (ATerm), ATerm s_98 (ATerm))
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
              t = SubsVar_2(t, r_98, e_1);
              t = s_98(t);
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
ATerm substitute_1 (ATerm t, ATerm t_98 (ATerm))
{
  t = substitute_2(t, t_98, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm q_75 (ATerm), ATerm r_75 (ATerm))
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
            t = q_75(t);
            {
              x_20 = t;
              {
                t = not_null(r_20);
                {
                  ATerm b_21 = NULL;
                  t = r_75(t);
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
            ATerm u_9;
            u_9 = t;
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
            t = u_9;
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
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_25)), not_null(k_25)), not_null(j_25)), not_null(i_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(f_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(d_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_25)), not_null(r_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_25)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_26)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_26))), (ATerm) ATmakeAppl(sym_Prim_2, term_y_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_26)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_26)), (ATerm) ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_26)), not_null(b_26)))))));
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
        ATerm a_10 = t;
        int b_10 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_29)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_h_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_29)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_29))))));
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            {
              ATerm i_10 = t;
              int j_10 = stack_ptr;
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
                  LocalPopChoice(j_10);
                }
              else
                {
                  t = i_10;
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
  ATerm m_32 = NULL,n_32 = NULL;
  m_32 = t;
  l_32 :
  if(match_cons(m_32, sym_Match_1))
    {
      n_32 = ATgetArgument(m_32, 0);
      {
        ATerm p_32 = NULL,q_32 = NULL;
        ATerm v_32 = NULL;
        t = not_null(n_32);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
            r_32 = t;
            i_32 :
            if(match_cons(r_32, sym_RootApp_1))
              {
                s_32 = ATgetArgument(r_32, 0);
                j_32 :
                if(match_cons(s_32, sym_Match_1))
                  {
                    t_32 = ATgetArgument(s_32, 0);
                    {
                      if(((p_32 != NULL) && (p_32 != t_32)))
                        _fail(t_32);
                      else
                        p_32 = t_32;
                      t = not_null(p_32);
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
            v_32 = t;
            if(((q_32 != NULL) && (q_32 != v_32)))
              _fail(v_32);
            else
              q_32 = v_32;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(q_32));
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
  ATerm k_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(o_10);
    }
  else
    {
      t = k_10;
      {
        ATerm q_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(s_10);
          }
        else
          {
            t = q_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  y_33 = t;
  x_33 :
  if(match_cons(y_33, sym_Build_1))
    {
      z_33 = ATgetArgument(y_33, 0);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
            ATerm f_34 = NULL;
            ATerm j_34 = NULL;
            t = new_0(t);
            {
              f_34 = t;
              {
                if(((d_34 != NULL) && (d_34 != f_34)))
                  _fail(f_34);
                else
                  d_34 = f_34;
                {
                  t = not_null(z_33);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
                      g_34 = t;
                      m_33 :
                      if(match_cons(g_34, sym_Anno_2))
                        {
                          h_34 = ATgetArgument(g_34, 0);
                          i_34 = ATgetArgument(g_34, 1);
                          {
                            if(((b_34 != NULL) && (b_34 != h_34)))
                              _fail(h_34);
                            else
                              b_34 = h_34;
                            {
                              if(((c_34 != NULL) && (c_34 != i_34)))
                                _fail(i_34);
                              else
                                c_34 = i_34;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_34));
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
                      j_34 = t;
                      if(((e_34 != NULL) && (e_34 != j_34)))
                        _fail(j_34);
                      else
                        e_34 = j_34;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_x_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_34)), not_null(b_34))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_34))));
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            {
              ATerm y_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
                  ATerm o_34 = NULL;
                  ATerm r_34 = NULL;
                  t = new_0(t);
                  {
                    o_34 = t;
                    {
                      if(((m_34 != NULL) && (m_34 != o_34)))
                        _fail(o_34);
                      else
                        m_34 = o_34;
                      {
                        t = not_null(z_33);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm p_34 = NULL,q_34 = NULL;
                            p_34 = t;
                            r_33 :
                            if(match_cons(p_34, sym_RootApp_1))
                              {
                                q_34 = ATgetArgument(p_34, 0);
                                {
                                  if(((l_34 != NULL) && (l_34 != q_34)))
                                    _fail(q_34);
                                  else
                                    l_34 = q_34;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_34));
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
                            r_34 = t;
                            if(((n_34 != NULL) && (n_34 != r_34)))
                              _fail(r_34);
                            else
                              n_34 = r_34;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_34))));
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = y_10;
                  {
                    ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
                    ATerm x_34 = NULL;
                    ATerm b_35 = NULL;
                    t = new_0(t);
                    {
                      x_34 = t;
                      {
                        if(((v_34 != NULL) && (v_34 != x_34)))
                          _fail(x_34);
                        else
                          v_34 = x_34;
                        {
                          t = not_null(z_33);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
                              y_34 = t;
                              v_33 :
                              if(match_cons(y_34, sym_App_2))
                                {
                                  z_34 = ATgetArgument(y_34, 0);
                                  a_35 = ATgetArgument(y_34, 1);
                                  {
                                    if(((t_34 != NULL) && (t_34 != z_34)))
                                      _fail(z_34);
                                    else
                                      t_34 = z_34;
                                    {
                                      if(((u_34 != NULL) && (u_34 != a_35)))
                                        _fail(a_35);
                                      else
                                        u_34 = a_35;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_34));
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
                              b_35 = t;
                              if(((w_34 != NULL) && (w_34 != b_35)))
                                _fail(b_35);
                              else
                                w_34 = b_35;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_34), not_null(u_34), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_34)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_34))));
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
  ATerm u_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  u_35 = t;
  s_35 :
  if(match_cons(u_35, sym_Build_1))
    {
      a_36 = ATgetArgument(u_35, 0);
      t_35 :
      if(match_cons(a_36, sym_RootApp_1))
        {
          b_36 = ATgetArgument(a_36, 0);
          t = not_null(b_36);
        }
      else
        {
          if(match_cons(a_36, sym_App_2))
            {
              b_36 = ATgetArgument(a_36, 0);
              c_36 = ATgetArgument(a_36, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_36)), not_null(b_36));
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
ATerm Prim_2 (ATerm t, ATerm q_76 (ATerm), ATerm r_76 (ATerm))
{
  ATerm q_36 = NULL,t_36 = NULL,u_36 = NULL;
  q_36 = t;
  p_36 :
  if(match_cons(q_36, sym_Prim_2))
    {
      t_36 = ATgetArgument(q_36, 0);
      u_36 = ATgetArgument(q_36, 1);
      {
        ATerm y_36 = NULL,a_37 = NULL;
        ATerm z_36 = NULL;
        t = SSLgetAnnotations(not_null(q_36));
        {
          z_36 = t;
          if(((y_36 != NULL) && (y_36 != z_36)))
            _fail(z_36);
          else
            y_36 = z_36;
        }
        {
          t = not_null(t_36);
          {
            ATerm c_37 = NULL;
            t = q_76(t);
            {
              a_37 = t;
              {
                t = not_null(u_36);
                {
                  ATerm e_37 = NULL;
                  t = r_76(t);
                  {
                    c_37 = t;
                    {
                      ATerm f_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(a_37), not_null(c_37)), not_null(y_36));
                      {
                        f_37 = t;
                        if(((e_37 != NULL) && (e_37 != f_37)))
                          _fail(f_37);
                        else
                          e_37 = f_37;
                      }
                      t = not_null(e_37);
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
ATerm Explode_2 (ATerm t, ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  u_37 = t;
  t_37 :
  if(match_cons(u_37, sym_Explode_2))
    {
      v_37 = ATgetArgument(u_37, 0);
      w_37 = ATgetArgument(u_37, 1);
      {
        ATerm a_38 = NULL,c_38 = NULL;
        ATerm b_38 = NULL;
        t = SSLgetAnnotations(not_null(u_37));
        {
          b_38 = t;
          if(((a_38 != NULL) && (a_38 != b_38)))
            _fail(b_38);
          else
            a_38 = b_38;
        }
        {
          t = not_null(v_37);
          {
            ATerm e_38 = NULL;
            t = e_73(t);
            {
              c_38 = t;
              {
                t = not_null(w_37);
                {
                  ATerm g_38 = NULL;
                  t = f_73(t);
                  {
                    e_38 = t;
                    {
                      ATerm h_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(c_38), not_null(e_38)), not_null(a_38));
                      {
                        h_38 = t;
                        if(((g_38 != NULL) && (g_38 != h_38)))
                          _fail(h_38);
                        else
                          g_38 = h_38;
                      }
                      t = not_null(g_38);
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
ATerm Op_2 (ATerm t, ATerm q_74 (ATerm), ATerm r_74 (ATerm))
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
  t_38 = t;
  s_38 :
  if(match_cons(t_38, sym_Op_2))
    {
      u_38 = ATgetArgument(t_38, 0);
      v_38 = ATgetArgument(t_38, 1);
      {
        ATerm z_38 = NULL,b_39 = NULL;
        ATerm a_39 = NULL;
        t = SSLgetAnnotations(not_null(t_38));
        {
          a_39 = t;
          if(((z_38 != NULL) && (z_38 != a_39)))
            _fail(a_39);
          else
            z_38 = a_39;
        }
        {
          t = not_null(u_38);
          {
            ATerm d_39 = NULL;
            t = q_74(t);
            {
              b_39 = t;
              {
                t = not_null(v_38);
                {
                  ATerm j_39 = NULL;
                  t = r_74(t);
                  {
                    d_39 = t;
                    {
                      ATerm k_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(b_39), not_null(d_39)), not_null(z_38));
                      {
                        k_39 = t;
                        if(((j_39 != NULL) && (j_39 != k_39)))
                          _fail(k_39);
                        else
                          j_39 = k_39;
                      }
                      t = not_null(j_39);
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
ATerm pat_td_1 (ATerm t, ATerm o_102 (ATerm))
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_102(t);
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
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = pat_td_1(t, o_102);
                return(t);
              }
              t = fetch_1(t, t_1);
              return(t);
            }
            t = Op_2(t, _id, s_1);
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
                  ATerm u_1 (ATerm t)
                  {
                    t = pat_td_1(t, o_102);
                    return(t);
                  }
                  t = Explode_2(t, _id, u_1);
                  LocalPopChoice(f_11);
                }
              else
                {
                  t = e_11;
                  {
                    ATerm k_11 = t;
                    int l_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_1 (ATerm t)
                        {
                          t = pat_td_1(t, o_102);
                          return(t);
                        }
                        t = Explode_2(t, v_1, _id);
                        LocalPopChoice(l_11);
                      }
                    else
                      {
                        t = k_11;
                        {
                          ATerm w_1 (ATerm t)
                          {
                            ATerm x_1 (ATerm t)
                            {
                              t = pat_td_1(t, o_102);
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
  ATerm i_40 = NULL,u_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym_Build_1))
    {
      u_40 = ATgetArgument(i_40, 0);
      {
        ATerm m_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_40 = NULL,z_40 = NULL;
            ATerm d_41 = NULL;
            t = not_null(u_40);
            {
              ATerm y_1 (ATerm t)
              {
                ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
                a_41 = t;
                a_40 :
                if(match_cons(a_41, sym_RootApp_1))
                  {
                    b_41 = ATgetArgument(a_41, 0);
                    b_40 :
                    if(match_cons(b_41, sym_Build_1))
                      {
                        c_41 = ATgetArgument(b_41, 0);
                        {
                          if(((y_40 != NULL) && (y_40 != c_41)))
                            _fail(c_41);
                          else
                            y_40 = c_41;
                          t = not_null(y_40);
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
                d_41 = t;
                if(((z_40 != NULL) && (z_40 != d_41)))
                  _fail(d_41);
                else
                  z_40 = d_41;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_40));
            LocalPopChoice(q_11);
          }
        else
          {
            t = m_11;
            {
              ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
              ATerm m_41 = NULL;
              t = not_null(u_40);
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL;
                  i_41 = t;
                  e_40 :
                  if(match_cons(i_41, sym_App_2))
                    {
                      j_41 = ATgetArgument(i_41, 0);
                      l_41 = ATgetArgument(i_41, 1);
                      f_40 :
                      if(match_cons(j_41, sym_Build_1))
                        {
                          k_41 = ATgetArgument(j_41, 0);
                          {
                            if(((g_41 != NULL) && (g_41 != k_41)))
                              _fail(k_41);
                            else
                              g_41 = k_41;
                            {
                              if(((f_41 != NULL) && (f_41 != l_41)))
                                _fail(l_41);
                              else
                                f_41 = l_41;
                              t = not_null(g_41);
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
                  m_41 = t;
                  if(((h_41 != NULL) && (h_41 != m_41)))
                    _fail(m_41);
                  else
                    h_41 = m_41;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_41));
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
  ATerm s_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(v_11);
    }
  else
    {
      t = s_11;
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
  p_42 = t;
  h_42 :
  if(match_cons(p_42, sym_InfixApp_3))
    {
      q_42 = ATgetArgument(p_42, 0);
      m_42 = ATgetArgument(p_42, 1);
      l_42 = ATgetArgument(p_42, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_42), (ATerm) ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_42)), not_null(q_42))));
    }
  else
    {
      if(match_cons(p_42, sym_BAM_3))
        {
          q_42 = ATgetArgument(p_42, 0);
          m_42 = ATgetArgument(p_42, 1);
          l_42 = ATgetArgument(p_42, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(l_42))), not_null(q_42)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_42))));
        }
      else
        {
          if(match_cons(p_42, sym_AM_2))
            {
              q_42 = ATgetArgument(p_42, 0);
              m_42 = ATgetArgument(p_42, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_42), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_42)));
            }
          else
            {
              if(match_cons(p_42, sym_MA_2))
                {
                  q_42 = ATgetArgument(p_42, 0);
                  m_42 = ATgetArgument(p_42, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_42)), not_null(m_42));
                }
              else
                {
                  if(match_cons(p_42, sym_BA_2))
                    {
                      q_42 = ATgetArgument(p_42, 0);
                      m_42 = ATgetArgument(p_42, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_42)), not_null(q_42));
                    }
                  else
                    {
                      if(match_cons(p_42, sym_Lets_2))
                        {
                          q_42 = ATgetArgument(p_42, 0);
                          m_42 = ATgetArgument(p_42, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_42), not_null(m_42));
                        }
                      else
                        {
                          if(match_cons(p_42, sym_LChoices_1))
                            {
                              q_42 = ATgetArgument(p_42, 0);
                              i_42 :
                              if(((ATgetType(q_42) == AT_LIST) && ((ATermList) q_42 != ATempty)))
                                {
                                  n_42 = ATgetFirst((ATermList) q_42);
                                  o_42 = (ATerm) ATgetNext((ATermList) q_42);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_42), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(o_42)));
                                }
                              else
                                {
                                  if(((ATermList) q_42 == ATempty))
                                    {
                                      t = term_i_9;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(p_42, sym_Choices_1))
                                {
                                  q_42 = ATgetArgument(p_42, 0);
                                  j_42 :
                                  if(((ATgetType(q_42) == AT_LIST) && ((ATermList) q_42 != ATempty)))
                                    {
                                      n_42 = ATgetFirst((ATermList) q_42);
                                      o_42 = (ATerm) ATgetNext((ATermList) q_42);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_42), (ATerm) ATmakeAppl(sym_Choices_1, not_null(o_42)));
                                    }
                                  else
                                    {
                                      if(((ATermList) q_42 == ATempty))
                                        {
                                          t = term_i_9;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(p_42, sym_Seqs_1))
                                    {
                                      q_42 = ATgetArgument(p_42, 0);
                                      k_42 :
                                      if(((ATgetType(q_42) == AT_LIST) && ((ATermList) q_42 != ATempty)))
                                        {
                                          n_42 = ATgetFirst((ATermList) q_42);
                                          o_42 = (ATerm) ATgetNext((ATermList) q_42);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_42), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_42)));
                                        }
                                      else
                                        {
                                          if(((ATermList) q_42 == ATempty))
                                            {
                                              t = term_y_11;
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
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
  b_44 = t;
  y_43 :
  if(match_cons(b_44, sym__2))
    {
      c_44 = ATgetArgument(b_44, 0);
      f_44 = ATgetArgument(b_44, 1);
      z_43 :
      if(match_cons(c_44, sym__2))
        {
          d_44 = ATgetArgument(c_44, 0);
          e_44 = ATgetArgument(c_44, 1);
          a_44 :
          if(match_cons(f_44, sym__2))
            {
              g_44 = ATgetArgument(f_44, 0);
              h_44 = ATgetArgument(f_44, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_44)), not_null(d_44)), (ATerm) ATinsert(CheckATermList(not_null(h_44)), not_null(e_44)));
            }
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
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  p_44 = t;
  o_44 :
  if(((ATgetType(p_44) == AT_LIST) && ((ATermList) p_44 != ATempty)))
    {
      q_44 = ATgetFirst((ATermList) p_44);
      r_44 = (ATerm) ATgetNext((ATermList) p_44);
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_44), not_null(r_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  w_44 :
  if(((ATermList) x_44 == ATempty))
    {
      t = term_z_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm b_93 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, b_93);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  ATerm k_45 (ATerm t)
  {
    ATerm g_45 = NULL;
    ATerm h_45 = NULL;
    t = not_null(d_45);
    {
      ATerm a_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_12;
        }
      {
        t = new_0(t);
        {
          h_45 = t;
          if(((g_45 != NULL) && (g_45 != h_45)))
            _fail(h_45);
          else
            g_45 = h_45;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(g_45)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_45)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_45))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_45))));
    return(t);
  }
  ATerm l_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_y_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_45))));
    return(t);
  }
  d_45 = t;
  c_45 :
  if(match_cons(d_45, sym_Var_1))
    {
      e_45 = ATgetArgument(d_45, 0);
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_45(t);
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = l_45(t);
          }
      }
    }
  else
    {
      t = k_45(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm w_45 = NULL,x_45 = NULL;
  w_45 = t;
  v_45 :
  if(match_cons(w_45, sym_Var_1))
    {
      x_45 = ATgetArgument(w_45, 0);
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_46 = NULL,c_46 = NULL;
            ATerm b_46 = NULL;
            t = SSLgetAnnotations(not_null(w_45));
            {
              b_46 = t;
              if(((a_46 != NULL) && (a_46 != b_46)))
                _fail(b_46);
              else
                a_46 = b_46;
            }
            {
              t = not_null(x_45);
              {
                ATerm e_46 = NULL;
                t = o_0(t);
                {
                  c_46 = t;
                  {
                    ATerm f_46 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_46)), not_null(a_46));
                    {
                      f_46 = t;
                      if(((e_46 != NULL) && (e_46 != f_46)))
                        _fail(f_46);
                      else
                        e_46 = f_46;
                    }
                    t = not_null(e_46);
                  }
                }
              }
            }
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            {
              ATerm i_46 = NULL,k_46 = NULL;
              ATerm j_46 = NULL;
              t = SSLgetAnnotations(not_null(w_45));
              {
                j_46 = t;
                if(((i_46 != NULL) && (i_46 != j_46)))
                  _fail(j_46);
                else
                  i_46 = j_46;
              }
              {
                t = not_null(x_45);
                {
                  ATerm m_46 = NULL;
                  t = o_0(t);
                  {
                    k_46 = t;
                    {
                      ATerm n_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(k_46)), not_null(i_46));
                      {
                        n_46 = t;
                        if(((m_46 != NULL) && (m_46 != n_46)))
                          _fail(n_46);
                        else
                          m_46 = n_46;
                      }
                      t = not_null(m_46);
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
  ATerm b_47 = NULL,g_47 = NULL,h_47 = NULL;
  b_47 = t;
  a_47 :
  if(match_cons(b_47, sym_Prim_2))
    {
      g_47 = ATgetArgument(b_47, 0);
      h_47 = ATgetArgument(b_47, 1);
      {
        ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
        ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
        t = not_null(h_47);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm j_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_12;
              }
            return(t);
          }
          t = fetch_1(t, a_2);
          {
            t = not_null(h_47);
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
                  r_47 = t;
                  y_46 :
                  if(match_cons(r_47, sym__2))
                    {
                      s_47 = ATgetArgument(r_47, 0);
                      t_47 = ATgetArgument(r_47, 1);
                      z_46 :
                      if(match_cons(t_47, sym__2))
                        {
                          u_47 = ATgetArgument(t_47, 0);
                          v_47 = ATgetArgument(t_47, 1);
                          {
                            if(((k_47 != NULL) && (k_47 != s_47)))
                              _fail(s_47);
                            else
                              k_47 = s_47;
                            {
                              if(((l_47 != NULL) && (l_47 != u_47)))
                                _fail(u_47);
                              else
                                l_47 = u_47;
                              if(((m_47 != NULL) && (m_47 != v_47)))
                                _fail(v_47);
                              else
                                m_47 = v_47;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(l_47)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(g_47), not_null(m_47))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm n_87 (ATerm), ATerm o_87 (ATerm))
{
  ATerm g_48 (ATerm t)
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_87(t);
        t = g_48(t);
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = o_87(t);
      }
    return(t);
  }
  t = g_48(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm q_87 (ATerm))
{
  t = repeat_2(t, q_87, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm l_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym_Wld_0))
    {
      ATerm n_48 = NULL,p_48 = NULL;
      ATerm s_12;
      s_12 = t;
      {
        ATerm o_48 = NULL;
        t = SSLgetAnnotations(not_null(l_48));
        {
          o_48 = t;
          if(((n_48 != NULL) && (n_48 != o_48)))
            _fail(o_48);
          else
            n_48 = o_48;
        }
      }
      t = s_12;
      {
        ATerm q_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(n_48));
        {
          q_48 = t;
          if(((p_48 != NULL) && (p_48 != q_48)))
            _fail(q_48);
          else
            p_48 = q_48;
        }
        t = not_null(p_48);
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
  ATerm w_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
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
      t = w_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm y_72 (ATerm), ATerm z_72 (ATerm))
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL;
  a_49 = t;
  z_48 :
  if(match_cons(a_49, sym_App_2))
    {
      b_49 = ATgetArgument(a_49, 0);
      c_49 = ATgetArgument(a_49, 1);
      {
        ATerm g_49 = NULL,i_49 = NULL;
        ATerm h_49 = NULL;
        t = SSLgetAnnotations(not_null(a_49));
        {
          h_49 = t;
          if(((g_49 != NULL) && (g_49 != h_49)))
            _fail(h_49);
          else
            g_49 = h_49;
        }
        {
          t = not_null(b_49);
          {
            ATerm k_49 = NULL;
            t = y_72(t);
            {
              i_49 = t;
              {
                t = not_null(c_49);
                {
                  ATerm m_49 = NULL;
                  t = z_72(t);
                  {
                    k_49 = t;
                    {
                      ATerm n_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(i_49), not_null(k_49)), not_null(g_49));
                      {
                        n_49 = t;
                        if(((m_49 != NULL) && (m_49 != n_49)))
                          _fail(n_49);
                        else
                          m_49 = n_49;
                      }
                      t = not_null(m_49);
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
ATerm Con_3 (ATerm t, ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm x_72 (ATerm))
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL;
  a_50 = t;
  z_49 :
  if(match_cons(a_50, sym_Con_3))
    {
      b_50 = ATgetArgument(a_50, 0);
      c_50 = ATgetArgument(a_50, 1);
      d_50 = ATgetArgument(a_50, 2);
      {
        ATerm i_50 = NULL,k_50 = NULL;
        ATerm j_50 = NULL;
        t = SSLgetAnnotations(not_null(a_50));
        {
          j_50 = t;
          if(((i_50 != NULL) && (i_50 != j_50)))
            _fail(j_50);
          else
            i_50 = j_50;
        }
        {
          t = not_null(b_50);
          {
            ATerm m_50 = NULL;
            t = v_72(t);
            {
              k_50 = t;
              {
                t = not_null(c_50);
                {
                  ATerm t_50 = NULL;
                  t = w_72(t);
                  {
                    m_50 = t;
                    {
                      t = not_null(d_50);
                      {
                        ATerm v_50 = NULL;
                        t = x_72(t);
                        {
                          t_50 = t;
                          {
                            ATerm w_50 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(k_50), not_null(m_50), not_null(t_50)), not_null(i_50));
                            {
                              w_50 = t;
                              if(((v_50 != NULL) && (v_50 != w_50)))
                                _fail(w_50);
                              else
                                v_50 = w_50;
                            }
                            t = not_null(v_50);
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
  ATerm z_12 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm a_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(g_13);
          }
        else
          {
            t = a_13;
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
      t = z_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
  u_51 = t;
  r_51 :
  if(match_cons(u_51, sym_SRule_1))
    {
      v_51 = ATgetArgument(u_51, 0);
      t_51 :
      if(match_cons(v_51, sym_StratRule_3))
        {
          w_51 = ATgetArgument(v_51, 0);
          x_51 = ATgetArgument(v_51, 1);
          y_51 = ATgetArgument(v_51, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_51)), (ATerm) ATmakeAppl(sym_Where_1, not_null(y_51))), not_null(w_51)));
        }
      else
        {
          if(match_cons(v_51, sym_Rule_3))
            {
              w_51 = ATgetArgument(v_51, 0);
              x_51 = ATgetArgument(v_51, 1);
              y_51 = ATgetArgument(v_51, 2);
              {
                t = not_null(w_51);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(x_51);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(x_51))), (ATerm) ATmakeAppl(sym_Where_1, not_null(y_51))), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_51))));
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
ATerm Scope_2 (ATerm t, ATerm n_76 (ATerm), ATerm o_76 (ATerm))
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  b_53 = t;
  a_53 :
  if(match_cons(b_53, sym_Scope_2))
    {
      c_53 = ATgetArgument(b_53, 0);
      d_53 = ATgetArgument(b_53, 1);
      {
        ATerm h_53 = NULL,j_53 = NULL;
        ATerm i_53 = NULL;
        t = SSLgetAnnotations(not_null(b_53));
        {
          i_53 = t;
          if(((h_53 != NULL) && (h_53 != i_53)))
            _fail(i_53);
          else
            h_53 = i_53;
        }
        {
          t = not_null(c_53);
          {
            ATerm l_53 = NULL;
            t = n_76(t);
            {
              j_53 = t;
              {
                t = not_null(d_53);
                {
                  ATerm n_53 = NULL;
                  t = o_76(t);
                  {
                    l_53 = t;
                    {
                      ATerm o_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(j_53), not_null(l_53)), not_null(h_53));
                      {
                        o_53 = t;
                        if(((n_53 != NULL) && (n_53 != o_53)))
                          _fail(o_53);
                        else
                          n_53 = o_53;
                      }
                      t = not_null(n_53);
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
ATerm oncetd_1 (ATerm t, ATerm b_97 (ATerm))
{
  ATerm u_53 (ATerm t)
  {
    ATerm h_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_97(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = h_13;
        t = _one(t, u_53);
      }
    return(t);
  }
  t = u_53(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
  j_54 = t;
  h_54 :
  if(match_cons(j_54, sym_SRule_1))
    {
      k_54 = ATgetArgument(j_54, 0);
      i_54 :
      if(match_cons(k_54, sym_Rule_3))
        {
          l_54 = ATgetArgument(k_54, 0);
          m_54 = ATgetArgument(k_54, 1);
          n_54 = ATgetArgument(k_54, 2);
          {
            ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL;
            ATerm z_54 = NULL;
            ATerm f_55 = NULL;
            t = new_0(t);
            {
              z_54 = t;
              {
                if(((w_54 != NULL) && (w_54 != z_54)))
                  _fail(z_54);
                else
                  w_54 = z_54;
                {
                  t = not_null(l_54);
                  {
                    ATerm s_55 = NULL;
                    ATerm e_2 (ATerm t)
                    {
                      ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
                      a_55 = t;
                      y_53 :
                      if(match_cons(a_55, sym_Con_3))
                        {
                          b_55 = ATgetArgument(a_55, 0);
                          d_55 = ATgetArgument(a_55, 1);
                          e_55 = ATgetArgument(a_55, 2);
                          z_53 :
                          if(match_cons(b_55, sym_Var_1))
                            {
                              c_55 = ATgetArgument(b_55, 0);
                              {
                                if(((v_54 != NULL) && (v_54 != c_55)))
                                  _fail(c_55);
                                else
                                  v_54 = c_55;
                                {
                                  if(((t_54 != NULL) && (t_54 != d_55)))
                                    _fail(d_55);
                                  else
                                    t_54 = d_55;
                                  {
                                    if(((r_54 != NULL) && (r_54 != e_55)))
                                      _fail(e_55);
                                    else
                                      r_54 = e_55;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_54));
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
                      f_55 = t;
                      {
                        if(((x_54 != NULL) && (x_54 != f_55)))
                          _fail(f_55);
                        else
                          x_54 = f_55;
                        {
                          t = not_null(m_54);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,q_55 = NULL,r_55 = NULL;
                              g_55 = t;
                              c_54 :
                              if(match_cons(g_55, sym_Con_3))
                                {
                                  h_55 = ATgetArgument(g_55, 0);
                                  j_55 = ATgetArgument(g_55, 1);
                                  k_55 = ATgetArgument(g_55, 2);
                                  d_54 :
                                  if(match_cons(h_55, sym_Var_1))
                                    {
                                      i_55 = ATgetArgument(h_55, 0);
                                      e_54 :
                                      if(match_cons(k_55, sym_Call_2))
                                        {
                                          q_55 = ATgetArgument(k_55, 0);
                                          r_55 = ATgetArgument(k_55, 1);
                                          f_54 :
                                          if(((ATermList) r_55 == ATempty))
                                            {
                                              {
                                                if(((v_54 != NULL) && (v_54 != i_55)))
                                                  _fail(i_55);
                                                else
                                                  v_54 = i_55;
                                                {
                                                  if(((u_54 != NULL) && (u_54 != j_55)))
                                                    _fail(j_55);
                                                  else
                                                    u_54 = j_55;
                                                  {
                                                    if(((s_54 != NULL) && (s_54 != q_55)))
                                                      _fail(q_55);
                                                    else
                                                      s_54 = q_55;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_54));
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
                              s_55 = t;
                              if(((y_54 != NULL) && (y_54 != s_55)))
                                _fail(s_55);
                              else
                                y_54 = s_55;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_54)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_54), not_null(y_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_54), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(s_54), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_54), not_null(u_54), term_y_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_54)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_54)))))));
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
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm l_95 (ATerm))
{
  t = l_95(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, l_95);
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
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
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
                  t = HL_0(t);
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
                        t = Bapp_0(t);
                        LocalPopChoice(d_14);
                      }
                    else
                      {
                        t = z_13;
                        {
                          ATerm e_14 = t;
                          int f_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(f_14);
                            }
                          else
                            {
                              t = e_14;
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
  ATerm h_56 = NULL;
  h_56 = t;
  g_56 :
  if(match_cons(h_56, sym__0))
    {
      ATerm n_56 = NULL,p_56 = NULL;
      ATerm g_14;
      g_14 = t;
      {
        ATerm o_56 = NULL;
        t = SSLgetAnnotations(not_null(h_56));
        {
          o_56 = t;
          if(((n_56 != NULL) && (n_56 != o_56)))
            _fail(o_56);
          else
            n_56 = o_56;
        }
      }
      t = g_14;
      {
        ATerm q_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(n_56));
        {
          q_56 = t;
          if(((p_56 != NULL) && (p_56 != q_56)))
            _fail(q_56);
          else
            p_56 = q_56;
        }
        t = not_null(p_56);
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
  ATerm c_57 = NULL;
  ATerm e_57 = NULL,n_57 = NULL,h_60 = NULL,j_60 = NULL;
  c_57 = t;
  {
    ATerm h_14;
    h_14 = t;
    {
      ATerm o_57 = NULL;
      ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL;
      t = not_null(c_57);
      {
        o_57 = t;
        {
          t = SSL_explode_term(not_null(o_57));
          {
            c_60 = t;
            x_56 :
            if(match_cons(c_60, sym__2))
              {
                d_60 = ATgetArgument(c_60, 0);
                e_60 = ATgetArgument(c_60, 1);
                y_56 :
                if(match_string(d_60, ""))
                  {
                    z_56 :
                    if(((ATgetType(e_60) == AT_LIST) && ((ATermList) e_60 != ATempty)))
                      {
                        f_60 = ATgetFirst((ATermList) e_60);
                        g_60 = (ATerm) ATgetNext((ATermList) e_60);
                        {
                          if(((e_57 != NULL) && (e_57 != f_60)))
                            _fail(f_60);
                          else
                            e_57 = f_60;
                          if(((n_57 != NULL) && (n_57 != g_60)))
                            _fail(g_60);
                          else
                            n_57 = g_60;
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
    t = h_14;
    {
      ATerm m_14;
      m_14 = t;
      {
        ATerm i_60 = NULL;
        t = term_z_9;
        {
          i_60 = t;
          if(((h_60 != NULL) && (h_60 != i_60)))
            _fail(i_60);
          else
            h_60 = i_60;
        }
      }
      t = m_14;
      {
        t = SSL_mkterm(not_null(h_60), not_null(n_57));
        {
          j_60 = t;
          t = not_null(j_60);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm e_62 = NULL;
  ATerm g_62 = NULL,h_62 = NULL;
  e_62 = t;
  {
    ATerm i_62 = NULL;
    ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL;
    t = not_null(e_62);
    {
      i_62 = t;
      {
        t = SSL_explode_term(not_null(i_62));
        {
          k_62 = t;
          b_62 :
          if(match_cons(k_62, sym__2))
            {
              l_62 = ATgetArgument(k_62, 0);
              m_62 = ATgetArgument(k_62, 1);
              c_62 :
              if(match_string(l_62, ""))
                {
                  d_62 :
                  if(((ATgetType(m_62) == AT_LIST) && ((ATermList) m_62 != ATempty)))
                    {
                      n_62 = ATgetFirst((ATermList) m_62);
                      o_62 = (ATerm) ATgetNext((ATermList) m_62);
                      {
                        if(((h_62 != NULL) && (h_62 != n_62)))
                          _fail(n_62);
                        else
                          h_62 = n_62;
                        if(((g_62 != NULL) && (g_62 != o_62)))
                          _fail(o_62);
                        else
                          g_62 = o_62;
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
    t = not_null(h_62);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm u_94 (ATerm))
{
  ATerm g_66 = NULL,i_66 = NULL,k_66 = NULL;
  ATerm m_66 (ATerm t)
  {
    ATerm n_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_66 = NULL,e_66 = NULL;
        ATerm q_14;
        q_14 = t;
        {
          ATerm d_66 = NULL;
          t = map_1(t, Thd_0);
          {
            t = u_94(t);
            {
              d_66 = t;
              if(((c_66 != NULL) && (c_66 != d_66)))
                _fail(d_66);
              else
                c_66 = d_66;
            }
          }
        }
        t = q_14;
        {
          ATerm f_66 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = m_66(t);
            {
              f_66 = t;
              if(((e_66 != NULL) && (e_66 != f_66)))
                _fail(f_66);
              else
                e_66 = f_66;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(e_66)), not_null(c_66));
        }
        LocalPopChoice(p_14);
      }
    else
      {
        t = n_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = m_66(t);
  {
    ATerm r_14;
    r_14 = t;
    {
      ATerm h_66 = NULL;
      h_66 = t;
      if(((g_66 != NULL) && (g_66 != h_66)))
        _fail(h_66);
      else
        g_66 = h_66;
    }
    t = r_14;
    {
      ATerm s_14;
      s_14 = t;
      {
        ATerm j_66 = NULL;
        t = term_z_9;
        {
          j_66 = t;
          if(((i_66 != NULL) && (i_66 != j_66)))
            _fail(j_66);
          else
            i_66 = j_66;
        }
      }
      t = s_14;
      {
        t = SSL_mkterm(not_null(i_66), not_null(g_66));
        {
          k_66 = t;
          t = not_null(k_66);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm w_66 = NULL;
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL;
  w_66 = t;
  {
    ATerm b_67 = NULL;
    ATerm c_67 = NULL;
    t = new_0(t);
    {
      b_67 = t;
      {
        if(((y_66 != NULL) && (y_66 != b_67)))
          _fail(b_67);
        else
          y_66 = b_67;
        {
          ATerm d_67 = NULL;
          t = new_0(t);
          {
            c_67 = t;
            {
              if(((z_66 != NULL) && (z_66 != c_67)))
                _fail(c_67);
              else
                z_66 = c_67;
              {
                t = new_0(t);
                {
                  d_67 = t;
                  if(((a_67 != NULL) && (a_67 != d_67)))
                    _fail(d_67);
                  else
                    a_67 = d_67;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_66)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_66)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_66)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_67))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(y_66), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_14), term_z_14)), not_null(z_66), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_66)), not_null(a_67), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_67)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL;
  k_67 = t;
  j_67 :
  if(match_cons(k_67, sym__2))
    {
      l_67 = ATgetArgument(k_67, 0);
      m_67 = ATgetArgument(k_67, 1);
      {
        ATerm b_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(l_67), not_null(m_67));
            LocalPopChoice(f_15);
          }
        else
          {
            t = b_15;
            t = SSL_subtr(not_null(l_67), not_null(m_67));
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
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
  s_67 = t;
  r_67 :
  if(match_cons(s_67, sym__2))
    {
      t_67 = ATgetArgument(s_67, 0);
      u_67 = ATgetArgument(s_67, 1);
      {
        ATerm g_15;
        g_15 = t;
        {
          ATerm h_15 = t;
          int k_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_67), not_null(u_67));
              LocalPopChoice(k_15);
            }
          else
            {
              t = h_15;
              t = SSL_gtr(not_null(t_67), not_null(u_67));
            }
        }
        t = g_15;
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
  ATerm a_68 = NULL;
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL;
      b_68 = t;
      z_67 :
      if(match_cons(b_68, sym__2))
        {
          c_68 = ATgetArgument(b_68, 0);
          d_68 = ATgetArgument(b_68, 1);
          {
            if(((a_68 != NULL) && (a_68 != c_68)))
              _fail(c_68);
            else
              a_68 = c_68;
            if(((a_68 != NULL) && (a_68 != d_68)))
              _fail(d_68);
            else
              a_68 = d_68;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm y_84 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL;
    o_68 = t;
    g_68 :
    if(match_cons(o_68, sym__2))
      {
        p_68 = ATgetArgument(o_68, 0);
        q_68 = ATgetArgument(o_68, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(p_68), not_null(q_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL;
    t_68 = t;
    i_68 :
    if(match_cons(t_68, sym__3))
      {
        u_68 = ATgetArgument(t_68, 0);
        v_68 = ATgetArgument(t_68, 1);
        w_68 = ATgetArgument(t_68, 2);
        j_68 :
        if(match_int(u_68, 0))
          {
            t = not_null(w_68);
          }
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
    ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
    z_68 = t;
    n_68 :
    if(match_cons(z_68, sym__3))
      {
        a_69 = ATgetArgument(z_68, 0);
        b_69 = ATgetArgument(z_68, 1);
        c_69 = ATgetArgument(z_68, 2);
        {
          ATerm g_69 = NULL,i_69 = NULL;
          ATerm a_16;
          a_16 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_69), term_e_7);
            t = geq_0(t);
          }
          t = a_16;
          {
            ATerm b_16;
            b_16 = t;
            {
              ATerm h_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_69), term_e_7);
              {
                t = subt_0(t);
                {
                  h_69 = t;
                  if(((g_69 != NULL) && (g_69 != h_69)))
                    _fail(h_69);
                  else
                    g_69 = h_69;
                }
              }
            }
            t = b_16;
            {
              ATerm j_69 = NULL;
              t = not_null(b_69);
              {
                t = y_84(t);
                {
                  j_69 = t;
                  if(((i_69 != NULL) && (i_69 != j_69)))
                    _fail(j_69);
                  else
                    i_69 = j_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(g_69), not_null(b_69), (ATerm) ATinsert(CheckATermList(not_null(c_69)), not_null(i_69)));
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
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  u_69 = t;
  t_69 :
  if(match_cons(u_69, sym__2))
    {
      v_69 = ATgetArgument(u_69, 0);
      w_69 = ATgetArgument(u_69, 1);
      {
        ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
        ATerm c_70 = NULL;
        ATerm d_70 = NULL;
        t = new_0(t);
        {
          c_70 = t;
          {
            if(((z_69 != NULL) && (z_69 != c_70)))
              _fail(c_70);
            else
              z_69 = c_70;
            {
              ATerm e_70 = NULL;
              t = new_0(t);
              {
                d_70 = t;
                {
                  if(((a_70 != NULL) && (a_70 != d_70)))
                    _fail(d_70);
                  else
                    a_70 = d_70;
                  {
                    t = new_0(t);
                    {
                      e_70 = t;
                      if(((b_70 != NULL) && (b_70 != e_70)))
                        _fail(e_70);
                      else
                        b_70 = e_70;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_69)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_70)))), (ATerm) ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_70))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(z_69), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_14), term_z_14)), not_null(a_70), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_70)), not_null(b_70), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_70)));
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
  ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
  m_70 = t;
  k_70 :
  if(match_cons(m_70, sym__2))
    {
      n_70 = ATgetArgument(m_70, 0);
      o_70 = ATgetArgument(m_70, 1);
      l_70 :
      if(((ATermList) o_70 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm z_92 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, z_92);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL;
  s_70 = t;
  r_70 :
  if(((ATgetType(s_70) == AT_LIST) && ((ATermList) s_70 != ATempty)))
    {
      t_70 = ATgetFirst((ATermList) s_70);
      u_70 = (ATerm) ATgetNext((ATermList) s_70);
      t = not_null(u_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL;
  b_71 = t;
  z_70 :
  if(((ATgetType(b_71) == AT_LIST) && ((ATermList) b_71 != ATempty)))
    {
      c_71 = ATgetFirst((ATermList) b_71);
      d_71 = (ATerm) ATgetNext((ATermList) b_71);
      a_71 :
      if(((ATermList) d_71 == ATempty))
        {
          t = not_null(c_71);
        }
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
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL;
  ATerm i_74 (ATerm t)
  {
    ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,k_73 = NULL;
    ATerm e_16;
    e_16 = t;
    {
      ATerm q_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL;
      ATerm r_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_72), term_e_7);
      {
        t = add_0(t);
        {
          r_72 = t;
          if(((q_72 != NULL) && (q_72 != r_72)))
            _fail(r_72);
          else
            q_72 = r_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_72), term_f_16);
        {
          t = copy_1(t, new_0);
          {
            s_72 = t;
            r_71 :
            if(((ATgetType(s_72) == AT_LIST) && ((ATermList) s_72 != ATempty)))
              {
                t_72 = ATgetFirst((ATermList) s_72);
                u_72 = (ATerm) ATgetNext((ATermList) s_72);
                {
                  ATerm a_73 = NULL;
                  if(((i_72 != NULL) && (i_72 != t_72)))
                    _fail(t_72);
                  else
                    i_72 = t_72;
                  {
                    if(((j_72 != NULL) && (j_72 != u_72)))
                      _fail(u_72);
                    else
                      j_72 = u_72;
                    {
                      t = not_null(j_72);
                      {
                        ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL;
                        t = last_0(t);
                        {
                          a_73 = t;
                          {
                            if(((h_72 != NULL) && (h_72 != a_73)))
                              _fail(a_73);
                            else
                              h_72 = a_73;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_72)), not_null(i_72)), not_null(j_72));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    b_73 = t;
                                    q_71 :
                                    if(match_cons(b_73, sym__6))
                                      {
                                        c_73 = ATgetArgument(b_73, 0);
                                        d_73 = ATgetArgument(b_73, 1);
                                        g_73 = ATgetArgument(b_73, 2);
                                        h_73 = ATgetArgument(b_73, 3);
                                        i_73 = ATgetArgument(b_73, 4);
                                        j_73 = ATgetArgument(b_73, 5);
                                        {
                                          if(((k_72 != NULL) && (k_72 != c_73)))
                                            _fail(c_73);
                                          else
                                            k_72 = c_73;
                                          {
                                            if(((l_72 != NULL) && (l_72 != d_73)))
                                              _fail(d_73);
                                            else
                                              l_72 = d_73;
                                            {
                                              if(((m_72 != NULL) && (m_72 != g_73)))
                                                _fail(g_73);
                                              else
                                                m_72 = g_73;
                                              {
                                                if(((n_72 != NULL) && (n_72 != h_73)))
                                                  _fail(h_73);
                                                else
                                                  n_72 = h_73;
                                                {
                                                  if(((o_72 != NULL) && (o_72 != i_73)))
                                                    _fail(i_73);
                                                  else
                                                    o_72 = i_73;
                                                  if(((p_72 != NULL) && (p_72 != j_73)))
                                                    _fail(j_73);
                                                  else
                                                    p_72 = j_73;
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
    t = e_16;
    {
      ATerm l_73 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_72)), not_null(m_72)), not_null(j_72));
      {
        t = concat_0(t);
        {
          l_73 = t;
          if(((k_73 != NULL) && (k_73 != l_73)))
            _fail(l_73);
          else
            k_73 = l_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(c_72), term_g_16), not_null(l_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(k_73)), not_null(i_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_72), not_null(n_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_72), not_null(p_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(k_72))))));
    }
    return(t);
  }
  ATerm k_74 (ATerm t)
  {
    ATerm n_73 = NULL;
    ATerm o_73 = NULL;
    t = new_0(t);
    {
      o_73 = t;
      if(((n_73 != NULL) && (n_73 != o_73)))
        _fail(o_73);
      else
        n_73 = o_73;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(c_72), term_g_16), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_72), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_72), (ATerm) ATempty))), term_y_11))));
    return(t);
  }
  ATerm m_74 (ATerm t)
  {
    ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,g_74 = NULL;
    ATerm m_16;
    m_16 = t;
    {
      ATerm y_73 = NULL;
      ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL;
      t = new_0(t);
      {
        y_73 = t;
        {
          if(((r_73 != NULL) && (r_73 != y_73)))
            _fail(y_73);
          else
            r_73 = y_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_72), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_73)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  z_73 = t;
                  w_71 :
                  if(match_cons(z_73, sym__6))
                    {
                      a_74 = ATgetArgument(z_73, 0);
                      b_74 = ATgetArgument(z_73, 1);
                      c_74 = ATgetArgument(z_73, 2);
                      d_74 = ATgetArgument(z_73, 3);
                      e_74 = ATgetArgument(z_73, 4);
                      f_74 = ATgetArgument(z_73, 5);
                      {
                        if(((s_73 != NULL) && (s_73 != a_74)))
                          _fail(a_74);
                        else
                          s_73 = a_74;
                        {
                          if(((t_73 != NULL) && (t_73 != b_74)))
                            _fail(b_74);
                          else
                            t_73 = b_74;
                          {
                            if(((u_73 != NULL) && (u_73 != c_74)))
                              _fail(c_74);
                            else
                              u_73 = c_74;
                            {
                              if(((v_73 != NULL) && (v_73 != d_74)))
                                _fail(d_74);
                              else
                                v_73 = d_74;
                              {
                                if(((w_73 != NULL) && (w_73 != e_74)))
                                  _fail(e_74);
                                else
                                  w_73 = e_74;
                                if(((x_73 != NULL) && (x_73 != f_74)))
                                  _fail(f_74);
                                else
                                  x_73 = f_74;
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
    t = m_16;
    {
      ATerm h_74 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_73), not_null(w_73));
      {
        t = conc_0(t);
        {
          h_74 = t;
          if(((g_74 != NULL) && (g_74 != h_74)))
            _fail(h_74);
          else
            g_74 = h_74;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(c_72), term_r_16), not_null(t_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(g_74)), not_null(r_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_72), not_null(v_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(c_72), not_null(x_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_73))))));
    }
    return(t);
  }
  b_72 = t;
  y_71 :
  if(match_cons(b_72, sym__3))
    {
      c_72 = ATgetArgument(b_72, 0);
      d_72 = ATgetArgument(b_72, 1);
      e_72 = ATgetArgument(b_72, 2);
      z_71 :
      if(match_string(d_72, "T"))
        {
          a_72 :
          if(match_int(e_72, 0))
            {
              ATerm z_16 = t;
              int a_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_74(t);
                  LocalPopChoice(a_17);
                }
              else
                {
                  t = z_16;
                  t = k_74(t);
                }
            }
          else
            {
              t = i_74(t);
            }
        }
      else
        {
          if(match_string(d_72, "D"))
            {
              t = m_74(t);
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
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,s_75 = NULL;
  d_75 = t;
  a_75 :
  if(match_cons(d_75, sym__2))
    {
      e_75 = ATgetArgument(d_75, 0);
      s_75 = ATgetArgument(d_75, 1);
      b_75 :
      if(match_cons(e_75, sym__2))
        {
          f_75 = ATgetArgument(e_75, 0);
          i_75 = ATgetArgument(e_75, 1);
          c_75 :
          if(match_cons(f_75, sym_Mod_2))
            {
              g_75 = ATgetArgument(f_75, 0);
              h_75 = ATgetArgument(f_75, 1);
              {
                ATerm x_75 = NULL;
                ATerm y_75 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(g_75), not_null(h_75), not_null(i_75));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      y_75 = t;
                      if(((x_75 != NULL) && (x_75 != y_75)))
                        _fail(y_75);
                      else
                        x_75 = y_75;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_75), not_null(s_75));
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
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL;
  e_76 = t;
  c_76 :
  if(match_cons(e_76, sym__5))
    {
      f_76 = ATgetArgument(e_76, 0);
      i_76 = ATgetArgument(e_76, 1);
      j_76 = ATgetArgument(e_76, 2);
      k_76 = ATgetArgument(e_76, 3);
      l_76 = ATgetArgument(e_76, 4);
      d_76 :
      if(((ATgetType(f_76) == AT_LIST) && ((ATermList) f_76 != ATempty)))
        {
          g_76 = ATgetFirst((ATermList) f_76);
          h_76 = (ATerm) ATgetNext((ATermList) f_76);
          t = (ATerm) ATmakeAppl(sym__5, not_null(h_76), not_null(i_76), not_null(j_76), not_null(k_76), (ATerm) ATinsert(CheckATermList(not_null(l_76)), not_null(g_76)));
        }
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
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  b_77 = t;
  a_77 :
  if(match_cons(b_77, sym__2))
    {
      c_77 = ATgetArgument(b_77, 0);
      d_77 = ATgetArgument(b_77, 1);
      {
        t = not_null(c_77);
        {
          ATerm n_2 (ATerm t)
          {
            t = not_null(d_77);
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
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
  p_77 = t;
  k_77 :
  if(match_cons(p_77, sym__2))
    {
      q_77 = ATgetArgument(p_77, 0);
      r_77 = ATgetArgument(p_77, 1);
      l_77 :
      if(((ATgetType(r_77) == AT_LIST) && ((ATermList) r_77 != ATempty)))
        {
          s_77 = ATgetFirst((ATermList) r_77);
          t_77 = (ATerm) ATgetNext((ATermList) r_77);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_77)), not_null(s_77)), not_null(t_77));
        }
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
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
  d_78 = t;
  c_78 :
  if(match_cons(d_78, sym__2))
    {
      e_78 = ATgetArgument(d_78, 0);
      f_78 = ATgetArgument(d_78, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_78)), not_null(e_78));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL;
  n_78 = t;
  k_78 :
  if(match_cons(n_78, sym__2))
    {
      o_78 = ATgetArgument(n_78, 0);
      r_78 = ATgetArgument(n_78, 1);
      l_78 :
      if(((ATgetType(o_78) == AT_LIST) && ((ATermList) o_78 != ATempty)))
        {
          p_78 = ATgetFirst((ATermList) o_78);
          q_78 = (ATerm) ATgetNext((ATermList) o_78);
          m_78 :
          if(((ATgetType(r_78) == AT_LIST) && ((ATermList) r_78 != ATempty)))
            {
              s_78 = ATgetFirst((ATermList) r_78);
              t_78 = (ATerm) ATgetNext((ATermList) r_78);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(p_78), not_null(s_78)), (ATerm) ATmakeAppl(sym__2, not_null(q_78), not_null(t_78)));
            }
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
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
  d_79 = t;
  a_79 :
  if(match_cons(d_79, sym__2))
    {
      e_79 = ATgetArgument(d_79, 0);
      f_79 = ATgetArgument(d_79, 1);
      b_79 :
      if(((ATermList) e_79 == ATempty))
        {
          c_79 :
          if(((ATermList) f_79 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm))
{
  ATerm h_79 (ATerm t)
  {
    ATerm d_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_92(t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = d_17;
        {
          t = s_92(t);
          {
            t = _2(t, u_92, h_79);
            t = t_92(t);
          }
        }
      }
    return(t);
  }
  t = h_79(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm w_92 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, w_92);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL;
  y_79 = t;
  w_79 :
  if(((ATgetType(y_79) == AT_LIST) && ((ATermList) y_79 != ATempty)))
    {
      z_79 = ATgetFirst((ATermList) y_79);
      c_80 = (ATerm) ATgetNext((ATermList) y_79);
      x_79 :
      if(match_cons(z_79, sym__2))
        {
          a_80 = ATgetArgument(z_79, 0);
          b_80 = ATgetArgument(z_79, 1);
          {
            ATerm g_80 = NULL,h_80 = NULL,o_80 = NULL,u_80 = NULL;
            ATerm j_17;
            j_17 = t;
            {
              ATerm i_80 = NULL;
              ATerm k_80 = NULL,l_80 = NULL,n_80 = NULL;
              t = not_null(b_80);
              {
                i_80 = t;
                {
                  t = SSL_explode_term(not_null(i_80));
                  {
                    k_80 = t;
                    l_79 :
                    if(match_cons(k_80, sym__2))
                      {
                        l_80 = ATgetArgument(k_80, 0);
                        n_80 = ATgetArgument(k_80, 1);
                        {
                          if(((g_80 != NULL) && (g_80 != l_80)))
                            _fail(l_80);
                          else
                            g_80 = l_80;
                          if(((h_80 != NULL) && (h_80 != n_80)))
                            _fail(n_80);
                          else
                            h_80 = n_80;
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
            t = j_17;
            {
              ATerm k_17;
              k_17 = t;
              {
                ATerm p_80 = NULL;
                ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
                t = not_null(a_80);
                {
                  p_80 = t;
                  {
                    t = SSL_explode_term(not_null(p_80));
                    {
                      r_80 = t;
                      u_79 :
                      if(match_cons(r_80, sym__2))
                        {
                          s_80 = ATgetArgument(r_80, 0);
                          t_80 = ATgetArgument(r_80, 1);
                          {
                            if(((g_80 != NULL) && (g_80 != s_80)))
                              _fail(s_80);
                            else
                              g_80 = s_80;
                            if(((o_80 != NULL) && (o_80 != t_80)))
                              _fail(t_80);
                            else
                              o_80 = t_80;
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
              t = k_17;
              {
                ATerm v_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_80), not_null(h_80));
                {
                  t = zip_1(t, _id);
                  {
                    v_80 = t;
                    if(((u_80 != NULL) && (u_80 != v_80)))
                      _fail(v_80);
                    else
                      u_80 = v_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_80), not_null(c_80));
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
  ATerm i_81 = NULL,j_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL;
  i_81 = t;
  e_81 :
  if(((ATgetType(i_81) == AT_LIST) && ((ATermList) i_81 != ATempty)))
    {
      j_81 = ATgetFirst((ATermList) i_81);
      p_81 = (ATerm) ATgetNext((ATermList) i_81);
      h_81 :
      if(match_cons(j_81, sym__2))
        {
          n_81 = ATgetArgument(j_81, 0);
          o_81 = ATgetArgument(j_81, 1);
          {
            ATerm r_81 = NULL;
            if(((n_81 != NULL) && (n_81 != o_81)))
              _fail(o_81);
            else
              n_81 = o_81;
            {
              if(((r_81 != NULL) && (r_81 != p_81)))
                _fail(p_81);
              else
                r_81 = p_81;
              t = not_null(r_81);
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
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL;
      y_81 = t;
      u_81 :
      if(match_cons(y_81, sym__2))
        {
          z_81 = ATgetArgument(y_81, 0);
          a_82 = ATgetArgument(y_81, 1);
          {
            t = not_null(z_81);
            {
              ATerm g_82 (ATerm t)
              {
                ATerm u_17 = t;
                int c_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(c_18);
                  }
                else
                  {
                    t = u_17;
                    {
                      ATerm d_18 = t;
                      int e_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_2 (ATerm t)
                          {
                            t = not_null(a_82);
                            return(t);
                          }
                          t = HdMember_1(t, o_2);
                          t = g_82(t);
                          LocalPopChoice(e_18);
                        }
                      else
                        {
                          t = d_18;
                          t = Cons_2(t, _id, g_82);
                        }
                    }
                  }
                return(t);
              }
              t = g_82(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
        ATerm p_2 (ATerm t)
        {
          ATerm d_82 = NULL;
          d_82 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(d_82));
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          ATerm f_18 = t;
          int q_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_2 (ATerm t)
              {
                ATerm s_18 = t;
                int t_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(t_18);
                  }
                else
                  {
                    t = s_18;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, s_2);
              LocalPopChoice(q_18);
            }
          else
            {
              t = f_18;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, p_2, q_2, r_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm))
{
  ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL;
  s_82 = t;
  q_82 :
  if(match_cons(s_82, sym__5))
    {
      t_82 = ATgetArgument(s_82, 0);
      w_82 = ATgetArgument(s_82, 1);
      x_82 = ATgetArgument(s_82, 2);
      y_82 = ATgetArgument(s_82, 3);
      z_82 = ATgetArgument(s_82, 4);
      r_82 :
      if(((ATgetType(t_82) == AT_LIST) && ((ATermList) t_82 != ATempty)))
        {
          u_82 = ATgetFirst((ATermList) t_82);
          v_82 = (ATerm) ATgetNext((ATermList) t_82);
          {
            ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,p_83 = NULL,r_83 = NULL,t_83 = NULL;
            ATerm u_18;
            u_18 = t;
            {
              ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_82), not_null(x_82));
              {
                t = m_77(t);
                {
                  k_83 = t;
                  m_82 :
                  if(match_cons(k_83, sym__2))
                    {
                      l_83 = ATgetArgument(k_83, 0);
                      m_83 = ATgetArgument(k_83, 1);
                      {
                        ATerm n_83 = NULL;
                        if(((h_83 != NULL) && (h_83 != l_83)))
                          _fail(l_83);
                        else
                          h_83 = l_83;
                        {
                          if(((g_83 != NULL) && (g_83 != m_83)))
                            _fail(m_83);
                          else
                            g_83 = m_83;
                          {
                            t = not_null(h_83);
                            {
                              ATerm o_83 = NULL;
                              t = n_77(t);
                              {
                                n_83 = t;
                                {
                                  if(((i_83 != NULL) && (i_83 != n_83)))
                                    _fail(n_83);
                                  else
                                    i_83 = n_83;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_83), not_null(w_82));
                                    {
                                      t = diff_0(t);
                                      {
                                        o_83 = t;
                                        if(((j_83 != NULL) && (j_83 != o_83)))
                                          _fail(o_83);
                                        else
                                          j_83 = o_83;
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
            t = u_18;
            {
              ATerm v_18;
              v_18 = t;
              {
                ATerm q_83 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_83), not_null(v_82));
                {
                  t = conc_0(t);
                  {
                    q_83 = t;
                    if(((p_83 != NULL) && (p_83 != q_83)))
                      _fail(q_83);
                    else
                      p_83 = q_83;
                  }
                }
              }
              t = v_18;
              {
                ATerm w_18;
                w_18 = t;
                {
                  ATerm s_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_83), not_null(w_82));
                  {
                    t = conc_0(t);
                    {
                      s_83 = t;
                      if(((r_83 != NULL) && (r_83 != s_83)))
                        _fail(s_83);
                      else
                        r_83 = s_83;
                    }
                  }
                }
                t = w_18;
                {
                  ATerm u_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(u_82), not_null(h_83), not_null(y_82));
                  {
                    t = o_77(t);
                    {
                      u_83 = t;
                      if(((t_83 != NULL) && (t_83 != u_83)))
                        _fail(u_83);
                      else
                        t_83 = u_83;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(p_83), not_null(r_83), not_null(g_83), not_null(t_83), not_null(z_82));
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
  ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,o_84 = NULL,p_84 = NULL;
  f_84 = t;
  d_84 :
  if(match_cons(f_84, sym__5))
    {
      g_84 = ATgetArgument(f_84, 0);
      h_84 = ATgetArgument(f_84, 1);
      i_84 = ATgetArgument(f_84, 2);
      o_84 = ATgetArgument(f_84, 3);
      p_84 = ATgetArgument(f_84, 4);
      e_84 :
      if(((ATermList) g_84 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_84), not_null(p_84));
        }
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
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
  z_84 = t;
  w_84 :
  if(match_cons(z_84, sym__3))
    {
      a_85 = ATgetArgument(z_84, 0);
      b_85 = ATgetArgument(z_84, 1);
      c_85 = ATgetArgument(z_84, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(a_85), not_null(a_85), not_null(b_85), not_null(c_85), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm e_88 (ATerm), ATerm f_88 (ATerm))
{
  ATerm h_85 (ATerm t)
  {
    ATerm y_18 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_88(t);
        LocalPopChoice(d_19);
      }
    else
      {
        t = y_18;
        {
          t = f_88(t);
          t = h_85(t);
        }
      }
    return(t);
  }
  t = h_85(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm))
{
  t = h_88(t);
  t = while_not_2(t, i_88, j_88);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, v_77, w_77, x_77);
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
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
    ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL;
    w_85 = t;
    q_85 :
    if(match_cons(w_85, sym__3))
      {
        x_85 = ATgetArgument(w_85, 0);
        y_85 = ATgetArgument(w_85, 1);
        z_85 = ATgetArgument(w_85, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(z_85)), not_null(y_85));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, u_2, v_2);
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        {
          t = MissingDefs_0(t);
          {
            t = term_e_7;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL;
  i_86 = t;
  h_86 :
  if(match_cons(i_86, sym__2))
    {
      j_86 = ATgetArgument(i_86, 0);
      k_86 = ATgetArgument(i_86, 1);
      {
        ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL;
        ATerm j_19;
        j_19 = t;
        {
          ATerm q_86 = NULL;
          ATerm r_86 = NULL,s_86 = NULL,t_86 = NULL;
          t = g_77(t);
          {
            q_86 = t;
            {
              if(((n_86 != NULL) && (n_86 != q_86)))
                _fail(q_86);
              else
                n_86 = q_86;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(n_86), not_null(j_86), not_null(k_86));
                {
                  t = table_push_0(t);
                  {
                    ATerm p_19 = t;
                    int r_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_86), term_s_19);
                        t = table_get_0(t);
                        LocalPopChoice(r_19);
                      }
                    else
                      {
                        t = p_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      r_86 = t;
                      g_86 :
                      if(((ATgetType(r_86) == AT_LIST) && ((ATermList) r_86 != ATempty)))
                        {
                          s_86 = ATgetFirst((ATermList) r_86);
                          t_86 = (ATerm) ATgetNext((ATermList) r_86);
                          {
                            if(((o_86 != NULL) && (o_86 != s_86)))
                              _fail(s_86);
                            else
                              o_86 = s_86;
                            {
                              if(((p_86 != NULL) && (p_86 != t_86)))
                                _fail(t_86);
                              else
                                p_86 = t_86;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(n_86), term_s_19, (ATerm) ATinsert(CheckATermList(not_null(p_86)), (ATerm) ATinsert(CheckATermList(not_null(o_86)), not_null(j_86))));
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
        t = j_19;
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
  ATerm b_87 = NULL;
  ATerm d_87 = NULL;
  b_87 = t;
  {
    ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(b_87));
    {
      ATerm x_2 (ATerm t)
      {
        t = term_t_19;
        return(t);
      }
      t = rewrite_1(t, x_2);
      {
        e_87 = t;
        z_86 :
        if(match_cons(e_87, sym_Defined_2))
          {
            f_87 = ATgetArgument(e_87, 0);
            g_87 = ATgetArgument(e_87, 1);
            a_87 :
            if(match_string(f_87, "f_0"))
              {
                if(((d_87 != NULL) && (d_87 != g_87)))
                  _fail(g_87);
                else
                  d_87 = g_87;
              }
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
    t = not_null(d_87);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm l_87 = NULL,m_87 = NULL,r_87 = NULL;
  l_87 = t;
  k_87 :
  if(((ATgetType(l_87) == AT_LIST) && ((ATermList) l_87 != ATempty)))
    {
      m_87 = ATgetFirst((ATermList) l_87);
      r_87 = (ATerm) ATgetNext((ATermList) l_87);
      t = not_null(m_87);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL;
  x_87 = t;
  w_87 :
  if(match_cons(x_87, sym__2))
    {
      y_87 = ATgetArgument(x_87, 0);
      z_87 = ATgetArgument(x_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_87), not_null(z_87));
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
ATerm rewrite_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm l_88 = NULL;
  ATerm n_88 = NULL;
  l_88 = t;
  {
    ATerm o_88 = NULL;
    t = term_f_16;
    {
      t = i_77(t);
      {
        o_88 = t;
        if(((n_88 != NULL) && (n_88 != o_88)))
          _fail(o_88);
        else
          n_88 = o_88;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_88), not_null(l_88));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
  w_88 = t;
  v_88 :
  if(match_cons(w_88, sym__2))
    {
      x_88 = ATgetArgument(w_88, 0);
      y_88 = ATgetArgument(w_88, 1);
      {
        ATerm b_89 = NULL,c_89 = NULL;
        ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(y_88), not_null(x_88));
        {
          ATerm y_2 (ATerm t)
          {
            t = term_u_19;
            return(t);
          }
          t = rewrite_1(t, y_2);
          {
            d_89 = t;
            t_88 :
            if(match_cons(d_89, sym_Defined_3))
              {
                e_89 = ATgetArgument(d_89, 0);
                f_89 = ATgetArgument(d_89, 1);
                g_89 = ATgetArgument(d_89, 2);
                u_88 :
                if(match_string(e_89, "e_0"))
                  {
                    if(((b_89 != NULL) && (b_89 != f_89)))
                      _fail(f_89);
                    else
                      b_89 = f_89;
                    if(((c_89 != NULL) && (c_89 != g_89)))
                      _fail(g_89);
                    else
                      c_89 = g_89;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(c_89)), not_null(b_89));
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
  ATerm z_2 (ATerm t)
  {
    ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL;
    p_89 = t;
    o_89 :
    if(match_cons(p_89, sym_SDef_3))
      {
        q_89 = ATgetArgument(p_89, 0);
        r_89 = ATgetArgument(p_89, 1);
        s_89 = ATgetArgument(p_89, 2);
        {
          ATerm x_89 = NULL,y_89 = NULL,z_89 = NULL;
          ATerm v_19;
          v_19 = t;
          {
            ATerm a_90 = NULL;
            t = not_null(r_89);
            {
              ATerm b_90 = NULL;
              t = length_0(t);
              {
                a_90 = t;
                {
                  if(((y_89 != NULL) && (y_89 != a_90)))
                    _fail(a_90);
                  else
                    y_89 = a_90;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_89), not_null(y_89));
                    {
                      ATerm c_90 = NULL,e_90 = NULL;
                      ATerm y_19 = t;
                      int z_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(z_19);
                        }
                      else
                        {
                          t = y_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        b_90 = t;
                        {
                          if(((x_89 != NULL) && (x_89 != b_90)))
                            _fail(b_90);
                          else
                            x_89 = b_90;
                          {
                            ATerm d_90 = NULL;
                            t = not_null(q_89);
                            {
                              ATerm a_20 = t;
                              int b_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(b_20);
                                }
                              else
                                {
                                  t = a_20;
                                  t = (ATerm) ATempty;
                                }
                              {
                                d_90 = t;
                                if(((c_90 != NULL) && (c_90 != d_90)))
                                  _fail(d_90);
                                else
                                  c_90 = d_90;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(y_89)), not_null(c_90));
                              {
                                t = union_0(t);
                                {
                                  e_90 = t;
                                  {
                                    if(((z_89 != NULL) && (z_89 != e_90)))
                                      _fail(e_90);
                                    else
                                      z_89 = e_90;
                                    {
                                      ATerm g_20;
                                      g_20 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(y_89), not_null(q_89)), (ATerm) ATmakeAppl(sym_Defined_3, term_h_20, not_null(p_89), not_null(x_89)));
                                        {
                                          ATerm c_3 (ATerm t)
                                          {
                                            t = term_u_19;
                                            return(t);
                                          }
                                          t = assert_1(t, c_3);
                                        }
                                      }
                                      t = g_20;
                                      {
                                        ATerm i_20;
                                        i_20 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(q_89)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_20, not_null(z_89)));
                                          {
                                            ATerm d_3 (ATerm t)
                                            {
                                              t = term_t_19;
                                              return(t);
                                            }
                                            t = assert_1(t, d_3);
                                          }
                                        }
                                        t = i_20;
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
          t = v_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, z_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = term_k_20;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_e_7;
    return(t);
  }
  t = foldr_3(t, e_3, add_0, f_3);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL;
  s_90 = t;
  r_90 :
  if(((ATgetType(s_90) == AT_LIST) && ((ATermList) s_90 != ATempty)))
    {
      t_90 = ATgetFirst((ATermList) s_90);
      u_90 = (ATerm) ATgetNext((ATermList) s_90);
      {
        t = i_85(t);
        {
          ATerm g_3 (ATerm t)
          {
            ATerm x_90 = NULL;
            x_90 = t;
            if(((t_90 != NULL) && (t_90 != x_90)))
              _fail(x_90);
            else
              t_90 = x_90;
            return(t);
          }
          t = fetch_1(t, g_3);
        }
        t = not_null(u_90);
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
  ATerm c_91 = NULL,d_91 = NULL,e_91 = NULL;
  c_91 = t;
  b_91 :
  if(match_cons(c_91, sym__2))
    {
      d_91 = ATgetArgument(c_91, 0);
      e_91 = ATgetArgument(c_91, 1);
      {
        t = not_null(d_91);
        {
          ATerm i_91 (ATerm t)
          {
            ATerm l_20 = t;
            int m_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_91);
                LocalPopChoice(m_20);
              }
            else
              {
                t = l_20;
                {
                  ATerm n_20 = t;
                  int s_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_3 (ATerm t)
                      {
                        t = not_null(e_91);
                        return(t);
                      }
                      t = HdMember_1(t, h_3);
                      t = i_91(t);
                      LocalPopChoice(s_20);
                    }
                  else
                    {
                      t = n_20;
                      t = Cons_2(t, _id, i_91);
                    }
                }
              }
            return(t);
          }
          t = i_91(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm))
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_84(t);
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL;
        n_91 = t;
        m_91 :
        if(((ATgetType(n_91) == AT_LIST) && ((ATermList) n_91 != ATempty)))
          {
            o_91 = ATgetFirst((ATermList) n_91);
            p_91 = (ATerm) ATgetNext((ATermList) n_91);
            {
              ATerm s_91 = NULL,u_91 = NULL;
              ATerm y_20;
              y_20 = t;
              {
                ATerm t_91 = NULL;
                t = not_null(o_91);
                {
                  t = n_84(t);
                  {
                    t_91 = t;
                    if(((s_91 != NULL) && (s_91 != t_91)))
                      _fail(t_91);
                    else
                      s_91 = t_91;
                  }
                }
              }
              t = y_20;
              {
                ATerm v_91 = NULL;
                t = not_null(p_91);
                {
                  t = foldr_3(t, l_84, m_84, n_84);
                  {
                    v_91 = t;
                    if(((u_91 != NULL) && (u_91 != v_91)))
                      _fail(v_91);
                    else
                      u_91 = v_91;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_91), not_null(u_91));
                  t = m_84(t);
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
  ATerm i_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL;
    c_92 = t;
    b_92 :
    if(match_cons(c_92, sym_SDef_3))
      {
        d_92 = ATgetArgument(c_92, 0);
        e_92 = ATgetArgument(c_92, 1);
        f_92 = ATgetArgument(c_92, 2);
        {
          ATerm i_92 = NULL;
          ATerm k_92 = NULL;
          t = not_null(e_92);
          {
            t = length_0(t);
            {
              k_92 = t;
              if(((i_92 != NULL) && (i_92 != k_92)))
                _fail(k_92);
              else
                i_92 = k_92;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(d_92), not_null(i_92)));
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = foldr_3(t, i_3, union_0, j_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm p_92 = NULL,x_92 = NULL;
  ATerm a_21;
  a_21 = t;
  {
    ATerm q_92 = NULL;
    t = definition_names_0(t);
    {
      q_92 = t;
      if(((p_92 != NULL) && (p_92 != q_92)))
        _fail(q_92);
      else
        p_92 = q_92;
    }
  }
  t = a_21;
  {
    ATerm y_92 = NULL;
    t = sort_defs_0(t);
    {
      y_92 = t;
      if(((x_92 != NULL) && (x_92 != y_92)))
        _fail(y_92);
      else
        x_92 = y_92;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(p_92), not_null(x_92), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm i_93 = NULL,j_93 = NULL;
  i_93 = t;
  h_93 :
  if(match_cons(i_93, sym_Strategies_1))
    {
      j_93 = ATgetArgument(i_93, 0);
      {
        ATerm m_93 = NULL,o_93 = NULL;
        ATerm n_93 = NULL;
        t = SSLgetAnnotations(not_null(i_93));
        {
          n_93 = t;
          if(((m_93 != NULL) && (m_93 != n_93)))
            _fail(n_93);
          else
            m_93 = n_93;
        }
        {
          t = not_null(j_93);
          {
            ATerm q_93 = NULL;
            t = j_74(t);
            {
              o_93 = t;
              {
                ATerm r_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(o_93)), not_null(m_93));
                {
                  r_93 = t;
                  if(((q_93 != NULL) && (q_93 != r_93)))
                    _fail(r_93);
                  else
                    q_93 = r_93;
                }
                t = not_null(q_93);
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
ATerm Cons_2 (ATerm t, ATerm s_76 (ATerm), ATerm t_76 (ATerm))
{
  ATerm c_94 = NULL,d_94 = NULL,g_94 = NULL;
  c_94 = t;
  b_94 :
  if(((ATgetType(c_94) == AT_LIST) && ((ATermList) c_94 != ATempty)))
    {
      d_94 = ATgetFirst((ATermList) c_94);
      g_94 = (ATerm) ATgetNext((ATermList) c_94);
      {
        ATerm k_94 = NULL,m_94 = NULL;
        ATerm l_94 = NULL;
        t = SSLgetAnnotations(not_null(c_94));
        {
          l_94 = t;
          if(((k_94 != NULL) && (k_94 != l_94)))
            _fail(l_94);
          else
            k_94 = l_94;
        }
        {
          t = not_null(d_94);
          {
            ATerm o_94 = NULL;
            t = s_76(t);
            {
              m_94 = t;
              {
                t = not_null(g_94);
                {
                  ATerm q_94 = NULL;
                  t = t_76(t);
                  {
                    o_94 = t;
                    {
                      ATerm r_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_94)), not_null(m_94)), not_null(k_94));
                      {
                        r_94 = t;
                        if(((q_94 != NULL) && (q_94 != r_94)))
                          _fail(r_94);
                        else
                          q_94 = r_94;
                      }
                      t = not_null(q_94);
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
ATerm Specification_1 (ATerm t, ATerm l_74 (ATerm))
{
  ATerm f_95 = NULL,g_95 = NULL;
  f_95 = t;
  e_95 :
  if(match_cons(f_95, sym_Specification_1))
    {
      g_95 = ATgetArgument(f_95, 0);
      {
        ATerm j_95 = NULL,m_95 = NULL;
        ATerm k_95 = NULL;
        t = SSLgetAnnotations(not_null(f_95));
        {
          k_95 = t;
          if(((j_95 != NULL) && (j_95 != k_95)))
            _fail(k_95);
          else
            j_95 = k_95;
        }
        {
          t = not_null(g_95);
          {
            ATerm o_95 = NULL;
            t = l_74(t);
            {
              m_95 = t;
              {
                ATerm p_95 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(m_95)), not_null(j_95));
                {
                  p_95 = t;
                  if(((o_95 != NULL) && (o_95 != p_95)))
                    _fail(p_95);
                  else
                    o_95 = p_95;
                }
                t = not_null(o_95);
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
ATerm _2 (ATerm t, ATerm t_65 (ATerm), ATerm u_65 (ATerm))
{
  ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL;
  a_96 = t;
  z_95 :
  if(match_cons(a_96, sym__2))
    {
      b_96 = ATgetArgument(a_96, 0);
      c_96 = ATgetArgument(a_96, 1);
      {
        ATerm g_96 = NULL,i_96 = NULL;
        ATerm h_96 = NULL;
        t = SSLgetAnnotations(not_null(a_96));
        {
          h_96 = t;
          if(((g_96 != NULL) && (g_96 != h_96)))
            _fail(h_96);
          else
            g_96 = h_96;
        }
        {
          t = not_null(b_96);
          {
            ATerm k_96 = NULL;
            t = t_65(t);
            {
              i_96 = t;
              {
                t = not_null(c_96);
                {
                  ATerm m_96 = NULL;
                  t = u_65(t);
                  {
                    k_96 = t;
                    {
                      ATerm n_96 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_96), not_null(k_96)), not_null(g_96));
                      {
                        n_96 = t;
                        if(((m_96 != NULL) && (m_96 != n_96)))
                          _fail(n_96);
                        else
                          m_96 = n_96;
                      }
                      t = not_null(m_96);
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
  ATerm v_96 = NULL;
  ATerm d_21;
  d_21 = t;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm w_96 = NULL,x_96 = NULL;
      w_96 = t;
      u_96 :
      if(match_cons(w_96, sym_Program_1))
        {
          x_96 = ATgetArgument(w_96, 0);
          if(((v_96 != NULL) && (v_96 != x_96)))
            _fail(x_96);
          else
            v_96 = x_96;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, k_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_21), not_null(v_96)), term_e_21));
      {
        t = printnl_0(t);
        {
          t = term_e_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATempty, term_g_21));
  {
    t = printnl_0(t);
    {
      t = term_e_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_97 = NULL;
  a_97 = t;
  t = SSL_TicksToSeconds(not_null(a_97));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_97 = NULL,i_97 = NULL,j_97 = NULL;
  h_97 = t;
  g_97 :
  if(match_cons(h_97, sym__2))
    {
      i_97 = ATgetArgument(h_97, 0);
      j_97 = ATgetArgument(h_97, 1);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_97), not_null(j_97));
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = SSL_addr(not_null(i_97), not_null(j_97));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_84 (ATerm), ATerm k_84 (ATerm))
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_84(t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL;
        s_97 = t;
        r_97 :
        if(((ATgetType(s_97) == AT_LIST) && ((ATermList) s_97 != ATempty)))
          {
            t_97 = ATgetFirst((ATermList) s_97);
            u_97 = (ATerm) ATgetNext((ATermList) s_97);
            {
              ATerm x_97 = NULL;
              ATerm y_97 = NULL;
              t = not_null(u_97);
              {
                t = foldr_2(t, j_84, k_84);
                {
                  y_97 = t;
                  if(((x_97 != NULL) && (x_97 != y_97)))
                    _fail(y_97);
                  else
                    x_97 = y_97;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_97), not_null(x_97));
                t = k_84(t);
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
ATerm crush_2 (ATerm t, ATerm r_85 (ATerm), ATerm s_85 (ATerm))
{
  ATerm f_98 = NULL;
  ATerm h_98 = NULL;
  f_98 = t;
  {
    ATerm i_98 = NULL;
    ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL;
    t = not_null(f_98);
    {
      i_98 = t;
      {
        t = SSL_explode_term(not_null(i_98));
        {
          k_98 = t;
          e_98 :
          if(match_cons(k_98, sym__2))
            {
              l_98 = ATgetArgument(k_98, 0);
              m_98 = ATgetArgument(k_98, 1);
              if(((h_98 != NULL) && (h_98 != m_98)))
                _fail(m_98);
              else
                h_98 = m_98;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_98);
      t = foldr_2(t, r_85, s_85);
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
    ATerm l_3 (ATerm t)
    {
      t = term_k_20;
      return(t);
    }
    t = crush_2(t, l_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL;
  ATerm m_3 (ATerm t)
  {
    ATerm i_99 = NULL;
    ATerm n_3 (ATerm t)
    {
      ATerm m_21 = t;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            ATerm d_99 = NULL;
            d_99 = t;
            v_98 :
            if(!(match_cons(d_99, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_3);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_21;
        }
      return(t);
    }
    t = _2(t, n_3, _id);
    {
      ATerm p_3 (ATerm t)
      {
        ATerm q_3 (ATerm t)
        {
          ATerm e_99 = NULL,f_99 = NULL;
          e_99 = t;
          x_98 :
          if(match_cons(e_99, sym_Runtime_1))
            {
              f_99 = ATgetArgument(e_99, 0);
              if(((b_99 != NULL) && (b_99 != f_99)))
                _fail(f_99);
              else
                b_99 = f_99;
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
        ATerm r_3 (ATerm t)
        {
          ATerm s_3 (ATerm t)
          {
            ATerm g_99 = NULL,h_99 = NULL;
            g_99 = t;
            z_98 :
            if(match_cons(g_99, sym_Program_1))
              {
                h_99 = ATgetArgument(g_99, 0);
                if(((c_99 != NULL) && (c_99 != h_99)))
                  _fail(h_99);
                else
                  c_99 = h_99;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_3);
          return(t);
        }
        t = _2(t, r_3, _id);
        {
          ATerm j_99 = NULL;
          t = run_time_0(t);
          {
            j_99 = t;
            if(((i_99 != NULL) && (i_99 != j_99)))
              _fail(j_99);
            else
              i_99 = j_99;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_21), not_null(i_99)), term_n_21), not_null(c_99)));
            t = printnl_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, m_3);
  {
    t = term_k_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_99 = NULL,t_99 = NULL,u_99 = NULL;
  s_99 = t;
  r_99 :
  if(match_cons(s_99, sym__2))
    {
      t_99 = ATgetArgument(s_99, 0);
      u_99 = ATgetArgument(s_99, 1);
      t = SSL_WriteToTextFile(not_null(t_99), not_null(u_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL;
  a_100 = t;
  z_99 :
  if(match_cons(a_100, sym__2))
    {
      b_100 = ATgetArgument(a_100, 0);
      c_100 = ATgetArgument(a_100, 1);
      t = SSL_WriteToBinaryFile(not_null(b_100), not_null(c_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm m_100 = NULL;
  ATerm q_21;
  q_21 = t;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm s_21 = t;
      int t_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_3 (ATerm t)
          {
            ATerm n_100 = NULL,o_100 = NULL;
            n_100 = t;
            h_100 :
            if(match_cons(n_100, sym_Output_1))
              {
                o_100 = ATgetArgument(n_100, 0);
                if(((m_100 != NULL) && (m_100 != o_100)))
                  _fail(o_100);
                else
                  m_100 = o_100;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, u_3);
          LocalPopChoice(t_21);
        }
      else
        {
          t = s_21;
          {
            ATerm p_100 = NULL;
            t = term_c_22;
            {
              p_100 = t;
              if(((m_100 != NULL) && (m_100 != p_100)))
                _fail(p_100);
              else
                m_100 = p_100;
            }
          }
        }
      return(t);
    }
    t = _2(t, t_3, _id);
  }
  t = q_21;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm w_3 (ATerm t)
      {
        t = not_null(m_100);
        return(t);
      }
      t = split_2(t, w_3, _id);
      return(t);
    }
    t = _2(t, _id, v_3);
    {
      ATerm d_22 = t;
      int e_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_3 (ATerm t)
          {
            ATerm y_3 (ATerm t)
            {
              ATerm q_100 = NULL;
              q_100 = t;
              j_100 :
              if(!(match_cons(q_100, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, y_3);
            return(t);
          }
          t = _2(t, x_3, WriteToBinaryFile_0);
          LocalPopChoice(e_22);
        }
      else
        {
          t = d_22;
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
ATerm apply_strategy_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm a_101 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL;
  ATerm f_22;
  f_22 = t;
  t = dtime_0(t);
  t = f_22;
  {
    t = x_81(t);
    {
      ATerm n_22;
      n_22 = t;
      {
        ATerm b_101 = NULL;
        t = dtime_0(t);
        {
          b_101 = t;
          if(((a_101 != NULL) && (a_101 != b_101)))
            _fail(b_101);
          else
            a_101 = b_101;
        }
      }
      t = n_22;
      {
        c_101 = t;
        x_100 :
        if(match_cons(c_101, sym__2))
          {
            d_101 = ATgetArgument(c_101, 0);
            e_101 = ATgetArgument(c_101, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_101)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_101))), not_null(e_101));
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
  ATerm k_101 = NULL;
  k_101 = t;
  t = SSL_ReadFromFile(not_null(k_101));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_94 (ATerm), ATerm f_94 (ATerm))
{
  ATerm p_101 = NULL,r_101 = NULL;
  ATerm o_22;
  o_22 = t;
  {
    ATerm q_101 = NULL;
    t = e_94(t);
    {
      q_101 = t;
      if(((p_101 != NULL) && (p_101 != q_101)))
        _fail(q_101);
      else
        p_101 = q_101;
    }
  }
  t = o_22;
  {
    ATerm s_101 = NULL;
    t = f_94(t);
    {
      s_101 = t;
      if(((r_101 != NULL) && (r_101 != s_101)))
        _fail(s_101);
      else
        r_101 = s_101;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_101), not_null(r_101));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_101 = NULL;
  ATerm u_22;
  u_22 = t;
  {
    ATerm v_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_3 (ATerm t)
        {
          ATerm z_101 = NULL,a_102 = NULL;
          z_101 = t;
          w_101 :
          if(match_cons(z_101, sym_Input_1))
            {
              a_102 = ATgetArgument(z_101, 0);
              if(((y_101 != NULL) && (y_101 != a_102)))
                _fail(a_102);
              else
                y_101 = a_102;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, z_3);
        LocalPopChoice(a_23);
      }
    else
      {
        t = v_22;
        {
          ATerm c_102 = NULL;
          t = term_f_23;
          {
            c_102 = t;
            if(((y_101 != NULL) && (y_101 != c_102)))
              _fail(c_102);
            else
              y_101 = c_102;
          }
        }
      }
  }
  t = u_22;
  {
    ATerm a_4 (ATerm t)
    {
      t = not_null(y_101);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_102 = NULL;
  j_102 = t;
  i_102 :
  if(match_cons(j_102, sym_Version_0))
    {
      ATerm l_102 = NULL,n_102 = NULL;
      ATerm g_23;
      g_23 = t;
      {
        ATerm m_102 = NULL;
        t = SSLgetAnnotations(not_null(j_102));
        {
          m_102 = t;
          if(((l_102 != NULL) && (l_102 != m_102)))
            _fail(m_102);
          else
            l_102 = m_102;
        }
      }
      t = g_23;
      {
        ATerm q_102 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_102));
        {
          q_102 = t;
          if(((n_102 != NULL) && (n_102 != q_102)))
            _fail(q_102);
          else
            n_102 = q_102;
        }
        t = not_null(n_102);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_81 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        {
          ATerm j_23 = t;
          int k_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(k_23);
            }
          else
            {
              t = j_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, b_4);
  t = v_81(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_102 = NULL;
  v_102 = t;
  t = SSL_table_create(not_null(v_102));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_102 = NULL;
  z_102 = t;
  {
    ATerm l_23;
    l_23 = t;
    {
      t = term_m_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_23, term_n_23, not_null(z_102));
          t = table_put_0(t);
        }
      }
    }
    t = l_23;
  }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL,g_103 = NULL;
  e_103 = t;
  d_103 :
  if(match_cons(e_103, sym__2))
    {
      f_103 = ATgetArgument(e_103, 0);
      g_103 = ATgetArgument(e_103, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_23, not_null(f_103), not_null(g_103));
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
  ATerm p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL;
  p_103 = t;
  n_103 :
  if(match_string(p_103, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(p_103) == AT_LIST) && ((ATermList) p_103 != ATempty)))
        {
          q_103 = ATgetFirst((ATermList) p_103);
          r_103 = (ATerm) ATgetNext((ATermList) p_103);
          o_103 :
          if(((ATgetType(r_103) == AT_LIST) && ((ATermList) r_103 != ATempty)))
            {
              s_103 = ATgetFirst((ATermList) r_103);
              t_103 = (ATerm) ATgetNext((ATermList) r_103);
              {
                ATerm x_103 = NULL;
                ATerm u_23;
                u_23 = t;
                {
                  t = not_null(q_103);
                  t = l_0(t);
                }
                t = u_23;
                {
                  ATerm y_103 = NULL;
                  t = not_null(s_103);
                  {
                    t = m_0(t);
                    {
                      y_103 = t;
                      if(((x_103 != NULL) && (x_103 != y_103)))
                        _fail(y_103);
                      else
                        x_103 = y_103;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_103)), not_null(x_103));
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
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_4 (ATerm t)
      {
        ATerm q_104 = NULL;
        q_104 = t;
        c_104 :
        if(!(match_string(q_104, "-S")))
          {
            if(!(match_string(q_104, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = term_f_24;
        t = set_config_0(t);
        t = term_g_24;
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = term_h_24;
        return(t);
      }
      t = Option_3(t, c_4, g_4, h_4);
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              ATerm r_104 = NULL;
              r_104 = t;
              d_104 :
              if(!(match_string(r_104, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              t = term_n_24;
              t = set_config_0(t);
              t = term_o_24;
              return(t);
            }
            ATerm k_4 (ATerm t)
            {
              t = term_p_24;
              return(t);
            }
            t = Option_3(t, i_4, j_4, k_4);
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            {
              ATerm q_24 = t;
              int r_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_4 (ATerm t)
                  {
                    ATerm s_104 = NULL;
                    s_104 = t;
                    e_104 :
                    if(!(match_string(s_104, "-v")))
                      {
                        if(!(match_string(s_104, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm m_4 (ATerm t)
                  {
                    t = term_t_24;
                    t = set_config_0(t);
                    t = term_u_24;
                    return(t);
                  }
                  ATerm n_4 (ATerm t)
                  {
                    t = term_w_24;
                    return(t);
                  }
                  t = Option_3(t, l_4, m_4, n_4);
                  LocalPopChoice(r_24);
                }
              else
                {
                  t = q_24;
                  {
                    ATerm x_24 = t;
                    int y_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_4 (ATerm t)
                        {
                          ATerm t_104 = NULL;
                          t_104 = t;
                          f_104 :
                          if(!(match_string(t_104, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm p_4 (ATerm t)
                        {
                          ATerm w_104 = NULL;
                          ATerm z_24;
                          z_24 = t;
                          {
                            ATerm u_104 = NULL;
                            ATerm v_104 = NULL;
                            v_104 = t;
                            if(((u_104 != NULL) && (u_104 != v_104)))
                              _fail(v_104);
                            else
                              u_104 = v_104;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_b_25, not_null(u_104));
                              t = set_config_0(t);
                            }
                          }
                          t = z_24;
                          {
                            ATerm x_104 = NULL;
                            x_104 = t;
                            if(((w_104 != NULL) && (w_104 != x_104)))
                              _fail(x_104);
                            else
                              w_104 = x_104;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(w_104));
                          }
                          return(t);
                        }
                        ATerm q_4 (ATerm t)
                        {
                          t = term_g_25;
                          return(t);
                        }
                        t = ArgOption_3(t, o_4, p_4, q_4);
                        LocalPopChoice(y_24);
                      }
                    else
                      {
                        t = x_24;
                        {
                          ATerm h_25 = t;
                          int q_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_4 (ATerm t)
                              {
                                ATerm y_104 = NULL;
                                y_104 = t;
                                i_104 :
                                if(!(match_string(y_104, "-i")))
                                  {
                                    if(!(match_string(y_104, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm s_4 (ATerm t)
                              {
                                ATerm b_105 = NULL;
                                ATerm a_26;
                                a_26 = t;
                                {
                                  ATerm z_104 = NULL;
                                  ATerm a_105 = NULL;
                                  a_105 = t;
                                  if(((z_104 != NULL) && (z_104 != a_105)))
                                    _fail(a_105);
                                  else
                                    z_104 = a_105;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_c_26, not_null(z_104));
                                    t = set_config_0(t);
                                  }
                                }
                                t = a_26;
                                {
                                  ATerm c_105 = NULL;
                                  c_105 = t;
                                  if(((b_105 != NULL) && (b_105 != c_105)))
                                    _fail(c_105);
                                  else
                                    b_105 = c_105;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_105));
                                }
                                return(t);
                              }
                              ATerm t_4 (ATerm t)
                              {
                                t = term_d_26;
                                return(t);
                              }
                              t = ArgOption_3(t, r_4, s_4, t_4);
                              LocalPopChoice(q_25);
                            }
                          else
                            {
                              t = h_25;
                              {
                                ATerm e_26 = t;
                                int f_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_4 (ATerm t)
                                    {
                                      ATerm d_105 = NULL;
                                      d_105 = t;
                                      l_104 :
                                      if(!(match_string(d_105, "-o")))
                                        {
                                          if(!(match_string(d_105, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm v_4 (ATerm t)
                                    {
                                      ATerm g_105 = NULL;
                                      ATerm g_26;
                                      g_26 = t;
                                      {
                                        ATerm e_105 = NULL;
                                        ATerm f_105 = NULL;
                                        f_105 = t;
                                        if(((e_105 != NULL) && (e_105 != f_105)))
                                          _fail(f_105);
                                        else
                                          e_105 = f_105;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_k_26, not_null(e_105));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = g_26;
                                      {
                                        ATerm h_105 = NULL;
                                        h_105 = t;
                                        if(((g_105 != NULL) && (g_105 != h_105)))
                                          _fail(h_105);
                                        else
                                          g_105 = h_105;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_105));
                                      }
                                      return(t);
                                    }
                                    ATerm w_4 (ATerm t)
                                    {
                                      t = term_o_26;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, u_4, v_4, w_4);
                                    LocalPopChoice(f_26);
                                  }
                                else
                                  {
                                    t = e_26;
                                    {
                                      ATerm p_26 = t;
                                      int q_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_4 (ATerm t)
                                          {
                                            ATerm i_105 = NULL;
                                            i_105 = t;
                                            o_104 :
                                            if(!(match_string(i_105, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm y_4 (ATerm t)
                                          {
                                            t = term_w_26;
                                            t = set_config_0(t);
                                            t = term_x_26;
                                            return(t);
                                          }
                                          ATerm z_4 (ATerm t)
                                          {
                                            t = term_y_26;
                                            return(t);
                                          }
                                          t = Option_3(t, x_4, y_4, z_4);
                                          LocalPopChoice(q_26);
                                        }
                                      else
                                        {
                                          t = p_26;
                                          {
                                            ATerm a_5 (ATerm t)
                                            {
                                              ATerm j_105 = NULL;
                                              j_105 = t;
                                              p_104 :
                                              if(!(match_string(j_105, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm b_5 (ATerm t)
                                            {
                                              t = term_a_27;
                                              t = set_config_0(t);
                                              t = term_b_27;
                                              return(t);
                                            }
                                            ATerm c_5 (ATerm t)
                                            {
                                              t = term_c_27;
                                              return(t);
                                            }
                                            t = Option_3(t, a_5, b_5, c_5);
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
  ATerm r_105 = NULL;
  r_105 = t;
  t = SSL_table_destroy(not_null(r_105));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_105 = NULL;
  v_105 = t;
  t = SSL_exit(not_null(v_105));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm z_105 = NULL;
  z_105 = t;
  t = SSL_implode_string(not_null(z_105));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_100 (ATerm))
{
  ATerm c_106 (ATerm t)
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_106);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        {
          t = Nil_0(t);
          t = y_100(t);
        }
      }
    return(t);
  }
  t = c_106(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      {
        ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL;
        f_106 = t;
        e_106 :
        if(((ATgetType(f_106) == AT_LIST) && ((ATermList) f_106 != ATempty)))
          {
            g_106 = ATgetFirst((ATermList) f_106);
            h_106 = (ATerm) ATgetNext((ATermList) f_106);
            {
              t = not_null(g_106);
              {
                ATerm d_5 (ATerm t)
                {
                  t = not_null(h_106);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_5);
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
  ATerm n_106 = NULL;
  n_106 = t;
  t = SSL_explode_string(not_null(n_106));
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
ATerm long_description_1 (ATerm t, ATerm o_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_100 (ATerm))
{
  ATerm q_106 (ATerm t)
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
        t = Cons_2(t, k_100, q_106);
      }
    return(t);
  }
  t = q_106(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL;
  z_106 = t;
  w_106 :
  if(((ATgetType(z_106) == AT_LIST) && ((ATermList) z_106 != ATempty)))
    {
      x_106 = ATgetFirst((ATermList) z_106);
      y_106 = (ATerm) ATgetNext((ATermList) z_106);
      {
        ATerm c_107 = NULL;
        t = not_null(y_106);
        {
          ATerm j_27;
          j_27 = t;
          {
            ATerm d_107 = NULL,f_107 = NULL,h_107 = NULL;
            ATerm k_27;
            k_27 = t;
            {
              ATerm e_107 = NULL;
              t = k_0(t);
              {
                e_107 = t;
                if(((d_107 != NULL) && (d_107 != e_107)))
                  _fail(e_107);
                else
                  d_107 = e_107;
              }
            }
            t = k_27;
            {
              ATerm g_107 = NULL;
              t = not_null(x_106);
              {
                t = j_0(t);
                {
                  g_107 = t;
                  if(((f_107 != NULL) && (f_107 != g_107)))
                    _fail(g_107);
                  else
                    f_107 = g_107;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_107)), not_null(f_107));
                {
                  h_107 = t;
                  if(((c_107 != NULL) && (c_107 != h_107)))
                    _fail(h_107);
                  else
                    c_107 = h_107;
                }
              }
            }
          }
          t = j_27;
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(c_107);
              return(t);
            }
            t = reverse_acc_2(t, j_0, e_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) z_106 == ATempty))
        {
          {
            t = term_f_16;
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
  ATerm f_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_79 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_71 (ATerm))
{
  ATerm s_107 = NULL,t_107 = NULL;
  s_107 = t;
  r_107 :
  if(match_cons(s_107, sym_Program_1))
    {
      t_107 = ATgetArgument(s_107, 0);
      {
        ATerm w_107 = NULL,y_107 = NULL;
        ATerm x_107 = NULL;
        t = SSLgetAnnotations(not_null(s_107));
        {
          x_107 = t;
          if(((w_107 != NULL) && (w_107 != x_107)))
            _fail(x_107);
          else
            w_107 = x_107;
        }
        {
          t = not_null(t_107);
          {
            ATerm a_108 = NULL;
            t = i_71(t);
            {
              y_107 = t;
              {
                ATerm b_108 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_107)), not_null(w_107));
                {
                  b_108 = t;
                  if(((a_108 != NULL) && (a_108 != b_108)))
                    _fail(b_108);
                  else
                    a_108 = b_108;
                }
                t = not_null(a_108);
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
  ATerm k_108 = NULL;
  ATerm g_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      ATerm l_108 = NULL;
      l_108 = t;
      if(((k_108 != NULL) && (k_108 != l_108)))
        _fail(l_108);
      else
        k_108 = l_108;
      return(t);
    }
    t = Program_1(t, i_5);
    return(t);
  }
  t = option_defined_1(t, g_5);
  {
    ATerm j_5 (ATerm t)
    {
      ATerm m_108 = NULL;
      ATerm n_108 = NULL;
      t = term_f_16;
      {
        ATerm k_5 (ATerm t)
        {
          t = not_null(k_108);
          return(t);
        }
        t = short_description_1(t, k_5);
        {
          t = concat_strings_0(t);
          {
            n_108 = t;
            if(((m_108 != NULL) && (m_108 != n_108)))
              _fail(n_108);
            else
              m_108 = n_108;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATempty, not_null(m_108)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, j_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATempty, term_l_27));
      {
        t = printnl_0(t);
        {
          t = term_o_27;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_5 (ATerm t)
                {
                  ATerm o_108 = NULL;
                  o_108 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_108)), term_p_27));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_5);
                {
                  ATerm m_5 (ATerm t)
                  {
                    ATerm q_108 = NULL;
                    ATerm r_108 = NULL;
                    t = term_f_16;
                    {
                      ATerm n_5 (ATerm t)
                      {
                        t = not_null(k_108);
                        return(t);
                      }
                      t = long_description_1(t, n_5);
                      {
                        t = concat_strings_0(t);
                        {
                          r_108 = t;
                          if(((q_108 != NULL) && (q_108 != r_108)))
                            _fail(r_108);
                          else
                            q_108 = r_108;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_108)), term_q_27));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_5);
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
  ATerm y_108 = NULL,z_108 = NULL,b_109 = NULL;
  y_108 = t;
  x_108 :
  if(match_cons(y_108, sym__2))
    {
      z_108 = ATgetArgument(y_108, 0);
      b_109 = ATgetArgument(y_108, 1);
      {
        ATerm r_27;
        r_27 = t;
        t = SSL_printnl(not_null(z_108), not_null(b_109));
        t = r_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_71 (ATerm))
{
  ATerm k_109 = NULL,l_109 = NULL;
  k_109 = t;
  j_109 :
  if(match_cons(k_109, sym_Undefined_1))
    {
      l_109 = ATgetArgument(k_109, 0);
      {
        ATerm o_109 = NULL,q_109 = NULL;
        ATerm p_109 = NULL;
        t = SSLgetAnnotations(not_null(k_109));
        {
          p_109 = t;
          if(((o_109 != NULL) && (o_109 != p_109)))
            _fail(p_109);
          else
            o_109 = p_109;
        }
        {
          t = not_null(l_109);
          {
            ATerm s_109 = NULL;
            t = j_71(t);
            {
              q_109 = t;
              {
                ATerm t_109 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_109)), not_null(o_109));
                {
                  t_109 = t;
                  if(((s_109 != NULL) && (s_109 != t_109)))
                    _fail(t_109);
                  else
                    s_109 = t_109;
                }
                t = not_null(s_109);
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
ATerm fetch_1 (ATerm t, ATerm s_100 (ATerm))
{
  ATerm y_109 (ATerm t)
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_100, _id);
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = Cons_2(t, _id, y_109);
      }
    return(t);
  }
  t = y_109(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_80 (ATerm))
{
  t = fetch_1(t, m_80);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_110 = NULL;
  d_110 = t;
  c_110 :
  if(match_cons(d_110, sym_Help_0))
    {
      ATerm f_110 = NULL,h_110 = NULL;
      ATerm u_27;
      u_27 = t;
      {
        ATerm g_110 = NULL;
        t = SSLgetAnnotations(not_null(d_110));
        {
          g_110 = t;
          if(((f_110 != NULL) && (f_110 != g_110)))
            _fail(g_110);
          else
            f_110 = g_110;
        }
      }
      t = u_27;
      {
        ATerm i_110 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_110));
        {
          i_110 = t;
          if(((h_110 != NULL) && (h_110 != i_110)))
            _fail(i_110);
          else
            h_110 = i_110;
        }
        t = not_null(h_110);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_94 (ATerm))
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_94(t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_110 = NULL,p_110 = NULL,q_110 = NULL;
  o_110 = t;
  n_110 :
  if(match_cons(o_110, sym__2))
    {
      p_110 = ATgetArgument(o_110, 0);
      q_110 = ATgetArgument(o_110, 1);
      t = SSL_table_get(not_null(p_110), not_null(q_110));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL;
  x_110 = t;
  w_110 :
  if(match_cons(x_110, sym__3))
    {
      y_110 = ATgetArgument(x_110, 0);
      z_110 = ATgetArgument(x_110, 1);
      a_111 = ATgetArgument(x_110, 2);
      {
        ATerm x_27;
        x_27 = t;
        {
          ATerm e_111 = NULL;
          ATerm f_111 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_110), not_null(z_110));
          {
            ATerm y_27 = t;
            int z_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_27);
              }
            else
              {
                t = y_27;
                t = (ATerm) ATempty;
              }
            {
              f_111 = t;
              if(((e_111 != NULL) && (e_111 != f_111)))
                _fail(f_111);
              else
                e_111 = f_111;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_110), not_null(z_110), (ATerm) ATinsert(CheckATermList(not_null(e_111)), not_null(a_111)));
            t = table_put_0(t);
          }
        }
        t = x_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm j_111 = NULL;
  ATerm k_111 = NULL;
  t = term_f_16;
  {
    t = s_79(t);
    {
      k_111 = t;
      if(((j_111 != NULL) && (j_111 != k_111)))
        _fail(k_111);
      else
        j_111 = k_111;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_27, term_n_27, not_null(j_111));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm q_111 = NULL,r_111 = NULL,s_111 = NULL;
  q_111 = t;
  p_111 :
  if(match_string(q_111, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(q_111) == AT_LIST) && ((ATermList) q_111 != ATempty)))
        {
          r_111 = ATgetFirst((ATermList) q_111);
          s_111 = (ATerm) ATgetNext((ATermList) q_111);
          {
            ATerm v_111 = NULL;
            ATerm a_28;
            a_28 = t;
            {
              t = not_null(r_111);
              t = a_0(t);
            }
            t = a_28;
            {
              ATerm w_111 = NULL;
              t = term_f_16;
              {
                t = b_0(t);
                {
                  w_111 = t;
                  if(((v_111 != NULL) && (v_111 != w_111)))
                    _fail(w_111);
                  else
                    v_111 = w_111;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_111)), not_null(v_111));
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
  ATerm o_5 (ATerm t)
  {
    ATerm b_112 = NULL;
    b_112 = t;
    a_112 :
    if(!(match_string(b_112, "--help")))
      {
        if(!(match_string(b_112, "-h")))
          {
            if(!(match_string(b_112, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    t = term_b_28;
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_c_28;
    return(t);
  }
  t = Option_3(t, o_5, p_5, q_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_112 = NULL,f_112 = NULL,g_112 = NULL;
  e_112 = t;
  d_112 :
  if(((ATgetType(e_112) == AT_LIST) && ((ATermList) e_112 != ATempty)))
    {
      f_112 = ATgetFirst((ATermList) e_112);
      g_112 = (ATerm) ATgetNext((ATermList) e_112);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_112)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_112)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm d_28;
  d_28 = t;
  {
    ATerm r_5 (ATerm t)
    {
      t = term_e_28;
      t = q_79(t);
      return(t);
    }
    t = try_1(t, r_5);
  }
  t = d_28;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm l_112 = NULL;
      l_112 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_112));
      return(t);
    }
    ATerm t_5 (ATerm t)
    {
      ATerm f_28 = t;
      int g_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_28);
            }
          else
            {
              t = h_28;
              {
                t = q_79(t);
                t = Cons_2(t, _id, t_5);
              }
            }
          LocalPopChoice(g_28);
        }
      else
        {
          t = f_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_5, t_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_112 = NULL,s_112 = NULL,t_112 = NULL;
  ATerm j_28;
  j_28 = t;
  {
    ATerm u_112 = NULL,v_112 = NULL,w_112 = NULL,x_112 = NULL;
    u_112 = t;
    q_112 :
    if(match_cons(u_112, sym__3))
      {
        v_112 = ATgetArgument(u_112, 0);
        w_112 = ATgetArgument(u_112, 1);
        x_112 = ATgetArgument(u_112, 2);
        {
          if(((r_112 != NULL) && (r_112 != v_112)))
            _fail(v_112);
          else
            r_112 = v_112;
          {
            if(((s_112 != NULL) && (s_112 != w_112)))
              _fail(w_112);
            else
              s_112 = w_112;
            {
              if(((t_112 != NULL) && (t_112 != x_112)))
                _fail(x_112);
              else
                t_112 = x_112;
              t = SSL_table_put(not_null(r_112), not_null(s_112), not_null(t_112));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm a_113 = NULL;
  ATerm k_28;
  k_28 = t;
  {
    t = term_l_28;
    t = table_put_0(t);
  }
  t = k_28;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm m_28 = t;
      int n_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_79(t);
          LocalPopChoice(n_28);
        }
      else
        {
          t = m_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_5);
    {
      ATerm v_5 (ATerm t)
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_k_20;
                t = exit_0(t);
              }
            }
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            {
              ATerm w_5 (ATerm t)
              {
                ATerm x_5 (ATerm t)
                {
                  ATerm b_113 = NULL;
                  b_113 = t;
                  if(((a_113 != NULL) && (a_113 != b_113)))
                    _fail(b_113);
                  else
                    a_113 = b_113;
                  return(t);
                }
                t = Undefined_1(t, x_5);
                return(t);
              }
              t = option_defined_1(t, w_5);
              {
                ATerm q_28;
                q_28 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_113)), term_r_28));
                  t = printnl_0(t);
                }
                t = q_28;
                {
                  t = system_usage_0(t);
                  {
                    t = term_e_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_5);
      {
        ATerm t_28;
        t_28 = t;
        {
          t = term_m_27;
          t = table_destroy_0(t);
        }
        t = t_28;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm m_81 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_81(t);
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, y_5);
  {
    t = store_options_0(t);
    {
      ATerm x_28 = t;
      int y_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, m_81);
          LocalPopChoice(y_28);
        }
      else
        {
          t = x_28;
          {
            ATerm z_28 = t;
            int b_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, k_81);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(b_29);
              }
            else
              {
                t = z_28;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_81 (ATerm), ATerm g_81 (ATerm))
{
  t = iowrap_3(t, f_81, g_81, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    t = _2(t, _id, c_81);
    return(t);
  }
  t = iowrap_2(t, a_6, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm g_6 (ATerm t)
      {
        ATerm h_6 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, h_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, g_6);
      return(t);
    }
    t = Specification_1(t, c_6);
    return(t);
  }
  t = iowrap_1(t, b_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
