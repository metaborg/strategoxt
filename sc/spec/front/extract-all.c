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
ATerm term_n_30;
ATerm term_f_30;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
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
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
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
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
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
  term_t_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Op_2, term_r_14, (ATerm) ATempty);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_14);
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
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
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
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_q_15);
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
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_z_28, term_q_15);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__3, term_x_27, term_y_27, (ATerm) ATempty);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm h_76 (ATerm), ATerm i_76 (ATerm));
ATerm SDef_3 (ATerm, ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm));
ATerm Let_2 (ATerm, ATerm j_76 (ATerm), ATerm k_76 (ATerm));
ATerm sboundin_3 (ATerm, ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_95 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm n_103 (ATerm), ATerm o_103 (ATerm));
ATerm alltd_1 (ATerm, ATerm n_102 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm p_103 (ATerm), ATerm q_103 (ATerm));
ATerm substitute_1 (ATerm, ATerm r_103 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm o_76 (ATerm), ATerm p_76 (ATerm));
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
ATerm As_2 (ATerm, ATerm d_74 (ATerm), ATerm e_74 (ATerm));
ATerm Prim_2 (ATerm, ATerm o_77 (ATerm), ATerm p_77 (ATerm));
ATerm Explode_2 (ATerm, ATerm z_73 (ATerm), ATerm a_74 (ATerm));
ATerm Op_2 (ATerm, ATerm o_75 (ATerm), ATerm p_75 (ATerm));
ATerm pat_td_1 (ATerm, ATerm q_107 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm y_97 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm u_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm f_92 (ATerm), ATerm g_92 (ATerm));
ATerm repeat_1 (ATerm, ATerm i_92 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm t_73 (ATerm), ATerm u_73 (ATerm));
ATerm Con_3 (ATerm, ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm s_73 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm l_77 (ATerm), ATerm m_77 (ATerm));
ATerm oncetd_1 (ATerm, ATerm z_101 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm j_100 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm s_99 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm j_89 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm w_97 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm));
ATerm zip_1 (ATerm, ATerm t_97 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_1 (ATerm, ATerm a_90 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm w_92 (ATerm), ATerm x_92 (ATerm));
ATerm for_3 (ATerm, ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm b_93 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm e_78 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm g_78 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm v_89 (ATerm), ATerm w_89 (ATerm));
ATerm union_1 (ATerm, ATerm x_89 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm y_88 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm h_75 (ATerm));
ATerm Cons_2 (ATerm, ATerm q_77 (ATerm), ATerm r_77 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_75 (ATerm));
ATerm _2 (ATerm, ATerm i_66 (ATerm), ATerm j_66 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_106 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm k_85 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_82 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm u_84 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_99 (ATerm), ATerm d_99 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm u_88 (ATerm), ATerm v_88 (ATerm));
ATerm crush_2 (ATerm, ATerm g_90 (ATerm), ATerm h_90 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_82 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_80 (ATerm));
ATerm map_1 (ATerm, ATerm l_105 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_80 (ATerm));
ATerm Program_1 (ATerm, ATerm c_72 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm l_85 (ATerm));
ATerm Undefined_1 (ATerm, ATerm d_72 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_105 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_81 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_99 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm));
ATerm iowrap_4 (ATerm, ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm j_84 (ATerm));
ATerm iowrap_3 (ATerm, ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm));
ATerm iowrap_2 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm));
ATerm iowrap_1 (ATerm, ATerm v_83 (ATerm));
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
      if(((ATgetType(h_7) == AT_LIST) && ((ATermList) h_7 != ATempty)))
        {
          i_7 = ATgetFirst((ATermList) h_7);
          j_7 = (ATerm) ATgetNext((ATermList) h_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(j_7)), not_null(i_7));
            {
              ATerm c_0 (ATerm t)
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
                            ATerm m_7 = t;
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
ATerm Rec_2 (ATerm t, ATerm h_76 (ATerm), ATerm i_76 (ATerm))
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
            t = h_76(t);
            {
              s_9 = t;
              {
                t = not_null(m_9);
                {
                  ATerm w_9 = NULL;
                  t = i_76(t);
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
ATerm SDef_3 (ATerm t, ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm n_76 (ATerm))
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
            t = l_76(t);
            {
              u_10 = t;
              {
                t = not_null(m_10);
                {
                  ATerm y_10 = NULL;
                  t = m_76(t);
                  {
                    w_10 = t;
                    {
                      t = not_null(n_10);
                      {
                        ATerm a_11 = NULL;
                        t = n_76(t);
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
ATerm Let_2 (ATerm t, ATerm j_76 (ATerm), ATerm k_76 (ATerm))
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
            t = j_76(t);
            {
              w_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm a_12 = NULL;
                  t = k_76(t);
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
ATerm sboundin_3 (ATerm t, ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm))
{
  ATerm o_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, k_104, k_104);
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
            t = SDef_3(t, m_104, m_104, k_104);
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            t = Rec_2(t, m_104, k_104);
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
ATerm crush_3 (ATerm t, ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm))
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
      t = foldr_3(t, i_90, j_90, k_90);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm c_95 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_95 (ATerm))
{
  ATerm q_14 (ATerm t)
  {
    ATerm m_0 (ATerm t)
    {
      ATerm z_7 = t;
      int a_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_95(t);
          LocalPopChoice(a_8);
        }
      else
        {
          t = z_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm n_0 (ATerm t)
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
            t = b_95(t);
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
            ATerm o_0 (ATerm t)
            {
              ATerm q_0 (ATerm t)
              {
                t = not_null(o_14);
                return(t);
              }
              t = split_2(t, q_14, q_0);
              t = diff_1(t, d_95);
              return(t);
            }
            ATerm p_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = c_95(t, o_0, q_14, p_0);
            {
              ATerm r_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, r_0, union_0, _id);
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
ATerm SubsVar_2 (ATerm t, ATerm n_103 (ATerm), ATerm o_103 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm l_18 = NULL,m_18 = NULL;
  j_18 = t;
  {
    ATerm n_18 = NULL;
    t = not_null(j_18);
    {
      ATerm o_18 = NULL;
      t = n_103(t);
      {
        n_18 = t;
        {
          if(((l_18 != NULL) && (l_18 != n_18)))
            _fail(n_18);
          else
            l_18 = n_18;
          {
            t = o_103(t);
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
ATerm alltd_1 (ATerm t, ATerm n_102 (ATerm))
{
  ATerm s_18 (ATerm t)
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_102(t);
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
ATerm substitute_2 (ATerm t, ATerm p_103 (ATerm), ATerm q_103 (ATerm))
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
              t = SubsVar_2(t, p_103, c_1);
              t = q_103(t);
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
ATerm substitute_1 (ATerm t, ATerm r_103 (ATerm))
{
  t = substitute_2(t, r_103, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm o_76 (ATerm), ATerm p_76 (ATerm))
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
            t = o_76(t);
            {
              j_20 = t;
              {
                t = not_null(d_20);
                {
                  ATerm n_20 = NULL;
                  t = p_76(t);
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
                      ATerm c_26 = NULL;
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
                                c_26 = t;
                                if(((r_25 != NULL) && (r_25 != c_26)))
                                  _fail(c_26);
                                else
                                  r_25 = c_26;
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
  ATerm p_28 = NULL,q_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym_Match_1))
    {
      q_28 = ATgetArgument(p_28, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
            ATerm w_28 = NULL;
            ATerm h_29 = NULL;
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
                      ATerm x_28 = NULL,f_29 = NULL,g_29 = NULL;
                      x_28 = t;
                      e_28 :
                      if(match_cons(x_28, sym_Anno_2))
                        {
                          f_29 = ATgetArgument(x_28, 0);
                          g_29 = ATgetArgument(x_28, 1);
                          {
                            if(((s_28 != NULL) && (s_28 != f_29)))
                              _fail(f_29);
                            else
                              s_28 = f_29;
                            {
                              if(((t_28 != NULL) && (t_28 != g_29)))
                                _fail(g_29);
                              else
                                t_28 = g_29;
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
                      h_29 = t;
                      if(((v_28 != NULL) && (v_28 != h_29)))
                        _fail(h_29);
                      else
                        v_28 = h_29;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_28)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_28)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_28))))));
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
                  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
                  ATerm m_29 = NULL;
                  ATerm p_29 = NULL;
                  t = new_0(t);
                  {
                    m_29 = t;
                    {
                      if(((k_29 != NULL) && (k_29 != m_29)))
                        _fail(m_29);
                      else
                        k_29 = m_29;
                      {
                        t = not_null(q_28);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm n_29 = NULL,o_29 = NULL;
                            n_29 = t;
                            i_28 :
                            if(match_cons(n_29, sym_RootApp_1))
                              {
                                o_29 = ATgetArgument(n_29, 0);
                                {
                                  if(((j_29 != NULL) && (j_29 != o_29)))
                                    _fail(o_29);
                                  else
                                    j_29 = o_29;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_29));
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
                            p_29 = t;
                            if(((l_29 != NULL) && (l_29 != p_29)))
                              _fail(p_29);
                            else
                              l_29 = p_29;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_29))), not_null(j_29))));
                  LocalPopChoice(c_10);
                }
              else
                {
                  t = b_10;
                  {
                    ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
                    ATerm v_29 = NULL;
                    ATerm c_30 = NULL;
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
                              ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
                              z_29 = t;
                              m_28 :
                              if(match_cons(z_29, sym_App_2))
                                {
                                  a_30 = ATgetArgument(z_29, 0);
                                  b_30 = ATgetArgument(z_29, 1);
                                  {
                                    if(((s_29 != NULL) && (s_29 != a_30)))
                                      _fail(a_30);
                                    else
                                      s_29 = a_30;
                                    {
                                      if(((r_29 != NULL) && (r_29 != b_30)))
                                        _fail(b_30);
                                      else
                                        r_29 = b_30;
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
                              c_30 = t;
                              if(((u_29 != NULL) && (u_29 != c_30)))
                                _fail(c_30);
                              else
                                u_29 = c_30;
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
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
  w_30 = t;
  t_30 :
  if(match_cons(w_30, sym_Match_1))
    {
      x_30 = ATgetArgument(w_30, 0);
      v_30 :
      if(match_cons(x_30, sym_RootApp_1))
        {
          y_30 = ATgetArgument(x_30, 0);
          t = not_null(y_30);
        }
      else
        {
          if(match_cons(x_30, sym_App_2))
            {
              y_30 = ATgetArgument(x_30, 0);
              z_30 = ATgetArgument(x_30, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(y_30), not_null(z_30));
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
  ATerm u_32 = NULL,v_32 = NULL;
  u_32 = t;
  t_32 :
  if(match_cons(u_32, sym_Build_1))
    {
      v_32 = ATgetArgument(u_32, 0);
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
            ATerm d_33 = NULL;
            ATerm h_33 = NULL;
            t = new_0(t);
            {
              d_33 = t;
              {
                if(((b_33 != NULL) && (b_33 != d_33)))
                  _fail(d_33);
                else
                  b_33 = d_33;
                {
                  t = not_null(v_32);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
                      e_33 = t;
                      c_32 :
                      if(match_cons(e_33, sym_Anno_2))
                        {
                          f_33 = ATgetArgument(e_33, 0);
                          g_33 = ATgetArgument(e_33, 1);
                          {
                            if(((z_32 != NULL) && (z_32 != f_33)))
                              _fail(f_33);
                            else
                              z_32 = f_33;
                            {
                              if(((a_33 != NULL) && (a_33 != g_33)))
                                _fail(g_33);
                              else
                                a_33 = g_33;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_33));
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
                      h_33 = t;
                      if(((c_33 != NULL) && (c_33 != h_33)))
                        _fail(h_33);
                      else
                        c_33 = h_33;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_o_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_33)), not_null(z_32))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_33))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_33))));
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
                  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
                  ATerm m_33 = NULL;
                  ATerm r_33 = NULL;
                  t = new_0(t);
                  {
                    m_33 = t;
                    {
                      if(((k_33 != NULL) && (k_33 != m_33)))
                        _fail(m_33);
                      else
                        k_33 = m_33;
                      {
                        t = not_null(v_32);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm p_33 = NULL,q_33 = NULL;
                            p_33 = t;
                            g_32 :
                            if(match_cons(p_33, sym_RootApp_1))
                              {
                                q_33 = ATgetArgument(p_33, 0);
                                {
                                  if(((j_33 != NULL) && (j_33 != q_33)))
                                    _fail(q_33);
                                  else
                                    j_33 = q_33;
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
                            r_33 = t;
                            if(((l_33 != NULL) && (l_33 != r_33)))
                              _fail(r_33);
                            else
                              l_33 = r_33;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_33), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_33))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_33))));
                  LocalPopChoice(q_10);
                }
              else
                {
                  t = p_10;
                  {
                    ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,c_34 = NULL;
                    ATerm d_34 = NULL;
                    ATerm n_34 = NULL;
                    t = new_0(t);
                    {
                      d_34 = t;
                      {
                        if(((v_33 != NULL) && (v_33 != d_34)))
                          _fail(d_34);
                        else
                          v_33 = d_34;
                        {
                          t = not_null(v_32);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
                              k_34 = t;
                              r_32 :
                              if(match_cons(k_34, sym_App_2))
                                {
                                  l_34 = ATgetArgument(k_34, 0);
                                  m_34 = ATgetArgument(k_34, 1);
                                  {
                                    if(((t_33 != NULL) && (t_33 != l_34)))
                                      _fail(l_34);
                                    else
                                      t_33 = l_34;
                                    {
                                      if(((u_33 != NULL) && (u_33 != m_34)))
                                        _fail(m_34);
                                      else
                                        u_33 = m_34;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_33));
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
                              n_34 = t;
                              if(((c_34 != NULL) && (c_34 != n_34)))
                                _fail(n_34);
                              else
                                c_34 = n_34;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_33)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_33), not_null(u_33), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_33)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(c_34))));
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
  d_35 :
  if(match_cons(f_35, sym_Build_1))
    {
      g_35 = ATgetArgument(f_35, 0);
      e_35 :
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
ATerm As_2 (ATerm t, ATerm d_74 (ATerm), ATerm e_74 (ATerm))
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
            t = d_74(t);
            {
              c_36 = t;
              {
                t = not_null(w_35);
                {
                  ATerm g_36 = NULL;
                  t = e_74(t);
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
ATerm Prim_2 (ATerm t, ATerm o_77 (ATerm), ATerm p_77 (ATerm))
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  u_36 :
  if(match_cons(v_36, sym_Prim_2))
    {
      w_36 = ATgetArgument(v_36, 0);
      x_36 = ATgetArgument(v_36, 1);
      {
        ATerm g_37 = NULL,i_37 = NULL;
        ATerm h_37 = NULL;
        t = SSLgetAnnotations(not_null(v_36));
        {
          h_37 = t;
          if(((g_37 != NULL) && (g_37 != h_37)))
            _fail(h_37);
          else
            g_37 = h_37;
        }
        {
          t = not_null(w_36);
          {
            ATerm k_37 = NULL;
            t = o_77(t);
            {
              i_37 = t;
              {
                t = not_null(x_36);
                {
                  ATerm m_37 = NULL;
                  t = p_77(t);
                  {
                    k_37 = t;
                    {
                      ATerm n_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(i_37), not_null(k_37)), not_null(g_37));
                      {
                        n_37 = t;
                        if(((m_37 != NULL) && (m_37 != n_37)))
                          _fail(n_37);
                        else
                          m_37 = n_37;
                      }
                      t = not_null(m_37);
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
ATerm Explode_2 (ATerm t, ATerm z_73 (ATerm), ATerm a_74 (ATerm))
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  c_38 :
  if(match_cons(d_38, sym_Explode_2))
    {
      e_38 = ATgetArgument(d_38, 0);
      f_38 = ATgetArgument(d_38, 1);
      {
        ATerm j_38 = NULL,l_38 = NULL;
        ATerm k_38 = NULL;
        t = SSLgetAnnotations(not_null(d_38));
        {
          k_38 = t;
          if(((j_38 != NULL) && (j_38 != k_38)))
            _fail(k_38);
          else
            j_38 = k_38;
        }
        {
          t = not_null(e_38);
          {
            ATerm n_38 = NULL;
            t = z_73(t);
            {
              l_38 = t;
              {
                t = not_null(f_38);
                {
                  ATerm r_38 = NULL;
                  t = a_74(t);
                  {
                    n_38 = t;
                    {
                      ATerm s_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(l_38), not_null(n_38)), not_null(j_38));
                      {
                        s_38 = t;
                        if(((r_38 != NULL) && (r_38 != s_38)))
                          _fail(s_38);
                        else
                          r_38 = s_38;
                      }
                      t = not_null(r_38);
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
ATerm Op_2 (ATerm t, ATerm o_75 (ATerm), ATerm p_75 (ATerm))
{
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
  g_39 = t;
  f_39 :
  if(match_cons(g_39, sym_Op_2))
    {
      h_39 = ATgetArgument(g_39, 0);
      i_39 = ATgetArgument(g_39, 1);
      {
        ATerm m_39 = NULL,o_39 = NULL;
        ATerm n_39 = NULL;
        t = SSLgetAnnotations(not_null(g_39));
        {
          n_39 = t;
          if(((m_39 != NULL) && (m_39 != n_39)))
            _fail(n_39);
          else
            m_39 = n_39;
        }
        {
          t = not_null(h_39);
          {
            ATerm q_39 = NULL;
            t = o_75(t);
            {
              o_39 = t;
              {
                t = not_null(i_39);
                {
                  ATerm s_39 = NULL;
                  t = p_75(t);
                  {
                    q_39 = t;
                    {
                      ATerm t_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(o_39), not_null(q_39)), not_null(m_39));
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
ATerm pat_td_1 (ATerm t, ATerm q_107 (ATerm))
{
  ATerm r_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_107(t);
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
                t = pat_td_1(t, q_107);
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
                    t = pat_td_1(t, q_107);
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
                          t = pat_td_1(t, q_107);
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
                                  t = pat_td_1(t, q_107);
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
                                  t = pat_td_1(t, q_107);
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
        ATerm i_11 = t;
        int j_11 = stack_ptr;
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
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            {
              ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
              ATerm f_41 = NULL;
              t = not_null(l_40);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
                  b_41 = t;
                  g_40 :
                  if(match_cons(b_41, sym_App_2))
                    {
                      c_41 = ATgetArgument(b_41, 0);
                      e_41 = ATgetArgument(b_41, 1);
                      h_40 :
                      if(match_cons(c_41, sym_Build_1))
                        {
                          d_41 = ATgetArgument(c_41, 0);
                          {
                            if(((z_40 != NULL) && (z_40 != d_41)))
                              _fail(d_41);
                            else
                              z_40 = d_41;
                            {
                              if(((y_40 != NULL) && (y_40 != e_41)))
                                _fail(e_41);
                              else
                                y_40 = e_41;
                              t = not_null(z_40);
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
                  f_41 = t;
                  if(((a_41 != NULL) && (a_41 != f_41)))
                    _fail(f_41);
                  else
                    a_41 = f_41;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_41));
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
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  z_42 = t;
  o_42 :
  if(match_cons(z_42, sym_InfixApp_3))
    {
      a_43 = ATgetArgument(z_42, 0);
      t_42 = ATgetArgument(z_42, 1);
      s_42 = ATgetArgument(z_42, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(t_42), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_42)), not_null(a_43))));
    }
  else
    {
      if(match_cons(z_42, sym_BAM_3))
        {
          a_43 = ATgetArgument(z_42, 0);
          t_42 = ATgetArgument(z_42, 1);
          s_42 = ATgetArgument(z_42, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(s_42))), not_null(a_43)), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_42))));
        }
      else
        {
          if(match_cons(z_42, sym_AM_2))
            {
              a_43 = ATgetArgument(z_42, 0);
              t_42 = ATgetArgument(z_42, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_43), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_42)));
            }
          else
            {
              if(match_cons(z_42, sym_MA_2))
                {
                  a_43 = ATgetArgument(z_42, 0);
                  t_42 = ATgetArgument(z_42, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_43)), not_null(t_42));
                }
              else
                {
                  if(match_cons(z_42, sym_BA_2))
                    {
                      a_43 = ATgetArgument(z_42, 0);
                      t_42 = ATgetArgument(z_42, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_42)), not_null(a_43));
                    }
                  else
                    {
                      if(match_cons(z_42, sym_Lets_2))
                        {
                          a_43 = ATgetArgument(z_42, 0);
                          t_42 = ATgetArgument(z_42, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_43), not_null(t_42));
                        }
                      else
                        {
                          if(match_cons(z_42, sym_LChoices_1))
                            {
                              a_43 = ATgetArgument(z_42, 0);
                              p_42 :
                              if(((ATgetType(a_43) == AT_LIST) && ((ATermList) a_43 != ATempty)))
                                {
                                  u_42 = ATgetFirst((ATermList) a_43);
                                  y_42 = (ATerm) ATgetNext((ATermList) a_43);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_42), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(y_42)));
                                }
                              else
                                {
                                  if(((ATermList) a_43 == ATempty))
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
                              if(match_cons(z_42, sym_Choices_1))
                                {
                                  a_43 = ATgetArgument(z_42, 0);
                                  q_42 :
                                  if(((ATgetType(a_43) == AT_LIST) && ((ATermList) a_43 != ATempty)))
                                    {
                                      u_42 = ATgetFirst((ATermList) a_43);
                                      y_42 = (ATerm) ATgetNext((ATermList) a_43);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_42), (ATerm) ATmakeAppl(sym_Choices_1, not_null(y_42)));
                                    }
                                  else
                                    {
                                      if(((ATermList) a_43 == ATempty))
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
                                  if(match_cons(z_42, sym_Seqs_1))
                                    {
                                      a_43 = ATgetArgument(z_42, 0);
                                      r_42 :
                                      if(((ATgetType(a_43) == AT_LIST) && ((ATermList) a_43 != ATempty)))
                                        {
                                          u_42 = ATgetFirst((ATermList) a_43);
                                          y_42 = (ATerm) ATgetNext((ATermList) a_43);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_42), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_42)));
                                        }
                                      else
                                        {
                                          if(((ATermList) a_43 == ATempty))
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
      t = term_t_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm y_97 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, y_97);
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
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_s_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_45))));
    return(t);
  }
  n_45 = t;
  m_45 :
  if(match_cons(n_45, sym_Var_1))
    {
      o_45 = ATgetArgument(n_45, 0);
      {
        ATerm z_11 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_45(t);
            LocalPopChoice(c_12);
          }
        else
          {
            t = z_11;
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
ATerm Var_1 (ATerm t, ATerm u_0 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_Var_1))
    {
      g_46 = ATgetArgument(f_46, 0);
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
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
                t = u_0(t);
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
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            {
              ATerm s_46 = NULL,u_46 = NULL;
              ATerm t_46 = NULL;
              t = SSLgetAnnotations(not_null(f_46));
              {
                t_46 = t;
                if(((s_46 != NULL) && (s_46 != t_46)))
                  _fail(t_46);
                else
                  s_46 = t_46;
              }
              {
                t = not_null(g_46);
                {
                  ATerm w_46 = NULL;
                  t = u_0(t);
                  {
                    u_46 = t;
                    {
                      ATerm x_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_46)), not_null(s_46));
                      {
                        x_46 = t;
                        if(((w_46 != NULL) && (w_46 != x_46)))
                          _fail(x_46);
                        else
                          w_46 = x_46;
                      }
                      t = not_null(w_46);
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
ATerm repeat_2 (ATerm t, ATerm f_92 (ATerm), ATerm g_92 (ATerm))
{
  ATerm a_48 (ATerm t)
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_92(t);
        t = a_48(t);
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = g_92(t);
      }
    return(t);
  }
  t = a_48(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm i_92 (ATerm))
{
  t = repeat_2(t, i_92, _id);
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
      ATerm m_12;
      m_12 = t;
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
      t = m_12;
      {
        ATerm o_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(h_48));
        {
          o_48 = t;
          if(((j_48 != NULL) && (j_48 != o_48)))
            _fail(o_48);
          else
            j_48 = o_48;
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
  ATerm n_12 = t;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
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
      t = n_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm t_73 (ATerm), ATerm u_73 (ATerm))
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  c_49 = t;
  b_49 :
  if(match_cons(c_49, sym_App_2))
    {
      d_49 = ATgetArgument(c_49, 0);
      e_49 = ATgetArgument(c_49, 1);
      {
        ATerm q_49 = NULL,s_49 = NULL;
        ATerm r_49 = NULL;
        t = SSLgetAnnotations(not_null(c_49));
        {
          r_49 = t;
          if(((q_49 != NULL) && (q_49 != r_49)))
            _fail(r_49);
          else
            q_49 = r_49;
        }
        {
          t = not_null(d_49);
          {
            ATerm u_49 = NULL;
            t = t_73(t);
            {
              s_49 = t;
              {
                t = not_null(e_49);
                {
                  ATerm w_49 = NULL;
                  t = u_73(t);
                  {
                    u_49 = t;
                    {
                      ATerm x_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(s_49), not_null(u_49)), not_null(q_49));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Con_3 (ATerm t, ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm s_73 (ATerm))
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
            t = q_73(t);
            {
              u_50 = t;
              {
                t = not_null(m_50);
                {
                  ATerm y_50 = NULL;
                  t = r_73(t);
                  {
                    w_50 = t;
                    {
                      t = not_null(n_50);
                      {
                        ATerm a_51 = NULL;
                        t = s_73(t);
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
  ATerm q_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
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
      t = q_12;
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
ATerm Scope_2 (ATerm t, ATerm l_77 (ATerm), ATerm m_77 (ATerm))
{
  ATerm k_52 = NULL,n_52 = NULL,o_52 = NULL;
  k_52 = t;
  j_52 :
  if(match_cons(k_52, sym_Scope_2))
    {
      n_52 = ATgetArgument(k_52, 0);
      o_52 = ATgetArgument(k_52, 1);
      {
        ATerm s_52 = NULL,u_52 = NULL;
        ATerm t_52 = NULL;
        t = SSLgetAnnotations(not_null(k_52));
        {
          t_52 = t;
          if(((s_52 != NULL) && (s_52 != t_52)))
            _fail(t_52);
          else
            s_52 = t_52;
        }
        {
          t = not_null(n_52);
          {
            ATerm w_52 = NULL;
            t = l_77(t);
            {
              u_52 = t;
              {
                t = not_null(o_52);
                {
                  ATerm y_52 = NULL;
                  t = m_77(t);
                  {
                    w_52 = t;
                    {
                      ATerm k_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(u_52), not_null(w_52)), not_null(s_52));
                      {
                        k_53 = t;
                        if(((y_52 != NULL) && (y_52 != k_53)))
                          _fail(k_53);
                        else
                          y_52 = k_53;
                      }
                      t = not_null(y_52);
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
ATerm oncetd_1 (ATerm t, ATerm z_101 (ATerm))
{
  ATerm r_53 (ATerm t)
  {
    ATerm z_12 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_101(t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = z_12;
        t = _one(t, r_53);
      }
    return(t);
  }
  t = r_53(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL;
  u_54 = t;
  p_54 :
  if(match_cons(u_54, sym_SRule_1))
    {
      v_54 = ATgetArgument(u_54, 0);
      t_54 :
      if(match_cons(v_54, sym_Rule_3))
        {
          w_54 = ATgetArgument(v_54, 0);
          x_54 = ATgetArgument(v_54, 1);
          y_54 = ATgetArgument(v_54, 2);
          {
            ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL;
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
                  t = not_null(w_54);
                  {
                    ATerm y_55 = NULL;
                    ATerm d_2 (ATerm t)
                    {
                      ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
                      l_55 = t;
                      v_53 :
                      if(match_cons(l_55, sym_Con_3))
                        {
                          m_55 = ATgetArgument(l_55, 0);
                          o_55 = ATgetArgument(l_55, 1);
                          p_55 = ATgetArgument(l_55, 2);
                          w_53 :
                          if(match_cons(m_55, sym_Var_1))
                            {
                              n_55 = ATgetArgument(m_55, 0);
                              {
                                if(((g_55 != NULL) && (g_55 != n_55)))
                                  _fail(n_55);
                                else
                                  g_55 = n_55;
                                {
                                  if(((e_55 != NULL) && (e_55 != o_55)))
                                    _fail(o_55);
                                  else
                                    e_55 = o_55;
                                  {
                                    if(((c_55 != NULL) && (c_55 != p_55)))
                                      _fail(p_55);
                                    else
                                      c_55 = p_55;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_55));
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
                          t = not_null(x_54);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
                              r_55 = t;
                              k_54 :
                              if(match_cons(r_55, sym_Con_3))
                                {
                                  s_55 = ATgetArgument(r_55, 0);
                                  u_55 = ATgetArgument(r_55, 1);
                                  v_55 = ATgetArgument(r_55, 2);
                                  l_54 :
                                  if(match_cons(s_55, sym_Var_1))
                                    {
                                      t_55 = ATgetArgument(s_55, 0);
                                      m_54 :
                                      if(match_cons(v_55, sym_Call_2))
                                        {
                                          w_55 = ATgetArgument(v_55, 0);
                                          x_55 = ATgetArgument(v_55, 1);
                                          n_54 :
                                          if(((ATermList) x_55 == ATempty))
                                            {
                                              {
                                                if(((g_55 != NULL) && (g_55 != t_55)))
                                                  _fail(t_55);
                                                else
                                                  g_55 = t_55;
                                                {
                                                  if(((f_55 != NULL) && (f_55 != u_55)))
                                                    _fail(u_55);
                                                  else
                                                    f_55 = u_55;
                                                  {
                                                    if(((d_55 != NULL) && (d_55 != w_55)))
                                                      _fail(w_55);
                                                    else
                                                      d_55 = w_55;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_55)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_55), not_null(j_55), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_54), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(d_55), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_55), not_null(f_55), term_s_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_55)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_55)))))));
          }
        }
      else
        {
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
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        {
          ATerm g_13 = t;
          int h_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(h_13);
            }
          else
            {
              t = g_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm j_100 (ATerm))
{
  t = j_100(t);
  {
    ATerm g_2 (ATerm t)
    {
      t = topdown_1(t, j_100);
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
              ATerm t_13 = t;
              int u_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
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
                        t = Bapp_0(t);
                        LocalPopChoice(w_13);
                      }
                    else
                      {
                        t = v_13;
                        {
                          ATerm x_13 = t;
                          int y_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(y_13);
                            }
                          else
                            {
                              t = x_13;
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
  ATerm p_56 = NULL;
  p_56 = t;
  o_56 :
  if(match_cons(p_56, sym__0))
    {
      ATerm r_56 = NULL,w_56 = NULL;
      ATerm z_13;
      z_13 = t;
      {
        ATerm s_56 = NULL;
        t = SSLgetAnnotations(not_null(p_56));
        {
          s_56 = t;
          if(((r_56 != NULL) && (r_56 != s_56)))
            _fail(s_56);
          else
            r_56 = s_56;
        }
      }
      t = z_13;
      {
        ATerm x_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(r_56));
        {
          x_56 = t;
          if(((w_56 != NULL) && (w_56 != x_56)))
            _fail(x_56);
          else
            w_56 = x_56;
        }
        t = not_null(w_56);
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
  ATerm o_57 = NULL;
  ATerm q_57 = NULL,r_57 = NULL,h_58 = NULL,v_60 = NULL;
  o_57 = t;
  {
    ATerm a_14;
    a_14 = t;
    {
      ATerm s_57 = NULL;
      ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
      t = not_null(o_57);
      {
        s_57 = t;
        {
          t = SSL_explode_term(not_null(s_57));
          {
            u_57 = t;
            j_57 :
            if(match_cons(u_57, sym__2))
              {
                v_57 = ATgetArgument(u_57, 0);
                w_57 = ATgetArgument(u_57, 1);
                k_57 :
                if(match_string(v_57, ""))
                  {
                    l_57 :
                    if(((ATgetType(w_57) == AT_LIST) && ((ATermList) w_57 != ATempty)))
                      {
                        x_57 = ATgetFirst((ATermList) w_57);
                        y_57 = (ATerm) ATgetNext((ATermList) w_57);
                        {
                          if(((q_57 != NULL) && (q_57 != x_57)))
                            _fail(x_57);
                          else
                            q_57 = x_57;
                          if(((r_57 != NULL) && (r_57 != y_57)))
                            _fail(y_57);
                          else
                            r_57 = y_57;
                        }
                      }
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
      ATerm d_14;
      d_14 = t;
      {
        ATerm i_58 = NULL;
        t = term_v_9;
        {
          i_58 = t;
          if(((h_58 != NULL) && (h_58 != i_58)))
            _fail(i_58);
          else
            h_58 = i_58;
        }
      }
      t = d_14;
      {
        t = SSL_mkterm(not_null(h_58), not_null(r_57));
        {
          v_60 = t;
          t = not_null(v_60);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm q_62 = NULL;
  ATerm s_62 = NULL,t_62 = NULL;
  q_62 = t;
  {
    ATerm u_62 = NULL;
    ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL;
    t = not_null(q_62);
    {
      u_62 = t;
      {
        t = SSL_explode_term(not_null(u_62));
        {
          w_62 = t;
          n_62 :
          if(match_cons(w_62, sym__2))
            {
              x_62 = ATgetArgument(w_62, 0);
              y_62 = ATgetArgument(w_62, 1);
              o_62 :
              if(match_string(x_62, ""))
                {
                  p_62 :
                  if(((ATgetType(y_62) == AT_LIST) && ((ATermList) y_62 != ATempty)))
                    {
                      z_62 = ATgetFirst((ATermList) y_62);
                      a_63 = (ATerm) ATgetNext((ATermList) y_62);
                      {
                        if(((t_62 != NULL) && (t_62 != z_62)))
                          _fail(z_62);
                        else
                          t_62 = z_62;
                        if(((s_62 != NULL) && (s_62 != a_63)))
                          _fail(a_63);
                        else
                          s_62 = a_63;
                      }
                    }
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
    t = not_null(t_62);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm s_99 (ATerm))
{
  ATerm s_66 = NULL,u_66 = NULL,w_66 = NULL;
  ATerm y_66 (ATerm t)
  {
    ATerm g_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_66 = NULL,q_66 = NULL;
        ATerm l_14;
        l_14 = t;
        {
          ATerm p_66 = NULL;
          t = map_1(t, Thd_0);
          {
            t = s_99(t);
            {
              p_66 = t;
              if(((o_66 != NULL) && (o_66 != p_66)))
                _fail(p_66);
              else
                o_66 = p_66;
            }
          }
        }
        t = l_14;
        {
          ATerm r_66 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = y_66(t);
            {
              r_66 = t;
              if(((q_66 != NULL) && (q_66 != r_66)))
                _fail(r_66);
              else
                q_66 = r_66;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(q_66)), not_null(o_66));
        }
        LocalPopChoice(k_14);
      }
    else
      {
        t = g_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = y_66(t);
  {
    ATerm m_14;
    m_14 = t;
    {
      ATerm t_66 = NULL;
      t_66 = t;
      if(((s_66 != NULL) && (s_66 != t_66)))
        _fail(t_66);
      else
        s_66 = t_66;
    }
    t = m_14;
    {
      ATerm n_14;
      n_14 = t;
      {
        ATerm v_66 = NULL;
        t = term_v_9;
        {
          v_66 = t;
          if(((u_66 != NULL) && (u_66 != v_66)))
            _fail(v_66);
          else
            u_66 = v_66;
        }
      }
      t = n_14;
      {
        t = SSL_mkterm(not_null(u_66), not_null(s_66));
        {
          w_66 = t;
          t = not_null(w_66);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm i_67 = NULL;
  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL;
  i_67 = t;
  {
    ATerm n_67 = NULL;
    ATerm o_67 = NULL;
    t = new_0(t);
    {
      n_67 = t;
      {
        if(((k_67 != NULL) && (k_67 != n_67)))
          _fail(n_67);
        else
          k_67 = n_67;
        {
          ATerm p_67 = NULL;
          t = new_0(t);
          {
            o_67 = t;
            {
              if(((l_67 != NULL) && (l_67 != o_67)))
                _fail(o_67);
              else
                l_67 = o_67;
              {
                t = new_0(t);
                {
                  p_67 = t;
                  if(((m_67 != NULL) && (m_67 != p_67)))
                    _fail(p_67);
                  else
                    m_67 = p_67;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(k_67)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_67)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_67))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(k_67), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_14), term_t_14)), not_null(l_67), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_67)), not_null(m_67), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_67)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
  w_67 = t;
  v_67 :
  if(match_cons(w_67, sym__2))
    {
      x_67 = ATgetArgument(w_67, 0);
      y_67 = ATgetArgument(w_67, 1);
      {
        ATerm w_14 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(x_67), not_null(y_67));
            LocalPopChoice(d_15);
          }
        else
          {
            t = w_14;
            t = SSL_subtr(not_null(x_67), not_null(y_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm j_89 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
    l_68 = t;
    d_68 :
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
    f_68 :
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
          ATerm e_15;
          e_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_68), term_z_6);
            t = geq_0(t);
          }
          t = e_15;
          {
            ATerm m_15;
            m_15 = t;
            {
              ATerm e_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_68), term_z_6);
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
            t = m_15;
            {
              ATerm g_69 = NULL;
              t = not_null(y_68);
              {
                t = j_89(t);
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
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_69)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_69)))), (ATerm) ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_69))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(w_69), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_14), term_t_14)), not_null(x_69), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_69)), not_null(y_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_69)));
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
ATerm zipr_1 (ATerm t, ATerm w_97 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, w_97);
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
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  ATerm h_74 (ATerm t)
  {
    ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,a_73 = NULL;
    ATerm p_15;
    p_15 = t;
    {
      ATerm n_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL;
      ATerm o_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_71), term_z_6);
      {
        t = add_0(t);
        {
          o_72 = t;
          if(((n_72 != NULL) && (n_72 != o_72)))
            _fail(o_72);
          else
            n_72 = o_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_72), term_q_15);
        {
          t = copy_1(t, new_0);
          {
            p_72 = t;
            m_71 :
            if(((ATgetType(p_72) == AT_LIST) && ((ATermList) p_72 != ATempty)))
              {
                q_72 = ATgetFirst((ATermList) p_72);
                r_72 = (ATerm) ATgetNext((ATermList) p_72);
                {
                  ATerm s_72 = NULL;
                  if(((f_72 != NULL) && (f_72 != q_72)))
                    _fail(q_72);
                  else
                    f_72 = q_72;
                  {
                    if(((g_72 != NULL) && (g_72 != r_72)))
                      _fail(r_72);
                    else
                      g_72 = r_72;
                    {
                      t = not_null(g_72);
                      {
                        ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL;
                        t = last_0(t);
                        {
                          s_72 = t;
                          {
                            if(((e_72 != NULL) && (e_72 != s_72)))
                              _fail(s_72);
                            else
                              e_72 = s_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_72)), not_null(f_72)), not_null(g_72));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    t_72 = t;
                                    l_71 :
                                    if(match_cons(t_72, sym__6))
                                      {
                                        u_72 = ATgetArgument(t_72, 0);
                                        v_72 = ATgetArgument(t_72, 1);
                                        w_72 = ATgetArgument(t_72, 2);
                                        x_72 = ATgetArgument(t_72, 3);
                                        y_72 = ATgetArgument(t_72, 4);
                                        z_72 = ATgetArgument(t_72, 5);
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
                                              {
                                                if(((k_72 != NULL) && (k_72 != x_72)))
                                                  _fail(x_72);
                                                else
                                                  k_72 = x_72;
                                                {
                                                  if(((l_72 != NULL) && (l_72 != y_72)))
                                                    _fail(y_72);
                                                  else
                                                    l_72 = y_72;
                                                  if(((m_72 != NULL) && (m_72 != z_72)))
                                                    _fail(z_72);
                                                  else
                                                    m_72 = z_72;
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
      ATerm b_73 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_72)), not_null(j_72)), not_null(g_72));
      {
        t = concat_0(t);
        {
          b_73 = t;
          if(((a_73 != NULL) && (a_73 != b_73)))
            _fail(b_73);
          else
            a_73 = b_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_71), term_r_15), not_null(i_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(a_73)), not_null(f_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_71), not_null(k_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_71), not_null(m_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_72))))));
    }
    return(t);
  }
  ATerm i_74 (ATerm t)
  {
    ATerm d_73 = NULL;
    ATerm e_73 = NULL;
    t = new_0(t);
    {
      e_73 = t;
      if(((d_73 != NULL) && (d_73 != e_73)))
        _fail(e_73);
      else
        d_73 = e_73;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_71), term_r_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_71), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_71), (ATerm) ATempty))), term_s_11))));
    return(t);
  }
  ATerm j_74 (ATerm t)
  {
    ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,f_74 = NULL;
    ATerm s_15;
    s_15 = t;
    {
      ATerm o_73 = NULL;
      ATerm p_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,b_74 = NULL,c_74 = NULL;
      t = new_0(t);
      {
        o_73 = t;
        {
          if(((h_73 != NULL) && (h_73 != o_73)))
            _fail(o_73);
          else
            h_73 = o_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_71), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_73)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  p_73 = t;
                  r_71 :
                  if(match_cons(p_73, sym__6))
                    {
                      v_73 = ATgetArgument(p_73, 0);
                      w_73 = ATgetArgument(p_73, 1);
                      x_73 = ATgetArgument(p_73, 2);
                      y_73 = ATgetArgument(p_73, 3);
                      b_74 = ATgetArgument(p_73, 4);
                      c_74 = ATgetArgument(p_73, 5);
                      {
                        if(((i_73 != NULL) && (i_73 != v_73)))
                          _fail(v_73);
                        else
                          i_73 = v_73;
                        {
                          if(((j_73 != NULL) && (j_73 != w_73)))
                            _fail(w_73);
                          else
                            j_73 = w_73;
                          {
                            if(((k_73 != NULL) && (k_73 != x_73)))
                              _fail(x_73);
                            else
                              k_73 = x_73;
                            {
                              if(((l_73 != NULL) && (l_73 != y_73)))
                                _fail(y_73);
                              else
                                l_73 = y_73;
                              {
                                if(((m_73 != NULL) && (m_73 != b_74)))
                                  _fail(b_74);
                                else
                                  m_73 = b_74;
                                if(((n_73 != NULL) && (n_73 != c_74)))
                                  _fail(c_74);
                                else
                                  n_73 = c_74;
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
      ATerm g_74 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_73), not_null(m_73));
      {
        t = conc_0(t);
        {
          g_74 = t;
          if(((f_74 != NULL) && (f_74 != g_74)))
            _fail(g_74);
          else
            f_74 = g_74;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(x_71), term_y_15), not_null(j_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(f_74)), not_null(h_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(x_71), not_null(l_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(x_71), not_null(n_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(i_73))))));
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
              ATerm d_16 = t;
              int l_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_74(t);
                  LocalPopChoice(l_16);
                }
              else
                {
                  t = d_16;
                  t = i_74(t);
                }
            }
          else
            {
              t = h_74(t);
            }
        }
      else
        {
          if(match_string(y_71, "D"))
            {
              t = j_74(t);
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
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL;
  y_74 = t;
  v_74 :
  if(match_cons(y_74, sym__2))
    {
      z_74 = ATgetArgument(y_74, 0);
      e_75 = ATgetArgument(y_74, 1);
      w_74 :
      if(match_cons(z_74, sym__2))
        {
          a_75 = ATgetArgument(z_74, 0);
          d_75 = ATgetArgument(z_74, 1);
          x_74 :
          if(match_cons(a_75, sym_Mod_2))
            {
              b_75 = ATgetArgument(a_75, 0);
              c_75 = ATgetArgument(a_75, 1);
              {
                ATerm l_75 = NULL;
                ATerm m_75 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(b_75), not_null(c_75), not_null(d_75));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      m_75 = t;
                      if(((l_75 != NULL) && (l_75 != m_75)))
                        _fail(m_75);
                      else
                        l_75 = m_75;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_75), not_null(e_75));
              }
            }
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
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL;
  u_75 = t;
  s_75 :
  if(match_cons(u_75, sym__5))
    {
      v_75 = ATgetArgument(u_75, 0);
      y_75 = ATgetArgument(u_75, 1);
      z_75 = ATgetArgument(u_75, 2);
      a_76 = ATgetArgument(u_75, 3);
      b_76 = ATgetArgument(u_75, 4);
      t_75 :
      if(((ATgetType(v_75) == AT_LIST) && ((ATermList) v_75 != ATempty)))
        {
          w_75 = ATgetFirst((ATermList) v_75);
          x_75 = (ATerm) ATgetNext((ATermList) v_75);
          t = (ATerm) ATmakeAppl(sym__5, not_null(x_75), not_null(y_75), not_null(z_75), not_null(a_76), (ATerm) ATinsert(CheckATermList(not_null(b_76)), not_null(w_75)));
        }
      else
        {
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
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL;
  v_76 = t;
  t_76 :
  if(match_cons(v_76, sym__2))
    {
      w_76 = ATgetArgument(v_76, 0);
      x_76 = ATgetArgument(v_76, 1);
      u_76 :
      if(((ATgetType(x_76) == AT_LIST) && ((ATermList) x_76 != ATempty)))
        {
          y_76 = ATgetFirst((ATermList) x_76);
          z_76 = (ATerm) ATgetNext((ATermList) x_76);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_76)), not_null(y_76)), not_null(z_76));
        }
      else
        {
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
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL;
  g_77 = t;
  f_77 :
  if(match_cons(g_77, sym__2))
    {
      h_77 = ATgetArgument(g_77, 0);
      i_77 = ATgetArgument(g_77, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_77)), not_null(h_77));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL;
  w_77 = t;
  t_77 :
  if(match_cons(w_77, sym__2))
    {
      x_77 = ATgetArgument(w_77, 0);
      a_78 = ATgetArgument(w_77, 1);
      u_77 :
      if(((ATgetType(x_77) == AT_LIST) && ((ATermList) x_77 != ATempty)))
        {
          y_77 = ATgetFirst((ATermList) x_77);
          z_77 = (ATerm) ATgetNext((ATermList) x_77);
          v_77 :
          if(((ATgetType(a_78) == AT_LIST) && ((ATermList) a_78 != ATempty)))
            {
              b_78 = ATgetFirst((ATermList) a_78);
              c_78 = (ATerm) ATgetNext((ATermList) a_78);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_77), not_null(b_78)), (ATerm) ATmakeAppl(sym__2, not_null(z_77), not_null(c_78)));
            }
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
  ATerm r_78 = NULL,s_78 = NULL,w_78 = NULL;
  r_78 = t;
  o_78 :
  if(match_cons(r_78, sym__2))
    {
      s_78 = ATgetArgument(r_78, 0);
      w_78 = ATgetArgument(r_78, 1);
      p_78 :
      if(((ATermList) s_78 == ATempty))
        {
          q_78 :
          if(((ATermList) w_78 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm r_97 (ATerm))
{
  ATerm y_78 (ATerm t)
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_97(t);
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        {
          t = p_97(t);
          {
            t = _2(t, r_97, y_78);
            t = q_97(t);
          }
        }
      }
    return(t);
  }
  t = y_78(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm t_97 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, t_97);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL;
  j_79 = t;
  h_79 :
  if(((ATgetType(j_79) == AT_LIST) && ((ATermList) j_79 != ATempty)))
    {
      k_79 = ATgetFirst((ATermList) j_79);
      n_79 = (ATerm) ATgetNext((ATermList) j_79);
      i_79 :
      if(match_cons(k_79, sym__2))
        {
          l_79 = ATgetArgument(k_79, 0);
          m_79 = ATgetArgument(k_79, 1);
          {
            ATerm r_79 = NULL,s_79 = NULL,y_79 = NULL,e_80 = NULL;
            ATerm u_16;
            u_16 = t;
            {
              ATerm t_79 = NULL;
              ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL;
              t = not_null(m_79);
              {
                t_79 = t;
                {
                  t = SSL_explode_term(not_null(t_79));
                  {
                    v_79 = t;
                    c_79 :
                    if(match_cons(v_79, sym__2))
                      {
                        w_79 = ATgetArgument(v_79, 0);
                        x_79 = ATgetArgument(v_79, 1);
                        {
                          if(((r_79 != NULL) && (r_79 != w_79)))
                            _fail(w_79);
                          else
                            r_79 = w_79;
                          if(((s_79 != NULL) && (s_79 != x_79)))
                            _fail(x_79);
                          else
                            s_79 = x_79;
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
              ATerm v_16;
              v_16 = t;
              {
                ATerm z_79 = NULL;
                ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
                t = not_null(l_79);
                {
                  z_79 = t;
                  {
                    t = SSL_explode_term(not_null(z_79));
                    {
                      b_80 = t;
                      f_79 :
                      if(match_cons(b_80, sym__2))
                        {
                          c_80 = ATgetArgument(b_80, 0);
                          d_80 = ATgetArgument(b_80, 1);
                          {
                            if(((r_79 != NULL) && (r_79 != c_80)))
                              _fail(c_80);
                            else
                              r_79 = c_80;
                            if(((y_79 != NULL) && (y_79 != d_80)))
                              _fail(d_80);
                            else
                              y_79 = d_80;
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
              t = v_16;
              {
                ATerm f_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_79), not_null(s_79));
                {
                  t = zip_1(t, _id);
                  {
                    f_80 = t;
                    if(((e_80 != NULL) && (e_80 != f_80)))
                      _fail(f_80);
                    else
                      e_80 = f_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_80), not_null(n_79));
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
  ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL,y_80 = NULL,z_80 = NULL;
  p_80 = t;
  n_80 :
  if(((ATgetType(p_80) == AT_LIST) && ((ATermList) p_80 != ATempty)))
    {
      q_80 = ATgetFirst((ATermList) p_80);
      z_80 = (ATerm) ATgetNext((ATermList) p_80);
      o_80 :
      if(match_cons(q_80, sym__2))
        {
          r_80 = ATgetArgument(q_80, 0);
          y_80 = ATgetArgument(q_80, 1);
          {
            ATerm b_81 = NULL;
            if(((r_80 != NULL) && (r_80 != y_80)))
              _fail(y_80);
            else
              r_80 = y_80;
            {
              if(((b_81 != NULL) && (b_81 != z_80)))
                _fail(z_80);
              else
                b_81 = z_80;
              t = not_null(b_81);
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
ATerm diff_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL;
  f_81 = t;
  e_81 :
  if(match_cons(f_81, sym__2))
    {
      g_81 = ATgetArgument(f_81, 0);
      h_81 = ATgetArgument(f_81, 1);
      {
        t = not_null(g_81);
        {
          ATerm l_81 (ATerm t)
          {
            ATerm w_16 = t;
            int e_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(e_17);
              }
            else
              {
                t = w_16;
                {
                  ATerm f_17 = t;
                  int g_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_2 (ATerm t)
                      {
                        t = not_null(h_81);
                        return(t);
                      }
                      t = HdMember_p__2(t, a_90, m_2);
                      t = l_81(t);
                      LocalPopChoice(g_17);
                    }
                  else
                    {
                      t = f_17;
                      t = Cons_2(t, _id, l_81);
                    }
                }
              }
            return(t);
          }
          t = l_81(t);
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
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      {
        ATerm n_2 (ATerm t)
        {
          ATerm n_81 = NULL;
          n_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(n_81));
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
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm))
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
      if(((ATgetType(c_82) == AT_LIST) && ((ATermList) c_82 != ATempty)))
        {
          d_82 = ATgetFirst((ATermList) c_82);
          e_82 = (ATerm) ATgetNext((ATermList) c_82);
          {
            ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL,a_83 = NULL,c_83 = NULL,e_83 = NULL;
            ATerm f_18;
            f_18 = t;
            {
              ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_82), not_null(g_82));
              {
                t = k_78(t);
                {
                  v_82 = t;
                  u_81 :
                  if(match_cons(v_82, sym__2))
                    {
                      w_82 = ATgetArgument(v_82, 0);
                      x_82 = ATgetArgument(v_82, 1);
                      {
                        ATerm y_82 = NULL;
                        if(((s_82 != NULL) && (s_82 != w_82)))
                          _fail(w_82);
                        else
                          s_82 = w_82;
                        {
                          if(((r_82 != NULL) && (r_82 != x_82)))
                            _fail(x_82);
                          else
                            r_82 = x_82;
                          {
                            t = not_null(s_82);
                            {
                              ATerm z_82 = NULL;
                              t = l_78(t);
                              {
                                y_82 = t;
                                {
                                  if(((t_82 != NULL) && (t_82 != y_82)))
                                    _fail(y_82);
                                  else
                                    t_82 = y_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_82), not_null(f_82));
                                    {
                                      t = diff_0(t);
                                      {
                                        z_82 = t;
                                        if(((u_82 != NULL) && (u_82 != z_82)))
                                          _fail(z_82);
                                        else
                                          u_82 = z_82;
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
                ATerm b_83 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_82), not_null(e_82));
                {
                  t = conc_0(t);
                  {
                    b_83 = t;
                    if(((a_83 != NULL) && (a_83 != b_83)))
                      _fail(b_83);
                    else
                      a_83 = b_83;
                  }
                }
              }
              t = g_18;
              {
                ATerm h_18;
                h_18 = t;
                {
                  ATerm d_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_82), not_null(f_82));
                  {
                    t = conc_0(t);
                    {
                      d_83 = t;
                      if(((c_83 != NULL) && (c_83 != d_83)))
                        _fail(d_83);
                      else
                        c_83 = d_83;
                    }
                  }
                }
                t = h_18;
                {
                  ATerm f_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_82), not_null(s_82), not_null(h_82));
                  {
                    t = m_78(t);
                    {
                      f_83 = t;
                      if(((e_83 != NULL) && (e_83 != f_83)))
                        _fail(f_83);
                      else
                        e_83 = f_83;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(a_83), not_null(c_83), not_null(r_82), not_null(e_83), not_null(i_82));
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
  ATerm u_83 = NULL,w_83 = NULL,x_83 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL;
  u_83 = t;
  o_83 :
  if(match_cons(u_83, sym__5))
    {
      w_83 = ATgetArgument(u_83, 0);
      x_83 = ATgetArgument(u_83, 1);
      d_84 = ATgetArgument(u_83, 2);
      e_84 = ATgetArgument(u_83, 3);
      f_84 = ATgetArgument(u_83, 4);
      t_83 :
      if(((ATermList) w_83 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_84), not_null(f_84));
        }
      else
        {
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
  ATerm r_84 = NULL,t_84 = NULL,v_84 = NULL,w_84 = NULL;
  r_84 = t;
  q_84 :
  if(match_cons(r_84, sym__3))
    {
      t_84 = ATgetArgument(r_84, 0);
      v_84 = ATgetArgument(r_84, 1);
      w_84 = ATgetArgument(r_84, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(t_84), not_null(t_84), not_null(v_84), not_null(w_84), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm w_92 (ATerm), ATerm x_92 (ATerm))
{
  ATerm b_85 (ATerm t)
  {
    ATerm i_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_92(t);
        LocalPopChoice(k_18);
      }
    else
      {
        t = i_18;
        {
          t = x_92(t);
          t = b_85(t);
        }
      }
    return(t);
  }
  t = b_85(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm b_93 (ATerm))
{
  t = z_92(t);
  t = while_not_2(t, a_93, b_93);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, t_78, u_78, v_78);
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
    ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL;
    e_85 = t;
    d_85 :
    if(match_cons(e_85, sym__3))
      {
        f_85 = ATgetArgument(e_85, 0);
        g_85 = ATgetArgument(e_85, 1);
        h_85 = ATgetArgument(e_85, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(h_85)), not_null(g_85));
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
ATerm assert_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL;
  s_85 = t;
  r_85 :
  if(match_cons(s_85, sym__2))
    {
      t_85 = ATgetArgument(s_85, 0);
      u_85 = ATgetArgument(s_85, 1);
      {
        ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
        ATerm u_18;
        u_18 = t;
        {
          ATerm a_86 = NULL;
          ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL;
          t = e_78(t);
          {
            a_86 = t;
            {
              if(((x_85 != NULL) && (x_85 != a_86)))
                _fail(a_86);
              else
                x_85 = a_86;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_85), not_null(t_85), not_null(u_85));
                {
                  t = table_push_0(t);
                  {
                    ATerm v_18 = t;
                    int b_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_85), term_d_19);
                        t = table_get_0(t);
                        LocalPopChoice(b_19);
                      }
                    else
                      {
                        t = v_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      b_86 = t;
                      q_85 :
                      if(((ATgetType(b_86) == AT_LIST) && ((ATermList) b_86 != ATempty)))
                        {
                          c_86 = ATgetFirst((ATermList) b_86);
                          d_86 = (ATerm) ATgetNext((ATermList) b_86);
                          {
                            if(((y_85 != NULL) && (y_85 != c_86)))
                              _fail(c_86);
                            else
                              y_85 = c_86;
                            {
                              if(((z_85 != NULL) && (z_85 != d_86)))
                                _fail(d_86);
                              else
                                z_85 = d_86;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_85), term_d_19, (ATerm) ATinsert(CheckATermList(not_null(z_85)), (ATerm) ATinsert(CheckATermList(not_null(y_85)), not_null(t_85))));
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
  ATerm l_86 = NULL;
  ATerm n_86 = NULL;
  l_86 = t;
  {
    ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(l_86));
    {
      ATerm v_2 (ATerm t)
      {
        t = term_e_19;
        return(t);
      }
      t = rewrite_1(t, v_2);
      {
        o_86 = t;
        j_86 :
        if(match_cons(o_86, sym_Defined_2))
          {
            p_86 = ATgetArgument(o_86, 0);
            q_86 = ATgetArgument(o_86, 1);
            k_86 :
            if(match_string(p_86, "t_0"))
              {
                if(((n_86 != NULL) && (n_86 != q_86)))
                  _fail(q_86);
                else
                  n_86 = q_86;
              }
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
    t = not_null(n_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL;
  v_86 = t;
  u_86 :
  if(((ATgetType(v_86) == AT_LIST) && ((ATermList) v_86 != ATempty)))
    {
      w_86 = ATgetFirst((ATermList) v_86);
      x_86 = (ATerm) ATgetNext((ATermList) v_86);
      t = not_null(w_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL;
  d_87 = t;
  c_87 :
  if(match_cons(d_87, sym__2))
    {
      e_87 = ATgetArgument(d_87, 0);
      f_87 = ATgetArgument(d_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_87), not_null(f_87));
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
ATerm rewrite_1 (ATerm t, ATerm g_78 (ATerm))
{
  ATerm l_87 = NULL;
  ATerm n_87 = NULL;
  l_87 = t;
  {
    ATerm o_87 = NULL;
    t = term_q_15;
    {
      t = g_78(t);
      {
        o_87 = t;
        if(((n_87 != NULL) && (n_87 != o_87)))
          _fail(o_87);
        else
          n_87 = o_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_87), not_null(l_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL;
  w_87 = t;
  v_87 :
  if(match_cons(w_87, sym__2))
    {
      x_87 = ATgetArgument(w_87, 0);
      y_87 = ATgetArgument(w_87, 1);
      {
        ATerm b_88 = NULL,c_88 = NULL;
        ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(y_87), not_null(x_87));
        {
          ATerm w_2 (ATerm t)
          {
            t = term_f_19;
            return(t);
          }
          t = rewrite_1(t, w_2);
          {
            d_88 = t;
            t_87 :
            if(match_cons(d_88, sym_Defined_3))
              {
                e_88 = ATgetArgument(d_88, 0);
                f_88 = ATgetArgument(d_88, 1);
                g_88 = ATgetArgument(d_88, 2);
                u_87 :
                if(match_string(e_88, "s_0"))
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
    ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL;
    p_88 = t;
    o_88 :
    if(match_cons(p_88, sym_SDef_3))
      {
        q_88 = ATgetArgument(p_88, 0);
        r_88 = ATgetArgument(p_88, 1);
        s_88 = ATgetArgument(p_88, 2);
        {
          ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL;
          ATerm g_19;
          g_19 = t;
          {
            ATerm f_89 = NULL;
            t = not_null(r_88);
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
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_88), not_null(d_89));
                    {
                      ATerm h_89 = NULL,l_89 = NULL;
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
                        g_89 = t;
                        {
                          if(((c_89 != NULL) && (c_89 != g_89)))
                            _fail(g_89);
                          else
                            c_89 = g_89;
                          {
                            ATerm k_89 = NULL;
                            t = not_null(q_88);
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
                                k_89 = t;
                                if(((h_89 != NULL) && (h_89 != k_89)))
                                  _fail(k_89);
                                else
                                  h_89 = k_89;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(d_89)), not_null(h_89));
                              {
                                t = union_0(t);
                                {
                                  l_89 = t;
                                  {
                                    if(((e_89 != NULL) && (e_89 != l_89)))
                                      _fail(l_89);
                                    else
                                      e_89 = l_89;
                                    {
                                      ATerm n_19;
                                      n_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(d_89), not_null(q_88)), (ATerm) ATmakeAppl(sym_Defined_3, term_s_19, not_null(p_88), not_null(c_89)));
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
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(q_88)), (ATerm) ATmakeAppl(sym_Defined_2, term_u_19, not_null(e_89)));
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
  ATerm t_89 = NULL,u_89 = NULL,z_89 = NULL;
  t_89 = t;
  s_89 :
  if(match_cons(t_89, sym__2))
    {
      u_89 = ATgetArgument(t_89, 0);
      z_89 = ATgetArgument(t_89, 1);
      if(((u_89 != NULL) && (u_89 != z_89)))
        _fail(z_89);
      else
        u_89 = z_89;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm v_89 (ATerm), ATerm w_89 (ATerm))
{
  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL;
  m_90 = t;
  l_90 :
  if(((ATgetType(m_90) == AT_LIST) && ((ATermList) m_90 != ATempty)))
    {
      n_90 = ATgetFirst((ATermList) m_90);
      o_90 = (ATerm) ATgetNext((ATermList) m_90);
      {
        t = w_89(t);
        {
          ATerm c_3 (ATerm t)
          {
            ATerm r_90 = NULL;
            r_90 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_90), not_null(r_90));
              t = v_89(t);
            }
            return(t);
          }
          t = fetch_1(t, c_3);
        }
        t = not_null(o_90);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm x_89 (ATerm))
{
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
  x_90 = t;
  w_90 :
  if(match_cons(x_90, sym__2))
    {
      y_90 = ATgetArgument(x_90, 0);
      z_90 = ATgetArgument(x_90, 1);
      {
        t = not_null(y_90);
        {
          ATerm d_91 (ATerm t)
          {
            ATerm w_19 = t;
            int x_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(z_90);
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
                        t = not_null(z_90);
                        return(t);
                      }
                      t = HdMember_p__2(t, x_89, d_3);
                      t = d_91(t);
                      LocalPopChoice(z_19);
                    }
                  else
                    {
                      t = y_19;
                      t = Cons_2(t, _id, d_91);
                    }
                }
              }
            return(t);
          }
          t = d_91(t);
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
ATerm foldr_3 (ATerm t, ATerm w_88 (ATerm), ATerm x_88 (ATerm), ATerm y_88 (ATerm))
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_88(t);
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL;
        i_91 = t;
        h_91 :
        if(((ATgetType(i_91) == AT_LIST) && ((ATermList) i_91 != ATempty)))
          {
            j_91 = ATgetFirst((ATermList) i_91);
            k_91 = (ATerm) ATgetNext((ATermList) i_91);
            {
              ATerm n_91 = NULL,p_91 = NULL;
              ATerm g_20;
              g_20 = t;
              {
                ATerm o_91 = NULL;
                t = not_null(j_91);
                {
                  t = y_88(t);
                  {
                    o_91 = t;
                    if(((n_91 != NULL) && (n_91 != o_91)))
                      _fail(o_91);
                    else
                      n_91 = o_91;
                  }
                }
              }
              t = g_20;
              {
                ATerm q_91 = NULL;
                t = not_null(k_91);
                {
                  t = foldr_3(t, w_88, x_88, y_88);
                  {
                    q_91 = t;
                    if(((p_91 != NULL) && (p_91 != q_91)))
                      _fail(q_91);
                    else
                      p_91 = q_91;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_91), not_null(p_91));
                  t = x_88(t);
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
    ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL;
    x_91 = t;
    w_91 :
    if(match_cons(x_91, sym_SDef_3))
      {
        y_91 = ATgetArgument(x_91, 0);
        z_91 = ATgetArgument(x_91, 1);
        a_92 = ATgetArgument(x_91, 2);
        {
          ATerm d_92 = NULL;
          ATerm e_92 = NULL;
          t = not_null(z_91);
          {
            t = length_0(t);
            {
              e_92 = t;
              if(((d_92 != NULL) && (d_92 != e_92)))
                _fail(e_92);
              else
                d_92 = e_92;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(y_91), not_null(d_92)));
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
  ATerm n_92 = NULL,p_92 = NULL;
  ATerm k_20;
  k_20 = t;
  {
    ATerm o_92 = NULL;
    t = definition_names_0(t);
    {
      o_92 = t;
      if(((n_92 != NULL) && (n_92 != o_92)))
        _fail(o_92);
      else
        n_92 = o_92;
    }
  }
  t = k_20;
  {
    ATerm q_92 = NULL;
    t = sort_defs_0(t);
    {
      q_92 = t;
      if(((p_92 != NULL) && (p_92 != q_92)))
        _fail(q_92);
      else
        p_92 = q_92;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(n_92), not_null(p_92), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm e_93 = NULL,f_93 = NULL;
  e_93 = t;
  d_93 :
  if(match_cons(e_93, sym_Strategies_1))
    {
      f_93 = ATgetArgument(e_93, 0);
      {
        ATerm i_93 = NULL,k_93 = NULL;
        ATerm j_93 = NULL;
        t = SSLgetAnnotations(not_null(e_93));
        {
          j_93 = t;
          if(((i_93 != NULL) && (i_93 != j_93)))
            _fail(j_93);
          else
            i_93 = j_93;
        }
        {
          t = not_null(f_93);
          {
            ATerm m_93 = NULL;
            t = h_75(t);
            {
              k_93 = t;
              {
                ATerm n_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(k_93)), not_null(i_93));
                {
                  n_93 = t;
                  if(((m_93 != NULL) && (m_93 != n_93)))
                    _fail(n_93);
                  else
                    m_93 = n_93;
                }
                t = not_null(m_93);
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
ATerm Cons_2 (ATerm t, ATerm q_77 (ATerm), ATerm r_77 (ATerm))
{
  ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL;
  y_93 = t;
  x_93 :
  if(((ATgetType(y_93) == AT_LIST) && ((ATermList) y_93 != ATempty)))
    {
      z_93 = ATgetFirst((ATermList) y_93);
      a_94 = (ATerm) ATgetNext((ATermList) y_93);
      {
        ATerm e_94 = NULL,g_94 = NULL;
        ATerm f_94 = NULL;
        t = SSLgetAnnotations(not_null(y_93));
        {
          f_94 = t;
          if(((e_94 != NULL) && (e_94 != f_94)))
            _fail(f_94);
          else
            e_94 = f_94;
        }
        {
          t = not_null(z_93);
          {
            ATerm i_94 = NULL;
            t = q_77(t);
            {
              g_94 = t;
              {
                t = not_null(a_94);
                {
                  ATerm k_94 = NULL;
                  t = r_77(t);
                  {
                    i_94 = t;
                    {
                      ATerm l_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_94)), not_null(g_94)), not_null(e_94));
                      {
                        l_94 = t;
                        if(((k_94 != NULL) && (k_94 != l_94)))
                          _fail(l_94);
                        else
                          k_94 = l_94;
                      }
                      t = not_null(k_94);
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
ATerm Specification_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm w_94 = NULL,x_94 = NULL;
  w_94 = t;
  v_94 :
  if(match_cons(w_94, sym_Specification_1))
    {
      x_94 = ATgetArgument(w_94, 0);
      {
        ATerm f_95 = NULL,h_95 = NULL;
        ATerm g_95 = NULL;
        t = SSLgetAnnotations(not_null(w_94));
        {
          g_95 = t;
          if(((f_95 != NULL) && (f_95 != g_95)))
            _fail(g_95);
          else
            f_95 = g_95;
        }
        {
          t = not_null(x_94);
          {
            ATerm j_95 = NULL;
            t = j_75(t);
            {
              h_95 = t;
              {
                ATerm k_95 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(h_95)), not_null(f_95));
                {
                  k_95 = t;
                  if(((j_95 != NULL) && (j_95 != k_95)))
                    _fail(k_95);
                  else
                    j_95 = k_95;
                }
                t = not_null(j_95);
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
ATerm _2 (ATerm t, ATerm i_66 (ATerm), ATerm j_66 (ATerm))
{
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL;
  v_95 = t;
  u_95 :
  if(match_cons(v_95, sym__2))
    {
      w_95 = ATgetArgument(v_95, 0);
      x_95 = ATgetArgument(v_95, 1);
      {
        ATerm b_96 = NULL,d_96 = NULL;
        ATerm c_96 = NULL;
        t = SSLgetAnnotations(not_null(v_95));
        {
          c_96 = t;
          if(((b_96 != NULL) && (b_96 != c_96)))
            _fail(c_96);
          else
            b_96 = c_96;
        }
        {
          t = not_null(w_95);
          {
            ATerm f_96 = NULL;
            t = i_66(t);
            {
              d_96 = t;
              {
                t = not_null(x_95);
                {
                  ATerm h_96 = NULL;
                  t = j_66(t);
                  {
                    f_96 = t;
                    {
                      ATerm i_96 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_96), not_null(f_96)), not_null(b_96));
                      {
                        i_96 = t;
                        if(((h_96 != NULL) && (h_96 != i_96)))
                          _fail(i_96);
                        else
                          h_96 = i_96;
                      }
                      t = not_null(h_96);
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
  ATerm q_96 = NULL;
  ATerm m_20;
  m_20 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm r_96 = NULL,s_96 = NULL;
      r_96 = t;
      p_96 :
      if(match_cons(r_96, sym_Program_1))
        {
          s_96 = ATgetArgument(r_96, 0);
          if(((q_96 != NULL) && (q_96 != s_96)))
            _fail(s_96);
          else
            q_96 = s_96;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_20), not_null(q_96)), term_p_20));
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
  ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL;
  w_96 = t;
  v_96 :
  if(match_cons(w_96, sym__2))
    {
      x_96 = ATgetArgument(w_96, 0);
      y_96 = ATgetArgument(w_96, 1);
      {
        ATerm r_20;
        r_20 = t;
        t = SSL_printnl(not_null(x_96), not_null(y_96));
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
  ATerm d_97 = NULL;
  d_97 = t;
  t = SSL_implode_string(not_null(d_97));
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
        ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL;
        j_97 = t;
        i_97 :
        if(((ATgetType(j_97) == AT_LIST) && ((ATermList) j_97 != ATempty)))
          {
            k_97 = ATgetFirst((ATermList) j_97);
            l_97 = (ATerm) ATgetNext((ATermList) j_97);
            {
              t = not_null(k_97);
              {
                ATerm j_3 (ATerm t)
                {
                  t = not_null(l_97);
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
  ATerm d_98 = NULL;
  ATerm f_98 = NULL;
  d_98 = t;
  {
    ATerm g_98 = NULL;
    ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL;
    t = not_null(d_98);
    {
      g_98 = t;
      {
        t = SSL_explode_term(not_null(g_98));
        {
          i_98 = t;
          b_98 :
          if(match_cons(i_98, sym__2))
            {
              j_98 = ATgetArgument(i_98, 0);
              k_98 = ATgetArgument(i_98, 1);
              c_98 :
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
ATerm at_end_1 (ATerm t, ATerm a_106 (ATerm))
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
          t = a_106(t);
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
ATerm debug_1 (ATerm t, ATerm k_85 (ATerm))
{
  ATerm z_20;
  z_20 = t;
  {
    ATerm f_99 = NULL,h_99 = NULL;
    ATerm a_21;
    a_21 = t;
    {
      ATerm g_99 = NULL;
      t = k_85(t);
      {
        g_99 = t;
        if(((f_99 != NULL) && (f_99 != g_99)))
          _fail(g_99);
        else
          f_99 = g_99;
      }
    }
    t = a_21;
    {
      ATerm i_99 = NULL;
      i_99 = t;
      if(((h_99 != NULL) && (h_99 != i_99)))
        _fail(i_99);
      else
        h_99 = i_99;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_99)), not_null(f_99)));
        t = printnl_0(t);
      }
    }
  }
  t = z_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_99 = NULL;
  m_99 = t;
  t = SSL_is_string(not_null(m_99));
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
              ATerm y_99 = NULL,z_99 = NULL,a_100 = NULL;
              y_99 = t;
              x_99 :
              if(match_cons(y_99, sym_Path_1))
                {
                  z_99 = ATgetArgument(y_99, 0);
                  t = not_null(z_99);
                }
              else
                {
                  if(match_cons(y_99, sym_Var_1))
                    {
                      z_99 = ATgetArgument(y_99, 0);
                      {
                        t = not_null(z_99);
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
                      if(match_cons(y_99, sym_Prefix_2))
                        {
                          z_99 = ATgetArgument(y_99, 0);
                          a_100 = ATgetArgument(y_99, 1);
                          {
                            ATerm f_100 = NULL,h_100 = NULL;
                            ATerm z_21;
                            z_21 = t;
                            {
                              ATerm g_100 = NULL;
                              t = not_null(z_99);
                              {
                                t = eval_config_0(t);
                                {
                                  g_100 = t;
                                  if(((f_100 != NULL) && (f_100 != g_100)))
                                    _fail(g_100);
                                  else
                                    f_100 = g_100;
                                }
                              }
                            }
                            t = z_21;
                            {
                              ATerm i_100 = NULL;
                              t = not_null(a_100);
                              {
                                t = eval_config_0(t);
                                {
                                  i_100 = t;
                                  if(((h_100 != NULL) && (h_100 != i_100)))
                                    _fail(i_100);
                                  else
                                    h_100 = i_100;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_100), not_null(h_100));
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
  ATerm r_100 = NULL;
  r_100 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_22, not_null(r_100));
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
              ATerm t_100 = NULL;
              ATerm u_100 = NULL;
              u_100 = t;
              if(((t_100 != NULL) && (t_100 != u_100)))
                _fail(u_100);
              else
                t_100 = u_100;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_a_22, not_null(r_100), not_null(t_100));
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
ATerm if_verbose2_1 (ATerm t, ATerm o_82 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm h_22;
    h_22 = t;
    {
      ATerm y_100 = NULL;
      ATerm z_100 = NULL;
      t = term_m_22;
      {
        t = get_config_0(t);
        {
          z_100 = t;
          if(((y_100 != NULL) && (y_100 != z_100)))
            _fail(z_100);
          else
            y_100 = z_100;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_100), term_r_22);
        t = geq_0(t);
      }
    }
    t = h_22;
    t = o_82(t);
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL,f_101 = NULL;
  d_101 = t;
  c_101 :
  if(match_cons(d_101, sym__2))
    {
      e_101 = ATgetArgument(d_101, 0);
      f_101 = ATgetArgument(d_101, 1);
      t = SSL_WriteToTextFile(not_null(e_101), not_null(f_101));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL,n_101 = NULL;
  l_101 = t;
  k_101 :
  if(match_cons(l_101, sym__2))
    {
      m_101 = ATgetArgument(l_101, 0);
      n_101 = ATgetArgument(l_101, 1);
      t = SSL_WriteToBinaryFile(not_null(m_101), not_null(n_101));
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
          t = option_defined_1(t, q_3);
          LocalPopChoice(u_22);
        }
      else
        {
          t = t_22;
          {
            ATerm y_101 = NULL;
            t = term_v_22;
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
    t = _2(t, p_3, _id);
  }
  t = s_22;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm s_3 (ATerm t)
      {
        t = not_null(v_101);
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
              ATerm b_102 = NULL;
              b_102 = t;
              u_101 :
              if(!(match_cons(b_102, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm u_84 (ATerm))
{
  ATerm h_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL;
  ATerm y_22;
  y_22 = t;
  t = dtime_0(t);
  t = y_22;
  {
    t = u_84(t);
    {
      ATerm z_22;
      z_22 = t;
      {
        ATerm i_102 = NULL;
        t = dtime_0(t);
        {
          i_102 = t;
          if(((h_102 != NULL) && (h_102 != i_102)))
            _fail(i_102);
          else
            h_102 = i_102;
        }
      }
      t = z_22;
      {
        j_102 = t;
        g_102 :
        if(match_cons(j_102, sym__2))
          {
            k_102 = ATgetArgument(j_102, 0);
            l_102 = ATgetArgument(j_102, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_102)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_102))), not_null(l_102));
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
  ATerm t_102 = NULL;
  t_102 = t;
  t = SSL_ReadFromFile(not_null(t_102));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_99 (ATerm), ATerm d_99 (ATerm))
{
  ATerm y_102 = NULL,a_103 = NULL;
  ATerm a_23;
  a_23 = t;
  {
    ATerm z_102 = NULL;
    t = c_99(t);
    {
      z_102 = t;
      if(((y_102 != NULL) && (y_102 != z_102)))
        _fail(z_102);
      else
        y_102 = z_102;
    }
  }
  t = a_23;
  {
    ATerm b_103 = NULL;
    t = d_99(t);
    {
      b_103 = t;
      if(((a_103 != NULL) && (a_103 != b_103)))
        _fail(b_103);
      else
        a_103 = b_103;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_102), not_null(a_103));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_103 = NULL;
  ATerm g_23;
  g_23 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 (ATerm t)
        {
          ATerm i_103 = NULL,j_103 = NULL;
          i_103 = t;
          f_103 :
          if(match_cons(i_103, sym_Input_1))
            {
              j_103 = ATgetArgument(i_103, 0);
              if(((h_103 != NULL) && (h_103 != j_103)))
                _fail(j_103);
              else
                h_103 = j_103;
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
          ATerm k_103 = NULL;
          t = term_j_23;
          {
            k_103 = t;
            if(((h_103 != NULL) && (h_103 != k_103)))
              _fail(k_103);
            else
              h_103 = k_103;
          }
        }
      }
  }
  t = g_23;
  {
    ATerm w_3 (ATerm t)
    {
      t = not_null(h_103);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_3);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_103 = NULL;
  t_103 = t;
  t = SSL_string_to_int(not_null(t_103));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL;
  b_104 = t;
  z_103 :
  if(match_string(b_104, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(b_104) == AT_LIST) && ((ATermList) b_104 != ATempty)))
        {
          c_104 = ATgetFirst((ATermList) b_104);
          d_104 = (ATerm) ATgetNext((ATermList) b_104);
          a_104 :
          if(((ATgetType(d_104) == AT_LIST) && ((ATermList) d_104 != ATempty)))
            {
              e_104 = ATgetFirst((ATermList) d_104);
              f_104 = (ATerm) ATgetNext((ATermList) d_104);
              {
                ATerm j_104 = NULL;
                ATerm r_23;
                r_23 = t;
                {
                  t = not_null(c_104);
                  t = j_0(t);
                }
                t = r_23;
                {
                  ATerm n_104 = NULL;
                  t = not_null(e_104);
                  {
                    t = k_0(t);
                    {
                      n_104 = t;
                      if(((j_104 != NULL) && (j_104 != n_104)))
                        _fail(n_104);
                      else
                        j_104 = n_104;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_104)), not_null(j_104));
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
        ATerm g_105 = NULL;
        g_105 = t;
        r_104 :
        if(!(match_string(g_105, "-i")))
          {
            if(!(match_string(g_105, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        ATerm j_105 = NULL;
        ATerm w_23;
        w_23 = t;
        {
          ATerm h_105 = NULL;
          ATerm i_105 = NULL;
          i_105 = t;
          if(((h_105 != NULL) && (h_105 != i_105)))
            _fail(i_105);
          else
            h_105 = i_105;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_23, not_null(h_105));
            t = set_config_0(t);
          }
        }
        t = w_23;
        {
          ATerm k_105 = NULL;
          k_105 = t;
          if(((j_105 != NULL) && (j_105 != k_105)))
            _fail(k_105);
          else
            j_105 = k_105;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_105));
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
              ATerm n_105 = NULL;
              n_105 = t;
              u_104 :
              if(!(match_string(n_105, "-o")))
                {
                  if(!(match_string(n_105, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              ATerm q_105 = NULL;
              ATerm b_24;
              b_24 = t;
              {
                ATerm o_105 = NULL;
                ATerm p_105 = NULL;
                p_105 = t;
                if(((o_105 != NULL) && (o_105 != p_105)))
                  _fail(p_105);
                else
                  o_105 = p_105;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_24, not_null(o_105));
                  t = set_config_0(t);
                }
              }
              t = b_24;
              {
                ATerm r_105 = NULL;
                r_105 = t;
                if(((q_105 != NULL) && (q_105 != r_105)))
                  _fail(r_105);
                else
                  q_105 = r_105;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_105));
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
                    ATerm s_105 = NULL;
                    s_105 = t;
                    x_104 :
                    if(!(match_string(s_105, "-S")))
                      {
                        if(!(match_string(s_105, "--silent")))
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
                          ATerm t_105 = NULL;
                          t_105 = t;
                          y_104 :
                          if(!(match_string(t_105, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm h_4 (ATerm t)
                        {
                          ATerm y_105 = NULL;
                          ATerm n_24;
                          n_24 = t;
                          {
                            ATerm w_105 = NULL;
                            ATerm x_105 = NULL;
                            t = string_to_int_0(t);
                            {
                              x_105 = t;
                              if(((w_105 != NULL) && (w_105 != x_105)))
                                _fail(x_105);
                              else
                                w_105 = x_105;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_m_22, not_null(w_105));
                              t = set_config_0(t);
                            }
                          }
                          t = n_24;
                          {
                            ATerm z_105 = NULL;
                            z_105 = t;
                            if(((y_105 != NULL) && (y_105 != z_105)))
                              _fail(z_105);
                            else
                              y_105 = z_105;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_105));
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
                                ATerm c_106 = NULL;
                                c_106 = t;
                                b_105 :
                                if(!(match_string(c_106, "-k")))
                                  {
                                    if(!(match_string(c_106, "--keep")))
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
                                  ATerm d_106 = NULL;
                                  ATerm e_106 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    e_106 = t;
                                    if(((d_106 != NULL) && (d_106 != e_106)))
                                      _fail(e_106);
                                    else
                                      d_106 = e_106;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_x_25, not_null(d_106));
                                    t = set_config_0(t);
                                  }
                                }
                                t = m_25;
                                return(t);
                              }
                              ATerm o_4 (ATerm t)
                              {
                                t = term_y_25;
                                return(t);
                              }
                              t = ArgOption_3(t, j_4, n_4, o_4);
                              LocalPopChoice(c_25);
                            }
                          else
                            {
                              t = t_24;
                              {
                                ATerm z_25 = t;
                                int a_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_4 (ATerm t)
                                    {
                                      ATerm f_106 = NULL;
                                      f_106 = t;
                                      d_105 :
                                      if(!(match_string(f_106, "-v")))
                                        {
                                          if(!(match_string(f_106, "--version")))
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
                                    LocalPopChoice(a_26);
                                  }
                                else
                                  {
                                    t = z_25;
                                    {
                                      ATerm g_26 = t;
                                      int h_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_4 (ATerm t)
                                          {
                                            ATerm g_106 = NULL;
                                            g_106 = t;
                                            e_105 :
                                            if(!(match_string(g_106, "-b")))
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
                                              ATerm h_106 = NULL;
                                              h_106 = t;
                                              f_105 :
                                              if(!(match_string(h_106, "-s")))
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
  ATerm q_106 = NULL;
  q_106 = t;
  t = SSL_TicksToSeconds(not_null(q_106));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_106 = NULL,w_106 = NULL,x_106 = NULL;
  v_106 = t;
  u_106 :
  if(match_cons(v_106, sym__2))
    {
      w_106 = ATgetArgument(v_106, 0);
      x_106 = ATgetArgument(v_106, 1);
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_106), not_null(x_106));
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            t = SSL_addr(not_null(w_106), not_null(x_106));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_88 (ATerm), ATerm v_88 (ATerm))
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_88(t);
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL;
        f_107 = t;
        e_107 :
        if(((ATgetType(f_107) == AT_LIST) && ((ATermList) f_107 != ATempty)))
          {
            g_107 = ATgetFirst((ATermList) f_107);
            h_107 = (ATerm) ATgetNext((ATermList) f_107);
            {
              ATerm k_107 = NULL;
              ATerm l_107 = NULL;
              t = not_null(h_107);
              {
                t = foldr_2(t, u_88, v_88);
                {
                  l_107 = t;
                  if(((k_107 != NULL) && (k_107 != l_107)))
                    _fail(l_107);
                  else
                    k_107 = l_107;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_107), not_null(k_107));
                t = v_88(t);
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
ATerm crush_2 (ATerm t, ATerm g_90 (ATerm), ATerm h_90 (ATerm))
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
      t = foldr_2(t, g_90, h_90);
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
  ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL;
  h_108 = t;
  g_108 :
  if(match_cons(h_108, sym__2))
    {
      i_108 = ATgetArgument(h_108, 0);
      j_108 = ATgetArgument(h_108, 1);
      {
        ATerm v_26;
        v_26 = t;
        {
          ATerm w_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_108), not_null(j_108));
              LocalPopChoice(x_26);
            }
          else
            {
              t = w_26;
              t = SSL_gtr(not_null(i_108), not_null(j_108));
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
  ATerm p_108 = NULL;
  ATerm y_26 = t;
  int z_26 = stack_ptr;
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
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_82 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm a_27;
    a_27 = t;
    {
      ATerm v_108 = NULL;
      ATerm w_108 = NULL;
      t = term_m_22;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_108), term_z_6);
        t = geq_0(t);
      }
    }
    t = a_27;
    t = n_82(t);
    return(t);
  }
  t = try_1(t, z_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm a_109 = NULL,c_109 = NULL;
    ATerm b_27;
    b_27 = t;
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
    t = b_27;
    {
      ATerm d_109 = NULL;
      t = term_c_27;
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
        t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_27), not_null(a_109)), term_d_27), not_null(c_109)));
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
  ATerm k_109 = NULL;
  k_109 = t;
  j_109 :
  if(match_cons(k_109, sym_Version_0))
    {
      ATerm m_109 = NULL,o_109 = NULL;
      ATerm f_27;
      f_27 = t;
      {
        ATerm n_109 = NULL;
        t = SSLgetAnnotations(not_null(k_109));
        {
          n_109 = t;
          if(((m_109 != NULL) && (m_109 != n_109)))
            _fail(n_109);
          else
            m_109 = n_109;
        }
      }
      t = f_27;
      {
        ATerm p_109 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_109));
        {
          p_109 = t;
          if(((o_109 != NULL) && (o_109 != p_109)))
            _fail(p_109);
          else
            o_109 = p_109;
        }
        t = not_null(o_109);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_84 (ATerm))
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
  t = s_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_109 = NULL;
  u_109 = t;
  t = SSL_table_create(not_null(u_109));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_109 = NULL;
  y_109 = t;
  {
    ATerm k_27;
    k_27 = t;
    {
      t = term_l_27;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_m_27, not_null(y_109));
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
  ATerm c_110 = NULL;
  c_110 = t;
  t = SSL_table_destroy(not_null(c_110));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_110 = NULL;
  g_110 = t;
  t = SSL_exit(not_null(g_110));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_110 = NULL,l_110 = NULL,m_110 = NULL;
  k_110 = t;
  j_110 :
  if(((ATermList) k_110 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_110) == AT_LIST) && ((ATermList) k_110 != ATempty)))
        {
          l_110 = ATgetFirst((ATermList) k_110);
          m_110 = (ATerm) ATgetNext((ATermList) k_110);
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
    ATerm p_110 = NULL;
    ATerm s_110 = NULL;
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
          ATerm q_110 = NULL;
          ATerm r_110 = NULL;
          r_110 = t;
          if(((q_110 != NULL) && (q_110 != r_110)))
            _fail(r_110);
          else
            q_110 = r_110;
          t = (ATerm) ATinsert(ATempty, not_null(q_110));
        }
      }
    {
      s_110 = t;
      if(((p_110 != NULL) && (p_110 != s_110)))
        _fail(s_110);
      else
        p_110 = s_110;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_22, not_null(p_110));
      t = printnl_0(t);
    }
  }
  t = n_27;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm t_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_105 (ATerm))
{
  ATerm v_110 (ATerm t)
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
        t = Cons_2(t, l_105, v_110);
      }
    return(t);
  }
  t = v_110(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL;
  e_111 = t;
  b_111 :
  if(((ATgetType(e_111) == AT_LIST) && ((ATermList) e_111 != ATempty)))
    {
      c_111 = ATgetFirst((ATermList) e_111);
      d_111 = (ATerm) ATgetNext((ATermList) e_111);
      {
        ATerm h_111 = NULL;
        t = not_null(d_111);
        {
          ATerm s_27;
          s_27 = t;
          {
            ATerm i_111 = NULL,k_111 = NULL,m_111 = NULL;
            ATerm t_27;
            t_27 = t;
            {
              ATerm j_111 = NULL;
              t = i_0(t);
              {
                j_111 = t;
                if(((i_111 != NULL) && (i_111 != j_111)))
                  _fail(j_111);
                else
                  i_111 = j_111;
              }
            }
            t = t_27;
            {
              ATerm l_111 = NULL;
              t = not_null(c_111);
              {
                t = h_0(t);
                {
                  l_111 = t;
                  if(((k_111 != NULL) && (k_111 != l_111)))
                    _fail(l_111);
                  else
                    k_111 = l_111;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_111)), not_null(k_111));
                {
                  m_111 = t;
                  if(((h_111 != NULL) && (h_111 != m_111)))
                    _fail(m_111);
                  else
                    h_111 = m_111;
                }
              }
            }
          }
          t = s_27;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(h_111);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) e_111 == ATempty))
        {
          {
            t = term_q_15;
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
  ATerm d_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm s_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_72 (ATerm))
{
  ATerm x_111 = NULL,y_111 = NULL;
  x_111 = t;
  w_111 :
  if(match_cons(x_111, sym_Program_1))
    {
      y_111 = ATgetArgument(x_111, 0);
      {
        ATerm b_112 = NULL,d_112 = NULL;
        ATerm c_112 = NULL;
        t = SSLgetAnnotations(not_null(x_111));
        {
          c_112 = t;
          if(((b_112 != NULL) && (b_112 != c_112)))
            _fail(c_112);
          else
            b_112 = c_112;
        }
        {
          t = not_null(y_111);
          {
            ATerm f_112 = NULL;
            t = c_72(t);
            {
              d_112 = t;
              {
                ATerm g_112 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_112)), not_null(b_112));
                {
                  g_112 = t;
                  if(((f_112 != NULL) && (f_112 != g_112)))
                    _fail(g_112);
                  else
                    f_112 = g_112;
                }
                t = not_null(f_112);
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
  ATerm p_112 = NULL;
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_112 = NULL;
      t = term_c_27;
      {
        t = get_config_0(t);
        {
          q_112 = t;
          if(((p_112 != NULL) && (p_112 != q_112)))
            _fail(q_112);
          else
            p_112 = q_112;
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
            ATerm r_112 = NULL;
            r_112 = t;
            if(((p_112 != NULL) && (p_112 != r_112)))
              _fail(r_112);
            else
              p_112 = r_112;
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
        t = not_null(p_112);
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
                  ATerm s_112 = NULL;
                  ATerm t_112 = NULL;
                  t_112 = t;
                  if(((s_112 != NULL) && (s_112 != t_112)))
                    _fail(t_112);
                  else
                    s_112 = t_112;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_112)), term_a_28);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_5);
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm u_112 = NULL;
                    ATerm v_112 = NULL;
                    ATerm k_5 (ATerm t)
                    {
                      t = not_null(p_112);
                      return(t);
                    }
                    t = long_description_1(t, k_5);
                    {
                      v_112 = t;
                      if(((u_112 != NULL) && (u_112 != v_112)))
                        _fail(v_112);
                      else
                        u_112 = v_112;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(u_112)), term_b_28);
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
    ATerm b_113 = NULL;
    ATerm c_113 = NULL;
    c_113 = t;
    if(((b_113 != NULL) && (b_113 != c_113)))
      _fail(c_113);
    else
      b_113 = c_113;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, not_null(b_113)));
      t = printnl_0(t);
    }
  }
  t = c_28;
  return(t);
}
ATerm say_1 (ATerm t, ATerm l_85 (ATerm))
{
  ATerm d_28;
  d_28 = t;
  {
    t = l_85(t);
    t = debug_0(t);
  }
  t = d_28;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm d_72 (ATerm))
{
  ATerm j_113 = NULL,k_113 = NULL;
  j_113 = t;
  i_113 :
  if(match_cons(j_113, sym_Undefined_1))
    {
      k_113 = ATgetArgument(j_113, 0);
      {
        ATerm n_113 = NULL,p_113 = NULL;
        ATerm o_113 = NULL;
        t = SSLgetAnnotations(not_null(j_113));
        {
          o_113 = t;
          if(((n_113 != NULL) && (n_113 != o_113)))
            _fail(o_113);
          else
            n_113 = o_113;
        }
        {
          t = not_null(k_113);
          {
            ATerm r_113 = NULL;
            t = d_72(t);
            {
              p_113 = t;
              {
                ATerm s_113 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_113)), not_null(n_113));
                {
                  s_113 = t;
                  if(((r_113 != NULL) && (r_113 != s_113)))
                    _fail(s_113);
                  else
                    r_113 = s_113;
                }
                t = not_null(r_113);
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
ATerm fetch_1 (ATerm t, ATerm u_105 (ATerm))
{
  ATerm x_113 (ATerm t)
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_105, _id);
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        t = Cons_2(t, _id, x_113);
      }
    return(t);
  }
  t = x_113(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_81 (ATerm))
{
  t = fetch_1(t, x_81);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_114 = NULL;
  d_114 = t;
  b_114 :
  if(match_cons(d_114, sym_Help_0))
    {
      ATerm f_114 = NULL,h_114 = NULL;
      ATerm h_28;
      h_28 = t;
      {
        ATerm g_114 = NULL;
        t = SSLgetAnnotations(not_null(d_114));
        {
          g_114 = t;
          if(((f_114 != NULL) && (f_114 != g_114)))
            _fail(g_114);
          else
            f_114 = g_114;
        }
      }
      t = h_28;
      {
        ATerm i_114 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_114));
        {
          i_114 = t;
          if(((h_114 != NULL) && (h_114 != i_114)))
            _fail(i_114);
          else
            h_114 = i_114;
        }
        t = not_null(h_114);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm u_99 (ATerm))
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_99(t);
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_114 = NULL,p_114 = NULL,q_114 = NULL;
  o_114 = t;
  n_114 :
  if(match_cons(o_114, sym__2))
    {
      p_114 = ATgetArgument(o_114, 0);
      q_114 = ATgetArgument(o_114, 1);
      t = SSL_table_get(not_null(p_114), not_null(q_114));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_114 = NULL,y_114 = NULL,z_114 = NULL,a_115 = NULL;
  x_114 = t;
  w_114 :
  if(match_cons(x_114, sym__3))
    {
      y_114 = ATgetArgument(x_114, 0);
      z_114 = ATgetArgument(x_114, 1);
      a_115 = ATgetArgument(x_114, 2);
      {
        ATerm l_28;
        l_28 = t;
        {
          ATerm e_115 = NULL;
          ATerm f_115 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_114), not_null(z_114));
          {
            ATerm n_28 = t;
            int r_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_28);
              }
            else
              {
                t = n_28;
                t = (ATerm) ATempty;
              }
            {
              f_115 = t;
              if(((e_115 != NULL) && (e_115 != f_115)))
                _fail(f_115);
              else
                e_115 = f_115;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_114), not_null(z_114), (ATerm) ATinsert(CheckATermList(not_null(e_115)), not_null(a_115)));
            t = table_put_0(t);
          }
        }
        t = l_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_80 (ATerm))
{
  ATerm j_115 = NULL;
  ATerm k_115 = NULL;
  t = term_q_15;
  {
    t = x_80(t);
    {
      k_115 = t;
      if(((j_115 != NULL) && (j_115 != k_115)))
        _fail(k_115);
      else
        j_115 = k_115;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_x_27, term_y_27, not_null(j_115));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm q_115 = NULL,r_115 = NULL,s_115 = NULL;
  q_115 = t;
  p_115 :
  if(match_string(q_115, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(q_115) == AT_LIST) && ((ATermList) q_115 != ATempty)))
        {
          r_115 = ATgetFirst((ATermList) q_115);
          s_115 = (ATerm) ATgetNext((ATermList) q_115);
          {
            ATerm v_115 = NULL;
            ATerm y_28;
            y_28 = t;
            {
              t = not_null(r_115);
              t = a_0(t);
            }
            t = y_28;
            {
              ATerm w_115 = NULL;
              t = term_q_15;
              {
                t = b_0(t);
                {
                  w_115 = t;
                  if(((v_115 != NULL) && (v_115 != w_115)))
                    _fail(w_115);
                  else
                    v_115 = w_115;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_115)), not_null(v_115));
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
    ATerm b_116 = NULL;
    b_116 = t;
    a_116 :
    if(!(match_string(b_116, "--help")))
      {
        if(!(match_string(b_116, "-h")))
          {
            if(!(match_string(b_116, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_a_29;
    {
      t = set_config_0(t);
      t = term_b_29;
    }
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_c_29;
    return(t);
  }
  t = Option_3(t, l_5, m_5, n_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_116 = NULL,f_116 = NULL,g_116 = NULL;
  e_116 = t;
  d_116 :
  if(((ATgetType(e_116) == AT_LIST) && ((ATermList) e_116 != ATempty)))
    {
      f_116 = ATgetFirst((ATermList) e_116);
      g_116 = (ATerm) ATgetNext((ATermList) e_116);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_116)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_116)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm m_116 = NULL,n_116 = NULL,o_116 = NULL;
  m_116 = t;
  l_116 :
  if(match_cons(m_116, sym__2))
    {
      n_116 = ATgetArgument(m_116, 0);
      o_116 = ATgetArgument(m_116, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_22, not_null(n_116), not_null(o_116));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_80 (ATerm))
{
  ATerm d_29;
  d_29 = t;
  {
    ATerm p_5 (ATerm t)
    {
      t = term_e_29;
      t = v_80(t);
      return(t);
    }
    t = try_1(t, p_5);
  }
  t = d_29;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm w_116 = NULL;
      ATerm i_29;
      i_29 = t;
      {
        ATerm u_116 = NULL;
        ATerm v_116 = NULL;
        v_116 = t;
        if(((u_116 != NULL) && (u_116 != v_116)))
          _fail(v_116);
        else
          u_116 = v_116;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_27, not_null(u_116));
          t = set_config_0(t);
        }
      }
      t = i_29;
      {
        ATerm x_116 = NULL;
        x_116 = t;
        if(((w_116 != NULL) && (w_116 != x_116)))
          _fail(x_116);
        else
          w_116 = x_116;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_116));
      }
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm q_29 = t;
      int w_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_29);
            }
          else
            {
              t = x_29;
              {
                t = v_80(t);
                t = Cons_2(t, _id, r_5);
              }
            }
          LocalPopChoice(w_29);
        }
      else
        {
          t = q_29;
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
  ATerm d_117 = NULL,e_117 = NULL,f_117 = NULL;
  ATerm d_30;
  d_30 = t;
  {
    ATerm g_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL;
    g_117 = t;
    c_117 :
    if(match_cons(g_117, sym__3))
      {
        h_117 = ATgetArgument(g_117, 0);
        i_117 = ATgetArgument(g_117, 1);
        j_117 = ATgetArgument(g_117, 2);
        {
          if(((d_117 != NULL) && (d_117 != h_117)))
            _fail(h_117);
          else
            d_117 = h_117;
          {
            if(((e_117 != NULL) && (e_117 != i_117)))
              _fail(i_117);
            else
              e_117 = i_117;
            {
              if(((f_117 != NULL) && (f_117 != j_117)))
                _fail(j_117);
              else
                f_117 = j_117;
              t = SSL_table_put(not_null(d_117), not_null(e_117), not_null(f_117));
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
ATerm parse_options_1 (ATerm t, ATerm u_80 (ATerm))
{
  ATerm m_117 = NULL;
  ATerm e_30;
  e_30 = t;
  {
    t = term_f_30;
    t = table_put_0(t);
  }
  t = e_30;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm g_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_80(t);
          LocalPopChoice(h_30);
        }
      else
        {
          t = g_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_5);
    {
      ATerm t_5 (ATerm t)
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_30;
            k_30 = t;
            {
              ATerm l_30 = t;
              int m_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_z_28;
                  t = get_config_0(t);
                  LocalPopChoice(m_30);
                }
              else
                {
                  t = l_30;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = k_30;
            {
              t = system_usage_0(t);
              {
                t = term_v_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            {
              ATerm u_5 (ATerm t)
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm n_117 = NULL;
                  n_117 = t;
                  if(((m_117 != NULL) && (m_117 != n_117)))
                    _fail(n_117);
                  else
                    m_117 = n_117;
                  return(t);
                }
                t = Undefined_1(t, v_5);
                return(t);
              }
              t = option_defined_1(t, u_5);
              {
                ATerm w_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_117)), term_n_30);
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
        ATerm o_30;
        o_30 = t;
        {
          t = term_x_27;
          t = table_destroy_0(t);
        }
        t = o_30;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm))
{
  t = parse_options_1(t, p_83);
  {
    t = store_options_0(t);
    {
      t = r_83(t);
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, q_83);
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
                  t = s_83(t);
                  t = report_success_0(t);
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
ATerm iowrap_4 (ATerm t, ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm j_84 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    ATerm u_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_84(t);
        LocalPopChoice(a_31);
      }
    else
      {
        t = u_30;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, g_84);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, x_5, i_84, j_84, y_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_31;
      b_31 = t;
      {
        ATerm q_117 = NULL;
        ATerm r_117 = NULL;
        t = term_c_27;
        {
          t = get_config_0(t);
          {
            r_117 = t;
            if(((q_117 != NULL) && (q_117 != r_117)))
              _fail(r_117);
            else
              q_117 = r_117;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_7, (ATerm) ATinsert(ATempty, not_null(q_117)));
          t = printnl_0(t);
        }
      }
      t = b_31;
      return(t);
    }
    t = if_verbose2_1(t, a_6);
    return(t);
  }
  t = iowrap_4(t, a_84, b_84, c_84, z_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm))
{
  t = iowrap_3(t, y_83, z_83, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm v_83 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    t = _2(t, _id, v_83);
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
