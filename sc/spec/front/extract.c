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
Symbol sym_SRDef_3;
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
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
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
ATerm term_g_30;
ATerm term_y_29;
ATerm term_q_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_m_25;
ATerm term_n_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_i_23;
ATerm term_u_22;
ATerm term_m_22;
ATerm term_h_22;
ATerm term_z_21;
ATerm term_q_21;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_y_19;
ATerm term_n_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_v_18;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_r_11;
ATerm term_m_11;
ATerm term_h_10;
ATerm term_y_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_a_9;
ATerm term_l_7;
ATerm term_a_7;
ATerm term_y_6;
ATerm term_q_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_f_6;
void init_constant_terms (void)
{
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Op_2, term_m_14, (ATerm) ATempty);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_n_14);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_n_19);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_h_22, term_n_19);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_19);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_o_15);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_o_15);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_l_26, term_o_15);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_w_28);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym__2, term_l_29, term_o_15);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__3, term_v_28, term_w_28, (ATerm) ATempty);
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
ATerm Rec_2 (ATerm, ATerm v_78 (ATerm), ATerm w_78 (ATerm));
ATerm SDef_3 (ATerm, ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm));
ATerm Let_2 (ATerm, ATerm x_78 (ATerm), ATerm y_78 (ATerm));
ATerm sboundin_3 (ATerm, ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm n_109 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_94 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm o_108 (ATerm), ATerm p_108 (ATerm));
ATerm alltd_1 (ATerm, ATerm o_107 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm q_108 (ATerm), ATerm r_108 (ATerm));
ATerm substitute_1 (ATerm, ATerm s_108 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm c_79 (ATerm), ATerm d_79 (ATerm));
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
ATerm As_2 (ATerm, ATerm r_76 (ATerm), ATerm s_76 (ATerm));
ATerm Prim_2 (ATerm, ATerm c_80 (ATerm), ATerm d_80 (ATerm));
ATerm Explode_2 (ATerm, ATerm n_76 (ATerm), ATerm o_76 (ATerm));
ATerm Op_2 (ATerm, ATerm c_78 (ATerm), ATerm d_78 (ATerm));
ATerm pat_td_1 (ATerm, ATerm s_80 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm z_102 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm u_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm s_91 (ATerm), ATerm t_91 (ATerm));
ATerm repeat_1 (ATerm, ATerm v_91 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm h_76 (ATerm), ATerm i_76 (ATerm));
ATerm Con_3 (ATerm, ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm g_76 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm z_79 (ATerm), ATerm a_80 (ATerm));
ATerm oncetd_1 (ATerm, ATerm a_107 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm k_105 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm t_104 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm p_97 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm x_102 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm));
ATerm zip_1 (ATerm, ATerm u_102 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_1 (ATerm, ATerm m_98 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm i_81 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm j_92 (ATerm), ATerm k_92 (ATerm));
ATerm for_3 (ATerm, ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm a_81 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm h_98 (ATerm), ATerm i_98 (ATerm));
ATerm union_1 (ATerm, ATerm j_98 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm c_81 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm v_77 (ATerm));
ATerm Cons_2 (ATerm, ATerm e_80 (ATerm), ATerm f_80 (ATerm));
ATerm Specification_1 (ATerm, ATerm x_77 (ATerm));
ATerm _2 (ATerm, ATerm w_68 (ATerm), ATerm x_68 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_101 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_88 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm k_85 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_87 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_104 (ATerm), ATerm e_104 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm a_97 (ATerm), ATerm b_97 (ATerm));
ATerm crush_2 (ATerm, ATerm s_98 (ATerm), ATerm t_98 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_85 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_87 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_83 (ATerm));
ATerm map_1 (ATerm, ATerm q_100 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_83 (ATerm));
ATerm Program_1 (ATerm, ATerm q_74 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_88 (ATerm));
ATerm Undefined_1 (ATerm, ATerm r_74 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_100 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_84 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_104 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_83 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_83 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_83 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm iowrap_4 (ATerm, ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm));
ATerm iowrap_3 (ATerm, ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm));
ATerm iowrap_2 (ATerm, ATerm u_86 (ATerm), ATerm v_86 (ATerm));
ATerm iowrap_1 (ATerm, ATerm r_86 (ATerm));
ATerm extract_0 (ATerm);
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
        ATerm e_6;
        e_6 = t;
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
        t = e_6;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_6), not_null(m_6)), term_h_6), not_null(l_6)), term_f_6);
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_6), not_null(x_6)), term_h_6), not_null(w_6)), term_j_6), not_null(v_6)), term_f_6);
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
                ATerm n_6 = t;
                int o_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(o_6);
                  }
                else
                  {
                    t = n_6;
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
  ATerm p_6;
  p_6 = t;
  {
    t = error_0(t);
    {
      t = term_q_6;
      t = exit_0(t);
    }
  }
  t = p_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_y_6);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm z_6;
  z_6 = t;
  {
    ATerm x_7 = NULL;
    ATerm y_7 = NULL;
    y_7 = t;
    if(((x_7 != NULL) && (x_7 != y_7)))
      _fail(y_7);
    else
      x_7 = y_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_7, not_null(x_7));
      t = printnl_0(t);
    }
  }
  t = z_6;
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
          ATerm b_7 = t;
          int c_7 = stack_ptr;
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
                            ATerm k_7 = t;
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
                                t = k_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_8)), term_l_7);
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
              LocalPopChoice(c_7);
            }
          else
            {
              t = b_7;
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
ATerm Rec_2 (ATerm t, ATerm v_78 (ATerm), ATerm w_78 (ATerm))
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
            t = v_78(t);
            {
              s_9 = t;
              {
                t = not_null(m_9);
                {
                  ATerm w_9 = NULL;
                  t = w_78(t);
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
ATerm SDef_3 (ATerm t, ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm))
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
            t = z_78(t);
            {
              u_10 = t;
              {
                t = not_null(m_10);
                {
                  ATerm y_10 = NULL;
                  t = a_79(t);
                  {
                    w_10 = t;
                    {
                      t = not_null(n_10);
                      {
                        ATerm a_11 = NULL;
                        t = b_79(t);
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
ATerm Let_2 (ATerm t, ATerm x_78 (ATerm), ATerm y_78 (ATerm))
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
            t = x_78(t);
            {
              w_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm a_12 = NULL;
                  t = y_78(t);
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
ATerm sboundin_3 (ATerm t, ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm n_109 (ATerm))
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, l_109, l_109);
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm o_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, n_109, n_109, l_109);
            LocalPopChoice(u_7);
          }
        else
          {
            t = o_7;
            t = Rec_2(t, n_109, l_109);
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
          ATerm e_0 (ATerm t)
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
          ATerm f_0 (ATerm t)
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
ATerm crush_3 (ATerm t, ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm))
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
      t = foldr_3(t, u_98, v_98, w_98);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm q_94 (ATerm))
{
  ATerm q_14 (ATerm t)
  {
    ATerm m_0 (ATerm t)
    {
      ATerm v_7 = t;
      int w_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_94(t);
          LocalPopChoice(w_7);
        }
      else
        {
          t = v_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm n_0 (ATerm t)
    {
      ATerm z_7 = t;
      int a_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = NULL;
          ATerm b_8;
          b_8 = t;
          {
            ATerm p_14 = NULL;
            t = o_94(t);
            {
              p_14 = t;
              if(((o_14 != NULL) && (o_14 != p_14)))
                _fail(p_14);
              else
                o_14 = p_14;
            }
          }
          t = b_8;
          {
            ATerm o_0 (ATerm t)
            {
              ATerm q_0 (ATerm t)
              {
                t = not_null(o_14);
                return(t);
              }
              t = split_2(t, q_14, q_0);
              t = diff_1(t, q_94);
              return(t);
            }
            ATerm p_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = p_94(t, o_0, q_14, p_0);
            {
              ATerm r_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, r_0, union_0, _id);
            }
          }
          LocalPopChoice(a_8);
        }
      else
        {
          t = z_7;
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
    t = split_2(t, m_0, n_0);
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
    ATerm c_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = c_8;
        {
          ATerm o_8 = t;
          int v_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(v_8);
            }
          else
            {
              t = o_8;
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
    t = term_a_9;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm q_16 = NULL,s_16 = NULL;
    ATerm b_9;
    b_9 = t;
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
    t = b_9;
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
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(d_9);
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
ATerm SubsVar_2 (ATerm t, ATerm o_108 (ATerm), ATerm p_108 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm l_18 = NULL,m_18 = NULL;
  j_18 = t;
  {
    ATerm n_18 = NULL;
    t = not_null(j_18);
    {
      ATerm o_18 = NULL;
      t = o_108(t);
      {
        n_18 = t;
        {
          if(((l_18 != NULL) && (l_18 != n_18)))
            _fail(n_18);
          else
            l_18 = n_18;
          {
            t = p_108(t);
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
ATerm alltd_1 (ATerm t, ATerm o_107 (ATerm))
{
  ATerm s_18 (ATerm t)
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_107(t);
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
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
ATerm substitute_2 (ATerm t, ATerm q_108 (ATerm), ATerm r_108 (ATerm))
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
              t = SubsVar_2(t, q_108, c_1);
              t = r_108(t);
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
ATerm substitute_1 (ATerm t, ATerm s_108 (ATerm))
{
  t = substitute_2(t, s_108, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm c_79 (ATerm), ATerm d_79 (ATerm))
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
            t = c_79(t);
            {
              j_20 = t;
              {
                t = not_null(d_20);
                {
                  ATerm n_20 = NULL;
                  t = d_79(t);
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
            ATerm g_9;
            g_9 = t;
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
            t = g_9;
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
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_24)), not_null(w_24)), not_null(v_24)), not_null(u_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(r_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))))), (ATerm) ATmakeAppl(sym_Prim_2, term_n_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_n_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_25)), not_null(d_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_25)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_o_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_25)), (ATerm) ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_25)), not_null(n_25)))))));
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
  ATerm c_27 = NULL,d_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_Match_1))
    {
      d_27 = ATgetArgument(c_27, 0);
      {
        ATerm t_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
            ATerm j_27 = NULL;
            ATerm n_27 = NULL;
            t = new_0(t);
            {
              j_27 = t;
              {
                if(((h_27 != NULL) && (h_27 != j_27)))
                  _fail(j_27);
                else
                  h_27 = j_27;
                {
                  t = not_null(d_27);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
                      k_27 = t;
                      r_26 :
                      if(match_cons(k_27, sym_Anno_2))
                        {
                          l_27 = ATgetArgument(k_27, 0);
                          m_27 = ATgetArgument(k_27, 1);
                          {
                            if(((f_27 != NULL) && (f_27 != l_27)))
                              _fail(l_27);
                            else
                              f_27 = l_27;
                            {
                              if(((g_27 != NULL) && (g_27 != m_27)))
                                _fail(m_27);
                              else
                                g_27 = m_27;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_27)), not_null(f_27));
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
                      n_27 = t;
                      if(((i_27 != NULL) && (i_27 != n_27)))
                        _fail(n_27);
                      else
                        i_27 = n_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_27))))));
            LocalPopChoice(v_9);
          }
        else
          {
            t = t_9;
            {
              ATerm z_9 = t;
              int a_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
                  ATerm s_27 = NULL;
                  ATerm v_27 = NULL;
                  t = new_0(t);
                  {
                    s_27 = t;
                    {
                      if(((q_27 != NULL) && (q_27 != s_27)))
                        _fail(s_27);
                      else
                        q_27 = s_27;
                      {
                        t = not_null(d_27);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm t_27 = NULL,u_27 = NULL;
                            t_27 = t;
                            v_26 :
                            if(match_cons(t_27, sym_RootApp_1))
                              {
                                u_27 = ATgetArgument(t_27, 0);
                                {
                                  if(((p_27 != NULL) && (p_27 != u_27)))
                                    _fail(u_27);
                                  else
                                    p_27 = u_27;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_27));
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
                            v_27 = t;
                            if(((r_27 != NULL) && (r_27 != v_27)))
                              _fail(v_27);
                            else
                              r_27 = v_27;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_27))), not_null(p_27))));
                  LocalPopChoice(a_10);
                }
              else
                {
                  t = z_9;
                  {
                    ATerm x_27 = NULL,g_28 = NULL,h_28 = NULL,u_30 = NULL;
                    ATerm v_30 = NULL;
                    ATerm z_30 = NULL;
                    t = new_0(t);
                    {
                      v_30 = t;
                      {
                        if(((h_28 != NULL) && (h_28 != v_30)))
                          _fail(v_30);
                        else
                          h_28 = v_30;
                        {
                          t = not_null(d_27);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
                              w_30 = t;
                              z_26 :
                              if(match_cons(w_30, sym_App_2))
                                {
                                  x_30 = ATgetArgument(w_30, 0);
                                  y_30 = ATgetArgument(w_30, 1);
                                  {
                                    if(((g_28 != NULL) && (g_28 != x_30)))
                                      _fail(x_30);
                                    else
                                      g_28 = x_30;
                                    {
                                      if(((x_27 != NULL) && (x_27 != y_30)))
                                        _fail(y_30);
                                      else
                                        x_27 = y_30;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_28));
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
                              z_30 = t;
                              if(((u_30 != NULL) && (u_30 != z_30)))
                                _fail(z_30);
                              else
                                u_30 = z_30;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_28))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_27)), not_null(g_28)))));
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
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL;
  y_32 = t;
  w_32 :
  if(match_cons(y_32, sym_Match_1))
    {
      z_32 = ATgetArgument(y_32, 0);
      x_32 :
      if(match_cons(z_32, sym_RootApp_1))
        {
          a_33 = ATgetArgument(z_32, 0);
          t = not_null(a_33);
        }
      else
        {
          if(match_cons(z_32, sym_App_2))
            {
              a_33 = ATgetArgument(z_32, 0);
              b_33 = ATgetArgument(z_32, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(a_33), not_null(b_33));
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
  ATerm t_33 = NULL,x_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym_Match_1))
    {
      x_33 = ATgetArgument(t_33, 0);
      {
        ATerm z_33 = NULL,a_34 = NULL;
        ATerm e_34 = NULL;
        t = not_null(x_33);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
            b_34 = t;
            o_33 :
            if(match_cons(b_34, sym_RootApp_1))
              {
                c_34 = ATgetArgument(b_34, 0);
                p_33 :
                if(match_cons(c_34, sym_Match_1))
                  {
                    d_34 = ATgetArgument(c_34, 0);
                    {
                      if(((z_33 != NULL) && (z_33 != d_34)))
                        _fail(d_34);
                      else
                        z_33 = d_34;
                      t = not_null(z_33);
                    }
                  }
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
            e_34 = t;
            if(((a_34 != NULL) && (a_34 != e_34)))
              _fail(e_34);
            else
              a_34 = e_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(a_34));
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
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym_Build_1))
    {
      d_36 = ATgetArgument(c_36, 0);
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
            ATerm q_36 = NULL;
            ATerm u_36 = NULL;
            t = new_0(t);
            {
              q_36 = t;
              {
                if(((h_36 != NULL) && (h_36 != q_36)))
                  _fail(q_36);
                else
                  h_36 = q_36;
                {
                  t = not_null(d_36);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
                      r_36 = t;
                      r_35 :
                      if(match_cons(r_36, sym_Anno_2))
                        {
                          s_36 = ATgetArgument(r_36, 0);
                          t_36 = ATgetArgument(r_36, 1);
                          {
                            if(((f_36 != NULL) && (f_36 != s_36)))
                              _fail(s_36);
                            else
                              f_36 = s_36;
                            {
                              if(((g_36 != NULL) && (g_36 != t_36)))
                                _fail(t_36);
                              else
                                g_36 = t_36;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_36));
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
                      u_36 = t;
                      if(((i_36 != NULL) && (i_36 != u_36)))
                        _fail(u_36);
                      else
                        i_36 = u_36;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_h_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_36)), not_null(f_36))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_36))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_36))));
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            {
              ATerm i_10 = t;
              int o_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
                  ATerm z_36 = NULL;
                  ATerm c_37 = NULL;
                  t = new_0(t);
                  {
                    z_36 = t;
                    {
                      if(((x_36 != NULL) && (x_36 != z_36)))
                        _fail(z_36);
                      else
                        x_36 = z_36;
                      {
                        t = not_null(d_36);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm a_37 = NULL,b_37 = NULL;
                            a_37 = t;
                            v_35 :
                            if(match_cons(a_37, sym_RootApp_1))
                              {
                                b_37 = ATgetArgument(a_37, 0);
                                {
                                  if(((w_36 != NULL) && (w_36 != b_37)))
                                    _fail(b_37);
                                  else
                                    w_36 = b_37;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_36));
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
                            c_37 = t;
                            if(((y_36 != NULL) && (y_36 != c_37)))
                              _fail(c_37);
                            else
                              y_36 = c_37;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_36)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_36), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_36))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_36))));
                  LocalPopChoice(o_10);
                }
              else
                {
                  t = i_10;
                  {
                    ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,k_37 = NULL;
                    ATerm l_37 = NULL;
                    ATerm p_37 = NULL;
                    t = new_0(t);
                    {
                      l_37 = t;
                      {
                        if(((g_37 != NULL) && (g_37 != l_37)))
                          _fail(l_37);
                        else
                          g_37 = l_37;
                        {
                          t = not_null(d_36);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
                              m_37 = t;
                              z_35 :
                              if(match_cons(m_37, sym_App_2))
                                {
                                  n_37 = ATgetArgument(m_37, 0);
                                  o_37 = ATgetArgument(m_37, 1);
                                  {
                                    if(((e_37 != NULL) && (e_37 != n_37)))
                                      _fail(n_37);
                                    else
                                      e_37 = n_37;
                                    {
                                      if(((f_37 != NULL) && (f_37 != o_37)))
                                        _fail(o_37);
                                      else
                                        f_37 = o_37;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_37));
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
                              p_37 = t;
                              if(((k_37 != NULL) && (k_37 != p_37)))
                                _fail(p_37);
                              else
                                k_37 = p_37;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(e_37), not_null(f_37), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_37)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_37))));
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
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
  j_38 = t;
  h_38 :
  if(match_cons(j_38, sym_Build_1))
    {
      k_38 = ATgetArgument(j_38, 0);
      i_38 :
      if(match_cons(k_38, sym_RootApp_1))
        {
          l_38 = ATgetArgument(k_38, 0);
          t = not_null(l_38);
        }
      else
        {
          if(match_cons(k_38, sym_App_2))
            {
              l_38 = ATgetArgument(k_38, 0);
              m_38 = ATgetArgument(k_38, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_38)), not_null(l_38));
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
ATerm As_2 (ATerm t, ATerm r_76 (ATerm), ATerm s_76 (ATerm))
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  y_38 = t;
  x_38 :
  if(match_cons(y_38, sym_As_2))
    {
      z_38 = ATgetArgument(y_38, 0);
      a_39 = ATgetArgument(y_38, 1);
      {
        ATerm e_39 = NULL,g_39 = NULL;
        ATerm f_39 = NULL;
        t = SSLgetAnnotations(not_null(y_38));
        {
          f_39 = t;
          if(((e_39 != NULL) && (e_39 != f_39)))
            _fail(f_39);
          else
            e_39 = f_39;
        }
        {
          t = not_null(z_38);
          {
            ATerm i_39 = NULL;
            t = r_76(t);
            {
              g_39 = t;
              {
                t = not_null(a_39);
                {
                  ATerm k_39 = NULL;
                  t = s_76(t);
                  {
                    i_39 = t;
                    {
                      ATerm l_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(g_39), not_null(i_39)), not_null(e_39));
                      {
                        l_39 = t;
                        if(((k_39 != NULL) && (k_39 != l_39)))
                          _fail(l_39);
                        else
                          k_39 = l_39;
                      }
                      t = not_null(k_39);
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
ATerm Prim_2 (ATerm t, ATerm c_80 (ATerm), ATerm d_80 (ATerm))
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym_Prim_2))
    {
      f_40 = ATgetArgument(e_40, 0);
      g_40 = ATgetArgument(e_40, 1);
      {
        ATerm m_40 = NULL,o_40 = NULL;
        ATerm n_40 = NULL;
        t = SSLgetAnnotations(not_null(e_40));
        {
          n_40 = t;
          if(((m_40 != NULL) && (m_40 != n_40)))
            _fail(n_40);
          else
            m_40 = n_40;
        }
        {
          t = not_null(f_40);
          {
            ATerm q_40 = NULL;
            t = c_80(t);
            {
              o_40 = t;
              {
                t = not_null(g_40);
                {
                  ATerm s_40 = NULL;
                  t = d_80(t);
                  {
                    q_40 = t;
                    {
                      ATerm t_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(o_40), not_null(q_40)), not_null(m_40));
                      {
                        t_40 = t;
                        if(((s_40 != NULL) && (s_40 != t_40)))
                          _fail(t_40);
                        else
                          s_40 = t_40;
                      }
                      t = not_null(s_40);
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
ATerm Explode_2 (ATerm t, ATerm n_76 (ATerm), ATerm o_76 (ATerm))
{
  ATerm n_41 = NULL,o_41 = NULL,v_41 = NULL;
  n_41 = t;
  g_41 :
  if(match_cons(n_41, sym_Explode_2))
    {
      o_41 = ATgetArgument(n_41, 0);
      v_41 = ATgetArgument(n_41, 1);
      {
        ATerm z_41 = NULL,c_42 = NULL;
        ATerm a_42 = NULL;
        t = SSLgetAnnotations(not_null(n_41));
        {
          a_42 = t;
          if(((z_41 != NULL) && (z_41 != a_42)))
            _fail(a_42);
          else
            z_41 = a_42;
        }
        {
          t = not_null(o_41);
          {
            ATerm e_42 = NULL;
            t = n_76(t);
            {
              c_42 = t;
              {
                t = not_null(v_41);
                {
                  ATerm g_42 = NULL;
                  t = o_76(t);
                  {
                    e_42 = t;
                    {
                      ATerm h_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(c_42), not_null(e_42)), not_null(z_41));
                      {
                        h_42 = t;
                        if(((g_42 != NULL) && (g_42 != h_42)))
                          _fail(h_42);
                        else
                          g_42 = h_42;
                      }
                      t = not_null(g_42);
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
ATerm Op_2 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm))
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
  t_42 = t;
  s_42 :
  if(match_cons(t_42, sym_Op_2))
    {
      u_42 = ATgetArgument(t_42, 0);
      v_42 = ATgetArgument(t_42, 1);
      {
        ATerm z_42 = NULL,b_43 = NULL;
        ATerm a_43 = NULL;
        t = SSLgetAnnotations(not_null(t_42));
        {
          a_43 = t;
          if(((z_42 != NULL) && (z_42 != a_43)))
            _fail(a_43);
          else
            z_42 = a_43;
        }
        {
          t = not_null(u_42);
          {
            ATerm d_43 = NULL;
            t = c_78(t);
            {
              b_43 = t;
              {
                t = not_null(v_42);
                {
                  ATerm f_43 = NULL;
                  t = d_78(t);
                  {
                    d_43 = t;
                    {
                      ATerm g_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(b_43), not_null(d_43)), not_null(z_42));
                      {
                        g_43 = t;
                        if(((f_43 != NULL) && (f_43 != g_43)))
                          _fail(g_43);
                        else
                          f_43 = g_43;
                      }
                      t = not_null(f_43);
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
ATerm pat_td_1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_80(t);
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm r_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, s_80);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            LocalPopChoice(v_10);
          }
        else
          {
            t = r_10;
            {
              ATerm x_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, s_80);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = x_10;
                  {
                    ATerm c_11 = t;
                    int d_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, s_80);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
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
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, s_80);
                                  return(t);
                                }
                                t = fetch_1(t, v_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, u_1);
                              LocalPopChoice(f_11);
                            }
                          else
                            {
                              t = e_11;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, s_80);
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
  ATerm x_43 = NULL,y_43 = NULL;
  x_43 = t;
  w_43 :
  if(match_cons(x_43, sym_Build_1))
    {
      y_43 = ATgetArgument(x_43, 0);
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_44 = NULL,b_44 = NULL;
            ATerm h_44 = NULL;
            t = not_null(y_43);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm c_44 = NULL,f_44 = NULL,g_44 = NULL;
                c_44 = t;
                p_43 :
                if(match_cons(c_44, sym_RootApp_1))
                  {
                    f_44 = ATgetArgument(c_44, 0);
                    q_43 :
                    if(match_cons(f_44, sym_Build_1))
                      {
                        g_44 = ATgetArgument(f_44, 0);
                        {
                          if(((a_44 != NULL) && (a_44 != g_44)))
                            _fail(g_44);
                          else
                            a_44 = g_44;
                          t = not_null(a_44);
                        }
                      }
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
                h_44 = t;
                if(((b_44 != NULL) && (b_44 != h_44)))
                  _fail(h_44);
                else
                  b_44 = h_44;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_44));
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            {
              ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
              ATerm v_44 = NULL;
              t = not_null(y_43);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
                  r_44 = t;
                  t_43 :
                  if(match_cons(r_44, sym_App_2))
                    {
                      s_44 = ATgetArgument(r_44, 0);
                      u_44 = ATgetArgument(r_44, 1);
                      u_43 :
                      if(match_cons(s_44, sym_Build_1))
                        {
                          t_44 = ATgetArgument(s_44, 0);
                          {
                            if(((p_44 != NULL) && (p_44 != t_44)))
                              _fail(t_44);
                            else
                              p_44 = t_44;
                            {
                              if(((o_44 != NULL) && (o_44 != u_44)))
                                _fail(u_44);
                              else
                                o_44 = u_44;
                              t = not_null(p_44);
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
                  v_44 = t;
                  if(((q_44 != NULL) && (q_44 != v_44)))
                    _fail(v_44);
                  else
                    q_44 = v_44;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_44));
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
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
  c_46 = t;
  s_45 :
  if(match_cons(c_46, sym_InfixApp_3))
    {
      d_46 = ATgetArgument(c_46, 0);
      x_45 = ATgetArgument(c_46, 1);
      w_45 = ATgetArgument(c_46, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_45), (ATerm) ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_45)), not_null(d_46))));
    }
  else
    {
      if(match_cons(c_46, sym_BAM_3))
        {
          d_46 = ATgetArgument(c_46, 0);
          x_45 = ATgetArgument(c_46, 1);
          w_45 = ATgetArgument(c_46, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(w_45))), not_null(d_46)), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_45))));
        }
      else
        {
          if(match_cons(c_46, sym_AM_2))
            {
              d_46 = ATgetArgument(c_46, 0);
              x_45 = ATgetArgument(c_46, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_46), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_45)));
            }
          else
            {
              if(match_cons(c_46, sym_MA_2))
                {
                  d_46 = ATgetArgument(c_46, 0);
                  x_45 = ATgetArgument(c_46, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_46)), not_null(x_45));
                }
              else
                {
                  if(match_cons(c_46, sym_BA_2))
                    {
                      d_46 = ATgetArgument(c_46, 0);
                      x_45 = ATgetArgument(c_46, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_45)), not_null(d_46));
                    }
                  else
                    {
                      if(match_cons(c_46, sym_Lets_2))
                        {
                          d_46 = ATgetArgument(c_46, 0);
                          x_45 = ATgetArgument(c_46, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_46), not_null(x_45));
                        }
                      else
                        {
                          if(match_cons(c_46, sym_LChoices_1))
                            {
                              d_46 = ATgetArgument(c_46, 0);
                              t_45 :
                              if(((ATgetType(d_46) == AT_LIST) && ((ATermList) d_46 != ATempty)))
                                {
                                  y_45 = ATgetFirst((ATermList) d_46);
                                  b_46 = (ATerm) ATgetNext((ATermList) d_46);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_45), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(b_46)));
                                }
                              else
                                {
                                  if(((ATermList) d_46 == ATempty))
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
                              if(match_cons(c_46, sym_Choices_1))
                                {
                                  d_46 = ATgetArgument(c_46, 0);
                                  u_45 :
                                  if(((ATgetType(d_46) == AT_LIST) && ((ATermList) d_46 != ATempty)))
                                    {
                                      y_45 = ATgetFirst((ATermList) d_46);
                                      b_46 = (ATerm) ATgetNext((ATermList) d_46);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_45), (ATerm) ATmakeAppl(sym_Choices_1, not_null(b_46)));
                                    }
                                  else
                                    {
                                      if(((ATermList) d_46 == ATempty))
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
                                  if(match_cons(c_46, sym_Seqs_1))
                                    {
                                      d_46 = ATgetArgument(c_46, 0);
                                      v_45 :
                                      if(((ATgetType(d_46) == AT_LIST) && ((ATermList) d_46 != ATempty)))
                                        {
                                          y_45 = ATgetFirst((ATermList) d_46);
                                          b_46 = (ATerm) ATgetNext((ATermList) d_46);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_45), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(b_46)));
                                        }
                                      else
                                        {
                                          if(((ATermList) d_46 == ATempty))
                                            {
                                              t = term_m_11;
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
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_48 = NULL,w_48 = NULL;
  q_47 = t;
  n_47 :
  if(match_cons(q_47, sym__2))
    {
      r_47 = ATgetArgument(q_47, 0);
      u_47 = ATgetArgument(q_47, 1);
      o_47 :
      if(match_cons(r_47, sym__2))
        {
          s_47 = ATgetArgument(r_47, 0);
          t_47 = ATgetArgument(r_47, 1);
          p_47 :
          if(match_cons(u_47, sym__2))
            {
              v_48 = ATgetArgument(u_47, 0);
              w_48 = ATgetArgument(u_47, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_48)), not_null(s_47)), (ATerm) ATinsert(CheckATermList(not_null(w_48)), not_null(t_47)));
            }
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
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
  f_51 = t;
  e_51 :
  if(((ATgetType(f_51) == AT_LIST) && ((ATermList) f_51 != ATempty)))
    {
      g_51 = ATgetFirst((ATermList) f_51);
      h_51 = (ATerm) ATgetNext((ATermList) f_51);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_51), not_null(h_51));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm n_51 = NULL;
  n_51 = t;
  m_51 :
  if(((ATermList) n_51 == ATempty))
    {
      t = term_r_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm z_102 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, z_102);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL;
  ATerm c_52 (ATerm t)
  {
    ATerm z_51 = NULL;
    ATerm a_52 = NULL;
    t = not_null(w_51);
    {
      ATerm s_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_11;
        }
      {
        t = new_0(t);
        {
          a_52 = t;
          if(((z_51 != NULL) && (z_51 != a_52)))
            _fail(a_52);
          else
            z_51 = a_52;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(z_51)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_51)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_51))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_51))));
    return(t);
  }
  ATerm d_52 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_m_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_51))));
    return(t);
  }
  w_51 = t;
  v_51 :
  if(match_cons(w_51, sym_Var_1))
    {
      x_51 = ATgetArgument(w_51, 0);
      {
        ATerm t_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_52(t);
            LocalPopChoice(x_11);
          }
        else
          {
            t = t_11;
            t = d_52(t);
          }
      }
    }
  else
    {
      t = c_52(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm u_0 (ATerm))
{
  ATerm o_52 = NULL,p_52 = NULL;
  o_52 = t;
  n_52 :
  if(match_cons(o_52, sym_Var_1))
    {
      p_52 = ATgetArgument(o_52, 0);
      {
        ATerm z_11 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_52 = NULL,u_52 = NULL;
            ATerm t_52 = NULL;
            t = SSLgetAnnotations(not_null(o_52));
            {
              t_52 = t;
              if(((s_52 != NULL) && (s_52 != t_52)))
                _fail(t_52);
              else
                s_52 = t_52;
            }
            {
              t = not_null(p_52);
              {
                ATerm w_52 = NULL;
                t = u_0(t);
                {
                  u_52 = t;
                  {
                    ATerm x_52 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_52)), not_null(s_52));
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
            LocalPopChoice(c_12);
          }
        else
          {
            t = z_11;
            {
              ATerm a_53 = NULL,c_53 = NULL;
              ATerm b_53 = NULL;
              t = SSLgetAnnotations(not_null(o_52));
              {
                b_53 = t;
                if(((a_53 != NULL) && (a_53 != b_53)))
                  _fail(b_53);
                else
                  a_53 = b_53;
              }
              {
                t = not_null(p_52);
                {
                  ATerm e_53 = NULL;
                  t = u_0(t);
                  {
                    c_53 = t;
                    {
                      ATerm f_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_53)), not_null(a_53));
                      {
                        f_53 = t;
                        if(((e_53 != NULL) && (e_53 != f_53)))
                          _fail(f_53);
                        else
                          e_53 = f_53;
                      }
                      t = not_null(e_53);
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
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
  t_53 = t;
  s_53 :
  if(match_cons(t_53, sym_Prim_2))
    {
      u_53 = ATgetArgument(t_53, 0);
      v_53 = ATgetArgument(t_53, 1);
      {
        ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
        ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
        t = not_null(v_53);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm d_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_12;
              }
            return(t);
          }
          t = fetch_1(t, z_1);
          {
            t = not_null(v_53);
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
                  b_54 = t;
                  q_53 :
                  if(match_cons(b_54, sym__2))
                    {
                      c_54 = ATgetArgument(b_54, 0);
                      d_54 = ATgetArgument(b_54, 1);
                      r_53 :
                      if(match_cons(d_54, sym__2))
                        {
                          e_54 = ATgetArgument(d_54, 0);
                          f_54 = ATgetArgument(d_54, 1);
                          {
                            if(((y_53 != NULL) && (y_53 != c_54)))
                              _fail(c_54);
                            else
                              y_53 = c_54;
                            {
                              if(((z_53 != NULL) && (z_53 != e_54)))
                                _fail(e_54);
                              else
                                z_53 = e_54;
                              if(((a_54 != NULL) && (a_54 != f_54)))
                                _fail(f_54);
                              else
                                a_54 = f_54;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(z_53)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(u_53), not_null(a_54))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm s_91 (ATerm), ATerm t_91 (ATerm))
{
  ATerm i_54 (ATerm t)
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_91(t);
        t = i_54(t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        t = t_91(t);
      }
    return(t);
  }
  t = i_54(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm v_91 (ATerm))
{
  t = repeat_2(t, v_91, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm n_54 = NULL;
  n_54 = t;
  m_54 :
  if(match_cons(n_54, sym_Wld_0))
    {
      ATerm p_54 = NULL,r_54 = NULL;
      ATerm g_12;
      g_12 = t;
      {
        ATerm q_54 = NULL;
        t = SSLgetAnnotations(not_null(n_54));
        {
          q_54 = t;
          if(((p_54 != NULL) && (p_54 != q_54)))
            _fail(q_54);
          else
            p_54 = q_54;
        }
      }
      t = g_12;
      {
        ATerm s_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(p_54));
        {
          s_54 = t;
          if(((r_54 != NULL) && (r_54 != s_54)))
            _fail(s_54);
          else
            r_54 = s_54;
        }
        t = not_null(r_54);
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
      ATerm b_2 (ATerm t)
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
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
      t = h_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm h_76 (ATerm), ATerm i_76 (ATerm))
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL;
  c_55 = t;
  b_55 :
  if(match_cons(c_55, sym_App_2))
    {
      d_55 = ATgetArgument(c_55, 0);
      e_55 = ATgetArgument(c_55, 1);
      {
        ATerm i_55 = NULL,k_55 = NULL;
        ATerm j_55 = NULL;
        t = SSLgetAnnotations(not_null(c_55));
        {
          j_55 = t;
          if(((i_55 != NULL) && (i_55 != j_55)))
            _fail(j_55);
          else
            i_55 = j_55;
        }
        {
          t = not_null(d_55);
          {
            ATerm n_55 = NULL;
            t = h_76(t);
            {
              k_55 = t;
              {
                t = not_null(e_55);
                {
                  ATerm p_55 = NULL;
                  t = i_76(t);
                  {
                    n_55 = t;
                    {
                      ATerm q_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(k_55), not_null(n_55)), not_null(i_55));
                      {
                        q_55 = t;
                        if(((p_55 != NULL) && (p_55 != q_55)))
                          _fail(q_55);
                        else
                          p_55 = q_55;
                      }
                      t = not_null(p_55);
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
ATerm Con_3 (ATerm t, ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm g_76 (ATerm))
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL;
  d_56 = t;
  c_56 :
  if(match_cons(d_56, sym_Con_3))
    {
      e_56 = ATgetArgument(d_56, 0);
      f_56 = ATgetArgument(d_56, 1);
      g_56 = ATgetArgument(d_56, 2);
      {
        ATerm l_56 = NULL,n_56 = NULL;
        ATerm m_56 = NULL;
        t = SSLgetAnnotations(not_null(d_56));
        {
          m_56 = t;
          if(((l_56 != NULL) && (l_56 != m_56)))
            _fail(m_56);
          else
            l_56 = m_56;
        }
        {
          t = not_null(e_56);
          {
            ATerm p_56 = NULL;
            t = e_76(t);
            {
              n_56 = t;
              {
                t = not_null(f_56);
                {
                  ATerm r_56 = NULL;
                  t = f_76(t);
                  {
                    p_56 = t;
                    {
                      t = not_null(g_56);
                      {
                        ATerm t_56 = NULL;
                        t = g_76(t);
                        {
                          r_56 = t;
                          {
                            ATerm u_56 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(n_56), not_null(p_56), not_null(r_56)), not_null(l_56));
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
  ATerm o_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
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
      t = o_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL;
  f_57 = t;
  d_57 :
  if(match_cons(f_57, sym_SRule_1))
    {
      g_57 = ATgetArgument(f_57, 0);
      e_57 :
      if(match_cons(g_57, sym_StratRule_3))
        {
          h_57 = ATgetArgument(g_57, 0);
          i_57 = ATgetArgument(g_57, 1);
          j_57 = ATgetArgument(g_57, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_57)), (ATerm) ATmakeAppl(sym_Where_1, not_null(j_57))), not_null(h_57)));
        }
      else
        {
          if(match_cons(g_57, sym_Rule_3))
            {
              h_57 = ATgetArgument(g_57, 0);
              i_57 = ATgetArgument(g_57, 1);
              j_57 = ATgetArgument(g_57, 2);
              {
                t = not_null(h_57);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(i_57);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(i_57))), (ATerm) ATmakeAppl(sym_Where_1, not_null(j_57))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_57))));
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
ATerm Scope_2 (ATerm t, ATerm z_79 (ATerm), ATerm a_80 (ATerm))
{
  ATerm j_58 = NULL,k_58 = NULL,p_58 = NULL;
  j_58 = t;
  i_58 :
  if(match_cons(j_58, sym_Scope_2))
    {
      k_58 = ATgetArgument(j_58, 0);
      p_58 = ATgetArgument(j_58, 1);
      {
        ATerm t_58 = NULL,v_58 = NULL;
        ATerm u_58 = NULL;
        t = SSLgetAnnotations(not_null(j_58));
        {
          u_58 = t;
          if(((t_58 != NULL) && (t_58 != u_58)))
            _fail(u_58);
          else
            t_58 = u_58;
        }
        {
          t = not_null(k_58);
          {
            ATerm x_58 = NULL;
            t = z_79(t);
            {
              v_58 = t;
              {
                t = not_null(p_58);
                {
                  ATerm z_58 = NULL;
                  t = a_80(t);
                  {
                    x_58 = t;
                    {
                      ATerm a_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(v_58), not_null(x_58)), not_null(t_58));
                      {
                        a_59 = t;
                        if(((z_58 != NULL) && (z_58 != a_59)))
                          _fail(a_59);
                        else
                          z_58 = a_59;
                      }
                      t = not_null(z_58);
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
ATerm oncetd_1 (ATerm t, ATerm a_107 (ATerm))
{
  ATerm p_59 (ATerm t)
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_107(t);
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = _one(t, p_59);
      }
    return(t);
  }
  t = p_59(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
  j_60 = t;
  h_60 :
  if(match_cons(j_60, sym_SRule_1))
    {
      k_60 = ATgetArgument(j_60, 0);
      i_60 :
      if(match_cons(k_60, sym_Rule_3))
        {
          l_60 = ATgetArgument(k_60, 0);
          m_60 = ATgetArgument(k_60, 1);
          n_60 = ATgetArgument(k_60, 2);
          {
            ATerm u_60 = NULL,v_60 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,j_61 = NULL,k_61 = NULL;
            ATerm l_61 = NULL;
            ATerm z_61 = NULL;
            t = new_0(t);
            {
              l_61 = t;
              {
                if(((e_61 != NULL) && (e_61 != l_61)))
                  _fail(l_61);
                else
                  e_61 = l_61;
                {
                  t = not_null(l_60);
                  {
                    ATerm h_62 = NULL;
                    ATerm d_2 (ATerm t)
                    {
                      ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,x_61 = NULL,y_61 = NULL;
                      m_61 = t;
                      t_59 :
                      if(match_cons(m_61, sym_Con_3))
                        {
                          n_61 = ATgetArgument(m_61, 0);
                          x_61 = ATgetArgument(m_61, 1);
                          y_61 = ATgetArgument(m_61, 2);
                          u_59 :
                          if(match_cons(n_61, sym_Var_1))
                            {
                              o_61 = ATgetArgument(n_61, 0);
                              {
                                if(((d_61 != NULL) && (d_61 != o_61)))
                                  _fail(o_61);
                                else
                                  d_61 = o_61;
                                {
                                  if(((b_61 != NULL) && (b_61 != x_61)))
                                    _fail(x_61);
                                  else
                                    b_61 = x_61;
                                  {
                                    if(((u_60 != NULL) && (u_60 != y_61)))
                                      _fail(y_61);
                                    else
                                      u_60 = y_61;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_61));
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
                      z_61 = t;
                      {
                        if(((j_61 != NULL) && (j_61 != z_61)))
                          _fail(z_61);
                        else
                          j_61 = z_61;
                        {
                          t = not_null(m_60);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL;
                              a_62 = t;
                              x_59 :
                              if(match_cons(a_62, sym_Con_3))
                                {
                                  b_62 = ATgetArgument(a_62, 0);
                                  d_62 = ATgetArgument(a_62, 1);
                                  e_62 = ATgetArgument(a_62, 2);
                                  d_60 :
                                  if(match_cons(b_62, sym_Var_1))
                                    {
                                      c_62 = ATgetArgument(b_62, 0);
                                      e_60 :
                                      if(match_cons(e_62, sym_Call_2))
                                        {
                                          f_62 = ATgetArgument(e_62, 0);
                                          g_62 = ATgetArgument(e_62, 1);
                                          f_60 :
                                          if(((ATermList) g_62 == ATempty))
                                            {
                                              {
                                                if(((d_61 != NULL) && (d_61 != c_62)))
                                                  _fail(c_62);
                                                else
                                                  d_61 = c_62;
                                                {
                                                  if(((c_61 != NULL) && (c_61 != d_62)))
                                                    _fail(d_62);
                                                  else
                                                    c_61 = d_62;
                                                  {
                                                    if(((v_60 != NULL) && (v_60 != f_62)))
                                                      _fail(f_62);
                                                    else
                                                      v_60 = f_62;
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
                                    }
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
                              h_62 = t;
                              if(((k_61 != NULL) && (k_61 != h_62)))
                                _fail(h_62);
                              else
                                k_61 = h_62;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_61)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_61), not_null(k_61), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_60), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(v_60), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_61), not_null(c_61), term_m_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_61)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_61)))))));
          }
        }
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
    ATerm z_12 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = z_12;
        {
          ATerm e_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(f_13);
            }
          else
            {
              t = e_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm k_105 (ATerm))
{
  t = k_105(t);
  {
    ATerm g_2 (ATerm t)
    {
      t = topdown_1(t, k_105);
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
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            {
              ATerm n_13 = t;
              int o_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(o_13);
                }
              else
                {
                  t = n_13;
                  {
                    ATerm t_13 = t;
                    int u_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(u_13);
                      }
                    else
                      {
                        t = t_13;
                        {
                          ATerm v_13 = t;
                          int w_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(w_13);
                            }
                          else
                            {
                              t = v_13;
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
  ATerm t_62 = NULL;
  t_62 = t;
  s_62 :
  if(match_cons(t_62, sym__0))
    {
      ATerm v_62 = NULL,x_62 = NULL;
      ATerm x_13;
      x_13 = t;
      {
        ATerm w_62 = NULL;
        t = SSLgetAnnotations(not_null(t_62));
        {
          w_62 = t;
          if(((v_62 != NULL) && (v_62 != w_62)))
            _fail(w_62);
          else
            v_62 = w_62;
        }
      }
      t = x_13;
      {
        ATerm y_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(v_62));
        {
          y_62 = t;
          if(((x_62 != NULL) && (x_62 != y_62)))
            _fail(y_62);
          else
            x_62 = y_62;
        }
        t = not_null(x_62);
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
  ATerm k_63 = NULL;
  ATerm m_63 = NULL,n_63 = NULL,v_63 = NULL,x_63 = NULL;
  k_63 = t;
  {
    ATerm y_13;
    y_13 = t;
    {
      ATerm o_63 = NULL;
      ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL;
      t = not_null(k_63);
      {
        o_63 = t;
        {
          t = SSL_explode_term(not_null(o_63));
          {
            q_63 = t;
            f_63 :
            if(match_cons(q_63, sym__2))
              {
                r_63 = ATgetArgument(q_63, 0);
                s_63 = ATgetArgument(q_63, 1);
                g_63 :
                if(match_string(r_63, ""))
                  {
                    h_63 :
                    if(((ATgetType(s_63) == AT_LIST) && ((ATermList) s_63 != ATempty)))
                      {
                        t_63 = ATgetFirst((ATermList) s_63);
                        u_63 = (ATerm) ATgetNext((ATermList) s_63);
                        {
                          if(((m_63 != NULL) && (m_63 != t_63)))
                            _fail(t_63);
                          else
                            m_63 = t_63;
                          if(((n_63 != NULL) && (n_63 != u_63)))
                            _fail(u_63);
                          else
                            n_63 = u_63;
                        }
                      }
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
    t = y_13;
    {
      ATerm z_13;
      z_13 = t;
      {
        ATerm w_63 = NULL;
        t = term_p_9;
        {
          w_63 = t;
          if(((v_63 != NULL) && (v_63 != w_63)))
            _fail(w_63);
          else
            v_63 = w_63;
        }
      }
      t = z_13;
      {
        t = SSL_mkterm(not_null(v_63), not_null(n_63));
        {
          x_63 = t;
          t = not_null(x_63);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm p_64 = NULL;
  ATerm r_64 = NULL,s_64 = NULL;
  p_64 = t;
  {
    ATerm t_64 = NULL;
    ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
    t = not_null(p_64);
    {
      t_64 = t;
      {
        t = SSL_explode_term(not_null(t_64));
        {
          x_64 = t;
          h_64 :
          if(match_cons(x_64, sym__2))
            {
              y_64 = ATgetArgument(x_64, 0);
              z_64 = ATgetArgument(x_64, 1);
              i_64 :
              if(match_string(y_64, ""))
                {
                  o_64 :
                  if(((ATgetType(z_64) == AT_LIST) && ((ATermList) z_64 != ATempty)))
                    {
                      a_65 = ATgetFirst((ATermList) z_64);
                      b_65 = (ATerm) ATgetNext((ATermList) z_64);
                      {
                        if(((s_64 != NULL) && (s_64 != a_65)))
                          _fail(a_65);
                        else
                          s_64 = a_65;
                        if(((r_64 != NULL) && (r_64 != b_65)))
                          _fail(b_65);
                        else
                          r_64 = b_65;
                      }
                    }
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
    t = not_null(s_64);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm t_104 (ATerm))
{
  ATerm a_66 = NULL,c_66 = NULL,e_66 = NULL;
  ATerm g_66 (ATerm t)
  {
    ATerm a_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_65 = NULL,x_65 = NULL;
        ATerm g_14;
        g_14 = t;
        {
          ATerm w_65 = NULL;
          t = map_1(t, Thd_0);
          {
            t = t_104(t);
            {
              w_65 = t;
              if(((v_65 != NULL) && (v_65 != w_65)))
                _fail(w_65);
              else
                v_65 = w_65;
            }
          }
        }
        t = g_14;
        {
          ATerm y_65 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = g_66(t);
            {
              y_65 = t;
              if(((x_65 != NULL) && (x_65 != y_65)))
                _fail(y_65);
              else
                x_65 = y_65;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(x_65)), not_null(v_65));
        }
        LocalPopChoice(d_14);
      }
    else
      {
        t = a_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = g_66(t);
  {
    ATerm k_14;
    k_14 = t;
    {
      ATerm b_66 = NULL;
      b_66 = t;
      if(((a_66 != NULL) && (a_66 != b_66)))
        _fail(b_66);
      else
        a_66 = b_66;
    }
    t = k_14;
    {
      ATerm l_14;
      l_14 = t;
      {
        ATerm d_66 = NULL;
        t = term_p_9;
        {
          d_66 = t;
          if(((c_66 != NULL) && (c_66 != d_66)))
            _fail(d_66);
          else
            c_66 = d_66;
        }
      }
      t = l_14;
      {
        t = SSL_mkterm(not_null(c_66), not_null(a_66));
        {
          e_66 = t;
          t = not_null(e_66);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm e_67 = NULL;
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
  e_67 = t;
  {
    ATerm j_67 = NULL;
    ATerm k_67 = NULL;
    t = new_0(t);
    {
      j_67 = t;
      {
        if(((g_67 != NULL) && (g_67 != j_67)))
          _fail(j_67);
        else
          g_67 = j_67;
        {
          ATerm l_67 = NULL;
          t = new_0(t);
          {
            k_67 = t;
            {
              if(((h_67 != NULL) && (h_67 != k_67)))
                _fail(k_67);
              else
                h_67 = k_67;
              {
                t = new_0(t);
                {
                  l_67 = t;
                  if(((i_67 != NULL) && (i_67 != l_67)))
                    _fail(l_67);
                  else
                    i_67 = l_67;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_67)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_67)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_67))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(g_67), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_14), term_r_14)), not_null(h_67), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_67)), not_null(i_67), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_67)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
  s_67 = t;
  r_67 :
  if(match_cons(s_67, sym__2))
    {
      t_67 = ATgetArgument(s_67, 0);
      u_67 = ATgetArgument(s_67, 1);
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(t_67), not_null(u_67));
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            t = SSL_subtr(not_null(t_67), not_null(u_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm p_97 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
    h_68 = t;
    z_67 :
    if(match_cons(h_68, sym__2))
      {
        i_68 = ATgetArgument(h_68, 0);
        j_68 = ATgetArgument(h_68, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(i_68), not_null(j_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL;
    m_68 = t;
    b_68 :
    if(match_cons(m_68, sym__3))
      {
        n_68 = ATgetArgument(m_68, 0);
        o_68 = ATgetArgument(m_68, 1);
        p_68 = ATgetArgument(m_68, 2);
        c_68 :
        if(match_int(n_68, 0))
          {
            t = not_null(p_68);
          }
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
    ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
    s_68 = t;
    g_68 :
    if(match_cons(s_68, sym__3))
      {
        t_68 = ATgetArgument(s_68, 0);
        u_68 = ATgetArgument(s_68, 1);
        v_68 = ATgetArgument(s_68, 2);
        {
          ATerm b_69 = NULL,d_69 = NULL;
          ATerm w_14;
          w_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_68), term_q_6);
            t = geq_0(t);
          }
          t = w_14;
          {
            ATerm d_15;
            d_15 = t;
            {
              ATerm c_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_68), term_q_6);
              {
                t = subt_0(t);
                {
                  c_69 = t;
                  if(((b_69 != NULL) && (b_69 != c_69)))
                    _fail(c_69);
                  else
                    b_69 = c_69;
                }
              }
            }
            t = d_15;
            {
              ATerm e_69 = NULL;
              t = not_null(u_68);
              {
                t = p_97(t);
                {
                  e_69 = t;
                  if(((d_69 != NULL) && (d_69 != e_69)))
                    _fail(e_69);
                  else
                    d_69 = e_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(b_69), not_null(u_68), (ATerm) ATinsert(CheckATermList(not_null(v_68)), not_null(d_69)));
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
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
  p_69 = t;
  o_69 :
  if(match_cons(p_69, sym__2))
    {
      q_69 = ATgetArgument(p_69, 0);
      r_69 = ATgetArgument(p_69, 1);
      {
        ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
        ATerm x_69 = NULL;
        ATerm y_69 = NULL;
        t = new_0(t);
        {
          x_69 = t;
          {
            if(((u_69 != NULL) && (u_69 != x_69)))
              _fail(x_69);
            else
              u_69 = x_69;
            {
              ATerm z_69 = NULL;
              t = new_0(t);
              {
                y_69 = t;
                {
                  if(((v_69 != NULL) && (v_69 != y_69)))
                    _fail(y_69);
                  else
                    v_69 = y_69;
                  {
                    t = new_0(t);
                    {
                      z_69 = t;
                      if(((w_69 != NULL) && (w_69 != z_69)))
                        _fail(z_69);
                      else
                        w_69 = z_69;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_69)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_69)))), (ATerm) ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_69))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_69), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_14), term_r_14)), not_null(v_69), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_69)), not_null(w_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_69)));
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
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL;
  h_70 = t;
  f_70 :
  if(match_cons(h_70, sym__2))
    {
      i_70 = ATgetArgument(h_70, 0);
      j_70 = ATgetArgument(h_70, 1);
      g_70 :
      if(((ATermList) j_70 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm x_102 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, x_102);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
  n_70 = t;
  m_70 :
  if(((ATgetType(n_70) == AT_LIST) && ((ATermList) n_70 != ATempty)))
    {
      o_70 = ATgetFirst((ATermList) n_70);
      p_70 = (ATerm) ATgetNext((ATermList) n_70);
      t = not_null(p_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL;
  w_70 = t;
  u_70 :
  if(((ATgetType(w_70) == AT_LIST) && ((ATermList) w_70 != ATempty)))
    {
      x_70 = ATgetFirst((ATermList) w_70);
      y_70 = (ATerm) ATgetNext((ATermList) w_70);
      v_70 :
      if(((ATermList) y_70 == ATempty))
        {
          t = not_null(x_70);
        }
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
  ATerm e_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = e_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL;
  ATerm u_73 (ATerm t)
  {
    ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,w_72 = NULL;
    ATerm n_15;
    n_15 = t;
    {
      ATerm j_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL;
      ATerm k_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_71), term_q_6);
      {
        t = add_0(t);
        {
          k_72 = t;
          if(((j_72 != NULL) && (j_72 != k_72)))
            _fail(k_72);
          else
            j_72 = k_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_72), term_o_15);
        {
          t = copy_1(t, new_0);
          {
            l_72 = t;
            k_71 :
            if(((ATgetType(l_72) == AT_LIST) && ((ATermList) l_72 != ATempty)))
              {
                m_72 = ATgetFirst((ATermList) l_72);
                n_72 = (ATerm) ATgetNext((ATermList) l_72);
                {
                  ATerm o_72 = NULL;
                  if(((b_72 != NULL) && (b_72 != m_72)))
                    _fail(m_72);
                  else
                    b_72 = m_72;
                  {
                    if(((c_72 != NULL) && (c_72 != n_72)))
                      _fail(n_72);
                    else
                      c_72 = n_72;
                    {
                      t = not_null(c_72);
                      {
                        ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL;
                        t = last_0(t);
                        {
                          o_72 = t;
                          {
                            if(((a_72 != NULL) && (a_72 != o_72)))
                              _fail(o_72);
                            else
                              a_72 = o_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_72)), not_null(b_72)), not_null(c_72));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    p_72 = t;
                                    j_71 :
                                    if(match_cons(p_72, sym__6))
                                      {
                                        q_72 = ATgetArgument(p_72, 0);
                                        r_72 = ATgetArgument(p_72, 1);
                                        s_72 = ATgetArgument(p_72, 2);
                                        t_72 = ATgetArgument(p_72, 3);
                                        u_72 = ATgetArgument(p_72, 4);
                                        v_72 = ATgetArgument(p_72, 5);
                                        {
                                          if(((d_72 != NULL) && (d_72 != q_72)))
                                            _fail(q_72);
                                          else
                                            d_72 = q_72;
                                          {
                                            if(((e_72 != NULL) && (e_72 != r_72)))
                                              _fail(r_72);
                                            else
                                              e_72 = r_72;
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
                                                  if(((i_72 != NULL) && (i_72 != v_72)))
                                                    _fail(v_72);
                                                  else
                                                    i_72 = v_72;
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
    t = n_15;
    {
      ATerm x_72 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_72)), not_null(f_72)), not_null(c_72));
      {
        t = concat_0(t);
        {
          x_72 = t;
          if(((w_72 != NULL) && (w_72 != x_72)))
            _fail(x_72);
          else
            w_72 = x_72;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(v_71), term_p_15), not_null(e_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(w_72)), not_null(b_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(v_71), not_null(g_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(v_71), not_null(i_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(d_72))))));
    }
    return(t);
  }
  ATerm v_73 (ATerm t)
  {
    ATerm z_72 = NULL;
    ATerm a_73 = NULL;
    t = new_0(t);
    {
      a_73 = t;
      if(((z_72 != NULL) && (z_72 != a_73)))
        _fail(a_73);
      else
        z_72 = a_73;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(v_71), term_p_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(v_71), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(v_71), (ATerm) ATempty))), term_m_11))));
    return(t);
  }
  ATerm w_73 (ATerm t)
  {
    ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,s_73 = NULL;
    ATerm q_15;
    q_15 = t;
    {
      ATerm k_73 = NULL;
      ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL;
      t = new_0(t);
      {
        k_73 = t;
        {
          if(((d_73 != NULL) && (d_73 != k_73)))
            _fail(k_73);
          else
            d_73 = k_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_71), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_73)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  l_73 = t;
                  p_71 :
                  if(match_cons(l_73, sym__6))
                    {
                      m_73 = ATgetArgument(l_73, 0);
                      n_73 = ATgetArgument(l_73, 1);
                      o_73 = ATgetArgument(l_73, 2);
                      p_73 = ATgetArgument(l_73, 3);
                      q_73 = ATgetArgument(l_73, 4);
                      r_73 = ATgetArgument(l_73, 5);
                      {
                        if(((e_73 != NULL) && (e_73 != m_73)))
                          _fail(m_73);
                        else
                          e_73 = m_73;
                        {
                          if(((f_73 != NULL) && (f_73 != n_73)))
                            _fail(n_73);
                          else
                            f_73 = n_73;
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
                                if(((j_73 != NULL) && (j_73 != r_73)))
                                  _fail(r_73);
                                else
                                  j_73 = r_73;
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
    t = q_15;
    {
      ATerm t_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_73), not_null(i_73));
      {
        t = conc_0(t);
        {
          t_73 = t;
          if(((s_73 != NULL) && (s_73 != t_73)))
            _fail(t_73);
          else
            s_73 = t_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(v_71), term_r_15), not_null(f_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(s_73)), not_null(d_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(v_71), not_null(h_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(v_71), not_null(j_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_73))))));
    }
    return(t);
  }
  u_71 = t;
  r_71 :
  if(match_cons(u_71, sym__3))
    {
      v_71 = ATgetArgument(u_71, 0);
      w_71 = ATgetArgument(u_71, 1);
      x_71 = ATgetArgument(u_71, 2);
      s_71 :
      if(match_string(w_71, "T"))
        {
          t_71 :
          if(match_int(x_71, 0))
            {
              ATerm s_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_73(t);
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = s_15;
                  t = v_73(t);
                }
            }
          else
            {
              t = u_73(t);
            }
        }
      else
        {
          if(match_string(w_71, "D"))
            {
              t = w_73(t);
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
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,s_74 = NULL,t_74 = NULL;
  l_74 = t;
  i_74 :
  if(match_cons(l_74, sym__2))
    {
      m_74 = ATgetArgument(l_74, 0);
      t_74 = ATgetArgument(l_74, 1);
      j_74 :
      if(match_cons(m_74, sym__2))
        {
          n_74 = ATgetArgument(m_74, 0);
          s_74 = ATgetArgument(m_74, 1);
          k_74 :
          if(match_cons(n_74, sym_Mod_2))
            {
              o_74 = ATgetArgument(n_74, 0);
              p_74 = ATgetArgument(n_74, 1);
              {
                ATerm y_74 = NULL;
                ATerm z_74 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_74), not_null(p_74), not_null(s_74));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      z_74 = t;
                      if(((y_74 != NULL) && (y_74 != z_74)))
                        _fail(z_74);
                      else
                        y_74 = z_74;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_74), not_null(t_74));
              }
            }
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
  ATerm d_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(l_16);
    }
  else
    {
      t = d_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL;
  f_75 = t;
  d_75 :
  if(match_cons(f_75, sym__5))
    {
      g_75 = ATgetArgument(f_75, 0);
      j_75 = ATgetArgument(f_75, 1);
      k_75 = ATgetArgument(f_75, 2);
      l_75 = ATgetArgument(f_75, 3);
      m_75 = ATgetArgument(f_75, 4);
      e_75 :
      if(((ATgetType(g_75) == AT_LIST) && ((ATermList) g_75 != ATempty)))
        {
          h_75 = ATgetFirst((ATermList) g_75);
          i_75 = (ATerm) ATgetNext((ATermList) g_75);
          t = (ATerm) ATmakeAppl(sym__5, not_null(i_75), not_null(j_75), not_null(k_75), not_null(l_75), (ATerm) ATinsert(CheckATermList(not_null(m_75)), not_null(h_75)));
        }
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
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL;
  x_75 = t;
  v_75 :
  if(match_cons(x_75, sym__2))
    {
      y_75 = ATgetArgument(x_75, 0);
      z_75 = ATgetArgument(x_75, 1);
      w_75 :
      if(((ATgetType(z_75) == AT_LIST) && ((ATermList) z_75 != ATempty)))
        {
          a_76 = ATgetFirst((ATermList) z_75);
          b_76 = (ATerm) ATgetNext((ATermList) z_75);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_75)), not_null(a_76)), not_null(b_76));
        }
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
  ATerm p_76 = NULL,q_76 = NULL,t_76 = NULL;
  p_76 = t;
  m_76 :
  if(match_cons(p_76, sym__2))
    {
      q_76 = ATgetArgument(p_76, 0);
      t_76 = ATgetArgument(p_76, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_76)), not_null(q_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL;
  b_77 = t;
  y_76 :
  if(match_cons(b_77, sym__2))
    {
      c_77 = ATgetArgument(b_77, 0);
      f_77 = ATgetArgument(b_77, 1);
      z_76 :
      if(((ATgetType(c_77) == AT_LIST) && ((ATermList) c_77 != ATempty)))
        {
          d_77 = ATgetFirst((ATermList) c_77);
          e_77 = (ATerm) ATgetNext((ATermList) c_77);
          a_77 :
          if(((ATgetType(f_77) == AT_LIST) && ((ATermList) f_77 != ATempty)))
            {
              g_77 = ATgetFirst((ATermList) f_77);
              h_77 = (ATerm) ATgetNext((ATermList) f_77);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(d_77), not_null(g_77)), (ATerm) ATmakeAppl(sym__2, not_null(e_77), not_null(h_77)));
            }
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
  ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL;
  r_77 = t;
  o_77 :
  if(match_cons(r_77, sym__2))
    {
      s_77 = ATgetArgument(r_77, 0);
      t_77 = ATgetArgument(r_77, 1);
      p_77 :
      if(((ATermList) s_77 == ATempty))
        {
          q_77 :
          if(((ATermList) t_77 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm))
{
  ATerm w_77 (ATerm t)
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_102(t);
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          t = q_102(t);
          {
            t = _2(t, s_102, w_77);
            t = r_102(t);
          }
        }
      }
    return(t);
  }
  t = w_77(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm u_102 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, u_102);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL;
  k_78 = t;
  i_78 :
  if(((ATgetType(k_78) == AT_LIST) && ((ATermList) k_78 != ATempty)))
    {
      l_78 = ATgetFirst((ATermList) k_78);
      o_78 = (ATerm) ATgetNext((ATermList) k_78);
      j_78 :
      if(match_cons(l_78, sym__2))
        {
          m_78 = ATgetArgument(l_78, 0);
          n_78 = ATgetArgument(l_78, 1);
          {
            ATerm s_78 = NULL,t_78 = NULL,i_79 = NULL,o_79 = NULL;
            ATerm o_16;
            o_16 = t;
            {
              ATerm u_78 = NULL;
              ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL;
              t = not_null(n_78);
              {
                u_78 = t;
                {
                  t = SSL_explode_term(not_null(u_78));
                  {
                    f_79 = t;
                    b_78 :
                    if(match_cons(f_79, sym__2))
                      {
                        g_79 = ATgetArgument(f_79, 0);
                        h_79 = ATgetArgument(f_79, 1);
                        {
                          if(((s_78 != NULL) && (s_78 != g_79)))
                            _fail(g_79);
                          else
                            s_78 = g_79;
                          if(((t_78 != NULL) && (t_78 != h_79)))
                            _fail(h_79);
                          else
                            t_78 = h_79;
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
            t = o_16;
            {
              ATerm p_16;
              p_16 = t;
              {
                ATerm j_79 = NULL;
                ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL;
                t = not_null(m_78);
                {
                  j_79 = t;
                  {
                    t = SSL_explode_term(not_null(j_79));
                    {
                      l_79 = t;
                      g_78 :
                      if(match_cons(l_79, sym__2))
                        {
                          m_79 = ATgetArgument(l_79, 0);
                          n_79 = ATgetArgument(l_79, 1);
                          {
                            if(((s_78 != NULL) && (s_78 != m_79)))
                              _fail(m_79);
                            else
                              s_78 = m_79;
                            if(((i_79 != NULL) && (i_79 != n_79)))
                              _fail(n_79);
                            else
                              i_79 = n_79;
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
                ATerm p_79 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_79), not_null(t_78));
                {
                  t = zip_1(t, _id);
                  {
                    p_79 = t;
                    if(((o_79 != NULL) && (o_79 != p_79)))
                      _fail(p_79);
                    else
                      o_79 = p_79;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_79), not_null(o_78));
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
  ATerm b_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL;
  b_80 = t;
  x_79 :
  if(((ATgetType(b_80) == AT_LIST) && ((ATermList) b_80 != ATempty)))
    {
      g_80 = ATgetFirst((ATermList) b_80);
      j_80 = (ATerm) ATgetNext((ATermList) b_80);
      y_79 :
      if(match_cons(g_80, sym__2))
        {
          h_80 = ATgetArgument(g_80, 0);
          i_80 = ATgetArgument(g_80, 1);
          {
            ATerm l_80 = NULL;
            if(((h_80 != NULL) && (h_80 != i_80)))
              _fail(i_80);
            else
              h_80 = i_80;
            {
              if(((l_80 != NULL) && (l_80 != j_80)))
                _fail(j_80);
              else
                l_80 = j_80;
              t = not_null(l_80);
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
ATerm diff_1 (ATerm t, ATerm m_98 (ATerm))
{
  ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL;
  p_80 = t;
  o_80 :
  if(match_cons(p_80, sym__2))
    {
      q_80 = ATgetArgument(p_80, 0);
      r_80 = ATgetArgument(p_80, 1);
      {
        t = not_null(q_80);
        {
          ATerm x_80 (ATerm t)
          {
            ATerm u_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(v_16);
              }
            else
              {
                t = u_16;
                {
                  ATerm w_16 = t;
                  int e_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_2 (ATerm t)
                      {
                        t = not_null(r_80);
                        return(t);
                      }
                      t = HdMember_p__2(t, m_98, m_2);
                      t = x_80(t);
                      LocalPopChoice(e_17);
                    }
                  else
                    {
                      t = w_16;
                      t = Cons_2(t, _id, x_80);
                    }
                }
              }
            return(t);
          }
          t = x_80(t);
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
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm z_80 = NULL;
          z_80 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(z_80));
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_2 (ATerm t)
              {
                ATerm q_17 = t;
                int r_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(r_17);
                  }
                else
                  {
                    t = q_17;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, q_2);
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, n_2, o_2, p_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm i_81 (ATerm))
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
            ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,r_82 = NULL,t_82 = NULL,v_82 = NULL;
            ATerm c_18;
            c_18 = t;
            {
              ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_81), not_null(z_81));
              {
                t = g_81(t);
                {
                  m_82 = t;
                  l_81 :
                  if(match_cons(m_82, sym__2))
                    {
                      n_82 = ATgetArgument(m_82, 0);
                      o_82 = ATgetArgument(m_82, 1);
                      {
                        ATerm p_82 = NULL;
                        if(((j_82 != NULL) && (j_82 != n_82)))
                          _fail(n_82);
                        else
                          j_82 = n_82;
                        {
                          if(((i_82 != NULL) && (i_82 != o_82)))
                            _fail(o_82);
                          else
                            i_82 = o_82;
                          {
                            t = not_null(j_82);
                            {
                              ATerm q_82 = NULL;
                              t = h_81(t);
                              {
                                p_82 = t;
                                {
                                  if(((k_82 != NULL) && (k_82 != p_82)))
                                    _fail(p_82);
                                  else
                                    k_82 = p_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_82), not_null(y_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        q_82 = t;
                                        if(((l_82 != NULL) && (l_82 != q_82)))
                                          _fail(q_82);
                                        else
                                          l_82 = q_82;
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
              ATerm e_18;
              e_18 = t;
              {
                ATerm s_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_82), not_null(x_81));
                {
                  t = conc_0(t);
                  {
                    s_82 = t;
                    if(((r_82 != NULL) && (r_82 != s_82)))
                      _fail(s_82);
                    else
                      r_82 = s_82;
                  }
                }
              }
              t = e_18;
              {
                ATerm f_18;
                f_18 = t;
                {
                  ATerm u_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_82), not_null(y_81));
                  {
                    t = conc_0(t);
                    {
                      u_82 = t;
                      if(((t_82 != NULL) && (t_82 != u_82)))
                        _fail(u_82);
                      else
                        t_82 = u_82;
                    }
                  }
                }
                t = f_18;
                {
                  ATerm w_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_81), not_null(j_82), not_null(a_82));
                  {
                    t = i_81(t);
                    {
                      w_82 = t;
                      if(((v_82 != NULL) && (v_82 != w_82)))
                        _fail(w_82);
                      else
                        v_82 = w_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(r_82), not_null(t_82), not_null(i_82), not_null(v_82), not_null(b_82));
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
  ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL;
  h_83 = t;
  f_83 :
  if(match_cons(h_83, sym__5))
    {
      i_83 = ATgetArgument(h_83, 0);
      j_83 = ATgetArgument(h_83, 1);
      k_83 = ATgetArgument(h_83, 2);
      l_83 = ATgetArgument(h_83, 3);
      m_83 = ATgetArgument(h_83, 4);
      g_83 :
      if(((ATermList) i_83 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_83), not_null(m_83));
        }
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
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL;
  a_84 = t;
  z_83 :
  if(match_cons(a_84, sym__3))
    {
      b_84 = ATgetArgument(a_84, 0);
      c_84 = ATgetArgument(a_84, 1);
      d_84 = ATgetArgument(a_84, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(b_84), not_null(b_84), not_null(c_84), not_null(d_84), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm j_92 (ATerm), ATerm k_92 (ATerm))
{
  ATerm i_84 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_92(t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          t = k_92(t);
          t = i_84(t);
        }
      }
    return(t);
  }
  t = i_84(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm))
{
  t = m_92(t);
  t = while_not_2(t, n_92, o_92);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm i_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, p_81, q_81, r_81);
        LocalPopChoice(k_18);
      }
    else
      {
        t = i_18;
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
    ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL,o_84 = NULL;
    l_84 = t;
    k_84 :
    if(match_cons(l_84, sym__3))
      {
        m_84 = ATgetArgument(l_84, 0);
        n_84 = ATgetArgument(l_84, 1);
        o_84 = ATgetArgument(l_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(o_84)), not_null(n_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, s_2, t_2);
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_q_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm a_81 (ATerm))
{
  ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL;
  y_84 = t;
  x_84 :
  if(match_cons(y_84, sym__2))
    {
      z_84 = ATgetArgument(y_84, 0);
      a_85 = ATgetArgument(y_84, 1);
      {
        ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
        ATerm r_18;
        r_18 = t;
        {
          ATerm g_85 = NULL;
          ATerm h_85 = NULL,i_85 = NULL,l_85 = NULL;
          t = a_81(t);
          {
            g_85 = t;
            {
              if(((d_85 != NULL) && (d_85 != g_85)))
                _fail(g_85);
              else
                d_85 = g_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_85), not_null(z_84), not_null(a_85));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_18 = t;
                    int u_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_85), term_v_18);
                        t = table_get_0(t);
                        LocalPopChoice(u_18);
                      }
                    else
                      {
                        t = t_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      h_85 = t;
                      w_84 :
                      if(((ATgetType(h_85) == AT_LIST) && ((ATermList) h_85 != ATempty)))
                        {
                          i_85 = ATgetFirst((ATermList) h_85);
                          l_85 = (ATerm) ATgetNext((ATermList) h_85);
                          {
                            if(((e_85 != NULL) && (e_85 != i_85)))
                              _fail(i_85);
                            else
                              e_85 = i_85;
                            {
                              if(((f_85 != NULL) && (f_85 != l_85)))
                                _fail(l_85);
                              else
                                f_85 = l_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_85), term_v_18, (ATerm) ATinsert(CheckATermList(not_null(f_85)), (ATerm) ATinsert(CheckATermList(not_null(e_85)), not_null(z_84))));
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
        t = r_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
  r_85 = t;
  q_85 :
  if(match_cons(r_85, sym__2))
    {
      s_85 = ATgetArgument(r_85, 0);
      t_85 = ATgetArgument(r_85, 1);
      if(((s_85 != NULL) && (s_85 != t_85)))
        _fail(t_85);
      else
        s_85 = t_85;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm h_98 (ATerm), ATerm i_98 (ATerm))
{
  ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL;
  z_85 = t;
  y_85 :
  if(((ATgetType(z_85) == AT_LIST) && ((ATermList) z_85 != ATempty)))
    {
      a_86 = ATgetFirst((ATermList) z_85);
      b_86 = (ATerm) ATgetNext((ATermList) z_85);
      {
        t = i_98(t);
        {
          ATerm v_2 (ATerm t)
          {
            ATerm e_86 = NULL;
            e_86 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_86), not_null(e_86));
              t = h_98(t);
            }
            return(t);
          }
          t = fetch_1(t, v_2);
        }
        t = not_null(b_86);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm j_98 (ATerm))
{
  ATerm k_86 = NULL,p_86 = NULL,q_86 = NULL;
  k_86 = t;
  j_86 :
  if(match_cons(k_86, sym__2))
    {
      p_86 = ATgetArgument(k_86, 0);
      q_86 = ATgetArgument(k_86, 1);
      {
        t = not_null(p_86);
        {
          ATerm a_87 (ATerm t)
          {
            ATerm b_19 = t;
            int d_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_86);
                LocalPopChoice(d_19);
              }
            else
              {
                t = b_19;
                {
                  ATerm e_19 = t;
                  int f_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = not_null(q_86);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_98, w_2);
                      t = a_87(t);
                      LocalPopChoice(f_19);
                    }
                  else
                    {
                      t = e_19;
                      t = Cons_2(t, _id, a_87);
                    }
                }
              }
            return(t);
          }
          t = a_87(t);
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
ATerm Arities_0 (ATerm t)
{
  ATerm j_87 = NULL;
  ATerm l_87 = NULL;
  j_87 = t;
  {
    ATerm m_87 = NULL,n_87 = NULL,p_87 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_87));
    {
      ATerm x_2 (ATerm t)
      {
        t = term_g_19;
        return(t);
      }
      t = rewrite_1(t, x_2);
      {
        m_87 = t;
        h_87 :
        if(match_cons(m_87, sym_Defined_2))
          {
            n_87 = ATgetArgument(m_87, 0);
            p_87 = ATgetArgument(m_87, 1);
            i_87 :
            if(match_string(n_87, "t_0"))
              {
                if(((l_87 != NULL) && (l_87 != p_87)))
                  _fail(p_87);
                else
                  l_87 = p_87;
              }
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
    t = not_null(l_87);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL;
  v_87 = t;
  u_87 :
  if(((ATgetType(v_87) == AT_LIST) && ((ATermList) v_87 != ATempty)))
    {
      w_87 = ATgetFirst((ATermList) v_87);
      x_87 = (ATerm) ATgetNext((ATermList) v_87);
      t = not_null(w_87);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
  d_88 = t;
  c_88 :
  if(match_cons(d_88, sym__2))
    {
      e_88 = ATgetArgument(d_88, 0);
      f_88 = ATgetArgument(d_88, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_88), not_null(f_88));
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
ATerm rewrite_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm n_88 = NULL;
  ATerm p_88 = NULL;
  n_88 = t;
  {
    ATerm q_88 = NULL;
    t = term_o_15;
    {
      t = c_81(t);
      {
        q_88 = t;
        if(((p_88 != NULL) && (p_88 != q_88)))
          _fail(q_88);
        else
          p_88 = q_88;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_88), not_null(n_88));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL;
  y_88 = t;
  x_88 :
  if(match_cons(y_88, sym__2))
    {
      z_88 = ATgetArgument(y_88, 0);
      a_89 = ATgetArgument(y_88, 1);
      {
        ATerm d_89 = NULL,e_89 = NULL;
        ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(a_89), not_null(z_88));
        {
          ATerm y_2 (ATerm t)
          {
            t = term_h_19;
            return(t);
          }
          t = rewrite_1(t, y_2);
          {
            f_89 = t;
            v_88 :
            if(match_cons(f_89, sym_Defined_3))
              {
                g_89 = ATgetArgument(f_89, 0);
                h_89 = ATgetArgument(f_89, 1);
                i_89 = ATgetArgument(f_89, 2);
                w_88 :
                if(match_string(g_89, "s_0"))
                  {
                    if(((d_89 != NULL) && (d_89 != h_89)))
                      _fail(h_89);
                    else
                      d_89 = h_89;
                    if(((e_89 != NULL) && (e_89 != i_89)))
                      _fail(i_89);
                    else
                      e_89 = i_89;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(e_89)), not_null(d_89));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm))
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_97(t);
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      {
        ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL;
        p_89 = t;
        o_89 :
        if(((ATgetType(p_89) == AT_LIST) && ((ATermList) p_89 != ATempty)))
          {
            q_89 = ATgetFirst((ATermList) p_89);
            r_89 = (ATerm) ATgetNext((ATermList) p_89);
            {
              ATerm u_89 = NULL,w_89 = NULL;
              ATerm m_19;
              m_19 = t;
              {
                ATerm v_89 = NULL;
                t = not_null(q_89);
                {
                  t = e_97(t);
                  {
                    v_89 = t;
                    if(((u_89 != NULL) && (u_89 != v_89)))
                      _fail(v_89);
                    else
                      u_89 = v_89;
                  }
                }
              }
              t = m_19;
              {
                ATerm x_89 = NULL;
                t = not_null(r_89);
                {
                  t = foldr_3(t, c_97, d_97, e_97);
                  {
                    x_89 = t;
                    if(((w_89 != NULL) && (w_89 != x_89)))
                      _fail(x_89);
                    else
                      w_89 = x_89;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_89), not_null(w_89));
                  t = d_97(t);
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
  ATerm z_2 (ATerm t)
  {
    t = term_n_19;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_q_6;
    return(t);
  }
  t = foldr_3(t, z_2, add_0, a_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL;
    h_90 = t;
    g_90 :
    if(match_cons(h_90, sym_SDef_3))
      {
        i_90 = ATgetArgument(h_90, 0);
        j_90 = ATgetArgument(h_90, 1);
        k_90 = ATgetArgument(h_90, 2);
        {
          ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL;
          ATerm s_19;
          s_19 = t;
          {
            ATerm s_90 = NULL;
            t = not_null(j_90);
            {
              ATerm t_90 = NULL;
              t = length_0(t);
              {
                s_90 = t;
                {
                  if(((q_90 != NULL) && (q_90 != s_90)))
                    _fail(s_90);
                  else
                    q_90 = s_90;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_90), not_null(q_90));
                    {
                      ATerm u_90 = NULL,w_90 = NULL;
                      ATerm t_19 = t;
                      int u_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(u_19);
                        }
                      else
                        {
                          t = t_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        t_90 = t;
                        {
                          if(((p_90 != NULL) && (p_90 != t_90)))
                            _fail(t_90);
                          else
                            p_90 = t_90;
                          {
                            ATerm v_90 = NULL;
                            t = not_null(i_90);
                            {
                              ATerm v_19 = t;
                              int w_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(w_19);
                                }
                              else
                                {
                                  t = v_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                v_90 = t;
                                if(((u_90 != NULL) && (u_90 != v_90)))
                                  _fail(v_90);
                                else
                                  u_90 = v_90;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_90)), not_null(u_90));
                              {
                                t = union_0(t);
                                {
                                  w_90 = t;
                                  {
                                    if(((r_90 != NULL) && (r_90 != w_90)))
                                      _fail(w_90);
                                    else
                                      r_90 = w_90;
                                    {
                                      ATerm x_19;
                                      x_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(q_90), not_null(i_90)), (ATerm) ATmakeAppl(sym_Defined_3, term_y_19, not_null(h_90), not_null(p_90)));
                                        {
                                          ATerm c_3 (ATerm t)
                                          {
                                            t = term_h_19;
                                            return(t);
                                          }
                                          t = assert_1(t, c_3);
                                        }
                                      }
                                      t = x_19;
                                      {
                                        ATerm z_19;
                                        z_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(i_90)), (ATerm) ATmakeAppl(sym_Defined_2, term_e_20, not_null(r_90)));
                                          {
                                            ATerm d_3 (ATerm t)
                                            {
                                              t = term_g_19;
                                              return(t);
                                            }
                                            t = assert_1(t, d_3);
                                          }
                                        }
                                        t = z_19;
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
          t = s_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, b_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm d_91 = NULL;
  ATerm e_91 = NULL;
  t = sort_defs_0(t);
  {
    e_91 = t;
    if(((d_91 != NULL) && (d_91 != e_91)))
      _fail(e_91);
    else
      d_91 = e_91;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_g_20), not_null(d_91), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm l_91 = NULL,m_91 = NULL;
  l_91 = t;
  k_91 :
  if(match_cons(l_91, sym_Strategies_1))
    {
      m_91 = ATgetArgument(l_91, 0);
      {
        ATerm p_91 = NULL,r_91 = NULL;
        ATerm q_91 = NULL;
        t = SSLgetAnnotations(not_null(l_91));
        {
          q_91 = t;
          if(((p_91 != NULL) && (p_91 != q_91)))
            _fail(q_91);
          else
            p_91 = q_91;
        }
        {
          t = not_null(m_91);
          {
            ATerm x_91 = NULL;
            t = v_77(t);
            {
              r_91 = t;
              {
                ATerm y_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(r_91)), not_null(p_91));
                {
                  y_91 = t;
                  if(((x_91 != NULL) && (x_91 != y_91)))
                    _fail(y_91);
                  else
                    x_91 = y_91;
                }
                t = not_null(x_91);
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
ATerm Cons_2 (ATerm t, ATerm e_80 (ATerm), ATerm f_80 (ATerm))
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL;
  p_92 = t;
  i_92 :
  if(((ATgetType(p_92) == AT_LIST) && ((ATermList) p_92 != ATempty)))
    {
      q_92 = ATgetFirst((ATermList) p_92);
      r_92 = (ATerm) ATgetNext((ATermList) p_92);
      {
        ATerm v_92 = NULL,x_92 = NULL;
        ATerm w_92 = NULL;
        t = SSLgetAnnotations(not_null(p_92));
        {
          w_92 = t;
          if(((v_92 != NULL) && (v_92 != w_92)))
            _fail(w_92);
          else
            v_92 = w_92;
        }
        {
          t = not_null(q_92);
          {
            ATerm z_92 = NULL;
            t = e_80(t);
            {
              x_92 = t;
              {
                t = not_null(r_92);
                {
                  ATerm b_93 = NULL;
                  t = f_80(t);
                  {
                    z_92 = t;
                    {
                      ATerm c_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_92)), not_null(x_92)), not_null(v_92));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm n_93 = NULL,o_93 = NULL;
  n_93 = t;
  m_93 :
  if(match_cons(n_93, sym_Specification_1))
    {
      o_93 = ATgetArgument(n_93, 0);
      {
        ATerm r_93 = NULL,t_93 = NULL;
        ATerm s_93 = NULL;
        t = SSLgetAnnotations(not_null(n_93));
        {
          s_93 = t;
          if(((r_93 != NULL) && (r_93 != s_93)))
            _fail(s_93);
          else
            r_93 = s_93;
        }
        {
          t = not_null(o_93);
          {
            ATerm v_93 = NULL;
            t = x_77(t);
            {
              t_93 = t;
              {
                ATerm w_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(t_93)), not_null(r_93));
                {
                  w_93 = t;
                  if(((v_93 != NULL) && (v_93 != w_93)))
                    _fail(w_93);
                  else
                    v_93 = w_93;
                }
                t = not_null(v_93);
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
ATerm _2 (ATerm t, ATerm w_68 (ATerm), ATerm x_68 (ATerm))
{
  ATerm h_94 = NULL,i_94 = NULL,j_94 = NULL;
  h_94 = t;
  g_94 :
  if(match_cons(h_94, sym__2))
    {
      i_94 = ATgetArgument(h_94, 0);
      j_94 = ATgetArgument(h_94, 1);
      {
        ATerm s_94 = NULL,u_94 = NULL;
        ATerm t_94 = NULL;
        t = SSLgetAnnotations(not_null(h_94));
        {
          t_94 = t;
          if(((s_94 != NULL) && (s_94 != t_94)))
            _fail(t_94);
          else
            s_94 = t_94;
        }
        {
          t = not_null(i_94);
          {
            ATerm w_94 = NULL;
            t = w_68(t);
            {
              u_94 = t;
              {
                t = not_null(j_94);
                {
                  ATerm y_94 = NULL;
                  t = x_68(t);
                  {
                    w_94 = t;
                    {
                      ATerm z_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_94), not_null(w_94)), not_null(s_94));
                      {
                        z_94 = t;
                        if(((y_94 != NULL) && (y_94 != z_94)))
                          _fail(z_94);
                        else
                          y_94 = z_94;
                      }
                      t = not_null(y_94);
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
  ATerm h_95 = NULL;
  ATerm k_20;
  k_20 = t;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm i_95 = NULL,j_95 = NULL;
      i_95 = t;
      g_95 :
      if(match_cons(i_95, sym_Program_1))
        {
          j_95 = ATgetArgument(i_95, 0);
          if(((h_95 != NULL) && (h_95 != j_95)))
            _fail(j_95);
          else
            h_95 = j_95;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, e_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_20), not_null(h_95)), term_m_20));
      {
        t = printnl_0(t);
        {
          t = term_q_6;
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
  ATerm n_95 = NULL,o_95 = NULL,p_95 = NULL;
  n_95 = t;
  m_95 :
  if(match_cons(n_95, sym__2))
    {
      o_95 = ATgetArgument(n_95, 0);
      p_95 = ATgetArgument(n_95, 1);
      {
        ATerm q_20;
        q_20 = t;
        t = SSL_printnl(not_null(o_95), not_null(p_95));
        t = q_20;
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
  ATerm u_95 = NULL;
  u_95 = t;
  t = SSL_implode_string(not_null(u_95));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL;
        z_95 = t;
        y_95 :
        if(((ATgetType(z_95) == AT_LIST) && ((ATermList) z_95 != ATempty)))
          {
            a_96 = ATgetFirst((ATermList) z_95);
            b_96 = (ATerm) ATgetNext((ATermList) z_95);
            {
              t = not_null(a_96);
              {
                ATerm f_3 (ATerm t)
                {
                  t = not_null(b_96);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_3);
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
  ATerm l_96 = NULL;
  ATerm n_96 = NULL;
  l_96 = t;
  {
    ATerm o_96 = NULL;
    ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL;
    t = not_null(l_96);
    {
      o_96 = t;
      {
        t = SSL_explode_term(not_null(o_96));
        {
          q_96 = t;
          j_96 :
          if(match_cons(q_96, sym__2))
            {
              r_96 = ATgetArgument(q_96, 0);
              s_96 = ATgetArgument(q_96, 1);
              k_96 :
              if(match_string(r_96, ""))
                {
                  if(((n_96 != NULL) && (n_96 != s_96)))
                    _fail(s_96);
                  else
                    n_96 = s_96;
                }
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
      t = not_null(n_96);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_101 (ATerm))
{
  ATerm w_96 (ATerm t)
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_96);
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        {
          t = Nil_0(t);
          t = f_101(t);
        }
      }
    return(t);
  }
  t = w_96(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_96 = NULL,f_97 = NULL,g_97 = NULL;
  z_96 = t;
  y_96 :
  if(match_cons(z_96, sym__2))
    {
      f_97 = ATgetArgument(z_96, 0);
      g_97 = ATgetArgument(z_96, 1);
      {
        t = not_null(f_97);
        {
          ATerm g_3 (ATerm t)
          {
            t = not_null(g_97);
            return(t);
          }
          t = at_end_1(t, g_3);
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
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm l_97 = NULL;
  l_97 = t;
  t = SSL_explode_string(not_null(l_97));
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
ATerm debug_1 (ATerm t, ATerm g_88 (ATerm))
{
  ATerm y_20;
  y_20 = t;
  {
    ATerm s_97 = NULL,u_97 = NULL;
    ATerm z_20;
    z_20 = t;
    {
      ATerm t_97 = NULL;
      t = g_88(t);
      {
        t_97 = t;
        if(((s_97 != NULL) && (s_97 != t_97)))
          _fail(t_97);
        else
          s_97 = t_97;
      }
    }
    t = z_20;
    {
      ATerm v_97 = NULL;
      v_97 = t;
      if(((u_97 != NULL) && (u_97 != v_97)))
        _fail(v_97);
      else
        u_97 = v_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_97)), not_null(s_97)));
        t = printnl_0(t);
      }
    }
  }
  t = y_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_97 = NULL;
  z_97 = t;
  t = SSL_is_string(not_null(z_97));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = a_21;
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_3);
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            {
              ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL;
              p_98 = t;
              o_98 :
              if(match_cons(p_98, sym_Path_1))
                {
                  q_98 = ATgetArgument(p_98, 0);
                  t = not_null(q_98);
                }
              else
                {
                  if(match_cons(p_98, sym_Var_1))
                    {
                      q_98 = ATgetArgument(p_98, 0);
                      {
                        t = not_null(q_98);
                        {
                          ATerm o_21 = t;
                          int p_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_21);
                            }
                          else
                            {
                              t = o_21;
                              {
                                ATerm k_3 (ATerm t)
                                {
                                  t = term_q_21;
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
                      if(match_cons(p_98, sym_Prefix_2))
                        {
                          q_98 = ATgetArgument(p_98, 0);
                          r_98 = ATgetArgument(p_98, 1);
                          {
                            ATerm b_99 = NULL,d_99 = NULL;
                            ATerm r_21;
                            r_21 = t;
                            {
                              ATerm c_99 = NULL;
                              t = not_null(q_98);
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
                            }
                            t = r_21;
                            {
                              ATerm e_99 = NULL;
                              t = not_null(r_98);
                              {
                                t = eval_config_0(t);
                                {
                                  e_99 = t;
                                  if(((d_99 != NULL) && (d_99 != e_99)))
                                    _fail(e_99);
                                  else
                                    d_99 = e_99;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_99), not_null(d_99));
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
  ATerm m_99 = NULL;
  m_99 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_21, not_null(m_99));
    {
      t = table_get_0(t);
      {
        ATerm l_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm a_22;
            a_22 = t;
            {
              ATerm o_99 = NULL;
              ATerm p_99 = NULL;
              p_99 = t;
              if(((o_99 != NULL) && (o_99 != p_99)))
                _fail(p_99);
              else
                o_99 = p_99;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_21, not_null(m_99), not_null(o_99));
                t = table_put_0(t);
              }
            }
            t = a_22;
          }
          return(t);
        }
        t = try_1(t, l_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm k_85 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm g_22;
    g_22 = t;
    {
      ATerm t_99 = NULL;
      ATerm u_99 = NULL;
      t = term_h_22;
      {
        t = get_config_0(t);
        {
          u_99 = t;
          if(((t_99 != NULL) && (t_99 != u_99)))
            _fail(u_99);
          else
            t_99 = u_99;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_99), term_m_22);
        t = geq_0(t);
      }
    }
    t = g_22;
    t = k_85(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_99 = NULL,z_99 = NULL,a_100 = NULL;
  y_99 = t;
  x_99 :
  if(match_cons(y_99, sym__2))
    {
      z_99 = ATgetArgument(y_99, 0);
      a_100 = ATgetArgument(y_99, 1);
      t = SSL_WriteToTextFile(not_null(z_99), not_null(a_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_100 = NULL,h_100 = NULL,i_100 = NULL;
  g_100 = t;
  f_100 :
  if(match_cons(g_100, sym__2))
    {
      h_100 = ATgetArgument(g_100, 0);
      i_100 = ATgetArgument(g_100, 1);
      t = SSL_WriteToBinaryFile(not_null(h_100), not_null(i_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm s_100 = NULL;
  ATerm r_22;
  r_22 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm s_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            ATerm t_100 = NULL,u_100 = NULL;
            t_100 = t;
            n_100 :
            if(match_cons(t_100, sym_Output_1))
              {
                u_100 = ATgetArgument(t_100, 0);
                if(((s_100 != NULL) && (s_100 != u_100)))
                  _fail(u_100);
                else
                  s_100 = u_100;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_3);
          LocalPopChoice(t_22);
        }
      else
        {
          t = s_22;
          {
            ATerm v_100 = NULL;
            t = term_u_22;
            {
              v_100 = t;
              if(((s_100 != NULL) && (s_100 != v_100)))
                _fail(v_100);
              else
                s_100 = v_100;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_3, _id);
  }
  t = r_22;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        t = not_null(s_100);
        return(t);
      }
      t = split_2(t, q_3, _id);
      return(t);
    }
    t = _2(t, _id, p_3);
    {
      ATerm v_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm s_3 (ATerm t)
            {
              ATerm w_100 = NULL;
              w_100 = t;
              p_100 :
              if(!(match_cons(w_100, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, s_3);
            return(t);
          }
          t = _2(t, r_3, WriteToBinaryFile_0);
          LocalPopChoice(w_22);
        }
      else
        {
          t = v_22;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_87 (ATerm))
{
  ATerm e_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL;
  ATerm x_22;
  x_22 = t;
  t = dtime_0(t);
  t = x_22;
  {
    t = q_87(t);
    {
      ATerm y_22;
      y_22 = t;
      {
        ATerm h_101 = NULL;
        t = dtime_0(t);
        {
          h_101 = t;
          if(((e_101 != NULL) && (e_101 != h_101)))
            _fail(h_101);
          else
            e_101 = h_101;
        }
      }
      t = y_22;
      {
        i_101 = t;
        d_101 :
        if(match_cons(i_101, sym__2))
          {
            j_101 = ATgetArgument(i_101, 0);
            k_101 = ATgetArgument(i_101, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_101)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(e_101))), not_null(k_101));
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
  ATerm q_101 = NULL;
  q_101 = t;
  t = SSL_ReadFromFile(not_null(q_101));
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_104 (ATerm), ATerm e_104 (ATerm))
{
  ATerm v_101 = NULL,x_101 = NULL;
  ATerm z_22;
  z_22 = t;
  {
    ATerm w_101 = NULL;
    t = d_104(t);
    {
      w_101 = t;
      if(((v_101 != NULL) && (v_101 != w_101)))
        _fail(w_101);
      else
        v_101 = w_101;
    }
  }
  t = z_22;
  {
    ATerm y_101 = NULL;
    t = e_104(t);
    {
      y_101 = t;
      if(((x_101 != NULL) && (x_101 != y_101)))
        _fail(y_101);
      else
        x_101 = y_101;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_101), not_null(x_101));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_102 = NULL;
  ATerm a_23;
  a_23 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 (ATerm t)
        {
          ATerm f_102 = NULL,g_102 = NULL;
          f_102 = t;
          c_102 :
          if(match_cons(f_102, sym_Input_1))
            {
              g_102 = ATgetArgument(f_102, 0);
              if(((e_102 != NULL) && (e_102 != g_102)))
                _fail(g_102);
              else
                e_102 = g_102;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, t_3);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        {
          ATerm h_102 = NULL;
          t = term_i_23;
          {
            h_102 = t;
            if(((e_102 != NULL) && (e_102 != h_102)))
              _fail(h_102);
            else
              e_102 = h_102;
          }
        }
      }
  }
  t = a_23;
  {
    ATerm u_3 (ATerm t)
    {
      t = not_null(e_102);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_3);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_102 = NULL;
  m_102 = t;
  t = SSL_string_to_int(not_null(m_102));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL;
  c_103 = t;
  a_103 :
  if(match_string(c_103, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(c_103) == AT_LIST) && ((ATermList) c_103 != ATempty)))
        {
          d_103 = ATgetFirst((ATermList) c_103);
          e_103 = (ATerm) ATgetNext((ATermList) c_103);
          b_103 :
          if(((ATgetType(e_103) == AT_LIST) && ((ATermList) e_103 != ATempty)))
            {
              f_103 = ATgetFirst((ATermList) e_103);
              g_103 = (ATerm) ATgetNext((ATermList) e_103);
              {
                ATerm k_103 = NULL;
                ATerm j_23;
                j_23 = t;
                {
                  t = not_null(d_103);
                  t = j_0(t);
                }
                t = j_23;
                {
                  ATerm l_103 = NULL;
                  t = not_null(f_103);
                  {
                    t = k_0(t);
                    {
                      l_103 = t;
                      if(((k_103 != NULL) && (k_103 != l_103)))
                        _fail(l_103);
                      else
                        k_103 = l_103;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_103)), not_null(k_103));
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
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_3 (ATerm t)
      {
        ATerm g_104 = NULL;
        g_104 = t;
        p_103 :
        if(!(match_string(g_104, "-i")))
          {
            if(!(match_string(g_104, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        ATerm j_104 = NULL;
        ATerm t_23;
        t_23 = t;
        {
          ATerm h_104 = NULL;
          ATerm i_104 = NULL;
          i_104 = t;
          if(((h_104 != NULL) && (h_104 != i_104)))
            _fail(i_104);
          else
            h_104 = i_104;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_w_23, not_null(h_104));
            t = set_config_0(t);
          }
        }
        t = t_23;
        {
          ATerm k_104 = NULL;
          k_104 = t;
          if(((j_104 != NULL) && (j_104 != k_104)))
            _fail(k_104);
          else
            j_104 = k_104;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_104));
        }
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_x_23;
        return(t);
      }
      t = ArgOption_3(t, v_3, w_3, x_3);
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm l_104 = NULL;
              l_104 = t;
              s_103 :
              if(!(match_string(l_104, "-o")))
                {
                  if(!(match_string(l_104, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              ATerm o_104 = NULL;
              ATerm a_24;
              a_24 = t;
              {
                ATerm m_104 = NULL;
                ATerm n_104 = NULL;
                n_104 = t;
                if(((m_104 != NULL) && (m_104 != n_104)))
                  _fail(n_104);
                else
                  m_104 = n_104;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_24, not_null(m_104));
                  t = set_config_0(t);
                }
              }
              t = a_24;
              {
                ATerm p_104 = NULL;
                p_104 = t;
                if(((o_104 != NULL) && (o_104 != p_104)))
                  _fail(p_104);
                else
                  o_104 = p_104;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_104));
              }
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              t = term_c_24;
              return(t);
            }
            t = ArgOption_3(t, y_3, z_3, a_4);
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            {
              ATerm d_24 = t;
              int e_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_4 (ATerm t)
                  {
                    ATerm q_104 = NULL;
                    q_104 = t;
                    v_103 :
                    if(!(match_string(q_104, "-S")))
                      {
                        if(!(match_string(q_104, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm c_4 (ATerm t)
                  {
                    t = term_f_24;
                    t = set_config_0(t);
                    t = term_g_24;
                    return(t);
                  }
                  ATerm d_4 (ATerm t)
                  {
                    t = term_i_24;
                    return(t);
                  }
                  t = Option_3(t, b_4, c_4, d_4);
                  LocalPopChoice(e_24);
                }
              else
                {
                  t = d_24;
                  {
                    ATerm j_24 = t;
                    int k_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_4 (ATerm t)
                        {
                          ATerm r_104 = NULL;
                          r_104 = t;
                          w_103 :
                          if(!(match_string(r_104, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm f_4 (ATerm t)
                        {
                          ATerm x_104 = NULL;
                          ATerm l_24;
                          l_24 = t;
                          {
                            ATerm s_104 = NULL;
                            ATerm w_104 = NULL;
                            t = string_to_int_0(t);
                            {
                              w_104 = t;
                              if(((s_104 != NULL) && (s_104 != w_104)))
                                _fail(w_104);
                              else
                                s_104 = w_104;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_h_22, not_null(s_104));
                              t = set_config_0(t);
                            }
                          }
                          t = l_24;
                          {
                            ATerm y_104 = NULL;
                            y_104 = t;
                            if(((x_104 != NULL) && (x_104 != y_104)))
                              _fail(y_104);
                            else
                              x_104 = y_104;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_104));
                          }
                          return(t);
                        }
                        ATerm g_4 (ATerm t)
                        {
                          t = term_n_24;
                          return(t);
                        }
                        t = ArgOption_3(t, e_4, f_4, g_4);
                        LocalPopChoice(k_24);
                      }
                    else
                      {
                        t = j_24;
                        {
                          ATerm s_24 = t;
                          int t_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_4 (ATerm t)
                              {
                                ATerm z_104 = NULL;
                                z_104 = t;
                                z_103 :
                                if(!(match_string(z_104, "-k")))
                                  {
                                    if(!(match_string(z_104, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm i_4 (ATerm t)
                              {
                                ATerm c_25;
                                c_25 = t;
                                {
                                  ATerm a_105 = NULL;
                                  ATerm b_105 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    b_105 = t;
                                    if(((a_105 != NULL) && (a_105 != b_105)))
                                      _fail(b_105);
                                    else
                                      a_105 = b_105;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_m_25, not_null(a_105));
                                    t = set_config_0(t);
                                  }
                                }
                                t = c_25;
                                return(t);
                              }
                              ATerm j_4 (ATerm t)
                              {
                                t = term_y_25;
                                return(t);
                              }
                              t = ArgOption_3(t, h_4, i_4, j_4);
                              LocalPopChoice(t_24);
                            }
                          else
                            {
                              t = s_24;
                              {
                                ATerm z_25 = t;
                                int a_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_4 (ATerm t)
                                    {
                                      ATerm c_105 = NULL;
                                      c_105 = t;
                                      b_104 :
                                      if(!(match_string(c_105, "-v")))
                                        {
                                          if(!(match_string(c_105, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm o_4 (ATerm t)
                                    {
                                      t = term_c_26;
                                      t = set_config_0(t);
                                      t = term_d_26;
                                      return(t);
                                    }
                                    ATerm p_4 (ATerm t)
                                    {
                                      t = term_e_26;
                                      return(t);
                                    }
                                    t = Option_3(t, n_4, o_4, p_4);
                                    LocalPopChoice(a_26);
                                  }
                                else
                                  {
                                    t = z_25;
                                    {
                                      ATerm f_26 = t;
                                      int g_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_4 (ATerm t)
                                          {
                                            ATerm d_105 = NULL;
                                            d_105 = t;
                                            c_104 :
                                            if(!(match_string(d_105, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm r_4 (ATerm t)
                                          {
                                            t = term_i_26;
                                            t = set_config_0(t);
                                            t = term_j_26;
                                            return(t);
                                          }
                                          ATerm s_4 (ATerm t)
                                          {
                                            t = term_k_26;
                                            return(t);
                                          }
                                          t = Option_3(t, q_4, r_4, s_4);
                                          LocalPopChoice(g_26);
                                        }
                                      else
                                        {
                                          t = f_26;
                                          {
                                            ATerm t_4 (ATerm t)
                                            {
                                              ATerm e_105 = NULL;
                                              e_105 = t;
                                              f_104 :
                                              if(!(match_string(e_105, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm u_4 (ATerm t)
                                            {
                                              t = term_m_26;
                                              t = set_config_0(t);
                                              t = term_n_26;
                                              return(t);
                                            }
                                            ATerm v_4 (ATerm t)
                                            {
                                              t = term_o_26;
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
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATempty, term_p_26));
  {
    t = printnl_0(t);
    {
      t = term_q_6;
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
        ATerm q_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_105), not_null(v_105));
            LocalPopChoice(s_26);
          }
        else
          {
            t = q_26;
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
ATerm foldr_2 (ATerm t, ATerm a_97 (ATerm), ATerm b_97 (ATerm))
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_97(t);
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL;
        c_106 = t;
        b_106 :
        if(((ATgetType(c_106) == AT_LIST) && ((ATermList) c_106 != ATempty)))
          {
            d_106 = ATgetFirst((ATermList) c_106);
            e_106 = (ATerm) ATgetNext((ATermList) c_106);
            {
              ATerm h_106 = NULL;
              ATerm i_106 = NULL;
              t = not_null(e_106);
              {
                t = foldr_2(t, a_97, b_97);
                {
                  i_106 = t;
                  if(((h_106 != NULL) && (h_106 != i_106)))
                    _fail(i_106);
                  else
                    h_106 = i_106;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_106), not_null(h_106));
                t = b_97(t);
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
ATerm crush_2 (ATerm t, ATerm s_98 (ATerm), ATerm t_98 (ATerm))
{
  ATerm p_106 = NULL;
  ATerm r_106 = NULL;
  p_106 = t;
  {
    ATerm s_106 = NULL;
    ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL;
    t = not_null(p_106);
    {
      s_106 = t;
      {
        t = SSL_explode_term(not_null(s_106));
        {
          u_106 = t;
          o_106 :
          if(match_cons(u_106, sym__2))
            {
              v_106 = ATgetArgument(u_106, 0);
              w_106 = ATgetArgument(u_106, 1);
              if(((r_106 != NULL) && (r_106 != w_106)))
                _fail(w_106);
              else
                r_106 = w_106;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_106);
      t = foldr_2(t, s_98, t_98);
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
    ATerm w_4 (ATerm t)
    {
      t = term_n_19;
      return(t);
    }
    t = crush_2(t, w_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL;
  e_107 = t;
  d_107 :
  if(match_cons(e_107, sym__2))
    {
      f_107 = ATgetArgument(e_107, 0);
      g_107 = ATgetArgument(e_107, 1);
      {
        ATerm w_26;
        w_26 = t;
        {
          ATerm x_26 = t;
          int y_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_107), not_null(g_107));
              LocalPopChoice(y_26);
            }
          else
            {
              t = x_26;
              t = SSL_gtr(not_null(f_107), not_null(g_107));
            }
        }
        t = w_26;
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
  ATerm m_107 = NULL;
  ATerm a_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_107 = NULL,q_107 = NULL,r_107 = NULL;
      n_107 = t;
      l_107 :
      if(match_cons(n_107, sym__2))
        {
          q_107 = ATgetArgument(n_107, 0);
          r_107 = ATgetArgument(n_107, 1);
          {
            if(((m_107 != NULL) && (m_107 != q_107)))
              _fail(q_107);
            else
              m_107 = q_107;
            if(((m_107 != NULL) && (m_107 != r_107)))
              _fail(r_107);
            else
              m_107 = r_107;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_27);
    }
  else
    {
      t = a_27;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_85 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    ATerm o_27;
    o_27 = t;
    {
      ATerm u_107 = NULL;
      ATerm v_107 = NULL;
      t = term_h_22;
      {
        t = get_config_0(t);
        {
          v_107 = t;
          if(((u_107 != NULL) && (u_107 != v_107)))
            _fail(v_107);
          else
            u_107 = v_107;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_107), term_q_6);
        t = geq_0(t);
      }
    }
    t = o_27;
    t = j_85(t);
    return(t);
  }
  t = try_1(t, x_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm z_107 = NULL,b_108 = NULL;
    ATerm w_27;
    w_27 = t;
    {
      ATerm a_108 = NULL;
      t = run_time_0(t);
      {
        a_108 = t;
        if(((z_107 != NULL) && (z_107 != a_108)))
          _fail(a_108);
        else
          z_107 = a_108;
      }
    }
    t = w_27;
    {
      ATerm c_108 = NULL;
      t = term_y_27;
      {
        t = get_config_0(t);
        {
          c_108 = t;
          if(((b_108 != NULL) && (b_108 != c_108)))
            _fail(c_108);
          else
            b_108 = c_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_28), not_null(z_107)), term_z_27), not_null(b_108)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_4);
  {
    t = term_n_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_108 = NULL;
  j_108 = t;
  i_108 :
  if(match_cons(j_108, sym_Version_0))
    {
      ATerm l_108 = NULL,n_108 = NULL;
      ATerm b_28;
      b_28 = t;
      {
        ATerm m_108 = NULL;
        t = SSLgetAnnotations(not_null(j_108));
        {
          m_108 = t;
          if(((l_108 != NULL) && (l_108 != m_108)))
            _fail(m_108);
          else
            l_108 = m_108;
        }
      }
      t = b_28;
      {
        ATerm t_108 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_108));
        {
          t_108 = t;
          if(((n_108 != NULL) && (n_108 != t_108)))
            _fail(t_108);
          else
            n_108 = t_108;
        }
        t = not_null(n_108);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_87 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        {
          ATerm e_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(f_28);
            }
          else
            {
              t = e_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_4);
  t = o_87(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_108 = NULL;
  y_108 = t;
  t = SSL_table_create(not_null(y_108));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_109 = NULL;
  c_109 = t;
  {
    ATerm i_28;
    i_28 = t;
    {
      t = term_j_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_28, term_k_28, not_null(c_109));
          t = table_put_0(t);
        }
      }
    }
    t = i_28;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm g_109 = NULL;
  g_109 = t;
  t = SSL_table_destroy(not_null(g_109));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_109 = NULL;
  k_109 = t;
  t = SSL_exit(not_null(k_109));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL;
  r_109 = t;
  q_109 :
  if(((ATermList) r_109 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(r_109) == AT_LIST) && ((ATermList) r_109 != ATempty)))
        {
          s_109 = ATgetFirst((ATermList) r_109);
          t_109 = (ATerm) ATgetNext((ATermList) r_109);
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
  ATerm l_28;
  l_28 = t;
  {
    ATerm w_109 = NULL;
    ATerm z_109 = NULL;
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        {
          ATerm x_109 = NULL;
          ATerm y_109 = NULL;
          y_109 = t;
          if(((x_109 != NULL) && (x_109 != y_109)))
            _fail(y_109);
          else
            x_109 = y_109;
          t = (ATerm) ATinsert(ATempty, not_null(x_109));
        }
      }
    {
      z_109 = t;
      if(((w_109 != NULL) && (w_109 != z_109)))
        _fail(z_109);
      else
        w_109 = z_109;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_22, not_null(w_109));
      t = printnl_0(t);
    }
  }
  t = l_28;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm p_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_100 (ATerm))
{
  ATerm c_110 (ATerm t)
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
        t = Cons_2(t, q_100, c_110);
      }
    return(t);
  }
  t = c_110(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_110 = NULL,k_110 = NULL,l_110 = NULL;
  l_110 = t;
  i_110 :
  if(((ATgetType(l_110) == AT_LIST) && ((ATermList) l_110 != ATempty)))
    {
      j_110 = ATgetFirst((ATermList) l_110);
      k_110 = (ATerm) ATgetNext((ATermList) l_110);
      {
        ATerm o_110 = NULL;
        t = not_null(k_110);
        {
          ATerm q_28;
          q_28 = t;
          {
            ATerm p_110 = NULL,r_110 = NULL,t_110 = NULL;
            ATerm r_28;
            r_28 = t;
            {
              ATerm q_110 = NULL;
              t = i_0(t);
              {
                q_110 = t;
                if(((p_110 != NULL) && (p_110 != q_110)))
                  _fail(q_110);
                else
                  p_110 = q_110;
              }
            }
            t = r_28;
            {
              ATerm s_110 = NULL;
              t = not_null(j_110);
              {
                t = h_0(t);
                {
                  s_110 = t;
                  if(((r_110 != NULL) && (r_110 != s_110)))
                    _fail(s_110);
                  else
                    r_110 = s_110;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_110)), not_null(r_110));
                {
                  t_110 = t;
                  if(((o_110 != NULL) && (o_110 != t_110)))
                    _fail(t_110);
                  else
                    o_110 = t_110;
                }
              }
            }
          }
          t = q_28;
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(o_110);
              return(t);
            }
            t = reverse_acc_2(t, h_0, a_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) l_110 == ATempty))
        {
          {
            t = term_o_15;
            t = i_0(t);
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
ATerm short_description_1 (ATerm t, ATerm o_83 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm e_111 = NULL,f_111 = NULL;
  e_111 = t;
  d_111 :
  if(match_cons(e_111, sym_Program_1))
    {
      f_111 = ATgetArgument(e_111, 0);
      {
        ATerm i_111 = NULL,k_111 = NULL;
        ATerm j_111 = NULL;
        t = SSLgetAnnotations(not_null(e_111));
        {
          j_111 = t;
          if(((i_111 != NULL) && (i_111 != j_111)))
            _fail(j_111);
          else
            i_111 = j_111;
        }
        {
          t = not_null(f_111);
          {
            ATerm m_111 = NULL;
            t = q_74(t);
            {
              k_111 = t;
              {
                ATerm n_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_111)), not_null(i_111));
                {
                  n_111 = t;
                  if(((m_111 != NULL) && (m_111 != n_111)))
                    _fail(n_111);
                  else
                    m_111 = n_111;
                }
                t = not_null(m_111);
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
  ATerm w_111 = NULL;
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_111 = NULL;
      t = term_y_27;
      {
        t = get_config_0(t);
        {
          x_111 = t;
          if(((w_111 != NULL) && (w_111 != x_111)))
            _fail(x_111);
          else
            w_111 = x_111;
        }
      }
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
      {
        ATerm c_5 (ATerm t)
        {
          ATerm d_5 (ATerm t)
          {
            ATerm y_111 = NULL;
            y_111 = t;
            if(((w_111 != NULL) && (w_111 != y_111)))
              _fail(y_111);
            else
              w_111 = y_111;
            return(t);
          }
          t = Program_1(t, d_5);
          return(t);
        }
        t = option_defined_1(t, c_5);
      }
    }
  {
    ATerm e_5 (ATerm t)
    {
      ATerm f_5 (ATerm t)
      {
        t = not_null(w_111);
        return(t);
      }
      t = short_description_1(t, f_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, e_5);
    {
      t = term_u_28;
      {
        t = echo_0(t);
        {
          t = term_x_28;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm z_111 = NULL;
                  ATerm a_112 = NULL;
                  a_112 = t;
                  if(((z_111 != NULL) && (z_111 != a_112)))
                    _fail(a_112);
                  else
                    z_111 = a_112;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_111)), term_y_28);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  ATerm h_5 (ATerm t)
                  {
                    ATerm b_112 = NULL;
                    ATerm c_112 = NULL;
                    ATerm i_5 (ATerm t)
                    {
                      t = not_null(w_111);
                      return(t);
                    }
                    t = long_description_1(t, i_5);
                    {
                      c_112 = t;
                      if(((b_112 != NULL) && (b_112 != c_112)))
                        _fail(c_112);
                      else
                        b_112 = c_112;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_112)), term_z_28);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_5);
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
ATerm debug_0 (ATerm t)
{
  ATerm a_29;
  a_29 = t;
  {
    ATerm i_112 = NULL;
    ATerm j_112 = NULL;
    j_112 = t;
    if(((i_112 != NULL) && (i_112 != j_112)))
      _fail(j_112);
    else
      i_112 = j_112;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATempty, not_null(i_112)));
      t = printnl_0(t);
    }
  }
  t = a_29;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_88 (ATerm))
{
  ATerm b_29;
  b_29 = t;
  {
    t = h_88(t);
    t = debug_0(t);
  }
  t = b_29;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm q_112 = NULL,r_112 = NULL;
  q_112 = t;
  p_112 :
  if(match_cons(q_112, sym_Undefined_1))
    {
      r_112 = ATgetArgument(q_112, 0);
      {
        ATerm u_112 = NULL,w_112 = NULL;
        ATerm v_112 = NULL;
        t = SSLgetAnnotations(not_null(q_112));
        {
          v_112 = t;
          if(((u_112 != NULL) && (u_112 != v_112)))
            _fail(v_112);
          else
            u_112 = v_112;
        }
        {
          t = not_null(r_112);
          {
            ATerm y_112 = NULL;
            t = r_74(t);
            {
              w_112 = t;
              {
                ATerm z_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_112)), not_null(u_112));
                {
                  z_112 = t;
                  if(((y_112 != NULL) && (y_112 != z_112)))
                    _fail(z_112);
                  else
                    y_112 = z_112;
                }
                t = not_null(y_112);
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
ATerm fetch_1 (ATerm t, ATerm z_100 (ATerm))
{
  ATerm e_113 (ATerm t)
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_100, _id);
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = Cons_2(t, _id, e_113);
      }
    return(t);
  }
  t = e_113(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_84 (ATerm))
{
  t = fetch_1(t, t_84);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_113 = NULL;
  j_113 = t;
  i_113 :
  if(match_cons(j_113, sym_Help_0))
    {
      ATerm l_113 = NULL,n_113 = NULL;
      ATerm e_29;
      e_29 = t;
      {
        ATerm m_113 = NULL;
        t = SSLgetAnnotations(not_null(j_113));
        {
          m_113 = t;
          if(((l_113 != NULL) && (l_113 != m_113)))
            _fail(m_113);
          else
            l_113 = m_113;
        }
      }
      t = e_29;
      {
        ATerm o_113 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_113));
        {
          o_113 = t;
          if(((n_113 != NULL) && (n_113 != o_113)))
            _fail(o_113);
          else
            n_113 = o_113;
        }
        t = not_null(n_113);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_104 (ATerm))
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_104(t);
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
  ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL;
  u_113 = t;
  t_113 :
  if(match_cons(u_113, sym__2))
    {
      v_113 = ATgetArgument(u_113, 0);
      w_113 = ATgetArgument(u_113, 1);
      t = SSL_table_get(not_null(v_113), not_null(w_113));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_114 = NULL,e_114 = NULL,f_114 = NULL,g_114 = NULL;
  d_114 = t;
  c_114 :
  if(match_cons(d_114, sym__3))
    {
      e_114 = ATgetArgument(d_114, 0);
      f_114 = ATgetArgument(d_114, 1);
      g_114 = ATgetArgument(d_114, 2);
      {
        ATerm h_29;
        h_29 = t;
        {
          ATerm k_114 = NULL;
          ATerm l_114 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_114), not_null(f_114));
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
              l_114 = t;
              if(((k_114 != NULL) && (k_114 != l_114)))
                _fail(l_114);
              else
                k_114 = l_114;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_114), not_null(f_114), (ATerm) ATinsert(CheckATermList(not_null(k_114)), not_null(g_114)));
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
ATerm register_usage_1 (ATerm t, ATerm t_83 (ATerm))
{
  ATerm p_114 = NULL;
  ATerm q_114 = NULL;
  t = term_o_15;
  {
    t = t_83(t);
    {
      q_114 = t;
      if(((p_114 != NULL) && (p_114 != q_114)))
        _fail(q_114);
      else
        p_114 = q_114;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_28, term_w_28, not_null(p_114));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm w_114 = NULL,x_114 = NULL,y_114 = NULL;
  w_114 = t;
  v_114 :
  if(match_string(w_114, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(w_114) == AT_LIST) && ((ATermList) w_114 != ATempty)))
        {
          x_114 = ATgetFirst((ATermList) w_114);
          y_114 = (ATerm) ATgetNext((ATermList) w_114);
          {
            ATerm b_115 = NULL;
            ATerm k_29;
            k_29 = t;
            {
              t = not_null(x_114);
              t = a_0(t);
            }
            t = k_29;
            {
              ATerm c_115 = NULL;
              t = term_o_15;
              {
                t = b_0(t);
                {
                  c_115 = t;
                  if(((b_115 != NULL) && (b_115 != c_115)))
                    _fail(c_115);
                  else
                    b_115 = c_115;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_114)), not_null(b_115));
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
  ATerm j_5 (ATerm t)
  {
    ATerm h_115 = NULL;
    h_115 = t;
    g_115 :
    if(!(match_string(h_115, "--help")))
      {
        if(!(match_string(h_115, "-h")))
          {
            if(!(match_string(h_115, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_m_29;
    {
      t = set_config_0(t);
      t = term_n_29;
    }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_o_29;
    return(t);
  }
  t = Option_3(t, j_5, k_5, l_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_115 = NULL,l_115 = NULL,m_115 = NULL;
  k_115 = t;
  j_115 :
  if(((ATgetType(k_115) == AT_LIST) && ((ATermList) k_115 != ATempty)))
    {
      l_115 = ATgetFirst((ATermList) k_115);
      m_115 = (ATerm) ATgetNext((ATermList) k_115);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_115)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_115)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm s_115 = NULL,t_115 = NULL,u_115 = NULL;
  s_115 = t;
  r_115 :
  if(match_cons(s_115, sym__2))
    {
      t_115 = ATgetArgument(s_115, 0);
      u_115 = ATgetArgument(s_115, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_21, not_null(t_115), not_null(u_115));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_83 (ATerm))
{
  ATerm p_29;
  p_29 = t;
  {
    ATerm m_5 (ATerm t)
    {
      t = term_q_29;
      t = r_83(t);
      return(t);
    }
    t = try_1(t, m_5);
  }
  t = p_29;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm c_116 = NULL;
      ATerm r_29;
      r_29 = t;
      {
        ATerm a_116 = NULL;
        ATerm b_116 = NULL;
        b_116 = t;
        if(((a_116 != NULL) && (a_116 != b_116)))
          _fail(b_116);
        else
          a_116 = b_116;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_27, not_null(a_116));
          t = set_config_0(t);
        }
      }
      t = r_29;
      {
        ATerm d_116 = NULL;
        d_116 = t;
        if(((c_116 != NULL) && (c_116 != d_116)))
          _fail(d_116);
        else
          c_116 = d_116;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_116));
      }
      return(t);
    }
    ATerm p_5 (ATerm t)
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              {
                t = r_83(t);
                t = Cons_2(t, _id, p_5);
              }
            }
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_5, p_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_116 = NULL,k_116 = NULL,l_116 = NULL;
  ATerm w_29;
  w_29 = t;
  {
    ATerm m_116 = NULL,n_116 = NULL,o_116 = NULL,p_116 = NULL;
    m_116 = t;
    i_116 :
    if(match_cons(m_116, sym__3))
      {
        n_116 = ATgetArgument(m_116, 0);
        o_116 = ATgetArgument(m_116, 1);
        p_116 = ATgetArgument(m_116, 2);
        {
          if(((j_116 != NULL) && (j_116 != n_116)))
            _fail(n_116);
          else
            j_116 = n_116;
          {
            if(((k_116 != NULL) && (k_116 != o_116)))
              _fail(o_116);
            else
              k_116 = o_116;
            {
              if(((l_116 != NULL) && (l_116 != p_116)))
                _fail(p_116);
              else
                l_116 = p_116;
              t = SSL_table_put(not_null(j_116), not_null(k_116), not_null(l_116));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_83 (ATerm))
{
  ATerm s_116 = NULL;
  ATerm x_29;
  x_29 = t;
  {
    t = term_y_29;
    t = table_put_0(t);
  }
  t = x_29;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm z_29 = t;
      int a_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_83(t);
          LocalPopChoice(a_30);
        }
      else
        {
          t = z_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_5);
    {
      ATerm r_5 (ATerm t)
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_30;
            d_30 = t;
            {
              ATerm e_30 = t;
              int f_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_l_29;
                  t = get_config_0(t);
                  LocalPopChoice(f_30);
                }
              else
                {
                  t = e_30;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = d_30;
            {
              t = system_usage_0(t);
              {
                t = term_n_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            {
              ATerm s_5 (ATerm t)
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm t_116 = NULL;
                  t_116 = t;
                  if(((s_116 != NULL) && (s_116 != t_116)))
                    _fail(t_116);
                  else
                    s_116 = t_116;
                  return(t);
                }
                t = Undefined_1(t, t_5);
                return(t);
              }
              t = option_defined_1(t, s_5);
              {
                ATerm u_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_116)), term_g_30);
                  return(t);
                }
                t = say_1(t, u_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_q_6;
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
        ATerm h_30;
        h_30 = t;
        {
          t = term_v_28;
          t = table_destroy_0(t);
        }
        t = h_30;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  t = parse_options_1(t, l_86);
  {
    t = store_options_0(t);
    {
      t = n_86(t);
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_86);
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            {
              ATerm k_30 = t;
              int l_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_86(t);
                  t = report_success_0(t);
                  LocalPopChoice(l_30);
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
ATerm iowrap_4 (ATerm t, ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_87(t);
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, c_87);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_5, e_87, f_87, w_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      ATerm o_30;
      o_30 = t;
      {
        ATerm w_116 = NULL;
        ATerm x_116 = NULL;
        t = term_y_27;
        {
          t = get_config_0(t);
          {
            x_116 = t;
            if(((w_116 != NULL) && (w_116 != x_116)))
              _fail(x_116);
            else
              w_116 = x_116;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATempty, not_null(w_116)));
          t = printnl_0(t);
        }
      }
      t = o_30;
      return(t);
    }
    t = if_verbose2_1(t, y_5);
    return(t);
  }
  t = iowrap_4(t, w_86, x_86, y_86, x_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm u_86 (ATerm), ATerm v_86 (ATerm))
{
  t = iowrap_3(t, u_86, v_86, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    t = _2(t, _id, r_86);
    return(t);
  }
  t = iowrap_2(t, z_5, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      ATerm c_6 (ATerm t)
      {
        ATerm d_6 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, d_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, c_6);
      return(t);
    }
    t = Specification_1(t, b_6);
    return(t);
  }
  t = iowrap_1(t, a_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
