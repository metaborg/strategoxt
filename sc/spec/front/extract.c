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
ATerm term_p_30;
ATerm term_j_30;
ATerm term_b_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_m_25;
ATerm term_c_25;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_g_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_y_22;
ATerm term_h_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_m_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_u_18;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_g_10;
ATerm term_v_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_i_9;
ATerm term_v_8;
ATerm term_k_7;
ATerm term_z_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_f_6;
ATerm term_e_6;
void init_constant_terms (void)
{
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Op_2, term_l_14, (ATerm) ATempty);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_14);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_m_19);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_m_19);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_19);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_c_25, term_n_15);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_c_26, term_n_15);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__2, term_g_26, term_n_15);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_b_29, term_c_29);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__3, term_b_29, term_c_29, (ATerm) ATempty);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm n_80 (ATerm), ATerm o_80 (ATerm));
ATerm SDef_3 (ATerm, ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm));
ATerm Let_2 (ATerm, ATerm p_80 (ATerm), ATerm q_80 (ATerm));
ATerm sboundin_3 (ATerm, ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm c_111 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm l_100 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm e_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_96 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm d_110 (ATerm), ATerm e_110 (ATerm));
ATerm alltd_1 (ATerm, ATerm d_109 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm f_110 (ATerm), ATerm g_110 (ATerm));
ATerm substitute_1 (ATerm, ATerm h_110 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm u_80 (ATerm), ATerm v_80 (ATerm));
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
ATerm As_2 (ATerm, ATerm m_78 (ATerm), ATerm n_78 (ATerm));
ATerm Prim_2 (ATerm, ATerm u_81 (ATerm), ATerm v_81 (ATerm));
ATerm Explode_2 (ATerm, ATerm i_78 (ATerm), ATerm j_78 (ATerm));
ATerm Op_2 (ATerm, ATerm u_79 (ATerm), ATerm v_79 (ATerm));
ATerm pat_td_1 (ATerm, ATerm h_82 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm o_104 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm h_93 (ATerm), ATerm i_93 (ATerm));
ATerm repeat_1 (ATerm, ATerm k_93 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm c_78 (ATerm), ATerm d_78 (ATerm));
ATerm Con_3 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm r_81 (ATerm), ATerm s_81 (ATerm));
ATerm oncetd_1 (ATerm, ATerm p_108 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm z_106 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm i_106 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm e_99 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm m_104 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm h_104 (ATerm));
ATerm zip_1 (ATerm, ATerm j_104 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_1 (ATerm, ATerm b_100 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm y_93 (ATerm), ATerm z_93 (ATerm));
ATerm for_3 (ATerm, ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm d_94 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm g_83 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm p_82 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm w_99 (ATerm), ATerm x_99 (ATerm));
ATerm union_1 (ATerm, ATerm y_99 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm r_82 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm n_79 (ATerm));
ATerm Cons_2 (ATerm, ATerm w_81 (ATerm), ATerm x_81 (ATerm));
ATerm Specification_1 (ATerm, ATerm p_79 (ATerm));
ATerm _2 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_89 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_86 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_89 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_105 (ATerm), ATerm t_105 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_98 (ATerm), ATerm q_98 (ATerm));
ATerm crush_2 (ATerm, ATerm h_100 (ATerm), ATerm i_100 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_89 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_85 (ATerm));
ATerm map_1 (ATerm, ATerm f_102 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_102 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_85 (ATerm));
ATerm Program_1 (ATerm, ATerm l_76 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm m_76 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_102 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_106 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_85 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_85 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_85 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm));
ATerm iowrap_4 (ATerm, ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_88 (ATerm), ATerm k_88 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_88 (ATerm));
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
        ATerm d_6;
        d_6 = t;
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
        t = d_6;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_6), not_null(m_6)), term_f_6), not_null(l_6)), term_e_6);
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_6), not_null(x_6)), term_f_6), not_null(w_6)), term_i_6), not_null(v_6)), term_e_6);
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
                ATerm j_6 = t;
                int n_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(n_6);
                  }
                else
                  {
                    t = j_6;
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
  ATerm o_6;
  o_6 = t;
  {
    t = error_0(t);
    {
      t = term_p_6;
      t = exit_0(t);
    }
  }
  t = o_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_6);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm y_6;
  y_6 = t;
  {
    ATerm x_7 = NULL;
    ATerm y_7 = NULL;
    y_7 = t;
    if(((x_7 != NULL) && (x_7 != y_7)))
      _fail(y_7);
    else
      x_7 = y_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_6, not_null(x_7));
      t = printnl_0(t);
    }
  }
  t = y_6;
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
          ATerm a_7 = t;
          int b_7 = stack_ptr;
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
                            ATerm c_7 = t;
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
                                t = c_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_8)), term_k_7);
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
              LocalPopChoice(b_7);
            }
          else
            {
              t = a_7;
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
ATerm Rec_2 (ATerm t, ATerm n_80 (ATerm), ATerm o_80 (ATerm))
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
            t = n_80(t);
            {
              s_9 = t;
              {
                t = not_null(m_9);
                {
                  ATerm w_9 = NULL;
                  t = o_80(t);
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
ATerm SDef_3 (ATerm t, ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm))
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
            t = r_80(t);
            {
              u_10 = t;
              {
                t = not_null(m_10);
                {
                  ATerm y_10 = NULL;
                  t = s_80(t);
                  {
                    w_10 = t;
                    {
                      t = not_null(n_10);
                      {
                        ATerm a_11 = NULL;
                        t = t_80(t);
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
ATerm Let_2 (ATerm t, ATerm p_80 (ATerm), ATerm q_80 (ATerm))
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
            t = p_80(t);
            {
              w_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm a_12 = NULL;
                  t = q_80(t);
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
ATerm sboundin_3 (ATerm t, ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm c_111 (ATerm))
{
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, a_111, a_111);
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      {
        ATerm n_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, c_111, c_111, a_111);
            LocalPopChoice(o_7);
          }
        else
          {
            t = n_7;
            t = Rec_2(t, c_111, a_111);
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
ATerm crush_3 (ATerm t, ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm l_100 (ATerm))
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
      t = foldr_3(t, j_100, k_100, l_100);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm e_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_96 (ATerm))
{
  ATerm q_14 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm u_7 = t;
      int v_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_96(t);
          LocalPopChoice(v_7);
        }
      else
        {
          t = u_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm w_7 = t;
      int z_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = NULL;
          ATerm a_8;
          a_8 = t;
          {
            ATerm p_14 = NULL;
            t = d_96(t);
            {
              p_14 = t;
              if(((o_14 != NULL) && (o_14 != p_14)))
                _fail(p_14);
              else
                o_14 = p_14;
            }
          }
          t = a_8;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(o_14);
                return(t);
              }
              t = split_2(t, q_14, t_0);
              t = diff_1(t, f_96);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = e_96(t, r_0, q_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          LocalPopChoice(z_7);
        }
      else
        {
          t = w_7;
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
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        {
          ATerm g_8 = t;
          int o_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(o_8);
            }
          else
            {
              t = g_8;
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
    t = term_v_8;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm q_16 = NULL,s_16 = NULL;
    ATerm a_9;
    a_9 = t;
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
    t = a_9;
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
ATerm SubsVar_2 (ATerm t, ATerm d_110 (ATerm), ATerm e_110 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm l_18 = NULL,m_18 = NULL;
  j_18 = t;
  {
    ATerm n_18 = NULL;
    t = not_null(j_18);
    {
      ATerm o_18 = NULL;
      t = d_110(t);
      {
        n_18 = t;
        {
          if(((l_18 != NULL) && (l_18 != n_18)))
            _fail(n_18);
          else
            l_18 = n_18;
          {
            t = e_110(t);
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
ATerm alltd_1 (ATerm t, ATerm d_109 (ATerm))
{
  ATerm s_18 (ATerm t)
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_109(t);
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
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
ATerm substitute_2 (ATerm t, ATerm f_110 (ATerm), ATerm g_110 (ATerm))
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
              t = SubsVar_2(t, f_110, c_1);
              t = g_110(t);
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
ATerm substitute_1 (ATerm t, ATerm h_110 (ATerm))
{
  t = substitute_2(t, h_110, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm u_80 (ATerm), ATerm v_80 (ATerm))
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
            t = u_80(t);
            {
              j_20 = t;
              {
                t = not_null(d_20);
                {
                  ATerm n_20 = NULL;
                  t = v_80(t);
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
            ATerm f_9;
            f_9 = t;
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
            t = f_9;
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
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_24)), not_null(w_24)), not_null(v_24)), not_null(u_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(r_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))))), (ATerm) ATmakeAppl(sym_Prim_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_25)), not_null(d_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_25)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_n_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_25)), (ATerm) ATmakeAppl(sym_Op_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_25)), not_null(n_25)))))));
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
        ATerm p_9 = t;
        int t_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_27))))));
            LocalPopChoice(t_9);
          }
        else
          {
            t = p_9;
            {
              ATerm y_9 = t;
              int z_9 = stack_ptr;
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
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = y_9;
                  {
                    ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
                    ATerm b_28 = NULL;
                    ATerm f_28 = NULL;
                    t = new_0(t);
                    {
                      b_28 = t;
                      {
                        if(((z_27 != NULL) && (z_27 != b_28)))
                          _fail(b_28);
                        else
                          z_27 = b_28;
                        {
                          t = not_null(d_27);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
                              c_28 = t;
                              z_26 :
                              if(match_cons(c_28, sym_App_2))
                                {
                                  d_28 = ATgetArgument(c_28, 0);
                                  e_28 = ATgetArgument(c_28, 1);
                                  {
                                    if(((y_27 != NULL) && (y_27 != d_28)))
                                      _fail(d_28);
                                    else
                                      y_27 = d_28;
                                    {
                                      if(((x_27 != NULL) && (x_27 != e_28)))
                                        _fail(e_28);
                                      else
                                        x_27 = e_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_27));
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
                              f_28 = t;
                              if(((a_28 != NULL) && (a_28 != f_28)))
                                _fail(f_28);
                              else
                                a_28 = f_28;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_27))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_27)), not_null(y_27)))));
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
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL;
  w_28 = t;
  u_28 :
  if(match_cons(w_28, sym_Match_1))
    {
      x_28 = ATgetArgument(w_28, 0);
      v_28 :
      if(match_cons(x_28, sym_RootApp_1))
        {
          y_28 = ATgetArgument(x_28, 0);
          t = not_null(y_28);
        }
      else
        {
          if(match_cons(x_28, sym_App_2))
            {
              y_28 = ATgetArgument(x_28, 0);
              z_28 = ATgetArgument(x_28, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(y_28), not_null(z_28));
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
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  k_29 :
  if(match_cons(l_29, sym_Match_1))
    {
      m_29 = ATgetArgument(l_29, 0);
      {
        ATerm o_29 = NULL,p_29 = NULL;
        ATerm n_32 = NULL;
        t = not_null(m_29);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm y_29 = NULL,z_29 = NULL,m_32 = NULL;
            y_29 = t;
            h_29 :
            if(match_cons(y_29, sym_RootApp_1))
              {
                z_29 = ATgetArgument(y_29, 0);
                i_29 :
                if(match_cons(z_29, sym_Match_1))
                  {
                    m_32 = ATgetArgument(z_29, 0);
                    {
                      if(((o_29 != NULL) && (o_29 != m_32)))
                        _fail(m_32);
                      else
                        o_29 = m_32;
                      t = not_null(o_29);
                    }
                  }
                else
                  {
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
            n_32 = t;
            if(((p_29 != NULL) && (p_29 != n_32)))
              _fail(n_32);
            else
              p_29 = n_32;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(p_29));
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
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(d_10);
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
  ATerm p_34 = NULL,q_34 = NULL;
  p_34 = t;
  o_34 :
  if(match_cons(p_34, sym_Build_1))
    {
      q_34 = ATgetArgument(p_34, 0);
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
            ATerm w_34 = NULL;
            ATerm f_35 = NULL;
            t = new_0(t);
            {
              w_34 = t;
              {
                if(((u_34 != NULL) && (u_34 != w_34)))
                  _fail(w_34);
                else
                  u_34 = w_34;
                {
                  t = not_null(q_34);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
                      x_34 = t;
                      e_34 :
                      if(match_cons(x_34, sym_Anno_2))
                        {
                          y_34 = ATgetArgument(x_34, 0);
                          z_34 = ATgetArgument(x_34, 1);
                          {
                            if(((s_34 != NULL) && (s_34 != y_34)))
                              _fail(y_34);
                            else
                              s_34 = y_34;
                            {
                              if(((t_34 != NULL) && (t_34 != z_34)))
                                _fail(z_34);
                              else
                                t_34 = z_34;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_34));
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
                      f_35 = t;
                      if(((v_34 != NULL) && (v_34 != f_35)))
                        _fail(f_35);
                      else
                        v_34 = f_35;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_g_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_34)), not_null(s_34))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_34))));
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            {
              ATerm h_10 = t;
              int i_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_35 = NULL,j_35 = NULL,k_35 = NULL;
                  ATerm l_35 = NULL;
                  ATerm r_35 = NULL;
                  t = new_0(t);
                  {
                    l_35 = t;
                    {
                      if(((j_35 != NULL) && (j_35 != l_35)))
                        _fail(l_35);
                      else
                        j_35 = l_35;
                      {
                        t = not_null(q_34);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm p_35 = NULL,q_35 = NULL;
                            p_35 = t;
                            i_34 :
                            if(match_cons(p_35, sym_RootApp_1))
                              {
                                q_35 = ATgetArgument(p_35, 0);
                                {
                                  if(((h_35 != NULL) && (h_35 != q_35)))
                                    _fail(q_35);
                                  else
                                    h_35 = q_35;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_35));
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
                            r_35 = t;
                            if(((k_35 != NULL) && (k_35 != r_35)))
                              _fail(r_35);
                            else
                              k_35 = r_35;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_35), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_35))));
                  LocalPopChoice(i_10);
                }
              else
                {
                  t = h_10;
                  {
                    ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
                    ATerm x_35 = NULL;
                    ATerm v_36 = NULL;
                    t = new_0(t);
                    {
                      x_35 = t;
                      {
                        if(((v_35 != NULL) && (v_35 != x_35)))
                          _fail(x_35);
                        else
                          v_35 = x_35;
                        {
                          t = not_null(q_34);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
                              s_36 = t;
                              m_34 :
                              if(match_cons(s_36, sym_App_2))
                                {
                                  t_36 = ATgetArgument(s_36, 0);
                                  u_36 = ATgetArgument(s_36, 1);
                                  {
                                    if(((t_35 != NULL) && (t_35 != t_36)))
                                      _fail(t_36);
                                    else
                                      t_35 = t_36;
                                    {
                                      if(((u_35 != NULL) && (u_35 != u_36)))
                                        _fail(u_36);
                                      else
                                        u_35 = u_36;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_35));
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
                              v_36 = t;
                              if(((w_35 != NULL) && (w_35 != v_36)))
                                _fail(v_36);
                              else
                                w_35 = v_36;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_35), not_null(u_35), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_35)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_35))));
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
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL;
  w_37 = t;
  u_37 :
  if(match_cons(w_37, sym_Build_1))
    {
      x_37 = ATgetArgument(w_37, 0);
      v_37 :
      if(match_cons(x_37, sym_RootApp_1))
        {
          y_37 = ATgetArgument(x_37, 0);
          t = not_null(y_37);
        }
      else
        {
          if(match_cons(x_37, sym_App_2))
            {
              y_37 = ATgetArgument(x_37, 0);
              z_37 = ATgetArgument(x_37, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_37)), not_null(y_37));
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
ATerm As_2 (ATerm t, ATerm m_78 (ATerm), ATerm n_78 (ATerm))
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  s_38 = t;
  r_38 :
  if(match_cons(s_38, sym_As_2))
    {
      t_38 = ATgetArgument(s_38, 0);
      u_38 = ATgetArgument(s_38, 1);
      {
        ATerm y_38 = NULL,d_39 = NULL;
        ATerm c_39 = NULL;
        t = SSLgetAnnotations(not_null(s_38));
        {
          c_39 = t;
          if(((y_38 != NULL) && (y_38 != c_39)))
            _fail(c_39);
          else
            y_38 = c_39;
        }
        {
          t = not_null(t_38);
          {
            ATerm f_39 = NULL;
            t = m_78(t);
            {
              d_39 = t;
              {
                t = not_null(u_38);
                {
                  ATerm h_39 = NULL;
                  t = n_78(t);
                  {
                    f_39 = t;
                    {
                      ATerm k_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(d_39), not_null(f_39)), not_null(y_38));
                      {
                        k_39 = t;
                        if(((h_39 != NULL) && (h_39 != k_39)))
                          _fail(k_39);
                        else
                          h_39 = k_39;
                      }
                      t = not_null(h_39);
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
ATerm Prim_2 (ATerm t, ATerm u_81 (ATerm), ATerm v_81 (ATerm))
{
  ATerm w_39 = NULL,y_39 = NULL,z_39 = NULL;
  w_39 = t;
  v_39 :
  if(match_cons(w_39, sym_Prim_2))
    {
      y_39 = ATgetArgument(w_39, 0);
      z_39 = ATgetArgument(w_39, 1);
      {
        ATerm d_40 = NULL,f_40 = NULL;
        ATerm e_40 = NULL;
        t = SSLgetAnnotations(not_null(w_39));
        {
          e_40 = t;
          if(((d_40 != NULL) && (d_40 != e_40)))
            _fail(e_40);
          else
            d_40 = e_40;
        }
        {
          t = not_null(y_39);
          {
            ATerm h_40 = NULL;
            t = u_81(t);
            {
              f_40 = t;
              {
                t = not_null(z_39);
                {
                  ATerm j_40 = NULL;
                  t = v_81(t);
                  {
                    h_40 = t;
                    {
                      ATerm k_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(f_40), not_null(h_40)), not_null(d_40));
                      {
                        k_40 = t;
                        if(((j_40 != NULL) && (j_40 != k_40)))
                          _fail(k_40);
                        else
                          j_40 = k_40;
                      }
                      t = not_null(j_40);
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
ATerm Explode_2 (ATerm t, ATerm i_78 (ATerm), ATerm j_78 (ATerm))
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  v_40 :
  if(match_cons(w_40, sym_Explode_2))
    {
      x_40 = ATgetArgument(w_40, 0);
      y_40 = ATgetArgument(w_40, 1);
      {
        ATerm c_41 = NULL,e_41 = NULL;
        ATerm d_41 = NULL;
        t = SSLgetAnnotations(not_null(w_40));
        {
          d_41 = t;
          if(((c_41 != NULL) && (c_41 != d_41)))
            _fail(d_41);
          else
            c_41 = d_41;
        }
        {
          t = not_null(x_40);
          {
            ATerm g_41 = NULL;
            t = i_78(t);
            {
              e_41 = t;
              {
                t = not_null(y_40);
                {
                  ATerm i_41 = NULL;
                  t = j_78(t);
                  {
                    g_41 = t;
                    {
                      ATerm j_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(e_41), not_null(g_41)), not_null(c_41));
                      {
                        j_41 = t;
                        if(((i_41 != NULL) && (i_41 != j_41)))
                          _fail(j_41);
                        else
                          i_41 = j_41;
                      }
                      t = not_null(i_41);
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
ATerm Op_2 (ATerm t, ATerm u_79 (ATerm), ATerm v_79 (ATerm))
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
  e_42 = t;
  d_42 :
  if(match_cons(e_42, sym_Op_2))
    {
      f_42 = ATgetArgument(e_42, 0);
      g_42 = ATgetArgument(e_42, 1);
      {
        ATerm k_42 = NULL,m_42 = NULL;
        ATerm l_42 = NULL;
        t = SSLgetAnnotations(not_null(e_42));
        {
          l_42 = t;
          if(((k_42 != NULL) && (k_42 != l_42)))
            _fail(l_42);
          else
            k_42 = l_42;
        }
        {
          t = not_null(f_42);
          {
            ATerm o_42 = NULL;
            t = u_79(t);
            {
              m_42 = t;
              {
                t = not_null(g_42);
                {
                  ATerm s_42 = NULL;
                  t = v_79(t);
                  {
                    o_42 = t;
                    {
                      ATerm t_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(m_42), not_null(o_42)), not_null(k_42));
                      {
                        t_42 = t;
                        if(((s_42 != NULL) && (s_42 != t_42)))
                          _fail(t_42);
                        else
                          s_42 = t_42;
                      }
                      t = not_null(s_42);
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
ATerm pat_td_1 (ATerm t, ATerm h_82 (ATerm))
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_82(t);
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, h_82);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
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
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, h_82);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
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
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, h_82);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
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
                              ATerm u_1 (ATerm t)
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, h_82);
                                  return(t);
                                }
                                t = fetch_1(t, v_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, u_1);
                              LocalPopChoice(e_11);
                            }
                          else
                            {
                              t = d_11;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, h_82);
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
  v_43 :
  if(match_cons(x_43, sym_Build_1))
    {
      y_43 = ATgetArgument(x_43, 0);
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_44 = NULL,b_44 = NULL;
            ATerm f_44 = NULL;
            t = not_null(y_43);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
                c_44 = t;
                o_43 :
                if(match_cons(c_44, sym_RootApp_1))
                  {
                    d_44 = ATgetArgument(c_44, 0);
                    p_43 :
                    if(match_cons(d_44, sym_Build_1))
                      {
                        e_44 = ATgetArgument(d_44, 0);
                        {
                          if(((a_44 != NULL) && (a_44 != e_44)))
                            _fail(e_44);
                          else
                            a_44 = e_44;
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
                f_44 = t;
                if(((b_44 != NULL) && (b_44 != f_44)))
                  _fail(f_44);
                else
                  b_44 = f_44;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_44));
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            {
              ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
              ATerm o_44 = NULL;
              t = not_null(y_43);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL;
                  k_44 = t;
                  s_43 :
                  if(match_cons(k_44, sym_App_2))
                    {
                      l_44 = ATgetArgument(k_44, 0);
                      n_44 = ATgetArgument(k_44, 1);
                      t_43 :
                      if(match_cons(l_44, sym_Build_1))
                        {
                          m_44 = ATgetArgument(l_44, 0);
                          {
                            if(((i_44 != NULL) && (i_44 != m_44)))
                              _fail(m_44);
                            else
                              i_44 = m_44;
                            {
                              if(((h_44 != NULL) && (h_44 != n_44)))
                                _fail(n_44);
                              else
                                h_44 = n_44;
                              t = not_null(i_44);
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
                  o_44 = t;
                  if(((j_44 != NULL) && (j_44 != o_44)))
                    _fail(o_44);
                  else
                    j_44 = o_44;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_44));
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
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL;
  p_45 = t;
  h_45 :
  if(match_cons(p_45, sym_InfixApp_3))
    {
      q_45 = ATgetArgument(p_45, 0);
      m_45 = ATgetArgument(p_45, 1);
      l_45 = ATgetArgument(p_45, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_45), (ATerm) ATmakeAppl(sym_Op_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_45)), not_null(q_45))));
    }
  else
    {
      if(match_cons(p_45, sym_BAM_3))
        {
          q_45 = ATgetArgument(p_45, 0);
          m_45 = ATgetArgument(p_45, 1);
          l_45 = ATgetArgument(p_45, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(l_45))), not_null(q_45)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_45))));
        }
      else
        {
          if(match_cons(p_45, sym_AM_2))
            {
              q_45 = ATgetArgument(p_45, 0);
              m_45 = ATgetArgument(p_45, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_45), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_45)));
            }
          else
            {
              if(match_cons(p_45, sym_MA_2))
                {
                  q_45 = ATgetArgument(p_45, 0);
                  m_45 = ATgetArgument(p_45, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_45)), not_null(m_45));
                }
              else
                {
                  if(match_cons(p_45, sym_BA_2))
                    {
                      q_45 = ATgetArgument(p_45, 0);
                      m_45 = ATgetArgument(p_45, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_45)), not_null(q_45));
                    }
                  else
                    {
                      if(match_cons(p_45, sym_Lets_2))
                        {
                          q_45 = ATgetArgument(p_45, 0);
                          m_45 = ATgetArgument(p_45, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_45), not_null(m_45));
                        }
                      else
                        {
                          if(match_cons(p_45, sym_LChoices_1))
                            {
                              q_45 = ATgetArgument(p_45, 0);
                              i_45 :
                              if(((ATgetType(q_45) == AT_LIST) && ((ATermList) q_45 != ATempty)))
                                {
                                  n_45 = ATgetFirst((ATermList) q_45);
                                  o_45 = (ATerm) ATgetNext((ATermList) q_45);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_45), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(o_45)));
                                }
                              else
                                {
                                  if(((ATermList) q_45 == ATempty))
                                    {
                                      t = term_v_8;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(p_45, sym_Choices_1))
                                {
                                  q_45 = ATgetArgument(p_45, 0);
                                  j_45 :
                                  if(((ATgetType(q_45) == AT_LIST) && ((ATermList) q_45 != ATempty)))
                                    {
                                      n_45 = ATgetFirst((ATermList) q_45);
                                      o_45 = (ATerm) ATgetNext((ATermList) q_45);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_45), (ATerm) ATmakeAppl(sym_Choices_1, not_null(o_45)));
                                    }
                                  else
                                    {
                                      if(((ATermList) q_45 == ATempty))
                                        {
                                          t = term_v_8;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(p_45, sym_Seqs_1))
                                    {
                                      q_45 = ATgetArgument(p_45, 0);
                                      k_45 :
                                      if(((ATgetType(q_45) == AT_LIST) && ((ATermList) q_45 != ATempty)))
                                        {
                                          n_45 = ATgetFirst((ATermList) q_45);
                                          o_45 = (ATerm) ATgetNext((ATermList) q_45);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_45), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_45)));
                                        }
                                      else
                                        {
                                          if(((ATermList) q_45 == ATempty))
                                            {
                                              t = term_l_11;
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
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL;
  m_47 = t;
  j_47 :
  if(match_cons(m_47, sym__2))
    {
      n_47 = ATgetArgument(m_47, 0);
      q_47 = ATgetArgument(m_47, 1);
      k_47 :
      if(match_cons(n_47, sym__2))
        {
          o_47 = ATgetArgument(n_47, 0);
          p_47 = ATgetArgument(n_47, 1);
          l_47 :
          if(match_cons(q_47, sym__2))
            {
              r_47 = ATgetArgument(q_47, 0);
              s_47 = ATgetArgument(q_47, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_47)), not_null(o_47)), (ATerm) ATinsert(CheckATermList(not_null(s_47)), not_null(p_47)));
            }
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
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
  d_48 = t;
  c_48 :
  if(((ATgetType(d_48) == AT_LIST) && ((ATermList) d_48 != ATempty)))
    {
      e_48 = ATgetFirst((ATermList) d_48);
      f_48 = (ATerm) ATgetNext((ATermList) d_48);
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_48), not_null(f_48));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm m_48 = NULL;
  m_48 = t;
  l_48 :
  if(((ATermList) m_48 == ATempty))
    {
      t = term_m_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm o_104 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, o_104);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  ATerm y_48 (ATerm t)
  {
    ATerm v_48 = NULL;
    ATerm w_48 = NULL;
    t = not_null(s_48);
    {
      ATerm r_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_11;
        }
      {
        t = new_0(t);
        {
          w_48 = t;
          if(((v_48 != NULL) && (v_48 != w_48)))
            _fail(w_48);
          else
            v_48 = w_48;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(v_48)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_48)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_48))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_48))));
    return(t);
  }
  ATerm z_48 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_l_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_48))));
    return(t);
  }
  s_48 = t;
  r_48 :
  if(match_cons(s_48, sym_Var_1))
    {
      t_48 = ATgetArgument(s_48, 0);
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_48(t);
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            t = z_48(t);
          }
      }
    }
  else
    {
      t = y_48(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm k_49 = NULL,l_49 = NULL;
  k_49 = t;
  j_49 :
  if(match_cons(k_49, sym_Var_1))
    {
      l_49 = ATgetArgument(k_49, 0);
      {
        ATerm x_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_49 = NULL,q_50 = NULL;
            ATerm p_49 = NULL;
            t = SSLgetAnnotations(not_null(k_49));
            {
              p_49 = t;
              if(((o_49 != NULL) && (o_49 != p_49)))
                _fail(p_49);
              else
                o_49 = p_49;
            }
            {
              t = not_null(l_49);
              {
                ATerm t_52 = NULL;
                t = o_0(t);
                {
                  q_50 = t;
                  {
                    ATerm u_52 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_50)), not_null(o_49));
                    {
                      u_52 = t;
                      if(((t_52 != NULL) && (t_52 != u_52)))
                        _fail(u_52);
                      else
                        t_52 = u_52;
                    }
                    t = not_null(t_52);
                  }
                }
              }
            }
            LocalPopChoice(z_11);
          }
        else
          {
            t = x_11;
            {
              ATerm x_52 = NULL,z_52 = NULL;
              ATerm y_52 = NULL;
              t = SSLgetAnnotations(not_null(k_49));
              {
                y_52 = t;
                if(((x_52 != NULL) && (x_52 != y_52)))
                  _fail(y_52);
                else
                  x_52 = y_52;
              }
              {
                t = not_null(l_49);
                {
                  ATerm b_53 = NULL;
                  t = o_0(t);
                  {
                    z_52 = t;
                    {
                      ATerm c_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_52)), not_null(x_52));
                      {
                        c_53 = t;
                        if(((b_53 != NULL) && (b_53 != c_53)))
                          _fail(c_53);
                        else
                          b_53 = c_53;
                      }
                      t = not_null(b_53);
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
            ATerm c_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_12;
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
ATerm repeat_2 (ATerm t, ATerm h_93 (ATerm), ATerm i_93 (ATerm))
{
  ATerm i_54 (ATerm t)
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_93(t);
        t = i_54(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = i_93(t);
      }
    return(t);
  }
  t = i_54(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm k_93 (ATerm))
{
  t = repeat_2(t, k_93, _id);
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
      ATerm f_12;
      f_12 = t;
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
      t = f_12;
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
  ATerm g_12 = t;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm h_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(m_12);
          }
        else
          {
            t = h_12;
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
      t = g_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm))
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
            ATerm m_55 = NULL;
            t = c_78(t);
            {
              k_55 = t;
              {
                t = not_null(e_55);
                {
                  ATerm o_55 = NULL;
                  t = d_78(t);
                  {
                    m_55 = t;
                    {
                      ATerm p_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(k_55), not_null(m_55)), not_null(i_55));
                      {
                        p_55 = t;
                        if(((o_55 != NULL) && (o_55 != p_55)))
                          _fail(p_55);
                        else
                          o_55 = p_55;
                      }
                      t = not_null(o_55);
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
ATerm Con_3 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm), ATerm b_78 (ATerm))
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL;
  c_56 = t;
  b_56 :
  if(match_cons(c_56, sym_Con_3))
    {
      d_56 = ATgetArgument(c_56, 0);
      e_56 = ATgetArgument(c_56, 1);
      f_56 = ATgetArgument(c_56, 2);
      {
        ATerm k_56 = NULL,m_56 = NULL;
        ATerm l_56 = NULL;
        t = SSLgetAnnotations(not_null(c_56));
        {
          l_56 = t;
          if(((k_56 != NULL) && (k_56 != l_56)))
            _fail(l_56);
          else
            k_56 = l_56;
        }
        {
          t = not_null(d_56);
          {
            ATerm o_56 = NULL;
            t = z_77(t);
            {
              m_56 = t;
              {
                t = not_null(e_56);
                {
                  ATerm q_56 = NULL;
                  t = a_78(t);
                  {
                    o_56 = t;
                    {
                      t = not_null(f_56);
                      {
                        ATerm s_56 = NULL;
                        t = b_78(t);
                        {
                          q_56 = t;
                          {
                            ATerm t_56 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(m_56), not_null(o_56), not_null(q_56)), not_null(k_56));
                            {
                              t_56 = t;
                              if(((s_56 != NULL) && (s_56 != t_56)))
                                _fail(t_56);
                              else
                                s_56 = t_56;
                            }
                            t = not_null(s_56);
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
  ATerm n_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
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
      t = n_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL;
  e_57 = t;
  c_57 :
  if(match_cons(e_57, sym_SRule_1))
    {
      f_57 = ATgetArgument(e_57, 0);
      d_57 :
      if(match_cons(f_57, sym_StratRule_3))
        {
          h_57 = ATgetArgument(f_57, 0);
          i_57 = ATgetArgument(f_57, 1);
          j_57 = ATgetArgument(f_57, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_57)), (ATerm) ATmakeAppl(sym_Where_1, not_null(j_57))), not_null(h_57)));
        }
      else
        {
          if(match_cons(f_57, sym_Rule_3))
            {
              h_57 = ATgetArgument(f_57, 0);
              i_57 = ATgetArgument(f_57, 1);
              j_57 = ATgetArgument(f_57, 2);
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
ATerm Scope_2 (ATerm t, ATerm r_81 (ATerm), ATerm s_81 (ATerm))
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL;
  y_57 = t;
  x_57 :
  if(match_cons(y_57, sym_Scope_2))
    {
      z_57 = ATgetArgument(y_57, 0);
      a_58 = ATgetArgument(y_57, 1);
      {
        ATerm e_58 = NULL,g_58 = NULL;
        ATerm f_58 = NULL;
        t = SSLgetAnnotations(not_null(y_57));
        {
          f_58 = t;
          if(((e_58 != NULL) && (e_58 != f_58)))
            _fail(f_58);
          else
            e_58 = f_58;
        }
        {
          t = not_null(z_57);
          {
            ATerm i_58 = NULL;
            t = r_81(t);
            {
              g_58 = t;
              {
                t = not_null(a_58);
                {
                  ATerm k_58 = NULL;
                  t = s_81(t);
                  {
                    i_58 = t;
                    {
                      ATerm l_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(g_58), not_null(i_58)), not_null(e_58));
                      {
                        l_58 = t;
                        if(((k_58 != NULL) && (k_58 != l_58)))
                          _fail(l_58);
                        else
                          k_58 = l_58;
                      }
                      t = not_null(k_58);
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
ATerm oncetd_1 (ATerm t, ATerm p_108 (ATerm))
{
  ATerm r_58 (ATerm t)
  {
    ATerm q_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_108(t);
        LocalPopChoice(x_12);
      }
    else
      {
        t = q_12;
        t = _one(t, r_58);
      }
    return(t);
  }
  t = r_58(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL;
  g_59 = t;
  e_59 :
  if(match_cons(g_59, sym_SRule_1))
    {
      h_59 = ATgetArgument(g_59, 0);
      f_59 :
      if(match_cons(h_59, sym_Rule_3))
        {
          m_59 = ATgetArgument(h_59, 0);
          n_59 = ATgetArgument(h_59, 1);
          o_59 = ATgetArgument(h_59, 2);
          {
            ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,k_60 = NULL;
            ATerm l_60 = NULL;
            ATerm r_60 = NULL;
            t = new_0(t);
            {
              l_60 = t;
              {
                if(((e_60 != NULL) && (e_60 != l_60)))
                  _fail(l_60);
                else
                  e_60 = l_60;
                {
                  t = not_null(m_59);
                  {
                    ATerm i_61 = NULL;
                    ATerm d_2 (ATerm t)
                    {
                      ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL;
                      m_60 = t;
                      v_58 :
                      if(match_cons(m_60, sym_Con_3))
                        {
                          n_60 = ATgetArgument(m_60, 0);
                          p_60 = ATgetArgument(m_60, 1);
                          q_60 = ATgetArgument(m_60, 2);
                          w_58 :
                          if(match_cons(n_60, sym_Var_1))
                            {
                              o_60 = ATgetArgument(n_60, 0);
                              {
                                if(((d_60 != NULL) && (d_60 != o_60)))
                                  _fail(o_60);
                                else
                                  d_60 = o_60;
                                {
                                  if(((u_59 != NULL) && (u_59 != p_60)))
                                    _fail(p_60);
                                  else
                                    u_59 = p_60;
                                  {
                                    if(((s_59 != NULL) && (s_59 != q_60)))
                                      _fail(q_60);
                                    else
                                      s_59 = q_60;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_60));
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
                      r_60 = t;
                      {
                        if(((f_60 != NULL) && (f_60 != r_60)))
                          _fail(r_60);
                        else
                          f_60 = r_60;
                        {
                          t = not_null(n_59);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,e_61 = NULL,f_61 = NULL;
                              s_60 = t;
                              z_58 :
                              if(match_cons(s_60, sym_Con_3))
                                {
                                  t_60 = ATgetArgument(s_60, 0);
                                  v_60 = ATgetArgument(s_60, 1);
                                  w_60 = ATgetArgument(s_60, 2);
                                  a_59 :
                                  if(match_cons(t_60, sym_Var_1))
                                    {
                                      u_60 = ATgetArgument(t_60, 0);
                                      b_59 :
                                      if(match_cons(w_60, sym_Call_2))
                                        {
                                          e_61 = ATgetArgument(w_60, 0);
                                          f_61 = ATgetArgument(w_60, 1);
                                          c_59 :
                                          if(((ATermList) f_61 == ATempty))
                                            {
                                              {
                                                if(((d_60 != NULL) && (d_60 != u_60)))
                                                  _fail(u_60);
                                                else
                                                  d_60 = u_60;
                                                {
                                                  if(((v_59 != NULL) && (v_59 != v_60)))
                                                    _fail(v_60);
                                                  else
                                                    v_59 = v_60;
                                                  {
                                                    if(((t_59 != NULL) && (t_59 != e_61)))
                                                      _fail(e_61);
                                                    else
                                                      t_59 = e_61;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_60));
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
                              i_61 = t;
                              if(((k_60 != NULL) && (k_60 != i_61)))
                                _fail(i_61);
                              else
                                k_60 = i_61;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_60), not_null(k_60), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_59), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(t_59), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_59), not_null(v_59), term_l_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_60)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_60)))))));
          }
        }
      else
        {
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
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        {
          ATerm d_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(e_13);
            }
          else
            {
              t = d_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm z_106 (ATerm))
{
  t = z_106(t);
  {
    ATerm g_2 (ATerm t)
    {
      t = topdown_1(t, z_106);
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
        ATerm f_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(g_13);
          }
        else
          {
            t = f_13;
            {
              ATerm h_13 = t;
              int n_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
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
                        t = Bapp_0(t);
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
                              t = Mapp_0(t);
                              LocalPopChoice(v_13);
                            }
                          else
                            {
                              t = u_13;
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
  ATerm z_61 = NULL;
  z_61 = t;
  y_61 :
  if(match_cons(z_61, sym__0))
    {
      ATerm b_62 = NULL,d_62 = NULL;
      ATerm w_13;
      w_13 = t;
      {
        ATerm c_62 = NULL;
        t = SSLgetAnnotations(not_null(z_61));
        {
          c_62 = t;
          if(((b_62 != NULL) && (b_62 != c_62)))
            _fail(c_62);
          else
            b_62 = c_62;
        }
      }
      t = w_13;
      {
        ATerm e_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(b_62));
        {
          e_62 = t;
          if(((d_62 != NULL) && (d_62 != e_62)))
            _fail(e_62);
          else
            d_62 = e_62;
        }
        t = not_null(d_62);
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
  ATerm y_62 = NULL;
  ATerm e_63 = NULL,f_63 = NULL,v_63 = NULL,x_63 = NULL;
  y_62 = t;
  {
    ATerm x_13;
    x_13 = t;
    {
      ATerm g_63 = NULL;
      ATerm i_63 = NULL,j_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL;
      t = not_null(y_62);
      {
        g_63 = t;
        {
          t = SSL_explode_term(not_null(g_63));
          {
            i_63 = t;
            o_62 :
            if(match_cons(i_63, sym__2))
              {
                j_63 = ATgetArgument(i_63, 0);
                s_63 = ATgetArgument(i_63, 1);
                p_62 :
                if(match_string(j_63, ""))
                  {
                    q_62 :
                    if(((ATgetType(s_63) == AT_LIST) && ((ATermList) s_63 != ATempty)))
                      {
                        t_63 = ATgetFirst((ATermList) s_63);
                        u_63 = (ATerm) ATgetNext((ATermList) s_63);
                        {
                          if(((e_63 != NULL) && (e_63 != t_63)))
                            _fail(t_63);
                          else
                            e_63 = t_63;
                          if(((f_63 != NULL) && (f_63 != u_63)))
                            _fail(u_63);
                          else
                            f_63 = u_63;
                        }
                      }
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
      ATerm y_13;
      y_13 = t;
      {
        ATerm w_63 = NULL;
        t = term_o_9;
        {
          w_63 = t;
          if(((v_63 != NULL) && (v_63 != w_63)))
            _fail(w_63);
          else
            v_63 = w_63;
        }
      }
      t = y_13;
      {
        t = SSL_mkterm(not_null(v_63), not_null(f_63));
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
  ATerm k_64 = NULL;
  ATerm m_64 = NULL,n_64 = NULL;
  k_64 = t;
  {
    ATerm o_64 = NULL;
    ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL;
    t = not_null(k_64);
    {
      o_64 = t;
      {
        t = SSL_explode_term(not_null(o_64));
        {
          q_64 = t;
          h_64 :
          if(match_cons(q_64, sym__2))
            {
              r_64 = ATgetArgument(q_64, 0);
              s_64 = ATgetArgument(q_64, 1);
              i_64 :
              if(match_string(r_64, ""))
                {
                  j_64 :
                  if(((ATgetType(s_64) == AT_LIST) && ((ATermList) s_64 != ATempty)))
                    {
                      t_64 = ATgetFirst((ATermList) s_64);
                      u_64 = (ATerm) ATgetNext((ATermList) s_64);
                      {
                        if(((n_64 != NULL) && (n_64 != t_64)))
                          _fail(t_64);
                        else
                          n_64 = t_64;
                        if(((m_64 != NULL) && (m_64 != u_64)))
                          _fail(u_64);
                        else
                          m_64 = u_64;
                      }
                    }
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
    t = not_null(n_64);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm i_106 (ATerm))
{
  ATerm h_65 = NULL,j_65 = NULL,l_65 = NULL;
  ATerm n_65 (ATerm t)
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_65 = NULL,f_65 = NULL;
        ATerm d_14;
        d_14 = t;
        {
          ATerm e_65 = NULL;
          t = map_1(t, Thd_0);
          {
            t = i_106(t);
            {
              e_65 = t;
              if(((d_65 != NULL) && (d_65 != e_65)))
                _fail(e_65);
              else
                d_65 = e_65;
            }
          }
        }
        t = d_14;
        {
          ATerm g_65 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = n_65(t);
            {
              g_65 = t;
              if(((f_65 != NULL) && (f_65 != g_65)))
                _fail(g_65);
              else
                f_65 = g_65;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(f_65)), not_null(d_65));
        }
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = n_65(t);
  {
    ATerm g_14;
    g_14 = t;
    {
      ATerm i_65 = NULL;
      i_65 = t;
      if(((h_65 != NULL) && (h_65 != i_65)))
        _fail(i_65);
      else
        h_65 = i_65;
    }
    t = g_14;
    {
      ATerm k_14;
      k_14 = t;
      {
        ATerm k_65 = NULL;
        t = term_o_9;
        {
          k_65 = t;
          if(((j_65 != NULL) && (j_65 != k_65)))
            _fail(k_65);
          else
            j_65 = k_65;
        }
      }
      t = k_14;
      {
        t = SSL_mkterm(not_null(j_65), not_null(h_65));
        {
          l_65 = t;
          t = not_null(l_65);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm x_65 = NULL;
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
  x_65 = t;
  {
    ATerm c_66 = NULL;
    ATerm d_66 = NULL;
    t = new_0(t);
    {
      c_66 = t;
      {
        if(((z_65 != NULL) && (z_65 != c_66)))
          _fail(c_66);
        else
          z_65 = c_66;
        {
          ATerm j_66 = NULL;
          t = new_0(t);
          {
            d_66 = t;
            {
              if(((a_66 != NULL) && (a_66 != d_66)))
                _fail(d_66);
              else
                a_66 = d_66;
              {
                t = new_0(t);
                {
                  j_66 = t;
                  if(((b_66 != NULL) && (b_66 != j_66)))
                    _fail(j_66);
                  else
                    b_66 = j_66;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_65)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_65)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_66)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_66))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(z_65), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_14), term_n_14)), not_null(a_66), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_66)), not_null(b_66), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_66)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
  s_66 = t;
  p_66 :
  if(match_cons(s_66, sym__2))
    {
      t_66 = ATgetArgument(s_66, 0);
      u_66 = ATgetArgument(s_66, 1);
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(t_66), not_null(u_66));
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            t = SSL_subtr(not_null(t_66), not_null(u_66));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm e_99 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm s_67 = NULL,t_67 = NULL,v_67 = NULL;
    s_67 = t;
    z_66 :
    if(match_cons(s_67, sym__2))
      {
        t_67 = ATgetArgument(s_67, 0);
        v_67 = ATgetArgument(s_67, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(t_67), not_null(v_67), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL;
    y_67 = t;
    b_67 :
    if(match_cons(y_67, sym__3))
      {
        z_67 = ATgetArgument(y_67, 0);
        a_68 = ATgetArgument(y_67, 1);
        b_68 = ATgetArgument(y_67, 2);
        c_67 :
        if(match_int(z_67, 0))
          {
            t = not_null(b_68);
          }
        else
          {
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
    ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL;
    p_68 = t;
    r_67 :
    if(match_cons(p_68, sym__3))
      {
        q_68 = ATgetArgument(p_68, 0);
        r_68 = ATgetArgument(p_68, 1);
        s_68 = ATgetArgument(p_68, 2);
        {
          ATerm z_68 = NULL,b_69 = NULL;
          ATerm t_14;
          t_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_68), term_p_6);
            t = geq_0(t);
          }
          t = t_14;
          {
            ATerm w_14;
            w_14 = t;
            {
              ATerm a_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_68), term_p_6);
              {
                t = subt_0(t);
                {
                  a_69 = t;
                  if(((z_68 != NULL) && (z_68 != a_69)))
                    _fail(a_69);
                  else
                    z_68 = a_69;
                }
              }
            }
            t = w_14;
            {
              ATerm c_69 = NULL;
              t = not_null(r_68);
              {
                t = e_99(t);
                {
                  c_69 = t;
                  if(((b_69 != NULL) && (b_69 != c_69)))
                    _fail(c_69);
                  else
                    b_69 = c_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(z_68), not_null(r_68), (ATerm) ATinsert(CheckATermList(not_null(s_68)), not_null(b_69)));
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
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL;
  n_69 = t;
  m_69 :
  if(match_cons(n_69, sym__2))
    {
      o_69 = ATgetArgument(n_69, 0);
      p_69 = ATgetArgument(n_69, 1);
      {
        ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL;
        ATerm v_69 = NULL;
        ATerm w_69 = NULL;
        t = new_0(t);
        {
          v_69 = t;
          {
            if(((s_69 != NULL) && (s_69 != v_69)))
              _fail(v_69);
            else
              s_69 = v_69;
            {
              ATerm x_69 = NULL;
              t = new_0(t);
              {
                w_69 = t;
                {
                  if(((t_69 != NULL) && (t_69 != w_69)))
                    _fail(w_69);
                  else
                    t_69 = w_69;
                  {
                    t = new_0(t);
                    {
                      x_69 = t;
                      if(((u_69 != NULL) && (u_69 != x_69)))
                        _fail(x_69);
                      else
                        u_69 = x_69;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_69)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_69)))), (ATerm) ATmakeAppl(sym_Op_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_69))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(s_69), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_14), term_n_14)), not_null(t_69), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_69)), not_null(u_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_69)));
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
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL;
  f_70 = t;
  d_70 :
  if(match_cons(f_70, sym__2))
    {
      g_70 = ATgetArgument(f_70, 0);
      h_70 = ATgetArgument(f_70, 1);
      e_70 :
      if(((ATermList) h_70 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm m_104 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, m_104);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
  l_70 = t;
  k_70 :
  if(((ATgetType(l_70) == AT_LIST) && ((ATermList) l_70 != ATempty)))
    {
      m_70 = ATgetFirst((ATermList) l_70);
      n_70 = (ATerm) ATgetNext((ATermList) l_70);
      t = not_null(n_70);
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
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
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
    ATerm m_15;
    m_15 = t;
    {
      ATerm j_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL;
      ATerm k_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_71), term_p_6);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_72), term_n_15);
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
    t = m_15;
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
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(v_71), term_o_15), not_null(e_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(w_72)), not_null(b_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(v_71), not_null(g_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(v_71), not_null(i_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(d_72))))));
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
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(v_71), term_o_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(v_71), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(v_71), (ATerm) ATempty))), term_l_11))));
    return(t);
  }
  ATerm w_73 (ATerm t)
  {
    ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,s_73 = NULL;
    ATerm p_15;
    p_15 = t;
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
    t = p_15;
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
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(v_71), term_q_15), not_null(f_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(s_73)), not_null(d_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(v_71), not_null(h_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(v_71), not_null(j_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_73))))));
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
              ATerm r_15 = t;
              int s_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_73(t);
                  LocalPopChoice(s_15);
                }
              else
                {
                  t = r_15;
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
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL;
  l_74 = t;
  i_74 :
  if(match_cons(l_74, sym__2))
    {
      m_74 = ATgetArgument(l_74, 0);
      r_74 = ATgetArgument(l_74, 1);
      j_74 :
      if(match_cons(m_74, sym__2))
        {
          n_74 = ATgetArgument(m_74, 0);
          q_74 = ATgetArgument(m_74, 1);
          k_74 :
          if(match_cons(n_74, sym_Mod_2))
            {
              o_74 = ATgetArgument(n_74, 0);
              p_74 = ATgetArgument(n_74, 1);
              {
                ATerm w_74 = NULL;
                ATerm x_74 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_74), not_null(p_74), not_null(q_74));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      x_74 = t;
                      if(((w_74 != NULL) && (w_74 != x_74)))
                        _fail(x_74);
                      else
                        w_74 = x_74;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_74), not_null(r_74));
              }
            }
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
  ATerm y_15 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(d_16);
    }
  else
    {
      t = y_15;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL;
  d_75 = t;
  b_75 :
  if(match_cons(d_75, sym__5))
    {
      e_75 = ATgetArgument(d_75, 0);
      h_75 = ATgetArgument(d_75, 1);
      i_75 = ATgetArgument(d_75, 2);
      j_75 = ATgetArgument(d_75, 3);
      k_75 = ATgetArgument(d_75, 4);
      c_75 :
      if(((ATgetType(e_75) == AT_LIST) && ((ATermList) e_75 != ATempty)))
        {
          f_75 = ATgetFirst((ATermList) e_75);
          g_75 = (ATerm) ATgetNext((ATermList) e_75);
          t = (ATerm) ATmakeAppl(sym__5, not_null(g_75), not_null(h_75), not_null(i_75), not_null(j_75), (ATerm) ATinsert(CheckATermList(not_null(k_75)), not_null(f_75)));
        }
      else
        {
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
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL;
  v_75 = t;
  t_75 :
  if(match_cons(v_75, sym__2))
    {
      w_75 = ATgetArgument(v_75, 0);
      x_75 = ATgetArgument(v_75, 1);
      u_75 :
      if(((ATgetType(x_75) == AT_LIST) && ((ATermList) x_75 != ATempty)))
        {
          y_75 = ATgetFirst((ATermList) x_75);
          z_75 = (ATerm) ATgetNext((ATermList) x_75);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_75)), not_null(y_75)), not_null(z_75));
        }
      else
        {
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
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
  g_76 = t;
  f_76 :
  if(match_cons(g_76, sym__2))
    {
      h_76 = ATgetArgument(g_76, 0);
      i_76 = ATgetArgument(g_76, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_76)), not_null(h_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL;
  s_76 = t;
  p_76 :
  if(match_cons(s_76, sym__2))
    {
      t_76 = ATgetArgument(s_76, 0);
      w_76 = ATgetArgument(s_76, 1);
      q_76 :
      if(((ATgetType(t_76) == AT_LIST) && ((ATermList) t_76 != ATempty)))
        {
          u_76 = ATgetFirst((ATermList) t_76);
          v_76 = (ATerm) ATgetNext((ATermList) t_76);
          r_76 :
          if(((ATgetType(w_76) == AT_LIST) && ((ATermList) w_76 != ATempty)))
            {
              x_76 = ATgetFirst((ATermList) w_76);
              y_76 = (ATerm) ATgetNext((ATermList) w_76);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(u_76), not_null(x_76)), (ATerm) ATmakeAppl(sym__2, not_null(v_76), not_null(y_76)));
            }
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
ATerm genzip_4 (ATerm t, ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm h_104 (ATerm))
{
  ATerm m_77 (ATerm t)
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_104(t);
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        {
          t = f_104(t);
          {
            t = _2(t, h_104, m_77);
            t = g_104(t);
          }
        }
      }
    return(t);
  }
  t = m_77(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm j_104 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, j_104);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL;
  x_77 = t;
  v_77 :
  if(((ATgetType(x_77) == AT_LIST) && ((ATermList) x_77 != ATempty)))
    {
      y_77 = ATgetFirst((ATermList) x_77);
      g_78 = (ATerm) ATgetNext((ATermList) x_77);
      w_77 :
      if(match_cons(y_77, sym__2))
        {
          e_78 = ATgetArgument(y_77, 0);
          f_78 = ATgetArgument(y_77, 1);
          {
            ATerm o_78 = NULL,p_78 = NULL,v_78 = NULL,b_79 = NULL;
            ATerm n_16;
            n_16 = t;
            {
              ATerm q_78 = NULL;
              ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL;
              t = not_null(f_78);
              {
                q_78 = t;
                {
                  t = SSL_explode_term(not_null(q_78));
                  {
                    s_78 = t;
                    q_77 :
                    if(match_cons(s_78, sym__2))
                      {
                        t_78 = ATgetArgument(s_78, 0);
                        u_78 = ATgetArgument(s_78, 1);
                        {
                          if(((o_78 != NULL) && (o_78 != t_78)))
                            _fail(t_78);
                          else
                            o_78 = t_78;
                          if(((p_78 != NULL) && (p_78 != u_78)))
                            _fail(u_78);
                          else
                            p_78 = u_78;
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
            t = n_16;
            {
              ATerm o_16;
              o_16 = t;
              {
                ATerm w_78 = NULL;
                ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL;
                t = not_null(e_78);
                {
                  w_78 = t;
                  {
                    t = SSL_explode_term(not_null(w_78));
                    {
                      y_78 = t;
                      t_77 :
                      if(match_cons(y_78, sym__2))
                        {
                          z_78 = ATgetArgument(y_78, 0);
                          a_79 = ATgetArgument(y_78, 1);
                          {
                            if(((o_78 != NULL) && (o_78 != z_78)))
                              _fail(z_78);
                            else
                              o_78 = z_78;
                            if(((v_78 != NULL) && (v_78 != a_79)))
                              _fail(a_79);
                            else
                              v_78 = a_79;
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
                ATerm c_79 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_78), not_null(p_78));
                {
                  t = zip_1(t, _id);
                  {
                    c_79 = t;
                    if(((b_79 != NULL) && (b_79 != c_79)))
                      _fail(c_79);
                    else
                      b_79 = c_79;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_79), not_null(g_78));
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
  ATerm m_79 = NULL,o_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL;
  m_79 = t;
  k_79 :
  if(((ATgetType(m_79) == AT_LIST) && ((ATermList) m_79 != ATempty)))
    {
      o_79 = ATgetFirst((ATermList) m_79);
      s_79 = (ATerm) ATgetNext((ATermList) m_79);
      l_79 :
      if(match_cons(o_79, sym__2))
        {
          q_79 = ATgetArgument(o_79, 0);
          r_79 = ATgetArgument(o_79, 1);
          {
            ATerm w_79 = NULL;
            if(((q_79 != NULL) && (q_79 != r_79)))
              _fail(r_79);
            else
              q_79 = r_79;
            {
              if(((w_79 != NULL) && (w_79 != s_79)))
                _fail(s_79);
              else
                w_79 = s_79;
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
ATerm diff_1 (ATerm t, ATerm b_100 (ATerm))
{
  ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
  a_80 = t;
  z_79 :
  if(match_cons(a_80, sym__2))
    {
      b_80 = ATgetArgument(a_80, 0);
      c_80 = ATgetArgument(a_80, 1);
      {
        t = not_null(b_80);
        {
          ATerm g_80 (ATerm t)
          {
            ATerm p_16 = t;
            int u_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(u_16);
              }
            else
              {
                t = p_16;
                {
                  ATerm v_16 = t;
                  int w_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_2 (ATerm t)
                      {
                        t = not_null(c_80);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_100, m_2);
                      t = g_80(t);
                      LocalPopChoice(w_16);
                    }
                  else
                    {
                      t = v_16;
                      t = Cons_2(t, _id, g_80);
                    }
                }
              }
            return(t);
          }
          t = g_80(t);
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
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm i_80 = NULL;
          i_80 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(i_80));
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          ATerm g_17 = t;
          int o_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_2 (ATerm t)
              {
                ATerm p_17 = t;
                int q_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(q_17);
                  }
                else
                  {
                    t = p_17;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, q_2);
              LocalPopChoice(o_17);
            }
          else
            {
              t = g_17;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, n_2, o_2, p_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm))
{
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL;
  e_81 = t;
  c_81 :
  if(match_cons(e_81, sym__5))
    {
      f_81 = ATgetArgument(e_81, 0);
      i_81 = ATgetArgument(e_81, 1);
      j_81 = ATgetArgument(e_81, 2);
      k_81 = ATgetArgument(e_81, 3);
      l_81 = ATgetArgument(e_81, 4);
      d_81 :
      if(((ATgetType(f_81) == AT_LIST) && ((ATermList) f_81 != ATempty)))
        {
          g_81 = ATgetFirst((ATermList) f_81);
          h_81 = (ATerm) ATgetNext((ATermList) f_81);
          {
            ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,j_82 = NULL,l_82 = NULL,n_82 = NULL;
            ATerm r_17;
            r_17 = t;
            {
              ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_81), not_null(j_81));
              {
                t = v_82(t);
                {
                  c_82 = t;
                  y_80 :
                  if(match_cons(c_82, sym__2))
                    {
                      d_82 = ATgetArgument(c_82, 0);
                      e_82 = ATgetArgument(c_82, 1);
                      {
                        ATerm f_82 = NULL;
                        if(((z_81 != NULL) && (z_81 != d_82)))
                          _fail(d_82);
                        else
                          z_81 = d_82;
                        {
                          if(((y_81 != NULL) && (y_81 != e_82)))
                            _fail(e_82);
                          else
                            y_81 = e_82;
                          {
                            t = not_null(z_81);
                            {
                              ATerm g_82 = NULL;
                              t = w_82(t);
                              {
                                f_82 = t;
                                {
                                  if(((a_82 != NULL) && (a_82 != f_82)))
                                    _fail(f_82);
                                  else
                                    a_82 = f_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_82), not_null(i_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        g_82 = t;
                                        if(((b_82 != NULL) && (b_82 != g_82)))
                                          _fail(g_82);
                                        else
                                          b_82 = g_82;
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
            t = r_17;
            {
              ATerm c_18;
              c_18 = t;
              {
                ATerm k_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_82), not_null(h_81));
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
                ATerm e_18;
                e_18 = t;
                {
                  ATerm m_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_82), not_null(i_81));
                  {
                    t = conc_0(t);
                    {
                      m_82 = t;
                      if(((l_82 != NULL) && (l_82 != m_82)))
                        _fail(m_82);
                      else
                        l_82 = m_82;
                    }
                  }
                }
                t = e_18;
                {
                  ATerm o_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(g_81), not_null(z_81), not_null(k_81));
                  {
                    t = x_82(t);
                    {
                      o_82 = t;
                      if(((n_82 != NULL) && (n_82 != o_82)))
                        _fail(o_82);
                      else
                        n_82 = o_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(j_82), not_null(l_82), not_null(y_81), not_null(n_82), not_null(l_81));
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
  c_83 :
  if(match_cons(h_83, sym__5))
    {
      i_83 = ATgetArgument(h_83, 0);
      j_83 = ATgetArgument(h_83, 1);
      k_83 = ATgetArgument(h_83, 2);
      l_83 = ATgetArgument(h_83, 3);
      m_83 = ATgetArgument(h_83, 4);
      d_83 :
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
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL;
  u_83 = t;
  t_83 :
  if(match_cons(u_83, sym__3))
    {
      v_83 = ATgetArgument(u_83, 0);
      w_83 = ATgetArgument(u_83, 1);
      x_83 = ATgetArgument(u_83, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(v_83), not_null(v_83), not_null(w_83), not_null(x_83), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm y_93 (ATerm), ATerm z_93 (ATerm))
{
  ATerm c_84 (ATerm t)
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_93(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          t = z_93(t);
          t = c_84(t);
        }
      }
    return(t);
  }
  t = c_84(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm d_94 (ATerm))
{
  t = b_94(t);
  t = while_not_2(t, c_94, d_94);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm g_83 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, e_83, f_83, g_83);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
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
    ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
    f_84 = t;
    e_84 :
    if(match_cons(f_84, sym__3))
      {
        g_84 = ATgetArgument(f_84, 0);
        h_84 = ATgetArgument(f_84, 1);
        i_84 = ATgetArgument(f_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(i_84)), not_null(h_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, s_2, t_2);
  {
    ATerm k_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = k_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_p_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm r_84 = NULL,s_84 = NULL,t_84 = NULL;
  r_84 = t;
  q_84 :
  if(match_cons(r_84, sym__2))
    {
      s_84 = ATgetArgument(r_84, 0);
      t_84 = ATgetArgument(r_84, 1);
      {
        ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL;
        ATerm q_18;
        q_18 = t;
        {
          ATerm z_84 = NULL;
          ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL;
          t = p_82(t);
          {
            z_84 = t;
            {
              if(((w_84 != NULL) && (w_84 != z_84)))
                _fail(z_84);
              else
                w_84 = z_84;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(w_84), not_null(s_84), not_null(t_84));
                {
                  t = table_push_0(t);
                  {
                    ATerm r_18 = t;
                    int t_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_84), term_u_18);
                        t = table_get_0(t);
                        LocalPopChoice(t_18);
                      }
                    else
                      {
                        t = r_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      a_85 = t;
                      p_84 :
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(w_84), term_u_18, (ATerm) ATinsert(CheckATermList(not_null(y_84)), (ATerm) ATinsert(CheckATermList(not_null(x_84)), not_null(s_84))));
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
        t = q_18;
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
  ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL;
  o_85 = t;
  n_85 :
  if(match_cons(o_85, sym__2))
    {
      p_85 = ATgetArgument(o_85, 0);
      q_85 = ATgetArgument(o_85, 1);
      if(((p_85 != NULL) && (p_85 != q_85)))
        _fail(q_85);
      else
        p_85 = q_85;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm w_99 (ATerm), ATerm x_99 (ATerm))
{
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL;
  w_85 = t;
  v_85 :
  if(((ATgetType(w_85) == AT_LIST) && ((ATermList) w_85 != ATempty)))
    {
      x_85 = ATgetFirst((ATermList) w_85);
      y_85 = (ATerm) ATgetNext((ATermList) w_85);
      {
        t = x_99(t);
        {
          ATerm v_2 (ATerm t)
          {
            ATerm b_86 = NULL;
            b_86 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_85), not_null(b_86));
              t = w_99(t);
            }
            return(t);
          }
          t = fetch_1(t, v_2);
        }
        t = not_null(y_85);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm y_99 (ATerm))
{
  ATerm h_86 = NULL,j_86 = NULL,m_86 = NULL;
  h_86 = t;
  g_86 :
  if(match_cons(h_86, sym__2))
    {
      j_86 = ATgetArgument(h_86, 0);
      m_86 = ATgetArgument(h_86, 1);
      {
        t = not_null(j_86);
        {
          ATerm q_86 (ATerm t)
          {
            ATerm v_18 = t;
            int b_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_86);
                LocalPopChoice(b_19);
              }
            else
              {
                t = v_18;
                {
                  ATerm d_19 = t;
                  int e_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = not_null(m_86);
                        return(t);
                      }
                      t = HdMember_p__2(t, y_99, w_2);
                      t = q_86(t);
                      LocalPopChoice(e_19);
                    }
                  else
                    {
                      t = d_19;
                      t = Cons_2(t, _id, q_86);
                    }
                }
              }
            return(t);
          }
          t = q_86(t);
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
  ATerm v_86 = NULL;
  ATerm x_86 = NULL;
  v_86 = t;
  {
    ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(v_86));
    {
      ATerm x_2 (ATerm t)
      {
        t = term_f_19;
        return(t);
      }
      t = rewrite_1(t, x_2);
      {
        y_86 = t;
        t_86 :
        if(match_cons(y_86, sym_Defined_2))
          {
            z_86 = ATgetArgument(y_86, 0);
            a_87 = ATgetArgument(y_86, 1);
            u_86 :
            if(match_string(z_86, "f_0"))
              {
                if(((x_86 != NULL) && (x_86 != a_87)))
                  _fail(a_87);
                else
                  x_86 = a_87;
              }
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
    t = not_null(x_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL;
  f_87 = t;
  e_87 :
  if(((ATgetType(f_87) == AT_LIST) && ((ATermList) f_87 != ATempty)))
    {
      g_87 = ATgetFirst((ATermList) f_87);
      h_87 = (ATerm) ATgetNext((ATermList) f_87);
      t = not_null(g_87);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL;
  n_87 = t;
  m_87 :
  if(match_cons(n_87, sym__2))
    {
      o_87 = ATgetArgument(n_87, 0);
      p_87 = ATgetArgument(n_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_87), not_null(p_87));
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
ATerm rewrite_1 (ATerm t, ATerm r_82 (ATerm))
{
  ATerm v_87 = NULL;
  ATerm x_87 = NULL;
  v_87 = t;
  {
    ATerm y_87 = NULL;
    t = term_n_15;
    {
      t = r_82(t);
      {
        y_87 = t;
        if(((x_87 != NULL) && (x_87 != y_87)))
          _fail(y_87);
        else
          x_87 = y_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_87), not_null(v_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm q_88 = NULL,v_88 = NULL,w_88 = NULL;
  q_88 = t;
  p_88 :
  if(match_cons(q_88, sym__2))
    {
      v_88 = ATgetArgument(q_88, 0);
      w_88 = ATgetArgument(q_88, 1);
      {
        ATerm z_88 = NULL,a_89 = NULL;
        ATerm b_89 = NULL,c_89 = NULL,e_89 = NULL,g_89 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(w_88), not_null(v_88));
        {
          ATerm y_2 (ATerm t)
          {
            t = term_g_19;
            return(t);
          }
          t = rewrite_1(t, y_2);
          {
            b_89 = t;
            i_88 :
            if(match_cons(b_89, sym_Defined_3))
              {
                c_89 = ATgetArgument(b_89, 0);
                e_89 = ATgetArgument(b_89, 1);
                g_89 = ATgetArgument(b_89, 2);
                o_88 :
                if(match_string(c_89, "e_0"))
                  {
                    if(((z_88 != NULL) && (z_88 != e_89)))
                      _fail(e_89);
                    else
                      z_88 = e_89;
                    if(((a_89 != NULL) && (a_89 != g_89)))
                      _fail(g_89);
                    else
                      a_89 = g_89;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(a_89)), not_null(z_88));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm))
{
  ATerm h_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_98(t);
      LocalPopChoice(k_19);
    }
  else
    {
      t = h_19;
      {
        ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL;
        n_89 = t;
        m_89 :
        if(((ATgetType(n_89) == AT_LIST) && ((ATermList) n_89 != ATempty)))
          {
            o_89 = ATgetFirst((ATermList) n_89);
            p_89 = (ATerm) ATgetNext((ATermList) n_89);
            {
              ATerm s_89 = NULL,u_89 = NULL;
              ATerm l_19;
              l_19 = t;
              {
                ATerm t_89 = NULL;
                t = not_null(o_89);
                {
                  t = t_98(t);
                  {
                    t_89 = t;
                    if(((s_89 != NULL) && (s_89 != t_89)))
                      _fail(t_89);
                    else
                      s_89 = t_89;
                  }
                }
              }
              t = l_19;
              {
                ATerm w_89 = NULL;
                t = not_null(p_89);
                {
                  t = foldr_3(t, r_98, s_98, t_98);
                  {
                    w_89 = t;
                    if(((u_89 != NULL) && (u_89 != w_89)))
                      _fail(w_89);
                    else
                      u_89 = w_89;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_89), not_null(u_89));
                  t = s_98(t);
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
    t = term_m_19;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_p_6;
    return(t);
  }
  t = foldr_3(t, z_2, add_0, a_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL;
    g_90 = t;
    f_90 :
    if(match_cons(g_90, sym_SDef_3))
      {
        h_90 = ATgetArgument(g_90, 0);
        i_90 = ATgetArgument(g_90, 1);
        j_90 = ATgetArgument(g_90, 2);
        {
          ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL;
          ATerm n_19;
          n_19 = t;
          {
            ATerm r_90 = NULL;
            t = not_null(i_90);
            {
              ATerm s_90 = NULL;
              t = length_0(t);
              {
                r_90 = t;
                {
                  if(((p_90 != NULL) && (p_90 != r_90)))
                    _fail(r_90);
                  else
                    p_90 = r_90;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_90), not_null(p_90));
                    {
                      ATerm t_90 = NULL,v_90 = NULL;
                      ATerm s_19 = t;
                      int t_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(t_19);
                        }
                      else
                        {
                          t = s_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        s_90 = t;
                        {
                          if(((o_90 != NULL) && (o_90 != s_90)))
                            _fail(s_90);
                          else
                            o_90 = s_90;
                          {
                            ATerm u_90 = NULL;
                            t = not_null(h_90);
                            {
                              ATerm u_19 = t;
                              int v_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(v_19);
                                }
                              else
                                {
                                  t = u_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                u_90 = t;
                                if(((t_90 != NULL) && (t_90 != u_90)))
                                  _fail(u_90);
                                else
                                  t_90 = u_90;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(p_90)), not_null(t_90));
                              {
                                t = union_0(t);
                                {
                                  v_90 = t;
                                  {
                                    if(((q_90 != NULL) && (q_90 != v_90)))
                                      _fail(v_90);
                                    else
                                      q_90 = v_90;
                                    {
                                      ATerm w_19;
                                      w_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(p_90), not_null(h_90)), (ATerm) ATmakeAppl(sym_Defined_3, term_x_19, not_null(g_90), not_null(o_90)));
                                        {
                                          ATerm c_3 (ATerm t)
                                          {
                                            t = term_g_19;
                                            return(t);
                                          }
                                          t = assert_1(t, c_3);
                                        }
                                      }
                                      t = w_19;
                                      {
                                        ATerm y_19;
                                        y_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_90)), (ATerm) ATmakeAppl(sym_Defined_2, term_z_19, not_null(q_90)));
                                          {
                                            ATerm d_3 (ATerm t)
                                            {
                                              t = term_f_19;
                                              return(t);
                                            }
                                            t = assert_1(t, d_3);
                                          }
                                        }
                                        t = y_19;
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
          t = n_19;
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
  ATerm c_91 = NULL;
  ATerm d_91 = NULL;
  t = sort_defs_0(t);
  {
    d_91 = t;
    if(((c_91 != NULL) && (c_91 != d_91)))
      _fail(d_91);
    else
      c_91 = d_91;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_f_20), not_null(c_91), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm n_79 (ATerm))
{
  ATerm k_91 = NULL,l_91 = NULL;
  k_91 = t;
  j_91 :
  if(match_cons(k_91, sym_Strategies_1))
    {
      l_91 = ATgetArgument(k_91, 0);
      {
        ATerm o_91 = NULL,q_91 = NULL;
        ATerm p_91 = NULL;
        t = SSLgetAnnotations(not_null(k_91));
        {
          p_91 = t;
          if(((o_91 != NULL) && (o_91 != p_91)))
            _fail(p_91);
          else
            o_91 = p_91;
        }
        {
          t = not_null(l_91);
          {
            ATerm s_91 = NULL;
            t = n_79(t);
            {
              q_91 = t;
              {
                ATerm t_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(q_91)), not_null(o_91));
                {
                  t_91 = t;
                  if(((s_91 != NULL) && (s_91 != t_91)))
                    _fail(t_91);
                  else
                    s_91 = t_91;
                }
                t = not_null(s_91);
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
ATerm Cons_2 (ATerm t, ATerm w_81 (ATerm), ATerm x_81 (ATerm))
{
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL;
  e_92 = t;
  d_92 :
  if(((ATgetType(e_92) == AT_LIST) && ((ATermList) e_92 != ATempty)))
    {
      f_92 = ATgetFirst((ATermList) e_92);
      g_92 = (ATerm) ATgetNext((ATermList) e_92);
      {
        ATerm k_92 = NULL,m_92 = NULL;
        ATerm l_92 = NULL;
        t = SSLgetAnnotations(not_null(e_92));
        {
          l_92 = t;
          if(((k_92 != NULL) && (k_92 != l_92)))
            _fail(l_92);
          else
            k_92 = l_92;
        }
        {
          t = not_null(f_92);
          {
            ATerm o_92 = NULL;
            t = w_81(t);
            {
              m_92 = t;
              {
                t = not_null(g_92);
                {
                  ATerm q_92 = NULL;
                  t = x_81(t);
                  {
                    o_92 = t;
                    {
                      ATerm r_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_92)), not_null(m_92)), not_null(k_92));
                      {
                        r_92 = t;
                        if(((q_92 != NULL) && (q_92 != r_92)))
                          _fail(r_92);
                        else
                          q_92 = r_92;
                      }
                      t = not_null(q_92);
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
ATerm Specification_1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm c_93 = NULL,d_93 = NULL;
  c_93 = t;
  b_93 :
  if(match_cons(c_93, sym_Specification_1))
    {
      d_93 = ATgetArgument(c_93, 0);
      {
        ATerm g_93 = NULL,m_93 = NULL;
        ATerm l_93 = NULL;
        t = SSLgetAnnotations(not_null(c_93));
        {
          l_93 = t;
          if(((g_93 != NULL) && (g_93 != l_93)))
            _fail(l_93);
          else
            g_93 = l_93;
        }
        {
          t = not_null(d_93);
          {
            ATerm o_93 = NULL;
            t = p_79(t);
            {
              m_93 = t;
              {
                ATerm p_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(m_93)), not_null(g_93));
                {
                  p_93 = t;
                  if(((o_93 != NULL) && (o_93 != p_93)))
                    _fail(p_93);
                  else
                    o_93 = p_93;
                }
                t = not_null(o_93);
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
ATerm _2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm))
{
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL;
  g_94 = t;
  f_94 :
  if(match_cons(g_94, sym__2))
    {
      h_94 = ATgetArgument(g_94, 0);
      i_94 = ATgetArgument(g_94, 1);
      {
        ATerm m_94 = NULL,o_94 = NULL;
        ATerm n_94 = NULL;
        t = SSLgetAnnotations(not_null(g_94));
        {
          n_94 = t;
          if(((m_94 != NULL) && (m_94 != n_94)))
            _fail(n_94);
          else
            m_94 = n_94;
        }
        {
          t = not_null(h_94);
          {
            ATerm q_94 = NULL;
            t = r_70(t);
            {
              o_94 = t;
              {
                t = not_null(i_94);
                {
                  ATerm s_94 = NULL;
                  t = s_70(t);
                  {
                    q_94 = t;
                    {
                      ATerm t_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_94), not_null(q_94)), not_null(m_94));
                      {
                        t_94 = t;
                        if(((s_94 != NULL) && (s_94 != t_94)))
                          _fail(t_94);
                        else
                          s_94 = t_94;
                      }
                      t = not_null(s_94);
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
  ATerm b_95 = NULL;
  ATerm g_20;
  g_20 = t;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm c_95 = NULL,d_95 = NULL;
      c_95 = t;
      a_95 :
      if(match_cons(c_95, sym_Program_1))
        {
          d_95 = ATgetArgument(c_95, 0);
          if(((b_95 != NULL) && (b_95 != d_95)))
            _fail(d_95);
          else
            b_95 = d_95;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, e_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_20), not_null(b_95)), term_k_20));
      {
        t = printnl_0(t);
        {
          t = term_p_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = g_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL;
  h_95 = t;
  g_95 :
  if(match_cons(h_95, sym__2))
    {
      i_95 = ATgetArgument(h_95, 0);
      j_95 = ATgetArgument(h_95, 1);
      {
        ATerm p_20;
        p_20 = t;
        t = SSL_printnl(not_null(i_95), not_null(j_95));
        t = p_20;
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
  ATerm s_95 = NULL;
  ATerm u_95 = NULL;
  s_95 = t;
  {
    ATerm v_95 = NULL;
    ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL;
    t = not_null(s_95);
    {
      v_95 = t;
      {
        t = SSL_explode_term(not_null(v_95));
        {
          x_95 = t;
          q_95 :
          if(match_cons(x_95, sym__2))
            {
              y_95 = ATgetArgument(x_95, 0);
              z_95 = ATgetArgument(x_95, 1);
              r_95 :
              if(match_string(y_95, ""))
                {
                  if(((u_95 != NULL) && (u_95 != z_95)))
                    _fail(z_95);
                  else
                    u_95 = z_95;
                }
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
      t = not_null(u_95);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm k_96 = NULL,l_96 = NULL,m_96 = NULL;
  k_96 = t;
  j_96 :
  if(match_cons(k_96, sym__2))
    {
      l_96 = ATgetArgument(k_96, 0);
      m_96 = ATgetArgument(k_96, 1);
      {
        t = not_null(l_96);
        {
          ATerm f_3 (ATerm t)
          {
            t = not_null(m_96);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
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
ATerm debug_1 (ATerm t, ATerm v_89 (ATerm))
{
  ATerm s_20;
  s_20 = t;
  {
    ATerm s_96 = NULL,u_96 = NULL;
    ATerm t_20;
    t_20 = t;
    {
      ATerm t_96 = NULL;
      t = v_89(t);
      {
        t_96 = t;
        if(((s_96 != NULL) && (s_96 != t_96)))
          _fail(t_96);
        else
          s_96 = t_96;
      }
    }
    t = t_20;
    {
      ATerm v_96 = NULL;
      v_96 = t;
      if(((u_96 != NULL) && (u_96 != v_96)))
        _fail(v_96);
      else
        u_96 = v_96;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_96)), not_null(s_96)));
        t = printnl_0(t);
      }
    }
  }
  t = s_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_96 = NULL;
  z_96 = t;
  t = SSL_is_string(not_null(z_96));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm w_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, g_3);
            LocalPopChoice(y_20);
          }
        else
          {
            t = w_20;
            {
              ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL;
              i_97 = t;
              h_97 :
              if(match_cons(i_97, sym_Path_1))
                {
                  j_97 = ATgetArgument(i_97, 0);
                  t = not_null(j_97);
                }
              else
                {
                  if(match_cons(i_97, sym_Var_1))
                    {
                      j_97 = ATgetArgument(i_97, 0);
                      {
                        t = not_null(j_97);
                        {
                          ATerm z_20 = t;
                          int a_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_21);
                            }
                          else
                            {
                              t = z_20;
                              {
                                ATerm j_3 (ATerm t)
                                {
                                  t = term_c_21;
                                  return(t);
                                }
                                t = debug_1(t, j_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_97, sym_Prefix_2))
                        {
                          j_97 = ATgetArgument(i_97, 0);
                          k_97 = ATgetArgument(i_97, 1);
                          {
                            ATerm p_97 = NULL,r_97 = NULL;
                            ATerm e_21;
                            e_21 = t;
                            {
                              ATerm q_97 = NULL;
                              t = not_null(j_97);
                              {
                                t = eval_config_0(t);
                                {
                                  q_97 = t;
                                  if(((p_97 != NULL) && (p_97 != q_97)))
                                    _fail(q_97);
                                  else
                                    p_97 = q_97;
                                }
                              }
                            }
                            t = e_21;
                            {
                              ATerm s_97 = NULL;
                              t = not_null(k_97);
                              {
                                t = eval_config_0(t);
                                {
                                  s_97 = t;
                                  if(((r_97 != NULL) && (r_97 != s_97)))
                                    _fail(s_97);
                                  else
                                    r_97 = s_97;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_97), not_null(r_97));
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
  ATerm a_98 = NULL;
  a_98 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_21, not_null(a_98));
    {
      t = table_get_0(t);
      {
        ATerm k_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_21;
            o_21 = t;
            {
              ATerm c_98 = NULL;
              ATerm d_98 = NULL;
              d_98 = t;
              if(((c_98 != NULL) && (c_98 != d_98)))
                _fail(d_98);
              else
                c_98 = d_98;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_21, not_null(a_98), not_null(c_98));
                t = table_put_0(t);
              }
            }
            t = o_21;
          }
          return(t);
        }
        t = try_1(t, k_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_86 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    ATerm p_21;
    p_21 = t;
    {
      ATerm h_98 = NULL;
      ATerm i_98 = NULL;
      t = term_q_21;
      {
        t = get_config_0(t);
        {
          i_98 = t;
          if(((h_98 != NULL) && (h_98 != i_98)))
            _fail(i_98);
          else
            h_98 = i_98;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_98), term_r_21);
        t = geq_0(t);
      }
    }
    t = p_21;
    t = l_86(t);
    return(t);
  }
  t = try_1(t, l_3);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL,o_98 = NULL;
  m_98 = t;
  l_98 :
  if(match_cons(m_98, sym__2))
    {
      n_98 = ATgetArgument(m_98, 0);
      o_98 = ATgetArgument(m_98, 1);
      t = SSL_WriteToTextFile(not_null(n_98), not_null(o_98));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL;
  z_98 = t;
  y_98 :
  if(match_cons(z_98, sym__2))
    {
      a_99 = ATgetArgument(z_98, 0);
      b_99 = ATgetArgument(z_98, 1);
      t = SSL_WriteToBinaryFile(not_null(a_99), not_null(b_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_99 = NULL;
  ATerm z_21;
  z_21 = t;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm a_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_3 (ATerm t)
          {
            ATerm m_99 = NULL,n_99 = NULL;
            m_99 = t;
            i_99 :
            if(match_cons(m_99, sym_Output_1))
              {
                n_99 = ATgetArgument(m_99, 0);
                if(((l_99 != NULL) && (l_99 != n_99)))
                  _fail(n_99);
                else
                  l_99 = n_99;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_3);
          LocalPopChoice(g_22);
        }
      else
        {
          t = a_22;
          {
            ATerm o_99 = NULL;
            t = term_h_22;
            {
              o_99 = t;
              if(((l_99 != NULL) && (l_99 != o_99)))
                _fail(o_99);
              else
                l_99 = o_99;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_3, _id);
  }
  t = z_21;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm p_3 (ATerm t)
      {
        t = not_null(l_99);
        return(t);
      }
      t = split_2(t, p_3, _id);
      return(t);
    }
    t = _2(t, _id, o_3);
    {
      ATerm m_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_3 (ATerm t)
          {
            ATerm r_3 (ATerm t)
            {
              ATerm p_99 = NULL;
              p_99 = t;
              k_99 :
              if(!(match_cons(p_99, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, r_3);
            return(t);
          }
          t = _2(t, q_3, WriteToBinaryFile_0);
          LocalPopChoice(r_22);
        }
      else
        {
          t = m_22;
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
ATerm apply_strategy_1 (ATerm t, ATerm f_89 (ATerm))
{
  ATerm a_100 = NULL,e_100 = NULL,f_100 = NULL,g_100 = NULL;
  ATerm s_22;
  s_22 = t;
  t = dtime_0(t);
  t = s_22;
  {
    t = f_89(t);
    {
      ATerm t_22;
      t_22 = t;
      {
        ATerm d_100 = NULL;
        t = dtime_0(t);
        {
          d_100 = t;
          if(((a_100 != NULL) && (a_100 != d_100)))
            _fail(d_100);
          else
            a_100 = d_100;
        }
      }
      t = t_22;
      {
        e_100 = t;
        v_99 :
        if(match_cons(e_100, sym__2))
          {
            f_100 = ATgetArgument(e_100, 0);
            g_100 = ATgetArgument(e_100, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_100)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_100))), not_null(g_100));
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
  ATerm r_100 = NULL;
  r_100 = t;
  t = SSL_ReadFromFile(not_null(r_100));
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_105 (ATerm), ATerm t_105 (ATerm))
{
  ATerm w_100 = NULL,y_100 = NULL;
  ATerm u_22;
  u_22 = t;
  {
    ATerm x_100 = NULL;
    t = s_105(t);
    {
      x_100 = t;
      if(((w_100 != NULL) && (w_100 != x_100)))
        _fail(x_100);
      else
        w_100 = x_100;
    }
  }
  t = u_22;
  {
    ATerm z_100 = NULL;
    t = t_105(t);
    {
      z_100 = t;
      if(((y_100 != NULL) && (y_100 != z_100)))
        _fail(z_100);
      else
        y_100 = z_100;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_100), not_null(y_100));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_101 = NULL;
  ATerm v_22;
  v_22 = t;
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_3 (ATerm t)
        {
          ATerm g_101 = NULL,h_101 = NULL;
          g_101 = t;
          d_101 :
          if(match_cons(g_101, sym_Input_1))
            {
              h_101 = ATgetArgument(g_101, 0);
              if(((f_101 != NULL) && (f_101 != h_101)))
                _fail(h_101);
              else
                f_101 = h_101;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, s_3);
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        {
          ATerm i_101 = NULL;
          t = term_y_22;
          {
            i_101 = t;
            if(((f_101 != NULL) && (f_101 != i_101)))
              _fail(i_101);
            else
              f_101 = i_101;
          }
        }
      }
  }
  t = v_22;
  {
    ATerm t_3 (ATerm t)
    {
      t = not_null(f_101);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, t_3);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_101 = NULL;
  m_101 = t;
  t = SSL_string_to_int(not_null(m_101));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL;
  u_101 = t;
  s_101 :
  if(match_string(u_101, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(u_101) == AT_LIST) && ((ATermList) u_101 != ATempty)))
        {
          v_101 = ATgetFirst((ATermList) u_101);
          w_101 = (ATerm) ATgetNext((ATermList) u_101);
          t_101 :
          if(((ATgetType(w_101) == AT_LIST) && ((ATermList) w_101 != ATempty)))
            {
              x_101 = ATgetFirst((ATermList) w_101);
              y_101 = (ATerm) ATgetNext((ATermList) w_101);
              {
                ATerm c_102 = NULL;
                ATerm z_22;
                z_22 = t;
                {
                  t = not_null(v_101);
                  t = l_0(t);
                }
                t = z_22;
                {
                  ATerm d_102 = NULL;
                  t = not_null(x_101);
                  {
                    t = m_0(t);
                    {
                      d_102 = t;
                      if(((c_102 != NULL) && (c_102 != d_102)))
                        _fail(d_102);
                      else
                        c_102 = d_102;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_101)), not_null(c_102));
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
  ATerm a_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_3 (ATerm t)
      {
        ATerm c_103 = NULL;
        c_103 = t;
        j_102 :
        if(!(match_string(c_103, "-i")))
          {
            if(!(match_string(c_103, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        ATerm f_103 = NULL;
        ATerm h_23;
        h_23 = t;
        {
          ATerm d_103 = NULL;
          ATerm e_103 = NULL;
          e_103 = t;
          if(((d_103 != NULL) && (d_103 != e_103)))
            _fail(e_103);
          else
            d_103 = e_103;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_i_23, not_null(d_103));
            t = set_config_0(t);
          }
        }
        t = h_23;
        {
          ATerm g_103 = NULL;
          g_103 = t;
          if(((f_103 != NULL) && (f_103 != g_103)))
            _fail(g_103);
          else
            f_103 = g_103;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_103));
        }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = term_j_23;
        return(t);
      }
      t = ArgOption_3(t, u_3, v_3, w_3);
      LocalPopChoice(g_23);
    }
  else
    {
      t = a_23;
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              ATerm h_103 = NULL;
              h_103 = t;
              m_102 :
              if(!(match_string(h_103, "-o")))
                {
                  if(!(match_string(h_103, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm y_3 (ATerm t)
            {
              ATerm k_103 = NULL;
              ATerm t_23;
              t_23 = t;
              {
                ATerm i_103 = NULL;
                ATerm j_103 = NULL;
                j_103 = t;
                if(((i_103 != NULL) && (i_103 != j_103)))
                  _fail(j_103);
                else
                  i_103 = j_103;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_23, not_null(i_103));
                  t = set_config_0(t);
                }
              }
              t = t_23;
              {
                ATerm l_103 = NULL;
                l_103 = t;
                if(((k_103 != NULL) && (k_103 != l_103)))
                  _fail(l_103);
                else
                  k_103 = l_103;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_103));
              }
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              t = term_x_23;
              return(t);
            }
            t = ArgOption_3(t, x_3, y_3, z_3);
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
                  ATerm a_4 (ATerm t)
                  {
                    ATerm m_103 = NULL;
                    m_103 = t;
                    r_102 :
                    if(!(match_string(m_103, "-S")))
                      {
                        if(!(match_string(m_103, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm b_4 (ATerm t)
                  {
                    t = term_a_24;
                    t = set_config_0(t);
                    t = term_b_24;
                    return(t);
                  }
                  ATerm c_4 (ATerm t)
                  {
                    t = term_c_24;
                    return(t);
                  }
                  t = Option_3(t, a_4, b_4, c_4);
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
                        ATerm d_4 (ATerm t)
                        {
                          ATerm n_103 = NULL;
                          n_103 = t;
                          s_102 :
                          if(!(match_string(n_103, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm e_4 (ATerm t)
                        {
                          ATerm q_103 = NULL;
                          ATerm f_24;
                          f_24 = t;
                          {
                            ATerm o_103 = NULL;
                            ATerm p_103 = NULL;
                            t = string_to_int_0(t);
                            {
                              p_103 = t;
                              if(((o_103 != NULL) && (o_103 != p_103)))
                                _fail(p_103);
                              else
                                o_103 = p_103;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_q_21, not_null(o_103));
                              t = set_config_0(t);
                            }
                          }
                          t = f_24;
                          {
                            ATerm r_103 = NULL;
                            r_103 = t;
                            if(((q_103 != NULL) && (q_103 != r_103)))
                              _fail(r_103);
                            else
                              q_103 = r_103;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(q_103));
                          }
                          return(t);
                        }
                        ATerm f_4 (ATerm t)
                        {
                          t = term_g_24;
                          return(t);
                        }
                        t = ArgOption_3(t, d_4, e_4, f_4);
                        LocalPopChoice(e_24);
                      }
                    else
                      {
                        t = d_24;
                        {
                          ATerm i_24 = t;
                          int j_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_4 (ATerm t)
                              {
                                ATerm s_103 = NULL;
                                s_103 = t;
                                x_102 :
                                if(!(match_string(s_103, "-k")))
                                  {
                                    if(!(match_string(s_103, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm h_4 (ATerm t)
                              {
                                ATerm k_24;
                                k_24 = t;
                                {
                                  ATerm t_103 = NULL;
                                  ATerm u_103 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    u_103 = t;
                                    if(((t_103 != NULL) && (t_103 != u_103)))
                                      _fail(u_103);
                                    else
                                      t_103 = u_103;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_l_24, not_null(t_103));
                                    t = set_config_0(t);
                                  }
                                }
                                t = k_24;
                                return(t);
                              }
                              ATerm i_4 (ATerm t)
                              {
                                t = term_n_24;
                                return(t);
                              }
                              t = ArgOption_3(t, g_4, h_4, i_4);
                              LocalPopChoice(j_24);
                            }
                          else
                            {
                              t = i_24;
                              {
                                ATerm s_24 = t;
                                int t_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_4 (ATerm t)
                                    {
                                      ATerm v_103 = NULL;
                                      v_103 = t;
                                      z_102 :
                                      if(!(match_string(v_103, "-v")))
                                        {
                                          if(!(match_string(v_103, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm n_4 (ATerm t)
                                    {
                                      t = term_m_25;
                                      t = set_config_0(t);
                                      t = term_y_25;
                                      return(t);
                                    }
                                    ATerm o_4 (ATerm t)
                                    {
                                      t = term_z_25;
                                      return(t);
                                    }
                                    t = Option_3(t, j_4, n_4, o_4);
                                    LocalPopChoice(t_24);
                                  }
                                else
                                  {
                                    t = s_24;
                                    {
                                      ATerm a_26 = t;
                                      int b_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_4 (ATerm t)
                                          {
                                            ATerm w_103 = NULL;
                                            w_103 = t;
                                            a_103 :
                                            if(!(match_string(w_103, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm q_4 (ATerm t)
                                          {
                                            t = term_d_26;
                                            t = set_config_0(t);
                                            t = term_e_26;
                                            return(t);
                                          }
                                          ATerm r_4 (ATerm t)
                                          {
                                            t = term_f_26;
                                            return(t);
                                          }
                                          t = Option_3(t, p_4, q_4, r_4);
                                          LocalPopChoice(b_26);
                                        }
                                      else
                                        {
                                          t = a_26;
                                          {
                                            ATerm s_4 (ATerm t)
                                            {
                                              ATerm y_103 = NULL;
                                              y_103 = t;
                                              b_103 :
                                              if(!(match_string(y_103, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm t_4 (ATerm t)
                                            {
                                              t = term_h_26;
                                              t = set_config_0(t);
                                              t = term_i_26;
                                              return(t);
                                            }
                                            ATerm u_4 (ATerm t)
                                            {
                                              t = term_j_26;
                                              return(t);
                                            }
                                            t = Option_3(t, s_4, t_4, u_4);
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
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATempty, term_k_26));
  {
    t = printnl_0(t);
    {
      t = term_p_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_104 = NULL;
  p_104 = t;
  t = SSL_TicksToSeconds(not_null(p_104));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_104 = NULL,v_104 = NULL,w_104 = NULL;
  u_104 = t;
  t_104 :
  if(match_cons(u_104, sym__2))
    {
      v_104 = ATgetArgument(u_104, 0);
      w_104 = ATgetArgument(u_104, 1);
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_104), not_null(w_104));
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            t = SSL_addr(not_null(v_104), not_null(w_104));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_98 (ATerm), ATerm q_98 (ATerm))
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_98(t);
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      {
        ATerm d_105 = NULL,e_105 = NULL,f_105 = NULL;
        d_105 = t;
        c_105 :
        if(((ATgetType(d_105) == AT_LIST) && ((ATermList) d_105 != ATempty)))
          {
            e_105 = ATgetFirst((ATermList) d_105);
            f_105 = (ATerm) ATgetNext((ATermList) d_105);
            {
              ATerm i_105 = NULL;
              ATerm j_105 = NULL;
              t = not_null(f_105);
              {
                t = foldr_2(t, p_98, q_98);
                {
                  j_105 = t;
                  if(((i_105 != NULL) && (i_105 != j_105)))
                    _fail(j_105);
                  else
                    i_105 = j_105;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_105), not_null(i_105));
                t = q_98(t);
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
ATerm crush_2 (ATerm t, ATerm h_100 (ATerm), ATerm i_100 (ATerm))
{
  ATerm q_105 = NULL;
  ATerm u_105 = NULL;
  q_105 = t;
  {
    ATerm v_105 = NULL;
    ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL;
    t = not_null(q_105);
    {
      v_105 = t;
      {
        t = SSL_explode_term(not_null(v_105));
        {
          x_105 = t;
          p_105 :
          if(match_cons(x_105, sym__2))
            {
              y_105 = ATgetArgument(x_105, 0);
              z_105 = ATgetArgument(x_105, 1);
              if(((u_105 != NULL) && (u_105 != z_105)))
                _fail(z_105);
              else
                u_105 = z_105;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_105);
      t = foldr_2(t, h_100, i_100);
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
    ATerm v_4 (ATerm t)
    {
      t = term_m_19;
      return(t);
    }
    t = crush_2(t, v_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL;
  f_106 = t;
  e_106 :
  if(match_cons(f_106, sym__2))
    {
      g_106 = ATgetArgument(f_106, 0);
      h_106 = ATgetArgument(f_106, 1);
      {
        ATerm p_26;
        p_26 = t;
        {
          ATerm q_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_106), not_null(h_106));
              LocalPopChoice(s_26);
            }
          else
            {
              t = q_26;
              t = SSL_gtr(not_null(g_106), not_null(h_106));
            }
        }
        t = p_26;
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
  ATerm q_106 = NULL;
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_106 = NULL,s_106 = NULL,t_106 = NULL;
      r_106 = t;
      p_106 :
      if(match_cons(r_106, sym__2))
        {
          s_106 = ATgetArgument(r_106, 0);
          t_106 = ATgetArgument(r_106, 1);
          {
            if(((q_106 != NULL) && (q_106 != s_106)))
              _fail(s_106);
            else
              q_106 = s_106;
            if(((q_106 != NULL) && (q_106 != t_106)))
              _fail(t_106);
            else
              q_106 = t_106;
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
ATerm if_verbose1_1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm w_26;
    w_26 = t;
    {
      ATerm w_106 = NULL;
      ATerm x_106 = NULL;
      t = term_q_21;
      {
        t = get_config_0(t);
        {
          x_106 = t;
          if(((w_106 != NULL) && (w_106 != x_106)))
            _fail(x_106);
          else
            w_106 = x_106;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_106), term_p_6);
        t = geq_0(t);
      }
    }
    t = w_26;
    t = k_86(t);
    return(t);
  }
  t = try_1(t, w_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm c_107 = NULL,e_107 = NULL;
    ATerm x_26;
    x_26 = t;
    {
      ATerm d_107 = NULL;
      t = run_time_0(t);
      {
        d_107 = t;
        if(((c_107 != NULL) && (c_107 != d_107)))
          _fail(d_107);
        else
          c_107 = d_107;
      }
    }
    t = x_26;
    {
      ATerm f_107 = NULL;
      t = term_y_26;
      {
        t = get_config_0(t);
        {
          f_107 = t;
          if(((e_107 != NULL) && (e_107 != f_107)))
            _fail(f_107);
          else
            e_107 = f_107;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), not_null(c_107)), term_a_27), not_null(e_107)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_4);
  {
    t = term_m_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm m_107 = NULL;
  m_107 = t;
  l_107 :
  if(match_cons(m_107, sym_Version_0))
    {
      ATerm o_107 = NULL,q_107 = NULL;
      ATerm o_27;
      o_27 = t;
      {
        ATerm p_107 = NULL;
        t = SSLgetAnnotations(not_null(m_107));
        {
          p_107 = t;
          if(((o_107 != NULL) && (o_107 != p_107)))
            _fail(p_107);
          else
            o_107 = p_107;
        }
      }
      t = o_27;
      {
        ATerm r_107 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(o_107));
        {
          r_107 = t;
          if(((q_107 != NULL) && (q_107 != r_107)))
            _fail(r_107);
          else
            q_107 = r_107;
        }
        t = not_null(q_107);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_89 (ATerm))
{
  ATerm y_4 (ATerm t)
  {
    ATerm w_27 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_28);
      }
    else
      {
        t = w_27;
        {
          ATerm h_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_28);
            }
          else
            {
              t = h_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_4);
  t = d_89(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_107 = NULL;
  w_107 = t;
  t = SSL_table_create(not_null(w_107));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_108 = NULL;
  a_108 = t;
  {
    ATerm j_28;
    j_28 = t;
    {
      t = term_k_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_28, term_l_28, not_null(a_108));
          t = table_put_0(t);
        }
      }
    }
    t = j_28;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm e_108 = NULL;
  e_108 = t;
  t = SSL_table_destroy(not_null(e_108));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_108 = NULL;
  i_108 = t;
  t = SSL_exit(not_null(i_108));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_102 (ATerm))
{
  ATerm l_108 (ATerm t)
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        t = Cons_2(t, f_102, l_108);
      }
    return(t);
  }
  t = l_108(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
  w_108 = t;
  t_108 :
  if(((ATgetType(w_108) == AT_LIST) && ((ATermList) w_108 != ATempty)))
    {
      u_108 = ATgetFirst((ATermList) w_108);
      v_108 = (ATerm) ATgetNext((ATermList) w_108);
      {
        ATerm z_108 = NULL;
        t = not_null(v_108);
        {
          ATerm o_28;
          o_28 = t;
          {
            ATerm a_109 = NULL,c_109 = NULL,g_109 = NULL;
            ATerm p_28;
            p_28 = t;
            {
              ATerm b_109 = NULL;
              t = k_0(t);
              {
                b_109 = t;
                if(((a_109 != NULL) && (a_109 != b_109)))
                  _fail(b_109);
                else
                  a_109 = b_109;
              }
            }
            t = p_28;
            {
              ATerm f_109 = NULL;
              t = not_null(u_108);
              {
                t = j_0(t);
                {
                  f_109 = t;
                  if(((c_109 != NULL) && (c_109 != f_109)))
                    _fail(f_109);
                  else
                    c_109 = f_109;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_109)), not_null(c_109));
                {
                  g_109 = t;
                  if(((z_108 != NULL) && (z_108 != g_109)))
                    _fail(g_109);
                  else
                    z_108 = g_109;
                }
              }
            }
          }
          t = o_28;
          {
            ATerm z_4 (ATerm t)
            {
              t = not_null(z_108);
              return(t);
            }
            t = reverse_acc_2(t, j_0, z_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) w_108 == ATempty))
        {
          {
            t = term_n_15;
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
  ATerm a_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_5);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm n_109 = NULL;
  n_109 = t;
  t = SSL_implode_string(not_null(n_109));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_102 (ATerm))
{
  ATerm q_109 (ATerm t)
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_109);
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        {
          t = Nil_0(t);
          t = u_102(t);
        }
      }
    return(t);
  }
  t = q_109(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
      {
        ATerm t_109 = NULL,u_109 = NULL,v_109 = NULL;
        t_109 = t;
        s_109 :
        if(((ATgetType(t_109) == AT_LIST) && ((ATermList) t_109 != ATempty)))
          {
            u_109 = ATgetFirst((ATermList) t_109);
            v_109 = (ATerm) ATgetNext((ATermList) t_109);
            {
              t = not_null(u_109);
              {
                ATerm b_5 (ATerm t)
                {
                  t = not_null(v_109);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_5);
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
  ATerm b_110 = NULL;
  b_110 = t;
  t = SSL_explode_string(not_null(b_110));
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
ATerm short_description_1 (ATerm t, ATerm d_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm o_110 = NULL,p_110 = NULL;
  o_110 = t;
  n_110 :
  if(match_cons(o_110, sym_Program_1))
    {
      p_110 = ATgetArgument(o_110, 0);
      {
        ATerm s_110 = NULL,u_110 = NULL;
        ATerm t_110 = NULL;
        t = SSLgetAnnotations(not_null(o_110));
        {
          t_110 = t;
          if(((s_110 != NULL) && (s_110 != t_110)))
            _fail(t_110);
          else
            s_110 = t_110;
        }
        {
          t = not_null(p_110);
          {
            ATerm w_110 = NULL;
            t = l_76(t);
            {
              u_110 = t;
              {
                ATerm x_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_110)), not_null(s_110));
                {
                  x_110 = t;
                  if(((w_110 != NULL) && (w_110 != x_110)))
                    _fail(x_110);
                  else
                    w_110 = x_110;
                }
                t = not_null(w_110);
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
  ATerm j_111 = NULL;
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      ATerm k_111 = NULL;
      k_111 = t;
      if(((j_111 != NULL) && (j_111 != k_111)))
        _fail(k_111);
      else
        j_111 = k_111;
      return(t);
    }
    t = Program_1(t, d_5);
    return(t);
  }
  t = option_defined_1(t, c_5);
  {
    ATerm e_5 (ATerm t)
    {
      ATerm l_111 = NULL;
      ATerm m_111 = NULL;
      t = term_n_15;
      {
        ATerm f_5 (ATerm t)
        {
          t = not_null(j_111);
          return(t);
        }
        t = short_description_1(t, f_5);
        {
          t = concat_strings_0(t);
          {
            m_111 = t;
            if(((l_111 != NULL) && (l_111 != m_111)))
              _fail(m_111);
            else
              l_111 = m_111;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_22, (ATerm) ATinsert(ATempty, not_null(l_111)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_22, (ATerm) ATinsert(ATempty, term_a_29));
      {
        t = printnl_0(t);
        {
          t = term_d_29;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm n_111 = NULL;
                  ATerm o_111 = NULL;
                  o_111 = t;
                  if(((n_111 != NULL) && (n_111 != o_111)))
                    _fail(o_111);
                  else
                    n_111 = o_111;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_h_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_111)), term_e_29));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  ATerm h_5 (ATerm t)
                  {
                    ATerm p_111 = NULL;
                    ATerm q_111 = NULL;
                    ATerm i_5 (ATerm t)
                    {
                      t = not_null(j_111);
                      return(t);
                    }
                    t = long_description_1(t, i_5);
                    {
                      q_111 = t;
                      if(((p_111 != NULL) && (p_111 != q_111)))
                        _fail(q_111);
                      else
                        p_111 = q_111;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_22, (ATerm) ATinsert(CheckATermList(not_null(p_111)), term_f_29));
                      t = printnl_0(t);
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
ATerm Undefined_1 (ATerm t, ATerm m_76 (ATerm))
{
  ATerm a_112 = NULL,b_112 = NULL;
  a_112 = t;
  z_111 :
  if(match_cons(a_112, sym_Undefined_1))
    {
      b_112 = ATgetArgument(a_112, 0);
      {
        ATerm e_112 = NULL,g_112 = NULL;
        ATerm f_112 = NULL;
        t = SSLgetAnnotations(not_null(a_112));
        {
          f_112 = t;
          if(((e_112 != NULL) && (e_112 != f_112)))
            _fail(f_112);
          else
            e_112 = f_112;
        }
        {
          t = not_null(b_112);
          {
            ATerm i_112 = NULL;
            t = m_76(t);
            {
              g_112 = t;
              {
                ATerm j_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_112)), not_null(e_112));
                {
                  j_112 = t;
                  if(((i_112 != NULL) && (i_112 != j_112)))
                    _fail(j_112);
                  else
                    i_112 = j_112;
                }
                t = not_null(i_112);
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
ATerm fetch_1 (ATerm t, ATerm o_102 (ATerm))
{
  ATerm o_112 (ATerm t)
  {
    ATerm g_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, o_102, _id);
        LocalPopChoice(j_29);
      }
    else
      {
        t = g_29;
        t = Cons_2(t, _id, o_112);
      }
    return(t);
  }
  t = o_112(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_86 (ATerm))
{
  t = fetch_1(t, i_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_112 = NULL;
  t_112 = t;
  s_112 :
  if(match_cons(t_112, sym_Help_0))
    {
      ATerm v_112 = NULL,x_112 = NULL;
      ATerm n_29;
      n_29 = t;
      {
        ATerm w_112 = NULL;
        t = SSLgetAnnotations(not_null(t_112));
        {
          w_112 = t;
          if(((v_112 != NULL) && (v_112 != w_112)))
            _fail(w_112);
          else
            v_112 = w_112;
        }
      }
      t = n_29;
      {
        ATerm y_112 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_112));
        {
          y_112 = t;
          if(((x_112 != NULL) && (x_112 != y_112)))
            _fail(y_112);
          else
            x_112 = y_112;
        }
        t = not_null(x_112);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_106 (ATerm))
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_106(t);
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL;
  e_113 = t;
  d_113 :
  if(match_cons(e_113, sym__2))
    {
      f_113 = ATgetArgument(e_113, 0);
      g_113 = ATgetArgument(e_113, 1);
      t = SSL_table_get(not_null(f_113), not_null(g_113));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL;
  n_113 = t;
  m_113 :
  if(match_cons(n_113, sym__3))
    {
      o_113 = ATgetArgument(n_113, 0);
      p_113 = ATgetArgument(n_113, 1);
      q_113 = ATgetArgument(n_113, 2);
      {
        ATerm s_29;
        s_29 = t;
        {
          ATerm u_113 = NULL;
          ATerm v_113 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_113), not_null(p_113));
          {
            ATerm t_29 = t;
            int u_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_29);
              }
            else
              {
                t = t_29;
                t = (ATerm) ATempty;
              }
            {
              v_113 = t;
              if(((u_113 != NULL) && (u_113 != v_113)))
                _fail(v_113);
              else
                u_113 = v_113;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_113), not_null(p_113), (ATerm) ATinsert(CheckATermList(not_null(u_113)), not_null(q_113)));
            t = table_put_0(t);
          }
        }
        t = s_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm z_113 = NULL;
  ATerm a_114 = NULL;
  t = term_n_15;
  {
    t = i_85(t);
    {
      a_114 = t;
      if(((z_113 != NULL) && (z_113 != a_114)))
        _fail(a_114);
      else
        z_113 = a_114;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_29, term_c_29, not_null(z_113));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL;
  g_114 = t;
  f_114 :
  if(match_string(g_114, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(g_114) == AT_LIST) && ((ATermList) g_114 != ATempty)))
        {
          h_114 = ATgetFirst((ATermList) g_114);
          i_114 = (ATerm) ATgetNext((ATermList) g_114);
          {
            ATerm l_114 = NULL;
            ATerm v_29;
            v_29 = t;
            {
              t = not_null(h_114);
              t = a_0(t);
            }
            t = v_29;
            {
              ATerm m_114 = NULL;
              t = term_n_15;
              {
                t = b_0(t);
                {
                  m_114 = t;
                  if(((l_114 != NULL) && (l_114 != m_114)))
                    _fail(m_114);
                  else
                    l_114 = m_114;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_114)), not_null(l_114));
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
    ATerm r_114 = NULL;
    r_114 = t;
    q_114 :
    if(!(match_string(r_114, "--help")))
      {
        if(!(match_string(r_114, "-h")))
          {
            if(!(match_string(r_114, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_w_29;
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_x_29;
    return(t);
  }
  t = Option_3(t, j_5, k_5, l_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL;
  u_114 = t;
  t_114 :
  if(((ATgetType(u_114) == AT_LIST) && ((ATermList) u_114 != ATempty)))
    {
      v_114 = ATgetFirst((ATermList) u_114);
      w_114 = (ATerm) ATgetNext((ATermList) u_114);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_114)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_114)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm c_115 = NULL,d_115 = NULL,e_115 = NULL;
  c_115 = t;
  b_115 :
  if(match_cons(c_115, sym__2))
    {
      d_115 = ATgetArgument(c_115, 0);
      e_115 = ATgetArgument(c_115, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_21, not_null(d_115), not_null(e_115));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm a_30;
  a_30 = t;
  {
    ATerm m_5 (ATerm t)
    {
      t = term_b_30;
      t = g_85(t);
      return(t);
    }
    t = try_1(t, m_5);
  }
  t = a_30;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm m_115 = NULL;
      ATerm c_30;
      c_30 = t;
      {
        ATerm k_115 = NULL;
        ATerm l_115 = NULL;
        l_115 = t;
        if(((k_115 != NULL) && (k_115 != l_115)))
          _fail(l_115);
        else
          k_115 = l_115;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_26, not_null(k_115));
          t = set_config_0(t);
        }
      }
      t = c_30;
      {
        ATerm n_115 = NULL;
        n_115 = t;
        if(((m_115 != NULL) && (m_115 != n_115)))
          _fail(n_115);
        else
          m_115 = n_115;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_115));
      }
      return(t);
    }
    ATerm p_5 (ATerm t)
    {
      ATerm d_30 = t;
      int e_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_30 = t;
          int g_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(g_30);
            }
          else
            {
              t = f_30;
              {
                t = g_85(t);
                t = Cons_2(t, _id, p_5);
              }
            }
          LocalPopChoice(e_30);
        }
      else
        {
          t = d_30;
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
  ATerm t_115 = NULL,u_115 = NULL,v_115 = NULL;
  ATerm h_30;
  h_30 = t;
  {
    ATerm w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL;
    w_115 = t;
    s_115 :
    if(match_cons(w_115, sym__3))
      {
        x_115 = ATgetArgument(w_115, 0);
        y_115 = ATgetArgument(w_115, 1);
        z_115 = ATgetArgument(w_115, 2);
        {
          if(((t_115 != NULL) && (t_115 != x_115)))
            _fail(x_115);
          else
            t_115 = x_115;
          {
            if(((u_115 != NULL) && (u_115 != y_115)))
              _fail(y_115);
            else
              u_115 = y_115;
            {
              if(((v_115 != NULL) && (v_115 != z_115)))
                _fail(z_115);
              else
                v_115 = z_115;
              t = SSL_table_put(not_null(t_115), not_null(u_115), not_null(v_115));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm c_116 = NULL;
  ATerm i_30;
  i_30 = t;
  {
    t = term_j_30;
    t = table_put_0(t);
  }
  t = i_30;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm k_30 = t;
      int l_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_85(t);
          LocalPopChoice(l_30);
        }
      else
        {
          t = k_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_5);
    {
      ATerm r_5 (ATerm t)
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_m_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            {
              ATerm s_5 (ATerm t)
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm d_116 = NULL;
                  d_116 = t;
                  if(((c_116 != NULL) && (c_116 != d_116)))
                    _fail(d_116);
                  else
                    c_116 = d_116;
                  return(t);
                }
                t = Undefined_1(t, t_5);
                return(t);
              }
              t = option_defined_1(t, s_5);
              {
                ATerm o_30;
                o_30 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_116)), term_p_30));
                  t = printnl_0(t);
                }
                t = o_30;
                {
                  t = system_usage_0(t);
                  {
                    t = term_p_6;
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
        ATerm q_30;
        q_30 = t;
        {
          t = term_b_29;
          t = table_destroy_0(t);
        }
        t = q_30;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm))
{
  t = parse_options_1(t, a_88);
  {
    t = store_options_0(t);
    {
      t = c_88(t);
      {
        ATerm r_30 = t;
        int s_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, b_88);
            LocalPopChoice(s_30);
          }
        else
          {
            t = r_30;
            {
              ATerm t_30 = t;
              int u_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_88(t);
                  t = report_success_0(t);
                  LocalPopChoice(u_30);
                }
              else
                {
                  t = t_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_88(t);
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, r_88);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, u_5, t_88, u_88, v_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      ATerm x_30;
      x_30 = t;
      {
        ATerm g_116 = NULL;
        ATerm h_116 = NULL;
        t = term_y_26;
        {
          t = get_config_0(t);
          {
            h_116 = t;
            if(((g_116 != NULL) && (g_116 != h_116)))
              _fail(h_116);
            else
              g_116 = h_116;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_6, (ATerm) ATinsert(ATempty, not_null(g_116)));
          t = printnl_0(t);
        }
      }
      t = x_30;
      return(t);
    }
    t = if_verbose2_1(t, x_5);
    return(t);
  }
  t = iowrap_4(t, l_88, m_88, n_88, w_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_88 (ATerm), ATerm k_88 (ATerm))
{
  t = iowrap_3(t, j_88, k_88, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_88 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    t = _2(t, _id, g_88);
    return(t);
  }
  t = iowrap_2(t, y_5, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        ATerm c_6 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
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
  t = extract_0(t);
  return(t);
}
