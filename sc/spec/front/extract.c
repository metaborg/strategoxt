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
ATerm term_l_30;
ATerm term_f_30;
ATerm term_x_29;
ATerm term_v_29;
ATerm term_t_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_p_27;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_l_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_f_25;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_v_23;
ATerm term_k_23;
ATerm term_z_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_x_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_m_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_w_18;
ATerm term_r_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_10;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_x_8;
ATerm term_n_7;
ATerm term_e_7;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
void init_constant_terms (void)
{
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Op_2, term_k_14, (ATerm) ATempty);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_l_14);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_m_19);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_m_19);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_19);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_j_15);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_p_27, term_j_15);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_j_15);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
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
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__3, term_v_28, term_w_28, (ATerm) ATempty);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm m_79 (ATerm), ATerm n_79 (ATerm));
ATerm SDef_3 (ATerm, ATerm q_79 (ATerm), ATerm r_79 (ATerm), ATerm s_79 (ATerm));
ATerm Let_2 (ATerm, ATerm o_79 (ATerm), ATerm p_79 (ATerm));
ATerm sboundin_3 (ATerm, ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm e_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_94 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm d_108 (ATerm), ATerm e_108 (ATerm));
ATerm alltd_1 (ATerm, ATerm d_107 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm f_108 (ATerm), ATerm g_108 (ATerm));
ATerm substitute_1 (ATerm, ATerm h_108 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm t_79 (ATerm), ATerm u_79 (ATerm));
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
ATerm Prim_2 (ATerm, ATerm t_80 (ATerm), ATerm u_80 (ATerm));
ATerm Explode_2 (ATerm, ATerm h_77 (ATerm), ATerm i_77 (ATerm));
ATerm Op_2 (ATerm, ATerm t_78 (ATerm), ATerm u_78 (ATerm));
ATerm pat_td_1 (ATerm, ATerm g_81 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm o_102 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm j_91 (ATerm), ATerm k_91 (ATerm));
ATerm repeat_1 (ATerm, ATerm m_91 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm b_77 (ATerm), ATerm c_77 (ATerm));
ATerm Con_3 (ATerm, ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm a_77 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm q_80 (ATerm), ATerm r_80 (ATerm));
ATerm oncetd_1 (ATerm, ATerm p_106 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm z_104 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm i_104 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm e_97 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm m_102 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm h_102 (ATerm));
ATerm zip_1 (ATerm, ATerm j_102 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_1 (ATerm, ATerm b_98 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm w_81 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_92 (ATerm), ATerm b_92 (ATerm));
ATerm for_3 (ATerm, ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm f_92 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm f_82 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm o_81 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm w_97 (ATerm), ATerm x_97 (ATerm));
ATerm union_1 (ATerm, ATerm y_97 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm q_81 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t_96 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm m_78 (ATerm));
ATerm Cons_2 (ATerm, ATerm v_80 (ATerm), ATerm w_80 (ATerm));
ATerm Specification_1 (ATerm, ATerm o_78 (ATerm));
ATerm _2 (ATerm, ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_87 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_85 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_96 (ATerm), ATerm q_96 (ATerm));
ATerm crush_2 (ATerm, ATerm h_98 (ATerm), ATerm i_98 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_85 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm j_87 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_103 (ATerm), ATerm t_103 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_87 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_100 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_84 (ATerm));
ATerm map_1 (ATerm, ATerm f_100 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_84 (ATerm));
ATerm Program_1 (ATerm, ATerm k_75 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_100 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_104 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_84 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_84 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_84 (ATerm));
ATerm iowrap_4 (ATerm, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm));
ATerm iowrap_3 (ATerm, ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_86 (ATerm), ATerm o_86 (ATerm));
ATerm iowrap_1 (ATerm, ATerm k_86 (ATerm));
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
        ATerm c_6;
        c_6 = t;
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
        t = c_6;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_6), not_null(f_6)), term_h_6), not_null(e_6)), term_g_6);
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_6), not_null(q_6)), term_h_6), not_null(p_6)), term_j_6), not_null(o_6)), term_g_6);
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
                ATerm r_6 = t;
                int s_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(s_6);
                  }
                else
                  {
                    t = r_6;
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
  ATerm t_6;
  t_6 = t;
  {
    t = error_0(t);
    {
      t = term_u_6;
      t = exit_0(t);
    }
  }
  t = t_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_v_6);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm d_7;
  d_7 = t;
  {
    ATerm q_7 = NULL;
    ATerm r_7 = NULL;
    r_7 = t;
    if(((q_7 != NULL) && (q_7 != r_7)))
      _fail(r_7);
    else
      q_7 = r_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, not_null(q_7));
      t = printnl_0(t);
    }
  }
  t = d_7;
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
          ATerm f_7 = t;
          int g_7 = stack_ptr;
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
                            ATerm h_7 = t;
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
                                t = h_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_8)), term_n_7);
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
              LocalPopChoice(g_7);
            }
          else
            {
              t = f_7;
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
ATerm Rec_2 (ATerm t, ATerm m_79 (ATerm), ATerm n_79 (ATerm))
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
            t = m_79(t);
            {
              l_9 = t;
              {
                t = not_null(f_9);
                {
                  ATerm p_9 = NULL;
                  t = n_79(t);
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
ATerm SDef_3 (ATerm t, ATerm q_79 (ATerm), ATerm r_79 (ATerm), ATerm s_79 (ATerm))
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
            t = q_79(t);
            {
              n_10 = t;
              {
                t = not_null(f_10);
                {
                  ATerm r_10 = NULL;
                  t = r_79(t);
                  {
                    p_10 = t;
                    {
                      t = not_null(g_10);
                      {
                        ATerm t_10 = NULL;
                        t = s_79(t);
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
ATerm Let_2 (ATerm t, ATerm o_79 (ATerm), ATerm p_79 (ATerm))
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
            t = o_79(t);
            {
              p_11 = t;
              {
                t = not_null(j_11);
                {
                  ATerm t_11 = NULL;
                  t = p_79(t);
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
ATerm sboundin_3 (ATerm t, ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm))
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, a_109, a_109);
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, c_109, c_109, a_109);
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            t = Rec_2(t, c_109, a_109);
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
ATerm crush_3 (ATerm t, ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm))
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
      t = foldr_3(t, j_98, k_98, l_98);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm e_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_94 (ATerm))
{
  ATerm j_14 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm u_7 = t;
      int v_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_94(t);
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
      ATerm z_7 = t;
      int h_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_14 = NULL;
          ATerm o_8;
          o_8 = t;
          {
            ATerm i_14 = NULL;
            t = d_94(t);
            {
              i_14 = t;
              if(((h_14 != NULL) && (h_14 != i_14)))
                _fail(i_14);
              else
                h_14 = i_14;
            }
          }
          t = o_8;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(h_14);
                return(t);
              }
              t = split_2(t, j_14, t_0);
              t = diff_1(t, f_94);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = e_94(t, r_0, j_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          LocalPopChoice(h_8);
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
            t = crush_3(t, v_0, union_0, j_14);
          }
        }
      return(t);
    }
    t = split_2(t, p_0, q_0);
    t = union_0(t);
    return(t);
  }
  t = j_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
    s_14 = t;
    n_14 :
    if(match_cons(s_14, sym_Call_2))
      {
        t_14 = ATgetArgument(s_14, 0);
        v_14 = ATgetArgument(s_14, 1);
        o_14 :
        if(match_cons(t_14, sym_SVar_1))
          {
            u_14 = ATgetArgument(t_14, 0);
            {
              ATerm y_14 = NULL;
              ATerm z_14 = NULL;
              t = not_null(v_14);
              {
                t = length_0(t);
                {
                  z_14 = t;
                  if(((y_14 != NULL) && (y_14 != z_14)))
                    _fail(z_14);
                  else
                    y_14 = z_14;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(u_14), not_null(y_14)));
            }
          }
        else
          {
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
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        {
          ATerm v_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(w_8);
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
    ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
    a_15 = t;
    q_14 :
    if(match_cons(a_15, sym__2))
      {
        b_15 = ATgetArgument(a_15, 0);
        e_15 = ATgetArgument(a_15, 1);
        r_14 :
        if(match_cons(b_15, sym__2))
          {
            c_15 = ATgetArgument(b_15, 0);
            d_15 = ATgetArgument(b_15, 1);
            if(((c_15 != NULL) && (c_15 != e_15)))
              _fail(e_15);
            else
              c_15 = e_15;
          }
        else
          {
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
  ATerm q_15 = NULL;
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
  q_15 = t;
  {
    ATerm v_15 = NULL;
    ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
    t = not_null(q_15);
    {
      v_15 = t;
      {
        t = SSL_explode_term(not_null(v_15));
        {
          x_15 = t;
          m_15 :
          if(match_cons(x_15, sym__2))
            {
              y_15 = ATgetArgument(x_15, 0);
              z_15 = ATgetArgument(x_15, 1);
              n_15 :
              if(match_string(y_15, ""))
                {
                  o_15 :
                  if(((ATgetType(z_15) == AT_LIST) && ((ATermList) z_15 != ATempty)))
                    {
                      a_16 = ATgetFirst((ATermList) z_15);
                      b_16 = (ATerm) ATgetNext((ATermList) z_15);
                      p_15 :
                      if(((ATgetType(b_16) == AT_LIST) && ((ATermList) b_16 != ATempty)))
                        {
                          c_16 = ATgetFirst((ATermList) b_16);
                          d_16 = (ATerm) ATgetNext((ATermList) b_16);
                          {
                            if(((s_15 != NULL) && (s_15 != a_16)))
                              _fail(a_16);
                            else
                              s_15 = a_16;
                            {
                              if(((u_15 != NULL) && (u_15 != c_16)))
                                _fail(c_16);
                              else
                                u_15 = c_16;
                              if(((t_15 != NULL) && (t_15 != d_16)))
                                _fail(d_16);
                              else
                                t_15 = d_16;
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
    t = not_null(u_15);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_x_8;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm j_16 = NULL,l_16 = NULL;
    ATerm y_8;
    y_8 = t;
    {
      ATerm k_16 = NULL;
      t = Fst_0(t);
      {
        k_16 = t;
        if(((j_16 != NULL) && (j_16 != k_16)))
          _fail(k_16);
        else
          j_16 = k_16;
      }
    }
    t = y_8;
    {
      ATerm m_16 = NULL;
      t = Snd_0(t);
      {
        m_16 = t;
        if(((l_16 != NULL) && (l_16 != m_16)))
          _fail(m_16);
        else
          l_16 = m_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_16), not_null(l_16));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  t_16 = t;
  q_16 :
  if(match_cons(t_16, sym_Call_2))
    {
      u_16 = ATgetArgument(t_16, 0);
      w_16 = ATgetArgument(t_16, 1);
      r_16 :
      if(match_cons(u_16, sym_SVar_1))
        {
          v_16 = ATgetArgument(u_16, 0);
          s_16 :
          if(((ATermList) w_16 == ATempty))
            {
              t = not_null(v_16);
            }
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
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  c_17 = t;
  a_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      b_17 :
      if(((ATgetType(e_17) == AT_LIST) && ((ATermList) e_17 != ATempty)))
        {
          f_17 = ATgetFirst((ATermList) e_17);
          g_17 = (ATerm) ATgetNext((ATermList) e_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), not_null(g_17));
        }
      else
        {
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
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
  o_17 = t;
  l_17 :
  if(match_cons(o_17, sym__2))
    {
      p_17 = ATgetArgument(o_17, 0);
      q_17 = ATgetArgument(o_17, 1);
      m_17 :
      if(((ATgetType(q_17) == AT_LIST) && ((ATermList) q_17 != ATempty)))
        {
          r_17 = ATgetFirst((ATermList) q_17);
          u_17 = (ATerm) ATgetNext((ATermList) q_17);
          n_17 :
          if(match_cons(r_17, sym__2))
            {
              s_17 = ATgetArgument(r_17, 0);
              t_17 = ATgetArgument(r_17, 1);
              {
                ATerm w_17 = NULL;
                if(((p_17 != NULL) && (p_17 != s_17)))
                  _fail(s_17);
                else
                  p_17 = s_17;
                {
                  if(((w_17 != NULL) && (w_17 != t_17)))
                    _fail(t_17);
                  else
                    w_17 = t_17;
                  t = not_null(w_17);
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
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm d_108 (ATerm), ATerm e_108 (ATerm))
{
  ATerm c_18 = NULL;
  ATerm e_18 = NULL,f_18 = NULL;
  c_18 = t;
  {
    ATerm g_18 = NULL;
    t = not_null(c_18);
    {
      ATerm h_18 = NULL;
      t = d_108(t);
      {
        g_18 = t;
        {
          if(((e_18 != NULL) && (e_18 != g_18)))
            _fail(g_18);
          else
            e_18 = g_18;
          {
            t = e_108(t);
            {
              h_18 = t;
              if(((f_18 != NULL) && (f_18 != h_18)))
                _fail(h_18);
              else
                f_18 = h_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_18), not_null(f_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm d_107 (ATerm))
{
  ATerm l_18 (ATerm t)
  {
    ATerm b_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_107(t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = b_9;
        t = _all(t, l_18);
      }
    return(t);
  }
  t = l_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym__2))
    {
      r_18 = ATgetArgument(q_18, 0);
      s_18 = ATgetArgument(q_18, 1);
      {
        ATerm v_18 = NULL;
        if(((v_18 != NULL) && (v_18 != s_18)))
          _fail(s_18);
        else
          v_18 = s_18;
      }
    }
  else
    {
      if(match_cons(q_18, sym__3))
        {
          r_18 = ATgetArgument(q_18, 0);
          s_18 = ATgetArgument(q_18, 1);
          t_18 = ATgetArgument(q_18, 2);
          {
            ATerm b_19 = NULL;
            ATerm c_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(s_18));
            {
              t = zip_1(t, _id);
              {
                c_19 = t;
                if(((b_19 != NULL) && (b_19 != c_19)))
                  _fail(c_19);
                else
                  b_19 = c_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(t_18));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm f_108 (ATerm), ATerm g_108 (ATerm))
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  t = subs_args_0(t);
  {
    i_19 = t;
    h_19 :
    if(match_cons(i_19, sym__2))
      {
        j_19 = ATgetArgument(i_19, 0);
        k_19 = ATgetArgument(i_19, 1);
        {
          t = not_null(k_19);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(j_19);
                return(t);
              }
              t = SubsVar_2(t, f_108, c_1);
              t = g_108(t);
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
ATerm substitute_1 (ATerm t, ATerm h_108 (ATerm))
{
  t = substitute_2(t, h_108, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm t_79 (ATerm), ATerm u_79 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym_VarDec_2))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      {
        ATerm a_20 = NULL,c_20 = NULL;
        ATerm b_20 = NULL;
        t = SSLgetAnnotations(not_null(u_19));
        {
          b_20 = t;
          if(((a_20 != NULL) && (a_20 != b_20)))
            _fail(b_20);
          else
            a_20 = b_20;
        }
        {
          t = not_null(v_19);
          {
            ATerm e_20 = NULL;
            t = t_79(t);
            {
              c_20 = t;
              {
                t = not_null(w_19);
                {
                  ATerm g_20 = NULL;
                  t = u_79(t);
                  {
                    e_20 = t;
                    {
                      ATerm h_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_20), not_null(e_20)), not_null(a_20));
                      {
                        h_20 = t;
                        if(((g_20 != NULL) && (g_20 != h_20)))
                          _fail(h_20);
                        else
                          g_20 = h_20;
                      }
                      t = not_null(g_20);
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
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
  b_21 = t;
  z_20 :
  if(((ATgetType(b_21) == AT_LIST) && ((ATermList) b_21 != ATempty)))
    {
      c_21 = ATgetFirst((ATermList) b_21);
      g_21 = (ATerm) ATgetNext((ATermList) b_21);
      a_21 :
      if(match_cons(c_21, sym_SDef_3))
        {
          d_21 = ATgetArgument(c_21, 0);
          e_21 = ATgetArgument(c_21, 1);
          f_21 = ATgetArgument(c_21, 2);
          {
            ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,i_22 = NULL;
            ATerm h_9;
            h_9 = t;
            {
              ATerm o_21 = NULL;
              t = not_null(e_21);
              {
                ATerm u_21 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  o_21 = t;
                  {
                    if(((l_21 != NULL) && (l_21 != o_21)))
                      _fail(o_21);
                    else
                      l_21 = o_21;
                    {
                      t = not_null(l_21);
                      {
                        ATerm h_22 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
                          p_21 = t;
                          q_20 :
                          if(match_cons(p_21, sym_VarDec_2))
                            {
                              q_21 = ATgetArgument(p_21, 0);
                              r_21 = ATgetArgument(p_21, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_21)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          u_21 = t;
                          {
                            if(((m_21 != NULL) && (m_21 != u_21)))
                              _fail(u_21);
                            else
                              m_21 = u_21;
                            {
                              t = not_null(b_21);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
                                  v_21 = t;
                                  w_20 :
                                  if(match_cons(v_21, sym_SDef_3))
                                    {
                                      w_21 = ATgetArgument(v_21, 0);
                                      x_21 = ATgetArgument(v_21, 1);
                                      y_21 = ATgetArgument(v_21, 2);
                                      {
                                        ATerm b_22 = NULL;
                                        ATerm g_22 = NULL;
                                        t = not_null(x_21);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
                                            c_22 = t;
                                            u_20 :
                                            if(match_cons(c_22, sym_VarDec_2))
                                              {
                                                d_22 = ATgetArgument(c_22, 0);
                                                e_22 = ATgetArgument(c_22, 1);
                                                t = not_null(d_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            g_22 = t;
                                            if(((b_22 != NULL) && (b_22 != g_22)))
                                              _fail(g_22);
                                            else
                                              b_22 = g_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(b_22), not_null(m_21), not_null(y_21));
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
                                  h_22 = t;
                                  if(((n_21 != NULL) && (n_21 != h_22)))
                                    _fail(h_22);
                                  else
                                    n_21 = h_22;
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
              ATerm j_22 = NULL;
              t = not_null(n_21);
              {
                t = choices_0(t);
                {
                  j_22 = t;
                  if(((i_22 != NULL) && (i_22 != j_22)))
                    _fail(j_22);
                  else
                    i_22 = j_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_21), not_null(l_21), not_null(i_22));
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
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  w_22 = t;
  u_22 :
  if(((ATgetType(w_22) == AT_LIST) && ((ATermList) w_22 != ATempty)))
    {
      x_22 = ATgetFirst((ATermList) w_22);
      y_22 = (ATerm) ATgetNext((ATermList) w_22);
      v_22 :
      if(((ATermList) y_22 == ATempty))
        {
          t = not_null(x_22);
        }
      else
        {
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
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(m_9);
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
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  f_23 = t;
  d_23 :
  if(match_cons(f_23, sym__2))
    {
      g_23 = ATgetArgument(f_23, 0);
      j_23 = ATgetArgument(f_23, 1);
      e_23 :
      if(match_cons(g_23, sym__2))
        {
          h_23 = ATgetArgument(g_23, 0);
          i_23 = ATgetArgument(g_23, 1);
          {
            ATerm n_23 = NULL;
            ATerm o_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), not_null(i_23));
            {
              t = Definitions_0(t);
              {
                o_23 = t;
                if(((n_23 != NULL) && (n_23 != o_23)))
                  _fail(o_23);
                else
                  n_23 = o_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_23), not_null(j_23));
          }
        }
      else
        {
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
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  j_24 = t;
  h_24 :
  if(match_cons(j_24, sym_ExplodeCong_2))
    {
      k_24 = ATgetArgument(j_24, 0);
      i_24 = ATgetArgument(j_24, 1);
      {
        ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
        ATerm r_24 = NULL;
        ATerm s_24 = NULL;
        t = new_0(t);
        {
          r_24 = t;
          {
            if(((n_24 != NULL) && (n_24 != r_24)))
              _fail(r_24);
            else
              n_24 = r_24;
            {
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
                          t = new_0(t);
                          {
                            u_24 = t;
                            if(((q_24 != NULL) && (q_24 != u_24)))
                              _fail(u_24);
                            else
                              q_24 = u_24;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_24)), not_null(p_24)), not_null(o_24)), not_null(n_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_24)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(k_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_24))))), (ATerm) ATmakeAppl(sym_Prim_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_24))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_24)))))));
      }
    }
  else
    {
      if(match_cons(j_24, sym_Build_1))
        {
          k_24 = ATgetArgument(j_24, 0);
          {
            ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
            ATerm a_25 = NULL;
            ATerm e_25 = NULL;
            t = new_0(t);
            {
              a_25 = t;
              {
                if(((y_24 != NULL) && (y_24 != a_25)))
                  _fail(a_25);
                else
                  y_24 = a_25;
                {
                  t = not_null(k_24);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
                      b_25 = t;
                      a_24 :
                      if(match_cons(b_25, sym_Explode_2))
                        {
                          c_25 = ATgetArgument(b_25, 0);
                          d_25 = ATgetArgument(b_25, 1);
                          {
                            if(((w_24 != NULL) && (w_24 != c_25)))
                              _fail(c_25);
                            else
                              w_24 = c_25;
                            {
                              if(((x_24 != NULL) && (x_24 != d_25)))
                                _fail(d_25);
                              else
                                x_24 = d_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_24));
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
                      e_25 = t;
                      if(((z_24 != NULL) && (z_24 != e_25)))
                        _fail(e_25);
                      else
                        z_24 = e_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_24)), not_null(w_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_24))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_24)))));
          }
        }
      else
        {
          if(match_cons(j_24, sym_Match_1))
            {
              k_24 = ATgetArgument(j_24, 0);
              {
                ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
                ATerm l_25 = NULL;
                ATerm m_25 = NULL;
                t = new_0(t);
                {
                  l_25 = t;
                  {
                    if(((i_25 != NULL) && (i_25 != l_25)))
                      _fail(l_25);
                    else
                      i_25 = l_25;
                    {
                      ATerm q_25 = NULL;
                      t = new_0(t);
                      {
                        m_25 = t;
                        {
                          if(((j_25 != NULL) && (j_25 != m_25)))
                            _fail(m_25);
                          else
                            j_25 = m_25;
                          {
                            t = not_null(k_24);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
                                n_25 = t;
                                f_24 :
                                if(match_cons(n_25, sym_Explode_2))
                                  {
                                    o_25 = ATgetArgument(n_25, 0);
                                    p_25 = ATgetArgument(n_25, 1);
                                    {
                                      if(((g_25 != NULL) && (g_25 != o_25)))
                                        _fail(o_25);
                                      else
                                        g_25 = o_25;
                                      {
                                        if(((h_25 != NULL) && (h_25 != p_25)))
                                          _fail(p_25);
                                        else
                                          h_25 = p_25;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_25));
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
                                q_25 = t;
                                if(((k_25 != NULL) && (k_25 != q_25)))
                                  _fail(q_25);
                                else
                                  k_25 = q_25;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_r_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_25)), (ATerm) ATmakeAppl(sym_Op_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_25)), not_null(g_25)))))));
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
  ATerm v_26 = NULL,w_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym_Match_1))
    {
      w_26 = ATgetArgument(v_26, 0);
      {
        ATerm t_9 = t;
        int u_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
            ATerm c_27 = NULL;
            ATerm g_27 = NULL;
            t = new_0(t);
            {
              c_27 = t;
              {
                if(((a_27 != NULL) && (a_27 != c_27)))
                  _fail(c_27);
                else
                  a_27 = c_27;
                {
                  t = not_null(w_26);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
                      d_27 = t;
                      k_26 :
                      if(match_cons(d_27, sym_Anno_2))
                        {
                          e_27 = ATgetArgument(d_27, 0);
                          f_27 = ATgetArgument(d_27, 1);
                          {
                            if(((y_26 != NULL) && (y_26 != e_27)))
                              _fail(e_27);
                            else
                              y_26 = e_27;
                            {
                              if(((z_26 != NULL) && (z_26 != f_27)))
                                _fail(f_27);
                              else
                                z_26 = f_27;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_27)), not_null(y_26));
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
                      g_27 = t;
                      if(((b_27 != NULL) && (b_27 != g_27)))
                        _fail(g_27);
                      else
                        b_27 = g_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_26))))));
            LocalPopChoice(u_9);
          }
        else
          {
            t = t_9;
            {
              ATerm w_9 = t;
              int x_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
                  ATerm l_27 = NULL;
                  ATerm o_27 = NULL;
                  t = new_0(t);
                  {
                    l_27 = t;
                    {
                      if(((j_27 != NULL) && (j_27 != l_27)))
                        _fail(l_27);
                      else
                        j_27 = l_27;
                      {
                        t = not_null(w_26);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm m_27 = NULL,n_27 = NULL;
                            m_27 = t;
                            o_26 :
                            if(match_cons(m_27, sym_RootApp_1))
                              {
                                n_27 = ATgetArgument(m_27, 0);
                                {
                                  if(((i_27 != NULL) && (i_27 != n_27)))
                                    _fail(n_27);
                                  else
                                    i_27 = n_27;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_27));
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
                            o_27 = t;
                            if(((k_27 != NULL) && (k_27 != o_27)))
                              _fail(o_27);
                            else
                              k_27 = o_27;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(k_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_27))), not_null(i_27))));
                  LocalPopChoice(x_9);
                }
              else
                {
                  t = w_9;
                  {
                    ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
                    ATerm u_27 = NULL;
                    ATerm y_27 = NULL;
                    t = new_0(t);
                    {
                      u_27 = t;
                      {
                        if(((s_27 != NULL) && (s_27 != u_27)))
                          _fail(u_27);
                        else
                          s_27 = u_27;
                        {
                          t = not_null(w_26);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
                              v_27 = t;
                              s_26 :
                              if(match_cons(v_27, sym_App_2))
                                {
                                  w_27 = ATgetArgument(v_27, 0);
                                  x_27 = ATgetArgument(v_27, 1);
                                  {
                                    if(((r_27 != NULL) && (r_27 != w_27)))
                                      _fail(w_27);
                                    else
                                      r_27 = w_27;
                                    {
                                      if(((q_27 != NULL) && (q_27 != x_27)))
                                        _fail(x_27);
                                      else
                                        q_27 = x_27;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_27));
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
                              y_27 = t;
                              if(((t_27 != NULL) && (t_27 != y_27)))
                                _fail(y_27);
                              else
                                t_27 = y_27;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_27))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_27)), not_null(r_27)))));
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
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  p_28 = t;
  n_28 :
  if(match_cons(p_28, sym_Match_1))
    {
      q_28 = ATgetArgument(p_28, 0);
      o_28 :
      if(match_cons(q_28, sym_RootApp_1))
        {
          r_28 = ATgetArgument(q_28, 0);
          t = not_null(r_28);
        }
      else
        {
          if(match_cons(q_28, sym_App_2))
            {
              r_28 = ATgetArgument(q_28, 0);
              s_28 = ATgetArgument(q_28, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(r_28), not_null(s_28));
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
  ATerm e_29 = NULL,f_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym_Match_1))
    {
      f_29 = ATgetArgument(e_29, 0);
      {
        ATerm h_29 = NULL,i_29 = NULL;
        ATerm u_29 = NULL;
        t = not_null(f_29);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
            j_29 = t;
            a_29 :
            if(match_cons(j_29, sym_RootApp_1))
              {
                k_29 = ATgetArgument(j_29, 0);
                b_29 :
                if(match_cons(k_29, sym_Match_1))
                  {
                    l_29 = ATgetArgument(k_29, 0);
                    {
                      if(((h_29 != NULL) && (h_29 != l_29)))
                        _fail(l_29);
                      else
                        h_29 = l_29;
                      t = not_null(h_29);
                    }
                  }
                else
                  {
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
            u_29 = t;
            if(((i_29 != NULL) && (i_29 != u_29)))
              _fail(u_29);
            else
              i_29 = u_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(i_29));
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
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL;
  i_34 = t;
  h_34 :
  if(match_cons(i_34, sym_Build_1))
    {
      j_34 = ATgetArgument(i_34, 0);
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
            ATerm p_34 = NULL;
            ATerm t_34 = NULL;
            t = new_0(t);
            {
              p_34 = t;
              {
                if(((n_34 != NULL) && (n_34 != p_34)))
                  _fail(p_34);
                else
                  n_34 = p_34;
                {
                  t = not_null(j_34);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
                      q_34 = t;
                      p_32 :
                      if(match_cons(q_34, sym_Anno_2))
                        {
                          r_34 = ATgetArgument(q_34, 0);
                          s_34 = ATgetArgument(q_34, 1);
                          {
                            if(((l_34 != NULL) && (l_34 != r_34)))
                              _fail(r_34);
                            else
                              l_34 = r_34;
                            {
                              if(((m_34 != NULL) && (m_34 != s_34)))
                                _fail(s_34);
                              else
                                m_34 = s_34;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_34));
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
                      t_34 = t;
                      if(((o_34 != NULL) && (o_34 != t_34)))
                        _fail(t_34);
                      else
                        o_34 = t_34;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_j_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_34)), not_null(l_34))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_34))));
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            {
              ATerm k_10 = t;
              int o_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_34 = NULL,b_35 = NULL,c_35 = NULL;
                  ATerm d_35 = NULL;
                  ATerm h_35 = NULL;
                  t = new_0(t);
                  {
                    d_35 = t;
                    {
                      if(((b_35 != NULL) && (b_35 != d_35)))
                        _fail(d_35);
                      else
                        b_35 = d_35;
                      {
                        t = not_null(j_34);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm f_35 = NULL,g_35 = NULL;
                            f_35 = t;
                            b_34 :
                            if(match_cons(f_35, sym_RootApp_1))
                              {
                                g_35 = ATgetArgument(f_35, 0);
                                {
                                  if(((v_34 != NULL) && (v_34 != g_35)))
                                    _fail(g_35);
                                  else
                                    v_34 = g_35;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_35));
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
                            h_35 = t;
                            if(((c_35 != NULL) && (c_35 != h_35)))
                              _fail(h_35);
                            else
                              c_35 = h_35;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_35))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_35))));
                  LocalPopChoice(o_10);
                }
              else
                {
                  t = k_10;
                  {
                    ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL;
                    ATerm q_35 = NULL;
                    ATerm o_36 = NULL;
                    t = new_0(t);
                    {
                      q_35 = t;
                      {
                        if(((o_35 != NULL) && (o_35 != q_35)))
                          _fail(q_35);
                        else
                          o_35 = q_35;
                        {
                          t = not_null(j_34);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
                              r_35 = t;
                              f_34 :
                              if(match_cons(r_35, sym_App_2))
                                {
                                  s_35 = ATgetArgument(r_35, 0);
                                  t_35 = ATgetArgument(r_35, 1);
                                  {
                                    if(((m_35 != NULL) && (m_35 != s_35)))
                                      _fail(s_35);
                                    else
                                      m_35 = s_35;
                                    {
                                      if(((n_35 != NULL) && (n_35 != t_35)))
                                        _fail(t_35);
                                      else
                                        n_35 = t_35;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_35));
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
                              o_36 = t;
                              if(((p_35 != NULL) && (p_35 != o_36)))
                                _fail(o_36);
                              else
                                p_35 = o_36;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_35)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(m_35), not_null(n_35), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_35)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_35))));
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
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  p_37 = t;
  n_37 :
  if(match_cons(p_37, sym_Build_1))
    {
      q_37 = ATgetArgument(p_37, 0);
      o_37 :
      if(match_cons(q_37, sym_RootApp_1))
        {
          r_37 = ATgetArgument(q_37, 0);
          t = not_null(r_37);
        }
      else
        {
          if(match_cons(q_37, sym_App_2))
            {
              r_37 = ATgetArgument(q_37, 0);
              s_37 = ATgetArgument(q_37, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_37)), not_null(r_37));
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
ATerm Prim_2 (ATerm t, ATerm t_80 (ATerm), ATerm u_80 (ATerm))
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
  l_38 = t;
  k_38 :
  if(match_cons(l_38, sym_Prim_2))
    {
      m_38 = ATgetArgument(l_38, 0);
      n_38 = ATgetArgument(l_38, 1);
      {
        ATerm u_38 = NULL,w_38 = NULL;
        ATerm v_38 = NULL;
        t = SSLgetAnnotations(not_null(l_38));
        {
          v_38 = t;
          if(((u_38 != NULL) && (u_38 != v_38)))
            _fail(v_38);
          else
            u_38 = v_38;
        }
        {
          t = not_null(m_38);
          {
            ATerm y_38 = NULL;
            t = t_80(t);
            {
              w_38 = t;
              {
                t = not_null(n_38);
                {
                  ATerm c_39 = NULL;
                  t = u_80(t);
                  {
                    y_38 = t;
                    {
                      ATerm d_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(w_38), not_null(y_38)), not_null(u_38));
                      {
                        d_39 = t;
                        if(((c_39 != NULL) && (c_39 != d_39)))
                          _fail(d_39);
                        else
                          c_39 = d_39;
                      }
                      t = not_null(c_39);
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
ATerm Explode_2 (ATerm t, ATerm h_77 (ATerm), ATerm i_77 (ATerm))
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  p_39 :
  if(match_cons(q_39, sym_Explode_2))
    {
      r_39 = ATgetArgument(q_39, 0);
      s_39 = ATgetArgument(q_39, 1);
      {
        ATerm w_39 = NULL,y_39 = NULL;
        ATerm x_39 = NULL;
        t = SSLgetAnnotations(not_null(q_39));
        {
          x_39 = t;
          if(((w_39 != NULL) && (w_39 != x_39)))
            _fail(x_39);
          else
            w_39 = x_39;
        }
        {
          t = not_null(r_39);
          {
            ATerm a_40 = NULL;
            t = h_77(t);
            {
              y_39 = t;
              {
                t = not_null(s_39);
                {
                  ATerm c_40 = NULL;
                  t = i_77(t);
                  {
                    a_40 = t;
                    {
                      ATerm d_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(y_39), not_null(a_40)), not_null(w_39));
                      {
                        d_40 = t;
                        if(((c_40 != NULL) && (c_40 != d_40)))
                          _fail(d_40);
                        else
                          c_40 = d_40;
                      }
                      t = not_null(c_40);
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
ATerm Op_2 (ATerm t, ATerm t_78 (ATerm), ATerm u_78 (ATerm))
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym_Op_2))
    {
      q_40 = ATgetArgument(p_40, 0);
      r_40 = ATgetArgument(p_40, 1);
      {
        ATerm v_40 = NULL,x_40 = NULL;
        ATerm w_40 = NULL;
        t = SSLgetAnnotations(not_null(p_40));
        {
          w_40 = t;
          if(((v_40 != NULL) && (v_40 != w_40)))
            _fail(w_40);
          else
            v_40 = w_40;
        }
        {
          t = not_null(q_40);
          {
            ATerm h_41 = NULL;
            t = t_78(t);
            {
              x_40 = t;
              {
                t = not_null(r_40);
                {
                  ATerm j_41 = NULL;
                  t = u_78(t);
                  {
                    h_41 = t;
                    {
                      ATerm k_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(x_40), not_null(h_41)), not_null(v_40));
                      {
                        k_41 = t;
                        if(((j_41 != NULL) && (j_41 != k_41)))
                          _fail(k_41);
                        else
                          j_41 = k_41;
                      }
                      t = not_null(j_41);
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
ATerm pat_td_1 (ATerm t, ATerm g_81 (ATerm))
{
  ATerm q_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_81(t);
      LocalPopChoice(s_10);
    }
  else
    {
      t = q_10;
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, g_81);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            {
              ATerm x_10 = t;
              int y_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, g_81);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
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
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, g_81);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        LocalPopChoice(a_11);
                      }
                    else
                      {
                        t = z_10;
                        {
                          ATerm u_1 (ATerm t)
                          {
                            ATerm v_1 (ATerm t)
                            {
                              t = pat_td_1(t, g_81);
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
  ATerm f_42 = NULL,g_42 = NULL;
  f_42 = t;
  e_42 :
  if(match_cons(f_42, sym_Build_1))
    {
      g_42 = ATgetArgument(f_42, 0);
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_42 = NULL,p_42 = NULL;
            ATerm z_42 = NULL;
            t = not_null(g_42);
            {
              ATerm w_1 (ATerm t)
              {
                ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
                w_42 = t;
                v_41 :
                if(match_cons(w_42, sym_RootApp_1))
                  {
                    x_42 = ATgetArgument(w_42, 0);
                    w_41 :
                    if(match_cons(x_42, sym_Build_1))
                      {
                        y_42 = ATgetArgument(x_42, 0);
                        {
                          if(((o_42 != NULL) && (o_42 != y_42)))
                            _fail(y_42);
                          else
                            o_42 = y_42;
                          t = not_null(o_42);
                        }
                      }
                    else
                      {
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
                z_42 = t;
                if(((p_42 != NULL) && (p_42 != z_42)))
                  _fail(z_42);
                else
                  p_42 = z_42;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(p_42));
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            {
              ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
              ATerm j_43 = NULL;
              t = not_null(g_42);
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm e_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
                  e_43 = t;
                  b_42 :
                  if(match_cons(e_43, sym_App_2))
                    {
                      g_43 = ATgetArgument(e_43, 0);
                      i_43 = ATgetArgument(e_43, 1);
                      c_42 :
                      if(match_cons(g_43, sym_Build_1))
                        {
                          h_43 = ATgetArgument(g_43, 0);
                          {
                            if(((c_43 != NULL) && (c_43 != h_43)))
                              _fail(h_43);
                            else
                              c_43 = h_43;
                            {
                              if(((b_43 != NULL) && (b_43 != i_43)))
                                _fail(i_43);
                              else
                                b_43 = i_43;
                              t = not_null(c_43);
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
                  j_43 = t;
                  if(((d_43 != NULL) && (d_43 != j_43)))
                    _fail(j_43);
                  else
                    d_43 = j_43;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(d_43));
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
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm f_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(k_11);
          }
        else
          {
            t = f_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
  k_44 = t;
  c_44 :
  if(match_cons(k_44, sym_InfixApp_3))
    {
      l_44 = ATgetArgument(k_44, 0);
      h_44 = ATgetArgument(k_44, 1);
      g_44 = ATgetArgument(k_44, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(h_44), (ATerm) ATmakeAppl(sym_Op_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_44)), not_null(l_44))));
    }
  else
    {
      if(match_cons(k_44, sym_BAM_3))
        {
          l_44 = ATgetArgument(k_44, 0);
          h_44 = ATgetArgument(k_44, 1);
          g_44 = ATgetArgument(k_44, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(g_44))), not_null(l_44)), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_44))));
        }
      else
        {
          if(match_cons(k_44, sym_AM_2))
            {
              l_44 = ATgetArgument(k_44, 0);
              h_44 = ATgetArgument(k_44, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_44), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_44)));
            }
          else
            {
              if(match_cons(k_44, sym_MA_2))
                {
                  l_44 = ATgetArgument(k_44, 0);
                  h_44 = ATgetArgument(k_44, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_44)), not_null(h_44));
                }
              else
                {
                  if(match_cons(k_44, sym_BA_2))
                    {
                      l_44 = ATgetArgument(k_44, 0);
                      h_44 = ATgetArgument(k_44, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_44)), not_null(l_44));
                    }
                  else
                    {
                      if(match_cons(k_44, sym_Lets_2))
                        {
                          l_44 = ATgetArgument(k_44, 0);
                          h_44 = ATgetArgument(k_44, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(l_44), not_null(h_44));
                        }
                      else
                        {
                          if(match_cons(k_44, sym_LChoices_1))
                            {
                              l_44 = ATgetArgument(k_44, 0);
                              d_44 :
                              if(((ATgetType(l_44) == AT_LIST) && ((ATermList) l_44 != ATempty)))
                                {
                                  i_44 = ATgetFirst((ATermList) l_44);
                                  j_44 = (ATerm) ATgetNext((ATermList) l_44);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_44), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(j_44)));
                                }
                              else
                                {
                                  if(((ATermList) l_44 == ATempty))
                                    {
                                      t = term_x_8;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(k_44, sym_Choices_1))
                                {
                                  l_44 = ATgetArgument(k_44, 0);
                                  e_44 :
                                  if(((ATgetType(l_44) == AT_LIST) && ((ATermList) l_44 != ATempty)))
                                    {
                                      i_44 = ATgetFirst((ATermList) l_44);
                                      j_44 = (ATerm) ATgetNext((ATermList) l_44);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_44), (ATerm) ATmakeAppl(sym_Choices_1, not_null(j_44)));
                                    }
                                  else
                                    {
                                      if(((ATermList) l_44 == ATempty))
                                        {
                                          t = term_x_8;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(k_44, sym_Seqs_1))
                                    {
                                      l_44 = ATgetArgument(k_44, 0);
                                      f_44 :
                                      if(((ATgetType(l_44) == AT_LIST) && ((ATermList) l_44 != ATempty)))
                                        {
                                          i_44 = ATgetFirst((ATermList) l_44);
                                          j_44 = (ATerm) ATgetNext((ATermList) l_44);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_44), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_44)));
                                        }
                                      else
                                        {
                                          if(((ATermList) l_44 == ATempty))
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
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
  f_46 = t;
  a_46 :
  if(match_cons(f_46, sym__2))
    {
      g_46 = ATgetArgument(f_46, 0);
      l_46 = ATgetArgument(f_46, 1);
      b_46 :
      if(match_cons(g_46, sym__2))
        {
          h_46 = ATgetArgument(g_46, 0);
          i_46 = ATgetArgument(g_46, 1);
          c_46 :
          if(match_cons(l_46, sym__2))
            {
              m_46 = ATgetArgument(l_46, 0);
              n_46 = ATgetArgument(l_46, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_46)), not_null(h_46)), (ATerm) ATinsert(CheckATermList(not_null(n_46)), not_null(i_46)));
            }
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
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
  v_46 = t;
  u_46 :
  if(((ATgetType(v_46) == AT_LIST) && ((ATermList) v_46 != ATempty)))
    {
      w_46 = ATgetFirst((ATermList) v_46);
      x_46 = (ATerm) ATgetNext((ATermList) v_46);
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_46), not_null(x_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm f_47 = NULL;
  f_47 = t;
  c_47 :
  if(((ATermList) f_47 == ATempty))
    {
      t = term_m_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm o_102 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, o_102);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  ATerm t_47 (ATerm t)
  {
    ATerm q_47 = NULL;
    ATerm r_47 = NULL;
    t = not_null(n_47);
    {
      ATerm q_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_11;
        }
      {
        t = new_0(t);
        {
          r_47 = t;
          if(((q_47 != NULL) && (q_47 != r_47)))
            _fail(r_47);
          else
            q_47 = r_47;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_47)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_47)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_47))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_47))));
    return(t);
  }
  ATerm u_47 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_l_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_47))));
    return(t);
  }
  n_47 = t;
  l_47 :
  if(match_cons(n_47, sym_Var_1))
    {
      o_47 = ATgetArgument(n_47, 0);
      {
        ATerm s_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_47(t);
            LocalPopChoice(v_11);
          }
        else
          {
            t = s_11;
            t = u_47(t);
          }
      }
    }
  else
    {
      t = t_47(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm f_48 = NULL,g_48 = NULL;
  f_48 = t;
  e_48 :
  if(match_cons(f_48, sym_Var_1))
    {
      g_48 = ATgetArgument(f_48, 0);
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_48 = NULL,l_48 = NULL;
            ATerm k_48 = NULL;
            t = SSLgetAnnotations(not_null(f_48));
            {
              k_48 = t;
              if(((j_48 != NULL) && (j_48 != k_48)))
                _fail(k_48);
              else
                j_48 = k_48;
            }
            {
              t = not_null(g_48);
              {
                ATerm n_49 = NULL;
                t = o_0(t);
                {
                  l_48 = t;
                  {
                    ATerm p_51 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(l_48)), not_null(j_48));
                    {
                      p_51 = t;
                      if(((n_49 != NULL) && (n_49 != p_51)))
                        _fail(p_51);
                      else
                        n_49 = p_51;
                    }
                    t = not_null(n_49);
                  }
                }
              }
            }
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm s_51 = NULL,u_51 = NULL;
              ATerm t_51 = NULL;
              t = SSLgetAnnotations(not_null(f_48));
              {
                t_51 = t;
                if(((s_51 != NULL) && (s_51 != t_51)))
                  _fail(t_51);
                else
                  s_51 = t_51;
              }
              {
                t = not_null(g_48);
                {
                  ATerm w_51 = NULL;
                  t = o_0(t);
                  {
                    u_51 = t;
                    {
                      ATerm x_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_51)), not_null(s_51));
                      {
                        x_51 = t;
                        if(((w_51 != NULL) && (w_51 != x_51)))
                          _fail(x_51);
                        else
                          w_51 = x_51;
                      }
                      t = not_null(w_51);
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
  ATerm l_52 = NULL,m_52 = NULL,q_52 = NULL;
  l_52 = t;
  k_52 :
  if(match_cons(l_52, sym_Prim_2))
    {
      m_52 = ATgetArgument(l_52, 0);
      q_52 = ATgetArgument(l_52, 1);
      {
        ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
        ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
        t = not_null(q_52);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm y_11 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_11;
              }
            return(t);
          }
          t = fetch_1(t, y_1);
          {
            t = not_null(q_52);
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
                  w_52 = t;
                  i_52 :
                  if(match_cons(w_52, sym__2))
                    {
                      x_52 = ATgetArgument(w_52, 0);
                      y_52 = ATgetArgument(w_52, 1);
                      j_52 :
                      if(match_cons(y_52, sym__2))
                        {
                          z_52 = ATgetArgument(y_52, 0);
                          a_53 = ATgetArgument(y_52, 1);
                          {
                            if(((t_52 != NULL) && (t_52 != x_52)))
                              _fail(x_52);
                            else
                              t_52 = x_52;
                            {
                              if(((u_52 != NULL) && (u_52 != z_52)))
                                _fail(z_52);
                              else
                                u_52 = z_52;
                              if(((v_52 != NULL) && (v_52 != a_53)))
                                _fail(a_53);
                              else
                                v_52 = a_53;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(u_52)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(m_52), not_null(v_52))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm j_91 (ATerm), ATerm k_91 (ATerm))
{
  ATerm d_53 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_91(t);
        t = d_53(t);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = k_91(t);
      }
    return(t);
  }
  t = d_53(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm m_91 (ATerm))
{
  t = repeat_2(t, m_91, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm i_53 = NULL;
  i_53 = t;
  h_53 :
  if(match_cons(i_53, sym_Wld_0))
    {
      ATerm k_53 = NULL,m_53 = NULL;
      ATerm f_12;
      f_12 = t;
      {
        ATerm l_53 = NULL;
        t = SSLgetAnnotations(not_null(i_53));
        {
          l_53 = t;
          if(((k_53 != NULL) && (k_53 != l_53)))
            _fail(l_53);
          else
            k_53 = l_53;
        }
      }
      t = f_12;
      {
        ATerm n_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(k_53));
        {
          n_53 = t;
          if(((m_53 != NULL) && (m_53 != n_53)))
            _fail(n_53);
          else
            m_53 = n_53;
        }
        t = not_null(m_53);
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
      ATerm a_2 (ATerm t)
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
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
      t = g_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm b_77 (ATerm), ATerm c_77 (ATerm))
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
  x_53 = t;
  w_53 :
  if(match_cons(x_53, sym_App_2))
    {
      y_53 = ATgetArgument(x_53, 0);
      z_53 = ATgetArgument(x_53, 1);
      {
        ATerm d_54 = NULL,f_54 = NULL;
        ATerm e_54 = NULL;
        t = SSLgetAnnotations(not_null(x_53));
        {
          e_54 = t;
          if(((d_54 != NULL) && (d_54 != e_54)))
            _fail(e_54);
          else
            d_54 = e_54;
        }
        {
          t = not_null(y_53);
          {
            ATerm h_54 = NULL;
            t = b_77(t);
            {
              f_54 = t;
              {
                t = not_null(z_53);
                {
                  ATerm j_54 = NULL;
                  t = c_77(t);
                  {
                    h_54 = t;
                    {
                      ATerm k_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(f_54), not_null(h_54)), not_null(d_54));
                      {
                        k_54 = t;
                        if(((j_54 != NULL) && (j_54 != k_54)))
                          _fail(k_54);
                        else
                          j_54 = k_54;
                      }
                      t = not_null(j_54);
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
ATerm Con_3 (ATerm t, ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm a_77 (ATerm))
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
  x_54 = t;
  w_54 :
  if(match_cons(x_54, sym_Con_3))
    {
      y_54 = ATgetArgument(x_54, 0);
      z_54 = ATgetArgument(x_54, 1);
      a_55 = ATgetArgument(x_54, 2);
      {
        ATerm f_55 = NULL,h_55 = NULL;
        ATerm g_55 = NULL;
        t = SSLgetAnnotations(not_null(x_54));
        {
          g_55 = t;
          if(((f_55 != NULL) && (f_55 != g_55)))
            _fail(g_55);
          else
            f_55 = g_55;
        }
        {
          t = not_null(y_54);
          {
            ATerm j_55 = NULL;
            t = y_76(t);
            {
              h_55 = t;
              {
                t = not_null(z_54);
                {
                  ATerm l_55 = NULL;
                  t = z_76(t);
                  {
                    j_55 = t;
                    {
                      t = not_null(a_55);
                      {
                        ATerm n_55 = NULL;
                        t = a_77(t);
                        {
                          l_55 = t;
                          {
                            ATerm o_55 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(h_55), not_null(j_55), not_null(l_55)), not_null(f_55));
                            {
                              o_55 = t;
                              if(((n_55 != NULL) && (n_55 != o_55)))
                                _fail(o_55);
                              else
                                n_55 = o_55;
                            }
                            t = not_null(n_55);
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
  ATerm j_12 = t;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
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
      t = j_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL;
  z_55 = t;
  x_55 :
  if(match_cons(z_55, sym_SRule_1))
    {
      a_56 = ATgetArgument(z_55, 0);
      y_55 :
      if(match_cons(a_56, sym_StratRule_3))
        {
          b_56 = ATgetArgument(a_56, 0);
          c_56 = ATgetArgument(a_56, 1);
          d_56 = ATgetArgument(a_56, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_56)), (ATerm) ATmakeAppl(sym_Where_1, not_null(d_56))), not_null(b_56)));
        }
      else
        {
          if(match_cons(a_56, sym_Rule_3))
            {
              b_56 = ATgetArgument(a_56, 0);
              c_56 = ATgetArgument(a_56, 1);
              d_56 = ATgetArgument(a_56, 2);
              {
                t = not_null(b_56);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(c_56);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(c_56))), (ATerm) ATmakeAppl(sym_Where_1, not_null(d_56))), (ATerm) ATmakeAppl(sym_Match_1, not_null(b_56))));
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
ATerm Scope_2 (ATerm t, ATerm q_80 (ATerm), ATerm r_80 (ATerm))
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
  t_56 = t;
  s_56 :
  if(match_cons(t_56, sym_Scope_2))
    {
      u_56 = ATgetArgument(t_56, 0);
      v_56 = ATgetArgument(t_56, 1);
      {
        ATerm z_56 = NULL,b_57 = NULL;
        ATerm a_57 = NULL;
        t = SSLgetAnnotations(not_null(t_56));
        {
          a_57 = t;
          if(((z_56 != NULL) && (z_56 != a_57)))
            _fail(a_57);
          else
            z_56 = a_57;
        }
        {
          t = not_null(u_56);
          {
            ATerm d_57 = NULL;
            t = q_80(t);
            {
              b_57 = t;
              {
                t = not_null(v_56);
                {
                  ATerm f_57 = NULL;
                  t = r_80(t);
                  {
                    d_57 = t;
                    {
                      ATerm g_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(b_57), not_null(d_57)), not_null(z_56));
                      {
                        g_57 = t;
                        if(((f_57 != NULL) && (f_57 != g_57)))
                          _fail(g_57);
                        else
                          f_57 = g_57;
                      }
                      t = not_null(f_57);
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
ATerm oncetd_1 (ATerm t, ATerm p_106 (ATerm))
{
  ATerm m_57 (ATerm t)
  {
    ATerm s_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_106(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = s_12;
        t = _one(t, m_57);
      }
    return(t);
  }
  t = m_57(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL;
  b_58 = t;
  z_57 :
  if(match_cons(b_58, sym_SRule_1))
    {
      c_58 = ATgetArgument(b_58, 0);
      a_58 :
      if(match_cons(c_58, sym_Rule_3))
        {
          d_58 = ATgetArgument(c_58, 0);
          e_58 = ATgetArgument(c_58, 1);
          f_58 = ATgetArgument(c_58, 2);
          {
            ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL;
            ATerm v_58 = NULL;
            ATerm m_59 = NULL;
            t = new_0(t);
            {
              v_58 = t;
              {
                if(((s_58 != NULL) && (s_58 != v_58)))
                  _fail(v_58);
                else
                  s_58 = v_58;
                {
                  t = not_null(d_58);
                  {
                    ATerm u_59 = NULL;
                    ATerm c_2 (ATerm t)
                    {
                      ATerm w_58 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,l_59 = NULL;
                      w_58 = t;
                      q_57 :
                      if(match_cons(w_58, sym_Con_3))
                        {
                          e_59 = ATgetArgument(w_58, 0);
                          g_59 = ATgetArgument(w_58, 1);
                          l_59 = ATgetArgument(w_58, 2);
                          r_57 :
                          if(match_cons(e_59, sym_Var_1))
                            {
                              f_59 = ATgetArgument(e_59, 0);
                              {
                                if(((r_58 != NULL) && (r_58 != f_59)))
                                  _fail(f_59);
                                else
                                  r_58 = f_59;
                                {
                                  if(((p_58 != NULL) && (p_58 != g_59)))
                                    _fail(g_59);
                                  else
                                    p_58 = g_59;
                                  {
                                    if(((n_58 != NULL) && (n_58 != l_59)))
                                      _fail(l_59);
                                    else
                                      n_58 = l_59;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_58));
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
                      m_59 = t;
                      {
                        if(((t_58 != NULL) && (t_58 != m_59)))
                          _fail(m_59);
                        else
                          t_58 = m_59;
                        {
                          t = not_null(e_58);
                          {
                            ATerm d_2 (ATerm t)
                            {
                              ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL;
                              n_59 = t;
                              u_57 :
                              if(match_cons(n_59, sym_Con_3))
                                {
                                  o_59 = ATgetArgument(n_59, 0);
                                  q_59 = ATgetArgument(n_59, 1);
                                  r_59 = ATgetArgument(n_59, 2);
                                  v_57 :
                                  if(match_cons(o_59, sym_Var_1))
                                    {
                                      p_59 = ATgetArgument(o_59, 0);
                                      w_57 :
                                      if(match_cons(r_59, sym_Call_2))
                                        {
                                          s_59 = ATgetArgument(r_59, 0);
                                          t_59 = ATgetArgument(r_59, 1);
                                          x_57 :
                                          if(((ATermList) t_59 == ATempty))
                                            {
                                              {
                                                if(((r_58 != NULL) && (r_58 != p_59)))
                                                  _fail(p_59);
                                                else
                                                  r_58 = p_59;
                                                {
                                                  if(((q_58 != NULL) && (q_58 != q_59)))
                                                    _fail(q_59);
                                                  else
                                                    q_58 = q_59;
                                                  {
                                                    if(((o_58 != NULL) && (o_58 != s_59)))
                                                      _fail(s_59);
                                                    else
                                                      o_58 = s_59;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_58));
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
                              u_59 = t;
                              if(((u_58 != NULL) && (u_58 != u_59)))
                                _fail(u_59);
                              else
                                u_58 = u_59;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_58)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_58), not_null(u_58), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_58), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(o_58), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_58), not_null(q_58), term_l_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(r_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(s_58)))))));
          }
        }
      else
        {
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
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        {
          ATerm z_12 = t;
          int a_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(a_13);
            }
          else
            {
              t = z_12;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, e_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm z_104 (ATerm))
{
  t = z_104(t);
  {
    ATerm f_2 (ATerm t)
    {
      t = topdown_1(t, z_104);
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
              ATerm m_13 = t;
              int n_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(n_13);
                }
              else
                {
                  t = m_13;
                  {
                    ATerm o_13 = t;
                    int p_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
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
                              t = Mapp_0(t);
                              LocalPopChoice(r_13);
                            }
                          else
                            {
                              t = q_13;
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
  ATerm p_60 = NULL;
  p_60 = t;
  o_60 :
  if(match_cons(p_60, sym__0))
    {
      ATerm r_60 = NULL,y_60 = NULL;
      ATerm s_13;
      s_13 = t;
      {
        ATerm s_60 = NULL;
        t = SSLgetAnnotations(not_null(p_60));
        {
          s_60 = t;
          if(((r_60 != NULL) && (r_60 != s_60)))
            _fail(s_60);
          else
            r_60 = s_60;
        }
      }
      t = s_13;
      {
        ATerm z_60 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(r_60));
        {
          z_60 = t;
          if(((y_60 != NULL) && (y_60 != z_60)))
            _fail(z_60);
          else
            y_60 = z_60;
        }
        t = not_null(y_60);
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
  ATerm o_61 = NULL;
  ATerm q_61 = NULL,v_61 = NULL,h_62 = NULL,r_62 = NULL;
  o_61 = t;
  {
    ATerm t_13;
    t_13 = t;
    {
      ATerm w_61 = NULL;
      ATerm y_61 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL;
      t = not_null(o_61);
      {
        w_61 = t;
        {
          t = SSL_explode_term(not_null(w_61));
          {
            y_61 = t;
            g_61 :
            if(match_cons(y_61, sym__2))
              {
                d_62 = ATgetArgument(y_61, 0);
                e_62 = ATgetArgument(y_61, 1);
                h_61 :
                if(match_string(d_62, ""))
                  {
                    i_61 :
                    if(((ATgetType(e_62) == AT_LIST) && ((ATermList) e_62 != ATempty)))
                      {
                        f_62 = ATgetFirst((ATermList) e_62);
                        g_62 = (ATerm) ATgetNext((ATermList) e_62);
                        {
                          if(((q_61 != NULL) && (q_61 != f_62)))
                            _fail(f_62);
                          else
                            q_61 = f_62;
                          if(((v_61 != NULL) && (v_61 != g_62)))
                            _fail(g_62);
                          else
                            v_61 = g_62;
                        }
                      }
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
    t = t_13;
    {
      ATerm w_13;
      w_13 = t;
      {
        ATerm i_62 = NULL;
        t = term_s_9;
        {
          i_62 = t;
          if(((h_62 != NULL) && (h_62 != i_62)))
            _fail(i_62);
          else
            h_62 = i_62;
        }
      }
      t = w_13;
      {
        t = SSL_mkterm(not_null(h_62), not_null(v_61));
        {
          r_62 = t;
          t = not_null(r_62);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm e_63 = NULL;
  ATerm g_63 = NULL,h_63 = NULL;
  e_63 = t;
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
          b_63 :
          if(match_cons(k_63, sym__2))
            {
              l_63 = ATgetArgument(k_63, 0);
              m_63 = ATgetArgument(k_63, 1);
              c_63 :
              if(match_string(l_63, ""))
                {
                  d_63 :
                  if(((ATgetType(m_63) == AT_LIST) && ((ATermList) m_63 != ATempty)))
                    {
                      n_63 = ATgetFirst((ATermList) m_63);
                      o_63 = (ATerm) ATgetNext((ATermList) m_63);
                      {
                        if(((h_63 != NULL) && (h_63 != n_63)))
                          _fail(n_63);
                        else
                          h_63 = n_63;
                        if(((g_63 != NULL) && (g_63 != o_63)))
                          _fail(o_63);
                        else
                          g_63 = o_63;
                      }
                    }
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
    t = not_null(h_63);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm i_104 (ATerm))
{
  ATerm b_64 = NULL,d_64 = NULL,f_64 = NULL;
  ATerm h_64 (ATerm t)
  {
    ATerm z_13 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_63 = NULL,z_63 = NULL;
        ATerm e_14;
        e_14 = t;
        {
          ATerm y_63 = NULL;
          t = map_1(t, Thd_0);
          {
            t = i_104(t);
            {
              y_63 = t;
              if(((x_63 != NULL) && (x_63 != y_63)))
                _fail(y_63);
              else
                x_63 = y_63;
            }
          }
        }
        t = e_14;
        {
          ATerm a_64 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = h_64(t);
            {
              a_64 = t;
              if(((z_63 != NULL) && (z_63 != a_64)))
                _fail(a_64);
              else
                z_63 = a_64;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(z_63)), not_null(x_63));
        }
        LocalPopChoice(d_14);
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
  t = h_64(t);
  {
    ATerm f_14;
    f_14 = t;
    {
      ATerm c_64 = NULL;
      c_64 = t;
      if(((b_64 != NULL) && (b_64 != c_64)))
        _fail(c_64);
      else
        b_64 = c_64;
    }
    t = f_14;
    {
      ATerm g_14;
      g_14 = t;
      {
        ATerm e_64 = NULL;
        t = term_s_9;
        {
          e_64 = t;
          if(((d_64 != NULL) && (d_64 != e_64)))
            _fail(e_64);
          else
            d_64 = e_64;
        }
      }
      t = g_14;
      {
        t = SSL_mkterm(not_null(d_64), not_null(b_64));
        {
          f_64 = t;
          t = not_null(f_64);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm r_64 = NULL;
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL;
  r_64 = t;
  {
    ATerm w_64 = NULL;
    ATerm x_64 = NULL;
    t = new_0(t);
    {
      w_64 = t;
      {
        if(((t_64 != NULL) && (t_64 != w_64)))
          _fail(w_64);
        else
          t_64 = w_64;
        {
          ATerm y_64 = NULL;
          t = new_0(t);
          {
            x_64 = t;
            {
              if(((u_64 != NULL) && (u_64 != x_64)))
                _fail(x_64);
              else
                u_64 = x_64;
              {
                t = new_0(t);
                {
                  y_64 = t;
                  if(((v_64 != NULL) && (v_64 != y_64)))
                    _fail(y_64);
                  else
                    v_64 = y_64;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_64)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_64)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_64)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_64))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(t_64), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_14), term_m_14)), not_null(u_64), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_64)), not_null(v_64), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_64)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL;
  k_65 = t;
  j_65 :
  if(match_cons(k_65, sym__2))
    {
      l_65 = ATgetArgument(k_65, 0);
      m_65 = ATgetArgument(k_65, 1);
      {
        ATerm p_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(l_65), not_null(m_65));
            LocalPopChoice(w_14);
          }
        else
          {
            t = p_14;
            t = SSL_subtr(not_null(l_65), not_null(m_65));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm e_97 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    ATerm b_66 = NULL,c_66 = NULL,o_66 = NULL;
    b_66 = t;
    t_65 :
    if(match_cons(b_66, sym__2))
      {
        c_66 = ATgetArgument(b_66, 0);
        o_66 = ATgetArgument(b_66, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(c_66), not_null(o_66), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm r_66 = NULL,s_66 = NULL,u_66 = NULL,v_66 = NULL;
    r_66 = t;
    v_65 :
    if(match_cons(r_66, sym__3))
      {
        s_66 = ATgetArgument(r_66, 0);
        u_66 = ATgetArgument(r_66, 1);
        v_66 = ATgetArgument(r_66, 2);
        w_65 :
        if(match_int(s_66, 0))
          {
            t = not_null(v_66);
          }
        else
          {
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
    ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL;
    y_66 = t;
    a_66 :
    if(match_cons(y_66, sym__3))
      {
        z_66 = ATgetArgument(y_66, 0);
        a_67 = ATgetArgument(y_66, 1);
        b_67 = ATgetArgument(y_66, 2);
        {
          ATerm q_67 = NULL,s_67 = NULL;
          ATerm x_14;
          x_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_66), term_u_6);
            t = geq_0(t);
          }
          t = x_14;
          {
            ATerm f_15;
            f_15 = t;
            {
              ATerm r_67 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_66), term_u_6);
              {
                t = subt_0(t);
                {
                  r_67 = t;
                  if(((q_67 != NULL) && (q_67 != r_67)))
                    _fail(r_67);
                  else
                    q_67 = r_67;
                }
              }
            }
            t = f_15;
            {
              ATerm t_67 = NULL;
              t = not_null(a_67);
              {
                t = e_97(t);
                {
                  t_67 = t;
                  if(((s_67 != NULL) && (s_67 != t_67)))
                    _fail(t_67);
                  else
                    s_67 = t_67;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(q_67), not_null(a_67), (ATerm) ATinsert(CheckATermList(not_null(b_67)), not_null(s_67)));
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
  ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
  h_68 = t;
  g_68 :
  if(match_cons(h_68, sym__2))
    {
      i_68 = ATgetArgument(h_68, 0);
      j_68 = ATgetArgument(h_68, 1);
      {
        ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL;
        ATerm p_68 = NULL;
        ATerm q_68 = NULL;
        t = new_0(t);
        {
          p_68 = t;
          {
            if(((m_68 != NULL) && (m_68 != p_68)))
              _fail(p_68);
            else
              m_68 = p_68;
            {
              ATerm r_68 = NULL;
              t = new_0(t);
              {
                q_68 = t;
                {
                  if(((n_68 != NULL) && (n_68 != q_68)))
                    _fail(q_68);
                  else
                    n_68 = q_68;
                  {
                    t = new_0(t);
                    {
                      r_68 = t;
                      if(((o_68 != NULL) && (o_68 != r_68)))
                        _fail(r_68);
                      else
                        o_68 = r_68;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_68)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_68))), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_68)))), (ATerm) ATmakeAppl(sym_Op_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_68))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_68))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(m_68), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_14), term_m_14)), not_null(n_68), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_68)), not_null(o_68), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_68)));
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
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL;
  z_68 = t;
  x_68 :
  if(match_cons(z_68, sym__2))
    {
      a_69 = ATgetArgument(z_68, 0);
      b_69 = ATgetArgument(z_68, 1);
      y_68 :
      if(((ATermList) b_69 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm m_102 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, m_102);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  f_69 = t;
  e_69 :
  if(((ATgetType(f_69) == AT_LIST) && ((ATermList) f_69 != ATempty)))
    {
      g_69 = ATgetFirst((ATermList) f_69);
      h_69 = (ATerm) ATgetNext((ATermList) f_69);
      t = not_null(h_69);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,s_69 = NULL;
  o_69 = t;
  m_69 :
  if(((ATgetType(o_69) == AT_LIST) && ((ATermList) o_69 != ATempty)))
    {
      p_69 = ATgetFirst((ATermList) o_69);
      s_69 = (ATerm) ATgetNext((ATermList) o_69);
      n_69 :
      if(((ATermList) s_69 == ATempty))
        {
          t = not_null(p_69);
        }
      else
        {
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
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
  ATerm o_72 (ATerm t)
  {
    ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,q_71 = NULL;
    ATerm i_15;
    i_15 = t;
    {
      ATerm d_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
      ATerm e_71 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_70), term_u_6);
      {
        t = add_0(t);
        {
          e_71 = t;
          if(((d_71 != NULL) && (d_71 != e_71)))
            _fail(e_71);
          else
            d_71 = e_71;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_71), term_j_15);
        {
          t = copy_1(t, new_0);
          {
            f_71 = t;
            e_70 :
            if(((ATgetType(f_71) == AT_LIST) && ((ATermList) f_71 != ATempty)))
              {
                g_71 = ATgetFirst((ATermList) f_71);
                h_71 = (ATerm) ATgetNext((ATermList) f_71);
                {
                  ATerm i_71 = NULL;
                  if(((v_70 != NULL) && (v_70 != g_71)))
                    _fail(g_71);
                  else
                    v_70 = g_71;
                  {
                    if(((w_70 != NULL) && (w_70 != h_71)))
                      _fail(h_71);
                    else
                      w_70 = h_71;
                    {
                      t = not_null(w_70);
                      {
                        ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL;
                        t = last_0(t);
                        {
                          i_71 = t;
                          {
                            if(((u_70 != NULL) && (u_70 != i_71)))
                              _fail(i_71);
                            else
                              u_70 = i_71;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_70)), not_null(v_70)), not_null(w_70));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    j_71 = t;
                                    d_70 :
                                    if(match_cons(j_71, sym__6))
                                      {
                                        k_71 = ATgetArgument(j_71, 0);
                                        l_71 = ATgetArgument(j_71, 1);
                                        m_71 = ATgetArgument(j_71, 2);
                                        n_71 = ATgetArgument(j_71, 3);
                                        o_71 = ATgetArgument(j_71, 4);
                                        p_71 = ATgetArgument(j_71, 5);
                                        {
                                          if(((x_70 != NULL) && (x_70 != k_71)))
                                            _fail(k_71);
                                          else
                                            x_70 = k_71;
                                          {
                                            if(((y_70 != NULL) && (y_70 != l_71)))
                                              _fail(l_71);
                                            else
                                              y_70 = l_71;
                                            {
                                              if(((z_70 != NULL) && (z_70 != m_71)))
                                                _fail(m_71);
                                              else
                                                z_70 = m_71;
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
                                                  if(((c_71 != NULL) && (c_71 != p_71)))
                                                    _fail(p_71);
                                                  else
                                                    c_71 = p_71;
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
    t = i_15;
    {
      ATerm r_71 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_71)), not_null(z_70)), not_null(w_70));
      {
        t = concat_0(t);
        {
          r_71 = t;
          if(((q_71 != NULL) && (q_71 != r_71)))
            _fail(r_71);
          else
            q_71 = r_71;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(p_70), term_k_15), not_null(y_70), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(q_71)), not_null(v_70)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_70))), (ATerm) ATmakeAppl(sym_Op_2, not_null(p_70), not_null(a_71)))), (ATerm)ATmakeAppl(sym_Op_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_70))), (ATerm) ATmakeAppl(sym_Op_2, not_null(p_70), not_null(c_71)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_70))))));
    }
    return(t);
  }
  ATerm p_72 (ATerm t)
  {
    ATerm t_71 = NULL;
    ATerm u_71 = NULL;
    t = new_0(t);
    {
      u_71 = t;
      if(((t_71 != NULL) && (t_71 != u_71)))
        _fail(u_71);
      else
        t_71 = u_71;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(p_70), term_k_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(p_70), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(p_70), (ATerm) ATempty))), term_l_11))));
    return(t);
  }
  ATerm q_72 (ATerm t)
  {
    ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,m_72 = NULL;
    ATerm l_15;
    l_15 = t;
    {
      ATerm e_72 = NULL;
      ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL;
      t = new_0(t);
      {
        e_72 = t;
        {
          if(((x_71 != NULL) && (x_71 != e_72)))
            _fail(e_72);
          else
            x_71 = e_72;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_70), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_71)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  f_72 = t;
                  j_70 :
                  if(match_cons(f_72, sym__6))
                    {
                      g_72 = ATgetArgument(f_72, 0);
                      h_72 = ATgetArgument(f_72, 1);
                      i_72 = ATgetArgument(f_72, 2);
                      j_72 = ATgetArgument(f_72, 3);
                      k_72 = ATgetArgument(f_72, 4);
                      l_72 = ATgetArgument(f_72, 5);
                      {
                        if(((y_71 != NULL) && (y_71 != g_72)))
                          _fail(g_72);
                        else
                          y_71 = g_72;
                        {
                          if(((z_71 != NULL) && (z_71 != h_72)))
                            _fail(h_72);
                          else
                            z_71 = h_72;
                          {
                            if(((a_72 != NULL) && (a_72 != i_72)))
                              _fail(i_72);
                            else
                              a_72 = i_72;
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
                                if(((d_72 != NULL) && (d_72 != l_72)))
                                  _fail(l_72);
                                else
                                  d_72 = l_72;
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
      ATerm n_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_72), not_null(c_72));
      {
        t = conc_0(t);
        {
          n_72 = t;
          if(((m_72 != NULL) && (m_72 != n_72)))
            _fail(n_72);
          else
            m_72 = n_72;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(p_70), term_r_15), not_null(z_71), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(m_72)), not_null(x_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(p_70), not_null(b_72)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(p_70), not_null(d_72)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_71))))));
    }
    return(t);
  }
  o_70 = t;
  l_70 :
  if(match_cons(o_70, sym__3))
    {
      p_70 = ATgetArgument(o_70, 0);
      q_70 = ATgetArgument(o_70, 1);
      r_70 = ATgetArgument(o_70, 2);
      m_70 :
      if(match_string(q_70, "T"))
        {
          n_70 :
          if(match_int(r_70, 0))
            {
              ATerm w_15 = t;
              int e_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_72(t);
                  LocalPopChoice(e_16);
                }
              else
                {
                  t = w_15;
                  t = p_72(t);
                }
            }
          else
            {
              t = o_72(t);
            }
        }
      else
        {
          if(match_string(q_70, "D"))
            {
              t = q_72(t);
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
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL;
  f_73 = t;
  c_73 :
  if(match_cons(f_73, sym__2))
    {
      g_73 = ATgetArgument(f_73, 0);
      l_73 = ATgetArgument(f_73, 1);
      d_73 :
      if(match_cons(g_73, sym__2))
        {
          h_73 = ATgetArgument(g_73, 0);
          k_73 = ATgetArgument(g_73, 1);
          e_73 :
          if(match_cons(h_73, sym_Mod_2))
            {
              i_73 = ATgetArgument(h_73, 0);
              j_73 = ATgetArgument(h_73, 1);
              {
                ATerm q_73 = NULL;
                ATerm r_73 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_73), not_null(j_73), not_null(k_73));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      r_73 = t;
                      if(((q_73 != NULL) && (q_73 != r_73)))
                        _fail(r_73);
                      else
                        q_73 = r_73;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_73), not_null(l_73));
              }
            }
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
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL;
  x_73 = t;
  v_73 :
  if(match_cons(x_73, sym__5))
    {
      y_73 = ATgetArgument(x_73, 0);
      b_74 = ATgetArgument(x_73, 1);
      c_74 = ATgetArgument(x_73, 2);
      d_74 = ATgetArgument(x_73, 3);
      e_74 = ATgetArgument(x_73, 4);
      w_73 :
      if(((ATgetType(y_73) == AT_LIST) && ((ATermList) y_73 != ATempty)))
        {
          z_73 = ATgetFirst((ATermList) y_73);
          a_74 = (ATerm) ATgetNext((ATermList) y_73);
          t = (ATerm) ATmakeAppl(sym__5, not_null(a_74), not_null(b_74), not_null(c_74), not_null(d_74), (ATerm) ATinsert(CheckATermList(not_null(e_74)), not_null(z_73)));
        }
      else
        {
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
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL;
  p_74 = t;
  n_74 :
  if(match_cons(p_74, sym__2))
    {
      q_74 = ATgetArgument(p_74, 0);
      r_74 = ATgetArgument(p_74, 1);
      o_74 :
      if(((ATgetType(r_74) == AT_LIST) && ((ATermList) r_74 != ATempty)))
        {
          s_74 = ATgetFirst((ATermList) r_74);
          t_74 = (ATerm) ATgetNext((ATermList) r_74);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_74)), not_null(s_74)), not_null(t_74));
        }
      else
        {
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
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
  a_75 = t;
  z_74 :
  if(match_cons(a_75, sym__2))
    {
      b_75 = ATgetArgument(a_75, 0);
      c_75 = ATgetArgument(a_75, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_75)), not_null(b_75));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL;
  m_75 = t;
  h_75 :
  if(match_cons(m_75, sym__2))
    {
      n_75 = ATgetArgument(m_75, 0);
      q_75 = ATgetArgument(m_75, 1);
      i_75 :
      if(((ATgetType(n_75) == AT_LIST) && ((ATermList) n_75 != ATempty)))
        {
          o_75 = ATgetFirst((ATermList) n_75);
          p_75 = (ATerm) ATgetNext((ATermList) n_75);
          j_75 :
          if(((ATgetType(q_75) == AT_LIST) && ((ATermList) q_75 != ATempty)))
            {
              r_75 = ATgetFirst((ATermList) q_75);
              s_75 = (ATerm) ATgetNext((ATermList) q_75);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(o_75), not_null(r_75)), (ATerm) ATmakeAppl(sym__2, not_null(p_75), not_null(s_75)));
            }
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
  ATerm c_76 = NULL,d_76 = NULL,e_76 = NULL;
  c_76 = t;
  z_75 :
  if(match_cons(c_76, sym__2))
    {
      d_76 = ATgetArgument(c_76, 0);
      e_76 = ATgetArgument(c_76, 1);
      a_76 :
      if(((ATermList) d_76 == ATempty))
        {
          b_76 :
          if(((ATermList) e_76 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm g_102 (ATerm), ATerm h_102 (ATerm))
{
  ATerm g_76 (ATerm t)
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_102(t);
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        {
          t = f_102(t);
          {
            t = _2(t, h_102, g_76);
            t = g_102(t);
          }
        }
      }
    return(t);
  }
  t = g_76(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm j_102 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, j_102);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
  r_76 = t;
  p_76 :
  if(((ATgetType(r_76) == AT_LIST) && ((ATermList) r_76 != ATempty)))
    {
      s_76 = ATgetFirst((ATermList) r_76);
      v_76 = (ATerm) ATgetNext((ATermList) r_76);
      q_76 :
      if(match_cons(s_76, sym__2))
        {
          t_76 = ATgetArgument(s_76, 0);
          u_76 = ATgetArgument(s_76, 1);
          {
            ATerm e_77 = NULL,f_77 = NULL,n_77 = NULL,t_77 = NULL;
            ATerm n_16;
            n_16 = t;
            {
              ATerm g_77 = NULL;
              ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL;
              t = not_null(u_76);
              {
                g_77 = t;
                {
                  t = SSL_explode_term(not_null(g_77));
                  {
                    k_77 = t;
                    k_76 :
                    if(match_cons(k_77, sym__2))
                      {
                        l_77 = ATgetArgument(k_77, 0);
                        m_77 = ATgetArgument(k_77, 1);
                        {
                          if(((e_77 != NULL) && (e_77 != l_77)))
                            _fail(l_77);
                          else
                            e_77 = l_77;
                          if(((f_77 != NULL) && (f_77 != m_77)))
                            _fail(m_77);
                          else
                            f_77 = m_77;
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
                ATerm o_77 = NULL;
                ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL;
                t = not_null(t_76);
                {
                  o_77 = t;
                  {
                    t = SSL_explode_term(not_null(o_77));
                    {
                      q_77 = t;
                      n_76 :
                      if(match_cons(q_77, sym__2))
                        {
                          r_77 = ATgetArgument(q_77, 0);
                          s_77 = ATgetArgument(q_77, 1);
                          {
                            if(((e_77 != NULL) && (e_77 != r_77)))
                              _fail(r_77);
                            else
                              e_77 = r_77;
                            if(((n_77 != NULL) && (n_77 != s_77)))
                              _fail(s_77);
                            else
                              n_77 = s_77;
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
                ATerm u_77 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_77), not_null(f_77));
                {
                  t = zip_1(t, _id);
                  {
                    u_77 = t;
                    if(((t_77 != NULL) && (t_77 != u_77)))
                      _fail(u_77);
                    else
                      t_77 = u_77;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_77), not_null(v_76));
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
  ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL;
  e_78 = t;
  c_78 :
  if(((ATgetType(e_78) == AT_LIST) && ((ATermList) e_78 != ATempty)))
    {
      f_78 = ATgetFirst((ATermList) e_78);
      i_78 = (ATerm) ATgetNext((ATermList) e_78);
      d_78 :
      if(match_cons(f_78, sym__2))
        {
          g_78 = ATgetArgument(f_78, 0);
          h_78 = ATgetArgument(f_78, 1);
          {
            ATerm k_78 = NULL;
            if(((g_78 != NULL) && (g_78 != h_78)))
              _fail(h_78);
            else
              g_78 = h_78;
            {
              if(((k_78 != NULL) && (k_78 != i_78)))
                _fail(i_78);
              else
                k_78 = i_78;
              t = not_null(k_78);
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
ATerm diff_1 (ATerm t, ATerm b_98 (ATerm))
{
  ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL;
  q_78 = t;
  p_78 :
  if(match_cons(q_78, sym__2))
    {
      r_78 = ATgetArgument(q_78, 0);
      s_78 = ATgetArgument(q_78, 1);
      {
        t = not_null(r_78);
        {
          ATerm y_78 (ATerm t)
          {
            ATerm p_16 = t;
            int x_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(x_16);
              }
            else
              {
                t = p_16;
                {
                  ATerm y_16 = t;
                  int z_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = not_null(s_78);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_98, l_2);
                      t = y_78(t);
                      LocalPopChoice(z_16);
                    }
                  else
                    {
                      t = y_16;
                      t = Cons_2(t, _id, y_78);
                    }
                }
              }
            return(t);
          }
          t = y_78(t);
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
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm a_79 = NULL;
          a_79 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(a_79));
          return(t);
        }
        ATerm n_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm o_2 (ATerm t)
        {
          ATerm j_17 = t;
          int k_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_2 (ATerm t)
              {
                ATerm v_17 = t;
                int x_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(x_17);
                  }
                else
                  {
                    t = v_17;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, p_2);
              LocalPopChoice(k_17);
            }
          else
            {
              t = j_17;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, m_2, n_2, o_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm w_81 (ATerm))
{
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL;
  w_79 = t;
  l_79 :
  if(match_cons(w_79, sym__5))
    {
      x_79 = ATgetArgument(w_79, 0);
      a_80 = ATgetArgument(w_79, 1);
      b_80 = ATgetArgument(w_79, 2);
      c_80 = ATgetArgument(w_79, 3);
      d_80 = ATgetArgument(w_79, 4);
      v_79 :
      if(((ATgetType(x_79) == AT_LIST) && ((ATermList) x_79 != ATempty)))
        {
          y_79 = ATgetFirst((ATermList) x_79);
          z_79 = (ATerm) ATgetNext((ATermList) x_79);
          {
            ATerm k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,z_80 = NULL,b_81 = NULL,d_81 = NULL;
            ATerm y_17;
            y_17 = t;
            {
              ATerm o_80 = NULL,p_80 = NULL,s_80 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_79), not_null(b_80));
              {
                t = u_81(t);
                {
                  o_80 = t;
                  h_79 :
                  if(match_cons(o_80, sym__2))
                    {
                      p_80 = ATgetArgument(o_80, 0);
                      s_80 = ATgetArgument(o_80, 1);
                      {
                        ATerm x_80 = NULL;
                        if(((l_80 != NULL) && (l_80 != p_80)))
                          _fail(p_80);
                        else
                          l_80 = p_80;
                        {
                          if(((k_80 != NULL) && (k_80 != s_80)))
                            _fail(s_80);
                          else
                            k_80 = s_80;
                          {
                            t = not_null(l_80);
                            {
                              ATerm y_80 = NULL;
                              t = v_81(t);
                              {
                                x_80 = t;
                                {
                                  if(((m_80 != NULL) && (m_80 != x_80)))
                                    _fail(x_80);
                                  else
                                    m_80 = x_80;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_80), not_null(a_80));
                                    {
                                      t = diff_0(t);
                                      {
                                        y_80 = t;
                                        if(((n_80 != NULL) && (n_80 != y_80)))
                                          _fail(y_80);
                                        else
                                          n_80 = y_80;
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
            t = y_17;
            {
              ATerm z_17;
              z_17 = t;
              {
                ATerm a_81 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_80), not_null(z_79));
                {
                  t = conc_0(t);
                  {
                    a_81 = t;
                    if(((z_80 != NULL) && (z_80 != a_81)))
                      _fail(a_81);
                    else
                      z_80 = a_81;
                  }
                }
              }
              t = z_17;
              {
                ATerm a_18;
                a_18 = t;
                {
                  ATerm c_81 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_80), not_null(a_80));
                  {
                    t = conc_0(t);
                    {
                      c_81 = t;
                      if(((b_81 != NULL) && (b_81 != c_81)))
                        _fail(c_81);
                      else
                        b_81 = c_81;
                    }
                  }
                }
                t = a_18;
                {
                  ATerm e_81 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(y_79), not_null(l_80), not_null(c_80));
                  {
                    t = w_81(t);
                    {
                      e_81 = t;
                      if(((d_81 != NULL) && (d_81 != e_81)))
                        _fail(e_81);
                      else
                        d_81 = e_81;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(z_80), not_null(b_81), not_null(k_80), not_null(d_81), not_null(d_80));
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
  ATerm t_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL;
  t_81 = t;
  r_81 :
  if(match_cons(t_81, sym__5))
    {
      x_81 = ATgetArgument(t_81, 0);
      y_81 = ATgetArgument(t_81, 1);
      z_81 = ATgetArgument(t_81, 2);
      a_82 = ATgetArgument(t_81, 3);
      b_82 = ATgetArgument(t_81, 4);
      s_81 :
      if(((ATermList) x_81 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_82), not_null(b_82));
        }
      else
        {
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
  ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
  m_82 = t;
  l_82 :
  if(match_cons(m_82, sym__3))
    {
      n_82 = ATgetArgument(m_82, 0);
      o_82 = ATgetArgument(m_82, 1);
      p_82 = ATgetArgument(m_82, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(n_82), not_null(n_82), not_null(o_82), not_null(p_82), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm a_92 (ATerm), ATerm b_92 (ATerm))
{
  ATerm u_82 (ATerm t)
  {
    ATerm b_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_92(t);
        LocalPopChoice(d_18);
      }
    else
      {
        t = b_18;
        {
          t = b_92(t);
          t = u_82(t);
        }
      }
    return(t);
  }
  t = u_82(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm f_92 (ATerm))
{
  t = d_92(t);
  t = while_not_2(t, e_92, f_92);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm f_82 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, d_82, e_82, f_82);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
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
    ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL;
    x_82 = t;
    w_82 :
    if(match_cons(x_82, sym__3))
      {
        y_82 = ATgetArgument(x_82, 0);
        z_82 = ATgetArgument(x_82, 1);
        a_83 = ATgetArgument(x_82, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(a_83)), not_null(z_82));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, r_2, s_2);
  {
    ATerm k_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = k_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_u_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm o_81 (ATerm))
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL;
  j_83 = t;
  i_83 :
  if(match_cons(j_83, sym__2))
    {
      k_83 = ATgetArgument(j_83, 0);
      l_83 = ATgetArgument(j_83, 1);
      {
        ATerm o_83 = NULL,p_83 = NULL,q_83 = NULL;
        ATerm n_18;
        n_18 = t;
        {
          ATerm r_83 = NULL;
          ATerm s_83 = NULL,t_83 = NULL,u_83 = NULL;
          t = o_81(t);
          {
            r_83 = t;
            {
              if(((o_83 != NULL) && (o_83 != r_83)))
                _fail(r_83);
              else
                o_83 = r_83;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_83), not_null(k_83), not_null(l_83));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_18 = t;
                    int u_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_83), term_w_18);
                        t = table_get_0(t);
                        LocalPopChoice(u_18);
                      }
                    else
                      {
                        t = o_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      s_83 = t;
                      h_83 :
                      if(((ATgetType(s_83) == AT_LIST) && ((ATermList) s_83 != ATempty)))
                        {
                          t_83 = ATgetFirst((ATermList) s_83);
                          u_83 = (ATerm) ATgetNext((ATermList) s_83);
                          {
                            if(((p_83 != NULL) && (p_83 != t_83)))
                              _fail(t_83);
                            else
                              p_83 = t_83;
                            {
                              if(((q_83 != NULL) && (q_83 != u_83)))
                                _fail(u_83);
                              else
                                q_83 = u_83;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_83), term_w_18, (ATerm) ATinsert(CheckATermList(not_null(q_83)), (ATerm) ATinsert(CheckATermList(not_null(p_83)), not_null(k_83))));
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
        t = n_18;
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
  ATerm a_84 = NULL,h_84 = NULL,i_84 = NULL;
  a_84 = t;
  z_83 :
  if(match_cons(a_84, sym__2))
    {
      h_84 = ATgetArgument(a_84, 0);
      i_84 = ATgetArgument(a_84, 1);
      if(((h_84 != NULL) && (h_84 != i_84)))
        _fail(i_84);
      else
        h_84 = i_84;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm w_97 (ATerm), ATerm x_97 (ATerm))
{
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL;
  o_84 = t;
  n_84 :
  if(((ATgetType(o_84) == AT_LIST) && ((ATermList) o_84 != ATempty)))
    {
      p_84 = ATgetFirst((ATermList) o_84);
      q_84 = (ATerm) ATgetNext((ATermList) o_84);
      {
        t = x_97(t);
        {
          ATerm u_2 (ATerm t)
          {
            ATerm t_84 = NULL;
            t_84 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_84), not_null(t_84));
              t = w_97(t);
            }
            return(t);
          }
          t = fetch_1(t, u_2);
        }
        t = not_null(q_84);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm y_97 (ATerm))
{
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL;
  z_84 = t;
  y_84 :
  if(match_cons(z_84, sym__2))
    {
      a_85 = ATgetArgument(z_84, 0);
      b_85 = ATgetArgument(z_84, 1);
      {
        t = not_null(a_85);
        {
          ATerm f_85 (ATerm t)
          {
            ATerm x_18 = t;
            int y_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(b_85);
                LocalPopChoice(y_18);
              }
            else
              {
                t = x_18;
                {
                  ATerm z_18 = t;
                  int a_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_2 (ATerm t)
                      {
                        t = not_null(b_85);
                        return(t);
                      }
                      t = HdMember_p__2(t, y_97, v_2);
                      t = f_85(t);
                      LocalPopChoice(a_19);
                    }
                  else
                    {
                      t = z_18;
                      t = Cons_2(t, _id, f_85);
                    }
                }
              }
            return(t);
          }
          t = f_85(t);
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
  ATerm n_85 = NULL;
  ATerm p_85 = NULL;
  n_85 = t;
  {
    ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(n_85));
    {
      ATerm w_2 (ATerm t)
      {
        t = term_d_19;
        return(t);
      }
      t = rewrite_1(t, w_2);
      {
        q_85 = t;
        l_85 :
        if(match_cons(q_85, sym_Defined_2))
          {
            r_85 = ATgetArgument(q_85, 0);
            s_85 = ATgetArgument(q_85, 1);
            m_85 :
            if(match_string(r_85, "f_0"))
              {
                if(((p_85 != NULL) && (p_85 != s_85)))
                  _fail(s_85);
                else
                  p_85 = s_85;
              }
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
    t = not_null(p_85);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
  x_85 = t;
  w_85 :
  if(((ATgetType(x_85) == AT_LIST) && ((ATermList) x_85 != ATempty)))
    {
      y_85 = ATgetFirst((ATermList) x_85);
      z_85 = (ATerm) ATgetNext((ATermList) x_85);
      t = not_null(y_85);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL;
  f_86 = t;
  e_86 :
  if(match_cons(f_86, sym__2))
    {
      g_86 = ATgetArgument(f_86, 0);
      h_86 = ATgetArgument(f_86, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_86), not_null(h_86));
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
ATerm rewrite_1 (ATerm t, ATerm q_81 (ATerm))
{
  ATerm t_86 = NULL;
  ATerm z_86 = NULL;
  t_86 = t;
  {
    ATerm a_87 = NULL;
    t = term_j_15;
    {
      t = q_81(t);
      {
        a_87 = t;
        if(((z_86 != NULL) && (z_86 != a_87)))
          _fail(a_87);
        else
          z_86 = a_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_86), not_null(t_86));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL;
  k_87 = t;
  i_87 :
  if(match_cons(k_87, sym__2))
    {
      l_87 = ATgetArgument(k_87, 0);
      m_87 = ATgetArgument(k_87, 1);
      {
        ATerm p_87 = NULL,q_87 = NULL;
        ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(m_87), not_null(l_87));
        {
          ATerm x_2 (ATerm t)
          {
            t = term_e_19;
            return(t);
          }
          t = rewrite_1(t, x_2);
          {
            r_87 = t;
            f_87 :
            if(match_cons(r_87, sym_Defined_3))
              {
                s_87 = ATgetArgument(r_87, 0);
                t_87 = ATgetArgument(r_87, 1);
                u_87 = ATgetArgument(r_87, 2);
                g_87 :
                if(match_string(s_87, "e_0"))
                  {
                    if(((p_87 != NULL) && (p_87 != t_87)))
                      _fail(t_87);
                    else
                      p_87 = t_87;
                    if(((q_87 != NULL) && (q_87 != u_87)))
                      _fail(u_87);
                    else
                      q_87 = u_87;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(q_87)), not_null(p_87));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t_96 (ATerm))
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_96(t);
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL;
        c_88 = t;
        b_88 :
        if(((ATgetType(c_88) == AT_LIST) && ((ATermList) c_88 != ATempty)))
          {
            d_88 = ATgetFirst((ATermList) c_88);
            e_88 = (ATerm) ATgetNext((ATermList) c_88);
            {
              ATerm h_88 = NULL,j_88 = NULL;
              ATerm l_19;
              l_19 = t;
              {
                ATerm i_88 = NULL;
                t = not_null(d_88);
                {
                  t = t_96(t);
                  {
                    i_88 = t;
                    if(((h_88 != NULL) && (h_88 != i_88)))
                      _fail(i_88);
                    else
                      h_88 = i_88;
                  }
                }
              }
              t = l_19;
              {
                ATerm k_88 = NULL;
                t = not_null(e_88);
                {
                  t = foldr_3(t, r_96, s_96, t_96);
                  {
                    k_88 = t;
                    if(((j_88 != NULL) && (j_88 != k_88)))
                      _fail(k_88);
                    else
                      j_88 = k_88;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_88), not_null(j_88));
                  t = s_96(t);
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
  ATerm y_2 (ATerm t)
  {
    t = term_m_19;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_u_6;
    return(t);
  }
  t = foldr_3(t, y_2, add_0, z_2);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL;
    u_88 = t;
    t_88 :
    if(match_cons(u_88, sym_SDef_3))
      {
        v_88 = ATgetArgument(u_88, 0);
        w_88 = ATgetArgument(u_88, 1);
        x_88 = ATgetArgument(u_88, 2);
        {
          ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL;
          ATerm n_19;
          n_19 = t;
          {
            ATerm f_89 = NULL;
            t = not_null(w_88);
            {
              ATerm g_89 = NULL;
              t = length_0(t);
              {
                f_89 = t;
                {
                  if(((d_89 != NULL) && (d_89 != f_89)))
                    _fail(f_89);
                  else
                    d_89 = f_89;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_88), not_null(d_89));
                    {
                      ATerm h_89 = NULL,j_89 = NULL;
                      ATerm o_19 = t;
                      int p_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(p_19);
                        }
                      else
                        {
                          t = o_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        g_89 = t;
                        {
                          if(((c_89 != NULL) && (c_89 != g_89)))
                            _fail(g_89);
                          else
                            c_89 = g_89;
                          {
                            ATerm i_89 = NULL;
                            t = not_null(v_88);
                            {
                              ATerm q_19 = t;
                              int r_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(r_19);
                                }
                              else
                                {
                                  t = q_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                i_89 = t;
                                if(((h_89 != NULL) && (h_89 != i_89)))
                                  _fail(i_89);
                                else
                                  h_89 = i_89;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(d_89)), not_null(h_89));
                              {
                                t = union_0(t);
                                {
                                  j_89 = t;
                                  {
                                    if(((e_89 != NULL) && (e_89 != j_89)))
                                      _fail(j_89);
                                    else
                                      e_89 = j_89;
                                    {
                                      ATerm s_19;
                                      s_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(d_89), not_null(v_88)), (ATerm) ATmakeAppl(sym_Defined_3, term_x_19, not_null(u_88), not_null(c_89)));
                                        {
                                          ATerm d_3 (ATerm t)
                                          {
                                            t = term_e_19;
                                            return(t);
                                          }
                                          t = assert_1(t, d_3);
                                        }
                                      }
                                      t = s_19;
                                      {
                                        ATerm y_19;
                                        y_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(v_88)), (ATerm) ATmakeAppl(sym_Defined_2, term_z_19, not_null(e_89)));
                                          {
                                            ATerm e_3 (ATerm t)
                                            {
                                              t = term_d_19;
                                              return(t);
                                            }
                                            t = assert_1(t, e_3);
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
  t = map_1(t, c_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm q_89 = NULL;
  ATerm r_89 = NULL;
  t = sort_defs_0(t);
  {
    r_89 = t;
    if(((q_89 != NULL) && (q_89 != r_89)))
      _fail(r_89);
    else
      q_89 = r_89;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_f_20), not_null(q_89), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm m_78 (ATerm))
{
  ATerm y_89 = NULL,z_89 = NULL;
  y_89 = t;
  x_89 :
  if(match_cons(y_89, sym_Strategies_1))
    {
      z_89 = ATgetArgument(y_89, 0);
      {
        ATerm c_90 = NULL,e_90 = NULL;
        ATerm d_90 = NULL;
        t = SSLgetAnnotations(not_null(y_89));
        {
          d_90 = t;
          if(((c_90 != NULL) && (c_90 != d_90)))
            _fail(d_90);
          else
            c_90 = d_90;
        }
        {
          t = not_null(z_89);
          {
            ATerm g_90 = NULL;
            t = m_78(t);
            {
              e_90 = t;
              {
                ATerm h_90 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(e_90)), not_null(c_90));
                {
                  h_90 = t;
                  if(((g_90 != NULL) && (g_90 != h_90)))
                    _fail(h_90);
                  else
                    g_90 = h_90;
                }
                t = not_null(g_90);
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
ATerm Cons_2 (ATerm t, ATerm v_80 (ATerm), ATerm w_80 (ATerm))
{
  ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL;
  s_90 = t;
  r_90 :
  if(((ATgetType(s_90) == AT_LIST) && ((ATermList) s_90 != ATempty)))
    {
      t_90 = ATgetFirst((ATermList) s_90);
      u_90 = (ATerm) ATgetNext((ATermList) s_90);
      {
        ATerm y_90 = NULL,a_91 = NULL;
        ATerm z_90 = NULL;
        t = SSLgetAnnotations(not_null(s_90));
        {
          z_90 = t;
          if(((y_90 != NULL) && (y_90 != z_90)))
            _fail(z_90);
          else
            y_90 = z_90;
        }
        {
          t = not_null(t_90);
          {
            ATerm c_91 = NULL;
            t = v_80(t);
            {
              a_91 = t;
              {
                t = not_null(u_90);
                {
                  ATerm e_91 = NULL;
                  t = w_80(t);
                  {
                    c_91 = t;
                    {
                      ATerm f_91 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_91)), not_null(a_91)), not_null(y_90));
                      {
                        f_91 = t;
                        if(((e_91 != NULL) && (e_91 != f_91)))
                          _fail(f_91);
                        else
                          e_91 = f_91;
                      }
                      t = not_null(e_91);
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
ATerm Specification_1 (ATerm t, ATerm o_78 (ATerm))
{
  ATerm u_91 = NULL,v_91 = NULL;
  u_91 = t;
  t_91 :
  if(match_cons(u_91, sym_Specification_1))
    {
      v_91 = ATgetArgument(u_91, 0);
      {
        ATerm y_91 = NULL,g_92 = NULL;
        ATerm z_91 = NULL;
        t = SSLgetAnnotations(not_null(u_91));
        {
          z_91 = t;
          if(((y_91 != NULL) && (y_91 != z_91)))
            _fail(z_91);
          else
            y_91 = z_91;
        }
        {
          t = not_null(v_91);
          {
            ATerm i_92 = NULL;
            t = o_78(t);
            {
              g_92 = t;
              {
                ATerm j_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(g_92)), not_null(y_91));
                {
                  j_92 = t;
                  if(((i_92 != NULL) && (i_92 != j_92)))
                    _fail(j_92);
                  else
                    i_92 = j_92;
                }
                t = not_null(i_92);
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
ATerm _2 (ATerm t, ATerm q_69 (ATerm), ATerm r_69 (ATerm))
{
  ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL;
  u_92 = t;
  t_92 :
  if(match_cons(u_92, sym__2))
    {
      v_92 = ATgetArgument(u_92, 0);
      w_92 = ATgetArgument(u_92, 1);
      {
        ATerm a_93 = NULL,c_93 = NULL;
        ATerm b_93 = NULL;
        t = SSLgetAnnotations(not_null(u_92));
        {
          b_93 = t;
          if(((a_93 != NULL) && (a_93 != b_93)))
            _fail(b_93);
          else
            a_93 = b_93;
        }
        {
          t = not_null(v_92);
          {
            ATerm e_93 = NULL;
            t = q_69(t);
            {
              c_93 = t;
              {
                t = not_null(w_92);
                {
                  ATerm g_93 = NULL;
                  t = r_69(t);
                  {
                    e_93 = t;
                    {
                      ATerm h_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_93), not_null(e_93)), not_null(a_93));
                      {
                        h_93 = t;
                        if(((g_93 != NULL) && (g_93 != h_93)))
                          _fail(h_93);
                        else
                          g_93 = h_93;
                      }
                      t = not_null(g_93);
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
  ATerm p_93 = NULL;
  ATerm i_20;
  i_20 = t;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm q_93 = NULL,r_93 = NULL;
      q_93 = t;
      o_93 :
      if(match_cons(q_93, sym_Program_1))
        {
          r_93 = ATgetArgument(q_93, 0);
          if(((p_93 != NULL) && (p_93 != r_93)))
            _fail(r_93);
          else
            p_93 = r_93;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, f_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_20), not_null(p_93)), term_j_20));
      {
        t = printnl_0(t);
        {
          t = term_u_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL;
  v_93 = t;
  u_93 :
  if(match_cons(v_93, sym__2))
    {
      w_93 = ATgetArgument(v_93, 0);
      x_93 = ATgetArgument(v_93, 1);
      {
        ATerm l_20;
        l_20 = t;
        t = SSL_printnl(not_null(w_93), not_null(x_93));
        t = l_20;
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
  ATerm i_94 = NULL,j_94 = NULL,k_94 = NULL;
  i_94 = t;
  h_94 :
  if(match_cons(i_94, sym__2))
    {
      j_94 = ATgetArgument(i_94, 0);
      k_94 = ATgetArgument(i_94, 1);
      {
        t = not_null(j_94);
        {
          ATerm g_3 (ATerm t)
          {
            t = not_null(k_94);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_87 (ATerm))
{
  ATerm m_20;
  m_20 = t;
  {
    ATerm q_94 = NULL,s_94 = NULL;
    ATerm n_20;
    n_20 = t;
    {
      ATerm r_94 = NULL;
      t = z_87(t);
      {
        r_94 = t;
        if(((q_94 != NULL) && (q_94 != r_94)))
          _fail(r_94);
        else
          q_94 = r_94;
      }
    }
    t = n_20;
    {
      ATerm t_94 = NULL;
      t_94 = t;
      if(((s_94 != NULL) && (s_94 != t_94)))
        _fail(t_94);
      else
        s_94 = t_94;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_94)), not_null(q_94)));
        t = printnl_0(t);
      }
    }
  }
  t = m_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm x_94 = NULL;
  x_94 = t;
  t = SSL_is_string(not_null(x_94));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_3);
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            {
              ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL;
              g_95 = t;
              f_95 :
              if(match_cons(g_95, sym_Path_1))
                {
                  h_95 = ATgetArgument(g_95, 0);
                  t = not_null(h_95);
                }
              else
                {
                  if(match_cons(g_95, sym_Var_1))
                    {
                      h_95 = ATgetArgument(g_95, 0);
                      {
                        t = not_null(h_95);
                        {
                          ATerm t_20 = t;
                          int v_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_20);
                            }
                          else
                            {
                              t = t_20;
                              {
                                ATerm i_3 (ATerm t)
                                {
                                  t = term_x_20;
                                  return(t);
                                }
                                t = debug_1(t, i_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(g_95, sym_Prefix_2))
                        {
                          h_95 = ATgetArgument(g_95, 0);
                          i_95 = ATgetArgument(g_95, 1);
                          {
                            ATerm n_95 = NULL,p_95 = NULL;
                            ATerm y_20;
                            y_20 = t;
                            {
                              ATerm o_95 = NULL;
                              t = not_null(h_95);
                              {
                                t = eval_config_0(t);
                                {
                                  o_95 = t;
                                  if(((n_95 != NULL) && (n_95 != o_95)))
                                    _fail(o_95);
                                  else
                                    n_95 = o_95;
                                }
                              }
                            }
                            t = y_20;
                            {
                              ATerm q_95 = NULL;
                              t = not_null(i_95);
                              {
                                t = eval_config_0(t);
                                {
                                  q_95 = t;
                                  if(((p_95 != NULL) && (p_95 != q_95)))
                                    _fail(q_95);
                                  else
                                    p_95 = q_95;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_95), not_null(p_95));
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
  ATerm y_95 = NULL;
  y_95 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_21, not_null(y_95));
    {
      t = table_get_0(t);
      {
        ATerm j_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_21;
            i_21 = t;
            {
              ATerm a_96 = NULL;
              ATerm b_96 = NULL;
              b_96 = t;
              if(((a_96 != NULL) && (a_96 != b_96)))
                _fail(b_96);
              else
                a_96 = b_96;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_21, not_null(y_95), not_null(a_96));
                t = table_put_0(t);
              }
            }
            t = i_21;
          }
          return(t);
        }
        t = try_1(t, j_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm j_85 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm j_21;
    j_21 = t;
    {
      ATerm f_96 = NULL;
      ATerm g_96 = NULL;
      t = term_k_21;
      {
        t = get_config_0(t);
        {
          g_96 = t;
          if(((f_96 != NULL) && (f_96 != g_96)))
            _fail(g_96);
          else
            f_96 = g_96;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_96), term_s_21);
        t = geq_0(t);
      }
    }
    t = j_21;
    t = j_85(t);
    return(t);
  }
  t = try_1(t, k_3);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, term_t_21));
  {
    t = printnl_0(t);
    {
      t = term_u_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm j_96 = NULL;
  j_96 = t;
  t = SSL_TicksToSeconds(not_null(j_96));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_96 = NULL,u_96 = NULL,v_96 = NULL;
  o_96 = t;
  n_96 :
  if(match_cons(o_96, sym__2))
    {
      u_96 = ATgetArgument(o_96, 0);
      v_96 = ATgetArgument(o_96, 1);
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_96), not_null(v_96));
            LocalPopChoice(a_22);
          }
        else
          {
            t = z_21;
            t = SSL_addr(not_null(u_96), not_null(v_96));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_96 (ATerm), ATerm q_96 (ATerm))
{
  ATerm f_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_96(t);
      LocalPopChoice(k_22);
    }
  else
    {
      t = f_22;
      {
        ATerm c_97 = NULL,f_97 = NULL,g_97 = NULL;
        c_97 = t;
        b_97 :
        if(((ATgetType(c_97) == AT_LIST) && ((ATermList) c_97 != ATempty)))
          {
            f_97 = ATgetFirst((ATermList) c_97);
            g_97 = (ATerm) ATgetNext((ATermList) c_97);
            {
              ATerm j_97 = NULL;
              ATerm k_97 = NULL;
              t = not_null(g_97);
              {
                t = foldr_2(t, p_96, q_96);
                {
                  k_97 = t;
                  if(((j_97 != NULL) && (j_97 != k_97)))
                    _fail(k_97);
                  else
                    j_97 = k_97;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_97), not_null(j_97));
                t = q_96(t);
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
ATerm crush_2 (ATerm t, ATerm h_98 (ATerm), ATerm i_98 (ATerm))
{
  ATerm s_97 = NULL;
  ATerm u_97 = NULL;
  s_97 = t;
  {
    ATerm v_97 = NULL;
    ATerm d_98 = NULL,e_98 = NULL,f_98 = NULL;
    t = not_null(s_97);
    {
      v_97 = t;
      {
        t = SSL_explode_term(not_null(v_97));
        {
          d_98 = t;
          r_97 :
          if(match_cons(d_98, sym__2))
            {
              e_98 = ATgetArgument(d_98, 0);
              f_98 = ATgetArgument(d_98, 1);
              if(((u_97 != NULL) && (u_97 != f_98)))
                _fail(f_98);
              else
                u_97 = f_98;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_97);
      t = foldr_2(t, h_98, i_98);
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
      t = term_m_19;
      return(t);
    }
    t = crush_2(t, l_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL;
  q_98 = t;
  p_98 :
  if(match_cons(q_98, sym__2))
    {
      r_98 = ATgetArgument(q_98, 0);
      s_98 = ATgetArgument(q_98, 1);
      {
        ATerm l_22;
        l_22 = t;
        {
          ATerm m_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_98), not_null(s_98));
              LocalPopChoice(n_22);
            }
          else
            {
              t = m_22;
              t = SSL_gtr(not_null(r_98), not_null(s_98));
            }
        }
        t = l_22;
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
  ATerm y_98 = NULL;
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL;
      z_98 = t;
      x_98 :
      if(match_cons(z_98, sym__2))
        {
          a_99 = ATgetArgument(z_98, 0);
          b_99 = ATgetArgument(z_98, 1);
          {
            if(((y_98 != NULL) && (y_98 != a_99)))
              _fail(a_99);
            else
              y_98 = a_99;
            if(((y_98 != NULL) && (y_98 != b_99)))
              _fail(b_99);
            else
              y_98 = b_99;
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
ATerm if_verbose1_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm q_22;
    q_22 = t;
    {
      ATerm e_99 = NULL;
      ATerm f_99 = NULL;
      t = term_k_21;
      {
        t = get_config_0(t);
        {
          f_99 = t;
          if(((e_99 != NULL) && (e_99 != f_99)))
            _fail(f_99);
          else
            e_99 = f_99;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_99), term_u_6);
        t = geq_0(t);
      }
    }
    t = q_22;
    t = i_85(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm j_99 = NULL,l_99 = NULL;
    ATerm r_22;
    r_22 = t;
    {
      ATerm k_99 = NULL;
      t = run_time_0(t);
      {
        k_99 = t;
        if(((j_99 != NULL) && (j_99 != k_99)))
          _fail(k_99);
        else
          j_99 = k_99;
      }
    }
    t = r_22;
    {
      ATerm m_99 = NULL;
      t = term_s_22;
      {
        t = get_config_0(t);
        {
          m_99 = t;
          if(((l_99 != NULL) && (l_99 != m_99)))
            _fail(m_99);
          else
            l_99 = m_99;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_22), not_null(j_99)), term_t_22), not_null(l_99)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_3);
  {
    t = term_m_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm r_99 = NULL,s_99 = NULL,t_99 = NULL;
  r_99 = t;
  q_99 :
  if(match_cons(r_99, sym__2))
    {
      s_99 = ATgetArgument(r_99, 0);
      t_99 = ATgetArgument(r_99, 1);
      t = SSL_WriteToTextFile(not_null(s_99), not_null(t_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm z_99 = NULL,a_100 = NULL,b_100 = NULL;
  z_99 = t;
  y_99 :
  if(match_cons(z_99, sym__2))
    {
      a_100 = ATgetArgument(z_99, 0);
      b_100 = ATgetArgument(z_99, 1);
      t = SSL_WriteToBinaryFile(not_null(a_100), not_null(b_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm l_100 = NULL;
  ATerm a_23;
  a_23 = t;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm b_23 = t;
      int c_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_3 (ATerm t)
          {
            ATerm m_100 = NULL,n_100 = NULL;
            m_100 = t;
            i_100 :
            if(match_cons(m_100, sym_Output_1))
              {
                n_100 = ATgetArgument(m_100, 0);
                if(((l_100 != NULL) && (l_100 != n_100)))
                  _fail(n_100);
                else
                  l_100 = n_100;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_3);
          LocalPopChoice(c_23);
        }
      else
        {
          t = b_23;
          {
            ATerm q_100 = NULL;
            t = term_k_23;
            {
              q_100 = t;
              if(((l_100 != NULL) && (l_100 != q_100)))
                _fail(q_100);
              else
                l_100 = q_100;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_3, _id);
  }
  t = a_23;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_3 (ATerm t)
      {
        t = not_null(l_100);
        return(t);
      }
      t = split_2(t, r_3, _id);
      return(t);
    }
    t = _2(t, _id, q_3);
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              ATerm r_100 = NULL;
              r_100 = t;
              k_100 :
              if(!(match_cons(r_100, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_3);
            return(t);
          }
          t = _2(t, s_3, WriteToBinaryFile_0);
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
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
ATerm apply_strategy_1 (ATerm t, ATerm j_87 (ATerm))
{
  ATerm z_100 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL;
  ATerm p_23;
  p_23 = t;
  t = dtime_0(t);
  t = p_23;
  {
    t = j_87(t);
    {
      ATerm q_23;
      q_23 = t;
      {
        ATerm a_101 = NULL;
        t = dtime_0(t);
        {
          a_101 = t;
          if(((z_100 != NULL) && (z_100 != a_101)))
            _fail(a_101);
          else
            z_100 = a_101;
        }
      }
      t = q_23;
      {
        b_101 = t;
        y_100 :
        if(match_cons(b_101, sym__2))
          {
            c_101 = ATgetArgument(b_101, 0);
            d_101 = ATgetArgument(b_101, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_101)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_100))), not_null(d_101));
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
  ATerm j_101 = NULL;
  j_101 = t;
  t = SSL_ReadFromFile(not_null(j_101));
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_103 (ATerm), ATerm t_103 (ATerm))
{
  ATerm o_101 = NULL,q_101 = NULL;
  ATerm r_23;
  r_23 = t;
  {
    ATerm p_101 = NULL;
    t = s_103(t);
    {
      p_101 = t;
      if(((o_101 != NULL) && (o_101 != p_101)))
        _fail(p_101);
      else
        o_101 = p_101;
    }
  }
  t = r_23;
  {
    ATerm r_101 = NULL;
    t = t_103(t);
    {
      r_101 = t;
      if(((q_101 != NULL) && (q_101 != r_101)))
        _fail(r_101);
      else
        q_101 = r_101;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_101), not_null(q_101));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_101 = NULL;
  ATerm s_23;
  s_23 = t;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 (ATerm t)
        {
          ATerm z_101 = NULL,a_102 = NULL;
          z_101 = t;
          v_101 :
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
        t = option_defined_1(t, u_3);
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        {
          ATerm b_102 = NULL;
          t = term_v_23;
          {
            b_102 = t;
            if(((y_101 != NULL) && (y_101 != b_102)))
              _fail(b_102);
            else
              y_101 = b_102;
          }
        }
      }
  }
  t = s_23;
  {
    ATerm v_3 (ATerm t)
    {
      t = not_null(y_101);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_102 = NULL;
  q_102 = t;
  p_102 :
  if(match_cons(q_102, sym_Version_0))
    {
      ATerm s_102 = NULL,u_102 = NULL;
      ATerm w_23;
      w_23 = t;
      {
        ATerm t_102 = NULL;
        t = SSLgetAnnotations(not_null(q_102));
        {
          t_102 = t;
          if(((s_102 != NULL) && (s_102 != t_102)))
            _fail(t_102);
          else
            s_102 = t_102;
        }
      }
      t = w_23;
      {
        ATerm v_102 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_102));
        {
          v_102 = t;
          if(((u_102 != NULL) && (u_102 != v_102)))
            _fail(v_102);
          else
            u_102 = v_102;
        }
        t = not_null(u_102);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_87 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        {
          ATerm z_23 = t;
          int b_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(b_24);
            }
          else
            {
              t = z_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_3);
  t = h_87(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_103 = NULL;
  a_103 = t;
  t = SSL_table_create(not_null(a_103));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_103 = NULL;
  e_103 = t;
  {
    ATerm c_24;
    c_24 = t;
    {
      t = term_d_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_24, term_e_24, not_null(e_103));
          t = table_put_0(t);
        }
      }
    }
    t = c_24;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_103 = NULL;
  i_103 = t;
  t = SSL_string_to_int(not_null(i_103));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm q_103 = NULL,r_103 = NULL,u_103 = NULL,v_103 = NULL,w_103 = NULL;
  q_103 = t;
  o_103 :
  if(match_string(q_103, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(q_103) == AT_LIST) && ((ATermList) q_103 != ATempty)))
        {
          r_103 = ATgetFirst((ATermList) q_103);
          u_103 = (ATerm) ATgetNext((ATermList) q_103);
          p_103 :
          if(((ATgetType(u_103) == AT_LIST) && ((ATermList) u_103 != ATempty)))
            {
              v_103 = ATgetFirst((ATermList) u_103);
              w_103 = (ATerm) ATgetNext((ATermList) u_103);
              {
                ATerm a_104 = NULL;
                ATerm g_24;
                g_24 = t;
                {
                  t = not_null(r_103);
                  t = l_0(t);
                }
                t = g_24;
                {
                  ATerm b_104 = NULL;
                  t = not_null(v_103);
                  {
                    t = m_0(t);
                    {
                      b_104 = t;
                      if(((a_104 != NULL) && (a_104 != b_104)))
                        _fail(b_104);
                      else
                        a_104 = b_104;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_103)), not_null(a_104));
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
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 (ATerm t)
      {
        ATerm x_104 = NULL;
        x_104 = t;
        f_104 :
        if(!(match_string(x_104, "-i")))
          {
            if(!(match_string(x_104, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        ATerm b_105 = NULL;
        ATerm v_24;
        v_24 = t;
        {
          ATerm y_104 = NULL;
          ATerm a_105 = NULL;
          a_105 = t;
          if(((y_104 != NULL) && (y_104 != a_105)))
            _fail(a_105);
          else
            y_104 = a_105;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_f_25, not_null(y_104));
            t = set_config_0(t);
          }
        }
        t = v_24;
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
      ATerm z_3 (ATerm t)
      {
        t = term_r_25;
        return(t);
      }
      t = ArgOption_3(t, x_3, y_3, z_3);
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
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
            ATerm b_4 (ATerm t)
            {
              ATerm g_105 = NULL;
              ATerm u_25;
              u_25 = t;
              {
                ATerm e_105 = NULL;
                ATerm f_105 = NULL;
                f_105 = t;
                if(((e_105 != NULL) && (e_105 != f_105)))
                  _fail(f_105);
                else
                  e_105 = f_105;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_25, not_null(e_105));
                  t = set_config_0(t);
                }
              }
              t = u_25;
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
            ATerm c_4 (ATerm t)
            {
              t = term_w_25;
              return(t);
            }
            t = ArgOption_3(t, a_4, b_4, c_4);
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_4 (ATerm t)
                  {
                    ATerm i_105 = NULL;
                    i_105 = t;
                    o_104 :
                    if(!(match_string(i_105, "-S")))
                      {
                        if(!(match_string(i_105, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm h_4 (ATerm t)
                  {
                    t = term_z_25;
                    t = set_config_0(t);
                    t = term_a_26;
                    return(t);
                  }
                  ATerm i_4 (ATerm t)
                  {
                    t = term_b_26;
                    return(t);
                  }
                  t = Option_3(t, g_4, h_4, i_4);
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
                  {
                    ATerm c_26 = t;
                    int d_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_4 (ATerm t)
                        {
                          ATerm j_105 = NULL;
                          j_105 = t;
                          p_104 :
                          if(!(match_string(j_105, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm k_4 (ATerm t)
                        {
                          ATerm m_105 = NULL;
                          ATerm e_26;
                          e_26 = t;
                          {
                            ATerm k_105 = NULL;
                            ATerm l_105 = NULL;
                            t = string_to_int_0(t);
                            {
                              l_105 = t;
                              if(((k_105 != NULL) && (k_105 != l_105)))
                                _fail(l_105);
                              else
                                k_105 = l_105;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_21, not_null(k_105));
                              t = set_config_0(t);
                            }
                          }
                          t = e_26;
                          {
                            ATerm n_105 = NULL;
                            n_105 = t;
                            if(((m_105 != NULL) && (m_105 != n_105)))
                              _fail(n_105);
                            else
                              m_105 = n_105;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_105));
                          }
                          return(t);
                        }
                        ATerm l_4 (ATerm t)
                        {
                          t = term_f_26;
                          return(t);
                        }
                        t = ArgOption_3(t, j_4, k_4, l_4);
                        LocalPopChoice(d_26);
                      }
                    else
                      {
                        t = c_26;
                        {
                          ATerm g_26 = t;
                          int h_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_4 (ATerm t)
                              {
                                ATerm o_105 = NULL;
                                o_105 = t;
                                s_104 :
                                if(!(match_string(o_105, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm n_4 (ATerm t)
                              {
                                ATerm i_26;
                                i_26 = t;
                                {
                                  ATerm p_105 = NULL;
                                  ATerm q_105 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    q_105 = t;
                                    if(((p_105 != NULL) && (p_105 != q_105)))
                                      _fail(q_105);
                                    else
                                      p_105 = q_105;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_j_26, not_null(p_105));
                                    t = set_config_0(t);
                                  }
                                }
                                t = i_26;
                                return(t);
                              }
                              ATerm o_4 (ATerm t)
                              {
                                t = term_l_26;
                                return(t);
                              }
                              t = ArgOption_3(t, m_4, n_4, o_4);
                              LocalPopChoice(h_26);
                            }
                          else
                            {
                              t = g_26;
                              {
                                ATerm m_26 = t;
                                int n_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_4 (ATerm t)
                                    {
                                      ATerm r_105 = NULL;
                                      r_105 = t;
                                      u_104 :
                                      if(!(match_string(r_105, "-v")))
                                        {
                                          if(!(match_string(r_105, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm q_4 (ATerm t)
                                    {
                                      t = term_q_26;
                                      t = set_config_0(t);
                                      t = term_r_26;
                                      return(t);
                                    }
                                    ATerm r_4 (ATerm t)
                                    {
                                      t = term_t_26;
                                      return(t);
                                    }
                                    t = Option_3(t, p_4, q_4, r_4);
                                    LocalPopChoice(n_26);
                                  }
                                else
                                  {
                                    t = m_26;
                                    {
                                      ATerm x_26 = t;
                                      int h_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_4 (ATerm t)
                                          {
                                            ATerm s_105 = NULL;
                                            s_105 = t;
                                            v_104 :
                                            if(!(match_string(s_105, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm t_4 (ATerm t)
                                          {
                                            t = term_z_27;
                                            t = set_config_0(t);
                                            t = term_a_28;
                                            return(t);
                                          }
                                          ATerm u_4 (ATerm t)
                                          {
                                            t = term_b_28;
                                            return(t);
                                          }
                                          t = Option_3(t, s_4, t_4, u_4);
                                          LocalPopChoice(h_27);
                                        }
                                      else
                                        {
                                          t = x_26;
                                          {
                                            ATerm v_4 (ATerm t)
                                            {
                                              ATerm t_105 = NULL;
                                              t_105 = t;
                                              w_104 :
                                              if(!(match_string(t_105, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm w_4 (ATerm t)
                                            {
                                              t = term_d_28;
                                              t = set_config_0(t);
                                              t = term_e_28;
                                              return(t);
                                            }
                                            ATerm x_4 (ATerm t)
                                            {
                                              t = term_f_28;
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm c_106 = NULL;
  c_106 = t;
  t = SSL_table_destroy(not_null(c_106));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_106 = NULL;
  g_106 = t;
  t = SSL_exit(not_null(g_106));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm k_106 = NULL;
  k_106 = t;
  t = SSL_implode_string(not_null(k_106));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_100 (ATerm))
{
  ATerm n_106 (ATerm t)
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_106);
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        {
          t = Nil_0(t);
          t = u_100(t);
        }
      }
    return(t);
  }
  t = n_106(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      {
        ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
        s_106 = t;
        r_106 :
        if(((ATgetType(s_106) == AT_LIST) && ((ATermList) s_106 != ATempty)))
          {
            t_106 = ATgetFirst((ATermList) s_106);
            u_106 = (ATerm) ATgetNext((ATermList) s_106);
            {
              t = not_null(t_106);
              {
                ATerm y_4 (ATerm t)
                {
                  t = not_null(u_106);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_4);
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
  ATerm a_107 = NULL;
  a_107 = t;
  t = SSL_explode_string(not_null(a_107));
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
ATerm long_description_1 (ATerm t, ATerm c_84 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_100 (ATerm))
{
  ATerm f_107 (ATerm t)
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = Cons_2(t, f_100, f_107);
      }
    return(t);
  }
  t = f_107(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm m_107 = NULL,n_107 = NULL,o_107 = NULL;
  o_107 = t;
  l_107 :
  if(((ATgetType(o_107) == AT_LIST) && ((ATermList) o_107 != ATempty)))
    {
      m_107 = ATgetFirst((ATermList) o_107);
      n_107 = (ATerm) ATgetNext((ATermList) o_107);
      {
        ATerm r_107 = NULL;
        t = not_null(n_107);
        {
          ATerm m_28;
          m_28 = t;
          {
            ATerm s_107 = NULL,u_107 = NULL,w_107 = NULL;
            ATerm t_28;
            t_28 = t;
            {
              ATerm t_107 = NULL;
              t = k_0(t);
              {
                t_107 = t;
                if(((s_107 != NULL) && (s_107 != t_107)))
                  _fail(t_107);
                else
                  s_107 = t_107;
              }
            }
            t = t_28;
            {
              ATerm v_107 = NULL;
              t = not_null(m_107);
              {
                t = j_0(t);
                {
                  v_107 = t;
                  if(((u_107 != NULL) && (u_107 != v_107)))
                    _fail(v_107);
                  else
                    u_107 = v_107;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_107)), not_null(u_107));
                {
                  w_107 = t;
                  if(((r_107 != NULL) && (r_107 != w_107)))
                    _fail(w_107);
                  else
                    r_107 = w_107;
                }
              }
            }
          }
          t = m_28;
          {
            ATerm z_4 (ATerm t)
            {
              t = not_null(r_107);
              return(t);
            }
            t = reverse_acc_2(t, j_0, z_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) o_107 == ATempty))
        {
          {
            t = term_j_15;
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
ATerm short_description_1 (ATerm t, ATerm b_84 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_75 (ATerm))
{
  ATerm m_108 = NULL,n_108 = NULL;
  m_108 = t;
  l_108 :
  if(match_cons(m_108, sym_Program_1))
    {
      n_108 = ATgetArgument(m_108, 0);
      {
        ATerm q_108 = NULL,s_108 = NULL;
        ATerm r_108 = NULL;
        t = SSLgetAnnotations(not_null(m_108));
        {
          r_108 = t;
          if(((q_108 != NULL) && (q_108 != r_108)))
            _fail(r_108);
          else
            q_108 = r_108;
        }
        {
          t = not_null(n_108);
          {
            ATerm u_108 = NULL;
            t = k_75(t);
            {
              s_108 = t;
              {
                ATerm v_108 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_108)), not_null(q_108));
                {
                  v_108 = t;
                  if(((u_108 != NULL) && (u_108 != v_108)))
                    _fail(v_108);
                  else
                    u_108 = v_108;
                }
                t = not_null(u_108);
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
  ATerm h_109 = NULL;
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      ATerm i_109 = NULL;
      i_109 = t;
      if(((h_109 != NULL) && (h_109 != i_109)))
        _fail(i_109);
      else
        h_109 = i_109;
      return(t);
    }
    t = Program_1(t, c_5);
    return(t);
  }
  t = option_defined_1(t, b_5);
  {
    ATerm d_5 (ATerm t)
    {
      ATerm j_109 = NULL;
      ATerm k_109 = NULL;
      t = term_j_15;
      {
        ATerm e_5 (ATerm t)
        {
          t = not_null(h_109);
          return(t);
        }
        t = short_description_1(t, e_5);
        {
          t = concat_strings_0(t);
          {
            k_109 = t;
            if(((j_109 != NULL) && (j_109 != k_109)))
              _fail(k_109);
            else
              j_109 = k_109;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, not_null(j_109)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, d_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, term_u_28));
      {
        t = printnl_0(t);
        {
          t = term_x_28;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm l_109 = NULL;
                  l_109 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_109)), term_y_28));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_5);
                {
                  ATerm g_5 (ATerm t)
                  {
                    ATerm n_109 = NULL;
                    ATerm o_109 = NULL;
                    t = term_j_15;
                    {
                      ATerm i_5 (ATerm t)
                      {
                        t = not_null(h_109);
                        return(t);
                      }
                      t = long_description_1(t, i_5);
                      {
                        t = concat_strings_0(t);
                        {
                          o_109 = t;
                          if(((n_109 != NULL) && (n_109 != o_109)))
                            _fail(o_109);
                          else
                            n_109 = o_109;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_109)), term_z_28));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_5);
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
ATerm Undefined_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm y_109 = NULL,z_109 = NULL;
  y_109 = t;
  x_109 :
  if(match_cons(y_109, sym_Undefined_1))
    {
      z_109 = ATgetArgument(y_109, 0);
      {
        ATerm c_110 = NULL,e_110 = NULL;
        ATerm d_110 = NULL;
        t = SSLgetAnnotations(not_null(y_109));
        {
          d_110 = t;
          if(((c_110 != NULL) && (c_110 != d_110)))
            _fail(d_110);
          else
            c_110 = d_110;
        }
        {
          t = not_null(z_109);
          {
            ATerm g_110 = NULL;
            t = l_75(t);
            {
              e_110 = t;
              {
                ATerm h_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_110)), not_null(c_110));
                {
                  h_110 = t;
                  if(((g_110 != NULL) && (g_110 != h_110)))
                    _fail(h_110);
                  else
                    g_110 = h_110;
                }
                t = not_null(g_110);
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
ATerm fetch_1 (ATerm t, ATerm o_100 (ATerm))
{
  ATerm m_110 (ATerm t)
  {
    ATerm c_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, o_100, _id);
        LocalPopChoice(g_29);
      }
    else
      {
        t = c_29;
        t = Cons_2(t, _id, m_110);
      }
    return(t);
  }
  t = m_110(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_85 (ATerm))
{
  t = fetch_1(t, g_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_110 = NULL;
  r_110 = t;
  q_110 :
  if(match_cons(r_110, sym_Help_0))
    {
      ATerm t_110 = NULL,v_110 = NULL;
      ATerm m_29;
      m_29 = t;
      {
        ATerm u_110 = NULL;
        t = SSLgetAnnotations(not_null(r_110));
        {
          u_110 = t;
          if(((t_110 != NULL) && (t_110 != u_110)))
            _fail(u_110);
          else
            t_110 = u_110;
        }
      }
      t = m_29;
      {
        ATerm w_110 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_110));
        {
          w_110 = t;
          if(((v_110 != NULL) && (v_110 != w_110)))
            _fail(w_110);
          else
            v_110 = w_110;
        }
        t = not_null(v_110);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_104 (ATerm))
{
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_104(t);
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL;
  c_111 = t;
  b_111 :
  if(match_cons(c_111, sym__2))
    {
      d_111 = ATgetArgument(c_111, 0);
      e_111 = ATgetArgument(c_111, 1);
      t = SSL_table_get(not_null(d_111), not_null(e_111));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_111 = NULL,m_111 = NULL,n_111 = NULL,o_111 = NULL;
  l_111 = t;
  k_111 :
  if(match_cons(l_111, sym__3))
    {
      m_111 = ATgetArgument(l_111, 0);
      n_111 = ATgetArgument(l_111, 1);
      o_111 = ATgetArgument(l_111, 2);
      {
        ATerm p_29;
        p_29 = t;
        {
          ATerm s_111 = NULL;
          ATerm t_111 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_111), not_null(n_111));
          {
            ATerm q_29 = t;
            int r_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_29);
              }
            else
              {
                t = q_29;
                t = (ATerm) ATempty;
              }
            {
              t_111 = t;
              if(((s_111 != NULL) && (s_111 != t_111)))
                _fail(t_111);
              else
                s_111 = t_111;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_111), not_null(n_111), (ATerm) ATinsert(CheckATermList(not_null(s_111)), not_null(o_111)));
            t = table_put_0(t);
          }
        }
        t = p_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_84 (ATerm))
{
  ATerm x_111 = NULL;
  ATerm y_111 = NULL;
  t = term_j_15;
  {
    t = g_84(t);
    {
      y_111 = t;
      if(((x_111 != NULL) && (x_111 != y_111)))
        _fail(y_111);
      else
        x_111 = y_111;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_28, term_w_28, not_null(x_111));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_112 = NULL,f_112 = NULL,g_112 = NULL;
  e_112 = t;
  d_112 :
  if(match_string(e_112, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(e_112) == AT_LIST) && ((ATermList) e_112 != ATempty)))
        {
          f_112 = ATgetFirst((ATermList) e_112);
          g_112 = (ATerm) ATgetNext((ATermList) e_112);
          {
            ATerm j_112 = NULL;
            ATerm s_29;
            s_29 = t;
            {
              t = not_null(f_112);
              t = a_0(t);
            }
            t = s_29;
            {
              ATerm k_112 = NULL;
              t = term_j_15;
              {
                t = b_0(t);
                {
                  k_112 = t;
                  if(((j_112 != NULL) && (j_112 != k_112)))
                    _fail(k_112);
                  else
                    j_112 = k_112;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_112)), not_null(j_112));
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
    ATerm p_112 = NULL;
    p_112 = t;
    o_112 :
    if(!(match_string(p_112, "--help")))
      {
        if(!(match_string(p_112, "-h")))
          {
            if(!(match_string(p_112, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_t_29;
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_v_29;
    return(t);
  }
  t = Option_3(t, j_5, k_5, l_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_112 = NULL,t_112 = NULL,u_112 = NULL;
  s_112 = t;
  r_112 :
  if(((ATgetType(s_112) == AT_LIST) && ((ATermList) s_112 != ATempty)))
    {
      t_112 = ATgetFirst((ATermList) s_112);
      u_112 = (ATerm) ATgetNext((ATermList) s_112);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_112)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_112)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm a_113 = NULL,b_113 = NULL,c_113 = NULL;
  a_113 = t;
  z_112 :
  if(match_cons(a_113, sym__2))
    {
      b_113 = ATgetArgument(a_113, 0);
      c_113 = ATgetArgument(a_113, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_21, not_null(b_113), not_null(c_113));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm w_29;
  w_29 = t;
  {
    ATerm m_5 (ATerm t)
    {
      t = term_x_29;
      t = e_84(t);
      return(t);
    }
    t = try_1(t, m_5);
  }
  t = w_29;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm k_113 = NULL;
      ATerm y_29;
      y_29 = t;
      {
        ATerm i_113 = NULL;
        ATerm j_113 = NULL;
        j_113 = t;
        if(((i_113 != NULL) && (i_113 != j_113)))
          _fail(j_113);
        else
          i_113 = j_113;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_22, not_null(i_113));
          t = set_config_0(t);
        }
      }
      t = y_29;
      {
        ATerm l_113 = NULL;
        l_113 = t;
        if(((k_113 != NULL) && (k_113 != l_113)))
          _fail(l_113);
        else
          k_113 = l_113;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_113));
      }
      return(t);
    }
    ATerm o_5 (ATerm t)
    {
      ATerm z_29 = t;
      int a_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_30 = t;
          int c_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_30);
            }
          else
            {
              t = b_30;
              {
                t = e_84(t);
                t = Cons_2(t, _id, o_5);
              }
            }
          LocalPopChoice(a_30);
        }
      else
        {
          t = z_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_5, o_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL;
  ATerm d_30;
  d_30 = t;
  {
    ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL;
    u_113 = t;
    q_113 :
    if(match_cons(u_113, sym__3))
      {
        v_113 = ATgetArgument(u_113, 0);
        w_113 = ATgetArgument(u_113, 1);
        x_113 = ATgetArgument(u_113, 2);
        {
          if(((r_113 != NULL) && (r_113 != v_113)))
            _fail(v_113);
          else
            r_113 = v_113;
          {
            if(((s_113 != NULL) && (s_113 != w_113)))
              _fail(w_113);
            else
              s_113 = w_113;
            {
              if(((t_113 != NULL) && (t_113 != x_113)))
                _fail(x_113);
              else
                t_113 = x_113;
              t = SSL_table_put(not_null(r_113), not_null(s_113), not_null(t_113));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm a_114 = NULL;
  ATerm e_30;
  e_30 = t;
  {
    t = term_f_30;
    t = table_put_0(t);
  }
  t = e_30;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm g_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_84(t);
          LocalPopChoice(h_30);
        }
      else
        {
          t = g_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_5);
    {
      ATerm q_5 (ATerm t)
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
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
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            {
              ATerm r_5 (ATerm t)
              {
                ATerm s_5 (ATerm t)
                {
                  ATerm b_114 = NULL;
                  b_114 = t;
                  if(((a_114 != NULL) && (a_114 != b_114)))
                    _fail(b_114);
                  else
                    a_114 = b_114;
                  return(t);
                }
                t = Undefined_1(t, s_5);
                return(t);
              }
              t = option_defined_1(t, r_5);
              {
                ATerm k_30;
                k_30 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_114)), term_l_30));
                  t = printnl_0(t);
                }
                t = k_30;
                {
                  t = system_usage_0(t);
                  {
                    t = term_u_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, q_5);
      {
        ATerm m_30;
        m_30 = t;
        {
          t = term_v_28;
          t = table_destroy_0(t);
        }
        t = m_30;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_86(t);
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, t_5);
  {
    t = store_options_0(t);
    {
      t = y_86(t);
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_86);
            LocalPopChoice(q_30);
          }
        else
          {
            t = p_30;
            {
              ATerm r_30 = t;
              int s_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, v_86);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(s_30);
                }
              else
                {
                  t = r_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm v_5 (ATerm t)
    {
      ATerm t_30;
      t_30 = t;
      {
        ATerm e_114 = NULL;
        ATerm f_114 = NULL;
        t = term_s_22;
        {
          t = get_config_0(t);
          {
            f_114 = t;
            if(((e_114 != NULL) && (e_114 != f_114)))
              _fail(f_114);
            else
              e_114 = f_114;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_7, (ATerm) ATinsert(ATempty, not_null(e_114)));
          t = printnl_0(t);
        }
      }
      t = t_30;
      return(t);
    }
    t = if_verbose2_1(t, v_5);
    return(t);
  }
  t = iowrap_4(t, p_86, q_86, r_86, u_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_86 (ATerm), ATerm o_86 (ATerm))
{
  t = iowrap_3(t, n_86, o_86, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm w_5 (ATerm t)
  {
    t = _2(t, _id, k_86);
    return(t);
  }
  t = iowrap_2(t, w_5, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      ATerm a_6 (ATerm t)
      {
        ATerm b_6 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, b_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, a_6);
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
  t = extract_0(t);
  return(t);
}
