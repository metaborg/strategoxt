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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
ATerm term_i_30;
ATerm term_c_30;
ATerm term_s_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_k_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_g_24;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_t_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_y_18;
ATerm term_s_15;
ATerm term_k_15;
ATerm term_h_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_q_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_a_9;
ATerm term_h_7;
ATerm term_d_7;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_c_6;
void init_constant_terms (void)
{
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Op_2, term_p_14, (ATerm) ATempty);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_q_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_t_19);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_n_21, term_t_19);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_19);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_h_15);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_b_27, term_h_15);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_h_15);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_x_28, term_y_28);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, (ATerm) ATempty);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm i_79 (ATerm), ATerm j_79 (ATerm));
ATerm SDef_3 (ATerm, ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm o_79 (ATerm));
ATerm Let_2 (ATerm, ATerm k_79 (ATerm), ATerm l_79 (ATerm));
ATerm sboundin_3 (ATerm, ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm m_97 (ATerm), ATerm n_97 (ATerm));
ATerm diff_1 (ATerm, ATerm r_97 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm u_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_93 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm o_107 (ATerm), ATerm p_107 (ATerm));
ATerm alltd_1 (ATerm, ATerm o_106 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm q_107 (ATerm), ATerm r_107 (ATerm));
ATerm substitute_1 (ATerm, ATerm s_107 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm p_79 (ATerm), ATerm q_79 (ATerm));
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
ATerm Prim_2 (ATerm, ATerm p_80 (ATerm), ATerm q_80 (ATerm));
ATerm Explode_2 (ATerm, ATerm d_77 (ATerm), ATerm e_77 (ATerm));
ATerm Op_2 (ATerm, ATerm p_78 (ATerm), ATerm q_78 (ATerm));
ATerm pat_td_1 (ATerm, ATerm c_81 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm a_102 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm z_90 (ATerm), ATerm a_91 (ATerm));
ATerm repeat_1 (ATerm, ATerm c_91 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm x_76 (ATerm), ATerm y_76 (ATerm));
ATerm Con_3 (ATerm, ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm m_80 (ATerm), ATerm n_80 (ATerm));
ATerm oncetd_1 (ATerm, ATerm a_106 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm k_104 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm t_103 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm u_96 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm y_101 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm));
ATerm zip_1 (ATerm, ATerm v_101 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm s_81 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm q_91 (ATerm), ATerm r_91 (ATerm));
ATerm for_3 (ATerm, ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm k_81 (ATerm));
ATerm HdMember_1 (ATerm, ATerm l_97 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm m_81 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm i_78 (ATerm));
ATerm Cons_2 (ATerm, ATerm r_80 (ATerm), ATerm s_80 (ATerm));
ATerm Specification_1 (ATerm, ATerm k_78 (ATerm));
ATerm _2 (ATerm, ATerm m_69 (ATerm), ATerm n_69 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm p_87 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_84 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm f_96 (ATerm), ATerm g_96 (ATerm));
ATerm crush_2 (ATerm, ATerm u_97 (ATerm), ATerm v_97 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_86 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_103 (ATerm), ATerm e_103 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_86 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_100 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_83 (ATerm));
ATerm map_1 (ATerm, ATerm s_99 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_83 (ATerm));
ATerm Program_1 (ATerm, ATerm g_75 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_100 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_84 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_103 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_84 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_84 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_83 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm h_86 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_86 (ATerm), ATerm e_86 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_86 (ATerm));
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
        ATerm b_6;
        b_6 = t;
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
        t = b_6;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_6), not_null(f_6)), term_g_6), not_null(e_6)), term_c_6);
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_6), not_null(q_6)), term_g_6), not_null(p_6)), term_i_6), not_null(o_6)), term_c_6);
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
              ATerm a_0 (ATerm t)
              {
                ATerm j_6 = t;
                int r_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(r_6);
                  }
                else
                  {
                    t = j_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, a_0);
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
  ATerm s_6;
  s_6 = t;
  {
    t = error_0(t);
    {
      t = term_t_6;
      t = exit_0(t);
    }
  }
  t = s_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_6);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm v_6;
  v_6 = t;
  {
    ATerm q_7 = NULL;
    ATerm r_7 = NULL;
    r_7 = t;
    if(((q_7 != NULL) && (q_7 != r_7)))
      _fail(r_7);
    else
      q_7 = r_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_7, not_null(q_7));
      t = printnl_0(t);
    }
  }
  t = v_6;
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
          ATerm e_7 = t;
          int f_7 = stack_ptr;
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
                            ATerm g_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm b_0 (ATerm t)
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
                                t = fetch_1(t, b_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = g_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_8)), term_h_7);
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
              LocalPopChoice(f_7);
            }
          else
            {
              t = e_7;
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
ATerm Rec_2 (ATerm t, ATerm i_79 (ATerm), ATerm j_79 (ATerm))
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
            t = i_79(t);
            {
              l_9 = t;
              {
                t = not_null(f_9);
                {
                  ATerm p_9 = NULL;
                  t = j_79(t);
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
ATerm SDef_3 (ATerm t, ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm o_79 (ATerm))
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
            t = m_79(t);
            {
              n_10 = t;
              {
                t = not_null(f_10);
                {
                  ATerm r_10 = NULL;
                  t = n_79(t);
                  {
                    p_10 = t;
                    {
                      t = not_null(g_10);
                      {
                        ATerm t_10 = NULL;
                        t = o_79(t);
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
ATerm Let_2 (ATerm t, ATerm k_79 (ATerm), ATerm l_79 (ATerm))
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
            t = k_79(t);
            {
              p_11 = t;
              {
                t = not_null(j_11);
                {
                  ATerm t_11 = NULL;
                  t = l_79(t);
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
ATerm sboundin_3 (ATerm t, ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm))
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, l_108, l_108);
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      {
        ATerm p_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, n_108, n_108, l_108);
            LocalPopChoice(s_7);
          }
        else
          {
            t = p_7;
            t = Rec_2(t, n_108, l_108);
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
          ATerm e_0 (ATerm t)
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
          ATerm f_0 (ATerm t)
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
          t = map_1(t, f_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm))
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
      t = foldr_3(t, w_97, x_97, y_97);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm m_97 (ATerm), ATerm n_97 (ATerm))
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  i_14 :
  if(((ATgetType(j_14) == AT_LIST) && ((ATermList) j_14 != ATempty)))
    {
      k_14 = ATgetFirst((ATermList) j_14);
      l_14 = (ATerm) ATgetNext((ATermList) j_14);
      {
        t = n_97(t);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm o_14 = NULL;
            o_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), not_null(o_14));
              t = m_97(t);
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
ATerm diff_1 (ATerm t, ATerm r_97 (ATerm))
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
            ATerm t_7 = t;
            int u_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
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
                      ATerm q_0 (ATerm t)
                      {
                        t = not_null(w_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_97, q_0);
                      t = a_15(t);
                      LocalPopChoice(z_7);
                    }
                  else
                    {
                      t = v_7;
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
ATerm free_vars2_4 (ATerm t, ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm u_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_93 (ATerm))
{
  ATerm e_15 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm h_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_93(t);
          LocalPopChoice(o_8);
        }
      else
        {
          t = h_8;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15 = NULL;
          ATerm v_8;
          v_8 = t;
          {
            ATerm d_15 = NULL;
            t = t_93(t);
            {
              d_15 = t;
              if(((c_15 != NULL) && (c_15 != d_15)))
                _fail(d_15);
              else
                c_15 = d_15;
            }
          }
          t = v_8;
          {
            ATerm t_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = not_null(c_15);
                return(t);
              }
              t = split_2(t, e_15, v_0);
              t = diff_1(t, v_93);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = u_93(t, t_0, e_15, u_0);
            {
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, w_0, union_0, _id);
            }
          }
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
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
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        {
          ATerm y_8 = t;
          int z_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(z_8);
            }
          else
            {
              t = y_8;
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
    t = term_a_9;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm e_17 = NULL,g_17 = NULL;
    ATerm b_9;
    b_9 = t;
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
    t = b_9;
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
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm o_107 (ATerm), ATerm p_107 (ATerm))
{
  ATerm x_18 = NULL;
  ATerm z_18 = NULL,a_19 = NULL;
  x_18 = t;
  {
    ATerm b_19 = NULL;
    t = not_null(x_18);
    {
      ATerm c_19 = NULL;
      t = o_107(t);
      {
        b_19 = t;
        {
          if(((z_18 != NULL) && (z_18 != b_19)))
            _fail(b_19);
          else
            z_18 = b_19;
          {
            t = p_107(t);
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
ATerm alltd_1 (ATerm t, ATerm o_106 (ATerm))
{
  ATerm g_19 (ATerm t)
  {
    ATerm i_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_106(t);
        LocalPopChoice(m_9);
      }
    else
      {
        t = i_9;
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
ATerm substitute_2 (ATerm t, ATerm q_107 (ATerm), ATerm r_107 (ATerm))
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
              t = SubsVar_2(t, q_107, e_1);
              t = r_107(t);
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
ATerm substitute_1 (ATerm t, ATerm s_107 (ATerm))
{
  t = substitute_2(t, s_107, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm p_79 (ATerm), ATerm q_79 (ATerm))
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
            t = p_79(t);
            {
              x_20 = t;
              {
                t = not_null(r_20);
                {
                  ATerm b_21 = NULL;
                  t = q_79(t);
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
            ATerm o_9;
            o_9 = t;
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
            t = o_9;
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
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_25)), not_null(k_25)), not_null(j_25)), not_null(i_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(f_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(d_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_25)), not_null(r_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_25)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_26)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_26))), (ATerm) ATmakeAppl(sym_Prim_2, term_u_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_26)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_26)), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_26)), not_null(b_26)))))));
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
        ATerm w_9 = t;
        int x_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(u_27))))));
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
              ATerm z_9 = t;
              int a_10 = stack_ptr;
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
                  LocalPopChoice(a_10);
                }
              else
                {
                  t = z_9;
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
  ATerm k_29 = NULL,l_29 = NULL,u_29 = NULL,v_29 = NULL;
  k_29 = t;
  i_29 :
  if(match_cons(k_29, sym_Match_1))
    {
      l_29 = ATgetArgument(k_29, 0);
      j_29 :
      if(match_cons(l_29, sym_RootApp_1))
        {
          u_29 = ATgetArgument(l_29, 0);
          t = not_null(u_29);
        }
      else
        {
          if(match_cons(l_29, sym_App_2))
            {
              u_29 = ATgetArgument(l_29, 0);
              v_29 = ATgetArgument(l_29, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(u_29), not_null(v_29));
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
  a_34 :
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
  ATerm b_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(h_10);
    }
  else
    {
      t = b_10;
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
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
  l_35 :
  if(match_cons(m_35, sym_Build_1))
    {
      n_35 = ATgetArgument(m_35, 0);
      {
        ATerm k_10 = t;
        int o_10 = stack_ptr;
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
                      ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
                      o_36 = t;
                      s_34 :
                      if(match_cons(o_36, sym_Anno_2))
                        {
                          p_36 = ATgetArgument(o_36, 0);
                          q_36 = ATgetArgument(o_36, 1);
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_q_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_35)), not_null(p_35))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_35))));
            LocalPopChoice(o_10);
          }
        else
          {
            t = k_10;
            {
              ATerm s_10 = t;
              int v_10 = stack_ptr;
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
                            b_35 :
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
                  LocalPopChoice(v_10);
                }
              else
                {
                  t = s_10;
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
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  u_38 = t;
  p_38 :
  if(match_cons(u_38, sym_Build_1))
    {
      v_38 = ATgetArgument(u_38, 0);
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
ATerm Prim_2 (ATerm t, ATerm p_80 (ATerm), ATerm q_80 (ATerm))
{
  ATerm l_39 = NULL,n_39 = NULL,o_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym_Prim_2))
    {
      n_39 = ATgetArgument(l_39, 0);
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
          t = not_null(n_39);
          {
            ATerm w_39 = NULL;
            t = p_80(t);
            {
              u_39 = t;
              {
                t = not_null(o_39);
                {
                  ATerm y_39 = NULL;
                  t = q_80(t);
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
ATerm Explode_2 (ATerm t, ATerm d_77 (ATerm), ATerm e_77 (ATerm))
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  k_40 :
  if(match_cons(l_40, sym_Explode_2))
    {
      m_40 = ATgetArgument(l_40, 0);
      n_40 = ATgetArgument(l_40, 1);
      {
        ATerm r_40 = NULL,t_40 = NULL;
        ATerm s_40 = NULL;
        t = SSLgetAnnotations(not_null(l_40));
        {
          s_40 = t;
          if(((r_40 != NULL) && (r_40 != s_40)))
            _fail(s_40);
          else
            r_40 = s_40;
        }
        {
          t = not_null(m_40);
          {
            ATerm v_40 = NULL;
            t = d_77(t);
            {
              t_40 = t;
              {
                t = not_null(n_40);
                {
                  ATerm x_40 = NULL;
                  t = e_77(t);
                  {
                    v_40 = t;
                    {
                      ATerm y_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(t_40), not_null(v_40)), not_null(r_40));
                      {
                        y_40 = t;
                        if(((x_40 != NULL) && (x_40 != y_40)))
                          _fail(y_40);
                        else
                          x_40 = y_40;
                      }
                      t = not_null(x_40);
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
ATerm Op_2 (ATerm t, ATerm p_78 (ATerm), ATerm q_78 (ATerm))
{
  ATerm u_41 = NULL,x_41 = NULL,y_41 = NULL;
  u_41 = t;
  t_41 :
  if(match_cons(u_41, sym_Op_2))
    {
      x_41 = ATgetArgument(u_41, 0);
      y_41 = ATgetArgument(u_41, 1);
      {
        ATerm c_42 = NULL,k_42 = NULL;
        ATerm d_42 = NULL;
        t = SSLgetAnnotations(not_null(u_41));
        {
          d_42 = t;
          if(((c_42 != NULL) && (c_42 != d_42)))
            _fail(d_42);
          else
            c_42 = d_42;
        }
        {
          t = not_null(x_41);
          {
            ATerm s_42 = NULL;
            t = p_78(t);
            {
              k_42 = t;
              {
                t = not_null(y_41);
                {
                  ATerm u_42 = NULL;
                  t = q_78(t);
                  {
                    s_42 = t;
                    {
                      ATerm v_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(k_42), not_null(s_42)), not_null(c_42));
                      {
                        v_42 = t;
                        if(((u_42 != NULL) && (u_42 != v_42)))
                          _fail(v_42);
                        else
                          u_42 = v_42;
                      }
                      t = not_null(u_42);
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
ATerm pat_td_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_81(t);
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = pat_td_1(t, c_81);
                return(t);
              }
              t = fetch_1(t, t_1);
              return(t);
            }
            t = Op_2(t, _id, s_1);
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
                  ATerm u_1 (ATerm t)
                  {
                    t = pat_td_1(t, c_81);
                    return(t);
                  }
                  t = Explode_2(t, _id, u_1);
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
                        ATerm v_1 (ATerm t)
                        {
                          t = pat_td_1(t, c_81);
                          return(t);
                        }
                        t = Explode_2(t, v_1, _id);
                        LocalPopChoice(d_11);
                      }
                    else
                      {
                        t = c_11;
                        {
                          ATerm w_1 (ATerm t)
                          {
                            ATerm x_1 (ATerm t)
                            {
                              t = pat_td_1(t, c_81);
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
  ATerm n_43 = NULL,o_43 = NULL;
  n_43 = t;
  m_43 :
  if(match_cons(n_43, sym_Build_1))
    {
      o_43 = ATgetArgument(n_43, 0);
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_43 = NULL,r_43 = NULL;
            ATerm v_43 = NULL;
            t = not_null(o_43);
            {
              ATerm y_1 (ATerm t)
              {
                ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
                s_43 = t;
                f_43 :
                if(match_cons(s_43, sym_RootApp_1))
                  {
                    t_43 = ATgetArgument(s_43, 0);
                    g_43 :
                    if(match_cons(t_43, sym_Build_1))
                      {
                        u_43 = ATgetArgument(t_43, 0);
                        {
                          if(((q_43 != NULL) && (q_43 != u_43)))
                            _fail(u_43);
                          else
                            q_43 = u_43;
                          t = not_null(q_43);
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
                v_43 = t;
                if(((r_43 != NULL) && (r_43 != v_43)))
                  _fail(v_43);
                else
                  r_43 = v_43;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(r_43));
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            {
              ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
              ATerm e_44 = NULL;
              t = not_null(o_43);
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
                  a_44 = t;
                  j_43 :
                  if(match_cons(a_44, sym_App_2))
                    {
                      b_44 = ATgetArgument(a_44, 0);
                      d_44 = ATgetArgument(a_44, 1);
                      k_43 :
                      if(match_cons(b_44, sym_Build_1))
                        {
                          c_44 = ATgetArgument(b_44, 0);
                          {
                            if(((y_43 != NULL) && (y_43 != c_44)))
                              _fail(c_44);
                            else
                              y_43 = c_44;
                            {
                              if(((x_43 != NULL) && (x_43 != d_44)))
                                _fail(d_44);
                              else
                                x_43 = d_44;
                              t = not_null(y_43);
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
                  e_44 = t;
                  if(((z_43 != NULL) && (z_43 != e_44)))
                    _fail(e_44);
                  else
                    z_43 = e_44;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_43));
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
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm m_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(q_11);
          }
        else
          {
            t = m_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
  h_45 = t;
  x_44 :
  if(match_cons(h_45, sym_InfixApp_3))
    {
      i_45 = ATgetArgument(h_45, 0);
      c_45 = ATgetArgument(h_45, 1);
      b_45 = ATgetArgument(h_45, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(c_45), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_45)), not_null(i_45))));
    }
  else
    {
      if(match_cons(h_45, sym_BAM_3))
        {
          i_45 = ATgetArgument(h_45, 0);
          c_45 = ATgetArgument(h_45, 1);
          b_45 = ATgetArgument(h_45, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(b_45))), not_null(i_45)), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_45))));
        }
      else
        {
          if(match_cons(h_45, sym_AM_2))
            {
              i_45 = ATgetArgument(h_45, 0);
              c_45 = ATgetArgument(h_45, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_45), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_45)));
            }
          else
            {
              if(match_cons(h_45, sym_MA_2))
                {
                  i_45 = ATgetArgument(h_45, 0);
                  c_45 = ATgetArgument(h_45, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_45)), not_null(c_45));
                }
              else
                {
                  if(match_cons(h_45, sym_BA_2))
                    {
                      i_45 = ATgetArgument(h_45, 0);
                      c_45 = ATgetArgument(h_45, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_45)), not_null(i_45));
                    }
                  else
                    {
                      if(match_cons(h_45, sym_Lets_2))
                        {
                          i_45 = ATgetArgument(h_45, 0);
                          c_45 = ATgetArgument(h_45, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(i_45), not_null(c_45));
                        }
                      else
                        {
                          if(match_cons(h_45, sym_LChoices_1))
                            {
                              i_45 = ATgetArgument(h_45, 0);
                              y_44 :
                              if(((ATgetType(i_45) == AT_LIST) && ((ATermList) i_45 != ATempty)))
                                {
                                  f_45 = ATgetFirst((ATermList) i_45);
                                  g_45 = (ATerm) ATgetNext((ATermList) i_45);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_45), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(g_45)));
                                }
                              else
                                {
                                  if(((ATermList) i_45 == ATempty))
                                    {
                                      t = term_a_9;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(h_45, sym_Choices_1))
                                {
                                  i_45 = ATgetArgument(h_45, 0);
                                  z_44 :
                                  if(((ATgetType(i_45) == AT_LIST) && ((ATermList) i_45 != ATempty)))
                                    {
                                      f_45 = ATgetFirst((ATermList) i_45);
                                      g_45 = (ATerm) ATgetNext((ATermList) i_45);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_45), (ATerm) ATmakeAppl(sym_Choices_1, not_null(g_45)));
                                    }
                                  else
                                    {
                                      if(((ATermList) i_45 == ATempty))
                                        {
                                          t = term_a_9;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(h_45, sym_Seqs_1))
                                    {
                                      i_45 = ATgetArgument(h_45, 0);
                                      a_45 :
                                      if(((ATgetType(i_45) == AT_LIST) && ((ATermList) i_45 != ATempty)))
                                        {
                                          f_45 = ATgetFirst((ATermList) i_45);
                                          g_45 = (ATerm) ATgetNext((ATermList) i_45);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_45), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_45)));
                                        }
                                      else
                                        {
                                          if(((ATermList) i_45 == ATempty))
                                            {
                                              t = term_s_11;
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
  ATerm e_47 = NULL,g_47 = NULL,h_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  e_47 = t;
  b_47 :
  if(match_cons(e_47, sym__2))
    {
      g_47 = ATgetArgument(e_47, 0);
      k_47 = ATgetArgument(e_47, 1);
      c_47 :
      if(match_cons(g_47, sym__2))
        {
          h_47 = ATgetArgument(g_47, 0);
          j_47 = ATgetArgument(g_47, 1);
          d_47 :
          if(match_cons(k_47, sym__2))
            {
              l_47 = ATgetArgument(k_47, 0);
              m_47 = ATgetArgument(k_47, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_47)), not_null(h_47)), (ATerm) ATinsert(CheckATermList(not_null(m_47)), not_null(j_47)));
            }
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
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL;
  u_47 = t;
  t_47 :
  if(((ATgetType(u_47) == AT_LIST) && ((ATermList) u_47 != ATempty)))
    {
      v_47 = ATgetFirst((ATermList) u_47);
      w_47 = (ATerm) ATgetNext((ATermList) u_47);
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_47), not_null(w_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm c_48 = NULL;
  c_48 = t;
  b_48 :
  if(((ATermList) c_48 == ATempty))
    {
      t = term_v_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm a_102 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, a_102);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL;
  ATerm p_51 (ATerm t)
  {
    ATerm l_49 = NULL;
    ATerm n_51 = NULL;
    t = not_null(i_48);
    {
      ATerm w_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_11;
        }
      {
        t = new_0(t);
        {
          n_51 = t;
          if(((l_49 != NULL) && (l_49 != n_51)))
            _fail(n_51);
          else
            l_49 = n_51;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(l_49)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_48)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_49))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_49))));
    return(t);
  }
  ATerm q_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_s_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_48))));
    return(t);
  }
  i_48 = t;
  h_48 :
  if(match_cons(i_48, sym_Var_1))
    {
      j_48 = ATgetArgument(i_48, 0);
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_51(t);
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            t = q_51(t);
          }
      }
    }
  else
    {
      t = p_51(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm b_52 = NULL,c_52 = NULL;
  b_52 = t;
  a_52 :
  if(match_cons(b_52, sym_Var_1))
    {
      c_52 = ATgetArgument(b_52, 0);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_52 = NULL,h_52 = NULL;
            ATerm g_52 = NULL;
            t = SSLgetAnnotations(not_null(b_52));
            {
              g_52 = t;
              if(((f_52 != NULL) && (f_52 != g_52)))
                _fail(g_52);
              else
                f_52 = g_52;
            }
            {
              t = not_null(c_52);
              {
                ATerm j_52 = NULL;
                t = o_0(t);
                {
                  h_52 = t;
                  {
                    ATerm k_52 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_52)), not_null(f_52));
                    {
                      k_52 = t;
                      if(((j_52 != NULL) && (j_52 != k_52)))
                        _fail(k_52);
                      else
                        j_52 = k_52;
                    }
                    t = not_null(j_52);
                  }
                }
              }
            }
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm q_52 = NULL,s_52 = NULL;
              ATerm r_52 = NULL;
              t = SSLgetAnnotations(not_null(b_52));
              {
                r_52 = t;
                if(((q_52 != NULL) && (q_52 != r_52)))
                  _fail(r_52);
                else
                  q_52 = r_52;
              }
              {
                t = not_null(c_52);
                {
                  ATerm u_52 = NULL;
                  t = o_0(t);
                  {
                    s_52 = t;
                    {
                      ATerm v_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_52)), not_null(q_52));
                      {
                        v_52 = t;
                        if(((u_52 != NULL) && (u_52 != v_52)))
                          _fail(v_52);
                        else
                          u_52 = v_52;
                      }
                      t = not_null(u_52);
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
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
  j_53 = t;
  i_53 :
  if(match_cons(j_53, sym_Prim_2))
    {
      k_53 = ATgetArgument(j_53, 0);
      l_53 = ATgetArgument(j_53, 1);
      {
        ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
        ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL;
        t = not_null(l_53);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm f_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_12;
              }
            return(t);
          }
          t = fetch_1(t, a_2);
          {
            t = not_null(l_53);
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
                  r_53 = t;
                  g_53 :
                  if(match_cons(r_53, sym__2))
                    {
                      s_53 = ATgetArgument(r_53, 0);
                      t_53 = ATgetArgument(r_53, 1);
                      h_53 :
                      if(match_cons(t_53, sym__2))
                        {
                          u_53 = ATgetArgument(t_53, 0);
                          v_53 = ATgetArgument(t_53, 1);
                          {
                            if(((o_53 != NULL) && (o_53 != s_53)))
                              _fail(s_53);
                            else
                              o_53 = s_53;
                            {
                              if(((p_53 != NULL) && (p_53 != u_53)))
                                _fail(u_53);
                              else
                                p_53 = u_53;
                              if(((q_53 != NULL) && (q_53 != v_53)))
                                _fail(v_53);
                              else
                                q_53 = v_53;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(p_53)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(k_53), not_null(q_53))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm z_90 (ATerm), ATerm a_91 (ATerm))
{
  ATerm y_53 (ATerm t)
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_90(t);
        t = y_53(t);
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = a_91(t);
      }
    return(t);
  }
  t = y_53(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm c_91 (ATerm))
{
  t = repeat_2(t, c_91, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm d_54 = NULL;
  d_54 = t;
  c_54 :
  if(match_cons(d_54, sym_Wld_0))
    {
      ATerm f_54 = NULL,h_54 = NULL;
      ATerm i_12;
      i_12 = t;
      {
        ATerm g_54 = NULL;
        t = SSLgetAnnotations(not_null(d_54));
        {
          g_54 = t;
          if(((f_54 != NULL) && (f_54 != g_54)))
            _fail(g_54);
          else
            f_54 = g_54;
        }
      }
      t = i_12;
      {
        ATerm i_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(f_54));
        {
          i_54 = t;
          if(((h_54 != NULL) && (h_54 != i_54)))
            _fail(i_54);
          else
            h_54 = i_54;
        }
        t = not_null(h_54);
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
  ATerm j_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
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
      t = j_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm x_76 (ATerm), ATerm y_76 (ATerm))
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
  s_54 = t;
  r_54 :
  if(match_cons(s_54, sym_App_2))
    {
      t_54 = ATgetArgument(s_54, 0);
      u_54 = ATgetArgument(s_54, 1);
      {
        ATerm y_54 = NULL,a_55 = NULL;
        ATerm z_54 = NULL;
        t = SSLgetAnnotations(not_null(s_54));
        {
          z_54 = t;
          if(((y_54 != NULL) && (y_54 != z_54)))
            _fail(z_54);
          else
            y_54 = z_54;
        }
        {
          t = not_null(t_54);
          {
            ATerm c_55 = NULL;
            t = x_76(t);
            {
              a_55 = t;
              {
                t = not_null(u_54);
                {
                  ATerm e_55 = NULL;
                  t = y_76(t);
                  {
                    c_55 = t;
                    {
                      ATerm f_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(a_55), not_null(c_55)), not_null(y_54));
                      {
                        f_55 = t;
                        if(((e_55 != NULL) && (e_55 != f_55)))
                          _fail(f_55);
                        else
                          e_55 = f_55;
                      }
                      t = not_null(e_55);
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
ATerm Con_3 (ATerm t, ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm))
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL;
  s_55 = t;
  r_55 :
  if(match_cons(s_55, sym_Con_3))
    {
      t_55 = ATgetArgument(s_55, 0);
      u_55 = ATgetArgument(s_55, 1);
      v_55 = ATgetArgument(s_55, 2);
      {
        ATerm a_56 = NULL,c_56 = NULL;
        ATerm b_56 = NULL;
        t = SSLgetAnnotations(not_null(s_55));
        {
          b_56 = t;
          if(((a_56 != NULL) && (a_56 != b_56)))
            _fail(b_56);
          else
            a_56 = b_56;
        }
        {
          t = not_null(t_55);
          {
            ATerm e_56 = NULL;
            t = u_76(t);
            {
              c_56 = t;
              {
                t = not_null(u_55);
                {
                  ATerm h_56 = NULL;
                  t = v_76(t);
                  {
                    e_56 = t;
                    {
                      t = not_null(v_55);
                      {
                        ATerm j_56 = NULL;
                        t = w_76(t);
                        {
                          h_56 = t;
                          {
                            ATerm k_56 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(c_56), not_null(e_56), not_null(h_56)), not_null(a_56));
                            {
                              k_56 = t;
                              if(((j_56 != NULL) && (j_56 != k_56)))
                                _fail(k_56);
                              else
                                j_56 = k_56;
                            }
                            t = not_null(j_56);
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
  ATerm s_12 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
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
      t = s_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL;
  v_56 = t;
  t_56 :
  if(match_cons(v_56, sym_SRule_1))
    {
      w_56 = ATgetArgument(v_56, 0);
      u_56 :
      if(match_cons(w_56, sym_StratRule_3))
        {
          x_56 = ATgetArgument(w_56, 0);
          y_56 = ATgetArgument(w_56, 1);
          z_56 = ATgetArgument(w_56, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_56)), (ATerm) ATmakeAppl(sym_Where_1, not_null(z_56))), not_null(x_56)));
        }
      else
        {
          if(match_cons(w_56, sym_Rule_3))
            {
              x_56 = ATgetArgument(w_56, 0);
              y_56 = ATgetArgument(w_56, 1);
              z_56 = ATgetArgument(w_56, 2);
              {
                t = not_null(x_56);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(y_56);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(y_56))), (ATerm) ATmakeAppl(sym_Where_1, not_null(z_56))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_56))));
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
ATerm Scope_2 (ATerm t, ATerm m_80 (ATerm), ATerm n_80 (ATerm))
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
  o_57 = t;
  n_57 :
  if(match_cons(o_57, sym_Scope_2))
    {
      p_57 = ATgetArgument(o_57, 0);
      q_57 = ATgetArgument(o_57, 1);
      {
        ATerm u_57 = NULL,w_57 = NULL;
        ATerm v_57 = NULL;
        t = SSLgetAnnotations(not_null(o_57));
        {
          v_57 = t;
          if(((u_57 != NULL) && (u_57 != v_57)))
            _fail(v_57);
          else
            u_57 = v_57;
        }
        {
          t = not_null(p_57);
          {
            ATerm y_57 = NULL;
            t = m_80(t);
            {
              w_57 = t;
              {
                t = not_null(q_57);
                {
                  ATerm a_58 = NULL;
                  t = n_80(t);
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
ATerm oncetd_1 (ATerm t, ATerm a_106 (ATerm))
{
  ATerm l_58 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_106(t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = _one(t, l_58);
      }
    return(t);
  }
  t = l_58(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
  l_59 = t;
  j_59 :
  if(match_cons(l_59, sym_SRule_1))
    {
      m_59 = ATgetArgument(l_59, 0);
      k_59 :
      if(match_cons(m_59, sym_Rule_3))
        {
          n_59 = ATgetArgument(m_59, 0);
          o_59 = ATgetArgument(m_59, 1);
          p_59 = ATgetArgument(m_59, 2);
          {
            ATerm t_59 = NULL,f_60 = NULL,g_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
            ATerm o_60 = NULL;
            ATerm z_60 = NULL;
            t = new_0(t);
            {
              o_60 = t;
              {
                if(((l_60 != NULL) && (l_60 != o_60)))
                  _fail(o_60);
                else
                  l_60 = o_60;
                {
                  t = not_null(n_59);
                  {
                    ATerm h_61 = NULL;
                    ATerm e_2 (ATerm t)
                    {
                      ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,y_60 = NULL;
                      p_60 = t;
                      p_58 :
                      if(match_cons(p_60, sym_Con_3))
                        {
                          q_60 = ATgetArgument(p_60, 0);
                          s_60 = ATgetArgument(p_60, 1);
                          y_60 = ATgetArgument(p_60, 2);
                          q_58 :
                          if(match_cons(q_60, sym_Var_1))
                            {
                              r_60 = ATgetArgument(q_60, 0);
                              {
                                if(((k_60 != NULL) && (k_60 != r_60)))
                                  _fail(r_60);
                                else
                                  k_60 = r_60;
                                {
                                  if(((g_60 != NULL) && (g_60 != s_60)))
                                    _fail(s_60);
                                  else
                                    g_60 = s_60;
                                  {
                                    if(((t_59 != NULL) && (t_59 != y_60)))
                                      _fail(y_60);
                                    else
                                      t_59 = y_60;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_60));
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
                      z_60 = t;
                      {
                        if(((m_60 != NULL) && (m_60 != z_60)))
                          _fail(z_60);
                        else
                          m_60 = z_60;
                        {
                          t = not_null(o_59);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
                              a_61 = t;
                              t_58 :
                              if(match_cons(a_61, sym_Con_3))
                                {
                                  b_61 = ATgetArgument(a_61, 0);
                                  d_61 = ATgetArgument(a_61, 1);
                                  e_61 = ATgetArgument(a_61, 2);
                                  u_58 :
                                  if(match_cons(b_61, sym_Var_1))
                                    {
                                      c_61 = ATgetArgument(b_61, 0);
                                      c_59 :
                                      if(match_cons(e_61, sym_Call_2))
                                        {
                                          f_61 = ATgetArgument(e_61, 0);
                                          g_61 = ATgetArgument(e_61, 1);
                                          d_59 :
                                          if(((ATermList) g_61 == ATempty))
                                            {
                                              {
                                                if(((k_60 != NULL) && (k_60 != c_61)))
                                                  _fail(c_61);
                                                else
                                                  k_60 = c_61;
                                                {
                                                  if(((j_60 != NULL) && (j_60 != d_61)))
                                                    _fail(d_61);
                                                  else
                                                    j_60 = d_61;
                                                  {
                                                    if(((f_60 != NULL) && (f_60 != f_61)))
                                                      _fail(f_61);
                                                    else
                                                      f_60 = f_61;
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
                                    }
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
                              h_61 = t;
                              if(((n_60 != NULL) && (n_60 != h_61)))
                                _fail(h_61);
                              else
                                n_60 = h_61;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_60), not_null(n_60), (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_59), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(f_60), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_60), not_null(j_60), term_s_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_60)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_60)))))));
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
    ATerm a_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = a_13;
        {
          ATerm h_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(m_13);
            }
          else
            {
              t = h_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm k_104 (ATerm))
{
  t = k_104(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, k_104);
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
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
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
                  t = HL_0(t);
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
                        t = Bapp_0(t);
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
                              t = Mapp_0(t);
                              LocalPopChoice(w_13);
                            }
                          else
                            {
                              t = t_13;
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
  ATerm e_62 = NULL;
  e_62 = t;
  d_62 :
  if(match_cons(e_62, sym__0))
    {
      ATerm g_62 = NULL,q_62 = NULL;
      ATerm z_13;
      z_13 = t;
      {
        ATerm h_62 = NULL;
        t = SSLgetAnnotations(not_null(e_62));
        {
          h_62 = t;
          if(((g_62 != NULL) && (g_62 != h_62)))
            _fail(h_62);
          else
            g_62 = h_62;
        }
      }
      t = z_13;
      {
        ATerm r_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(g_62));
        {
          r_62 = t;
          if(((q_62 != NULL) && (q_62 != r_62)))
            _fail(r_62);
          else
            q_62 = r_62;
        }
        t = not_null(q_62);
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
  ATerm d_63 = NULL;
  ATerm f_63 = NULL,g_63 = NULL,o_63 = NULL,q_63 = NULL;
  d_63 = t;
  {
    ATerm d_14;
    d_14 = t;
    {
      ATerm h_63 = NULL;
      ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL;
      t = not_null(d_63);
      {
        h_63 = t;
        {
          t = SSL_explode_term(not_null(h_63));
          {
            j_63 = t;
            y_62 :
            if(match_cons(j_63, sym__2))
              {
                k_63 = ATgetArgument(j_63, 0);
                l_63 = ATgetArgument(j_63, 1);
                z_62 :
                if(match_string(k_63, ""))
                  {
                    a_63 :
                    if(((ATgetType(l_63) == AT_LIST) && ((ATermList) l_63 != ATempty)))
                      {
                        m_63 = ATgetFirst((ATermList) l_63);
                        n_63 = (ATerm) ATgetNext((ATermList) l_63);
                        {
                          if(((f_63 != NULL) && (f_63 != m_63)))
                            _fail(m_63);
                          else
                            f_63 = m_63;
                          if(((g_63 != NULL) && (g_63 != n_63)))
                            _fail(n_63);
                          else
                            g_63 = n_63;
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
    t = d_14;
    {
      ATerm e_14;
      e_14 = t;
      {
        ATerm p_63 = NULL;
        t = term_v_9;
        {
          p_63 = t;
          if(((o_63 != NULL) && (o_63 != p_63)))
            _fail(p_63);
          else
            o_63 = p_63;
        }
      }
      t = e_14;
      {
        t = SSL_mkterm(not_null(o_63), not_null(g_63));
        {
          q_63 = t;
          t = not_null(q_63);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm d_64 = NULL;
  ATerm f_64 = NULL,g_64 = NULL;
  d_64 = t;
  {
    ATerm h_64 = NULL;
    ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL;
    t = not_null(d_64);
    {
      h_64 = t;
      {
        t = SSL_explode_term(not_null(h_64));
        {
          j_64 = t;
          a_64 :
          if(match_cons(j_64, sym__2))
            {
              k_64 = ATgetArgument(j_64, 0);
              l_64 = ATgetArgument(j_64, 1);
              b_64 :
              if(match_string(k_64, ""))
                {
                  c_64 :
                  if(((ATgetType(l_64) == AT_LIST) && ((ATermList) l_64 != ATempty)))
                    {
                      m_64 = ATgetFirst((ATermList) l_64);
                      n_64 = (ATerm) ATgetNext((ATermList) l_64);
                      {
                        if(((g_64 != NULL) && (g_64 != m_64)))
                          _fail(m_64);
                        else
                          g_64 = m_64;
                        if(((f_64 != NULL) && (f_64 != n_64)))
                          _fail(n_64);
                        else
                          f_64 = n_64;
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
    t = not_null(g_64);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm t_103 (ATerm))
{
  ATerm f_65 = NULL,h_65 = NULL,j_65 = NULL;
  ATerm n_65 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_64 = NULL,y_64 = NULL;
        ATerm h_14;
        h_14 = t;
        {
          ATerm x_64 = NULL;
          t = map_1(t, Thd_0);
          {
            t = t_103(t);
            {
              x_64 = t;
              if(((w_64 != NULL) && (w_64 != x_64)))
                _fail(x_64);
              else
                w_64 = x_64;
            }
          }
        }
        t = h_14;
        {
          ATerm e_65 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = n_65(t);
            {
              e_65 = t;
              if(((y_64 != NULL) && (y_64 != e_65)))
                _fail(e_65);
              else
                y_64 = e_65;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(y_64)), not_null(w_64));
        }
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = n_65(t);
  {
    ATerm m_14;
    m_14 = t;
    {
      ATerm g_65 = NULL;
      g_65 = t;
      if(((f_65 != NULL) && (f_65 != g_65)))
        _fail(g_65);
      else
        f_65 = g_65;
    }
    t = m_14;
    {
      ATerm n_14;
      n_14 = t;
      {
        ATerm i_65 = NULL;
        t = term_v_9;
        {
          i_65 = t;
          if(((h_65 != NULL) && (h_65 != i_65)))
            _fail(i_65);
          else
            h_65 = i_65;
        }
      }
      t = n_14;
      {
        t = SSL_mkterm(not_null(h_65), not_null(f_65));
        {
          j_65 = t;
          t = not_null(j_65);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm x_65 = NULL;
  ATerm z_65 = NULL,k_66 = NULL,l_66 = NULL;
  x_65 = t;
  {
    ATerm m_66 = NULL;
    ATerm n_66 = NULL;
    t = new_0(t);
    {
      m_66 = t;
      {
        if(((z_65 != NULL) && (z_65 != m_66)))
          _fail(m_66);
        else
          z_65 = m_66;
        {
          ATerm o_66 = NULL;
          t = new_0(t);
          {
            n_66 = t;
            {
              if(((k_66 != NULL) && (k_66 != n_66)))
                _fail(n_66);
              else
                k_66 = n_66;
              {
                t = new_0(t);
                {
                  o_66 = t;
                  if(((l_66 != NULL) && (l_66 != o_66)))
                    _fail(o_66);
                  else
                    l_66 = o_66;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_65)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_65)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_66)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_66))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(z_65), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_14), term_r_14)), not_null(k_66), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_66)), not_null(l_66), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_66)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,j_67 = NULL;
  w_66 = t;
  v_66 :
  if(match_cons(w_66, sym__2))
    {
      x_66 = ATgetArgument(w_66, 0);
      j_67 = ATgetArgument(w_66, 1);
      {
        ATerm s_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(x_66), not_null(j_67));
            LocalPopChoice(x_14);
          }
        else
          {
            t = s_14;
            t = SSL_subtr(not_null(x_66), not_null(j_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm u_96 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL;
    z_67 = t;
    o_67 :
    if(match_cons(z_67, sym__2))
      {
        a_68 = ATgetArgument(z_67, 0);
        b_68 = ATgetArgument(z_67, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(a_68), not_null(b_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL;
    e_68 = t;
    t_67 :
    if(match_cons(e_68, sym__3))
      {
        f_68 = ATgetArgument(e_68, 0);
        g_68 = ATgetArgument(e_68, 1);
        h_68 = ATgetArgument(e_68, 2);
        u_67 :
        if(match_int(f_68, 0))
          {
            t = not_null(h_68);
          }
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
    ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL;
    k_68 = t;
    y_67 :
    if(match_cons(k_68, sym__3))
      {
        l_68 = ATgetArgument(k_68, 0);
        m_68 = ATgetArgument(k_68, 1);
        n_68 = ATgetArgument(k_68, 2);
        {
          ATerm r_68 = NULL,t_68 = NULL;
          ATerm y_14;
          y_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_68), term_t_6);
            t = geq_0(t);
          }
          t = y_14;
          {
            ATerm z_14;
            z_14 = t;
            {
              ATerm s_68 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_68), term_t_6);
              {
                t = subt_0(t);
                {
                  s_68 = t;
                  if(((r_68 != NULL) && (r_68 != s_68)))
                    _fail(s_68);
                  else
                    r_68 = s_68;
                }
              }
            }
            t = z_14;
            {
              ATerm u_68 = NULL;
              t = not_null(m_68);
              {
                t = u_96(t);
                {
                  u_68 = t;
                  if(((t_68 != NULL) && (t_68 != u_68)))
                    _fail(u_68);
                  else
                    t_68 = u_68;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(r_68), not_null(m_68), (ATerm) ATinsert(CheckATermList(not_null(n_68)), not_null(t_68)));
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
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  f_69 = t;
  e_69 :
  if(match_cons(f_69, sym__2))
    {
      g_69 = ATgetArgument(f_69, 0);
      h_69 = ATgetArgument(f_69, 1);
      {
        ATerm k_69 = NULL,l_69 = NULL,o_69 = NULL;
        ATerm p_69 = NULL;
        ATerm q_69 = NULL;
        t = new_0(t);
        {
          p_69 = t;
          {
            if(((k_69 != NULL) && (k_69 != p_69)))
              _fail(p_69);
            else
              k_69 = p_69;
            {
              ATerm r_69 = NULL;
              t = new_0(t);
              {
                q_69 = t;
                {
                  if(((l_69 != NULL) && (l_69 != q_69)))
                    _fail(q_69);
                  else
                    l_69 = q_69;
                  {
                    t = new_0(t);
                    {
                      r_69 = t;
                      if(((o_69 != NULL) && (o_69 != r_69)))
                        _fail(r_69);
                      else
                        o_69 = r_69;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_69)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_69)))), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_69))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(k_69), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_14), term_r_14)), not_null(l_69), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_69)), not_null(o_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_69)));
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
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
  z_69 = t;
  x_69 :
  if(match_cons(z_69, sym__2))
    {
      a_70 = ATgetArgument(z_69, 0);
      b_70 = ATgetArgument(z_69, 1);
      y_69 :
      if(((ATermList) b_70 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm y_101 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, y_101);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL;
  f_70 = t;
  e_70 :
  if(((ATgetType(f_70) == AT_LIST) && ((ATermList) f_70 != ATempty)))
    {
      g_70 = ATgetFirst((ATermList) f_70);
      h_70 = (ATerm) ATgetNext((ATermList) f_70);
      t = not_null(h_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL;
  o_70 = t;
  m_70 :
  if(((ATgetType(o_70) == AT_LIST) && ((ATermList) o_70 != ATempty)))
    {
      p_70 = ATgetFirst((ATermList) o_70);
      q_70 = (ATerm) ATgetNext((ATermList) o_70);
      n_70 :
      if(((ATermList) q_70 == ATempty))
        {
          t = not_null(p_70);
        }
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
  ATerm b_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(f_15);
    }
  else
    {
      t = b_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL;
  ATerm m_73 (ATerm t)
  {
    ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,o_72 = NULL;
    ATerm g_15;
    g_15 = t;
    {
      ATerm b_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL;
      ATerm c_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_71), term_t_6);
      {
        t = add_0(t);
        {
          c_72 = t;
          if(((b_72 != NULL) && (b_72 != c_72)))
            _fail(c_72);
          else
            b_72 = c_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_72), term_h_15);
        {
          t = copy_1(t, new_0);
          {
            d_72 = t;
            c_71 :
            if(((ATgetType(d_72) == AT_LIST) && ((ATermList) d_72 != ATempty)))
              {
                e_72 = ATgetFirst((ATermList) d_72);
                f_72 = (ATerm) ATgetNext((ATermList) d_72);
                {
                  ATerm g_72 = NULL;
                  if(((t_71 != NULL) && (t_71 != e_72)))
                    _fail(e_72);
                  else
                    t_71 = e_72;
                  {
                    if(((u_71 != NULL) && (u_71 != f_72)))
                      _fail(f_72);
                    else
                      u_71 = f_72;
                    {
                      t = not_null(u_71);
                      {
                        ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL;
                        t = last_0(t);
                        {
                          g_72 = t;
                          {
                            if(((s_71 != NULL) && (s_71 != g_72)))
                              _fail(g_72);
                            else
                              s_71 = g_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_71)), not_null(t_71)), not_null(u_71));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    h_72 = t;
                                    b_71 :
                                    if(match_cons(h_72, sym__6))
                                      {
                                        i_72 = ATgetArgument(h_72, 0);
                                        j_72 = ATgetArgument(h_72, 1);
                                        k_72 = ATgetArgument(h_72, 2);
                                        l_72 = ATgetArgument(h_72, 3);
                                        m_72 = ATgetArgument(h_72, 4);
                                        n_72 = ATgetArgument(h_72, 5);
                                        {
                                          if(((v_71 != NULL) && (v_71 != i_72)))
                                            _fail(i_72);
                                          else
                                            v_71 = i_72;
                                          {
                                            if(((w_71 != NULL) && (w_71 != j_72)))
                                              _fail(j_72);
                                            else
                                              w_71 = j_72;
                                            {
                                              if(((x_71 != NULL) && (x_71 != k_72)))
                                                _fail(k_72);
                                              else
                                                x_71 = k_72;
                                              {
                                                if(((y_71 != NULL) && (y_71 != l_72)))
                                                  _fail(l_72);
                                                else
                                                  y_71 = l_72;
                                                {
                                                  if(((z_71 != NULL) && (z_71 != m_72)))
                                                    _fail(m_72);
                                                  else
                                                    z_71 = m_72;
                                                  if(((a_72 != NULL) && (a_72 != n_72)))
                                                    _fail(n_72);
                                                  else
                                                    a_72 = n_72;
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
    t = g_15;
    {
      ATerm p_72 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_71)), not_null(x_71)), not_null(u_71));
      {
        t = concat_0(t);
        {
          p_72 = t;
          if(((o_72 != NULL) && (o_72 != p_72)))
            _fail(p_72);
          else
            o_72 = p_72;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(n_71), term_k_15), not_null(w_71), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(o_72)), not_null(t_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(n_71), not_null(y_71)))), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(n_71), not_null(a_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(v_71))))));
    }
    return(t);
  }
  ATerm n_73 (ATerm t)
  {
    ATerm r_72 = NULL;
    ATerm s_72 = NULL;
    t = new_0(t);
    {
      s_72 = t;
      if(((r_72 != NULL) && (r_72 != s_72)))
        _fail(s_72);
      else
        r_72 = s_72;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(n_71), term_k_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(n_71), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(n_71), (ATerm) ATempty))), term_s_11))));
    return(t);
  }
  ATerm o_73 (ATerm t)
  {
    ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,k_73 = NULL;
    ATerm r_15;
    r_15 = t;
    {
      ATerm c_73 = NULL;
      ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL;
      t = new_0(t);
      {
        c_73 = t;
        {
          if(((v_72 != NULL) && (v_72 != c_73)))
            _fail(c_73);
          else
            v_72 = c_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_71), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_72)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  d_73 = t;
                  h_71 :
                  if(match_cons(d_73, sym__6))
                    {
                      e_73 = ATgetArgument(d_73, 0);
                      f_73 = ATgetArgument(d_73, 1);
                      g_73 = ATgetArgument(d_73, 2);
                      h_73 = ATgetArgument(d_73, 3);
                      i_73 = ATgetArgument(d_73, 4);
                      j_73 = ATgetArgument(d_73, 5);
                      {
                        if(((w_72 != NULL) && (w_72 != e_73)))
                          _fail(e_73);
                        else
                          w_72 = e_73;
                        {
                          if(((x_72 != NULL) && (x_72 != f_73)))
                            _fail(f_73);
                          else
                            x_72 = f_73;
                          {
                            if(((y_72 != NULL) && (y_72 != g_73)))
                              _fail(g_73);
                            else
                              y_72 = g_73;
                            {
                              if(((z_72 != NULL) && (z_72 != h_73)))
                                _fail(h_73);
                              else
                                z_72 = h_73;
                              {
                                if(((a_73 != NULL) && (a_73 != i_73)))
                                  _fail(i_73);
                                else
                                  a_73 = i_73;
                                if(((b_73 != NULL) && (b_73 != j_73)))
                                  _fail(j_73);
                                else
                                  b_73 = j_73;
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
    t = r_15;
    {
      ATerm l_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_72), not_null(a_73));
      {
        t = conc_0(t);
        {
          l_73 = t;
          if(((k_73 != NULL) && (k_73 != l_73)))
            _fail(l_73);
          else
            k_73 = l_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(n_71), term_s_15), not_null(x_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(k_73)), not_null(v_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(n_71), not_null(z_72)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(n_71), not_null(b_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(w_72))))));
    }
    return(t);
  }
  m_71 = t;
  j_71 :
  if(match_cons(m_71, sym__3))
    {
      n_71 = ATgetArgument(m_71, 0);
      o_71 = ATgetArgument(m_71, 1);
      p_71 = ATgetArgument(m_71, 2);
      k_71 :
      if(match_string(o_71, "T"))
        {
          l_71 :
          if(match_int(p_71, 0))
            {
              ATerm a_16 = t;
              int b_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_73(t);
                  LocalPopChoice(b_16);
                }
              else
                {
                  t = a_16;
                  t = n_73(t);
                }
            }
          else
            {
              t = m_73(t);
            }
        }
      else
        {
          if(match_string(o_71, "D"))
            {
              t = o_73(t);
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
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
  d_74 = t;
  a_74 :
  if(match_cons(d_74, sym__2))
    {
      e_74 = ATgetArgument(d_74, 0);
      j_74 = ATgetArgument(d_74, 1);
      b_74 :
      if(match_cons(e_74, sym__2))
        {
          f_74 = ATgetArgument(e_74, 0);
          i_74 = ATgetArgument(e_74, 1);
          c_74 :
          if(match_cons(f_74, sym_Mod_2))
            {
              g_74 = ATgetArgument(f_74, 0);
              h_74 = ATgetArgument(f_74, 1);
              {
                ATerm o_74 = NULL;
                ATerm p_74 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(g_74), not_null(h_74), not_null(i_74));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      p_74 = t;
                      if(((o_74 != NULL) && (o_74 != p_74)))
                        _fail(p_74);
                      else
                        o_74 = p_74;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_74), not_null(j_74));
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
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL;
  v_74 = t;
  t_74 :
  if(match_cons(v_74, sym__5))
    {
      w_74 = ATgetArgument(v_74, 0);
      z_74 = ATgetArgument(v_74, 1);
      a_75 = ATgetArgument(v_74, 2);
      b_75 = ATgetArgument(v_74, 3);
      c_75 = ATgetArgument(v_74, 4);
      u_74 :
      if(((ATgetType(w_74) == AT_LIST) && ((ATermList) w_74 != ATempty)))
        {
          x_74 = ATgetFirst((ATermList) w_74);
          y_74 = (ATerm) ATgetNext((ATermList) w_74);
          t = (ATerm) ATmakeAppl(sym__5, not_null(y_74), not_null(z_74), not_null(a_75), not_null(b_75), (ATerm) ATinsert(CheckATermList(not_null(c_75)), not_null(x_74)));
        }
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
  ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL;
  p_75 = t;
  n_75 :
  if(match_cons(p_75, sym__2))
    {
      q_75 = ATgetArgument(p_75, 0);
      r_75 = ATgetArgument(p_75, 1);
      o_75 :
      if(((ATgetType(r_75) == AT_LIST) && ((ATermList) r_75 != ATempty)))
        {
          s_75 = ATgetFirst((ATermList) r_75);
          t_75 = (ATerm) ATgetNext((ATermList) r_75);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_75)), not_null(s_75)), not_null(t_75));
        }
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
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL;
  a_76 = t;
  z_75 :
  if(match_cons(a_76, sym__2))
    {
      b_76 = ATgetArgument(a_76, 0);
      c_76 = ATgetArgument(a_76, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_76)), not_null(b_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
  k_76 = t;
  h_76 :
  if(match_cons(k_76, sym__2))
    {
      l_76 = ATgetArgument(k_76, 0);
      o_76 = ATgetArgument(k_76, 1);
      i_76 :
      if(((ATgetType(l_76) == AT_LIST) && ((ATermList) l_76 != ATempty)))
        {
          m_76 = ATgetFirst((ATermList) l_76);
          n_76 = (ATerm) ATgetNext((ATermList) l_76);
          j_76 :
          if(((ATgetType(o_76) == AT_LIST) && ((ATermList) o_76 != ATempty)))
            {
              p_76 = ATgetFirst((ATermList) o_76);
              q_76 = (ATerm) ATgetNext((ATermList) o_76);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_76), not_null(p_76)), (ATerm) ATmakeAppl(sym__2, not_null(n_76), not_null(q_76)));
            }
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
  ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
  h_77 = t;
  c_77 :
  if(match_cons(h_77, sym__2))
    {
      i_77 = ATgetArgument(h_77, 0);
      j_77 = ATgetArgument(h_77, 1);
      f_77 :
      if(((ATermList) i_77 == ATempty))
        {
          g_77 :
          if(((ATermList) j_77 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm))
{
  ATerm l_77 (ATerm t)
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_101(t);
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        {
          t = r_101(t);
          {
            t = _2(t, t_101, l_77);
            t = s_101(t);
          }
        }
      }
    return(t);
  }
  t = l_77(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm v_101 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_101);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL;
  w_77 = t;
  u_77 :
  if(((ATgetType(w_77) == AT_LIST) && ((ATermList) w_77 != ATempty)))
    {
      x_77 = ATgetFirst((ATermList) w_77);
      a_78 = (ATerm) ATgetNext((ATermList) w_77);
      v_77 :
      if(match_cons(x_77, sym__2))
        {
          y_77 = ATgetArgument(x_77, 0);
          z_77 = ATgetArgument(x_77, 1);
          {
            ATerm e_78 = NULL,f_78 = NULL,n_78 = NULL,v_78 = NULL;
            ATerm g_16;
            g_16 = t;
            {
              ATerm g_78 = NULL;
              ATerm j_78 = NULL,l_78 = NULL,m_78 = NULL;
              t = not_null(z_77);
              {
                g_78 = t;
                {
                  t = SSL_explode_term(not_null(g_78));
                  {
                    j_78 = t;
                    p_77 :
                    if(match_cons(j_78, sym__2))
                      {
                        l_78 = ATgetArgument(j_78, 0);
                        m_78 = ATgetArgument(j_78, 1);
                        {
                          if(((e_78 != NULL) && (e_78 != l_78)))
                            _fail(l_78);
                          else
                            e_78 = l_78;
                          if(((f_78 != NULL) && (f_78 != m_78)))
                            _fail(m_78);
                          else
                            f_78 = m_78;
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
            t = g_16;
            {
              ATerm m_16;
              m_16 = t;
              {
                ATerm o_78 = NULL;
                ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL;
                t = not_null(y_77);
                {
                  o_78 = t;
                  {
                    t = SSL_explode_term(not_null(o_78));
                    {
                      s_78 = t;
                      s_77 :
                      if(match_cons(s_78, sym__2))
                        {
                          t_78 = ATgetArgument(s_78, 0);
                          u_78 = ATgetArgument(s_78, 1);
                          {
                            if(((e_78 != NULL) && (e_78 != t_78)))
                              _fail(t_78);
                            else
                              e_78 = t_78;
                            if(((n_78 != NULL) && (n_78 != u_78)))
                              _fail(u_78);
                            else
                              n_78 = u_78;
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
              t = m_16;
              {
                ATerm w_78 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_78), not_null(f_78));
                {
                  t = zip_1(t, _id);
                  {
                    w_78 = t;
                    if(((v_78 != NULL) && (v_78 != w_78)))
                      _fail(w_78);
                    else
                      v_78 = w_78;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_78), not_null(a_78));
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
  ATerm g_79 = NULL,h_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL;
  g_79 = t;
  e_79 :
  if(((ATgetType(g_79) == AT_LIST) && ((ATermList) g_79 != ATempty)))
    {
      h_79 = ATgetFirst((ATermList) g_79);
      t_79 = (ATerm) ATgetNext((ATermList) g_79);
      f_79 :
      if(match_cons(h_79, sym__2))
        {
          r_79 = ATgetArgument(h_79, 0);
          s_79 = ATgetArgument(h_79, 1);
          {
            ATerm v_79 = NULL;
            if(((r_79 != NULL) && (r_79 != s_79)))
              _fail(s_79);
            else
              r_79 = s_79;
            {
              if(((v_79 != NULL) && (v_79 != t_79)))
                _fail(t_79);
              else
                v_79 = t_79;
              t = not_null(v_79);
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
  ATerm r_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
      a_80 = t;
      y_79 :
      if(match_cons(a_80, sym__2))
        {
          b_80 = ATgetArgument(a_80, 0);
          c_80 = ATgetArgument(a_80, 1);
          {
            t = not_null(b_80);
            {
              ATerm i_80 (ATerm t)
              {
                ATerm a_17 = t;
                int b_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(b_17);
                  }
                else
                  {
                    t = a_17;
                    {
                      ATerm c_17 = t;
                      int d_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_2 (ATerm t)
                          {
                            t = not_null(c_80);
                            return(t);
                          }
                          t = HdMember_1(t, n_2);
                          t = i_80(t);
                          LocalPopChoice(d_17);
                        }
                      else
                        {
                          t = c_17;
                          t = Cons_2(t, _id, i_80);
                        }
                    }
                  }
                return(t);
              }
              t = i_80(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_16);
    }
  else
    {
      t = r_16;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm f_80 = NULL;
          f_80 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_80));
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_2 (ATerm t)
              {
                ATerm k_17 = t;
                int s_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(s_17);
                  }
                else
                  {
                    t = k_17;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, r_2);
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, o_2, p_2, q_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm s_81 (ATerm))
{
  ATerm a_81 = NULL,b_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL;
  a_81 = t;
  y_80 :
  if(match_cons(a_81, sym__5))
    {
      b_81 = ATgetArgument(a_81, 0);
      g_81 = ATgetArgument(a_81, 1);
      h_81 = ATgetArgument(a_81, 2);
      i_81 = ATgetArgument(a_81, 3);
      j_81 = ATgetArgument(a_81, 4);
      z_80 :
      if(((ATgetType(b_81) == AT_LIST) && ((ATermList) b_81 != ATempty)))
        {
          e_81 = ATgetFirst((ATermList) b_81);
          f_81 = (ATerm) ATgetNext((ATermList) b_81);
          {
            ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL,h_82 = NULL,j_82 = NULL,l_82 = NULL;
            ATerm t_17;
            t_17 = t;
            {
              ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_81), not_null(h_81));
              {
                t = q_81(t);
                {
                  c_82 = t;
                  u_80 :
                  if(match_cons(c_82, sym__2))
                    {
                      d_82 = ATgetArgument(c_82, 0);
                      e_82 = ATgetArgument(c_82, 1);
                      {
                        ATerm f_82 = NULL;
                        if(((w_81 != NULL) && (w_81 != d_82)))
                          _fail(d_82);
                        else
                          w_81 = d_82;
                        {
                          if(((v_81 != NULL) && (v_81 != e_82)))
                            _fail(e_82);
                          else
                            v_81 = e_82;
                          {
                            t = not_null(w_81);
                            {
                              ATerm g_82 = NULL;
                              t = r_81(t);
                              {
                                f_82 = t;
                                {
                                  if(((x_81 != NULL) && (x_81 != f_82)))
                                    _fail(f_82);
                                  else
                                    x_81 = f_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_81), not_null(g_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        g_82 = t;
                                        if(((y_81 != NULL) && (y_81 != g_82)))
                                          _fail(g_82);
                                        else
                                          y_81 = g_82;
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
            t = t_17;
            {
              ATerm u_17;
              u_17 = t;
              {
                ATerm i_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_81), not_null(f_81));
                {
                  t = conc_0(t);
                  {
                    i_82 = t;
                    if(((h_82 != NULL) && (h_82 != i_82)))
                      _fail(i_82);
                    else
                      h_82 = i_82;
                  }
                }
              }
              t = u_17;
              {
                ATerm c_18;
                c_18 = t;
                {
                  ATerm k_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_81), not_null(g_81));
                  {
                    t = conc_0(t);
                    {
                      k_82 = t;
                      if(((j_82 != NULL) && (j_82 != k_82)))
                        _fail(k_82);
                      else
                        j_82 = k_82;
                    }
                  }
                }
                t = c_18;
                {
                  ATerm m_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(e_81), not_null(w_81), not_null(i_81));
                  {
                    t = s_81(t);
                    {
                      m_82 = t;
                      if(((l_82 != NULL) && (l_82 != m_82)))
                        _fail(m_82);
                      else
                        l_82 = m_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(h_82), not_null(j_82), not_null(v_81), not_null(l_82), not_null(j_81));
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
  ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL,b_83 = NULL,c_83 = NULL;
  x_82 = t;
  v_82 :
  if(match_cons(x_82, sym__5))
    {
      y_82 = ATgetArgument(x_82, 0);
      z_82 = ATgetArgument(x_82, 1);
      a_83 = ATgetArgument(x_82, 2);
      b_83 = ATgetArgument(x_82, 3);
      c_83 = ATgetArgument(x_82, 4);
      w_82 :
      if(((ATermList) y_82 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_83), not_null(c_83));
        }
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
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL;
  k_83 = t;
  j_83 :
  if(match_cons(k_83, sym__3))
    {
      l_83 = ATgetArgument(k_83, 0);
      m_83 = ATgetArgument(k_83, 1);
      n_83 = ATgetArgument(k_83, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(l_83), not_null(l_83), not_null(m_83), not_null(n_83), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm q_91 (ATerm), ATerm r_91 (ATerm))
{
  ATerm s_83 (ATerm t)
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_91(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          t = r_91(t);
          t = s_83(t);
        }
      }
    return(t);
  }
  t = s_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm))
{
  t = t_91(t);
  t = while_not_2(t, u_91, v_91);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm f_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, z_81, a_82, b_82);
        LocalPopChoice(q_18);
      }
    else
      {
        t = f_18;
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
    ATerm v_83 = NULL,w_83 = NULL,d_84 = NULL,e_84 = NULL;
    v_83 = t;
    u_83 :
    if(match_cons(v_83, sym__3))
      {
        w_83 = ATgetArgument(v_83, 0);
        d_84 = ATgetArgument(v_83, 1);
        e_84 = ATgetArgument(v_83, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(e_84)), not_null(d_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, t_2, u_2);
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_t_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL;
  n_84 = t;
  m_84 :
  if(match_cons(n_84, sym__2))
    {
      o_84 = ATgetArgument(n_84, 0);
      p_84 = ATgetArgument(n_84, 1);
      {
        ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL;
        ATerm u_18;
        u_18 = t;
        {
          ATerm v_84 = NULL;
          ATerm x_84 = NULL,a_85 = NULL,b_85 = NULL;
          t = k_81(t);
          {
            v_84 = t;
            {
              if(((s_84 != NULL) && (s_84 != v_84)))
                _fail(v_84);
              else
                s_84 = v_84;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_84), not_null(o_84), not_null(p_84));
                {
                  t = table_push_0(t);
                  {
                    ATerm v_18 = t;
                    int w_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_84), term_y_18);
                        t = table_get_0(t);
                        LocalPopChoice(w_18);
                      }
                    else
                      {
                        t = v_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      x_84 = t;
                      l_84 :
                      if(((ATgetType(x_84) == AT_LIST) && ((ATermList) x_84 != ATempty)))
                        {
                          a_85 = ATgetFirst((ATermList) x_84);
                          b_85 = (ATerm) ATgetNext((ATermList) x_84);
                          {
                            if(((t_84 != NULL) && (t_84 != a_85)))
                              _fail(a_85);
                            else
                              t_84 = a_85;
                            {
                              if(((u_84 != NULL) && (u_84 != b_85)))
                                _fail(b_85);
                              else
                                u_84 = b_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(s_84), term_y_18, (ATerm) ATinsert(CheckATermList(not_null(u_84)), (ATerm) ATinsert(CheckATermList(not_null(t_84)), not_null(o_84))));
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
        t = u_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm l_97 (ATerm))
{
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
  i_85 = t;
  h_85 :
  if(((ATgetType(i_85) == AT_LIST) && ((ATermList) i_85 != ATempty)))
    {
      j_85 = ATgetFirst((ATermList) i_85);
      k_85 = (ATerm) ATgetNext((ATermList) i_85);
      {
        t = l_97(t);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm n_85 = NULL;
            n_85 = t;
            if(((j_85 != NULL) && (j_85 != n_85)))
              _fail(n_85);
            else
              j_85 = n_85;
            return(t);
          }
          t = fetch_1(t, w_2);
        }
        t = not_null(k_85);
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
  ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL;
  s_85 = t;
  r_85 :
  if(match_cons(s_85, sym__2))
    {
      t_85 = ATgetArgument(s_85, 0);
      u_85 = ATgetArgument(s_85, 1);
      {
        t = not_null(t_85);
        {
          ATerm y_85 (ATerm t)
          {
            ATerm d_19 = t;
            int e_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_85);
                LocalPopChoice(e_19);
              }
            else
              {
                t = d_19;
                {
                  ATerm f_19 = t;
                  int h_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_2 (ATerm t)
                      {
                        t = not_null(u_85);
                        return(t);
                      }
                      t = HdMember_1(t, x_2);
                      t = y_85(t);
                      LocalPopChoice(h_19);
                    }
                  else
                    {
                      t = f_19;
                      t = Cons_2(t, _id, y_85);
                    }
                }
              }
            return(t);
          }
          t = y_85(t);
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
  ATerm j_86 = NULL;
  ATerm p_86 = NULL;
  j_86 = t;
  {
    ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_86));
    {
      ATerm y_2 (ATerm t)
      {
        t = term_i_19;
        return(t);
      }
      t = rewrite_1(t, y_2);
      {
        q_86 = t;
        c_86 :
        if(match_cons(q_86, sym_Defined_2))
          {
            r_86 = ATgetArgument(q_86, 0);
            s_86 = ATgetArgument(q_86, 1);
            i_86 :
            if(match_string(r_86, "h_0"))
              {
                if(((p_86 != NULL) && (p_86 != s_86)))
                  _fail(s_86);
                else
                  p_86 = s_86;
              }
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
    t = not_null(p_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm y_86 = NULL,a_87 = NULL,b_87 = NULL;
  y_86 = t;
  w_86 :
  if(((ATgetType(y_86) == AT_LIST) && ((ATermList) y_86 != ATempty)))
    {
      a_87 = ATgetFirst((ATermList) y_86);
      b_87 = (ATerm) ATgetNext((ATermList) y_86);
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
ATerm rewrite_1 (ATerm t, ATerm m_81 (ATerm))
{
  ATerm q_87 = NULL;
  ATerm s_87 = NULL;
  q_87 = t;
  {
    ATerm t_87 = NULL;
    t = term_h_15;
    {
      t = m_81(t);
      {
        t_87 = t;
        if(((s_87 != NULL) && (s_87 != t_87)))
          _fail(t_87);
        else
          s_87 = t_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_87), not_null(q_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL;
  b_88 = t;
  a_88 :
  if(match_cons(b_88, sym__2))
    {
      c_88 = ATgetArgument(b_88, 0);
      d_88 = ATgetArgument(b_88, 1);
      {
        ATerm g_88 = NULL,h_88 = NULL;
        ATerm i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(d_88), not_null(c_88));
        {
          ATerm z_2 (ATerm t)
          {
            t = term_j_19;
            return(t);
          }
          t = rewrite_1(t, z_2);
          {
            i_88 = t;
            y_87 :
            if(match_cons(i_88, sym_Defined_3))
              {
                j_88 = ATgetArgument(i_88, 0);
                k_88 = ATgetArgument(i_88, 1);
                l_88 = ATgetArgument(i_88, 2);
                z_87 :
                if(match_string(j_88, "g_0"))
                  {
                    if(((g_88 != NULL) && (g_88 != k_88)))
                      _fail(k_88);
                    else
                      g_88 = k_88;
                    if(((h_88 != NULL) && (h_88 != l_88)))
                      _fail(l_88);
                    else
                      h_88 = l_88;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(h_88)), not_null(g_88));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm j_96 (ATerm))
{
  ATerm p_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_96(t);
      LocalPopChoice(r_19);
    }
  else
    {
      t = p_19;
      {
        ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL;
        s_88 = t;
        r_88 :
        if(((ATgetType(s_88) == AT_LIST) && ((ATermList) s_88 != ATempty)))
          {
            t_88 = ATgetFirst((ATermList) s_88);
            u_88 = (ATerm) ATgetNext((ATermList) s_88);
            {
              ATerm x_88 = NULL,z_88 = NULL;
              ATerm s_19;
              s_19 = t;
              {
                ATerm y_88 = NULL;
                t = not_null(t_88);
                {
                  t = j_96(t);
                  {
                    y_88 = t;
                    if(((x_88 != NULL) && (x_88 != y_88)))
                      _fail(y_88);
                    else
                      x_88 = y_88;
                  }
                }
              }
              t = s_19;
              {
                ATerm a_89 = NULL;
                t = not_null(u_88);
                {
                  t = foldr_3(t, h_96, i_96, j_96);
                  {
                    a_89 = t;
                    if(((z_88 != NULL) && (z_88 != a_89)))
                      _fail(a_89);
                    else
                      z_88 = a_89;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_88), not_null(z_88));
                  t = i_96(t);
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
  ATerm c_3 (ATerm t)
  {
    t = term_t_19;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_t_6;
    return(t);
  }
  t = foldr_3(t, c_3, add_0, d_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL;
    k_89 = t;
    j_89 :
    if(match_cons(k_89, sym_SDef_3))
      {
        l_89 = ATgetArgument(k_89, 0);
        m_89 = ATgetArgument(k_89, 1);
        n_89 = ATgetArgument(k_89, 2);
        {
          ATerm s_89 = NULL,t_89 = NULL,u_89 = NULL;
          ATerm u_19;
          u_19 = t;
          {
            ATerm v_89 = NULL;
            t = not_null(m_89);
            {
              ATerm w_89 = NULL;
              t = length_0(t);
              {
                v_89 = t;
                {
                  if(((t_89 != NULL) && (t_89 != v_89)))
                    _fail(v_89);
                  else
                    t_89 = v_89;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_89), not_null(t_89));
                    {
                      ATerm x_89 = NULL,z_89 = NULL;
                      ATerm v_19 = t;
                      int y_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(y_19);
                        }
                      else
                        {
                          t = v_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        w_89 = t;
                        {
                          if(((s_89 != NULL) && (s_89 != w_89)))
                            _fail(w_89);
                          else
                            s_89 = w_89;
                          {
                            ATerm y_89 = NULL;
                            t = not_null(l_89);
                            {
                              ATerm z_19 = t;
                              int a_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(a_20);
                                }
                              else
                                {
                                  t = z_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                y_89 = t;
                                if(((x_89 != NULL) && (x_89 != y_89)))
                                  _fail(y_89);
                                else
                                  x_89 = y_89;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(t_89)), not_null(x_89));
                              {
                                t = union_0(t);
                                {
                                  z_89 = t;
                                  {
                                    if(((u_89 != NULL) && (u_89 != z_89)))
                                      _fail(z_89);
                                    else
                                      u_89 = z_89;
                                    {
                                      ATerm b_20;
                                      b_20 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(t_89), not_null(l_89)), (ATerm) ATmakeAppl(sym_Defined_3, term_g_20, not_null(k_89), not_null(s_89)));
                                        {
                                          ATerm f_3 (ATerm t)
                                          {
                                            t = term_j_19;
                                            return(t);
                                          }
                                          t = assert_1(t, f_3);
                                        }
                                      }
                                      t = b_20;
                                      {
                                        ATerm h_20;
                                        h_20 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(l_89)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_20, not_null(u_89)));
                                          {
                                            ATerm g_3 (ATerm t)
                                            {
                                              t = term_i_19;
                                              return(t);
                                            }
                                            t = assert_1(t, g_3);
                                          }
                                        }
                                        t = h_20;
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
          t = u_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, e_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm g_90 = NULL;
  ATerm h_90 = NULL;
  t = sort_defs_0(t);
  {
    h_90 = t;
    if(((g_90 != NULL) && (g_90 != h_90)))
      _fail(h_90);
    else
      g_90 = h_90;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_k_20), not_null(g_90), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm o_90 = NULL,p_90 = NULL;
  o_90 = t;
  n_90 :
  if(match_cons(o_90, sym_Strategies_1))
    {
      p_90 = ATgetArgument(o_90, 0);
      {
        ATerm s_90 = NULL,u_90 = NULL;
        ATerm t_90 = NULL;
        t = SSLgetAnnotations(not_null(o_90));
        {
          t_90 = t;
          if(((s_90 != NULL) && (s_90 != t_90)))
            _fail(t_90);
          else
            s_90 = t_90;
        }
        {
          t = not_null(p_90);
          {
            ATerm w_90 = NULL;
            t = i_78(t);
            {
              u_90 = t;
              {
                ATerm x_90 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(u_90)), not_null(s_90));
                {
                  x_90 = t;
                  if(((w_90 != NULL) && (w_90 != x_90)))
                    _fail(x_90);
                  else
                    w_90 = x_90;
                }
                t = not_null(w_90);
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
ATerm Cons_2 (ATerm t, ATerm r_80 (ATerm), ATerm s_80 (ATerm))
{
  ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL;
  m_91 = t;
  l_91 :
  if(((ATgetType(m_91) == AT_LIST) && ((ATermList) m_91 != ATempty)))
    {
      n_91 = ATgetFirst((ATermList) m_91);
      o_91 = (ATerm) ATgetNext((ATermList) m_91);
      {
        ATerm y_91 = NULL,a_92 = NULL;
        ATerm z_91 = NULL;
        t = SSLgetAnnotations(not_null(m_91));
        {
          z_91 = t;
          if(((y_91 != NULL) && (y_91 != z_91)))
            _fail(z_91);
          else
            y_91 = z_91;
        }
        {
          t = not_null(n_91);
          {
            ATerm c_92 = NULL;
            t = r_80(t);
            {
              a_92 = t;
              {
                t = not_null(o_91);
                {
                  ATerm e_92 = NULL;
                  t = s_80(t);
                  {
                    c_92 = t;
                    {
                      ATerm f_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_92)), not_null(a_92)), not_null(y_91));
                      {
                        f_92 = t;
                        if(((e_92 != NULL) && (e_92 != f_92)))
                          _fail(f_92);
                        else
                          e_92 = f_92;
                      }
                      t = not_null(e_92);
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
ATerm Specification_1 (ATerm t, ATerm k_78 (ATerm))
{
  ATerm q_92 = NULL,r_92 = NULL;
  q_92 = t;
  p_92 :
  if(match_cons(q_92, sym_Specification_1))
    {
      r_92 = ATgetArgument(q_92, 0);
      {
        ATerm u_92 = NULL,w_92 = NULL;
        ATerm v_92 = NULL;
        t = SSLgetAnnotations(not_null(q_92));
        {
          v_92 = t;
          if(((u_92 != NULL) && (u_92 != v_92)))
            _fail(v_92);
          else
            u_92 = v_92;
        }
        {
          t = not_null(r_92);
          {
            ATerm y_92 = NULL;
            t = k_78(t);
            {
              w_92 = t;
              {
                ATerm z_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(w_92)), not_null(u_92));
                {
                  z_92 = t;
                  if(((y_92 != NULL) && (y_92 != z_92)))
                    _fail(z_92);
                  else
                    y_92 = z_92;
                }
                t = not_null(y_92);
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
ATerm _2 (ATerm t, ATerm m_69 (ATerm), ATerm n_69 (ATerm))
{
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL;
  k_93 = t;
  j_93 :
  if(match_cons(k_93, sym__2))
    {
      l_93 = ATgetArgument(k_93, 0);
      m_93 = ATgetArgument(k_93, 1);
      {
        ATerm q_93 = NULL,x_93 = NULL;
        ATerm r_93 = NULL;
        t = SSLgetAnnotations(not_null(k_93));
        {
          r_93 = t;
          if(((q_93 != NULL) && (q_93 != r_93)))
            _fail(r_93);
          else
            q_93 = r_93;
        }
        {
          t = not_null(l_93);
          {
            ATerm z_93 = NULL;
            t = m_69(t);
            {
              x_93 = t;
              {
                t = not_null(m_93);
                {
                  ATerm b_94 = NULL;
                  t = n_69(t);
                  {
                    z_93 = t;
                    {
                      ATerm c_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_93), not_null(z_93)), not_null(q_93));
                      {
                        c_94 = t;
                        if(((b_94 != NULL) && (b_94 != c_94)))
                          _fail(c_94);
                        else
                          b_94 = c_94;
                      }
                      t = not_null(b_94);
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
  ATerm k_94 = NULL;
  ATerm l_20;
  l_20 = t;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm l_94 = NULL,m_94 = NULL;
      l_94 = t;
      j_94 :
      if(match_cons(l_94, sym_Program_1))
        {
          m_94 = ATgetArgument(l_94, 0);
          if(((k_94 != NULL) && (k_94 != m_94)))
            _fail(m_94);
          else
            k_94 = m_94;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, h_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_20), not_null(k_94)), term_m_20));
      {
        t = printnl_0(t);
        {
          t = term_t_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL;
  q_94 = t;
  p_94 :
  if(match_cons(q_94, sym__2))
    {
      r_94 = ATgetArgument(q_94, 0);
      s_94 = ATgetArgument(q_94, 1);
      {
        ATerm s_20;
        s_20 = t;
        t = SSL_printnl(not_null(r_94), not_null(s_94));
        t = s_20;
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
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL;
  y_94 = t;
  x_94 :
  if(match_cons(y_94, sym__2))
    {
      z_94 = ATgetArgument(y_94, 0);
      a_95 = ATgetArgument(y_94, 1);
      {
        t = not_null(z_94);
        {
          ATerm i_3 (ATerm t)
          {
            t = not_null(a_95);
            return(t);
          }
          t = at_end_1(t, i_3);
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
ATerm debug_1 (ATerm t, ATerm p_87 (ATerm))
{
  ATerm t_20;
  t_20 = t;
  {
    ATerm g_95 = NULL,i_95 = NULL;
    ATerm u_20;
    u_20 = t;
    {
      ATerm h_95 = NULL;
      t = p_87(t);
      {
        h_95 = t;
        if(((g_95 != NULL) && (g_95 != h_95)))
          _fail(h_95);
        else
          g_95 = h_95;
      }
    }
    t = u_20;
    {
      ATerm j_95 = NULL;
      j_95 = t;
      if(((i_95 != NULL) && (i_95 != j_95)))
        _fail(j_95);
      else
        i_95 = j_95;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_95)), not_null(g_95)));
        t = printnl_0(t);
      }
    }
  }
  t = t_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_95 = NULL;
  n_95 = t;
  t = SSL_is_string(not_null(n_95));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm y_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = y_20;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_3);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            {
              ATerm w_95 = NULL,x_95 = NULL,y_95 = NULL;
              w_95 = t;
              v_95 :
              if(match_cons(w_95, sym_Path_1))
                {
                  x_95 = ATgetArgument(w_95, 0);
                  t = not_null(x_95);
                }
              else
                {
                  if(match_cons(w_95, sym_Var_1))
                    {
                      x_95 = ATgetArgument(w_95, 0);
                      {
                        t = not_null(x_95);
                        {
                          ATerm f_21 = t;
                          int g_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_21);
                            }
                          else
                            {
                              t = f_21;
                              {
                                ATerm k_3 (ATerm t)
                                {
                                  t = term_h_21;
                                  return(t);
                                }
                                t = debug_1(t, k_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_95, sym_Prefix_2))
                        {
                          x_95 = ATgetArgument(w_95, 0);
                          y_95 = ATgetArgument(w_95, 1);
                          {
                            ATerm d_96 = NULL,k_96 = NULL;
                            ATerm i_21;
                            i_21 = t;
                            {
                              ATerm e_96 = NULL;
                              t = not_null(x_95);
                              {
                                t = eval_config_0(t);
                                {
                                  e_96 = t;
                                  if(((d_96 != NULL) && (d_96 != e_96)))
                                    _fail(e_96);
                                  else
                                    d_96 = e_96;
                                }
                              }
                            }
                            t = i_21;
                            {
                              ATerm l_96 = NULL;
                              t = not_null(y_95);
                              {
                                t = eval_config_0(t);
                                {
                                  l_96 = t;
                                  if(((k_96 != NULL) && (k_96 != l_96)))
                                    _fail(l_96);
                                  else
                                    k_96 = l_96;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_96), not_null(k_96));
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
  ATerm v_96 = NULL;
  v_96 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_21, not_null(v_96));
    {
      t = table_get_0(t);
      {
        ATerm l_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm k_21;
            k_21 = t;
            {
              ATerm x_96 = NULL;
              ATerm y_96 = NULL;
              y_96 = t;
              if(((x_96 != NULL) && (x_96 != y_96)))
                _fail(y_96);
              else
                x_96 = y_96;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_j_21, not_null(v_96), not_null(x_96));
                t = table_put_0(t);
              }
            }
            t = k_21;
          }
          return(t);
        }
        t = try_1(t, l_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_84 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm m_21;
    m_21 = t;
    {
      ATerm c_97 = NULL;
      ATerm d_97 = NULL;
      t = term_n_21;
      {
        t = get_config_0(t);
        {
          d_97 = t;
          if(((c_97 != NULL) && (c_97 != d_97)))
            _fail(d_97);
          else
            c_97 = d_97;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_97), term_o_21);
        t = geq_0(t);
      }
    }
    t = m_21;
    t = z_84(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATempty, term_q_21));
  {
    t = printnl_0(t);
    {
      t = term_t_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm h_97 = NULL;
  h_97 = t;
  t = SSL_TicksToSeconds(not_null(h_97));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_97 = NULL,z_97 = NULL,a_98 = NULL;
  t_97 = t;
  q_97 :
  if(match_cons(t_97, sym__2))
    {
      z_97 = ATgetArgument(t_97, 0);
      a_98 = ATgetArgument(t_97, 1);
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_97), not_null(a_98));
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            t = SSL_addr(not_null(z_97), not_null(a_98));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_96 (ATerm), ATerm g_96 (ATerm))
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_96(t);
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL;
        h_98 = t;
        g_98 :
        if(((ATgetType(h_98) == AT_LIST) && ((ATermList) h_98 != ATempty)))
          {
            i_98 = ATgetFirst((ATermList) h_98);
            j_98 = (ATerm) ATgetNext((ATermList) h_98);
            {
              ATerm m_98 = NULL;
              ATerm n_98 = NULL;
              t = not_null(j_98);
              {
                t = foldr_2(t, f_96, g_96);
                {
                  n_98 = t;
                  if(((m_98 != NULL) && (m_98 != n_98)))
                    _fail(n_98);
                  else
                    m_98 = n_98;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_98), not_null(m_98));
                t = g_96(t);
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
ATerm crush_2 (ATerm t, ATerm u_97 (ATerm), ATerm v_97 (ATerm))
{
  ATerm u_98 = NULL;
  ATerm w_98 = NULL;
  u_98 = t;
  {
    ATerm x_98 = NULL;
    ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL;
    t = not_null(u_98);
    {
      x_98 = t;
      {
        t = SSL_explode_term(not_null(x_98));
        {
          z_98 = t;
          t_98 :
          if(match_cons(z_98, sym__2))
            {
              a_99 = ATgetArgument(z_98, 0);
              b_99 = ATgetArgument(z_98, 1);
              if(((w_98 != NULL) && (w_98 != b_99)))
                _fail(b_99);
              else
                w_98 = b_99;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_98);
      t = foldr_2(t, u_97, v_97);
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
    ATerm n_3 (ATerm t)
    {
      t = term_t_19;
      return(t);
    }
    t = crush_2(t, n_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL;
  h_99 = t;
  g_99 :
  if(match_cons(h_99, sym__2))
    {
      i_99 = ATgetArgument(h_99, 0);
      j_99 = ATgetArgument(h_99, 1);
      {
        ATerm e_22;
        e_22 = t;
        {
          ATerm f_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_99), not_null(j_99));
              LocalPopChoice(n_22);
            }
          else
            {
              t = f_22;
              t = SSL_gtr(not_null(i_99), not_null(j_99));
            }
        }
        t = e_22;
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
  ATerm p_99 = NULL;
  ATerm o_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_99 = NULL,r_99 = NULL,u_99 = NULL;
      q_99 = t;
      o_99 :
      if(match_cons(q_99, sym__2))
        {
          r_99 = ATgetArgument(q_99, 0);
          u_99 = ATgetArgument(q_99, 1);
          {
            if(((p_99 != NULL) && (p_99 != r_99)))
              _fail(r_99);
            else
              p_99 = r_99;
            if(((p_99 != NULL) && (p_99 != u_99)))
              _fail(u_99);
            else
              p_99 = u_99;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_22);
    }
  else
    {
      t = o_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_84 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm v_22;
    v_22 = t;
    {
      ATerm x_99 = NULL;
      ATerm y_99 = NULL;
      t = term_n_21;
      {
        t = get_config_0(t);
        {
          y_99 = t;
          if(((x_99 != NULL) && (x_99 != y_99)))
            _fail(y_99);
          else
            x_99 = y_99;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_99), term_t_6);
        t = geq_0(t);
      }
    }
    t = v_22;
    t = y_84(t);
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm e_100 = NULL,i_100 = NULL;
    ATerm a_23;
    a_23 = t;
    {
      ATerm f_100 = NULL;
      t = run_time_0(t);
      {
        f_100 = t;
        if(((e_100 != NULL) && (e_100 != f_100)))
          _fail(f_100);
        else
          e_100 = f_100;
      }
    }
    t = a_23;
    {
      ATerm j_100 = NULL;
      t = term_f_23;
      {
        t = get_config_0(t);
        {
          j_100 = t;
          if(((i_100 != NULL) && (i_100 != j_100)))
            _fail(j_100);
          else
            i_100 = j_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_23), not_null(e_100)), term_g_23), not_null(i_100)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_3);
  {
    t = term_t_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL;
  o_100 = t;
  n_100 :
  if(match_cons(o_100, sym__2))
    {
      p_100 = ATgetArgument(o_100, 0);
      q_100 = ATgetArgument(o_100, 1);
      t = SSL_WriteToTextFile(not_null(p_100), not_null(q_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL;
  w_100 = t;
  v_100 :
  if(match_cons(w_100, sym__2))
    {
      x_100 = ATgetArgument(w_100, 0);
      y_100 = ATgetArgument(w_100, 1);
      t = SSL_WriteToBinaryFile(not_null(x_100), not_null(y_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm g_101 = NULL;
  ATerm i_23;
  i_23 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm j_23 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm h_101 = NULL,i_101 = NULL;
            h_101 = t;
            d_101 :
            if(match_cons(h_101, sym_Output_1))
              {
                i_101 = ATgetArgument(h_101, 0);
                if(((g_101 != NULL) && (g_101 != i_101)))
                  _fail(i_101);
                else
                  g_101 = i_101;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_3);
          LocalPopChoice(k_23);
        }
      else
        {
          t = j_23;
          {
            ATerm k_101 = NULL;
            t = term_l_23;
            {
              k_101 = t;
              if(((g_101 != NULL) && (g_101 != k_101)))
                _fail(k_101);
              else
                g_101 = k_101;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_3, _id);
  }
  t = i_23;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(g_101);
        return(t);
      }
      t = split_2(t, t_3, _id);
      return(t);
    }
    t = _2(t, _id, s_3);
    {
      ATerm m_23 = t;
      int n_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_3 (ATerm t)
          {
            ATerm v_3 (ATerm t)
            {
              ATerm l_101 = NULL;
              l_101 = t;
              f_101 :
              if(!(match_cons(l_101, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_3);
            return(t);
          }
          t = _2(t, u_3, WriteToBinaryFile_0);
          LocalPopChoice(n_23);
        }
      else
        {
          t = m_23;
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
ATerm apply_strategy_1 (ATerm t, ATerm z_86 (ATerm))
{
  ATerm x_101 = NULL,b_102 = NULL,c_102 = NULL,d_102 = NULL;
  ATerm o_23;
  o_23 = t;
  t = dtime_0(t);
  t = o_23;
  {
    t = z_86(t);
    {
      ATerm u_23;
      u_23 = t;
      {
        ATerm z_101 = NULL;
        t = dtime_0(t);
        {
          z_101 = t;
          if(((x_101 != NULL) && (x_101 != z_101)))
            _fail(z_101);
          else
            x_101 = z_101;
        }
      }
      t = u_23;
      {
        b_102 = t;
        w_101 :
        if(match_cons(b_102, sym__2))
          {
            c_102 = ATgetArgument(b_102, 0);
            d_102 = ATgetArgument(b_102, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_102)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_101))), not_null(d_102));
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
  ATerm j_102 = NULL;
  j_102 = t;
  t = SSL_ReadFromFile(not_null(j_102));
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_103 (ATerm), ATerm e_103 (ATerm))
{
  ATerm o_102 = NULL,q_102 = NULL;
  ATerm v_23;
  v_23 = t;
  {
    ATerm p_102 = NULL;
    t = d_103(t);
    {
      p_102 = t;
      if(((o_102 != NULL) && (o_102 != p_102)))
        _fail(p_102);
      else
        o_102 = p_102;
    }
  }
  t = v_23;
  {
    ATerm r_102 = NULL;
    t = e_103(t);
    {
      r_102 = t;
      if(((q_102 != NULL) && (q_102 != r_102)))
        _fail(r_102);
      else
        q_102 = r_102;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_102), not_null(q_102));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_102 = NULL;
  ATerm w_23;
  w_23 = t;
  {
    ATerm x_23 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm y_102 = NULL,z_102 = NULL;
          y_102 = t;
          v_102 :
          if(match_cons(y_102, sym_Input_1))
            {
              z_102 = ATgetArgument(y_102, 0);
              if(((x_102 != NULL) && (x_102 != z_102)))
                _fail(z_102);
              else
                x_102 = z_102;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_3);
        LocalPopChoice(f_24);
      }
    else
      {
        t = x_23;
        {
          ATerm a_103 = NULL;
          t = term_g_24;
          {
            a_103 = t;
            if(((x_102 != NULL) && (x_102 != a_103)))
              _fail(a_103);
            else
              x_102 = a_103;
          }
        }
      }
  }
  t = w_23;
  {
    ATerm x_3 (ATerm t)
    {
      t = not_null(x_102);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_103 = NULL;
  j_103 = t;
  i_103 :
  if(match_cons(j_103, sym_Version_0))
    {
      ATerm l_103 = NULL,n_103 = NULL;
      ATerm h_24;
      h_24 = t;
      {
        ATerm m_103 = NULL;
        t = SSLgetAnnotations(not_null(j_103));
        {
          m_103 = t;
          if(((l_103 != NULL) && (l_103 != m_103)))
            _fail(m_103);
          else
            l_103 = m_103;
        }
      }
      t = h_24;
      {
        ATerm o_103 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_103));
        {
          o_103 = t;
          if(((n_103 != NULL) && (n_103 != o_103)))
            _fail(o_103);
          else
            n_103 = o_103;
        }
        t = not_null(n_103);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
          ATerm m_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_24);
            }
          else
            {
              t = m_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_3);
  t = x_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_103 = NULL;
  w_103 = t;
  t = SSL_table_create(not_null(w_103));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_104 = NULL;
  a_104 = t;
  {
    ATerm o_24;
    o_24 = t;
    {
      t = term_p_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_24, term_q_24, not_null(a_104));
          t = table_put_0(t);
        }
      }
    }
    t = o_24;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_104 = NULL;
  e_104 = t;
  t = SSL_string_to_int(not_null(e_104));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL;
  n_104 = t;
  l_104 :
  if(match_string(n_104, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(n_104) == AT_LIST) && ((ATermList) n_104 != ATempty)))
        {
          o_104 = ATgetFirst((ATermList) n_104);
          p_104 = (ATerm) ATgetNext((ATermList) n_104);
          m_104 :
          if(((ATgetType(p_104) == AT_LIST) && ((ATermList) p_104 != ATempty)))
            {
              q_104 = ATgetFirst((ATermList) p_104);
              r_104 = (ATerm) ATgetNext((ATermList) p_104);
              {
                ATerm v_104 = NULL;
                ATerm r_24;
                r_24 = t;
                {
                  t = not_null(o_104);
                  t = l_0(t);
                }
                t = r_24;
                {
                  ATerm w_104 = NULL;
                  t = not_null(q_104);
                  {
                    t = m_0(t);
                    {
                      w_104 = t;
                      if(((v_104 != NULL) && (v_104 != w_104)))
                        _fail(w_104);
                      else
                        v_104 = w_104;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_104)), not_null(v_104));
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
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 (ATerm t)
      {
        ATerm n_105 = NULL;
        n_105 = t;
        a_105 :
        if(!(match_string(n_105, "-i")))
          {
            if(!(match_string(n_105, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        ATerm q_105 = NULL;
        ATerm u_24;
        u_24 = t;
        {
          ATerm o_105 = NULL;
          ATerm p_105 = NULL;
          p_105 = t;
          if(((o_105 != NULL) && (o_105 != p_105)))
            _fail(p_105);
          else
            o_105 = p_105;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_w_24, not_null(o_105));
            t = set_config_0(t);
          }
        }
        t = u_24;
        {
          ATerm r_105 = NULL;
          r_105 = t;
          if(((q_105 != NULL) && (q_105 != r_105)))
            _fail(r_105);
          else
            q_105 = r_105;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_105));
        }
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = term_x_24;
        return(t);
      }
      t = ArgOption_3(t, z_3, a_4, b_4);
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_4 (ATerm t)
            {
              ATerm s_105 = NULL;
              s_105 = t;
              d_105 :
              if(!(match_string(s_105, "-o")))
                {
                  if(!(match_string(s_105, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              ATerm v_105 = NULL;
              ATerm b_25;
              b_25 = t;
              {
                ATerm t_105 = NULL;
                ATerm u_105 = NULL;
                u_105 = t;
                if(((t_105 != NULL) && (t_105 != u_105)))
                  _fail(u_105);
                else
                  t_105 = u_105;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_25, not_null(t_105));
                  t = set_config_0(t);
                }
              }
              t = b_25;
              {
                ATerm w_105 = NULL;
                w_105 = t;
                if(((v_105 != NULL) && (v_105 != w_105)))
                  _fail(w_105);
                else
                  v_105 = w_105;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_105));
              }
              return(t);
            }
            ATerm h_4 (ATerm t)
            {
              t = term_h_25;
              return(t);
            }
            t = ArgOption_3(t, c_4, g_4, h_4);
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            {
              ATerm q_25 = t;
              int a_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_4 (ATerm t)
                  {
                    ATerm x_105 = NULL;
                    x_105 = t;
                    g_105 :
                    if(!(match_string(x_105, "-S")))
                      {
                        if(!(match_string(x_105, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm j_4 (ATerm t)
                  {
                    t = term_m_26;
                    t = set_config_0(t);
                    t = term_n_26;
                    return(t);
                  }
                  ATerm k_4 (ATerm t)
                  {
                    t = term_o_26;
                    return(t);
                  }
                  t = Option_3(t, i_4, j_4, k_4);
                  LocalPopChoice(a_26);
                }
              else
                {
                  t = q_25;
                  {
                    ATerm p_26 = t;
                    int q_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_4 (ATerm t)
                        {
                          ATerm y_105 = NULL;
                          y_105 = t;
                          h_105 :
                          if(!(match_string(y_105, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm m_4 (ATerm t)
                        {
                          ATerm d_106 = NULL;
                          ATerm r_26;
                          r_26 = t;
                          {
                            ATerm z_105 = NULL;
                            ATerm c_106 = NULL;
                            t = string_to_int_0(t);
                            {
                              c_106 = t;
                              if(((z_105 != NULL) && (z_105 != c_106)))
                                _fail(c_106);
                              else
                                z_105 = c_106;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_n_21, not_null(z_105));
                              t = set_config_0(t);
                            }
                          }
                          t = r_26;
                          {
                            ATerm e_106 = NULL;
                            e_106 = t;
                            if(((d_106 != NULL) && (d_106 != e_106)))
                              _fail(e_106);
                            else
                              d_106 = e_106;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_106));
                          }
                          return(t);
                        }
                        ATerm n_4 (ATerm t)
                        {
                          t = term_s_26;
                          return(t);
                        }
                        t = ArgOption_3(t, l_4, m_4, n_4);
                        LocalPopChoice(q_26);
                      }
                    else
                      {
                        t = p_26;
                        {
                          ATerm t_26 = t;
                          int u_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_4 (ATerm t)
                              {
                                ATerm f_106 = NULL;
                                f_106 = t;
                                k_105 :
                                if(!(match_string(f_106, "-v")))
                                  {
                                    if(!(match_string(f_106, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm p_4 (ATerm t)
                              {
                                t = term_w_26;
                                t = set_config_0(t);
                                t = term_x_26;
                                return(t);
                              }
                              ATerm q_4 (ATerm t)
                              {
                                t = term_y_26;
                                return(t);
                              }
                              t = Option_3(t, o_4, p_4, q_4);
                              LocalPopChoice(u_26);
                            }
                          else
                            {
                              t = t_26;
                              {
                                ATerm z_26 = t;
                                int a_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_4 (ATerm t)
                                    {
                                      ATerm g_106 = NULL;
                                      g_106 = t;
                                      l_105 :
                                      if(!(match_string(g_106, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm s_4 (ATerm t)
                                    {
                                      t = term_c_27;
                                      t = set_config_0(t);
                                      t = term_d_27;
                                      return(t);
                                    }
                                    ATerm t_4 (ATerm t)
                                    {
                                      t = term_e_27;
                                      return(t);
                                    }
                                    t = Option_3(t, r_4, s_4, t_4);
                                    LocalPopChoice(a_27);
                                  }
                                else
                                  {
                                    t = z_26;
                                    {
                                      ATerm u_4 (ATerm t)
                                      {
                                        ATerm h_106 = NULL;
                                        h_106 = t;
                                        m_105 :
                                        if(!(match_string(h_106, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm v_4 (ATerm t)
                                      {
                                        t = term_h_27;
                                        t = set_config_0(t);
                                        t = term_i_27;
                                        return(t);
                                      }
                                      ATerm w_4 (ATerm t)
                                      {
                                        t = term_k_27;
                                        return(t);
                                      }
                                      t = Option_3(t, u_4, v_4, w_4);
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
  ATerm r_106 = NULL;
  r_106 = t;
  t = SSL_table_destroy(not_null(r_106));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_106 = NULL;
  v_106 = t;
  t = SSL_exit(not_null(v_106));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm z_106 = NULL;
  z_106 = t;
  t = SSL_implode_string(not_null(z_106));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_100 (ATerm))
{
  ATerm c_107 (ATerm t)
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_107);
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        {
          t = Nil_0(t);
          t = g_100(t);
        }
      }
    return(t);
  }
  t = c_107(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm o_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_27);
    }
  else
    {
      t = o_27;
      {
        ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL;
        f_107 = t;
        e_107 :
        if(((ATgetType(f_107) == AT_LIST) && ((ATermList) f_107 != ATempty)))
          {
            g_107 = ATgetFirst((ATermList) f_107);
            h_107 = (ATerm) ATgetNext((ATermList) f_107);
            {
              t = not_null(g_107);
              {
                ATerm x_4 (ATerm t)
                {
                  t = not_null(h_107);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_4);
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
  ATerm n_107 = NULL;
  n_107 = t;
  t = SSL_explode_string(not_null(n_107));
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
ATerm long_description_1 (ATerm t, ATerm y_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_99 (ATerm))
{
  ATerm v_107 (ATerm t)
  {
    ATerm c_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_28);
      }
    else
      {
        t = c_28;
        t = Cons_2(t, s_99, v_107);
      }
    return(t);
  }
  t = v_107(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm c_108 = NULL,d_108 = NULL,e_108 = NULL;
  e_108 = t;
  b_108 :
  if(((ATgetType(e_108) == AT_LIST) && ((ATermList) e_108 != ATempty)))
    {
      c_108 = ATgetFirst((ATermList) e_108);
      d_108 = (ATerm) ATgetNext((ATermList) e_108);
      {
        ATerm h_108 = NULL;
        t = not_null(d_108);
        {
          ATerm u_28;
          u_28 = t;
          {
            ATerm i_108 = NULL,k_108 = NULL,p_108 = NULL;
            ATerm v_28;
            v_28 = t;
            {
              ATerm j_108 = NULL;
              t = k_0(t);
              {
                j_108 = t;
                if(((i_108 != NULL) && (i_108 != j_108)))
                  _fail(j_108);
                else
                  i_108 = j_108;
              }
            }
            t = v_28;
            {
              ATerm o_108 = NULL;
              t = not_null(c_108);
              {
                t = j_0(t);
                {
                  o_108 = t;
                  if(((k_108 != NULL) && (k_108 != o_108)))
                    _fail(o_108);
                  else
                    k_108 = o_108;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_108)), not_null(k_108));
                {
                  p_108 = t;
                  if(((h_108 != NULL) && (h_108 != p_108)))
                    _fail(p_108);
                  else
                    h_108 = p_108;
                }
              }
            }
          }
          t = u_28;
          {
            ATerm y_4 (ATerm t)
            {
              t = not_null(h_108);
              return(t);
            }
            t = reverse_acc_2(t, j_0, y_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) e_108 == ATempty))
        {
          {
            t = term_h_15;
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
  ATerm z_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm a_109 = NULL,b_109 = NULL;
  a_109 = t;
  z_108 :
  if(match_cons(a_109, sym_Program_1))
    {
      b_109 = ATgetArgument(a_109, 0);
      {
        ATerm e_109 = NULL,g_109 = NULL;
        ATerm f_109 = NULL;
        t = SSLgetAnnotations(not_null(a_109));
        {
          f_109 = t;
          if(((e_109 != NULL) && (e_109 != f_109)))
            _fail(f_109);
          else
            e_109 = f_109;
        }
        {
          t = not_null(b_109);
          {
            ATerm i_109 = NULL;
            t = g_75(t);
            {
              g_109 = t;
              {
                ATerm j_109 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_109)), not_null(e_109));
                {
                  j_109 = t;
                  if(((i_109 != NULL) && (i_109 != j_109)))
                    _fail(j_109);
                  else
                    i_109 = j_109;
                }
                t = not_null(i_109);
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
  ATerm s_109 = NULL;
  ATerm a_5 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      ATerm t_109 = NULL;
      t_109 = t;
      if(((s_109 != NULL) && (s_109 != t_109)))
        _fail(t_109);
      else
        s_109 = t_109;
      return(t);
    }
    t = Program_1(t, b_5);
    return(t);
  }
  t = option_defined_1(t, a_5);
  {
    ATerm c_5 (ATerm t)
    {
      ATerm u_109 = NULL;
      ATerm v_109 = NULL;
      t = term_h_15;
      {
        ATerm d_5 (ATerm t)
        {
          t = not_null(s_109);
          return(t);
        }
        t = short_description_1(t, d_5);
        {
          t = concat_strings_0(t);
          {
            v_109 = t;
            if(((u_109 != NULL) && (u_109 != v_109)))
              _fail(v_109);
            else
              u_109 = v_109;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATempty, not_null(u_109)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, c_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATempty, term_w_28));
      {
        t = printnl_0(t);
        {
          t = term_z_28;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_5 (ATerm t)
                {
                  ATerm w_109 = NULL;
                  w_109 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_109)), term_a_29));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_5);
                {
                  ATerm f_5 (ATerm t)
                  {
                    ATerm y_109 = NULL;
                    ATerm z_109 = NULL;
                    t = term_h_15;
                    {
                      ATerm g_5 (ATerm t)
                      {
                        t = not_null(s_109);
                        return(t);
                      }
                      t = long_description_1(t, g_5);
                      {
                        t = concat_strings_0(t);
                        {
                          z_109 = t;
                          if(((y_109 != NULL) && (y_109 != z_109)))
                            _fail(z_109);
                          else
                            y_109 = z_109;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_109)), term_b_29));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_5);
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
ATerm Undefined_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm j_110 = NULL,k_110 = NULL;
  j_110 = t;
  i_110 :
  if(match_cons(j_110, sym_Undefined_1))
    {
      k_110 = ATgetArgument(j_110, 0);
      {
        ATerm n_110 = NULL,p_110 = NULL;
        ATerm o_110 = NULL;
        t = SSLgetAnnotations(not_null(j_110));
        {
          o_110 = t;
          if(((n_110 != NULL) && (n_110 != o_110)))
            _fail(o_110);
          else
            n_110 = o_110;
        }
        {
          t = not_null(k_110);
          {
            ATerm r_110 = NULL;
            t = h_75(t);
            {
              p_110 = t;
              {
                ATerm s_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_110)), not_null(n_110));
                {
                  s_110 = t;
                  if(((r_110 != NULL) && (r_110 != s_110)))
                    _fail(s_110);
                  else
                    r_110 = s_110;
                }
                t = not_null(r_110);
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
ATerm fetch_1 (ATerm t, ATerm a_100 (ATerm))
{
  ATerm x_110 (ATerm t)
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_100, _id);
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = Cons_2(t, _id, x_110);
      }
    return(t);
  }
  t = x_110(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_84 (ATerm))
{
  t = fetch_1(t, w_84);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_111 = NULL;
  c_111 = t;
  b_111 :
  if(match_cons(c_111, sym_Help_0))
    {
      ATerm e_111 = NULL,g_111 = NULL;
      ATerm e_29;
      e_29 = t;
      {
        ATerm f_111 = NULL;
        t = SSLgetAnnotations(not_null(c_111));
        {
          f_111 = t;
          if(((e_111 != NULL) && (e_111 != f_111)))
            _fail(f_111);
          else
            e_111 = f_111;
        }
      }
      t = e_29;
      {
        ATerm h_111 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_111));
        {
          h_111 = t;
          if(((g_111 != NULL) && (g_111 != h_111)))
            _fail(h_111);
          else
            g_111 = h_111;
        }
        t = not_null(g_111);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_103 (ATerm))
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_103(t);
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_111 = NULL,o_111 = NULL,p_111 = NULL;
  n_111 = t;
  m_111 :
  if(match_cons(n_111, sym__2))
    {
      o_111 = ATgetArgument(n_111, 0);
      p_111 = ATgetArgument(n_111, 1);
      t = SSL_table_get(not_null(o_111), not_null(p_111));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL;
  w_111 = t;
  v_111 :
  if(match_cons(w_111, sym__3))
    {
      x_111 = ATgetArgument(w_111, 0);
      y_111 = ATgetArgument(w_111, 1);
      z_111 = ATgetArgument(w_111, 2);
      {
        ATerm h_29;
        h_29 = t;
        {
          ATerm d_112 = NULL;
          ATerm e_112 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_111), not_null(y_111));
          {
            ATerm m_29 = t;
            int n_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_29);
              }
            else
              {
                t = m_29;
                t = (ATerm) ATempty;
              }
            {
              e_112 = t;
              if(((d_112 != NULL) && (d_112 != e_112)))
                _fail(e_112);
              else
                d_112 = e_112;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_111), not_null(y_111), (ATerm) ATinsert(CheckATermList(not_null(d_112)), not_null(z_111)));
            t = table_put_0(t);
          }
        }
        t = h_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_84 (ATerm))
{
  ATerm i_112 = NULL;
  ATerm j_112 = NULL;
  t = term_h_15;
  {
    t = c_84(t);
    {
      j_112 = t;
      if(((i_112 != NULL) && (i_112 != j_112)))
        _fail(j_112);
      else
        i_112 = j_112;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, not_null(i_112));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm p_112 = NULL,q_112 = NULL,r_112 = NULL;
  p_112 = t;
  o_112 :
  if(match_string(p_112, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(p_112) == AT_LIST) && ((ATermList) p_112 != ATempty)))
        {
          q_112 = ATgetFirst((ATermList) p_112);
          r_112 = (ATerm) ATgetNext((ATermList) p_112);
          {
            ATerm u_112 = NULL;
            ATerm o_29;
            o_29 = t;
            {
              t = not_null(q_112);
              t = c_0(t);
            }
            t = o_29;
            {
              ATerm v_112 = NULL;
              t = term_h_15;
              {
                t = d_0(t);
                {
                  v_112 = t;
                  if(((u_112 != NULL) && (u_112 != v_112)))
                    _fail(v_112);
                  else
                    u_112 = v_112;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_112)), not_null(u_112));
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
  ATerm i_5 (ATerm t)
  {
    ATerm a_113 = NULL;
    a_113 = t;
    z_112 :
    if(!(match_string(a_113, "--help")))
      {
        if(!(match_string(a_113, "-h")))
          {
            if(!(match_string(a_113, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_p_29;
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_q_29;
    return(t);
  }
  t = Option_3(t, i_5, j_5, k_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL;
  d_113 = t;
  c_113 :
  if(((ATgetType(d_113) == AT_LIST) && ((ATermList) d_113 != ATempty)))
    {
      e_113 = ATgetFirst((ATermList) d_113);
      f_113 = (ATerm) ATgetNext((ATermList) d_113);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_113)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_113)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm l_113 = NULL,m_113 = NULL,n_113 = NULL;
  l_113 = t;
  k_113 :
  if(match_cons(l_113, sym__2))
    {
      m_113 = ATgetArgument(l_113, 0);
      n_113 = ATgetArgument(l_113, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_21, not_null(m_113), not_null(n_113));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_84 (ATerm))
{
  ATerm r_29;
  r_29 = t;
  {
    ATerm l_5 (ATerm t)
    {
      t = term_s_29;
      t = a_84(t);
      return(t);
    }
    t = try_1(t, l_5);
  }
  t = r_29;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm v_113 = NULL;
      ATerm t_29;
      t_29 = t;
      {
        ATerm t_113 = NULL;
        ATerm u_113 = NULL;
        u_113 = t;
        if(((t_113 != NULL) && (t_113 != u_113)))
          _fail(u_113);
        else
          t_113 = u_113;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_23, not_null(t_113));
          t = set_config_0(t);
        }
      }
      t = t_29;
      {
        ATerm w_113 = NULL;
        w_113 = t;
        if(((v_113 != NULL) && (v_113 != w_113)))
          _fail(w_113);
        else
          v_113 = w_113;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_113));
      }
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_29 = t;
          int z_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(z_29);
            }
          else
            {
              t = y_29;
              {
                t = a_84(t);
                t = Cons_2(t, _id, n_5);
              }
            }
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_5, n_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_114 = NULL,d_114 = NULL,e_114 = NULL;
  ATerm a_30;
  a_30 = t;
  {
    ATerm f_114 = NULL,g_114 = NULL,h_114 = NULL,i_114 = NULL;
    f_114 = t;
    b_114 :
    if(match_cons(f_114, sym__3))
      {
        g_114 = ATgetArgument(f_114, 0);
        h_114 = ATgetArgument(f_114, 1);
        i_114 = ATgetArgument(f_114, 2);
        {
          if(((c_114 != NULL) && (c_114 != g_114)))
            _fail(g_114);
          else
            c_114 = g_114;
          {
            if(((d_114 != NULL) && (d_114 != h_114)))
              _fail(h_114);
            else
              d_114 = h_114;
            {
              if(((e_114 != NULL) && (e_114 != i_114)))
                _fail(i_114);
              else
                e_114 = i_114;
              t = SSL_table_put(not_null(c_114), not_null(d_114), not_null(e_114));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_83 (ATerm))
{
  ATerm l_114 = NULL;
  ATerm b_30;
  b_30 = t;
  {
    t = term_c_30;
    t = table_put_0(t);
  }
  t = b_30;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm d_30 = t;
      int e_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_83(t);
          LocalPopChoice(e_30);
        }
      else
        {
          t = d_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_5);
    {
      ATerm p_5 (ATerm t)
      {
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_t_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            {
              ATerm q_5 (ATerm t)
              {
                ATerm r_5 (ATerm t)
                {
                  ATerm m_114 = NULL;
                  m_114 = t;
                  if(((l_114 != NULL) && (l_114 != m_114)))
                    _fail(m_114);
                  else
                    l_114 = m_114;
                  return(t);
                }
                t = Undefined_1(t, r_5);
                return(t);
              }
              t = option_defined_1(t, q_5);
              {
                ATerm h_30;
                h_30 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_114)), term_i_30));
                  t = printnl_0(t);
                }
                t = h_30;
                {
                  t = system_usage_0(t);
                  {
                    t = term_t_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_5);
      {
        ATerm j_30;
        j_30 = t;
        {
          t = term_x_28;
          t = table_destroy_0(t);
        }
        t = j_30;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_86(t);
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, s_5);
  {
    t = store_options_0(t);
    {
      t = o_86(t);
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_86);
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            {
              ATerm o_30 = t;
              int p_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, l_86);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(p_30);
                }
              else
                {
                  t = o_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm h_86 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      ATerm q_30;
      q_30 = t;
      {
        ATerm p_114 = NULL;
        ATerm q_114 = NULL;
        t = term_f_23;
        {
          t = get_config_0(t);
          {
            q_114 = t;
            if(((p_114 != NULL) && (p_114 != q_114)))
              _fail(q_114);
            else
              p_114 = q_114;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATempty, not_null(p_114)));
          t = printnl_0(t);
        }
      }
      t = q_30;
      return(t);
    }
    t = if_verbose2_1(t, u_5);
    return(t);
  }
  t = iowrap_4(t, f_86, g_86, h_86, t_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_86 (ATerm), ATerm e_86 (ATerm))
{
  t = iowrap_3(t, d_86, e_86, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_86 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    t = _2(t, _id, a_86);
    return(t);
  }
  t = iowrap_2(t, v_5, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      ATerm y_5 (ATerm t)
      {
        ATerm a_6 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, a_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, y_5);
      return(t);
    }
    t = Specification_1(t, x_5);
    return(t);
  }
  t = iowrap_1(t, w_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
