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
ATerm term_v_29;
ATerm term_h_29;
ATerm term_h_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_g_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_s_25;
ATerm term_g_25;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_w_23;
ATerm term_l_23;
ATerm term_a_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_y_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_r_11;
ATerm term_n_11;
ATerm term_l_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_z_8;
ATerm term_p_7;
ATerm term_g_7;
ATerm term_e_7;
ATerm term_w_6;
ATerm term_s_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
void init_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Op_2, term_m_14, (ATerm) ATempty);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_n_14);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_q_19);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_19);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_l_15);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_l_15);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_l_15);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_o_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__3, term_n_27, term_o_27, (ATerm) ATempty);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm z_76 (ATerm), ATerm a_77 (ATerm));
ATerm SDef_3 (ATerm, ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm));
ATerm Let_2 (ATerm, ATerm b_77 (ATerm), ATerm c_77 (ATerm));
ATerm sboundin_3 (ATerm, ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm f_104 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm f_90 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm w_94 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm g_103 (ATerm), ATerm h_103 (ATerm));
ATerm alltd_1 (ATerm, ATerm g_102 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm i_103 (ATerm), ATerm j_103 (ATerm));
ATerm substitute_1 (ATerm, ATerm k_103 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm g_77 (ATerm), ATerm h_77 (ATerm));
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
ATerm Prim_2 (ATerm, ATerm g_78 (ATerm), ATerm h_78 (ATerm));
ATerm Explode_2 (ATerm, ATerm u_74 (ATerm), ATerm v_74 (ATerm));
ATerm Op_2 (ATerm, ATerm g_76 (ATerm), ATerm h_76 (ATerm));
ATerm pat_td_1 (ATerm, ATerm g_107 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm r_97 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm a_92 (ATerm), ATerm b_92 (ATerm));
ATerm repeat_1 (ATerm, ATerm d_92 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm o_74 (ATerm), ATerm p_74 (ATerm));
ATerm Con_3 (ATerm, ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm n_74 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm d_78 (ATerm), ATerm e_78 (ATerm));
ATerm oncetd_1 (ATerm, ATerm s_101 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm c_100 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm l_99 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm e_89 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm p_97 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm));
ATerm zip_1 (ATerm, ATerm m_97 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_1 (ATerm, ATerm v_89 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm e_79 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm r_92 (ATerm), ATerm s_92 (ATerm));
ATerm for_3 (ATerm, ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm w_92 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm n_79 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm w_78 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm y_78 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm q_89 (ATerm), ATerm r_89 (ATerm));
ATerm union_1 (ATerm, ATerm s_89 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t_88 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm z_75 (ATerm));
ATerm Cons_2 (ATerm, ATerm i_78 (ATerm), ATerm j_78 (ATerm));
ATerm Specification_1 (ATerm, ATerm b_76 (ATerm));
ATerm _2 (ATerm, ATerm d_67 (ATerm), ATerm e_67 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_85 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_82 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_88 (ATerm), ATerm q_88 (ATerm));
ATerm crush_2 (ATerm, ATerm b_90 (ATerm), ATerm c_90 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_82 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_84 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_98 (ATerm), ATerm w_98 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_105 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_81 (ATerm));
ATerm map_1 (ATerm, ATerm b_105 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_81 (ATerm));
ATerm Program_1 (ATerm, ATerm x_72 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm y_72 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_105 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_82 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_99 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_81 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_81 (ATerm));
ATerm iowrap_4 (ATerm, ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm z_83 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_83 (ATerm), ATerm w_83 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_83 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  b_3 :
  if(((ATermList) c_3 == ATempty))
    {
      {
        ATerm e_4 = NULL,h_5 = NULL;
        ATerm h_6;
        h_6 = t;
        {
          ATerm f_4 = NULL;
          t = SSLgetAnnotations(not_null(c_3));
          {
            f_4 = t;
            if(((e_4 != NULL) && (e_4 != f_4)))
              _fail(f_4);
            else
              e_4 = f_4;
          }
        }
        t = h_6;
        {
          ATerm i_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_4));
          {
            i_5 = t;
            if(((h_5 != NULL) && (h_5 != i_5)))
              _fail(i_5);
            else
              h_5 = i_5;
          }
          t = not_null(h_5);
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
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym__2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_6), not_null(g_6)), term_j_6), not_null(f_6)), term_i_6);
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
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
  n_6 = t;
  l_6 :
  if(match_cons(n_6, sym__2))
    {
      o_6 = ATgetArgument(n_6, 0);
      r_6 = ATgetArgument(n_6, 1);
      m_6 :
      if(match_cons(o_6, sym_Mod_2))
        {
          p_6 = ATgetArgument(o_6, 0);
          q_6 = ATgetArgument(o_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_6), not_null(r_6)), term_j_6), not_null(q_6)), term_s_6), not_null(p_6)), term_i_6);
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
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
  z_6 = t;
  x_6 :
  if(match_cons(z_6, sym__2))
    {
      a_7 = ATgetArgument(z_6, 0);
      b_7 = ATgetArgument(z_6, 1);
      y_6 :
      if(((ATgetType(b_7) == AT_LIST) && ((ATermList) b_7 != ATempty)))
        {
          c_7 = ATgetFirst((ATermList) b_7);
          d_7 = (ATerm) ATgetNext((ATermList) b_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(d_7)), not_null(c_7));
            {
              ATerm a_0 (ATerm t)
              {
                ATerm t_6 = t;
                int u_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(u_6);
                  }
                else
                  {
                    t = t_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, a_0);
            }
            t = not_null(a_7);
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
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
  l_7 = t;
  j_7 :
  if(match_cons(l_7, sym__2))
    {
      m_7 = ATgetArgument(l_7, 0);
      n_7 = ATgetArgument(l_7, 1);
      k_7 :
      if(((ATermList) n_7 == ATempty))
        {
          t = not_null(m_7);
        }
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
  ATerm v_6;
  v_6 = t;
  {
    t = error_0(t);
    {
      t = term_w_6;
      t = exit_0(t);
    }
  }
  t = v_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_e_7);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm f_7;
  f_7 = t;
  {
    ATerm r_7 = NULL;
    ATerm s_7 = NULL;
    s_7 = t;
    if(((r_7 != NULL) && (r_7 != s_7)))
      _fail(s_7);
    else
      r_7 = s_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_7, not_null(r_7));
      t = printnl_0(t);
    }
  }
  t = f_7;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
  f_8 = t;
  d_8 :
  if(match_cons(f_8, sym__2))
    {
      g_8 = ATgetArgument(f_8, 0);
      h_8 = ATgetArgument(f_8, 1);
      e_8 :
      if(match_int(h_8, 0))
        {
          ATerm h_7 = t;
          int i_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
              t = not_null(g_8);
              {
                t = Arities_0(t);
                {
                  j_8 = t;
                  y_7 :
                  if(((ATgetType(j_8) == AT_LIST) && ((ATermList) j_8 != ATempty)))
                    {
                      k_8 = ATgetFirst((ATermList) j_8);
                      l_8 = (ATerm) ATgetNext((ATermList) j_8);
                      z_7 :
                      if(((ATgetType(l_8) == AT_LIST) && ((ATermList) l_8 != ATempty)))
                        {
                          m_8 = ATgetFirst((ATermList) l_8);
                          n_8 = (ATerm) ATgetNext((ATermList) l_8);
                          {
                            ATerm o_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm b_0 (ATerm t)
                                {
                                  ATerm o_8 = NULL;
                                  o_8 = t;
                                  x_7 :
                                  if(!(match_int(o_8, 0)))
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
                                t = o_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_8)), term_p_7);
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
              LocalPopChoice(i_7);
            }
          else
            {
              t = h_7;
              {
                ATerm q_8 = NULL;
                ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
                t = not_null(g_8);
                {
                  t = Arities_0(t);
                  {
                    r_8 = t;
                    b_8 :
                    if(((ATgetType(r_8) == AT_LIST) && ((ATermList) r_8 != ATempty)))
                      {
                        s_8 = ATgetFirst((ATermList) r_8);
                        t_8 = (ATerm) ATgetNext((ATermList) r_8);
                        c_8 :
                        if(((ATermList) t_8 == ATempty))
                          {
                            {
                              if(((q_8 != NULL) && (q_8 != s_8)))
                                _fail(s_8);
                              else
                                q_8 = s_8;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_8), not_null(q_8));
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_8), not_null(q_8));
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
ATerm Rec_2 (ATerm t, ATerm z_76 (ATerm), ATerm a_77 (ATerm))
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym_Rec_2))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      {
        ATerm k_9 = NULL,m_9 = NULL;
        ATerm l_9 = NULL;
        t = SSLgetAnnotations(not_null(e_9));
        {
          l_9 = t;
          if(((k_9 != NULL) && (k_9 != l_9)))
            _fail(l_9);
          else
            k_9 = l_9;
        }
        {
          t = not_null(f_9);
          {
            ATerm o_9 = NULL;
            t = z_76(t);
            {
              m_9 = t;
              {
                t = not_null(g_9);
                {
                  ATerm q_9 = NULL;
                  t = a_77(t);
                  {
                    o_9 = t;
                    {
                      ATerm r_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(m_9), not_null(o_9)), not_null(k_9));
                      {
                        r_9 = t;
                        if(((q_9 != NULL) && (q_9 != r_9)))
                          _fail(r_9);
                        else
                          q_9 = r_9;
                      }
                      t = not_null(q_9);
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
ATerm SDef_3 (ATerm t, ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_SDef_3))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      h_10 = ATgetArgument(e_10, 2);
      {
        ATerm m_10 = NULL,o_10 = NULL;
        ATerm n_10 = NULL;
        t = SSLgetAnnotations(not_null(e_10));
        {
          n_10 = t;
          if(((m_10 != NULL) && (m_10 != n_10)))
            _fail(n_10);
          else
            m_10 = n_10;
        }
        {
          t = not_null(f_10);
          {
            ATerm q_10 = NULL;
            t = d_77(t);
            {
              o_10 = t;
              {
                t = not_null(g_10);
                {
                  ATerm s_10 = NULL;
                  t = e_77(t);
                  {
                    q_10 = t;
                    {
                      t = not_null(h_10);
                      {
                        ATerm u_10 = NULL;
                        t = f_77(t);
                        {
                          s_10 = t;
                          {
                            ATerm v_10 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(o_10), not_null(q_10), not_null(s_10)), not_null(m_10));
                            {
                              v_10 = t;
                              if(((u_10 != NULL) && (u_10 != v_10)))
                                _fail(v_10);
                              else
                                u_10 = v_10;
                            }
                            t = not_null(u_10);
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
ATerm Let_2 (ATerm t, ATerm b_77 (ATerm), ATerm c_77 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_Let_2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      {
        ATerm o_11 = NULL,q_11 = NULL;
        ATerm p_11 = NULL;
        t = SSLgetAnnotations(not_null(i_11));
        {
          p_11 = t;
          if(((o_11 != NULL) && (o_11 != p_11)))
            _fail(p_11);
          else
            o_11 = p_11;
        }
        {
          t = not_null(j_11);
          {
            ATerm s_11 = NULL;
            t = b_77(t);
            {
              q_11 = t;
              {
                t = not_null(k_11);
                {
                  ATerm u_11 = NULL;
                  t = c_77(t);
                  {
                    s_11 = t;
                    {
                      ATerm v_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(q_11), not_null(s_11)), not_null(o_11));
                      {
                        v_11 = t;
                        if(((u_11 != NULL) && (u_11 != v_11)))
                          _fail(v_11);
                        else
                          u_11 = v_11;
                      }
                      t = not_null(u_11);
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
ATerm sboundin_3 (ATerm t, ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm f_104 (ATerm))
{
  ATerm q_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, d_104, d_104);
      LocalPopChoice(t_7);
    }
  else
    {
      t = q_7;
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, f_104, f_104, d_104);
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            t = Rec_2(t, f_104, d_104);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym_Rec_2))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(e_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_SDef_3))
    {
      o_12 = ATgetArgument(n_12, 0);
      p_12 = ATgetArgument(n_12, 1);
      q_12 = ATgetArgument(n_12, 2);
      {
        t = not_null(p_12);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
            u_12 = t;
            l_12 :
            if(match_cons(u_12, sym_VarDec_2))
              {
                v_12 = ATgetArgument(u_12, 0);
                w_12 = ATgetArgument(u_12, 1);
                t = not_null(v_12);
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
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym_Let_2))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      {
        t = not_null(f_13);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
            j_13 = t;
            c_13 :
            if(match_cons(j_13, sym_SDef_3))
              {
                k_13 = ATgetArgument(j_13, 0);
                l_13 = ATgetArgument(j_13, 1);
                m_13 = ATgetArgument(j_13, 2);
                t = not_null(k_13);
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
ATerm crush_3 (ATerm t, ATerm d_90 (ATerm), ATerm e_90 (ATerm), ATerm f_90 (ATerm))
{
  ATerm w_13 = NULL;
  ATerm y_13 = NULL;
  w_13 = t;
  {
    ATerm z_13 = NULL;
    ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
    t = not_null(w_13);
    {
      z_13 = t;
      {
        t = SSL_explode_term(not_null(z_13));
        {
          b_14 = t;
          v_13 :
          if(match_cons(b_14, sym__2))
            {
              c_14 = ATgetArgument(b_14, 0);
              d_14 = ATgetArgument(b_14, 1);
              if(((y_13 != NULL) && (y_13 != d_14)))
                _fail(d_14);
              else
                y_13 = d_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_13);
      t = foldr_3(t, d_90, e_90, f_90);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm w_94 (ATerm))
{
  ATerm k_14 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm w_7 = t;
      int a_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_94(t);
          LocalPopChoice(a_8);
        }
      else
        {
          t = w_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm i_8 = t;
      int p_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_14 = NULL;
          ATerm u_8;
          u_8 = t;
          {
            ATerm j_14 = NULL;
            t = u_94(t);
            {
              j_14 = t;
              if(((i_14 != NULL) && (i_14 != j_14)))
                _fail(j_14);
              else
                i_14 = j_14;
            }
          }
          t = u_8;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(i_14);
                return(t);
              }
              t = split_2(t, k_14, t_0);
              t = diff_1(t, w_94);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = v_94(t, r_0, k_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          LocalPopChoice(p_8);
        }
      else
        {
          t = i_8;
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, v_0, union_0, k_14);
          }
        }
      return(t);
    }
    t = split_2(t, p_0, q_0);
    t = union_0(t);
    return(t);
  }
  t = k_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
    t_14 = t;
    o_14 :
    if(match_cons(t_14, sym_Call_2))
      {
        u_14 = ATgetArgument(t_14, 0);
        w_14 = ATgetArgument(t_14, 1);
        p_14 :
        if(match_cons(u_14, sym_SVar_1))
          {
            v_14 = ATgetArgument(u_14, 0);
            {
              ATerm z_14 = NULL;
              ATerm a_15 = NULL;
              t = not_null(w_14);
              {
                t = length_0(t);
                {
                  a_15 = t;
                  if(((z_14 != NULL) && (z_14 != a_15)))
                    _fail(a_15);
                  else
                    z_14 = a_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(v_14), not_null(z_14)));
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
  ATerm x_0 (ATerm t)
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        {
          ATerm x_8 = t;
          int y_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(y_8);
            }
          else
            {
              t = x_8;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
    b_15 = t;
    r_14 :
    if(match_cons(b_15, sym__2))
      {
        c_15 = ATgetArgument(b_15, 0);
        f_15 = ATgetArgument(b_15, 1);
        s_14 :
        if(match_cons(c_15, sym__2))
          {
            d_15 = ATgetArgument(c_15, 0);
            e_15 = ATgetArgument(c_15, 1);
            if(((d_15 != NULL) && (d_15 != f_15)))
              _fail(f_15);
            else
              d_15 = f_15;
          }
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
  t = free_vars2_4(t, w_0, x_0, sboundin_3, y_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  r_15 = t;
  {
    ATerm w_15 = NULL;
    ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
    t = not_null(r_15);
    {
      w_15 = t;
      {
        t = SSL_explode_term(not_null(w_15));
        {
          y_15 = t;
          n_15 :
          if(match_cons(y_15, sym__2))
            {
              z_15 = ATgetArgument(y_15, 0);
              a_16 = ATgetArgument(y_15, 1);
              o_15 :
              if(match_string(z_15, ""))
                {
                  p_15 :
                  if(((ATgetType(a_16) == AT_LIST) && ((ATermList) a_16 != ATempty)))
                    {
                      b_16 = ATgetFirst((ATermList) a_16);
                      c_16 = (ATerm) ATgetNext((ATermList) a_16);
                      q_15 :
                      if(((ATgetType(c_16) == AT_LIST) && ((ATermList) c_16 != ATempty)))
                        {
                          d_16 = ATgetFirst((ATermList) c_16);
                          e_16 = (ATerm) ATgetNext((ATermList) c_16);
                          {
                            if(((t_15 != NULL) && (t_15 != b_16)))
                              _fail(b_16);
                            else
                              t_15 = b_16;
                            {
                              if(((v_15 != NULL) && (v_15 != d_16)))
                                _fail(d_16);
                              else
                                v_15 = d_16;
                              if(((u_15 != NULL) && (u_15 != e_16)))
                                _fail(e_16);
                              else
                                u_15 = e_16;
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
    t = not_null(v_15);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_z_8;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm k_16 = NULL,m_16 = NULL;
    ATerm a_9;
    a_9 = t;
    {
      ATerm l_16 = NULL;
      t = Fst_0(t);
      {
        l_16 = t;
        if(((k_16 != NULL) && (k_16 != l_16)))
          _fail(l_16);
        else
          k_16 = l_16;
      }
    }
    t = a_9;
    {
      ATerm n_16 = NULL;
      t = Snd_0(t);
      {
        n_16 = t;
        if(((m_16 != NULL) && (m_16 != n_16)))
          _fail(n_16);
        else
          m_16 = n_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(k_16), not_null(m_16));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  u_16 = t;
  r_16 :
  if(match_cons(u_16, sym_Call_2))
    {
      v_16 = ATgetArgument(u_16, 0);
      x_16 = ATgetArgument(u_16, 1);
      s_16 :
      if(match_cons(v_16, sym_SVar_1))
        {
          w_16 = ATgetArgument(v_16, 0);
          t_16 :
          if(((ATermList) x_16 == ATempty))
            {
              t = not_null(w_16);
            }
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
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  d_17 = t;
  b_17 :
  if(match_cons(d_17, sym__2))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      c_17 :
      if(((ATgetType(f_17) == AT_LIST) && ((ATermList) f_17 != ATempty)))
        {
          g_17 = ATgetFirst((ATermList) f_17);
          h_17 = (ATerm) ATgetNext((ATermList) f_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_17), not_null(h_17));
        }
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
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  p_17 = t;
  m_17 :
  if(match_cons(p_17, sym__2))
    {
      q_17 = ATgetArgument(p_17, 0);
      r_17 = ATgetArgument(p_17, 1);
      n_17 :
      if(((ATgetType(r_17) == AT_LIST) && ((ATermList) r_17 != ATempty)))
        {
          s_17 = ATgetFirst((ATermList) r_17);
          v_17 = (ATerm) ATgetNext((ATermList) r_17);
          o_17 :
          if(match_cons(s_17, sym__2))
            {
              t_17 = ATgetArgument(s_17, 0);
              u_17 = ATgetArgument(s_17, 1);
              {
                ATerm x_17 = NULL;
                if(((q_17 != NULL) && (q_17 != t_17)))
                  _fail(t_17);
                else
                  q_17 = t_17;
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
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm g_103 (ATerm), ATerm h_103 (ATerm))
{
  ATerm d_18 = NULL;
  ATerm f_18 = NULL,g_18 = NULL;
  d_18 = t;
  {
    ATerm h_18 = NULL;
    t = not_null(d_18);
    {
      ATerm i_18 = NULL;
      t = g_103(t);
      {
        h_18 = t;
        {
          if(((f_18 != NULL) && (f_18 != h_18)))
            _fail(h_18);
          else
            f_18 = h_18;
          {
            t = h_103(t);
            {
              i_18 = t;
              if(((g_18 != NULL) && (g_18 != i_18)))
                _fail(i_18);
              else
                g_18 = i_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(g_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm g_102 (ATerm))
{
  ATerm m_18 (ATerm t)
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_102(t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        t = _all(t, m_18);
      }
    return(t);
  }
  t = m_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym__2))
    {
      s_18 = ATgetArgument(r_18, 0);
      t_18 = ATgetArgument(r_18, 1);
      {
        ATerm w_18 = NULL;
        if(((w_18 != NULL) && (w_18 != t_18)))
          _fail(t_18);
        else
          w_18 = t_18;
      }
    }
  else
    {
      if(match_cons(r_18, sym__3))
        {
          s_18 = ATgetArgument(r_18, 0);
          t_18 = ATgetArgument(r_18, 1);
          u_18 = ATgetArgument(r_18, 2);
          {
            ATerm c_19 = NULL;
            ATerm d_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_18), not_null(t_18));
            {
              t = zip_1(t, _id);
              {
                d_19 = t;
                if(((c_19 != NULL) && (c_19 != d_19)))
                  _fail(d_19);
                else
                  c_19 = d_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), not_null(u_18));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm i_103 (ATerm), ATerm j_103 (ATerm))
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  t = subs_args_0(t);
  {
    j_19 = t;
    i_19 :
    if(match_cons(j_19, sym__2))
      {
        k_19 = ATgetArgument(j_19, 0);
        l_19 = ATgetArgument(j_19, 1);
        {
          t = not_null(l_19);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(k_19);
                return(t);
              }
              t = SubsVar_2(t, i_103, c_1);
              t = j_103(t);
              return(t);
            }
            t = alltd_1(t, b_1);
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
ATerm substitute_1 (ATerm t, ATerm k_103 (ATerm))
{
  t = substitute_2(t, k_103, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm g_77 (ATerm), ATerm h_77 (ATerm))
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym_VarDec_2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      {
        ATerm b_20 = NULL,d_20 = NULL;
        ATerm c_20 = NULL;
        t = SSLgetAnnotations(not_null(v_19));
        {
          c_20 = t;
          if(((b_20 != NULL) && (b_20 != c_20)))
            _fail(c_20);
          else
            b_20 = c_20;
        }
        {
          t = not_null(w_19);
          {
            ATerm f_20 = NULL;
            t = g_77(t);
            {
              d_20 = t;
              {
                t = not_null(x_19);
                {
                  ATerm h_20 = NULL;
                  t = h_77(t);
                  {
                    f_20 = t;
                    {
                      ATerm i_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_20), not_null(f_20)), not_null(b_20));
                      {
                        i_20 = t;
                        if(((h_20 != NULL) && (h_20 != i_20)))
                          _fail(i_20);
                        else
                          h_20 = i_20;
                      }
                      t = not_null(h_20);
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
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  c_21 = t;
  a_21 :
  if(((ATgetType(c_21) == AT_LIST) && ((ATermList) c_21 != ATempty)))
    {
      d_21 = ATgetFirst((ATermList) c_21);
      h_21 = (ATerm) ATgetNext((ATermList) c_21);
      b_21 :
      if(match_cons(d_21, sym_SDef_3))
        {
          e_21 = ATgetArgument(d_21, 0);
          f_21 = ATgetArgument(d_21, 1);
          g_21 = ATgetArgument(d_21, 2);
          {
            ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,j_22 = NULL;
            ATerm j_9;
            j_9 = t;
            {
              ATerm p_21 = NULL;
              t = not_null(f_21);
              {
                ATerm v_21 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  p_21 = t;
                  {
                    if(((m_21 != NULL) && (m_21 != p_21)))
                      _fail(p_21);
                    else
                      m_21 = p_21;
                    {
                      t = not_null(m_21);
                      {
                        ATerm i_22 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
                          q_21 = t;
                          r_20 :
                          if(match_cons(q_21, sym_VarDec_2))
                            {
                              r_21 = ATgetArgument(q_21, 0);
                              s_21 = ATgetArgument(q_21, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_21)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          v_21 = t;
                          {
                            if(((n_21 != NULL) && (n_21 != v_21)))
                              _fail(v_21);
                            else
                              n_21 = v_21;
                            {
                              t = not_null(c_21);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
                                  w_21 = t;
                                  x_20 :
                                  if(match_cons(w_21, sym_SDef_3))
                                    {
                                      x_21 = ATgetArgument(w_21, 0);
                                      y_21 = ATgetArgument(w_21, 1);
                                      z_21 = ATgetArgument(w_21, 2);
                                      {
                                        ATerm c_22 = NULL;
                                        ATerm h_22 = NULL;
                                        t = not_null(y_21);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
                                            d_22 = t;
                                            v_20 :
                                            if(match_cons(d_22, sym_VarDec_2))
                                              {
                                                e_22 = ATgetArgument(d_22, 0);
                                                f_22 = ATgetArgument(d_22, 1);
                                                t = not_null(e_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            h_22 = t;
                                            if(((c_22 != NULL) && (c_22 != h_22)))
                                              _fail(h_22);
                                            else
                                              c_22 = h_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(c_22), not_null(n_21), not_null(z_21));
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
                                t = map_1(t, f_1);
                                {
                                  i_22 = t;
                                  if(((o_21 != NULL) && (o_21 != i_22)))
                                    _fail(i_22);
                                  else
                                    o_21 = i_22;
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
            t = j_9;
            {
              ATerm k_22 = NULL;
              t = not_null(o_21);
              {
                t = choices_0(t);
                {
                  k_22 = t;
                  if(((j_22 != NULL) && (j_22 != k_22)))
                    _fail(k_22);
                  else
                    j_22 = k_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_21), not_null(m_21), not_null(j_22));
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
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  v_22 :
  if(((ATgetType(x_22) == AT_LIST) && ((ATermList) x_22 != ATempty)))
    {
      y_22 = ATgetFirst((ATermList) x_22);
      z_22 = (ATerm) ATgetNext((ATermList) x_22);
      w_22 :
      if(((ATermList) z_22 == ATempty))
        {
          t = not_null(y_22);
        }
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
  ATerm n_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(p_9);
    }
  else
    {
      t = n_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  g_23 = t;
  e_23 :
  if(match_cons(g_23, sym__2))
    {
      h_23 = ATgetArgument(g_23, 0);
      k_23 = ATgetArgument(g_23, 1);
      f_23 :
      if(match_cons(h_23, sym__2))
        {
          i_23 = ATgetArgument(h_23, 0);
          j_23 = ATgetArgument(h_23, 1);
          {
            ATerm o_23 = NULL;
            ATerm p_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), not_null(j_23));
            {
              t = Definitions_0(t);
              {
                p_23 = t;
                if(((o_23 != NULL) && (o_23 != p_23)))
                  _fail(p_23);
                else
                  o_23 = p_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(k_23));
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
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  k_24 = t;
  i_24 :
  if(match_cons(k_24, sym_ExplodeCong_2))
    {
      l_24 = ATgetArgument(k_24, 0);
      j_24 = ATgetArgument(k_24, 1);
      {
        ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
        ATerm s_24 = NULL;
        ATerm t_24 = NULL;
        t = new_0(t);
        {
          s_24 = t;
          {
            if(((o_24 != NULL) && (o_24 != s_24)))
              _fail(s_24);
            else
              o_24 = s_24;
            {
              ATerm u_24 = NULL;
              t = new_0(t);
              {
                t_24 = t;
                {
                  if(((p_24 != NULL) && (p_24 != t_24)))
                    _fail(t_24);
                  else
                    p_24 = t_24;
                  {
                    ATerm v_24 = NULL;
                    t = new_0(t);
                    {
                      u_24 = t;
                      {
                        if(((q_24 != NULL) && (q_24 != u_24)))
                          _fail(u_24);
                        else
                          q_24 = u_24;
                        {
                          t = new_0(t);
                          {
                            v_24 = t;
                            if(((r_24 != NULL) && (r_24 != v_24)))
                              _fail(v_24);
                            else
                              r_24 = v_24;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_24)), not_null(q_24)), not_null(p_24)), not_null(o_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_24)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(l_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_24))))), (ATerm) ATmakeAppl(sym_Prim_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_24))), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_24)))))));
      }
    }
  else
    {
      if(match_cons(k_24, sym_Build_1))
        {
          l_24 = ATgetArgument(k_24, 0);
          {
            ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
            ATerm b_25 = NULL;
            ATerm f_25 = NULL;
            t = new_0(t);
            {
              b_25 = t;
              {
                if(((z_24 != NULL) && (z_24 != b_25)))
                  _fail(b_25);
                else
                  z_24 = b_25;
                {
                  t = not_null(l_24);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
                      c_25 = t;
                      b_24 :
                      if(match_cons(c_25, sym_Explode_2))
                        {
                          d_25 = ATgetArgument(c_25, 0);
                          e_25 = ATgetArgument(c_25, 1);
                          {
                            if(((x_24 != NULL) && (x_24 != d_25)))
                              _fail(d_25);
                            else
                              x_24 = d_25;
                            {
                              if(((y_24 != NULL) && (y_24 != e_25)))
                                _fail(e_25);
                              else
                                y_24 = e_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      f_25 = t;
                      if(((a_25 != NULL) && (a_25 != f_25)))
                        _fail(f_25);
                      else
                        a_25 = f_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_24)), not_null(x_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_25)))));
          }
        }
      else
        {
          if(match_cons(k_24, sym_Match_1))
            {
              l_24 = ATgetArgument(k_24, 0);
              {
                ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
                ATerm m_25 = NULL;
                ATerm n_25 = NULL;
                t = new_0(t);
                {
                  m_25 = t;
                  {
                    if(((j_25 != NULL) && (j_25 != m_25)))
                      _fail(m_25);
                    else
                      j_25 = m_25;
                    {
                      ATerm r_25 = NULL;
                      t = new_0(t);
                      {
                        n_25 = t;
                        {
                          if(((k_25 != NULL) && (k_25 != n_25)))
                            _fail(n_25);
                          else
                            k_25 = n_25;
                          {
                            t = not_null(l_24);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
                                o_25 = t;
                                g_24 :
                                if(match_cons(o_25, sym_Explode_2))
                                  {
                                    p_25 = ATgetArgument(o_25, 0);
                                    q_25 = ATgetArgument(o_25, 1);
                                    {
                                      if(((h_25 != NULL) && (h_25 != p_25)))
                                        _fail(p_25);
                                      else
                                        h_25 = p_25;
                                      {
                                        if(((i_25 != NULL) && (i_25 != q_25)))
                                          _fail(q_25);
                                        else
                                          i_25 = q_25;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25));
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
                                r_25 = t;
                                if(((l_25 != NULL) && (l_25 != r_25)))
                                  _fail(r_25);
                                else
                                  l_25 = r_25;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_25)), (ATerm) ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_25)), not_null(h_25)))))));
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
  ATerm z_27 = NULL,k_28 = NULL;
  z_27 = t;
  y_27 :
  if(match_cons(z_27, sym_Match_1))
    {
      k_28 = ATgetArgument(z_27, 0);
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
            ATerm q_28 = NULL;
            ATerm u_28 = NULL;
            t = new_0(t);
            {
              q_28 = t;
              {
                if(((o_28 != NULL) && (o_28 != q_28)))
                  _fail(q_28);
                else
                  o_28 = q_28;
                {
                  t = not_null(k_28);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
                      r_28 = t;
                      u_26 :
                      if(match_cons(r_28, sym_Anno_2))
                        {
                          s_28 = ATgetArgument(r_28, 0);
                          t_28 = ATgetArgument(r_28, 1);
                          {
                            if(((m_28 != NULL) && (m_28 != s_28)))
                              _fail(s_28);
                            else
                              m_28 = s_28;
                            {
                              if(((n_28 != NULL) && (n_28 != t_28)))
                                _fail(t_28);
                              else
                                n_28 = t_28;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_28)), not_null(m_28));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      u_28 = t;
                      if(((p_28 != NULL) && (p_28 != u_28)))
                        _fail(u_28);
                      else
                        p_28 = u_28;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_28)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_x_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_28)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_28))))));
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            {
              ATerm y_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
                  ATerm z_28 = NULL;
                  ATerm c_29 = NULL;
                  t = new_0(t);
                  {
                    z_28 = t;
                    {
                      if(((x_28 != NULL) && (x_28 != z_28)))
                        _fail(z_28);
                      else
                        x_28 = z_28;
                      {
                        t = not_null(k_28);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm a_29 = NULL,b_29 = NULL;
                            a_29 = t;
                            y_26 :
                            if(match_cons(a_29, sym_RootApp_1))
                              {
                                b_29 = ATgetArgument(a_29, 0);
                                {
                                  if(((w_28 != NULL) && (w_28 != b_29)))
                                    _fail(b_29);
                                  else
                                    w_28 = b_29;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_28));
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
                            c_29 = t;
                            if(((y_28 != NULL) && (y_28 != c_29)))
                              _fail(c_29);
                            else
                              y_28 = c_29;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_28))), not_null(w_28))));
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = y_9;
                  {
                    ATerm e_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
                    ATerm p_29 = NULL;
                    ATerm t_29 = NULL;
                    t = new_0(t);
                    {
                      p_29 = t;
                      {
                        if(((n_29 != NULL) && (n_29 != p_29)))
                          _fail(p_29);
                        else
                          n_29 = p_29;
                        {
                          t = not_null(k_28);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
                              q_29 = t;
                              w_27 :
                              if(match_cons(q_29, sym_App_2))
                                {
                                  r_29 = ATgetArgument(q_29, 0);
                                  s_29 = ATgetArgument(q_29, 1);
                                  {
                                    if(((m_29 != NULL) && (m_29 != r_29)))
                                      _fail(r_29);
                                    else
                                      m_29 = r_29;
                                    {
                                      if(((e_29 != NULL) && (e_29 != s_29)))
                                        _fail(s_29);
                                      else
                                        e_29 = s_29;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_29));
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
                              t_29 = t;
                              if(((o_29 != NULL) && (o_29 != t_29)))
                                _fail(t_29);
                              else
                                o_29 = t_29;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_29))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_29)), not_null(m_29)))));
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
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  p_30 = t;
  n_30 :
  if(match_cons(p_30, sym_Match_1))
    {
      q_30 = ATgetArgument(p_30, 0);
      o_30 :
      if(match_cons(q_30, sym_RootApp_1))
        {
          r_30 = ATgetArgument(q_30, 0);
          t = not_null(r_30);
        }
      else
        {
          if(match_cons(q_30, sym_App_2))
            {
              r_30 = ATgetArgument(q_30, 0);
              s_30 = ATgetArgument(q_30, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(r_30), not_null(s_30));
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
  ATerm f_31 = NULL,g_31 = NULL;
  f_31 = t;
  e_31 :
  if(match_cons(f_31, sym_Match_1))
    {
      g_31 = ATgetArgument(f_31, 0);
      {
        ATerm i_31 = NULL,j_31 = NULL;
        ATerm n_31 = NULL;
        t = not_null(g_31);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
            k_31 = t;
            b_31 :
            if(match_cons(k_31, sym_RootApp_1))
              {
                l_31 = ATgetArgument(k_31, 0);
                c_31 :
                if(match_cons(l_31, sym_Match_1))
                  {
                    m_31 = ATgetArgument(l_31, 0);
                    {
                      if(((i_31 != NULL) && (i_31 != m_31)))
                        _fail(m_31);
                      else
                        i_31 = m_31;
                      t = not_null(i_31);
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
          t = pat_td_1(t, m_1);
          {
            n_31 = t;
            if(((j_31 != NULL) && (j_31 != n_31)))
              _fail(n_31);
            else
              j_31 = n_31;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(j_31));
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
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm c_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(i_10);
          }
        else
          {
            t = c_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL;
  p_32 = t;
  g_32 :
  if(match_cons(p_32, sym_Build_1))
    {
      q_32 = ATgetArgument(p_32, 0);
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
            ATerm w_32 = NULL;
            ATerm c_33 = NULL;
            t = new_0(t);
            {
              w_32 = t;
              {
                if(((u_32 != NULL) && (u_32 != w_32)))
                  _fail(w_32);
                else
                  u_32 = w_32;
                {
                  t = not_null(q_32);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
                      z_32 = t;
                      w_31 :
                      if(match_cons(z_32, sym_Anno_2))
                        {
                          a_33 = ATgetArgument(z_32, 0);
                          b_33 = ATgetArgument(z_32, 1);
                          {
                            if(((s_32 != NULL) && (s_32 != a_33)))
                              _fail(a_33);
                            else
                              s_32 = a_33;
                            {
                              if(((t_32 != NULL) && (t_32 != b_33)))
                                _fail(b_33);
                              else
                                t_32 = b_33;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_32));
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
                      c_33 = t;
                      if(((v_32 != NULL) && (v_32 != c_33)))
                        _fail(c_33);
                      else
                        v_32 = c_33;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_l_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_32)), not_null(s_32))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_32))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_32))));
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
              ATerm p_10 = t;
              int r_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
                  ATerm j_33 = NULL;
                  ATerm m_33 = NULL;
                  t = new_0(t);
                  {
                    j_33 = t;
                    {
                      if(((f_33 != NULL) && (f_33 != j_33)))
                        _fail(j_33);
                      else
                        f_33 = j_33;
                      {
                        t = not_null(q_32);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm k_33 = NULL,l_33 = NULL;
                            k_33 = t;
                            a_32 :
                            if(match_cons(k_33, sym_RootApp_1))
                              {
                                l_33 = ATgetArgument(k_33, 0);
                                {
                                  if(((e_33 != NULL) && (e_33 != l_33)))
                                    _fail(l_33);
                                  else
                                    e_33 = l_33;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_33));
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
                            m_33 = t;
                            if(((g_33 != NULL) && (g_33 != m_33)))
                              _fail(m_33);
                            else
                              g_33 = m_33;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_33))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_33))));
                  LocalPopChoice(r_10);
                }
              else
                {
                  t = p_10;
                  {
                    ATerm o_33 = NULL,p_33 = NULL,w_33 = NULL,x_33 = NULL;
                    ATerm e_34 = NULL;
                    ATerm i_34 = NULL;
                    t = new_0(t);
                    {
                      e_34 = t;
                      {
                        if(((w_33 != NULL) && (w_33 != e_34)))
                          _fail(e_34);
                        else
                          w_33 = e_34;
                        {
                          t = not_null(q_32);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
                              f_34 = t;
                              e_32 :
                              if(match_cons(f_34, sym_App_2))
                                {
                                  g_34 = ATgetArgument(f_34, 0);
                                  h_34 = ATgetArgument(f_34, 1);
                                  {
                                    if(((o_33 != NULL) && (o_33 != g_34)))
                                      _fail(g_34);
                                    else
                                      o_33 = g_34;
                                    {
                                      if(((p_33 != NULL) && (p_33 != h_34)))
                                        _fail(h_34);
                                      else
                                        p_33 = h_34;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_33));
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
                              i_34 = t;
                              if(((x_33 != NULL) && (x_33 != i_34)))
                                _fail(i_34);
                              else
                                x_33 = i_34;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(o_33), not_null(p_33), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_33)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_33))));
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
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL;
  a_35 = t;
  y_34 :
  if(match_cons(a_35, sym_Build_1))
    {
      b_35 = ATgetArgument(a_35, 0);
      z_34 :
      if(match_cons(b_35, sym_RootApp_1))
        {
          c_35 = ATgetArgument(b_35, 0);
          t = not_null(c_35);
        }
      else
        {
          if(match_cons(b_35, sym_App_2))
            {
              c_35 = ATgetArgument(b_35, 0);
              d_35 = ATgetArgument(b_35, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_35)), not_null(c_35));
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
ATerm Prim_2 (ATerm t, ATerm g_78 (ATerm), ATerm h_78 (ATerm))
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  p_35 = t;
  o_35 :
  if(match_cons(p_35, sym_Prim_2))
    {
      q_35 = ATgetArgument(p_35, 0);
      r_35 = ATgetArgument(p_35, 1);
      {
        ATerm v_35 = NULL,x_35 = NULL;
        ATerm w_35 = NULL;
        t = SSLgetAnnotations(not_null(p_35));
        {
          w_35 = t;
          if(((v_35 != NULL) && (v_35 != w_35)))
            _fail(w_35);
          else
            v_35 = w_35;
        }
        {
          t = not_null(q_35);
          {
            ATerm z_35 = NULL;
            t = g_78(t);
            {
              x_35 = t;
              {
                t = not_null(r_35);
                {
                  ATerm b_36 = NULL;
                  t = h_78(t);
                  {
                    z_35 = t;
                    {
                      ATerm c_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(x_35), not_null(z_35)), not_null(v_35));
                      {
                        c_36 = t;
                        if(((b_36 != NULL) && (b_36 != c_36)))
                          _fail(c_36);
                        else
                          b_36 = c_36;
                      }
                      t = not_null(b_36);
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
ATerm Explode_2 (ATerm t, ATerm u_74 (ATerm), ATerm v_74 (ATerm))
{
  ATerm o_36 = NULL,r_36 = NULL,s_36 = NULL;
  o_36 = t;
  n_36 :
  if(match_cons(o_36, sym_Explode_2))
    {
      r_36 = ATgetArgument(o_36, 0);
      s_36 = ATgetArgument(o_36, 1);
      {
        ATerm b_37 = NULL,d_37 = NULL;
        ATerm c_37 = NULL;
        t = SSLgetAnnotations(not_null(o_36));
        {
          c_37 = t;
          if(((b_37 != NULL) && (b_37 != c_37)))
            _fail(c_37);
          else
            b_37 = c_37;
        }
        {
          t = not_null(r_36);
          {
            ATerm f_37 = NULL;
            t = u_74(t);
            {
              d_37 = t;
              {
                t = not_null(s_36);
                {
                  ATerm h_37 = NULL;
                  t = v_74(t);
                  {
                    f_37 = t;
                    {
                      ATerm i_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(d_37), not_null(f_37)), not_null(b_37));
                      {
                        i_37 = t;
                        if(((h_37 != NULL) && (h_37 != i_37)))
                          _fail(i_37);
                        else
                          h_37 = i_37;
                      }
                      t = not_null(h_37);
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
ATerm Op_2 (ATerm t, ATerm g_76 (ATerm), ATerm h_76 (ATerm))
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym_Op_2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      {
        ATerm e_38 = NULL,g_38 = NULL;
        ATerm f_38 = NULL;
        t = SSLgetAnnotations(not_null(y_37));
        {
          f_38 = t;
          if(((e_38 != NULL) && (e_38 != f_38)))
            _fail(f_38);
          else
            e_38 = f_38;
        }
        {
          t = not_null(z_37);
          {
            ATerm i_38 = NULL;
            t = g_76(t);
            {
              g_38 = t;
              {
                t = not_null(a_38);
                {
                  ATerm k_38 = NULL;
                  t = h_76(t);
                  {
                    i_38 = t;
                    {
                      ATerm n_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(g_38), not_null(i_38)), not_null(e_38));
                      {
                        n_38 = t;
                        if(((k_38 != NULL) && (k_38 != n_38)))
                          _fail(n_38);
                        else
                          k_38 = n_38;
                      }
                      t = not_null(k_38);
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
ATerm pat_td_1 (ATerm t, ATerm g_107 (ATerm))
{
  ATerm t_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_107(t);
      LocalPopChoice(w_10);
    }
  else
    {
      t = t_10;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, g_107);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            {
              ATerm z_10 = t;
              int a_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, g_107);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
                  LocalPopChoice(a_11);
                }
              else
                {
                  t = z_10;
                  {
                    ATerm b_11 = t;
                    int c_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, g_107);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        LocalPopChoice(c_11);
                      }
                    else
                      {
                        t = b_11;
                        {
                          ATerm u_1 (ATerm t)
                          {
                            ATerm v_1 (ATerm t)
                            {
                              t = pat_td_1(t, g_107);
                              return(t);
                            }
                            t = fetch_1(t, v_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, u_1);
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
  ATerm g_39 = NULL,h_39 = NULL;
  g_39 = t;
  f_39 :
  if(match_cons(g_39, sym_Build_1))
    {
      h_39 = ATgetArgument(g_39, 0);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_39 = NULL,k_39 = NULL;
            ATerm o_39 = NULL;
            t = not_null(h_39);
            {
              ATerm w_1 (ATerm t)
              {
                ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
                l_39 = t;
                y_38 :
                if(match_cons(l_39, sym_RootApp_1))
                  {
                    m_39 = ATgetArgument(l_39, 0);
                    z_38 :
                    if(match_cons(m_39, sym_Build_1))
                      {
                        n_39 = ATgetArgument(m_39, 0);
                        {
                          if(((j_39 != NULL) && (j_39 != n_39)))
                            _fail(n_39);
                          else
                            j_39 = n_39;
                          t = not_null(j_39);
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
              t = pat_td_1(t, w_1);
              {
                o_39 = t;
                if(((k_39 != NULL) && (k_39 != o_39)))
                  _fail(o_39);
                else
                  k_39 = o_39;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(k_39));
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            {
              ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
              ATerm x_39 = NULL;
              t = not_null(h_39);
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
                  t_39 = t;
                  c_39 :
                  if(match_cons(t_39, sym_App_2))
                    {
                      u_39 = ATgetArgument(t_39, 0);
                      w_39 = ATgetArgument(t_39, 1);
                      d_39 :
                      if(match_cons(u_39, sym_Build_1))
                        {
                          v_39 = ATgetArgument(u_39, 0);
                          {
                            if(((r_39 != NULL) && (r_39 != v_39)))
                              _fail(v_39);
                            else
                              r_39 = v_39;
                            {
                              if(((q_39 != NULL) && (q_39 != w_39)))
                                _fail(w_39);
                              else
                                q_39 = w_39;
                              t = not_null(r_39);
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
                t = pat_td_1(t, x_1);
                {
                  x_39 = t;
                  if(((s_39 != NULL) && (s_39 != x_39)))
                    _fail(x_39);
                  else
                    s_39 = x_39;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(s_39));
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
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,q_41 = NULL,r_41 = NULL;
  q_41 = t;
  b_41 :
  if(match_cons(q_41, sym_InfixApp_3))
    {
      r_41 = ATgetArgument(q_41, 0);
      g_41 = ATgetArgument(q_41, 1);
      f_41 = ATgetArgument(q_41, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(g_41), (ATerm) ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_41)), not_null(r_41))));
    }
  else
    {
      if(match_cons(q_41, sym_BAM_3))
        {
          r_41 = ATgetArgument(q_41, 0);
          g_41 = ATgetArgument(q_41, 1);
          f_41 = ATgetArgument(q_41, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(f_41))), not_null(r_41)), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_41))));
        }
      else
        {
          if(match_cons(q_41, sym_AM_2))
            {
              r_41 = ATgetArgument(q_41, 0);
              g_41 = ATgetArgument(q_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_41), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_41)));
            }
          else
            {
              if(match_cons(q_41, sym_MA_2))
                {
                  r_41 = ATgetArgument(q_41, 0);
                  g_41 = ATgetArgument(q_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_41)), not_null(g_41));
                }
              else
                {
                  if(match_cons(q_41, sym_BA_2))
                    {
                      r_41 = ATgetArgument(q_41, 0);
                      g_41 = ATgetArgument(q_41, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_41)), not_null(r_41));
                    }
                  else
                    {
                      if(match_cons(q_41, sym_Lets_2))
                        {
                          r_41 = ATgetArgument(q_41, 0);
                          g_41 = ATgetArgument(q_41, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_41), not_null(g_41));
                        }
                      else
                        {
                          if(match_cons(q_41, sym_LChoices_1))
                            {
                              r_41 = ATgetArgument(q_41, 0);
                              c_41 :
                              if(((ATgetType(r_41) == AT_LIST) && ((ATermList) r_41 != ATempty)))
                                {
                                  h_41 = ATgetFirst((ATermList) r_41);
                                  i_41 = (ATerm) ATgetNext((ATermList) r_41);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_41), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(i_41)));
                                }
                              else
                                {
                                  if(((ATermList) r_41 == ATempty))
                                    {
                                      t = term_z_8;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(q_41, sym_Choices_1))
                                {
                                  r_41 = ATgetArgument(q_41, 0);
                                  d_41 :
                                  if(((ATgetType(r_41) == AT_LIST) && ((ATermList) r_41 != ATempty)))
                                    {
                                      h_41 = ATgetFirst((ATermList) r_41);
                                      i_41 = (ATerm) ATgetNext((ATermList) r_41);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_41), (ATerm) ATmakeAppl(sym_Choices_1, not_null(i_41)));
                                    }
                                  else
                                    {
                                      if(((ATermList) r_41 == ATempty))
                                        {
                                          t = term_z_8;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(q_41, sym_Seqs_1))
                                    {
                                      r_41 = ATgetArgument(q_41, 0);
                                      e_41 :
                                      if(((ATgetType(r_41) == AT_LIST) && ((ATermList) r_41 != ATempty)))
                                        {
                                          h_41 = ATgetFirst((ATermList) r_41);
                                          i_41 = (ATerm) ATgetNext((ATermList) r_41);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_41), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_41)));
                                        }
                                      else
                                        {
                                          if(((ATermList) r_41 == ATempty))
                                            {
                                              t = term_n_11;
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
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
  h_43 = t;
  e_43 :
  if(match_cons(h_43, sym__2))
    {
      i_43 = ATgetArgument(h_43, 0);
      l_43 = ATgetArgument(h_43, 1);
      f_43 :
      if(match_cons(i_43, sym__2))
        {
          j_43 = ATgetArgument(i_43, 0);
          k_43 = ATgetArgument(i_43, 1);
          g_43 :
          if(match_cons(l_43, sym__2))
            {
              m_43 = ATgetArgument(l_43, 0);
              n_43 = ATgetArgument(l_43, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_43)), not_null(j_43)), (ATerm) ATinsert(CheckATermList(not_null(n_43)), not_null(k_43)));
            }
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
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  u_43 :
  if(((ATgetType(v_43) == AT_LIST) && ((ATermList) v_43 != ATempty)))
    {
      w_43 = ATgetFirst((ATermList) v_43);
      x_43 = (ATerm) ATgetNext((ATermList) v_43);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_43), not_null(x_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  c_44 :
  if(((ATermList) d_44 == ATempty))
    {
      t = term_r_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm r_97 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, r_97);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  ATerm p_44 (ATerm t)
  {
    ATerm m_44 = NULL;
    ATerm n_44 = NULL;
    t = not_null(j_44);
    {
      ATerm t_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_11;
        }
      {
        t = new_0(t);
        {
          n_44 = t;
          if(((m_44 != NULL) && (m_44 != n_44)))
            _fail(n_44);
          else
            m_44 = n_44;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(m_44)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_44)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_44))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_44))));
    return(t);
  }
  ATerm q_44 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_44))));
    return(t);
  }
  j_44 = t;
  i_44 :
  if(match_cons(j_44, sym_Var_1))
    {
      k_44 = ATgetArgument(j_44, 0);
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_44(t);
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            t = q_44(t);
          }
      }
    }
  else
    {
      t = p_44(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm b_45 = NULL,c_45 = NULL;
  b_45 = t;
  a_45 :
  if(match_cons(b_45, sym_Var_1))
    {
      c_45 = ATgetArgument(b_45, 0);
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_45 = NULL,h_45 = NULL;
            ATerm g_45 = NULL;
            t = SSLgetAnnotations(not_null(b_45));
            {
              g_45 = t;
              if(((f_45 != NULL) && (f_45 != g_45)))
                _fail(g_45);
              else
                f_45 = g_45;
            }
            {
              t = not_null(c_45);
              {
                ATerm j_45 = NULL;
                t = o_0(t);
                {
                  h_45 = t;
                  {
                    ATerm k_45 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_45)), not_null(f_45));
                    {
                      k_45 = t;
                      if(((j_45 != NULL) && (j_45 != k_45)))
                        _fail(k_45);
                      else
                        j_45 = k_45;
                    }
                    t = not_null(j_45);
                  }
                }
              }
            }
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
            {
              ATerm n_45 = NULL,p_45 = NULL;
              ATerm o_45 = NULL;
              t = SSLgetAnnotations(not_null(b_45));
              {
                o_45 = t;
                if(((n_45 != NULL) && (n_45 != o_45)))
                  _fail(o_45);
                else
                  n_45 = o_45;
              }
              {
                t = not_null(c_45);
                {
                  ATerm r_45 = NULL;
                  t = o_0(t);
                  {
                    p_45 = t;
                    {
                      ATerm s_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_45)), not_null(n_45));
                      {
                        s_45 = t;
                        if(((r_45 != NULL) && (r_45 != s_45)))
                          _fail(s_45);
                        else
                          r_45 = s_45;
                      }
                      t = not_null(r_45);
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
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
  h_46 = t;
  g_46 :
  if(match_cons(h_46, sym_Prim_2))
    {
      i_46 = ATgetArgument(h_46, 0);
      j_46 = ATgetArgument(h_46, 1);
      {
        ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
        ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL;
        t = not_null(j_46);
        {
          ATerm y_1 (ATerm t)
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
            return(t);
          }
          t = fetch_1(t, y_1);
          {
            t = not_null(j_46);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm z_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, z_1);
                {
                  p_46 = t;
                  d_46 :
                  if(match_cons(p_46, sym__2))
                    {
                      q_46 = ATgetArgument(p_46, 0);
                      r_46 = ATgetArgument(p_46, 1);
                      e_46 :
                      if(match_cons(r_46, sym__2))
                        {
                          s_46 = ATgetArgument(r_46, 0);
                          t_46 = ATgetArgument(r_46, 1);
                          {
                            if(((m_46 != NULL) && (m_46 != q_46)))
                              _fail(q_46);
                            else
                              m_46 = q_46;
                            {
                              if(((n_46 != NULL) && (n_46 != s_46)))
                                _fail(s_46);
                              else
                                n_46 = s_46;
                              if(((o_46 != NULL) && (o_46 != t_46)))
                                _fail(t_46);
                              else
                                o_46 = t_46;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(n_46)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(i_46), not_null(o_46))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm a_92 (ATerm), ATerm b_92 (ATerm))
{
  ATerm w_46 (ATerm t)
  {
    ATerm b_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_92(t);
        t = w_46(t);
        LocalPopChoice(g_12);
      }
    else
      {
        t = b_12;
        t = b_92(t);
      }
    return(t);
  }
  t = w_46(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm d_92 (ATerm))
{
  t = repeat_2(t, d_92, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm b_47 = NULL;
  b_47 = t;
  a_47 :
  if(match_cons(b_47, sym_Wld_0))
    {
      ATerm d_47 = NULL,f_47 = NULL;
      ATerm h_12;
      h_12 = t;
      {
        ATerm e_47 = NULL;
        t = SSLgetAnnotations(not_null(b_47));
        {
          e_47 = t;
          if(((d_47 != NULL) && (d_47 != e_47)))
            _fail(e_47);
          else
            d_47 = e_47;
        }
      }
      t = h_12;
      {
        ATerm g_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(d_47));
        {
          g_47 = t;
          if(((f_47 != NULL) && (f_47 != g_47)))
            _fail(g_47);
          else
            f_47 = g_47;
        }
        t = not_null(f_47);
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
  ATerm i_12 = t;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, a_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm o_74 (ATerm), ATerm p_74 (ATerm))
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
  q_47 = t;
  p_47 :
  if(match_cons(q_47, sym_App_2))
    {
      r_47 = ATgetArgument(q_47, 0);
      s_47 = ATgetArgument(q_47, 1);
      {
        ATerm w_47 = NULL,c_48 = NULL;
        ATerm x_47 = NULL;
        t = SSLgetAnnotations(not_null(q_47));
        {
          x_47 = t;
          if(((w_47 != NULL) && (w_47 != x_47)))
            _fail(x_47);
          else
            w_47 = x_47;
        }
        {
          t = not_null(r_47);
          {
            ATerm e_48 = NULL;
            t = o_74(t);
            {
              c_48 = t;
              {
                t = not_null(s_47);
                {
                  ATerm g_48 = NULL;
                  t = p_74(t);
                  {
                    e_48 = t;
                    {
                      ATerm h_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(c_48), not_null(e_48)), not_null(w_47));
                      {
                        h_48 = t;
                        if(((g_48 != NULL) && (g_48 != h_48)))
                          _fail(h_48);
                        else
                          g_48 = h_48;
                      }
                      t = not_null(g_48);
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
ATerm Con_3 (ATerm t, ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm n_74 (ATerm))
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
  g_49 = t;
  f_49 :
  if(match_cons(g_49, sym_Con_3))
    {
      h_49 = ATgetArgument(g_49, 0);
      i_49 = ATgetArgument(g_49, 1);
      j_49 = ATgetArgument(g_49, 2);
      {
        ATerm o_49 = NULL,q_49 = NULL;
        ATerm p_49 = NULL;
        t = SSLgetAnnotations(not_null(g_49));
        {
          p_49 = t;
          if(((o_49 != NULL) && (o_49 != p_49)))
            _fail(p_49);
          else
            o_49 = p_49;
        }
        {
          t = not_null(h_49);
          {
            ATerm s_49 = NULL;
            t = l_74(t);
            {
              q_49 = t;
              {
                t = not_null(i_49);
                {
                  ATerm u_49 = NULL;
                  t = m_74(t);
                  {
                    s_49 = t;
                    {
                      t = not_null(j_49);
                      {
                        ATerm w_49 = NULL;
                        t = n_74(t);
                        {
                          u_49 = t;
                          {
                            ATerm x_49 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(q_49), not_null(s_49), not_null(u_49)), not_null(o_49));
                            {
                              x_49 = t;
                              if(((w_49 != NULL) && (w_49 != x_49)))
                                _fail(x_49);
                              else
                                w_49 = x_49;
                            }
                            t = not_null(w_49);
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
  ATerm r_12 = t;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, b_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
  i_50 = t;
  g_50 :
  if(match_cons(i_50, sym_SRule_1))
    {
      j_50 = ATgetArgument(i_50, 0);
      h_50 :
      if(match_cons(j_50, sym_StratRule_3))
        {
          k_50 = ATgetArgument(j_50, 0);
          l_50 = ATgetArgument(j_50, 1);
          m_50 = ATgetArgument(j_50, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_50)), (ATerm) ATmakeAppl(sym_Where_1, not_null(m_50))), not_null(k_50)));
        }
      else
        {
          if(match_cons(j_50, sym_Rule_3))
            {
              k_50 = ATgetArgument(j_50, 0);
              l_50 = ATgetArgument(j_50, 1);
              m_50 = ATgetArgument(j_50, 2);
              {
                t = not_null(k_50);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(l_50);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(l_50))), (ATerm) ATmakeAppl(sym_Where_1, not_null(m_50))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_50))));
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
ATerm Scope_2 (ATerm t, ATerm d_78 (ATerm), ATerm e_78 (ATerm))
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  b_51 = t;
  a_51 :
  if(match_cons(b_51, sym_Scope_2))
    {
      c_51 = ATgetArgument(b_51, 0);
      d_51 = ATgetArgument(b_51, 1);
      {
        ATerm h_51 = NULL,j_51 = NULL;
        ATerm i_51 = NULL;
        t = SSLgetAnnotations(not_null(b_51));
        {
          i_51 = t;
          if(((h_51 != NULL) && (h_51 != i_51)))
            _fail(i_51);
          else
            h_51 = i_51;
        }
        {
          t = not_null(c_51);
          {
            ATerm l_51 = NULL;
            t = d_78(t);
            {
              j_51 = t;
              {
                t = not_null(d_51);
                {
                  ATerm s_51 = NULL;
                  t = e_78(t);
                  {
                    l_51 = t;
                    {
                      ATerm t_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(j_51), not_null(l_51)), not_null(h_51));
                      {
                        t_51 = t;
                        if(((s_51 != NULL) && (s_51 != t_51)))
                          _fail(t_51);
                        else
                          s_51 = t_51;
                      }
                      t = not_null(s_51);
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
ATerm oncetd_1 (ATerm t, ATerm s_101 (ATerm))
{
  ATerm b_52 (ATerm t)
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_101(t);
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = _one(t, b_52);
      }
    return(t);
  }
  t = b_52(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL;
  b_53 = t;
  z_52 :
  if(match_cons(b_53, sym_SRule_1))
    {
      c_53 = ATgetArgument(b_53, 0);
      a_53 :
      if(match_cons(c_53, sym_Rule_3))
        {
          e_53 = ATgetArgument(c_53, 0);
          f_53 = ATgetArgument(c_53, 1);
          g_53 = ATgetArgument(c_53, 2);
          {
            ATerm k_53 = NULL,l_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL;
            ATerm d_54 = NULL;
            ATerm m_54 = NULL;
            t = new_0(t);
            {
              d_54 = t;
              {
                if(((a_54 != NULL) && (a_54 != d_54)))
                  _fail(d_54);
                else
                  a_54 = d_54;
                {
                  t = not_null(e_53);
                  {
                    ATerm u_54 = NULL;
                    ATerm c_2 (ATerm t)
                    {
                      ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
                      h_54 = t;
                      f_52 :
                      if(match_cons(h_54, sym_Con_3))
                        {
                          i_54 = ATgetArgument(h_54, 0);
                          k_54 = ATgetArgument(h_54, 1);
                          l_54 = ATgetArgument(h_54, 2);
                          g_52 :
                          if(match_cons(i_54, sym_Var_1))
                            {
                              j_54 = ATgetArgument(i_54, 0);
                              {
                                if(((z_53 != NULL) && (z_53 != j_54)))
                                  _fail(j_54);
                                else
                                  z_53 = j_54;
                                {
                                  if(((x_53 != NULL) && (x_53 != k_54)))
                                    _fail(k_54);
                                  else
                                    x_53 = k_54;
                                  {
                                    if(((k_53 != NULL) && (k_53 != l_54)))
                                      _fail(l_54);
                                    else
                                      k_53 = l_54;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_53));
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
                    t = oncetd_1(t, c_2);
                    {
                      m_54 = t;
                      {
                        if(((b_54 != NULL) && (b_54 != m_54)))
                          _fail(m_54);
                        else
                          b_54 = m_54;
                        {
                          t = not_null(f_53);
                          {
                            ATerm d_2 (ATerm t)
                            {
                              ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL;
                              n_54 = t;
                              j_52 :
                              if(match_cons(n_54, sym_Con_3))
                                {
                                  o_54 = ATgetArgument(n_54, 0);
                                  q_54 = ATgetArgument(n_54, 1);
                                  r_54 = ATgetArgument(n_54, 2);
                                  k_52 :
                                  if(match_cons(o_54, sym_Var_1))
                                    {
                                      p_54 = ATgetArgument(o_54, 0);
                                      l_52 :
                                      if(match_cons(r_54, sym_Call_2))
                                        {
                                          s_54 = ATgetArgument(r_54, 0);
                                          t_54 = ATgetArgument(r_54, 1);
                                          m_52 :
                                          if(((ATermList) t_54 == ATempty))
                                            {
                                              {
                                                if(((z_53 != NULL) && (z_53 != p_54)))
                                                  _fail(p_54);
                                                else
                                                  z_53 = p_54;
                                                {
                                                  if(((y_53 != NULL) && (y_53 != q_54)))
                                                    _fail(q_54);
                                                  else
                                                    y_53 = q_54;
                                                  {
                                                    if(((l_53 != NULL) && (l_53 != s_54)))
                                                      _fail(s_54);
                                                    else
                                                      l_53 = s_54;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_54));
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
                            t = oncetd_1(t, d_2);
                            {
                              u_54 = t;
                              if(((c_54 != NULL) && (c_54 != u_54)))
                                _fail(u_54);
                              else
                                c_54 = u_54;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_54)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_54), not_null(c_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_53), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(l_53), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_53), not_null(y_53), term_n_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_53)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_54)))))));
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
  ATerm e_2 (ATerm t)
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        {
          ATerm b_13 = t;
          int h_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(h_13);
            }
          else
            {
              t = b_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, e_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm c_100 (ATerm))
{
  t = c_100(t);
  {
    ATerm f_2 (ATerm t)
    {
      t = topdown_1(t, c_100);
      return(t);
    }
    t = _all(t, f_2);
  }
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
        ATerm i_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(n_13);
          }
        else
          {
            t = i_13;
            {
              ATerm o_13 = t;
              int p_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(p_13);
                }
              else
                {
                  t = o_13;
                  {
                    ATerm q_13 = t;
                    int r_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(r_13);
                      }
                    else
                      {
                        t = q_13;
                        {
                          ATerm s_13 = t;
                          int t_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(t_13);
                            }
                          else
                            {
                              t = s_13;
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
  ATerm g_55 = NULL;
  g_55 = t;
  f_55 :
  if(match_cons(g_55, sym__0))
    {
      ATerm i_55 = NULL,k_55 = NULL;
      ATerm u_13;
      u_13 = t;
      {
        ATerm j_55 = NULL;
        t = SSLgetAnnotations(not_null(g_55));
        {
          j_55 = t;
          if(((i_55 != NULL) && (i_55 != j_55)))
            _fail(j_55);
          else
            i_55 = j_55;
        }
      }
      t = u_13;
      {
        ATerm l_55 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(i_55));
        {
          l_55 = t;
          if(((k_55 != NULL) && (k_55 != l_55)))
            _fail(l_55);
          else
            k_55 = l_55;
        }
        t = not_null(k_55);
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
  ATerm x_55 = NULL;
  ATerm z_55 = NULL,a_56 = NULL,i_56 = NULL,k_56 = NULL;
  x_55 = t;
  {
    ATerm x_13;
    x_13 = t;
    {
      ATerm b_56 = NULL;
      ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
      t = not_null(x_55);
      {
        b_56 = t;
        {
          t = SSL_explode_term(not_null(b_56));
          {
            d_56 = t;
            s_55 :
            if(match_cons(d_56, sym__2))
              {
                e_56 = ATgetArgument(d_56, 0);
                f_56 = ATgetArgument(d_56, 1);
                t_55 :
                if(match_string(e_56, ""))
                  {
                    u_55 :
                    if(((ATgetType(f_56) == AT_LIST) && ((ATermList) f_56 != ATempty)))
                      {
                        g_56 = ATgetFirst((ATermList) f_56);
                        h_56 = (ATerm) ATgetNext((ATermList) f_56);
                        {
                          if(((z_55 != NULL) && (z_55 != g_56)))
                            _fail(g_56);
                          else
                            z_55 = g_56;
                          if(((a_56 != NULL) && (a_56 != h_56)))
                            _fail(h_56);
                          else
                            a_56 = h_56;
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
    t = x_13;
    {
      ATerm a_14;
      a_14 = t;
      {
        ATerm j_56 = NULL;
        t = term_u_9;
        {
          j_56 = t;
          if(((i_56 != NULL) && (i_56 != j_56)))
            _fail(j_56);
          else
            i_56 = j_56;
        }
      }
      t = a_14;
      {
        t = SSL_mkterm(not_null(i_56), not_null(a_56));
        {
          k_56 = t;
          t = not_null(k_56);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm x_56 = NULL;
  ATerm e_57 = NULL,f_57 = NULL;
  x_56 = t;
  {
    ATerm g_57 = NULL;
    ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL;
    t = not_null(x_56);
    {
      g_57 = t;
      {
        t = SSL_explode_term(not_null(g_57));
        {
          i_57 = t;
          u_56 :
          if(match_cons(i_57, sym__2))
            {
              j_57 = ATgetArgument(i_57, 0);
              k_57 = ATgetArgument(i_57, 1);
              v_56 :
              if(match_string(j_57, ""))
                {
                  w_56 :
                  if(((ATgetType(k_57) == AT_LIST) && ((ATermList) k_57 != ATempty)))
                    {
                      l_57 = ATgetFirst((ATermList) k_57);
                      m_57 = (ATerm) ATgetNext((ATermList) k_57);
                      {
                        if(((f_57 != NULL) && (f_57 != l_57)))
                          _fail(l_57);
                        else
                          f_57 = l_57;
                        if(((e_57 != NULL) && (e_57 != m_57)))
                          _fail(m_57);
                        else
                          e_57 = m_57;
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
    t = not_null(f_57);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm l_99 (ATerm))
{
  ATerm g_58 = NULL,i_58 = NULL,k_58 = NULL;
  ATerm m_58 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_58 = NULL,e_58 = NULL;
        ATerm g_14;
        g_14 = t;
        {
          ATerm d_58 = NULL;
          t = map_1(t, Thd_0);
          {
            t = l_99(t);
            {
              d_58 = t;
              if(((c_58 != NULL) && (c_58 != d_58)))
                _fail(d_58);
              else
                c_58 = d_58;
            }
          }
        }
        t = g_14;
        {
          ATerm f_58 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = m_58(t);
            {
              f_58 = t;
              if(((e_58 != NULL) && (e_58 != f_58)))
                _fail(f_58);
              else
                e_58 = f_58;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(e_58)), not_null(c_58));
        }
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = m_58(t);
  {
    ATerm h_14;
    h_14 = t;
    {
      ATerm h_58 = NULL;
      h_58 = t;
      if(((g_58 != NULL) && (g_58 != h_58)))
        _fail(h_58);
      else
        g_58 = h_58;
    }
    t = h_14;
    {
      ATerm l_14;
      l_14 = t;
      {
        ATerm j_58 = NULL;
        t = term_u_9;
        {
          j_58 = t;
          if(((i_58 != NULL) && (i_58 != j_58)))
            _fail(j_58);
          else
            i_58 = j_58;
        }
      }
      t = l_14;
      {
        t = SSL_mkterm(not_null(i_58), not_null(g_58));
        {
          k_58 = t;
          t = not_null(k_58);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm q_61 = NULL;
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
  q_61 = t;
  {
    ATerm v_61 = NULL;
    ATerm w_61 = NULL;
    t = new_0(t);
    {
      v_61 = t;
      {
        if(((s_61 != NULL) && (s_61 != v_61)))
          _fail(v_61);
        else
          s_61 = v_61;
        {
          ATerm x_61 = NULL;
          t = new_0(t);
          {
            w_61 = t;
            {
              if(((t_61 != NULL) && (t_61 != w_61)))
                _fail(w_61);
              else
                t_61 = w_61;
              {
                t = new_0(t);
                {
                  x_61 = t;
                  if(((u_61 != NULL) && (u_61 != x_61)))
                    _fail(x_61);
                  else
                    u_61 = x_61;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_61)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_61)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_61)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_61))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(s_61), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_14), term_q_14)), not_null(t_61), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_61)), not_null(u_61), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_61)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  m_63 = t;
  l_63 :
  if(match_cons(m_63, sym__2))
    {
      n_63 = ATgetArgument(m_63, 0);
      o_63 = ATgetArgument(m_63, 1);
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(n_63), not_null(o_63));
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            t = SSL_subtr(not_null(n_63), not_null(o_63));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm e_89 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
    g_67 = t;
    t_63 :
    if(match_cons(g_67, sym__2))
      {
        h_67 = ATgetArgument(g_67, 0);
        i_67 = ATgetArgument(g_67, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(h_67), not_null(i_67), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL;
    l_67 = t;
    v_63 :
    if(match_cons(l_67, sym__3))
      {
        m_67 = ATgetArgument(l_67, 0);
        n_67 = ATgetArgument(l_67, 1);
        o_67 = ATgetArgument(l_67, 2);
        w_63 :
        if(match_int(m_67, 0))
          {
            t = not_null(o_67);
          }
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
    ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL;
    r_67 = t;
    f_67 :
    if(match_cons(r_67, sym__3))
      {
        s_67 = ATgetArgument(r_67, 0);
        t_67 = ATgetArgument(r_67, 1);
        u_67 = ATgetArgument(r_67, 2);
        {
          ATerm y_67 = NULL,a_68 = NULL;
          ATerm g_15;
          g_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_67), term_w_6);
            t = geq_0(t);
          }
          t = g_15;
          {
            ATerm h_15;
            h_15 = t;
            {
              ATerm z_67 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_67), term_w_6);
              {
                t = subt_0(t);
                {
                  z_67 = t;
                  if(((y_67 != NULL) && (y_67 != z_67)))
                    _fail(z_67);
                  else
                    y_67 = z_67;
                }
              }
            }
            t = h_15;
            {
              ATerm b_68 = NULL;
              t = not_null(t_67);
              {
                t = e_89(t);
                {
                  b_68 = t;
                  if(((a_68 != NULL) && (a_68 != b_68)))
                    _fail(b_68);
                  else
                    a_68 = b_68;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(y_67), not_null(t_67), (ATerm) ATinsert(CheckATermList(not_null(u_67)), not_null(a_68)));
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
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL;
  m_68 = t;
  l_68 :
  if(match_cons(m_68, sym__2))
    {
      n_68 = ATgetArgument(m_68, 0);
      o_68 = ATgetArgument(m_68, 1);
      {
        ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
        ATerm u_68 = NULL;
        ATerm v_68 = NULL;
        t = new_0(t);
        {
          u_68 = t;
          {
            if(((r_68 != NULL) && (r_68 != u_68)))
              _fail(u_68);
            else
              r_68 = u_68;
            {
              ATerm w_68 = NULL;
              t = new_0(t);
              {
                v_68 = t;
                {
                  if(((s_68 != NULL) && (s_68 != v_68)))
                    _fail(v_68);
                  else
                    s_68 = v_68;
                  {
                    t = new_0(t);
                    {
                      w_68 = t;
                      if(((t_68 != NULL) && (t_68 != w_68)))
                        _fail(w_68);
                      else
                        t_68 = w_68;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_68)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_68))), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_68)))), (ATerm) ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_68))), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_68))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(r_68), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_q_14), term_q_14)), not_null(s_68), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_68)), not_null(t_68), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_68)));
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
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  e_69 = t;
  c_69 :
  if(match_cons(e_69, sym__2))
    {
      f_69 = ATgetArgument(e_69, 0);
      g_69 = ATgetArgument(e_69, 1);
      d_69 :
      if(((ATermList) g_69 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm p_97 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, p_97);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
  k_69 = t;
  j_69 :
  if(((ATgetType(k_69) == AT_LIST) && ((ATermList) k_69 != ATempty)))
    {
      l_69 = ATgetFirst((ATermList) k_69);
      m_69 = (ATerm) ATgetNext((ATermList) k_69);
      t = not_null(m_69);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL;
  t_69 = t;
  r_69 :
  if(((ATgetType(t_69) == AT_LIST) && ((ATermList) t_69 != ATempty)))
    {
      u_69 = ATgetFirst((ATermList) t_69);
      v_69 = (ATerm) ATgetNext((ATermList) t_69);
      s_69 :
      if(((ATermList) v_69 == ATempty))
        {
          t = not_null(u_69);
        }
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
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL;
  ATerm r_72 (ATerm t)
  {
    ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,t_71 = NULL;
    ATerm k_15;
    k_15 = t;
    {
      ATerm g_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL;
      ATerm h_71 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_70), term_w_6);
      {
        t = add_0(t);
        {
          h_71 = t;
          if(((g_71 != NULL) && (g_71 != h_71)))
            _fail(h_71);
          else
            g_71 = h_71;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_71), term_l_15);
        {
          t = copy_1(t, new_0);
          {
            i_71 = t;
            h_70 :
            if(((ATgetType(i_71) == AT_LIST) && ((ATermList) i_71 != ATempty)))
              {
                j_71 = ATgetFirst((ATermList) i_71);
                k_71 = (ATerm) ATgetNext((ATermList) i_71);
                {
                  ATerm l_71 = NULL;
                  if(((y_70 != NULL) && (y_70 != j_71)))
                    _fail(j_71);
                  else
                    y_70 = j_71;
                  {
                    if(((z_70 != NULL) && (z_70 != k_71)))
                      _fail(k_71);
                    else
                      z_70 = k_71;
                    {
                      t = not_null(z_70);
                      {
                        ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL;
                        t = last_0(t);
                        {
                          l_71 = t;
                          {
                            if(((x_70 != NULL) && (x_70 != l_71)))
                              _fail(l_71);
                            else
                              x_70 = l_71;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_70)), not_null(y_70)), not_null(z_70));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    m_71 = t;
                                    g_70 :
                                    if(match_cons(m_71, sym__6))
                                      {
                                        n_71 = ATgetArgument(m_71, 0);
                                        o_71 = ATgetArgument(m_71, 1);
                                        p_71 = ATgetArgument(m_71, 2);
                                        q_71 = ATgetArgument(m_71, 3);
                                        r_71 = ATgetArgument(m_71, 4);
                                        s_71 = ATgetArgument(m_71, 5);
                                        {
                                          if(((a_71 != NULL) && (a_71 != n_71)))
                                            _fail(n_71);
                                          else
                                            a_71 = n_71;
                                          {
                                            if(((b_71 != NULL) && (b_71 != o_71)))
                                              _fail(o_71);
                                            else
                                              b_71 = o_71;
                                            {
                                              if(((c_71 != NULL) && (c_71 != p_71)))
                                                _fail(p_71);
                                              else
                                                c_71 = p_71;
                                              {
                                                if(((d_71 != NULL) && (d_71 != q_71)))
                                                  _fail(q_71);
                                                else
                                                  d_71 = q_71;
                                                {
                                                  if(((e_71 != NULL) && (e_71 != r_71)))
                                                    _fail(r_71);
                                                  else
                                                    e_71 = r_71;
                                                  if(((f_71 != NULL) && (f_71 != s_71)))
                                                    _fail(s_71);
                                                  else
                                                    f_71 = s_71;
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
      ATerm u_71 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_71)), not_null(c_71)), not_null(z_70));
      {
        t = concat_0(t);
        {
          u_71 = t;
          if(((t_71 != NULL) && (t_71 != u_71)))
            _fail(u_71);
          else
            t_71 = u_71;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(s_70), term_m_15), not_null(b_71), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(t_71)), not_null(y_70)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_70))), (ATerm) ATmakeAppl(sym_Op_2, not_null(s_70), not_null(d_71)))), (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_70))), (ATerm) ATmakeAppl(sym_Op_2, not_null(s_70), not_null(f_71)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_71))))));
    }
    return(t);
  }
  ATerm s_72 (ATerm t)
  {
    ATerm w_71 = NULL;
    ATerm x_71 = NULL;
    t = new_0(t);
    {
      x_71 = t;
      if(((w_71 != NULL) && (w_71 != x_71)))
        _fail(x_71);
      else
        w_71 = x_71;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(s_70), term_m_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(s_70), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(s_70), (ATerm) ATempty))), term_n_11))));
    return(t);
  }
  ATerm t_72 (ATerm t)
  {
    ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,p_72 = NULL;
    ATerm s_15;
    s_15 = t;
    {
      ATerm h_72 = NULL;
      ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
      t = new_0(t);
      {
        h_72 = t;
        {
          if(((a_72 != NULL) && (a_72 != h_72)))
            _fail(h_72);
          else
            a_72 = h_72;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_70), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_72)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  i_72 = t;
                  m_70 :
                  if(match_cons(i_72, sym__6))
                    {
                      j_72 = ATgetArgument(i_72, 0);
                      k_72 = ATgetArgument(i_72, 1);
                      l_72 = ATgetArgument(i_72, 2);
                      m_72 = ATgetArgument(i_72, 3);
                      n_72 = ATgetArgument(i_72, 4);
                      o_72 = ATgetArgument(i_72, 5);
                      {
                        if(((b_72 != NULL) && (b_72 != j_72)))
                          _fail(j_72);
                        else
                          b_72 = j_72;
                        {
                          if(((c_72 != NULL) && (c_72 != k_72)))
                            _fail(k_72);
                          else
                            c_72 = k_72;
                          {
                            if(((d_72 != NULL) && (d_72 != l_72)))
                              _fail(l_72);
                            else
                              d_72 = l_72;
                            {
                              if(((e_72 != NULL) && (e_72 != m_72)))
                                _fail(m_72);
                              else
                                e_72 = m_72;
                              {
                                if(((f_72 != NULL) && (f_72 != n_72)))
                                  _fail(n_72);
                                else
                                  f_72 = n_72;
                                if(((g_72 != NULL) && (g_72 != o_72)))
                                  _fail(o_72);
                                else
                                  g_72 = o_72;
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
    t = s_15;
    {
      ATerm q_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_72), not_null(f_72));
      {
        t = conc_0(t);
        {
          q_72 = t;
          if(((p_72 != NULL) && (p_72 != q_72)))
            _fail(q_72);
          else
            p_72 = q_72;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(s_70), term_x_15), not_null(c_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(p_72)), not_null(a_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_u_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(s_70), not_null(e_72)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(s_70), not_null(g_72)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(b_72))))));
    }
    return(t);
  }
  r_70 = t;
  o_70 :
  if(match_cons(r_70, sym__3))
    {
      s_70 = ATgetArgument(r_70, 0);
      t_70 = ATgetArgument(r_70, 1);
      u_70 = ATgetArgument(r_70, 2);
      p_70 :
      if(match_string(t_70, "T"))
        {
          q_70 :
          if(match_int(u_70, 0))
            {
              ATerm f_16 = t;
              int g_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_72(t);
                  LocalPopChoice(g_16);
                }
              else
                {
                  t = f_16;
                  t = s_72(t);
                }
            }
          else
            {
              t = r_72(t);
            }
        }
      else
        {
          if(match_string(t_70, "D"))
            {
              t = t_72(t);
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
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL;
  k_73 = t;
  h_73 :
  if(match_cons(k_73, sym__2))
    {
      l_73 = ATgetArgument(k_73, 0);
      q_73 = ATgetArgument(k_73, 1);
      i_73 :
      if(match_cons(l_73, sym__2))
        {
          m_73 = ATgetArgument(l_73, 0);
          p_73 = ATgetArgument(l_73, 1);
          j_73 :
          if(match_cons(m_73, sym_Mod_2))
            {
              n_73 = ATgetArgument(m_73, 0);
              o_73 = ATgetArgument(m_73, 1);
              {
                ATerm v_73 = NULL;
                ATerm w_73 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(n_73), not_null(o_73), not_null(p_73));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      w_73 = t;
                      if(((v_73 != NULL) && (v_73 != w_73)))
                        _fail(w_73);
                      else
                        v_73 = w_73;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_73), not_null(q_73));
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
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
  c_74 = t;
  a_74 :
  if(match_cons(c_74, sym__5))
    {
      d_74 = ATgetArgument(c_74, 0);
      g_74 = ATgetArgument(c_74, 1);
      h_74 = ATgetArgument(c_74, 2);
      i_74 = ATgetArgument(c_74, 3);
      j_74 = ATgetArgument(c_74, 4);
      b_74 :
      if(((ATgetType(d_74) == AT_LIST) && ((ATermList) d_74 != ATempty)))
        {
          e_74 = ATgetFirst((ATermList) d_74);
          f_74 = (ATerm) ATgetNext((ATermList) d_74);
          t = (ATerm) ATmakeAppl(sym__5, not_null(f_74), not_null(g_74), not_null(h_74), not_null(i_74), (ATerm) ATinsert(CheckATermList(not_null(j_74)), not_null(e_74)));
        }
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
  ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL;
  b_75 = t;
  z_74 :
  if(match_cons(b_75, sym__2))
    {
      c_75 = ATgetArgument(b_75, 0);
      d_75 = ATgetArgument(b_75, 1);
      a_75 :
      if(((ATgetType(d_75) == AT_LIST) && ((ATermList) d_75 != ATempty)))
        {
          e_75 = ATgetFirst((ATermList) d_75);
          f_75 = (ATerm) ATgetNext((ATermList) d_75);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_75)), not_null(e_75)), not_null(f_75));
        }
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
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL;
  m_75 = t;
  l_75 :
  if(match_cons(m_75, sym__2))
    {
      n_75 = ATgetArgument(m_75, 0);
      o_75 = ATgetArgument(m_75, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_75)), not_null(n_75));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,a_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL;
  w_75 = t;
  t_75 :
  if(match_cons(w_75, sym__2))
    {
      x_75 = ATgetArgument(w_75, 0);
      c_76 = ATgetArgument(w_75, 1);
      u_75 :
      if(((ATgetType(x_75) == AT_LIST) && ((ATermList) x_75 != ATempty)))
        {
          y_75 = ATgetFirst((ATermList) x_75);
          a_76 = (ATerm) ATgetNext((ATermList) x_75);
          v_75 :
          if(((ATgetType(c_76) == AT_LIST) && ((ATermList) c_76 != ATempty)))
            {
              d_76 = ATgetFirst((ATermList) c_76);
              e_76 = (ATerm) ATgetNext((ATermList) c_76);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_75), not_null(d_76)), (ATerm) ATmakeAppl(sym__2, not_null(a_76), not_null(e_76)));
            }
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
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
  q_76 = t;
  n_76 :
  if(match_cons(q_76, sym__2))
    {
      r_76 = ATgetArgument(q_76, 0);
      s_76 = ATgetArgument(q_76, 1);
      o_76 :
      if(((ATermList) r_76 == ATempty))
        {
          p_76 :
          if(((ATermList) s_76 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm))
{
  ATerm u_76 (ATerm t)
  {
    ATerm j_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_97(t);
        LocalPopChoice(o_16);
      }
    else
      {
        t = j_16;
        {
          t = i_97(t);
          {
            t = _2(t, k_97, u_76);
            t = j_97(t);
          }
        }
      }
    return(t);
  }
  t = u_76(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm m_97 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, m_97);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL;
  o_77 = t;
  m_77 :
  if(((ATgetType(o_77) == AT_LIST) && ((ATermList) o_77 != ATempty)))
    {
      p_77 = ATgetFirst((ATermList) o_77);
      s_77 = (ATerm) ATgetNext((ATermList) o_77);
      n_77 :
      if(match_cons(p_77, sym__2))
        {
          q_77 = ATgetArgument(p_77, 0);
          r_77 = ATgetArgument(p_77, 1);
          {
            ATerm w_77 = NULL,x_77 = NULL,f_78 = NULL,p_78 = NULL;
            ATerm p_16;
            p_16 = t;
            {
              ATerm y_77 = NULL;
              ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL;
              t = not_null(r_77);
              {
                y_77 = t;
                {
                  t = SSL_explode_term(not_null(y_77));
                  {
                    a_78 = t;
                    y_76 :
                    if(match_cons(a_78, sym__2))
                      {
                        b_78 = ATgetArgument(a_78, 0);
                        c_78 = ATgetArgument(a_78, 1);
                        {
                          if(((w_77 != NULL) && (w_77 != b_78)))
                            _fail(b_78);
                          else
                            w_77 = b_78;
                          if(((x_77 != NULL) && (x_77 != c_78)))
                            _fail(c_78);
                          else
                            x_77 = c_78;
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
            t = p_16;
            {
              ATerm q_16;
              q_16 = t;
              {
                ATerm k_78 = NULL;
                ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL;
                t = not_null(q_77);
                {
                  k_78 = t;
                  {
                    t = SSL_explode_term(not_null(k_78));
                    {
                      m_78 = t;
                      k_77 :
                      if(match_cons(m_78, sym__2))
                        {
                          n_78 = ATgetArgument(m_78, 0);
                          o_78 = ATgetArgument(m_78, 1);
                          {
                            if(((w_77 != NULL) && (w_77 != n_78)))
                              _fail(n_78);
                            else
                              w_77 = n_78;
                            if(((f_78 != NULL) && (f_78 != o_78)))
                              _fail(o_78);
                            else
                              f_78 = o_78;
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
              t = q_16;
              {
                ATerm q_78 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_78), not_null(x_77));
                {
                  t = zip_1(t, _id);
                  {
                    q_78 = t;
                    if(((p_78 != NULL) && (p_78 != q_78)))
                      _fail(q_78);
                    else
                      p_78 = q_78;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_78), not_null(s_77));
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
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL;
  f_79 = t;
  a_79 :
  if(((ATgetType(f_79) == AT_LIST) && ((ATermList) f_79 != ATempty)))
    {
      g_79 = ATgetFirst((ATermList) f_79);
      j_79 = (ATerm) ATgetNext((ATermList) f_79);
      b_79 :
      if(match_cons(g_79, sym__2))
        {
          h_79 = ATgetArgument(g_79, 0);
          i_79 = ATgetArgument(g_79, 1);
          {
            ATerm o_79 = NULL;
            if(((h_79 != NULL) && (h_79 != i_79)))
              _fail(i_79);
            else
              h_79 = i_79;
            {
              if(((o_79 != NULL) && (o_79 != j_79)))
                _fail(j_79);
              else
                o_79 = j_79;
              t = not_null(o_79);
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
ATerm diff_1 (ATerm t, ATerm v_89 (ATerm))
{
  ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL;
  s_79 = t;
  r_79 :
  if(match_cons(s_79, sym__2))
    {
      t_79 = ATgetArgument(s_79, 0);
      u_79 = ATgetArgument(s_79, 1);
      {
        t = not_null(t_79);
        {
          ATerm y_79 (ATerm t)
          {
            ATerm y_16 = t;
            int z_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(z_16);
              }
            else
              {
                t = y_16;
                {
                  ATerm a_17 = t;
                  int i_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = not_null(u_79);
                        return(t);
                      }
                      t = HdMember_p__2(t, v_89, l_2);
                      t = y_79(t);
                      LocalPopChoice(i_17);
                    }
                  else
                    {
                      t = a_17;
                      t = Cons_2(t, _id, y_79);
                    }
                }
              }
            return(t);
          }
          t = y_79(t);
        }
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
      t = diff_1(t, eq_0);
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm a_80 = NULL;
          a_80 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(a_80));
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          ATerm l_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_2 (ATerm t)
              {
                ATerm y_17 = t;
                int z_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(z_17);
                  }
                else
                  {
                    t = y_17;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, p_2);
              LocalPopChoice(w_17);
            }
          else
            {
              t = l_17;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, m_2, n_2, o_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm c_79 (ATerm), ATerm d_79 (ATerm), ATerm e_79 (ATerm))
{
  ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL;
  n_80 = t;
  l_80 :
  if(match_cons(n_80, sym__5))
    {
      o_80 = ATgetArgument(n_80, 0);
      r_80 = ATgetArgument(n_80, 1);
      s_80 = ATgetArgument(n_80, 2);
      t_80 = ATgetArgument(n_80, 3);
      u_80 = ATgetArgument(n_80, 4);
      m_80 :
      if(((ATgetType(o_80) == AT_LIST) && ((ATermList) o_80 != ATempty)))
        {
          p_80 = ATgetFirst((ATermList) o_80);
          q_80 = (ATerm) ATgetNext((ATermList) o_80);
          {
            ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,q_81 = NULL,s_81 = NULL,u_81 = NULL;
            ATerm a_18;
            a_18 = t;
            {
              ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_80), not_null(s_80));
              {
                t = c_79(t);
                {
                  f_81 = t;
                  h_80 :
                  if(match_cons(f_81, sym__2))
                    {
                      g_81 = ATgetArgument(f_81, 0);
                      h_81 = ATgetArgument(f_81, 1);
                      {
                        ATerm i_81 = NULL;
                        if(((c_81 != NULL) && (c_81 != g_81)))
                          _fail(g_81);
                        else
                          c_81 = g_81;
                        {
                          if(((b_81 != NULL) && (b_81 != h_81)))
                            _fail(h_81);
                          else
                            b_81 = h_81;
                          {
                            t = not_null(c_81);
                            {
                              ATerm p_81 = NULL;
                              t = d_79(t);
                              {
                                i_81 = t;
                                {
                                  if(((d_81 != NULL) && (d_81 != i_81)))
                                    _fail(i_81);
                                  else
                                    d_81 = i_81;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_81), not_null(r_80));
                                    {
                                      t = diff_0(t);
                                      {
                                        p_81 = t;
                                        if(((e_81 != NULL) && (e_81 != p_81)))
                                          _fail(p_81);
                                        else
                                          e_81 = p_81;
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
            t = a_18;
            {
              ATerm b_18;
              b_18 = t;
              {
                ATerm r_81 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_81), not_null(q_80));
                {
                  t = conc_0(t);
                  {
                    r_81 = t;
                    if(((q_81 != NULL) && (q_81 != r_81)))
                      _fail(r_81);
                    else
                      q_81 = r_81;
                  }
                }
              }
              t = b_18;
              {
                ATerm c_18;
                c_18 = t;
                {
                  ATerm t_81 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_81), not_null(r_80));
                  {
                    t = conc_0(t);
                    {
                      t_81 = t;
                      if(((s_81 != NULL) && (s_81 != t_81)))
                        _fail(t_81);
                      else
                        s_81 = t_81;
                    }
                  }
                }
                t = c_18;
                {
                  ATerm v_81 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(p_80), not_null(c_81), not_null(t_80));
                  {
                    t = e_79(t);
                    {
                      v_81 = t;
                      if(((u_81 != NULL) && (u_81 != v_81)))
                        _fail(v_81);
                      else
                        u_81 = v_81;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(q_81), not_null(s_81), not_null(b_81), not_null(u_81), not_null(u_80));
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
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL;
  g_82 = t;
  e_82 :
  if(match_cons(g_82, sym__5))
    {
      h_82 = ATgetArgument(g_82, 0);
      i_82 = ATgetArgument(g_82, 1);
      j_82 = ATgetArgument(g_82, 2);
      k_82 = ATgetArgument(g_82, 3);
      l_82 = ATgetArgument(g_82, 4);
      f_82 :
      if(((ATermList) h_82 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_82), not_null(l_82));
        }
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
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL;
  w_82 = t;
  v_82 :
  if(match_cons(w_82, sym__3))
    {
      x_82 = ATgetArgument(w_82, 0);
      y_82 = ATgetArgument(w_82, 1);
      z_82 = ATgetArgument(w_82, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(x_82), not_null(x_82), not_null(y_82), not_null(z_82), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm r_92 (ATerm), ATerm s_92 (ATerm))
{
  ATerm e_83 (ATerm t)
  {
    ATerm e_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_92(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = e_18;
        {
          t = s_92(t);
          t = e_83(t);
        }
      }
    return(t);
  }
  t = e_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm w_92 (ATerm))
{
  t = u_92(t);
  t = while_not_2(t, v_92, w_92);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm n_79 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, l_79, m_79, n_79);
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, q_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm t_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, t_2);
    }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL;
    h_83 = t;
    g_83 :
    if(match_cons(h_83, sym__3))
      {
        i_83 = ATgetArgument(h_83, 0);
        j_83 = ATgetArgument(h_83, 1);
        k_83 = ATgetArgument(h_83, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(k_83)), not_null(j_83));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, r_2, s_2);
  {
    ATerm n_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(o_18);
      }
    else
      {
        t = n_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_w_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm u_83 = NULL,a_84 = NULL,b_84 = NULL;
  u_83 = t;
  t_83 :
  if(match_cons(u_83, sym__2))
    {
      a_84 = ATgetArgument(u_83, 0);
      b_84 = ATgetArgument(u_83, 1);
      {
        ATerm i_84 = NULL,j_84 = NULL,k_84 = NULL;
        ATerm p_18;
        p_18 = t;
        {
          ATerm l_84 = NULL;
          ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL;
          t = w_78(t);
          {
            l_84 = t;
            {
              if(((i_84 != NULL) && (i_84 != l_84)))
                _fail(l_84);
              else
                i_84 = l_84;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_84), not_null(a_84), not_null(b_84));
                {
                  t = table_push_0(t);
                  {
                    ATerm v_18 = t;
                    int x_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_84), term_y_18);
                        t = table_get_0(t);
                        LocalPopChoice(x_18);
                      }
                    else
                      {
                        t = v_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      m_84 = t;
                      r_83 :
                      if(((ATgetType(m_84) == AT_LIST) && ((ATermList) m_84 != ATempty)))
                        {
                          n_84 = ATgetFirst((ATermList) m_84);
                          o_84 = (ATerm) ATgetNext((ATermList) m_84);
                          {
                            if(((j_84 != NULL) && (j_84 != n_84)))
                              _fail(n_84);
                            else
                              j_84 = n_84;
                            {
                              if(((k_84 != NULL) && (k_84 != o_84)))
                                _fail(o_84);
                              else
                                k_84 = o_84;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_84), term_y_18, (ATerm) ATinsert(CheckATermList(not_null(k_84)), (ATerm) ATinsert(CheckATermList(not_null(j_84)), not_null(a_84))));
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
        t = p_18;
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
  ATerm y_84 = NULL;
  ATerm a_85 = NULL;
  y_84 = t;
  {
    ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_84));
    {
      ATerm u_2 (ATerm t)
      {
        t = term_z_18;
        return(t);
      }
      t = rewrite_1(t, u_2);
      {
        b_85 = t;
        w_84 :
        if(match_cons(b_85, sym_Defined_2))
          {
            c_85 = ATgetArgument(b_85, 0);
            d_85 = ATgetArgument(b_85, 1);
            x_84 :
            if(match_string(c_85, "h_0"))
              {
                if(((a_85 != NULL) && (a_85 != d_85)))
                  _fail(d_85);
                else
                  a_85 = d_85;
              }
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
    t = not_null(a_85);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
  j_85 = t;
  i_85 :
  if(((ATgetType(j_85) == AT_LIST) && ((ATermList) j_85 != ATempty)))
    {
      k_85 = ATgetFirst((ATermList) j_85);
      l_85 = (ATerm) ATgetNext((ATermList) j_85);
      t = not_null(k_85);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
  r_85 = t;
  q_85 :
  if(match_cons(r_85, sym__2))
    {
      s_85 = ATgetArgument(r_85, 0);
      t_85 = ATgetArgument(r_85, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_85), not_null(t_85));
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
ATerm rewrite_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm z_85 = NULL;
  ATerm b_86 = NULL;
  z_85 = t;
  {
    ATerm c_86 = NULL;
    t = term_l_15;
    {
      t = y_78(t);
      {
        c_86 = t;
        if(((b_86 != NULL) && (b_86 != c_86)))
          _fail(c_86);
        else
          b_86 = c_86;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_86), not_null(z_85));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL;
  k_86 = t;
  j_86 :
  if(match_cons(k_86, sym__2))
    {
      l_86 = ATgetArgument(k_86, 0);
      m_86 = ATgetArgument(k_86, 1);
      {
        ATerm p_86 = NULL,q_86 = NULL;
        ATerm r_86 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(m_86), not_null(l_86));
        {
          ATerm v_2 (ATerm t)
          {
            t = term_a_19;
            return(t);
          }
          t = rewrite_1(t, v_2);
          {
            r_86 = t;
            h_86 :
            if(match_cons(r_86, sym_Defined_3))
              {
                s_86 = ATgetArgument(r_86, 0);
                t_86 = ATgetArgument(r_86, 1);
                u_86 = ATgetArgument(r_86, 2);
                i_86 :
                if(match_string(s_86, "g_0"))
                  {
                    if(((p_86 != NULL) && (p_86 != t_86)))
                      _fail(t_86);
                    else
                      p_86 = t_86;
                    if(((q_86 != NULL) && (q_86 != u_86)))
                      _fail(u_86);
                    else
                      q_86 = u_86;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(q_86)), not_null(p_86));
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
  ATerm w_2 (ATerm t)
  {
    ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL;
    d_87 = t;
    c_87 :
    if(match_cons(d_87, sym_SDef_3))
      {
        e_87 = ATgetArgument(d_87, 0);
        f_87 = ATgetArgument(d_87, 1);
        g_87 = ATgetArgument(d_87, 2);
        {
          ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL;
          ATerm b_19;
          b_19 = t;
          {
            ATerm o_87 = NULL;
            t = not_null(f_87);
            {
              ATerm p_87 = NULL;
              t = length_0(t);
              {
                o_87 = t;
                {
                  if(((m_87 != NULL) && (m_87 != o_87)))
                    _fail(o_87);
                  else
                    m_87 = o_87;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_87), not_null(m_87));
                    {
                      ATerm q_87 = NULL,s_87 = NULL;
                      ATerm e_19 = t;
                      int f_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(f_19);
                        }
                      else
                        {
                          t = e_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        p_87 = t;
                        {
                          if(((l_87 != NULL) && (l_87 != p_87)))
                            _fail(p_87);
                          else
                            l_87 = p_87;
                          {
                            ATerm r_87 = NULL;
                            t = not_null(e_87);
                            {
                              ATerm g_19 = t;
                              int h_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(h_19);
                                }
                              else
                                {
                                  t = g_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                r_87 = t;
                                if(((q_87 != NULL) && (q_87 != r_87)))
                                  _fail(r_87);
                                else
                                  q_87 = r_87;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(m_87)), not_null(q_87));
                              {
                                t = union_0(t);
                                {
                                  s_87 = t;
                                  {
                                    if(((n_87 != NULL) && (n_87 != s_87)))
                                      _fail(s_87);
                                    else
                                      n_87 = s_87;
                                    {
                                      ATerm m_19;
                                      m_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(m_87), not_null(e_87)), (ATerm) ATmakeAppl(sym_Defined_3, term_n_19, not_null(d_87), not_null(l_87)));
                                        {
                                          ATerm x_2 (ATerm t)
                                          {
                                            t = term_a_19;
                                            return(t);
                                          }
                                          t = assert_1(t, x_2);
                                        }
                                      }
                                      t = m_19;
                                      {
                                        ATerm o_19;
                                        o_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(e_87)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_19, not_null(n_87)));
                                          {
                                            ATerm y_2 (ATerm t)
                                            {
                                              t = term_z_18;
                                              return(t);
                                            }
                                            t = assert_1(t, y_2);
                                          }
                                        }
                                        t = o_19;
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
          t = b_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, w_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    t = term_q_19;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_w_6;
    return(t);
  }
  t = foldr_3(t, z_2, add_0, a_3);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL;
  a_88 = t;
  z_87 :
  if(match_cons(a_88, sym__2))
    {
      b_88 = ATgetArgument(a_88, 0);
      c_88 = ATgetArgument(a_88, 1);
      if(((b_88 != NULL) && (b_88 != c_88)))
        _fail(c_88);
      else
        b_88 = c_88;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm q_89 (ATerm), ATerm r_89 (ATerm))
{
  ATerm i_88 = NULL,j_88 = NULL,k_88 = NULL;
  i_88 = t;
  h_88 :
  if(((ATgetType(i_88) == AT_LIST) && ((ATermList) i_88 != ATempty)))
    {
      j_88 = ATgetFirst((ATermList) i_88);
      k_88 = (ATerm) ATgetNext((ATermList) i_88);
      {
        t = r_89(t);
        {
          ATerm d_3 (ATerm t)
          {
            ATerm n_88 = NULL;
            n_88 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_88), not_null(n_88));
              t = q_89(t);
            }
            return(t);
          }
          t = fetch_1(t, d_3);
        }
        t = not_null(k_88);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm s_89 (ATerm))
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL;
  y_88 = t;
  x_88 :
  if(match_cons(y_88, sym__2))
    {
      z_88 = ATgetArgument(y_88, 0);
      a_89 = ATgetArgument(y_88, 1);
      {
        t = not_null(z_88);
        {
          ATerm g_89 (ATerm t)
          {
            ATerm r_19 = t;
            int s_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(a_89);
                LocalPopChoice(s_19);
              }
            else
              {
                t = r_19;
                {
                  ATerm t_19 = t;
                  int y_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = not_null(a_89);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_89, e_3);
                      t = g_89(t);
                      LocalPopChoice(y_19);
                    }
                  else
                    {
                      t = t_19;
                      t = Cons_2(t, _id, g_89);
                    }
                }
              }
            return(t);
          }
          t = g_89(t);
        }
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
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t_88 (ATerm))
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_88(t);
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      {
        ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
        l_89 = t;
        k_89 :
        if(((ATgetType(l_89) == AT_LIST) && ((ATermList) l_89 != ATempty)))
          {
            m_89 = ATgetFirst((ATermList) l_89);
            n_89 = (ATerm) ATgetNext((ATermList) l_89);
            {
              ATerm u_89 = NULL,y_89 = NULL;
              ATerm e_20;
              e_20 = t;
              {
                ATerm x_89 = NULL;
                t = not_null(m_89);
                {
                  t = t_88(t);
                  {
                    x_89 = t;
                    if(((u_89 != NULL) && (u_89 != x_89)))
                      _fail(x_89);
                    else
                      u_89 = x_89;
                  }
                }
              }
              t = e_20;
              {
                ATerm z_89 = NULL;
                t = not_null(n_89);
                {
                  t = foldr_3(t, r_88, s_88, t_88);
                  {
                    z_89 = t;
                    if(((y_89 != NULL) && (y_89 != z_89)))
                      _fail(z_89);
                    else
                      y_89 = z_89;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_89), not_null(y_89));
                  t = s_88(t);
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
  ATerm f_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm g_3 (ATerm t)
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
          ATerm r_90 = NULL;
          ATerm s_90 = NULL;
          t = not_null(n_90);
          {
            t = length_0(t);
            {
              s_90 = t;
              if(((r_90 != NULL) && (r_90 != s_90)))
                _fail(s_90);
              else
                r_90 = s_90;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(m_90), not_null(r_90)));
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = foldr_3(t, f_3, union_0, g_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm x_90 = NULL,z_90 = NULL;
  ATerm g_20;
  g_20 = t;
  {
    ATerm y_90 = NULL;
    t = definition_names_0(t);
    {
      y_90 = t;
      if(((x_90 != NULL) && (x_90 != y_90)))
        _fail(y_90);
      else
        x_90 = y_90;
    }
  }
  t = g_20;
  {
    ATerm a_91 = NULL;
    t = sort_defs_0(t);
    {
      a_91 = t;
      if(((z_90 != NULL) && (z_90 != a_91)))
        _fail(a_91);
      else
        z_90 = a_91;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(x_90), not_null(z_90), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm z_75 (ATerm))
{
  ATerm i_91 = NULL,j_91 = NULL;
  i_91 = t;
  h_91 :
  if(match_cons(i_91, sym_Strategies_1))
    {
      j_91 = ATgetArgument(i_91, 0);
      {
        ATerm m_91 = NULL,o_91 = NULL;
        ATerm n_91 = NULL;
        t = SSLgetAnnotations(not_null(i_91));
        {
          n_91 = t;
          if(((m_91 != NULL) && (m_91 != n_91)))
            _fail(n_91);
          else
            m_91 = n_91;
        }
        {
          t = not_null(j_91);
          {
            ATerm q_91 = NULL;
            t = z_75(t);
            {
              o_91 = t;
              {
                ATerm r_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(o_91)), not_null(m_91));
                {
                  r_91 = t;
                  if(((q_91 != NULL) && (q_91 != r_91)))
                    _fail(r_91);
                  else
                    q_91 = r_91;
                }
                t = not_null(q_91);
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
ATerm Cons_2 (ATerm t, ATerm i_78 (ATerm), ATerm j_78 (ATerm))
{
  ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL;
  g_92 = t;
  f_92 :
  if(((ATgetType(g_92) == AT_LIST) && ((ATermList) g_92 != ATempty)))
    {
      h_92 = ATgetFirst((ATermList) g_92);
      i_92 = (ATerm) ATgetNext((ATermList) g_92);
      {
        ATerm m_92 = NULL,o_92 = NULL;
        ATerm n_92 = NULL;
        t = SSLgetAnnotations(not_null(g_92));
        {
          n_92 = t;
          if(((m_92 != NULL) && (m_92 != n_92)))
            _fail(n_92);
          else
            m_92 = n_92;
        }
        {
          t = not_null(h_92);
          {
            ATerm q_92 = NULL;
            t = i_78(t);
            {
              o_92 = t;
              {
                t = not_null(i_92);
                {
                  ATerm y_92 = NULL;
                  t = j_78(t);
                  {
                    q_92 = t;
                    {
                      ATerm z_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_92)), not_null(o_92)), not_null(m_92));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm b_76 (ATerm))
{
  ATerm k_93 = NULL,l_93 = NULL;
  k_93 = t;
  j_93 :
  if(match_cons(k_93, sym_Specification_1))
    {
      l_93 = ATgetArgument(k_93, 0);
      {
        ATerm o_93 = NULL,q_93 = NULL;
        ATerm p_93 = NULL;
        t = SSLgetAnnotations(not_null(k_93));
        {
          p_93 = t;
          if(((o_93 != NULL) && (o_93 != p_93)))
            _fail(p_93);
          else
            o_93 = p_93;
        }
        {
          t = not_null(l_93);
          {
            ATerm s_93 = NULL;
            t = b_76(t);
            {
              q_93 = t;
              {
                ATerm t_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(q_93)), not_null(o_93));
                {
                  t_93 = t;
                  if(((s_93 != NULL) && (s_93 != t_93)))
                    _fail(t_93);
                  else
                    s_93 = t_93;
                }
                t = not_null(s_93);
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
ATerm _2 (ATerm t, ATerm d_67 (ATerm), ATerm e_67 (ATerm))
{
  ATerm e_94 = NULL,f_94 = NULL,g_94 = NULL;
  e_94 = t;
  d_94 :
  if(match_cons(e_94, sym__2))
    {
      f_94 = ATgetArgument(e_94, 0);
      g_94 = ATgetArgument(e_94, 1);
      {
        ATerm k_94 = NULL,m_94 = NULL;
        ATerm l_94 = NULL;
        t = SSLgetAnnotations(not_null(e_94));
        {
          l_94 = t;
          if(((k_94 != NULL) && (k_94 != l_94)))
            _fail(l_94);
          else
            k_94 = l_94;
        }
        {
          t = not_null(f_94);
          {
            ATerm o_94 = NULL;
            t = d_67(t);
            {
              m_94 = t;
              {
                t = not_null(g_94);
                {
                  ATerm q_94 = NULL;
                  t = e_67(t);
                  {
                    o_94 = t;
                    {
                      ATerm r_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_94), not_null(o_94)), not_null(k_94));
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
ATerm default_usage_0 (ATerm t)
{
  ATerm e_95 = NULL;
  ATerm j_20;
  j_20 = t;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm f_95 = NULL,g_95 = NULL;
      f_95 = t;
      d_95 :
      if(match_cons(f_95, sym_Program_1))
        {
          g_95 = ATgetArgument(f_95, 0);
          if(((e_95 != NULL) && (e_95 != g_95)))
            _fail(g_95);
          else
            e_95 = g_95;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, h_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_20), not_null(e_95)), term_k_20));
      {
        t = printnl_0(t);
        {
          t = term_w_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL;
  k_95 = t;
  j_95 :
  if(match_cons(k_95, sym__2))
    {
      l_95 = ATgetArgument(k_95, 0);
      m_95 = ATgetArgument(k_95, 1);
      {
        ATerm m_20;
        m_20 = t;
        t = SSL_printnl(not_null(l_95), not_null(m_95));
        t = m_20;
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
  ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL;
  s_95 = t;
  r_95 :
  if(match_cons(s_95, sym__2))
    {
      t_95 = ATgetArgument(s_95, 0);
      u_95 = ATgetArgument(s_95, 1);
      {
        t = not_null(t_95);
        {
          ATerm i_3 (ATerm t)
          {
            t = not_null(u_95);
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
ATerm debug_1 (ATerm t, ATerm h_85 (ATerm))
{
  ATerm n_20;
  n_20 = t;
  {
    ATerm a_96 = NULL,c_96 = NULL;
    ATerm o_20;
    o_20 = t;
    {
      ATerm b_96 = NULL;
      t = h_85(t);
      {
        b_96 = t;
        if(((a_96 != NULL) && (a_96 != b_96)))
          _fail(b_96);
        else
          a_96 = b_96;
      }
    }
    t = o_20;
    {
      ATerm d_96 = NULL;
      d_96 = t;
      if(((c_96 != NULL) && (c_96 != d_96)))
        _fail(d_96);
      else
        c_96 = d_96;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_96)), not_null(a_96)));
        t = printnl_0(t);
      }
    }
  }
  t = n_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_96 = NULL;
  h_96 = t;
  t = SSL_is_string(not_null(h_96));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_3);
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            {
              ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL;
              q_96 = t;
              p_96 :
              if(match_cons(q_96, sym_Path_1))
                {
                  r_96 = ATgetArgument(q_96, 0);
                  t = not_null(r_96);
                }
              else
                {
                  if(match_cons(q_96, sym_Var_1))
                    {
                      r_96 = ATgetArgument(q_96, 0);
                      {
                        t = not_null(r_96);
                        {
                          ATerm u_20 = t;
                          int w_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_20);
                            }
                          else
                            {
                              t = u_20;
                              {
                                ATerm k_3 (ATerm t)
                                {
                                  t = term_y_20;
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
                      if(match_cons(q_96, sym_Prefix_2))
                        {
                          r_96 = ATgetArgument(q_96, 0);
                          s_96 = ATgetArgument(q_96, 1);
                          {
                            ATerm x_96 = NULL,a_97 = NULL;
                            ATerm z_20;
                            z_20 = t;
                            {
                              ATerm y_96 = NULL;
                              t = not_null(r_96);
                              {
                                t = eval_config_0(t);
                                {
                                  y_96 = t;
                                  if(((x_96 != NULL) && (x_96 != y_96)))
                                    _fail(y_96);
                                  else
                                    x_96 = y_96;
                                }
                              }
                            }
                            t = z_20;
                            {
                              ATerm b_97 = NULL;
                              t = not_null(s_96);
                              {
                                t = eval_config_0(t);
                                {
                                  b_97 = t;
                                  if(((a_97 != NULL) && (a_97 != b_97)))
                                    _fail(b_97);
                                  else
                                    a_97 = b_97;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_96), not_null(a_97));
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
  ATerm q_97 = NULL;
  q_97 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_21, not_null(q_97));
    {
      t = table_get_0(t);
      {
        ATerm l_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_21;
            j_21 = t;
            {
              ATerm t_97 = NULL;
              ATerm u_97 = NULL;
              u_97 = t;
              if(((t_97 != NULL) && (t_97 != u_97)))
                _fail(u_97);
              else
                t_97 = u_97;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_21, not_null(q_97), not_null(t_97));
                t = table_put_0(t);
              }
            }
            t = j_21;
          }
          return(t);
        }
        t = try_1(t, l_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_82 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm k_21;
    k_21 = t;
    {
      ATerm y_97 = NULL;
      ATerm z_97 = NULL;
      t = term_l_21;
      {
        t = get_config_0(t);
        {
          z_97 = t;
          if(((y_97 != NULL) && (y_97 != z_97)))
            _fail(z_97);
          else
            y_97 = z_97;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_97), term_t_21);
        t = geq_0(t);
      }
    }
    t = k_21;
    t = r_82(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATempty, term_u_21));
  {
    t = printnl_0(t);
    {
      t = term_w_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_98 = NULL;
  c_98 = t;
  t = SSL_TicksToSeconds(not_null(c_98));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL;
  h_98 = t;
  g_98 :
  if(match_cons(h_98, sym__2))
    {
      i_98 = ATgetArgument(h_98, 0);
      j_98 = ATgetArgument(h_98, 1);
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_98), not_null(j_98));
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            t = SSL_addr(not_null(i_98), not_null(j_98));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_88 (ATerm), ATerm q_88 (ATerm))
{
  ATerm g_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_88(t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = g_22;
      {
        ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL;
        q_98 = t;
        p_98 :
        if(((ATgetType(q_98) == AT_LIST) && ((ATermList) q_98 != ATempty)))
          {
            r_98 = ATgetFirst((ATermList) q_98);
            s_98 = (ATerm) ATgetNext((ATermList) q_98);
            {
              ATerm x_98 = NULL;
              ATerm y_98 = NULL;
              t = not_null(s_98);
              {
                t = foldr_2(t, p_88, q_88);
                {
                  y_98 = t;
                  if(((x_98 != NULL) && (x_98 != y_98)))
                    _fail(y_98);
                  else
                    x_98 = y_98;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_98), not_null(x_98));
                t = q_88(t);
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
ATerm crush_2 (ATerm t, ATerm b_90 (ATerm), ATerm c_90 (ATerm))
{
  ATerm f_99 = NULL;
  ATerm h_99 = NULL;
  f_99 = t;
  {
    ATerm i_99 = NULL;
    ATerm k_99 = NULL,o_99 = NULL,p_99 = NULL;
    t = not_null(f_99);
    {
      i_99 = t;
      {
        t = SSL_explode_term(not_null(i_99));
        {
          k_99 = t;
          e_99 :
          if(match_cons(k_99, sym__2))
            {
              o_99 = ATgetArgument(k_99, 0);
              p_99 = ATgetArgument(k_99, 1);
              if(((h_99 != NULL) && (h_99 != p_99)))
                _fail(p_99);
              else
                h_99 = p_99;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_99);
      t = foldr_2(t, b_90, c_90);
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
      t = term_q_19;
      return(t);
    }
    t = crush_2(t, n_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_99 = NULL,w_99 = NULL,x_99 = NULL;
  v_99 = t;
  u_99 :
  if(match_cons(v_99, sym__2))
    {
      w_99 = ATgetArgument(v_99, 0);
      x_99 = ATgetArgument(v_99, 1);
      {
        ATerm m_22;
        m_22 = t;
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_99), not_null(x_99));
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              t = SSL_gtr(not_null(w_99), not_null(x_99));
            }
        }
        t = m_22;
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
  ATerm e_100 = NULL;
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_100 = NULL,g_100 = NULL,h_100 = NULL;
      f_100 = t;
      d_100 :
      if(match_cons(f_100, sym__2))
        {
          g_100 = ATgetArgument(f_100, 0);
          h_100 = ATgetArgument(f_100, 1);
          {
            if(((e_100 != NULL) && (e_100 != g_100)))
              _fail(g_100);
            else
              e_100 = g_100;
            if(((e_100 != NULL) && (e_100 != h_100)))
              _fail(h_100);
            else
              e_100 = h_100;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_82 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm r_22;
    r_22 = t;
    {
      ATerm k_100 = NULL;
      ATerm l_100 = NULL;
      t = term_l_21;
      {
        t = get_config_0(t);
        {
          l_100 = t;
          if(((k_100 != NULL) && (k_100 != l_100)))
            _fail(l_100);
          else
            k_100 = l_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_100), term_w_6);
        t = geq_0(t);
      }
    }
    t = r_22;
    t = q_82(t);
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm p_100 = NULL,r_100 = NULL;
    ATerm s_22;
    s_22 = t;
    {
      ATerm q_100 = NULL;
      t = run_time_0(t);
      {
        q_100 = t;
        if(((p_100 != NULL) && (p_100 != q_100)))
          _fail(q_100);
        else
          p_100 = q_100;
      }
    }
    t = s_22;
    {
      ATerm s_100 = NULL;
      t = term_t_22;
      {
        t = get_config_0(t);
        {
          s_100 = t;
          if(((r_100 != NULL) && (r_100 != s_100)))
            _fail(s_100);
          else
            r_100 = s_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_23), not_null(p_100)), term_u_22), not_null(r_100)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, p_3);
  {
    t = term_q_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL;
  x_100 = t;
  w_100 :
  if(match_cons(x_100, sym__2))
    {
      y_100 = ATgetArgument(x_100, 0);
      z_100 = ATgetArgument(x_100, 1);
      t = SSL_WriteToTextFile(not_null(y_100), not_null(z_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL;
  f_101 = t;
  e_101 :
  if(match_cons(f_101, sym__2))
    {
      g_101 = ATgetArgument(f_101, 0);
      h_101 = ATgetArgument(f_101, 1);
      t = SSL_WriteToBinaryFile(not_null(g_101), not_null(h_101));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm p_101 = NULL;
  ATerm b_23;
  b_23 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm c_23 = t;
      int d_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm q_101 = NULL,r_101 = NULL;
            q_101 = t;
            m_101 :
            if(match_cons(q_101, sym_Output_1))
              {
                r_101 = ATgetArgument(q_101, 0);
                if(((p_101 != NULL) && (p_101 != r_101)))
                  _fail(r_101);
                else
                  p_101 = r_101;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, r_3);
          LocalPopChoice(d_23);
        }
      else
        {
          t = c_23;
          {
            ATerm u_101 = NULL;
            t = term_l_23;
            {
              u_101 = t;
              if(((p_101 != NULL) && (p_101 != u_101)))
                _fail(u_101);
              else
                p_101 = u_101;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_3, _id);
  }
  t = b_23;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(p_101);
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
              ATerm v_101 = NULL;
              v_101 = t;
              o_101 :
              if(!(match_cons(v_101, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm r_84 (ATerm))
{
  ATerm b_102 = NULL,d_102 = NULL,e_102 = NULL,f_102 = NULL;
  ATerm q_23;
  q_23 = t;
  t = dtime_0(t);
  t = q_23;
  {
    t = r_84(t);
    {
      ATerm r_23;
      r_23 = t;
      {
        ATerm c_102 = NULL;
        t = dtime_0(t);
        {
          c_102 = t;
          if(((b_102 != NULL) && (b_102 != c_102)))
            _fail(c_102);
          else
            b_102 = c_102;
        }
      }
      t = r_23;
      {
        d_102 = t;
        a_102 :
        if(match_cons(d_102, sym__2))
          {
            e_102 = ATgetArgument(d_102, 0);
            f_102 = ATgetArgument(d_102, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_102)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_102))), not_null(f_102));
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
  ATerm n_102 = NULL;
  n_102 = t;
  t = SSL_ReadFromFile(not_null(n_102));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_98 (ATerm), ATerm w_98 (ATerm))
{
  ATerm s_102 = NULL,u_102 = NULL;
  ATerm s_23;
  s_23 = t;
  {
    ATerm t_102 = NULL;
    t = v_98(t);
    {
      t_102 = t;
      if(((s_102 != NULL) && (s_102 != t_102)))
        _fail(t_102);
      else
        s_102 = t_102;
    }
  }
  t = s_23;
  {
    ATerm v_102 = NULL;
    t = w_98(t);
    {
      v_102 = t;
      if(((u_102 != NULL) && (u_102 != v_102)))
        _fail(v_102);
      else
        u_102 = v_102;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_102), not_null(u_102));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_103 = NULL;
  ATerm t_23;
  t_23 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm c_103 = NULL,d_103 = NULL;
          c_103 = t;
          z_102 :
          if(match_cons(c_103, sym_Input_1))
            {
              d_103 = ATgetArgument(c_103, 0);
              if(((b_103 != NULL) && (b_103 != d_103)))
                _fail(d_103);
              else
                b_103 = d_103;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_3);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        {
          ATerm e_103 = NULL;
          t = term_w_23;
          {
            e_103 = t;
            if(((b_103 != NULL) && (b_103 != e_103)))
              _fail(e_103);
            else
              b_103 = e_103;
          }
        }
      }
  }
  t = t_23;
  {
    ATerm x_3 (ATerm t)
    {
      t = not_null(b_103);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_103 = NULL;
  q_103 = t;
  p_103 :
  if(match_cons(q_103, sym_Version_0))
    {
      ATerm s_103 = NULL,u_103 = NULL;
      ATerm x_23;
      x_23 = t;
      {
        ATerm t_103 = NULL;
        t = SSLgetAnnotations(not_null(q_103));
        {
          t_103 = t;
          if(((s_103 != NULL) && (s_103 != t_103)))
            _fail(t_103);
          else
            s_103 = t_103;
        }
      }
      t = x_23;
      {
        ATerm v_103 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_103));
        {
          v_103 = t;
          if(((u_103 != NULL) && (u_103 != v_103)))
            _fail(v_103);
          else
            u_103 = v_103;
        }
        t = not_null(u_103);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_84 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        {
          ATerm a_24 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(c_24);
            }
          else
            {
              t = a_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_3);
  t = p_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_104 = NULL;
  a_104 = t;
  t = SSL_table_create(not_null(a_104));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_104 = NULL;
  h_104 = t;
  {
    ATerm d_24;
    d_24 = t;
    {
      t = term_e_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_24, term_f_24, not_null(h_104));
          t = table_put_0(t);
        }
      }
    }
    t = d_24;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_104 = NULL;
  l_104 = t;
  t = SSL_string_to_int(not_null(l_104));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL,x_104 = NULL;
  t_104 = t;
  r_104 :
  if(match_string(t_104, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(t_104) == AT_LIST) && ((ATermList) t_104 != ATempty)))
        {
          u_104 = ATgetFirst((ATermList) t_104);
          v_104 = (ATerm) ATgetNext((ATermList) t_104);
          s_104 :
          if(((ATgetType(v_104) == AT_LIST) && ((ATermList) v_104 != ATempty)))
            {
              w_104 = ATgetFirst((ATermList) v_104);
              x_104 = (ATerm) ATgetNext((ATermList) v_104);
              {
                ATerm d_105 = NULL;
                ATerm h_24;
                h_24 = t;
                {
                  t = not_null(u_104);
                  t = l_0(t);
                }
                t = h_24;
                {
                  ATerm e_105 = NULL;
                  t = not_null(w_104);
                  {
                    t = m_0(t);
                    {
                      e_105 = t;
                      if(((d_105 != NULL) && (d_105 != e_105)))
                        _fail(e_105);
                      else
                        d_105 = e_105;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_104)), not_null(d_105));
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
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_3 (ATerm t)
      {
        ATerm b_106 = NULL;
        b_106 = t;
        i_105 :
        if(!(match_string(b_106, "-i")))
          {
            if(!(match_string(b_106, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        ATerm e_106 = NULL;
        ATerm w_24;
        w_24 = t;
        {
          ATerm c_106 = NULL;
          ATerm d_106 = NULL;
          d_106 = t;
          if(((c_106 != NULL) && (c_106 != d_106)))
            _fail(d_106);
          else
            c_106 = d_106;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_g_25, not_null(c_106));
            t = set_config_0(t);
          }
        }
        t = w_24;
        {
          ATerm f_106 = NULL;
          f_106 = t;
          if(((e_106 != NULL) && (e_106 != f_106)))
            _fail(f_106);
          else
            e_106 = f_106;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_106));
        }
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = term_s_25;
        return(t);
      }
      t = ArgOption_3(t, z_3, a_4, b_4);
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_4 (ATerm t)
            {
              ATerm g_106 = NULL;
              g_106 = t;
              n_105 :
              if(!(match_string(g_106, "-o")))
                {
                  if(!(match_string(g_106, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm d_4 (ATerm t)
            {
              ATerm j_106 = NULL;
              ATerm v_25;
              v_25 = t;
              {
                ATerm h_106 = NULL;
                ATerm i_106 = NULL;
                i_106 = t;
                if(((h_106 != NULL) && (h_106 != i_106)))
                  _fail(i_106);
                else
                  h_106 = i_106;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_25, not_null(h_106));
                  t = set_config_0(t);
                }
              }
              t = v_25;
              {
                ATerm k_106 = NULL;
                k_106 = t;
                if(((j_106 != NULL) && (j_106 != k_106)))
                  _fail(k_106);
                else
                  j_106 = k_106;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_106));
              }
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              t = term_x_25;
              return(t);
            }
            t = ArgOption_3(t, c_4, d_4, g_4);
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            {
              ATerm y_25 = t;
              int z_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_4 (ATerm t)
                  {
                    ATerm l_106 = NULL;
                    l_106 = t;
                    s_105 :
                    if(!(match_string(l_106, "-S")))
                      {
                        if(!(match_string(l_106, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm i_4 (ATerm t)
                  {
                    t = term_a_26;
                    t = set_config_0(t);
                    t = term_b_26;
                    return(t);
                  }
                  ATerm j_4 (ATerm t)
                  {
                    t = term_c_26;
                    return(t);
                  }
                  t = Option_3(t, h_4, i_4, j_4);
                  LocalPopChoice(z_25);
                }
              else
                {
                  t = y_25;
                  {
                    ATerm d_26 = t;
                    int e_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_4 (ATerm t)
                        {
                          ATerm m_106 = NULL;
                          m_106 = t;
                          t_105 :
                          if(!(match_string(m_106, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm l_4 (ATerm t)
                        {
                          ATerm p_106 = NULL;
                          ATerm f_26;
                          f_26 = t;
                          {
                            ATerm n_106 = NULL;
                            ATerm o_106 = NULL;
                            t = string_to_int_0(t);
                            {
                              o_106 = t;
                              if(((n_106 != NULL) && (n_106 != o_106)))
                                _fail(o_106);
                              else
                                n_106 = o_106;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_l_21, not_null(n_106));
                              t = set_config_0(t);
                            }
                          }
                          t = f_26;
                          {
                            ATerm q_106 = NULL;
                            q_106 = t;
                            if(((p_106 != NULL) && (p_106 != q_106)))
                              _fail(q_106);
                            else
                              p_106 = q_106;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_106));
                          }
                          return(t);
                        }
                        ATerm m_4 (ATerm t)
                        {
                          t = term_g_26;
                          return(t);
                        }
                        t = ArgOption_3(t, k_4, l_4, m_4);
                        LocalPopChoice(e_26);
                      }
                    else
                      {
                        t = d_26;
                        {
                          ATerm h_26 = t;
                          int i_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_4 (ATerm t)
                              {
                                ATerm r_106 = NULL;
                                r_106 = t;
                                w_105 :
                                if(!(match_string(r_106, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm o_4 (ATerm t)
                              {
                                ATerm j_26;
                                j_26 = t;
                                {
                                  ATerm s_106 = NULL;
                                  ATerm u_106 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    u_106 = t;
                                    if(((s_106 != NULL) && (s_106 != u_106)))
                                      _fail(u_106);
                                    else
                                      s_106 = u_106;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_k_26, not_null(s_106));
                                    t = set_config_0(t);
                                  }
                                }
                                t = j_26;
                                return(t);
                              }
                              ATerm p_4 (ATerm t)
                              {
                                t = term_l_26;
                                return(t);
                              }
                              t = ArgOption_3(t, n_4, o_4, p_4);
                              LocalPopChoice(i_26);
                            }
                          else
                            {
                              t = h_26;
                              {
                                ATerm m_26 = t;
                                int n_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_4 (ATerm t)
                                    {
                                      ATerm v_106 = NULL;
                                      v_106 = t;
                                      y_105 :
                                      if(!(match_string(v_106, "-v")))
                                        {
                                          if(!(match_string(v_106, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm r_4 (ATerm t)
                                    {
                                      t = term_p_26;
                                      t = set_config_0(t);
                                      t = term_q_26;
                                      return(t);
                                    }
                                    ATerm s_4 (ATerm t)
                                    {
                                      t = term_r_26;
                                      return(t);
                                    }
                                    t = Option_3(t, q_4, r_4, s_4);
                                    LocalPopChoice(n_26);
                                  }
                                else
                                  {
                                    t = m_26;
                                    {
                                      ATerm s_26 = t;
                                      int t_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_4 (ATerm t)
                                          {
                                            ATerm w_106 = NULL;
                                            w_106 = t;
                                            z_105 :
                                            if(!(match_string(w_106, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm u_4 (ATerm t)
                                          {
                                            t = term_w_26;
                                            t = set_config_0(t);
                                            t = term_x_26;
                                            return(t);
                                          }
                                          ATerm v_4 (ATerm t)
                                          {
                                            t = term_z_26;
                                            return(t);
                                          }
                                          t = Option_3(t, t_4, u_4, v_4);
                                          LocalPopChoice(t_26);
                                        }
                                      else
                                        {
                                          t = s_26;
                                          {
                                            ATerm w_4 (ATerm t)
                                            {
                                              ATerm x_106 = NULL;
                                              x_106 = t;
                                              a_106 :
                                              if(!(match_string(x_106, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm x_4 (ATerm t)
                                            {
                                              t = term_b_27;
                                              t = set_config_0(t);
                                              t = term_c_27;
                                              return(t);
                                            }
                                            ATerm y_4 (ATerm t)
                                            {
                                              t = term_d_27;
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
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm i_107 = NULL;
  i_107 = t;
  t = SSL_table_destroy(not_null(i_107));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_107 = NULL;
  m_107 = t;
  t = SSL_exit(not_null(m_107));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm q_107 = NULL;
  q_107 = t;
  t = SSL_implode_string(not_null(q_107));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_105 (ATerm))
{
  ATerm t_107 (ATerm t)
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_107);
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        {
          t = Nil_0(t);
          t = q_105(t);
        }
      }
    return(t);
  }
  t = t_107(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        ATerm w_107 = NULL,x_107 = NULL,y_107 = NULL;
        w_107 = t;
        v_107 :
        if(((ATgetType(w_107) == AT_LIST) && ((ATermList) w_107 != ATempty)))
          {
            x_107 = ATgetFirst((ATermList) w_107);
            y_107 = (ATerm) ATgetNext((ATermList) w_107);
            {
              t = not_null(x_107);
              {
                ATerm z_4 (ATerm t)
                {
                  t = not_null(y_107);
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
  ATerm e_108 = NULL;
  e_108 = t;
  t = SSL_explode_string(not_null(e_108));
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
ATerm long_description_1 (ATerm t, ATerm k_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_105 (ATerm))
{
  ATerm h_108 (ATerm t)
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = Cons_2(t, b_105, h_108);
      }
    return(t);
  }
  t = h_108(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm o_108 = NULL,p_108 = NULL,q_108 = NULL;
  q_108 = t;
  n_108 :
  if(((ATgetType(q_108) == AT_LIST) && ((ATermList) q_108 != ATempty)))
    {
      o_108 = ATgetFirst((ATermList) q_108);
      p_108 = (ATerm) ATgetNext((ATermList) q_108);
      {
        ATerm t_108 = NULL;
        t = not_null(p_108);
        {
          ATerm k_27;
          k_27 = t;
          {
            ATerm u_108 = NULL,w_108 = NULL,y_108 = NULL;
            ATerm l_27;
            l_27 = t;
            {
              ATerm v_108 = NULL;
              t = k_0(t);
              {
                v_108 = t;
                if(((u_108 != NULL) && (u_108 != v_108)))
                  _fail(v_108);
                else
                  u_108 = v_108;
              }
            }
            t = l_27;
            {
              ATerm x_108 = NULL;
              t = not_null(o_108);
              {
                t = j_0(t);
                {
                  x_108 = t;
                  if(((w_108 != NULL) && (w_108 != x_108)))
                    _fail(x_108);
                  else
                    w_108 = x_108;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_108)), not_null(w_108));
                {
                  y_108 = t;
                  if(((t_108 != NULL) && (t_108 != y_108)))
                    _fail(y_108);
                  else
                    t_108 = y_108;
                }
              }
            }
          }
          t = k_27;
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(t_108);
              return(t);
            }
            t = reverse_acc_2(t, j_0, a_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) q_108 == ATempty))
        {
          {
            t = term_l_15;
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
ATerm short_description_1 (ATerm t, ATerm j_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_72 (ATerm))
{
  ATerm j_109 = NULL,k_109 = NULL;
  j_109 = t;
  i_109 :
  if(match_cons(j_109, sym_Program_1))
    {
      k_109 = ATgetArgument(j_109, 0);
      {
        ATerm n_109 = NULL,p_109 = NULL;
        ATerm o_109 = NULL;
        t = SSLgetAnnotations(not_null(j_109));
        {
          o_109 = t;
          if(((n_109 != NULL) && (n_109 != o_109)))
            _fail(o_109);
          else
            n_109 = o_109;
        }
        {
          t = not_null(k_109);
          {
            ATerm r_109 = NULL;
            t = x_72(t);
            {
              p_109 = t;
              {
                ATerm s_109 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_109)), not_null(n_109));
                {
                  s_109 = t;
                  if(((r_109 != NULL) && (r_109 != s_109)))
                    _fail(s_109);
                  else
                    r_109 = s_109;
                }
                t = not_null(r_109);
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
  ATerm b_110 = NULL;
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      ATerm c_110 = NULL;
      c_110 = t;
      if(((b_110 != NULL) && (b_110 != c_110)))
        _fail(c_110);
      else
        b_110 = c_110;
      return(t);
    }
    t = Program_1(t, d_5);
    return(t);
  }
  t = option_defined_1(t, c_5);
  {
    ATerm e_5 (ATerm t)
    {
      ATerm d_110 = NULL;
      ATerm e_110 = NULL;
      t = term_l_15;
      {
        ATerm f_5 (ATerm t)
        {
          t = not_null(b_110);
          return(t);
        }
        t = short_description_1(t, f_5);
        {
          t = concat_strings_0(t);
          {
            e_110 = t;
            if(((d_110 != NULL) && (d_110 != e_110)))
              _fail(e_110);
            else
              d_110 = e_110;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATempty, not_null(d_110)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATempty, term_m_27));
      {
        t = printnl_0(t);
        {
          t = term_p_27;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm f_110 = NULL;
                  f_110 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_110)), term_q_27));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm h_110 = NULL;
                    ATerm i_110 = NULL;
                    t = term_l_15;
                    {
                      ATerm k_5 (ATerm t)
                      {
                        t = not_null(b_110);
                        return(t);
                      }
                      t = long_description_1(t, k_5);
                      {
                        t = concat_strings_0(t);
                        {
                          i_110 = t;
                          if(((h_110 != NULL) && (h_110 != i_110)))
                            _fail(i_110);
                          else
                            h_110 = i_110;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_110)), term_r_27));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_5);
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
ATerm Undefined_1 (ATerm t, ATerm y_72 (ATerm))
{
  ATerm s_110 = NULL,t_110 = NULL;
  s_110 = t;
  r_110 :
  if(match_cons(s_110, sym_Undefined_1))
    {
      t_110 = ATgetArgument(s_110, 0);
      {
        ATerm w_110 = NULL,y_110 = NULL;
        ATerm x_110 = NULL;
        t = SSLgetAnnotations(not_null(s_110));
        {
          x_110 = t;
          if(((w_110 != NULL) && (w_110 != x_110)))
            _fail(x_110);
          else
            w_110 = x_110;
        }
        {
          t = not_null(t_110);
          {
            ATerm a_111 = NULL;
            t = y_72(t);
            {
              y_110 = t;
              {
                ATerm b_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_110)), not_null(w_110));
                {
                  b_111 = t;
                  if(((a_111 != NULL) && (a_111 != b_111)))
                    _fail(b_111);
                  else
                    a_111 = b_111;
                }
                t = not_null(a_111);
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
ATerm fetch_1 (ATerm t, ATerm k_105 (ATerm))
{
  ATerm g_111 (ATerm t)
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_105, _id);
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = Cons_2(t, _id, g_111);
      }
    return(t);
  }
  t = g_111(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_82 (ATerm))
{
  t = fetch_1(t, o_82);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_111 = NULL;
  l_111 = t;
  k_111 :
  if(match_cons(l_111, sym_Help_0))
    {
      ATerm n_111 = NULL,p_111 = NULL;
      ATerm u_27;
      u_27 = t;
      {
        ATerm o_111 = NULL;
        t = SSLgetAnnotations(not_null(l_111));
        {
          o_111 = t;
          if(((n_111 != NULL) && (n_111 != o_111)))
            _fail(o_111);
          else
            n_111 = o_111;
        }
      }
      t = u_27;
      {
        ATerm q_111 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_111));
        {
          q_111 = t;
          if(((p_111 != NULL) && (p_111 != q_111)))
            _fail(q_111);
          else
            p_111 = q_111;
        }
        t = not_null(p_111);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_99 (ATerm))
{
  ATerm v_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_99(t);
      LocalPopChoice(x_27);
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
  ATerm w_111 = NULL,x_111 = NULL,y_111 = NULL;
  w_111 = t;
  v_111 :
  if(match_cons(w_111, sym__2))
    {
      x_111 = ATgetArgument(w_111, 0);
      y_111 = ATgetArgument(w_111, 1);
      t = SSL_table_get(not_null(x_111), not_null(y_111));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_112 = NULL,g_112 = NULL,h_112 = NULL,i_112 = NULL;
  f_112 = t;
  e_112 :
  if(match_cons(f_112, sym__3))
    {
      g_112 = ATgetArgument(f_112, 0);
      h_112 = ATgetArgument(f_112, 1);
      i_112 = ATgetArgument(f_112, 2);
      {
        ATerm a_28;
        a_28 = t;
        {
          ATerm m_112 = NULL;
          ATerm n_112 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_112), not_null(h_112));
          {
            ATerm b_28 = t;
            int c_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_28);
              }
            else
              {
                t = b_28;
                t = (ATerm) ATempty;
              }
            {
              n_112 = t;
              if(((m_112 != NULL) && (m_112 != n_112)))
                _fail(n_112);
              else
                m_112 = n_112;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_112), not_null(h_112), (ATerm) ATinsert(CheckATermList(not_null(m_112)), not_null(i_112)));
            t = table_put_0(t);
          }
        }
        t = a_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_81 (ATerm))
{
  ATerm r_112 = NULL;
  ATerm s_112 = NULL;
  t = term_l_15;
  {
    t = o_81(t);
    {
      s_112 = t;
      if(((r_112 != NULL) && (r_112 != s_112)))
        _fail(s_112);
      else
        r_112 = s_112;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_27, term_o_27, not_null(r_112));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm y_112 = NULL,z_112 = NULL,a_113 = NULL;
  y_112 = t;
  x_112 :
  if(match_string(y_112, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(y_112) == AT_LIST) && ((ATermList) y_112 != ATempty)))
        {
          z_112 = ATgetFirst((ATermList) y_112);
          a_113 = (ATerm) ATgetNext((ATermList) y_112);
          {
            ATerm d_113 = NULL;
            ATerm d_28;
            d_28 = t;
            {
              t = not_null(z_112);
              t = c_0(t);
            }
            t = d_28;
            {
              ATerm e_113 = NULL;
              t = term_l_15;
              {
                t = d_0(t);
                {
                  e_113 = t;
                  if(((d_113 != NULL) && (d_113 != e_113)))
                    _fail(e_113);
                  else
                    d_113 = e_113;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_113)), not_null(d_113));
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
  ATerm l_5 (ATerm t)
  {
    ATerm j_113 = NULL;
    j_113 = t;
    i_113 :
    if(!(match_string(j_113, "--help")))
      {
        if(!(match_string(j_113, "-h")))
          {
            if(!(match_string(j_113, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_e_28;
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_f_28;
    return(t);
  }
  t = Option_3(t, l_5, m_5, n_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL;
  m_113 = t;
  l_113 :
  if(((ATgetType(m_113) == AT_LIST) && ((ATermList) m_113 != ATempty)))
    {
      n_113 = ATgetFirst((ATermList) m_113);
      o_113 = (ATerm) ATgetNext((ATermList) m_113);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_113)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_113)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm v_113 = NULL,w_113 = NULL,x_113 = NULL;
  v_113 = t;
  u_113 :
  if(match_cons(v_113, sym__2))
    {
      w_113 = ATgetArgument(v_113, 0);
      x_113 = ATgetArgument(v_113, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_21, not_null(w_113), not_null(x_113));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_81 (ATerm))
{
  ATerm g_28;
  g_28 = t;
  {
    ATerm o_5 (ATerm t)
    {
      t = term_h_28;
      t = m_81(t);
      return(t);
    }
    t = try_1(t, o_5);
  }
  t = g_28;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm f_114 = NULL;
      ATerm i_28;
      i_28 = t;
      {
        ATerm d_114 = NULL;
        ATerm e_114 = NULL;
        e_114 = t;
        if(((d_114 != NULL) && (d_114 != e_114)))
          _fail(e_114);
        else
          d_114 = e_114;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_22, not_null(d_114));
          t = set_config_0(t);
        }
      }
      t = i_28;
      {
        ATerm g_114 = NULL;
        g_114 = t;
        if(((f_114 != NULL) && (f_114 != g_114)))
          _fail(g_114);
        else
          f_114 = g_114;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_114));
      }
      return(t);
    }
    ATerm q_5 (ATerm t)
    {
      ATerm j_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_28 = t;
          int d_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_29);
            }
          else
            {
              t = v_28;
              {
                t = m_81(t);
                t = Cons_2(t, _id, q_5);
              }
            }
          LocalPopChoice(l_28);
        }
      else
        {
          t = j_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_5, q_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_114 = NULL,n_114 = NULL,o_114 = NULL;
  ATerm f_29;
  f_29 = t;
  {
    ATerm p_114 = NULL,q_114 = NULL,r_114 = NULL,s_114 = NULL;
    p_114 = t;
    l_114 :
    if(match_cons(p_114, sym__3))
      {
        q_114 = ATgetArgument(p_114, 0);
        r_114 = ATgetArgument(p_114, 1);
        s_114 = ATgetArgument(p_114, 2);
        {
          if(((m_114 != NULL) && (m_114 != q_114)))
            _fail(q_114);
          else
            m_114 = q_114;
          {
            if(((n_114 != NULL) && (n_114 != r_114)))
              _fail(r_114);
            else
              n_114 = r_114;
            {
              if(((o_114 != NULL) && (o_114 != s_114)))
                _fail(s_114);
              else
                o_114 = s_114;
              t = SSL_table_put(not_null(m_114), not_null(n_114), not_null(o_114));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_81 (ATerm))
{
  ATerm v_114 = NULL;
  ATerm g_29;
  g_29 = t;
  {
    t = term_h_29;
    t = table_put_0(t);
  }
  t = g_29;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm i_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_81(t);
          LocalPopChoice(j_29);
        }
      else
        {
          t = i_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_5);
    {
      ATerm s_5 (ATerm t)
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_q_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            {
              ATerm t_5 (ATerm t)
              {
                ATerm u_5 (ATerm t)
                {
                  ATerm w_114 = NULL;
                  w_114 = t;
                  if(((v_114 != NULL) && (v_114 != w_114)))
                    _fail(w_114);
                  else
                    v_114 = w_114;
                  return(t);
                }
                t = Undefined_1(t, u_5);
                return(t);
              }
              t = option_defined_1(t, t_5);
              {
                ATerm u_29;
                u_29 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_114)), term_v_29));
                  t = printnl_0(t);
                }
                t = u_29;
                {
                  t = system_usage_0(t);
                  {
                    t = term_w_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_5);
      {
        ATerm w_29;
        w_29 = t;
        {
          t = term_n_27;
          t = table_destroy_0(t);
        }
        t = w_29;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_84(t);
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, v_5);
  {
    t = store_options_0(t);
    {
      t = g_84(t);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_84);
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            {
              ATerm b_30 = t;
              int c_30 = stack_ptr;
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
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm z_83 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      ATerm d_30;
      d_30 = t;
      {
        ATerm z_114 = NULL;
        ATerm a_115 = NULL;
        t = term_t_22;
        {
          t = get_config_0(t);
          {
            a_115 = t;
            if(((z_114 != NULL) && (z_114 != a_115)))
              _fail(a_115);
            else
              z_114 = a_115;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_7, (ATerm) ATinsert(ATempty, not_null(z_114)));
          t = printnl_0(t);
        }
      }
      t = d_30;
      return(t);
    }
    t = if_verbose2_1(t, x_5);
    return(t);
  }
  t = iowrap_4(t, x_83, y_83, z_83, w_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_83 (ATerm), ATerm w_83 (ATerm))
{
  t = iowrap_3(t, v_83, w_83, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    t = _2(t, _id, s_83);
    return(t);
  }
  t = iowrap_2(t, y_5, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
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
  t = iowrap_1(t, z_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
