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
ATerm term_i_29;
ATerm term_a_29;
ATerm term_s_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_s_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_j_23;
ATerm term_v_22;
ATerm term_r_22;
ATerm term_m_22;
ATerm term_a_22;
ATerm term_r_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_y_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_o_10;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_c_9;
ATerm term_n_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_j_6;
ATerm term_i_6;
void init_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Op_2, term_t_11, (ATerm) ATempty);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_v_19);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_19);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_c_26, term_q_15);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_i_26, term_q_15);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_q_15);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_x_27, term_y_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_q_15);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__3, term_x_27, term_y_27, (ATerm) ATempty);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm q_70 (ATerm), ATerm r_70 (ATerm));
ATerm SDef_3 (ATerm, ATerm u_70 (ATerm), ATerm v_70 (ATerm), ATerm w_70 (ATerm));
ATerm Let_2 (ATerm, ATerm s_70 (ATerm), ATerm t_70 (ATerm));
ATerm sboundin_3 (ATerm, ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_92 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm o_83 (ATerm), ATerm p_83 (ATerm));
ATerm alltd_1 (ATerm, ATerm u_85 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm z_82 (ATerm), ATerm a_83 (ATerm));
ATerm substitute_1 (ATerm, ATerm b_83 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm x_70 (ATerm), ATerm y_70 (ATerm));
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
ATerm As_2 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm));
ATerm Prim_2 (ATerm, ATerm g_69 (ATerm), ATerm h_69 (ATerm));
ATerm Explode_2 (ATerm, ATerm w_72 (ATerm), ATerm x_72 (ATerm));
ATerm Op_2 (ATerm, ATerm k_71 (ATerm), ATerm l_71 (ATerm));
ATerm pat_td_1 (ATerm, ATerm m_79 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm t_88 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm k_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm c_94 (ATerm), ATerm d_94 (ATerm));
ATerm repeat_1 (ATerm, ATerm f_94 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm q_72 (ATerm), ATerm r_72 (ATerm));
ATerm Con_3 (ATerm, ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm p_72 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm o_69 (ATerm), ATerm p_69 (ATerm));
ATerm oncetd_1 (ATerm, ATerm g_85 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm q_83 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm z_87 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm e_98 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm r_88 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm a_97 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm m_88 (ATerm));
ATerm zip_1 (ATerm, ATerm o_88 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm x_108 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm t_94 (ATerm), ATerm u_94 (ATerm));
ATerm for_3 (ATerm, ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm y_94 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm i_108 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm e_109 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm g_109 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm i_97 (ATerm), ATerm j_97 (ATerm));
ATerm union_1 (ATerm, ATerm e_97 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm p_71 (ATerm));
ATerm Cons_2 (ATerm, ATerm e_69 (ATerm), ATerm f_69 (ATerm));
ATerm Specification_1 (ATerm, ATerm r_71 (ATerm));
ATerm _2 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_80 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_101 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm f_104 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_102 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_87 (ATerm), ATerm k_87 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_97 (ATerm), ATerm q_97 (ATerm));
ATerm crush_2 (ATerm, ATerm t_96 (ATerm), ATerm u_96 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_104 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_102 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_106 (ATerm));
ATerm map_1 (ATerm, ATerm b_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_106 (ATerm));
ATerm Program_1 (ATerm, ATerm s_74 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm j_101 (ATerm));
ATerm Undefined_1 (ATerm, ATerm t_74 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_80 (ATerm));
ATerm option_defined_1 (ATerm, ATerm h_105 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_86 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_106 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_106 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_106 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t_102 (ATerm));
ATerm iowrap_4 (ATerm, ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_102 (ATerm), ATerm a_103 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_102 (ATerm));
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
        ATerm h_6;
        h_6 = t;
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
        t = h_6;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_6), not_null(m_6)), term_j_6), not_null(l_6)), term_i_6);
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_6), not_null(x_6)), term_j_6), not_null(w_6)), term_o_6), not_null(v_6)), term_i_6);
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
      if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
        {
          i_7 = ATgetFirst((ATermList) h_7);
          j_7 = (ATerm) ATgetNext((ATermList) h_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(j_7)), not_null(i_7));
            {
              ATerm l_0 (ATerm t)
              {
                ATerm p_6 = t;
                int q_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(q_6);
                  }
                else
                  {
                    t = p_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, l_0);
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
      if(((ATgetType(t_7) == AT_LIST) && ATisEmpty(t_7)))
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
  ATerm y_6;
  y_6 = t;
  {
    t = error_0(t);
    {
      t = term_z_6;
      t = exit_0(t);
    }
  }
  t = y_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_a_7);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm b_7;
  b_7 = t;
  {
    ATerm x_7 = NULL;
    ATerm y_7 = NULL;
    y_7 = t;
    if(((x_7 != NULL) && (x_7 != y_7)))
      _fail(y_7);
    else
      x_7 = y_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, not_null(x_7));
      t = printnl_0(t);
    }
  }
  t = b_7;
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
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
              t = not_null(m_8);
              {
                t = Arities_0(t);
                {
                  p_8 = t;
                  e_8 :
                  if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
                    {
                      q_8 = ATgetFirst((ATermList) p_8);
                      r_8 = (ATerm) ATgetNext((ATermList) p_8);
                      f_8 :
                      if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
                        {
                          s_8 = ATgetFirst((ATermList) r_8);
                          t_8 = (ATerm) ATgetNext((ATermList) r_8);
                          {
                            ATerm m_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm m_0 (ATerm t)
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
                                t = fetch_1(t, m_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = m_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_8)), term_n_7);
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
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
              {
                ATerm w_8 = NULL;
                ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
                t = not_null(m_8);
                {
                  t = Arities_0(t);
                  {
                    x_8 = t;
                    h_8 :
                    if(((ATgetType(x_8) == AT_LIST) && !(ATisEmpty(x_8))))
                      {
                        y_8 = ATgetFirst((ATermList) x_8);
                        z_8 = (ATerm) ATgetNext((ATermList) x_8);
                        i_8 :
                        if(((ATgetType(z_8) == AT_LIST) && ATisEmpty(z_8)))
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
ATerm Rec_2 (ATerm t, ATerm q_70 (ATerm), ATerm r_70 (ATerm))
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
            t = q_70(t);
            {
              s_9 = t;
              {
                t = not_null(m_9);
                {
                  ATerm w_9 = NULL;
                  t = r_70(t);
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
ATerm SDef_3 (ATerm t, ATerm u_70 (ATerm), ATerm v_70 (ATerm), ATerm w_70 (ATerm))
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
            t = u_70(t);
            {
              u_10 = t;
              {
                t = not_null(m_10);
                {
                  ATerm y_10 = NULL;
                  t = v_70(t);
                  {
                    w_10 = t;
                    {
                      t = not_null(n_10);
                      {
                        ATerm a_11 = NULL;
                        t = w_70(t);
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
ATerm Let_2 (ATerm t, ATerm s_70 (ATerm), ATerm t_70 (ATerm))
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
            t = s_70(t);
            {
              w_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm a_12 = NULL;
                  t = t_70(t);
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
ATerm sboundin_3 (ATerm t, ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm))
{
  ATerm o_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, v_82, v_82);
      LocalPopChoice(u_7);
    }
  else
    {
      t = o_7;
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, x_82, x_82, v_82);
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            t = Rec_2(t, x_82, v_82);
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
          ATerm n_0 (ATerm t)
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
          ATerm o_0 (ATerm t)
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
          t = map_1(t, o_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm))
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
      t = foldr_3(t, v_96, w_96, x_96);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_92 (ATerm))
{
  ATerm q_14 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm z_7 = t;
      int a_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_92(t);
          LocalPopChoice(a_8);
        }
      else
        {
          t = z_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm b_8 = t;
      int c_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = NULL;
          ATerm g_8;
          g_8 = t;
          {
            ATerm p_14 = NULL;
            t = g_92(t);
            {
              p_14 = t;
              if(((o_14 != NULL) && (o_14 != p_14)))
                _fail(p_14);
              else
                o_14 = p_14;
            }
          }
          t = g_8;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(o_14);
                return(t);
              }
              t = split_2(t, q_14, t_0);
              t = diff_1(t, i_92);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = h_92(t, r_0, q_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          LocalPopChoice(c_8);
        }
      else
        {
          t = b_8;
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
    ATerm o_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(v_8);
      }
    else
      {
        t = o_8;
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
                  if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
                    {
                      h_16 = ATgetFirst((ATermList) g_16);
                      i_16 = (ATerm) ATgetNext((ATermList) g_16);
                      w_15 :
                      if(((ATgetType(i_16) == AT_LIST) && !(ATisEmpty(i_16))))
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
    t = term_c_9;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm q_16 = NULL,s_16 = NULL;
    ATerm d_9;
    d_9 = t;
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
    t = d_9;
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
          if(((ATgetType(d_17) == AT_LIST) && ATisEmpty(d_17)))
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
      if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
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
      if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
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
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm o_83 (ATerm), ATerm p_83 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm l_18 = NULL,m_18 = NULL;
  j_18 = t;
  {
    ATerm n_18 = NULL;
    t = not_null(j_18);
    {
      ATerm o_18 = NULL;
      t = o_83(t);
      {
        n_18 = t;
        {
          if(((l_18 != NULL) && (l_18 != n_18)))
            _fail(n_18);
          else
            l_18 = n_18;
          {
            t = p_83(t);
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
ATerm alltd_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm s_18 (ATerm t)
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_85(t);
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
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
ATerm substitute_2 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm))
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
              t = SubsVar_2(t, z_82, c_1);
              t = a_83(t);
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
ATerm substitute_1 (ATerm t, ATerm b_83 (ATerm))
{
  t = substitute_2(t, b_83, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm))
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
            t = x_70(t);
            {
              j_20 = t;
              {
                t = not_null(d_20);
                {
                  ATerm n_20 = NULL;
                  t = y_70(t);
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
  if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
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
            ATerm i_9;
            i_9 = t;
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
            t = i_9;
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
  if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
    {
      e_23 = ATgetFirst((ATermList) d_23);
      f_23 = (ATerm) ATgetNext((ATermList) d_23);
      c_23 :
      if(((ATgetType(f_23) == AT_LIST) && ATisEmpty(f_23)))
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
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(o_9);
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_24)), not_null(w_24)), not_null(v_24)), not_null(u_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(r_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))))), (ATerm) ATmakeAppl(sym_Prim_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_25)), not_null(d_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_25)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_t_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_25)), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_25)), not_null(n_25)))))));
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
  ATerm s_30 = NULL,q_31 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym_Match_1))
    {
      q_31 = ATgetArgument(s_30, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
            ATerm w_31 = NULL;
            ATerm v_34 = NULL;
            t = new_0(t);
            {
              w_31 = t;
              {
                if(((u_31 != NULL) && (u_31 != w_31)))
                  _fail(w_31);
                else
                  u_31 = w_31;
                {
                  t = not_null(q_31);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
                      x_31 = t;
                      h_30 :
                      if(match_cons(x_31, sym_Anno_2))
                        {
                          y_31 = ATgetArgument(x_31, 0);
                          z_31 = ATgetArgument(x_31, 1);
                          {
                            if(((s_31 != NULL) && (s_31 != y_31)))
                              _fail(y_31);
                            else
                              s_31 = y_31;
                            {
                              if(((t_31 != NULL) && (t_31 != z_31)))
                                _fail(z_31);
                              else
                                t_31 = z_31;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_31)), not_null(s_31));
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
                      v_34 = t;
                      if(((v_31 != NULL) && (v_31 != v_34)))
                        _fail(v_34);
                      else
                        v_31 = v_34;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_31)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_31)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_31))))));
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm b_10 = t;
              int c_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
                  ATerm a_35 = NULL;
                  ATerm d_35 = NULL;
                  t = new_0(t);
                  {
                    a_35 = t;
                    {
                      if(((y_34 != NULL) && (y_34 != a_35)))
                        _fail(a_35);
                      else
                        y_34 = a_35;
                      {
                        t = not_null(q_31);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm b_35 = NULL,c_35 = NULL;
                            b_35 = t;
                            l_30 :
                            if(match_cons(b_35, sym_RootApp_1))
                              {
                                c_35 = ATgetArgument(b_35, 0);
                                {
                                  if(((x_34 != NULL) && (x_34 != c_35)))
                                    _fail(c_35);
                                  else
                                    x_34 = c_35;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_34));
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
                            d_35 = t;
                            if(((z_34 != NULL) && (z_34 != d_35)))
                              _fail(d_35);
                            else
                              z_34 = d_35;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_34))), not_null(x_34))));
                  LocalPopChoice(c_10);
                }
              else
                {
                  t = b_10;
                  {
                    ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
                    ATerm j_35 = NULL;
                    ATerm n_35 = NULL;
                    t = new_0(t);
                    {
                      j_35 = t;
                      {
                        if(((h_35 != NULL) && (h_35 != j_35)))
                          _fail(j_35);
                        else
                          h_35 = j_35;
                        {
                          t = not_null(q_31);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
                              k_35 = t;
                              p_30 :
                              if(match_cons(k_35, sym_App_2))
                                {
                                  l_35 = ATgetArgument(k_35, 0);
                                  m_35 = ATgetArgument(k_35, 1);
                                  {
                                    if(((g_35 != NULL) && (g_35 != l_35)))
                                      _fail(l_35);
                                    else
                                      g_35 = l_35;
                                    {
                                      if(((f_35 != NULL) && (f_35 != m_35)))
                                        _fail(m_35);
                                      else
                                        f_35 = m_35;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_35));
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
                              n_35 = t;
                              if(((i_35 != NULL) && (i_35 != n_35)))
                                _fail(n_35);
                              else
                                i_35 = n_35;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_35))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_35)), not_null(g_35)))));
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
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
  r_36 = t;
  h_36 :
  if(match_cons(r_36, sym_Match_1))
    {
      s_36 = ATgetArgument(r_36, 0);
      i_36 :
      if(match_cons(s_36, sym_RootApp_1))
        {
          t_36 = ATgetArgument(s_36, 0);
          t = not_null(t_36);
        }
      else
        {
          if(match_cons(s_36, sym_App_2))
            {
              t_36 = ATgetArgument(s_36, 0);
              u_36 = ATgetArgument(s_36, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(t_36), not_null(u_36));
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
  ATerm g_37 = NULL,h_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym_Match_1))
    {
      h_37 = ATgetArgument(g_37, 0);
      {
        ATerm j_37 = NULL,k_37 = NULL;
        ATerm o_37 = NULL;
        t = not_null(h_37);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
            l_37 = t;
            c_37 :
            if(match_cons(l_37, sym_RootApp_1))
              {
                m_37 = ATgetArgument(l_37, 0);
                d_37 :
                if(match_cons(m_37, sym_Match_1))
                  {
                    n_37 = ATgetArgument(m_37, 0);
                    {
                      if(((j_37 != NULL) && (j_37 != n_37)))
                        _fail(n_37);
                      else
                        j_37 = n_37;
                      t = not_null(j_37);
                    }
                  }
                else
                  {
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
            o_37 = t;
            if(((k_37 != NULL) && (k_37 != o_37)))
              _fail(o_37);
            else
              k_37 = o_37;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(k_37));
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
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_Build_1))
    {
      j_38 = ATgetArgument(i_38, 0);
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
            ATerm s_38 = NULL;
            ATerm w_38 = NULL;
            t = new_0(t);
            {
              s_38 = t;
              {
                if(((q_38 != NULL) && (q_38 != s_38)))
                  _fail(s_38);
                else
                  q_38 = s_38;
                {
                  t = not_null(j_38);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
                      t_38 = t;
                      x_37 :
                      if(match_cons(t_38, sym_Anno_2))
                        {
                          u_38 = ATgetArgument(t_38, 0);
                          v_38 = ATgetArgument(t_38, 1);
                          {
                            if(((o_38 != NULL) && (o_38 != u_38)))
                              _fail(u_38);
                            else
                              o_38 = u_38;
                            {
                              if(((p_38 != NULL) && (p_38 != v_38)))
                                _fail(v_38);
                              else
                                p_38 = v_38;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_38));
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
                      w_38 = t;
                      if(((r_38 != NULL) && (r_38 != w_38)))
                        _fail(w_38);
                      else
                        r_38 = w_38;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_o_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_38)), not_null(o_38))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_38))));
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            {
              ATerm p_10 = t;
              int q_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
                  ATerm m_39 = NULL;
                  ATerm q_39 = NULL;
                  t = new_0(t);
                  {
                    m_39 = t;
                    {
                      if(((k_39 != NULL) && (k_39 != m_39)))
                        _fail(m_39);
                      else
                        k_39 = m_39;
                      {
                        t = not_null(j_38);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm o_39 = NULL,p_39 = NULL;
                            o_39 = t;
                            b_38 :
                            if(match_cons(o_39, sym_RootApp_1))
                              {
                                p_39 = ATgetArgument(o_39, 0);
                                {
                                  if(((j_39 != NULL) && (j_39 != p_39)))
                                    _fail(p_39);
                                  else
                                    j_39 = p_39;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_39));
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
                            q_39 = t;
                            if(((l_39 != NULL) && (l_39 != q_39)))
                              _fail(q_39);
                            else
                              l_39 = q_39;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_39)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_39), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_39))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_39))));
                  LocalPopChoice(q_10);
                }
              else
                {
                  t = p_10;
                  {
                    ATerm u_39 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
                    ATerm h_40 = NULL;
                    ATerm l_40 = NULL;
                    t = new_0(t);
                    {
                      h_40 = t;
                      {
                        if(((f_40 != NULL) && (f_40 != h_40)))
                          _fail(h_40);
                        else
                          f_40 = h_40;
                        {
                          t = not_null(j_38);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
                              i_40 = t;
                              f_38 :
                              if(match_cons(i_40, sym_App_2))
                                {
                                  j_40 = ATgetArgument(i_40, 0);
                                  k_40 = ATgetArgument(i_40, 1);
                                  {
                                    if(((u_39 != NULL) && (u_39 != j_40)))
                                      _fail(j_40);
                                    else
                                      u_39 = j_40;
                                    {
                                      if(((e_40 != NULL) && (e_40 != k_40)))
                                        _fail(k_40);
                                      else
                                        e_40 = k_40;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_40));
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
                              l_40 = t;
                              if(((g_40 != NULL) && (g_40 != l_40)))
                                _fail(l_40);
                              else
                                g_40 = l_40;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_40)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_39), not_null(e_40), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_40)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_40))));
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
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
  j_41 = t;
  h_41 :
  if(match_cons(j_41, sym_Build_1))
    {
      k_41 = ATgetArgument(j_41, 0);
      i_41 :
      if(match_cons(k_41, sym_RootApp_1))
        {
          l_41 = ATgetArgument(k_41, 0);
          t = not_null(l_41);
        }
      else
        {
          if(match_cons(k_41, sym_App_2))
            {
              l_41 = ATgetArgument(k_41, 0);
              m_41 = ATgetArgument(k_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_41)), not_null(l_41));
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
ATerm As_2 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm))
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  x_41 :
  if(match_cons(y_41, sym_As_2))
    {
      z_41 = ATgetArgument(y_41, 0);
      a_42 = ATgetArgument(y_41, 1);
      {
        ATerm e_42 = NULL,g_42 = NULL;
        ATerm f_42 = NULL;
        t = SSLgetAnnotations(not_null(y_41));
        {
          f_42 = t;
          if(((e_42 != NULL) && (e_42 != f_42)))
            _fail(f_42);
          else
            e_42 = f_42;
        }
        {
          t = not_null(z_41);
          {
            ATerm i_42 = NULL;
            t = a_73(t);
            {
              g_42 = t;
              {
                t = not_null(a_42);
                {
                  ATerm k_42 = NULL;
                  t = b_73(t);
                  {
                    i_42 = t;
                    {
                      ATerm l_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(g_42), not_null(i_42)), not_null(e_42));
                      {
                        l_42 = t;
                        if(((k_42 != NULL) && (k_42 != l_42)))
                          _fail(l_42);
                        else
                          k_42 = l_42;
                      }
                      t = not_null(k_42);
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
ATerm Prim_2 (ATerm t, ATerm g_69 (ATerm), ATerm h_69 (ATerm))
{
  ATerm x_42 = NULL,y_42 = NULL,d_43 = NULL;
  x_42 = t;
  w_42 :
  if(match_cons(x_42, sym_Prim_2))
    {
      y_42 = ATgetArgument(x_42, 0);
      d_43 = ATgetArgument(x_42, 1);
      {
        ATerm h_43 = NULL,r_43 = NULL;
        ATerm i_43 = NULL;
        t = SSLgetAnnotations(not_null(x_42));
        {
          i_43 = t;
          if(((h_43 != NULL) && (h_43 != i_43)))
            _fail(i_43);
          else
            h_43 = i_43;
        }
        {
          t = not_null(y_42);
          {
            ATerm t_43 = NULL;
            t = g_69(t);
            {
              r_43 = t;
              {
                t = not_null(d_43);
                {
                  ATerm v_43 = NULL;
                  t = h_69(t);
                  {
                    t_43 = t;
                    {
                      ATerm w_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(r_43), not_null(t_43)), not_null(h_43));
                      {
                        w_43 = t;
                        if(((v_43 != NULL) && (v_43 != w_43)))
                          _fail(w_43);
                        else
                          v_43 = w_43;
                      }
                      t = not_null(v_43);
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
ATerm Explode_2 (ATerm t, ATerm w_72 (ATerm), ATerm x_72 (ATerm))
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL;
  i_44 = t;
  h_44 :
  if(match_cons(i_44, sym_Explode_2))
    {
      j_44 = ATgetArgument(i_44, 0);
      k_44 = ATgetArgument(i_44, 1);
      {
        ATerm s_44 = NULL,u_44 = NULL;
        ATerm t_44 = NULL;
        t = SSLgetAnnotations(not_null(i_44));
        {
          t_44 = t;
          if(((s_44 != NULL) && (s_44 != t_44)))
            _fail(t_44);
          else
            s_44 = t_44;
        }
        {
          t = not_null(j_44);
          {
            ATerm w_44 = NULL;
            t = w_72(t);
            {
              u_44 = t;
              {
                t = not_null(k_44);
                {
                  ATerm y_44 = NULL;
                  t = x_72(t);
                  {
                    w_44 = t;
                    {
                      ATerm z_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(u_44), not_null(w_44)), not_null(s_44));
                      {
                        z_44 = t;
                        if(((y_44 != NULL) && (y_44 != z_44)))
                          _fail(z_44);
                        else
                          y_44 = z_44;
                      }
                      t = not_null(y_44);
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
ATerm Op_2 (ATerm t, ATerm k_71 (ATerm), ATerm l_71 (ATerm))
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  k_45 :
  if(match_cons(l_45, sym_Op_2))
    {
      m_45 = ATgetArgument(l_45, 0);
      n_45 = ATgetArgument(l_45, 1);
      {
        ATerm r_45 = NULL,t_45 = NULL;
        ATerm s_45 = NULL;
        t = SSLgetAnnotations(not_null(l_45));
        {
          s_45 = t;
          if(((r_45 != NULL) && (r_45 != s_45)))
            _fail(s_45);
          else
            r_45 = s_45;
        }
        {
          t = not_null(m_45);
          {
            ATerm v_45 = NULL;
            t = k_71(t);
            {
              t_45 = t;
              {
                t = not_null(n_45);
                {
                  ATerm x_45 = NULL;
                  t = l_71(t);
                  {
                    v_45 = t;
                    {
                      ATerm y_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(t_45), not_null(v_45)), not_null(r_45));
                      {
                        y_45 = t;
                        if(((x_45 != NULL) && (x_45 != y_45)))
                          _fail(y_45);
                        else
                          x_45 = y_45;
                      }
                      t = not_null(x_45);
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
ATerm pat_td_1 (ATerm t, ATerm m_79 (ATerm))
{
  ATerm r_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_79(t);
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
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, m_79);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
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
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, m_79);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
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
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, m_79);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        LocalPopChoice(f_11);
                      }
                    else
                      {
                        t = e_11;
                        {
                          ATerm g_11 = t;
                          int h_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_1 (ATerm t)
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, m_79);
                                  return(t);
                                }
                                t = fetch_1(t, v_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, u_1);
                              LocalPopChoice(h_11);
                            }
                          else
                            {
                              t = g_11;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, m_79);
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
  ATerm q_46 = NULL,r_46 = NULL;
  q_46 = t;
  p_46 :
  if(match_cons(q_46, sym_Build_1))
    {
      r_46 = ATgetArgument(q_46, 0);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_46 = NULL,u_46 = NULL;
            ATerm y_46 = NULL;
            t = not_null(r_46);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
                v_46 = t;
                h_46 :
                if(match_cons(v_46, sym_RootApp_1))
                  {
                    w_46 = ATgetArgument(v_46, 0);
                    i_46 :
                    if(match_cons(w_46, sym_Build_1))
                      {
                        x_46 = ATgetArgument(w_46, 0);
                        {
                          if(((t_46 != NULL) && (t_46 != x_46)))
                            _fail(x_46);
                          else
                            t_46 = x_46;
                          t = not_null(t_46);
                        }
                      }
                    else
                      {
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
                y_46 = t;
                if(((u_46 != NULL) && (u_46 != y_46)))
                  _fail(y_46);
                else
                  u_46 = y_46;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(u_46));
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            {
              ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL;
              ATerm h_47 = NULL;
              t = not_null(r_46);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
                  d_47 = t;
                  l_46 :
                  if(match_cons(d_47, sym_App_2))
                    {
                      e_47 = ATgetArgument(d_47, 0);
                      g_47 = ATgetArgument(d_47, 1);
                      n_46 :
                      if(match_cons(e_47, sym_Build_1))
                        {
                          f_47 = ATgetArgument(e_47, 0);
                          {
                            if(((b_47 != NULL) && (b_47 != f_47)))
                              _fail(f_47);
                            else
                              b_47 = f_47;
                            {
                              if(((a_47 != NULL) && (a_47 != g_47)))
                                _fail(g_47);
                              else
                                a_47 = g_47;
                              t = not_null(b_47);
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
                  h_47 = t;
                  if(((c_47 != NULL) && (c_47 != h_47)))
                    _fail(h_47);
                  else
                    c_47 = h_47;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_47));
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
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(r_11);
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
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
  i_48 = t;
  b_48 :
  if(match_cons(i_48, sym_Lets_2))
    {
      j_48 = ATgetArgument(i_48, 0);
      k_48 = ATgetArgument(i_48, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_48), not_null(k_48));
    }
  else
    {
      if(match_cons(i_48, sym_LChoices_1))
        {
          j_48 = ATgetArgument(i_48, 0);
          c_48 :
          if(((ATgetType(j_48) == AT_LIST) && !(ATisEmpty(j_48))))
            {
              f_48 = ATgetFirst((ATermList) j_48);
              g_48 = (ATerm) ATgetNext((ATermList) j_48);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(g_48)));
            }
          else
            {
              if(((ATgetType(j_48) == AT_LIST) && ATisEmpty(j_48)))
                {
                  t = term_c_9;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(i_48, sym_Choices_1))
            {
              j_48 = ATgetArgument(i_48, 0);
              d_48 :
              if(((ATgetType(j_48) == AT_LIST) && !(ATisEmpty(j_48))))
                {
                  f_48 = ATgetFirst((ATermList) j_48);
                  g_48 = (ATerm) ATgetNext((ATermList) j_48);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(g_48)));
                }
              else
                {
                  if(((ATgetType(j_48) == AT_LIST) && ATisEmpty(j_48)))
                    {
                      t = term_c_9;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(i_48, sym_Seqs_1))
                {
                  j_48 = ATgetArgument(i_48, 0);
                  e_48 :
                  if(((ATgetType(j_48) == AT_LIST) && !(ATisEmpty(j_48))))
                    {
                      f_48 = ATgetFirst((ATermList) j_48);
                      g_48 = (ATerm) ATgetNext((ATermList) j_48);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_48)));
                    }
                  else
                    {
                      if(((ATgetType(j_48) == AT_LIST) && ATisEmpty(j_48)))
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
                  if(match_cons(i_48, sym_DefaultVarDec_1))
                    {
                      j_48 = ATgetArgument(i_48, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(j_48), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_11), term_z_11));
                    }
                  else
                    {
                      if(match_cons(i_48, sym_InfixApp_3))
                        {
                          j_48 = ATgetArgument(i_48, 0);
                          k_48 = ATgetArgument(i_48, 1);
                          h_48 = ATgetArgument(i_48, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(k_48), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_48)), not_null(j_48))));
                        }
                      else
                        {
                          if(match_cons(i_48, sym_BAM_3))
                            {
                              j_48 = ATgetArgument(i_48, 0);
                              k_48 = ATgetArgument(i_48, 1);
                              h_48 = ATgetArgument(i_48, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(h_48))), not_null(j_48)), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_48))));
                            }
                          else
                            {
                              if(match_cons(i_48, sym_AM_2))
                                {
                                  j_48 = ATgetArgument(i_48, 0);
                                  k_48 = ATgetArgument(i_48, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_48), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_48)));
                                }
                              else
                                {
                                  if(match_cons(i_48, sym_MA_2))
                                    {
                                      j_48 = ATgetArgument(i_48, 0);
                                      k_48 = ATgetArgument(i_48, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_48)), not_null(k_48));
                                    }
                                  else
                                    {
                                      if(match_cons(i_48, sym_BA_2))
                                        {
                                          j_48 = ATgetArgument(i_48, 0);
                                          k_48 = ATgetArgument(i_48, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_48)), not_null(j_48));
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
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL;
  x_49 = t;
  u_49 :
  if(match_cons(x_49, sym__2))
    {
      y_49 = ATgetArgument(x_49, 0);
      b_50 = ATgetArgument(x_49, 1);
      v_49 :
      if(match_cons(y_49, sym__2))
        {
          z_49 = ATgetArgument(y_49, 0);
          a_50 = ATgetArgument(y_49, 1);
          w_49 :
          if(match_cons(b_50, sym__2))
            {
              c_50 = ATgetArgument(b_50, 0);
              d_50 = ATgetArgument(b_50, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_50)), not_null(z_49)), (ATerm) ATinsert(CheckATermList(not_null(d_50)), not_null(a_50)));
            }
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
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
  o_50 = t;
  n_50 :
  if(((ATgetType(o_50) == AT_LIST) && !(ATisEmpty(o_50))))
    {
      p_50 = ATgetFirst((ATermList) o_50);
      q_50 = (ATerm) ATgetNext((ATermList) o_50);
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_50), not_null(q_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm w_50 = NULL;
  w_50 = t;
  v_50 :
  if(((ATgetType(w_50) == AT_LIST) && ATisEmpty(w_50)))
    {
      t = term_c_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm t_88 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, t_88);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL;
  ATerm v_51 (ATerm t)
  {
    ATerm o_51 = NULL;
    ATerm p_51 = NULL;
    t = not_null(l_51);
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
      {
        t = new_0(t);
        {
          p_51 = t;
          if(((o_51 != NULL) && (o_51 != p_51)))
            _fail(p_51);
          else
            o_51 = p_51;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(o_51)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_51)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_51))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_51))));
    return(t);
  }
  ATerm w_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_s_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_51))));
    return(t);
  }
  l_51 = t;
  h_51 :
  if(match_cons(l_51, sym_Var_1))
    {
      m_51 = ATgetArgument(l_51, 0);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_51(t);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = w_51(t);
          }
      }
    }
  else
    {
      t = v_51(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm o_52 = NULL,p_52 = NULL;
  o_52 = t;
  n_52 :
  if(match_cons(o_52, sym_Var_1))
    {
      p_52 = ATgetArgument(o_52, 0);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
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
                t = k_0(t);
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
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
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
                  t = k_0(t);
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
            ATerm m_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_12;
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
ATerm repeat_2 (ATerm t, ATerm c_94 (ATerm), ATerm d_94 (ATerm))
{
  ATerm i_54 (ATerm t)
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_94(t);
        t = i_54(t);
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        t = d_94(t);
      }
    return(t);
  }
  t = i_54(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm f_94 (ATerm))
{
  t = repeat_2(t, f_94, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm o_54 = NULL;
  o_54 = t;
  n_54 :
  if(match_cons(o_54, sym_Wld_0))
    {
      ATerm s_54 = NULL,u_54 = NULL;
      ATerm p_12;
      p_12 = t;
      {
        ATerm t_54 = NULL;
        t = SSLgetAnnotations(not_null(o_54));
        {
          t_54 = t;
          if(((s_54 != NULL) && (s_54 != t_54)))
            _fail(t_54);
          else
            s_54 = t_54;
        }
      }
      t = p_12;
      {
        ATerm x_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(s_54));
        {
          x_54 = t;
          if(((u_54 != NULL) && (u_54 != x_54)))
            _fail(x_54);
          else
            u_54 = x_54;
        }
        t = not_null(u_54);
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
  ATerm q_12 = t;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
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
      t = topdown_1(t, b_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm q_72 (ATerm), ATerm r_72 (ATerm))
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
  h_55 = t;
  g_55 :
  if(match_cons(h_55, sym_App_2))
    {
      i_55 = ATgetArgument(h_55, 0);
      j_55 = ATgetArgument(h_55, 1);
      {
        ATerm n_55 = NULL,r_55 = NULL;
        ATerm o_55 = NULL;
        t = SSLgetAnnotations(not_null(h_55));
        {
          o_55 = t;
          if(((n_55 != NULL) && (n_55 != o_55)))
            _fail(o_55);
          else
            n_55 = o_55;
        }
        {
          t = not_null(i_55);
          {
            ATerm t_55 = NULL;
            t = q_72(t);
            {
              r_55 = t;
              {
                t = not_null(j_55);
                {
                  ATerm w_55 = NULL;
                  t = r_72(t);
                  {
                    t_55 = t;
                    {
                      ATerm x_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(r_55), not_null(t_55)), not_null(n_55));
                      {
                        x_55 = t;
                        if(((w_55 != NULL) && (w_55 != x_55)))
                          _fail(x_55);
                        else
                          w_55 = x_55;
                      }
                      t = not_null(w_55);
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
ATerm Con_3 (ATerm t, ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm p_72 (ATerm))
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,p_56 = NULL;
  k_56 = t;
  j_56 :
  if(match_cons(k_56, sym_Con_3))
    {
      l_56 = ATgetArgument(k_56, 0);
      m_56 = ATgetArgument(k_56, 1);
      p_56 = ATgetArgument(k_56, 2);
      {
        ATerm a_57 = NULL,c_57 = NULL;
        ATerm b_57 = NULL;
        t = SSLgetAnnotations(not_null(k_56));
        {
          b_57 = t;
          if(((a_57 != NULL) && (a_57 != b_57)))
            _fail(b_57);
          else
            a_57 = b_57;
        }
        {
          t = not_null(l_56);
          {
            ATerm e_57 = NULL;
            t = n_72(t);
            {
              c_57 = t;
              {
                t = not_null(m_56);
                {
                  ATerm g_57 = NULL;
                  t = o_72(t);
                  {
                    e_57 = t;
                    {
                      t = not_null(p_56);
                      {
                        ATerm i_57 = NULL;
                        t = p_72(t);
                        {
                          g_57 = t;
                          {
                            ATerm j_57 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(c_57), not_null(e_57), not_null(g_57)), not_null(a_57));
                            {
                              j_57 = t;
                              if(((i_57 != NULL) && (i_57 != j_57)))
                                _fail(j_57);
                              else
                                i_57 = j_57;
                            }
                            t = not_null(i_57);
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
      ATerm c_2 (ATerm t)
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
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
      t = z_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
  u_57 = t;
  s_57 :
  if(match_cons(u_57, sym_SRule_1))
    {
      v_57 = ATgetArgument(u_57, 0);
      t_57 :
      if(match_cons(v_57, sym_StratRule_3))
        {
          w_57 = ATgetArgument(v_57, 0);
          x_57 = ATgetArgument(v_57, 1);
          y_57 = ATgetArgument(v_57, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_57)), (ATerm) ATmakeAppl(sym_Where_1, not_null(y_57))), not_null(w_57)));
        }
      else
        {
          if(match_cons(v_57, sym_Rule_3))
            {
              w_57 = ATgetArgument(v_57, 0);
              x_57 = ATgetArgument(v_57, 1);
              y_57 = ATgetArgument(v_57, 2);
              {
                t = not_null(w_57);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(x_57);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(x_57))), (ATerm) ATmakeAppl(sym_Where_1, not_null(y_57))), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_57))));
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
ATerm Scope_2 (ATerm t, ATerm o_69 (ATerm), ATerm p_69 (ATerm))
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
  n_58 = t;
  m_58 :
  if(match_cons(n_58, sym_Scope_2))
    {
      o_58 = ATgetArgument(n_58, 0);
      p_58 = ATgetArgument(n_58, 1);
      {
        ATerm t_58 = NULL,v_58 = NULL;
        ATerm u_58 = NULL;
        t = SSLgetAnnotations(not_null(n_58));
        {
          u_58 = t;
          if(((t_58 != NULL) && (t_58 != u_58)))
            _fail(u_58);
          else
            t_58 = u_58;
        }
        {
          t = not_null(o_58);
          {
            ATerm x_58 = NULL;
            t = o_69(t);
            {
              v_58 = t;
              {
                t = not_null(p_58);
                {
                  ATerm z_58 = NULL;
                  t = p_69(t);
                  {
                    x_58 = t;
                    {
                      ATerm h_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(v_58), not_null(x_58)), not_null(t_58));
                      {
                        h_59 = t;
                        if(((z_58 != NULL) && (z_58 != h_59)))
                          _fail(h_59);
                        else
                          z_58 = h_59;
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
ATerm oncetd_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm p_59 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_85(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
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
            ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL;
            ATerm i_61 = NULL;
            ATerm o_61 = NULL;
            t = new_0(t);
            {
              i_61 = t;
              {
                if(((f_61 != NULL) && (f_61 != i_61)))
                  _fail(i_61);
                else
                  f_61 = i_61;
                {
                  t = not_null(l_60);
                  {
                    ATerm x_61 = NULL;
                    ATerm d_2 (ATerm t)
                    {
                      ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL;
                      j_61 = t;
                      t_59 :
                      if(match_cons(j_61, sym_Con_3))
                        {
                          k_61 = ATgetArgument(j_61, 0);
                          m_61 = ATgetArgument(j_61, 1);
                          n_61 = ATgetArgument(j_61, 2);
                          z_59 :
                          if(match_cons(k_61, sym_Var_1))
                            {
                              l_61 = ATgetArgument(k_61, 0);
                              {
                                if(((a_61 != NULL) && (a_61 != l_61)))
                                  _fail(l_61);
                                else
                                  a_61 = l_61;
                                {
                                  if(((y_60 != NULL) && (y_60 != m_61)))
                                    _fail(m_61);
                                  else
                                    y_60 = m_61;
                                  {
                                    if(((w_60 != NULL) && (w_60 != n_61)))
                                      _fail(n_61);
                                    else
                                      w_60 = n_61;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_61));
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
                      o_61 = t;
                      {
                        if(((g_61 != NULL) && (g_61 != o_61)))
                          _fail(o_61);
                        else
                          g_61 = o_61;
                        {
                          t = not_null(m_60);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL;
                              p_61 = t;
                              c_60 :
                              if(match_cons(p_61, sym_Con_3))
                                {
                                  q_61 = ATgetArgument(p_61, 0);
                                  s_61 = ATgetArgument(p_61, 1);
                                  t_61 = ATgetArgument(p_61, 2);
                                  d_60 :
                                  if(match_cons(q_61, sym_Var_1))
                                    {
                                      r_61 = ATgetArgument(q_61, 0);
                                      e_60 :
                                      if(match_cons(t_61, sym_Call_2))
                                        {
                                          u_61 = ATgetArgument(t_61, 0);
                                          v_61 = ATgetArgument(t_61, 1);
                                          f_60 :
                                          if(((ATgetType(v_61) == AT_LIST) && ATisEmpty(v_61)))
                                            {
                                              {
                                                if(((a_61 != NULL) && (a_61 != r_61)))
                                                  _fail(r_61);
                                                else
                                                  a_61 = r_61;
                                                {
                                                  if(((z_60 != NULL) && (z_60 != s_61)))
                                                    _fail(s_61);
                                                  else
                                                    z_60 = s_61;
                                                  {
                                                    if(((x_60 != NULL) && (x_60 != u_61)))
                                                      _fail(u_61);
                                                    else
                                                      x_60 = u_61;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_61));
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
                              x_61 = t;
                              if(((h_61 != NULL) && (h_61 != x_61)))
                                _fail(x_61);
                              else
                                h_61 = x_61;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_61)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_61), not_null(h_61), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_60), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(x_60), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_60), not_null(z_60), term_s_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_61)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_61)))))));
          }
        }
      else
        {
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
    ATerm h_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
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
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(t_13);
            }
          else
            {
              t = o_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm q_83 (ATerm))
{
  t = q_83(t);
  {
    ATerm g_2 (ATerm t)
    {
      t = topdown_1(t, q_83);
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
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
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
                  t = HL_0(t);
                  LocalPopChoice(x_13);
                }
              else
                {
                  t = w_13;
                  {
                    ATerm y_13 = t;
                    int z_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(z_13);
                      }
                    else
                      {
                        t = y_13;
                        {
                          ATerm a_14 = t;
                          int d_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(d_14);
                            }
                          else
                            {
                              t = a_14;
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
  ATerm j_62 = NULL;
  j_62 = t;
  i_62 :
  if(match_cons(j_62, sym__0))
    {
      ATerm l_62 = NULL,n_62 = NULL;
      ATerm g_14;
      g_14 = t;
      {
        ATerm m_62 = NULL;
        t = SSLgetAnnotations(not_null(j_62));
        {
          m_62 = t;
          if(((l_62 != NULL) && (l_62 != m_62)))
            _fail(m_62);
          else
            l_62 = m_62;
        }
      }
      t = g_14;
      {
        ATerm o_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(l_62));
        {
          o_62 = t;
          if(((n_62 != NULL) && (n_62 != o_62)))
            _fail(o_62);
          else
            n_62 = o_62;
        }
        t = not_null(n_62);
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
  ATerm f_63 = NULL;
  ATerm h_63 = NULL,i_63 = NULL,q_63 = NULL,s_63 = NULL;
  f_63 = t;
  {
    ATerm k_14;
    k_14 = t;
    {
      ATerm j_63 = NULL;
      ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL;
      t = not_null(f_63);
      {
        j_63 = t;
        {
          t = SSL_explode_term(not_null(j_63));
          {
            l_63 = t;
            y_62 :
            if(match_cons(l_63, sym__2))
              {
                m_63 = ATgetArgument(l_63, 0);
                n_63 = ATgetArgument(l_63, 1);
                z_62 :
                if(match_string(m_63, ""))
                  {
                    a_63 :
                    if(((ATgetType(n_63) == AT_LIST) && !(ATisEmpty(n_63))))
                      {
                        o_63 = ATgetFirst((ATermList) n_63);
                        p_63 = (ATerm) ATgetNext((ATermList) n_63);
                        {
                          if(((h_63 != NULL) && (h_63 != o_63)))
                            _fail(o_63);
                          else
                            h_63 = o_63;
                          if(((i_63 != NULL) && (i_63 != p_63)))
                            _fail(p_63);
                          else
                            i_63 = p_63;
                        }
                      }
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
    t = k_14;
    {
      ATerm l_14;
      l_14 = t;
      {
        ATerm r_63 = NULL;
        t = term_v_9;
        {
          r_63 = t;
          if(((q_63 != NULL) && (q_63 != r_63)))
            _fail(r_63);
          else
            q_63 = r_63;
        }
      }
      t = l_14;
      {
        t = SSL_mkterm(not_null(q_63), not_null(i_63));
        {
          s_63 = t;
          t = not_null(s_63);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm m_64 = NULL;
  ATerm o_64 = NULL,p_64 = NULL;
  m_64 = t;
  {
    ATerm q_64 = NULL;
    ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
    t = not_null(m_64);
    {
      q_64 = t;
      {
        t = SSL_explode_term(not_null(q_64));
        {
          s_64 = t;
          j_64 :
          if(match_cons(s_64, sym__2))
            {
              t_64 = ATgetArgument(s_64, 0);
              u_64 = ATgetArgument(s_64, 1);
              k_64 :
              if(match_string(t_64, ""))
                {
                  l_64 :
                  if(((ATgetType(u_64) == AT_LIST) && !(ATisEmpty(u_64))))
                    {
                      v_64 = ATgetFirst((ATermList) u_64);
                      w_64 = (ATerm) ATgetNext((ATermList) u_64);
                      {
                        if(((p_64 != NULL) && (p_64 != v_64)))
                          _fail(v_64);
                        else
                          p_64 = v_64;
                        if(((o_64 != NULL) && (o_64 != w_64)))
                          _fail(w_64);
                        else
                          o_64 = w_64;
                      }
                    }
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
    t = not_null(p_64);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm z_87 (ATerm))
{
  ATerm t_65 = NULL,v_65 = NULL,x_65 = NULL;
  ATerm z_65 (ATerm t)
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_65 = NULL,h_65 = NULL;
        ATerm r_14;
        r_14 = t;
        {
          ATerm g_65 = NULL;
          t = map_1(t, Thd_0);
          {
            t = z_87(t);
            {
              g_65 = t;
              if(((f_65 != NULL) && (f_65 != g_65)))
                _fail(g_65);
              else
                f_65 = g_65;
            }
          }
        }
        t = r_14;
        {
          ATerm i_65 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = z_65(t);
            {
              i_65 = t;
              if(((h_65 != NULL) && (h_65 != i_65)))
                _fail(i_65);
              else
                h_65 = i_65;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(h_65)), not_null(f_65));
        }
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = z_65(t);
  {
    ATerm s_14;
    s_14 = t;
    {
      ATerm u_65 = NULL;
      u_65 = t;
      if(((t_65 != NULL) && (t_65 != u_65)))
        _fail(u_65);
      else
        t_65 = u_65;
    }
    t = s_14;
    {
      ATerm t_14;
      t_14 = t;
      {
        ATerm w_65 = NULL;
        t = term_v_9;
        {
          w_65 = t;
          if(((v_65 != NULL) && (v_65 != w_65)))
            _fail(w_65);
          else
            v_65 = w_65;
        }
      }
      t = t_14;
      {
        t = SSL_mkterm(not_null(v_65), not_null(t_65));
        {
          x_65 = t;
          t = not_null(x_65);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm g_67 = NULL;
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
  g_67 = t;
  {
    ATerm q_67 = NULL;
    ATerm r_67 = NULL;
    t = new_0(t);
    {
      q_67 = t;
      {
        if(((i_67 != NULL) && (i_67 != q_67)))
          _fail(q_67);
        else
          i_67 = q_67;
        {
          ATerm s_67 = NULL;
          t = new_0(t);
          {
            r_67 = t;
            {
              if(((j_67 != NULL) && (j_67 != r_67)))
                _fail(r_67);
              else
                j_67 = r_67;
              {
                t = new_0(t);
                {
                  s_67 = t;
                  if(((k_67 != NULL) && (k_67 != s_67)))
                    _fail(s_67);
                  else
                    k_67 = s_67;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_67)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_67)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_67))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(i_67), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_11), term_z_11)), not_null(j_67), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_67)), not_null(k_67), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_67)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL;
  c_68 = t;
  b_68 :
  if(match_cons(c_68, sym__2))
    {
      d_68 = ATgetArgument(c_68, 0);
      e_68 = ATgetArgument(c_68, 1);
      {
        ATerm w_14 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_68), not_null(e_68));
            LocalPopChoice(d_15);
          }
        else
          {
            t = w_14;
            t = SSL_subtr(not_null(d_68), not_null(e_68));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm e_98 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
    r_68 = t;
    j_68 :
    if(match_cons(r_68, sym__2))
      {
        s_68 = ATgetArgument(r_68, 0);
        t_68 = ATgetArgument(r_68, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_68), not_null(t_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL;
    w_68 = t;
    l_68 :
    if(match_cons(w_68, sym__3))
      {
        x_68 = ATgetArgument(w_68, 0);
        y_68 = ATgetArgument(w_68, 1);
        z_68 = ATgetArgument(w_68, 2);
        m_68 :
        if(match_int(x_68, 0))
          {
            t = not_null(z_68);
          }
        else
          {
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
    ATerm c_69 = NULL,d_69 = NULL,i_69 = NULL,j_69 = NULL;
    c_69 = t;
    q_68 :
    if(match_cons(c_69, sym__3))
      {
        d_69 = ATgetArgument(c_69, 0);
        i_69 = ATgetArgument(c_69, 1);
        j_69 = ATgetArgument(c_69, 2);
        {
          ATerm n_69 = NULL,r_69 = NULL;
          ATerm e_15;
          e_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_69), term_z_6);
            t = geq_0(t);
          }
          t = e_15;
          {
            ATerm m_15;
            m_15 = t;
            {
              ATerm q_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_69), term_z_6);
              {
                t = subt_0(t);
                {
                  q_69 = t;
                  if(((n_69 != NULL) && (n_69 != q_69)))
                    _fail(q_69);
                  else
                    n_69 = q_69;
                }
              }
            }
            t = m_15;
            {
              ATerm s_69 = NULL;
              t = not_null(i_69);
              {
                t = e_98(t);
                {
                  s_69 = t;
                  if(((r_69 != NULL) && (r_69 != s_69)))
                    _fail(s_69);
                  else
                    r_69 = s_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(n_69), not_null(i_69), (ATerm) ATinsert(CheckATermList(not_null(j_69)), not_null(r_69)));
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
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL;
  d_70 = t;
  c_70 :
  if(match_cons(d_70, sym__2))
    {
      e_70 = ATgetArgument(d_70, 0);
      f_70 = ATgetArgument(d_70, 1);
      {
        ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL;
        ATerm l_70 = NULL;
        ATerm m_70 = NULL;
        t = new_0(t);
        {
          l_70 = t;
          {
            if(((i_70 != NULL) && (i_70 != l_70)))
              _fail(l_70);
            else
              i_70 = l_70;
            {
              ATerm n_70 = NULL;
              t = new_0(t);
              {
                m_70 = t;
                {
                  if(((j_70 != NULL) && (j_70 != m_70)))
                    _fail(m_70);
                  else
                    j_70 = m_70;
                  {
                    t = new_0(t);
                    {
                      n_70 = t;
                      if(((k_70 != NULL) && (k_70 != n_70)))
                        _fail(n_70);
                      else
                        k_70 = n_70;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_70)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_70))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_70)))), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_70))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_70))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(i_70), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_11), term_z_11)), not_null(j_70), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_70)), not_null(k_70), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_70)));
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
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL;
  e_71 = t;
  c_71 :
  if(match_cons(e_71, sym__2))
    {
      f_71 = ATgetArgument(e_71, 0);
      g_71 = ATgetArgument(e_71, 1);
      d_71 :
      if(((ATgetType(g_71) == AT_LIST) && ATisEmpty(g_71)))
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
ATerm zipr_1 (ATerm t, ATerm r_88 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, r_88);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
  m_71 = t;
  j_71 :
  if(((ATgetType(m_71) == AT_LIST) && !(ATisEmpty(m_71))))
    {
      n_71 = ATgetFirst((ATermList) m_71);
      o_71 = (ATerm) ATgetNext((ATermList) m_71);
      t = not_null(o_71);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
  x_71 = t;
  v_71 :
  if(((ATgetType(x_71) == AT_LIST) && !(ATisEmpty(x_71))))
    {
      y_71 = ATgetFirst((ATermList) x_71);
      z_71 = (ATerm) ATgetNext((ATermList) x_71);
      w_71 :
      if(((ATgetType(z_71) == AT_LIST) && ATisEmpty(z_71)))
        {
          t = not_null(y_71);
        }
      else
        {
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
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL;
  ATerm g_75 (ATerm t)
  {
    ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,g_74 = NULL;
    ATerm p_15;
    p_15 = t;
    {
      ATerm t_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL;
      ATerm u_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_73), term_z_6);
      {
        t = add_0(t);
        {
          u_73 = t;
          if(((t_73 != NULL) && (t_73 != u_73)))
            _fail(u_73);
          else
            t_73 = u_73;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_73), term_q_15);
        {
          t = copy_1(t, new_0);
          {
            v_73 = t;
            l_72 :
            if(((ATgetType(v_73) == AT_LIST) && !(ATisEmpty(v_73))))
              {
                w_73 = ATgetFirst((ATermList) v_73);
                x_73 = (ATerm) ATgetNext((ATermList) v_73);
                {
                  ATerm y_73 = NULL;
                  if(((l_73 != NULL) && (l_73 != w_73)))
                    _fail(w_73);
                  else
                    l_73 = w_73;
                  {
                    if(((m_73 != NULL) && (m_73 != x_73)))
                      _fail(x_73);
                    else
                      m_73 = x_73;
                    {
                      t = not_null(m_73);
                      {
                        ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL;
                        t = last_0(t);
                        {
                          y_73 = t;
                          {
                            if(((k_73 != NULL) && (k_73 != y_73)))
                              _fail(y_73);
                            else
                              k_73 = y_73;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_73)), not_null(l_73)), not_null(m_73));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    z_73 = t;
                                    k_72 :
                                    if(match_cons(z_73, sym__6))
                                      {
                                        a_74 = ATgetArgument(z_73, 0);
                                        b_74 = ATgetArgument(z_73, 1);
                                        c_74 = ATgetArgument(z_73, 2);
                                        d_74 = ATgetArgument(z_73, 3);
                                        e_74 = ATgetArgument(z_73, 4);
                                        f_74 = ATgetArgument(z_73, 5);
                                        {
                                          if(((n_73 != NULL) && (n_73 != a_74)))
                                            _fail(a_74);
                                          else
                                            n_73 = a_74;
                                          {
                                            if(((o_73 != NULL) && (o_73 != b_74)))
                                              _fail(b_74);
                                            else
                                              o_73 = b_74;
                                            {
                                              if(((p_73 != NULL) && (p_73 != c_74)))
                                                _fail(c_74);
                                              else
                                                p_73 = c_74;
                                              {
                                                if(((q_73 != NULL) && (q_73 != d_74)))
                                                  _fail(d_74);
                                                else
                                                  q_73 = d_74;
                                                {
                                                  if(((r_73 != NULL) && (r_73 != e_74)))
                                                    _fail(e_74);
                                                  else
                                                    r_73 = e_74;
                                                  if(((s_73 != NULL) && (s_73 != f_74)))
                                                    _fail(f_74);
                                                  else
                                                    s_73 = f_74;
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
    t = p_15;
    {
      ATerm h_74 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_73)), not_null(p_73)), not_null(m_73));
      {
        t = concat_0(t);
        {
          h_74 = t;
          if(((g_74 != NULL) && (g_74 != h_74)))
            _fail(h_74);
          else
            g_74 = h_74;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(f_73), term_r_15), not_null(o_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(g_74)), not_null(l_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(f_73), not_null(q_73)))), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(f_73), not_null(s_73)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(n_73))))));
    }
    return(t);
  }
  ATerm h_75 (ATerm t)
  {
    ATerm j_74 = NULL;
    ATerm k_74 = NULL;
    t = new_0(t);
    {
      k_74 = t;
      if(((j_74 != NULL) && (j_74 != k_74)))
        _fail(k_74);
      else
        j_74 = k_74;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(f_73), term_r_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_74)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(f_73), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(f_73), (ATerm) ATempty))), term_s_11))));
    return(t);
  }
  ATerm i_75 (ATerm t)
  {
    ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,u_74 = NULL,v_74 = NULL,e_75 = NULL;
    ATerm s_15;
    s_15 = t;
    {
      ATerm w_74 = NULL;
      ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL;
      t = new_0(t);
      {
        w_74 = t;
        {
          if(((n_74 != NULL) && (n_74 != w_74)))
            _fail(w_74);
          else
            n_74 = w_74;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_73), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_74)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  x_74 = t;
                  v_72 :
                  if(match_cons(x_74, sym__6))
                    {
                      y_74 = ATgetArgument(x_74, 0);
                      z_74 = ATgetArgument(x_74, 1);
                      a_75 = ATgetArgument(x_74, 2);
                      b_75 = ATgetArgument(x_74, 3);
                      c_75 = ATgetArgument(x_74, 4);
                      d_75 = ATgetArgument(x_74, 5);
                      {
                        if(((o_74 != NULL) && (o_74 != y_74)))
                          _fail(y_74);
                        else
                          o_74 = y_74;
                        {
                          if(((p_74 != NULL) && (p_74 != z_74)))
                            _fail(z_74);
                          else
                            p_74 = z_74;
                          {
                            if(((q_74 != NULL) && (q_74 != a_75)))
                              _fail(a_75);
                            else
                              q_74 = a_75;
                            {
                              if(((r_74 != NULL) && (r_74 != b_75)))
                                _fail(b_75);
                              else
                                r_74 = b_75;
                              {
                                if(((u_74 != NULL) && (u_74 != c_75)))
                                  _fail(c_75);
                                else
                                  u_74 = c_75;
                                if(((v_74 != NULL) && (v_74 != d_75)))
                                  _fail(d_75);
                                else
                                  v_74 = d_75;
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
      ATerm f_75 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_74), not_null(u_74));
      {
        t = conc_0(t);
        {
          f_75 = t;
          if(((e_75 != NULL) && (e_75 != f_75)))
            _fail(f_75);
          else
            e_75 = f_75;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(f_73), term_y_15), not_null(p_74), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(e_75)), not_null(n_74)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(f_73), not_null(r_74)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(f_73), not_null(v_74)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_74))))));
    }
    return(t);
  }
  e_73 = t;
  z_72 :
  if(match_cons(e_73, sym__3))
    {
      f_73 = ATgetArgument(e_73, 0);
      g_73 = ATgetArgument(e_73, 1);
      h_73 = ATgetArgument(e_73, 2);
      c_73 :
      if(match_string(g_73, "T"))
        {
          d_73 :
          if(match_int(h_73, 0))
            {
              ATerm d_16 = t;
              int l_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_75(t);
                  LocalPopChoice(l_16);
                }
              else
                {
                  t = d_16;
                  t = h_75(t);
                }
            }
          else
            {
              t = g_75(t);
            }
        }
      else
        {
          if(match_string(g_73, "D"))
            {
              t = i_75(t);
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
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
  x_75 = t;
  u_75 :
  if(match_cons(x_75, sym__2))
    {
      y_75 = ATgetArgument(x_75, 0);
      d_76 = ATgetArgument(x_75, 1);
      v_75 :
      if(match_cons(y_75, sym__2))
        {
          z_75 = ATgetArgument(y_75, 0);
          c_76 = ATgetArgument(y_75, 1);
          w_75 :
          if(match_cons(z_75, sym_Mod_2))
            {
              a_76 = ATgetArgument(z_75, 0);
              b_76 = ATgetArgument(z_75, 1);
              {
                ATerm i_76 = NULL;
                ATerm j_76 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_76), not_null(b_76), not_null(c_76));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      j_76 = t;
                      if(((i_76 != NULL) && (i_76 != j_76)))
                        _fail(j_76);
                      else
                        i_76 = j_76;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_76), not_null(d_76));
              }
            }
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
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL;
  p_76 = t;
  n_76 :
  if(match_cons(p_76, sym__5))
    {
      q_76 = ATgetArgument(p_76, 0);
      t_76 = ATgetArgument(p_76, 1);
      u_76 = ATgetArgument(p_76, 2);
      v_76 = ATgetArgument(p_76, 3);
      w_76 = ATgetArgument(p_76, 4);
      o_76 :
      if(((ATgetType(q_76) == AT_LIST) && !(ATisEmpty(q_76))))
        {
          r_76 = ATgetFirst((ATermList) q_76);
          s_76 = (ATerm) ATgetNext((ATermList) q_76);
          t = (ATerm) ATmakeAppl(sym__5, not_null(s_76), not_null(t_76), not_null(u_76), not_null(v_76), (ATerm) ATinsert(CheckATermList(not_null(w_76)), not_null(r_76)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm a_97 (ATerm))
{
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL;
  g_77 = t;
  f_77 :
  if(match_cons(g_77, sym__2))
    {
      h_77 = ATgetArgument(g_77, 0);
      i_77 = ATgetArgument(g_77, 1);
      {
        t = not_null(h_77);
        {
          ATerm m_77 (ATerm t)
          {
            ATerm o_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(p_16);
              }
            else
              {
                t = o_16;
                {
                  ATerm u_16 = t;
                  int v_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_2 (ATerm t)
                      {
                        t = not_null(i_77);
                        return(t);
                      }
                      t = HdMember_p__2(t, a_97, m_2);
                      t = m_77(t);
                      LocalPopChoice(v_16);
                    }
                  else
                    {
                      t = u_16;
                      t = Cons_2(t, _id, m_77);
                    }
                }
              }
            return(t);
          }
          t = m_77(t);
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
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL;
  q_77 = t;
  o_77 :
  if(match_cons(q_77, sym__2))
    {
      r_77 = ATgetArgument(q_77, 0);
      s_77 = ATgetArgument(q_77, 1);
      p_77 :
      if(((ATgetType(s_77) == AT_LIST) && !(ATisEmpty(s_77))))
        {
          t_77 = ATgetFirst((ATermList) s_77);
          u_77 = (ATerm) ATgetNext((ATermList) s_77);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_77)), not_null(t_77)), not_null(u_77));
        }
      else
        {
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
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
  b_78 = t;
  a_78 :
  if(match_cons(b_78, sym__2))
    {
      c_78 = ATgetArgument(b_78, 0);
      d_78 = ATgetArgument(b_78, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_78)), not_null(c_78));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL;
  l_78 = t;
  i_78 :
  if(match_cons(l_78, sym__2))
    {
      m_78 = ATgetArgument(l_78, 0);
      p_78 = ATgetArgument(l_78, 1);
      j_78 :
      if(((ATgetType(m_78) == AT_LIST) && !(ATisEmpty(m_78))))
        {
          n_78 = ATgetFirst((ATermList) m_78);
          o_78 = (ATerm) ATgetNext((ATermList) m_78);
          k_78 :
          if(((ATgetType(p_78) == AT_LIST) && !(ATisEmpty(p_78))))
            {
              q_78 = ATgetFirst((ATermList) p_78);
              r_78 = (ATerm) ATgetNext((ATermList) p_78);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(n_78), not_null(q_78)), (ATerm) ATmakeAppl(sym__2, not_null(o_78), not_null(r_78)));
            }
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
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
  b_79 = t;
  y_78 :
  if(match_cons(b_79, sym__2))
    {
      c_79 = ATgetArgument(b_79, 0);
      d_79 = ATgetArgument(b_79, 1);
      z_78 :
      if(((ATgetType(c_79) == AT_LIST) && ATisEmpty(c_79)))
        {
          a_79 :
          if(((ATgetType(d_79) == AT_LIST) && ATisEmpty(d_79)))
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
ATerm genzip_4 (ATerm t, ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm m_88 (ATerm))
{
  ATerm f_79 (ATerm t)
  {
    ATerm w_16 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_88(t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = w_16;
        {
          t = k_88(t);
          {
            t = _2(t, m_88, f_79);
            t = l_88(t);
          }
        }
      }
    return(t);
  }
  t = f_79(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm o_88 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, o_88);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL;
  s_79 = t;
  q_79 :
  if(((ATgetType(s_79) == AT_LIST) && !(ATisEmpty(s_79))))
    {
      t_79 = ATgetFirst((ATermList) s_79);
      w_79 = (ATerm) ATgetNext((ATermList) s_79);
      r_79 :
      if(match_cons(t_79, sym__2))
        {
          u_79 = ATgetArgument(t_79, 0);
          v_79 = ATgetArgument(t_79, 1);
          {
            ATerm d_80 = NULL,e_80 = NULL,m_80 = NULL,u_80 = NULL;
            ATerm f_17;
            f_17 = t;
            {
              ATerm f_80 = NULL;
              ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
              t = not_null(v_79);
              {
                f_80 = t;
                {
                  t = SSL_explode_term(not_null(f_80));
                  {
                    h_80 = t;
                    j_79 :
                    if(match_cons(h_80, sym__2))
                      {
                        i_80 = ATgetArgument(h_80, 0);
                        j_80 = ATgetArgument(h_80, 1);
                        {
                          if(((d_80 != NULL) && (d_80 != i_80)))
                            _fail(i_80);
                          else
                            d_80 = i_80;
                          if(((e_80 != NULL) && (e_80 != j_80)))
                            _fail(j_80);
                          else
                            e_80 = j_80;
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
            t = f_17;
            {
              ATerm g_17;
              g_17 = t;
              {
                ATerm n_80 = NULL;
                ATerm p_80 = NULL,s_80 = NULL,t_80 = NULL;
                t = not_null(u_79);
                {
                  n_80 = t;
                  {
                    t = SSL_explode_term(not_null(n_80));
                    {
                      p_80 = t;
                      o_79 :
                      if(match_cons(p_80, sym__2))
                        {
                          s_80 = ATgetArgument(p_80, 0);
                          t_80 = ATgetArgument(p_80, 1);
                          {
                            if(((d_80 != NULL) && (d_80 != s_80)))
                              _fail(s_80);
                            else
                              d_80 = s_80;
                            if(((m_80 != NULL) && (m_80 != t_80)))
                              _fail(t_80);
                            else
                              m_80 = t_80;
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
              t = g_17;
              {
                ATerm v_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_80), not_null(e_80));
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_80), not_null(w_79));
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
  ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL;
  f_81 = t;
  d_81 :
  if(((ATgetType(f_81) == AT_LIST) && !(ATisEmpty(f_81))))
    {
      g_81 = ATgetFirst((ATermList) f_81);
      j_81 = (ATerm) ATgetNext((ATermList) f_81);
      e_81 :
      if(match_cons(g_81, sym__2))
        {
          h_81 = ATgetArgument(g_81, 0);
          i_81 = ATgetArgument(g_81, 1);
          {
            ATerm l_81 = NULL;
            if(((h_81 != NULL) && (h_81 != i_81)))
              _fail(i_81);
            else
              h_81 = i_81;
            {
              if(((l_81 != NULL) && (l_81 != j_81)))
                _fail(j_81);
              else
                l_81 = j_81;
              t = not_null(l_81);
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
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm o_81 = NULL;
        o_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(o_81));
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm c_18 = t;
              int e_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(e_18);
                }
              else
                {
                  t = c_18;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, q_2);
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, n_2, o_2, p_2);
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm x_108 (ATerm))
{
  ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
  b_82 = t;
  z_81 :
  if(match_cons(b_82, sym__5))
    {
      c_82 = ATgetArgument(b_82, 0);
      f_82 = ATgetArgument(b_82, 1);
      g_82 = ATgetArgument(b_82, 2);
      h_82 = ATgetArgument(b_82, 3);
      i_82 = ATgetArgument(b_82, 4);
      a_82 :
      if(((ATgetType(c_82) == AT_LIST) && !(ATisEmpty(c_82))))
        {
          d_82 = ATgetFirst((ATermList) c_82);
          e_82 = (ATerm) ATgetNext((ATermList) c_82);
          {
            ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL,e_83 = NULL,g_83 = NULL,i_83 = NULL;
            ATerm f_18;
            f_18 = t;
            {
              ATerm t_82 = NULL,u_82 = NULL,y_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_82), not_null(g_82));
              {
                t = v_108(t);
                {
                  t_82 = t;
                  v_81 :
                  if(match_cons(t_82, sym__2))
                    {
                      u_82 = ATgetArgument(t_82, 0);
                      y_82 = ATgetArgument(t_82, 1);
                      {
                        ATerm c_83 = NULL;
                        if(((q_82 != NULL) && (q_82 != u_82)))
                          _fail(u_82);
                        else
                          q_82 = u_82;
                        {
                          if(((p_82 != NULL) && (p_82 != y_82)))
                            _fail(y_82);
                          else
                            p_82 = y_82;
                          {
                            t = not_null(q_82);
                            {
                              ATerm d_83 = NULL;
                              t = w_108(t);
                              {
                                c_83 = t;
                                {
                                  if(((r_82 != NULL) && (r_82 != c_83)))
                                    _fail(c_83);
                                  else
                                    r_82 = c_83;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_82), not_null(f_82));
                                    {
                                      t = diff_0(t);
                                      {
                                        d_83 = t;
                                        if(((s_82 != NULL) && (s_82 != d_83)))
                                          _fail(d_83);
                                        else
                                          s_82 = d_83;
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
            t = f_18;
            {
              ATerm g_18;
              g_18 = t;
              {
                ATerm f_83 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_82), not_null(e_82));
                {
                  t = conc_0(t);
                  {
                    f_83 = t;
                    if(((e_83 != NULL) && (e_83 != f_83)))
                      _fail(f_83);
                    else
                      e_83 = f_83;
                  }
                }
              }
              t = g_18;
              {
                ATerm h_18;
                h_18 = t;
                {
                  ATerm h_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_82), not_null(f_82));
                  {
                    t = conc_0(t);
                    {
                      h_83 = t;
                      if(((g_83 != NULL) && (g_83 != h_83)))
                        _fail(h_83);
                      else
                        g_83 = h_83;
                    }
                  }
                }
                t = h_18;
                {
                  ATerm j_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_82), not_null(q_82), not_null(h_82));
                  {
                    t = x_108(t);
                    {
                      j_83 = t;
                      if(((i_83 != NULL) && (i_83 != j_83)))
                        _fail(j_83);
                      else
                        i_83 = j_83;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(e_83), not_null(g_83), not_null(p_82), not_null(i_83), not_null(i_82));
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
  ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL,c_84 = NULL;
  x_83 = t;
  v_83 :
  if(match_cons(x_83, sym__5))
    {
      y_83 = ATgetArgument(x_83, 0);
      z_83 = ATgetArgument(x_83, 1);
      a_84 = ATgetArgument(x_83, 2);
      b_84 = ATgetArgument(x_83, 3);
      c_84 = ATgetArgument(x_83, 4);
      w_83 :
      if(((ATgetType(y_83) == AT_LIST) && ATisEmpty(y_83)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_84), not_null(c_84));
        }
      else
        {
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
  ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL;
  k_84 = t;
  j_84 :
  if(match_cons(k_84, sym__3))
    {
      l_84 = ATgetArgument(k_84, 0);
      m_84 = ATgetArgument(k_84, 1);
      n_84 = ATgetArgument(k_84, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(l_84), not_null(l_84), not_null(m_84), not_null(n_84), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm t_94 (ATerm), ATerm u_94 (ATerm))
{
  ATerm s_84 (ATerm t)
  {
    ATerm i_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_94(t);
        LocalPopChoice(k_18);
      }
    else
      {
        t = i_18;
        {
          t = u_94(t);
          t = s_84(t);
        }
      }
    return(t);
  }
  t = s_84(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm y_94 (ATerm))
{
  t = w_94(t);
  t = while_not_2(t, x_94, y_94);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm i_108 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, g_108, h_108, i_108);
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
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
    ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL;
    v_84 = t;
    u_84 :
    if(match_cons(v_84, sym__3))
      {
        w_84 = ATgetArgument(v_84, 0);
        x_84 = ATgetArgument(v_84, 1);
        y_84 = ATgetArgument(v_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(y_84)), not_null(x_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, s_2, t_2);
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
            t = term_z_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm e_109 (ATerm))
{
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
  j_85 = t;
  i_85 :
  if(match_cons(j_85, sym__2))
    {
      k_85 = ATgetArgument(j_85, 0);
      l_85 = ATgetArgument(j_85, 1);
      {
        ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL;
        ATerm u_18;
        u_18 = t;
        {
          ATerm r_85 = NULL;
          ATerm s_85 = NULL,t_85 = NULL,w_85 = NULL;
          t = e_109(t);
          {
            r_85 = t;
            {
              if(((o_85 != NULL) && (o_85 != r_85)))
                _fail(r_85);
              else
                o_85 = r_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_85), not_null(k_85), not_null(l_85));
                {
                  t = table_push_0(t);
                  {
                    ATerm v_18 = t;
                    int b_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_85), term_d_19);
                        t = table_get_0(t);
                        LocalPopChoice(b_19);
                      }
                    else
                      {
                        t = v_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      s_85 = t;
                      f_85 :
                      if(((ATgetType(s_85) == AT_LIST) && !(ATisEmpty(s_85))))
                        {
                          t_85 = ATgetFirst((ATermList) s_85);
                          w_85 = (ATerm) ATgetNext((ATermList) s_85);
                          {
                            if(((p_85 != NULL) && (p_85 != t_85)))
                              _fail(t_85);
                            else
                              p_85 = t_85;
                            {
                              if(((q_85 != NULL) && (q_85 != w_85)))
                                _fail(w_85);
                              else
                                q_85 = w_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_85), term_d_19, (ATerm) ATinsert(CheckATermList(not_null(q_85)), (ATerm) ATinsert(CheckATermList(not_null(p_85)), not_null(k_85))));
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
ATerm Arities_0 (ATerm t)
{
  ATerm e_86 = NULL;
  ATerm h_86 = NULL;
  e_86 = t;
  {
    ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL;
    t = not_null(e_86);
    {
      ATerm v_2 (ATerm t)
      {
        t = term_e_19;
        return(t);
      }
      t = rewrite_1(t, v_2);
      {
        i_86 = t;
        c_86 :
        if(match_cons(i_86, sym_Defined_2))
          {
            j_86 = ATgetArgument(i_86, 0);
            k_86 = ATgetArgument(i_86, 1);
            d_86 :
            if(match_string(j_86, "h_0"))
              {
                if(((h_86 != NULL) && (h_86 != k_86)))
                  _fail(k_86);
                else
                  h_86 = k_86;
              }
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
    t = not_null(h_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL;
  p_86 = t;
  o_86 :
  if(((ATgetType(p_86) == AT_LIST) && !(ATisEmpty(p_86))))
    {
      q_86 = ATgetFirst((ATermList) p_86);
      r_86 = (ATerm) ATgetNext((ATermList) p_86);
      t = not_null(q_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL;
  y_86 = t;
  x_86 :
  if(match_cons(y_86, sym__2))
    {
      z_86 = ATgetArgument(y_86, 0);
      a_87 = ATgetArgument(y_86, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_86), not_null(a_87));
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
ATerm rewrite_1 (ATerm t, ATerm g_109 (ATerm))
{
  ATerm g_87 = NULL;
  ATerm i_87 = NULL;
  g_87 = t;
  {
    ATerm l_87 = NULL;
    t = term_q_15;
    {
      t = g_109(t);
      {
        l_87 = t;
        if(((i_87 != NULL) && (i_87 != l_87)))
          _fail(l_87);
        else
          i_87 = l_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_87), not_null(g_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL;
  t_87 = t;
  s_87 :
  if(match_cons(t_87, sym__2))
    {
      u_87 = ATgetArgument(t_87, 0);
      v_87 = ATgetArgument(t_87, 1);
      {
        ATerm b_88 = NULL,c_88 = NULL;
        ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
        t = not_null(t_87);
        {
          ATerm w_2 (ATerm t)
          {
            t = term_f_19;
            return(t);
          }
          t = rewrite_1(t, w_2);
          {
            d_88 = t;
            q_87 :
            if(match_cons(d_88, sym_Defined_3))
              {
                e_88 = ATgetArgument(d_88, 0);
                f_88 = ATgetArgument(d_88, 1);
                g_88 = ATgetArgument(d_88, 2);
                r_87 :
                if(match_string(e_88, "b_0"))
                  {
                    if(((b_88 != NULL) && (b_88 != f_88)))
                      _fail(f_88);
                    else
                      b_88 = f_88;
                    if(((c_88 != NULL) && (c_88 != g_88)))
                      _fail(g_88);
                    else
                      c_88 = g_88;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(c_88)), not_null(b_88));
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
    ATerm x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL;
    x_88 = t;
    w_88 :
    if(match_cons(x_88, sym_SDef_3))
      {
        y_88 = ATgetArgument(x_88, 0);
        z_88 = ATgetArgument(x_88, 1);
        a_89 = ATgetArgument(x_88, 2);
        {
          ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
          ATerm g_19;
          g_19 = t;
          {
            ATerm i_89 = NULL;
            t = not_null(z_88);
            {
              ATerm j_89 = NULL;
              t = length_0(t);
              {
                i_89 = t;
                {
                  if(((g_89 != NULL) && (g_89 != i_89)))
                    _fail(i_89);
                  else
                    g_89 = i_89;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_88), not_null(g_89));
                    {
                      ATerm k_89 = NULL,m_89 = NULL;
                      ATerm h_19 = t;
                      int k_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(k_19);
                        }
                      else
                        {
                          t = h_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        j_89 = t;
                        {
                          if(((f_89 != NULL) && (f_89 != j_89)))
                            _fail(j_89);
                          else
                            f_89 = j_89;
                          {
                            ATerm l_89 = NULL;
                            t = not_null(y_88);
                            {
                              ATerm l_19 = t;
                              int m_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(m_19);
                                }
                              else
                                {
                                  t = l_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                l_89 = t;
                                if(((k_89 != NULL) && (k_89 != l_89)))
                                  _fail(l_89);
                                else
                                  k_89 = l_89;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(g_89)), not_null(k_89));
                              {
                                t = union_0(t);
                                {
                                  m_89 = t;
                                  {
                                    if(((h_89 != NULL) && (h_89 != m_89)))
                                      _fail(m_89);
                                    else
                                      h_89 = m_89;
                                    {
                                      ATerm n_19;
                                      n_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_88), not_null(g_89)), (ATerm) ATmakeAppl(sym_Defined_3, term_s_19, not_null(x_88), not_null(f_89)));
                                        {
                                          ATerm y_2 (ATerm t)
                                          {
                                            t = term_f_19;
                                            return(t);
                                          }
                                          t = assert_1(t, y_2);
                                        }
                                      }
                                      t = n_19;
                                      {
                                        ATerm t_19;
                                        t_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_88), (ATerm) ATmakeAppl(sym_Defined_2, term_u_19, not_null(h_89)));
                                          {
                                            ATerm z_2 (ATerm t)
                                            {
                                              t = term_e_19;
                                              return(t);
                                            }
                                            t = assert_1(t, z_2);
                                          }
                                        }
                                        t = t_19;
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
          t = g_19;
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
    t = term_v_19;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_z_6;
    return(t);
  }
  t = foldr_3(t, a_3, add_0, b_3);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm v_89 = NULL,w_89 = NULL,x_89 = NULL;
  v_89 = t;
  u_89 :
  if(match_cons(v_89, sym__2))
    {
      w_89 = ATgetArgument(v_89, 0);
      x_89 = ATgetArgument(v_89, 1);
      if(((w_89 != NULL) && (w_89 != x_89)))
        _fail(x_89);
      else
        w_89 = x_89;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_97 (ATerm), ATerm j_97 (ATerm))
{
  ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL;
  d_90 = t;
  c_90 :
  if(((ATgetType(d_90) == AT_LIST) && !(ATisEmpty(d_90))))
    {
      e_90 = ATgetFirst((ATermList) d_90);
      f_90 = (ATerm) ATgetNext((ATermList) d_90);
      {
        t = j_97(t);
        {
          ATerm c_3 (ATerm t)
          {
            ATerm i_90 = NULL;
            i_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_90), not_null(i_90));
              t = i_97(t);
            }
            return(t);
          }
          t = fetch_1(t, c_3);
        }
        t = not_null(f_90);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm e_97 (ATerm))
{
  ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL;
  o_90 = t;
  n_90 :
  if(match_cons(o_90, sym__2))
    {
      p_90 = ATgetArgument(o_90, 0);
      q_90 = ATgetArgument(o_90, 1);
      {
        t = not_null(p_90);
        {
          ATerm u_90 (ATerm t)
          {
            ATerm w_19 = t;
            int x_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_90);
                LocalPopChoice(x_19);
              }
            else
              {
                t = w_19;
                {
                  ATerm y_19 = t;
                  int z_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_3 (ATerm t)
                      {
                        t = not_null(q_90);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_97, d_3);
                      t = u_90(t);
                      LocalPopChoice(z_19);
                    }
                  else
                    {
                      t = y_19;
                      t = Cons_2(t, _id, u_90);
                    }
                }
              }
            return(t);
          }
          t = u_90(t);
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
ATerm foldr_3 (ATerm t, ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm))
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_97(t);
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL;
        z_90 = t;
        y_90 :
        if(((ATgetType(z_90) == AT_LIST) && !(ATisEmpty(z_90))))
          {
            a_91 = ATgetFirst((ATermList) z_90);
            b_91 = (ATerm) ATgetNext((ATermList) z_90);
            {
              ATerm e_91 = NULL,g_91 = NULL;
              ATerm g_20;
              g_20 = t;
              {
                ATerm f_91 = NULL;
                t = not_null(a_91);
                {
                  t = t_97(t);
                  {
                    f_91 = t;
                    if(((e_91 != NULL) && (e_91 != f_91)))
                      _fail(f_91);
                    else
                      e_91 = f_91;
                  }
                }
              }
              t = g_20;
              {
                ATerm h_91 = NULL;
                t = not_null(b_91);
                {
                  t = foldr_3(t, r_97, s_97, t_97);
                  {
                    h_91 = t;
                    if(((g_91 != NULL) && (g_91 != h_91)))
                      _fail(h_91);
                    else
                      g_91 = h_91;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_91), not_null(g_91));
                  t = s_97(t);
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
    ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL;
    o_91 = t;
    n_91 :
    if(match_cons(o_91, sym_SDef_3))
      {
        p_91 = ATgetArgument(o_91, 0);
        q_91 = ATgetArgument(o_91, 1);
        r_91 = ATgetArgument(o_91, 2);
        {
          ATerm u_91 = NULL;
          ATerm v_91 = NULL;
          t = not_null(q_91);
          {
            t = length_0(t);
            {
              v_91 = t;
              if(((u_91 != NULL) && (u_91 != v_91)))
                _fail(v_91);
              else
                u_91 = v_91;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(p_91), not_null(u_91)));
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
  ATerm a_92 = NULL,c_92 = NULL;
  ATerm k_20;
  k_20 = t;
  {
    ATerm b_92 = NULL;
    t = definition_names_0(t);
    {
      b_92 = t;
      if(((a_92 != NULL) && (a_92 != b_92)))
        _fail(b_92);
      else
        a_92 = b_92;
    }
  }
  t = k_20;
  {
    ATerm d_92 = NULL;
    t = sort_defs_0(t);
    {
      d_92 = t;
      if(((c_92 != NULL) && (c_92 != d_92)))
        _fail(d_92);
      else
        c_92 = d_92;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(a_92), not_null(c_92), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm q_92 = NULL,r_92 = NULL;
  q_92 = t;
  p_92 :
  if(match_cons(q_92, sym_Strategies_1))
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
            t = p_71(t);
            {
              w_92 = t;
              {
                ATerm z_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(w_92)), not_null(u_92));
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
ATerm Cons_2 (ATerm t, ATerm e_69 (ATerm), ATerm f_69 (ATerm))
{
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL;
  k_93 = t;
  j_93 :
  if(((ATgetType(k_93) == AT_LIST) && !(ATisEmpty(k_93))))
    {
      l_93 = ATgetFirst((ATermList) k_93);
      m_93 = (ATerm) ATgetNext((ATermList) k_93);
      {
        ATerm q_93 = NULL,s_93 = NULL;
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
            ATerm u_93 = NULL;
            t = e_69(t);
            {
              s_93 = t;
              {
                t = not_null(m_93);
                {
                  ATerm w_93 = NULL;
                  t = f_69(t);
                  {
                    u_93 = t;
                    {
                      ATerm x_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(u_93)), not_null(s_93)), not_null(q_93));
                      {
                        x_93 = t;
                        if(((w_93 != NULL) && (w_93 != x_93)))
                          _fail(x_93);
                        else
                          w_93 = x_93;
                      }
                      t = not_null(w_93);
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
ATerm Specification_1 (ATerm t, ATerm r_71 (ATerm))
{
  ATerm m_94 = NULL,n_94 = NULL;
  m_94 = t;
  l_94 :
  if(match_cons(m_94, sym_Specification_1))
    {
      n_94 = ATgetArgument(m_94, 0);
      {
        ATerm q_94 = NULL,s_94 = NULL;
        ATerm r_94 = NULL;
        t = SSLgetAnnotations(not_null(m_94));
        {
          r_94 = t;
          if(((q_94 != NULL) && (q_94 != r_94)))
            _fail(r_94);
          else
            q_94 = r_94;
        }
        {
          t = not_null(n_94);
          {
            ATerm a_95 = NULL;
            t = r_71(t);
            {
              s_94 = t;
              {
                ATerm b_95 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(s_94)), not_null(q_94));
                {
                  b_95 = t;
                  if(((a_95 != NULL) && (a_95 != b_95)))
                    _fail(b_95);
                  else
                    a_95 = b_95;
                }
                t = not_null(a_95);
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
ATerm _2 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm))
{
  ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL;
  m_95 = t;
  l_95 :
  if(match_cons(m_95, sym__2))
    {
      n_95 = ATgetArgument(m_95, 0);
      o_95 = ATgetArgument(m_95, 1);
      {
        ATerm s_95 = NULL,u_95 = NULL;
        ATerm t_95 = NULL;
        t = SSLgetAnnotations(not_null(m_95));
        {
          t_95 = t;
          if(((s_95 != NULL) && (s_95 != t_95)))
            _fail(t_95);
          else
            s_95 = t_95;
        }
        {
          t = not_null(n_95);
          {
            ATerm w_95 = NULL;
            t = v_67(t);
            {
              u_95 = t;
              {
                t = not_null(o_95);
                {
                  ATerm y_95 = NULL;
                  t = w_67(t);
                  {
                    w_95 = t;
                    {
                      ATerm z_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_95), not_null(w_95)), not_null(s_95));
                      {
                        z_95 = t;
                        if(((y_95 != NULL) && (y_95 != z_95)))
                          _fail(z_95);
                        else
                          y_95 = z_95;
                      }
                      t = not_null(y_95);
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
  ATerm h_96 = NULL;
  ATerm m_20;
  m_20 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm i_96 = NULL,j_96 = NULL;
      i_96 = t;
      g_96 :
      if(match_cons(i_96, sym_Program_1))
        {
          j_96 = ATgetArgument(i_96, 0);
          if(((h_96 != NULL) && (h_96 != j_96)))
            _fail(j_96);
          else
            h_96 = j_96;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_20), not_null(h_96)), term_p_20));
      {
        t = printnl_0(t);
        {
          t = term_z_6;
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
  ATerm n_96 = NULL,o_96 = NULL,p_96 = NULL;
  n_96 = t;
  m_96 :
  if(match_cons(n_96, sym__2))
    {
      o_96 = ATgetArgument(n_96, 0);
      p_96 = ATgetArgument(n_96, 1);
      {
        ATerm r_20;
        r_20 = t;
        t = SSL_printnl(not_null(o_96), not_null(p_96));
        t = r_20;
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
  ATerm z_96 = NULL;
  z_96 = t;
  t = SSL_implode_string(not_null(z_96));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      {
        ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL;
        k_97 = t;
        h_97 :
        if(((ATgetType(k_97) == AT_LIST) && !(ATisEmpty(k_97))))
          {
            l_97 = ATgetFirst((ATermList) k_97);
            m_97 = (ATerm) ATgetNext((ATermList) k_97);
            {
              t = not_null(l_97);
              {
                ATerm j_3 (ATerm t)
                {
                  t = not_null(m_97);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm b_98 = NULL;
  ATerm f_98 = NULL;
  b_98 = t;
  {
    ATerm g_98 = NULL;
    ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL;
    t = not_null(b_98);
    {
      g_98 = t;
      {
        t = SSL_explode_term(not_null(g_98));
        {
          i_98 = t;
          z_97 :
          if(match_cons(i_98, sym__2))
            {
              j_98 = ATgetArgument(i_98, 0);
              k_98 = ATgetArgument(i_98, 1);
              a_98 :
              if(match_string(j_98, ""))
                {
                  if(((f_98 != NULL) && (f_98 != k_98)))
                    _fail(k_98);
                  else
                    f_98 = k_98;
                }
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
      t = not_null(f_98);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm o_98 (ATerm t)
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_98);
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        {
          t = Nil_0(t);
          t = q_80(t);
        }
      }
    return(t);
  }
  t = o_98(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL;
  r_98 = t;
  q_98 :
  if(match_cons(r_98, sym__2))
    {
      s_98 = ATgetArgument(r_98, 0);
      t_98 = ATgetArgument(r_98, 1);
      {
        t = not_null(s_98);
        {
          ATerm k_3 (ATerm t)
          {
            t = not_null(t_98);
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
ATerm conc_0 (ATerm t)
{
  ATerm w_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(y_20);
    }
  else
    {
      t = w_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_98 = NULL;
  y_98 = t;
  t = SSL_explode_string(not_null(y_98));
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
ATerm debug_1 (ATerm t, ATerm i_101 (ATerm))
{
  ATerm z_20;
  z_20 = t;
  {
    ATerm d_99 = NULL,f_99 = NULL;
    ATerm a_21;
    a_21 = t;
    {
      ATerm e_99 = NULL;
      t = i_101(t);
      {
        e_99 = t;
        if(((d_99 != NULL) && (d_99 != e_99)))
          _fail(e_99);
        else
          d_99 = e_99;
      }
    }
    t = a_21;
    {
      ATerm g_99 = NULL;
      g_99 = t;
      if(((f_99 != NULL) && (f_99 != g_99)))
        _fail(g_99);
      else
        f_99 = g_99;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_99)), not_null(d_99)));
        t = printnl_0(t);
      }
    }
  }
  t = z_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_99 = NULL;
  k_99 = t;
  t = SSL_is_string(not_null(k_99));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm c_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(e_21);
    }
  else
    {
      t = c_21;
      {
        ATerm f_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_3);
            LocalPopChoice(o_21);
          }
        else
          {
            t = f_21;
            {
              ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL;
              t_99 = t;
              s_99 :
              if(match_cons(t_99, sym_Path_1))
                {
                  u_99 = ATgetArgument(t_99, 0);
                  t = not_null(u_99);
                }
              else
                {
                  if(match_cons(t_99, sym_Var_1))
                    {
                      u_99 = ATgetArgument(t_99, 0);
                      {
                        t = not_null(u_99);
                        {
                          ATerm p_21 = t;
                          int q_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(q_21);
                            }
                          else
                            {
                              t = p_21;
                              {
                                ATerm m_3 (ATerm t)
                                {
                                  t = term_r_21;
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
                      if(match_cons(t_99, sym_Prefix_2))
                        {
                          u_99 = ATgetArgument(t_99, 0);
                          v_99 = ATgetArgument(t_99, 1);
                          {
                            ATerm a_100 = NULL,c_100 = NULL;
                            ATerm z_21;
                            z_21 = t;
                            {
                              ATerm b_100 = NULL;
                              t = not_null(u_99);
                              {
                                t = eval_config_0(t);
                                {
                                  b_100 = t;
                                  if(((a_100 != NULL) && (a_100 != b_100)))
                                    _fail(b_100);
                                  else
                                    a_100 = b_100;
                                }
                              }
                            }
                            t = z_21;
                            {
                              ATerm d_100 = NULL;
                              t = not_null(v_99);
                              {
                                t = eval_config_0(t);
                                {
                                  d_100 = t;
                                  if(((c_100 != NULL) && (c_100 != d_100)))
                                    _fail(d_100);
                                  else
                                    c_100 = d_100;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_100), not_null(c_100));
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
  ATerm l_100 = NULL;
  l_100 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_22, not_null(l_100));
    {
      t = table_get_0(t);
      {
        ATerm n_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_22;
            g_22 = t;
            {
              ATerm n_100 = NULL;
              ATerm o_100 = NULL;
              o_100 = t;
              if(((n_100 != NULL) && (n_100 != o_100)))
                _fail(o_100);
              else
                n_100 = o_100;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_a_22, not_null(l_100), not_null(n_100));
                t = table_put_0(t);
              }
            }
            t = g_22;
          }
          return(t);
        }
        t = try_1(t, n_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm f_104 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm h_22;
    h_22 = t;
    {
      ATerm s_100 = NULL;
      ATerm t_100 = NULL;
      t = term_m_22;
      {
        t = get_config_0(t);
        {
          t_100 = t;
          if(((s_100 != NULL) && (s_100 != t_100)))
            _fail(t_100);
          else
            s_100 = t_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_100), term_r_22);
        t = geq_0(t);
      }
    }
    t = h_22;
    t = f_104(t);
    return(t);
  }
  t = try_1(t, o_3);
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
  ATerm r_101 = NULL;
  ATerm s_22;
  s_22 = t;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm t_22 = t;
      int u_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_3 (ATerm t)
          {
            ATerm s_101 = NULL,t_101 = NULL;
            s_101 = t;
            o_101 :
            if(match_cons(s_101, sym_Output_1))
              {
                t_101 = ATgetArgument(s_101, 0);
                if(((r_101 != NULL) && (r_101 != t_101)))
                  _fail(t_101);
                else
                  r_101 = t_101;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_3);
          LocalPopChoice(u_22);
        }
      else
        {
          t = t_22;
          {
            ATerm u_101 = NULL;
            t = term_v_22;
            {
              u_101 = t;
              if(((r_101 != NULL) && (r_101 != u_101)))
                _fail(u_101);
              else
                r_101 = u_101;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_3, _id);
  }
  t = s_22;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm s_3 (ATerm t)
      {
        t = not_null(r_101);
        return(t);
      }
      t = split_2(t, s_3, _id);
      return(t);
    }
    t = _2(t, _id, r_3);
    {
      ATerm w_22 = t;
      int x_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_3 (ATerm t)
          {
            ATerm u_3 (ATerm t)
            {
              ATerm v_101 = NULL;
              v_101 = t;
              q_101 :
              if(!(match_cons(v_101, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_3);
            return(t);
          }
          t = _2(t, t_3, WriteToBinaryFile_0);
          LocalPopChoice(x_22);
        }
      else
        {
          t = w_22;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_102 (ATerm))
{
  ATerm b_102 = NULL,d_102 = NULL,e_102 = NULL,f_102 = NULL;
  ATerm y_22;
  y_22 = t;
  t = dtime_0(t);
  t = y_22;
  {
    t = m_102(t);
    {
      ATerm z_22;
      z_22 = t;
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
      t = z_22;
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
ATerm split_2 (ATerm t, ATerm j_87 (ATerm), ATerm k_87 (ATerm))
{
  ATerm x_102 = NULL,e_103 = NULL;
  ATerm a_23;
  a_23 = t;
  {
    ATerm y_102 = NULL;
    t = j_87(t);
    {
      y_102 = t;
      if(((x_102 != NULL) && (x_102 != y_102)))
        _fail(y_102);
      else
        x_102 = y_102;
    }
  }
  t = a_23;
  {
    ATerm f_103 = NULL;
    t = k_87(t);
    {
      f_103 = t;
      if(((e_103 != NULL) && (e_103 != f_103)))
        _fail(f_103);
      else
        e_103 = f_103;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_102), not_null(e_103));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_103 = NULL;
  ATerm g_23;
  g_23 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 (ATerm t)
        {
          ATerm q_103 = NULL,r_103 = NULL;
          q_103 = t;
          n_103 :
          if(match_cons(q_103, sym_Input_1))
            {
              r_103 = ATgetArgument(q_103, 0);
              if(((p_103 != NULL) && (p_103 != r_103)))
                _fail(r_103);
              else
                p_103 = r_103;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_3);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        {
          ATerm s_103 = NULL;
          t = term_j_23;
          {
            s_103 = t;
            if(((p_103 != NULL) && (p_103 != s_103)))
              _fail(s_103);
            else
              p_103 = s_103;
          }
        }
      }
  }
  t = g_23;
  {
    ATerm w_3 (ATerm t)
    {
      t = not_null(p_103);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_3);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_103 = NULL;
  w_103 = t;
  t = SSL_string_to_int(not_null(w_103));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL;
  g_104 = t;
  c_104 :
  if(match_string(g_104, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(g_104) == AT_LIST) && !(ATisEmpty(g_104))))
        {
          h_104 = ATgetFirst((ATermList) g_104);
          i_104 = (ATerm) ATgetNext((ATermList) g_104);
          d_104 :
          if(((ATgetType(i_104) == AT_LIST) && !(ATisEmpty(i_104))))
            {
              j_104 = ATgetFirst((ATermList) i_104);
              k_104 = (ATerm) ATgetNext((ATermList) i_104);
              {
                ATerm o_104 = NULL;
                ATerm r_23;
                r_23 = t;
                {
                  t = not_null(h_104);
                  t = g_0(t);
                }
                t = r_23;
                {
                  ATerm p_104 = NULL;
                  t = not_null(j_104);
                  {
                    t = i_0(t);
                    {
                      p_104 = t;
                      if(((o_104 != NULL) && (o_104 != p_104)))
                        _fail(p_104);
                      else
                        o_104 = p_104;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_104)), not_null(o_104));
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
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 (ATerm t)
      {
        ATerm j_105 = NULL;
        j_105 = t;
        t_104 :
        if(!(match_string(j_105, "-i")))
          {
            if(!(match_string(j_105, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        ATerm m_105 = NULL;
        ATerm w_23;
        w_23 = t;
        {
          ATerm k_105 = NULL;
          ATerm l_105 = NULL;
          l_105 = t;
          if(((k_105 != NULL) && (k_105 != l_105)))
            _fail(l_105);
          else
            k_105 = l_105;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_23, not_null(k_105));
            t = set_config_0(t);
          }
        }
        t = w_23;
        {
          ATerm n_105 = NULL;
          n_105 = t;
          if(((m_105 != NULL) && (m_105 != n_105)))
            _fail(n_105);
          else
            m_105 = n_105;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_105));
        }
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = term_y_23;
        return(t);
      }
      t = ArgOption_3(t, x_3, y_3, z_3);
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
            ATerm a_4 (ATerm t)
            {
              ATerm o_105 = NULL;
              o_105 = t;
              w_104 :
              if(!(match_string(o_105, "-o")))
                {
                  if(!(match_string(o_105, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              ATerm r_105 = NULL;
              ATerm b_24;
              b_24 = t;
              {
                ATerm p_105 = NULL;
                ATerm q_105 = NULL;
                q_105 = t;
                if(((p_105 != NULL) && (p_105 != q_105)))
                  _fail(q_105);
                else
                  p_105 = q_105;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_24, not_null(p_105));
                  t = set_config_0(t);
                }
              }
              t = b_24;
              {
                ATerm s_105 = NULL;
                s_105 = t;
                if(((r_105 != NULL) && (r_105 != s_105)))
                  _fail(s_105);
                else
                  r_105 = s_105;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_105));
              }
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              t = term_d_24;
              return(t);
            }
            t = ArgOption_3(t, a_4, b_4, c_4);
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
                  ATerm d_4 (ATerm t)
                  {
                    ATerm t_105 = NULL;
                    t_105 = t;
                    z_104 :
                    if(!(match_string(t_105, "-S")))
                      {
                        if(!(match_string(t_105, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm e_4 (ATerm t)
                  {
                    t = term_g_24;
                    t = set_config_0(t);
                    t = term_i_24;
                    return(t);
                  }
                  ATerm f_4 (ATerm t)
                  {
                    t = term_j_24;
                    return(t);
                  }
                  t = Option_3(t, d_4, e_4, f_4);
                  LocalPopChoice(f_24);
                }
              else
                {
                  t = e_24;
                  {
                    ATerm k_24 = t;
                    int l_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_4 (ATerm t)
                        {
                          ATerm u_105 = NULL;
                          u_105 = t;
                          a_105 :
                          if(!(match_string(u_105, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm h_4 (ATerm t)
                        {
                          ATerm x_105 = NULL;
                          ATerm n_24;
                          n_24 = t;
                          {
                            ATerm v_105 = NULL;
                            ATerm w_105 = NULL;
                            t = string_to_int_0(t);
                            {
                              w_105 = t;
                              if(((v_105 != NULL) && (v_105 != w_105)))
                                _fail(w_105);
                              else
                                v_105 = w_105;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_m_22, not_null(v_105));
                              t = set_config_0(t);
                            }
                          }
                          t = n_24;
                          {
                            ATerm y_105 = NULL;
                            y_105 = t;
                            if(((x_105 != NULL) && (x_105 != y_105)))
                              _fail(y_105);
                            else
                              x_105 = y_105;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_105));
                          }
                          return(t);
                        }
                        ATerm i_4 (ATerm t)
                        {
                          t = term_s_24;
                          return(t);
                        }
                        t = ArgOption_3(t, g_4, h_4, i_4);
                        LocalPopChoice(l_24);
                      }
                    else
                      {
                        t = k_24;
                        {
                          ATerm t_24 = t;
                          int c_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_4 (ATerm t)
                              {
                                ATerm z_105 = NULL;
                                z_105 = t;
                                d_105 :
                                if(!(match_string(z_105, "-k")))
                                  {
                                    if(!(match_string(z_105, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm n_4 (ATerm t)
                              {
                                ATerm m_25;
                                m_25 = t;
                                {
                                  ATerm a_106 = NULL;
                                  ATerm b_106 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    b_106 = t;
                                    if(((a_106 != NULL) && (a_106 != b_106)))
                                      _fail(b_106);
                                    else
                                      a_106 = b_106;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_y_25, not_null(a_106));
                                    t = set_config_0(t);
                                  }
                                }
                                t = m_25;
                                return(t);
                              }
                              ATerm o_4 (ATerm t)
                              {
                                t = term_z_25;
                                return(t);
                              }
                              t = ArgOption_3(t, j_4, n_4, o_4);
                              LocalPopChoice(c_25);
                            }
                          else
                            {
                              t = t_24;
                              {
                                ATerm a_26 = t;
                                int b_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_4 (ATerm t)
                                    {
                                      ATerm c_106 = NULL;
                                      c_106 = t;
                                      f_105 :
                                      if(!(match_string(c_106, "-v")))
                                        {
                                          if(!(match_string(c_106, "--version")))
                                            {
                                              _fail(t);
                                            }
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
                                      ATerm g_26 = t;
                                      int h_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_4 (ATerm t)
                                          {
                                            ATerm d_106 = NULL;
                                            d_106 = t;
                                            g_105 :
                                            if(!(match_string(d_106, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm t_4 (ATerm t)
                                          {
                                            t = term_j_26;
                                            t = set_config_0(t);
                                            t = term_k_26;
                                            return(t);
                                          }
                                          ATerm u_4 (ATerm t)
                                          {
                                            t = term_l_26;
                                            return(t);
                                          }
                                          t = Option_3(t, s_4, t_4, u_4);
                                          LocalPopChoice(h_26);
                                        }
                                      else
                                        {
                                          t = g_26;
                                          {
                                            ATerm v_4 (ATerm t)
                                            {
                                              ATerm e_106 = NULL;
                                              e_106 = t;
                                              i_105 :
                                              if(!(match_string(e_106, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm w_4 (ATerm t)
                                            {
                                              t = term_n_26;
                                              t = set_config_0(t);
                                              t = term_o_26;
                                              return(t);
                                            }
                                            ATerm x_4 (ATerm t)
                                            {
                                              t = term_p_26;
                                              return(t);
                                            }
                                            t = Option_3(t, v_4, w_4, x_4);
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
  t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, term_q_26));
  {
    t = printnl_0(t);
    {
      t = term_z_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_106 = NULL;
  t_106 = t;
  t = SSL_TicksToSeconds(not_null(t_106));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_106 = NULL,z_106 = NULL,a_107 = NULL;
  y_106 = t;
  x_106 :
  if(match_cons(y_106, sym__2))
    {
      z_106 = ATgetArgument(y_106, 0);
      a_107 = ATgetArgument(y_106, 1);
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_106), not_null(a_107));
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            t = SSL_addr(not_null(z_106), not_null(a_107));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_97 (ATerm), ATerm q_97 (ATerm))
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_97(t);
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm h_107 = NULL,i_107 = NULL,j_107 = NULL;
        h_107 = t;
        g_107 :
        if(((ATgetType(h_107) == AT_LIST) && !(ATisEmpty(h_107))))
          {
            i_107 = ATgetFirst((ATermList) h_107);
            j_107 = (ATerm) ATgetNext((ATermList) h_107);
            {
              ATerm m_107 = NULL;
              ATerm n_107 = NULL;
              t = not_null(j_107);
              {
                t = foldr_2(t, p_97, q_97);
                {
                  n_107 = t;
                  if(((m_107 != NULL) && (m_107 != n_107)))
                    _fail(n_107);
                  else
                    m_107 = n_107;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_107), not_null(m_107));
                t = q_97(t);
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
ATerm crush_2 (ATerm t, ATerm t_96 (ATerm), ATerm u_96 (ATerm))
{
  ATerm u_107 = NULL;
  ATerm w_107 = NULL;
  u_107 = t;
  {
    ATerm x_107 = NULL;
    ATerm z_107 = NULL,a_108 = NULL,b_108 = NULL;
    t = not_null(u_107);
    {
      x_107 = t;
      {
        t = SSL_explode_term(not_null(x_107));
        {
          z_107 = t;
          t_107 :
          if(match_cons(z_107, sym__2))
            {
              a_108 = ATgetArgument(z_107, 0);
              b_108 = ATgetArgument(z_107, 1);
              if(((w_107 != NULL) && (w_107 != b_108)))
                _fail(b_108);
              else
                w_107 = b_108;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_107);
      t = foldr_2(t, t_96, u_96);
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
    ATerm y_4 (ATerm t)
    {
      t = term_v_19;
      return(t);
    }
    t = crush_2(t, y_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm k_108 = NULL,l_108 = NULL,m_108 = NULL;
  k_108 = t;
  j_108 :
  if(match_cons(k_108, sym__2))
    {
      l_108 = ATgetArgument(k_108, 0);
      m_108 = ATgetArgument(k_108, 1);
      {
        ATerm v_26;
        v_26 = t;
        {
          ATerm w_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(l_108), not_null(m_108));
              LocalPopChoice(x_26);
            }
          else
            {
              t = w_26;
              t = SSL_gtr(not_null(l_108), not_null(m_108));
            }
        }
        t = v_26;
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
  ATerm s_108 = NULL;
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_108 = NULL,u_108 = NULL,y_108 = NULL;
      t_108 = t;
      r_108 :
      if(match_cons(t_108, sym__2))
        {
          u_108 = ATgetArgument(t_108, 0);
          y_108 = ATgetArgument(t_108, 1);
          {
            if(((s_108 != NULL) && (s_108 != u_108)))
              _fail(u_108);
            else
              s_108 = u_108;
            if(((s_108 != NULL) && (s_108 != y_108)))
              _fail(y_108);
            else
              s_108 = y_108;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_104 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm a_27;
    a_27 = t;
    {
      ATerm b_109 = NULL;
      ATerm c_109 = NULL;
      t = term_m_22;
      {
        t = get_config_0(t);
        {
          c_109 = t;
          if(((b_109 != NULL) && (b_109 != c_109)))
            _fail(c_109);
          else
            b_109 = c_109;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_109), term_z_6);
        t = geq_0(t);
      }
    }
    t = a_27;
    t = e_104(t);
    return(t);
  }
  t = try_1(t, z_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm i_109 = NULL,k_109 = NULL;
    ATerm b_27;
    b_27 = t;
    {
      ATerm j_109 = NULL;
      t = run_time_0(t);
      {
        j_109 = t;
        if(((i_109 != NULL) && (i_109 != j_109)))
          _fail(j_109);
        else
          i_109 = j_109;
      }
    }
    t = b_27;
    {
      ATerm l_109 = NULL;
      t = term_c_27;
      {
        t = get_config_0(t);
        {
          l_109 = t;
          if(((k_109 != NULL) && (k_109 != l_109)))
            _fail(l_109);
          else
            k_109 = l_109;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), not_null(i_109)), term_d_27), not_null(k_109)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_5);
  {
    t = term_v_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_109 = NULL;
  s_109 = t;
  r_109 :
  if(match_cons(s_109, sym_Version_0))
    {
      ATerm u_109 = NULL,w_109 = NULL;
      ATerm f_27;
      f_27 = t;
      {
        ATerm v_109 = NULL;
        t = SSLgetAnnotations(not_null(s_109));
        {
          v_109 = t;
          if(((u_109 != NULL) && (u_109 != v_109)))
            _fail(v_109);
          else
            u_109 = v_109;
        }
      }
      t = f_27;
      {
        ATerm x_109 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_109));
        {
          x_109 = t;
          if(((w_109 != NULL) && (w_109 != x_109)))
            _fail(x_109);
          else
            w_109 = x_109;
        }
        t = not_null(w_109);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_102 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        {
          ATerm i_27 = t;
          int j_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_27);
            }
          else
            {
              t = i_27;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, b_5);
  t = k_102(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_110 = NULL;
  c_110 = t;
  t = SSL_table_create(not_null(c_110));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_110 = NULL;
  g_110 = t;
  {
    ATerm k_27;
    k_27 = t;
    {
      t = term_l_27;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, not_null(g_110));
          t = table_put_0(t);
        }
      }
    }
    t = k_27;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm k_110 = NULL;
  k_110 = t;
  t = SSL_table_destroy(not_null(k_110));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_110 = NULL;
  o_110 = t;
  t = SSL_exit(not_null(o_110));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_110 = NULL,t_110 = NULL,u_110 = NULL;
  s_110 = t;
  r_110 :
  if(((ATgetType(s_110) == AT_LIST) && ATisEmpty(s_110)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(s_110) == AT_LIST) && !(ATisEmpty(s_110))))
        {
          t_110 = ATgetFirst((ATermList) s_110);
          u_110 = (ATerm) ATgetNext((ATermList) s_110);
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
  ATerm n_27;
  n_27 = t;
  {
    ATerm x_110 = NULL;
    ATerm a_111 = NULL;
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        {
          ATerm y_110 = NULL;
          ATerm z_110 = NULL;
          z_110 = t;
          if(((y_110 != NULL) && (y_110 != z_110)))
            _fail(z_110);
          else
            y_110 = z_110;
          t = (ATerm) ATinsert(ATempty, not_null(y_110));
        }
      }
    {
      a_111 = t;
      if(((x_110 != NULL) && (x_110 != a_111)))
        _fail(a_111);
      else
        x_110 = a_111;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_22, not_null(x_110));
      t = printnl_0(t);
    }
  }
  t = n_27;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_80 (ATerm))
{
  ATerm d_111 (ATerm t)
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
        t = Cons_2(t, b_80, d_111);
      }
    return(t);
  }
  t = d_111(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm k_111 = NULL,l_111 = NULL,m_111 = NULL;
  m_111 = t;
  j_111 :
  if(((ATgetType(m_111) == AT_LIST) && !(ATisEmpty(m_111))))
    {
      k_111 = ATgetFirst((ATermList) m_111);
      l_111 = (ATerm) ATgetNext((ATermList) m_111);
      {
        ATerm p_111 = NULL;
        t = not_null(l_111);
        {
          ATerm s_27;
          s_27 = t;
          {
            ATerm q_111 = NULL,s_111 = NULL,u_111 = NULL;
            ATerm t_27;
            t_27 = t;
            {
              ATerm r_111 = NULL;
              t = f_0(t);
              {
                r_111 = t;
                if(((q_111 != NULL) && (q_111 != r_111)))
                  _fail(r_111);
                else
                  q_111 = r_111;
              }
            }
            t = t_27;
            {
              ATerm t_111 = NULL;
              t = not_null(k_111);
              {
                t = e_0(t);
                {
                  t_111 = t;
                  if(((s_111 != NULL) && (s_111 != t_111)))
                    _fail(t_111);
                  else
                    s_111 = t_111;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_111)), not_null(s_111));
                {
                  u_111 = t;
                  if(((p_111 != NULL) && (p_111 != u_111)))
                    _fail(u_111);
                  else
                    p_111 = u_111;
                }
              }
            }
          }
          t = s_27;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(p_111);
              return(t);
            }
            t = reverse_acc_2(t, e_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_111) == AT_LIST) && ATisEmpty(m_111)))
        {
          {
            t = term_q_15;
            t = f_0(t);
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
ATerm short_description_1 (ATerm t, ATerm h_106 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm g_112 = NULL,h_112 = NULL;
  g_112 = t;
  f_112 :
  if(match_cons(g_112, sym_Program_1))
    {
      h_112 = ATgetArgument(g_112, 0);
      {
        ATerm k_112 = NULL,m_112 = NULL;
        ATerm l_112 = NULL;
        t = SSLgetAnnotations(not_null(g_112));
        {
          l_112 = t;
          if(((k_112 != NULL) && (k_112 != l_112)))
            _fail(l_112);
          else
            k_112 = l_112;
        }
        {
          t = not_null(h_112);
          {
            ATerm o_112 = NULL;
            t = s_74(t);
            {
              m_112 = t;
              {
                ATerm p_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_112)), not_null(k_112));
                {
                  p_112 = t;
                  if(((o_112 != NULL) && (o_112 != p_112)))
                    _fail(p_112);
                  else
                    o_112 = p_112;
                }
                t = not_null(o_112);
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
  ATerm y_112 = NULL;
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_112 = NULL;
      t = term_c_27;
      {
        t = get_config_0(t);
        {
          z_112 = t;
          if(((y_112 != NULL) && (y_112 != z_112)))
            _fail(z_112);
          else
            y_112 = z_112;
        }
      }
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      {
        ATerm e_5 (ATerm t)
        {
          ATerm f_5 (ATerm t)
          {
            ATerm a_113 = NULL;
            a_113 = t;
            if(((y_112 != NULL) && (y_112 != a_113)))
              _fail(a_113);
            else
              y_112 = a_113;
            return(t);
          }
          t = Program_1(t, f_5);
          return(t);
        }
        t = option_defined_1(t, e_5);
      }
    }
  {
    ATerm g_5 (ATerm t)
    {
      ATerm h_5 (ATerm t)
      {
        t = not_null(y_112);
        return(t);
      }
      t = short_description_1(t, h_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, g_5);
    {
      t = term_w_27;
      {
        t = echo_0(t);
        {
          t = term_z_27;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm b_113 = NULL;
                  ATerm c_113 = NULL;
                  c_113 = t;
                  if(((b_113 != NULL) && (b_113 != c_113)))
                    _fail(c_113);
                  else
                    b_113 = c_113;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_113)), term_a_28);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_5);
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm d_113 = NULL;
                    ATerm e_113 = NULL;
                    ATerm k_5 (ATerm t)
                    {
                      t = not_null(y_112);
                      return(t);
                    }
                    t = long_description_1(t, k_5);
                    {
                      e_113 = t;
                      if(((d_113 != NULL) && (d_113 != e_113)))
                        _fail(e_113);
                      else
                        d_113 = e_113;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_113)), term_b_28);
                      t = echo_0(t);
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
ATerm debug_0 (ATerm t)
{
  ATerm c_28;
  c_28 = t;
  {
    ATerm k_113 = NULL;
    ATerm l_113 = NULL;
    l_113 = t;
    if(((k_113 != NULL) && (k_113 != l_113)))
      _fail(l_113);
    else
      k_113 = l_113;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, not_null(k_113)));
      t = printnl_0(t);
    }
  }
  t = c_28;
  return(t);
}
ATerm say_1 (ATerm t, ATerm j_101 (ATerm))
{
  ATerm d_28;
  d_28 = t;
  {
    t = j_101(t);
    t = debug_0(t);
  }
  t = d_28;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_74 (ATerm))
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
            t = t_74(t);
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
ATerm fetch_1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm g_114 (ATerm t)
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_80, _id);
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = Cons_2(t, _id, g_114);
      }
    return(t);
  }
  t = g_114(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm h_105 (ATerm))
{
  t = fetch_1(t, h_105);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm m_114 = NULL;
  m_114 = t;
  k_114 :
  if(match_cons(m_114, sym_Help_0))
    {
      ATerm o_114 = NULL,q_114 = NULL;
      ATerm g_28;
      g_28 = t;
      {
        ATerm p_114 = NULL;
        t = SSLgetAnnotations(not_null(m_114));
        {
          p_114 = t;
          if(((o_114 != NULL) && (o_114 != p_114)))
            _fail(p_114);
          else
            o_114 = p_114;
        }
      }
      t = g_28;
      {
        ATerm r_114 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(o_114));
        {
          r_114 = t;
          if(((q_114 != NULL) && (q_114 != r_114)))
            _fail(r_114);
          else
            q_114 = r_114;
        }
        t = not_null(q_114);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_86 (ATerm))
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_86(t);
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
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
        ATerm j_28;
        j_28 = t;
        {
          ATerm n_115 = NULL;
          ATerm o_115 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_115), not_null(i_115));
          {
            ATerm k_28 = t;
            int l_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_28);
              }
            else
              {
                t = k_28;
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
        t = j_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_106 (ATerm))
{
  ATerm s_115 = NULL;
  ATerm t_115 = NULL;
  t = term_q_15;
  {
    t = m_106(t);
    {
      t_115 = t;
      if(((s_115 != NULL) && (s_115 != t_115)))
        _fail(t_115);
      else
        s_115 = t_115;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_27, term_y_27, not_null(s_115));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL;
  a_116 = t;
  z_115 :
  if(match_string(a_116, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(a_116) == AT_LIST) && !(ATisEmpty(a_116))))
        {
          b_116 = ATgetFirst((ATermList) a_116);
          c_116 = (ATerm) ATgetNext((ATermList) a_116);
          {
            ATerm f_116 = NULL;
            ATerm m_28;
            m_28 = t;
            {
              t = not_null(b_116);
              t = a_0(t);
            }
            t = m_28;
            {
              ATerm g_116 = NULL;
              t = term_q_15;
              {
                t = c_0(t);
                {
                  g_116 = t;
                  if(((f_116 != NULL) && (f_116 != g_116)))
                    _fail(g_116);
                  else
                    f_116 = g_116;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_116)), not_null(f_116));
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
  ATerm m_5 (ATerm t)
  {
    t = term_o_28;
    {
      t = set_config_0(t);
      t = term_p_28;
    }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_q_28;
    return(t);
  }
  t = Option_3(t, l_5, m_5, n_5);
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
        t = (ATerm) ATmakeAppl(sym__3, term_a_22, not_null(x_116), not_null(y_116));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_106 (ATerm))
{
  ATerm r_28;
  r_28 = t;
  {
    ATerm p_5 (ATerm t)
    {
      t = term_s_28;
      t = k_106(t);
      return(t);
    }
    t = try_1(t, p_5);
  }
  t = r_28;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm g_117 = NULL;
      ATerm t_28;
      t_28 = t;
      {
        ATerm e_117 = NULL;
        ATerm f_117 = NULL;
        f_117 = t;
        if(((e_117 != NULL) && (e_117 != f_117)))
          _fail(f_117);
        else
          e_117 = f_117;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_27, not_null(e_117));
          t = set_config_0(t);
        }
      }
      t = t_28;
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
    ATerm r_5 (ATerm t)
    {
      ATerm u_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_28 = t;
          int x_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_28);
            }
          else
            {
              t = w_28;
              {
                t = k_106(t);
                t = Cons_2(t, _id, r_5);
              }
            }
          LocalPopChoice(v_28);
        }
      else
        {
          t = u_28;
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
  ATerm n_117 = NULL,o_117 = NULL,p_117 = NULL;
  ATerm y_28;
  y_28 = t;
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
  t = y_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_106 (ATerm))
{
  ATerm w_117 = NULL;
  ATerm z_28;
  z_28 = t;
  {
    t = term_a_29;
    t = table_put_0(t);
  }
  t = z_28;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm b_29 = t;
      int c_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_106(t);
          LocalPopChoice(c_29);
        }
      else
        {
          t = b_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_5);
    {
      ATerm t_5 (ATerm t)
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_29;
            f_29 = t;
            {
              ATerm g_29 = t;
              int h_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_n_28;
                  t = get_config_0(t);
                  LocalPopChoice(h_29);
                }
              else
                {
                  t = g_29;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = f_29;
            {
              t = system_usage_0(t);
              {
                t = term_v_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            {
              ATerm u_5 (ATerm t)
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm x_117 = NULL;
                  x_117 = t;
                  if(((w_117 != NULL) && (w_117 != x_117)))
                    _fail(x_117);
                  else
                    w_117 = x_117;
                  return(t);
                }
                t = Undefined_1(t, v_5);
                return(t);
              }
              t = option_defined_1(t, u_5);
              {
                ATerm w_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_117)), term_i_29);
                  return(t);
                }
                t = say_1(t, w_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_z_6;
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
        ATerm j_29;
        j_29 = t;
        {
          t = term_x_27;
          t = table_destroy_0(t);
        }
        t = j_29;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t_102 (ATerm))
{
  t = parse_options_1(t, q_102);
  {
    t = store_options_0(t);
    {
      t = s_102(t);
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_102);
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            {
              ATerm m_29 = t;
              int n_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_102(t);
                  t = report_success_0(t);
                  LocalPopChoice(n_29);
                }
              else
                {
                  t = m_29;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_103(t);
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, h_103);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, x_5, j_103, k_103, y_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm q_29;
      q_29 = t;
      {
        ATerm a_118 = NULL;
        ATerm b_118 = NULL;
        t = term_c_27;
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
          t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, not_null(a_118)));
          t = printnl_0(t);
        }
      }
      t = q_29;
      return(t);
    }
    t = if_verbose2_1(t, a_6);
    return(t);
  }
  t = iowrap_4(t, b_103, c_103, d_103, z_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_102 (ATerm), ATerm a_103 (ATerm))
{
  t = iowrap_3(t, z_102, a_103, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_102 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    t = _2(t, _id, w_102);
    return(t);
  }
  t = iowrap_2(t, b_6, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      ATerm e_6 (ATerm t)
      {
        ATerm f_6 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, f_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, e_6);
      return(t);
    }
    t = Specification_1(t, d_6);
    return(t);
  }
  t = iowrap_1(t, c_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
