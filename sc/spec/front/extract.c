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
ATerm term_d_30;
ATerm term_x_29;
ATerm term_o_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_f_27;
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
ATerm term_b_26;
ATerm term_h_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_g_24;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_b_23;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_c_20;
ATerm term_t_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_x_18;
ATerm term_s_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_p_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_a_9;
ATerm term_h_7;
ATerm term_w_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_c_6;
ATerm term_b_6;
void init_constant_terms (void)
{
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stderr_0);
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
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Op_2, term_o_14, (ATerm) ATempty);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_q_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
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
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
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
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_n_21, term_t_19);
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
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_h_15);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
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
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, (ATerm) ATempty);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm));
ATerm SDef_3 (ATerm, ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm k_79 (ATerm));
ATerm Let_2 (ATerm, ATerm g_79 (ATerm), ATerm h_79 (ATerm));
ATerm sboundin_3 (ATerm, ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm i_97 (ATerm), ATerm j_97 (ATerm));
ATerm diff_1 (ATerm, ATerm n_97 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm q_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_93 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm k_107 (ATerm), ATerm l_107 (ATerm));
ATerm alltd_1 (ATerm, ATerm k_106 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm m_107 (ATerm), ATerm n_107 (ATerm));
ATerm substitute_1 (ATerm, ATerm o_107 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm l_79 (ATerm), ATerm m_79 (ATerm));
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
ATerm Prim_2 (ATerm, ATerm l_80 (ATerm), ATerm m_80 (ATerm));
ATerm Explode_2 (ATerm, ATerm z_76 (ATerm), ATerm a_77 (ATerm));
ATerm Op_2 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm pat_td_1 (ATerm, ATerm y_80 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm w_101 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm v_90 (ATerm), ATerm w_90 (ATerm));
ATerm repeat_1 (ATerm, ATerm y_90 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm t_76 (ATerm), ATerm u_76 (ATerm));
ATerm Con_3 (ATerm, ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm s_76 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm i_80 (ATerm), ATerm j_80 (ATerm));
ATerm oncetd_1 (ATerm, ATerm w_105 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm g_104 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm p_103 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm q_96 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm u_101 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm));
ATerm zip_1 (ATerm, ATerm r_101 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm o_81 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm m_91 (ATerm), ATerm n_91 (ATerm));
ATerm for_3 (ATerm, ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm r_91 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm x_81 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm g_81 (ATerm));
ATerm HdMember_1 (ATerm, ATerm h_97 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm i_81 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm e_78 (ATerm));
ATerm Cons_2 (ATerm, ATerm n_80 (ATerm), ATerm o_80 (ATerm));
ATerm Specification_1 (ATerm, ATerm g_78 (ATerm));
ATerm _2 (ATerm, ATerm i_69 (ATerm), ATerm j_69 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm l_87 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm v_84 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm b_96 (ATerm), ATerm c_96 (ATerm));
ATerm crush_2 (ATerm, ATerm q_97 (ATerm), ATerm r_97 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm u_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_86 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_102 (ATerm), ATerm a_103 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_86 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_100 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_83 (ATerm));
ATerm map_1 (ATerm, ATerm o_99 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_83 (ATerm));
ATerm Program_1 (ATerm, ATerm c_75 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm d_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_99 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_84 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_103 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_83 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_83 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_83 (ATerm));
ATerm iowrap_4 (ATerm, ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm k_86 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_85 (ATerm), ATerm a_86 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_85 (ATerm));
ATerm extract_0 (ATerm);
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
        ATerm a_6;
        a_6 = t;
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
        t = a_6;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_6), not_null(g_6)), term_c_6), not_null(f_6)), term_b_6);
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_6), not_null(r_6)), term_c_6), not_null(q_6)), term_i_6), not_null(p_6)), term_b_6);
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
                ATerm j_6 = t;
                int k_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(k_6);
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
    ATerm r_7 = NULL;
    ATerm s_7 = NULL;
    s_7 = t;
    if(((r_7 != NULL) && (r_7 != s_7)))
      _fail(s_7);
    else
      r_7 = s_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, not_null(r_7));
      t = printnl_0(t);
    }
  }
  t = v_6;
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
          ATerm e_7 = t;
          int f_7 = stack_ptr;
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
                            ATerm g_7 = t;
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
                                t = g_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_8)), term_h_7);
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
ATerm Rec_2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
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
            t = e_79(t);
            {
              m_9 = t;
              {
                t = not_null(g_9);
                {
                  ATerm q_9 = NULL;
                  t = f_79(t);
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
ATerm SDef_3 (ATerm t, ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm k_79 (ATerm))
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
            t = i_79(t);
            {
              o_10 = t;
              {
                t = not_null(g_10);
                {
                  ATerm s_10 = NULL;
                  t = j_79(t);
                  {
                    q_10 = t;
                    {
                      t = not_null(h_10);
                      {
                        ATerm u_10 = NULL;
                        t = k_79(t);
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
ATerm Let_2 (ATerm t, ATerm g_79 (ATerm), ATerm h_79 (ATerm))
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
            t = g_79(t);
            {
              q_11 = t;
              {
                t = not_null(k_11);
                {
                  ATerm u_11 = NULL;
                  t = h_79(t);
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
ATerm sboundin_3 (ATerm t, ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm))
{
  ATerm i_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, h_108, h_108);
      LocalPopChoice(o_7);
    }
  else
    {
      t = i_7;
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, j_108, j_108, h_108);
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            t = Rec_2(t, j_108, h_108);
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
ATerm crush_3 (ATerm t, ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm))
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
      t = foldr_3(t, s_97, t_97, u_97);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_97 (ATerm), ATerm j_97 (ATerm))
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
  k_14 = t;
  j_14 :
  if(((ATgetType(k_14) == AT_LIST) && ((ATermList) k_14 != ATempty)))
    {
      l_14 = ATgetFirst((ATermList) k_14);
      m_14 = (ATerm) ATgetNext((ATermList) k_14);
      {
        t = j_97(t);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm p_14 = NULL;
            p_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), not_null(p_14));
              t = i_97(t);
            }
            return(t);
          }
          t = fetch_1(t, p_0);
        }
        t = not_null(m_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm n_97 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym__2))
    {
      w_14 = ATgetArgument(v_14, 0);
      x_14 = ATgetArgument(v_14, 1);
      {
        t = not_null(w_14);
        {
          ATerm b_15 (ATerm t)
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
                  int w_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_0 (ATerm t)
                      {
                        t = not_null(x_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_97, q_0);
                      t = b_15(t);
                      LocalPopChoice(w_7);
                    }
                  else
                    {
                      t = v_7;
                      t = Cons_2(t, _id, b_15);
                    }
                }
              }
            return(t);
          }
          t = b_15(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm q_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm r_93 (ATerm))
{
  ATerm f_15 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm a_8 = t;
      int i_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_93(t);
          LocalPopChoice(i_8);
        }
      else
        {
          t = a_8;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      ATerm p_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_15 = NULL;
          ATerm v_8;
          v_8 = t;
          {
            ATerm e_15 = NULL;
            t = p_93(t);
            {
              e_15 = t;
              if(((d_15 != NULL) && (d_15 != e_15)))
                _fail(e_15);
              else
                d_15 = e_15;
            }
          }
          t = v_8;
          {
            ATerm t_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = not_null(d_15);
                return(t);
              }
              t = split_2(t, f_15, v_0);
              t = diff_1(t, r_93);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = q_93(t, t_0, f_15, u_0);
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
          t = p_8;
          {
            ATerm x_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, x_0, union_0, f_15);
          }
        }
      return(t);
    }
    t = split_2(t, r_0, s_0);
    t = union_0(t);
    return(t);
  }
  t = f_15(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
    o_15 = t;
    j_15 :
    if(match_cons(o_15, sym_Call_2))
      {
        p_15 = ATgetArgument(o_15, 0);
        r_15 = ATgetArgument(o_15, 1);
        k_15 :
        if(match_cons(p_15, sym_SVar_1))
          {
            q_15 = ATgetArgument(p_15, 0);
            {
              ATerm u_15 = NULL;
              ATerm v_15 = NULL;
              t = not_null(r_15);
              {
                t = length_0(t);
                {
                  v_15 = t;
                  if(((u_15 != NULL) && (u_15 != v_15)))
                    _fail(v_15);
                  else
                    u_15 = v_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(q_15), not_null(u_15)));
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
    ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
    w_15 = t;
    m_15 :
    if(match_cons(w_15, sym__2))
      {
        x_15 = ATgetArgument(w_15, 0);
        a_16 = ATgetArgument(w_15, 1);
        n_15 :
        if(match_cons(x_15, sym__2))
          {
            y_15 = ATgetArgument(x_15, 0);
            z_15 = ATgetArgument(x_15, 1);
            if(((y_15 != NULL) && (y_15 != a_16)))
              _fail(a_16);
            else
              y_15 = a_16;
          }
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
  ATerm m_16 = NULL;
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  m_16 = t;
  {
    ATerm r_16 = NULL;
    ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
    t = not_null(m_16);
    {
      r_16 = t;
      {
        t = SSL_explode_term(not_null(r_16));
        {
          t_16 = t;
          i_16 :
          if(match_cons(t_16, sym__2))
            {
              u_16 = ATgetArgument(t_16, 0);
              v_16 = ATgetArgument(t_16, 1);
              j_16 :
              if(match_string(u_16, ""))
                {
                  k_16 :
                  if(((ATgetType(v_16) == AT_LIST) && ((ATermList) v_16 != ATempty)))
                    {
                      w_16 = ATgetFirst((ATermList) v_16);
                      x_16 = (ATerm) ATgetNext((ATermList) v_16);
                      l_16 :
                      if(((ATgetType(x_16) == AT_LIST) && ((ATermList) x_16 != ATempty)))
                        {
                          y_16 = ATgetFirst((ATermList) x_16);
                          z_16 = (ATerm) ATgetNext((ATermList) x_16);
                          {
                            if(((o_16 != NULL) && (o_16 != w_16)))
                              _fail(w_16);
                            else
                              o_16 = w_16;
                            {
                              if(((q_16 != NULL) && (q_16 != y_16)))
                                _fail(y_16);
                              else
                                q_16 = y_16;
                              if(((p_16 != NULL) && (p_16 != z_16)))
                                _fail(z_16);
                              else
                                p_16 = z_16;
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
    t = not_null(q_16);
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
    ATerm f_17 = NULL,h_17 = NULL;
    ATerm b_9;
    b_9 = t;
    {
      ATerm g_17 = NULL;
      t = Fst_0(t);
      {
        g_17 = t;
        if(((f_17 != NULL) && (f_17 != g_17)))
          _fail(g_17);
        else
          f_17 = g_17;
      }
    }
    t = b_9;
    {
      ATerm i_17 = NULL;
      t = Snd_0(t);
      {
        i_17 = t;
        if(((h_17 != NULL) && (h_17 != i_17)))
          _fail(i_17);
        else
          h_17 = i_17;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_17), not_null(h_17));
    }
    return(t);
  }
  t = foldr_2(t, b_1, c_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  p_17 = t;
  m_17 :
  if(match_cons(p_17, sym_Call_2))
    {
      q_17 = ATgetArgument(p_17, 0);
      s_17 = ATgetArgument(p_17, 1);
      n_17 :
      if(match_cons(q_17, sym_SVar_1))
        {
          r_17 = ATgetArgument(q_17, 0);
          o_17 :
          if(((ATermList) s_17 == ATempty))
            {
              t = not_null(r_17);
            }
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
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  y_17 = t;
  w_17 :
  if(match_cons(y_17, sym__2))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      x_17 :
      if(((ATgetType(a_18) == AT_LIST) && ((ATermList) a_18 != ATempty)))
        {
          b_18 = ATgetFirst((ATermList) a_18);
          c_18 = (ATerm) ATgetNext((ATermList) a_18);
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(c_18));
        }
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
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  k_18 = t;
  h_18 :
  if(match_cons(k_18, sym__2))
    {
      l_18 = ATgetArgument(k_18, 0);
      m_18 = ATgetArgument(k_18, 1);
      i_18 :
      if(((ATgetType(m_18) == AT_LIST) && ((ATermList) m_18 != ATempty)))
        {
          n_18 = ATgetFirst((ATermList) m_18);
          q_18 = (ATerm) ATgetNext((ATermList) m_18);
          j_18 :
          if(match_cons(n_18, sym__2))
            {
              o_18 = ATgetArgument(n_18, 0);
              p_18 = ATgetArgument(n_18, 1);
              {
                ATerm s_18 = NULL;
                if(((l_18 != NULL) && (l_18 != o_18)))
                  _fail(o_18);
                else
                  l_18 = o_18;
                {
                  if(((s_18 != NULL) && (s_18 != p_18)))
                    _fail(p_18);
                  else
                    s_18 = p_18;
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
  ATerm c_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = c_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm k_107 (ATerm), ATerm l_107 (ATerm))
{
  ATerm y_18 = NULL;
  ATerm a_19 = NULL,b_19 = NULL;
  y_18 = t;
  {
    ATerm c_19 = NULL;
    t = not_null(y_18);
    {
      ATerm d_19 = NULL;
      t = k_107(t);
      {
        c_19 = t;
        {
          if(((a_19 != NULL) && (a_19 != c_19)))
            _fail(c_19);
          else
            a_19 = c_19;
          {
            t = l_107(t);
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
ATerm alltd_1 (ATerm t, ATerm k_106 (ATerm))
{
  ATerm h_19 (ATerm t)
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_106(t);
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        t = _all(t, h_19);
      }
    return(t);
  }
  t = h_19(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  m_19 = t;
  l_19 :
  if(match_cons(m_19, sym__2))
    {
      n_19 = ATgetArgument(m_19, 0);
      o_19 = ATgetArgument(m_19, 1);
      {
        ATerm r_19 = NULL;
        if(((r_19 != NULL) && (r_19 != o_19)))
          _fail(o_19);
        else
          r_19 = o_19;
      }
    }
  else
    {
      if(match_cons(m_19, sym__3))
        {
          n_19 = ATgetArgument(m_19, 0);
          o_19 = ATgetArgument(m_19, 1);
          p_19 = ATgetArgument(m_19, 2);
          {
            ATerm x_19 = NULL;
            ATerm y_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), not_null(o_19));
            {
              t = zip_1(t, _id);
              {
                y_19 = t;
                if(((x_19 != NULL) && (x_19 != y_19)))
                  _fail(y_19);
                else
                  x_19 = y_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_19), not_null(p_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm m_107 (ATerm), ATerm n_107 (ATerm))
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  t = subs_args_0(t);
  {
    e_20 = t;
    d_20 :
    if(match_cons(e_20, sym__2))
      {
        f_20 = ATgetArgument(e_20, 0);
        g_20 = ATgetArgument(e_20, 1);
        {
          t = not_null(g_20);
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = not_null(f_20);
                return(t);
              }
              t = SubsVar_2(t, m_107, e_1);
              t = n_107(t);
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
ATerm substitute_1 (ATerm t, ATerm o_107 (ATerm))
{
  t = substitute_2(t, o_107, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm l_79 (ATerm), ATerm m_79 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym_VarDec_2))
    {
      r_20 = ATgetArgument(q_20, 0);
      s_20 = ATgetArgument(q_20, 1);
      {
        ATerm w_20 = NULL,y_20 = NULL;
        ATerm x_20 = NULL;
        t = SSLgetAnnotations(not_null(q_20));
        {
          x_20 = t;
          if(((w_20 != NULL) && (w_20 != x_20)))
            _fail(x_20);
          else
            w_20 = x_20;
        }
        {
          t = not_null(r_20);
          {
            ATerm a_21 = NULL;
            t = l_79(t);
            {
              y_20 = t;
              {
                t = not_null(s_20);
                {
                  ATerm c_21 = NULL;
                  t = m_79(t);
                  {
                    a_21 = t;
                    {
                      ATerm d_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(y_20), not_null(a_21)), not_null(w_20));
                      {
                        d_21 = t;
                        if(((c_21 != NULL) && (c_21 != d_21)))
                          _fail(d_21);
                        else
                          c_21 = d_21;
                      }
                      t = not_null(c_21);
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
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  x_21 = t;
  v_21 :
  if(((ATgetType(x_21) == AT_LIST) && ((ATermList) x_21 != ATempty)))
    {
      y_21 = ATgetFirst((ATermList) x_21);
      c_22 = (ATerm) ATgetNext((ATermList) x_21);
      w_21 :
      if(match_cons(y_21, sym_SDef_3))
        {
          z_21 = ATgetArgument(y_21, 0);
          a_22 = ATgetArgument(y_21, 1);
          b_22 = ATgetArgument(y_21, 2);
          {
            ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,e_23 = NULL;
            ATerm n_9;
            n_9 = t;
            {
              ATerm k_22 = NULL;
              t = not_null(a_22);
              {
                ATerm q_22 = NULL;
                ATerm f_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, f_1);
                {
                  k_22 = t;
                  {
                    if(((h_22 != NULL) && (h_22 != k_22)))
                      _fail(k_22);
                    else
                      h_22 = k_22;
                    {
                      t = not_null(h_22);
                      {
                        ATerm d_23 = NULL;
                        ATerm g_1 (ATerm t)
                        {
                          ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
                          l_22 = t;
                          m_21 :
                          if(match_cons(l_22, sym_VarDec_2))
                            {
                              m_22 = ATgetArgument(l_22, 0);
                              n_22 = ATgetArgument(l_22, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_22)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, g_1);
                        {
                          q_22 = t;
                          {
                            if(((i_22 != NULL) && (i_22 != q_22)))
                              _fail(q_22);
                            else
                              i_22 = q_22;
                            {
                              t = not_null(x_21);
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
                                  r_22 = t;
                                  s_21 :
                                  if(match_cons(r_22, sym_SDef_3))
                                    {
                                      s_22 = ATgetArgument(r_22, 0);
                                      t_22 = ATgetArgument(r_22, 1);
                                      u_22 = ATgetArgument(r_22, 2);
                                      {
                                        ATerm x_22 = NULL;
                                        ATerm c_23 = NULL;
                                        t = not_null(t_22);
                                        {
                                          ATerm i_1 (ATerm t)
                                          {
                                            ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
                                            y_22 = t;
                                            q_21 :
                                            if(match_cons(y_22, sym_VarDec_2))
                                              {
                                                z_22 = ATgetArgument(y_22, 0);
                                                a_23 = ATgetArgument(y_22, 1);
                                                t = not_null(z_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, i_1);
                                          {
                                            c_23 = t;
                                            if(((x_22 != NULL) && (x_22 != c_23)))
                                              _fail(c_23);
                                            else
                                              x_22 = c_23;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(x_22), not_null(i_22), not_null(u_22));
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
                                  d_23 = t;
                                  if(((j_22 != NULL) && (j_22 != d_23)))
                                    _fail(d_23);
                                  else
                                    j_22 = d_23;
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
            t = n_9;
            {
              ATerm f_23 = NULL;
              t = not_null(j_22);
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
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_21), not_null(h_22), not_null(e_23));
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
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  q_23 :
  if(((ATgetType(s_23) == AT_LIST) && ((ATermList) s_23 != ATempty)))
    {
      t_23 = ATgetFirst((ATermList) s_23);
      u_23 = (ATerm) ATgetNext((ATermList) s_23);
      r_23 :
      if(((ATermList) u_23 == ATempty))
        {
          t = not_null(t_23);
        }
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
  ATerm p_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = p_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL;
  b_24 = t;
  z_23 :
  if(match_cons(b_24, sym__2))
    {
      c_24 = ATgetArgument(b_24, 0);
      f_24 = ATgetArgument(b_24, 1);
      a_24 :
      if(match_cons(c_24, sym__2))
        {
          d_24 = ATgetArgument(c_24, 0);
          e_24 = ATgetArgument(c_24, 1);
          {
            ATerm j_24 = NULL;
            ATerm k_24 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_24), not_null(e_24));
            {
              t = Definitions_0(t);
              {
                k_24 = t;
                if(((j_24 != NULL) && (j_24 != k_24)))
                  _fail(k_24);
                else
                  j_24 = k_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), not_null(f_24));
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
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  f_25 = t;
  d_25 :
  if(match_cons(f_25, sym_ExplodeCong_2))
    {
      g_25 = ATgetArgument(f_25, 0);
      e_25 = ATgetArgument(f_25, 1);
      {
        ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
        ATerm n_25 = NULL;
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
                    ATerm q_25 = NULL;
                    t = new_0(t);
                    {
                      p_25 = t;
                      {
                        if(((l_25 != NULL) && (l_25 != p_25)))
                          _fail(p_25);
                        else
                          l_25 = p_25;
                        {
                          t = new_0(t);
                          {
                            q_25 = t;
                            if(((m_25 != NULL) && (m_25 != q_25)))
                              _fail(q_25);
                            else
                              m_25 = q_25;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_25)), not_null(l_25)), not_null(k_25)), not_null(j_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(g_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(e_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25)))))));
      }
    }
  else
    {
      if(match_cons(f_25, sym_Build_1))
        {
          g_25 = ATgetArgument(f_25, 0);
          {
            ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
            ATerm w_25 = NULL;
            ATerm a_26 = NULL;
            t = new_0(t);
            {
              w_25 = t;
              {
                if(((u_25 != NULL) && (u_25 != w_25)))
                  _fail(w_25);
                else
                  u_25 = w_25;
                {
                  t = not_null(g_25);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
                      x_25 = t;
                      w_24 :
                      if(match_cons(x_25, sym_Explode_2))
                        {
                          y_25 = ATgetArgument(x_25, 0);
                          z_25 = ATgetArgument(x_25, 1);
                          {
                            if(((s_25 != NULL) && (s_25 != y_25)))
                              _fail(y_25);
                            else
                              s_25 = y_25;
                            {
                              if(((t_25 != NULL) && (t_25 != z_25)))
                                _fail(z_25);
                              else
                                t_25 = z_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25));
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
                      a_26 = t;
                      if(((v_25 != NULL) && (v_25 != a_26)))
                        _fail(a_26);
                      else
                        v_25 = a_26;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_25)), not_null(s_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_25)))));
          }
        }
      else
        {
          if(match_cons(f_25, sym_Match_1))
            {
              g_25 = ATgetArgument(f_25, 0);
              {
                ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
                ATerm h_26 = NULL;
                ATerm i_26 = NULL;
                t = new_0(t);
                {
                  h_26 = t;
                  {
                    if(((e_26 != NULL) && (e_26 != h_26)))
                      _fail(h_26);
                    else
                      e_26 = h_26;
                    {
                      ATerm m_26 = NULL;
                      t = new_0(t);
                      {
                        i_26 = t;
                        {
                          if(((f_26 != NULL) && (f_26 != i_26)))
                            _fail(i_26);
                          else
                            f_26 = i_26;
                          {
                            t = not_null(g_25);
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
                                j_26 = t;
                                b_25 :
                                if(match_cons(j_26, sym_Explode_2))
                                  {
                                    k_26 = ATgetArgument(j_26, 0);
                                    l_26 = ATgetArgument(j_26, 1);
                                    {
                                      if(((c_26 != NULL) && (c_26 != k_26)))
                                        _fail(k_26);
                                      else
                                        c_26 = k_26;
                                      {
                                        if(((d_26 != NULL) && (d_26 != l_26)))
                                          _fail(l_26);
                                        else
                                          d_26 = l_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_26));
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
                                m_26 = t;
                                if(((g_26 != NULL) && (g_26 != m_26)))
                                  _fail(m_26);
                                else
                                  g_26 = m_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_26)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_26))), (ATerm) ATmakeAppl(sym_Prim_2, term_u_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_26)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_26)), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_26)), not_null(c_26)))))));
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
  ATerm r_27 = NULL,s_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym_Match_1))
    {
      s_27 = ATgetArgument(r_27, 0);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
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
                  t = not_null(s_27);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
                      z_27 = t;
                      g_27 :
                      if(match_cons(z_27, sym_Anno_2))
                        {
                          a_28 = ATgetArgument(z_27, 0);
                          b_28 = ATgetArgument(z_27, 1);
                          {
                            if(((u_27 != NULL) && (u_27 != a_28)))
                              _fail(a_28);
                            else
                              u_27 = a_28;
                            {
                              if(((v_27 != NULL) && (v_27 != b_28)))
                                _fail(b_28);
                              else
                                v_27 = b_28;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_27)), not_null(u_27));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_27))))));
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
                  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
                  ATerm h_28 = NULL;
                  ATerm k_28 = NULL;
                  t = new_0(t);
                  {
                    h_28 = t;
                    {
                      if(((f_28 != NULL) && (f_28 != h_28)))
                        _fail(h_28);
                      else
                        f_28 = h_28;
                      {
                        t = not_null(s_27);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm i_28 = NULL,j_28 = NULL;
                            i_28 = t;
                            k_27 :
                            if(match_cons(i_28, sym_RootApp_1))
                              {
                                j_28 = ATgetArgument(i_28, 0);
                                {
                                  if(((e_28 != NULL) && (e_28 != j_28)))
                                    _fail(j_28);
                                  else
                                    e_28 = j_28;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_28));
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
                            k_28 = t;
                            if(((g_28 != NULL) && (g_28 != k_28)))
                              _fail(k_28);
                            else
                              g_28 = k_28;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_28))), not_null(e_28))));
                  LocalPopChoice(a_10);
                }
              else
                {
                  t = z_9;
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
                          t = not_null(s_27);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
                              r_28 = t;
                              o_27 :
                              if(match_cons(r_28, sym_App_2))
                                {
                                  s_28 = ATgetArgument(r_28, 0);
                                  t_28 = ATgetArgument(r_28, 1);
                                  {
                                    if(((n_28 != NULL) && (n_28 != s_28)))
                                      _fail(s_28);
                                    else
                                      n_28 = s_28;
                                    {
                                      if(((m_28 != NULL) && (m_28 != t_28)))
                                        _fail(t_28);
                                      else
                                        m_28 = t_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_28));
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
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_28))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_28)), not_null(n_28)))));
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
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  f_32 = t;
  r_29 :
  if(match_cons(f_32, sym_Match_1))
    {
      g_32 = ATgetArgument(f_32, 0);
      e_32 :
      if(match_cons(g_32, sym_RootApp_1))
        {
          h_32 = ATgetArgument(g_32, 0);
          t = not_null(h_32);
        }
      else
        {
          if(match_cons(g_32, sym_App_2))
            {
              h_32 = ATgetArgument(g_32, 0);
              i_32 = ATgetArgument(g_32, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(h_32), not_null(i_32));
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
  ATerm c_34 = NULL,d_34 = NULL;
  c_34 = t;
  b_34 :
  if(match_cons(c_34, sym_Match_1))
    {
      d_34 = ATgetArgument(c_34, 0);
      {
        ATerm f_34 = NULL,g_34 = NULL;
        ATerm k_34 = NULL;
        t = not_null(d_34);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
            h_34 = t;
            y_33 :
            if(match_cons(h_34, sym_RootApp_1))
              {
                i_34 = ATgetArgument(h_34, 0);
                z_33 :
                if(match_cons(i_34, sym_Match_1))
                  {
                    j_34 = ATgetArgument(i_34, 0);
                    {
                      if(((f_34 != NULL) && (f_34 != j_34)))
                        _fail(j_34);
                      else
                        f_34 = j_34;
                      t = not_null(f_34);
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
            k_34 = t;
            if(((g_34 != NULL) && (g_34 != k_34)))
              _fail(k_34);
            else
              g_34 = k_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(g_34));
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
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(c_10);
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
  ATerm n_35 = NULL,o_35 = NULL;
  n_35 = t;
  m_35 :
  if(match_cons(n_35, sym_Build_1))
    {
      o_35 = ATgetArgument(n_35, 0);
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
            ATerm y_36 = NULL;
            ATerm c_37 = NULL;
            t = new_0(t);
            {
              y_36 = t;
              {
                if(((m_36 != NULL) && (m_36 != y_36)))
                  _fail(y_36);
                else
                  m_36 = y_36;
                {
                  t = not_null(o_35);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
                      z_36 = t;
                      y_34 :
                      if(match_cons(z_36, sym_Anno_2))
                        {
                          a_37 = ATgetArgument(z_36, 0);
                          b_37 = ATgetArgument(z_36, 1);
                          {
                            if(((k_36 != NULL) && (k_36 != a_37)))
                              _fail(a_37);
                            else
                              k_36 = a_37;
                            {
                              if(((l_36 != NULL) && (l_36 != b_37)))
                                _fail(b_37);
                              else
                                l_36 = b_37;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_36));
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
                      c_37 = t;
                      if(((n_36 != NULL) && (n_36 != c_37)))
                        _fail(c_37);
                      else
                        n_36 = c_37;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_p_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_36)), not_null(k_36))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_36))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_36))));
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm r_10 = t;
              int t_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
                  ATerm h_37 = NULL;
                  ATerm k_37 = NULL;
                  t = new_0(t);
                  {
                    h_37 = t;
                    {
                      if(((f_37 != NULL) && (f_37 != h_37)))
                        _fail(h_37);
                      else
                        f_37 = h_37;
                      {
                        t = not_null(o_35);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm i_37 = NULL,j_37 = NULL;
                            i_37 = t;
                            d_35 :
                            if(match_cons(i_37, sym_RootApp_1))
                              {
                                j_37 = ATgetArgument(i_37, 0);
                                {
                                  if(((e_37 != NULL) && (e_37 != j_37)))
                                    _fail(j_37);
                                  else
                                    e_37 = j_37;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_37));
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
                            k_37 = t;
                            if(((g_37 != NULL) && (g_37 != k_37)))
                              _fail(k_37);
                            else
                              g_37 = k_37;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_37))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_37))));
                  LocalPopChoice(t_10);
                }
              else
                {
                  t = r_10;
                  {
                    ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
                    ATerm q_37 = NULL;
                    ATerm b_38 = NULL;
                    t = new_0(t);
                    {
                      q_37 = t;
                      {
                        if(((o_37 != NULL) && (o_37 != q_37)))
                          _fail(q_37);
                        else
                          o_37 = q_37;
                        {
                          t = not_null(o_35);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm r_37 = NULL,s_37 = NULL,a_38 = NULL;
                              r_37 = t;
                              k_35 :
                              if(match_cons(r_37, sym_App_2))
                                {
                                  s_37 = ATgetArgument(r_37, 0);
                                  a_38 = ATgetArgument(r_37, 1);
                                  {
                                    if(((m_37 != NULL) && (m_37 != s_37)))
                                      _fail(s_37);
                                    else
                                      m_37 = s_37;
                                    {
                                      if(((n_37 != NULL) && (n_37 != a_38)))
                                        _fail(a_38);
                                      else
                                        n_37 = a_38;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_37));
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
                              b_38 = t;
                              if(((p_37 != NULL) && (p_37 != b_38)))
                                _fail(b_38);
                              else
                                p_37 = b_38;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_37), not_null(n_37), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_37)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_37))));
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
  ATerm v_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  v_38 = t;
  t_38 :
  if(match_cons(v_38, sym_Build_1))
    {
      y_38 = ATgetArgument(v_38, 0);
      u_38 :
      if(match_cons(y_38, sym_RootApp_1))
        {
          z_38 = ATgetArgument(y_38, 0);
          t = not_null(z_38);
        }
      else
        {
          if(match_cons(y_38, sym_App_2))
            {
              z_38 = ATgetArgument(y_38, 0);
              a_39 = ATgetArgument(y_38, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_39)), not_null(z_38));
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
ATerm Prim_2 (ATerm t, ATerm l_80 (ATerm), ATerm m_80 (ATerm))
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
  n_39 = t;
  m_39 :
  if(match_cons(n_39, sym_Prim_2))
    {
      o_39 = ATgetArgument(n_39, 0);
      p_39 = ATgetArgument(n_39, 1);
      {
        ATerm t_39 = NULL,v_39 = NULL;
        ATerm u_39 = NULL;
        t = SSLgetAnnotations(not_null(n_39));
        {
          u_39 = t;
          if(((t_39 != NULL) && (t_39 != u_39)))
            _fail(u_39);
          else
            t_39 = u_39;
        }
        {
          t = not_null(o_39);
          {
            ATerm x_39 = NULL;
            t = l_80(t);
            {
              v_39 = t;
              {
                t = not_null(p_39);
                {
                  ATerm z_39 = NULL;
                  t = m_80(t);
                  {
                    x_39 = t;
                    {
                      ATerm a_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(v_39), not_null(x_39)), not_null(t_39));
                      {
                        a_40 = t;
                        if(((z_39 != NULL) && (z_39 != a_40)))
                          _fail(a_40);
                        else
                          z_39 = a_40;
                      }
                      t = not_null(z_39);
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
ATerm Explode_2 (ATerm t, ATerm z_76 (ATerm), ATerm a_77 (ATerm))
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym_Explode_2))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      {
        ATerm s_40 = NULL,u_40 = NULL;
        ATerm t_40 = NULL;
        t = SSLgetAnnotations(not_null(m_40));
        {
          t_40 = t;
          if(((s_40 != NULL) && (s_40 != t_40)))
            _fail(t_40);
          else
            s_40 = t_40;
        }
        {
          t = not_null(n_40);
          {
            ATerm e_41 = NULL;
            t = z_76(t);
            {
              u_40 = t;
              {
                t = not_null(o_40);
                {
                  ATerm g_41 = NULL;
                  t = a_77(t);
                  {
                    e_41 = t;
                    {
                      ATerm j_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(u_40), not_null(e_41)), not_null(s_40));
                      {
                        j_41 = t;
                        if(((g_41 != NULL) && (g_41 != j_41)))
                          _fail(j_41);
                        else
                          g_41 = j_41;
                      }
                      t = not_null(g_41);
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
ATerm Op_2 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  w_41 :
  if(match_cons(x_41, sym_Op_2))
    {
      y_41 = ATgetArgument(x_41, 0);
      z_41 = ATgetArgument(x_41, 1);
      {
        ATerm p_42 = NULL,r_42 = NULL;
        ATerm q_42 = NULL;
        t = SSLgetAnnotations(not_null(x_41));
        {
          q_42 = t;
          if(((p_42 != NULL) && (p_42 != q_42)))
            _fail(q_42);
          else
            p_42 = q_42;
        }
        {
          t = not_null(y_41);
          {
            ATerm t_42 = NULL;
            t = l_78(t);
            {
              r_42 = t;
              {
                t = not_null(z_41);
                {
                  ATerm v_42 = NULL;
                  t = m_78(t);
                  {
                    t_42 = t;
                    {
                      ATerm w_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(r_42), not_null(t_42)), not_null(p_42));
                      {
                        w_42 = t;
                        if(((v_42 != NULL) && (v_42 != w_42)))
                          _fail(w_42);
                        else
                          v_42 = w_42;
                      }
                      t = not_null(v_42);
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
ATerm pat_td_1 (ATerm t, ATerm y_80 (ATerm))
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_80(t);
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
                t = pat_td_1(t, y_80);
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
                    t = pat_td_1(t, y_80);
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
                          t = pat_td_1(t, y_80);
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
                              t = pat_td_1(t, y_80);
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
  ATerm o_43 = NULL,p_43 = NULL;
  o_43 = t;
  n_43 :
  if(match_cons(o_43, sym_Build_1))
    {
      p_43 = ATgetArgument(o_43, 0);
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_43 = NULL,s_43 = NULL;
            ATerm w_43 = NULL;
            t = not_null(p_43);
            {
              ATerm y_1 (ATerm t)
              {
                ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
                t_43 = t;
                g_43 :
                if(match_cons(t_43, sym_RootApp_1))
                  {
                    u_43 = ATgetArgument(t_43, 0);
                    h_43 :
                    if(match_cons(u_43, sym_Build_1))
                      {
                        v_43 = ATgetArgument(u_43, 0);
                        {
                          if(((r_43 != NULL) && (r_43 != v_43)))
                            _fail(v_43);
                          else
                            r_43 = v_43;
                          t = not_null(r_43);
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
                w_43 = t;
                if(((s_43 != NULL) && (s_43 != w_43)))
                  _fail(w_43);
                else
                  s_43 = w_43;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(s_43));
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            {
              ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
              ATerm f_44 = NULL;
              t = not_null(p_43);
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
                  b_44 = t;
                  k_43 :
                  if(match_cons(b_44, sym_App_2))
                    {
                      c_44 = ATgetArgument(b_44, 0);
                      e_44 = ATgetArgument(b_44, 1);
                      l_43 :
                      if(match_cons(c_44, sym_Build_1))
                        {
                          d_44 = ATgetArgument(c_44, 0);
                          {
                            if(((z_43 != NULL) && (z_43 != d_44)))
                              _fail(d_44);
                            else
                              z_43 = d_44;
                            {
                              if(((y_43 != NULL) && (y_43 != e_44)))
                                _fail(e_44);
                              else
                                y_43 = e_44;
                              t = not_null(z_43);
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
                  f_44 = t;
                  if(((a_44 != NULL) && (a_44 != f_44)))
                    _fail(f_44);
                  else
                    a_44 = f_44;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_44));
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
  ATerm g_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = g_11;
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(n_11);
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
  ATerm e_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL;
  n_45 = t;
  y_44 :
  if(match_cons(n_45, sym_InfixApp_3))
    {
      o_45 = ATgetArgument(n_45, 0);
      k_45 = ATgetArgument(n_45, 1);
      e_45 = ATgetArgument(n_45, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(k_45), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_45)), not_null(o_45))));
    }
  else
    {
      if(match_cons(n_45, sym_BAM_3))
        {
          o_45 = ATgetArgument(n_45, 0);
          k_45 = ATgetArgument(n_45, 1);
          e_45 = ATgetArgument(n_45, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(e_45))), not_null(o_45)), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_45))));
        }
      else
        {
          if(match_cons(n_45, sym_AM_2))
            {
              o_45 = ATgetArgument(n_45, 0);
              k_45 = ATgetArgument(n_45, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_45), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_45)));
            }
          else
            {
              if(match_cons(n_45, sym_MA_2))
                {
                  o_45 = ATgetArgument(n_45, 0);
                  k_45 = ATgetArgument(n_45, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_45)), not_null(k_45));
                }
              else
                {
                  if(match_cons(n_45, sym_BA_2))
                    {
                      o_45 = ATgetArgument(n_45, 0);
                      k_45 = ATgetArgument(n_45, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_45)), not_null(o_45));
                    }
                  else
                    {
                      if(match_cons(n_45, sym_Lets_2))
                        {
                          o_45 = ATgetArgument(n_45, 0);
                          k_45 = ATgetArgument(n_45, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(o_45), not_null(k_45));
                        }
                      else
                        {
                          if(match_cons(n_45, sym_LChoices_1))
                            {
                              o_45 = ATgetArgument(n_45, 0);
                              b_45 :
                              if(((ATgetType(o_45) == AT_LIST) && ((ATermList) o_45 != ATempty)))
                                {
                                  l_45 = ATgetFirst((ATermList) o_45);
                                  m_45 = (ATerm) ATgetNext((ATermList) o_45);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_45), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(m_45)));
                                }
                              else
                                {
                                  if(((ATermList) o_45 == ATempty))
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
                              if(match_cons(n_45, sym_Choices_1))
                                {
                                  o_45 = ATgetArgument(n_45, 0);
                                  c_45 :
                                  if(((ATgetType(o_45) == AT_LIST) && ((ATermList) o_45 != ATempty)))
                                    {
                                      l_45 = ATgetFirst((ATermList) o_45);
                                      m_45 = (ATerm) ATgetNext((ATermList) o_45);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_45), (ATerm) ATmakeAppl(sym_Choices_1, not_null(m_45)));
                                    }
                                  else
                                    {
                                      if(((ATermList) o_45 == ATempty))
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
                                  if(match_cons(n_45, sym_Seqs_1))
                                    {
                                      o_45 = ATgetArgument(n_45, 0);
                                      d_45 :
                                      if(((ATgetType(o_45) == AT_LIST) && ((ATermList) o_45 != ATempty)))
                                        {
                                          l_45 = ATgetFirst((ATermList) o_45);
                                          m_45 = (ATerm) ATgetNext((ATermList) o_45);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_45), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_45)));
                                        }
                                      else
                                        {
                                          if(((ATermList) o_45 == ATempty))
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
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  h_47 = t;
  d_47 :
  if(match_cons(h_47, sym__2))
    {
      i_47 = ATgetArgument(h_47, 0);
      l_47 = ATgetArgument(h_47, 1);
      f_47 :
      if(match_cons(i_47, sym__2))
        {
          j_47 = ATgetArgument(i_47, 0);
          k_47 = ATgetArgument(i_47, 1);
          g_47 :
          if(match_cons(l_47, sym__2))
            {
              m_47 = ATgetArgument(l_47, 0);
              n_47 = ATgetArgument(l_47, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_47)), not_null(j_47)), (ATerm) ATinsert(CheckATermList(not_null(n_47)), not_null(k_47)));
            }
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
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL;
  v_47 = t;
  u_47 :
  if(((ATgetType(v_47) == AT_LIST) && ((ATermList) v_47 != ATempty)))
    {
      w_47 = ATgetFirst((ATermList) v_47);
      x_47 = (ATerm) ATgetNext((ATermList) v_47);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_47), not_null(x_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  c_48 :
  if(((ATermList) d_48 == ATempty))
    {
      t = term_t_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm w_101 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, w_101);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL;
  ATerm q_51 (ATerm t)
  {
    ATerm n_51 = NULL;
    ATerm o_51 = NULL;
    t = not_null(k_51);
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
          o_51 = t;
          if(((n_51 != NULL) && (n_51 != o_51)))
            _fail(o_51);
          else
            n_51 = o_51;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(n_51)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_51)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_51))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_51))));
    return(t);
  }
  ATerm r_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_51))));
    return(t);
  }
  k_51 = t;
  j_51 :
  if(match_cons(k_51, sym_Var_1))
    {
      l_51 = ATgetArgument(k_51, 0);
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_51(t);
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            t = r_51(t);
          }
      }
    }
  else
    {
      t = q_51(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm c_52 = NULL,d_52 = NULL;
  c_52 = t;
  b_52 :
  if(match_cons(c_52, sym_Var_1))
    {
      d_52 = ATgetArgument(c_52, 0);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_52 = NULL,l_52 = NULL;
            ATerm k_52 = NULL;
            t = SSLgetAnnotations(not_null(c_52));
            {
              k_52 = t;
              if(((g_52 != NULL) && (g_52 != k_52)))
                _fail(k_52);
              else
                g_52 = k_52;
            }
            {
              t = not_null(d_52);
              {
                ATerm n_52 = NULL;
                t = o_0(t);
                {
                  l_52 = t;
                  {
                    ATerm o_52 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_52)), not_null(g_52));
                    {
                      o_52 = t;
                      if(((n_52 != NULL) && (n_52 != o_52)))
                        _fail(o_52);
                      else
                        n_52 = o_52;
                    }
                    t = not_null(n_52);
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
              ATerm r_52 = NULL,t_52 = NULL;
              ATerm s_52 = NULL;
              t = SSLgetAnnotations(not_null(c_52));
              {
                s_52 = t;
                if(((r_52 != NULL) && (r_52 != s_52)))
                  _fail(s_52);
                else
                  r_52 = s_52;
              }
              {
                t = not_null(d_52);
                {
                  ATerm v_52 = NULL;
                  t = o_0(t);
                  {
                    t_52 = t;
                    {
                      ATerm w_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_52)), not_null(r_52));
                      {
                        w_52 = t;
                        if(((v_52 != NULL) && (v_52 != w_52)))
                          _fail(w_52);
                        else
                          v_52 = w_52;
                      }
                      t = not_null(v_52);
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
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL;
  k_53 = t;
  j_53 :
  if(match_cons(k_53, sym_Prim_2))
    {
      l_53 = ATgetArgument(k_53, 0);
      m_53 = ATgetArgument(k_53, 1);
      {
        ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL;
        ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
        t = not_null(m_53);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm b_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_12;
              }
            return(t);
          }
          t = fetch_1(t, a_2);
          {
            t = not_null(m_53);
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
                  s_53 = t;
                  h_53 :
                  if(match_cons(s_53, sym__2))
                    {
                      t_53 = ATgetArgument(s_53, 0);
                      u_53 = ATgetArgument(s_53, 1);
                      i_53 :
                      if(match_cons(u_53, sym__2))
                        {
                          v_53 = ATgetArgument(u_53, 0);
                          w_53 = ATgetArgument(u_53, 1);
                          {
                            if(((p_53 != NULL) && (p_53 != t_53)))
                              _fail(t_53);
                            else
                              p_53 = t_53;
                            {
                              if(((q_53 != NULL) && (q_53 != v_53)))
                                _fail(v_53);
                              else
                                q_53 = v_53;
                              if(((r_53 != NULL) && (r_53 != w_53)))
                                _fail(w_53);
                              else
                                r_53 = w_53;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(q_53)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_53), not_null(r_53))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm v_90 (ATerm), ATerm w_90 (ATerm))
{
  ATerm z_53 (ATerm t)
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_90(t);
        t = z_53(t);
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = w_90(t);
      }
    return(t);
  }
  t = z_53(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm y_90 (ATerm))
{
  t = repeat_2(t, y_90, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm e_54 = NULL;
  e_54 = t;
  d_54 :
  if(match_cons(e_54, sym_Wld_0))
    {
      ATerm g_54 = NULL,i_54 = NULL;
      ATerm i_12;
      i_12 = t;
      {
        ATerm h_54 = NULL;
        t = SSLgetAnnotations(not_null(e_54));
        {
          h_54 = t;
          if(((g_54 != NULL) && (g_54 != h_54)))
            _fail(h_54);
          else
            g_54 = h_54;
        }
      }
      t = i_12;
      {
        ATerm j_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(g_54));
        {
          j_54 = t;
          if(((i_54 != NULL) && (i_54 != j_54)))
            _fail(j_54);
          else
            i_54 = j_54;
        }
        t = not_null(i_54);
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
        ATerm k_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(r_12);
          }
        else
          {
            t = k_12;
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
ATerm App_2 (ATerm t, ATerm t_76 (ATerm), ATerm u_76 (ATerm))
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
  t_54 = t;
  s_54 :
  if(match_cons(t_54, sym_App_2))
    {
      u_54 = ATgetArgument(t_54, 0);
      v_54 = ATgetArgument(t_54, 1);
      {
        ATerm z_54 = NULL,b_55 = NULL;
        ATerm a_55 = NULL;
        t = SSLgetAnnotations(not_null(t_54));
        {
          a_55 = t;
          if(((z_54 != NULL) && (z_54 != a_55)))
            _fail(a_55);
          else
            z_54 = a_55;
        }
        {
          t = not_null(u_54);
          {
            ATerm d_55 = NULL;
            t = t_76(t);
            {
              b_55 = t;
              {
                t = not_null(v_54);
                {
                  ATerm f_55 = NULL;
                  t = u_76(t);
                  {
                    d_55 = t;
                    {
                      ATerm g_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(b_55), not_null(d_55)), not_null(z_54));
                      {
                        g_55 = t;
                        if(((f_55 != NULL) && (f_55 != g_55)))
                          _fail(g_55);
                        else
                          f_55 = g_55;
                      }
                      t = not_null(f_55);
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
ATerm Con_3 (ATerm t, ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm s_76 (ATerm))
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  t_55 = t;
  s_55 :
  if(match_cons(t_55, sym_Con_3))
    {
      u_55 = ATgetArgument(t_55, 0);
      v_55 = ATgetArgument(t_55, 1);
      w_55 = ATgetArgument(t_55, 2);
      {
        ATerm c_56 = NULL,e_56 = NULL;
        ATerm d_56 = NULL;
        t = SSLgetAnnotations(not_null(t_55));
        {
          d_56 = t;
          if(((c_56 != NULL) && (c_56 != d_56)))
            _fail(d_56);
          else
            c_56 = d_56;
        }
        {
          t = not_null(u_55);
          {
            ATerm g_56 = NULL;
            t = q_76(t);
            {
              e_56 = t;
              {
                t = not_null(v_55);
                {
                  ATerm i_56 = NULL;
                  t = r_76(t);
                  {
                    g_56 = t;
                    {
                      t = not_null(w_55);
                      {
                        ATerm k_56 = NULL;
                        t = s_76(t);
                        {
                          i_56 = t;
                          {
                            ATerm l_56 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(e_56), not_null(g_56), not_null(i_56)), not_null(c_56));
                            {
                              l_56 = t;
                              if(((k_56 != NULL) && (k_56 != l_56)))
                                _fail(l_56);
                              else
                                k_56 = l_56;
                            }
                            t = not_null(k_56);
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
        ATerm t_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(x_12);
          }
        else
          {
            t = t_12;
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
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL;
  w_56 = t;
  u_56 :
  if(match_cons(w_56, sym_SRule_1))
    {
      x_56 = ATgetArgument(w_56, 0);
      v_56 :
      if(match_cons(x_56, sym_StratRule_3))
        {
          y_56 = ATgetArgument(x_56, 0);
          z_56 = ATgetArgument(x_56, 1);
          a_57 = ATgetArgument(x_56, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_56)), (ATerm) ATmakeAppl(sym_Where_1, not_null(a_57))), not_null(y_56)));
        }
      else
        {
          if(match_cons(x_56, sym_Rule_3))
            {
              y_56 = ATgetArgument(x_56, 0);
              z_56 = ATgetArgument(x_56, 1);
              a_57 = ATgetArgument(x_56, 2);
              {
                t = not_null(y_56);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(z_56);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(z_56))), (ATerm) ATmakeAppl(sym_Where_1, not_null(a_57))), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_56))));
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
ATerm Scope_2 (ATerm t, ATerm i_80 (ATerm), ATerm j_80 (ATerm))
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
  p_57 = t;
  o_57 :
  if(match_cons(p_57, sym_Scope_2))
    {
      q_57 = ATgetArgument(p_57, 0);
      r_57 = ATgetArgument(p_57, 1);
      {
        ATerm v_57 = NULL,x_57 = NULL;
        ATerm w_57 = NULL;
        t = SSLgetAnnotations(not_null(p_57));
        {
          w_57 = t;
          if(((v_57 != NULL) && (v_57 != w_57)))
            _fail(w_57);
          else
            v_57 = w_57;
        }
        {
          t = not_null(q_57);
          {
            ATerm z_57 = NULL;
            t = i_80(t);
            {
              x_57 = t;
              {
                t = not_null(r_57);
                {
                  ATerm b_58 = NULL;
                  t = j_80(t);
                  {
                    z_57 = t;
                    {
                      ATerm c_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(x_57), not_null(z_57)), not_null(v_57));
                      {
                        c_58 = t;
                        if(((b_58 != NULL) && (b_58 != c_58)))
                          _fail(c_58);
                        else
                          b_58 = c_58;
                      }
                      t = not_null(b_58);
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
ATerm oncetd_1 (ATerm t, ATerm w_105 (ATerm))
{
  ATerm m_58 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_105(t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = _one(t, m_58);
      }
    return(t);
  }
  t = m_58(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,b_60 = NULL;
  m_59 = t;
  k_59 :
  if(match_cons(m_59, sym_SRule_1))
    {
      n_59 = ATgetArgument(m_59, 0);
      l_59 :
      if(match_cons(n_59, sym_Rule_3))
        {
          o_59 = ATgetArgument(n_59, 0);
          p_59 = ATgetArgument(n_59, 1);
          b_60 = ATgetArgument(n_59, 2);
          {
            ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
            ATerm u_60 = NULL;
            ATerm a_61 = NULL;
            t = new_0(t);
            {
              u_60 = t;
              {
                if(((m_60 != NULL) && (m_60 != u_60)))
                  _fail(u_60);
                else
                  m_60 = u_60;
                {
                  t = not_null(o_59);
                  {
                    ATerm l_61 = NULL;
                    ATerm e_2 (ATerm t)
                    {
                      ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL;
                      v_60 = t;
                      q_58 :
                      if(match_cons(v_60, sym_Con_3))
                        {
                          w_60 = ATgetArgument(v_60, 0);
                          y_60 = ATgetArgument(v_60, 1);
                          z_60 = ATgetArgument(v_60, 2);
                          y_58 :
                          if(match_cons(w_60, sym_Var_1))
                            {
                              x_60 = ATgetArgument(w_60, 0);
                              {
                                if(((l_60 != NULL) && (l_60 != x_60)))
                                  _fail(x_60);
                                else
                                  l_60 = x_60;
                                {
                                  if(((j_60 != NULL) && (j_60 != y_60)))
                                    _fail(y_60);
                                  else
                                    j_60 = y_60;
                                  {
                                    if(((h_60 != NULL) && (h_60 != z_60)))
                                      _fail(z_60);
                                    else
                                      h_60 = z_60;
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
                      return(t);
                    }
                    t = oncetd_1(t, e_2);
                    {
                      a_61 = t;
                      {
                        if(((n_60 != NULL) && (n_60 != a_61)))
                          _fail(a_61);
                        else
                          n_60 = a_61;
                        {
                          t = not_null(p_59);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL;
                              b_61 = t;
                              f_59 :
                              if(match_cons(b_61, sym_Con_3))
                                {
                                  c_61 = ATgetArgument(b_61, 0);
                                  h_61 = ATgetArgument(b_61, 1);
                                  i_61 = ATgetArgument(b_61, 2);
                                  g_59 :
                                  if(match_cons(c_61, sym_Var_1))
                                    {
                                      d_61 = ATgetArgument(c_61, 0);
                                      h_59 :
                                      if(match_cons(i_61, sym_Call_2))
                                        {
                                          j_61 = ATgetArgument(i_61, 0);
                                          k_61 = ATgetArgument(i_61, 1);
                                          i_59 :
                                          if(((ATermList) k_61 == ATempty))
                                            {
                                              {
                                                if(((l_60 != NULL) && (l_60 != d_61)))
                                                  _fail(d_61);
                                                else
                                                  l_60 = d_61;
                                                {
                                                  if(((k_60 != NULL) && (k_60 != h_61)))
                                                    _fail(h_61);
                                                  else
                                                    k_60 = h_61;
                                                  {
                                                    if(((i_60 != NULL) && (i_60 != j_61)))
                                                      _fail(j_61);
                                                    else
                                                      i_60 = j_61;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_60));
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
                              l_61 = t;
                              if(((o_60 != NULL) && (o_60 != l_61)))
                                _fail(l_61);
                              else
                                o_60 = l_61;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_60), not_null(o_60), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_60), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(i_60), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_60), not_null(k_60), term_r_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_60)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_60)))))));
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
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(i_13);
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
ATerm topdown_1 (ATerm t, ATerm g_104 (ATerm))
{
  t = g_104(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, g_104);
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
                          int u_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(u_13);
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
  ATerm n_62 = NULL;
  n_62 = t;
  m_62 :
  if(match_cons(n_62, sym__0))
    {
      ATerm p_62 = NULL,r_62 = NULL;
      ATerm x_13;
      x_13 = t;
      {
        ATerm q_62 = NULL;
        t = SSLgetAnnotations(not_null(n_62));
        {
          q_62 = t;
          if(((p_62 != NULL) && (p_62 != q_62)))
            _fail(q_62);
          else
            p_62 = q_62;
        }
      }
      t = x_13;
      {
        ATerm s_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(p_62));
        {
          s_62 = t;
          if(((r_62 != NULL) && (r_62 != s_62)))
            _fail(s_62);
          else
            r_62 = s_62;
        }
        t = not_null(r_62);
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
  ATerm e_63 = NULL;
  ATerm g_63 = NULL,h_63 = NULL,p_63 = NULL,r_63 = NULL;
  e_63 = t;
  {
    ATerm a_14;
    a_14 = t;
    {
      ATerm i_63 = NULL;
      ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL;
      t = not_null(e_63);
      {
        i_63 = t;
        {
          t = SSL_explode_term(not_null(i_63));
          {
            k_63 = t;
            z_62 :
            if(match_cons(k_63, sym__2))
              {
                l_63 = ATgetArgument(k_63, 0);
                m_63 = ATgetArgument(k_63, 1);
                a_63 :
                if(match_string(l_63, ""))
                  {
                    b_63 :
                    if(((ATgetType(m_63) == AT_LIST) && ((ATermList) m_63 != ATempty)))
                      {
                        n_63 = ATgetFirst((ATermList) m_63);
                        o_63 = (ATerm) ATgetNext((ATermList) m_63);
                        {
                          if(((g_63 != NULL) && (g_63 != n_63)))
                            _fail(n_63);
                          else
                            g_63 = n_63;
                          if(((h_63 != NULL) && (h_63 != o_63)))
                            _fail(o_63);
                          else
                            h_63 = o_63;
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
    t = a_14;
    {
      ATerm e_14;
      e_14 = t;
      {
        ATerm q_63 = NULL;
        t = term_v_9;
        {
          q_63 = t;
          if(((p_63 != NULL) && (p_63 != q_63)))
            _fail(q_63);
          else
            p_63 = q_63;
        }
      }
      t = e_14;
      {
        t = SSL_mkterm(not_null(p_63), not_null(h_63));
        {
          r_63 = t;
          t = not_null(r_63);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm e_64 = NULL;
  ATerm g_64 = NULL,h_64 = NULL;
  e_64 = t;
  {
    ATerm i_64 = NULL;
    ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
    t = not_null(e_64);
    {
      i_64 = t;
      {
        t = SSL_explode_term(not_null(i_64));
        {
          k_64 = t;
          b_64 :
          if(match_cons(k_64, sym__2))
            {
              l_64 = ATgetArgument(k_64, 0);
              m_64 = ATgetArgument(k_64, 1);
              c_64 :
              if(match_string(l_64, ""))
                {
                  d_64 :
                  if(((ATgetType(m_64) == AT_LIST) && ((ATermList) m_64 != ATempty)))
                    {
                      n_64 = ATgetFirst((ATermList) m_64);
                      o_64 = (ATerm) ATgetNext((ATermList) m_64);
                      {
                        if(((h_64 != NULL) && (h_64 != n_64)))
                          _fail(n_64);
                        else
                          h_64 = n_64;
                        if(((g_64 != NULL) && (g_64 != o_64)))
                          _fail(o_64);
                        else
                          g_64 = o_64;
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
    t = not_null(h_64);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm p_103 (ATerm))
{
  ATerm g_65 = NULL,k_65 = NULL,m_65 = NULL;
  ATerm o_65 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_65 = NULL,e_65 = NULL;
        ATerm h_14;
        h_14 = t;
        {
          ATerm d_65 = NULL;
          t = map_1(t, Thd_0);
          {
            t = p_103(t);
            {
              d_65 = t;
              if(((c_65 != NULL) && (c_65 != d_65)))
                _fail(d_65);
              else
                c_65 = d_65;
            }
          }
        }
        t = h_14;
        {
          ATerm f_65 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = o_65(t);
            {
              f_65 = t;
              if(((e_65 != NULL) && (e_65 != f_65)))
                _fail(f_65);
              else
                e_65 = f_65;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(e_65)), not_null(c_65));
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
  t = o_65(t);
  {
    ATerm i_14;
    i_14 = t;
    {
      ATerm j_65 = NULL;
      j_65 = t;
      if(((g_65 != NULL) && (g_65 != j_65)))
        _fail(j_65);
      else
        g_65 = j_65;
    }
    t = i_14;
    {
      ATerm n_14;
      n_14 = t;
      {
        ATerm l_65 = NULL;
        t = term_v_9;
        {
          l_65 = t;
          if(((k_65 != NULL) && (k_65 != l_65)))
            _fail(l_65);
          else
            k_65 = l_65;
        }
      }
      t = n_14;
      {
        t = SSL_mkterm(not_null(k_65), not_null(g_65));
        {
          m_65 = t;
          t = not_null(m_65);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm i_66 = NULL;
  ATerm k_66 = NULL,m_66 = NULL,n_66 = NULL;
  i_66 = t;
  {
    ATerm o_66 = NULL;
    ATerm p_66 = NULL;
    t = new_0(t);
    {
      o_66 = t;
      {
        if(((k_66 != NULL) && (k_66 != o_66)))
          _fail(o_66);
        else
          k_66 = o_66;
        {
          ATerm q_66 = NULL;
          t = new_0(t);
          {
            p_66 = t;
            {
              if(((m_66 != NULL) && (m_66 != p_66)))
                _fail(p_66);
              else
                m_66 = p_66;
              {
                t = new_0(t);
                {
                  q_66 = t;
                  if(((n_66 != NULL) && (n_66 != q_66)))
                    _fail(q_66);
                  else
                    n_66 = q_66;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_66)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_66)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_66)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_66))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(k_66), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_14), term_r_14)), not_null(m_66), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_66)), not_null(n_66), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_66)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
  i_67 = t;
  h_67 :
  if(match_cons(i_67, sym__2))
    {
      j_67 = ATgetArgument(i_67, 0);
      k_67 = ATgetArgument(i_67, 1);
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_67), not_null(k_67));
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            t = SSL_subtr(not_null(j_67), not_null(k_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm q_96 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
    a_68 = t;
    s_67 :
    if(match_cons(a_68, sym__2))
      {
        b_68 = ATgetArgument(a_68, 0);
        c_68 = ATgetArgument(a_68, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(b_68), not_null(c_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
    f_68 = t;
    u_67 :
    if(match_cons(f_68, sym__3))
      {
        g_68 = ATgetArgument(f_68, 0);
        h_68 = ATgetArgument(f_68, 1);
        i_68 = ATgetArgument(f_68, 2);
        v_67 :
        if(match_int(g_68, 0))
          {
            t = not_null(i_68);
          }
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
    ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL;
    l_68 = t;
    z_67 :
    if(match_cons(l_68, sym__3))
      {
        m_68 = ATgetArgument(l_68, 0);
        n_68 = ATgetArgument(l_68, 1);
        o_68 = ATgetArgument(l_68, 2);
        {
          ATerm s_68 = NULL,u_68 = NULL;
          ATerm y_14;
          y_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_68), term_t_6);
            t = geq_0(t);
          }
          t = y_14;
          {
            ATerm z_14;
            z_14 = t;
            {
              ATerm t_68 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_68), term_t_6);
              {
                t = subt_0(t);
                {
                  t_68 = t;
                  if(((s_68 != NULL) && (s_68 != t_68)))
                    _fail(t_68);
                  else
                    s_68 = t_68;
                }
              }
            }
            t = z_14;
            {
              ATerm v_68 = NULL;
              t = not_null(n_68);
              {
                t = q_96(t);
                {
                  v_68 = t;
                  if(((u_68 != NULL) && (u_68 != v_68)))
                    _fail(v_68);
                  else
                    u_68 = v_68;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(s_68), not_null(n_68), (ATerm) ATinsert(CheckATermList(not_null(o_68)), not_null(u_68)));
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
  ATerm g_69 = NULL,h_69 = NULL,k_69 = NULL;
  g_69 = t;
  f_69 :
  if(match_cons(g_69, sym__2))
    {
      h_69 = ATgetArgument(g_69, 0);
      k_69 = ATgetArgument(g_69, 1);
      {
        ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL;
        ATerm q_69 = NULL;
        ATerm r_69 = NULL;
        t = new_0(t);
        {
          q_69 = t;
          {
            if(((n_69 != NULL) && (n_69 != q_69)))
              _fail(q_69);
            else
              n_69 = q_69;
            {
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
                    t = new_0(t);
                    {
                      s_69 = t;
                      if(((p_69 != NULL) && (p_69 != s_69)))
                        _fail(s_69);
                      else
                        p_69 = s_69;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_69)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_69)))), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_69))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(n_69), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_14), term_r_14)), not_null(o_69), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_69)), not_null(p_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_69)));
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
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL;
  a_70 = t;
  y_69 :
  if(match_cons(a_70, sym__2))
    {
      b_70 = ATgetArgument(a_70, 0);
      c_70 = ATgetArgument(a_70, 1);
      z_69 :
      if(((ATermList) c_70 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm u_101 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, u_101);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
  g_70 = t;
  f_70 :
  if(((ATgetType(g_70) == AT_LIST) && ((ATermList) g_70 != ATempty)))
    {
      h_70 = ATgetFirst((ATermList) g_70);
      i_70 = (ATerm) ATgetNext((ATermList) g_70);
      t = not_null(i_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL;
  p_70 = t;
  n_70 :
  if(((ATgetType(p_70) == AT_LIST) && ((ATermList) p_70 != ATempty)))
    {
      q_70 = ATgetFirst((ATermList) p_70);
      r_70 = (ATerm) ATgetNext((ATermList) p_70);
      o_70 :
      if(((ATermList) r_70 == ATempty))
        {
          t = not_null(q_70);
        }
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
  ATerm a_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(c_15);
    }
  else
    {
      t = a_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL;
  ATerm n_73 (ATerm t)
  {
    ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,p_72 = NULL;
    ATerm g_15;
    g_15 = t;
    {
      ATerm c_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL;
      ATerm d_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_71), term_t_6);
      {
        t = add_0(t);
        {
          d_72 = t;
          if(((c_72 != NULL) && (c_72 != d_72)))
            _fail(d_72);
          else
            c_72 = d_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_72), term_h_15);
        {
          t = copy_1(t, new_0);
          {
            e_72 = t;
            d_71 :
            if(((ATgetType(e_72) == AT_LIST) && ((ATermList) e_72 != ATempty)))
              {
                f_72 = ATgetFirst((ATermList) e_72);
                g_72 = (ATerm) ATgetNext((ATermList) e_72);
                {
                  ATerm h_72 = NULL;
                  if(((u_71 != NULL) && (u_71 != f_72)))
                    _fail(f_72);
                  else
                    u_71 = f_72;
                  {
                    if(((v_71 != NULL) && (v_71 != g_72)))
                      _fail(g_72);
                    else
                      v_71 = g_72;
                    {
                      t = not_null(v_71);
                      {
                        ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
                        t = last_0(t);
                        {
                          h_72 = t;
                          {
                            if(((t_71 != NULL) && (t_71 != h_72)))
                              _fail(h_72);
                            else
                              t_71 = h_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_71)), not_null(u_71)), not_null(v_71));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    i_72 = t;
                                    c_71 :
                                    if(match_cons(i_72, sym__6))
                                      {
                                        j_72 = ATgetArgument(i_72, 0);
                                        k_72 = ATgetArgument(i_72, 1);
                                        l_72 = ATgetArgument(i_72, 2);
                                        m_72 = ATgetArgument(i_72, 3);
                                        n_72 = ATgetArgument(i_72, 4);
                                        o_72 = ATgetArgument(i_72, 5);
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
                                                {
                                                  if(((a_72 != NULL) && (a_72 != n_72)))
                                                    _fail(n_72);
                                                  else
                                                    a_72 = n_72;
                                                  if(((b_72 != NULL) && (b_72 != o_72)))
                                                    _fail(o_72);
                                                  else
                                                    b_72 = o_72;
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
      ATerm q_72 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_72)), not_null(y_71)), not_null(v_71));
      {
        t = concat_0(t);
        {
          q_72 = t;
          if(((p_72 != NULL) && (p_72 != q_72)))
            _fail(q_72);
          else
            p_72 = q_72;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(o_71), term_i_15), not_null(x_71), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(p_72)), not_null(u_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(o_71), not_null(z_71)))), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(o_71), not_null(b_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(w_71))))));
    }
    return(t);
  }
  ATerm o_73 (ATerm t)
  {
    ATerm s_72 = NULL;
    ATerm t_72 = NULL;
    t = new_0(t);
    {
      t_72 = t;
      if(((s_72 != NULL) && (s_72 != t_72)))
        _fail(t_72);
      else
        s_72 = t_72;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(o_71), term_i_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(o_71), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(o_71), (ATerm) ATempty))), term_r_11))));
    return(t);
  }
  ATerm p_73 (ATerm t)
  {
    ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,l_73 = NULL;
    ATerm l_15;
    l_15 = t;
    {
      ATerm d_73 = NULL;
      ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL;
      t = new_0(t);
      {
        d_73 = t;
        {
          if(((w_72 != NULL) && (w_72 != d_73)))
            _fail(d_73);
          else
            w_72 = d_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_71), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_72)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  e_73 = t;
                  i_71 :
                  if(match_cons(e_73, sym__6))
                    {
                      f_73 = ATgetArgument(e_73, 0);
                      g_73 = ATgetArgument(e_73, 1);
                      h_73 = ATgetArgument(e_73, 2);
                      i_73 = ATgetArgument(e_73, 3);
                      j_73 = ATgetArgument(e_73, 4);
                      k_73 = ATgetArgument(e_73, 5);
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
                              {
                                if(((b_73 != NULL) && (b_73 != j_73)))
                                  _fail(j_73);
                                else
                                  b_73 = j_73;
                                if(((c_73 != NULL) && (c_73 != k_73)))
                                  _fail(k_73);
                                else
                                  c_73 = k_73;
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
    t = l_15;
    {
      ATerm m_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), not_null(b_73));
      {
        t = conc_0(t);
        {
          m_73 = t;
          if(((l_73 != NULL) && (l_73 != m_73)))
            _fail(m_73);
          else
            l_73 = m_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(o_71), term_s_15), not_null(y_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(l_73)), not_null(w_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(o_71), not_null(a_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(o_71), not_null(c_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_72))))));
    }
    return(t);
  }
  n_71 = t;
  k_71 :
  if(match_cons(n_71, sym__3))
    {
      o_71 = ATgetArgument(n_71, 0);
      p_71 = ATgetArgument(n_71, 1);
      q_71 = ATgetArgument(n_71, 2);
      l_71 :
      if(match_string(p_71, "T"))
        {
          m_71 :
          if(match_int(q_71, 0))
            {
              ATerm t_15 = t;
              int b_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_73(t);
                  LocalPopChoice(b_16);
                }
              else
                {
                  t = t_15;
                  t = o_73(t);
                }
            }
          else
            {
              t = n_73(t);
            }
        }
      else
        {
          if(match_string(p_71, "D"))
            {
              t = p_73(t);
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
  ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL;
  e_74 = t;
  b_74 :
  if(match_cons(e_74, sym__2))
    {
      f_74 = ATgetArgument(e_74, 0);
      k_74 = ATgetArgument(e_74, 1);
      c_74 :
      if(match_cons(f_74, sym__2))
        {
          g_74 = ATgetArgument(f_74, 0);
          j_74 = ATgetArgument(f_74, 1);
          d_74 :
          if(match_cons(g_74, sym_Mod_2))
            {
              h_74 = ATgetArgument(g_74, 0);
              i_74 = ATgetArgument(g_74, 1);
              {
                ATerm p_74 = NULL;
                ATerm q_74 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(h_74), not_null(i_74), not_null(j_74));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      q_74 = t;
                      if(((p_74 != NULL) && (p_74 != q_74)))
                        _fail(q_74);
                      else
                        p_74 = q_74;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_74), not_null(k_74));
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
  ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,e_75 = NULL,f_75 = NULL;
  w_74 = t;
  u_74 :
  if(match_cons(w_74, sym__5))
    {
      x_74 = ATgetArgument(w_74, 0);
      a_75 = ATgetArgument(w_74, 1);
      b_75 = ATgetArgument(w_74, 2);
      e_75 = ATgetArgument(w_74, 3);
      f_75 = ATgetArgument(w_74, 4);
      v_74 :
      if(((ATgetType(x_74) == AT_LIST) && ((ATermList) x_74 != ATempty)))
        {
          y_74 = ATgetFirst((ATermList) x_74);
          z_74 = (ATerm) ATgetNext((ATermList) x_74);
          t = (ATerm) ATmakeAppl(sym__5, not_null(z_74), not_null(a_75), not_null(b_75), not_null(e_75), (ATerm) ATinsert(CheckATermList(not_null(f_75)), not_null(y_74)));
        }
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
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL;
  q_75 = t;
  o_75 :
  if(match_cons(q_75, sym__2))
    {
      r_75 = ATgetArgument(q_75, 0);
      s_75 = ATgetArgument(q_75, 1);
      p_75 :
      if(((ATgetType(s_75) == AT_LIST) && ((ATermList) s_75 != ATempty)))
        {
          t_75 = ATgetFirst((ATermList) s_75);
          u_75 = (ATerm) ATgetNext((ATermList) s_75);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_75)), not_null(t_75)), not_null(u_75));
        }
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
  ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL;
  b_76 = t;
  a_76 :
  if(match_cons(b_76, sym__2))
    {
      c_76 = ATgetArgument(b_76, 0);
      d_76 = ATgetArgument(b_76, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_76)), not_null(c_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,v_76 = NULL,w_76 = NULL;
  l_76 = t;
  i_76 :
  if(match_cons(l_76, sym__2))
    {
      m_76 = ATgetArgument(l_76, 0);
      p_76 = ATgetArgument(l_76, 1);
      j_76 :
      if(((ATgetType(m_76) == AT_LIST) && ((ATermList) m_76 != ATempty)))
        {
          n_76 = ATgetFirst((ATermList) m_76);
          o_76 = (ATerm) ATgetNext((ATermList) m_76);
          k_76 :
          if(((ATgetType(p_76) == AT_LIST) && ((ATermList) p_76 != ATempty)))
            {
              v_76 = ATgetFirst((ATermList) p_76);
              w_76 = (ATerm) ATgetNext((ATermList) p_76);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(n_76), not_null(v_76)), (ATerm) ATmakeAppl(sym__2, not_null(o_76), not_null(w_76)));
            }
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
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL;
  i_77 = t;
  f_77 :
  if(match_cons(i_77, sym__2))
    {
      j_77 = ATgetArgument(i_77, 0);
      k_77 = ATgetArgument(i_77, 1);
      g_77 :
      if(((ATermList) j_77 == ATempty))
        {
          h_77 :
          if(((ATermList) k_77 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm))
{
  ATerm m_77 (ATerm t)
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_101(t);
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        {
          t = n_101(t);
          {
            t = _2(t, p_101, m_77);
            t = o_101(t);
          }
        }
      }
    return(t);
  }
  t = m_77(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm r_101 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, r_101);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL;
  x_77 = t;
  v_77 :
  if(((ATgetType(x_77) == AT_LIST) && ((ATermList) x_77 != ATempty)))
    {
      y_77 = ATgetFirst((ATermList) x_77);
      b_78 = (ATerm) ATgetNext((ATermList) x_77);
      w_77 :
      if(match_cons(y_77, sym__2))
        {
          z_77 = ATgetArgument(y_77, 0);
          a_78 = ATgetArgument(y_77, 1);
          {
            ATerm h_78 = NULL,i_78 = NULL,q_78 = NULL,w_78 = NULL;
            ATerm g_16;
            g_16 = t;
            {
              ATerm j_78 = NULL;
              ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL;
              t = not_null(a_78);
              {
                j_78 = t;
                {
                  t = SSL_explode_term(not_null(j_78));
                  {
                    n_78 = t;
                    q_77 :
                    if(match_cons(n_78, sym__2))
                      {
                        o_78 = ATgetArgument(n_78, 0);
                        p_78 = ATgetArgument(n_78, 1);
                        {
                          if(((h_78 != NULL) && (h_78 != o_78)))
                            _fail(o_78);
                          else
                            h_78 = o_78;
                          if(((i_78 != NULL) && (i_78 != p_78)))
                            _fail(p_78);
                          else
                            i_78 = p_78;
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
              ATerm h_16;
              h_16 = t;
              {
                ATerm r_78 = NULL;
                ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL;
                t = not_null(z_77);
                {
                  r_78 = t;
                  {
                    t = SSL_explode_term(not_null(r_78));
                    {
                      t_78 = t;
                      t_77 :
                      if(match_cons(t_78, sym__2))
                        {
                          u_78 = ATgetArgument(t_78, 0);
                          v_78 = ATgetArgument(t_78, 1);
                          {
                            if(((h_78 != NULL) && (h_78 != u_78)))
                              _fail(u_78);
                            else
                              h_78 = u_78;
                            if(((q_78 != NULL) && (q_78 != v_78)))
                              _fail(v_78);
                            else
                              q_78 = v_78;
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
              t = h_16;
              {
                ATerm x_78 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_78), not_null(i_78));
                {
                  t = zip_1(t, _id);
                  {
                    x_78 = t;
                    if(((w_78 != NULL) && (w_78 != x_78)))
                      _fail(x_78);
                    else
                      w_78 = x_78;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_78), not_null(b_78));
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
  ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL;
  q_79 = t;
  o_79 :
  if(((ATgetType(q_79) == AT_LIST) && ((ATermList) q_79 != ATempty)))
    {
      r_79 = ATgetFirst((ATermList) q_79);
      u_79 = (ATerm) ATgetNext((ATermList) q_79);
      p_79 :
      if(match_cons(r_79, sym__2))
        {
          s_79 = ATgetArgument(r_79, 0);
          t_79 = ATgetArgument(r_79, 1);
          {
            ATerm w_79 = NULL;
            if(((s_79 != NULL) && (s_79 != t_79)))
              _fail(t_79);
            else
              s_79 = t_79;
            {
              if(((w_79 != NULL) && (w_79 != u_79)))
                _fail(u_79);
              else
                w_79 = u_79;
              t = not_null(w_79);
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
  ATerm n_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
      b_80 = t;
      z_79 :
      if(match_cons(b_80, sym__2))
        {
          c_80 = ATgetArgument(b_80, 0);
          d_80 = ATgetArgument(b_80, 1);
          {
            t = not_null(c_80);
            {
              ATerm p_80 (ATerm t)
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
                            t = not_null(d_80);
                            return(t);
                          }
                          t = HdMember_1(t, n_2);
                          t = p_80(t);
                          LocalPopChoice(d_17);
                        }
                      else
                        {
                          t = c_17;
                          t = Cons_2(t, _id, p_80);
                        }
                    }
                  }
                return(t);
              }
              t = p_80(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_16);
    }
  else
    {
      t = n_16;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm g_80 = NULL;
          g_80 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(g_80));
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          ATerm e_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_2 (ATerm t)
              {
                ATerm k_17 = t;
                int l_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(l_17);
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
              t = e_17;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, o_2, p_2, q_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm o_81 (ATerm))
{
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL,h_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL,p_81 = NULL;
  d_81 = t;
  b_81 :
  if(match_cons(d_81, sym__5))
    {
      e_81 = ATgetArgument(d_81, 0);
      j_81 = ATgetArgument(d_81, 1);
      k_81 = ATgetArgument(d_81, 2);
      l_81 = ATgetArgument(d_81, 3);
      p_81 = ATgetArgument(d_81, 4);
      c_81 :
      if(((ATgetType(e_81) == AT_LIST) && ((ATermList) e_81 != ATempty)))
        {
          f_81 = ATgetFirst((ATermList) e_81);
          h_81 = (ATerm) ATgetNext((ATermList) e_81);
          {
            ATerm z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,i_82 = NULL,k_82 = NULL,m_82 = NULL;
            ATerm t_17;
            t_17 = t;
            {
              ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_81), not_null(k_81));
              {
                t = m_81(t);
                {
                  d_82 = t;
                  v_80 :
                  if(match_cons(d_82, sym__2))
                    {
                      e_82 = ATgetArgument(d_82, 0);
                      f_82 = ATgetArgument(d_82, 1);
                      {
                        ATerm g_82 = NULL;
                        if(((a_82 != NULL) && (a_82 != e_82)))
                          _fail(e_82);
                        else
                          a_82 = e_82;
                        {
                          if(((z_81 != NULL) && (z_81 != f_82)))
                            _fail(f_82);
                          else
                            z_81 = f_82;
                          {
                            t = not_null(a_82);
                            {
                              ATerm h_82 = NULL;
                              t = n_81(t);
                              {
                                g_82 = t;
                                {
                                  if(((b_82 != NULL) && (b_82 != g_82)))
                                    _fail(g_82);
                                  else
                                    b_82 = g_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_82), not_null(j_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        h_82 = t;
                                        if(((c_82 != NULL) && (c_82 != h_82)))
                                          _fail(h_82);
                                        else
                                          c_82 = h_82;
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
                ATerm j_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_82), not_null(h_81));
                {
                  t = conc_0(t);
                  {
                    j_82 = t;
                    if(((i_82 != NULL) && (i_82 != j_82)))
                      _fail(j_82);
                    else
                      i_82 = j_82;
                  }
                }
              }
              t = u_17;
              {
                ATerm v_17;
                v_17 = t;
                {
                  ATerm l_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_82), not_null(j_81));
                  {
                    t = conc_0(t);
                    {
                      l_82 = t;
                      if(((k_82 != NULL) && (k_82 != l_82)))
                        _fail(l_82);
                      else
                        k_82 = l_82;
                    }
                  }
                }
                t = v_17;
                {
                  ATerm n_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_81), not_null(a_82), not_null(l_81));
                  {
                    t = o_81(t);
                    {
                      n_82 = t;
                      if(((m_82 != NULL) && (m_82 != n_82)))
                        _fail(n_82);
                      else
                        m_82 = n_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(i_82), not_null(k_82), not_null(z_81), not_null(m_82), not_null(p_81));
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
  ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL;
  y_82 = t;
  w_82 :
  if(match_cons(y_82, sym__5))
    {
      z_82 = ATgetArgument(y_82, 0);
      a_83 = ATgetArgument(y_82, 1);
      b_83 = ATgetArgument(y_82, 2);
      c_83 = ATgetArgument(y_82, 3);
      d_83 = ATgetArgument(y_82, 4);
      x_82 :
      if(((ATermList) z_82 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_83), not_null(d_83));
        }
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
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL;
  l_83 = t;
  k_83 :
  if(match_cons(l_83, sym__3))
    {
      m_83 = ATgetArgument(l_83, 0);
      n_83 = ATgetArgument(l_83, 1);
      o_83 = ATgetArgument(l_83, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(m_83), not_null(m_83), not_null(n_83), not_null(o_83), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm m_91 (ATerm), ATerm n_91 (ATerm))
{
  ATerm z_83 (ATerm t)
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_91(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          t = n_91(t);
          t = z_83(t);
        }
      }
    return(t);
  }
  t = z_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm r_91 (ATerm))
{
  t = p_91(t);
  t = while_not_2(t, q_91, r_91);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm x_81 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, v_81, w_81, x_81);
        LocalPopChoice(g_18);
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
    ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL;
    c_84 = t;
    b_84 :
    if(match_cons(c_84, sym__3))
      {
        d_84 = ATgetArgument(c_84, 0);
        e_84 = ATgetArgument(c_84, 1);
        f_84 = ATgetArgument(c_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(f_84)), not_null(e_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, t_2, u_2);
  {
    ATerm r_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = r_18;
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
ATerm assert_1 (ATerm t, ATerm g_81 (ATerm))
{
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL;
  o_84 = t;
  n_84 :
  if(match_cons(o_84, sym__2))
    {
      p_84 = ATgetArgument(o_84, 0);
      q_84 = ATgetArgument(o_84, 1);
      {
        ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL;
        ATerm u_18;
        u_18 = t;
        {
          ATerm z_84 = NULL;
          ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL;
          t = g_81(t);
          {
            z_84 = t;
            {
              if(((w_84 != NULL) && (w_84 != z_84)))
                _fail(z_84);
              else
                w_84 = z_84;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(w_84), not_null(p_84), not_null(q_84));
                {
                  t = table_push_0(t);
                  {
                    ATerm v_18 = t;
                    int w_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_84), term_x_18);
                        t = table_get_0(t);
                        LocalPopChoice(w_18);
                      }
                    else
                      {
                        t = v_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      a_85 = t;
                      m_84 :
                      if(((ATgetType(a_85) == AT_LIST) && ((ATermList) a_85 != ATempty)))
                        {
                          b_85 = ATgetFirst((ATermList) a_85);
                          c_85 = (ATerm) ATgetNext((ATermList) a_85);
                          {
                            if(((x_84 != NULL) && (x_84 != b_85)))
                              _fail(b_85);
                            else
                              x_84 = b_85;
                            {
                              if(((y_84 != NULL) && (y_84 != c_85)))
                                _fail(c_85);
                              else
                                y_84 = c_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(w_84), term_x_18, (ATerm) ATinsert(CheckATermList(not_null(y_84)), (ATerm) ATinsert(CheckATermList(not_null(x_84)), not_null(p_84))));
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
ATerm HdMember_1 (ATerm t, ATerm h_97 (ATerm))
{
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
  j_85 = t;
  i_85 :
  if(((ATgetType(j_85) == AT_LIST) && ((ATermList) j_85 != ATempty)))
    {
      k_85 = ATgetFirst((ATermList) j_85);
      l_85 = (ATerm) ATgetNext((ATermList) j_85);
      {
        t = h_97(t);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm o_85 = NULL;
            o_85 = t;
            if(((k_85 != NULL) && (k_85 != o_85)))
              _fail(o_85);
            else
              k_85 = o_85;
            return(t);
          }
          t = fetch_1(t, w_2);
        }
        t = not_null(l_85);
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
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
  t_85 = t;
  s_85 :
  if(match_cons(t_85, sym__2))
    {
      u_85 = ATgetArgument(t_85, 0);
      v_85 = ATgetArgument(t_85, 1);
      {
        t = not_null(u_85);
        {
          ATerm f_86 (ATerm t)
          {
            ATerm z_18 = t;
            int e_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(v_85);
                LocalPopChoice(e_19);
              }
            else
              {
                t = z_18;
                {
                  ATerm f_19 = t;
                  int g_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_2 (ATerm t)
                      {
                        t = not_null(v_85);
                        return(t);
                      }
                      t = HdMember_1(t, x_2);
                      t = f_86(t);
                      LocalPopChoice(g_19);
                    }
                  else
                    {
                      t = f_19;
                      t = Cons_2(t, _id, f_86);
                    }
                }
              }
            return(t);
          }
          t = f_86(t);
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
  ATerm o_86 = NULL;
  ATerm q_86 = NULL;
  o_86 = t;
  {
    ATerm r_86 = NULL,s_86 = NULL,u_86 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(o_86));
    {
      ATerm y_2 (ATerm t)
      {
        t = term_i_19;
        return(t);
      }
      t = rewrite_1(t, y_2);
      {
        r_86 = t;
        m_86 :
        if(match_cons(r_86, sym_Defined_2))
          {
            s_86 = ATgetArgument(r_86, 0);
            u_86 = ATgetArgument(r_86, 1);
            n_86 :
            if(match_string(s_86, "h_0"))
              {
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
    t = not_null(q_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL;
  a_87 = t;
  z_86 :
  if(((ATgetType(a_87) == AT_LIST) && ((ATermList) a_87 != ATempty)))
    {
      b_87 = ATgetFirst((ATermList) a_87);
      c_87 = (ATerm) ATgetNext((ATermList) a_87);
      t = not_null(b_87);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL;
  i_87 = t;
  h_87 :
  if(match_cons(i_87, sym__2))
    {
      j_87 = ATgetArgument(i_87, 0);
      k_87 = ATgetArgument(i_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_87), not_null(k_87));
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
ATerm rewrite_1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm r_87 = NULL;
  ATerm t_87 = NULL;
  r_87 = t;
  {
    ATerm u_87 = NULL;
    t = term_h_15;
    {
      t = i_81(t);
      {
        u_87 = t;
        if(((t_87 != NULL) && (t_87 != u_87)))
          _fail(u_87);
        else
          t_87 = u_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_87), not_null(r_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL;
  c_88 = t;
  b_88 :
  if(match_cons(c_88, sym__2))
    {
      d_88 = ATgetArgument(c_88, 0);
      e_88 = ATgetArgument(c_88, 1);
      {
        ATerm h_88 = NULL,i_88 = NULL;
        ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(e_88), not_null(d_88));
        {
          ATerm z_2 (ATerm t)
          {
            t = term_j_19;
            return(t);
          }
          t = rewrite_1(t, z_2);
          {
            j_88 = t;
            z_87 :
            if(match_cons(j_88, sym_Defined_3))
              {
                k_88 = ATgetArgument(j_88, 0);
                l_88 = ATgetArgument(j_88, 1);
                m_88 = ATgetArgument(j_88, 2);
                a_88 :
                if(match_string(k_88, "g_0"))
                  {
                    if(((h_88 != NULL) && (h_88 != l_88)))
                      _fail(l_88);
                    else
                      h_88 = l_88;
                    if(((i_88 != NULL) && (i_88 != m_88)))
                      _fail(m_88);
                    else
                      i_88 = m_88;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(i_88)), not_null(h_88));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm))
{
  ATerm k_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_96(t);
      LocalPopChoice(q_19);
    }
  else
    {
      t = k_19;
      {
        ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL;
        t_88 = t;
        s_88 :
        if(((ATgetType(t_88) == AT_LIST) && ((ATermList) t_88 != ATempty)))
          {
            u_88 = ATgetFirst((ATermList) t_88);
            v_88 = (ATerm) ATgetNext((ATermList) t_88);
            {
              ATerm y_88 = NULL,a_89 = NULL;
              ATerm s_19;
              s_19 = t;
              {
                ATerm z_88 = NULL;
                t = not_null(u_88);
                {
                  t = f_96(t);
                  {
                    z_88 = t;
                    if(((y_88 != NULL) && (y_88 != z_88)))
                      _fail(z_88);
                    else
                      y_88 = z_88;
                  }
                }
              }
              t = s_19;
              {
                ATerm b_89 = NULL;
                t = not_null(v_88);
                {
                  t = foldr_3(t, d_96, e_96, f_96);
                  {
                    b_89 = t;
                    if(((a_89 != NULL) && (a_89 != b_89)))
                      _fail(b_89);
                    else
                      a_89 = b_89;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_88), not_null(a_89));
                  t = e_96(t);
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
  ATerm a_3 (ATerm t)
  {
    t = term_t_19;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_t_6;
    return(t);
  }
  t = foldr_3(t, a_3, add_0, d_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL;
    l_89 = t;
    k_89 :
    if(match_cons(l_89, sym_SDef_3))
      {
        m_89 = ATgetArgument(l_89, 0);
        n_89 = ATgetArgument(l_89, 1);
        o_89 = ATgetArgument(l_89, 2);
        {
          ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL;
          ATerm u_19;
          u_19 = t;
          {
            ATerm w_89 = NULL;
            t = not_null(n_89);
            {
              ATerm x_89 = NULL;
              t = length_0(t);
              {
                w_89 = t;
                {
                  if(((u_89 != NULL) && (u_89 != w_89)))
                    _fail(w_89);
                  else
                    u_89 = w_89;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_89), not_null(u_89));
                    {
                      ATerm y_89 = NULL,a_90 = NULL;
                      ATerm v_19 = t;
                      int w_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(w_19);
                        }
                      else
                        {
                          t = v_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        x_89 = t;
                        {
                          if(((t_89 != NULL) && (t_89 != x_89)))
                            _fail(x_89);
                          else
                            t_89 = x_89;
                          {
                            ATerm z_89 = NULL;
                            t = not_null(m_89);
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
                                z_89 = t;
                                if(((y_89 != NULL) && (y_89 != z_89)))
                                  _fail(z_89);
                                else
                                  y_89 = z_89;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(u_89)), not_null(y_89));
                              {
                                t = union_0(t);
                                {
                                  a_90 = t;
                                  {
                                    if(((v_89 != NULL) && (v_89 != a_90)))
                                      _fail(a_90);
                                    else
                                      v_89 = a_90;
                                    {
                                      ATerm b_20;
                                      b_20 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(u_89), not_null(m_89)), (ATerm) ATmakeAppl(sym_Defined_3, term_c_20, not_null(l_89), not_null(t_89)));
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
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(m_89)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_20, not_null(v_89)));
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
  ATerm h_90 = NULL;
  ATerm i_90 = NULL;
  t = sort_defs_0(t);
  {
    i_90 = t;
    if(((h_90 != NULL) && (h_90 != i_90)))
      _fail(i_90);
    else
      h_90 = i_90;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_k_20), not_null(h_90), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm p_90 = NULL,q_90 = NULL;
  p_90 = t;
  o_90 :
  if(match_cons(p_90, sym_Strategies_1))
    {
      q_90 = ATgetArgument(p_90, 0);
      {
        ATerm t_90 = NULL,z_90 = NULL;
        ATerm u_90 = NULL;
        t = SSLgetAnnotations(not_null(p_90));
        {
          u_90 = t;
          if(((t_90 != NULL) && (t_90 != u_90)))
            _fail(u_90);
          else
            t_90 = u_90;
        }
        {
          t = not_null(q_90);
          {
            ATerm b_91 = NULL;
            t = e_78(t);
            {
              z_90 = t;
              {
                ATerm c_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_90)), not_null(t_90));
                {
                  c_91 = t;
                  if(((b_91 != NULL) && (b_91 != c_91)))
                    _fail(c_91);
                  else
                    b_91 = c_91;
                }
                t = not_null(b_91);
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
ATerm Cons_2 (ATerm t, ATerm n_80 (ATerm), ATerm o_80 (ATerm))
{
  ATerm t_91 = NULL,u_91 = NULL,v_91 = NULL;
  t_91 = t;
  s_91 :
  if(((ATgetType(t_91) == AT_LIST) && ((ATermList) t_91 != ATempty)))
    {
      u_91 = ATgetFirst((ATermList) t_91);
      v_91 = (ATerm) ATgetNext((ATermList) t_91);
      {
        ATerm z_91 = NULL,b_92 = NULL;
        ATerm a_92 = NULL;
        t = SSLgetAnnotations(not_null(t_91));
        {
          a_92 = t;
          if(((z_91 != NULL) && (z_91 != a_92)))
            _fail(a_92);
          else
            z_91 = a_92;
        }
        {
          t = not_null(u_91);
          {
            ATerm d_92 = NULL;
            t = n_80(t);
            {
              b_92 = t;
              {
                t = not_null(v_91);
                {
                  ATerm f_92 = NULL;
                  t = o_80(t);
                  {
                    d_92 = t;
                    {
                      ATerm g_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_92)), not_null(b_92)), not_null(z_91));
                      {
                        g_92 = t;
                        if(((f_92 != NULL) && (f_92 != g_92)))
                          _fail(g_92);
                        else
                          f_92 = g_92;
                      }
                      t = not_null(f_92);
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
ATerm Specification_1 (ATerm t, ATerm g_78 (ATerm))
{
  ATerm r_92 = NULL,s_92 = NULL;
  r_92 = t;
  q_92 :
  if(match_cons(r_92, sym_Specification_1))
    {
      s_92 = ATgetArgument(r_92, 0);
      {
        ATerm v_92 = NULL,x_92 = NULL;
        ATerm w_92 = NULL;
        t = SSLgetAnnotations(not_null(r_92));
        {
          w_92 = t;
          if(((v_92 != NULL) && (v_92 != w_92)))
            _fail(w_92);
          else
            v_92 = w_92;
        }
        {
          t = not_null(s_92);
          {
            ATerm z_92 = NULL;
            t = g_78(t);
            {
              x_92 = t;
              {
                ATerm a_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(x_92)), not_null(v_92));
                {
                  a_93 = t;
                  if(((z_92 != NULL) && (z_92 != a_93)))
                    _fail(a_93);
                  else
                    z_92 = a_93;
                }
                t = not_null(z_92);
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
ATerm _2 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL;
  l_93 = t;
  k_93 :
  if(match_cons(l_93, sym__2))
    {
      m_93 = ATgetArgument(l_93, 0);
      n_93 = ATgetArgument(l_93, 1);
      {
        ATerm w_93 = NULL,y_93 = NULL;
        ATerm x_93 = NULL;
        t = SSLgetAnnotations(not_null(l_93));
        {
          x_93 = t;
          if(((w_93 != NULL) && (w_93 != x_93)))
            _fail(x_93);
          else
            w_93 = x_93;
        }
        {
          t = not_null(m_93);
          {
            ATerm a_94 = NULL;
            t = i_69(t);
            {
              y_93 = t;
              {
                t = not_null(n_93);
                {
                  ATerm c_94 = NULL;
                  t = j_69(t);
                  {
                    a_94 = t;
                    {
                      ATerm d_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_93), not_null(a_94)), not_null(w_93));
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
ATerm default_usage_0 (ATerm t)
{
  ATerm l_94 = NULL;
  ATerm l_20;
  l_20 = t;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm m_94 = NULL,n_94 = NULL;
      m_94 = t;
      k_94 :
      if(match_cons(m_94, sym_Program_1))
        {
          n_94 = ATgetArgument(m_94, 0);
          if(((l_94 != NULL) && (l_94 != n_94)))
            _fail(n_94);
          else
            l_94 = n_94;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, h_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_20), not_null(l_94)), term_m_20));
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
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL;
  r_94 = t;
  q_94 :
  if(match_cons(r_94, sym__2))
    {
      s_94 = ATgetArgument(r_94, 0);
      t_94 = ATgetArgument(r_94, 1);
      {
        ATerm o_20;
        o_20 = t;
        t = SSL_printnl(not_null(s_94), not_null(t_94));
        t = o_20;
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
  ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL;
  z_94 = t;
  y_94 :
  if(match_cons(z_94, sym__2))
    {
      a_95 = ATgetArgument(z_94, 0);
      b_95 = ATgetArgument(z_94, 1);
      {
        t = not_null(a_95);
        {
          ATerm i_3 (ATerm t)
          {
            t = not_null(b_95);
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
ATerm debug_1 (ATerm t, ATerm l_87 (ATerm))
{
  ATerm t_20;
  t_20 = t;
  {
    ATerm h_95 = NULL,j_95 = NULL;
    ATerm u_20;
    u_20 = t;
    {
      ATerm i_95 = NULL;
      t = l_87(t);
      {
        i_95 = t;
        if(((h_95 != NULL) && (h_95 != i_95)))
          _fail(i_95);
        else
          h_95 = i_95;
      }
    }
    t = u_20;
    {
      ATerm k_95 = NULL;
      k_95 = t;
      if(((j_95 != NULL) && (j_95 != k_95)))
        _fail(k_95);
      else
        j_95 = k_95;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_95)), not_null(h_95)));
        t = printnl_0(t);
      }
    }
  }
  t = t_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_95 = NULL;
  o_95 = t;
  t = SSL_is_string(not_null(o_95));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = v_20;
      {
        ATerm b_21 = t;
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
            t = b_21;
            {
              ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL;
              x_95 = t;
              w_95 :
              if(match_cons(x_95, sym_Path_1))
                {
                  y_95 = ATgetArgument(x_95, 0);
                  t = not_null(y_95);
                }
              else
                {
                  if(match_cons(x_95, sym_Var_1))
                    {
                      y_95 = ATgetArgument(x_95, 0);
                      {
                        t = not_null(y_95);
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
                      if(match_cons(x_95, sym_Prefix_2))
                        {
                          y_95 = ATgetArgument(x_95, 0);
                          z_95 = ATgetArgument(x_95, 1);
                          {
                            ATerm j_96 = NULL,l_96 = NULL;
                            ATerm i_21;
                            i_21 = t;
                            {
                              ATerm k_96 = NULL;
                              t = not_null(y_95);
                              {
                                t = eval_config_0(t);
                                {
                                  k_96 = t;
                                  if(((j_96 != NULL) && (j_96 != k_96)))
                                    _fail(k_96);
                                  else
                                    j_96 = k_96;
                                }
                              }
                            }
                            t = i_21;
                            {
                              ATerm m_96 = NULL;
                              t = not_null(z_95);
                              {
                                t = eval_config_0(t);
                                {
                                  m_96 = t;
                                  if(((l_96 != NULL) && (l_96 != m_96)))
                                    _fail(m_96);
                                  else
                                    l_96 = m_96;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_96), not_null(l_96));
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
  ATerm w_96 = NULL;
  w_96 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_21, not_null(w_96));
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
              ATerm y_96 = NULL;
              ATerm z_96 = NULL;
              z_96 = t;
              if(((y_96 != NULL) && (y_96 != z_96)))
                _fail(z_96);
              else
                y_96 = z_96;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_j_21, not_null(w_96), not_null(y_96));
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
ATerm if_verbose2_1 (ATerm t, ATerm v_84 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm l_21;
    l_21 = t;
    {
      ATerm e_97 = NULL;
      ATerm f_97 = NULL;
      t = term_n_21;
      {
        t = get_config_0(t);
        {
          f_97 = t;
          if(((e_97 != NULL) && (e_97 != f_97)))
            _fail(f_97);
          else
            e_97 = f_97;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_97), term_o_21);
        t = geq_0(t);
      }
    }
    t = l_21;
    t = v_84(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, term_p_21));
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
  ATerm p_97 = NULL;
  p_97 = t;
  t = SSL_TicksToSeconds(not_null(p_97));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_97 = NULL,a_98 = NULL,b_98 = NULL;
  z_97 = t;
  y_97 :
  if(match_cons(z_97, sym__2))
    {
      a_98 = ATgetArgument(z_97, 0);
      b_98 = ATgetArgument(z_97, 1);
      {
        ATerm r_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_98), not_null(b_98));
            LocalPopChoice(t_21);
          }
        else
          {
            t = r_21;
            t = SSL_addr(not_null(a_98), not_null(b_98));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_96 (ATerm), ATerm c_96 (ATerm))
{
  ATerm u_21 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_96(t);
      LocalPopChoice(d_22);
    }
  else
    {
      t = u_21;
      {
        ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL;
        i_98 = t;
        h_98 :
        if(((ATgetType(i_98) == AT_LIST) && ((ATermList) i_98 != ATempty)))
          {
            j_98 = ATgetFirst((ATermList) i_98);
            k_98 = (ATerm) ATgetNext((ATermList) i_98);
            {
              ATerm n_98 = NULL;
              ATerm o_98 = NULL;
              t = not_null(k_98);
              {
                t = foldr_2(t, b_96, c_96);
                {
                  o_98 = t;
                  if(((n_98 != NULL) && (n_98 != o_98)))
                    _fail(o_98);
                  else
                    n_98 = o_98;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_98), not_null(n_98));
                t = c_96(t);
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
ATerm crush_2 (ATerm t, ATerm q_97 (ATerm), ATerm r_97 (ATerm))
{
  ATerm v_98 = NULL;
  ATerm x_98 = NULL;
  v_98 = t;
  {
    ATerm y_98 = NULL;
    ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL;
    t = not_null(v_98);
    {
      y_98 = t;
      {
        t = SSL_explode_term(not_null(y_98));
        {
          a_99 = t;
          u_98 :
          if(match_cons(a_99, sym__2))
            {
              b_99 = ATgetArgument(a_99, 0);
              c_99 = ATgetArgument(a_99, 1);
              if(((x_98 != NULL) && (x_98 != c_99)))
                _fail(c_99);
              else
                x_98 = c_99;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_98);
      t = foldr_2(t, q_97, r_97);
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
  ATerm i_99 = NULL,j_99 = NULL,k_99 = NULL;
  i_99 = t;
  h_99 :
  if(match_cons(i_99, sym__2))
    {
      j_99 = ATgetArgument(i_99, 0);
      k_99 = ATgetArgument(i_99, 1);
      {
        ATerm e_22;
        e_22 = t;
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_99), not_null(k_99));
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              t = SSL_gtr(not_null(j_99), not_null(k_99));
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
  ATerm s_99 = NULL;
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL;
      t_99 = t;
      r_99 :
      if(match_cons(t_99, sym__2))
        {
          u_99 = ATgetArgument(t_99, 0);
          v_99 = ATgetArgument(t_99, 1);
          {
            if(((s_99 != NULL) && (s_99 != u_99)))
              _fail(u_99);
            else
              s_99 = u_99;
            if(((s_99 != NULL) && (s_99 != v_99)))
              _fail(v_99);
            else
              s_99 = v_99;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm u_84 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm v_22;
    v_22 = t;
    {
      ATerm a_100 = NULL;
      ATerm b_100 = NULL;
      t = term_n_21;
      {
        t = get_config_0(t);
        {
          b_100 = t;
          if(((a_100 != NULL) && (a_100 != b_100)))
            _fail(b_100);
          else
            a_100 = b_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_100), term_t_6);
        t = geq_0(t);
      }
    }
    t = v_22;
    t = u_84(t);
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm h_100 = NULL,j_100 = NULL;
    ATerm w_22;
    w_22 = t;
    {
      ATerm i_100 = NULL;
      t = run_time_0(t);
      {
        i_100 = t;
        if(((h_100 != NULL) && (h_100 != i_100)))
          _fail(i_100);
        else
          h_100 = i_100;
      }
    }
    t = w_22;
    {
      ATerm k_100 = NULL;
      t = term_b_23;
      {
        t = get_config_0(t);
        {
          k_100 = t;
          if(((j_100 != NULL) && (j_100 != k_100)))
            _fail(k_100);
          else
            j_100 = k_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_23), not_null(h_100)), term_g_23), not_null(j_100)));
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
  ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL;
  p_100 = t;
  o_100 :
  if(match_cons(p_100, sym__2))
    {
      q_100 = ATgetArgument(p_100, 0);
      r_100 = ATgetArgument(p_100, 1);
      t = SSL_WriteToTextFile(not_null(q_100), not_null(r_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL;
  x_100 = t;
  w_100 :
  if(match_cons(x_100, sym__2))
    {
      y_100 = ATgetArgument(x_100, 0);
      z_100 = ATgetArgument(x_100, 1);
      t = SSL_WriteToBinaryFile(not_null(y_100), not_null(z_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm i_101 = NULL;
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
            ATerm j_101 = NULL,k_101 = NULL;
            j_101 = t;
            e_101 :
            if(match_cons(j_101, sym_Output_1))
              {
                k_101 = ATgetArgument(j_101, 0);
                if(((i_101 != NULL) && (i_101 != k_101)))
                  _fail(k_101);
                else
                  i_101 = k_101;
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
            ATerm l_101 = NULL;
            t = term_l_23;
            {
              l_101 = t;
              if(((i_101 != NULL) && (i_101 != l_101)))
                _fail(l_101);
              else
                i_101 = l_101;
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
        t = not_null(i_101);
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
              ATerm s_101 = NULL;
              s_101 = t;
              h_101 :
              if(!(match_cons(s_101, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm a_102 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL;
  ATerm o_23;
  o_23 = t;
  t = dtime_0(t);
  t = o_23;
  {
    t = v_86(t);
    {
      ATerm p_23;
      p_23 = t;
      {
        ATerm b_102 = NULL;
        t = dtime_0(t);
        {
          b_102 = t;
          if(((a_102 != NULL) && (a_102 != b_102)))
            _fail(b_102);
          else
            a_102 = b_102;
        }
      }
      t = p_23;
      {
        c_102 = t;
        z_101 :
        if(match_cons(c_102, sym__2))
          {
            d_102 = ATgetArgument(c_102, 0);
            e_102 = ATgetArgument(c_102, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_102)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_102))), not_null(e_102));
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
  ATerm k_102 = NULL;
  k_102 = t;
  t = SSL_ReadFromFile(not_null(k_102));
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_102 (ATerm), ATerm a_103 (ATerm))
{
  ATerm p_102 = NULL,r_102 = NULL;
  ATerm v_23;
  v_23 = t;
  {
    ATerm q_102 = NULL;
    t = z_102(t);
    {
      q_102 = t;
      if(((p_102 != NULL) && (p_102 != q_102)))
        _fail(q_102);
      else
        p_102 = q_102;
    }
  }
  t = v_23;
  {
    ATerm s_102 = NULL;
    t = a_103(t);
    {
      s_102 = t;
      if(((r_102 != NULL) && (r_102 != s_102)))
        _fail(s_102);
      else
        r_102 = s_102;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_102), not_null(r_102));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_102 = NULL;
  ATerm w_23;
  w_23 = t;
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm b_103 = NULL,c_103 = NULL;
          b_103 = t;
          w_102 :
          if(match_cons(b_103, sym_Input_1))
            {
              c_103 = ATgetArgument(b_103, 0);
              if(((y_102 != NULL) && (y_102 != c_103)))
                _fail(c_103);
              else
                y_102 = c_103;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_3);
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        {
          ATerm d_103 = NULL;
          t = term_g_24;
          {
            d_103 = t;
            if(((y_102 != NULL) && (y_102 != d_103)))
              _fail(d_103);
            else
              y_102 = d_103;
          }
        }
      }
  }
  t = w_23;
  {
    ATerm x_3 (ATerm t)
    {
      t = not_null(y_102);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_103 = NULL;
  k_103 = t;
  j_103 :
  if(match_cons(k_103, sym_Version_0))
    {
      ATerm m_103 = NULL,o_103 = NULL;
      ATerm h_24;
      h_24 = t;
      {
        ATerm n_103 = NULL;
        t = SSLgetAnnotations(not_null(k_103));
        {
          n_103 = t;
          if(((m_103 != NULL) && (m_103 != n_103)))
            _fail(n_103);
          else
            m_103 = n_103;
        }
      }
      t = h_24;
      {
        ATerm s_103 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_103));
        {
          s_103 = t;
          if(((o_103 != NULL) && (o_103 != s_103)))
            _fail(s_103);
          else
            o_103 = s_103;
        }
        t = not_null(o_103);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    ATerm i_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = i_24;
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
  t = t_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_103 = NULL;
  x_103 = t;
  t = SSL_table_create(not_null(x_103));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_104 = NULL;
  b_104 = t;
  {
    ATerm o_24;
    o_24 = t;
    {
      t = term_p_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_24, term_q_24, not_null(b_104));
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
  ATerm f_104 = NULL;
  f_104 = t;
  t = SSL_string_to_int(not_null(f_104));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL,s_104 = NULL;
  o_104 = t;
  m_104 :
  if(match_string(o_104, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(o_104) == AT_LIST) && ((ATermList) o_104 != ATempty)))
        {
          p_104 = ATgetFirst((ATermList) o_104);
          q_104 = (ATerm) ATgetNext((ATermList) o_104);
          n_104 :
          if(((ATgetType(q_104) == AT_LIST) && ((ATermList) q_104 != ATempty)))
            {
              r_104 = ATgetFirst((ATermList) q_104);
              s_104 = (ATerm) ATgetNext((ATermList) q_104);
              {
                ATerm w_104 = NULL;
                ATerm r_24;
                r_24 = t;
                {
                  t = not_null(p_104);
                  t = l_0(t);
                }
                t = r_24;
                {
                  ATerm x_104 = NULL;
                  t = not_null(r_104);
                  {
                    t = m_0(t);
                    {
                      x_104 = t;
                      if(((w_104 != NULL) && (w_104 != x_104)))
                        _fail(x_104);
                      else
                        w_104 = x_104;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_104)), not_null(w_104));
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
        ATerm o_105 = NULL;
        o_105 = t;
        b_105 :
        if(!(match_string(o_105, "-i")))
          {
            if(!(match_string(o_105, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        ATerm r_105 = NULL;
        ATerm u_24;
        u_24 = t;
        {
          ATerm p_105 = NULL;
          ATerm q_105 = NULL;
          q_105 = t;
          if(((p_105 != NULL) && (p_105 != q_105)))
            _fail(q_105);
          else
            p_105 = q_105;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_v_24, not_null(p_105));
            t = set_config_0(t);
          }
        }
        t = u_24;
        {
          ATerm s_105 = NULL;
          s_105 = t;
          if(((r_105 != NULL) && (r_105 != s_105)))
            _fail(s_105);
          else
            r_105 = s_105;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_105));
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
              ATerm t_105 = NULL;
              t_105 = t;
              e_105 :
              if(!(match_string(t_105, "-o")))
                {
                  if(!(match_string(t_105, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm d_4 (ATerm t)
            {
              ATerm y_105 = NULL;
              ATerm a_25;
              a_25 = t;
              {
                ATerm u_105 = NULL;
                ATerm v_105 = NULL;
                v_105 = t;
                if(((u_105 != NULL) && (u_105 != v_105)))
                  _fail(v_105);
                else
                  u_105 = v_105;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_25, not_null(u_105));
                  t = set_config_0(t);
                }
              }
              t = a_25;
              {
                ATerm z_105 = NULL;
                z_105 = t;
                if(((y_105 != NULL) && (y_105 != z_105)))
                  _fail(z_105);
                else
                  y_105 = z_105;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_105));
              }
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              t = term_h_25;
              return(t);
            }
            t = ArgOption_3(t, c_4, d_4, g_4);
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            {
              ATerm i_25 = t;
              int r_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_4 (ATerm t)
                  {
                    ATerm a_106 = NULL;
                    a_106 = t;
                    h_105 :
                    if(!(match_string(a_106, "-S")))
                      {
                        if(!(match_string(a_106, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm i_4 (ATerm t)
                  {
                    t = term_b_26;
                    t = set_config_0(t);
                    t = term_n_26;
                    return(t);
                  }
                  ATerm j_4 (ATerm t)
                  {
                    t = term_o_26;
                    return(t);
                  }
                  t = Option_3(t, h_4, i_4, j_4);
                  LocalPopChoice(r_25);
                }
              else
                {
                  t = i_25;
                  {
                    ATerm p_26 = t;
                    int q_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_4 (ATerm t)
                        {
                          ATerm b_106 = NULL;
                          b_106 = t;
                          i_105 :
                          if(!(match_string(b_106, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm l_4 (ATerm t)
                        {
                          ATerm e_106 = NULL;
                          ATerm r_26;
                          r_26 = t;
                          {
                            ATerm c_106 = NULL;
                            ATerm d_106 = NULL;
                            t = string_to_int_0(t);
                            {
                              d_106 = t;
                              if(((c_106 != NULL) && (c_106 != d_106)))
                                _fail(d_106);
                              else
                                c_106 = d_106;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_n_21, not_null(c_106));
                              t = set_config_0(t);
                            }
                          }
                          t = r_26;
                          {
                            ATerm f_106 = NULL;
                            f_106 = t;
                            if(((e_106 != NULL) && (e_106 != f_106)))
                              _fail(f_106);
                            else
                              e_106 = f_106;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_106));
                          }
                          return(t);
                        }
                        ATerm m_4 (ATerm t)
                        {
                          t = term_s_26;
                          return(t);
                        }
                        t = ArgOption_3(t, k_4, l_4, m_4);
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
                              ATerm n_4 (ATerm t)
                              {
                                ATerm g_106 = NULL;
                                g_106 = t;
                                l_105 :
                                if(!(match_string(g_106, "-v")))
                                  {
                                    if(!(match_string(g_106, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm o_4 (ATerm t)
                              {
                                t = term_w_26;
                                t = set_config_0(t);
                                t = term_x_26;
                                return(t);
                              }
                              ATerm p_4 (ATerm t)
                              {
                                t = term_y_26;
                                return(t);
                              }
                              t = Option_3(t, n_4, o_4, p_4);
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
                                    ATerm q_4 (ATerm t)
                                    {
                                      ATerm h_106 = NULL;
                                      h_106 = t;
                                      m_105 :
                                      if(!(match_string(h_106, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm r_4 (ATerm t)
                                    {
                                      t = term_c_27;
                                      t = set_config_0(t);
                                      t = term_d_27;
                                      return(t);
                                    }
                                    ATerm s_4 (ATerm t)
                                    {
                                      t = term_e_27;
                                      return(t);
                                    }
                                    t = Option_3(t, q_4, r_4, s_4);
                                    LocalPopChoice(a_27);
                                  }
                                else
                                  {
                                    t = z_26;
                                    {
                                      ATerm t_4 (ATerm t)
                                      {
                                        ATerm i_106 = NULL;
                                        i_106 = t;
                                        n_105 :
                                        if(!(match_string(i_106, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm u_4 (ATerm t)
                                      {
                                        t = term_h_27;
                                        t = set_config_0(t);
                                        t = term_i_27;
                                        return(t);
                                      }
                                      ATerm v_4 (ATerm t)
                                      {
                                        t = term_j_27;
                                        return(t);
                                      }
                                      t = Option_3(t, t_4, u_4, v_4);
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
  ATerm s_106 = NULL;
  s_106 = t;
  t = SSL_table_destroy(not_null(s_106));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_106 = NULL;
  w_106 = t;
  t = SSL_exit(not_null(w_106));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm a_107 = NULL;
  a_107 = t;
  t = SSL_implode_string(not_null(a_107));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_100 (ATerm))
{
  ATerm d_107 (ATerm t)
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_107);
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        {
          t = Nil_0(t);
          t = c_100(t);
        }
      }
    return(t);
  }
  t = d_107(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = n_27;
      {
        ATerm g_107 = NULL,h_107 = NULL,i_107 = NULL;
        g_107 = t;
        f_107 :
        if(((ATgetType(g_107) == AT_LIST) && ((ATermList) g_107 != ATempty)))
          {
            h_107 = ATgetFirst((ATermList) g_107);
            i_107 = (ATerm) ATgetNext((ATermList) g_107);
            {
              t = not_null(h_107);
              {
                ATerm w_4 (ATerm t)
                {
                  t = not_null(i_107);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_4);
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
  ATerm t_107 = NULL;
  t_107 = t;
  t = SSL_explode_string(not_null(t_107));
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
ATerm long_description_1 (ATerm t, ATerm u_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_99 (ATerm))
{
  ATerm w_107 (ATerm t)
  {
    ATerm t_27 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(d_28);
      }
    else
      {
        t = t_27;
        t = Cons_2(t, o_99, w_107);
      }
    return(t);
  }
  t = w_107(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL;
  f_108 = t;
  c_108 :
  if(((ATgetType(f_108) == AT_LIST) && ((ATermList) f_108 != ATempty)))
    {
      d_108 = ATgetFirst((ATermList) f_108);
      e_108 = (ATerm) ATgetNext((ATermList) f_108);
      {
        ATerm l_108 = NULL;
        t = not_null(e_108);
        {
          ATerm l_28;
          l_28 = t;
          {
            ATerm m_108 = NULL,o_108 = NULL,q_108 = NULL;
            ATerm v_28;
            v_28 = t;
            {
              ATerm n_108 = NULL;
              t = k_0(t);
              {
                n_108 = t;
                if(((m_108 != NULL) && (m_108 != n_108)))
                  _fail(n_108);
                else
                  m_108 = n_108;
              }
            }
            t = v_28;
            {
              ATerm p_108 = NULL;
              t = not_null(d_108);
              {
                t = j_0(t);
                {
                  p_108 = t;
                  if(((o_108 != NULL) && (o_108 != p_108)))
                    _fail(p_108);
                  else
                    o_108 = p_108;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_108)), not_null(o_108));
                {
                  q_108 = t;
                  if(((l_108 != NULL) && (l_108 != q_108)))
                    _fail(q_108);
                  else
                    l_108 = q_108;
                }
              }
            }
          }
          t = l_28;
          {
            ATerm x_4 (ATerm t)
            {
              t = not_null(l_108);
              return(t);
            }
            t = reverse_acc_2(t, j_0, x_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) f_108 == ATempty))
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
  ATerm y_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm b_109 = NULL,c_109 = NULL;
  b_109 = t;
  a_109 :
  if(match_cons(b_109, sym_Program_1))
    {
      c_109 = ATgetArgument(b_109, 0);
      {
        ATerm f_109 = NULL,h_109 = NULL;
        ATerm g_109 = NULL;
        t = SSLgetAnnotations(not_null(b_109));
        {
          g_109 = t;
          if(((f_109 != NULL) && (f_109 != g_109)))
            _fail(g_109);
          else
            f_109 = g_109;
        }
        {
          t = not_null(c_109);
          {
            ATerm j_109 = NULL;
            t = c_75(t);
            {
              h_109 = t;
              {
                ATerm k_109 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_109)), not_null(f_109));
                {
                  k_109 = t;
                  if(((j_109 != NULL) && (j_109 != k_109)))
                    _fail(k_109);
                  else
                    j_109 = k_109;
                }
                t = not_null(j_109);
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
  ATerm t_109 = NULL;
  ATerm z_4 (ATerm t)
  {
    ATerm a_5 (ATerm t)
    {
      ATerm u_109 = NULL;
      u_109 = t;
      if(((t_109 != NULL) && (t_109 != u_109)))
        _fail(u_109);
      else
        t_109 = u_109;
      return(t);
    }
    t = Program_1(t, a_5);
    return(t);
  }
  t = option_defined_1(t, z_4);
  {
    ATerm b_5 (ATerm t)
    {
      ATerm v_109 = NULL;
      ATerm w_109 = NULL;
      t = term_h_15;
      {
        ATerm c_5 (ATerm t)
        {
          t = not_null(t_109);
          return(t);
        }
        t = short_description_1(t, c_5);
        {
          t = concat_strings_0(t);
          {
            w_109 = t;
            if(((v_109 != NULL) && (v_109 != w_109)))
              _fail(w_109);
            else
              v_109 = w_109;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(v_109)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, b_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, term_w_28));
      {
        t = printnl_0(t);
        {
          t = term_z_28;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_5 (ATerm t)
                {
                  ATerm x_109 = NULL;
                  x_109 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_109)), term_a_29));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_5);
                {
                  ATerm e_5 (ATerm t)
                  {
                    ATerm z_109 = NULL;
                    ATerm a_110 = NULL;
                    t = term_h_15;
                    {
                      ATerm f_5 (ATerm t)
                      {
                        t = not_null(t_109);
                        return(t);
                      }
                      t = long_description_1(t, f_5);
                      {
                        t = concat_strings_0(t);
                        {
                          a_110 = t;
                          if(((z_109 != NULL) && (z_109 != a_110)))
                            _fail(a_110);
                          else
                            z_109 = a_110;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_109)), term_b_29));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_5);
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
ATerm Undefined_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm k_110 = NULL,l_110 = NULL;
  k_110 = t;
  j_110 :
  if(match_cons(k_110, sym_Undefined_1))
    {
      l_110 = ATgetArgument(k_110, 0);
      {
        ATerm o_110 = NULL,q_110 = NULL;
        ATerm p_110 = NULL;
        t = SSLgetAnnotations(not_null(k_110));
        {
          p_110 = t;
          if(((o_110 != NULL) && (o_110 != p_110)))
            _fail(p_110);
          else
            o_110 = p_110;
        }
        {
          t = not_null(l_110);
          {
            ATerm s_110 = NULL;
            t = d_75(t);
            {
              q_110 = t;
              {
                ATerm t_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_110)), not_null(o_110));
                {
                  t_110 = t;
                  if(((s_110 != NULL) && (s_110 != t_110)))
                    _fail(t_110);
                  else
                    s_110 = t_110;
                }
                t = not_null(s_110);
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
ATerm fetch_1 (ATerm t, ATerm w_99 (ATerm))
{
  ATerm y_110 (ATerm t)
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_99, _id);
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = Cons_2(t, _id, y_110);
      }
    return(t);
  }
  t = y_110(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_84 (ATerm))
{
  t = fetch_1(t, s_84);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_111 = NULL;
  d_111 = t;
  c_111 :
  if(match_cons(d_111, sym_Help_0))
    {
      ATerm f_111 = NULL,h_111 = NULL;
      ATerm e_29;
      e_29 = t;
      {
        ATerm g_111 = NULL;
        t = SSLgetAnnotations(not_null(d_111));
        {
          g_111 = t;
          if(((f_111 != NULL) && (f_111 != g_111)))
            _fail(g_111);
          else
            f_111 = g_111;
        }
      }
      t = e_29;
      {
        ATerm i_111 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_111));
        {
          i_111 = t;
          if(((h_111 != NULL) && (h_111 != i_111)))
            _fail(i_111);
          else
            h_111 = i_111;
        }
        t = not_null(h_111);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_103 (ATerm))
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_103(t);
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
  ATerm o_111 = NULL,p_111 = NULL,q_111 = NULL;
  o_111 = t;
  n_111 :
  if(match_cons(o_111, sym__2))
    {
      p_111 = ATgetArgument(o_111, 0);
      q_111 = ATgetArgument(o_111, 1);
      t = SSL_table_get(not_null(p_111), not_null(q_111));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL,a_112 = NULL;
  x_111 = t;
  w_111 :
  if(match_cons(x_111, sym__3))
    {
      y_111 = ATgetArgument(x_111, 0);
      z_111 = ATgetArgument(x_111, 1);
      a_112 = ATgetArgument(x_111, 2);
      {
        ATerm h_29;
        h_29 = t;
        {
          ATerm e_112 = NULL;
          ATerm f_112 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_111), not_null(z_111));
          {
            ATerm i_29 = t;
            int j_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_29);
              }
            else
              {
                t = i_29;
                t = (ATerm) ATempty;
              }
            {
              f_112 = t;
              if(((e_112 != NULL) && (e_112 != f_112)))
                _fail(f_112);
              else
                e_112 = f_112;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_111), not_null(z_111), (ATerm) ATinsert(CheckATermList(not_null(e_112)), not_null(a_112)));
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
ATerm register_usage_1 (ATerm t, ATerm y_83 (ATerm))
{
  ATerm j_112 = NULL;
  ATerm k_112 = NULL;
  t = term_h_15;
  {
    t = y_83(t);
    {
      k_112 = t;
      if(((j_112 != NULL) && (j_112 != k_112)))
        _fail(k_112);
      else
        j_112 = k_112;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_28, term_y_28, not_null(j_112));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm q_112 = NULL,r_112 = NULL,s_112 = NULL;
  q_112 = t;
  p_112 :
  if(match_string(q_112, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(q_112) == AT_LIST) && ((ATermList) q_112 != ATempty)))
        {
          r_112 = ATgetFirst((ATermList) q_112);
          s_112 = (ATerm) ATgetNext((ATermList) q_112);
          {
            ATerm v_112 = NULL;
            ATerm k_29;
            k_29 = t;
            {
              t = not_null(r_112);
              t = c_0(t);
            }
            t = k_29;
            {
              ATerm w_112 = NULL;
              t = term_h_15;
              {
                t = d_0(t);
                {
                  w_112 = t;
                  if(((v_112 != NULL) && (v_112 != w_112)))
                    _fail(w_112);
                  else
                    v_112 = w_112;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_112)), not_null(v_112));
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
  ATerm g_5 (ATerm t)
  {
    ATerm b_113 = NULL;
    b_113 = t;
    a_113 :
    if(!(match_string(b_113, "--help")))
      {
        if(!(match_string(b_113, "-h")))
          {
            if(!(match_string(b_113, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_l_29;
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_m_29;
    return(t);
  }
  t = Option_3(t, g_5, j_5, k_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL;
  e_113 = t;
  d_113 :
  if(((ATgetType(e_113) == AT_LIST) && ((ATermList) e_113 != ATempty)))
    {
      f_113 = ATgetFirst((ATermList) e_113);
      g_113 = (ATerm) ATgetNext((ATermList) e_113);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_113)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_113)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL;
  m_113 = t;
  l_113 :
  if(match_cons(m_113, sym__2))
    {
      n_113 = ATgetArgument(m_113, 0);
      o_113 = ATgetArgument(m_113, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_21, not_null(n_113), not_null(o_113));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_83 (ATerm))
{
  ATerm n_29;
  n_29 = t;
  {
    ATerm l_5 (ATerm t)
    {
      t = term_o_29;
      t = w_83(t);
      return(t);
    }
    t = try_1(t, l_5);
  }
  t = n_29;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm w_113 = NULL;
      ATerm p_29;
      p_29 = t;
      {
        ATerm u_113 = NULL;
        ATerm v_113 = NULL;
        v_113 = t;
        if(((u_113 != NULL) && (u_113 != v_113)))
          _fail(v_113);
        else
          u_113 = v_113;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_23, not_null(u_113));
          t = set_config_0(t);
        }
      }
      t = p_29;
      {
        ATerm x_113 = NULL;
        x_113 = t;
        if(((w_113 != NULL) && (w_113 != x_113)))
          _fail(x_113);
        else
          w_113 = x_113;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_113));
      }
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      ATerm q_29 = t;
      int s_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_29 = t;
          int u_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_29);
            }
          else
            {
              t = t_29;
              {
                t = w_83(t);
                t = Cons_2(t, _id, n_5);
              }
            }
          LocalPopChoice(s_29);
        }
      else
        {
          t = q_29;
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
  ATerm d_114 = NULL,e_114 = NULL,f_114 = NULL;
  ATerm v_29;
  v_29 = t;
  {
    ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL;
    g_114 = t;
    c_114 :
    if(match_cons(g_114, sym__3))
      {
        h_114 = ATgetArgument(g_114, 0);
        i_114 = ATgetArgument(g_114, 1);
        j_114 = ATgetArgument(g_114, 2);
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
            {
              if(((f_114 != NULL) && (f_114 != j_114)))
                _fail(j_114);
              else
                f_114 = j_114;
              t = SSL_table_put(not_null(d_114), not_null(e_114), not_null(f_114));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_83 (ATerm))
{
  ATerm m_114 = NULL;
  ATerm w_29;
  w_29 = t;
  {
    t = term_x_29;
    t = table_put_0(t);
  }
  t = w_29;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_83(t);
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_5);
    {
      ATerm p_5 (ATerm t)
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
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
            LocalPopChoice(b_30);
          }
        else
          {
            t = a_30;
            {
              ATerm q_5 (ATerm t)
              {
                ATerm r_5 (ATerm t)
                {
                  ATerm n_114 = NULL;
                  n_114 = t;
                  if(((m_114 != NULL) && (m_114 != n_114)))
                    _fail(n_114);
                  else
                    m_114 = n_114;
                  return(t);
                }
                t = Undefined_1(t, r_5);
                return(t);
              }
              t = option_defined_1(t, q_5);
              {
                ATerm c_30;
                c_30 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_114)), term_d_30));
                  t = printnl_0(t);
                }
                t = c_30;
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
        ATerm e_30;
        e_30 = t;
        {
          t = term_x_28;
          t = table_destroy_0(t);
        }
        t = e_30;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm k_86 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_86(t);
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, s_5);
  {
    t = store_options_0(t);
    {
      t = k_86(t);
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_86);
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            {
              ATerm j_30 = t;
              int k_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, h_86);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(k_30);
                }
              else
                {
                  t = j_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_86 (ATerm), ATerm c_86 (ATerm), ATerm d_86 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      ATerm l_30;
      l_30 = t;
      {
        ATerm q_114 = NULL;
        ATerm r_114 = NULL;
        t = term_b_23;
        {
          t = get_config_0(t);
          {
            r_114 = t;
            if(((q_114 != NULL) && (q_114 != r_114)))
              _fail(r_114);
            else
              q_114 = r_114;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATempty, not_null(q_114)));
          t = printnl_0(t);
        }
      }
      t = l_30;
      return(t);
    }
    t = if_verbose2_1(t, u_5);
    return(t);
  }
  t = iowrap_4(t, b_86, c_86, d_86, t_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_85 (ATerm), ATerm a_86 (ATerm))
{
  t = iowrap_3(t, z_85, a_86, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    t = _2(t, _id, w_85);
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
        ATerm z_5 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, z_5, Nil_0);
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
