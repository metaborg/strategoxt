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
ATerm term_b_30;
ATerm term_m_29;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_m_25;
ATerm term_s_24;
ATerm term_n_24;
ATerm term_i_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_r_23;
ATerm term_j_23;
ATerm term_z_22;
ATerm term_m_22;
ATerm term_z_21;
ATerm term_r_21;
ATerm term_o_21;
ATerm term_e_21;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_n_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_i_10;
ATerm term_z_9;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_b_9;
ATerm term_m_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_n_6;
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
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Op_2, term_n_14, (ATerm) ATempty);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_r_14);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_u_19);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_19);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_p_15);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_d_26, term_p_15);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_p_15);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
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
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, (ATerm) ATempty);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm a_78 (ATerm), ATerm b_78 (ATerm));
ATerm SDef_3 (ATerm, ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm));
ATerm Let_2 (ATerm, ATerm c_78 (ATerm), ATerm d_78 (ATerm));
ATerm sboundin_3 (ATerm, ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm w_96 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm g_105 (ATerm), ATerm h_105 (ATerm));
ATerm alltd_1 (ATerm, ATerm g_104 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm i_105 (ATerm), ATerm j_105 (ATerm));
ATerm substitute_1 (ATerm, ATerm k_105 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm h_78 (ATerm), ATerm i_78 (ATerm));
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
ATerm As_2 (ATerm, ATerm z_75 (ATerm), ATerm a_76 (ATerm));
ATerm Prim_2 (ATerm, ATerm h_79 (ATerm), ATerm i_79 (ATerm));
ATerm Explode_2 (ATerm, ATerm v_75 (ATerm), ATerm w_75 (ATerm));
ATerm Op_2 (ATerm, ATerm h_77 (ATerm), ATerm i_77 (ATerm));
ATerm pat_td_1 (ATerm, ATerm g_109 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm r_99 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm y_93 (ATerm), ATerm z_93 (ATerm));
ATerm repeat_1 (ATerm, ATerm b_94 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm));
ATerm Con_3 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm));
ATerm oncetd_1 (ATerm, ATerm s_103 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm c_102 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm l_101 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm c_91 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm p_99 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm));
ATerm zip_1 (ATerm, ATerm m_99 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_1 (ATerm, ATerm t_91 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm f_80 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm p_94 (ATerm), ATerm q_94 (ATerm));
ATerm for_3 (ATerm, ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm x_79 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm z_79 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm o_91 (ATerm), ATerm p_91 (ATerm));
ATerm union_1 (ATerm, ATerm q_91 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm r_90 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm a_77 (ATerm));
ATerm Cons_2 (ATerm, ATerm j_79 (ATerm), ATerm k_79 (ATerm));
ATerm Specification_1 (ATerm, ATerm c_77 (ATerm));
ATerm _2 (ATerm, ATerm e_68 (ATerm), ATerm f_68 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_87 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm t_83 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_86 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_100 (ATerm), ATerm w_100 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_90 (ATerm), ATerm o_90 (ATerm));
ATerm crush_2 (ATerm, ATerm z_91 (ATerm), ATerm a_92 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_83 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_86 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_82 (ATerm));
ATerm map_1 (ATerm, ATerm b_107 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_107 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_82 (ATerm));
ATerm Program_1 (ATerm, ATerm y_73 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_73 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_107 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_83 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_101 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_82 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_82 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_82 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm l_85 (ATerm));
ATerm iowrap_4 (ATerm, ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm c_86 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm));
ATerm iowrap_2 (ATerm, ATerm r_85 (ATerm), ATerm s_85 (ATerm));
ATerm iowrap_1 (ATerm, ATerm o_85 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  h_3 :
  if(((ATermList) i_3 == ATempty))
    {
      {
        ATerm k_4 = NULL,m_4 = NULL;
        ATerm f_6;
        f_6 = t;
        {
          ATerm l_4 = NULL;
          t = SSLgetAnnotations(not_null(i_3));
          {
            l_4 = t;
            if(((k_4 != NULL) && (k_4 != l_4)))
              _fail(l_4);
            else
              k_4 = l_4;
          }
        }
        t = f_6;
        {
          ATerm o_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_4));
          {
            o_5 = t;
            if(((m_4 != NULL) && (m_4 != o_5)))
              _fail(o_5);
            else
              m_4 = o_5;
          }
          t = not_null(m_4);
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
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  g_6 :
  if(match_cons(k_6, sym__2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_6), not_null(m_6)), term_i_6), not_null(l_6)), term_h_6);
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
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
  t_6 = t;
  r_6 :
  if(match_cons(t_6, sym__2))
    {
      u_6 = ATgetArgument(t_6, 0);
      x_6 = ATgetArgument(t_6, 1);
      s_6 :
      if(match_cons(u_6, sym_Mod_2))
        {
          v_6 = ATgetArgument(u_6, 0);
          w_6 = ATgetArgument(u_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_6), not_null(x_6)), term_i_6), not_null(w_6)), term_n_6), not_null(v_6)), term_h_6);
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
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  f_7 = t;
  d_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      e_7 :
      if(((ATgetType(h_7) == AT_LIST) && ((ATermList) h_7 != ATempty)))
        {
          i_7 = ATgetFirst((ATermList) h_7);
          j_7 = (ATerm) ATgetNext((ATermList) h_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(j_7)), not_null(i_7));
            {
              ATerm c_0 (ATerm t)
              {
                ATerm o_6 = t;
                int p_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(p_6);
                  }
                else
                  {
                    t = o_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, c_0);
            }
            t = not_null(g_7);
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
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
  r_7 = t;
  p_7 :
  if(match_cons(r_7, sym__2))
    {
      s_7 = ATgetArgument(r_7, 0);
      t_7 = ATgetArgument(r_7, 1);
      q_7 :
      if(((ATermList) t_7 == ATempty))
        {
          t = not_null(s_7);
        }
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
  ATerm q_6;
  q_6 = t;
  {
    t = error_0(t);
    {
      t = term_y_6;
      t = exit_0(t);
    }
  }
  t = q_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_z_6);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm a_7;
  a_7 = t;
  {
    ATerm x_7 = NULL;
    ATerm y_7 = NULL;
    y_7 = t;
    if(((x_7 != NULL) && (x_7 != y_7)))
      _fail(y_7);
    else
      x_7 = y_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_7, not_null(x_7));
      t = printnl_0(t);
    }
  }
  t = a_7;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  l_8 = t;
  j_8 :
  if(match_cons(l_8, sym__2))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      k_8 :
      if(match_int(n_8, 0))
        {
          ATerm c_7 = t;
          int k_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
              t = not_null(m_8);
              {
                t = Arities_0(t);
                {
                  p_8 = t;
                  e_8 :
                  if(((ATgetType(p_8) == AT_LIST) && ((ATermList) p_8 != ATempty)))
                    {
                      q_8 = ATgetFirst((ATermList) p_8);
                      r_8 = (ATerm) ATgetNext((ATermList) p_8);
                      f_8 :
                      if(((ATgetType(r_8) == AT_LIST) && ((ATermList) r_8 != ATempty)))
                        {
                          s_8 = ATgetFirst((ATermList) r_8);
                          t_8 = (ATerm) ATgetNext((ATermList) r_8);
                          {
                            ATerm l_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm d_0 (ATerm t)
                                {
                                  ATerm u_8 = NULL;
                                  u_8 = t;
                                  d_8 :
                                  if(!(match_int(u_8, 0)))
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
                                t = l_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_8)), term_m_7);
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
              LocalPopChoice(k_7);
            }
          else
            {
              t = c_7;
              {
                ATerm w_8 = NULL;
                ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
                t = not_null(m_8);
                {
                  t = Arities_0(t);
                  {
                    x_8 = t;
                    h_8 :
                    if(((ATgetType(x_8) == AT_LIST) && ((ATermList) x_8 != ATempty)))
                      {
                        y_8 = ATgetFirst((ATermList) x_8);
                        z_8 = (ATerm) ATgetNext((ATermList) x_8);
                        i_8 :
                        if(((ATermList) z_8 == ATempty))
                          {
                            {
                              if(((w_8 != NULL) && (w_8 != y_8)))
                                _fail(y_8);
                              else
                                w_8 = y_8;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(w_8));
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(w_8));
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
ATerm Rec_2 (ATerm t, ATerm a_78 (ATerm), ATerm b_78 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_Rec_2))
    {
      l_9 = ATgetArgument(k_9, 0);
      m_9 = ATgetArgument(k_9, 1);
      {
        ATerm q_9 = NULL,s_9 = NULL;
        ATerm r_9 = NULL;
        t = SSLgetAnnotations(not_null(k_9));
        {
          r_9 = t;
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
        }
        {
          t = not_null(l_9);
          {
            ATerm u_9 = NULL;
            t = a_78(t);
            {
              s_9 = t;
              {
                t = not_null(m_9);
                {
                  ATerm w_9 = NULL;
                  t = b_78(t);
                  {
                    u_9 = t;
                    {
                      ATerm x_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(s_9), not_null(u_9)), not_null(q_9));
                      {
                        x_9 = t;
                        if(((w_9 != NULL) && (w_9 != x_9)))
                          _fail(x_9);
                        else
                          w_9 = x_9;
                      }
                      t = not_null(w_9);
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
ATerm SDef_3 (ATerm t, ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm g_78 (ATerm))
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  k_10 = t;
  j_10 :
  if(match_cons(k_10, sym_SDef_3))
    {
      l_10 = ATgetArgument(k_10, 0);
      m_10 = ATgetArgument(k_10, 1);
      n_10 = ATgetArgument(k_10, 2);
      {
        ATerm s_10 = NULL,u_10 = NULL;
        ATerm t_10 = NULL;
        t = SSLgetAnnotations(not_null(k_10));
        {
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
        }
        {
          t = not_null(l_10);
          {
            ATerm w_10 = NULL;
            t = e_78(t);
            {
              u_10 = t;
              {
                t = not_null(m_10);
                {
                  ATerm y_10 = NULL;
                  t = f_78(t);
                  {
                    w_10 = t;
                    {
                      t = not_null(n_10);
                      {
                        ATerm a_11 = NULL;
                        t = g_78(t);
                        {
                          y_10 = t;
                          {
                            ATerm b_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(u_10), not_null(w_10), not_null(y_10)), not_null(s_10));
                            {
                              b_11 = t;
                              if(((a_11 != NULL) && (a_11 != b_11)))
                                _fail(b_11);
                              else
                                a_11 = b_11;
                            }
                            t = not_null(a_11);
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
ATerm Let_2 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_Let_2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      {
        ATerm u_11 = NULL,w_11 = NULL;
        ATerm v_11 = NULL;
        t = SSLgetAnnotations(not_null(o_11));
        {
          v_11 = t;
          if(((u_11 != NULL) && (u_11 != v_11)))
            _fail(v_11);
          else
            u_11 = v_11;
        }
        {
          t = not_null(p_11);
          {
            ATerm y_11 = NULL;
            t = c_78(t);
            {
              w_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm a_12 = NULL;
                  t = d_78(t);
                  {
                    y_11 = t;
                    {
                      ATerm b_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(w_11), not_null(y_11)), not_null(u_11));
                      {
                        b_12 = t;
                        if(((a_12 != NULL) && (a_12 != b_12)))
                          _fail(b_12);
                        else
                          a_12 = b_12;
                      }
                      t = not_null(a_12);
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
ATerm sboundin_3 (ATerm t, ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm))
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, d_106, d_106);
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, f_106, f_106, d_106);
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
            t = Rec_2(t, f_106, d_106);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_Rec_2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(k_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_SDef_3))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      w_12 = ATgetArgument(t_12, 2);
      {
        t = not_null(v_12);
        {
          ATerm g_0 (ATerm t)
          {
            ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
            a_13 = t;
            r_12 :
            if(match_cons(a_13, sym_VarDec_2))
              {
                b_13 = ATgetArgument(a_13, 0);
                c_13 = ATgetArgument(a_13, 1);
                t = not_null(b_13);
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
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_Let_2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        t = not_null(l_13);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
            p_13 = t;
            i_13 :
            if(match_cons(p_13, sym_SDef_3))
              {
                q_13 = ATgetArgument(p_13, 0);
                r_13 = ATgetArgument(p_13, 1);
                s_13 = ATgetArgument(p_13, 2);
                t = not_null(q_13);
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
ATerm crush_3 (ATerm t, ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm d_92 (ATerm))
{
  ATerm c_14 = NULL;
  ATerm e_14 = NULL;
  c_14 = t;
  {
    ATerm f_14 = NULL;
    ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
    t = not_null(c_14);
    {
      f_14 = t;
      {
        t = SSL_explode_term(not_null(f_14));
        {
          h_14 = t;
          b_14 :
          if(match_cons(h_14, sym__2))
            {
              i_14 = ATgetArgument(h_14, 0);
              j_14 = ATgetArgument(h_14, 1);
              if(((e_14 != NULL) && (e_14 != j_14)))
                _fail(j_14);
              else
                e_14 = j_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_14);
      t = foldr_3(t, b_92, c_92, d_92);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm w_96 (ATerm))
{
  ATerm q_14 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm w_7 = t;
      int z_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_96(t);
          LocalPopChoice(z_7);
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
      ATerm a_8 = t;
      int b_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = NULL;
          ATerm c_8;
          c_8 = t;
          {
            ATerm p_14 = NULL;
            t = u_96(t);
            {
              p_14 = t;
              if(((o_14 != NULL) && (o_14 != p_14)))
                _fail(p_14);
              else
                o_14 = p_14;
            }
          }
          t = c_8;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(o_14);
                return(t);
              }
              t = split_2(t, q_14, t_0);
              t = diff_1(t, w_96);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = v_96(t, r_0, q_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          LocalPopChoice(b_8);
        }
      else
        {
          t = a_8;
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, v_0, union_0, q_14);
          }
        }
      return(t);
    }
    t = split_2(t, p_0, q_0);
    t = union_0(t);
    return(t);
  }
  t = q_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
    z_14 = t;
    u_14 :
    if(match_cons(z_14, sym_Call_2))
      {
        a_15 = ATgetArgument(z_14, 0);
        c_15 = ATgetArgument(z_14, 1);
        v_14 :
        if(match_cons(a_15, sym_SVar_1))
          {
            b_15 = ATgetArgument(a_15, 0);
            {
              ATerm f_15 = NULL;
              ATerm g_15 = NULL;
              t = not_null(c_15);
              {
                t = length_0(t);
                {
                  g_15 = t;
                  if(((f_15 != NULL) && (f_15 != g_15)))
                    _fail(g_15);
                  else
                    f_15 = g_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(b_15), not_null(f_15)));
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
    ATerm g_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(o_8);
      }
    else
      {
        t = g_8;
        {
          ATerm v_8 = t;
          int a_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(a_9);
            }
          else
            {
              t = v_8;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
    h_15 = t;
    x_14 :
    if(match_cons(h_15, sym__2))
      {
        i_15 = ATgetArgument(h_15, 0);
        l_15 = ATgetArgument(h_15, 1);
        y_14 :
        if(match_cons(i_15, sym__2))
          {
            j_15 = ATgetArgument(i_15, 0);
            k_15 = ATgetArgument(i_15, 1);
            if(((j_15 != NULL) && (j_15 != l_15)))
              _fail(l_15);
            else
              j_15 = l_15;
          }
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
  ATerm x_15 = NULL;
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  x_15 = t;
  {
    ATerm c_16 = NULL;
    ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
    t = not_null(x_15);
    {
      c_16 = t;
      {
        t = SSL_explode_term(not_null(c_16));
        {
          e_16 = t;
          t_15 :
          if(match_cons(e_16, sym__2))
            {
              f_16 = ATgetArgument(e_16, 0);
              g_16 = ATgetArgument(e_16, 1);
              u_15 :
              if(match_string(f_16, ""))
                {
                  v_15 :
                  if(((ATgetType(g_16) == AT_LIST) && ((ATermList) g_16 != ATempty)))
                    {
                      h_16 = ATgetFirst((ATermList) g_16);
                      i_16 = (ATerm) ATgetNext((ATermList) g_16);
                      w_15 :
                      if(((ATgetType(i_16) == AT_LIST) && ((ATermList) i_16 != ATempty)))
                        {
                          j_16 = ATgetFirst((ATermList) i_16);
                          k_16 = (ATerm) ATgetNext((ATermList) i_16);
                          {
                            if(((z_15 != NULL) && (z_15 != h_16)))
                              _fail(h_16);
                            else
                              z_15 = h_16;
                            {
                              if(((b_16 != NULL) && (b_16 != j_16)))
                                _fail(j_16);
                              else
                                b_16 = j_16;
                              if(((a_16 != NULL) && (a_16 != k_16)))
                                _fail(k_16);
                              else
                                a_16 = k_16;
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
    t = not_null(b_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_b_9;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm q_16 = NULL,s_16 = NULL;
    ATerm c_9;
    c_9 = t;
    {
      ATerm r_16 = NULL;
      t = Fst_0(t);
      {
        r_16 = t;
        if(((q_16 != NULL) && (q_16 != r_16)))
          _fail(r_16);
        else
          q_16 = r_16;
      }
    }
    t = c_9;
    {
      ATerm t_16 = NULL;
      t = Snd_0(t);
      {
        t_16 = t;
        if(((s_16 != NULL) && (s_16 != t_16)))
          _fail(t_16);
        else
          s_16 = t_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_16), not_null(s_16));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  a_17 = t;
  x_16 :
  if(match_cons(a_17, sym_Call_2))
    {
      b_17 = ATgetArgument(a_17, 0);
      d_17 = ATgetArgument(a_17, 1);
      y_16 :
      if(match_cons(b_17, sym_SVar_1))
        {
          c_17 = ATgetArgument(b_17, 0);
          z_16 :
          if(((ATermList) d_17 == ATempty))
            {
              t = not_null(c_17);
            }
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
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  j_17 = t;
  h_17 :
  if(match_cons(j_17, sym__2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      i_17 :
      if(((ATgetType(l_17) == AT_LIST) && ((ATermList) l_17 != ATempty)))
        {
          m_17 = ATgetFirst((ATermList) l_17);
          n_17 = (ATerm) ATgetNext((ATermList) l_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(n_17));
        }
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
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  v_17 = t;
  s_17 :
  if(match_cons(v_17, sym__2))
    {
      w_17 = ATgetArgument(v_17, 0);
      x_17 = ATgetArgument(v_17, 1);
      t_17 :
      if(((ATgetType(x_17) == AT_LIST) && ((ATermList) x_17 != ATempty)))
        {
          y_17 = ATgetFirst((ATermList) x_17);
          b_18 = (ATerm) ATgetNext((ATermList) x_17);
          u_17 :
          if(match_cons(y_17, sym__2))
            {
              z_17 = ATgetArgument(y_17, 0);
              a_18 = ATgetArgument(y_17, 1);
              {
                ATerm d_18 = NULL;
                if(((w_17 != NULL) && (w_17 != z_17)))
                  _fail(z_17);
                else
                  w_17 = z_17;
                {
                  if(((d_18 != NULL) && (d_18 != a_18)))
                    _fail(a_18);
                  else
                    d_18 = a_18;
                  t = not_null(d_18);
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
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm g_105 (ATerm), ATerm h_105 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm l_18 = NULL,m_18 = NULL;
  j_18 = t;
  {
    ATerm n_18 = NULL;
    t = not_null(j_18);
    {
      ATerm o_18 = NULL;
      t = g_105(t);
      {
        n_18 = t;
        {
          if(((l_18 != NULL) && (l_18 != n_18)))
            _fail(n_18);
          else
            l_18 = n_18;
          {
            t = h_105(t);
            {
              o_18 = t;
              if(((m_18 != NULL) && (m_18 != o_18)))
                _fail(o_18);
              else
                m_18 = o_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(m_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm g_104 (ATerm))
{
  ATerm s_18 (ATerm t)
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_104(t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        t = _all(t, s_18);
      }
    return(t);
  }
  t = s_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym__2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm c_19 = NULL;
        if(((c_19 != NULL) && (c_19 != z_18)))
          _fail(z_18);
        else
          c_19 = z_18;
      }
    }
  else
    {
      if(match_cons(x_18, sym__3))
        {
          y_18 = ATgetArgument(x_18, 0);
          z_18 = ATgetArgument(x_18, 1);
          a_19 = ATgetArgument(x_18, 2);
          {
            ATerm i_19 = NULL;
            ATerm j_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(z_18));
            {
              t = zip_1(t, _id);
              {
                j_19 = t;
                if(((i_19 != NULL) && (i_19 != j_19)))
                  _fail(j_19);
                else
                  i_19 = j_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), not_null(a_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm i_105 (ATerm), ATerm j_105 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  t = subs_args_0(t);
  {
    p_19 = t;
    o_19 :
    if(match_cons(p_19, sym__2))
      {
        q_19 = ATgetArgument(p_19, 0);
        r_19 = ATgetArgument(p_19, 1);
        {
          t = not_null(r_19);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(q_19);
                return(t);
              }
              t = SubsVar_2(t, i_105, c_1);
              t = j_105(t);
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
ATerm substitute_1 (ATerm t, ATerm k_105 (ATerm))
{
  t = substitute_2(t, k_105, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm h_78 (ATerm), ATerm i_78 (ATerm))
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  b_20 = t;
  a_20 :
  if(match_cons(b_20, sym_VarDec_2))
    {
      c_20 = ATgetArgument(b_20, 0);
      d_20 = ATgetArgument(b_20, 1);
      {
        ATerm h_20 = NULL,j_20 = NULL;
        ATerm i_20 = NULL;
        t = SSLgetAnnotations(not_null(b_20));
        {
          i_20 = t;
          if(((h_20 != NULL) && (h_20 != i_20)))
            _fail(i_20);
          else
            h_20 = i_20;
        }
        {
          t = not_null(c_20);
          {
            ATerm l_20 = NULL;
            t = h_78(t);
            {
              j_20 = t;
              {
                t = not_null(d_20);
                {
                  ATerm n_20 = NULL;
                  t = i_78(t);
                  {
                    l_20 = t;
                    {
                      ATerm o_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_20), not_null(l_20)), not_null(h_20));
                      {
                        o_20 = t;
                        if(((n_20 != NULL) && (n_20 != o_20)))
                          _fail(o_20);
                        else
                          n_20 = o_20;
                      }
                      t = not_null(n_20);
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
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  i_21 = t;
  g_21 :
  if(((ATgetType(i_21) == AT_LIST) && ((ATermList) i_21 != ATempty)))
    {
      j_21 = ATgetFirst((ATermList) i_21);
      n_21 = (ATerm) ATgetNext((ATermList) i_21);
      h_21 :
      if(match_cons(j_21, sym_SDef_3))
        {
          k_21 = ATgetArgument(j_21, 0);
          l_21 = ATgetArgument(j_21, 1);
          m_21 = ATgetArgument(j_21, 2);
          {
            ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,p_22 = NULL;
            ATerm h_9;
            h_9 = t;
            {
              ATerm v_21 = NULL;
              t = not_null(l_21);
              {
                ATerm b_22 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  v_21 = t;
                  {
                    if(((s_21 != NULL) && (s_21 != v_21)))
                      _fail(v_21);
                    else
                      s_21 = v_21;
                    {
                      t = not_null(s_21);
                      {
                        ATerm o_22 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
                          w_21 = t;
                          x_20 :
                          if(match_cons(w_21, sym_VarDec_2))
                            {
                              x_21 = ATgetArgument(w_21, 0);
                              y_21 = ATgetArgument(w_21, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_21)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          b_22 = t;
                          {
                            if(((t_21 != NULL) && (t_21 != b_22)))
                              _fail(b_22);
                            else
                              t_21 = b_22;
                            {
                              t = not_null(i_21);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
                                  c_22 = t;
                                  d_21 :
                                  if(match_cons(c_22, sym_SDef_3))
                                    {
                                      d_22 = ATgetArgument(c_22, 0);
                                      e_22 = ATgetArgument(c_22, 1);
                                      f_22 = ATgetArgument(c_22, 2);
                                      {
                                        ATerm i_22 = NULL;
                                        ATerm n_22 = NULL;
                                        t = not_null(e_22);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
                                            j_22 = t;
                                            b_21 :
                                            if(match_cons(j_22, sym_VarDec_2))
                                              {
                                                k_22 = ATgetArgument(j_22, 0);
                                                l_22 = ATgetArgument(j_22, 1);
                                                t = not_null(k_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            n_22 = t;
                                            if(((i_22 != NULL) && (i_22 != n_22)))
                                              _fail(n_22);
                                            else
                                              i_22 = n_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(i_22), not_null(t_21), not_null(f_22));
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
                                  o_22 = t;
                                  if(((u_21 != NULL) && (u_21 != o_22)))
                                    _fail(o_22);
                                  else
                                    u_21 = o_22;
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
            t = h_9;
            {
              ATerm q_22 = NULL;
              t = not_null(u_21);
              {
                t = choices_0(t);
                {
                  q_22 = t;
                  if(((p_22 != NULL) && (p_22 != q_22)))
                    _fail(q_22);
                  else
                    p_22 = q_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_21), not_null(s_21), not_null(p_22));
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
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  b_23 :
  if(((ATgetType(d_23) == AT_LIST) && ((ATermList) d_23 != ATempty)))
    {
      e_23 = ATgetFirst((ATermList) d_23);
      f_23 = (ATerm) ATgetNext((ATermList) d_23);
      c_23 :
      if(((ATermList) f_23 == ATempty))
        {
          t = not_null(e_23);
        }
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
  ATerm i_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(n_9);
    }
  else
    {
      t = i_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  m_23 = t;
  k_23 :
  if(match_cons(m_23, sym__2))
    {
      n_23 = ATgetArgument(m_23, 0);
      q_23 = ATgetArgument(m_23, 1);
      l_23 :
      if(match_cons(n_23, sym__2))
        {
          o_23 = ATgetArgument(n_23, 0);
          p_23 = ATgetArgument(n_23, 1);
          {
            ATerm u_23 = NULL;
            ATerm v_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(p_23));
            {
              t = Definitions_0(t);
              {
                v_23 = t;
                if(((u_23 != NULL) && (u_23 != v_23)))
                  _fail(v_23);
                else
                  u_23 = v_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), not_null(q_23));
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
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  q_24 = t;
  o_24 :
  if(match_cons(q_24, sym_ExplodeCong_2))
    {
      r_24 = ATgetArgument(q_24, 0);
      p_24 = ATgetArgument(q_24, 1);
      {
        ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
        ATerm y_24 = NULL;
        ATerm z_24 = NULL;
        t = new_0(t);
        {
          y_24 = t;
          {
            if(((u_24 != NULL) && (u_24 != y_24)))
              _fail(y_24);
            else
              u_24 = y_24;
            {
              ATerm a_25 = NULL;
              t = new_0(t);
              {
                z_24 = t;
                {
                  if(((v_24 != NULL) && (v_24 != z_24)))
                    _fail(z_24);
                  else
                    v_24 = z_24;
                  {
                    ATerm b_25 = NULL;
                    t = new_0(t);
                    {
                      a_25 = t;
                      {
                        if(((w_24 != NULL) && (w_24 != a_25)))
                          _fail(a_25);
                        else
                          w_24 = a_25;
                        {
                          t = new_0(t);
                          {
                            b_25 = t;
                            if(((x_24 != NULL) && (x_24 != b_25)))
                              _fail(b_25);
                            else
                              x_24 = b_25;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_24)), not_null(w_24)), not_null(v_24)), not_null(u_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(r_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))))), (ATerm) ATmakeAppl(sym_Prim_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24)))))));
      }
    }
  else
    {
      if(match_cons(q_24, sym_Build_1))
        {
          r_24 = ATgetArgument(q_24, 0);
          {
            ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
            ATerm h_25 = NULL;
            ATerm l_25 = NULL;
            t = new_0(t);
            {
              h_25 = t;
              {
                if(((f_25 != NULL) && (f_25 != h_25)))
                  _fail(h_25);
                else
                  f_25 = h_25;
                {
                  t = not_null(r_24);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
                      i_25 = t;
                      h_24 :
                      if(match_cons(i_25, sym_Explode_2))
                        {
                          j_25 = ATgetArgument(i_25, 0);
                          k_25 = ATgetArgument(i_25, 1);
                          {
                            if(((d_25 != NULL) && (d_25 != j_25)))
                              _fail(j_25);
                            else
                              d_25 = j_25;
                            {
                              if(((e_25 != NULL) && (e_25 != k_25)))
                                _fail(k_25);
                              else
                                e_25 = k_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25));
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
                      l_25 = t;
                      if(((g_25 != NULL) && (g_25 != l_25)))
                        _fail(l_25);
                      else
                        g_25 = l_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_25)), not_null(d_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_25)))));
          }
        }
      else
        {
          if(match_cons(q_24, sym_Match_1))
            {
              r_24 = ATgetArgument(q_24, 0);
              {
                ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
                ATerm s_25 = NULL;
                ATerm t_25 = NULL;
                t = new_0(t);
                {
                  s_25 = t;
                  {
                    if(((p_25 != NULL) && (p_25 != s_25)))
                      _fail(s_25);
                    else
                      p_25 = s_25;
                    {
                      ATerm x_25 = NULL;
                      t = new_0(t);
                      {
                        t_25 = t;
                        {
                          if(((q_25 != NULL) && (q_25 != t_25)))
                            _fail(t_25);
                          else
                            q_25 = t_25;
                          {
                            t = not_null(r_24);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
                                u_25 = t;
                                m_24 :
                                if(match_cons(u_25, sym_Explode_2))
                                  {
                                    v_25 = ATgetArgument(u_25, 0);
                                    w_25 = ATgetArgument(u_25, 1);
                                    {
                                      if(((n_25 != NULL) && (n_25 != v_25)))
                                        _fail(v_25);
                                      else
                                        n_25 = v_25;
                                      {
                                        if(((o_25 != NULL) && (o_25 != w_25)))
                                          _fail(w_25);
                                        else
                                          o_25 = w_25;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_25));
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
                                x_25 = t;
                                if(((r_25 != NULL) && (r_25 != x_25)))
                                  _fail(x_25);
                                else
                                  r_25 = x_25;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_p_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_25)), (ATerm) ATmakeAppl(sym_Op_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_25)), not_null(n_25)))))));
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
  ATerm p_28 = NULL,q_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym_Match_1))
    {
      q_28 = ATgetArgument(p_28, 0);
      {
        ATerm v_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
            ATerm w_28 = NULL;
            ATerm a_29 = NULL;
            t = new_0(t);
            {
              w_28 = t;
              {
                if(((u_28 != NULL) && (u_28 != w_28)))
                  _fail(w_28);
                else
                  u_28 = w_28;
                {
                  t = not_null(q_28);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
                      x_28 = t;
                      a_27 :
                      if(match_cons(x_28, sym_Anno_2))
                        {
                          y_28 = ATgetArgument(x_28, 0);
                          z_28 = ATgetArgument(x_28, 1);
                          {
                            if(((s_28 != NULL) && (s_28 != y_28)))
                              _fail(y_28);
                            else
                              s_28 = y_28;
                            {
                              if(((t_28 != NULL) && (t_28 != z_28)))
                                _fail(z_28);
                              else
                                t_28 = z_28;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_28)), not_null(s_28));
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
                      a_29 = t;
                      if(((v_28 != NULL) && (v_28 != a_29)))
                        _fail(a_29);
                      else
                        v_28 = a_29;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_28)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_28)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_28))))));
            LocalPopChoice(y_9);
          }
        else
          {
            t = v_9;
            {
              ATerm a_10 = t;
              int b_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
                  ATerm f_29 = NULL;
                  ATerm i_29 = NULL;
                  t = new_0(t);
                  {
                    f_29 = t;
                    {
                      if(((d_29 != NULL) && (d_29 != f_29)))
                        _fail(f_29);
                      else
                        d_29 = f_29;
                      {
                        t = not_null(q_28);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm g_29 = NULL,h_29 = NULL;
                            g_29 = t;
                            e_27 :
                            if(match_cons(g_29, sym_RootApp_1))
                              {
                                h_29 = ATgetArgument(g_29, 0);
                                {
                                  if(((c_29 != NULL) && (c_29 != h_29)))
                                    _fail(h_29);
                                  else
                                    c_29 = h_29;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_29));
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
                            i_29 = t;
                            if(((e_29 != NULL) && (e_29 != i_29)))
                              _fail(i_29);
                            else
                              e_29 = i_29;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_29))), not_null(c_29))));
                  LocalPopChoice(b_10);
                }
              else
                {
                  t = a_10;
                  {
                    ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
                    ATerm v_29 = NULL;
                    ATerm z_29 = NULL;
                    t = new_0(t);
                    {
                      v_29 = t;
                      {
                        if(((t_29 != NULL) && (t_29 != v_29)))
                          _fail(v_29);
                        else
                          t_29 = v_29;
                        {
                          t = not_null(q_28);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
                              w_29 = t;
                              c_28 :
                              if(match_cons(w_29, sym_App_2))
                                {
                                  x_29 = ATgetArgument(w_29, 0);
                                  y_29 = ATgetArgument(w_29, 1);
                                  {
                                    if(((s_29 != NULL) && (s_29 != x_29)))
                                      _fail(x_29);
                                    else
                                      s_29 = x_29;
                                    {
                                      if(((r_29 != NULL) && (r_29 != y_29)))
                                        _fail(y_29);
                                      else
                                        r_29 = y_29;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_29));
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
                              z_29 = t;
                              if(((u_29 != NULL) && (u_29 != z_29)))
                                _fail(z_29);
                              else
                                u_29 = z_29;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_29))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_29)), not_null(s_29)))));
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
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  v_30 = t;
  t_30 :
  if(match_cons(v_30, sym_Match_1))
    {
      w_30 = ATgetArgument(v_30, 0);
      u_30 :
      if(match_cons(w_30, sym_RootApp_1))
        {
          x_30 = ATgetArgument(w_30, 0);
          t = not_null(x_30);
        }
      else
        {
          if(match_cons(w_30, sym_App_2))
            {
              x_30 = ATgetArgument(w_30, 0);
              y_30 = ATgetArgument(w_30, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(x_30), not_null(y_30));
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
  ATerm l_31 = NULL,m_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym_Match_1))
    {
      m_31 = ATgetArgument(l_31, 0);
      {
        ATerm o_31 = NULL,p_31 = NULL;
        ATerm t_31 = NULL;
        t = not_null(m_31);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
            q_31 = t;
            h_31 :
            if(match_cons(q_31, sym_RootApp_1))
              {
                r_31 = ATgetArgument(q_31, 0);
                i_31 :
                if(match_cons(r_31, sym_Match_1))
                  {
                    s_31 = ATgetArgument(r_31, 0);
                    {
                      if(((o_31 != NULL) && (o_31 != s_31)))
                        _fail(s_31);
                      else
                        o_31 = s_31;
                      t = not_null(o_31);
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
            t_31 = t;
            if(((p_31 != NULL) && (p_31 != t_31)))
              _fail(t_31);
            else
              p_31 = t_31;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(p_31));
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
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
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
            t = Mapp1_0(t);
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym_Build_1))
    {
      o_32 = ATgetArgument(n_32, 0);
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_32 = NULL,r_32 = NULL,z_32 = NULL,a_33 = NULL;
            ATerm b_33 = NULL;
            ATerm f_33 = NULL;
            t = new_0(t);
            {
              b_33 = t;
              {
                if(((z_32 != NULL) && (z_32 != b_33)))
                  _fail(b_33);
                else
                  z_32 = b_33;
                {
                  t = not_null(o_32);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
                      c_33 = t;
                      c_32 :
                      if(match_cons(c_33, sym_Anno_2))
                        {
                          d_33 = ATgetArgument(c_33, 0);
                          e_33 = ATgetArgument(c_33, 1);
                          {
                            if(((q_32 != NULL) && (q_32 != d_33)))
                              _fail(d_33);
                            else
                              q_32 = d_33;
                            {
                              if(((r_32 != NULL) && (r_32 != e_33)))
                                _fail(e_33);
                              else
                                r_32 = e_33;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_32));
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
                      f_33 = t;
                      if(((a_33 != NULL) && (a_33 != f_33)))
                        _fail(f_33);
                      else
                        a_33 = f_33;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_i_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_32)), not_null(q_32))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_32))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_33))));
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
            {
              ATerm o_10 = t;
              int p_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
                  ATerm m_33 = NULL;
                  ATerm p_33 = NULL;
                  t = new_0(t);
                  {
                    m_33 = t;
                    {
                      if(((k_33 != NULL) && (k_33 != m_33)))
                        _fail(m_33);
                      else
                        k_33 = m_33;
                      {
                        t = not_null(o_32);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm n_33 = NULL,o_33 = NULL;
                            n_33 = t;
                            g_32 :
                            if(match_cons(n_33, sym_RootApp_1))
                              {
                                o_33 = ATgetArgument(n_33, 0);
                                {
                                  if(((j_33 != NULL) && (j_33 != o_33)))
                                    _fail(o_33);
                                  else
                                    j_33 = o_33;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_33));
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
                            p_33 = t;
                            if(((l_33 != NULL) && (l_33 != p_33)))
                              _fail(p_33);
                            else
                              l_33 = p_33;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_33))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_33))));
                  LocalPopChoice(p_10);
                }
              else
                {
                  t = o_10;
                  {
                    ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
                    ATerm v_33 = NULL;
                    ATerm b_34 = NULL;
                    t = new_0(t);
                    {
                      v_33 = t;
                      {
                        if(((t_33 != NULL) && (t_33 != v_33)))
                          _fail(v_33);
                        else
                          t_33 = v_33;
                        {
                          t = not_null(o_32);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm w_33 = NULL,x_33 = NULL,a_34 = NULL;
                              w_33 = t;
                              k_32 :
                              if(match_cons(w_33, sym_App_2))
                                {
                                  x_33 = ATgetArgument(w_33, 0);
                                  a_34 = ATgetArgument(w_33, 1);
                                  {
                                    if(((r_33 != NULL) && (r_33 != x_33)))
                                      _fail(x_33);
                                    else
                                      r_33 = x_33;
                                    {
                                      if(((s_33 != NULL) && (s_33 != a_34)))
                                        _fail(a_34);
                                      else
                                        s_33 = a_34;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_33));
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
                              b_34 = t;
                              if(((u_33 != NULL) && (u_33 != b_34)))
                                _fail(b_34);
                              else
                                u_33 = b_34;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_33), not_null(s_33), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_33)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_33))));
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
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
  f_35 = t;
  c_35 :
  if(match_cons(f_35, sym_Build_1))
    {
      g_35 = ATgetArgument(f_35, 0);
      d_35 :
      if(match_cons(g_35, sym_RootApp_1))
        {
          h_35 = ATgetArgument(g_35, 0);
          t = not_null(h_35);
        }
      else
        {
          if(match_cons(g_35, sym_App_2))
            {
              h_35 = ATgetArgument(g_35, 0);
              i_35 = ATgetArgument(g_35, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_35)), not_null(h_35));
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
ATerm As_2 (ATerm t, ATerm z_75 (ATerm), ATerm a_76 (ATerm))
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
  u_35 = t;
  t_35 :
  if(match_cons(u_35, sym_As_2))
    {
      v_35 = ATgetArgument(u_35, 0);
      w_35 = ATgetArgument(u_35, 1);
      {
        ATerm a_36 = NULL,c_36 = NULL;
        ATerm b_36 = NULL;
        t = SSLgetAnnotations(not_null(u_35));
        {
          b_36 = t;
          if(((a_36 != NULL) && (a_36 != b_36)))
            _fail(b_36);
          else
            a_36 = b_36;
        }
        {
          t = not_null(v_35);
          {
            ATerm e_36 = NULL;
            t = z_75(t);
            {
              c_36 = t;
              {
                t = not_null(w_35);
                {
                  ATerm g_36 = NULL;
                  t = a_76(t);
                  {
                    e_36 = t;
                    {
                      ATerm h_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(c_36), not_null(e_36)), not_null(a_36));
                      {
                        h_36 = t;
                        if(((g_36 != NULL) && (g_36 != h_36)))
                          _fail(h_36);
                        else
                          g_36 = h_36;
                      }
                      t = not_null(g_36);
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
ATerm Prim_2 (ATerm t, ATerm h_79 (ATerm), ATerm i_79 (ATerm))
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym_Prim_2))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      {
        ATerm z_36 = NULL,b_37 = NULL;
        ATerm a_37 = NULL;
        t = SSLgetAnnotations(not_null(t_36));
        {
          a_37 = t;
          if(((z_36 != NULL) && (z_36 != a_37)))
            _fail(a_37);
          else
            z_36 = a_37;
        }
        {
          t = not_null(u_36);
          {
            ATerm d_37 = NULL;
            t = h_79(t);
            {
              b_37 = t;
              {
                t = not_null(v_36);
                {
                  ATerm f_37 = NULL;
                  t = i_79(t);
                  {
                    d_37 = t;
                    {
                      ATerm i_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(b_37), not_null(d_37)), not_null(z_36));
                      {
                        i_37 = t;
                        if(((f_37 != NULL) && (f_37 != i_37)))
                          _fail(i_37);
                        else
                          f_37 = i_37;
                      }
                      t = not_null(f_37);
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
ATerm Explode_2 (ATerm t, ATerm v_75 (ATerm), ATerm w_75 (ATerm))
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym_Explode_2))
    {
      a_38 = ATgetArgument(z_37, 0);
      b_38 = ATgetArgument(z_37, 1);
      {
        ATerm h_38 = NULL,l_38 = NULL;
        ATerm k_38 = NULL;
        t = SSLgetAnnotations(not_null(z_37));
        {
          k_38 = t;
          if(((h_38 != NULL) && (h_38 != k_38)))
            _fail(k_38);
          else
            h_38 = k_38;
        }
        {
          t = not_null(a_38);
          {
            ATerm n_38 = NULL;
            t = v_75(t);
            {
              l_38 = t;
              {
                t = not_null(b_38);
                {
                  ATerm p_38 = NULL;
                  t = w_75(t);
                  {
                    n_38 = t;
                    {
                      ATerm q_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(l_38), not_null(n_38)), not_null(h_38));
                      {
                        q_38 = t;
                        if(((p_38 != NULL) && (p_38 != q_38)))
                          _fail(q_38);
                        else
                          p_38 = q_38;
                      }
                      t = not_null(p_38);
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
ATerm Op_2 (ATerm t, ATerm h_77 (ATerm), ATerm i_77 (ATerm))
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  b_39 :
  if(match_cons(e_39, sym_Op_2))
    {
      f_39 = ATgetArgument(e_39, 0);
      g_39 = ATgetArgument(e_39, 1);
      {
        ATerm l_39 = NULL,n_39 = NULL;
        ATerm m_39 = NULL;
        t = SSLgetAnnotations(not_null(e_39));
        {
          m_39 = t;
          if(((l_39 != NULL) && (l_39 != m_39)))
            _fail(m_39);
          else
            l_39 = m_39;
        }
        {
          t = not_null(f_39);
          {
            ATerm q_39 = NULL;
            t = h_77(t);
            {
              n_39 = t;
              {
                t = not_null(g_39);
                {
                  ATerm s_39 = NULL;
                  t = i_77(t);
                  {
                    q_39 = t;
                    {
                      ATerm t_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(n_39), not_null(q_39)), not_null(l_39));
                      {
                        t_39 = t;
                        if(((s_39 != NULL) && (s_39 != t_39)))
                          _fail(t_39);
                        else
                          s_39 = t_39;
                      }
                      t = not_null(s_39);
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
ATerm pat_td_1 (ATerm t, ATerm g_109 (ATerm))
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_109(t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm v_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, g_109);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            LocalPopChoice(x_10);
          }
        else
          {
            t = v_10;
            {
              ATerm z_10 = t;
              int c_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, g_109);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
                  LocalPopChoice(c_11);
                }
              else
                {
                  t = z_10;
                  {
                    ATerm d_11 = t;
                    int e_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, g_109);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        LocalPopChoice(e_11);
                      }
                    else
                      {
                        t = d_11;
                        {
                          ATerm f_11 = t;
                          int g_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_1 (ATerm t)
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, g_109);
                                  return(t);
                                }
                                t = fetch_1(t, v_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, u_1);
                              LocalPopChoice(g_11);
                            }
                          else
                            {
                              t = f_11;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, g_109);
                                  return(t);
                                }
                                t = As_2(t, _id, w_1);
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
ATerm Bapp0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL;
  k_40 = t;
  j_40 :
  if(match_cons(k_40, sym_Build_1))
    {
      l_40 = ATgetArgument(k_40, 0);
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_40 = NULL,o_40 = NULL;
            ATerm s_40 = NULL;
            t = not_null(l_40);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
                p_40 = t;
                c_40 :
                if(match_cons(p_40, sym_RootApp_1))
                  {
                    q_40 = ATgetArgument(p_40, 0);
                    d_40 :
                    if(match_cons(q_40, sym_Build_1))
                      {
                        r_40 = ATgetArgument(q_40, 0);
                        {
                          if(((n_40 != NULL) && (n_40 != r_40)))
                            _fail(r_40);
                          else
                            n_40 = r_40;
                          t = not_null(n_40);
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
                s_40 = t;
                if(((o_40 != NULL) && (o_40 != s_40)))
                  _fail(s_40);
                else
                  o_40 = s_40;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(o_40));
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
              ATerm b_41 = NULL;
              t = not_null(l_40);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
                  x_40 = t;
                  g_40 :
                  if(match_cons(x_40, sym_App_2))
                    {
                      y_40 = ATgetArgument(x_40, 0);
                      a_41 = ATgetArgument(x_40, 1);
                      h_40 :
                      if(match_cons(y_40, sym_Build_1))
                        {
                          z_40 = ATgetArgument(y_40, 0);
                          {
                            if(((v_40 != NULL) && (v_40 != z_40)))
                              _fail(z_40);
                            else
                              v_40 = z_40;
                            {
                              if(((u_40 != NULL) && (u_40 != a_41)))
                                _fail(a_41);
                              else
                                u_40 = a_41;
                              t = not_null(v_40);
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
                  b_41 = t;
                  if(((w_40 != NULL) && (w_40 != b_41)))
                    _fail(b_41);
                  else
                    w_40 = b_41;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(w_40));
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
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
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
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,u_42 = NULL,v_42 = NULL;
  u_42 = t;
  f_42 :
  if(match_cons(u_42, sym_InfixApp_3))
    {
      v_42 = ATgetArgument(u_42, 0);
      k_42 = ATgetArgument(u_42, 1);
      j_42 = ATgetArgument(u_42, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(k_42), (ATerm) ATmakeAppl(sym_Op_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_42)), not_null(v_42))));
    }
  else
    {
      if(match_cons(u_42, sym_BAM_3))
        {
          v_42 = ATgetArgument(u_42, 0);
          k_42 = ATgetArgument(u_42, 1);
          j_42 = ATgetArgument(u_42, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(j_42))), not_null(v_42)), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_42))));
        }
      else
        {
          if(match_cons(u_42, sym_AM_2))
            {
              v_42 = ATgetArgument(u_42, 0);
              k_42 = ATgetArgument(u_42, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_42), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_42)));
            }
          else
            {
              if(match_cons(u_42, sym_MA_2))
                {
                  v_42 = ATgetArgument(u_42, 0);
                  k_42 = ATgetArgument(u_42, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_42)), not_null(k_42));
                }
              else
                {
                  if(match_cons(u_42, sym_BA_2))
                    {
                      v_42 = ATgetArgument(u_42, 0);
                      k_42 = ATgetArgument(u_42, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_42)), not_null(v_42));
                    }
                  else
                    {
                      if(match_cons(u_42, sym_Lets_2))
                        {
                          v_42 = ATgetArgument(u_42, 0);
                          k_42 = ATgetArgument(u_42, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_42), not_null(k_42));
                        }
                      else
                        {
                          if(match_cons(u_42, sym_LChoices_1))
                            {
                              v_42 = ATgetArgument(u_42, 0);
                              g_42 :
                              if(((ATgetType(v_42) == AT_LIST) && ((ATermList) v_42 != ATempty)))
                                {
                                  l_42 = ATgetFirst((ATermList) v_42);
                                  m_42 = (ATerm) ATgetNext((ATermList) v_42);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_42), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(m_42)));
                                }
                              else
                                {
                                  if(((ATermList) v_42 == ATempty))
                                    {
                                      t = term_b_9;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(u_42, sym_Choices_1))
                                {
                                  v_42 = ATgetArgument(u_42, 0);
                                  h_42 :
                                  if(((ATgetType(v_42) == AT_LIST) && ((ATermList) v_42 != ATempty)))
                                    {
                                      l_42 = ATgetFirst((ATermList) v_42);
                                      m_42 = (ATerm) ATgetNext((ATermList) v_42);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_42), (ATerm) ATmakeAppl(sym_Choices_1, not_null(m_42)));
                                    }
                                  else
                                    {
                                      if(((ATermList) v_42 == ATempty))
                                        {
                                          t = term_b_9;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(u_42, sym_Seqs_1))
                                    {
                                      v_42 = ATgetArgument(u_42, 0);
                                      i_42 :
                                      if(((ATgetType(v_42) == AT_LIST) && ((ATermList) v_42 != ATempty)))
                                        {
                                          l_42 = ATgetFirst((ATermList) v_42);
                                          m_42 = (ATerm) ATgetNext((ATermList) v_42);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_42), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_42)));
                                        }
                                      else
                                        {
                                          if(((ATermList) v_42 == ATempty))
                                            {
                                              t = term_r_11;
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
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL;
  l_44 = t;
  i_44 :
  if(match_cons(l_44, sym__2))
    {
      m_44 = ATgetArgument(l_44, 0);
      p_44 = ATgetArgument(l_44, 1);
      j_44 :
      if(match_cons(m_44, sym__2))
        {
          n_44 = ATgetArgument(m_44, 0);
          o_44 = ATgetArgument(m_44, 1);
          k_44 :
          if(match_cons(p_44, sym__2))
            {
              q_44 = ATgetArgument(p_44, 0);
              r_44 = ATgetArgument(p_44, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_44)), not_null(n_44)), (ATerm) ATinsert(CheckATermList(not_null(r_44)), not_null(o_44)));
            }
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
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  y_44 :
  if(((ATgetType(z_44) == AT_LIST) && ((ATermList) z_44 != ATempty)))
    {
      a_45 = ATgetFirst((ATermList) z_44);
      b_45 = (ATerm) ATgetNext((ATermList) z_44);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_45), not_null(b_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  g_45 :
  if(((ATermList) h_45 == ATempty))
    {
      t = term_s_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm r_99 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, r_99);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL;
  ATerm t_45 (ATerm t)
  {
    ATerm q_45 = NULL;
    ATerm r_45 = NULL;
    t = not_null(n_45);
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
          r_45 = t;
          if(((q_45 != NULL) && (q_45 != r_45)))
            _fail(r_45);
          else
            q_45 = r_45;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_45)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_45)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_45))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_45))));
    return(t);
  }
  ATerm u_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_45))));
    return(t);
  }
  n_45 = t;
  m_45 :
  if(match_cons(n_45, sym_Var_1))
    {
      o_45 = ATgetArgument(n_45, 0);
      {
        ATerm x_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_45(t);
            LocalPopChoice(z_11);
          }
        else
          {
            t = x_11;
            t = u_45(t);
          }
      }
    }
  else
    {
      t = t_45(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_Var_1))
    {
      g_46 = ATgetArgument(f_46, 0);
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_46 = NULL,l_46 = NULL;
            ATerm k_46 = NULL;
            t = SSLgetAnnotations(not_null(f_46));
            {
              k_46 = t;
              if(((j_46 != NULL) && (j_46 != k_46)))
                _fail(k_46);
              else
                j_46 = k_46;
            }
            {
              t = not_null(g_46);
              {
                ATerm n_46 = NULL;
                t = o_0(t);
                {
                  l_46 = t;
                  {
                    ATerm o_46 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_46)), not_null(j_46));
                    {
                      o_46 = t;
                      if(((n_46 != NULL) && (n_46 != o_46)))
                        _fail(o_46);
                      else
                        n_46 = o_46;
                    }
                    t = not_null(n_46);
                  }
                }
              }
            }
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
            {
              ATerm r_46 = NULL,t_46 = NULL;
              ATerm s_46 = NULL;
              t = SSLgetAnnotations(not_null(f_46));
              {
                s_46 = t;
                if(((r_46 != NULL) && (r_46 != s_46)))
                  _fail(s_46);
                else
                  r_46 = s_46;
              }
              {
                t = not_null(g_46);
                {
                  ATerm v_46 = NULL;
                  t = o_0(t);
                  {
                    t_46 = t;
                    {
                      ATerm w_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_46)), not_null(r_46));
                      {
                        w_46 = t;
                        if(((v_46 != NULL) && (v_46 != w_46)))
                          _fail(w_46);
                        else
                          v_46 = w_46;
                      }
                      t = not_null(v_46);
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
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
  l_47 = t;
  k_47 :
  if(match_cons(l_47, sym_Prim_2))
    {
      m_47 = ATgetArgument(l_47, 0);
      n_47 = ATgetArgument(l_47, 1);
      {
        ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
        ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
        t = not_null(n_47);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm e_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_12;
              }
            return(t);
          }
          t = fetch_1(t, z_1);
          {
            t = not_null(n_47);
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
                  t_47 = t;
                  i_47 :
                  if(match_cons(t_47, sym__2))
                    {
                      u_47 = ATgetArgument(t_47, 0);
                      v_47 = ATgetArgument(t_47, 1);
                      j_47 :
                      if(match_cons(v_47, sym__2))
                        {
                          w_47 = ATgetArgument(v_47, 0);
                          x_47 = ATgetArgument(v_47, 1);
                          {
                            if(((q_47 != NULL) && (q_47 != u_47)))
                              _fail(u_47);
                            else
                              q_47 = u_47;
                            {
                              if(((r_47 != NULL) && (r_47 != w_47)))
                                _fail(w_47);
                              else
                                r_47 = w_47;
                              if(((s_47 != NULL) && (s_47 != x_47)))
                                _fail(x_47);
                              else
                                s_47 = x_47;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(r_47)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(m_47), not_null(s_47))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm y_93 (ATerm), ATerm z_93 (ATerm))
{
  ATerm a_48 (ATerm t)
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_93(t);
        t = a_48(t);
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = z_93(t);
      }
    return(t);
  }
  t = a_48(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm b_94 (ATerm))
{
  t = repeat_2(t, b_94, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm f_48 = NULL;
  f_48 = t;
  e_48 :
  if(match_cons(f_48, sym_Wld_0))
    {
      ATerm h_48 = NULL,j_48 = NULL;
      ATerm h_12;
      h_12 = t;
      {
        ATerm i_48 = NULL;
        t = SSLgetAnnotations(not_null(f_48));
        {
          i_48 = t;
          if(((h_48 != NULL) && (h_48 != i_48)))
            _fail(i_48);
          else
            h_48 = i_48;
        }
      }
      t = h_12;
      {
        ATerm k_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(h_48));
        {
          k_48 = t;
          if(((j_48 != NULL) && (j_48 != k_48)))
            _fail(k_48);
          else
            j_48 = k_48;
        }
        t = not_null(j_48);
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
  ATerm m_12 = t;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
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
      t = m_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm))
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL;
  u_48 = t;
  t_48 :
  if(match_cons(u_48, sym_App_2))
    {
      v_48 = ATgetArgument(u_48, 0);
      w_48 = ATgetArgument(u_48, 1);
      {
        ATerm e_49 = NULL,g_49 = NULL;
        ATerm f_49 = NULL;
        t = SSLgetAnnotations(not_null(u_48));
        {
          f_49 = t;
          if(((e_49 != NULL) && (e_49 != f_49)))
            _fail(f_49);
          else
            e_49 = f_49;
        }
        {
          t = not_null(v_48);
          {
            ATerm i_49 = NULL;
            t = p_75(t);
            {
              g_49 = t;
              {
                t = not_null(w_48);
                {
                  ATerm o_49 = NULL;
                  t = q_75(t);
                  {
                    i_49 = t;
                    {
                      ATerm p_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(g_49), not_null(i_49)), not_null(e_49));
                      {
                        p_49 = t;
                        if(((o_49 != NULL) && (o_49 != p_49)))
                          _fail(p_49);
                        else
                          o_49 = p_49;
                      }
                      t = not_null(o_49);
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
ATerm Con_3 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm), ATerm o_75 (ATerm))
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  k_50 = t;
  j_50 :
  if(match_cons(k_50, sym_Con_3))
    {
      l_50 = ATgetArgument(k_50, 0);
      m_50 = ATgetArgument(k_50, 1);
      n_50 = ATgetArgument(k_50, 2);
      {
        ATerm s_50 = NULL,u_50 = NULL;
        ATerm t_50 = NULL;
        t = SSLgetAnnotations(not_null(k_50));
        {
          t_50 = t;
          if(((s_50 != NULL) && (s_50 != t_50)))
            _fail(t_50);
          else
            s_50 = t_50;
        }
        {
          t = not_null(l_50);
          {
            ATerm w_50 = NULL;
            t = m_75(t);
            {
              u_50 = t;
              {
                t = not_null(m_50);
                {
                  ATerm y_50 = NULL;
                  t = n_75(t);
                  {
                    w_50 = t;
                    {
                      t = not_null(n_50);
                      {
                        ATerm a_51 = NULL;
                        t = o_75(t);
                        {
                          y_50 = t;
                          {
                            ATerm b_51 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(u_50), not_null(w_50), not_null(y_50)), not_null(s_50));
                            {
                              b_51 = t;
                              if(((a_51 != NULL) && (a_51 != b_51)))
                                _fail(b_51);
                              else
                                a_51 = b_51;
                            }
                            t = not_null(a_51);
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
  ATerm p_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm q_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(x_12);
          }
        else
          {
            t = q_12;
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
      t = p_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
  m_51 = t;
  k_51 :
  if(match_cons(m_51, sym_SRule_1))
    {
      n_51 = ATgetArgument(m_51, 0);
      l_51 :
      if(match_cons(n_51, sym_StratRule_3))
        {
          o_51 = ATgetArgument(n_51, 0);
          p_51 = ATgetArgument(n_51, 1);
          q_51 = ATgetArgument(n_51, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_51)), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_51))), not_null(o_51)));
        }
      else
        {
          if(match_cons(n_51, sym_Rule_3))
            {
              o_51 = ATgetArgument(n_51, 0);
              p_51 = ATgetArgument(n_51, 1);
              q_51 = ATgetArgument(n_51, 2);
              {
                t = not_null(o_51);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(p_51);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(p_51))), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_51))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_51))));
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
ATerm Scope_2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  f_52 = t;
  e_52 :
  if(match_cons(f_52, sym_Scope_2))
    {
      g_52 = ATgetArgument(f_52, 0);
      h_52 = ATgetArgument(f_52, 1);
      {
        ATerm l_52 = NULL,s_52 = NULL;
        ATerm m_52 = NULL;
        t = SSLgetAnnotations(not_null(f_52));
        {
          m_52 = t;
          if(((l_52 != NULL) && (l_52 != m_52)))
            _fail(m_52);
          else
            l_52 = m_52;
        }
        {
          t = not_null(g_52);
          {
            ATerm u_52 = NULL;
            t = e_79(t);
            {
              s_52 = t;
              {
                t = not_null(h_52);
                {
                  ATerm w_52 = NULL;
                  t = f_79(t);
                  {
                    u_52 = t;
                    {
                      ATerm x_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(s_52), not_null(u_52)), not_null(l_52));
                      {
                        x_52 = t;
                        if(((w_52 != NULL) && (w_52 != x_52)))
                          _fail(x_52);
                        else
                          w_52 = x_52;
                      }
                      t = not_null(w_52);
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
ATerm oncetd_1 (ATerm t, ATerm s_103 (ATerm))
{
  ATerm f_53 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_103(t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = _one(t, f_53);
      }
    return(t);
  }
  t = f_53(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
  g_54 = t;
  e_54 :
  if(match_cons(g_54, sym_SRule_1))
    {
      h_54 = ATgetArgument(g_54, 0);
      f_54 :
      if(match_cons(h_54, sym_Rule_3))
        {
          i_54 = ATgetArgument(h_54, 0);
          j_54 = ATgetArgument(h_54, 1);
          k_54 = ATgetArgument(h_54, 2);
          {
            ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL;
            ATerm k_55 = NULL;
            ATerm q_55 = NULL;
            t = new_0(t);
            {
              k_55 = t;
              {
                if(((h_55 != NULL) && (h_55 != k_55)))
                  _fail(k_55);
                else
                  h_55 = k_55;
                {
                  t = not_null(i_54);
                  {
                    ATerm y_55 = NULL;
                    ATerm d_2 (ATerm t)
                    {
                      ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
                      l_55 = t;
                      j_53 :
                      if(match_cons(l_55, sym_Con_3))
                        {
                          m_55 = ATgetArgument(l_55, 0);
                          o_55 = ATgetArgument(l_55, 1);
                          p_55 = ATgetArgument(l_55, 2);
                          k_53 :
                          if(match_cons(m_55, sym_Var_1))
                            {
                              n_55 = ATgetArgument(m_55, 0);
                              {
                                if(((d_55 != NULL) && (d_55 != n_55)))
                                  _fail(n_55);
                                else
                                  d_55 = n_55;
                                {
                                  if(((b_55 != NULL) && (b_55 != o_55)))
                                    _fail(o_55);
                                  else
                                    b_55 = o_55;
                                  {
                                    if(((z_54 != NULL) && (z_54 != p_55)))
                                      _fail(p_55);
                                    else
                                      z_54 = p_55;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_55));
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
                      q_55 = t;
                      {
                        if(((i_55 != NULL) && (i_55 != q_55)))
                          _fail(q_55);
                        else
                          i_55 = q_55;
                        {
                          t = not_null(j_54);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
                              r_55 = t;
                              y_53 :
                              if(match_cons(r_55, sym_Con_3))
                                {
                                  s_55 = ATgetArgument(r_55, 0);
                                  u_55 = ATgetArgument(r_55, 1);
                                  v_55 = ATgetArgument(r_55, 2);
                                  z_53 :
                                  if(match_cons(s_55, sym_Var_1))
                                    {
                                      t_55 = ATgetArgument(s_55, 0);
                                      a_54 :
                                      if(match_cons(v_55, sym_Call_2))
                                        {
                                          w_55 = ATgetArgument(v_55, 0);
                                          x_55 = ATgetArgument(v_55, 1);
                                          b_54 :
                                          if(((ATermList) x_55 == ATempty))
                                            {
                                              {
                                                if(((d_55 != NULL) && (d_55 != t_55)))
                                                  _fail(t_55);
                                                else
                                                  d_55 = t_55;
                                                {
                                                  if(((c_55 != NULL) && (c_55 != u_55)))
                                                    _fail(u_55);
                                                  else
                                                    c_55 = u_55;
                                                  {
                                                    if(((a_55 != NULL) && (a_55 != w_55)))
                                                      _fail(w_55);
                                                    else
                                                      a_55 = w_55;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_55));
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
                              y_55 = t;
                              if(((j_55 != NULL) && (j_55 != y_55)))
                                _fail(y_55);
                              else
                                j_55 = y_55;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_55)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_55), not_null(j_55), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_54), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(a_55), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_55), not_null(c_55), term_r_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_55)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_55)))))));
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
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm c_102 (ATerm))
{
  t = c_102(t);
  {
    ATerm g_2 (ATerm t)
    {
      t = topdown_1(t, c_102);
      return(t);
    }
    t = _all(t, g_2);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm i_2 (ATerm t)
      {
        ATerm h_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(n_13);
          }
        else
          {
            t = h_13;
            {
              ATerm o_13 = t;
              int t_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(t_13);
                }
              else
                {
                  t = o_13;
                  {
                    ATerm u_13 = t;
                    int v_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(v_13);
                      }
                    else
                      {
                        t = u_13;
                        {
                          ATerm w_13 = t;
                          int x_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(x_13);
                            }
                          else
                            {
                              t = w_13;
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
      t = repeat_1(t, i_2);
    }
    return(t);
  }
  t = topdown_1(t, h_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm k_56 = NULL;
  k_56 = t;
  j_56 :
  if(match_cons(k_56, sym__0))
    {
      ATerm m_56 = NULL,o_56 = NULL;
      ATerm y_13;
      y_13 = t;
      {
        ATerm n_56 = NULL;
        t = SSLgetAnnotations(not_null(k_56));
        {
          n_56 = t;
          if(((m_56 != NULL) && (m_56 != n_56)))
            _fail(n_56);
          else
            m_56 = n_56;
        }
      }
      t = y_13;
      {
        ATerm p_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(m_56));
        {
          p_56 = t;
          if(((o_56 != NULL) && (o_56 != p_56)))
            _fail(p_56);
          else
            o_56 = p_56;
        }
        t = not_null(o_56);
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
  ATerm b_57 = NULL;
  ATerm d_57 = NULL,e_57 = NULL,m_57 = NULL,o_57 = NULL;
  b_57 = t;
  {
    ATerm z_13;
    z_13 = t;
    {
      ATerm f_57 = NULL;
      ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
      t = not_null(b_57);
      {
        f_57 = t;
        {
          t = SSL_explode_term(not_null(f_57));
          {
            h_57 = t;
            w_56 :
            if(match_cons(h_57, sym__2))
              {
                i_57 = ATgetArgument(h_57, 0);
                j_57 = ATgetArgument(h_57, 1);
                x_56 :
                if(match_string(i_57, ""))
                  {
                    y_56 :
                    if(((ATgetType(j_57) == AT_LIST) && ((ATermList) j_57 != ATempty)))
                      {
                        k_57 = ATgetFirst((ATermList) j_57);
                        l_57 = (ATerm) ATgetNext((ATermList) j_57);
                        {
                          if(((d_57 != NULL) && (d_57 != k_57)))
                            _fail(k_57);
                          else
                            d_57 = k_57;
                          if(((e_57 != NULL) && (e_57 != l_57)))
                            _fail(l_57);
                          else
                            e_57 = l_57;
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
    t = z_13;
    {
      ATerm a_14;
      a_14 = t;
      {
        ATerm n_57 = NULL;
        t = term_t_9;
        {
          n_57 = t;
          if(((m_57 != NULL) && (m_57 != n_57)))
            _fail(n_57);
          else
            m_57 = n_57;
        }
      }
      t = a_14;
      {
        t = SSL_mkterm(not_null(m_57), not_null(e_57));
        {
          o_57 = t;
          t = not_null(o_57);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm g_58 = NULL;
  ATerm i_58 = NULL,j_58 = NULL;
  g_58 = t;
  {
    ATerm k_58 = NULL;
    ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL,s_58 = NULL,t_58 = NULL;
    t = not_null(g_58);
    {
      k_58 = t;
      {
        t = SSL_explode_term(not_null(k_58));
        {
          m_58 = t;
          y_57 :
          if(match_cons(m_58, sym__2))
            {
              n_58 = ATgetArgument(m_58, 0);
              o_58 = ATgetArgument(m_58, 1);
              e_58 :
              if(match_string(n_58, ""))
                {
                  f_58 :
                  if(((ATgetType(o_58) == AT_LIST) && ((ATermList) o_58 != ATempty)))
                    {
                      s_58 = ATgetFirst((ATermList) o_58);
                      t_58 = (ATerm) ATgetNext((ATermList) o_58);
                      {
                        if(((j_58 != NULL) && (j_58 != s_58)))
                          _fail(s_58);
                        else
                          j_58 = s_58;
                        if(((i_58 != NULL) && (i_58 != t_58)))
                          _fail(t_58);
                        else
                          i_58 = t_58;
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
    t = not_null(j_58);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm l_101 (ATerm))
{
  ATerm l_59 = NULL,n_59 = NULL,p_59 = NULL;
  ATerm r_59 (ATerm t)
  {
    ATerm d_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_59 = NULL,j_59 = NULL;
        ATerm k_14;
        k_14 = t;
        {
          ATerm i_59 = NULL;
          t = map_1(t, Thd_0);
          {
            t = l_101(t);
            {
              i_59 = t;
              if(((h_59 != NULL) && (h_59 != i_59)))
                _fail(i_59);
              else
                h_59 = i_59;
            }
          }
        }
        t = k_14;
        {
          ATerm k_59 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = r_59(t);
            {
              k_59 = t;
              if(((j_59 != NULL) && (j_59 != k_59)))
                _fail(k_59);
              else
                j_59 = k_59;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(j_59)), not_null(h_59));
        }
        LocalPopChoice(g_14);
      }
    else
      {
        t = d_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = r_59(t);
  {
    ATerm l_14;
    l_14 = t;
    {
      ATerm m_59 = NULL;
      m_59 = t;
      if(((l_59 != NULL) && (l_59 != m_59)))
        _fail(m_59);
      else
        l_59 = m_59;
    }
    t = l_14;
    {
      ATerm m_14;
      m_14 = t;
      {
        ATerm o_59 = NULL;
        t = term_t_9;
        {
          o_59 = t;
          if(((n_59 != NULL) && (n_59 != o_59)))
            _fail(o_59);
          else
            n_59 = o_59;
        }
      }
      t = m_14;
      {
        t = SSL_mkterm(not_null(n_59), not_null(l_59));
        {
          p_59 = t;
          t = not_null(p_59);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm v_62 = NULL;
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL;
  v_62 = t;
  {
    ATerm a_63 = NULL;
    ATerm j_64 = NULL;
    t = new_0(t);
    {
      a_63 = t;
      {
        if(((x_62 != NULL) && (x_62 != a_63)))
          _fail(a_63);
        else
          x_62 = a_63;
        {
          ATerm k_64 = NULL;
          t = new_0(t);
          {
            j_64 = t;
            {
              if(((y_62 != NULL) && (y_62 != j_64)))
                _fail(j_64);
              else
                y_62 = j_64;
              {
                t = new_0(t);
                {
                  k_64 = t;
                  if(((z_62 != NULL) && (z_62 != k_64)))
                    _fail(k_64);
                  else
                    z_62 = k_64;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_62)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_62)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_62)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_62))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(x_62), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_14), term_s_14)), not_null(y_62), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_62)), not_null(z_62), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_62)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL;
  r_64 = t;
  q_64 :
  if(match_cons(r_64, sym__2))
    {
      s_64 = ATgetArgument(r_64, 0);
      t_64 = ATgetArgument(r_64, 1);
      {
        ATerm t_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(s_64), not_null(t_64));
            LocalPopChoice(w_14);
          }
        else
          {
            t = t_14;
            t = SSL_subtr(not_null(s_64), not_null(t_64));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm c_91 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
    l_68 = t;
    y_64 :
    if(match_cons(l_68, sym__2))
      {
        m_68 = ATgetArgument(l_68, 0);
        n_68 = ATgetArgument(l_68, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(m_68), not_null(n_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL;
    q_68 = t;
    d_68 :
    if(match_cons(q_68, sym__3))
      {
        r_68 = ATgetArgument(q_68, 0);
        s_68 = ATgetArgument(q_68, 1);
        t_68 = ATgetArgument(q_68, 2);
        g_68 :
        if(match_int(r_68, 0))
          {
            t = not_null(t_68);
          }
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
  ATerm l_2 (ATerm t)
  {
    ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL;
    w_68 = t;
    k_68 :
    if(match_cons(w_68, sym__3))
      {
        x_68 = ATgetArgument(w_68, 0);
        y_68 = ATgetArgument(w_68, 1);
        z_68 = ATgetArgument(w_68, 2);
        {
          ATerm d_69 = NULL,f_69 = NULL;
          ATerm d_15;
          d_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_68), term_y_6);
            t = geq_0(t);
          }
          t = d_15;
          {
            ATerm e_15;
            e_15 = t;
            {
              ATerm e_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_68), term_y_6);
              {
                t = subt_0(t);
                {
                  e_69 = t;
                  if(((d_69 != NULL) && (d_69 != e_69)))
                    _fail(e_69);
                  else
                    d_69 = e_69;
                }
              }
            }
            t = e_15;
            {
              ATerm g_69 = NULL;
              t = not_null(y_68);
              {
                t = c_91(t);
                {
                  g_69 = t;
                  if(((f_69 != NULL) && (f_69 != g_69)))
                    _fail(g_69);
                  else
                    f_69 = g_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(d_69), not_null(y_68), (ATerm) ATinsert(CheckATermList(not_null(z_68)), not_null(f_69)));
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
  t = for_3(t, j_2, k_2, l_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
  r_69 = t;
  q_69 :
  if(match_cons(r_69, sym__2))
    {
      s_69 = ATgetArgument(r_69, 0);
      t_69 = ATgetArgument(r_69, 1);
      {
        ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
        ATerm z_69 = NULL;
        ATerm a_70 = NULL;
        t = new_0(t);
        {
          z_69 = t;
          {
            if(((w_69 != NULL) && (w_69 != z_69)))
              _fail(z_69);
            else
              w_69 = z_69;
            {
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
                    t = new_0(t);
                    {
                      b_70 = t;
                      if(((y_69 != NULL) && (y_69 != b_70)))
                        _fail(b_70);
                      else
                        y_69 = b_70;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_69)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_69)))), (ATerm) ATmakeAppl(sym_Op_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_69))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(w_69), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_14), term_s_14)), not_null(x_69), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_69)), not_null(y_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_69)));
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
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL;
  j_70 = t;
  h_70 :
  if(match_cons(j_70, sym__2))
    {
      k_70 = ATgetArgument(j_70, 0);
      l_70 = ATgetArgument(j_70, 1);
      i_70 :
      if(((ATermList) l_70 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm p_99 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, p_99);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL;
  p_70 = t;
  o_70 :
  if(((ATgetType(p_70) == AT_LIST) && ((ATermList) p_70 != ATempty)))
    {
      q_70 = ATgetFirst((ATermList) p_70);
      r_70 = (ATerm) ATgetNext((ATermList) p_70);
      t = not_null(r_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
  y_70 = t;
  w_70 :
  if(((ATgetType(y_70) == AT_LIST) && ((ATermList) y_70 != ATempty)))
    {
      z_70 = ATgetFirst((ATermList) y_70);
      a_71 = (ATerm) ATgetNext((ATermList) y_70);
      x_70 :
      if(((ATermList) a_71 == ATempty))
        {
          t = not_null(z_70);
        }
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
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  ATerm w_73 (ATerm t)
  {
    ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,y_72 = NULL;
    ATerm o_15;
    o_15 = t;
    {
      ATerm l_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
      ATerm m_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_71), term_y_6);
      {
        t = add_0(t);
        {
          m_72 = t;
          if(((l_72 != NULL) && (l_72 != m_72)))
            _fail(m_72);
          else
            l_72 = m_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_72), term_p_15);
        {
          t = copy_1(t, new_0);
          {
            n_72 = t;
            m_71 :
            if(((ATgetType(n_72) == AT_LIST) && ((ATermList) n_72 != ATempty)))
              {
                o_72 = ATgetFirst((ATermList) n_72);
                p_72 = (ATerm) ATgetNext((ATermList) n_72);
                {
                  ATerm q_72 = NULL;
                  if(((d_72 != NULL) && (d_72 != o_72)))
                    _fail(o_72);
                  else
                    d_72 = o_72;
                  {
                    if(((e_72 != NULL) && (e_72 != p_72)))
                      _fail(p_72);
                    else
                      e_72 = p_72;
                    {
                      t = not_null(e_72);
                      {
                        ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL;
                        t = last_0(t);
                        {
                          q_72 = t;
                          {
                            if(((c_72 != NULL) && (c_72 != q_72)))
                              _fail(q_72);
                            else
                              c_72 = q_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_72)), not_null(d_72)), not_null(e_72));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    r_72 = t;
                                    l_71 :
                                    if(match_cons(r_72, sym__6))
                                      {
                                        s_72 = ATgetArgument(r_72, 0);
                                        t_72 = ATgetArgument(r_72, 1);
                                        u_72 = ATgetArgument(r_72, 2);
                                        v_72 = ATgetArgument(r_72, 3);
                                        w_72 = ATgetArgument(r_72, 4);
                                        x_72 = ATgetArgument(r_72, 5);
                                        {
                                          if(((f_72 != NULL) && (f_72 != s_72)))
                                            _fail(s_72);
                                          else
                                            f_72 = s_72;
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
                                                  if(((k_72 != NULL) && (k_72 != x_72)))
                                                    _fail(x_72);
                                                  else
                                                    k_72 = x_72;
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
    t = o_15;
    {
      ATerm z_72 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_72)), not_null(h_72)), not_null(e_72));
      {
        t = concat_0(t);
        {
          z_72 = t;
          if(((y_72 != NULL) && (y_72 != z_72)))
            _fail(z_72);
          else
            y_72 = z_72;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_71), term_q_15), not_null(g_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(y_72)), not_null(d_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_71), not_null(i_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_71), not_null(k_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(f_72))))));
    }
    return(t);
  }
  ATerm x_73 (ATerm t)
  {
    ATerm b_73 = NULL;
    ATerm c_73 = NULL;
    t = new_0(t);
    {
      c_73 = t;
      if(((b_73 != NULL) && (b_73 != c_73)))
        _fail(c_73);
      else
        b_73 = c_73;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_71), term_q_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_71), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_71), (ATerm) ATempty))), term_r_11))));
    return(t);
  }
  ATerm a_74 (ATerm t)
  {
    ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,u_73 = NULL;
    ATerm r_15;
    r_15 = t;
    {
      ATerm m_73 = NULL;
      ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL;
      t = new_0(t);
      {
        m_73 = t;
        {
          if(((f_73 != NULL) && (f_73 != m_73)))
            _fail(m_73);
          else
            f_73 = m_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_71), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_73)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  n_73 = t;
                  r_71 :
                  if(match_cons(n_73, sym__6))
                    {
                      o_73 = ATgetArgument(n_73, 0);
                      p_73 = ATgetArgument(n_73, 1);
                      q_73 = ATgetArgument(n_73, 2);
                      r_73 = ATgetArgument(n_73, 3);
                      s_73 = ATgetArgument(n_73, 4);
                      t_73 = ATgetArgument(n_73, 5);
                      {
                        if(((g_73 != NULL) && (g_73 != o_73)))
                          _fail(o_73);
                        else
                          g_73 = o_73;
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
                                if(((l_73 != NULL) && (l_73 != t_73)))
                                  _fail(t_73);
                                else
                                  l_73 = t_73;
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
      ATerm v_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_73), not_null(k_73));
      {
        t = conc_0(t);
        {
          v_73 = t;
          if(((u_73 != NULL) && (u_73 != v_73)))
            _fail(v_73);
          else
            u_73 = v_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_71), term_s_15), not_null(h_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(u_73)), not_null(f_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_71), not_null(j_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(x_71), not_null(l_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_73))))));
    }
    return(t);
  }
  w_71 = t;
  t_71 :
  if(match_cons(w_71, sym__3))
    {
      x_71 = ATgetArgument(w_71, 0);
      y_71 = ATgetArgument(w_71, 1);
      z_71 = ATgetArgument(w_71, 2);
      u_71 :
      if(match_string(y_71, "T"))
        {
          v_71 :
          if(match_int(z_71, 0))
            {
              ATerm y_15 = t;
              int d_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_73(t);
                  LocalPopChoice(d_16);
                }
              else
                {
                  t = y_15;
                  t = x_73(t);
                }
            }
          else
            {
              t = w_73(t);
            }
        }
      else
        {
          if(match_string(y_71, "D"))
            {
              t = a_74(t);
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
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL;
  p_74 = t;
  m_74 :
  if(match_cons(p_74, sym__2))
    {
      q_74 = ATgetArgument(p_74, 0);
      v_74 = ATgetArgument(p_74, 1);
      n_74 :
      if(match_cons(q_74, sym__2))
        {
          r_74 = ATgetArgument(q_74, 0);
          u_74 = ATgetArgument(q_74, 1);
          o_74 :
          if(match_cons(r_74, sym_Mod_2))
            {
              s_74 = ATgetArgument(r_74, 0);
              t_74 = ATgetArgument(r_74, 1);
              {
                ATerm a_75 = NULL;
                ATerm b_75 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_74), not_null(t_74), not_null(u_74));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      b_75 = t;
                      if(((a_75 != NULL) && (a_75 != b_75)))
                        _fail(b_75);
                      else
                        a_75 = b_75;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_75), not_null(v_74));
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
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL;
  h_75 = t;
  f_75 :
  if(match_cons(h_75, sym__5))
    {
      i_75 = ATgetArgument(h_75, 0);
      l_75 = ATgetArgument(h_75, 1);
      r_75 = ATgetArgument(h_75, 2);
      s_75 = ATgetArgument(h_75, 3);
      t_75 = ATgetArgument(h_75, 4);
      g_75 :
      if(((ATgetType(i_75) == AT_LIST) && ((ATermList) i_75 != ATempty)))
        {
          j_75 = ATgetFirst((ATermList) i_75);
          k_75 = (ATerm) ATgetNext((ATermList) i_75);
          t = (ATerm) ATmakeAppl(sym__5, not_null(k_75), not_null(l_75), not_null(r_75), not_null(s_75), (ATerm) ATinsert(CheckATermList(not_null(t_75)), not_null(j_75)));
        }
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
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL;
  i_76 = t;
  g_76 :
  if(match_cons(i_76, sym__2))
    {
      j_76 = ATgetArgument(i_76, 0);
      k_76 = ATgetArgument(i_76, 1);
      h_76 :
      if(((ATgetType(k_76) == AT_LIST) && ((ATermList) k_76 != ATempty)))
        {
          l_76 = ATgetFirst((ATermList) k_76);
          m_76 = (ATerm) ATgetNext((ATermList) k_76);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_76)), not_null(l_76)), not_null(m_76));
        }
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
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL;
  t_76 = t;
  s_76 :
  if(match_cons(t_76, sym__2))
    {
      u_76 = ATgetArgument(t_76, 0);
      v_76 = ATgetArgument(t_76, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_76)), not_null(u_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL;
  f_77 = t;
  b_77 :
  if(match_cons(f_77, sym__2))
    {
      g_77 = ATgetArgument(f_77, 0);
      l_77 = ATgetArgument(f_77, 1);
      d_77 :
      if(((ATgetType(g_77) == AT_LIST) && ((ATermList) g_77 != ATempty)))
        {
          j_77 = ATgetFirst((ATermList) g_77);
          k_77 = (ATerm) ATgetNext((ATermList) g_77);
          e_77 :
          if(((ATgetType(l_77) == AT_LIST) && ((ATermList) l_77 != ATempty)))
            {
              m_77 = ATgetFirst((ATermList) l_77);
              n_77 = (ATerm) ATgetNext((ATermList) l_77);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_77), not_null(m_77)), (ATerm) ATmakeAppl(sym__2, not_null(k_77), not_null(n_77)));
            }
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
  ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL;
  x_77 = t;
  u_77 :
  if(match_cons(x_77, sym__2))
    {
      y_77 = ATgetArgument(x_77, 0);
      z_77 = ATgetArgument(x_77, 1);
      v_77 :
      if(((ATermList) y_77 == ATempty))
        {
          w_77 :
          if(((ATermList) z_77 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm))
{
  ATerm k_78 (ATerm t)
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_99(t);
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        {
          t = i_99(t);
          {
            t = _2(t, k_99, k_78);
            t = j_99(t);
          }
        }
      }
    return(t);
  }
  t = k_78(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm m_99 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, m_99);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL;
  v_78 = t;
  t_78 :
  if(((ATgetType(v_78) == AT_LIST) && ((ATermList) v_78 != ATempty)))
    {
      w_78 = ATgetFirst((ATermList) v_78);
      z_78 = (ATerm) ATgetNext((ATermList) v_78);
      u_78 :
      if(match_cons(w_78, sym__2))
        {
          x_78 = ATgetArgument(w_78, 0);
          y_78 = ATgetArgument(w_78, 1);
          {
            ATerm d_79 = NULL,g_79 = NULL,q_79 = NULL,w_79 = NULL;
            ATerm p_16;
            p_16 = t;
            {
              ATerm l_79 = NULL;
              ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL;
              t = not_null(y_78);
              {
                l_79 = t;
                {
                  t = SSL_explode_term(not_null(l_79));
                  {
                    n_79 = t;
                    o_78 :
                    if(match_cons(n_79, sym__2))
                      {
                        o_79 = ATgetArgument(n_79, 0);
                        p_79 = ATgetArgument(n_79, 1);
                        {
                          if(((d_79 != NULL) && (d_79 != o_79)))
                            _fail(o_79);
                          else
                            d_79 = o_79;
                          if(((g_79 != NULL) && (g_79 != p_79)))
                            _fail(p_79);
                          else
                            g_79 = p_79;
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
              ATerm u_16;
              u_16 = t;
              {
                ATerm r_79 = NULL;
                ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL;
                t = not_null(x_78);
                {
                  r_79 = t;
                  {
                    t = SSL_explode_term(not_null(r_79));
                    {
                      t_79 = t;
                      r_78 :
                      if(match_cons(t_79, sym__2))
                        {
                          u_79 = ATgetArgument(t_79, 0);
                          v_79 = ATgetArgument(t_79, 1);
                          {
                            if(((d_79 != NULL) && (d_79 != u_79)))
                              _fail(u_79);
                            else
                              d_79 = u_79;
                            if(((q_79 != NULL) && (q_79 != v_79)))
                              _fail(v_79);
                            else
                              q_79 = v_79;
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
              t = u_16;
              {
                ATerm y_79 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_79), not_null(g_79));
                {
                  t = zip_1(t, _id);
                  {
                    y_79 = t;
                    if(((w_79 != NULL) && (w_79 != y_79)))
                      _fail(y_79);
                    else
                      w_79 = y_79;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_79), not_null(z_78));
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
  ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL;
  p_80 = t;
  k_80 :
  if(((ATgetType(p_80) == AT_LIST) && ((ATermList) p_80 != ATempty)))
    {
      q_80 = ATgetFirst((ATermList) p_80);
      t_80 = (ATerm) ATgetNext((ATermList) p_80);
      l_80 :
      if(match_cons(q_80, sym__2))
        {
          r_80 = ATgetArgument(q_80, 0);
          s_80 = ATgetArgument(q_80, 1);
          {
            ATerm v_80 = NULL;
            if(((r_80 != NULL) && (r_80 != s_80)))
              _fail(s_80);
            else
              r_80 = s_80;
            {
              if(((v_80 != NULL) && (v_80 != t_80)))
                _fail(t_80);
              else
                v_80 = t_80;
              t = not_null(v_80);
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
ATerm diff_1 (ATerm t, ATerm t_91 (ATerm))
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
  z_80 = t;
  y_80 :
  if(match_cons(z_80, sym__2))
    {
      a_81 = ATgetArgument(z_80, 0);
      b_81 = ATgetArgument(z_80, 1);
      {
        t = not_null(a_81);
        {
          ATerm f_81 (ATerm t)
          {
            ATerm v_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(w_16);
              }
            else
              {
                t = v_16;
                {
                  ATerm e_17 = t;
                  int f_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_2 (ATerm t)
                      {
                        t = not_null(b_81);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_91, m_2);
                      t = f_81(t);
                      LocalPopChoice(f_17);
                    }
                  else
                    {
                      t = e_17;
                      t = Cons_2(t, _id, f_81);
                    }
                }
              }
            return(t);
          }
          t = f_81(t);
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
  ATerm g_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(o_17);
    }
  else
    {
      t = g_17;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm h_81 = NULL;
          h_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(h_81));
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          ATerm p_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_2 (ATerm t)
              {
                ATerm r_17 = t;
                int c_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(c_18);
                  }
                else
                  {
                    t = r_17;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, q_2);
              LocalPopChoice(q_17);
            }
          else
            {
              t = p_17;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, n_2, o_2, p_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm f_80 (ATerm))
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL;
  u_81 = t;
  s_81 :
  if(match_cons(u_81, sym__5))
    {
      v_81 = ATgetArgument(u_81, 0);
      y_81 = ATgetArgument(u_81, 1);
      z_81 = ATgetArgument(u_81, 2);
      a_82 = ATgetArgument(u_81, 3);
      b_82 = ATgetArgument(u_81, 4);
      t_81 :
      if(((ATgetType(v_81) == AT_LIST) && ((ATermList) v_81 != ATempty)))
        {
          w_81 = ATgetFirst((ATermList) v_81);
          x_81 = (ATerm) ATgetNext((ATermList) v_81);
          {
            ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL,r_82 = NULL,x_82 = NULL,z_82 = NULL,b_83 = NULL;
            ATerm e_18;
            e_18 = t;
            {
              ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_81), not_null(z_81));
              {
                t = d_80(t);
                {
                  s_82 = t;
                  o_81 :
                  if(match_cons(s_82, sym__2))
                    {
                      t_82 = ATgetArgument(s_82, 0);
                      u_82 = ATgetArgument(s_82, 1);
                      {
                        ATerm v_82 = NULL;
                        if(((j_82 != NULL) && (j_82 != t_82)))
                          _fail(t_82);
                        else
                          j_82 = t_82;
                        {
                          if(((i_82 != NULL) && (i_82 != u_82)))
                            _fail(u_82);
                          else
                            i_82 = u_82;
                          {
                            t = not_null(j_82);
                            {
                              ATerm w_82 = NULL;
                              t = e_80(t);
                              {
                                v_82 = t;
                                {
                                  if(((k_82 != NULL) && (k_82 != v_82)))
                                    _fail(v_82);
                                  else
                                    k_82 = v_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_82), not_null(y_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        w_82 = t;
                                        if(((r_82 != NULL) && (r_82 != w_82)))
                                          _fail(w_82);
                                        else
                                          r_82 = w_82;
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
            t = e_18;
            {
              ATerm f_18;
              f_18 = t;
              {
                ATerm y_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_82), not_null(x_81));
                {
                  t = conc_0(t);
                  {
                    y_82 = t;
                    if(((x_82 != NULL) && (x_82 != y_82)))
                      _fail(y_82);
                    else
                      x_82 = y_82;
                  }
                }
              }
              t = f_18;
              {
                ATerm g_18;
                g_18 = t;
                {
                  ATerm a_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_82), not_null(y_81));
                  {
                    t = conc_0(t);
                    {
                      a_83 = t;
                      if(((z_82 != NULL) && (z_82 != a_83)))
                        _fail(a_83);
                      else
                        z_82 = a_83;
                    }
                  }
                }
                t = g_18;
                {
                  ATerm c_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_81), not_null(j_82), not_null(a_82));
                  {
                    t = f_80(t);
                    {
                      c_83 = t;
                      if(((b_83 != NULL) && (b_83 != c_83)))
                        _fail(c_83);
                      else
                        b_83 = c_83;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(x_82), not_null(z_82), not_null(i_82), not_null(b_83), not_null(b_82));
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
  ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,r_83 = NULL,u_83 = NULL,v_83 = NULL;
  n_83 = t;
  l_83 :
  if(match_cons(n_83, sym__5))
    {
      o_83 = ATgetArgument(n_83, 0);
      p_83 = ATgetArgument(n_83, 1);
      r_83 = ATgetArgument(n_83, 2);
      u_83 = ATgetArgument(n_83, 3);
      v_83 = ATgetArgument(n_83, 4);
      m_83 :
      if(((ATermList) o_83 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_83), not_null(v_83));
        }
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
  ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL;
  d_84 = t;
  c_84 :
  if(match_cons(d_84, sym__3))
    {
      e_84 = ATgetArgument(d_84, 0);
      f_84 = ATgetArgument(d_84, 1);
      g_84 = ATgetArgument(d_84, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(e_84), not_null(e_84), not_null(f_84), not_null(g_84), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm p_94 (ATerm), ATerm q_94 (ATerm))
{
  ATerm l_84 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_94(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        {
          t = q_94(t);
          t = l_84(t);
        }
      }
    return(t);
  }
  t = l_84(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm))
{
  t = s_94(t);
  t = while_not_2(t, t_94, u_94);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm k_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, m_80, n_80, o_80);
        LocalPopChoice(p_18);
      }
    else
      {
        t = k_18;
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
      ATerm u_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, u_2);
    }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL;
    o_84 = t;
    n_84 :
    if(match_cons(o_84, sym__3))
      {
        p_84 = ATgetArgument(o_84, 0);
        q_84 = ATgetArgument(o_84, 1);
        r_84 = ATgetArgument(o_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(r_84)), not_null(q_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, s_2, t_2);
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_y_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm x_79 (ATerm))
{
  ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL;
  a_85 = t;
  z_84 :
  if(match_cons(a_85, sym__2))
    {
      b_85 = ATgetArgument(a_85, 0);
      c_85 = ATgetArgument(a_85, 1);
      {
        ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL;
        ATerm t_18;
        t_18 = t;
        {
          ATerm m_85 = NULL;
          ATerm n_85 = NULL,p_85 = NULL,q_85 = NULL;
          t = x_79(t);
          {
            m_85 = t;
            {
              if(((f_85 != NULL) && (f_85 != m_85)))
                _fail(m_85);
              else
                f_85 = m_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_85), not_null(b_85), not_null(c_85));
                {
                  t = table_push_0(t);
                  {
                    ATerm u_18 = t;
                    int v_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_85), term_b_19);
                        t = table_get_0(t);
                        LocalPopChoice(v_18);
                      }
                    else
                      {
                        t = u_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_85 = t;
                      y_84 :
                      if(((ATgetType(n_85) == AT_LIST) && ((ATermList) n_85 != ATempty)))
                        {
                          p_85 = ATgetFirst((ATermList) n_85);
                          q_85 = (ATerm) ATgetNext((ATermList) n_85);
                          {
                            if(((g_85 != NULL) && (g_85 != p_85)))
                              _fail(p_85);
                            else
                              g_85 = p_85;
                            {
                              if(((h_85 != NULL) && (h_85 != q_85)))
                                _fail(q_85);
                              else
                                h_85 = q_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(f_85), term_b_19, (ATerm) ATinsert(CheckATermList(not_null(h_85)), (ATerm) ATinsert(CheckATermList(not_null(g_85)), not_null(b_85))));
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
        t = t_18;
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
  ATerm h_86 = NULL;
  ATerm j_86 = NULL;
  h_86 = t;
  {
    ATerm k_86 = NULL,m_86 = NULL,o_86 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(h_86));
    {
      ATerm v_2 (ATerm t)
      {
        t = term_d_19;
        return(t);
      }
      t = rewrite_1(t, v_2);
      {
        k_86 = t;
        f_86 :
        if(match_cons(k_86, sym_Defined_2))
          {
            m_86 = ATgetArgument(k_86, 0);
            o_86 = ATgetArgument(k_86, 1);
            g_86 :
            if(match_string(m_86, "f_0"))
              {
                if(((j_86 != NULL) && (j_86 != o_86)))
                  _fail(o_86);
                else
                  j_86 = o_86;
              }
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
    t = not_null(j_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL;
  t_86 = t;
  s_86 :
  if(((ATgetType(t_86) == AT_LIST) && ((ATermList) t_86 != ATempty)))
    {
      u_86 = ATgetFirst((ATermList) t_86);
      v_86 = (ATerm) ATgetNext((ATermList) t_86);
      t = not_null(u_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL,e_87 = NULL;
  b_87 = t;
  a_87 :
  if(match_cons(b_87, sym__2))
    {
      c_87 = ATgetArgument(b_87, 0);
      e_87 = ATgetArgument(b_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_87), not_null(e_87));
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
ATerm rewrite_1 (ATerm t, ATerm z_79 (ATerm))
{
  ATerm k_87 = NULL;
  ATerm m_87 = NULL;
  k_87 = t;
  {
    ATerm n_87 = NULL;
    t = term_p_15;
    {
      t = z_79(t);
      {
        n_87 = t;
        if(((m_87 != NULL) && (m_87 != n_87)))
          _fail(n_87);
        else
          m_87 = n_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_87), not_null(k_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL;
  v_87 = t;
  u_87 :
  if(match_cons(v_87, sym__2))
    {
      w_87 = ATgetArgument(v_87, 0);
      x_87 = ATgetArgument(v_87, 1);
      {
        ATerm a_88 = NULL,b_88 = NULL;
        ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(x_87), not_null(w_87));
        {
          ATerm w_2 (ATerm t)
          {
            t = term_e_19;
            return(t);
          }
          t = rewrite_1(t, w_2);
          {
            c_88 = t;
            s_87 :
            if(match_cons(c_88, sym_Defined_3))
              {
                d_88 = ATgetArgument(c_88, 0);
                e_88 = ATgetArgument(c_88, 1);
                f_88 = ATgetArgument(c_88, 2);
                t_87 :
                if(match_string(d_88, "e_0"))
                  {
                    if(((a_88 != NULL) && (a_88 != e_88)))
                      _fail(e_88);
                    else
                      a_88 = e_88;
                    if(((b_88 != NULL) && (b_88 != f_88)))
                      _fail(f_88);
                    else
                      b_88 = f_88;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(b_88)), not_null(a_88));
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
  ATerm x_2 (ATerm t)
  {
    ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL;
    o_88 = t;
    n_88 :
    if(match_cons(o_88, sym_SDef_3))
      {
        p_88 = ATgetArgument(o_88, 0);
        q_88 = ATgetArgument(o_88, 1);
        r_88 = ATgetArgument(o_88, 2);
        {
          ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
          ATerm f_19;
          f_19 = t;
          {
            ATerm z_88 = NULL;
            t = not_null(q_88);
            {
              ATerm a_89 = NULL;
              t = length_0(t);
              {
                z_88 = t;
                {
                  if(((x_88 != NULL) && (x_88 != z_88)))
                    _fail(z_88);
                  else
                    x_88 = z_88;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_88), not_null(x_88));
                    {
                      ATerm b_89 = NULL,d_89 = NULL;
                      ATerm g_19 = t;
                      int h_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(h_19);
                        }
                      else
                        {
                          t = g_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        a_89 = t;
                        {
                          if(((w_88 != NULL) && (w_88 != a_89)))
                            _fail(a_89);
                          else
                            w_88 = a_89;
                          {
                            ATerm c_89 = NULL;
                            t = not_null(p_88);
                            {
                              ATerm k_19 = t;
                              int l_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(l_19);
                                }
                              else
                                {
                                  t = k_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                c_89 = t;
                                if(((b_89 != NULL) && (b_89 != c_89)))
                                  _fail(c_89);
                                else
                                  b_89 = c_89;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(x_88)), not_null(b_89));
                              {
                                t = union_0(t);
                                {
                                  d_89 = t;
                                  {
                                    if(((y_88 != NULL) && (y_88 != d_89)))
                                      _fail(d_89);
                                    else
                                      y_88 = d_89;
                                    {
                                      ATerm m_19;
                                      m_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(x_88), not_null(p_88)), (ATerm) ATmakeAppl(sym_Defined_3, term_n_19, not_null(o_88), not_null(w_88)));
                                        {
                                          ATerm y_2 (ATerm t)
                                          {
                                            t = term_e_19;
                                            return(t);
                                          }
                                          t = assert_1(t, y_2);
                                        }
                                      }
                                      t = m_19;
                                      {
                                        ATerm s_19;
                                        s_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(p_88)), (ATerm) ATmakeAppl(sym_Defined_2, term_t_19, not_null(y_88)));
                                          {
                                            ATerm z_2 (ATerm t)
                                            {
                                              t = term_d_19;
                                              return(t);
                                            }
                                            t = assert_1(t, z_2);
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
          t = f_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, x_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    t = term_u_19;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_y_6;
    return(t);
  }
  t = foldr_3(t, a_3, add_0, b_3);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
  l_89 = t;
  k_89 :
  if(match_cons(l_89, sym__2))
    {
      m_89 = ATgetArgument(l_89, 0);
      n_89 = ATgetArgument(l_89, 1);
      if(((m_89 != NULL) && (m_89 != n_89)))
        _fail(n_89);
      else
        m_89 = n_89;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm o_91 (ATerm), ATerm p_91 (ATerm))
{
  ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL;
  t_89 = t;
  s_89 :
  if(((ATgetType(t_89) == AT_LIST) && ((ATermList) t_89 != ATempty)))
    {
      u_89 = ATgetFirst((ATermList) t_89);
      v_89 = (ATerm) ATgetNext((ATermList) t_89);
      {
        t = p_91(t);
        {
          ATerm c_3 (ATerm t)
          {
            ATerm y_89 = NULL;
            y_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_89), not_null(y_89));
              t = o_91(t);
            }
            return(t);
          }
          t = fetch_1(t, c_3);
        }
        t = not_null(v_89);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL;
  e_90 = t;
  d_90 :
  if(match_cons(e_90, sym__2))
    {
      f_90 = ATgetArgument(e_90, 0);
      g_90 = ATgetArgument(e_90, 1);
      {
        t = not_null(f_90);
        {
          ATerm k_90 (ATerm t)
          {
            ATerm v_19 = t;
            int w_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(g_90);
                LocalPopChoice(w_19);
              }
            else
              {
                t = v_19;
                {
                  ATerm x_19 = t;
                  int y_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_3 (ATerm t)
                      {
                        t = not_null(g_90);
                        return(t);
                      }
                      t = HdMember_p__2(t, q_91, d_3);
                      t = k_90(t);
                      LocalPopChoice(y_19);
                    }
                  else
                    {
                      t = x_19;
                      t = Cons_2(t, _id, k_90);
                    }
                }
              }
            return(t);
          }
          t = k_90(t);
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
ATerm foldr_3 (ATerm t, ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm r_90 (ATerm))
{
  ATerm z_19 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_90(t);
      LocalPopChoice(e_20);
    }
  else
    {
      t = z_19;
      {
        ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL;
        u_90 = t;
        t_90 :
        if(((ATgetType(u_90) == AT_LIST) && ((ATermList) u_90 != ATempty)))
          {
            v_90 = ATgetFirst((ATermList) u_90);
            w_90 = (ATerm) ATgetNext((ATermList) u_90);
            {
              ATerm z_90 = NULL,d_91 = NULL;
              ATerm f_20;
              f_20 = t;
              {
                ATerm a_91 = NULL;
                t = not_null(v_90);
                {
                  t = r_90(t);
                  {
                    a_91 = t;
                    if(((z_90 != NULL) && (z_90 != a_91)))
                      _fail(a_91);
                    else
                      z_90 = a_91;
                  }
                }
              }
              t = f_20;
              {
                ATerm e_91 = NULL;
                t = not_null(w_90);
                {
                  t = foldr_3(t, p_90, q_90, r_90);
                  {
                    e_91 = t;
                    if(((d_91 != NULL) && (d_91 != e_91)))
                      _fail(e_91);
                    else
                      d_91 = e_91;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_90), not_null(d_91));
                  t = q_90(t);
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
  ATerm e_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL,s_91 = NULL;
    l_91 = t;
    k_91 :
    if(match_cons(l_91, sym_SDef_3))
      {
        m_91 = ATgetArgument(l_91, 0);
        n_91 = ATgetArgument(l_91, 1);
        s_91 = ATgetArgument(l_91, 2);
        {
          ATerm x_91 = NULL;
          ATerm y_91 = NULL;
          t = not_null(n_91);
          {
            t = length_0(t);
            {
              y_91 = t;
              if(((x_91 != NULL) && (x_91 != y_91)))
                _fail(y_91);
              else
                x_91 = y_91;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(m_91), not_null(x_91)));
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = foldr_3(t, e_3, union_0, f_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm i_92 = NULL,k_92 = NULL;
  ATerm g_20;
  g_20 = t;
  {
    ATerm j_92 = NULL;
    t = definition_names_0(t);
    {
      j_92 = t;
      if(((i_92 != NULL) && (i_92 != j_92)))
        _fail(j_92);
      else
        i_92 = j_92;
    }
  }
  t = g_20;
  {
    ATerm l_92 = NULL;
    t = sort_defs_0(t);
    {
      l_92 = t;
      if(((k_92 != NULL) && (k_92 != l_92)))
        _fail(l_92);
      else
        k_92 = l_92;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(i_92), not_null(k_92), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm a_77 (ATerm))
{
  ATerm t_92 = NULL,u_92 = NULL;
  t_92 = t;
  s_92 :
  if(match_cons(t_92, sym_Strategies_1))
    {
      u_92 = ATgetArgument(t_92, 0);
      {
        ATerm x_92 = NULL,z_92 = NULL;
        ATerm y_92 = NULL;
        t = SSLgetAnnotations(not_null(t_92));
        {
          y_92 = t;
          if(((x_92 != NULL) && (x_92 != y_92)))
            _fail(y_92);
          else
            x_92 = y_92;
        }
        {
          t = not_null(u_92);
          {
            ATerm b_93 = NULL;
            t = a_77(t);
            {
              z_92 = t;
              {
                ATerm c_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_92)), not_null(x_92));
                {
                  c_93 = t;
                  if(((b_93 != NULL) && (b_93 != c_93)))
                    _fail(c_93);
                  else
                    b_93 = c_93;
                }
                t = not_null(b_93);
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
ATerm Cons_2 (ATerm t, ATerm j_79 (ATerm), ATerm k_79 (ATerm))
{
  ATerm n_93 = NULL,o_93 = NULL,p_93 = NULL;
  n_93 = t;
  m_93 :
  if(((ATgetType(n_93) == AT_LIST) && ((ATermList) n_93 != ATempty)))
    {
      o_93 = ATgetFirst((ATermList) n_93);
      p_93 = (ATerm) ATgetNext((ATermList) n_93);
      {
        ATerm t_93 = NULL,v_93 = NULL;
        ATerm u_93 = NULL;
        t = SSLgetAnnotations(not_null(n_93));
        {
          u_93 = t;
          if(((t_93 != NULL) && (t_93 != u_93)))
            _fail(u_93);
          else
            t_93 = u_93;
        }
        {
          t = not_null(o_93);
          {
            ATerm x_93 = NULL;
            t = j_79(t);
            {
              v_93 = t;
              {
                t = not_null(p_93);
                {
                  ATerm d_94 = NULL;
                  t = k_79(t);
                  {
                    x_93 = t;
                    {
                      ATerm e_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_93)), not_null(v_93)), not_null(t_93));
                      {
                        e_94 = t;
                        if(((d_94 != NULL) && (d_94 != e_94)))
                          _fail(e_94);
                        else
                          d_94 = e_94;
                      }
                      t = not_null(d_94);
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
ATerm Specification_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm v_94 = NULL,w_94 = NULL;
  v_94 = t;
  o_94 :
  if(match_cons(v_94, sym_Specification_1))
    {
      w_94 = ATgetArgument(v_94, 0);
      {
        ATerm z_94 = NULL,b_95 = NULL;
        ATerm a_95 = NULL;
        t = SSLgetAnnotations(not_null(v_94));
        {
          a_95 = t;
          if(((z_94 != NULL) && (z_94 != a_95)))
            _fail(a_95);
          else
            z_94 = a_95;
        }
        {
          t = not_null(w_94);
          {
            ATerm d_95 = NULL;
            t = c_77(t);
            {
              b_95 = t;
              {
                ATerm e_95 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(b_95)), not_null(z_94));
                {
                  e_95 = t;
                  if(((d_95 != NULL) && (d_95 != e_95)))
                    _fail(e_95);
                  else
                    d_95 = e_95;
                }
                t = not_null(d_95);
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
ATerm _2 (ATerm t, ATerm e_68 (ATerm), ATerm f_68 (ATerm))
{
  ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL;
  p_95 = t;
  o_95 :
  if(match_cons(p_95, sym__2))
    {
      q_95 = ATgetArgument(p_95, 0);
      r_95 = ATgetArgument(p_95, 1);
      {
        ATerm v_95 = NULL,x_95 = NULL;
        ATerm w_95 = NULL;
        t = SSLgetAnnotations(not_null(p_95));
        {
          w_95 = t;
          if(((v_95 != NULL) && (v_95 != w_95)))
            _fail(w_95);
          else
            v_95 = w_95;
        }
        {
          t = not_null(q_95);
          {
            ATerm z_95 = NULL;
            t = e_68(t);
            {
              x_95 = t;
              {
                t = not_null(r_95);
                {
                  ATerm b_96 = NULL;
                  t = f_68(t);
                  {
                    z_95 = t;
                    {
                      ATerm c_96 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_95), not_null(z_95)), not_null(v_95));
                      {
                        c_96 = t;
                        if(((b_96 != NULL) && (b_96 != c_96)))
                          _fail(c_96);
                        else
                          b_96 = c_96;
                      }
                      t = not_null(b_96);
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
  ATerm k_96 = NULL;
  ATerm k_20;
  k_20 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm l_96 = NULL,m_96 = NULL;
      l_96 = t;
      j_96 :
      if(match_cons(l_96, sym_Program_1))
        {
          m_96 = ATgetArgument(l_96, 0);
          if(((k_96 != NULL) && (k_96 != m_96)))
            _fail(m_96);
          else
            k_96 = m_96;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_20), not_null(k_96)), term_m_20));
      {
        t = printnl_0(t);
        {
          t = term_y_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL;
  q_96 = t;
  p_96 :
  if(match_cons(q_96, sym__2))
    {
      r_96 = ATgetArgument(q_96, 0);
      s_96 = ATgetArgument(q_96, 1);
      {
        ATerm q_20;
        q_20 = t;
        t = SSL_printnl(not_null(r_96), not_null(s_96));
        t = q_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm g_97 = NULL;
  ATerm i_97 = NULL;
  g_97 = t;
  {
    ATerm j_97 = NULL;
    ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL;
    t = not_null(g_97);
    {
      j_97 = t;
      {
        t = SSL_explode_term(not_null(j_97));
        {
          l_97 = t;
          e_97 :
          if(match_cons(l_97, sym__2))
            {
              m_97 = ATgetArgument(l_97, 0);
              n_97 = ATgetArgument(l_97, 1);
              f_97 :
              if(match_string(m_97, ""))
                {
                  if(((i_97 != NULL) && (i_97 != n_97)))
                    _fail(n_97);
                  else
                    i_97 = n_97;
                }
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
    {
      t = not_null(i_97);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL;
  t_97 = t;
  s_97 :
  if(match_cons(t_97, sym__2))
    {
      u_97 = ATgetArgument(t_97, 0);
      v_97 = ATgetArgument(t_97, 1);
      {
        t = not_null(u_97);
        {
          ATerm j_3 (ATerm t)
          {
            t = not_null(v_97);
            return(t);
          }
          t = at_end_1(t, j_3);
        }
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
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      t = conc_more_lists_0(t);
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
ATerm debug_1 (ATerm t, ATerm d_87 (ATerm))
{
  ATerm t_20;
  t_20 = t;
  {
    ATerm b_98 = NULL,d_98 = NULL;
    ATerm u_20;
    u_20 = t;
    {
      ATerm c_98 = NULL;
      t = d_87(t);
      {
        c_98 = t;
        if(((b_98 != NULL) && (b_98 != c_98)))
          _fail(c_98);
        else
          b_98 = c_98;
      }
    }
    t = u_20;
    {
      ATerm e_98 = NULL;
      e_98 = t;
      if(((d_98 != NULL) && (d_98 != e_98)))
        _fail(e_98);
      else
        d_98 = e_98;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_98)), not_null(b_98)));
        t = printnl_0(t);
      }
    }
  }
  t = t_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_98 = NULL;
  i_98 = t;
  t = SSL_is_string(not_null(i_98));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, k_3);
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            {
              ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL;
              r_98 = t;
              q_98 :
              if(match_cons(r_98, sym_Path_1))
                {
                  s_98 = ATgetArgument(r_98, 0);
                  t = not_null(s_98);
                }
              else
                {
                  if(match_cons(r_98, sym_Var_1))
                    {
                      s_98 = ATgetArgument(r_98, 0);
                      {
                        t = not_null(s_98);
                        {
                          ATerm a_21 = t;
                          int c_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(c_21);
                            }
                          else
                            {
                              t = a_21;
                              {
                                ATerm l_3 (ATerm t)
                                {
                                  t = term_e_21;
                                  return(t);
                                }
                                t = debug_1(t, l_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_98, sym_Prefix_2))
                        {
                          s_98 = ATgetArgument(r_98, 0);
                          t_98 = ATgetArgument(r_98, 1);
                          {
                            ATerm y_98 = NULL,b_99 = NULL;
                            ATerm f_21;
                            f_21 = t;
                            {
                              ATerm a_99 = NULL;
                              t = not_null(s_98);
                              {
                                t = eval_config_0(t);
                                {
                                  a_99 = t;
                                  if(((y_98 != NULL) && (y_98 != a_99)))
                                    _fail(a_99);
                                  else
                                    y_98 = a_99;
                                }
                              }
                            }
                            t = f_21;
                            {
                              ATerm c_99 = NULL;
                              t = not_null(t_98);
                              {
                                t = eval_config_0(t);
                                {
                                  c_99 = t;
                                  if(((b_99 != NULL) && (b_99 != c_99)))
                                    _fail(c_99);
                                  else
                                    b_99 = c_99;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_98), not_null(b_99));
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
  ATerm s_99 = NULL;
  s_99 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_21, not_null(s_99));
    {
      t = table_get_0(t);
      {
        ATerm m_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_21;
            p_21 = t;
            {
              ATerm u_99 = NULL;
              ATerm v_99 = NULL;
              v_99 = t;
              if(((u_99 != NULL) && (u_99 != v_99)))
                _fail(v_99);
              else
                u_99 = v_99;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_21, not_null(s_99), not_null(u_99));
                t = table_put_0(t);
              }
            }
            t = p_21;
          }
          return(t);
        }
        t = try_1(t, m_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm t_83 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm q_21;
    q_21 = t;
    {
      ATerm z_99 = NULL;
      ATerm a_100 = NULL;
      t = term_r_21;
      {
        t = get_config_0(t);
        {
          a_100 = t;
          if(((z_99 != NULL) && (z_99 != a_100)))
            _fail(a_100);
          else
            z_99 = a_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_99), term_z_21);
        t = geq_0(t);
      }
    }
    t = q_21;
    t = t_83(t);
    return(t);
  }
  t = try_1(t, n_3);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL;
  e_100 = t;
  d_100 :
  if(match_cons(e_100, sym__2))
    {
      f_100 = ATgetArgument(e_100, 0);
      g_100 = ATgetArgument(e_100, 1);
      t = SSL_WriteToTextFile(not_null(f_100), not_null(g_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL;
  m_100 = t;
  l_100 :
  if(match_cons(m_100, sym__2))
    {
      n_100 = ATgetArgument(m_100, 0);
      o_100 = ATgetArgument(m_100, 1);
      t = SSL_WriteToBinaryFile(not_null(n_100), not_null(o_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_100 = NULL;
  ATerm a_22;
  a_22 = t;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_3 (ATerm t)
          {
            ATerm z_100 = NULL,a_101 = NULL;
            z_100 = t;
            t_100 :
            if(match_cons(z_100, sym_Output_1))
              {
                a_101 = ATgetArgument(z_100, 0);
                if(((y_100 != NULL) && (y_100 != a_101)))
                  _fail(a_101);
                else
                  y_100 = a_101;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_3);
          LocalPopChoice(h_22);
        }
      else
        {
          t = g_22;
          {
            ATerm b_101 = NULL;
            t = term_m_22;
            {
              b_101 = t;
              if(((y_100 != NULL) && (y_100 != b_101)))
                _fail(b_101);
              else
                y_100 = b_101;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_3, _id);
  }
  t = a_22;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(y_100);
        return(t);
      }
      t = split_2(t, r_3, _id);
      return(t);
    }
    t = _2(t, _id, q_3);
    {
      ATerm r_22 = t;
      int s_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm c_101 = NULL;
              c_101 = t;
              x_100 :
              if(!(match_cons(c_101, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_3);
            return(t);
          }
          t = _2(t, s_3, WriteToBinaryFile_0);
          LocalPopChoice(s_22);
        }
      else
        {
          t = r_22;
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
ATerm apply_strategy_1 (ATerm t, ATerm n_86 (ATerm))
{
  ATerm i_101 = NULL,k_101 = NULL,o_101 = NULL,p_101 = NULL;
  ATerm t_22;
  t_22 = t;
  t = dtime_0(t);
  t = t_22;
  {
    t = n_86(t);
    {
      ATerm u_22;
      u_22 = t;
      {
        ATerm j_101 = NULL;
        t = dtime_0(t);
        {
          j_101 = t;
          if(((i_101 != NULL) && (i_101 != j_101)))
            _fail(j_101);
          else
            i_101 = j_101;
        }
      }
      t = u_22;
      {
        k_101 = t;
        h_101 :
        if(match_cons(k_101, sym__2))
          {
            o_101 = ATgetArgument(k_101, 0);
            p_101 = ATgetArgument(k_101, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_101)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_101))), not_null(p_101));
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
  ATerm v_101 = NULL;
  v_101 = t;
  t = SSL_ReadFromFile(not_null(v_101));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_100 (ATerm), ATerm w_100 (ATerm))
{
  ATerm a_102 = NULL,d_102 = NULL;
  ATerm v_22;
  v_22 = t;
  {
    ATerm b_102 = NULL;
    t = v_100(t);
    {
      b_102 = t;
      if(((a_102 != NULL) && (a_102 != b_102)))
        _fail(b_102);
      else
        a_102 = b_102;
    }
  }
  t = v_22;
  {
    ATerm e_102 = NULL;
    t = w_100(t);
    {
      e_102 = t;
      if(((d_102 != NULL) && (d_102 != e_102)))
        _fail(e_102);
      else
        d_102 = e_102;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_102), not_null(d_102));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_102 = NULL;
  ATerm w_22;
  w_22 = t;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 (ATerm t)
        {
          ATerm l_102 = NULL,m_102 = NULL;
          l_102 = t;
          i_102 :
          if(match_cons(l_102, sym_Input_1))
            {
              m_102 = ATgetArgument(l_102, 0);
              if(((k_102 != NULL) && (k_102 != m_102)))
                _fail(m_102);
              else
                k_102 = m_102;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, u_3);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        {
          ATerm n_102 = NULL;
          t = term_z_22;
          {
            n_102 = t;
            if(((k_102 != NULL) && (k_102 != n_102)))
              _fail(n_102);
            else
              k_102 = n_102;
          }
        }
      }
  }
  t = w_22;
  {
    ATerm v_3 (ATerm t)
    {
      t = not_null(k_102);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_3);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_102 = NULL;
  r_102 = t;
  t = SSL_string_to_int(not_null(r_102));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm z_102 = NULL,a_103 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL;
  z_102 = t;
  x_102 :
  if(match_string(z_102, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(z_102) == AT_LIST) && ((ATermList) z_102 != ATempty)))
        {
          a_103 = ATgetFirst((ATermList) z_102);
          b_103 = (ATerm) ATgetNext((ATermList) z_102);
          y_102 :
          if(((ATgetType(b_103) == AT_LIST) && ((ATermList) b_103 != ATempty)))
            {
              c_103 = ATgetFirst((ATermList) b_103);
              d_103 = (ATerm) ATgetNext((ATermList) b_103);
              {
                ATerm h_103 = NULL;
                ATerm a_23;
                a_23 = t;
                {
                  t = not_null(a_103);
                  t = l_0(t);
                }
                t = a_23;
                {
                  ATerm i_103 = NULL;
                  t = not_null(c_103);
                  {
                    t = m_0(t);
                    {
                      i_103 = t;
                      if(((h_103 != NULL) && (h_103 != i_103)))
                        _fail(i_103);
                      else
                        h_103 = i_103;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_103)), not_null(h_103));
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
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_3 (ATerm t)
      {
        ATerm d_104 = NULL;
        d_104 = t;
        m_103 :
        if(!(match_string(d_104, "-i")))
          {
            if(!(match_string(d_104, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        ATerm i_104 = NULL;
        ATerm i_23;
        i_23 = t;
        {
          ATerm e_104 = NULL;
          ATerm f_104 = NULL;
          f_104 = t;
          if(((e_104 != NULL) && (e_104 != f_104)))
            _fail(f_104);
          else
            e_104 = f_104;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_23, not_null(e_104));
            t = set_config_0(t);
          }
        }
        t = i_23;
        {
          ATerm j_104 = NULL;
          j_104 = t;
          if(((i_104 != NULL) && (i_104 != j_104)))
            _fail(j_104);
          else
            i_104 = j_104;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_104));
        }
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        t = term_r_23;
        return(t);
      }
      t = ArgOption_3(t, w_3, x_3, y_3);
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              ATerm k_104 = NULL;
              k_104 = t;
              p_103 :
              if(!(match_string(k_104, "-o")))
                {
                  if(!(match_string(k_104, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              ATerm n_104 = NULL;
              ATerm w_23;
              w_23 = t;
              {
                ATerm l_104 = NULL;
                ATerm m_104 = NULL;
                m_104 = t;
                if(((l_104 != NULL) && (l_104 != m_104)))
                  _fail(m_104);
                else
                  l_104 = m_104;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_23, not_null(l_104));
                  t = set_config_0(t);
                }
              }
              t = w_23;
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
            ATerm b_4 (ATerm t)
            {
              t = term_y_23;
              return(t);
            }
            t = ArgOption_3(t, z_3, a_4, b_4);
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            {
              ATerm z_23 = t;
              int a_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_4 (ATerm t)
                  {
                    ATerm p_104 = NULL;
                    p_104 = t;
                    u_103 :
                    if(!(match_string(p_104, "-S")))
                      {
                        if(!(match_string(p_104, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm d_4 (ATerm t)
                  {
                    t = term_b_24;
                    t = set_config_0(t);
                    t = term_c_24;
                    return(t);
                  }
                  ATerm e_4 (ATerm t)
                  {
                    t = term_d_24;
                    return(t);
                  }
                  t = Option_3(t, c_4, d_4, e_4);
                  LocalPopChoice(a_24);
                }
              else
                {
                  t = z_23;
                  {
                    ATerm e_24 = t;
                    int f_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_4 (ATerm t)
                        {
                          ATerm q_104 = NULL;
                          q_104 = t;
                          v_103 :
                          if(!(match_string(q_104, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm g_4 (ATerm t)
                        {
                          ATerm t_104 = NULL;
                          ATerm g_24;
                          g_24 = t;
                          {
                            ATerm r_104 = NULL;
                            ATerm s_104 = NULL;
                            t = string_to_int_0(t);
                            {
                              s_104 = t;
                              if(((r_104 != NULL) && (r_104 != s_104)))
                                _fail(s_104);
                              else
                                r_104 = s_104;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_r_21, not_null(r_104));
                              t = set_config_0(t);
                            }
                          }
                          t = g_24;
                          {
                            ATerm u_104 = NULL;
                            u_104 = t;
                            if(((t_104 != NULL) && (t_104 != u_104)))
                              _fail(u_104);
                            else
                              t_104 = u_104;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_104));
                          }
                          return(t);
                        }
                        ATerm h_4 (ATerm t)
                        {
                          t = term_i_24;
                          return(t);
                        }
                        t = ArgOption_3(t, f_4, g_4, h_4);
                        LocalPopChoice(f_24);
                      }
                    else
                      {
                        t = e_24;
                        {
                          ATerm j_24 = t;
                          int k_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_4 (ATerm t)
                              {
                                ATerm v_104 = NULL;
                                v_104 = t;
                                y_103 :
                                if(!(match_string(v_104, "-k")))
                                  {
                                    if(!(match_string(v_104, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm j_4 (ATerm t)
                              {
                                ATerm l_24;
                                l_24 = t;
                                {
                                  ATerm w_104 = NULL;
                                  ATerm x_104 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    x_104 = t;
                                    if(((w_104 != NULL) && (w_104 != x_104)))
                                      _fail(x_104);
                                    else
                                      w_104 = x_104;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_n_24, not_null(w_104));
                                    t = set_config_0(t);
                                  }
                                }
                                t = l_24;
                                return(t);
                              }
                              ATerm n_4 (ATerm t)
                              {
                                t = term_s_24;
                                return(t);
                              }
                              t = ArgOption_3(t, i_4, j_4, n_4);
                              LocalPopChoice(k_24);
                            }
                          else
                            {
                              t = j_24;
                              {
                                ATerm t_24 = t;
                                int c_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_4 (ATerm t)
                                    {
                                      ATerm y_104 = NULL;
                                      y_104 = t;
                                      a_104 :
                                      if(!(match_string(y_104, "-v")))
                                        {
                                          if(!(match_string(y_104, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm p_4 (ATerm t)
                                    {
                                      t = term_y_25;
                                      t = set_config_0(t);
                                      t = term_z_25;
                                      return(t);
                                    }
                                    ATerm q_4 (ATerm t)
                                    {
                                      t = term_a_26;
                                      return(t);
                                    }
                                    t = Option_3(t, o_4, p_4, q_4);
                                    LocalPopChoice(c_25);
                                  }
                                else
                                  {
                                    t = t_24;
                                    {
                                      ATerm b_26 = t;
                                      int c_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm r_4 (ATerm t)
                                          {
                                            ATerm z_104 = NULL;
                                            z_104 = t;
                                            b_104 :
                                            if(!(match_string(z_104, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm s_4 (ATerm t)
                                          {
                                            t = term_e_26;
                                            t = set_config_0(t);
                                            t = term_f_26;
                                            return(t);
                                          }
                                          ATerm t_4 (ATerm t)
                                          {
                                            t = term_g_26;
                                            return(t);
                                          }
                                          t = Option_3(t, r_4, s_4, t_4);
                                          LocalPopChoice(c_26);
                                        }
                                      else
                                        {
                                          t = b_26;
                                          {
                                            ATerm u_4 (ATerm t)
                                            {
                                              ATerm a_105 = NULL;
                                              a_105 = t;
                                              c_104 :
                                              if(!(match_string(a_105, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm v_4 (ATerm t)
                                            {
                                              t = term_i_26;
                                              t = set_config_0(t);
                                              t = term_j_26;
                                              return(t);
                                            }
                                            ATerm w_4 (ATerm t)
                                            {
                                              t = term_k_26;
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
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATinsert(ATempty, term_l_26));
  {
    t = printnl_0(t);
    {
      t = term_y_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_105 = NULL;
  o_105 = t;
  t = SSL_TicksToSeconds(not_null(o_105));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_105 = NULL,u_105 = NULL,v_105 = NULL;
  t_105 = t;
  s_105 :
  if(match_cons(t_105, sym__2))
    {
      u_105 = ATgetArgument(t_105, 0);
      v_105 = ATgetArgument(t_105, 1);
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_105), not_null(v_105));
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
            t = SSL_addr(not_null(u_105), not_null(v_105));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_90 (ATerm), ATerm o_90 (ATerm))
{
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_90(t);
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      {
        ATerm c_106 = NULL,g_106 = NULL,h_106 = NULL;
        c_106 = t;
        b_106 :
        if(((ATgetType(c_106) == AT_LIST) && ((ATermList) c_106 != ATempty)))
          {
            g_106 = ATgetFirst((ATermList) c_106);
            h_106 = (ATerm) ATgetNext((ATermList) c_106);
            {
              ATerm k_106 = NULL;
              ATerm l_106 = NULL;
              t = not_null(h_106);
              {
                t = foldr_2(t, n_90, o_90);
                {
                  l_106 = t;
                  if(((k_106 != NULL) && (k_106 != l_106)))
                    _fail(l_106);
                  else
                    k_106 = l_106;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_106), not_null(k_106));
                t = o_90(t);
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
ATerm crush_2 (ATerm t, ATerm z_91 (ATerm), ATerm a_92 (ATerm))
{
  ATerm s_106 = NULL;
  ATerm u_106 = NULL;
  s_106 = t;
  {
    ATerm v_106 = NULL;
    ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL;
    t = not_null(s_106);
    {
      v_106 = t;
      {
        t = SSL_explode_term(not_null(v_106));
        {
          x_106 = t;
          r_106 :
          if(match_cons(x_106, sym__2))
            {
              y_106 = ATgetArgument(x_106, 0);
              z_106 = ATgetArgument(x_106, 1);
              if(((u_106 != NULL) && (u_106 != z_106)))
                _fail(z_106);
              else
                u_106 = z_106;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_106);
      t = foldr_2(t, z_91, a_92);
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
    ATerm x_4 (ATerm t)
    {
      t = term_u_19;
      return(t);
    }
    t = crush_2(t, x_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm h_107 = NULL,i_107 = NULL,j_107 = NULL;
  h_107 = t;
  g_107 :
  if(match_cons(h_107, sym__2))
    {
      i_107 = ATgetArgument(h_107, 0);
      j_107 = ATgetArgument(h_107, 1);
      {
        ATerm q_26;
        q_26 = t;
        {
          ATerm r_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_107), not_null(j_107));
              LocalPopChoice(s_26);
            }
          else
            {
              t = r_26;
              t = SSL_gtr(not_null(i_107), not_null(j_107));
            }
        }
        t = q_26;
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
  ATerm t_107 = NULL;
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_107 = NULL,v_107 = NULL,w_107 = NULL;
      u_107 = t;
      s_107 :
      if(match_cons(u_107, sym__2))
        {
          v_107 = ATgetArgument(u_107, 0);
          w_107 = ATgetArgument(u_107, 1);
          {
            if(((t_107 != NULL) && (t_107 != v_107)))
              _fail(v_107);
            else
              t_107 = v_107;
            if(((t_107 != NULL) && (t_107 != w_107)))
              _fail(w_107);
            else
              t_107 = w_107;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm y_4 (ATerm t)
  {
    ATerm v_26;
    v_26 = t;
    {
      ATerm z_107 = NULL;
      ATerm a_108 = NULL;
      t = term_r_21;
      {
        t = get_config_0(t);
        {
          a_108 = t;
          if(((z_107 != NULL) && (z_107 != a_108)))
            _fail(a_108);
          else
            z_107 = a_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_107), term_y_6);
        t = geq_0(t);
      }
    }
    t = v_26;
    t = s_83(t);
    return(t);
  }
  t = try_1(t, y_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm e_108 = NULL,g_108 = NULL;
    ATerm w_26;
    w_26 = t;
    {
      ATerm f_108 = NULL;
      t = run_time_0(t);
      {
        f_108 = t;
        if(((e_108 != NULL) && (e_108 != f_108)))
          _fail(f_108);
        else
          e_108 = f_108;
      }
    }
    t = w_26;
    {
      ATerm h_108 = NULL;
      t = term_x_26;
      {
        t = get_config_0(t);
        {
          h_108 = t;
          if(((g_108 != NULL) && (g_108 != h_108)))
            _fail(h_108);
          else
            g_108 = h_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_26), not_null(e_108)), term_y_26), not_null(g_108)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_4);
  {
    t = term_u_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_108 = NULL;
  o_108 = t;
  n_108 :
  if(match_cons(o_108, sym_Version_0))
    {
      ATerm q_108 = NULL,s_108 = NULL;
      ATerm b_27;
      b_27 = t;
      {
        ATerm r_108 = NULL;
        t = SSLgetAnnotations(not_null(o_108));
        {
          r_108 = t;
          if(((q_108 != NULL) && (q_108 != r_108)))
            _fail(r_108);
          else
            q_108 = r_108;
        }
      }
      t = b_27;
      {
        ATerm u_108 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_108));
        {
          u_108 = t;
          if(((s_108 != NULL) && (s_108 != u_108)))
            _fail(u_108);
          else
            s_108 = u_108;
        }
        t = not_null(s_108);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_86 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        {
          ATerm f_27 = t;
          int g_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(g_27);
            }
          else
            {
              t = f_27;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_5);
  t = l_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_108 = NULL;
  z_108 = t;
  t = SSL_table_create(not_null(z_108));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_109 = NULL;
  d_109 = t;
  {
    ATerm h_27;
    h_27 = t;
    {
      t = term_i_27;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_27, term_j_27, not_null(d_109));
          t = table_put_0(t);
        }
      }
    }
    t = h_27;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_109 = NULL;
  j_109 = t;
  t = SSL_table_destroy(not_null(j_109));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm n_109 = NULL;
  n_109 = t;
  t = SSL_exit(not_null(n_109));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_82 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_107 (ATerm))
{
  ATerm q_109 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = Cons_2(t, b_107, q_109);
      }
    return(t);
  }
  t = q_109(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm x_109 = NULL,y_109 = NULL,z_109 = NULL;
  z_109 = t;
  w_109 :
  if(((ATgetType(z_109) == AT_LIST) && ((ATermList) z_109 != ATempty)))
    {
      x_109 = ATgetFirst((ATermList) z_109);
      y_109 = (ATerm) ATgetNext((ATermList) z_109);
      {
        ATerm c_110 = NULL;
        t = not_null(y_109);
        {
          ATerm m_27;
          m_27 = t;
          {
            ATerm d_110 = NULL,f_110 = NULL,h_110 = NULL;
            ATerm n_27;
            n_27 = t;
            {
              ATerm e_110 = NULL;
              t = k_0(t);
              {
                e_110 = t;
                if(((d_110 != NULL) && (d_110 != e_110)))
                  _fail(e_110);
                else
                  d_110 = e_110;
              }
            }
            t = n_27;
            {
              ATerm g_110 = NULL;
              t = not_null(x_109);
              {
                t = j_0(t);
                {
                  g_110 = t;
                  if(((f_110 != NULL) && (f_110 != g_110)))
                    _fail(g_110);
                  else
                    f_110 = g_110;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_110)), not_null(f_110));
                {
                  h_110 = t;
                  if(((c_110 != NULL) && (c_110 != h_110)))
                    _fail(h_110);
                  else
                    c_110 = h_110;
                }
              }
            }
          }
          t = m_27;
          {
            ATerm b_5 (ATerm t)
            {
              t = not_null(c_110);
              return(t);
            }
            t = reverse_acc_2(t, j_0, b_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) z_109 == ATempty))
        {
          {
            t = term_p_15;
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
  ATerm c_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_5);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm o_110 = NULL;
  o_110 = t;
  t = SSL_implode_string(not_null(o_110));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_107 (ATerm))
{
  ATerm r_110 (ATerm t)
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_110);
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        {
          t = Nil_0(t);
          t = q_107(t);
        }
      }
    return(t);
  }
  t = r_110(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm u_110 = NULL,v_110 = NULL,w_110 = NULL;
        u_110 = t;
        t_110 :
        if(((ATgetType(u_110) == AT_LIST) && ((ATermList) u_110 != ATempty)))
          {
            v_110 = ATgetFirst((ATermList) u_110);
            w_110 = (ATerm) ATgetNext((ATermList) u_110);
            {
              t = not_null(v_110);
              {
                ATerm d_5 (ATerm t)
                {
                  t = not_null(w_110);
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
  ATerm c_111 = NULL;
  c_111 = t;
  t = SSL_explode_string(not_null(c_111));
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
ATerm short_description_1 (ATerm t, ATerm l_82 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm k_111 = NULL,l_111 = NULL;
  k_111 = t;
  j_111 :
  if(match_cons(k_111, sym_Program_1))
    {
      l_111 = ATgetArgument(k_111, 0);
      {
        ATerm o_111 = NULL,q_111 = NULL;
        ATerm p_111 = NULL;
        t = SSLgetAnnotations(not_null(k_111));
        {
          p_111 = t;
          if(((o_111 != NULL) && (o_111 != p_111)))
            _fail(p_111);
          else
            o_111 = p_111;
        }
        {
          t = not_null(l_111);
          {
            ATerm s_111 = NULL;
            t = y_73(t);
            {
              q_111 = t;
              {
                ATerm t_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_111)), not_null(o_111));
                {
                  t_111 = t;
                  if(((s_111 != NULL) && (s_111 != t_111)))
                    _fail(t_111);
                  else
                    s_111 = t_111;
                }
                t = not_null(s_111);
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
  ATerm c_112 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      ATerm d_112 = NULL;
      d_112 = t;
      if(((c_112 != NULL) && (c_112 != d_112)))
        _fail(d_112);
      else
        c_112 = d_112;
      return(t);
    }
    t = Program_1(t, f_5);
    return(t);
  }
  t = option_defined_1(t, e_5);
  {
    ATerm g_5 (ATerm t)
    {
      ATerm e_112 = NULL;
      ATerm f_112 = NULL;
      t = term_p_15;
      {
        ATerm h_5 (ATerm t)
        {
          t = not_null(c_112);
          return(t);
        }
        t = short_description_1(t, h_5);
        {
          t = concat_strings_0(t);
          {
            f_112 = t;
            if(((e_112 != NULL) && (e_112 != f_112)))
              _fail(f_112);
            else
              e_112 = f_112;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_22, (ATerm) ATinsert(ATempty, not_null(e_112)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, g_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_22, (ATerm) ATinsert(ATempty, term_s_27));
      {
        t = printnl_0(t);
        {
          t = term_v_27;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm g_112 = NULL;
                  ATerm h_112 = NULL;
                  h_112 = t;
                  if(((g_112 != NULL) && (g_112 != h_112)))
                    _fail(h_112);
                  else
                    g_112 = h_112;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_m_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_112)), term_w_27));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_5);
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm i_112 = NULL;
                    ATerm j_112 = NULL;
                    ATerm k_5 (ATerm t)
                    {
                      t = not_null(c_112);
                      return(t);
                    }
                    t = long_description_1(t, k_5);
                    {
                      j_112 = t;
                      if(((i_112 != NULL) && (i_112 != j_112)))
                        _fail(j_112);
                      else
                        i_112 = j_112;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_m_22, (ATerm) ATinsert(CheckATermList(not_null(i_112)), term_x_27));
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
ATerm Undefined_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm t_112 = NULL,u_112 = NULL;
  t_112 = t;
  s_112 :
  if(match_cons(t_112, sym_Undefined_1))
    {
      u_112 = ATgetArgument(t_112, 0);
      {
        ATerm x_112 = NULL,z_112 = NULL;
        ATerm y_112 = NULL;
        t = SSLgetAnnotations(not_null(t_112));
        {
          y_112 = t;
          if(((x_112 != NULL) && (x_112 != y_112)))
            _fail(y_112);
          else
            x_112 = y_112;
        }
        {
          t = not_null(u_112);
          {
            ATerm b_113 = NULL;
            t = z_73(t);
            {
              z_112 = t;
              {
                ATerm c_113 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_112)), not_null(x_112));
                {
                  c_113 = t;
                  if(((b_113 != NULL) && (b_113 != c_113)))
                    _fail(c_113);
                  else
                    b_113 = c_113;
                }
                t = not_null(b_113);
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
ATerm fetch_1 (ATerm t, ATerm k_107 (ATerm))
{
  ATerm h_113 (ATerm t)
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_107, _id);
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = Cons_2(t, _id, h_113);
      }
    return(t);
  }
  t = h_113(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_83 (ATerm))
{
  t = fetch_1(t, q_83);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_113 = NULL;
  m_113 = t;
  l_113 :
  if(match_cons(m_113, sym_Help_0))
    {
      ATerm o_113 = NULL,q_113 = NULL;
      ATerm a_28;
      a_28 = t;
      {
        ATerm p_113 = NULL;
        t = SSLgetAnnotations(not_null(m_113));
        {
          p_113 = t;
          if(((o_113 != NULL) && (o_113 != p_113)))
            _fail(p_113);
          else
            o_113 = p_113;
        }
      }
      t = a_28;
      {
        ATerm r_113 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_113));
        {
          r_113 = t;
          if(((q_113 != NULL) && (q_113 != r_113)))
            _fail(r_113);
          else
            q_113 = r_113;
        }
        t = not_null(q_113);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_101 (ATerm))
{
  ATerm b_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_101(t);
      LocalPopChoice(d_28);
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
  ATerm x_113 = NULL,y_113 = NULL,z_113 = NULL;
  x_113 = t;
  w_113 :
  if(match_cons(x_113, sym__2))
    {
      y_113 = ATgetArgument(x_113, 0);
      z_113 = ATgetArgument(x_113, 1);
      t = SSL_table_get(not_null(y_113), not_null(z_113));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL;
  g_114 = t;
  f_114 :
  if(match_cons(g_114, sym__3))
    {
      h_114 = ATgetArgument(g_114, 0);
      i_114 = ATgetArgument(g_114, 1);
      j_114 = ATgetArgument(g_114, 2);
      {
        ATerm e_28;
        e_28 = t;
        {
          ATerm n_114 = NULL;
          ATerm o_114 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_114), not_null(i_114));
          {
            ATerm f_28 = t;
            int g_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_28);
              }
            else
              {
                t = f_28;
                t = (ATerm) ATempty;
              }
            {
              o_114 = t;
              if(((n_114 != NULL) && (n_114 != o_114)))
                _fail(o_114);
              else
                n_114 = o_114;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_114), not_null(i_114), (ATerm) ATinsert(CheckATermList(not_null(n_114)), not_null(j_114)));
            t = table_put_0(t);
          }
        }
        t = e_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_82 (ATerm))
{
  ATerm s_114 = NULL;
  ATerm t_114 = NULL;
  t = term_p_15;
  {
    t = q_82(t);
    {
      t_114 = t;
      if(((s_114 != NULL) && (s_114 != t_114)))
        _fail(t_114);
      else
        s_114 = t_114;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, not_null(s_114));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_114 = NULL,a_115 = NULL,b_115 = NULL;
  z_114 = t;
  y_114 :
  if(match_string(z_114, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(z_114) == AT_LIST) && ((ATermList) z_114 != ATempty)))
        {
          a_115 = ATgetFirst((ATermList) z_114);
          b_115 = (ATerm) ATgetNext((ATermList) z_114);
          {
            ATerm e_115 = NULL;
            ATerm h_28;
            h_28 = t;
            {
              t = not_null(a_115);
              t = a_0(t);
            }
            t = h_28;
            {
              ATerm f_115 = NULL;
              t = term_p_15;
              {
                t = b_0(t);
                {
                  f_115 = t;
                  if(((e_115 != NULL) && (e_115 != f_115)))
                    _fail(f_115);
                  else
                    e_115 = f_115;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_115)), not_null(e_115));
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
    ATerm k_115 = NULL;
    k_115 = t;
    j_115 :
    if(!(match_string(k_115, "--help")))
      {
        if(!(match_string(k_115, "-h")))
          {
            if(!(match_string(k_115, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_j_28;
    return(t);
  }
  t = Option_3(t, l_5, m_5, n_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_115 = NULL,o_115 = NULL,p_115 = NULL;
  n_115 = t;
  m_115 :
  if(((ATgetType(n_115) == AT_LIST) && ((ATermList) n_115 != ATempty)))
    {
      o_115 = ATgetFirst((ATermList) n_115);
      p_115 = (ATerm) ATgetNext((ATermList) n_115);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_115)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_115)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm w_115 = NULL,x_115 = NULL,y_115 = NULL;
  w_115 = t;
  v_115 :
  if(match_cons(w_115, sym__2))
    {
      x_115 = ATgetArgument(w_115, 0);
      y_115 = ATgetArgument(w_115, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_21, not_null(x_115), not_null(y_115));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_82 (ATerm))
{
  ATerm k_28;
  k_28 = t;
  {
    ATerm p_5 (ATerm t)
    {
      t = term_l_28;
      t = o_82(t);
      return(t);
    }
    t = try_1(t, p_5);
  }
  t = k_28;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm g_116 = NULL;
      ATerm m_28;
      m_28 = t;
      {
        ATerm e_116 = NULL;
        ATerm f_116 = NULL;
        f_116 = t;
        if(((e_116 != NULL) && (e_116 != f_116)))
          _fail(f_116);
        else
          e_116 = f_116;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_26, not_null(e_116));
          t = set_config_0(t);
        }
      }
      t = m_28;
      {
        ATerm h_116 = NULL;
        h_116 = t;
        if(((g_116 != NULL) && (g_116 != h_116)))
          _fail(h_116);
        else
          g_116 = h_116;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_116));
      }
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm n_28 = t;
      int r_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_29);
            }
          else
            {
              t = b_29;
              {
                t = o_82(t);
                t = Cons_2(t, _id, r_5);
              }
            }
          LocalPopChoice(r_28);
        }
      else
        {
          t = n_28;
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
  ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL;
  ATerm k_29;
  k_29 = t;
  {
    ATerm q_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL;
    q_116 = t;
    m_116 :
    if(match_cons(q_116, sym__3))
      {
        r_116 = ATgetArgument(q_116, 0);
        s_116 = ATgetArgument(q_116, 1);
        t_116 = ATgetArgument(q_116, 2);
        {
          if(((n_116 != NULL) && (n_116 != r_116)))
            _fail(r_116);
          else
            n_116 = r_116;
          {
            if(((o_116 != NULL) && (o_116 != s_116)))
              _fail(s_116);
            else
              o_116 = s_116;
            {
              if(((p_116 != NULL) && (p_116 != t_116)))
                _fail(t_116);
              else
                p_116 = t_116;
              t = SSL_table_put(not_null(n_116), not_null(o_116), not_null(p_116));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_82 (ATerm))
{
  ATerm w_116 = NULL;
  ATerm l_29;
  l_29 = t;
  {
    t = term_m_29;
    t = table_put_0(t);
  }
  t = l_29;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm n_29 = t;
      int o_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_82(t);
          LocalPopChoice(o_29);
        }
      else
        {
          t = n_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_5);
    {
      ATerm t_5 (ATerm t)
      {
        ATerm p_29 = t;
        int q_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_u_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_29);
          }
        else
          {
            t = p_29;
            {
              ATerm u_5 (ATerm t)
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm x_116 = NULL;
                  x_116 = t;
                  if(((w_116 != NULL) && (w_116 != x_116)))
                    _fail(x_116);
                  else
                    w_116 = x_116;
                  return(t);
                }
                t = Undefined_1(t, v_5);
                return(t);
              }
              t = option_defined_1(t, u_5);
              {
                ATerm a_30;
                a_30 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_116)), term_b_30));
                  t = printnl_0(t);
                }
                t = a_30;
                {
                  t = system_usage_0(t);
                  {
                    t = term_y_6;
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
        ATerm c_30;
        c_30 = t;
        {
          t = term_t_27;
          t = table_destroy_0(t);
        }
        t = c_30;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm l_85 (ATerm))
{
  t = parse_options_1(t, i_85);
  {
    t = store_options_0(t);
    {
      t = k_85(t);
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_85);
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            {
              ATerm f_30 = t;
              int g_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_85(t);
                  t = report_success_0(t);
                  LocalPopChoice(g_30);
                }
              else
                {
                  t = f_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm c_86 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_86(t);
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, z_85);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, w_5, b_86, c_86, x_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm z_5 (ATerm t)
    {
      ATerm j_30;
      j_30 = t;
      {
        ATerm a_117 = NULL;
        ATerm b_117 = NULL;
        t = term_x_26;
        {
          t = get_config_0(t);
          {
            b_117 = t;
            if(((a_117 != NULL) && (a_117 != b_117)))
              _fail(b_117);
            else
              a_117 = b_117;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATinsert(ATempty, not_null(a_117)));
          t = printnl_0(t);
        }
      }
      t = j_30;
      return(t);
    }
    t = if_verbose2_1(t, z_5);
    return(t);
  }
  t = iowrap_4(t, t_85, u_85, v_85, y_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm r_85 (ATerm), ATerm s_85 (ATerm))
{
  t = iowrap_3(t, r_85, s_85, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm o_85 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    t = _2(t, _id, o_85);
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
      ATerm d_6 (ATerm t)
      {
        ATerm e_6 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, e_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, d_6);
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
