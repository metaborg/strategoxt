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
ATerm term_e_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_g_25;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
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
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
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
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym__2, term_n_24, term_i_15);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_k_20);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_20);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_i_15);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_x_26, term_i_15);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm r_71 (ATerm), ATerm s_71 (ATerm));
ATerm SDef_3 (ATerm, ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm x_71 (ATerm));
ATerm Let_2 (ATerm, ATerm t_71 (ATerm), ATerm u_71 (ATerm));
ATerm sboundin_3 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm j_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_93 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm r_84 (ATerm), ATerm s_84 (ATerm));
ATerm alltd_1 (ATerm, ATerm x_86 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm c_84 (ATerm), ATerm d_84 (ATerm));
ATerm substitute_1 (ATerm, ATerm e_84 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm y_71 (ATerm), ATerm z_71 (ATerm));
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
ATerm As_2 (ATerm, ATerm b_74 (ATerm), ATerm c_74 (ATerm));
ATerm Prim_2 (ATerm, ATerm h_70 (ATerm), ATerm i_70 (ATerm));
ATerm Explode_2 (ATerm, ATerm x_73 (ATerm), ATerm y_73 (ATerm));
ATerm Op_2 (ATerm, ATerm l_72 (ATerm), ATerm m_72 (ATerm));
ATerm pat_td_1 (ATerm, ATerm n_80 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm v_89 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm d_95 (ATerm), ATerm e_95 (ATerm));
ATerm repeat_1 (ATerm, ATerm g_95 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm r_73 (ATerm), ATerm s_73 (ATerm));
ATerm Con_3 (ATerm, ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm p_70 (ATerm), ATerm q_70 (ATerm));
ATerm oncetd_1 (ATerm, ATerm j_86 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm t_84 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm b_89 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm f_99 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm t_89 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm b_98 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm o_89 (ATerm));
ATerm zip_1 (ATerm, ATerm q_89 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm u_95 (ATerm), ATerm v_95 (ATerm));
ATerm for_3 (ATerm, ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm z_95 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm g_110 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm i_110 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm j_98 (ATerm), ATerm k_98 (ATerm));
ATerm union_1 (ATerm, ATerm f_98 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm q_72 (ATerm));
ATerm Cons_2 (ATerm, ATerm f_70 (ATerm), ATerm g_70 (ATerm));
ATerm Specification_1 (ATerm, ATerm s_72 (ATerm));
ATerm _2 (ATerm, ATerm w_68 (ATerm), ATerm x_68 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_81 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_102 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_105 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm n_103 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_88 (ATerm), ATerm m_88 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_98 (ATerm), ATerm r_98 (ATerm));
ATerm crush_2 (ATerm, ATerm u_97 (ATerm), ATerm v_97 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_105 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_103 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm j_107 (ATerm));
ATerm map_1 (ATerm, ATerm c_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm i_107 (ATerm));
ATerm Program_1 (ATerm, ATerm t_75 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm k_102 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_81 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_106 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_87 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm n_107 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm l_107 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm k_107 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm));
ATerm iowrap_4 (ATerm, ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm));
ATerm iowrap_3 (ATerm, ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm e_104 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_104 (ATerm), ATerm b_104 (ATerm));
ATerm iowrap_1 (ATerm, ATerm x_103 (ATerm));
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
              ATerm b_0 (ATerm t)
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
              t = map_1(t, b_0);
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
                                ATerm f_0 (ATerm t)
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
                                t = fetch_1(t, f_0);
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
ATerm Rec_2 (ATerm t, ATerm r_71 (ATerm), ATerm s_71 (ATerm))
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
            t = r_71(t);
            {
              w_9 = t;
              {
                t = not_null(q_9);
                {
                  ATerm a_10 = NULL;
                  t = s_71(t);
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
ATerm SDef_3 (ATerm t, ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm x_71 (ATerm))
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
            t = v_71(t);
            {
              y_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm c_11 = NULL;
                  t = w_71(t);
                  {
                    a_11 = t;
                    {
                      t = not_null(r_10);
                      {
                        ATerm e_11 = NULL;
                        t = x_71(t);
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
ATerm Let_2 (ATerm t, ATerm t_71 (ATerm), ATerm u_71 (ATerm))
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
            t = t_71(t);
            {
              a_12 = t;
              {
                t = not_null(u_11);
                {
                  ATerm e_12 = NULL;
                  t = u_71(t);
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
ATerm sboundin_3 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm))
{
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, y_83, y_83);
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
            t = SDef_3(t, a_84, a_84, y_83);
            LocalPopChoice(f_7);
          }
        else
          {
            t = e_7;
            t = Rec_2(t, a_84, y_83);
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
ATerm crush_3 (ATerm t, ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm y_97 (ATerm))
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
      t = foldr_3(t, w_97, x_97, y_97);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm j_93 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_93 (ATerm))
{
  ATerm u_14 (ATerm t)
  {
    ATerm l_0 (ATerm t)
    {
      ATerm g_7 = t;
      int o_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_93(t);
          LocalPopChoice(o_7);
        }
      else
        {
          t = g_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm o_0 (ATerm t)
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
            t = i_93(t);
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
              t = diff_1(t, k_93);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = j_93(t, r_0, u_14, s_0);
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
    t = split_2(t, l_0, o_0);
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
ATerm SubsVar_2 (ATerm t, ATerm r_84 (ATerm), ATerm s_84 (ATerm))
{
  ATerm n_18 = NULL;
  ATerm p_18 = NULL,q_18 = NULL;
  n_18 = t;
  {
    ATerm r_18 = NULL;
    t = not_null(n_18);
    {
      ATerm s_18 = NULL;
      t = r_84(t);
      {
        r_18 = t;
        {
          if(((p_18 != NULL) && (p_18 != r_18)))
            _fail(r_18);
          else
            p_18 = r_18;
          {
            t = s_84(t);
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
ATerm alltd_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm w_18 (ATerm t)
  {
    ATerm k_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_86(t);
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
ATerm substitute_2 (ATerm t, ATerm c_84 (ATerm), ATerm d_84 (ATerm))
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
              t = SubsVar_2(t, c_84, e_1);
              t = d_84(t);
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
ATerm substitute_1 (ATerm t, ATerm e_84 (ATerm))
{
  t = substitute_2(t, e_84, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_2(t, IsSVar_0, _id);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm y_71 (ATerm), ATerm z_71 (ATerm))
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
            t = y_71(t);
            {
              n_20 = t;
              {
                t = not_null(h_20);
                {
                  ATerm r_20 = NULL;
                  t = z_71(t);
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
  v_30 :
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
                      ATerm b_32 = NULL,c_32 = NULL,y_34 = NULL;
                      b_32 = t;
                      l_30 :
                      if(match_cons(b_32, sym_Anno_2))
                        {
                          c_32 = ATgetArgument(b_32, 0);
                          y_34 = ATgetArgument(b_32, 1);
                          {
                            if(((w_31 != NULL) && (w_31 != c_32)))
                              _fail(c_32);
                            else
                              w_31 = c_32;
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
  ATerm n_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  n_36 = t;
  l_36 :
  if(match_cons(n_36, sym_Match_1))
    {
      u_36 = ATgetArgument(n_36, 0);
      m_36 :
      if(match_cons(u_36, sym_RootApp_1))
        {
          v_36 = ATgetArgument(u_36, 0);
          t = not_null(v_36);
        }
      else
        {
          if(match_cons(u_36, sym_App_2))
            {
              v_36 = ATgetArgument(u_36, 0);
              w_36 = ATgetArgument(u_36, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(v_36), not_null(w_36));
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
  ATerm i_37 = NULL,j_37 = NULL;
  i_37 = t;
  h_37 :
  if(match_cons(i_37, sym_Match_1))
    {
      j_37 = ATgetArgument(i_37, 0);
      {
        ATerm l_37 = NULL,m_37 = NULL;
        ATerm q_37 = NULL;
        t = not_null(j_37);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
            n_37 = t;
            e_37 :
            if(match_cons(n_37, sym_RootApp_1))
              {
                o_37 = ATgetArgument(n_37, 0);
                f_37 :
                if(match_cons(o_37, sym_Match_1))
                  {
                    p_37 = ATgetArgument(o_37, 0);
                    {
                      if(((l_37 != NULL) && (l_37 != p_37)))
                        _fail(p_37);
                      else
                        l_37 = p_37;
                      t = not_null(l_37);
                    }
                  }
                else
                  {
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
            q_37 = t;
            if(((m_37 != NULL) && (m_37 != q_37)))
              _fail(q_37);
            else
              m_37 = q_37;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(m_37));
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
  ATerm k_38 = NULL,l_38 = NULL;
  k_38 = t;
  j_38 :
  if(match_cons(k_38, sym_Build_1))
    {
      l_38 = ATgetArgument(k_38, 0);
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_38 = NULL,o_38 = NULL,s_38 = NULL,t_38 = NULL;
            ATerm u_38 = NULL;
            ATerm y_38 = NULL;
            t = new_0(t);
            {
              u_38 = t;
              {
                if(((s_38 != NULL) && (s_38 != u_38)))
                  _fail(u_38);
                else
                  s_38 = u_38;
                {
                  t = not_null(l_38);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
                      v_38 = t;
                      z_37 :
                      if(match_cons(v_38, sym_Anno_2))
                        {
                          w_38 = ATgetArgument(v_38, 0);
                          x_38 = ATgetArgument(v_38, 1);
                          {
                            if(((n_38 != NULL) && (n_38 != w_38)))
                              _fail(w_38);
                            else
                              n_38 = w_38;
                            {
                              if(((o_38 != NULL) && (o_38 != x_38)))
                                _fail(x_38);
                              else
                                o_38 = x_38;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_38));
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
                      y_38 = t;
                      if(((t_38 != NULL) && (t_38 != y_38)))
                        _fail(y_38);
                      else
                        t_38 = y_38;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_e_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_38)), not_null(n_38))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_38))));
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
                  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
                  ATerm o_39 = NULL;
                  ATerm r_39 = NULL;
                  t = new_0(t);
                  {
                    o_39 = t;
                    {
                      if(((b_39 != NULL) && (b_39 != o_39)))
                        _fail(o_39);
                      else
                        b_39 = o_39;
                      {
                        t = not_null(l_38);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm p_39 = NULL,q_39 = NULL;
                            p_39 = t;
                            d_38 :
                            if(match_cons(p_39, sym_RootApp_1))
                              {
                                q_39 = ATgetArgument(p_39, 0);
                                {
                                  if(((a_39 != NULL) && (a_39 != q_39)))
                                    _fail(q_39);
                                  else
                                    a_39 = q_39;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_39));
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
                            r_39 = t;
                            if(((c_39 != NULL) && (c_39 != r_39)))
                              _fail(r_39);
                            else
                              c_39 = r_39;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_39)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_39), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_39))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_39))));
                  LocalPopChoice(g_10);
                }
              else
                {
                  t = f_10;
                  {
                    ATerm u_39 = NULL,v_39 = NULL,y_39 = NULL,z_39 = NULL;
                    ATerm j_40 = NULL;
                    ATerm n_40 = NULL;
                    t = new_0(t);
                    {
                      j_40 = t;
                      {
                        if(((y_39 != NULL) && (y_39 != j_40)))
                          _fail(j_40);
                        else
                          y_39 = j_40;
                        {
                          t = not_null(l_38);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
                              k_40 = t;
                              h_38 :
                              if(match_cons(k_40, sym_App_2))
                                {
                                  l_40 = ATgetArgument(k_40, 0);
                                  m_40 = ATgetArgument(k_40, 1);
                                  {
                                    if(((u_39 != NULL) && (u_39 != l_40)))
                                      _fail(l_40);
                                    else
                                      u_39 = l_40;
                                    {
                                      if(((v_39 != NULL) && (v_39 != m_40)))
                                        _fail(m_40);
                                      else
                                        v_39 = m_40;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_39));
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
                              n_40 = t;
                              if(((z_39 != NULL) && (z_39 != n_40)))
                                _fail(n_40);
                              else
                                z_39 = n_40;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_39)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_39), not_null(v_39), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_39)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_39))));
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
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL;
  l_41 = t;
  h_41 :
  if(match_cons(l_41, sym_Build_1))
    {
      m_41 = ATgetArgument(l_41, 0);
      i_41 :
      if(match_cons(m_41, sym_RootApp_1))
        {
          n_41 = ATgetArgument(m_41, 0);
          t = not_null(n_41);
        }
      else
        {
          if(match_cons(m_41, sym_App_2))
            {
              n_41 = ATgetArgument(m_41, 0);
              o_41 = ATgetArgument(m_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_41)), not_null(n_41));
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
ATerm As_2 (ATerm t, ATerm b_74 (ATerm), ATerm c_74 (ATerm))
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  a_42 = t;
  z_41 :
  if(match_cons(a_42, sym_As_2))
    {
      b_42 = ATgetArgument(a_42, 0);
      c_42 = ATgetArgument(a_42, 1);
      {
        ATerm g_42 = NULL,i_42 = NULL;
        ATerm h_42 = NULL;
        t = SSLgetAnnotations(not_null(a_42));
        {
          h_42 = t;
          if(((g_42 != NULL) && (g_42 != h_42)))
            _fail(h_42);
          else
            g_42 = h_42;
        }
        {
          t = not_null(b_42);
          {
            ATerm k_42 = NULL;
            t = b_74(t);
            {
              i_42 = t;
              {
                t = not_null(c_42);
                {
                  ATerm m_42 = NULL;
                  t = c_74(t);
                  {
                    k_42 = t;
                    {
                      ATerm n_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(i_42), not_null(k_42)), not_null(g_42));
                      {
                        n_42 = t;
                        if(((m_42 != NULL) && (m_42 != n_42)))
                          _fail(n_42);
                        else
                          m_42 = n_42;
                      }
                      t = not_null(m_42);
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
ATerm Prim_2 (ATerm t, ATerm h_70 (ATerm), ATerm i_70 (ATerm))
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
  z_42 = t;
  y_42 :
  if(match_cons(z_42, sym_Prim_2))
    {
      a_43 = ATgetArgument(z_42, 0);
      b_43 = ATgetArgument(z_42, 1);
      {
        ATerm j_43 = NULL,l_43 = NULL;
        ATerm k_43 = NULL;
        t = SSLgetAnnotations(not_null(z_42));
        {
          k_43 = t;
          if(((j_43 != NULL) && (j_43 != k_43)))
            _fail(k_43);
          else
            j_43 = k_43;
        }
        {
          t = not_null(a_43);
          {
            ATerm n_43 = NULL;
            t = h_70(t);
            {
              l_43 = t;
              {
                t = not_null(b_43);
                {
                  ATerm x_43 = NULL;
                  t = i_70(t);
                  {
                    n_43 = t;
                    {
                      ATerm y_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(l_43), not_null(n_43)), not_null(j_43));
                      {
                        y_43 = t;
                        if(((x_43 != NULL) && (x_43 != y_43)))
                          _fail(y_43);
                        else
                          x_43 = y_43;
                      }
                      t = not_null(x_43);
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
ATerm Explode_2 (ATerm t, ATerm x_73 (ATerm), ATerm y_73 (ATerm))
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  k_44 = t;
  j_44 :
  if(match_cons(k_44, sym_Explode_2))
    {
      l_44 = ATgetArgument(k_44, 0);
      m_44 = ATgetArgument(k_44, 1);
      {
        ATerm q_44 = NULL,w_44 = NULL;
        ATerm r_44 = NULL;
        t = SSLgetAnnotations(not_null(k_44));
        {
          r_44 = t;
          if(((q_44 != NULL) && (q_44 != r_44)))
            _fail(r_44);
          else
            q_44 = r_44;
        }
        {
          t = not_null(l_44);
          {
            ATerm y_44 = NULL;
            t = x_73(t);
            {
              w_44 = t;
              {
                t = not_null(m_44);
                {
                  ATerm a_45 = NULL;
                  t = y_73(t);
                  {
                    y_44 = t;
                    {
                      ATerm b_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(w_44), not_null(y_44)), not_null(q_44));
                      {
                        b_45 = t;
                        if(((a_45 != NULL) && (a_45 != b_45)))
                          _fail(b_45);
                        else
                          a_45 = b_45;
                      }
                      t = not_null(a_45);
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
ATerm Op_2 (ATerm t, ATerm l_72 (ATerm), ATerm m_72 (ATerm))
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  m_45 :
  if(match_cons(n_45, sym_Op_2))
    {
      o_45 = ATgetArgument(n_45, 0);
      p_45 = ATgetArgument(n_45, 1);
      {
        ATerm t_45 = NULL,v_45 = NULL;
        ATerm u_45 = NULL;
        t = SSLgetAnnotations(not_null(n_45));
        {
          u_45 = t;
          if(((t_45 != NULL) && (t_45 != u_45)))
            _fail(u_45);
          else
            t_45 = u_45;
        }
        {
          t = not_null(o_45);
          {
            ATerm x_45 = NULL;
            t = l_72(t);
            {
              v_45 = t;
              {
                t = not_null(p_45);
                {
                  ATerm z_45 = NULL;
                  t = m_72(t);
                  {
                    x_45 = t;
                    {
                      ATerm a_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(v_45), not_null(x_45)), not_null(t_45));
                      {
                        a_46 = t;
                        if(((z_45 != NULL) && (z_45 != a_46)))
                          _fail(a_46);
                        else
                          z_45 = a_46;
                      }
                      t = not_null(z_45);
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
ATerm pat_td_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_80(t);
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
                t = pat_td_1(t, n_80);
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
                    t = pat_td_1(t, n_80);
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
                          t = pat_td_1(t, n_80);
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
                                  t = pat_td_1(t, n_80);
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
                                  t = pat_td_1(t, n_80);
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
  ATerm s_46 = NULL,t_46 = NULL;
  s_46 = t;
  q_46 :
  if(match_cons(s_46, sym_Build_1))
    {
      t_46 = ATgetArgument(s_46, 0);
      {
        ATerm z_10 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_46 = NULL,w_46 = NULL;
            ATerm a_47 = NULL;
            t = not_null(t_46);
            {
              ATerm z_1 (ATerm t)
              {
                ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
                x_46 = t;
                j_46 :
                if(match_cons(x_46, sym_RootApp_1))
                  {
                    y_46 = ATgetArgument(x_46, 0);
                    k_46 :
                    if(match_cons(y_46, sym_Build_1))
                      {
                        z_46 = ATgetArgument(y_46, 0);
                        {
                          if(((v_46 != NULL) && (v_46 != z_46)))
                            _fail(z_46);
                          else
                            v_46 = z_46;
                          t = not_null(v_46);
                        }
                      }
                    else
                      {
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
                a_47 = t;
                if(((w_46 != NULL) && (w_46 != a_47)))
                  _fail(a_47);
                else
                  w_46 = a_47;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(w_46));
            LocalPopChoice(b_11);
          }
        else
          {
            t = z_10;
            {
              ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
              ATerm j_47 = NULL;
              t = not_null(t_46);
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
                  f_47 = t;
                  n_46 :
                  if(match_cons(f_47, sym_App_2))
                    {
                      g_47 = ATgetArgument(f_47, 0);
                      i_47 = ATgetArgument(f_47, 1);
                      o_46 :
                      if(match_cons(g_47, sym_Build_1))
                        {
                          h_47 = ATgetArgument(g_47, 0);
                          {
                            if(((d_47 != NULL) && (d_47 != h_47)))
                              _fail(h_47);
                            else
                              d_47 = h_47;
                            {
                              if(((c_47 != NULL) && (c_47 != i_47)))
                                _fail(i_47);
                              else
                                c_47 = i_47;
                              t = not_null(d_47);
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
                  j_47 = t;
                  if(((e_47 != NULL) && (e_47 != j_47)))
                    _fail(j_47);
                  else
                    e_47 = j_47;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_47));
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
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  d_48 :
  if(match_cons(k_48, sym_Lets_2))
    {
      l_48 = ATgetArgument(k_48, 0);
      m_48 = ATgetArgument(k_48, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_48), not_null(m_48));
    }
  else
    {
      if(match_cons(k_48, sym_LChoices_1))
        {
          l_48 = ATgetArgument(k_48, 0);
          e_48 :
          if(((ATgetType(l_48) == AT_LIST) && !(ATisEmpty(l_48))))
            {
              h_48 = ATgetFirst((ATermList) l_48);
              i_48 = (ATerm) ATgetNext((ATermList) l_48);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_48), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(i_48)));
            }
          else
            {
              if(((ATgetType(l_48) == AT_LIST) && ATisEmpty(l_48)))
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
          if(match_cons(k_48, sym_Choices_1))
            {
              l_48 = ATgetArgument(k_48, 0);
              f_48 :
              if(((ATgetType(l_48) == AT_LIST) && !(ATisEmpty(l_48))))
                {
                  h_48 = ATgetFirst((ATermList) l_48);
                  i_48 = (ATerm) ATgetNext((ATermList) l_48);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_48), (ATerm) ATmakeAppl(sym_Choices_1, not_null(i_48)));
                }
              else
                {
                  if(((ATgetType(l_48) == AT_LIST) && ATisEmpty(l_48)))
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
              if(match_cons(k_48, sym_Seqs_1))
                {
                  l_48 = ATgetArgument(k_48, 0);
                  g_48 :
                  if(((ATgetType(l_48) == AT_LIST) && !(ATisEmpty(l_48))))
                    {
                      h_48 = ATgetFirst((ATermList) l_48);
                      i_48 = (ATerm) ATgetNext((ATermList) l_48);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_48), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_48)));
                    }
                  else
                    {
                      if(((ATgetType(l_48) == AT_LIST) && ATisEmpty(l_48)))
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
                  if(match_cons(k_48, sym_DefaultVarDec_1))
                    {
                      l_48 = ATgetArgument(k_48, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(l_48), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_11), term_m_11));
                    }
                  else
                    {
                      if(match_cons(k_48, sym_InfixApp_3))
                        {
                          l_48 = ATgetArgument(k_48, 0);
                          m_48 = ATgetArgument(k_48, 1);
                          j_48 = ATgetArgument(k_48, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(m_48), (ATerm) ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_48)), not_null(l_48))));
                        }
                      else
                        {
                          if(match_cons(k_48, sym_BAM_3))
                            {
                              l_48 = ATgetArgument(k_48, 0);
                              m_48 = ATgetArgument(k_48, 1);
                              j_48 = ATgetArgument(k_48, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(j_48))), not_null(l_48)), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_48))));
                            }
                          else
                            {
                              if(match_cons(k_48, sym_AM_2))
                                {
                                  l_48 = ATgetArgument(k_48, 0);
                                  m_48 = ATgetArgument(k_48, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_48), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_48)));
                                }
                              else
                                {
                                  if(match_cons(k_48, sym_MA_2))
                                    {
                                      l_48 = ATgetArgument(k_48, 0);
                                      m_48 = ATgetArgument(k_48, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_48)), not_null(m_48));
                                    }
                                  else
                                    {
                                      if(match_cons(k_48, sym_BA_2))
                                        {
                                          l_48 = ATgetArgument(k_48, 0);
                                          m_48 = ATgetArgument(k_48, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_48)), not_null(l_48));
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
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL;
  z_49 = t;
  w_49 :
  if(match_cons(z_49, sym__2))
    {
      a_50 = ATgetArgument(z_49, 0);
      d_50 = ATgetArgument(z_49, 1);
      x_49 :
      if(match_cons(a_50, sym__2))
        {
          b_50 = ATgetArgument(a_50, 0);
          c_50 = ATgetArgument(a_50, 1);
          y_49 :
          if(match_cons(d_50, sym__2))
            {
              e_50 = ATgetArgument(d_50, 0);
              f_50 = ATgetArgument(d_50, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_50)), not_null(b_50)), (ATerm) ATinsert(CheckATermList(not_null(f_50)), not_null(c_50)));
            }
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
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  m_50 :
  if(((ATgetType(n_50) == AT_LIST) && !(ATisEmpty(n_50))))
    {
      o_50 = ATgetFirst((ATermList) n_50);
      p_50 = (ATerm) ATgetNext((ATermList) n_50);
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_50), not_null(p_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm v_50 = NULL;
  v_50 = t;
  u_50 :
  if(((ATgetType(v_50) == AT_LIST) && ATisEmpty(v_50)))
    {
      t = term_n_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm v_89 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, v_89);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  ATerm k_51 (ATerm t)
  {
    ATerm e_51 = NULL;
    ATerm i_51 = NULL;
    t = not_null(b_51);
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
          i_51 = t;
          if(((e_51 != NULL) && (e_51 != i_51)))
            _fail(i_51);
          else
            e_51 = i_51;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(e_51)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_51)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_51))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_51))));
    return(t);
  }
  ATerm l_51 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_j_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_51))));
    return(t);
  }
  b_51 = t;
  a_51 :
  if(match_cons(b_51, sym_Var_1))
    {
      c_51 = ATgetArgument(b_51, 0);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_51(t);
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            t = l_51(t);
          }
      }
    }
  else
    {
      t = k_51(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm c_52 = NULL,g_52 = NULL;
  c_52 = t;
  b_52 :
  if(match_cons(c_52, sym_Var_1))
    {
      g_52 = ATgetArgument(c_52, 0);
      {
        ATerm v_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_52 = NULL,l_52 = NULL;
            ATerm k_52 = NULL;
            t = SSLgetAnnotations(not_null(c_52));
            {
              k_52 = t;
              if(((j_52 != NULL) && (j_52 != k_52)))
                _fail(k_52);
              else
                j_52 = k_52;
            }
            {
              t = not_null(g_52);
              {
                ATerm r_52 = NULL;
                t = q_0(t);
                {
                  l_52 = t;
                  {
                    ATerm s_52 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_52)), not_null(j_52));
                    {
                      s_52 = t;
                      if(((r_52 != NULL) && (r_52 != s_52)))
                        _fail(s_52);
                      else
                        r_52 = s_52;
                    }
                    t = not_null(r_52);
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
              ATerm v_52 = NULL,x_52 = NULL;
              ATerm w_52 = NULL;
              t = SSLgetAnnotations(not_null(c_52));
              {
                w_52 = t;
                if(((v_52 != NULL) && (v_52 != w_52)))
                  _fail(w_52);
                else
                  v_52 = w_52;
              }
              {
                t = not_null(g_52);
                {
                  ATerm z_52 = NULL;
                  t = q_0(t);
                  {
                    x_52 = t;
                    {
                      ATerm h_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_52)), not_null(v_52));
                      {
                        h_53 = t;
                        if(((z_52 != NULL) && (z_52 != h_53)))
                          _fail(h_53);
                        else
                          z_52 = h_53;
                      }
                      t = not_null(z_52);
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
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
  v_53 = t;
  u_53 :
  if(match_cons(v_53, sym_Prim_2))
    {
      w_53 = ATgetArgument(v_53, 0);
      x_53 = ATgetArgument(v_53, 1);
      {
        ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
        ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
        t = not_null(x_53);
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
            t = not_null(x_53);
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
                  d_54 = t;
                  s_53 :
                  if(match_cons(d_54, sym__2))
                    {
                      e_54 = ATgetArgument(d_54, 0);
                      f_54 = ATgetArgument(d_54, 1);
                      t_53 :
                      if(match_cons(f_54, sym__2))
                        {
                          g_54 = ATgetArgument(f_54, 0);
                          h_54 = ATgetArgument(f_54, 1);
                          {
                            if(((a_54 != NULL) && (a_54 != e_54)))
                              _fail(e_54);
                            else
                              a_54 = e_54;
                            {
                              if(((b_54 != NULL) && (b_54 != g_54)))
                                _fail(g_54);
                              else
                                b_54 = g_54;
                              if(((c_54 != NULL) && (c_54 != h_54)))
                                _fail(h_54);
                              else
                                c_54 = h_54;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(b_54)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(w_53), not_null(c_54))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm d_95 (ATerm), ATerm e_95 (ATerm))
{
  ATerm k_54 (ATerm t)
  {
    ATerm b_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_95(t);
        t = k_54(t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = b_12;
        t = e_95(t);
      }
    return(t);
  }
  t = k_54(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm g_95 (ATerm))
{
  t = repeat_2(t, g_95, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm p_54 = NULL;
  p_54 = t;
  o_54 :
  if(match_cons(p_54, sym_Wld_0))
    {
      ATerm r_54 = NULL,t_54 = NULL;
      ATerm g_12;
      g_12 = t;
      {
        ATerm s_54 = NULL;
        t = SSLgetAnnotations(not_null(p_54));
        {
          s_54 = t;
          if(((r_54 != NULL) && (r_54 != s_54)))
            _fail(s_54);
          else
            r_54 = s_54;
        }
      }
      t = g_12;
      {
        ATerm u_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(r_54));
        {
          u_54 = t;
          if(((t_54 != NULL) && (t_54 != u_54)))
            _fail(u_54);
          else
            t_54 = u_54;
        }
        t = not_null(t_54);
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
ATerm App_2 (ATerm t, ATerm r_73 (ATerm), ATerm s_73 (ATerm))
{
  ATerm e_55 = NULL,g_55 = NULL,h_55 = NULL;
  e_55 = t;
  d_55 :
  if(match_cons(e_55, sym_App_2))
    {
      g_55 = ATgetArgument(e_55, 0);
      h_55 = ATgetArgument(e_55, 1);
      {
        ATerm n_55 = NULL,p_55 = NULL;
        ATerm o_55 = NULL;
        t = SSLgetAnnotations(not_null(e_55));
        {
          o_55 = t;
          if(((n_55 != NULL) && (n_55 != o_55)))
            _fail(o_55);
          else
            n_55 = o_55;
        }
        {
          t = not_null(g_55);
          {
            ATerm t_55 = NULL;
            t = r_73(t);
            {
              p_55 = t;
              {
                t = not_null(h_55);
                {
                  ATerm v_55 = NULL;
                  t = s_73(t);
                  {
                    t_55 = t;
                    {
                      ATerm w_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(p_55), not_null(t_55)), not_null(n_55));
                      {
                        w_55 = t;
                        if(((v_55 != NULL) && (v_55 != w_55)))
                          _fail(w_55);
                        else
                          v_55 = w_55;
                      }
                      t = not_null(v_55);
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
ATerm Con_3 (ATerm t, ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm))
{
  ATerm j_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL;
  j_56 = t;
  i_56 :
  if(match_cons(j_56, sym_Con_3))
    {
      m_56 = ATgetArgument(j_56, 0);
      n_56 = ATgetArgument(j_56, 1);
      o_56 = ATgetArgument(j_56, 2);
      {
        ATerm u_56 = NULL,w_56 = NULL;
        ATerm v_56 = NULL;
        t = SSLgetAnnotations(not_null(j_56));
        {
          v_56 = t;
          if(((u_56 != NULL) && (u_56 != v_56)))
            _fail(v_56);
          else
            u_56 = v_56;
        }
        {
          t = not_null(m_56);
          {
            ATerm y_56 = NULL;
            t = o_73(t);
            {
              w_56 = t;
              {
                t = not_null(n_56);
                {
                  ATerm a_57 = NULL;
                  t = p_73(t);
                  {
                    y_56 = t;
                    {
                      t = not_null(o_56);
                      {
                        ATerm c_57 = NULL;
                        t = q_73(t);
                        {
                          a_57 = t;
                          {
                            ATerm d_57 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(w_56), not_null(y_56), not_null(a_57)), not_null(u_56));
                            {
                              d_57 = t;
                              if(((c_57 != NULL) && (c_57 != d_57)))
                                _fail(d_57);
                              else
                                c_57 = d_57;
                            }
                            t = not_null(c_57);
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
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL;
  w_57 = t;
  t_57 :
  if(match_cons(w_57, sym_SRule_1))
    {
      x_57 = ATgetArgument(w_57, 0);
      v_57 :
      if(match_cons(x_57, sym_StratRule_3))
        {
          y_57 = ATgetArgument(x_57, 0);
          z_57 = ATgetArgument(x_57, 1);
          a_58 = ATgetArgument(x_57, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_57)), (ATerm) ATmakeAppl(sym_Where_1, not_null(a_58))), not_null(y_57)));
        }
      else
        {
          if(match_cons(x_57, sym_Rule_3))
            {
              y_57 = ATgetArgument(x_57, 0);
              z_57 = ATgetArgument(x_57, 1);
              a_58 = ATgetArgument(x_57, 2);
              {
                t = not_null(y_57);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(z_57);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(z_57))), (ATerm) ATmakeAppl(sym_Where_1, not_null(a_58))), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_57))));
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
ATerm Scope_2 (ATerm t, ATerm p_70 (ATerm), ATerm q_70 (ATerm))
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
  p_58 = t;
  o_58 :
  if(match_cons(p_58, sym_Scope_2))
    {
      q_58 = ATgetArgument(p_58, 0);
      r_58 = ATgetArgument(p_58, 1);
      {
        ATerm v_58 = NULL,x_58 = NULL;
        ATerm w_58 = NULL;
        t = SSLgetAnnotations(not_null(p_58));
        {
          w_58 = t;
          if(((v_58 != NULL) && (v_58 != w_58)))
            _fail(w_58);
          else
            v_58 = w_58;
        }
        {
          t = not_null(q_58);
          {
            ATerm z_58 = NULL;
            t = p_70(t);
            {
              x_58 = t;
              {
                t = not_null(r_58);
                {
                  ATerm b_59 = NULL;
                  t = q_70(t);
                  {
                    z_58 = t;
                    {
                      ATerm c_59 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(x_58), not_null(z_58)), not_null(v_58));
                      {
                        c_59 = t;
                        if(((b_59 != NULL) && (b_59 != c_59)))
                          _fail(c_59);
                        else
                          b_59 = c_59;
                      }
                      t = not_null(b_59);
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
ATerm oncetd_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm i_59 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_86(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = _one(t, i_59);
      }
    return(t);
  }
  t = i_59(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL;
  x_59 = t;
  v_59 :
  if(match_cons(x_59, sym_SRule_1))
    {
      y_59 = ATgetArgument(x_59, 0);
      w_59 :
      if(match_cons(y_59, sym_Rule_3))
        {
          z_59 = ATgetArgument(y_59, 0);
          a_60 = ATgetArgument(y_59, 1);
          b_60 = ATgetArgument(y_59, 2);
          {
            ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
            ATerm u_60 = NULL;
            ATerm c_61 = NULL;
            t = new_0(t);
            {
              u_60 = t;
              {
                if(((r_60 != NULL) && (r_60 != u_60)))
                  _fail(u_60);
                else
                  r_60 = u_60;
                {
                  t = not_null(z_59);
                  {
                    ATerm u_61 = NULL;
                    ATerm f_2 (ATerm t)
                    {
                      ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
                      x_60 = t;
                      m_59 :
                      if(match_cons(x_60, sym_Con_3))
                        {
                          y_60 = ATgetArgument(x_60, 0);
                          a_61 = ATgetArgument(x_60, 1);
                          b_61 = ATgetArgument(x_60, 2);
                          n_59 :
                          if(match_cons(y_60, sym_Var_1))
                            {
                              z_60 = ATgetArgument(y_60, 0);
                              {
                                if(((j_60 != NULL) && (j_60 != z_60)))
                                  _fail(z_60);
                                else
                                  j_60 = z_60;
                                {
                                  if(((h_60 != NULL) && (h_60 != a_61)))
                                    _fail(a_61);
                                  else
                                    h_60 = a_61;
                                  {
                                    if(((f_60 != NULL) && (f_60 != b_61)))
                                      _fail(b_61);
                                    else
                                      f_60 = b_61;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_60));
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
                      c_61 = t;
                      {
                        if(((s_60 != NULL) && (s_60 != c_61)))
                          _fail(c_61);
                        else
                          s_60 = c_61;
                        {
                          t = not_null(a_60);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm d_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
                              d_61 = t;
                              q_59 :
                              if(match_cons(d_61, sym_Con_3))
                                {
                                  o_61 = ATgetArgument(d_61, 0);
                                  q_61 = ATgetArgument(d_61, 1);
                                  r_61 = ATgetArgument(d_61, 2);
                                  r_59 :
                                  if(match_cons(o_61, sym_Var_1))
                                    {
                                      p_61 = ATgetArgument(o_61, 0);
                                      s_59 :
                                      if(match_cons(r_61, sym_Call_2))
                                        {
                                          s_61 = ATgetArgument(r_61, 0);
                                          t_61 = ATgetArgument(r_61, 1);
                                          t_59 :
                                          if(((ATgetType(t_61) == AT_LIST) && ATisEmpty(t_61)))
                                            {
                                              {
                                                if(((j_60 != NULL) && (j_60 != p_61)))
                                                  _fail(p_61);
                                                else
                                                  j_60 = p_61;
                                                {
                                                  if(((i_60 != NULL) && (i_60 != q_61)))
                                                    _fail(q_61);
                                                  else
                                                    i_60 = q_61;
                                                  {
                                                    if(((g_60 != NULL) && (g_60 != s_61)))
                                                      _fail(s_61);
                                                    else
                                                      g_60 = s_61;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_60));
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
                              u_61 = t;
                              if(((t_60 != NULL) && (t_60 != u_61)))
                                _fail(u_61);
                              else
                                t_60 = u_61;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_60), not_null(t_60), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_60), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(g_60), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_60), not_null(i_60), term_j_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_60)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_60)))))));
          }
        }
      else
        {
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
ATerm topdown_1 (ATerm t, ATerm t_84 (ATerm))
{
  t = t_84(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, t_84);
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
  ATerm k_62 = NULL;
  k_62 = t;
  j_62 :
  if(match_cons(k_62, sym__0))
    {
      ATerm m_62 = NULL,o_62 = NULL;
      ATerm b_14;
      b_14 = t;
      {
        ATerm n_62 = NULL;
        t = SSLgetAnnotations(not_null(k_62));
        {
          n_62 = t;
          if(((m_62 != NULL) && (m_62 != n_62)))
            _fail(n_62);
          else
            m_62 = n_62;
        }
      }
      t = b_14;
      {
        ATerm p_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(m_62));
        {
          p_62 = t;
          if(((o_62 != NULL) && (o_62 != p_62)))
            _fail(p_62);
          else
            o_62 = p_62;
        }
        t = not_null(o_62);
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
  ATerm c_63 = NULL;
  ATerm e_63 = NULL,f_63 = NULL,n_63 = NULL,p_63 = NULL;
  c_63 = t;
  {
    ATerm c_14;
    c_14 = t;
    {
      ATerm g_63 = NULL;
      ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL;
      t = not_null(c_63);
      {
        g_63 = t;
        {
          t = SSL_explode_term(not_null(g_63));
          {
            i_63 = t;
            x_62 :
            if(match_cons(i_63, sym__2))
              {
                j_63 = ATgetArgument(i_63, 0);
                k_63 = ATgetArgument(i_63, 1);
                y_62 :
                if(match_string(j_63, ""))
                  {
                    z_62 :
                    if(((ATgetType(k_63) == AT_LIST) && !(ATisEmpty(k_63))))
                      {
                        l_63 = ATgetFirst((ATermList) k_63);
                        m_63 = (ATerm) ATgetNext((ATermList) k_63);
                        {
                          if(((e_63 != NULL) && (e_63 != l_63)))
                            _fail(l_63);
                          else
                            e_63 = l_63;
                          if(((f_63 != NULL) && (f_63 != m_63)))
                            _fail(m_63);
                          else
                            f_63 = m_63;
                        }
                      }
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
        ATerm o_63 = NULL;
        t = term_i_9;
        {
          o_63 = t;
          if(((n_63 != NULL) && (n_63 != o_63)))
            _fail(o_63);
          else
            n_63 = o_63;
        }
      }
      t = d_14;
      {
        t = SSL_mkterm(not_null(n_63), not_null(f_63));
        {
          p_63 = t;
          t = not_null(p_63);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm h_64 = NULL;
  ATerm j_64 = NULL,k_64 = NULL;
  h_64 = t;
  {
    ATerm l_64 = NULL;
    ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
    t = not_null(h_64);
    {
      l_64 = t;
      {
        t = SSL_explode_term(not_null(l_64));
        {
          n_64 = t;
          e_64 :
          if(match_cons(n_64, sym__2))
            {
              o_64 = ATgetArgument(n_64, 0);
              p_64 = ATgetArgument(n_64, 1);
              f_64 :
              if(match_string(o_64, ""))
                {
                  g_64 :
                  if(((ATgetType(p_64) == AT_LIST) && !(ATisEmpty(p_64))))
                    {
                      q_64 = ATgetFirst((ATermList) p_64);
                      r_64 = (ATerm) ATgetNext((ATermList) p_64);
                      {
                        if(((k_64 != NULL) && (k_64 != q_64)))
                          _fail(q_64);
                        else
                          k_64 = q_64;
                        if(((j_64 != NULL) && (j_64 != r_64)))
                          _fail(r_64);
                        else
                          j_64 = r_64;
                      }
                    }
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
    t = not_null(k_64);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm b_89 (ATerm))
{
  ATerm l_65 = NULL,n_65 = NULL,p_65 = NULL;
  ATerm r_65 (ATerm t)
  {
    ATerm e_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_65 = NULL,c_65 = NULL;
        ATerm k_14;
        k_14 = t;
        {
          ATerm b_65 = NULL;
          t = map_1(t, Fst_0);
          {
            t = b_89(t);
            {
              b_65 = t;
              if(((a_65 != NULL) && (a_65 != b_65)))
                _fail(b_65);
              else
                a_65 = b_65;
            }
          }
        }
        t = k_14;
        {
          ATerm k_65 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = r_65(t);
            {
              k_65 = t;
              if(((c_65 != NULL) && (c_65 != k_65)))
                _fail(k_65);
              else
                c_65 = k_65;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(c_65)), not_null(a_65));
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
  t = r_65(t);
  {
    ATerm o_14;
    o_14 = t;
    {
      ATerm m_65 = NULL;
      m_65 = t;
      if(((l_65 != NULL) && (l_65 != m_65)))
        _fail(m_65);
      else
        l_65 = m_65;
    }
    t = o_14;
    {
      ATerm p_14;
      p_14 = t;
      {
        ATerm o_65 = NULL;
        t = term_i_9;
        {
          o_65 = t;
          if(((n_65 != NULL) && (n_65 != o_65)))
            _fail(o_65);
          else
            n_65 = o_65;
        }
      }
      t = p_14;
      {
        t = SSL_mkterm(not_null(n_65), not_null(l_65));
        {
          p_65 = t;
          t = not_null(p_65);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm b_66 = NULL;
  ATerm d_66 = NULL,e_66 = NULL,f_66 = NULL;
  b_66 = t;
  {
    ATerm g_66 = NULL;
    ATerm h_66 = NULL;
    t = new_0(t);
    {
      g_66 = t;
      {
        if(((d_66 != NULL) && (d_66 != g_66)))
          _fail(g_66);
        else
          d_66 = g_66;
        {
          ATerm i_66 = NULL;
          t = new_0(t);
          {
            h_66 = t;
            {
              if(((e_66 != NULL) && (e_66 != h_66)))
                _fail(h_66);
              else
                e_66 = h_66;
              {
                t = new_0(t);
                {
                  i_66 = t;
                  if(((f_66 != NULL) && (f_66 != i_66)))
                    _fail(i_66);
                  else
                    f_66 = i_66;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_66)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_66)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_66)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_66))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_66), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_11), term_m_11)), not_null(e_66), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_66)), not_null(f_66), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_66)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,e_67 = NULL;
  z_66 = t;
  y_66 :
  if(match_cons(z_66, sym__2))
    {
      a_67 = ATgetArgument(z_66, 0);
      e_67 = ATgetArgument(z_66, 1);
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(a_67), not_null(e_67));
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            t = SSL_subtr(not_null(a_67), not_null(e_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm f_99 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm l_68 = NULL,r_68 = NULL,s_68 = NULL;
    l_68 = t;
    j_67 :
    if(match_cons(l_68, sym__2))
      {
        r_68 = ATgetArgument(l_68, 0);
        s_68 = ATgetArgument(l_68, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(r_68), not_null(s_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL;
    y_68 = t;
    l_67 :
    if(match_cons(y_68, sym__3))
      {
        z_68 = ATgetArgument(y_68, 0);
        a_69 = ATgetArgument(y_68, 1);
        b_69 = ATgetArgument(y_68, 2);
        m_67 :
        if(match_int(z_68, 0))
          {
            t = not_null(b_69);
          }
        else
          {
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
    ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL;
    e_69 = t;
    k_68 :
    if(match_cons(e_69, sym__3))
      {
        f_69 = ATgetArgument(e_69, 0);
        g_69 = ATgetArgument(e_69, 1);
        h_69 = ATgetArgument(e_69, 2);
        {
          ATerm l_69 = NULL,n_69 = NULL;
          ATerm v_14;
          v_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_69), term_j_6);
            t = geq_0(t);
          }
          t = v_14;
          {
            ATerm w_14;
            w_14 = t;
            {
              ATerm m_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_69), term_j_6);
              {
                t = subt_0(t);
                {
                  m_69 = t;
                  if(((l_69 != NULL) && (l_69 != m_69)))
                    _fail(m_69);
                  else
                    l_69 = m_69;
                }
              }
            }
            t = w_14;
            {
              ATerm o_69 = NULL;
              t = not_null(g_69);
              {
                t = f_99(t);
                {
                  o_69 = t;
                  if(((n_69 != NULL) && (n_69 != o_69)))
                    _fail(o_69);
                  else
                    n_69 = o_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(l_69), not_null(g_69), (ATerm) ATinsert(CheckATermList(not_null(h_69)), not_null(n_69)));
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
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
  z_69 = t;
  y_69 :
  if(match_cons(z_69, sym__2))
    {
      a_70 = ATgetArgument(z_69, 0);
      b_70 = ATgetArgument(z_69, 1);
      {
        ATerm e_70 = NULL,j_70 = NULL,k_70 = NULL;
        ATerm l_70 = NULL;
        ATerm m_70 = NULL;
        t = new_0(t);
        {
          l_70 = t;
          {
            if(((e_70 != NULL) && (e_70 != l_70)))
              _fail(l_70);
            else
              e_70 = l_70;
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
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(e_70)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_70))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_70)))), (ATerm) ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_70))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_70))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(e_70), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_11), term_m_11)), not_null(j_70), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_70)), not_null(k_70), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_70)));
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
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
  x_70 = t;
  v_70 :
  if(match_cons(x_70, sym__2))
    {
      y_70 = ATgetArgument(x_70, 0);
      z_70 = ATgetArgument(x_70, 1);
      w_70 :
      if(((ATgetType(z_70) == AT_LIST) && ATisEmpty(z_70)))
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
ATerm zipr_1 (ATerm t, ATerm t_89 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, t_89);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL;
  d_71 = t;
  c_71 :
  if(((ATgetType(d_71) == AT_LIST) && !(ATisEmpty(d_71))))
    {
      e_71 = ATgetFirst((ATermList) d_71);
      f_71 = (ATerm) ATgetNext((ATermList) d_71);
      t = not_null(f_71);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
  l_71 = t;
  j_71 :
  if(((ATgetType(l_71) == AT_LIST) && !(ATisEmpty(l_71))))
    {
      m_71 = ATgetFirst((ATermList) l_71);
      n_71 = (ATerm) ATgetNext((ATermList) l_71);
      k_71 :
      if(((ATgetType(n_71) == AT_LIST) && ATisEmpty(n_71)))
        {
          t = not_null(m_71);
        }
      else
        {
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
  ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL;
  ATerm f_75 (ATerm t)
  {
    ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,h_74 = NULL;
    ATerm h_15;
    h_15 = t;
    {
      ATerm l_73 = NULL,n_73 = NULL,t_73 = NULL,u_73 = NULL;
      ATerm m_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), term_j_6);
      {
        t = add_0(t);
        {
          m_73 = t;
          if(((l_73 != NULL) && (l_73 != m_73)))
            _fail(m_73);
          else
            l_73 = m_73;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_73), term_i_15);
        {
          t = copy_1(t, new_0);
          {
            n_73 = t;
            i_72 :
            if(((ATgetType(n_73) == AT_LIST) && !(ATisEmpty(n_73))))
              {
                t_73 = ATgetFirst((ATermList) n_73);
                u_73 = (ATerm) ATgetNext((ATermList) n_73);
                {
                  ATerm v_73 = NULL;
                  if(((d_73 != NULL) && (d_73 != t_73)))
                    _fail(t_73);
                  else
                    d_73 = t_73;
                  {
                    if(((e_73 != NULL) && (e_73 != u_73)))
                      _fail(u_73);
                    else
                      e_73 = u_73;
                    {
                      t = not_null(e_73);
                      {
                        ATerm w_73 = NULL,z_73 = NULL,a_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL;
                        t = last_0(t);
                        {
                          v_73 = t;
                          {
                            if(((c_73 != NULL) && (c_73 != v_73)))
                              _fail(v_73);
                            else
                              c_73 = v_73;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_73)), not_null(d_73)), not_null(e_73));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    w_73 = t;
                                    h_72 :
                                    if(match_cons(w_73, sym__6))
                                      {
                                        z_73 = ATgetArgument(w_73, 0);
                                        a_74 = ATgetArgument(w_73, 1);
                                        d_74 = ATgetArgument(w_73, 2);
                                        e_74 = ATgetArgument(w_73, 3);
                                        f_74 = ATgetArgument(w_73, 4);
                                        g_74 = ATgetArgument(w_73, 5);
                                        {
                                          if(((f_73 != NULL) && (f_73 != z_73)))
                                            _fail(z_73);
                                          else
                                            f_73 = z_73;
                                          {
                                            if(((g_73 != NULL) && (g_73 != a_74)))
                                              _fail(a_74);
                                            else
                                              g_73 = a_74;
                                            {
                                              if(((h_73 != NULL) && (h_73 != d_74)))
                                                _fail(d_74);
                                              else
                                                h_73 = d_74;
                                              {
                                                if(((i_73 != NULL) && (i_73 != e_74)))
                                                  _fail(e_74);
                                                else
                                                  i_73 = e_74;
                                                {
                                                  if(((j_73 != NULL) && (j_73 != f_74)))
                                                    _fail(f_74);
                                                  else
                                                    j_73 = f_74;
                                                  if(((k_73 != NULL) && (k_73 != g_74)))
                                                    _fail(g_74);
                                                  else
                                                    k_73 = g_74;
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
      ATerm i_74 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_73)), not_null(h_73)), not_null(e_73));
      {
        t = concat_0(t);
        {
          i_74 = t;
          if(((h_74 != NULL) && (h_74 != i_74)))
            _fail(i_74);
          else
            h_74 = i_74;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_72), term_q_15), not_null(g_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(h_74)), not_null(d_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_72), not_null(i_73)))), (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_72), not_null(k_73)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(f_73))))));
    }
    return(t);
  }
  ATerm g_75 (ATerm t)
  {
    ATerm k_74 = NULL;
    ATerm l_74 = NULL;
    t = new_0(t);
    {
      l_74 = t;
      if(((k_74 != NULL) && (k_74 != l_74)))
        _fail(l_74);
      else
        k_74 = l_74;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_72), term_q_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_74)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_72), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_72), (ATerm) ATempty))), term_j_11))));
    return(t);
  }
  ATerm h_75 (ATerm t)
  {
    ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL,d_75 = NULL;
    ATerm r_15;
    r_15 = t;
    {
      ATerm v_74 = NULL;
      ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL;
      t = new_0(t);
      {
        v_74 = t;
        {
          if(((o_74 != NULL) && (o_74 != v_74)))
            _fail(v_74);
          else
            o_74 = v_74;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_74)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  w_74 = t;
                  p_72 :
                  if(match_cons(w_74, sym__6))
                    {
                      x_74 = ATgetArgument(w_74, 0);
                      y_74 = ATgetArgument(w_74, 1);
                      z_74 = ATgetArgument(w_74, 2);
                      a_75 = ATgetArgument(w_74, 3);
                      b_75 = ATgetArgument(w_74, 4);
                      c_75 = ATgetArgument(w_74, 5);
                      {
                        if(((p_74 != NULL) && (p_74 != x_74)))
                          _fail(x_74);
                        else
                          p_74 = x_74;
                        {
                          if(((q_74 != NULL) && (q_74 != y_74)))
                            _fail(y_74);
                          else
                            q_74 = y_74;
                          {
                            if(((r_74 != NULL) && (r_74 != z_74)))
                              _fail(z_74);
                            else
                              r_74 = z_74;
                            {
                              if(((s_74 != NULL) && (s_74 != a_75)))
                                _fail(a_75);
                              else
                                s_74 = a_75;
                              {
                                if(((t_74 != NULL) && (t_74 != b_75)))
                                  _fail(b_75);
                                else
                                  t_74 = b_75;
                                if(((u_74 != NULL) && (u_74 != c_75)))
                                  _fail(c_75);
                                else
                                  u_74 = c_75;
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
      ATerm e_75 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_74), not_null(t_74));
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
          e_75 = t;
          if(((d_75 != NULL) && (d_75 != e_75)))
            _fail(e_75);
          else
            d_75 = e_75;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_72), term_u_15), not_null(q_74), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(d_75)), not_null(o_74)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_i_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_72), not_null(s_74)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(x_72), not_null(u_74)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_74))))));
    }
    return(t);
  }
  w_72 = t;
  t_72 :
  if(match_cons(w_72, sym__3))
    {
      x_72 = ATgetArgument(w_72, 0);
      y_72 = ATgetArgument(w_72, 1);
      z_72 = ATgetArgument(w_72, 2);
      u_72 :
      if(match_string(y_72, "T"))
        {
          v_72 :
          if(match_int(z_72, 0))
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_75(t);
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = v_15;
                  t = g_75(t);
                }
            }
          else
            {
              t = f_75(t);
            }
        }
      else
        {
          if(match_string(y_72, "D"))
            {
              t = h_75(t);
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
  ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL;
  y_75 = t;
  v_75 :
  if(match_cons(y_75, sym__2))
    {
      z_75 = ATgetArgument(y_75, 0);
      e_76 = ATgetArgument(y_75, 1);
      w_75 :
      if(match_cons(z_75, sym__2))
        {
          a_76 = ATgetArgument(z_75, 0);
          d_76 = ATgetArgument(z_75, 1);
          x_75 :
          if(match_cons(a_76, sym_Mod_2))
            {
              b_76 = ATgetArgument(a_76, 0);
              c_76 = ATgetArgument(a_76, 1);
              {
                ATerm j_76 = NULL;
                ATerm k_76 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(b_76), not_null(c_76), not_null(d_76));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      k_76 = t;
                      if(((j_76 != NULL) && (j_76 != k_76)))
                        _fail(k_76);
                      else
                        j_76 = k_76;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_76), not_null(e_76));
              }
            }
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
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL;
  q_76 = t;
  o_76 :
  if(match_cons(q_76, sym__5))
    {
      r_76 = ATgetArgument(q_76, 0);
      u_76 = ATgetArgument(q_76, 1);
      v_76 = ATgetArgument(q_76, 2);
      w_76 = ATgetArgument(q_76, 3);
      x_76 = ATgetArgument(q_76, 4);
      p_76 :
      if(((ATgetType(r_76) == AT_LIST) && !(ATisEmpty(r_76))))
        {
          s_76 = ATgetFirst((ATermList) r_76);
          t_76 = (ATerm) ATgetNext((ATermList) r_76);
          t = (ATerm) ATmakeAppl(sym__5, not_null(t_76), not_null(u_76), not_null(v_76), not_null(w_76), (ATerm) ATinsert(CheckATermList(not_null(x_76)), not_null(s_76)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm b_98 (ATerm))
{
  ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
  h_77 = t;
  g_77 :
  if(match_cons(h_77, sym__2))
    {
      i_77 = ATgetArgument(h_77, 0);
      j_77 = ATgetArgument(h_77, 1);
      {
        t = not_null(i_77);
        {
          ATerm n_77 (ATerm t)
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
                        t = not_null(j_77);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_98, o_2);
                      t = n_77(t);
                      LocalPopChoice(y_16);
                    }
                  else
                    {
                      t = t_16;
                      t = Cons_2(t, _id, n_77);
                    }
                }
              }
            return(t);
          }
          t = n_77(t);
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
  ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL;
  r_77 = t;
  p_77 :
  if(match_cons(r_77, sym__2))
    {
      s_77 = ATgetArgument(r_77, 0);
      t_77 = ATgetArgument(r_77, 1);
      q_77 :
      if(((ATgetType(t_77) == AT_LIST) && !(ATisEmpty(t_77))))
        {
          u_77 = ATgetFirst((ATermList) t_77);
          v_77 = (ATerm) ATgetNext((ATermList) t_77);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_77)), not_null(u_77)), not_null(v_77));
        }
      else
        {
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
  ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL;
  c_78 = t;
  b_78 :
  if(match_cons(c_78, sym__2))
    {
      d_78 = ATgetArgument(c_78, 0);
      e_78 = ATgetArgument(c_78, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_78)), not_null(d_78));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL;
  m_78 = t;
  j_78 :
  if(match_cons(m_78, sym__2))
    {
      n_78 = ATgetArgument(m_78, 0);
      q_78 = ATgetArgument(m_78, 1);
      k_78 :
      if(((ATgetType(n_78) == AT_LIST) && !(ATisEmpty(n_78))))
        {
          o_78 = ATgetFirst((ATermList) n_78);
          p_78 = (ATerm) ATgetNext((ATermList) n_78);
          l_78 :
          if(((ATgetType(q_78) == AT_LIST) && !(ATisEmpty(q_78))))
            {
              r_78 = ATgetFirst((ATermList) q_78);
              s_78 = (ATerm) ATgetNext((ATermList) q_78);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(o_78), not_null(r_78)), (ATerm) ATmakeAppl(sym__2, not_null(p_78), not_null(s_78)));
            }
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
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL;
  c_79 = t;
  z_78 :
  if(match_cons(c_79, sym__2))
    {
      d_79 = ATgetArgument(c_79, 0);
      e_79 = ATgetArgument(c_79, 1);
      a_79 :
      if(((ATgetType(d_79) == AT_LIST) && ATisEmpty(d_79)))
        {
          b_79 :
          if(((ATgetType(e_79) == AT_LIST) && ATisEmpty(e_79)))
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
ATerm genzip_4 (ATerm t, ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm n_89 (ATerm), ATerm o_89 (ATerm))
{
  ATerm g_79 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_89(t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        {
          t = m_89(t);
          {
            t = _2(t, o_89, g_79);
            t = n_89(t);
          }
        }
      }
    return(t);
  }
  t = g_79(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm q_89 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, q_89);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL;
  r_79 = t;
  p_79 :
  if(((ATgetType(r_79) == AT_LIST) && !(ATisEmpty(r_79))))
    {
      s_79 = ATgetFirst((ATermList) r_79);
      v_79 = (ATerm) ATgetNext((ATermList) r_79);
      q_79 :
      if(match_cons(s_79, sym__2))
        {
          t_79 = ATgetArgument(s_79, 0);
          u_79 = ATgetArgument(s_79, 1);
          {
            ATerm z_79 = NULL,a_80 = NULL,g_80 = NULL,o_80 = NULL;
            ATerm i_17;
            i_17 = t;
            {
              ATerm b_80 = NULL;
              ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL;
              t = not_null(u_79);
              {
                b_80 = t;
                {
                  t = SSL_explode_term(not_null(b_80));
                  {
                    d_80 = t;
                    k_79 :
                    if(match_cons(d_80, sym__2))
                      {
                        e_80 = ATgetArgument(d_80, 0);
                        f_80 = ATgetArgument(d_80, 1);
                        {
                          if(((z_79 != NULL) && (z_79 != e_80)))
                            _fail(e_80);
                          else
                            z_79 = e_80;
                          if(((a_80 != NULL) && (a_80 != f_80)))
                            _fail(f_80);
                          else
                            a_80 = f_80;
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
                ATerm h_80 = NULL;
                ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL;
                t = not_null(t_79);
                {
                  h_80 = t;
                  {
                    t = SSL_explode_term(not_null(h_80));
                    {
                      j_80 = t;
                      n_79 :
                      if(match_cons(j_80, sym__2))
                        {
                          k_80 = ATgetArgument(j_80, 0);
                          l_80 = ATgetArgument(j_80, 1);
                          {
                            if(((z_79 != NULL) && (z_79 != k_80)))
                              _fail(k_80);
                            else
                              z_79 = k_80;
                            if(((g_80 != NULL) && (g_80 != l_80)))
                              _fail(l_80);
                            else
                              g_80 = l_80;
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
                ATerm p_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_80), not_null(a_80));
                {
                  t = zip_1(t, _id);
                  {
                    p_80 = t;
                    if(((o_80 != NULL) && (o_80 != p_80)))
                      _fail(p_80);
                    else
                      o_80 = p_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_80), not_null(v_79));
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
  ATerm z_80 = NULL,b_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL;
  z_80 = t;
  x_80 :
  if(((ATgetType(z_80) == AT_LIST) && !(ATisEmpty(z_80))))
    {
      b_81 = ATgetFirst((ATermList) z_80);
      g_81 = (ATerm) ATgetNext((ATermList) z_80);
      y_80 :
      if(match_cons(b_81, sym__2))
        {
          e_81 = ATgetArgument(b_81, 0);
          f_81 = ATgetArgument(b_81, 1);
          {
            ATerm i_81 = NULL;
            if(((e_81 != NULL) && (e_81 != f_81)))
              _fail(f_81);
            else
              e_81 = f_81;
            {
              if(((i_81 != NULL) && (i_81 != g_81)))
                _fail(g_81);
              else
                i_81 = g_81;
              t = not_null(i_81);
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
        ATerm n_81 = NULL;
        n_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(n_81));
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm))
{
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL;
  c_82 = t;
  a_82 :
  if(match_cons(c_82, sym__5))
    {
      d_82 = ATgetArgument(c_82, 0);
      g_82 = ATgetArgument(c_82, 1);
      h_82 = ATgetArgument(c_82, 2);
      i_82 = ATgetArgument(c_82, 3);
      j_82 = ATgetArgument(c_82, 4);
      b_82 :
      if(((ATgetType(d_82) == AT_LIST) && !(ATisEmpty(d_82))))
        {
          e_82 = ATgetFirst((ATermList) d_82);
          f_82 = (ATerm) ATgetNext((ATermList) d_82);
          {
            ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL,z_82 = NULL,b_83 = NULL,d_83 = NULL;
            ATerm k_18;
            k_18 = t;
            {
              ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_82), not_null(h_82));
              {
                t = x_109(t);
                {
                  u_82 = t;
                  w_81 :
                  if(match_cons(u_82, sym__2))
                    {
                      v_82 = ATgetArgument(u_82, 0);
                      w_82 = ATgetArgument(u_82, 1);
                      {
                        ATerm x_82 = NULL;
                        if(((r_82 != NULL) && (r_82 != v_82)))
                          _fail(v_82);
                        else
                          r_82 = v_82;
                        {
                          if(((q_82 != NULL) && (q_82 != w_82)))
                            _fail(w_82);
                          else
                            q_82 = w_82;
                          {
                            t = not_null(r_82);
                            {
                              ATerm y_82 = NULL;
                              t = y_109(t);
                              {
                                x_82 = t;
                                {
                                  if(((s_82 != NULL) && (s_82 != x_82)))
                                    _fail(x_82);
                                  else
                                    s_82 = x_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_82), not_null(g_82));
                                    {
                                      t = diff_0(t);
                                      {
                                        y_82 = t;
                                        if(((t_82 != NULL) && (t_82 != y_82)))
                                          _fail(y_82);
                                        else
                                          t_82 = y_82;
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
                ATerm a_83 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_82), not_null(f_82));
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
                    a_83 = t;
                    if(((z_82 != NULL) && (z_82 != a_83)))
                      _fail(a_83);
                    else
                      z_82 = a_83;
                  }
                }
              }
              t = l_18;
              {
                ATerm t_18;
                t_18 = t;
                {
                  ATerm c_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_82), not_null(g_82));
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
                      c_83 = t;
                      if(((b_83 != NULL) && (b_83 != c_83)))
                        _fail(c_83);
                      else
                        b_83 = c_83;
                    }
                  }
                }
                t = t_18;
                {
                  ATerm e_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(e_82), not_null(r_82), not_null(i_82));
                  {
                    t = z_109(t);
                    {
                      e_83 = t;
                      if(((d_83 != NULL) && (d_83 != e_83)))
                        _fail(e_83);
                      else
                        d_83 = e_83;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(z_82), not_null(b_83), not_null(q_82), not_null(d_83), not_null(j_82));
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
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL;
  p_83 = t;
  n_83 :
  if(match_cons(p_83, sym__5))
    {
      q_83 = ATgetArgument(p_83, 0);
      r_83 = ATgetArgument(p_83, 1);
      s_83 = ATgetArgument(p_83, 2);
      t_83 = ATgetArgument(p_83, 3);
      u_83 = ATgetArgument(p_83, 4);
      o_83 :
      if(((ATgetType(q_83) == AT_LIST) && ATisEmpty(q_83)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_83), not_null(u_83));
        }
      else
        {
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
  ATerm i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL;
  i_84 = t;
  h_84 :
  if(match_cons(i_84, sym__3))
    {
      j_84 = ATgetArgument(i_84, 0);
      k_84 = ATgetArgument(i_84, 1);
      l_84 = ATgetArgument(i_84, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(j_84), not_null(j_84), not_null(k_84), not_null(l_84), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm u_95 (ATerm), ATerm v_95 (ATerm))
{
  ATerm q_84 (ATerm t)
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_95(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        {
          t = v_95(t);
          t = q_84(t);
        }
      }
    return(t);
  }
  t = q_84(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm z_95 (ATerm))
{
  t = x_95(t);
  t = while_not_2(t, y_95, z_95);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm z_18 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, i_109, j_109, k_109);
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
    ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL;
    w_84 = t;
    v_84 :
    if(match_cons(w_84, sym__3))
      {
        x_84 = ATgetArgument(w_84, 0);
        y_84 = ATgetArgument(w_84, 1);
        z_84 = ATgetArgument(w_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(z_84)), not_null(y_84));
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
ATerm assert_1 (ATerm t, ATerm g_110 (ATerm))
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
        ATerm l_19;
        l_19 = t;
        {
          ATerm q_85 = NULL;
          ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
          t = g_110(t);
          {
            q_85 = t;
            {
              if(((n_85 != NULL) && (n_85 != q_85)))
                _fail(q_85);
              else
                n_85 = q_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(n_85), not_null(j_85), not_null(k_85));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_19 = t;
                    int p_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_85), term_q_19);
                        t = table_get_0(t);
                        LocalPopChoice(p_19);
                      }
                    else
                      {
                        t = o_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      r_85 = t;
                      g_85 :
                      if(((ATgetType(r_85) == AT_LIST) && !(ATisEmpty(r_85))))
                        {
                          s_85 = ATgetFirst((ATermList) r_85);
                          t_85 = (ATerm) ATgetNext((ATermList) r_85);
                          {
                            if(((o_85 != NULL) && (o_85 != s_85)))
                              _fail(s_85);
                            else
                              o_85 = s_85;
                            {
                              if(((p_85 != NULL) && (p_85 != t_85)))
                                _fail(t_85);
                              else
                                p_85 = t_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(n_85), term_q_19, (ATerm) ATinsert(CheckATermList(not_null(p_85)), (ATerm) ATinsert(CheckATermList(not_null(o_85)), not_null(j_85))));
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
  ATerm b_86 = NULL;
  ATerm e_86 = NULL;
  b_86 = t;
  {
    ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL;
    t = not_null(b_86);
    {
      ATerm x_2 (ATerm t)
      {
        t = term_r_19;
        return(t);
      }
      t = rewrite_1(t, x_2);
      {
        f_86 = t;
        z_85 :
        if(match_cons(f_86, sym_Defined_2))
          {
            g_86 = ATgetArgument(f_86, 0);
            h_86 = ATgetArgument(f_86, 1);
            a_86 :
            if(match_string(g_86, "e_0"))
              {
                if(((e_86 != NULL) && (e_86 != h_86)))
                  _fail(h_86);
                else
                  e_86 = h_86;
              }
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
    t = not_null(e_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL;
  o_86 = t;
  n_86 :
  if(((ATgetType(o_86) == AT_LIST) && !(ATisEmpty(o_86))))
    {
      p_86 = ATgetFirst((ATermList) o_86);
      q_86 = (ATerm) ATgetNext((ATermList) o_86);
      t = not_null(p_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL,z_86 = NULL;
  v_86 = t;
  u_86 :
  if(match_cons(v_86, sym__2))
    {
      w_86 = ATgetArgument(v_86, 0);
      z_86 = ATgetArgument(v_86, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_86), not_null(z_86));
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
ATerm rewrite_1 (ATerm t, ATerm i_110 (ATerm))
{
  ATerm f_87 = NULL;
  ATerm h_87 = NULL;
  f_87 = t;
  {
    ATerm i_87 = NULL;
    t = term_i_15;
    {
      t = i_110(t);
      {
        i_87 = t;
        if(((h_87 != NULL) && (h_87 != i_87)))
          _fail(i_87);
        else
          h_87 = i_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_87), not_null(f_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL;
  q_87 = t;
  p_87 :
  if(match_cons(q_87, sym__2))
    {
      r_87 = ATgetArgument(q_87, 0);
      s_87 = ATgetArgument(q_87, 1);
      {
        ATerm w_87 = NULL,y_87 = NULL;
        ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL;
        t = not_null(q_87);
        {
          ATerm y_2 (ATerm t)
          {
            t = term_w_19;
            return(t);
          }
          t = rewrite_1(t, y_2);
          {
            z_87 = t;
            n_87 :
            if(match_cons(z_87, sym_Defined_3))
              {
                a_88 = ATgetArgument(z_87, 0);
                b_88 = ATgetArgument(z_87, 1);
                c_88 = ATgetArgument(z_87, 2);
                o_87 :
                if(match_string(a_88, "c_0"))
                  {
                    if(((w_87 != NULL) && (w_87 != b_88)))
                      _fail(b_88);
                    else
                      w_87 = b_88;
                    if(((y_87 != NULL) && (y_87 != c_88)))
                      _fail(c_88);
                    else
                      y_87 = c_88;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(y_87)), not_null(w_87));
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
    ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL;
    n_88 = t;
    k_88 :
    if(match_cons(n_88, sym_SDef_3))
      {
        o_88 = ATgetArgument(n_88, 0);
        p_88 = ATgetArgument(n_88, 1);
        q_88 = ATgetArgument(n_88, 2);
        {
          ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL;
          ATerm x_19;
          x_19 = t;
          {
            ATerm y_88 = NULL;
            t = not_null(p_88);
            {
              ATerm z_88 = NULL;
              t = length_0(t);
              {
                y_88 = t;
                {
                  if(((w_88 != NULL) && (w_88 != y_88)))
                    _fail(y_88);
                  else
                    w_88 = y_88;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_88), not_null(w_88));
                    {
                      ATerm a_89 = NULL,e_89 = NULL;
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
                        z_88 = t;
                        {
                          if(((v_88 != NULL) && (v_88 != z_88)))
                            _fail(z_88);
                          else
                            v_88 = z_88;
                          {
                            ATerm d_89 = NULL;
                            t = not_null(o_88);
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
                                d_89 = t;
                                if(((a_89 != NULL) && (a_89 != d_89)))
                                  _fail(d_89);
                                else
                                  a_89 = d_89;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(w_88)), not_null(a_89));
                              {
                                t = union_1(t, eq_0);
                                {
                                  e_89 = t;
                                  {
                                    if(((x_88 != NULL) && (x_88 != e_89)))
                                      _fail(e_89);
                                    else
                                      x_88 = e_89;
                                    {
                                      ATerm c_20;
                                      c_20 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(o_88), not_null(w_88)), (ATerm) ATmakeAppl(sym_Defined_3, term_d_20, not_null(n_88), not_null(v_88)));
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
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_88), (ATerm) ATmakeAppl(sym_Defined_2, term_j_20, not_null(x_88)));
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
  ATerm s_89 = NULL,u_89 = NULL,w_89 = NULL;
  s_89 = t;
  r_89 :
  if(match_cons(s_89, sym__2))
    {
      u_89 = ATgetArgument(s_89, 0);
      w_89 = ATgetArgument(s_89, 1);
      if(((u_89 != NULL) && (u_89 != w_89)))
        _fail(w_89);
      else
        u_89 = w_89;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm j_98 (ATerm), ATerm k_98 (ATerm))
{
  ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL;
  c_90 = t;
  b_90 :
  if(((ATgetType(c_90) == AT_LIST) && !(ATisEmpty(c_90))))
    {
      d_90 = ATgetFirst((ATermList) c_90);
      e_90 = (ATerm) ATgetNext((ATermList) c_90);
      {
        t = k_98(t);
        {
          ATerm e_3 (ATerm t)
          {
            ATerm h_90 = NULL;
            h_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_90), not_null(h_90));
              t = j_98(t);
            }
            return(t);
          }
          t = fetch_1(t, e_3);
        }
        t = not_null(e_90);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm f_98 (ATerm))
{
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
  n_90 = t;
  m_90 :
  if(match_cons(n_90, sym__2))
    {
      o_90 = ATgetArgument(n_90, 0);
      p_90 = ATgetArgument(n_90, 1);
      {
        t = not_null(o_90);
        {
          ATerm t_90 (ATerm t)
          {
            ATerm o_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_90);
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
                        t = not_null(p_90);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_98, f_3);
                      t = t_90(t);
                      LocalPopChoice(u_20);
                    }
                  else
                    {
                      t = t_20;
                      t = Cons_2(t, _id, t_90);
                    }
                }
              }
            return(t);
          }
          t = t_90(t);
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
ATerm foldr_3 (ATerm t, ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm u_98 (ATerm))
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_98(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
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
              ATerm x_20;
              x_20 = t;
              {
                ATerm f_91 = NULL;
                t = not_null(a_91);
                {
                  t = u_98(t);
                  {
                    f_91 = t;
                    if(((e_91 != NULL) && (e_91 != f_91)))
                      _fail(f_91);
                    else
                      e_91 = f_91;
                  }
                }
              }
              t = x_20;
              {
                ATerm h_91 = NULL;
                t = not_null(b_91);
                {
                  t = foldr_3(t, s_98, t_98, u_98);
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
                  t = t_98(t);
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
  t = foldr_3(t, g_3, j_3, k_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm a_92 = NULL,c_92 = NULL;
  ATerm y_20;
  y_20 = t;
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
  t = y_20;
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
ATerm Strategies_1 (ATerm t, ATerm q_72 (ATerm))
{
  ATerm l_92 = NULL,m_92 = NULL;
  l_92 = t;
  k_92 :
  if(match_cons(l_92, sym_Strategies_1))
    {
      m_92 = ATgetArgument(l_92, 0);
      {
        ATerm p_92 = NULL,r_92 = NULL;
        ATerm q_92 = NULL;
        t = SSLgetAnnotations(not_null(l_92));
        {
          q_92 = t;
          if(((p_92 != NULL) && (p_92 != q_92)))
            _fail(q_92);
          else
            p_92 = q_92;
        }
        {
          t = not_null(m_92);
          {
            ATerm t_92 = NULL;
            t = q_72(t);
            {
              r_92 = t;
              {
                ATerm u_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(r_92)), not_null(p_92));
                {
                  u_92 = t;
                  if(((t_92 != NULL) && (t_92 != u_92)))
                    _fail(u_92);
                  else
                    t_92 = u_92;
                }
                t = not_null(t_92);
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
ATerm Cons_2 (ATerm t, ATerm f_70 (ATerm), ATerm g_70 (ATerm))
{
  ATerm f_93 = NULL,g_93 = NULL,m_93 = NULL;
  f_93 = t;
  e_93 :
  if(((ATgetType(f_93) == AT_LIST) && !(ATisEmpty(f_93))))
    {
      g_93 = ATgetFirst((ATermList) f_93);
      m_93 = (ATerm) ATgetNext((ATermList) f_93);
      {
        ATerm q_93 = NULL,s_93 = NULL;
        ATerm r_93 = NULL;
        t = SSLgetAnnotations(not_null(f_93));
        {
          r_93 = t;
          if(((q_93 != NULL) && (q_93 != r_93)))
            _fail(r_93);
          else
            q_93 = r_93;
        }
        {
          t = not_null(g_93);
          {
            ATerm u_93 = NULL;
            t = f_70(t);
            {
              s_93 = t;
              {
                t = not_null(m_93);
                {
                  ATerm w_93 = NULL;
                  t = g_70(t);
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
ATerm Specification_1 (ATerm t, ATerm s_72 (ATerm))
{
  ATerm i_94 = NULL,j_94 = NULL;
  i_94 = t;
  h_94 :
  if(match_cons(i_94, sym_Specification_1))
    {
      j_94 = ATgetArgument(i_94, 0);
      {
        ATerm m_94 = NULL,o_94 = NULL;
        ATerm n_94 = NULL;
        t = SSLgetAnnotations(not_null(i_94));
        {
          n_94 = t;
          if(((m_94 != NULL) && (m_94 != n_94)))
            _fail(n_94);
          else
            m_94 = n_94;
        }
        {
          t = not_null(j_94);
          {
            ATerm q_94 = NULL;
            t = s_72(t);
            {
              o_94 = t;
              {
                ATerm r_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(o_94)), not_null(m_94));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm w_68 (ATerm), ATerm x_68 (ATerm))
{
  ATerm c_95 = NULL,h_95 = NULL,i_95 = NULL;
  c_95 = t;
  b_95 :
  if(match_cons(c_95, sym__2))
    {
      h_95 = ATgetArgument(c_95, 0);
      i_95 = ATgetArgument(c_95, 1);
      {
        ATerm m_95 = NULL,o_95 = NULL;
        ATerm n_95 = NULL;
        t = SSLgetAnnotations(not_null(c_95));
        {
          n_95 = t;
          if(((m_95 != NULL) && (m_95 != n_95)))
            _fail(n_95);
          else
            m_95 = n_95;
        }
        {
          t = not_null(h_95);
          {
            ATerm q_95 = NULL;
            t = w_68(t);
            {
              o_95 = t;
              {
                t = not_null(i_95);
                {
                  ATerm s_95 = NULL;
                  t = x_68(t);
                  {
                    q_95 = t;
                    {
                      ATerm t_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_95), not_null(q_95)), not_null(m_95));
                      {
                        t_95 = t;
                        if(((s_95 != NULL) && (s_95 != t_95)))
                          _fail(t_95);
                        else
                          s_95 = t_95;
                      }
                      t = not_null(s_95);
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
  ATerm z_20;
  z_20 = t;
  {
    ATerm l_3 (ATerm t)
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
    t = fetch_1(t, l_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_21), not_null(h_96)), term_a_21));
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
  ATerm n_96 = NULL,o_96 = NULL,p_96 = NULL;
  n_96 = t;
  m_96 :
  if(match_cons(n_96, sym__2))
    {
      o_96 = ATgetArgument(n_96, 0);
      p_96 = ATgetArgument(n_96, 1);
      {
        ATerm d_21;
        d_21 = t;
        t = SSL_printnl(not_null(o_96), not_null(p_96));
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
  ATerm u_96 = NULL;
  u_96 = t;
  t = SSL_implode_string(not_null(u_96));
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
        ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL;
        z_96 = t;
        y_96 :
        if(((ATgetType(z_96) == AT_LIST) && !(ATisEmpty(z_96))))
          {
            a_97 = ATgetFirst((ATermList) z_96);
            b_97 = (ATerm) ATgetNext((ATermList) z_96);
            {
              t = not_null(a_97);
              {
                ATerm m_3 (ATerm t)
                {
                  t = not_null(b_97);
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
  ATerm l_97 = NULL;
  ATerm n_97 = NULL;
  l_97 = t;
  {
    ATerm o_97 = NULL;
    ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL;
    t = not_null(l_97);
    {
      o_97 = t;
      {
        t = SSL_explode_term(not_null(o_97));
        {
          q_97 = t;
          j_97 :
          if(match_cons(q_97, sym__2))
            {
              r_97 = ATgetArgument(q_97, 0);
              s_97 = ATgetArgument(q_97, 1);
              k_97 :
              if(match_string(r_97, ""))
                {
                  if(((n_97 != NULL) && (n_97 != s_97)))
                    _fail(s_97);
                  else
                    n_97 = s_97;
                }
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
      t = not_null(n_97);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_81 (ATerm))
{
  ATerm d_98 (ATerm t)
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_98);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        {
          t = Nil_0(t);
          t = r_81(t);
        }
      }
    return(t);
  }
  t = d_98(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm i_98 = NULL,l_98 = NULL,m_98 = NULL;
  i_98 = t;
  h_98 :
  if(match_cons(i_98, sym__2))
    {
      l_98 = ATgetArgument(i_98, 0);
      m_98 = ATgetArgument(i_98, 1);
      {
        t = not_null(l_98);
        {
          ATerm n_3 (ATerm t)
          {
            t = not_null(m_98);
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
  ATerm w_98 = NULL;
  w_98 = t;
  t = SSL_explode_string(not_null(w_98));
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
ATerm debug_1 (ATerm t, ATerm j_102 (ATerm))
{
  ATerm d_22;
  d_22 = t;
  {
    ATerm b_99 = NULL,d_99 = NULL;
    ATerm e_22;
    e_22 = t;
    {
      ATerm c_99 = NULL;
      t = j_102(t);
      {
        c_99 = t;
        if(((b_99 != NULL) && (b_99 != c_99)))
          _fail(c_99);
        else
          b_99 = c_99;
      }
    }
    t = e_22;
    {
      ATerm g_99 = NULL;
      g_99 = t;
      if(((d_99 != NULL) && (d_99 != g_99)))
        _fail(g_99);
      else
        d_99 = g_99;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_99)), not_null(b_99)));
        t = printnl_0(t);
      }
    }
  }
  t = d_22;
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
                      if(match_cons(t_99, sym_Prefix_2))
                        {
                          u_99 = ATgetArgument(t_99, 0);
                          v_99 = ATgetArgument(t_99, 1);
                          {
                            ATerm a_100 = NULL,c_100 = NULL;
                            ATerm b_23;
                            b_23 = t;
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
                            t = b_23;
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
    t = (ATerm) ATmakeAppl(sym__2, term_c_23, not_null(l_100));
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
                ATerm n_100 = NULL;
                ATerm o_100 = NULL;
                o_100 = t;
                if(((n_100 != NULL) && (n_100 != o_100)))
                  _fail(o_100);
                else
                  n_100 = o_100;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_c_23, not_null(l_100), not_null(n_100));
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
ATerm if_verbose2_1 (ATerm t, ATerm g_105 (ATerm))
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_23;
      n_23 = t;
      {
        ATerm s_100 = NULL;
        ATerm t_100 = NULL;
        t = term_v_23;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_100), term_w_23);
          t = geq_0(t);
        }
      }
      t = n_23;
      t = g_105(t);
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
          t = fetch_1(t, r_3);
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          {
            ATerm s_101 = NULL;
            t = term_c_24;
            {
              s_101 = t;
              if(((p_101 != NULL) && (p_101 != s_101)))
                _fail(s_101);
              else
                p_101 = s_101;
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
        t = not_null(p_101);
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
              ATerm t_101 = NULL;
              t_101 = t;
              o_101 :
              if(!(match_cons(t_101, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm n_103 (ATerm))
{
  ATerm z_101 = NULL,b_102 = NULL,c_102 = NULL,d_102 = NULL;
  ATerm f_24;
  f_24 = t;
  t = dtime_0(t);
  t = f_24;
  {
    t = n_103(t);
    {
      ATerm g_24;
      g_24 = t;
      {
        ATerm a_102 = NULL;
        t = dtime_0(t);
        {
          a_102 = t;
          if(((z_101 != NULL) && (z_101 != a_102)))
            _fail(a_102);
          else
            z_101 = a_102;
        }
      }
      t = g_24;
      {
        b_102 = t;
        y_101 :
        if(match_cons(b_102, sym__2))
          {
            c_102 = ATgetArgument(b_102, 0);
            d_102 = ATgetArgument(b_102, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_102)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_101))), not_null(d_102));
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
  ATerm l_102 = NULL;
  l_102 = t;
  t = SSL_ReadFromFile(not_null(l_102));
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_88 (ATerm), ATerm m_88 (ATerm))
{
  ATerm q_102 = NULL,s_102 = NULL;
  ATerm h_24;
  h_24 = t;
  {
    ATerm r_102 = NULL;
    t = l_88(t);
    {
      r_102 = t;
      if(((q_102 != NULL) && (q_102 != r_102)))
        _fail(r_102);
      else
        q_102 = r_102;
    }
  }
  t = h_24;
  {
    ATerm t_102 = NULL;
    t = m_88(t);
    {
      t_102 = t;
      if(((s_102 != NULL) && (s_102 != t_102)))
        _fail(t_102);
      else
        s_102 = t_102;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_102), not_null(s_102));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_102 = NULL;
  ATerm i_24;
  i_24 = t;
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 (ATerm t)
        {
          ATerm a_103 = NULL,b_103 = NULL;
          a_103 = t;
          x_102 :
          if(match_cons(a_103, sym_Input_1))
            {
              b_103 = ATgetArgument(a_103, 0);
              if(((z_102 != NULL) && (z_102 != b_103)))
                _fail(b_103);
              else
                z_102 = b_103;
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
          ATerm c_103 = NULL;
          t = term_m_24;
          {
            c_103 = t;
            if(((z_102 != NULL) && (z_102 != c_103)))
              _fail(c_103);
            else
              z_102 = c_103;
          }
        }
      }
  }
  t = i_24;
  {
    ATerm x_3 (ATerm t)
    {
      t = not_null(z_102);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_3);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm g_103 = NULL;
    g_103 = t;
    f_103 :
    if(!(match_string(g_103, "-v")))
      {
        if(!(match_string(g_103, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_o_24;
    t = set_config_0(t);
    t = term_p_24;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_r_24;
    return(t);
  }
  t = Option_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm j_103 = NULL;
    j_103 = t;
    h_103 :
    if(!(match_string(j_103, "-k")))
      {
        if(!(match_string(j_103, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    ATerm w_24;
    w_24 = t;
    {
      ATerm k_103 = NULL;
      ATerm m_103 = NULL;
      t = string_to_int_0(t);
      {
        m_103 = t;
        if(((k_103 != NULL) && (k_103 != m_103)))
          _fail(m_103);
        else
          k_103 = m_103;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_24, not_null(k_103));
        t = set_config_0(t);
      }
    }
    t = w_24;
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    t = term_g_25;
    return(t);
  }
  t = ArgOption_3(t, b_4, c_4, d_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_103 = NULL;
  q_103 = t;
  t = SSL_string_to_int(not_null(q_103));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_25 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_4 (ATerm t)
      {
        ATerm m_104 = NULL;
        m_104 = t;
        y_103 :
        if(!(match_string(m_104, "-S")))
          {
            if(!(match_string(m_104, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_4 (ATerm t)
      {
        t = term_d_26;
        t = set_config_0(t);
        t = term_e_26;
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = term_f_26;
        return(t);
      }
      t = Option_3(t, e_4, f_4, g_4);
      LocalPopChoice(c_26);
    }
  else
    {
      t = q_25;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 (ATerm t)
            {
              ATerm n_104 = NULL;
              n_104 = t;
              z_103 :
              if(!(match_string(n_104, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              ATerm q_104 = NULL;
              ATerm i_26;
              i_26 = t;
              {
                ATerm o_104 = NULL;
                ATerm p_104 = NULL;
                t = string_to_int_0(t);
                {
                  p_104 = t;
                  if(((o_104 != NULL) && (o_104 != p_104)))
                    _fail(p_104);
                  else
                    o_104 = p_104;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_23, not_null(o_104));
                  t = set_config_0(t);
                }
              }
              t = i_26;
              {
                ATerm r_104 = NULL;
                r_104 = t;
                if(((q_104 != NULL) && (q_104 != r_104)))
                  _fail(r_104);
                else
                  q_104 = r_104;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(q_104));
              }
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              t = term_j_26;
              return(t);
            }
            t = ArgOption_3(t, h_4, i_4, j_4);
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            {
              ATerm n_4 (ATerm t)
              {
                ATerm s_104 = NULL;
                s_104 = t;
                h_104 :
                if(!(match_string(s_104, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_4 (ATerm t)
              {
                t = term_l_26;
                t = set_config_0(t);
                t = term_m_26;
                return(t);
              }
              ATerm p_4 (ATerm t)
              {
                t = term_n_26;
                return(t);
              }
              t = Option_3(t, n_4, o_4, p_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm y_104 = NULL;
    y_104 = t;
    v_104 :
    if(!(match_string(y_104, "-o")))
      {
        if(!(match_string(y_104, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    ATerm b_105 = NULL;
    ATerm s_26;
    s_26 = t;
    {
      ATerm z_104 = NULL;
      ATerm a_105 = NULL;
      a_105 = t;
      if(((z_104 != NULL) && (z_104 != a_105)))
        _fail(a_105);
      else
        z_104 = a_105;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_26, not_null(z_104));
        t = set_config_0(t);
      }
    }
    t = s_26;
    {
      ATerm c_105 = NULL;
      c_105 = t;
      if(((b_105 != NULL) && (b_105 != c_105)))
        _fail(c_105);
      else
        b_105 = c_105;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_105));
    }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_u_26;
    return(t);
  }
  t = ArgOption_3(t, q_4, r_4, s_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
        ATerm t_4 (ATerm t)
        {
          ATerm i_105 = NULL;
          i_105 = t;
          h_105 :
          if(!(match_string(i_105, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_4 (ATerm t)
        {
          t = term_y_26;
          t = set_config_0(t);
          t = term_z_26;
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = term_a_27;
          return(t);
        }
        t = Option_3(t, t_4, u_4, v_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL,r_105 = NULL,s_105 = NULL;
  o_105 = t;
  m_105 :
  if(match_string(o_105, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(o_105) == AT_LIST) && !(ATisEmpty(o_105))))
        {
          p_105 = ATgetFirst((ATermList) o_105);
          q_105 = (ATerm) ATgetNext((ATermList) o_105);
          n_105 :
          if(((ATgetType(q_105) == AT_LIST) && !(ATisEmpty(q_105))))
            {
              r_105 = ATgetFirst((ATermList) q_105);
              s_105 = (ATerm) ATgetNext((ATermList) q_105);
              {
                ATerm w_105 = NULL;
                ATerm b_27;
                b_27 = t;
                {
                  t = not_null(p_105);
                  t = m_0(t);
                }
                t = b_27;
                {
                  ATerm x_105 = NULL;
                  t = not_null(r_105);
                  {
                    t = n_0(t);
                    {
                      x_105 = t;
                      if(((w_105 != NULL) && (w_105 != x_105)))
                        _fail(x_105);
                      else
                        w_105 = x_105;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_105)), not_null(w_105));
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
ATerm input_option_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm e_106 = NULL;
    e_106 = t;
    b_106 :
    if(!(match_string(e_106, "-i")))
      {
        if(!(match_string(e_106, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    ATerm h_106 = NULL;
    ATerm c_27;
    c_27 = t;
    {
      ATerm f_106 = NULL;
      ATerm g_106 = NULL;
      g_106 = t;
      if(((f_106 != NULL) && (f_106 != g_106)))
        _fail(g_106);
      else
        f_106 = g_106;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_27, not_null(f_106));
        t = set_config_0(t);
      }
    }
    t = c_27;
    {
      ATerm j_106 = NULL;
      j_106 = t;
      if(((h_106 != NULL) && (h_106 != j_106)))
        _fail(j_106);
      else
        h_106 = j_106;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_106));
    }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_e_27;
    return(t);
  }
  t = ArgOption_3(t, w_4, x_4, y_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      {
        ATerm h_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(i_27);
          }
        else
          {
            t = h_27;
            t = general_options_0(t);
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
  ATerm n_106 = NULL;
  n_106 = t;
  t = SSL_TicksToSeconds(not_null(n_106));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
  s_106 = t;
  r_106 :
  if(match_cons(s_106, sym__2))
    {
      t_106 = ATgetArgument(s_106, 0);
      u_106 = ATgetArgument(s_106, 1);
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_106), not_null(u_106));
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            t = SSL_addr(not_null(t_106), not_null(u_106));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_98 (ATerm), ATerm r_98 (ATerm))
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_98(t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL;
        b_107 = t;
        a_107 :
        if(((ATgetType(b_107) == AT_LIST) && !(ATisEmpty(b_107))))
          {
            c_107 = ATgetFirst((ATermList) b_107);
            d_107 = (ATerm) ATgetNext((ATermList) b_107);
            {
              ATerm g_107 = NULL;
              ATerm h_107 = NULL;
              t = not_null(d_107);
              {
                t = foldr_2(t, q_98, r_98);
                {
                  h_107 = t;
                  if(((g_107 != NULL) && (g_107 != h_107)))
                    _fail(h_107);
                  else
                    g_107 = h_107;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_107), not_null(g_107));
                t = r_98(t);
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
  ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL;
  h_108 = t;
  g_108 :
  if(match_cons(h_108, sym__2))
    {
      i_108 = ATgetArgument(h_108, 0);
      j_108 = ATgetArgument(h_108, 1);
      {
        ATerm o_27;
        o_27 = t;
        {
          ATerm p_27 = t;
          int q_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_108), not_null(j_108));
              LocalPopChoice(q_27);
            }
          else
            {
              t = p_27;
              t = SSL_gtr(not_null(i_108), not_null(j_108));
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
  ATerm p_108 = NULL;
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_108 = NULL,r_108 = NULL,s_108 = NULL;
      q_108 = t;
      o_108 :
      if(match_cons(q_108, sym__2))
        {
          r_108 = ATgetArgument(q_108, 0);
          s_108 = ATgetArgument(q_108, 1);
          {
            if(((p_108 != NULL) && (p_108 != r_108)))
              _fail(r_108);
            else
              p_108 = r_108;
            if(((p_108 != NULL) && (p_108 != s_108)))
              _fail(s_108);
            else
              p_108 = s_108;
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
ATerm if_verbose1_1 (ATerm t, ATerm f_105 (ATerm))
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_27;
      v_27 = t;
      {
        ATerm v_108 = NULL;
        ATerm w_108 = NULL;
        t = term_v_23;
        {
          t = get_config_0(t);
          {
            w_108 = t;
            if(((v_108 != NULL) && (v_108 != w_108)))
              _fail(w_108);
            else
              v_108 = w_108;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_108), term_j_6);
          t = geq_0(t);
        }
      }
      t = v_27;
      t = f_105(t);
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
    ATerm a_109 = NULL,c_109 = NULL;
    ATerm w_27;
    w_27 = t;
    {
      ATerm b_109 = NULL;
      t = run_time_0(t);
      {
        b_109 = t;
        if(((a_109 != NULL) && (a_109 != b_109)))
          _fail(b_109);
        else
          a_109 = b_109;
      }
    }
    t = w_27;
    {
      ATerm d_109 = NULL;
      t = term_x_27;
      {
        t = get_config_0(t);
        {
          d_109 = t;
          if(((c_109 != NULL) && (c_109 != d_109)))
            _fail(d_109);
          else
            c_109 = d_109;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_27), not_null(a_109)), term_y_27), not_null(c_109)));
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
  ATerm n_109 = NULL;
  n_109 = t;
  m_109 :
  if(match_cons(n_109, sym_Version_0))
    {
      ATerm p_109 = NULL,r_109 = NULL;
      ATerm a_28;
      a_28 = t;
      {
        ATerm q_109 = NULL;
        t = SSLgetAnnotations(not_null(n_109));
        {
          q_109 = t;
          if(((p_109 != NULL) && (p_109 != q_109)))
            _fail(q_109);
          else
            p_109 = q_109;
        }
      }
      t = a_28;
      {
        ATerm s_109 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_109));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_103 (ATerm))
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
  t = l_103(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_110 = NULL;
  a_110 = t;
  t = SSL_table_create(not_null(a_110));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_110 = NULL;
  e_110 = t;
  {
    ATerm f_28;
    f_28 = t;
    {
      t = term_g_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_28, term_h_28, not_null(e_110));
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
  ATerm i_28;
  i_28 = t;
  {
    ATerm x_110 = NULL;
    ATerm a_111 = NULL;
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
      t = (ATerm) ATmakeAppl(sym__2, term_c_24, not_null(x_110));
      t = printnl_0(t);
    }
  }
  t = i_28;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm j_107 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_81 (ATerm))
{
  ATerm d_111 (ATerm t)
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
        t = Cons_2(t, c_81, d_111);
      }
    return(t);
  }
  t = d_111(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
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
          ATerm n_28;
          n_28 = t;
          {
            ATerm q_111 = NULL,s_111 = NULL,u_111 = NULL;
            ATerm o_28;
            o_28 = t;
            {
              ATerm r_111 = NULL;
              t = k_0(t);
              {
                r_111 = t;
                if(((q_111 != NULL) && (q_111 != r_111)))
                  _fail(r_111);
                else
                  q_111 = r_111;
              }
            }
            t = o_28;
            {
              ATerm t_111 = NULL;
              t = not_null(k_111);
              {
                t = i_0(t);
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
          t = n_28;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(p_111);
              return(t);
            }
            t = reverse_acc_2(t, i_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_111) == AT_LIST) && ATisEmpty(m_111)))
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
ATerm short_description_1 (ATerm t, ATerm i_107 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_75 (ATerm))
{
  ATerm f_112 = NULL,g_112 = NULL;
  f_112 = t;
  e_112 :
  if(match_cons(f_112, sym_Program_1))
    {
      g_112 = ATgetArgument(f_112, 0);
      {
        ATerm j_112 = NULL,l_112 = NULL;
        ATerm k_112 = NULL;
        t = SSLgetAnnotations(not_null(f_112));
        {
          k_112 = t;
          if(((j_112 != NULL) && (j_112 != k_112)))
            _fail(k_112);
          else
            j_112 = k_112;
        }
        {
          t = not_null(g_112);
          {
            ATerm n_112 = NULL;
            t = t_75(t);
            {
              l_112 = t;
              {
                ATerm o_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_112)), not_null(j_112));
                {
                  o_112 = t;
                  if(((n_112 != NULL) && (n_112 != o_112)))
                    _fail(o_112);
                  else
                    n_112 = o_112;
                }
                t = not_null(n_112);
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
  ATerm w_112 = NULL;
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_112 = NULL;
      t = term_x_27;
      {
        t = get_config_0(t);
        {
          x_112 = t;
          if(((w_112 != NULL) && (w_112 != x_112)))
            _fail(x_112);
          else
            w_112 = x_112;
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
            ATerm y_112 = NULL;
            y_112 = t;
            if(((w_112 != NULL) && (w_112 != y_112)))
              _fail(y_112);
            else
              w_112 = y_112;
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
                ATerm z_112 = NULL;
                ATerm a_113 = NULL;
                a_113 = t;
                if(((z_112 != NULL) && (z_112 != a_113)))
                  _fail(a_113);
                else
                  z_112 = a_113;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_112)), term_v_28);
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
    ATerm f_113 = NULL;
    ATerm h_113 = NULL;
    h_113 = t;
    if(((f_113 != NULL) && (f_113 != h_113)))
      _fail(h_113);
    else
      f_113 = h_113;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATempty, not_null(f_113)));
      t = printnl_0(t);
    }
  }
  t = w_28;
  return(t);
}
ATerm say_1 (ATerm t, ATerm k_102 (ATerm))
{
  ATerm x_28;
  x_28 = t;
  {
    t = k_102(t);
    t = debug_0(t);
  }
  t = x_28;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm o_113 = NULL,p_113 = NULL;
  o_113 = t;
  n_113 :
  if(match_cons(o_113, sym_Undefined_1))
    {
      p_113 = ATgetArgument(o_113, 0);
      {
        ATerm s_113 = NULL,u_113 = NULL;
        ATerm t_113 = NULL;
        t = SSLgetAnnotations(not_null(o_113));
        {
          t_113 = t;
          if(((s_113 != NULL) && (s_113 != t_113)))
            _fail(t_113);
          else
            s_113 = t_113;
        }
        {
          t = not_null(p_113);
          {
            ATerm w_113 = NULL;
            t = u_75(t);
            {
              u_113 = t;
              {
                ATerm x_113 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_113)), not_null(s_113));
                {
                  x_113 = t;
                  if(((w_113 != NULL) && (w_113 != x_113)))
                    _fail(x_113);
                  else
                    w_113 = x_113;
                }
                t = not_null(w_113);
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
ATerm fetch_1 (ATerm t, ATerm l_81 (ATerm))
{
  ATerm c_114 (ATerm t)
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_81, _id);
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        t = Cons_2(t, _id, c_114);
      }
    return(t);
  }
  t = c_114(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_106 (ATerm))
{
  t = fetch_1(t, i_106);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_114 = NULL;
  h_114 = t;
  g_114 :
  if(match_cons(h_114, sym_Help_0))
    {
      ATerm j_114 = NULL,l_114 = NULL;
      ATerm a_29;
      a_29 = t;
      {
        ATerm k_114 = NULL;
        t = SSLgetAnnotations(not_null(h_114));
        {
          k_114 = t;
          if(((j_114 != NULL) && (j_114 != k_114)))
            _fail(k_114);
          else
            j_114 = k_114;
        }
      }
      t = a_29;
      {
        ATerm m_114 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_114));
        {
          m_114 = t;
          if(((l_114 != NULL) && (l_114 != m_114)))
            _fail(m_114);
          else
            l_114 = m_114;
        }
        t = not_null(l_114);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_87 (ATerm))
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_87(t);
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
  ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL;
  s_114 = t;
  r_114 :
  if(match_cons(s_114, sym__2))
    {
      t_114 = ATgetArgument(s_114, 0);
      u_114 = ATgetArgument(s_114, 1);
      t = SSL_table_get(not_null(t_114), not_null(u_114));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_115 = NULL,c_115 = NULL,d_115 = NULL,e_115 = NULL;
  b_115 = t;
  a_115 :
  if(match_cons(b_115, sym__3))
    {
      c_115 = ATgetArgument(b_115, 0);
      d_115 = ATgetArgument(b_115, 1);
      e_115 = ATgetArgument(b_115, 2);
      {
        ATerm d_29;
        d_29 = t;
        {
          ATerm i_115 = NULL;
          ATerm j_115 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_115), not_null(d_115));
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
              j_115 = t;
              if(((i_115 != NULL) && (i_115 != j_115)))
                _fail(j_115);
              else
                i_115 = j_115;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_115), not_null(d_115), (ATerm) ATinsert(CheckATermList(not_null(i_115)), not_null(e_115)));
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
ATerm register_usage_1 (ATerm t, ATerm n_107 (ATerm))
{
  ATerm o_115 = NULL;
  ATerm p_115 = NULL;
  t = term_i_15;
  {
    t = n_107(t);
    {
      p_115 = t;
      if(((o_115 != NULL) && (o_115 != p_115)))
        _fail(p_115);
      else
        o_115 = p_115;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_28, term_t_28, not_null(o_115));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm v_115 = NULL,w_115 = NULL,x_115 = NULL;
  v_115 = t;
  u_115 :
  if(match_string(v_115, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(v_115) == AT_LIST) && !(ATisEmpty(v_115))))
        {
          w_115 = ATgetFirst((ATermList) v_115);
          x_115 = (ATerm) ATgetNext((ATermList) v_115);
          {
            ATerm a_116 = NULL;
            ATerm g_29;
            g_29 = t;
            {
              t = not_null(w_115);
              t = a_0(t);
            }
            t = g_29;
            {
              ATerm b_116 = NULL;
              t = term_i_15;
              {
                t = d_0(t);
                {
                  b_116 = t;
                  if(((a_116 != NULL) && (a_116 != b_116)))
                    _fail(b_116);
                  else
                    a_116 = b_116;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_115)), not_null(a_116));
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
    ATerm g_116 = NULL;
    g_116 = t;
    f_116 :
    if(!(match_string(g_116, "--help")))
      {
        if(!(match_string(g_116, "-h")))
          {
            if(!(match_string(g_116, "-?")))
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
  ATerm j_116 = NULL,k_116 = NULL,l_116 = NULL;
  j_116 = t;
  i_116 :
  if(((ATgetType(j_116) == AT_LIST) && !(ATisEmpty(j_116))))
    {
      k_116 = ATgetFirst((ATermList) j_116);
      l_116 = (ATerm) ATgetNext((ATermList) j_116);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_116)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_116)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm r_116 = NULL,s_116 = NULL,t_116 = NULL;
  r_116 = t;
  q_116 :
  if(match_cons(r_116, sym__2))
    {
      s_116 = ATgetArgument(r_116, 0);
      t_116 = ATgetArgument(r_116, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_c_23, not_null(s_116), not_null(t_116));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm l_107 (ATerm))
{
  ATerm l_29;
  l_29 = t;
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_29;
        t = l_107(t);
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
      ATerm c_117 = NULL;
      ATerm p_29;
      p_29 = t;
      {
        ATerm z_116 = NULL;
        ATerm b_117 = NULL;
        b_117 = t;
        if(((z_116 != NULL) && (z_116 != b_117)))
          _fail(b_117);
        else
          z_116 = b_117;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_27, not_null(z_116));
          t = set_config_0(t);
        }
      }
      t = p_29;
      {
        ATerm d_117 = NULL;
        d_117 = t;
        if(((c_117 != NULL) && (c_117 != d_117)))
          _fail(d_117);
        else
          c_117 = d_117;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_117));
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
                t = l_107(t);
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
  ATerm j_117 = NULL,k_117 = NULL,l_117 = NULL;
  ATerm u_29;
  u_29 = t;
  {
    ATerm m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL;
    m_117 = t;
    i_117 :
    if(match_cons(m_117, sym__3))
      {
        n_117 = ATgetArgument(m_117, 0);
        o_117 = ATgetArgument(m_117, 1);
        p_117 = ATgetArgument(m_117, 2);
        {
          if(((j_117 != NULL) && (j_117 != n_117)))
            _fail(n_117);
          else
            j_117 = n_117;
          {
            if(((k_117 != NULL) && (k_117 != o_117)))
              _fail(o_117);
            else
              k_117 = o_117;
            {
              if(((l_117 != NULL) && (l_117 != p_117)))
                _fail(p_117);
              else
                l_117 = p_117;
              t = SSL_table_put(not_null(j_117), not_null(k_117), not_null(l_117));
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
ATerm parse_options_1 (ATerm t, ATerm k_107 (ATerm))
{
  ATerm s_117 = NULL;
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
          t = k_107(t);
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
                    ATerm t_117 = NULL;
                    t_117 = t;
                    if(((s_117 != NULL) && (s_117 != t_117)))
                      _fail(t_117);
                    else
                      s_117 = t_117;
                    return(t);
                  }
                  t = Undefined_1(t, q_5);
                  return(t);
                }
                t = fetch_1(t, o_5);
                {
                  ATerm r_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_117)), term_g_30);
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
ATerm option_wrap_4 (ATerm t, ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm))
{
  t = parse_options_1(t, r_103);
  {
    t = store_options_0(t);
    {
      t = t_103(t);
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, s_103);
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
                  t = u_103(t);
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
ATerm iowrap_4 (ATerm t, ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm l_104 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_104(t);
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
      t = apply_strategy_1(t, i_104);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, s_5, k_104, l_104, t_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm e_104 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm v_5 (ATerm t)
    {
      ATerm q_30;
      q_30 = t;
      {
        ATerm w_117 = NULL;
        ATerm x_117 = NULL;
        t = term_x_27;
        {
          t = get_config_0(t);
          {
            x_117 = t;
            if(((w_117 != NULL) && (w_117 != x_117)))
              _fail(x_117);
            else
              w_117 = x_117;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATempty, not_null(w_117)));
          t = printnl_0(t);
        }
      }
      t = q_30;
      return(t);
    }
    t = if_verbose2_1(t, v_5);
    return(t);
  }
  t = iowrap_4(t, c_104, d_104, e_104, u_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_104 (ATerm), ATerm b_104 (ATerm))
{
  t = iowrap_3(t, a_104, b_104, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm x_103 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    t = _2(t, _id, x_103);
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
