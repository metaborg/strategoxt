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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Prim_2;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
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
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Overlay_3;
Symbol sym_Mod_2;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_SRDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
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
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_CUT_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
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
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
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
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
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
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  init_constant_terms();
}
ATerm term_g_30;
ATerm term_w_29;
ATerm term_o_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
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
ATerm term_r_26;
ATerm term_n_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_m_24;
ATerm term_c_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_c_21;
ATerm term_a_21;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_d_20;
ATerm term_w_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_i_15;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_e_10;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_d_8;
ATerm term_u_6;
ATerm term_q_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
void init_constant_terms (void)
{
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Op_2, term_k_11, (ATerm) ATempty);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_k_20);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_20);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_i_15);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_b_27, term_i_15);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_i_15);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_s_28, term_t_28);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_h_29, term_i_15);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__3, term_s_28, term_t_28, (ATerm) ATempty);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm u_70 (ATerm), ATerm v_70 (ATerm));
ATerm SDef_3 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm), ATerm a_71 (ATerm));
ATerm Let_2 (ATerm, ATerm w_70 (ATerm), ATerm x_70 (ATerm));
ATerm sboundin_3 (ATerm, ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm d_83 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm d_97 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_92 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm u_83 (ATerm), ATerm v_83 (ATerm));
ATerm alltd_1 (ATerm, ATerm a_86 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm f_83 (ATerm), ATerm g_83 (ATerm));
ATerm substitute_1 (ATerm, ATerm h_83 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm b_71 (ATerm), ATerm c_71 (ATerm));
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
ATerm As_2 (ATerm, ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm Prim_2 (ATerm, ATerm k_69 (ATerm), ATerm l_69 (ATerm));
ATerm Explode_2 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm));
ATerm Op_2 (ATerm, ATerm o_71 (ATerm), ATerm p_71 (ATerm));
ATerm pat_td_1 (ATerm, ATerm q_79 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm z_88 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm i_94 (ATerm), ATerm j_94 (ATerm));
ATerm repeat_1 (ATerm, ATerm l_94 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm u_72 (ATerm), ATerm v_72 (ATerm));
ATerm Con_3 (ATerm, ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t_72 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm s_69 (ATerm), ATerm t_69 (ATerm));
ATerm oncetd_1 (ATerm, ATerm m_85 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm w_83 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm f_88 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm k_98 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm x_88 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm g_97 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm s_88 (ATerm));
ATerm zip_1 (ATerm, ATerm u_88 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm z_94 (ATerm), ATerm a_95 (ATerm));
ATerm for_3 (ATerm, ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm e_95 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm k_109 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm m_109 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm o_97 (ATerm), ATerm p_97 (ATerm));
ATerm union_1 (ATerm, ATerm k_97 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm t_71 (ATerm));
ATerm Cons_2 (ATerm, ATerm i_69 (ATerm), ATerm j_69 (ATerm));
ATerm Specification_1 (ATerm, ATerm v_71 (ATerm));
ATerm _2 (ATerm, ATerm z_67 (ATerm), ATerm a_68 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_80 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_101 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_104 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_102 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_87 (ATerm), ATerm q_87 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm v_97 (ATerm), ATerm w_97 (ATerm));
ATerm crush_2 (ATerm, ATerm z_96 (ATerm), ATerm a_97 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_104 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_102 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_106 (ATerm));
ATerm map_1 (ATerm, ATerm f_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_106 (ATerm));
ATerm Program_1 (ATerm, ATerm w_74 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm p_101 (ATerm));
ATerm Undefined_1 (ATerm, ATerm x_74 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_80 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_105 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_87 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_106 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_106 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_106 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm));
ATerm iowrap_4 (ATerm, ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm q_103 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_103 (ATerm), ATerm g_103 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_103 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  h_3 :
  if(((ATgetType(i_3) == AT_LIST) && ATisEmpty(i_3)))
    {
      {
        ATerm k_4 = NULL,m_4 = NULL;
        ATerm b_6;
        b_6 = t;
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
        t = b_6;
        {
          ATerm p_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_4));
          {
            p_5 = t;
            if(((m_4 != NULL) && (m_4 != p_5)))
              _fail(p_5);
            else
              m_4 = p_5;
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
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
  n_6 = t;
  m_6 :
  if(match_cons(n_6, sym__2))
    {
      o_6 = ATgetArgument(n_6, 0);
      p_6 = ATgetArgument(n_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_6), not_null(p_6)), term_d_6), not_null(o_6)), term_c_6);
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
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  x_6 = t;
  v_6 :
  if(match_cons(x_6, sym__2))
    {
      y_6 = ATgetArgument(x_6, 0);
      b_7 = ATgetArgument(x_6, 1);
      w_6 :
      if(match_cons(y_6, sym_Mod_2))
        {
          z_6 = ATgetArgument(y_6, 0);
          a_7 = ATgetArgument(y_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_6), not_null(b_7)), term_d_6), not_null(a_7)), term_f_6), not_null(z_6)), term_c_6);
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
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
  j_7 = t;
  h_7 :
  if(match_cons(j_7, sym__2))
    {
      k_7 = ATgetArgument(j_7, 0);
      l_7 = ATgetArgument(j_7, 1);
      i_7 :
      if(((ATgetType(l_7) == AT_LIST) && !(ATisEmpty(l_7))))
        {
          m_7 = ATgetFirst((ATermList) l_7);
          n_7 = (ATerm) ATgetNext((ATermList) l_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(n_7)), not_null(m_7));
            {
              ATerm c_0 (ATerm t)
              {
                ATerm g_6 = t;
                int h_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(h_6);
                  }
                else
                  {
                    t = g_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, c_0);
            }
            t = not_null(k_7);
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
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  t_7 :
  if(match_cons(v_7, sym__2))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      u_7 :
      if(((ATgetType(x_7) == AT_LIST) && ATisEmpty(x_7)))
        {
          t = not_null(w_7);
        }
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
  ATerm i_6;
  i_6 = t;
  {
    t = error_0(t);
    {
      t = term_j_6;
      t = exit_0(t);
    }
  }
  t = i_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_k_6);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm l_6;
  l_6 = t;
  {
    ATerm b_8 = NULL;
    ATerm c_8 = NULL;
    c_8 = t;
    if(((b_8 != NULL) && (b_8 != c_8)))
      _fail(c_8);
    else
      b_8 = c_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_6, not_null(b_8));
      t = printnl_0(t);
    }
  }
  t = l_6;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  n_8 :
  if(match_cons(p_8, sym__2))
    {
      q_8 = ATgetArgument(p_8, 0);
      r_8 = ATgetArgument(p_8, 1);
      o_8 :
      if(match_int(r_8, 0))
        {
          ATerm r_6 = t;
          int s_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
              t = not_null(q_8);
              {
                t = Arities_0(t);
                {
                  t_8 = t;
                  i_8 :
                  if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
                    {
                      u_8 = ATgetFirst((ATermList) t_8);
                      v_8 = (ATerm) ATgetNext((ATermList) t_8);
                      j_8 :
                      if(((ATgetType(v_8) == AT_LIST) && !(ATisEmpty(v_8))))
                        {
                          w_8 = ATgetFirst((ATermList) v_8);
                          x_8 = (ATerm) ATgetNext((ATermList) v_8);
                          {
                            ATerm t_6 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm e_0 (ATerm t)
                                {
                                  ATerm y_8 = NULL;
                                  y_8 = t;
                                  h_8 :
                                  if(!(match_int(y_8, 0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, e_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = t_6;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_8)), term_u_6);
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
              LocalPopChoice(s_6);
            }
          else
            {
              t = r_6;
              {
                ATerm a_9 = NULL;
                ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
                t = not_null(q_8);
                {
                  t = Arities_0(t);
                  {
                    b_9 = t;
                    l_8 :
                    if(((ATgetType(b_9) == AT_LIST) && !(ATisEmpty(b_9))))
                      {
                        c_9 = ATgetFirst((ATermList) b_9);
                        d_9 = (ATerm) ATgetNext((ATermList) b_9);
                        m_8 :
                        if(((ATgetType(d_9) == AT_LIST) && ATisEmpty(d_9)))
                          {
                            {
                              if(((a_9 != NULL) && (a_9 != c_9)))
                                _fail(c_9);
                              else
                                a_9 = c_9;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(a_9));
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(a_9));
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
ATerm Rec_2 (ATerm t, ATerm u_70 (ATerm), ATerm v_70 (ATerm))
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_Rec_2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      {
        ATerm u_9 = NULL,w_9 = NULL;
        ATerm v_9 = NULL;
        t = SSLgetAnnotations(not_null(o_9));
        {
          v_9 = t;
          if(((u_9 != NULL) && (u_9 != v_9)))
            _fail(v_9);
          else
            u_9 = v_9;
        }
        {
          t = not_null(p_9);
          {
            ATerm y_9 = NULL;
            t = u_70(t);
            {
              w_9 = t;
              {
                t = not_null(q_9);
                {
                  ATerm a_10 = NULL;
                  t = v_70(t);
                  {
                    y_9 = t;
                    {
                      ATerm b_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(w_9), not_null(y_9)), not_null(u_9));
                      {
                        b_10 = t;
                        if(((a_10 != NULL) && (a_10 != b_10)))
                          _fail(b_10);
                        else
                          a_10 = b_10;
                      }
                      t = not_null(a_10);
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
ATerm SDef_3 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm), ATerm a_71 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_SDef_3))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      r_10 = ATgetArgument(o_10, 2);
      {
        ATerm w_10 = NULL,y_10 = NULL;
        ATerm x_10 = NULL;
        t = SSLgetAnnotations(not_null(o_10));
        {
          x_10 = t;
          if(((w_10 != NULL) && (w_10 != x_10)))
            _fail(x_10);
          else
            w_10 = x_10;
        }
        {
          t = not_null(p_10);
          {
            ATerm a_11 = NULL;
            t = y_70(t);
            {
              y_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm c_11 = NULL;
                  t = z_70(t);
                  {
                    a_11 = t;
                    {
                      t = not_null(r_10);
                      {
                        ATerm e_11 = NULL;
                        t = a_71(t);
                        {
                          c_11 = t;
                          {
                            ATerm f_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(y_10), not_null(a_11), not_null(c_11)), not_null(w_10));
                            {
                              f_11 = t;
                              if(((e_11 != NULL) && (e_11 != f_11)))
                                _fail(f_11);
                              else
                                e_11 = f_11;
                            }
                            t = not_null(e_11);
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
ATerm Let_2 (ATerm t, ATerm w_70 (ATerm), ATerm x_70 (ATerm))
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_Let_2))
    {
      t_11 = ATgetArgument(s_11, 0);
      u_11 = ATgetArgument(s_11, 1);
      {
        ATerm y_11 = NULL,a_12 = NULL;
        ATerm z_11 = NULL;
        t = SSLgetAnnotations(not_null(s_11));
        {
          z_11 = t;
          if(((y_11 != NULL) && (y_11 != z_11)))
            _fail(z_11);
          else
            y_11 = z_11;
        }
        {
          t = not_null(t_11);
          {
            ATerm c_12 = NULL;
            t = w_70(t);
            {
              a_12 = t;
              {
                t = not_null(u_11);
                {
                  ATerm e_12 = NULL;
                  t = x_70(t);
                  {
                    c_12 = t;
                    {
                      ATerm f_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(a_12), not_null(c_12)), not_null(y_11));
                      {
                        f_12 = t;
                        if(((e_12 != NULL) && (e_12 != f_12)))
                          _fail(f_12);
                        else
                          e_12 = f_12;
                      }
                      t = not_null(e_12);
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
ATerm sboundin_3 (ATerm t, ATerm b_83 (ATerm), ATerm c_83 (ATerm), ATerm d_83 (ATerm))
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, b_83, b_83);
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm e_7 = t;
        int f_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, d_83, d_83, b_83);
            LocalPopChoice(f_7);
          }
        else
          {
            t = e_7;
            t = Rec_2(t, d_83, b_83);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_Rec_2))
    {
      o_12 = ATgetArgument(n_12, 0);
      p_12 = ATgetArgument(n_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(o_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  x_12 = t;
  w_12 :
  if(match_cons(x_12, sym_SDef_3))
    {
      y_12 = ATgetArgument(x_12, 0);
      z_12 = ATgetArgument(x_12, 1);
      a_13 = ATgetArgument(x_12, 2);
      {
        t = not_null(z_12);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
            e_13 = t;
            v_12 :
            if(match_cons(e_13, sym_VarDec_2))
              {
                f_13 = ATgetArgument(e_13, 0);
                g_13 = ATgetArgument(e_13, 1);
                t = not_null(f_13);
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
ATerm Bind1_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym_Let_2))
    {
      p_13 = ATgetArgument(o_13, 0);
      q_13 = ATgetArgument(o_13, 1);
      {
        t = not_null(p_13);
        {
          ATerm j_0 (ATerm t)
          {
            ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
            t_13 = t;
            m_13 :
            if(match_cons(t_13, sym_SDef_3))
              {
                u_13 = ATgetArgument(t_13, 0);
                v_13 = ATgetArgument(t_13, 1);
                w_13 = ATgetArgument(t_13, 2);
                t = not_null(u_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm d_97 (ATerm))
{
  ATerm g_14 = NULL;
  ATerm i_14 = NULL;
  g_14 = t;
  {
    ATerm j_14 = NULL;
    ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
    t = not_null(g_14);
    {
      j_14 = t;
      {
        t = SSL_explode_term(not_null(j_14));
        {
          l_14 = t;
          f_14 :
          if(match_cons(l_14, sym__2))
            {
              m_14 = ATgetArgument(l_14, 0);
              n_14 = ATgetArgument(l_14, 1);
              if(((i_14 != NULL) && (i_14 != n_14)))
                _fail(n_14);
              else
                i_14 = n_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_14);
      t = foldr_3(t, b_97, c_97, d_97);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_92 (ATerm))
{
  ATerm u_14 (ATerm t)
  {
    ATerm m_0 (ATerm t)
    {
      ATerm g_7 = t;
      int o_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_92(t);
          LocalPopChoice(o_7);
        }
      else
        {
          t = g_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm p_0 (ATerm t)
    {
      ATerm p_7 = t;
      int q_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_14 = NULL;
          ATerm r_7;
          r_7 = t;
          {
            ATerm t_14 = NULL;
            t = m_92(t);
            {
              t_14 = t;
              if(((s_14 != NULL) && (s_14 != t_14)))
                _fail(t_14);
              else
                s_14 = t_14;
            }
          }
          t = r_7;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(s_14);
                return(t);
              }
              t = split_2(t, u_14, t_0);
              t = diff_1(t, o_92);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = n_92(t, r_0, u_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm v_0 (ATerm t)
              {
                t = union_1(t, eq_0);
                return(t);
              }
              t = crush_3(t, u_0, v_0, _id);
            }
          }
          LocalPopChoice(q_7);
        }
      else
        {
          t = p_7;
          {
            ATerm w_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm x_0 (ATerm t)
            {
              t = union_1(t, eq_0);
              return(t);
            }
            t = crush_3(t, w_0, x_0, u_14);
          }
        }
      return(t);
    }
    t = split_2(t, m_0, p_0);
    t = union_1(t, eq_0);
    return(t);
  }
  t = u_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
    d_15 = t;
    y_14 :
    if(match_cons(d_15, sym_Call_2))
      {
        e_15 = ATgetArgument(d_15, 0);
        g_15 = ATgetArgument(d_15, 1);
        z_14 :
        if(match_cons(e_15, sym_SVar_1))
          {
            f_15 = ATgetArgument(e_15, 0);
            {
              ATerm j_15 = NULL;
              ATerm k_15 = NULL;
              t = not_null(g_15);
              {
                t = length_0(t);
                {
                  k_15 = t;
                  if(((j_15 != NULL) && (j_15 != k_15)))
                    _fail(k_15);
                  else
                    j_15 = k_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(f_15), not_null(j_15)));
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
    ATerm s_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(y_7);
      }
    else
      {
        t = s_7;
        {
          ATerm z_7 = t;
          int a_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(a_8);
            }
          else
            {
              t = z_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
    l_15 = t;
    b_15 :
    if(match_cons(l_15, sym__2))
      {
        m_15 = ATgetArgument(l_15, 0);
        p_15 = ATgetArgument(l_15, 1);
        c_15 :
        if(match_cons(m_15, sym__2))
          {
            n_15 = ATgetArgument(m_15, 0);
            o_15 = ATgetArgument(m_15, 1);
            if(((n_15 != NULL) && (n_15 != p_15)))
              _fail(p_15);
            else
              n_15 = p_15;
          }
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
  ATerm b_16 = NULL;
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  b_16 = t;
  {
    ATerm g_16 = NULL;
    ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
    t = not_null(b_16);
    {
      g_16 = t;
      {
        t = SSL_explode_term(not_null(g_16));
        {
          i_16 = t;
          x_15 :
          if(match_cons(i_16, sym__2))
            {
              j_16 = ATgetArgument(i_16, 0);
              k_16 = ATgetArgument(i_16, 1);
              y_15 :
              if(match_string(j_16, ""))
                {
                  z_15 :
                  if(((ATgetType(k_16) == AT_LIST) && !(ATisEmpty(k_16))))
                    {
                      l_16 = ATgetFirst((ATermList) k_16);
                      m_16 = (ATerm) ATgetNext((ATermList) k_16);
                      a_16 :
                      if(((ATgetType(m_16) == AT_LIST) && !(ATisEmpty(m_16))))
                        {
                          n_16 = ATgetFirst((ATermList) m_16);
                          o_16 = (ATerm) ATgetNext((ATermList) m_16);
                          {
                            if(((d_16 != NULL) && (d_16 != l_16)))
                              _fail(l_16);
                            else
                              d_16 = l_16;
                            {
                              if(((f_16 != NULL) && (f_16 != n_16)))
                                _fail(n_16);
                              else
                                f_16 = n_16;
                              if(((e_16 != NULL) && (e_16 != o_16)))
                                _fail(o_16);
                              else
                                e_16 = o_16;
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
    t = not_null(f_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_d_8;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm u_16 = NULL,w_16 = NULL;
    ATerm e_8;
    e_8 = t;
    {
      ATerm v_16 = NULL;
      t = Fst_0(t);
      {
        v_16 = t;
        if(((u_16 != NULL) && (u_16 != v_16)))
          _fail(v_16);
        else
          u_16 = v_16;
      }
    }
    t = e_8;
    {
      ATerm x_16 = NULL;
      t = Snd_0(t);
      {
        x_16 = t;
        if(((w_16 != NULL) && (w_16 != x_16)))
          _fail(x_16);
        else
          w_16 = x_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_16), not_null(w_16));
    }
    return(t);
  }
  t = foldr_2(t, b_1, c_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  e_17 = t;
  b_17 :
  if(match_cons(e_17, sym_Call_2))
    {
      f_17 = ATgetArgument(e_17, 0);
      h_17 = ATgetArgument(e_17, 1);
      c_17 :
      if(match_cons(f_17, sym_SVar_1))
        {
          g_17 = ATgetArgument(f_17, 0);
          d_17 :
          if(((ATgetType(h_17) == AT_LIST) && ATisEmpty(h_17)))
            {
              t = not_null(g_17);
            }
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
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  n_17 = t;
  l_17 :
  if(match_cons(n_17, sym__2))
    {
      o_17 = ATgetArgument(n_17, 0);
      p_17 = ATgetArgument(n_17, 1);
      m_17 :
      if(((ATgetType(p_17) == AT_LIST) && !(ATisEmpty(p_17))))
        {
          q_17 = ATgetFirst((ATermList) p_17);
          r_17 = (ATerm) ATgetNext((ATermList) p_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), not_null(r_17));
        }
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
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  z_17 = t;
  w_17 :
  if(match_cons(z_17, sym__2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      x_17 :
      if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
        {
          c_18 = ATgetFirst((ATermList) b_18);
          f_18 = (ATerm) ATgetNext((ATermList) b_18);
          y_17 :
          if(match_cons(c_18, sym__2))
            {
              d_18 = ATgetArgument(c_18, 0);
              e_18 = ATgetArgument(c_18, 1);
              {
                ATerm h_18 = NULL;
                if(((a_18 != NULL) && (a_18 != d_18)))
                  _fail(d_18);
                else
                  a_18 = d_18;
                {
                  if(((h_18 != NULL) && (h_18 != e_18)))
                    _fail(e_18);
                  else
                    h_18 = e_18;
                  t = not_null(h_18);
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
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm u_83 (ATerm), ATerm v_83 (ATerm))
{
  ATerm n_18 = NULL;
  ATerm p_18 = NULL,q_18 = NULL;
  n_18 = t;
  {
    ATerm r_18 = NULL;
    t = not_null(n_18);
    {
      ATerm s_18 = NULL;
      t = u_83(t);
      {
        r_18 = t;
        {
          if(((p_18 != NULL) && (p_18 != r_18)))
            _fail(r_18);
          else
            p_18 = r_18;
          {
            t = v_83(t);
            {
              s_18 = t;
              if(((q_18 != NULL) && (q_18 != s_18)))
                _fail(s_18);
              else
                q_18 = s_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(q_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm a_86 (ATerm))
{
  ATerm w_18 (ATerm t)
  {
    ATerm k_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_86(t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = k_8;
        t = _all(t, w_18);
      }
    return(t);
  }
  t = w_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym__2))
    {
      c_19 = ATgetArgument(b_19, 0);
      d_19 = ATgetArgument(b_19, 1);
      {
        ATerm g_19 = NULL;
        if(((g_19 != NULL) && (g_19 != d_19)))
          _fail(d_19);
        else
          g_19 = d_19;
      }
    }
  else
    {
      if(match_cons(b_19, sym__3))
        {
          c_19 = ATgetArgument(b_19, 0);
          d_19 = ATgetArgument(b_19, 1);
          e_19 = ATgetArgument(b_19, 2);
          {
            ATerm m_19 = NULL;
            ATerm n_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), not_null(d_19));
            {
              t = zip_1(t, _id);
              {
                n_19 = t;
                if(((m_19 != NULL) && (m_19 != n_19)))
                  _fail(n_19);
                else
                  m_19 = n_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(e_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm f_83 (ATerm), ATerm g_83 (ATerm))
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t = subs_args_0(t);
  {
    t_19 = t;
    s_19 :
    if(match_cons(t_19, sym__2))
      {
        u_19 = ATgetArgument(t_19, 0);
        v_19 = ATgetArgument(t_19, 1);
        {
          t = not_null(v_19);
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = not_null(u_19);
                return(t);
              }
              t = SubsVar_2(t, f_83, e_1);
              t = g_83(t);
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
ATerm substitute_1 (ATerm t, ATerm h_83 (ATerm))
{
  t = substitute_2(t, h_83, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_2(t, IsSVar_0, _id);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm b_71 (ATerm), ATerm c_71 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_VarDec_2))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      {
        ATerm l_20 = NULL,n_20 = NULL;
        ATerm m_20 = NULL;
        t = SSLgetAnnotations(not_null(f_20));
        {
          m_20 = t;
          if(((l_20 != NULL) && (l_20 != m_20)))
            _fail(m_20);
          else
            l_20 = m_20;
        }
        {
          t = not_null(g_20);
          {
            ATerm p_20 = NULL;
            t = b_71(t);
            {
              n_20 = t;
              {
                t = not_null(h_20);
                {
                  ATerm r_20 = NULL;
                  t = c_71(t);
                  {
                    p_20 = t;
                    {
                      ATerm s_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(n_20), not_null(p_20)), not_null(l_20));
                      {
                        s_20 = t;
                        if(((r_20 != NULL) && (r_20 != s_20)))
                          _fail(s_20);
                        else
                          r_20 = s_20;
                      }
                      t = not_null(r_20);
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
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  m_21 = t;
  k_21 :
  if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
    {
      n_21 = ATgetFirst((ATermList) m_21);
      r_21 = (ATerm) ATgetNext((ATermList) m_21);
      l_21 :
      if(match_cons(n_21, sym_SDef_3))
        {
          o_21 = ATgetArgument(n_21, 0);
          p_21 = ATgetArgument(n_21, 1);
          q_21 = ATgetArgument(n_21, 2);
          {
            ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,t_22 = NULL;
            ATerm z_8;
            z_8 = t;
            {
              ATerm z_21 = NULL;
              t = not_null(p_21);
              {
                ATerm f_22 = NULL;
                ATerm f_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, f_1);
                {
                  z_21 = t;
                  {
                    if(((w_21 != NULL) && (w_21 != z_21)))
                      _fail(z_21);
                    else
                      w_21 = z_21;
                    {
                      t = not_null(w_21);
                      {
                        ATerm s_22 = NULL;
                        ATerm g_1 (ATerm t)
                        {
                          ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
                          a_22 = t;
                          b_21 :
                          if(match_cons(a_22, sym_VarDec_2))
                            {
                              b_22 = ATgetArgument(a_22, 0);
                              c_22 = ATgetArgument(a_22, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_22)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, g_1);
                        {
                          f_22 = t;
                          {
                            if(((x_21 != NULL) && (x_21 != f_22)))
                              _fail(f_22);
                            else
                              x_21 = f_22;
                            {
                              t = not_null(m_21);
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
                                  g_22 = t;
                                  h_21 :
                                  if(match_cons(g_22, sym_SDef_3))
                                    {
                                      h_22 = ATgetArgument(g_22, 0);
                                      i_22 = ATgetArgument(g_22, 1);
                                      j_22 = ATgetArgument(g_22, 2);
                                      {
                                        ATerm m_22 = NULL;
                                        ATerm r_22 = NULL;
                                        t = not_null(i_22);
                                        {
                                          ATerm i_1 (ATerm t)
                                          {
                                            ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
                                            n_22 = t;
                                            f_21 :
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
                                          t = map_1(t, i_1);
                                          {
                                            r_22 = t;
                                            if(((m_22 != NULL) && (m_22 != r_22)))
                                              _fail(r_22);
                                            else
                                              m_22 = r_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(m_22), not_null(x_21), not_null(j_22));
                                          t = substitute_2(t, IsSVar_0, _id);
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
                                  s_22 = t;
                                  if(((y_21 != NULL) && (y_21 != s_22)))
                                    _fail(s_22);
                                  else
                                    y_21 = s_22;
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
            t = z_8;
            {
              ATerm u_22 = NULL;
              t = not_null(y_21);
              {
                t = choices_0(t);
                {
                  u_22 = t;
                  if(((t_22 != NULL) && (t_22 != u_22)))
                    _fail(u_22);
                  else
                    t_22 = u_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_21), not_null(w_21), not_null(t_22));
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
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  h_23 = t;
  f_23 :
  if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
    {
      i_23 = ATgetFirst((ATermList) h_23);
      j_23 = (ATerm) ATgetNext((ATermList) h_23);
      g_23 :
      if(((ATgetType(j_23) == AT_LIST) && ATisEmpty(j_23)))
        {
          t = not_null(i_23);
        }
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
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  q_23 = t;
  o_23 :
  if(match_cons(q_23, sym__2))
    {
      r_23 = ATgetArgument(q_23, 0);
      u_23 = ATgetArgument(q_23, 1);
      p_23 :
      if(match_cons(r_23, sym__2))
        {
          s_23 = ATgetArgument(r_23, 0);
          t_23 = ATgetArgument(r_23, 1);
          {
            ATerm y_23 = NULL;
            ATerm z_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), not_null(t_23));
            {
              t = Definitions_0(t);
              {
                z_23 = t;
                if(((y_23 != NULL) && (y_23 != z_23)))
                  _fail(z_23);
                else
                  y_23 = z_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_23), not_null(u_23));
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
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  u_24 = t;
  s_24 :
  if(match_cons(u_24, sym_ExplodeCong_2))
    {
      v_24 = ATgetArgument(u_24, 0);
      t_24 = ATgetArgument(u_24, 1);
      {
        ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
        ATerm c_25 = NULL;
        ATerm d_25 = NULL;
        t = new_0(t);
        {
          c_25 = t;
          {
            if(((y_24 != NULL) && (y_24 != c_25)))
              _fail(c_25);
            else
              y_24 = c_25;
            {
              ATerm e_25 = NULL;
              t = new_0(t);
              {
                d_25 = t;
                {
                  if(((z_24 != NULL) && (z_24 != d_25)))
                    _fail(d_25);
                  else
                    z_24 = d_25;
                  {
                    ATerm f_25 = NULL;
                    t = new_0(t);
                    {
                      e_25 = t;
                      {
                        if(((a_25 != NULL) && (a_25 != e_25)))
                          _fail(e_25);
                        else
                          a_25 = e_25;
                        {
                          t = new_0(t);
                          {
                            f_25 = t;
                            if(((b_25 != NULL) && (b_25 != f_25)))
                              _fail(f_25);
                            else
                              b_25 = f_25;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_25)), not_null(a_25)), not_null(z_24)), not_null(y_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(v_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24)))))));
      }
    }
  else
    {
      if(match_cons(u_24, sym_Build_1))
        {
          v_24 = ATgetArgument(u_24, 0);
          {
            ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
            ATerm l_25 = NULL;
            ATerm p_25 = NULL;
            t = new_0(t);
            {
              l_25 = t;
              {
                if(((j_25 != NULL) && (j_25 != l_25)))
                  _fail(l_25);
                else
                  j_25 = l_25;
                {
                  t = not_null(v_24);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
                      m_25 = t;
                      l_24 :
                      if(match_cons(m_25, sym_Explode_2))
                        {
                          n_25 = ATgetArgument(m_25, 0);
                          o_25 = ATgetArgument(m_25, 1);
                          {
                            if(((h_25 != NULL) && (h_25 != n_25)))
                              _fail(n_25);
                            else
                              h_25 = n_25;
                            {
                              if(((i_25 != NULL) && (i_25 != o_25)))
                                _fail(o_25);
                              else
                                i_25 = o_25;
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
                    t = oncetd_1(t, j_1);
                    {
                      p_25 = t;
                      if(((k_25 != NULL) && (k_25 != p_25)))
                        _fail(p_25);
                      else
                        k_25 = p_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_g_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_25)), not_null(h_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_25)))));
          }
        }
      else
        {
          if(match_cons(u_24, sym_Match_1))
            {
              v_24 = ATgetArgument(u_24, 0);
              {
                ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
                ATerm w_25 = NULL;
                ATerm x_25 = NULL;
                t = new_0(t);
                {
                  w_25 = t;
                  {
                    if(((t_25 != NULL) && (t_25 != w_25)))
                      _fail(w_25);
                    else
                      t_25 = w_25;
                    {
                      ATerm b_26 = NULL;
                      t = new_0(t);
                      {
                        x_25 = t;
                        {
                          if(((u_25 != NULL) && (u_25 != x_25)))
                            _fail(x_25);
                          else
                            u_25 = x_25;
                          {
                            t = not_null(v_24);
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
                                y_25 = t;
                                q_24 :
                                if(match_cons(y_25, sym_Explode_2))
                                  {
                                    z_25 = ATgetArgument(y_25, 0);
                                    a_26 = ATgetArgument(y_25, 1);
                                    {
                                      if(((r_25 != NULL) && (r_25 != z_25)))
                                        _fail(z_25);
                                      else
                                        r_25 = z_25;
                                      {
                                        if(((s_25 != NULL) && (s_25 != a_26)))
                                          _fail(a_26);
                                        else
                                          s_25 = a_26;
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
                              t = oncetd_1(t, k_1);
                              {
                                b_26 = t;
                                if(((v_25 != NULL) && (v_25 != b_26)))
                                  _fail(b_26);
                                else
                                  v_25 = b_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_h_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_25)), (ATerm) ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_25)), not_null(r_25)))))));
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
  ATerm t_31 = NULL,u_31 = NULL;
  t_31 = t;
  s_31 :
  if(match_cons(t_31, sym_Match_1))
    {
      u_31 = ATgetArgument(t_31, 0);
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
            ATerm a_32 = NULL;
            ATerm z_34 = NULL;
            t = new_0(t);
            {
              a_32 = t;
              {
                if(((y_31 != NULL) && (y_31 != a_32)))
                  _fail(a_32);
                else
                  y_31 = a_32;
                {
                  t = not_null(u_31);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
                      w_34 = t;
                      l_30 :
                      if(match_cons(w_34, sym_Anno_2))
                        {
                          x_34 = ATgetArgument(w_34, 0);
                          y_34 = ATgetArgument(w_34, 1);
                          {
                            if(((w_31 != NULL) && (w_31 != x_34)))
                              _fail(x_34);
                            else
                              w_31 = x_34;
                            {
                              if(((x_31 != NULL) && (x_31 != y_34)))
                                _fail(y_34);
                              else
                                x_31 = y_34;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_31)), not_null(w_31));
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
                      z_34 = t;
                      if(((z_31 != NULL) && (z_31 != z_34)))
                        _fail(z_34);
                      else
                        z_31 = z_34;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_31)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_l_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_31)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_31))))));
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            {
              ATerm m_9 = t;
              int r_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
                  ATerm e_35 = NULL;
                  ATerm h_35 = NULL;
                  t = new_0(t);
                  {
                    e_35 = t;
                    {
                      if(((c_35 != NULL) && (c_35 != e_35)))
                        _fail(e_35);
                      else
                        c_35 = e_35;
                      {
                        t = not_null(u_31);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm f_35 = NULL,g_35 = NULL;
                            f_35 = t;
                            p_30 :
                            if(match_cons(f_35, sym_RootApp_1))
                              {
                                g_35 = ATgetArgument(f_35, 0);
                                {
                                  if(((b_35 != NULL) && (b_35 != g_35)))
                                    _fail(g_35);
                                  else
                                    b_35 = g_35;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_35));
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
                            h_35 = t;
                            if(((d_35 != NULL) && (d_35 != h_35)))
                              _fail(h_35);
                            else
                              d_35 = h_35;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_35))), not_null(b_35))));
                  LocalPopChoice(r_9);
                }
              else
                {
                  t = m_9;
                  {
                    ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
                    ATerm n_35 = NULL;
                    ATerm r_35 = NULL;
                    t = new_0(t);
                    {
                      n_35 = t;
                      {
                        if(((l_35 != NULL) && (l_35 != n_35)))
                          _fail(n_35);
                        else
                          l_35 = n_35;
                        {
                          t = not_null(u_31);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
                              o_35 = t;
                              t_30 :
                              if(match_cons(o_35, sym_App_2))
                                {
                                  p_35 = ATgetArgument(o_35, 0);
                                  q_35 = ATgetArgument(o_35, 1);
                                  {
                                    if(((k_35 != NULL) && (k_35 != p_35)))
                                      _fail(p_35);
                                    else
                                      k_35 = p_35;
                                    {
                                      if(((j_35 != NULL) && (j_35 != q_35)))
                                        _fail(q_35);
                                      else
                                        j_35 = q_35;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_35));
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
                              r_35 = t;
                              if(((m_35 != NULL) && (m_35 != r_35)))
                                _fail(r_35);
                              else
                                m_35 = r_35;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_35))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_35)), not_null(k_35)))));
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
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL;
  v_36 = t;
  l_36 :
  if(match_cons(v_36, sym_Match_1))
    {
      w_36 = ATgetArgument(v_36, 0);
      u_36 :
      if(match_cons(w_36, sym_RootApp_1))
        {
          x_36 = ATgetArgument(w_36, 0);
          t = not_null(x_36);
        }
      else
        {
          if(match_cons(w_36, sym_App_2))
            {
              x_36 = ATgetArgument(w_36, 0);
              y_36 = ATgetArgument(w_36, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(x_36), not_null(y_36));
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
  ATerm k_37 = NULL,l_37 = NULL;
  k_37 = t;
  j_37 :
  if(match_cons(k_37, sym_Match_1))
    {
      l_37 = ATgetArgument(k_37, 0);
      {
        ATerm n_37 = NULL,o_37 = NULL;
        ATerm s_37 = NULL;
        t = not_null(l_37);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
            p_37 = t;
            g_37 :
            if(match_cons(p_37, sym_RootApp_1))
              {
                q_37 = ATgetArgument(p_37, 0);
                h_37 :
                if(match_cons(q_37, sym_Match_1))
                  {
                    r_37 = ATgetArgument(q_37, 0);
                    {
                      if(((n_37 != NULL) && (n_37 != r_37)))
                        _fail(r_37);
                      else
                        n_37 = r_37;
                      t = not_null(n_37);
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
            s_37 = t;
            if(((o_37 != NULL) && (o_37 != s_37)))
              _fail(s_37);
            else
              o_37 = s_37;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(o_37));
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
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      {
        ATerm x_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(z_9);
          }
        else
          {
            t = x_9;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm m_38 = NULL,q_38 = NULL;
  m_38 = t;
  l_38 :
  if(match_cons(m_38, sym_Build_1))
    {
      q_38 = ATgetArgument(m_38, 0);
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
            ATerm w_38 = NULL;
            ATerm a_39 = NULL;
            t = new_0(t);
            {
              w_38 = t;
              {
                if(((u_38 != NULL) && (u_38 != w_38)))
                  _fail(w_38);
                else
                  u_38 = w_38;
                {
                  t = not_null(q_38);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
                      x_38 = t;
                      b_38 :
                      if(match_cons(x_38, sym_Anno_2))
                        {
                          y_38 = ATgetArgument(x_38, 0);
                          z_38 = ATgetArgument(x_38, 1);
                          {
                            if(((s_38 != NULL) && (s_38 != y_38)))
                              _fail(y_38);
                            else
                              s_38 = y_38;
                            {
                              if(((t_38 != NULL) && (t_38 != z_38)))
                                _fail(z_38);
                              else
                                t_38 = z_38;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_38));
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
                      a_39 = t;
                      if(((v_38 != NULL) && (v_38 != a_39)))
                        _fail(a_39);
                      else
                        v_38 = a_39;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_e_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_38)), not_null(s_38))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_38))));
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            {
              ATerm f_10 = t;
              int g_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
                  ATerm r_39 = NULL;
                  ATerm w_39 = NULL;
                  t = new_0(t);
                  {
                    r_39 = t;
                    {
                      if(((o_39 != NULL) && (o_39 != r_39)))
                        _fail(r_39);
                      else
                        o_39 = r_39;
                      {
                        t = not_null(q_38);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm s_39 = NULL,t_39 = NULL;
                            s_39 = t;
                            f_38 :
                            if(match_cons(s_39, sym_RootApp_1))
                              {
                                t_39 = ATgetArgument(s_39, 0);
                                {
                                  if(((n_39 != NULL) && (n_39 != t_39)))
                                    _fail(t_39);
                                  else
                                    n_39 = t_39;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_39));
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
                            w_39 = t;
                            if(((p_39 != NULL) && (p_39 != w_39)))
                              _fail(w_39);
                            else
                              p_39 = w_39;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_39)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_39), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_39))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_39))));
                  LocalPopChoice(g_10);
                }
              else
                {
                  t = f_10;
                  {
                    ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
                    ATerm l_40 = NULL;
                    ATerm p_40 = NULL;
                    t = new_0(t);
                    {
                      l_40 = t;
                      {
                        if(((j_40 != NULL) && (j_40 != l_40)))
                          _fail(l_40);
                        else
                          j_40 = l_40;
                        {
                          t = not_null(q_38);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
                              m_40 = t;
                              j_38 :
                              if(match_cons(m_40, sym_App_2))
                                {
                                  n_40 = ATgetArgument(m_40, 0);
                                  o_40 = ATgetArgument(m_40, 1);
                                  {
                                    if(((h_40 != NULL) && (h_40 != n_40)))
                                      _fail(n_40);
                                    else
                                      h_40 = n_40;
                                    {
                                      if(((i_40 != NULL) && (i_40 != o_40)))
                                        _fail(o_40);
                                      else
                                        i_40 = o_40;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_40));
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
                              p_40 = t;
                              if(((k_40 != NULL) && (k_40 != p_40)))
                                _fail(p_40);
                              else
                                k_40 = p_40;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_40)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(h_40), not_null(i_40), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_40)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_40))));
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
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
  n_41 = t;
  l_41 :
  if(match_cons(n_41, sym_Build_1))
    {
      o_41 = ATgetArgument(n_41, 0);
      m_41 :
      if(match_cons(o_41, sym_RootApp_1))
        {
          p_41 = ATgetArgument(o_41, 0);
          t = not_null(p_41);
        }
      else
        {
          if(match_cons(o_41, sym_App_2))
            {
              p_41 = ATgetArgument(o_41, 0);
              q_41 = ATgetArgument(o_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_41)), not_null(p_41));
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
ATerm As_2 (ATerm t, ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
  c_42 = t;
  b_42 :
  if(match_cons(c_42, sym_As_2))
    {
      d_42 = ATgetArgument(c_42, 0);
      e_42 = ATgetArgument(c_42, 1);
      {
        ATerm i_42 = NULL,k_42 = NULL;
        ATerm j_42 = NULL;
        t = SSLgetAnnotations(not_null(c_42));
        {
          j_42 = t;
          if(((i_42 != NULL) && (i_42 != j_42)))
            _fail(j_42);
          else
            i_42 = j_42;
        }
        {
          t = not_null(d_42);
          {
            ATerm m_42 = NULL;
            t = e_73(t);
            {
              k_42 = t;
              {
                t = not_null(e_42);
                {
                  ATerm o_42 = NULL;
                  t = f_73(t);
                  {
                    m_42 = t;
                    {
                      ATerm p_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(k_42), not_null(m_42)), not_null(i_42));
                      {
                        p_42 = t;
                        if(((o_42 != NULL) && (o_42 != p_42)))
                          _fail(p_42);
                        else
                          o_42 = p_42;
                      }
                      t = not_null(o_42);
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
ATerm Prim_2 (ATerm t, ATerm k_69 (ATerm), ATerm l_69 (ATerm))
{
  ATerm b_43 = NULL,g_43 = NULL,h_43 = NULL;
  b_43 = t;
  a_43 :
  if(match_cons(b_43, sym_Prim_2))
    {
      g_43 = ATgetArgument(b_43, 0);
      h_43 = ATgetArgument(b_43, 1);
      {
        ATerm l_43 = NULL,v_43 = NULL;
        ATerm u_43 = NULL;
        t = SSLgetAnnotations(not_null(b_43));
        {
          u_43 = t;
          if(((l_43 != NULL) && (l_43 != u_43)))
            _fail(u_43);
          else
            l_43 = u_43;
        }
        {
          t = not_null(g_43);
          {
            ATerm x_43 = NULL;
            t = k_69(t);
            {
              v_43 = t;
              {
                t = not_null(h_43);
                {
                  ATerm z_43 = NULL;
                  t = l_69(t);
                  {
                    x_43 = t;
                    {
                      ATerm a_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(v_43), not_null(x_43)), not_null(l_43));
                      {
                        a_44 = t;
                        if(((z_43 != NULL) && (z_43 != a_44)))
                          _fail(a_44);
                        else
                          z_43 = a_44;
                      }
                      t = not_null(z_43);
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
ATerm Explode_2 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm))
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
  m_44 = t;
  l_44 :
  if(match_cons(m_44, sym_Explode_2))
    {
      n_44 = ATgetArgument(m_44, 0);
      o_44 = ATgetArgument(m_44, 1);
      {
        ATerm w_44 = NULL,y_44 = NULL;
        ATerm x_44 = NULL;
        t = SSLgetAnnotations(not_null(m_44));
        {
          x_44 = t;
          if(((w_44 != NULL) && (w_44 != x_44)))
            _fail(x_44);
          else
            w_44 = x_44;
        }
        {
          t = not_null(n_44);
          {
            ATerm a_45 = NULL;
            t = a_73(t);
            {
              y_44 = t;
              {
                t = not_null(o_44);
                {
                  ATerm c_45 = NULL;
                  t = b_73(t);
                  {
                    a_45 = t;
                    {
                      ATerm d_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(y_44), not_null(a_45)), not_null(w_44));
                      {
                        d_45 = t;
                        if(((c_45 != NULL) && (c_45 != d_45)))
                          _fail(d_45);
                        else
                          c_45 = d_45;
                      }
                      t = not_null(c_45);
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
ATerm Op_2 (ATerm t, ATerm o_71 (ATerm), ATerm p_71 (ATerm))
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
  p_45 = t;
  o_45 :
  if(match_cons(p_45, sym_Op_2))
    {
      q_45 = ATgetArgument(p_45, 0);
      r_45 = ATgetArgument(p_45, 1);
      {
        ATerm v_45 = NULL,x_45 = NULL;
        ATerm w_45 = NULL;
        t = SSLgetAnnotations(not_null(p_45));
        {
          w_45 = t;
          if(((v_45 != NULL) && (v_45 != w_45)))
            _fail(w_45);
          else
            v_45 = w_45;
        }
        {
          t = not_null(q_45);
          {
            ATerm z_45 = NULL;
            t = o_71(t);
            {
              x_45 = t;
              {
                t = not_null(r_45);
                {
                  ATerm b_46 = NULL;
                  t = p_71(t);
                  {
                    z_45 = t;
                    {
                      ATerm c_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(x_45), not_null(z_45)), not_null(v_45));
                      {
                        c_46 = t;
                        if(((b_46 != NULL) && (b_46 != c_46)))
                          _fail(c_46);
                        else
                          b_46 = c_46;
                      }
                      t = not_null(b_46);
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
ATerm pat_td_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_79(t);
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = pat_td_1(t, q_79);
                return(t);
              }
              t = fetch_1(t, t_1);
              return(t);
            }
            t = Op_2(t, _id, s_1);
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
              ATerm l_10 = t;
              int m_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = pat_td_1(t, q_79);
                    return(t);
                  }
                  t = Explode_2(t, _id, u_1);
                  LocalPopChoice(m_10);
                }
              else
                {
                  t = l_10;
                  {
                    ATerm s_10 = t;
                    int t_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_1 (ATerm t)
                        {
                          t = pat_td_1(t, q_79);
                          return(t);
                        }
                        t = Explode_2(t, v_1, _id);
                        LocalPopChoice(t_10);
                      }
                    else
                      {
                        t = s_10;
                        {
                          ATerm u_10 = t;
                          int v_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_1 (ATerm t)
                              {
                                ATerm x_1 (ATerm t)
                                {
                                  t = pat_td_1(t, q_79);
                                  return(t);
                                }
                                t = fetch_1(t, x_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, w_1);
                              LocalPopChoice(v_10);
                            }
                          else
                            {
                              t = u_10;
                              {
                                ATerm y_1 (ATerm t)
                                {
                                  t = pat_td_1(t, q_79);
                                  return(t);
                                }
                                t = As_2(t, _id, y_1);
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
  ATerm u_46 = NULL,v_46 = NULL;
  u_46 = t;
  t_46 :
  if(match_cons(u_46, sym_Build_1))
    {
      v_46 = ATgetArgument(u_46, 0);
      {
        ATerm z_10 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_46 = NULL,y_46 = NULL;
            ATerm c_47 = NULL;
            t = not_null(v_46);
            {
              ATerm z_1 (ATerm t)
              {
                ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
                z_46 = t;
                l_46 :
                if(match_cons(z_46, sym_RootApp_1))
                  {
                    a_47 = ATgetArgument(z_46, 0);
                    m_46 :
                    if(match_cons(a_47, sym_Build_1))
                      {
                        b_47 = ATgetArgument(a_47, 0);
                        {
                          if(((x_46 != NULL) && (x_46 != b_47)))
                            _fail(b_47);
                          else
                            x_46 = b_47;
                          t = not_null(x_46);
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
                c_47 = t;
                if(((y_46 != NULL) && (y_46 != c_47)))
                  _fail(c_47);
                else
                  y_46 = c_47;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(y_46));
            LocalPopChoice(b_11);
          }
        else
          {
            t = z_10;
            {
              ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
              ATerm l_47 = NULL;
              t = not_null(v_46);
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
                  h_47 = t;
                  q_46 :
                  if(match_cons(h_47, sym_App_2))
                    {
                      i_47 = ATgetArgument(h_47, 0);
                      k_47 = ATgetArgument(h_47, 1);
                      r_46 :
                      if(match_cons(i_47, sym_Build_1))
                        {
                          j_47 = ATgetArgument(i_47, 0);
                          {
                            if(((f_47 != NULL) && (f_47 != j_47)))
                              _fail(j_47);
                            else
                              f_47 = j_47;
                            {
                              if(((e_47 != NULL) && (e_47 != k_47)))
                                _fail(k_47);
                              else
                                e_47 = k_47;
                              t = not_null(f_47);
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
                t = pat_td_1(t, a_2);
                {
                  l_47 = t;
                  if(((g_47 != NULL) && (g_47 != l_47)))
                    _fail(l_47);
                  else
                    g_47 = l_47;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(g_47));
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
  ATerm d_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(g_11);
    }
  else
    {
      t = d_11;
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  m_48 = t;
  f_48 :
  if(match_cons(m_48, sym_Lets_2))
    {
      n_48 = ATgetArgument(m_48, 0);
      o_48 = ATgetArgument(m_48, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(n_48), not_null(o_48));
    }
  else
    {
      if(match_cons(m_48, sym_LChoices_1))
        {
          n_48 = ATgetArgument(m_48, 0);
          g_48 :
          if(((ATgetType(n_48) == AT_LIST) && !(ATisEmpty(n_48))))
            {
              j_48 = ATgetFirst((ATermList) n_48);
              k_48 = (ATerm) ATgetNext((ATermList) n_48);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(k_48)));
            }
          else
            {
              if(((ATgetType(n_48) == AT_LIST) && ATisEmpty(n_48)))
                {
                  t = term_d_8;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(m_48, sym_Choices_1))
            {
              n_48 = ATgetArgument(m_48, 0);
              h_48 :
              if(((ATgetType(n_48) == AT_LIST) && !(ATisEmpty(n_48))))
                {
                  j_48 = ATgetFirst((ATermList) n_48);
                  k_48 = (ATerm) ATgetNext((ATermList) n_48);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(k_48)));
                }
              else
                {
                  if(((ATgetType(n_48) == AT_LIST) && ATisEmpty(n_48)))
                    {
                      t = term_d_8;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(m_48, sym_Seqs_1))
                {
                  n_48 = ATgetArgument(m_48, 0);
                  i_48 :
                  if(((ATgetType(n_48) == AT_LIST) && !(ATisEmpty(n_48))))
                    {
                      j_48 = ATgetFirst((ATermList) n_48);
                      k_48 = (ATerm) ATgetNext((ATermList) n_48);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(k_48)));
                    }
                  else
                    {
                      if(((ATgetType(n_48) == AT_LIST) && ATisEmpty(n_48)))
                        {
                          t = term_j_11;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(m_48, sym_DefaultVarDec_1))
                    {
                      n_48 = ATgetArgument(m_48, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(n_48), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_11), term_m_11));
                    }
                  else
                    {
                      if(match_cons(m_48, sym_InfixApp_3))
                        {
                          n_48 = ATgetArgument(m_48, 0);
                          o_48 = ATgetArgument(m_48, 1);
                          l_48 = ATgetArgument(m_48, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(o_48), (ATerm) ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_48)), not_null(n_48))));
                        }
                      else
                        {
                          if(match_cons(m_48, sym_BAM_3))
                            {
                              n_48 = ATgetArgument(m_48, 0);
                              o_48 = ATgetArgument(m_48, 1);
                              l_48 = ATgetArgument(m_48, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(l_48))), not_null(n_48)), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_48))));
                            }
                          else
                            {
                              if(match_cons(m_48, sym_AM_2))
                                {
                                  n_48 = ATgetArgument(m_48, 0);
                                  o_48 = ATgetArgument(m_48, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_48), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_48)));
                                }
                              else
                                {
                                  if(match_cons(m_48, sym_MA_2))
                                    {
                                      n_48 = ATgetArgument(m_48, 0);
                                      o_48 = ATgetArgument(m_48, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_48)), not_null(o_48));
                                    }
                                  else
                                    {
                                      if(match_cons(m_48, sym_BA_2))
                                        {
                                          n_48 = ATgetArgument(m_48, 0);
                                          o_48 = ATgetArgument(m_48, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_48)), not_null(n_48));
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
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  b_50 = t;
  y_49 :
  if(match_cons(b_50, sym__2))
    {
      c_50 = ATgetArgument(b_50, 0);
      f_50 = ATgetArgument(b_50, 1);
      z_49 :
      if(match_cons(c_50, sym__2))
        {
          d_50 = ATgetArgument(c_50, 0);
          e_50 = ATgetArgument(c_50, 1);
          a_50 :
          if(match_cons(f_50, sym__2))
            {
              g_50 = ATgetArgument(f_50, 0);
              h_50 = ATgetArgument(f_50, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_50)), not_null(d_50)), (ATerm) ATinsert(CheckATermList(not_null(h_50)), not_null(e_50)));
            }
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
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  s_50 = t;
  r_50 :
  if(((ATgetType(s_50) == AT_LIST) && !(ATisEmpty(s_50))))
    {
      t_50 = ATgetFirst((ATermList) s_50);
      u_50 = (ATerm) ATgetNext((ATermList) s_50);
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_50), not_null(u_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm a_51 = NULL;
  a_51 = t;
  z_50 :
  if(((ATgetType(a_51) == AT_LIST) && ATisEmpty(a_51)))
    {
      t = term_n_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm z_88 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, z_88);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL;
  ATerm z_51 (ATerm t)
  {
    ATerm s_51 = NULL;
    ATerm t_51 = NULL;
    t = not_null(p_51);
    {
      ATerm o_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_11;
        }
      {
        t = new_0(t);
        {
          t_51 = t;
          if(((s_51 != NULL) && (s_51 != t_51)))
            _fail(t_51);
          else
            s_51 = t_51;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(s_51)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_51)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_51))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_51))));
    return(t);
  }
  ATerm a_52 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_j_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_51))));
    return(t);
  }
  p_51 = t;
  l_51 :
  if(match_cons(p_51, sym_Var_1))
    {
      q_51 = ATgetArgument(p_51, 0);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_51(t);
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            t = a_52(t);
          }
      }
    }
  else
    {
      t = z_51(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm s_52 = NULL,t_52 = NULL;
  s_52 = t;
  r_52 :
  if(match_cons(s_52, sym_Var_1))
    {
      t_52 = ATgetArgument(s_52, 0);
      {
        ATerm v_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_52 = NULL,y_52 = NULL;
            ATerm x_52 = NULL;
            t = SSLgetAnnotations(not_null(s_52));
            {
              x_52 = t;
              if(((w_52 != NULL) && (w_52 != x_52)))
                _fail(x_52);
              else
                w_52 = x_52;
            }
            {
              t = not_null(t_52);
              {
                ATerm a_53 = NULL;
                t = q_0(t);
                {
                  y_52 = t;
                  {
                    ATerm b_53 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(y_52)), not_null(w_52));
                    {
                      b_53 = t;
                      if(((a_53 != NULL) && (a_53 != b_53)))
                        _fail(b_53);
                      else
                        a_53 = b_53;
                    }
                    t = not_null(a_53);
                  }
                }
              }
            }
            LocalPopChoice(w_11);
          }
        else
          {
            t = v_11;
            {
              ATerm e_53 = NULL,g_53 = NULL;
              ATerm f_53 = NULL;
              t = SSLgetAnnotations(not_null(s_52));
              {
                f_53 = t;
                if(((e_53 != NULL) && (e_53 != f_53)))
                  _fail(f_53);
                else
                  e_53 = f_53;
              }
              {
                t = not_null(t_52);
                {
                  ATerm i_53 = NULL;
                  t = q_0(t);
                  {
                    g_53 = t;
                    {
                      ATerm j_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(g_53)), not_null(e_53));
                      {
                        j_53 = t;
                        if(((i_53 != NULL) && (i_53 != j_53)))
                          _fail(j_53);
                        else
                          i_53 = j_53;
                      }
                      t = not_null(i_53);
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
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
  x_53 = t;
  w_53 :
  if(match_cons(x_53, sym_Prim_2))
    {
      y_53 = ATgetArgument(x_53, 0);
      z_53 = ATgetArgument(x_53, 1);
      {
        ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
        ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
        t = not_null(z_53);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm x_11 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_11;
              }
            return(t);
          }
          t = fetch_1(t, b_2);
          {
            t = not_null(z_53);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm c_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, c_2);
                {
                  f_54 = t;
                  u_53 :
                  if(match_cons(f_54, sym__2))
                    {
                      g_54 = ATgetArgument(f_54, 0);
                      h_54 = ATgetArgument(f_54, 1);
                      v_53 :
                      if(match_cons(h_54, sym__2))
                        {
                          i_54 = ATgetArgument(h_54, 0);
                          j_54 = ATgetArgument(h_54, 1);
                          {
                            if(((c_54 != NULL) && (c_54 != g_54)))
                              _fail(g_54);
                            else
                              c_54 = g_54;
                            {
                              if(((d_54 != NULL) && (d_54 != i_54)))
                                _fail(i_54);
                              else
                                d_54 = i_54;
                              if(((e_54 != NULL) && (e_54 != j_54)))
                                _fail(j_54);
                              else
                                e_54 = j_54;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_54)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(y_53), not_null(e_54))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm i_94 (ATerm), ATerm j_94 (ATerm))
{
  ATerm m_54 (ATerm t)
  {
    ATerm b_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_94(t);
        t = m_54(t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = b_12;
        t = j_94(t);
      }
    return(t);
  }
  t = m_54(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm l_94 (ATerm))
{
  t = repeat_2(t, l_94, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  r_54 :
  if(match_cons(s_54, sym_Wld_0))
    {
      ATerm w_54 = NULL,y_54 = NULL;
      ATerm g_12;
      g_12 = t;
      {
        ATerm x_54 = NULL;
        t = SSLgetAnnotations(not_null(s_54));
        {
          x_54 = t;
          if(((w_54 != NULL) && (w_54 != x_54)))
            _fail(x_54);
          else
            w_54 = x_54;
        }
      }
      t = g_12;
      {
        ATerm b_55 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(w_54));
        {
          b_55 = t;
          if(((y_54 != NULL) && (y_54 != b_55)))
            _fail(b_55);
          else
            y_54 = b_55;
        }
        t = not_null(y_54);
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
  ATerm h_12 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(j_12);
          }
        else
          {
            t = i_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, d_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm u_72 (ATerm), ATerm v_72 (ATerm))
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
  l_55 = t;
  k_55 :
  if(match_cons(l_55, sym_App_2))
    {
      m_55 = ATgetArgument(l_55, 0);
      n_55 = ATgetArgument(l_55, 1);
      {
        ATerm r_55 = NULL,v_55 = NULL;
        ATerm s_55 = NULL;
        t = SSLgetAnnotations(not_null(l_55));
        {
          s_55 = t;
          if(((r_55 != NULL) && (r_55 != s_55)))
            _fail(s_55);
          else
            r_55 = s_55;
        }
        {
          t = not_null(m_55);
          {
            ATerm x_55 = NULL;
            t = u_72(t);
            {
              v_55 = t;
              {
                t = not_null(n_55);
                {
                  ATerm a_56 = NULL;
                  t = v_72(t);
                  {
                    x_55 = t;
                    {
                      ATerm b_56 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(v_55), not_null(x_55)), not_null(r_55));
                      {
                        b_56 = t;
                        if(((a_56 != NULL) && (a_56 != b_56)))
                          _fail(b_56);
                        else
                          a_56 = b_56;
                      }
                      t = not_null(a_56);
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
ATerm Con_3 (ATerm t, ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t_72 (ATerm))
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,t_56 = NULL;
  o_56 = t;
  n_56 :
  if(match_cons(o_56, sym_Con_3))
    {
      p_56 = ATgetArgument(o_56, 0);
      q_56 = ATgetArgument(o_56, 1);
      t_56 = ATgetArgument(o_56, 2);
      {
        ATerm e_57 = NULL,g_57 = NULL;
        ATerm f_57 = NULL;
        t = SSLgetAnnotations(not_null(o_56));
        {
          f_57 = t;
          if(((e_57 != NULL) && (e_57 != f_57)))
            _fail(f_57);
          else
            e_57 = f_57;
        }
        {
          t = not_null(p_56);
          {
            ATerm i_57 = NULL;
            t = r_72(t);
            {
              g_57 = t;
              {
                t = not_null(q_56);
                {
                  ATerm k_57 = NULL;
                  t = s_72(t);
                  {
                    i_57 = t;
                    {
                      t = not_null(t_56);
                      {
                        ATerm m_57 = NULL;
                        t = t_72(t);
                        {
                          k_57 = t;
                          {
                            ATerm n_57 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(g_57), not_null(i_57), not_null(k_57)), not_null(e_57));
                            {
                              n_57 = t;
                              if(((m_57 != NULL) && (m_57 != n_57)))
                                _fail(n_57);
                              else
                                m_57 = n_57;
                            }
                            t = not_null(m_57);
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
  ATerm k_12 = t;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm l_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(q_12);
          }
        else
          {
            t = l_12;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, e_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL;
  y_57 = t;
  w_57 :
  if(match_cons(y_57, sym_SRule_1))
    {
      z_57 = ATgetArgument(y_57, 0);
      x_57 :
      if(match_cons(z_57, sym_StratRule_3))
        {
          a_58 = ATgetArgument(z_57, 0);
          b_58 = ATgetArgument(z_57, 1);
          c_58 = ATgetArgument(z_57, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_58)), (ATerm) ATmakeAppl(sym_Where_1, not_null(c_58))), not_null(a_58)));
        }
      else
        {
          if(match_cons(z_57, sym_Rule_3))
            {
              a_58 = ATgetArgument(z_57, 0);
              b_58 = ATgetArgument(z_57, 1);
              c_58 = ATgetArgument(z_57, 2);
              {
                t = not_null(a_58);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(b_58);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(b_58))), (ATerm) ATmakeAppl(sym_Where_1, not_null(c_58))), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_58))));
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
ATerm Scope_2 (ATerm t, ATerm s_69 (ATerm), ATerm t_69 (ATerm))
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL;
  r_58 = t;
  q_58 :
  if(match_cons(r_58, sym_Scope_2))
    {
      s_58 = ATgetArgument(r_58, 0);
      t_58 = ATgetArgument(r_58, 1);
      {
        ATerm x_58 = NULL,z_58 = NULL;
        ATerm y_58 = NULL;
        t = SSLgetAnnotations(not_null(r_58));
        {
          y_58 = t;
          if(((x_58 != NULL) && (x_58 != y_58)))
            _fail(y_58);
          else
            x_58 = y_58;
        }
        {
          t = not_null(s_58);
          {
            ATerm b_59 = NULL;
            t = s_69(t);
            {
              z_58 = t;
              {
                t = not_null(t_58);
                {
                  ATerm d_59 = NULL;
                  t = t_69(t);
                  {
                    b_59 = t;
                    {
                      ATerm l_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(z_58), not_null(b_59)), not_null(x_58));
                      {
                        l_59 = t;
                        if(((d_59 != NULL) && (d_59 != l_59)))
                          _fail(l_59);
                        else
                          d_59 = l_59;
                      }
                      t = not_null(d_59);
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
ATerm oncetd_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm t_59 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_85(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = _one(t, t_59);
      }
    return(t);
  }
  t = t_59(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL;
  n_60 = t;
  l_60 :
  if(match_cons(n_60, sym_SRule_1))
    {
      o_60 = ATgetArgument(n_60, 0);
      m_60 :
      if(match_cons(o_60, sym_Rule_3))
        {
          p_60 = ATgetArgument(o_60, 0);
          q_60 = ATgetArgument(o_60, 1);
          r_60 = ATgetArgument(o_60, 2);
          {
            ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
            ATerm m_61 = NULL;
            ATerm s_61 = NULL;
            t = new_0(t);
            {
              m_61 = t;
              {
                if(((j_61 != NULL) && (j_61 != m_61)))
                  _fail(m_61);
                else
                  j_61 = m_61;
                {
                  t = not_null(p_60);
                  {
                    ATerm b_62 = NULL;
                    ATerm f_2 (ATerm t)
                    {
                      ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
                      n_61 = t;
                      x_59 :
                      if(match_cons(n_61, sym_Con_3))
                        {
                          o_61 = ATgetArgument(n_61, 0);
                          q_61 = ATgetArgument(n_61, 1);
                          r_61 = ATgetArgument(n_61, 2);
                          d_60 :
                          if(match_cons(o_61, sym_Var_1))
                            {
                              p_61 = ATgetArgument(o_61, 0);
                              {
                                if(((e_61 != NULL) && (e_61 != p_61)))
                                  _fail(p_61);
                                else
                                  e_61 = p_61;
                                {
                                  if(((c_61 != NULL) && (c_61 != q_61)))
                                    _fail(q_61);
                                  else
                                    c_61 = q_61;
                                  {
                                    if(((a_61 != NULL) && (a_61 != r_61)))
                                      _fail(r_61);
                                    else
                                      a_61 = r_61;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_61));
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
                    t = oncetd_1(t, f_2);
                    {
                      s_61 = t;
                      {
                        if(((k_61 != NULL) && (k_61 != s_61)))
                          _fail(s_61);
                        else
                          k_61 = s_61;
                        {
                          t = not_null(q_60);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL;
                              t_61 = t;
                              g_60 :
                              if(match_cons(t_61, sym_Con_3))
                                {
                                  u_61 = ATgetArgument(t_61, 0);
                                  w_61 = ATgetArgument(t_61, 1);
                                  x_61 = ATgetArgument(t_61, 2);
                                  h_60 :
                                  if(match_cons(u_61, sym_Var_1))
                                    {
                                      v_61 = ATgetArgument(u_61, 0);
                                      i_60 :
                                      if(match_cons(x_61, sym_Call_2))
                                        {
                                          y_61 = ATgetArgument(x_61, 0);
                                          z_61 = ATgetArgument(x_61, 1);
                                          j_60 :
                                          if(((ATgetType(z_61) == AT_LIST) && ATisEmpty(z_61)))
                                            {
                                              {
                                                if(((e_61 != NULL) && (e_61 != v_61)))
                                                  _fail(v_61);
                                                else
                                                  e_61 = v_61;
                                                {
                                                  if(((d_61 != NULL) && (d_61 != w_61)))
                                                    _fail(w_61);
                                                  else
                                                    d_61 = w_61;
                                                  {
                                                    if(((b_61 != NULL) && (b_61 != y_61)))
                                                      _fail(y_61);
                                                    else
                                                      b_61 = y_61;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_61));
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
                            t = oncetd_1(t, g_2);
                            {
                              b_62 = t;
                              if(((l_61 != NULL) && (l_61 != b_62)))
                                _fail(b_62);
                              else
                                l_61 = b_62;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_61)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_61), not_null(l_61), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_60), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(b_61), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_61), not_null(d_61), term_j_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_61)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_61)))))));
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
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_13 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
          LocalPopChoice(c_13);
        }
      else
        {
          t = b_13;
          {
            ATerm d_13 = t;
            int h_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2(t, _id, desugarRule_0);
                LocalPopChoice(h_13);
              }
            else
              {
                t = d_13;
                t = RtoS_0(t);
              }
          }
        }
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm w_83 (ATerm))
{
  t = w_83(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, w_83);
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
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0(t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        {
        }
      }
    {
      ATerm j_2 (ATerm t)
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
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
                    ATerm x_13 = t;
                    int y_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(y_13);
                      }
                    else
                      {
                        t = x_13;
                        {
                          ATerm z_13 = t;
                          int a_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(a_14);
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
      t = repeat_2(t, j_2, _id);
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
      ATerm b_14;
      b_14 = t;
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
      t = b_14;
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
  ATerm j_63 = NULL;
  ATerm l_63 = NULL,m_63 = NULL,u_63 = NULL,w_63 = NULL;
  j_63 = t;
  {
    ATerm c_14;
    c_14 = t;
    {
      ATerm n_63 = NULL;
      ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL;
      t = not_null(j_63);
      {
        n_63 = t;
        {
          t = SSL_explode_term(not_null(n_63));
          {
            p_63 = t;
            c_63 :
            if(match_cons(p_63, sym__2))
              {
                q_63 = ATgetArgument(p_63, 0);
                r_63 = ATgetArgument(p_63, 1);
                d_63 :
                if(match_string(q_63, ""))
                  {
                    e_63 :
                    if(((ATgetType(r_63) == AT_LIST) && !(ATisEmpty(r_63))))
                      {
                        s_63 = ATgetFirst((ATermList) r_63);
                        t_63 = (ATerm) ATgetNext((ATermList) r_63);
                        {
                          if(((l_63 != NULL) && (l_63 != s_63)))
                            _fail(s_63);
                          else
                            l_63 = s_63;
                          if(((m_63 != NULL) && (m_63 != t_63)))
                            _fail(t_63);
                          else
                            m_63 = t_63;
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
    t = c_14;
    {
      ATerm d_14;
      d_14 = t;
      {
        ATerm v_63 = NULL;
        t = term_i_9;
        {
          v_63 = t;
          if(((u_63 != NULL) && (u_63 != v_63)))
            _fail(v_63);
          else
            u_63 = v_63;
        }
      }
      t = d_14;
      {
        t = SSL_mkterm(not_null(u_63), not_null(m_63));
        {
          w_63 = t;
          t = not_null(w_63);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm q_64 = NULL;
  ATerm s_64 = NULL,t_64 = NULL;
  q_64 = t;
  {
    ATerm u_64 = NULL;
    ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
    t = not_null(q_64);
    {
      u_64 = t;
      {
        t = SSL_explode_term(not_null(u_64));
        {
          w_64 = t;
          n_64 :
          if(match_cons(w_64, sym__2))
            {
              x_64 = ATgetArgument(w_64, 0);
              y_64 = ATgetArgument(w_64, 1);
              o_64 :
              if(match_string(x_64, ""))
                {
                  p_64 :
                  if(((ATgetType(y_64) == AT_LIST) && !(ATisEmpty(y_64))))
                    {
                      z_64 = ATgetFirst((ATermList) y_64);
                      a_65 = (ATerm) ATgetNext((ATermList) y_64);
                      {
                        if(((t_64 != NULL) && (t_64 != z_64)))
                          _fail(z_64);
                        else
                          t_64 = z_64;
                        if(((s_64 != NULL) && (s_64 != a_65)))
                          _fail(a_65);
                        else
                          s_64 = a_65;
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
    t = not_null(t_64);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm f_88 (ATerm))
{
  ATerm x_65 = NULL,z_65 = NULL,b_66 = NULL;
  ATerm d_66 (ATerm t)
  {
    ATerm e_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_65 = NULL,l_65 = NULL;
        ATerm k_14;
        k_14 = t;
        {
          ATerm k_65 = NULL;
          t = map_1(t, Fst_0);
          {
            t = f_88(t);
            {
              k_65 = t;
              if(((j_65 != NULL) && (j_65 != k_65)))
                _fail(k_65);
              else
                j_65 = k_65;
            }
          }
        }
        t = k_14;
        {
          ATerm m_65 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = d_66(t);
            {
              m_65 = t;
              if(((l_65 != NULL) && (l_65 != m_65)))
                _fail(m_65);
              else
                l_65 = m_65;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(l_65)), not_null(j_65));
        }
        LocalPopChoice(h_14);
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
  t = d_66(t);
  {
    ATerm o_14;
    o_14 = t;
    {
      ATerm y_65 = NULL;
      y_65 = t;
      if(((x_65 != NULL) && (x_65 != y_65)))
        _fail(y_65);
      else
        x_65 = y_65;
    }
    t = o_14;
    {
      ATerm p_14;
      p_14 = t;
      {
        ATerm a_66 = NULL;
        t = term_i_9;
        {
          a_66 = t;
          if(((z_65 != NULL) && (z_65 != a_66)))
            _fail(a_66);
          else
            z_65 = a_66;
        }
      }
      t = p_14;
      {
        t = SSL_mkterm(not_null(z_65), not_null(x_65));
        {
          b_66 = t;
          t = not_null(b_66);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm k_67 = NULL;
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
  k_67 = t;
  {
    ATerm u_67 = NULL;
    ATerm v_67 = NULL;
    t = new_0(t);
    {
      u_67 = t;
      {
        if(((m_67 != NULL) && (m_67 != u_67)))
          _fail(u_67);
        else
          m_67 = u_67;
        {
          ATerm w_67 = NULL;
          t = new_0(t);
          {
            v_67 = t;
            {
              if(((n_67 != NULL) && (n_67 != v_67)))
                _fail(v_67);
              else
                n_67 = v_67;
              {
                t = new_0(t);
                {
                  w_67 = t;
                  if(((o_67 != NULL) && (o_67 != w_67)))
                    _fail(w_67);
                  else
                    o_67 = w_67;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_67)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_67)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_67))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(m_67), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_11), term_m_11)), not_null(n_67), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_67)), not_null(o_67), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_67)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
  g_68 = t;
  f_68 :
  if(match_cons(g_68, sym__2))
    {
      h_68 = ATgetArgument(g_68, 0);
      i_68 = ATgetArgument(g_68, 1);
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(h_68), not_null(i_68));
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            t = SSL_subtr(not_null(h_68), not_null(i_68));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL;
    v_68 = t;
    n_68 :
    if(match_cons(v_68, sym__2))
      {
        w_68 = ATgetArgument(v_68, 0);
        x_68 = ATgetArgument(v_68, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(w_68), not_null(x_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL;
    a_69 = t;
    p_68 :
    if(match_cons(a_69, sym__3))
      {
        b_69 = ATgetArgument(a_69, 0);
        c_69 = ATgetArgument(a_69, 1);
        d_69 = ATgetArgument(a_69, 2);
        q_68 :
        if(match_int(b_69, 0))
          {
            t = not_null(d_69);
          }
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
    ATerm g_69 = NULL,h_69 = NULL,m_69 = NULL,n_69 = NULL;
    g_69 = t;
    u_68 :
    if(match_cons(g_69, sym__3))
      {
        h_69 = ATgetArgument(g_69, 0);
        m_69 = ATgetArgument(g_69, 1);
        n_69 = ATgetArgument(g_69, 2);
        {
          ATerm r_69 = NULL,v_69 = NULL;
          ATerm v_14;
          v_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_69), term_j_6);
            t = geq_0(t);
          }
          t = v_14;
          {
            ATerm w_14;
            w_14 = t;
            {
              ATerm u_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_69), term_j_6);
              {
                t = subt_0(t);
                {
                  u_69 = t;
                  if(((r_69 != NULL) && (r_69 != u_69)))
                    _fail(u_69);
                  else
                    r_69 = u_69;
                }
              }
            }
            t = w_14;
            {
              ATerm w_69 = NULL;
              t = not_null(m_69);
              {
                t = k_98(t);
                {
                  w_69 = t;
                  if(((v_69 != NULL) && (v_69 != w_69)))
                    _fail(w_69);
                  else
                    v_69 = w_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(r_69), not_null(m_69), (ATerm) ATinsert(CheckATermList(not_null(n_69)), not_null(v_69)));
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
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL;
  h_70 = t;
  g_70 :
  if(match_cons(h_70, sym__2))
    {
      i_70 = ATgetArgument(h_70, 0);
      j_70 = ATgetArgument(h_70, 1);
      {
        ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
        ATerm p_70 = NULL;
        ATerm q_70 = NULL;
        t = new_0(t);
        {
          p_70 = t;
          {
            if(((m_70 != NULL) && (m_70 != p_70)))
              _fail(p_70);
            else
              m_70 = p_70;
            {
              ATerm r_70 = NULL;
              t = new_0(t);
              {
                q_70 = t;
                {
                  if(((n_70 != NULL) && (n_70 != q_70)))
                    _fail(q_70);
                  else
                    n_70 = q_70;
                  {
                    t = new_0(t);
                    {
                      r_70 = t;
                      if(((o_70 != NULL) && (o_70 != r_70)))
                        _fail(r_70);
                      else
                        o_70 = r_70;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_70)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_70))), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_70)))), (ATerm) ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_70))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_70))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(m_70), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_11), term_m_11)), not_null(n_70), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_70)), not_null(o_70), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_70)));
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
  ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL;
  i_71 = t;
  g_71 :
  if(match_cons(i_71, sym__2))
    {
      j_71 = ATgetArgument(i_71, 0);
      k_71 = ATgetArgument(i_71, 1);
      h_71 :
      if(((ATgetType(k_71) == AT_LIST) && ATisEmpty(k_71)))
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
ATerm zipr_1 (ATerm t, ATerm x_88 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, x_88);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL,s_71 = NULL;
  q_71 = t;
  n_71 :
  if(((ATgetType(q_71) == AT_LIST) && !(ATisEmpty(q_71))))
    {
      r_71 = ATgetFirst((ATermList) q_71);
      s_71 = (ATerm) ATgetNext((ATermList) q_71);
      t = not_null(s_71);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
  b_72 = t;
  z_71 :
  if(((ATgetType(b_72) == AT_LIST) && !(ATisEmpty(b_72))))
    {
      c_72 = ATgetFirst((ATermList) b_72);
      d_72 = (ATerm) ATgetNext((ATermList) b_72);
      a_72 :
      if(((ATgetType(d_72) == AT_LIST) && ATisEmpty(d_72)))
        {
          t = not_null(c_72);
        }
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
  ATerm x_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = x_14;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
  ATerm k_75 (ATerm t)
  {
    ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,k_74 = NULL;
    ATerm h_15;
    h_15 = t;
    {
      ATerm x_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL;
      ATerm y_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_73), term_j_6);
      {
        t = add_0(t);
        {
          y_73 = t;
          if(((x_73 != NULL) && (x_73 != y_73)))
            _fail(y_73);
          else
            x_73 = y_73;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_73), term_i_15);
        {
          t = copy_1(t, new_0);
          {
            z_73 = t;
            p_72 :
            if(((ATgetType(z_73) == AT_LIST) && !(ATisEmpty(z_73))))
              {
                a_74 = ATgetFirst((ATermList) z_73);
                b_74 = (ATerm) ATgetNext((ATermList) z_73);
                {
                  ATerm c_74 = NULL;
                  if(((p_73 != NULL) && (p_73 != a_74)))
                    _fail(a_74);
                  else
                    p_73 = a_74;
                  {
                    if(((q_73 != NULL) && (q_73 != b_74)))
                      _fail(b_74);
                    else
                      q_73 = b_74;
                    {
                      t = not_null(q_73);
                      {
                        ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL;
                        t = last_0(t);
                        {
                          c_74 = t;
                          {
                            if(((o_73 != NULL) && (o_73 != c_74)))
                              _fail(c_74);
                            else
                              o_73 = c_74;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_73)), not_null(p_73)), not_null(q_73));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    d_74 = t;
                                    o_72 :
                                    if(match_cons(d_74, sym__6))
                                      {
                                        e_74 = ATgetArgument(d_74, 0);
                                        f_74 = ATgetArgument(d_74, 1);
                                        g_74 = ATgetArgument(d_74, 2);
                                        h_74 = ATgetArgument(d_74, 3);
                                        i_74 = ATgetArgument(d_74, 4);
                                        j_74 = ATgetArgument(d_74, 5);
                                        {
                                          if(((r_73 != NULL) && (r_73 != e_74)))
                                            _fail(e_74);
                                          else
                                            r_73 = e_74;
                                          {
                                            if(((s_73 != NULL) && (s_73 != f_74)))
                                              _fail(f_74);
                                            else
                                              s_73 = f_74;
                                            {
                                              if(((t_73 != NULL) && (t_73 != g_74)))
                                                _fail(g_74);
                                              else
                                                t_73 = g_74;
                                              {
                                                if(((u_73 != NULL) && (u_73 != h_74)))
                                                  _fail(h_74);
                                                else
                                                  u_73 = h_74;
                                                {
                                                  if(((v_73 != NULL) && (v_73 != i_74)))
                                                    _fail(i_74);
                                                  else
                                                    v_73 = i_74;
                                                  if(((w_73 != NULL) && (w_73 != j_74)))
                                                    _fail(j_74);
                                                  else
                                                    w_73 = j_74;
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
    t = h_15;
    {
      ATerm l_74 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_73)), not_null(t_73)), not_null(q_73));
      {
        t = concat_0(t);
        {
          l_74 = t;
          if(((k_74 != NULL) && (k_74 != l_74)))
            _fail(l_74);
          else
            k_74 = l_74;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(j_73), term_q_15), not_null(s_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(k_74)), not_null(p_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(j_73), not_null(u_73)))), (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(j_73), not_null(w_73)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(r_73))))));
    }
    return(t);
  }
  ATerm l_75 (ATerm t)
  {
    ATerm n_74 = NULL;
    ATerm o_74 = NULL;
    t = new_0(t);
    {
      o_74 = t;
      if(((n_74 != NULL) && (n_74 != o_74)))
        _fail(o_74);
      else
        n_74 = o_74;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(j_73), term_q_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_74)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(j_73), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(j_73), (ATerm) ATempty))), term_j_11))));
    return(t);
  }
  ATerm m_75 (ATerm t)
  {
    ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL,y_74 = NULL,z_74 = NULL,i_75 = NULL;
    ATerm r_15;
    r_15 = t;
    {
      ATerm a_75 = NULL;
      ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL;
      t = new_0(t);
      {
        a_75 = t;
        {
          if(((r_74 != NULL) && (r_74 != a_75)))
            _fail(a_75);
          else
            r_74 = a_75;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_73), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_74)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  b_75 = t;
                  z_72 :
                  if(match_cons(b_75, sym__6))
                    {
                      c_75 = ATgetArgument(b_75, 0);
                      d_75 = ATgetArgument(b_75, 1);
                      e_75 = ATgetArgument(b_75, 2);
                      f_75 = ATgetArgument(b_75, 3);
                      g_75 = ATgetArgument(b_75, 4);
                      h_75 = ATgetArgument(b_75, 5);
                      {
                        if(((s_74 != NULL) && (s_74 != c_75)))
                          _fail(c_75);
                        else
                          s_74 = c_75;
                        {
                          if(((t_74 != NULL) && (t_74 != d_75)))
                            _fail(d_75);
                          else
                            t_74 = d_75;
                          {
                            if(((u_74 != NULL) && (u_74 != e_75)))
                              _fail(e_75);
                            else
                              u_74 = e_75;
                            {
                              if(((v_74 != NULL) && (v_74 != f_75)))
                                _fail(f_75);
                              else
                                v_74 = f_75;
                              {
                                if(((y_74 != NULL) && (y_74 != g_75)))
                                  _fail(g_75);
                                else
                                  y_74 = g_75;
                                if(((z_74 != NULL) && (z_74 != h_75)))
                                  _fail(h_75);
                                else
                                  z_74 = h_75;
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
      ATerm j_75 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_74), not_null(y_74));
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = conc_two_lists_0(t);
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
            t = conc_more_lists_0(t);
          }
        {
          j_75 = t;
          if(((i_75 != NULL) && (i_75 != j_75)))
            _fail(j_75);
          else
            i_75 = j_75;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(j_73), term_u_15), not_null(t_74), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(i_75)), not_null(r_74)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(j_73), not_null(v_74)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(j_73), not_null(z_74)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_74))))));
    }
    return(t);
  }
  i_73 = t;
  d_73 :
  if(match_cons(i_73, sym__3))
    {
      j_73 = ATgetArgument(i_73, 0);
      k_73 = ATgetArgument(i_73, 1);
      l_73 = ATgetArgument(i_73, 2);
      g_73 :
      if(match_string(k_73, "T"))
        {
          h_73 :
          if(match_int(l_73, 0))
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_75(t);
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = v_15;
                  t = l_75(t);
                }
            }
          else
            {
              t = k_75(t);
            }
        }
      else
        {
          if(match_string(k_73, "D"))
            {
              t = m_75(t);
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
  ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL;
  b_76 = t;
  y_75 :
  if(match_cons(b_76, sym__2))
    {
      c_76 = ATgetArgument(b_76, 0);
      h_76 = ATgetArgument(b_76, 1);
      z_75 :
      if(match_cons(c_76, sym__2))
        {
          d_76 = ATgetArgument(c_76, 0);
          g_76 = ATgetArgument(c_76, 1);
          a_76 :
          if(match_cons(d_76, sym_Mod_2))
            {
              e_76 = ATgetArgument(d_76, 0);
              f_76 = ATgetArgument(d_76, 1);
              {
                ATerm m_76 = NULL;
                ATerm n_76 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_76), not_null(f_76), not_null(g_76));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      n_76 = t;
                      if(((m_76 != NULL) && (m_76 != n_76)))
                        _fail(n_76);
                      else
                        m_76 = n_76;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_76), not_null(h_76));
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
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(h_16);
    }
  else
    {
      t = c_16;
      {
        t = OverloadedDef_0(t);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm p_16 = t;
            int q_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = JoinDefs1_0(t);
                LocalPopChoice(q_16);
              }
            else
              {
                t = p_16;
                t = JoinDefs2_0(t);
              }
            return(t);
          }
          t = _2(t, n_2, _id);
        }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL;
  t_76 = t;
  r_76 :
  if(match_cons(t_76, sym__5))
    {
      u_76 = ATgetArgument(t_76, 0);
      x_76 = ATgetArgument(t_76, 1);
      y_76 = ATgetArgument(t_76, 2);
      z_76 = ATgetArgument(t_76, 3);
      a_77 = ATgetArgument(t_76, 4);
      s_76 :
      if(((ATgetType(u_76) == AT_LIST) && !(ATisEmpty(u_76))))
        {
          v_76 = ATgetFirst((ATermList) u_76);
          w_76 = (ATerm) ATgetNext((ATermList) u_76);
          t = (ATerm) ATmakeAppl(sym__5, not_null(w_76), not_null(x_76), not_null(y_76), not_null(z_76), (ATerm) ATinsert(CheckATermList(not_null(a_77)), not_null(v_76)));
        }
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
ATerm diff_1 (ATerm t, ATerm g_97 (ATerm))
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
            ATerm r_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(s_16);
              }
            else
              {
                t = r_16;
                {
                  ATerm t_16 = t;
                  int y_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = not_null(m_77);
                        return(t);
                      }
                      t = HdMember_p__2(t, g_97, o_2);
                      t = q_77(t);
                      LocalPopChoice(y_16);
                    }
                  else
                    {
                      t = t_16;
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
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL;
  u_77 = t;
  s_77 :
  if(match_cons(u_77, sym__2))
    {
      v_77 = ATgetArgument(u_77, 0);
      w_77 = ATgetArgument(u_77, 1);
      t_77 :
      if(((ATgetType(w_77) == AT_LIST) && !(ATisEmpty(w_77))))
        {
          x_77 = ATgetFirst((ATermList) w_77);
          y_77 = (ATerm) ATgetNext((ATermList) w_77);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_77)), not_null(x_77)), not_null(y_77));
        }
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
  ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL;
  f_78 = t;
  e_78 :
  if(match_cons(f_78, sym__2))
    {
      g_78 = ATgetArgument(f_78, 0);
      h_78 = ATgetArgument(f_78, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_78)), not_null(g_78));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL;
  p_78 = t;
  m_78 :
  if(match_cons(p_78, sym__2))
    {
      q_78 = ATgetArgument(p_78, 0);
      t_78 = ATgetArgument(p_78, 1);
      n_78 :
      if(((ATgetType(q_78) == AT_LIST) && !(ATisEmpty(q_78))))
        {
          r_78 = ATgetFirst((ATermList) q_78);
          s_78 = (ATerm) ATgetNext((ATermList) q_78);
          o_78 :
          if(((ATgetType(t_78) == AT_LIST) && !(ATisEmpty(t_78))))
            {
              u_78 = ATgetFirst((ATermList) t_78);
              v_78 = (ATerm) ATgetNext((ATermList) t_78);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_78), not_null(u_78)), (ATerm) ATmakeAppl(sym__2, not_null(s_78), not_null(v_78)));
            }
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
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL;
  f_79 = t;
  c_79 :
  if(match_cons(f_79, sym__2))
    {
      g_79 = ATgetArgument(f_79, 0);
      h_79 = ATgetArgument(f_79, 1);
      d_79 :
      if(((ATgetType(g_79) == AT_LIST) && ATisEmpty(g_79)))
        {
          e_79 :
          if(((ATgetType(h_79) == AT_LIST) && ATisEmpty(h_79)))
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
ATerm genzip_4 (ATerm t, ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm s_88 (ATerm))
{
  ATerm j_79 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_88(t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        {
          t = q_88(t);
          {
            t = _2(t, s_88, j_79);
            t = r_88(t);
          }
        }
      }
    return(t);
  }
  t = j_79(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm u_88 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, u_88);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
  w_79 = t;
  u_79 :
  if(((ATgetType(w_79) == AT_LIST) && !(ATisEmpty(w_79))))
    {
      x_79 = ATgetFirst((ATermList) w_79);
      a_80 = (ATerm) ATgetNext((ATermList) w_79);
      v_79 :
      if(match_cons(x_79, sym__2))
        {
          y_79 = ATgetArgument(x_79, 0);
          z_79 = ATgetArgument(x_79, 1);
          {
            ATerm h_80 = NULL,i_80 = NULL,q_80 = NULL,y_80 = NULL;
            ATerm i_17;
            i_17 = t;
            {
              ATerm j_80 = NULL;
              ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL;
              t = not_null(z_79);
              {
                j_80 = t;
                {
                  t = SSL_explode_term(not_null(j_80));
                  {
                    l_80 = t;
                    n_79 :
                    if(match_cons(l_80, sym__2))
                      {
                        m_80 = ATgetArgument(l_80, 0);
                        n_80 = ATgetArgument(l_80, 1);
                        {
                          if(((h_80 != NULL) && (h_80 != m_80)))
                            _fail(m_80);
                          else
                            h_80 = m_80;
                          if(((i_80 != NULL) && (i_80 != n_80)))
                            _fail(n_80);
                          else
                            i_80 = n_80;
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
            t = i_17;
            {
              ATerm j_17;
              j_17 = t;
              {
                ATerm r_80 = NULL;
                ATerm t_80 = NULL,w_80 = NULL,x_80 = NULL;
                t = not_null(y_79);
                {
                  r_80 = t;
                  {
                    t = SSL_explode_term(not_null(r_80));
                    {
                      t_80 = t;
                      s_79 :
                      if(match_cons(t_80, sym__2))
                        {
                          w_80 = ATgetArgument(t_80, 0);
                          x_80 = ATgetArgument(t_80, 1);
                          {
                            if(((h_80 != NULL) && (h_80 != w_80)))
                              _fail(w_80);
                            else
                              h_80 = w_80;
                            if(((q_80 != NULL) && (q_80 != x_80)))
                              _fail(x_80);
                            else
                              q_80 = x_80;
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
                ATerm z_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_80), not_null(i_80));
                {
                  t = zip_1(t, _id);
                  {
                    z_80 = t;
                    if(((y_80 != NULL) && (y_80 != z_80)))
                      _fail(z_80);
                    else
                      y_80 = z_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_80), not_null(a_80));
                  {
                    ATerm k_17 = t;
                    int s_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(s_17);
                      }
                    else
                      {
                        t = k_17;
                        t = conc_more_lists_0(t);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL;
  j_81 = t;
  h_81 :
  if(((ATgetType(j_81) == AT_LIST) && !(ATisEmpty(j_81))))
    {
      k_81 = ATgetFirst((ATermList) j_81);
      n_81 = (ATerm) ATgetNext((ATermList) j_81);
      i_81 :
      if(match_cons(k_81, sym__2))
        {
          l_81 = ATgetArgument(k_81, 0);
          m_81 = ATgetArgument(k_81, 1);
          {
            ATerm p_81 = NULL;
            if(((l_81 != NULL) && (l_81 != m_81)))
              _fail(m_81);
            else
              l_81 = m_81;
            {
              if(((p_81 != NULL) && (p_81 != n_81)))
                _fail(n_81);
              else
                p_81 = n_81;
              t = not_null(p_81);
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
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        ATerm s_81 = NULL;
        s_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(s_81));
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        ATerm v_17 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
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
            t = _2(t, _id, s_2);
            LocalPopChoice(g_18);
          }
        else
          {
            t = v_17;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, p_2, q_2, r_2);
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm))
{
  ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL;
  f_82 = t;
  d_82 :
  if(match_cons(f_82, sym__5))
    {
      g_82 = ATgetArgument(f_82, 0);
      j_82 = ATgetArgument(f_82, 1);
      k_82 = ATgetArgument(f_82, 2);
      l_82 = ATgetArgument(f_82, 3);
      m_82 = ATgetArgument(f_82, 4);
      e_82 :
      if(((ATgetType(g_82) == AT_LIST) && !(ATisEmpty(g_82))))
        {
          h_82 = ATgetFirst((ATermList) g_82);
          i_82 = (ATerm) ATgetNext((ATermList) g_82);
          {
            ATerm t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL,i_83 = NULL,k_83 = NULL,m_83 = NULL;
            ATerm k_18;
            k_18 = t;
            {
              ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_82), not_null(k_82));
              {
                t = b_109(t);
                {
                  x_82 = t;
                  z_81 :
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
                              ATerm e_83 = NULL;
                              t = c_109(t);
                              {
                                a_83 = t;
                                {
                                  if(((v_82 != NULL) && (v_82 != a_83)))
                                    _fail(a_83);
                                  else
                                    v_82 = a_83;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_82), not_null(j_82));
                                    {
                                      t = diff_0(t);
                                      {
                                        e_83 = t;
                                        if(((w_82 != NULL) && (w_82 != e_83)))
                                          _fail(e_83);
                                        else
                                          w_82 = e_83;
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
            t = k_18;
            {
              ATerm l_18;
              l_18 = t;
              {
                ATerm j_83 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_82), not_null(i_82));
                {
                  ATerm m_18 = t;
                  int o_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = conc_two_lists_0(t);
                      LocalPopChoice(o_18);
                    }
                  else
                    {
                      t = m_18;
                      t = conc_more_lists_0(t);
                    }
                  {
                    j_83 = t;
                    if(((i_83 != NULL) && (i_83 != j_83)))
                      _fail(j_83);
                    else
                      i_83 = j_83;
                  }
                }
              }
              t = l_18;
              {
                ATerm t_18;
                t_18 = t;
                {
                  ATerm l_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_82), not_null(j_82));
                  {
                    ATerm u_18 = t;
                    int v_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(v_18);
                      }
                    else
                      {
                        t = u_18;
                        t = conc_more_lists_0(t);
                      }
                    {
                      l_83 = t;
                      if(((k_83 != NULL) && (k_83 != l_83)))
                        _fail(l_83);
                      else
                        k_83 = l_83;
                    }
                  }
                }
                t = t_18;
                {
                  ATerm n_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(h_82), not_null(u_82), not_null(l_82));
                  {
                    t = d_109(t);
                    {
                      n_83 = t;
                      if(((m_83 != NULL) && (m_83 != n_83)))
                        _fail(n_83);
                      else
                        m_83 = n_83;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(i_83), not_null(k_83), not_null(t_82), not_null(m_83), not_null(m_82));
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
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL;
  b_84 = t;
  z_83 :
  if(match_cons(b_84, sym__5))
    {
      c_84 = ATgetArgument(b_84, 0);
      d_84 = ATgetArgument(b_84, 1);
      e_84 = ATgetArgument(b_84, 2);
      f_84 = ATgetArgument(b_84, 3);
      g_84 = ATgetArgument(b_84, 4);
      a_84 :
      if(((ATgetType(c_84) == AT_LIST) && ATisEmpty(c_84)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_84), not_null(g_84));
        }
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
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL;
  o_84 = t;
  n_84 :
  if(match_cons(o_84, sym__3))
    {
      p_84 = ATgetArgument(o_84, 0);
      q_84 = ATgetArgument(o_84, 1);
      r_84 = ATgetArgument(o_84, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(p_84), not_null(p_84), not_null(q_84), not_null(r_84), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm z_94 (ATerm), ATerm a_95 (ATerm))
{
  ATerm w_84 (ATerm t)
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_94(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        {
          t = a_95(t);
          t = w_84(t);
        }
      }
    return(t);
  }
  t = w_84(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm e_95 (ATerm))
{
  t = c_95(t);
  t = while_not_2(t, d_95, e_95);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm z_18 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, m_108, n_108, o_108);
        LocalPopChoice(f_19);
      }
    else
      {
        t = z_18;
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
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefinitionExists_0(t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
            }
          }
        return(t);
      }
      t = map_1(t, w_2);
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
    z_84 = t;
    y_84 :
    if(match_cons(z_84, sym__3))
      {
        a_85 = ATgetArgument(z_84, 0);
        b_85 = ATgetArgument(z_84, 1);
        c_85 = ATgetArgument(z_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(c_85)), not_null(b_85));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, u_2, v_2);
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        {
          t = MissingDefs_0(t);
          {
            t = term_j_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_109 (ATerm))
{
  ATerm l_85 = NULL,o_85 = NULL,p_85 = NULL;
  l_85 = t;
  k_85 :
  if(match_cons(l_85, sym__2))
    {
      o_85 = ATgetArgument(l_85, 0);
      p_85 = ATgetArgument(l_85, 1);
      {
        ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL;
        ATerm l_19;
        l_19 = t;
        {
          ATerm v_85 = NULL;
          ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL;
          t = k_109(t);
          {
            v_85 = t;
            {
              if(((s_85 != NULL) && (s_85 != v_85)))
                _fail(v_85);
              else
                s_85 = v_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_85), not_null(o_85), not_null(p_85));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_19 = t;
                    int p_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_85), term_q_19);
                        t = table_get_0(t);
                        LocalPopChoice(p_19);
                      }
                    else
                      {
                        t = o_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      w_85 = t;
                      j_85 :
                      if(((ATgetType(w_85) == AT_LIST) && !(ATisEmpty(w_85))))
                        {
                          x_85 = ATgetFirst((ATermList) w_85);
                          y_85 = (ATerm) ATgetNext((ATermList) w_85);
                          {
                            if(((t_85 != NULL) && (t_85 != x_85)))
                              _fail(x_85);
                            else
                              t_85 = x_85;
                            {
                              if(((u_85 != NULL) && (u_85 != y_85)))
                                _fail(y_85);
                              else
                                u_85 = y_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(s_85), term_q_19, (ATerm) ATinsert(CheckATermList(not_null(u_85)), (ATerm) ATinsert(CheckATermList(not_null(t_85)), not_null(o_85))));
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
        t = l_19;
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
  ATerm i_86 = NULL;
  ATerm l_86 = NULL;
  i_86 = t;
  {
    ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL;
    t = not_null(i_86);
    {
      ATerm x_2 (ATerm t)
      {
        t = term_r_19;
        return(t);
      }
      t = rewrite_1(t, x_2);
      {
        m_86 = t;
        g_86 :
        if(match_cons(m_86, sym_Defined_2))
          {
            n_86 = ATgetArgument(m_86, 0);
            o_86 = ATgetArgument(m_86, 1);
            h_86 :
            if(match_string(n_86, "f_0"))
              {
                if(((l_86 != NULL) && (l_86 != o_86)))
                  _fail(o_86);
                else
                  l_86 = o_86;
              }
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
    t = not_null(l_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL;
  t_86 = t;
  s_86 :
  if(((ATgetType(t_86) == AT_LIST) && !(ATisEmpty(t_86))))
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
  ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL;
  c_87 = t;
  b_87 :
  if(match_cons(c_87, sym__2))
    {
      d_87 = ATgetArgument(c_87, 0);
      e_87 = ATgetArgument(c_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_87), not_null(e_87));
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
ATerm rewrite_1 (ATerm t, ATerm m_109 (ATerm))
{
  ATerm k_87 = NULL;
  ATerm m_87 = NULL;
  k_87 = t;
  {
    ATerm n_87 = NULL;
    t = term_i_15;
    {
      t = m_109(t);
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
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL;
  x_87 = t;
  w_87 :
  if(match_cons(x_87, sym__2))
    {
      y_87 = ATgetArgument(x_87, 0);
      z_87 = ATgetArgument(x_87, 1);
      {
        ATerm d_88 = NULL,e_88 = NULL;
        ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL;
        t = not_null(x_87);
        {
          ATerm y_2 (ATerm t)
          {
            t = term_w_19;
            return(t);
          }
          t = rewrite_1(t, y_2);
          {
            h_88 = t;
            u_87 :
            if(match_cons(h_88, sym_Defined_3))
              {
                i_88 = ATgetArgument(h_88, 0);
                j_88 = ATgetArgument(h_88, 1);
                k_88 = ATgetArgument(h_88, 2);
                v_87 :
                if(match_string(i_88, "b_0"))
                  {
                    if(((d_88 != NULL) && (d_88 != j_88)))
                      _fail(j_88);
                    else
                      d_88 = j_88;
                    if(((e_88 != NULL) && (e_88 != k_88)))
                      _fail(k_88);
                    else
                      e_88 = k_88;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(e_88)), not_null(d_88));
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
    ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL;
    b_89 = t;
    a_89 :
    if(match_cons(b_89, sym_SDef_3))
      {
        c_89 = ATgetArgument(b_89, 0);
        d_89 = ATgetArgument(b_89, 1);
        e_89 = ATgetArgument(b_89, 2);
        {
          ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL;
          ATerm x_19;
          x_19 = t;
          {
            ATerm m_89 = NULL;
            t = not_null(d_89);
            {
              ATerm n_89 = NULL;
              t = length_0(t);
              {
                m_89 = t;
                {
                  if(((k_89 != NULL) && (k_89 != m_89)))
                    _fail(m_89);
                  else
                    k_89 = m_89;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_89), not_null(k_89));
                    {
                      ATerm o_89 = NULL,q_89 = NULL;
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
                        n_89 = t;
                        {
                          if(((j_89 != NULL) && (j_89 != n_89)))
                            _fail(n_89);
                          else
                            j_89 = n_89;
                          {
                            ATerm p_89 = NULL;
                            t = not_null(c_89);
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
                                p_89 = t;
                                if(((o_89 != NULL) && (o_89 != p_89)))
                                  _fail(p_89);
                                else
                                  o_89 = p_89;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(k_89)), not_null(o_89));
                              {
                                t = union_1(t, eq_0);
                                {
                                  q_89 = t;
                                  {
                                    if(((l_89 != NULL) && (l_89 != q_89)))
                                      _fail(q_89);
                                    else
                                      l_89 = q_89;
                                    {
                                      ATerm c_20;
                                      c_20 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(c_89), not_null(k_89)), (ATerm) ATmakeAppl(sym_Defined_3, term_d_20, not_null(b_89), not_null(j_89)));
                                        {
                                          ATerm a_3 (ATerm t)
                                          {
                                            t = term_w_19;
                                            return(t);
                                          }
                                          t = assert_1(t, a_3);
                                        }
                                      }
                                      t = c_20;
                                      {
                                        ATerm i_20;
                                        i_20 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_89), (ATerm) ATmakeAppl(sym_Defined_2, term_j_20, not_null(l_89)));
                                          {
                                            ATerm b_3 (ATerm t)
                                            {
                                              t = term_r_19;
                                              return(t);
                                            }
                                            t = assert_1(t, b_3);
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
          t = x_19;
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
  ATerm c_3 (ATerm t)
  {
    t = term_k_20;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_j_6;
    return(t);
  }
  t = foldr_3(t, c_3, add_0, d_3);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL;
  z_89 = t;
  x_89 :
  if(match_cons(z_89, sym__2))
    {
      a_90 = ATgetArgument(z_89, 0);
      b_90 = ATgetArgument(z_89, 1);
      if(((a_90 != NULL) && (a_90 != b_90)))
        _fail(b_90);
      else
        a_90 = b_90;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm o_97 (ATerm), ATerm p_97 (ATerm))
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  g_90 :
  if(((ATgetType(h_90) == AT_LIST) && !(ATisEmpty(h_90))))
    {
      i_90 = ATgetFirst((ATermList) h_90);
      j_90 = (ATerm) ATgetNext((ATermList) h_90);
      {
        t = p_97(t);
        {
          ATerm e_3 (ATerm t)
          {
            ATerm m_90 = NULL;
            m_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_90), not_null(m_90));
              t = o_97(t);
            }
            return(t);
          }
          t = fetch_1(t, e_3);
        }
        t = not_null(j_90);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm k_97 (ATerm))
{
  ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL;
  s_90 = t;
  r_90 :
  if(match_cons(s_90, sym__2))
    {
      t_90 = ATgetArgument(s_90, 0);
      u_90 = ATgetArgument(s_90, 1);
      {
        t = not_null(t_90);
        {
          ATerm y_90 (ATerm t)
          {
            ATerm o_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_90);
                LocalPopChoice(q_20);
              }
            else
              {
                t = o_20;
                {
                  ATerm t_20 = t;
                  int u_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_3 (ATerm t)
                      {
                        t = not_null(u_90);
                        return(t);
                      }
                      t = HdMember_p__2(t, k_97, f_3);
                      t = y_90(t);
                      LocalPopChoice(u_20);
                    }
                  else
                    {
                      t = t_20;
                      t = Cons_2(t, _id, y_90);
                    }
                }
              }
            return(t);
          }
          t = y_90(t);
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
ATerm foldr_3 (ATerm t, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm))
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_97(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL;
        d_91 = t;
        c_91 :
        if(((ATgetType(d_91) == AT_LIST) && !(ATisEmpty(d_91))))
          {
            e_91 = ATgetFirst((ATermList) d_91);
            f_91 = (ATerm) ATgetNext((ATermList) d_91);
            {
              ATerm i_91 = NULL,k_91 = NULL;
              ATerm x_20;
              x_20 = t;
              {
                ATerm j_91 = NULL;
                t = not_null(e_91);
                {
                  t = z_97(t);
                  {
                    j_91 = t;
                    if(((i_91 != NULL) && (i_91 != j_91)))
                      _fail(j_91);
                    else
                      i_91 = j_91;
                  }
                }
              }
              t = x_20;
              {
                ATerm l_91 = NULL;
                t = not_null(f_91);
                {
                  t = foldr_3(t, x_97, y_97, z_97);
                  {
                    l_91 = t;
                    if(((k_91 != NULL) && (k_91 != l_91)))
                      _fail(l_91);
                    else
                      k_91 = l_91;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_91), not_null(k_91));
                  t = y_97(t);
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
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = union_1(t, eq_0);
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL;
    s_91 = t;
    r_91 :
    if(match_cons(s_91, sym_SDef_3))
      {
        t_91 = ATgetArgument(s_91, 0);
        u_91 = ATgetArgument(s_91, 1);
        v_91 = ATgetArgument(s_91, 2);
        {
          ATerm y_91 = NULL;
          ATerm z_91 = NULL;
          t = not_null(u_91);
          {
            t = length_0(t);
            {
              z_91 = t;
              if(((y_91 != NULL) && (y_91 != z_91)))
                _fail(z_91);
              else
                y_91 = z_91;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(t_91), not_null(y_91)));
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = foldr_3(t, g_3, j_3, k_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm e_92 = NULL,g_92 = NULL;
  ATerm y_20;
  y_20 = t;
  {
    ATerm f_92 = NULL;
    t = definition_names_0(t);
    {
      f_92 = t;
      if(((e_92 != NULL) && (e_92 != f_92)))
        _fail(f_92);
      else
        e_92 = f_92;
    }
  }
  t = y_20;
  {
    ATerm h_92 = NULL;
    t = sort_defs_0(t);
    {
      h_92 = t;
      if(((g_92 != NULL) && (g_92 != h_92)))
        _fail(h_92);
      else
        g_92 = h_92;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(e_92), not_null(g_92), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm u_92 = NULL,v_92 = NULL;
  u_92 = t;
  t_92 :
  if(match_cons(u_92, sym_Strategies_1))
    {
      v_92 = ATgetArgument(u_92, 0);
      {
        ATerm y_92 = NULL,a_93 = NULL;
        ATerm z_92 = NULL;
        t = SSLgetAnnotations(not_null(u_92));
        {
          z_92 = t;
          if(((y_92 != NULL) && (y_92 != z_92)))
            _fail(z_92);
          else
            y_92 = z_92;
        }
        {
          t = not_null(v_92);
          {
            ATerm c_93 = NULL;
            t = t_71(t);
            {
              a_93 = t;
              {
                ATerm d_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(a_93)), not_null(y_92));
                {
                  d_93 = t;
                  if(((c_93 != NULL) && (c_93 != d_93)))
                    _fail(d_93);
                  else
                    c_93 = d_93;
                }
                t = not_null(c_93);
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
ATerm Cons_2 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  ATerm o_93 = NULL,p_93 = NULL,q_93 = NULL;
  o_93 = t;
  n_93 :
  if(((ATgetType(o_93) == AT_LIST) && !(ATisEmpty(o_93))))
    {
      p_93 = ATgetFirst((ATermList) o_93);
      q_93 = (ATerm) ATgetNext((ATermList) o_93);
      {
        ATerm u_93 = NULL,w_93 = NULL;
        ATerm v_93 = NULL;
        t = SSLgetAnnotations(not_null(o_93));
        {
          v_93 = t;
          if(((u_93 != NULL) && (u_93 != v_93)))
            _fail(v_93);
          else
            u_93 = v_93;
        }
        {
          t = not_null(p_93);
          {
            ATerm y_93 = NULL;
            t = i_69(t);
            {
              w_93 = t;
              {
                t = not_null(q_93);
                {
                  ATerm a_94 = NULL;
                  t = j_69(t);
                  {
                    y_93 = t;
                    {
                      ATerm b_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_93)), not_null(w_93)), not_null(u_93));
                      {
                        b_94 = t;
                        if(((a_94 != NULL) && (a_94 != b_94)))
                          _fail(b_94);
                        else
                          a_94 = b_94;
                      }
                      t = not_null(a_94);
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
ATerm Specification_1 (ATerm t, ATerm v_71 (ATerm))
{
  ATerm q_94 = NULL,r_94 = NULL;
  q_94 = t;
  p_94 :
  if(match_cons(q_94, sym_Specification_1))
    {
      r_94 = ATgetArgument(q_94, 0);
      {
        ATerm u_94 = NULL,w_94 = NULL;
        ATerm v_94 = NULL;
        t = SSLgetAnnotations(not_null(q_94));
        {
          v_94 = t;
          if(((u_94 != NULL) && (u_94 != v_94)))
            _fail(v_94);
          else
            u_94 = v_94;
        }
        {
          t = not_null(r_94);
          {
            ATerm y_94 = NULL;
            t = v_71(t);
            {
              w_94 = t;
              {
                ATerm f_95 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(w_94)), not_null(u_94));
                {
                  f_95 = t;
                  if(((y_94 != NULL) && (y_94 != f_95)))
                    _fail(f_95);
                  else
                    y_94 = f_95;
                }
                t = not_null(y_94);
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
ATerm _2 (ATerm t, ATerm z_67 (ATerm), ATerm a_68 (ATerm))
{
  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL;
  q_95 = t;
  p_95 :
  if(match_cons(q_95, sym__2))
    {
      r_95 = ATgetArgument(q_95, 0);
      s_95 = ATgetArgument(q_95, 1);
      {
        ATerm w_95 = NULL,y_95 = NULL;
        ATerm x_95 = NULL;
        t = SSLgetAnnotations(not_null(q_95));
        {
          x_95 = t;
          if(((w_95 != NULL) && (w_95 != x_95)))
            _fail(x_95);
          else
            w_95 = x_95;
        }
        {
          t = not_null(r_95);
          {
            ATerm a_96 = NULL;
            t = z_67(t);
            {
              y_95 = t;
              {
                t = not_null(s_95);
                {
                  ATerm c_96 = NULL;
                  t = a_68(t);
                  {
                    a_96 = t;
                    {
                      ATerm d_96 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_95), not_null(a_96)), not_null(w_95));
                      {
                        d_96 = t;
                        if(((c_96 != NULL) && (c_96 != d_96)))
                          _fail(d_96);
                        else
                          c_96 = d_96;
                      }
                      t = not_null(c_96);
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
  ATerm l_96 = NULL;
  ATerm z_20;
  z_20 = t;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm m_96 = NULL,n_96 = NULL;
      m_96 = t;
      k_96 :
      if(match_cons(m_96, sym_Program_1))
        {
          n_96 = ATgetArgument(m_96, 0);
          if(((l_96 != NULL) && (l_96 != n_96)))
            _fail(n_96);
          else
            l_96 = n_96;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, l_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_21), not_null(l_96)), term_a_21));
      {
        t = printnl_0(t);
        {
          t = term_j_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL;
  r_96 = t;
  q_96 :
  if(match_cons(r_96, sym__2))
    {
      s_96 = ATgetArgument(r_96, 0);
      t_96 = ATgetArgument(r_96, 1);
      {
        ATerm d_21;
        d_21 = t;
        t = SSL_printnl(not_null(s_96), not_null(t_96));
        t = d_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_96 = NULL;
  y_96 = t;
  t = SSL_implode_string(not_null(y_96));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_21);
    }
  else
    {
      t = e_21;
      {
        ATerm m_97 = NULL,n_97 = NULL,q_97 = NULL;
        m_97 = t;
        j_97 :
        if(((ATgetType(m_97) == AT_LIST) && !(ATisEmpty(m_97))))
          {
            n_97 = ATgetFirst((ATermList) m_97);
            q_97 = (ATerm) ATgetNext((ATermList) m_97);
            {
              t = not_null(n_97);
              {
                ATerm m_3 (ATerm t)
                {
                  t = not_null(q_97);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, m_3);
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
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm f_98 = NULL;
  ATerm h_98 = NULL;
  f_98 = t;
  {
    ATerm i_98 = NULL;
    ATerm m_98 = NULL,n_98 = NULL,o_98 = NULL;
    t = not_null(f_98);
    {
      i_98 = t;
      {
        t = SSL_explode_term(not_null(i_98));
        {
          m_98 = t;
          d_98 :
          if(match_cons(m_98, sym__2))
            {
              n_98 = ATgetArgument(m_98, 0);
              o_98 = ATgetArgument(m_98, 1);
              e_98 :
              if(match_string(n_98, ""))
                {
                  if(((h_98 != NULL) && (h_98 != o_98)))
                    _fail(o_98);
                  else
                    h_98 = o_98;
                }
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
      t = not_null(h_98);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_80 (ATerm))
{
  ATerm s_98 (ATerm t)
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_98);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        {
          t = Nil_0(t);
          t = u_80(t);
        }
      }
    return(t);
  }
  t = s_98(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_98 = NULL,w_98 = NULL,x_98 = NULL;
  v_98 = t;
  u_98 :
  if(match_cons(v_98, sym__2))
    {
      w_98 = ATgetArgument(v_98, 0);
      x_98 = ATgetArgument(v_98, 1);
      {
        t = not_null(w_98);
        {
          ATerm n_3 (ATerm t)
          {
            t = not_null(x_98);
            return(t);
          }
          t = at_end_1(t, n_3);
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
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_99 = NULL;
  c_99 = t;
  t = SSL_explode_string(not_null(c_99));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_101 (ATerm))
{
  ATerm d_22;
  d_22 = t;
  {
    ATerm h_99 = NULL,j_99 = NULL;
    ATerm e_22;
    e_22 = t;
    {
      ATerm i_99 = NULL;
      t = o_101(t);
      {
        i_99 = t;
        if(((h_99 != NULL) && (h_99 != i_99)))
          _fail(i_99);
        else
          h_99 = i_99;
      }
    }
    t = e_22;
    {
      ATerm k_99 = NULL;
      k_99 = t;
      if(((j_99 != NULL) && (j_99 != k_99)))
        _fail(k_99);
      else
        j_99 = k_99;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_99)), not_null(h_99)));
        t = printnl_0(t);
      }
    }
  }
  t = d_22;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_99 = NULL;
  o_99 = t;
  t = SSL_is_string(not_null(o_99));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm q_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_3 (ATerm t)
            {
              ATerm w_22 = t;
              int x_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(x_22);
                }
              else
                {
                  t = w_22;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, o_3);
            LocalPopChoice(v_22);
          }
        else
          {
            t = q_22;
            {
              ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL;
              x_99 = t;
              w_99 :
              if(match_cons(x_99, sym_Path_1))
                {
                  y_99 = ATgetArgument(x_99, 0);
                  t = not_null(y_99);
                }
              else
                {
                  if(match_cons(x_99, sym_Var_1))
                    {
                      y_99 = ATgetArgument(x_99, 0);
                      {
                        t = not_null(y_99);
                        {
                          ATerm y_22 = t;
                          int z_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(z_22);
                            }
                          else
                            {
                              t = y_22;
                              {
                                ATerm p_3 (ATerm t)
                                {
                                  t = term_a_23;
                                  return(t);
                                }
                                t = debug_1(t, p_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(x_99, sym_Prefix_2))
                        {
                          y_99 = ATgetArgument(x_99, 0);
                          z_99 = ATgetArgument(x_99, 1);
                          {
                            ATerm e_100 = NULL,g_100 = NULL;
                            ATerm b_23;
                            b_23 = t;
                            {
                              ATerm f_100 = NULL;
                              t = not_null(y_99);
                              {
                                t = eval_config_0(t);
                                {
                                  f_100 = t;
                                  if(((e_100 != NULL) && (e_100 != f_100)))
                                    _fail(f_100);
                                  else
                                    e_100 = f_100;
                                }
                              }
                            }
                            t = b_23;
                            {
                              ATerm h_100 = NULL;
                              t = not_null(z_99);
                              {
                                t = eval_config_0(t);
                                {
                                  h_100 = t;
                                  if(((g_100 != NULL) && (g_100 != h_100)))
                                    _fail(h_100);
                                  else
                                    g_100 = h_100;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_100), not_null(g_100));
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
  ATerm p_100 = NULL;
  p_100 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_23, not_null(p_100));
    {
      t = table_get_0(t);
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm k_23;
              k_23 = t;
              {
                ATerm r_100 = NULL;
                ATerm s_100 = NULL;
                s_100 = t;
                if(((r_100 != NULL) && (r_100 != s_100)))
                  _fail(s_100);
                else
                  r_100 = s_100;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_c_23, not_null(p_100), not_null(r_100));
                  t = table_put_0(t);
                }
              }
              t = k_23;
            }
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_104 (ATerm))
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_23;
      n_23 = t;
      {
        ATerm w_100 = NULL;
        ATerm x_100 = NULL;
        t = term_v_23;
        {
          t = get_config_0(t);
          {
            x_100 = t;
            if(((w_100 != NULL) && (w_100 != x_100)))
              _fail(x_100);
            else
              w_100 = x_100;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_100), term_w_23);
          t = geq_0(t);
        }
      }
      t = n_23;
      t = l_104(t);
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm b_101 = NULL,c_101 = NULL,d_101 = NULL;
  b_101 = t;
  a_101 :
  if(match_cons(b_101, sym__2))
    {
      c_101 = ATgetArgument(b_101, 0);
      d_101 = ATgetArgument(b_101, 1);
      t = SSL_WriteToTextFile(not_null(c_101), not_null(d_101));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_101 = NULL,k_101 = NULL,l_101 = NULL;
  j_101 = t;
  i_101 :
  if(match_cons(j_101, sym__2))
    {
      k_101 = ATgetArgument(j_101, 0);
      l_101 = ATgetArgument(j_101, 1);
      t = SSL_WriteToBinaryFile(not_null(k_101), not_null(l_101));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_101 = NULL;
  ATerm x_23;
  x_23 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm w_101 = NULL,x_101 = NULL;
            w_101 = t;
            s_101 :
            if(match_cons(w_101, sym_Output_1))
              {
                x_101 = ATgetArgument(w_101, 0);
                if(((v_101 != NULL) && (v_101 != x_101)))
                  _fail(x_101);
                else
                  v_101 = x_101;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, r_3);
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          {
            ATerm y_101 = NULL;
            t = term_c_24;
            {
              y_101 = t;
              if(((v_101 != NULL) && (v_101 != y_101)))
                _fail(y_101);
              else
                v_101 = y_101;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_3, _id);
  }
  t = x_23;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(v_101);
        return(t);
      }
      t = split_2(t, t_3, _id);
      return(t);
    }
    t = _2(t, _id, s_3);
    {
      ATerm d_24 = t;
      int e_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_3 (ATerm t)
          {
            ATerm v_3 (ATerm t)
            {
              ATerm z_101 = NULL;
              z_101 = t;
              u_101 :
              if(!(match_cons(z_101, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, v_3);
            return(t);
          }
          t = _2(t, u_3, WriteToBinaryFile_0);
          LocalPopChoice(e_24);
        }
      else
        {
          t = d_24;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_102 (ATerm))
{
  ATerm f_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL;
  ATerm f_24;
  f_24 = t;
  t = dtime_0(t);
  t = f_24;
  {
    t = s_102(t);
    {
      ATerm g_24;
      g_24 = t;
      {
        ATerm g_102 = NULL;
        t = dtime_0(t);
        {
          g_102 = t;
          if(((f_102 != NULL) && (f_102 != g_102)))
            _fail(g_102);
          else
            f_102 = g_102;
        }
      }
      t = g_24;
      {
        h_102 = t;
        e_102 :
        if(match_cons(h_102, sym__2))
          {
            i_102 = ATgetArgument(h_102, 0);
            j_102 = ATgetArgument(h_102, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_102)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_102))), not_null(j_102));
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
  ATerm p_102 = NULL;
  p_102 = t;
  t = SSL_ReadFromFile(not_null(p_102));
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_87 (ATerm), ATerm q_87 (ATerm))
{
  ATerm a_103 = NULL,d_103 = NULL;
  ATerm h_24;
  h_24 = t;
  {
    ATerm b_103 = NULL;
    t = p_87(t);
    {
      b_103 = t;
      if(((a_103 != NULL) && (a_103 != b_103)))
        _fail(b_103);
      else
        a_103 = b_103;
    }
  }
  t = h_24;
  {
    ATerm e_103 = NULL;
    t = q_87(t);
    {
      e_103 = t;
      if(((d_103 != NULL) && (d_103 != e_103)))
        _fail(e_103);
      else
        d_103 = e_103;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_103), not_null(d_103));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm t_103 = NULL;
  ATerm i_24;
  i_24 = t;
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm u_103 = NULL,v_103 = NULL;
          u_103 = t;
          r_103 :
          if(match_cons(u_103, sym_Input_1))
            {
              v_103 = ATgetArgument(u_103, 0);
              if(((t_103 != NULL) && (t_103 != v_103)))
                _fail(v_103);
              else
                t_103 = v_103;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, w_3);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        {
          ATerm w_103 = NULL;
          t = term_m_24;
          {
            w_103 = t;
            if(((t_103 != NULL) && (t_103 != w_103)))
              _fail(w_103);
            else
              t_103 = w_103;
          }
        }
      }
  }
  t = i_24;
  {
    ATerm x_3 (ATerm t)
    {
      t = not_null(t_103);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_3);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_104 = NULL;
  a_104 = t;
  t = SSL_string_to_int(not_null(a_104));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm i_104 = NULL,j_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL;
  i_104 = t;
  g_104 :
  if(match_string(i_104, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(i_104) == AT_LIST) && !(ATisEmpty(i_104))))
        {
          j_104 = ATgetFirst((ATermList) i_104);
          m_104 = (ATerm) ATgetNext((ATermList) i_104);
          h_104 :
          if(((ATgetType(m_104) == AT_LIST) && !(ATisEmpty(m_104))))
            {
              n_104 = ATgetFirst((ATermList) m_104);
              o_104 = (ATerm) ATgetNext((ATermList) m_104);
              {
                ATerm s_104 = NULL;
                ATerm n_24;
                n_24 = t;
                {
                  t = not_null(j_104);
                  t = l_0(t);
                }
                t = n_24;
                {
                  ATerm t_104 = NULL;
                  t = not_null(n_104);
                  {
                    t = n_0(t);
                    {
                      t_104 = t;
                      if(((s_104 != NULL) && (s_104 != t_104)))
                        _fail(t_104);
                      else
                        s_104 = t_104;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_104)), not_null(s_104));
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
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_3 (ATerm t)
      {
        ATerm m_105 = NULL;
        m_105 = t;
        x_104 :
        if(!(match_string(m_105, "-i")))
          {
            if(!(match_string(m_105, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        ATerm q_105 = NULL;
        ATerm r_24;
        r_24 = t;
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
        t = r_24;
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
      ATerm a_4 (ATerm t)
      {
        t = term_x_24;
        return(t);
      }
      t = ArgOption_3(t, y_3, z_3, a_4);
      LocalPopChoice(p_24);
    }
  else
    {
      t = o_24;
      {
        ATerm g_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_4 (ATerm t)
            {
              ATerm s_105 = NULL;
              s_105 = t;
              a_105 :
              if(!(match_string(s_105, "-o")))
                {
                  if(!(match_string(s_105, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              ATerm v_105 = NULL;
              ATerm c_26;
              c_26 = t;
              {
                ATerm t_105 = NULL;
                ATerm u_105 = NULL;
                u_105 = t;
                if(((t_105 != NULL) && (t_105 != u_105)))
                  _fail(u_105);
                else
                  t_105 = u_105;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_26, not_null(t_105));
                  t = set_config_0(t);
                }
              }
              t = c_26;
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
            ATerm d_4 (ATerm t)
            {
              t = term_e_26;
              return(t);
            }
            t = ArgOption_3(t, b_4, c_4, d_4);
            LocalPopChoice(q_25);
          }
        else
          {
            t = g_25;
            {
              ATerm f_26 = t;
              int g_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_4 (ATerm t)
                  {
                    ATerm x_105 = NULL;
                    x_105 = t;
                    d_105 :
                    if(!(match_string(x_105, "-S")))
                      {
                        if(!(match_string(x_105, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm f_4 (ATerm t)
                  {
                    t = term_h_26;
                    t = set_config_0(t);
                    t = term_i_26;
                    return(t);
                  }
                  ATerm g_4 (ATerm t)
                  {
                    t = term_j_26;
                    return(t);
                  }
                  t = Option_3(t, e_4, f_4, g_4);
                  LocalPopChoice(g_26);
                }
              else
                {
                  t = f_26;
                  {
                    ATerm k_26 = t;
                    int l_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_4 (ATerm t)
                        {
                          ATerm y_105 = NULL;
                          y_105 = t;
                          e_105 :
                          if(!(match_string(y_105, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm i_4 (ATerm t)
                        {
                          ATerm b_106 = NULL;
                          ATerm m_26;
                          m_26 = t;
                          {
                            ATerm z_105 = NULL;
                            ATerm a_106 = NULL;
                            t = string_to_int_0(t);
                            {
                              a_106 = t;
                              if(((z_105 != NULL) && (z_105 != a_106)))
                                _fail(a_106);
                              else
                                z_105 = a_106;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_v_23, not_null(z_105));
                              t = set_config_0(t);
                            }
                          }
                          t = m_26;
                          {
                            ATerm c_106 = NULL;
                            c_106 = t;
                            if(((b_106 != NULL) && (b_106 != c_106)))
                              _fail(c_106);
                            else
                              b_106 = c_106;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_106));
                          }
                          return(t);
                        }
                        ATerm j_4 (ATerm t)
                        {
                          t = term_n_26;
                          return(t);
                        }
                        t = ArgOption_3(t, h_4, i_4, j_4);
                        LocalPopChoice(l_26);
                      }
                    else
                      {
                        t = k_26;
                        {
                          ATerm o_26 = t;
                          int p_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_4 (ATerm t)
                              {
                                ATerm d_106 = NULL;
                                d_106 = t;
                                h_105 :
                                if(!(match_string(d_106, "-k")))
                                  {
                                    if(!(match_string(d_106, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm o_4 (ATerm t)
                              {
                                ATerm q_26;
                                q_26 = t;
                                {
                                  ATerm e_106 = NULL;
                                  ATerm f_106 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    f_106 = t;
                                    if(((e_106 != NULL) && (e_106 != f_106)))
                                      _fail(f_106);
                                    else
                                      e_106 = f_106;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_r_26, not_null(e_106));
                                    t = set_config_0(t);
                                  }
                                }
                                t = q_26;
                                return(t);
                              }
                              ATerm p_4 (ATerm t)
                              {
                                t = term_s_26;
                                return(t);
                              }
                              t = ArgOption_3(t, n_4, o_4, p_4);
                              LocalPopChoice(p_26);
                            }
                          else
                            {
                              t = o_26;
                              {
                                ATerm t_26 = t;
                                int u_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_4 (ATerm t)
                                    {
                                      ATerm g_106 = NULL;
                                      g_106 = t;
                                      j_105 :
                                      if(!(match_string(g_106, "-v")))
                                        {
                                          if(!(match_string(g_106, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm r_4 (ATerm t)
                                    {
                                      t = term_w_26;
                                      t = set_config_0(t);
                                      t = term_x_26;
                                      return(t);
                                    }
                                    ATerm s_4 (ATerm t)
                                    {
                                      t = term_y_26;
                                      return(t);
                                    }
                                    t = Option_3(t, q_4, r_4, s_4);
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
                                          ATerm t_4 (ATerm t)
                                          {
                                            ATerm h_106 = NULL;
                                            h_106 = t;
                                            k_105 :
                                            if(!(match_string(h_106, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm u_4 (ATerm t)
                                          {
                                            t = term_c_27;
                                            t = set_config_0(t);
                                            t = term_d_27;
                                            return(t);
                                          }
                                          ATerm v_4 (ATerm t)
                                          {
                                            t = term_e_27;
                                            return(t);
                                          }
                                          t = Option_3(t, t_4, u_4, v_4);
                                          LocalPopChoice(a_27);
                                        }
                                      else
                                        {
                                          t = z_26;
                                          {
                                            ATerm w_4 (ATerm t)
                                            {
                                              ATerm i_106 = NULL;
                                              i_106 = t;
                                              l_105 :
                                              if(!(match_string(i_106, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm x_4 (ATerm t)
                                            {
                                              t = term_g_27;
                                              t = set_config_0(t);
                                              t = term_h_27;
                                              return(t);
                                            }
                                            ATerm y_4 (ATerm t)
                                            {
                                              t = term_i_27;
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
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATempty, term_j_27));
  {
    t = printnl_0(t);
    {
      t = term_j_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_106 = NULL;
  x_106 = t;
  t = SSL_TicksToSeconds(not_null(x_106));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_107 = NULL,d_107 = NULL,e_107 = NULL;
  c_107 = t;
  b_107 :
  if(match_cons(c_107, sym__2))
    {
      d_107 = ATgetArgument(c_107, 0);
      e_107 = ATgetArgument(c_107, 1);
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_107), not_null(e_107));
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            t = SSL_addr(not_null(d_107), not_null(e_107));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_97 (ATerm), ATerm w_97 (ATerm))
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_97(t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm l_107 = NULL,m_107 = NULL,n_107 = NULL;
        l_107 = t;
        k_107 :
        if(((ATgetType(l_107) == AT_LIST) && !(ATisEmpty(l_107))))
          {
            m_107 = ATgetFirst((ATermList) l_107);
            n_107 = (ATerm) ATgetNext((ATermList) l_107);
            {
              ATerm q_107 = NULL;
              ATerm r_107 = NULL;
              t = not_null(n_107);
              {
                t = foldr_2(t, v_97, w_97);
                {
                  r_107 = t;
                  if(((q_107 != NULL) && (q_107 != r_107)))
                    _fail(r_107);
                  else
                    q_107 = r_107;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_107), not_null(q_107));
                t = w_97(t);
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
ATerm crush_2 (ATerm t, ATerm z_96 (ATerm), ATerm a_97 (ATerm))
{
  ATerm y_107 = NULL;
  ATerm a_108 = NULL;
  y_107 = t;
  {
    ATerm b_108 = NULL;
    ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL;
    t = not_null(y_107);
    {
      b_108 = t;
      {
        t = SSL_explode_term(not_null(b_108));
        {
          d_108 = t;
          x_107 :
          if(match_cons(d_108, sym__2))
            {
              e_108 = ATgetArgument(d_108, 0);
              f_108 = ATgetArgument(d_108, 1);
              if(((a_108 != NULL) && (a_108 != f_108)))
                _fail(f_108);
              else
                a_108 = f_108;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_108);
      t = foldr_2(t, z_96, a_97);
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
    ATerm z_4 (ATerm t)
    {
      t = term_k_20;
      return(t);
    }
    t = crush_2(t, z_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm l_108 = NULL,p_108 = NULL,q_108 = NULL;
  l_108 = t;
  k_108 :
  if(match_cons(l_108, sym__2))
    {
      p_108 = ATgetArgument(l_108, 0);
      q_108 = ATgetArgument(l_108, 1);
      {
        ATerm o_27;
        o_27 = t;
        {
          ATerm p_27 = t;
          int q_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_108), not_null(q_108));
              LocalPopChoice(q_27);
            }
          else
            {
              t = p_27;
              t = SSL_gtr(not_null(p_108), not_null(q_108));
            }
        }
        t = o_27;
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
  ATerm w_108 = NULL;
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL;
      x_108 = t;
      v_108 :
      if(match_cons(x_108, sym__2))
        {
          y_108 = ATgetArgument(x_108, 0);
          z_108 = ATgetArgument(x_108, 1);
          {
            if(((w_108 != NULL) && (w_108 != y_108)))
              _fail(y_108);
            else
              w_108 = y_108;
            if(((w_108 != NULL) && (w_108 != z_108)))
              _fail(z_108);
            else
              w_108 = z_108;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_104 (ATerm))
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_27;
      v_27 = t;
      {
        ATerm f_109 = NULL;
        ATerm g_109 = NULL;
        t = term_v_23;
        {
          t = get_config_0(t);
          {
            g_109 = t;
            if(((f_109 != NULL) && (f_109 != g_109)))
              _fail(g_109);
            else
              f_109 = g_109;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_109), term_j_6);
          t = geq_0(t);
        }
      }
      t = v_27;
      t = k_104(t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm l_109 = NULL,o_109 = NULL;
    ATerm w_27;
    w_27 = t;
    {
      ATerm n_109 = NULL;
      t = run_time_0(t);
      {
        n_109 = t;
        if(((l_109 != NULL) && (l_109 != n_109)))
          _fail(n_109);
        else
          l_109 = n_109;
      }
    }
    t = w_27;
    {
      ATerm p_109 = NULL;
      t = term_x_27;
      {
        t = get_config_0(t);
        {
          p_109 = t;
          if(((o_109 != NULL) && (o_109 != p_109)))
            _fail(p_109);
          else
            o_109 = p_109;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_27), not_null(l_109)), term_y_27), not_null(o_109)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_5);
  {
    t = term_k_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_109 = NULL;
  w_109 = t;
  v_109 :
  if(match_cons(w_109, sym_Version_0))
    {
      ATerm y_109 = NULL,a_110 = NULL;
      ATerm a_28;
      a_28 = t;
      {
        ATerm z_109 = NULL;
        t = SSLgetAnnotations(not_null(w_109));
        {
          z_109 = t;
          if(((y_109 != NULL) && (y_109 != z_109)))
            _fail(z_109);
          else
            y_109 = z_109;
        }
      }
      t = a_28;
      {
        ATerm b_110 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(y_109));
        {
          b_110 = t;
          if(((a_110 != NULL) && (a_110 != b_110)))
            _fail(b_110);
          else
            a_110 = b_110;
        }
        t = not_null(a_110);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_102 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        {
          ATerm d_28 = t;
          int e_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(e_28);
            }
          else
            {
              t = d_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, b_5);
  t = q_102(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm g_110 = NULL;
  g_110 = t;
  t = SSL_table_create(not_null(g_110));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_110 = NULL;
  k_110 = t;
  {
    ATerm f_28;
    f_28 = t;
    {
      t = term_g_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_28, term_h_28, not_null(k_110));
          t = table_put_0(t);
        }
      }
    }
    t = f_28;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_110 = NULL;
  o_110 = t;
  t = SSL_table_destroy(not_null(o_110));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_110 = NULL;
  s_110 = t;
  t = SSL_exit(not_null(s_110));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm w_110 = NULL,x_110 = NULL,y_110 = NULL;
  w_110 = t;
  v_110 :
  if(((ATgetType(w_110) == AT_LIST) && ATisEmpty(w_110)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_110) == AT_LIST) && !(ATisEmpty(w_110))))
        {
          x_110 = ATgetFirst((ATermList) w_110);
          y_110 = (ATerm) ATgetNext((ATermList) w_110);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm i_28;
  i_28 = t;
  {
    ATerm b_111 = NULL;
    ATerm e_111 = NULL;
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        {
          ATerm c_111 = NULL;
          ATerm d_111 = NULL;
          d_111 = t;
          if(((c_111 != NULL) && (c_111 != d_111)))
            _fail(d_111);
          else
            c_111 = d_111;
          t = (ATerm) ATinsert(ATempty, not_null(c_111));
        }
      }
    {
      e_111 = t;
      if(((b_111 != NULL) && (b_111 != e_111)))
        _fail(e_111);
      else
        b_111 = e_111;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_24, not_null(b_111));
      t = printnl_0(t);
    }
  }
  t = i_28;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm h_111 (ATerm t)
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = Cons_2(t, f_80, h_111);
      }
    return(t);
  }
  t = h_111(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm o_111 = NULL,p_111 = NULL,q_111 = NULL;
  q_111 = t;
  n_111 :
  if(((ATgetType(q_111) == AT_LIST) && !(ATisEmpty(q_111))))
    {
      o_111 = ATgetFirst((ATermList) q_111);
      p_111 = (ATerm) ATgetNext((ATermList) q_111);
      {
        ATerm t_111 = NULL;
        t = not_null(p_111);
        {
          ATerm n_28;
          n_28 = t;
          {
            ATerm u_111 = NULL,w_111 = NULL,y_111 = NULL;
            ATerm o_28;
            o_28 = t;
            {
              ATerm v_111 = NULL;
              t = k_0(t);
              {
                v_111 = t;
                if(((u_111 != NULL) && (u_111 != v_111)))
                  _fail(v_111);
                else
                  u_111 = v_111;
              }
            }
            t = o_28;
            {
              ATerm x_111 = NULL;
              t = not_null(o_111);
              {
                t = i_0(t);
                {
                  x_111 = t;
                  if(((w_111 != NULL) && (w_111 != x_111)))
                    _fail(x_111);
                  else
                    w_111 = x_111;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_111)), not_null(w_111));
                {
                  y_111 = t;
                  if(((t_111 != NULL) && (t_111 != y_111)))
                    _fail(y_111);
                  else
                    t_111 = y_111;
                }
              }
            }
          }
          t = n_28;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(t_111);
              return(t);
            }
            t = reverse_acc_2(t, i_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(q_111) == AT_LIST) && ATisEmpty(q_111)))
        {
          {
            t = term_i_15;
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
  ATerm d_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm j_112 = NULL,l_112 = NULL;
  j_112 = t;
  i_112 :
  if(match_cons(j_112, sym_Program_1))
    {
      l_112 = ATgetArgument(j_112, 0);
      {
        ATerm o_112 = NULL,q_112 = NULL;
        ATerm p_112 = NULL;
        t = SSLgetAnnotations(not_null(j_112));
        {
          p_112 = t;
          if(((o_112 != NULL) && (o_112 != p_112)))
            _fail(p_112);
          else
            o_112 = p_112;
        }
        {
          t = not_null(l_112);
          {
            ATerm s_112 = NULL;
            t = w_74(t);
            {
              q_112 = t;
              {
                ATerm t_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_112)), not_null(o_112));
                {
                  t_112 = t;
                  if(((s_112 != NULL) && (s_112 != t_112)))
                    _fail(t_112);
                  else
                    s_112 = t_112;
                }
                t = not_null(s_112);
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
  ATerm b_113 = NULL;
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_113 = NULL;
      t = term_x_27;
      {
        t = get_config_0(t);
        {
          c_113 = t;
          if(((b_113 != NULL) && (b_113 != c_113)))
            _fail(c_113);
          else
            b_113 = c_113;
        }
      }
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm f_5 (ATerm t)
          {
            ATerm d_113 = NULL;
            d_113 = t;
            if(((b_113 != NULL) && (b_113 != d_113)))
              _fail(d_113);
            else
              b_113 = d_113;
            return(t);
          }
          t = Program_1(t, f_5);
          return(t);
        }
        t = fetch_1(t, e_5);
      }
    }
  {
    t = term_r_28;
    {
      t = echo_0(t);
      {
        t = term_u_28;
        {
          t = table_get_0(t);
          {
            ATerm g_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, g_5);
            {
              ATerm h_5 (ATerm t)
              {
                ATerm e_113 = NULL;
                ATerm f_113 = NULL;
                f_113 = t;
                if(((e_113 != NULL) && (e_113 != f_113)))
                  _fail(f_113);
                else
                  e_113 = f_113;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_113)), term_v_28);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, h_5);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm w_28;
  w_28 = t;
  {
    ATerm k_113 = NULL;
    ATerm l_113 = NULL;
    l_113 = t;
    if(((k_113 != NULL) && (k_113 != l_113)))
      _fail(l_113);
    else
      k_113 = l_113;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATempty, not_null(k_113)));
      t = printnl_0(t);
    }
  }
  t = w_28;
  return(t);
}
ATerm say_1 (ATerm t, ATerm p_101 (ATerm))
{
  ATerm x_28;
  x_28 = t;
  {
    t = p_101(t);
    t = debug_0(t);
  }
  t = x_28;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm s_113 = NULL,t_113 = NULL;
  s_113 = t;
  r_113 :
  if(match_cons(s_113, sym_Undefined_1))
    {
      t_113 = ATgetArgument(s_113, 0);
      {
        ATerm w_113 = NULL,y_113 = NULL;
        ATerm x_113 = NULL;
        t = SSLgetAnnotations(not_null(s_113));
        {
          x_113 = t;
          if(((w_113 != NULL) && (w_113 != x_113)))
            _fail(x_113);
          else
            w_113 = x_113;
        }
        {
          t = not_null(t_113);
          {
            ATerm a_114 = NULL;
            t = x_74(t);
            {
              y_113 = t;
              {
                ATerm b_114 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_113)), not_null(w_113));
                {
                  b_114 = t;
                  if(((a_114 != NULL) && (a_114 != b_114)))
                    _fail(b_114);
                  else
                    a_114 = b_114;
                }
                t = not_null(a_114);
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
ATerm fetch_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm g_114 (ATerm t)
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, o_80, _id);
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        t = Cons_2(t, _id, g_114);
      }
    return(t);
  }
  t = g_114(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_105 (ATerm))
{
  t = fetch_1(t, n_105);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_114 = NULL;
  l_114 = t;
  k_114 :
  if(match_cons(l_114, sym_Help_0))
    {
      ATerm n_114 = NULL,p_114 = NULL;
      ATerm a_29;
      a_29 = t;
      {
        ATerm o_114 = NULL;
        t = SSLgetAnnotations(not_null(l_114));
        {
          o_114 = t;
          if(((n_114 != NULL) && (n_114 != o_114)))
            _fail(o_114);
          else
            n_114 = o_114;
        }
      }
      t = a_29;
      {
        ATerm q_114 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_114));
        {
          q_114 = t;
          if(((p_114 != NULL) && (p_114 != q_114)))
            _fail(q_114);
          else
            p_114 = q_114;
        }
        t = not_null(p_114);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_87 (ATerm))
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_87(t);
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_114 = NULL,y_114 = NULL,z_114 = NULL;
  x_114 = t;
  w_114 :
  if(match_cons(x_114, sym__2))
    {
      y_114 = ATgetArgument(x_114, 0);
      z_114 = ATgetArgument(x_114, 1);
      t = SSL_table_get(not_null(y_114), not_null(z_114));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm g_115 = NULL,h_115 = NULL,i_115 = NULL,j_115 = NULL;
  g_115 = t;
  f_115 :
  if(match_cons(g_115, sym__3))
    {
      h_115 = ATgetArgument(g_115, 0);
      i_115 = ATgetArgument(g_115, 1);
      j_115 = ATgetArgument(g_115, 2);
      {
        ATerm d_29;
        d_29 = t;
        {
          ATerm n_115 = NULL;
          ATerm o_115 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_115), not_null(i_115));
          {
            ATerm e_29 = t;
            int f_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_29);
              }
            else
              {
                t = e_29;
                t = (ATerm) ATempty;
              }
            {
              o_115 = t;
              if(((n_115 != NULL) && (n_115 != o_115)))
                _fail(o_115);
              else
                n_115 = o_115;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_115), not_null(i_115), (ATerm) ATinsert(CheckATermList(not_null(n_115)), not_null(j_115)));
            t = table_put_0(t);
          }
        }
        t = d_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_106 (ATerm))
{
  ATerm s_115 = NULL;
  ATerm t_115 = NULL;
  t = term_i_15;
  {
    t = s_106(t);
    {
      t_115 = t;
      if(((s_115 != NULL) && (s_115 != t_115)))
        _fail(t_115);
      else
        s_115 = t_115;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_28, term_t_28, not_null(s_115));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm z_115 = NULL,a_116 = NULL,b_116 = NULL;
  z_115 = t;
  y_115 :
  if(match_string(z_115, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(z_115) == AT_LIST) && !(ATisEmpty(z_115))))
        {
          a_116 = ATgetFirst((ATermList) z_115);
          b_116 = (ATerm) ATgetNext((ATermList) z_115);
          {
            ATerm f_116 = NULL;
            ATerm g_29;
            g_29 = t;
            {
              t = not_null(a_116);
              t = a_0(t);
            }
            t = g_29;
            {
              ATerm g_116 = NULL;
              t = term_i_15;
              {
                t = d_0(t);
                {
                  g_116 = t;
                  if(((f_116 != NULL) && (f_116 != g_116)))
                    _fail(g_116);
                  else
                    f_116 = g_116;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_116)), not_null(f_116));
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
    ATerm l_116 = NULL;
    l_116 = t;
    k_116 :
    if(!(match_string(l_116, "--help")))
      {
        if(!(match_string(l_116, "-h")))
          {
            if(!(match_string(l_116, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_i_29;
    {
      t = set_config_0(t);
      t = term_j_29;
    }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_k_29;
    return(t);
  }
  t = Option_3(t, i_5, j_5, k_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_116 = NULL,p_116 = NULL,q_116 = NULL;
  o_116 = t;
  n_116 :
  if(((ATgetType(o_116) == AT_LIST) && !(ATisEmpty(o_116))))
    {
      p_116 = ATgetFirst((ATermList) o_116);
      q_116 = (ATerm) ATgetNext((ATermList) o_116);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_116)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_116)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm w_116 = NULL,x_116 = NULL,y_116 = NULL;
  w_116 = t;
  v_116 :
  if(match_cons(w_116, sym__2))
    {
      x_116 = ATgetArgument(w_116, 0);
      y_116 = ATgetArgument(w_116, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_23, not_null(x_116), not_null(y_116));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_106 (ATerm))
{
  ATerm l_29;
  l_29 = t;
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_29;
        t = q_106(t);
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        {
        }
      }
  }
  t = l_29;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm g_117 = NULL;
      ATerm p_29;
      p_29 = t;
      {
        ATerm e_117 = NULL;
        ATerm f_117 = NULL;
        f_117 = t;
        if(((e_117 != NULL) && (e_117 != f_117)))
          _fail(f_117);
        else
          e_117 = f_117;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_27, not_null(e_117));
          t = set_config_0(t);
        }
      }
      t = p_29;
      {
        ATerm h_117 = NULL;
        h_117 = t;
        if(((g_117 != NULL) && (g_117 != h_117)))
          _fail(h_117);
        else
          g_117 = h_117;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_117));
      }
      return(t);
    }
    ATerm m_5 (ATerm t)
    {
      ATerm q_29 = t;
      int r_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_29 = t;
          int t_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_29);
            }
          else
            {
              t = s_29;
              {
                t = q_106(t);
                t = Cons_2(t, _id, m_5);
              }
            }
          LocalPopChoice(r_29);
        }
      else
        {
          t = q_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_5, m_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_117 = NULL,o_117 = NULL,p_117 = NULL;
  ATerm u_29;
  u_29 = t;
  {
    ATerm q_117 = NULL,r_117 = NULL,s_117 = NULL,t_117 = NULL;
    q_117 = t;
    m_117 :
    if(match_cons(q_117, sym__3))
      {
        r_117 = ATgetArgument(q_117, 0);
        s_117 = ATgetArgument(q_117, 1);
        t_117 = ATgetArgument(q_117, 2);
        {
          if(((n_117 != NULL) && (n_117 != r_117)))
            _fail(r_117);
          else
            n_117 = r_117;
          {
            if(((o_117 != NULL) && (o_117 != s_117)))
              _fail(s_117);
            else
              o_117 = s_117;
            {
              if(((p_117 != NULL) && (p_117 != t_117)))
                _fail(t_117);
              else
                p_117 = t_117;
              t = SSL_table_put(not_null(n_117), not_null(o_117), not_null(p_117));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_106 (ATerm))
{
  ATerm w_117 = NULL;
  ATerm v_29;
  v_29 = t;
  {
    t = term_w_29;
    t = table_put_0(t);
  }
  t = v_29;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm x_29 = t;
      int y_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_106(t);
          LocalPopChoice(y_29);
        }
      else
        {
          t = x_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_5);
    {
      ATerm z_29 = t;
      int a_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_30;
          b_30 = t;
          {
            ATerm c_30 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_h_29;
                t = get_config_0(t);
                LocalPopChoice(d_30);
              }
            else
              {
                t = c_30;
                t = fetch_1(t, Help_0);
              }
          }
          t = b_30;
          {
            t = system_usage_0(t);
            {
              t = term_k_20;
              t = exit_0(t);
            }
          }
          LocalPopChoice(a_30);
        }
      else
        {
          t = z_29;
          {
            ATerm e_30 = t;
            int f_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm q_5 (ATerm t)
                  {
                    ATerm x_117 = NULL;
                    x_117 = t;
                    if(((w_117 != NULL) && (w_117 != x_117)))
                      _fail(x_117);
                    else
                      w_117 = x_117;
                    return(t);
                  }
                  t = Undefined_1(t, q_5);
                  return(t);
                }
                t = fetch_1(t, o_5);
                {
                  ATerm r_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_117)), term_g_30);
                    return(t);
                  }
                  t = say_1(t, r_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_j_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(f_30);
              }
            else
              {
                t = e_30;
                {
                }
              }
          }
        }
      {
        ATerm h_30;
        h_30 = t;
        {
          t = term_s_28;
          t = table_destroy_0(t);
        }
        t = h_30;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm))
{
  t = parse_options_1(t, w_102);
  {
    t = store_options_0(t);
    {
      t = y_102(t);
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_102);
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            {
              ATerm k_30 = t;
              int m_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_102(t);
                  t = report_success_0(t);
                  LocalPopChoice(m_30);
                }
              else
                {
                  t = k_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm q_103 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_103(t);
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, n_103);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, s_5, p_103, q_103, t_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm v_5 (ATerm t)
    {
      ATerm q_30;
      q_30 = t;
      {
        ATerm a_118 = NULL;
        ATerm b_118 = NULL;
        t = term_x_27;
        {
          t = get_config_0(t);
          {
            b_118 = t;
            if(((a_118 != NULL) && (a_118 != b_118)))
              _fail(b_118);
            else
              a_118 = b_118;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATempty, not_null(a_118)));
          t = printnl_0(t);
        }
      }
      t = q_30;
      return(t);
    }
    t = if_verbose2_1(t, v_5);
    return(t);
  }
  t = iowrap_4(t, h_103, i_103, j_103, u_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_103 (ATerm), ATerm g_103 (ATerm))
{
  t = iowrap_3(t, f_103, g_103, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_103 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    t = _2(t, _id, c_103);
    return(t);
  }
  t = iowrap_2(t, w_5, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      ATerm z_5 (ATerm t)
      {
        ATerm a_6 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, a_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, z_5);
      return(t);
    }
    t = Specification_1(t, y_5);
    return(t);
  }
  t = iowrap_1(t, x_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
