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
ATerm term_f_33;
ATerm term_s_31;
ATerm term_j_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_n_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_e_29;
ATerm term_m_28;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_q_25;
ATerm term_w_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_a_24;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_q_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_l_19;
ATerm term_r_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_z_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_z_8;
ATerm term_y_7;
ATerm term_r_6;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
void init_constant_terms (void)
{
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Op_2, term_h_11, (ATerm) ATempty);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_b_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, term_k_24, term_x_14);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_b_20);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_20);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_i_26, term_x_14);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_w_26, term_x_14);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_j_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym__2, term_b_31, term_x_14);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__3, term_g_30, term_j_30, (ATerm) ATempty);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm f_74 (ATerm), ATerm g_74 (ATerm));
ATerm SDef_3 (ATerm, ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm l_74 (ATerm));
ATerm Let_2 (ATerm, ATerm h_74 (ATerm), ATerm i_74 (ATerm));
ATerm sboundin_3 (ATerm, ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm s_94 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm c_99 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_99 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm u_84 (ATerm), ATerm v_84 (ATerm));
ATerm alltd_1 (ATerm, ATerm a_87 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm f_84 (ATerm), ATerm g_84 (ATerm));
ATerm substitute_1 (ATerm, ATerm h_84 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm));
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
ATerm As_2 (ATerm, ATerm p_76 (ATerm), ATerm q_76 (ATerm));
ATerm Prim_2 (ATerm, ATerm v_72 (ATerm), ATerm w_72 (ATerm));
ATerm Explode_2 (ATerm, ATerm l_76 (ATerm), ATerm m_76 (ATerm));
ATerm Op_2 (ATerm, ATerm z_74 (ATerm), ATerm a_75 (ATerm));
ATerm pat_td_1 (ATerm, ATerm u_112 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm y_89 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm w_100 (ATerm), ATerm x_100 (ATerm));
ATerm repeat_1 (ATerm, ATerm z_100 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm f_76 (ATerm), ATerm g_76 (ATerm));
ATerm Con_3 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm d_73 (ATerm), ATerm e_73 (ATerm));
ATerm oncetd_1 (ATerm, ATerm m_86 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm w_84 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm e_89 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm f_96 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm w_89 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm v_94 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm r_89 (ATerm));
ATerm zip_1 (ATerm, ATerm t_89 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm j_112 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm n_101 (ATerm), ATerm o_101 (ATerm));
ATerm for_3 (ATerm, ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm u_111 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm q_112 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm d_95 (ATerm), ATerm e_95 (ATerm));
ATerm union_1 (ATerm, ATerm z_94 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm s_112 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm e_75 (ATerm));
ATerm Cons_2 (ATerm, ATerm t_72 (ATerm), ATerm u_72 (ATerm));
ATerm Specification_1 (ATerm, ATerm g_75 (ATerm));
ATerm _2 (ATerm, ATerm k_71 (ATerm), ATerm l_71 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_91 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_104 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_107 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_105 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_88 (ATerm), ATerm p_88 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_95 (ATerm), ATerm r_95 (ATerm));
ATerm crush_2 (ATerm, ATerm o_94 (ATerm), ATerm p_94 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_107 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_105 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_109 (ATerm));
ATerm map_1 (ATerm, ATerm c_91 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_109 (ATerm));
ATerm Program_1 (ATerm, ATerm h_78 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm u_104 (ATerm));
ATerm Undefined_1 (ATerm, ATerm i_78 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_91 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_108 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_88 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_109 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_109 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_109 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm));
ATerm iowrap_4 (ATerm, ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_106 (ATerm), ATerm l_106 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_106 (ATerm));
ATerm extract_0 (ATerm);
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
        ATerm y_5;
        y_5 = t;
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
        t = y_5;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_6), not_null(p_6)), term_a_6), not_null(o_6)), term_z_5);
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
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_6), not_null(b_7)), term_a_6), not_null(a_7)), term_c_6), not_null(z_6)), term_z_5);
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
                ATerm d_6 = t;
                int e_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(e_6);
                  }
                else
                  {
                    t = d_6;
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
  ATerm f_6;
  f_6 = t;
  {
    t = error_0(t);
    {
      t = term_g_6;
      t = exit_0(t);
    }
  }
  t = f_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_6);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm i_6;
  i_6 = t;
  {
    ATerm b_8 = NULL;
    ATerm c_8 = NULL;
    c_8 = t;
    if(((b_8 != NULL) && (b_8 != c_8)))
      _fail(c_8);
    else
      b_8 = c_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, not_null(b_8));
      t = printnl_0(t);
    }
  }
  t = i_6;
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
          ATerm k_6 = t;
          int l_6 = stack_ptr;
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
                            ATerm q_6 = t;
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
                                t = q_6;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_8)), term_r_6);
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
              LocalPopChoice(l_6);
            }
          else
            {
              t = k_6;
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
ATerm Rec_2 (ATerm t, ATerm f_74 (ATerm), ATerm g_74 (ATerm))
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
            t = f_74(t);
            {
              w_9 = t;
              {
                t = not_null(q_9);
                {
                  ATerm a_10 = NULL;
                  t = g_74(t);
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
ATerm SDef_3 (ATerm t, ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm l_74 (ATerm))
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
            t = j_74(t);
            {
              y_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm c_11 = NULL;
                  t = k_74(t);
                  {
                    a_11 = t;
                    {
                      t = not_null(r_10);
                      {
                        ATerm e_11 = NULL;
                        t = l_74(t);
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
ATerm Let_2 (ATerm t, ATerm h_74 (ATerm), ATerm i_74 (ATerm))
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
            t = h_74(t);
            {
              a_12 = t;
              {
                t = not_null(u_11);
                {
                  ATerm e_12 = NULL;
                  t = i_74(t);
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
ATerm sboundin_3 (ATerm t, ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm))
{
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, b_84, b_84);
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      {
        ATerm u_6 = t;
        int c_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, d_84, d_84, b_84);
            LocalPopChoice(c_7);
          }
        else
          {
            t = u_6;
            t = Rec_2(t, d_84, b_84);
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
ATerm crush_3 (ATerm t, ATerm q_94 (ATerm), ATerm r_94 (ATerm), ATerm s_94 (ATerm))
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
      t = foldr_3(t, q_94, r_94, s_94);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm c_99 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_99 (ATerm))
{
  ATerm u_14 (ATerm t)
  {
    ATerm m_0 (ATerm t)
    {
      ATerm d_7 = t;
      int e_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_99(t);
          LocalPopChoice(e_7);
        }
      else
        {
          t = d_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm p_0 (ATerm t)
    {
      ATerm f_7 = t;
      int g_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_14 = NULL;
          ATerm o_7;
          o_7 = t;
          {
            ATerm t_14 = NULL;
            t = b_99(t);
            {
              t_14 = t;
              if(((s_14 != NULL) && (s_14 != t_14)))
                _fail(t_14);
              else
                s_14 = t_14;
            }
          }
          t = o_7;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(s_14);
                return(t);
              }
              t = split_2(t, u_14, t_0);
              t = diff_1(t, d_99);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = c_99(t, r_0, u_14, s_0);
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
          LocalPopChoice(g_7);
        }
      else
        {
          t = f_7;
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
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        {
          ATerm r_7 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(s_7);
            }
          else
            {
              t = r_7;
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
    t = term_y_7;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm u_16 = NULL,w_16 = NULL;
    ATerm z_7;
    z_7 = t;
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
    t = z_7;
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
  ATerm a_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(d_8);
    }
  else
    {
      t = a_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm u_84 (ATerm), ATerm v_84 (ATerm))
{
  ATerm n_18 = NULL;
  ATerm p_18 = NULL,q_18 = NULL;
  n_18 = t;
  {
    ATerm r_18 = NULL;
    t = not_null(n_18);
    {
      ATerm s_18 = NULL;
      t = u_84(t);
      {
        r_18 = t;
        {
          if(((p_18 != NULL) && (p_18 != r_18)))
            _fail(r_18);
          else
            p_18 = r_18;
          {
            t = v_84(t);
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
ATerm alltd_1 (ATerm t, ATerm a_87 (ATerm))
{
  ATerm w_18 (ATerm t)
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_87(t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
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
ATerm substitute_2 (ATerm t, ATerm f_84 (ATerm), ATerm g_84 (ATerm))
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
              t = SubsVar_2(t, f_84, e_1);
              t = g_84(t);
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
ATerm substitute_1 (ATerm t, ATerm h_84 (ATerm))
{
  t = substitute_2(t, h_84, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_2(t, IsSVar_0, _id);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm))
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
            t = m_74(t);
            {
              n_20 = t;
              {
                t = not_null(h_20);
                {
                  ATerm r_20 = NULL;
                  t = n_74(t);
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
            ATerm g_8;
            g_8 = t;
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
            t = g_8;
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
  ATerm k_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(s_8);
    }
  else
    {
      t = k_8;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_25)), not_null(a_25)), not_null(z_24)), not_null(y_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(v_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_z_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_25)), not_null(h_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_25)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_e_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_25)), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_25)), not_null(r_25)))))));
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
  ATerm g_27 = NULL,h_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_Match_1))
    {
      h_27 = ATgetArgument(g_27, 0);
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
            ATerm n_27 = NULL;
            ATerm r_27 = NULL;
            t = new_0(t);
            {
              n_27 = t;
              {
                if(((l_27 != NULL) && (l_27 != n_27)))
                  _fail(n_27);
                else
                  l_27 = n_27;
                {
                  t = not_null(h_27);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
                      o_27 = t;
                      v_26 :
                      if(match_cons(o_27, sym_Anno_2))
                        {
                          p_27 = ATgetArgument(o_27, 0);
                          q_27 = ATgetArgument(o_27, 1);
                          {
                            if(((j_27 != NULL) && (j_27 != p_27)))
                              _fail(p_27);
                            else
                              j_27 = p_27;
                            {
                              if(((k_27 != NULL) && (k_27 != q_27)))
                                _fail(q_27);
                              else
                                k_27 = q_27;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_27)), not_null(j_27));
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
                      r_27 = t;
                      if(((m_27 != NULL) && (m_27 != r_27)))
                        _fail(r_27);
                      else
                        m_27 = r_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_27))))));
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            {
              ATerm j_9 = t;
              int k_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
                  ATerm w_27 = NULL;
                  ATerm z_27 = NULL;
                  t = new_0(t);
                  {
                    w_27 = t;
                    {
                      if(((u_27 != NULL) && (u_27 != w_27)))
                        _fail(w_27);
                      else
                        u_27 = w_27;
                      {
                        t = not_null(h_27);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm x_27 = NULL,y_27 = NULL;
                            x_27 = t;
                            z_26 :
                            if(match_cons(x_27, sym_RootApp_1))
                              {
                                y_27 = ATgetArgument(x_27, 0);
                                {
                                  if(((t_27 != NULL) && (t_27 != y_27)))
                                    _fail(y_27);
                                  else
                                    t_27 = y_27;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_27));
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
                            z_27 = t;
                            if(((v_27 != NULL) && (v_27 != z_27)))
                              _fail(z_27);
                            else
                              v_27 = z_27;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_27))), not_null(t_27))));
                  LocalPopChoice(k_9);
                }
              else
                {
                  t = j_9;
                  {
                    ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
                    ATerm f_28 = NULL;
                    ATerm j_28 = NULL;
                    t = new_0(t);
                    {
                      f_28 = t;
                      {
                        if(((d_28 != NULL) && (d_28 != f_28)))
                          _fail(f_28);
                        else
                          d_28 = f_28;
                        {
                          t = not_null(h_27);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
                              g_28 = t;
                              d_27 :
                              if(match_cons(g_28, sym_App_2))
                                {
                                  h_28 = ATgetArgument(g_28, 0);
                                  i_28 = ATgetArgument(g_28, 1);
                                  {
                                    if(((c_28 != NULL) && (c_28 != h_28)))
                                      _fail(h_28);
                                    else
                                      c_28 = h_28;
                                    {
                                      if(((b_28 != NULL) && (b_28 != i_28)))
                                        _fail(i_28);
                                      else
                                        b_28 = i_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_28));
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
                              j_28 = t;
                              if(((e_28 != NULL) && (e_28 != j_28)))
                                _fail(j_28);
                              else
                                e_28 = j_28;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_28))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_28)), not_null(c_28)))));
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
  ATerm a_29 = NULL,b_29 = NULL,f_29 = NULL,g_29 = NULL;
  a_29 = t;
  y_28 :
  if(match_cons(a_29, sym_Match_1))
    {
      b_29 = ATgetArgument(a_29, 0);
      z_28 :
      if(match_cons(b_29, sym_RootApp_1))
        {
          f_29 = ATgetArgument(b_29, 0);
          t = not_null(f_29);
        }
      else
        {
          if(match_cons(b_29, sym_App_2))
            {
              f_29 = ATgetArgument(b_29, 0);
              g_29 = ATgetArgument(b_29, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(f_29), not_null(g_29));
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
  ATerm d_30 = NULL,e_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym_Match_1))
    {
      e_30 = ATgetArgument(d_30, 0);
      {
        ATerm h_30 = NULL,i_30 = NULL;
        ATerm x_30 = NULL;
        t = not_null(e_30);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm l_30 = NULL,m_30 = NULL,w_30 = NULL;
            l_30 = t;
            o_29 :
            if(match_cons(l_30, sym_RootApp_1))
              {
                m_30 = ATgetArgument(l_30, 0);
                p_29 :
                if(match_cons(m_30, sym_Match_1))
                  {
                    w_30 = ATgetArgument(m_30, 0);
                    {
                      if(((h_30 != NULL) && (h_30 != w_30)))
                        _fail(w_30);
                      else
                        h_30 = w_30;
                      t = not_null(h_30);
                    }
                  }
                else
                  {
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
            x_30 = t;
            if(((i_30 != NULL) && (i_30 != x_30)))
              _fail(x_30);
            else
              i_30 = x_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(i_30));
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
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  y_31 = t;
  v_31 :
  if(match_cons(y_31, sym_Build_1))
    {
      z_31 = ATgetArgument(y_31, 0);
      {
        ATerm t_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
            ATerm f_32 = NULL;
            ATerm j_32 = NULL;
            t = new_0(t);
            {
              f_32 = t;
              {
                if(((d_32 != NULL) && (d_32 != f_32)))
                  _fail(f_32);
                else
                  d_32 = f_32;
                {
                  t = not_null(z_31);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
                      g_32 = t;
                      g_31 :
                      if(match_cons(g_32, sym_Anno_2))
                        {
                          h_32 = ATgetArgument(g_32, 0);
                          i_32 = ATgetArgument(g_32, 1);
                          {
                            if(((b_32 != NULL) && (b_32 != h_32)))
                              _fail(h_32);
                            else
                              b_32 = h_32;
                            {
                              if(((c_32 != NULL) && (c_32 != i_32)))
                                _fail(i_32);
                              else
                                c_32 = i_32;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_32));
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
                      j_32 = t;
                      if(((e_32 != NULL) && (e_32 != j_32)))
                        _fail(j_32);
                      else
                        e_32 = j_32;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_32)), not_null(b_32))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_32))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_32))));
            LocalPopChoice(x_9);
          }
        else
          {
            t = t_9;
            {
              ATerm c_10 = t;
              int d_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
                  ATerm o_32 = NULL;
                  ATerm r_32 = NULL;
                  t = new_0(t);
                  {
                    o_32 = t;
                    {
                      if(((m_32 != NULL) && (m_32 != o_32)))
                        _fail(o_32);
                      else
                        m_32 = o_32;
                      {
                        t = not_null(z_31);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm p_32 = NULL,q_32 = NULL;
                            p_32 = t;
                            p_31 :
                            if(match_cons(p_32, sym_RootApp_1))
                              {
                                q_32 = ATgetArgument(p_32, 0);
                                {
                                  if(((l_32 != NULL) && (l_32 != q_32)))
                                    _fail(q_32);
                                  else
                                    l_32 = q_32;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_32));
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
                            r_32 = t;
                            if(((n_32 != NULL) && (n_32 != r_32)))
                              _fail(r_32);
                            else
                              n_32 = r_32;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_32), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_32))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_32))));
                  LocalPopChoice(d_10);
                }
              else
                {
                  t = c_10;
                  {
                    ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
                    ATerm x_32 = NULL;
                    ATerm b_33 = NULL;
                    t = new_0(t);
                    {
                      x_32 = t;
                      {
                        if(((v_32 != NULL) && (v_32 != x_32)))
                          _fail(x_32);
                        else
                          v_32 = x_32;
                        {
                          t = not_null(z_31);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
                              y_32 = t;
                              t_31 :
                              if(match_cons(y_32, sym_App_2))
                                {
                                  z_32 = ATgetArgument(y_32, 0);
                                  a_33 = ATgetArgument(y_32, 1);
                                  {
                                    if(((t_32 != NULL) && (t_32 != z_32)))
                                      _fail(z_32);
                                    else
                                      t_32 = z_32;
                                    {
                                      if(((u_32 != NULL) && (u_32 != a_33)))
                                        _fail(a_33);
                                      else
                                        u_32 = a_33;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_32));
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
                              b_33 = t;
                              if(((w_32 != NULL) && (w_32 != b_33)))
                                _fail(b_33);
                              else
                                w_32 = b_33;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_32), not_null(u_32), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_32)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_32))));
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
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
  w_33 = t;
  q_33 :
  if(match_cons(w_33, sym_Build_1))
    {
      x_33 = ATgetArgument(w_33, 0);
      v_33 :
      if(match_cons(x_33, sym_RootApp_1))
        {
          y_33 = ATgetArgument(x_33, 0);
          t = not_null(y_33);
        }
      else
        {
          if(match_cons(x_33, sym_App_2))
            {
              y_33 = ATgetArgument(x_33, 0);
              z_33 = ATgetArgument(x_33, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_33)), not_null(y_33));
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
ATerm As_2 (ATerm t, ATerm p_76 (ATerm), ATerm q_76 (ATerm))
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym_As_2))
    {
      u_34 = ATgetArgument(t_34, 0);
      v_34 = ATgetArgument(t_34, 1);
      {
        ATerm z_34 = NULL,b_35 = NULL;
        ATerm a_35 = NULL;
        t = SSLgetAnnotations(not_null(t_34));
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
        {
          t = not_null(u_34);
          {
            ATerm d_35 = NULL;
            t = p_76(t);
            {
              b_35 = t;
              {
                t = not_null(v_34);
                {
                  ATerm f_35 = NULL;
                  t = q_76(t);
                  {
                    d_35 = t;
                    {
                      ATerm l_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(b_35), not_null(d_35)), not_null(z_34));
                      {
                        l_35 = t;
                        if(((f_35 != NULL) && (f_35 != l_35)))
                          _fail(l_35);
                        else
                          f_35 = l_35;
                      }
                      t = not_null(f_35);
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
ATerm Prim_2 (ATerm t, ATerm v_72 (ATerm), ATerm w_72 (ATerm))
{
  ATerm x_35 = NULL,y_35 = NULL,f_36 = NULL;
  x_35 = t;
  w_35 :
  if(match_cons(x_35, sym_Prim_2))
    {
      y_35 = ATgetArgument(x_35, 0);
      f_36 = ATgetArgument(x_35, 1);
      {
        ATerm j_36 = NULL,l_36 = NULL;
        ATerm k_36 = NULL;
        t = SSLgetAnnotations(not_null(x_35));
        {
          k_36 = t;
          if(((j_36 != NULL) && (j_36 != k_36)))
            _fail(k_36);
          else
            j_36 = k_36;
        }
        {
          t = not_null(y_35);
          {
            ATerm n_36 = NULL;
            t = v_72(t);
            {
              l_36 = t;
              {
                t = not_null(f_36);
                {
                  ATerm p_36 = NULL;
                  t = w_72(t);
                  {
                    n_36 = t;
                    {
                      ATerm q_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(l_36), not_null(n_36)), not_null(j_36));
                      {
                        q_36 = t;
                        if(((p_36 != NULL) && (p_36 != q_36)))
                          _fail(q_36);
                        else
                          p_36 = q_36;
                      }
                      t = not_null(p_36);
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
ATerm Explode_2 (ATerm t, ATerm l_76 (ATerm), ATerm m_76 (ATerm))
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  l_37 = t;
  k_37 :
  if(match_cons(l_37, sym_Explode_2))
    {
      m_37 = ATgetArgument(l_37, 0);
      n_37 = ATgetArgument(l_37, 1);
      {
        ATerm v_37 = NULL,b_38 = NULL;
        ATerm a_38 = NULL;
        t = SSLgetAnnotations(not_null(l_37));
        {
          a_38 = t;
          if(((v_37 != NULL) && (v_37 != a_38)))
            _fail(a_38);
          else
            v_37 = a_38;
        }
        {
          t = not_null(m_37);
          {
            ATerm d_38 = NULL;
            t = l_76(t);
            {
              b_38 = t;
              {
                t = not_null(n_37);
                {
                  ATerm f_38 = NULL;
                  t = m_76(t);
                  {
                    d_38 = t;
                    {
                      ATerm g_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(b_38), not_null(d_38)), not_null(v_37));
                      {
                        g_38 = t;
                        if(((f_38 != NULL) && (f_38 != g_38)))
                          _fail(g_38);
                        else
                          f_38 = g_38;
                      }
                      t = not_null(f_38);
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
ATerm Op_2 (ATerm t, ATerm z_74 (ATerm), ATerm a_75 (ATerm))
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  z_38 = t;
  y_38 :
  if(match_cons(z_38, sym_Op_2))
    {
      a_39 = ATgetArgument(z_38, 0);
      b_39 = ATgetArgument(z_38, 1);
      {
        ATerm f_39 = NULL,h_39 = NULL;
        ATerm g_39 = NULL;
        t = SSLgetAnnotations(not_null(z_38));
        {
          g_39 = t;
          if(((f_39 != NULL) && (f_39 != g_39)))
            _fail(g_39);
          else
            f_39 = g_39;
        }
        {
          t = not_null(a_39);
          {
            ATerm j_39 = NULL;
            t = z_74(t);
            {
              h_39 = t;
              {
                t = not_null(b_39);
                {
                  ATerm l_39 = NULL;
                  t = a_75(t);
                  {
                    j_39 = t;
                    {
                      ATerm m_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(h_39), not_null(j_39)), not_null(f_39));
                      {
                        m_39 = t;
                        if(((l_39 != NULL) && (l_39 != m_39)))
                          _fail(m_39);
                        else
                          l_39 = m_39;
                      }
                      t = not_null(l_39);
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
ATerm pat_td_1 (ATerm t, ATerm u_112 (ATerm))
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_112(t);
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = pat_td_1(t, u_112);
                return(t);
              }
              t = fetch_1(t, t_1);
              return(t);
            }
            t = Op_2(t, _id, s_1);
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
            {
              ATerm i_10 = t;
              int j_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = pat_td_1(t, u_112);
                    return(t);
                  }
                  t = Explode_2(t, _id, u_1);
                  LocalPopChoice(j_10);
                }
              else
                {
                  t = i_10;
                  {
                    ATerm k_10 = t;
                    int l_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_1 (ATerm t)
                        {
                          t = pat_td_1(t, u_112);
                          return(t);
                        }
                        t = Explode_2(t, v_1, _id);
                        LocalPopChoice(l_10);
                      }
                    else
                      {
                        t = k_10;
                        {
                          ATerm m_10 = t;
                          int s_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_1 (ATerm t)
                              {
                                ATerm x_1 (ATerm t)
                                {
                                  t = pat_td_1(t, u_112);
                                  return(t);
                                }
                                t = fetch_1(t, x_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, w_1);
                              LocalPopChoice(s_10);
                            }
                          else
                            {
                              t = m_10;
                              {
                                ATerm y_1 (ATerm t)
                                {
                                  t = pat_td_1(t, u_112);
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
  ATerm d_40 = NULL,e_40 = NULL;
  d_40 = t;
  c_40 :
  if(match_cons(d_40, sym_Build_1))
    {
      e_40 = ATgetArgument(d_40, 0);
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_40 = NULL,h_40 = NULL;
            ATerm l_40 = NULL;
            t = not_null(e_40);
            {
              ATerm z_1 (ATerm t)
              {
                ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
                i_40 = t;
                v_39 :
                if(match_cons(i_40, sym_RootApp_1))
                  {
                    j_40 = ATgetArgument(i_40, 0);
                    w_39 :
                    if(match_cons(j_40, sym_Build_1))
                      {
                        k_40 = ATgetArgument(j_40, 0);
                        {
                          if(((g_40 != NULL) && (g_40 != k_40)))
                            _fail(k_40);
                          else
                            g_40 = k_40;
                          t = not_null(g_40);
                        }
                      }
                    else
                      {
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
                l_40 = t;
                if(((h_40 != NULL) && (h_40 != l_40)))
                  _fail(l_40);
                else
                  h_40 = l_40;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_40));
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            {
              ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
              ATerm u_40 = NULL;
              t = not_null(e_40);
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL;
                  q_40 = t;
                  z_39 :
                  if(match_cons(q_40, sym_App_2))
                    {
                      r_40 = ATgetArgument(q_40, 0);
                      t_40 = ATgetArgument(q_40, 1);
                      a_40 :
                      if(match_cons(r_40, sym_Build_1))
                        {
                          s_40 = ATgetArgument(r_40, 0);
                          {
                            if(((o_40 != NULL) && (o_40 != s_40)))
                              _fail(s_40);
                            else
                              o_40 = s_40;
                            {
                              if(((n_40 != NULL) && (n_40 != t_40)))
                                _fail(t_40);
                              else
                                n_40 = t_40;
                              t = not_null(o_40);
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
                  u_40 = t;
                  if(((p_40 != NULL) && (p_40 != u_40)))
                    _fail(u_40);
                  else
                    p_40 = u_40;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(p_40));
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
  ATerm v_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(z_10);
    }
  else
    {
      t = v_10;
      {
        ATerm b_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(d_11);
          }
        else
          {
            t = b_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  p_41 :
  if(match_cons(w_41, sym_Lets_2))
    {
      x_41 = ATgetArgument(w_41, 0);
      y_41 = ATgetArgument(w_41, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(x_41), not_null(y_41));
    }
  else
    {
      if(match_cons(w_41, sym_LChoices_1))
        {
          x_41 = ATgetArgument(w_41, 0);
          q_41 :
          if(((ATgetType(x_41) == AT_LIST) && !(ATisEmpty(x_41))))
            {
              t_41 = ATgetFirst((ATermList) x_41);
              u_41 = (ATerm) ATgetNext((ATermList) x_41);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_41), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(u_41)));
            }
          else
            {
              if(((ATgetType(x_41) == AT_LIST) && ATisEmpty(x_41)))
                {
                  t = term_y_7;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(w_41, sym_Choices_1))
            {
              x_41 = ATgetArgument(w_41, 0);
              r_41 :
              if(((ATgetType(x_41) == AT_LIST) && !(ATisEmpty(x_41))))
                {
                  t_41 = ATgetFirst((ATermList) x_41);
                  u_41 = (ATerm) ATgetNext((ATermList) x_41);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(t_41), (ATerm) ATmakeAppl(sym_Choices_1, not_null(u_41)));
                }
              else
                {
                  if(((ATgetType(x_41) == AT_LIST) && ATisEmpty(x_41)))
                    {
                      t = term_y_7;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(w_41, sym_Seqs_1))
                {
                  x_41 = ATgetArgument(w_41, 0);
                  s_41 :
                  if(((ATgetType(x_41) == AT_LIST) && !(ATisEmpty(x_41))))
                    {
                      t_41 = ATgetFirst((ATermList) x_41);
                      u_41 = (ATerm) ATgetNext((ATermList) x_41);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_41), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_41)));
                    }
                  else
                    {
                      if(((ATgetType(x_41) == AT_LIST) && ATisEmpty(x_41)))
                        {
                          t = term_g_11;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(w_41, sym_DefaultVarDec_1))
                    {
                      x_41 = ATgetArgument(w_41, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(x_41), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_11), term_j_11));
                    }
                  else
                    {
                      if(match_cons(w_41, sym_InfixApp_3))
                        {
                          x_41 = ATgetArgument(w_41, 0);
                          y_41 = ATgetArgument(w_41, 1);
                          v_41 = ATgetArgument(w_41, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_41), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_41)), not_null(x_41))));
                        }
                      else
                        {
                          if(match_cons(w_41, sym_BAM_3))
                            {
                              x_41 = ATgetArgument(w_41, 0);
                              y_41 = ATgetArgument(w_41, 1);
                              v_41 = ATgetArgument(w_41, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(v_41))), not_null(x_41)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_41))));
                            }
                          else
                            {
                              if(match_cons(w_41, sym_AM_2))
                                {
                                  x_41 = ATgetArgument(w_41, 0);
                                  y_41 = ATgetArgument(w_41, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_41), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_41)));
                                }
                              else
                                {
                                  if(match_cons(w_41, sym_MA_2))
                                    {
                                      x_41 = ATgetArgument(w_41, 0);
                                      y_41 = ATgetArgument(w_41, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_41)), not_null(y_41));
                                    }
                                  else
                                    {
                                      if(match_cons(w_41, sym_BA_2))
                                        {
                                          x_41 = ATgetArgument(w_41, 0);
                                          y_41 = ATgetArgument(w_41, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_41)), not_null(x_41));
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
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
  l_43 = t;
  i_43 :
  if(match_cons(l_43, sym__2))
    {
      m_43 = ATgetArgument(l_43, 0);
      p_43 = ATgetArgument(l_43, 1);
      j_43 :
      if(match_cons(m_43, sym__2))
        {
          n_43 = ATgetArgument(m_43, 0);
          o_43 = ATgetArgument(m_43, 1);
          k_43 :
          if(match_cons(p_43, sym__2))
            {
              q_43 = ATgetArgument(p_43, 0);
              r_43 = ATgetArgument(p_43, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_43)), not_null(n_43)), (ATerm) ATinsert(CheckATermList(not_null(r_43)), not_null(o_43)));
            }
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
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
  z_43 = t;
  y_43 :
  if(((ATgetType(z_43) == AT_LIST) && !(ATisEmpty(z_43))))
    {
      a_44 = ATgetFirst((ATermList) z_43);
      b_44 = (ATerm) ATgetNext((ATermList) z_43);
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_44), not_null(b_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm h_44 = NULL;
  h_44 = t;
  g_44 :
  if(((ATgetType(h_44) == AT_LIST) && ATisEmpty(h_44)))
    {
      t = term_k_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm y_89 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, y_89);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  ATerm t_44 (ATerm t)
  {
    ATerm q_44 = NULL;
    ATerm r_44 = NULL;
    t = not_null(n_44);
    {
      ATerm l_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = l_11;
        }
      {
        t = new_0(t);
        {
          r_44 = t;
          if(((q_44 != NULL) && (q_44 != r_44)))
            _fail(r_44);
          else
            q_44 = r_44;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_44)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_44)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_44))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_44))));
    return(t);
  }
  ATerm u_44 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_g_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_44))));
    return(t);
  }
  n_44 = t;
  m_44 :
  if(match_cons(n_44, sym_Var_1))
    {
      o_44 = ATgetArgument(n_44, 0);
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_44(t);
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            t = u_44(t);
          }
      }
    }
  else
    {
      t = t_44(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm f_45 = NULL,g_45 = NULL;
  f_45 = t;
  e_45 :
  if(match_cons(f_45, sym_Var_1))
    {
      g_45 = ATgetArgument(f_45, 0);
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_45 = NULL,o_45 = NULL;
            ATerm k_45 = NULL;
            t = SSLgetAnnotations(not_null(f_45));
            {
              k_45 = t;
              if(((j_45 != NULL) && (j_45 != k_45)))
                _fail(k_45);
              else
                j_45 = k_45;
            }
            {
              t = not_null(g_45);
              {
                ATerm q_45 = NULL;
                t = q_0(t);
                {
                  o_45 = t;
                  {
                    ATerm r_45 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_45)), not_null(j_45));
                    {
                      r_45 = t;
                      if(((q_45 != NULL) && (q_45 != r_45)))
                        _fail(r_45);
                      else
                        q_45 = r_45;
                    }
                    t = not_null(q_45);
                  }
                }
              }
            }
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            {
              ATerm u_45 = NULL,w_45 = NULL;
              ATerm v_45 = NULL;
              t = SSLgetAnnotations(not_null(f_45));
              {
                v_45 = t;
                if(((u_45 != NULL) && (u_45 != v_45)))
                  _fail(v_45);
                else
                  u_45 = v_45;
              }
              {
                t = not_null(g_45);
                {
                  ATerm y_45 = NULL;
                  t = q_0(t);
                  {
                    w_45 = t;
                    {
                      ATerm z_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_45)), not_null(u_45));
                      {
                        z_45 = t;
                        if(((y_45 != NULL) && (y_45 != z_45)))
                          _fail(z_45);
                        else
                          y_45 = z_45;
                      }
                      t = not_null(y_45);
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
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
  q_49 = t;
  p_49 :
  if(match_cons(q_49, sym_Prim_2))
    {
      r_49 = ATgetArgument(q_49, 0);
      s_49 = ATgetArgument(q_49, 1);
      {
        ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
        ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
        t = not_null(s_49);
        {
          ATerm b_2 (ATerm t)
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
            return(t);
          }
          t = fetch_1(t, b_2);
          {
            t = not_null(s_49);
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
                  y_49 = t;
                  n_49 :
                  if(match_cons(y_49, sym__2))
                    {
                      z_49 = ATgetArgument(y_49, 0);
                      a_50 = ATgetArgument(y_49, 1);
                      o_49 :
                      if(match_cons(a_50, sym__2))
                        {
                          b_50 = ATgetArgument(a_50, 0);
                          c_50 = ATgetArgument(a_50, 1);
                          {
                            if(((v_49 != NULL) && (v_49 != z_49)))
                              _fail(z_49);
                            else
                              v_49 = z_49;
                            {
                              if(((w_49 != NULL) && (w_49 != b_50)))
                                _fail(b_50);
                              else
                                w_49 = b_50;
                              if(((x_49 != NULL) && (x_49 != c_50)))
                                _fail(c_50);
                              else
                                x_49 = c_50;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(w_49)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(r_49), not_null(x_49))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm w_100 (ATerm), ATerm x_100 (ATerm))
{
  ATerm f_50 (ATerm t)
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_100(t);
        t = f_50(t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        t = x_100(t);
      }
    return(t);
  }
  t = f_50(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_100 (ATerm))
{
  t = repeat_2(t, z_100, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm k_50 = NULL;
  k_50 = t;
  j_50 :
  if(match_cons(k_50, sym_Wld_0))
    {
      ATerm m_50 = NULL,o_50 = NULL;
      ATerm x_11;
      x_11 = t;
      {
        ATerm n_50 = NULL;
        t = SSLgetAnnotations(not_null(k_50));
        {
          n_50 = t;
          if(((m_50 != NULL) && (m_50 != n_50)))
            _fail(n_50);
          else
            m_50 = n_50;
        }
      }
      t = x_11;
      {
        ATerm p_50 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(m_50));
        {
          p_50 = t;
          if(((o_50 != NULL) && (o_50 != p_50)))
            _fail(p_50);
          else
            o_50 = p_50;
        }
        t = not_null(o_50);
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
  ATerm b_12 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm d_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(g_12);
          }
        else
          {
            t = d_12;
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
      t = b_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm f_76 (ATerm), ATerm g_76 (ATerm))
{
  ATerm a_51 = NULL,d_51 = NULL,e_51 = NULL;
  a_51 = t;
  z_50 :
  if(match_cons(a_51, sym_App_2))
    {
      d_51 = ATgetArgument(a_51, 0);
      e_51 = ATgetArgument(a_51, 1);
      {
        ATerm k_51 = NULL,m_51 = NULL;
        ATerm l_51 = NULL;
        t = SSLgetAnnotations(not_null(a_51));
        {
          l_51 = t;
          if(((k_51 != NULL) && (k_51 != l_51)))
            _fail(l_51);
          else
            k_51 = l_51;
        }
        {
          t = not_null(d_51);
          {
            ATerm o_51 = NULL;
            t = f_76(t);
            {
              m_51 = t;
              {
                t = not_null(e_51);
                {
                  ATerm q_51 = NULL;
                  t = g_76(t);
                  {
                    o_51 = t;
                    {
                      ATerm r_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(m_51), not_null(o_51)), not_null(k_51));
                      {
                        r_51 = t;
                        if(((q_51 != NULL) && (q_51 != r_51)))
                          _fail(r_51);
                        else
                          q_51 = r_51;
                      }
                      t = not_null(q_51);
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
ATerm Con_3 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm))
{
  ATerm g_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
  g_52 = t;
  f_52 :
  if(match_cons(g_52, sym_Con_3))
    {
      i_52 = ATgetArgument(g_52, 0);
      j_52 = ATgetArgument(g_52, 1);
      k_52 = ATgetArgument(g_52, 2);
      {
        ATerm p_52 = NULL,r_52 = NULL;
        ATerm q_52 = NULL;
        t = SSLgetAnnotations(not_null(g_52));
        {
          q_52 = t;
          if(((p_52 != NULL) && (p_52 != q_52)))
            _fail(q_52);
          else
            p_52 = q_52;
        }
        {
          t = not_null(i_52);
          {
            ATerm t_52 = NULL;
            t = c_76(t);
            {
              r_52 = t;
              {
                t = not_null(j_52);
                {
                  ATerm v_52 = NULL;
                  t = d_76(t);
                  {
                    t_52 = t;
                    {
                      t = not_null(k_52);
                      {
                        ATerm x_52 = NULL;
                        t = e_76(t);
                        {
                          v_52 = t;
                          {
                            ATerm y_52 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(r_52), not_null(t_52), not_null(v_52)), not_null(p_52));
                            {
                              y_52 = t;
                              if(((x_52 != NULL) && (x_52 != y_52)))
                                _fail(y_52);
                              else
                                x_52 = y_52;
                            }
                            t = not_null(x_52);
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
  ATerm h_12 = t;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
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
      t = h_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL;
  r_53 = t;
  p_53 :
  if(match_cons(r_53, sym_SRule_1))
    {
      s_53 = ATgetArgument(r_53, 0);
      q_53 :
      if(match_cons(s_53, sym_StratRule_3))
        {
          t_53 = ATgetArgument(s_53, 0);
          u_53 = ATgetArgument(s_53, 1);
          v_53 = ATgetArgument(s_53, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_53)), (ATerm) ATmakeAppl(sym_Where_1, not_null(v_53))), not_null(t_53)));
        }
      else
        {
          if(match_cons(s_53, sym_Rule_3))
            {
              t_53 = ATgetArgument(s_53, 0);
              u_53 = ATgetArgument(s_53, 1);
              v_53 = ATgetArgument(s_53, 2);
              {
                t = not_null(t_53);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(u_53);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(u_53))), (ATerm) ATmakeAppl(sym_Where_1, not_null(v_53))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_53))));
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
ATerm Scope_2 (ATerm t, ATerm d_73 (ATerm), ATerm e_73 (ATerm))
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
  k_54 = t;
  j_54 :
  if(match_cons(k_54, sym_Scope_2))
    {
      l_54 = ATgetArgument(k_54, 0);
      m_54 = ATgetArgument(k_54, 1);
      {
        ATerm q_54 = NULL,s_54 = NULL;
        ATerm r_54 = NULL;
        t = SSLgetAnnotations(not_null(k_54));
        {
          r_54 = t;
          if(((q_54 != NULL) && (q_54 != r_54)))
            _fail(r_54);
          else
            q_54 = r_54;
        }
        {
          t = not_null(l_54);
          {
            ATerm u_54 = NULL;
            t = d_73(t);
            {
              s_54 = t;
              {
                t = not_null(m_54);
                {
                  ATerm w_54 = NULL;
                  t = e_73(t);
                  {
                    u_54 = t;
                    {
                      ATerm x_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(s_54), not_null(u_54)), not_null(q_54));
                      {
                        x_54 = t;
                        if(((w_54 != NULL) && (w_54 != x_54)))
                          _fail(x_54);
                        else
                          w_54 = x_54;
                      }
                      t = not_null(w_54);
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
ATerm oncetd_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm d_55 (ATerm t)
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_86(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = _one(t, d_55);
      }
    return(t);
  }
  t = d_55(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  s_55 = t;
  q_55 :
  if(match_cons(s_55, sym_SRule_1))
    {
      t_55 = ATgetArgument(s_55, 0);
      r_55 :
      if(match_cons(t_55, sym_Rule_3))
        {
          u_55 = ATgetArgument(t_55, 0);
          v_55 = ATgetArgument(t_55, 1);
          w_55 = ATgetArgument(t_55, 2);
          {
            ATerm a_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL;
            ATerm r_56 = NULL;
            ATerm h_57 = NULL;
            t = new_0(t);
            {
              r_56 = t;
              {
                if(((o_56 != NULL) && (o_56 != r_56)))
                  _fail(r_56);
                else
                  o_56 = r_56;
                {
                  t = not_null(u_55);
                  {
                    ATerm t_57 = NULL;
                    ATerm f_2 (ATerm t)
                    {
                      ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,f_57 = NULL,g_57 = NULL;
                      s_56 = t;
                      h_55 :
                      if(match_cons(s_56, sym_Con_3))
                        {
                          t_56 = ATgetArgument(s_56, 0);
                          f_57 = ATgetArgument(s_56, 1);
                          g_57 = ATgetArgument(s_56, 2);
                          i_55 :
                          if(match_cons(t_56, sym_Var_1))
                            {
                              u_56 = ATgetArgument(t_56, 0);
                              {
                                if(((l_56 != NULL) && (l_56 != u_56)))
                                  _fail(u_56);
                                else
                                  l_56 = u_56;
                                {
                                  if(((j_56 != NULL) && (j_56 != f_57)))
                                    _fail(f_57);
                                  else
                                    j_56 = f_57;
                                  {
                                    if(((a_56 != NULL) && (a_56 != g_57)))
                                      _fail(g_57);
                                    else
                                      a_56 = g_57;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_56));
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
                      h_57 = t;
                      {
                        if(((p_56 != NULL) && (p_56 != h_57)))
                          _fail(h_57);
                        else
                          p_56 = h_57;
                        {
                          t = not_null(v_55);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,r_57 = NULL,s_57 = NULL;
                              i_57 = t;
                              l_55 :
                              if(match_cons(i_57, sym_Con_3))
                                {
                                  j_57 = ATgetArgument(i_57, 0);
                                  l_57 = ATgetArgument(i_57, 1);
                                  m_57 = ATgetArgument(i_57, 2);
                                  m_55 :
                                  if(match_cons(j_57, sym_Var_1))
                                    {
                                      k_57 = ATgetArgument(j_57, 0);
                                      n_55 :
                                      if(match_cons(m_57, sym_Call_2))
                                        {
                                          r_57 = ATgetArgument(m_57, 0);
                                          s_57 = ATgetArgument(m_57, 1);
                                          o_55 :
                                          if(((ATgetType(s_57) == AT_LIST) && ATisEmpty(s_57)))
                                            {
                                              {
                                                if(((l_56 != NULL) && (l_56 != k_57)))
                                                  _fail(k_57);
                                                else
                                                  l_56 = k_57;
                                                {
                                                  if(((k_56 != NULL) && (k_56 != l_57)))
                                                    _fail(l_57);
                                                  else
                                                    k_56 = l_57;
                                                  {
                                                    if(((i_56 != NULL) && (i_56 != r_57)))
                                                      _fail(r_57);
                                                    else
                                                      i_56 = r_57;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_56));
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
                              t_57 = t;
                              if(((q_56 != NULL) && (q_56 != t_57)))
                                _fail(t_57);
                              else
                                q_56 = t_57;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_56)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_56), not_null(q_56), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_55), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(i_56), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_56), not_null(k_56), term_g_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_56)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_56)))))));
          }
        }
      else
        {
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
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
          LocalPopChoice(t_12);
        }
      else
        {
          t = s_12;
          {
            ATerm u_12 = t;
            int b_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2(t, _id, desugarRule_0);
                LocalPopChoice(b_13);
              }
            else
              {
                t = u_12;
                t = RtoS_0(t);
              }
          }
        }
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm w_84 (ATerm))
{
  t = w_84(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, w_84);
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
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0(t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        {
        }
      }
    {
      ATerm j_2 (ATerm t)
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            {
              ATerm j_13 = t;
              int k_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(k_13);
                }
              else
                {
                  t = j_13;
                  {
                    ATerm l_13 = t;
                    int r_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(r_13);
                      }
                    else
                      {
                        t = l_13;
                        {
                          ATerm s_13 = t;
                          int x_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(x_13);
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
      t = repeat_2(t, j_2, _id);
    }
    return(t);
  }
  t = topdown_1(t, i_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm f_58 = NULL;
  f_58 = t;
  e_58 :
  if(match_cons(f_58, sym__0))
    {
      ATerm h_58 = NULL,j_58 = NULL;
      ATerm y_13;
      y_13 = t;
      {
        ATerm i_58 = NULL;
        t = SSLgetAnnotations(not_null(f_58));
        {
          i_58 = t;
          if(((h_58 != NULL) && (h_58 != i_58)))
            _fail(i_58);
          else
            h_58 = i_58;
        }
      }
      t = y_13;
      {
        ATerm l_58 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(h_58));
        {
          l_58 = t;
          if(((j_58 != NULL) && (j_58 != l_58)))
            _fail(l_58);
          else
            j_58 = l_58;
        }
        t = not_null(j_58);
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
  ATerm x_58 = NULL;
  ATerm z_58 = NULL,a_59 = NULL,i_59 = NULL,n_59 = NULL;
  x_58 = t;
  {
    ATerm z_13;
    z_13 = t;
    {
      ATerm b_59 = NULL;
      ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
      t = not_null(x_58);
      {
        b_59 = t;
        {
          t = SSL_explode_term(not_null(b_59));
          {
            d_59 = t;
            s_58 :
            if(match_cons(d_59, sym__2))
              {
                e_59 = ATgetArgument(d_59, 0);
                f_59 = ATgetArgument(d_59, 1);
                t_58 :
                if(match_string(e_59, ""))
                  {
                    u_58 :
                    if(((ATgetType(f_59) == AT_LIST) && !(ATisEmpty(f_59))))
                      {
                        g_59 = ATgetFirst((ATermList) f_59);
                        h_59 = (ATerm) ATgetNext((ATermList) f_59);
                        {
                          if(((z_58 != NULL) && (z_58 != g_59)))
                            _fail(g_59);
                          else
                            z_58 = g_59;
                          if(((a_59 != NULL) && (a_59 != h_59)))
                            _fail(h_59);
                          else
                            a_59 = h_59;
                        }
                      }
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
        ATerm j_59 = NULL;
        t = term_f_9;
        {
          j_59 = t;
          if(((i_59 != NULL) && (i_59 != j_59)))
            _fail(j_59);
          else
            i_59 = j_59;
        }
      }
      t = a_14;
      {
        t = SSL_mkterm(not_null(i_59), not_null(a_59));
        {
          n_59 = t;
          t = not_null(n_59);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm c_60 = NULL;
  ATerm e_60 = NULL,f_60 = NULL;
  c_60 = t;
  {
    ATerm g_60 = NULL;
    ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
    t = not_null(c_60);
    {
      g_60 = t;
      {
        t = SSL_explode_term(not_null(g_60));
        {
          i_60 = t;
          z_59 :
          if(match_cons(i_60, sym__2))
            {
              j_60 = ATgetArgument(i_60, 0);
              k_60 = ATgetArgument(i_60, 1);
              a_60 :
              if(match_string(j_60, ""))
                {
                  b_60 :
                  if(((ATgetType(k_60) == AT_LIST) && !(ATisEmpty(k_60))))
                    {
                      l_60 = ATgetFirst((ATermList) k_60);
                      m_60 = (ATerm) ATgetNext((ATermList) k_60);
                      {
                        if(((f_60 != NULL) && (f_60 != l_60)))
                          _fail(l_60);
                        else
                          f_60 = l_60;
                        if(((e_60 != NULL) && (e_60 != m_60)))
                          _fail(m_60);
                        else
                          e_60 = m_60;
                      }
                    }
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
    t = not_null(f_60);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm e_89 (ATerm))
{
  ATerm g_61 = NULL,i_61 = NULL,k_61 = NULL;
  ATerm m_61 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_61 = NULL,e_61 = NULL;
        ATerm d_14;
        d_14 = t;
        {
          ATerm d_61 = NULL;
          t = map_1(t, Fst_0);
          {
            t = e_89(t);
            {
              d_61 = t;
              if(((c_61 != NULL) && (c_61 != d_61)))
                _fail(d_61);
              else
                c_61 = d_61;
            }
          }
        }
        t = d_14;
        {
          ATerm f_61 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = m_61(t);
            {
              f_61 = t;
              if(((e_61 != NULL) && (e_61 != f_61)))
                _fail(f_61);
              else
                e_61 = f_61;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(e_61)), not_null(c_61));
        }
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = m_61(t);
  {
    ATerm e_14;
    e_14 = t;
    {
      ATerm h_61 = NULL;
      h_61 = t;
      if(((g_61 != NULL) && (g_61 != h_61)))
        _fail(h_61);
      else
        g_61 = h_61;
    }
    t = e_14;
    {
      ATerm h_14;
      h_14 = t;
      {
        ATerm j_61 = NULL;
        t = term_f_9;
        {
          j_61 = t;
          if(((i_61 != NULL) && (i_61 != j_61)))
            _fail(j_61);
          else
            i_61 = j_61;
        }
      }
      t = h_14;
      {
        t = SSL_mkterm(not_null(i_61), not_null(g_61));
        {
          k_61 = t;
          t = not_null(k_61);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm w_61 = NULL;
  ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL;
  w_61 = t;
  {
    ATerm l_62 = NULL;
    ATerm m_62 = NULL;
    t = new_0(t);
    {
      l_62 = t;
      {
        if(((y_61 != NULL) && (y_61 != l_62)))
          _fail(l_62);
        else
          y_61 = l_62;
        {
          ATerm n_62 = NULL;
          t = new_0(t);
          {
            m_62 = t;
            {
              if(((z_61 != NULL) && (z_61 != m_62)))
                _fail(m_62);
              else
                z_61 = m_62;
              {
                t = new_0(t);
                {
                  n_62 = t;
                  if(((a_62 != NULL) && (a_62 != n_62)))
                    _fail(n_62);
                  else
                    a_62 = n_62;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_61)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_61)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_61)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_62))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(y_61), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_11), term_j_11)), not_null(z_61), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_61)), not_null(a_62), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_62)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL;
  x_62 = t;
  w_62 :
  if(match_cons(x_62, sym__2))
    {
      y_62 = ATgetArgument(x_62, 0);
      z_62 = ATgetArgument(x_62, 1);
      {
        ATerm k_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(y_62), not_null(z_62));
            LocalPopChoice(o_14);
          }
        else
          {
            t = k_14;
            t = SSL_subtr(not_null(y_62), not_null(z_62));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm f_96 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
    x_64 = t;
    y_63 :
    if(match_cons(x_64, sym__2))
      {
        y_64 = ATgetArgument(x_64, 0);
        z_64 = ATgetArgument(x_64, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(y_64), not_null(z_64), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
    c_65 = t;
    a_64 :
    if(match_cons(c_65, sym__3))
      {
        d_65 = ATgetArgument(c_65, 0);
        e_65 = ATgetArgument(c_65, 1);
        f_65 = ATgetArgument(c_65, 2);
        b_64 :
        if(match_int(d_65, 0))
          {
            t = not_null(f_65);
          }
        else
          {
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
    ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL;
    i_65 = t;
    k_64 :
    if(match_cons(i_65, sym__3))
      {
        j_65 = ATgetArgument(i_65, 0);
        k_65 = ATgetArgument(i_65, 1);
        l_65 = ATgetArgument(i_65, 2);
        {
          ATerm m_66 = NULL,o_66 = NULL;
          ATerm p_14;
          p_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_65), term_g_6);
            t = geq_0(t);
          }
          t = p_14;
          {
            ATerm q_14;
            q_14 = t;
            {
              ATerm n_66 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_65), term_g_6);
              {
                t = subt_0(t);
                {
                  n_66 = t;
                  if(((m_66 != NULL) && (m_66 != n_66)))
                    _fail(n_66);
                  else
                    m_66 = n_66;
                }
              }
            }
            t = q_14;
            {
              ATerm p_66 = NULL;
              t = not_null(k_65);
              {
                t = f_96(t);
                {
                  p_66 = t;
                  if(((o_66 != NULL) && (o_66 != p_66)))
                    _fail(p_66);
                  else
                    o_66 = p_66;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(m_66), not_null(k_65), (ATerm) ATinsert(CheckATermList(not_null(l_65)), not_null(o_66)));
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
  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
  v_69 = t;
  u_69 :
  if(match_cons(v_69, sym__2))
    {
      w_69 = ATgetArgument(v_69, 0);
      x_69 = ATgetArgument(v_69, 1);
      {
        ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL;
        ATerm d_70 = NULL;
        ATerm e_70 = NULL;
        t = new_0(t);
        {
          d_70 = t;
          {
            if(((a_70 != NULL) && (a_70 != d_70)))
              _fail(d_70);
            else
              a_70 = d_70;
            {
              ATerm f_70 = NULL;
              t = new_0(t);
              {
                e_70 = t;
                {
                  if(((b_70 != NULL) && (b_70 != e_70)))
                    _fail(e_70);
                  else
                    b_70 = e_70;
                  {
                    t = new_0(t);
                    {
                      f_70 = t;
                      if(((c_70 != NULL) && (c_70 != f_70)))
                        _fail(f_70);
                      else
                        c_70 = f_70;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_70)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_70)))), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_70))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(a_70), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_11), term_j_11)), not_null(b_70), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_70)), not_null(c_70), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_70)));
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
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
  n_70 = t;
  l_70 :
  if(match_cons(n_70, sym__2))
    {
      o_70 = ATgetArgument(n_70, 0);
      p_70 = ATgetArgument(n_70, 1);
      m_70 :
      if(((ATgetType(p_70) == AT_LIST) && ATisEmpty(p_70)))
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
ATerm zipr_1 (ATerm t, ATerm w_89 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, w_89);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL;
  t_70 = t;
  s_70 :
  if(((ATgetType(t_70) == AT_LIST) && !(ATisEmpty(t_70))))
    {
      u_70 = ATgetFirst((ATermList) t_70);
      v_70 = (ATerm) ATgetNext((ATermList) t_70);
      t = not_null(v_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL;
  b_71 = t;
  z_70 :
  if(((ATgetType(b_71) == AT_LIST) && !(ATisEmpty(b_71))))
    {
      c_71 = ATgetFirst((ATermList) b_71);
      d_71 = (ATerm) ATgetNext((ATermList) b_71);
      a_71 :
      if(((ATgetType(d_71) == AT_LIST) && ATisEmpty(d_71)))
        {
          t = not_null(c_71);
        }
      else
        {
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
  ATerm r_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(v_14);
    }
  else
    {
      t = r_14;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL;
  ATerm q_74 (ATerm t)
  {
    ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,j_73 = NULL;
    ATerm w_14;
    w_14 = t;
    {
      ATerm q_72 = NULL,s_72 = NULL,x_72 = NULL,y_72 = NULL;
      ATerm r_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_72), term_g_6);
      {
        t = add_0(t);
        {
          r_72 = t;
          if(((q_72 != NULL) && (q_72 != r_72)))
            _fail(r_72);
          else
            q_72 = r_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_72), term_x_14);
        {
          t = copy_1(t, new_0);
          {
            s_72 = t;
            r_71 :
            if(((ATgetType(s_72) == AT_LIST) && !(ATisEmpty(s_72))))
              {
                x_72 = ATgetFirst((ATermList) s_72);
                y_72 = (ATerm) ATgetNext((ATermList) s_72);
                {
                  ATerm z_72 = NULL;
                  if(((i_72 != NULL) && (i_72 != x_72)))
                    _fail(x_72);
                  else
                    i_72 = x_72;
                  {
                    if(((j_72 != NULL) && (j_72 != y_72)))
                      _fail(y_72);
                    else
                      j_72 = y_72;
                    {
                      t = not_null(j_72);
                      {
                        ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL;
                        t = last_0(t);
                        {
                          z_72 = t;
                          {
                            if(((h_72 != NULL) && (h_72 != z_72)))
                              _fail(z_72);
                            else
                              h_72 = z_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_72)), not_null(i_72)), not_null(j_72));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    a_73 = t;
                                    q_71 :
                                    if(match_cons(a_73, sym__6))
                                      {
                                        b_73 = ATgetArgument(a_73, 0);
                                        c_73 = ATgetArgument(a_73, 1);
                                        f_73 = ATgetArgument(a_73, 2);
                                        g_73 = ATgetArgument(a_73, 3);
                                        h_73 = ATgetArgument(a_73, 4);
                                        i_73 = ATgetArgument(a_73, 5);
                                        {
                                          if(((k_72 != NULL) && (k_72 != b_73)))
                                            _fail(b_73);
                                          else
                                            k_72 = b_73;
                                          {
                                            if(((l_72 != NULL) && (l_72 != c_73)))
                                              _fail(c_73);
                                            else
                                              l_72 = c_73;
                                            {
                                              if(((m_72 != NULL) && (m_72 != f_73)))
                                                _fail(f_73);
                                              else
                                                m_72 = f_73;
                                              {
                                                if(((n_72 != NULL) && (n_72 != g_73)))
                                                  _fail(g_73);
                                                else
                                                  n_72 = g_73;
                                                {
                                                  if(((o_72 != NULL) && (o_72 != h_73)))
                                                    _fail(h_73);
                                                  else
                                                    o_72 = h_73;
                                                  if(((p_72 != NULL) && (p_72 != i_73)))
                                                    _fail(i_73);
                                                  else
                                                    p_72 = i_73;
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
    t = w_14;
    {
      ATerm k_73 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_72)), not_null(m_72)), not_null(j_72));
      {
        t = concat_0(t);
        {
          k_73 = t;
          if(((j_73 != NULL) && (j_73 != k_73)))
            _fail(k_73);
          else
            j_73 = k_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(c_72), term_a_15), not_null(l_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(j_73)), not_null(i_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_72), not_null(n_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_72), not_null(p_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(k_72))))));
    }
    return(t);
  }
  ATerm r_74 (ATerm t)
  {
    ATerm m_73 = NULL;
    ATerm n_73 = NULL;
    t = new_0(t);
    {
      n_73 = t;
      if(((m_73 != NULL) && (m_73 != n_73)))
        _fail(n_73);
      else
        m_73 = n_73;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(c_72), term_a_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_72), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_72), (ATerm) ATempty))), term_g_11))));
    return(t);
  }
  ATerm s_74 (ATerm t)
  {
    ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,o_74 = NULL;
    ATerm h_15;
    h_15 = t;
    {
      ATerm x_73 = NULL;
      ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL;
      t = new_0(t);
      {
        x_73 = t;
        {
          if(((q_73 != NULL) && (q_73 != x_73)))
            _fail(x_73);
          else
            q_73 = x_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_72), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_73)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  y_73 = t;
                  w_71 :
                  if(match_cons(y_73, sym__6))
                    {
                      z_73 = ATgetArgument(y_73, 0);
                      a_74 = ATgetArgument(y_73, 1);
                      b_74 = ATgetArgument(y_73, 2);
                      c_74 = ATgetArgument(y_73, 3);
                      d_74 = ATgetArgument(y_73, 4);
                      e_74 = ATgetArgument(y_73, 5);
                      {
                        if(((r_73 != NULL) && (r_73 != z_73)))
                          _fail(z_73);
                        else
                          r_73 = z_73;
                        {
                          if(((s_73 != NULL) && (s_73 != a_74)))
                            _fail(a_74);
                          else
                            s_73 = a_74;
                          {
                            if(((t_73 != NULL) && (t_73 != b_74)))
                              _fail(b_74);
                            else
                              t_73 = b_74;
                            {
                              if(((u_73 != NULL) && (u_73 != c_74)))
                                _fail(c_74);
                              else
                                u_73 = c_74;
                              {
                                if(((v_73 != NULL) && (v_73 != d_74)))
                                  _fail(d_74);
                                else
                                  v_73 = d_74;
                                if(((w_73 != NULL) && (w_73 != e_74)))
                                  _fail(e_74);
                                else
                                  w_73 = e_74;
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
    t = h_15;
    {
      ATerm p_74 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_73), not_null(v_73));
      {
        ATerm i_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = conc_two_lists_0(t);
            LocalPopChoice(q_15);
          }
        else
          {
            t = i_15;
            t = conc_more_lists_0(t);
          }
        {
          p_74 = t;
          if(((o_74 != NULL) && (o_74 != p_74)))
            _fail(p_74);
          else
            o_74 = p_74;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(c_72), term_r_15), not_null(s_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(o_74)), not_null(q_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_72), not_null(u_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(c_72), not_null(w_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(r_73))))));
    }
    return(t);
  }
  b_72 = t;
  y_71 :
  if(match_cons(b_72, sym__3))
    {
      c_72 = ATgetArgument(b_72, 0);
      d_72 = ATgetArgument(b_72, 1);
      e_72 = ATgetArgument(b_72, 2);
      z_71 :
      if(match_string(d_72, "T"))
        {
          a_72 :
          if(match_int(e_72, 0))
            {
              ATerm s_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_74(t);
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  t = r_74(t);
                }
            }
          else
            {
              t = q_74(t);
            }
        }
      else
        {
          if(match_string(d_72, "D"))
            {
              t = s_74(t);
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
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL;
  l_75 = t;
  i_75 :
  if(match_cons(l_75, sym__2))
    {
      m_75 = ATgetArgument(l_75, 0);
      r_75 = ATgetArgument(l_75, 1);
      j_75 :
      if(match_cons(m_75, sym__2))
        {
          n_75 = ATgetArgument(m_75, 0);
          q_75 = ATgetArgument(m_75, 1);
          k_75 :
          if(match_cons(n_75, sym_Mod_2))
            {
              o_75 = ATgetArgument(n_75, 0);
              p_75 = ATgetArgument(n_75, 1);
              {
                ATerm w_75 = NULL;
                ATerm x_75 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_75), not_null(p_75), not_null(q_75));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      x_75 = t;
                      if(((w_75 != NULL) && (w_75 != x_75)))
                        _fail(x_75);
                      else
                        w_75 = x_75;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_75), not_null(r_75));
              }
            }
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
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      {
        t = OverloadedDef_0(t);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm w_15 = t;
            int c_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = JoinDefs1_0(t);
                LocalPopChoice(c_16);
              }
            else
              {
                t = w_15;
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
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL,n_76 = NULL,o_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL;
  i_76 = t;
  b_76 :
  if(match_cons(i_76, sym__5))
    {
      j_76 = ATgetArgument(i_76, 0);
      o_76 = ATgetArgument(i_76, 1);
      r_76 = ATgetArgument(i_76, 2);
      s_76 = ATgetArgument(i_76, 3);
      t_76 = ATgetArgument(i_76, 4);
      h_76 :
      if(((ATgetType(j_76) == AT_LIST) && !(ATisEmpty(j_76))))
        {
          k_76 = ATgetFirst((ATermList) j_76);
          n_76 = (ATerm) ATgetNext((ATermList) j_76);
          t = (ATerm) ATmakeAppl(sym__5, not_null(n_76), not_null(o_76), not_null(r_76), not_null(s_76), (ATerm) ATinsert(CheckATermList(not_null(t_76)), not_null(k_76)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm v_94 (ATerm))
{
  ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL;
  d_77 = t;
  c_77 :
  if(match_cons(d_77, sym__2))
    {
      e_77 = ATgetArgument(d_77, 0);
      f_77 = ATgetArgument(d_77, 1);
      {
        t = not_null(e_77);
        {
          ATerm j_77 (ATerm t)
          {
            ATerm h_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(p_16);
              }
            else
              {
                t = h_16;
                {
                  ATerm q_16 = t;
                  int r_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = not_null(f_77);
                        return(t);
                      }
                      t = HdMember_p__2(t, v_94, o_2);
                      t = j_77(t);
                      LocalPopChoice(r_16);
                    }
                  else
                    {
                      t = q_16;
                      t = Cons_2(t, _id, j_77);
                    }
                }
              }
            return(t);
          }
          t = j_77(t);
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
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL;
  n_77 = t;
  l_77 :
  if(match_cons(n_77, sym__2))
    {
      o_77 = ATgetArgument(n_77, 0);
      p_77 = ATgetArgument(n_77, 1);
      m_77 :
      if(((ATgetType(p_77) == AT_LIST) && !(ATisEmpty(p_77))))
        {
          q_77 = ATgetFirst((ATermList) p_77);
          r_77 = (ATerm) ATgetNext((ATermList) p_77);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_77)), not_null(q_77)), not_null(r_77));
        }
      else
        {
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
  ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL;
  y_77 = t;
  x_77 :
  if(match_cons(y_77, sym__2))
    {
      z_77 = ATgetArgument(y_77, 0);
      a_78 = ATgetArgument(y_77, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_78)), not_null(z_77));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL;
  k_78 = t;
  f_78 :
  if(match_cons(k_78, sym__2))
    {
      l_78 = ATgetArgument(k_78, 0);
      o_78 = ATgetArgument(k_78, 1);
      g_78 :
      if(((ATgetType(l_78) == AT_LIST) && !(ATisEmpty(l_78))))
        {
          m_78 = ATgetFirst((ATermList) l_78);
          n_78 = (ATerm) ATgetNext((ATermList) l_78);
          j_78 :
          if(((ATgetType(o_78) == AT_LIST) && !(ATisEmpty(o_78))))
            {
              p_78 = ATgetFirst((ATermList) o_78);
              q_78 = (ATerm) ATgetNext((ATermList) o_78);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_78), not_null(p_78)), (ATerm) ATmakeAppl(sym__2, not_null(n_78), not_null(q_78)));
            }
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
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
  a_79 = t;
  x_78 :
  if(match_cons(a_79, sym__2))
    {
      b_79 = ATgetArgument(a_79, 0);
      c_79 = ATgetArgument(a_79, 1);
      y_78 :
      if(((ATgetType(b_79) == AT_LIST) && ATisEmpty(b_79)))
        {
          z_78 :
          if(((ATgetType(c_79) == AT_LIST) && ATisEmpty(c_79)))
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
ATerm genzip_4 (ATerm t, ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm r_89 (ATerm))
{
  ATerm e_79 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_89(t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        {
          t = p_89(t);
          {
            t = _2(t, r_89, e_79);
            t = q_89(t);
          }
        }
      }
    return(t);
  }
  t = e_79(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm t_89 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, t_89);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL;
  p_79 = t;
  n_79 :
  if(((ATgetType(p_79) == AT_LIST) && !(ATisEmpty(p_79))))
    {
      q_79 = ATgetFirst((ATermList) p_79);
      t_79 = (ATerm) ATgetNext((ATermList) p_79);
      o_79 :
      if(match_cons(q_79, sym__2))
        {
          r_79 = ATgetArgument(q_79, 0);
          s_79 = ATgetArgument(q_79, 1);
          {
            ATerm x_79 = NULL,y_79 = NULL,e_80 = NULL,k_80 = NULL;
            ATerm y_16;
            y_16 = t;
            {
              ATerm z_79 = NULL;
              ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
              t = not_null(s_79);
              {
                z_79 = t;
                {
                  t = SSL_explode_term(not_null(z_79));
                  {
                    b_80 = t;
                    i_79 :
                    if(match_cons(b_80, sym__2))
                      {
                        c_80 = ATgetArgument(b_80, 0);
                        d_80 = ATgetArgument(b_80, 1);
                        {
                          if(((x_79 != NULL) && (x_79 != c_80)))
                            _fail(c_80);
                          else
                            x_79 = c_80;
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
            t = y_16;
            {
              ATerm z_16;
              z_16 = t;
              {
                ATerm f_80 = NULL;
                ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
                t = not_null(r_79);
                {
                  f_80 = t;
                  {
                    t = SSL_explode_term(not_null(f_80));
                    {
                      h_80 = t;
                      l_79 :
                      if(match_cons(h_80, sym__2))
                        {
                          i_80 = ATgetArgument(h_80, 0);
                          j_80 = ATgetArgument(h_80, 1);
                          {
                            if(((x_79 != NULL) && (x_79 != i_80)))
                              _fail(i_80);
                            else
                              x_79 = i_80;
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
              t = z_16;
              {
                ATerm l_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_80), not_null(y_79));
                {
                  t = zip_1(t, _id);
                  {
                    l_80 = t;
                    if(((k_80 != NULL) && (k_80 != l_80)))
                      _fail(l_80);
                    else
                      k_80 = l_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_80), not_null(t_79));
                  {
                    ATerm a_17 = t;
                    int i_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(i_17);
                      }
                    else
                      {
                        t = a_17;
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
  ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL;
  v_80 = t;
  t_80 :
  if(((ATgetType(v_80) == AT_LIST) && !(ATisEmpty(v_80))))
    {
      w_80 = ATgetFirst((ATermList) v_80);
      z_80 = (ATerm) ATgetNext((ATermList) v_80);
      u_80 :
      if(match_cons(w_80, sym__2))
        {
          x_80 = ATgetArgument(w_80, 0);
          y_80 = ATgetArgument(w_80, 1);
          {
            ATerm b_81 = NULL;
            if(((x_80 != NULL) && (x_80 != y_80)))
              _fail(y_80);
            else
              x_80 = y_80;
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
ATerm diff_0 (ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        ATerm e_81 = NULL;
        e_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(e_81));
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              ATerm u_17 = t;
              int v_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(v_17);
                }
              else
                {
                  t = u_17;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, s_2);
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, p_2, q_2, r_2);
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm j_112 (ATerm))
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL;
  r_81 = t;
  p_81 :
  if(match_cons(r_81, sym__5))
    {
      s_81 = ATgetArgument(r_81, 0);
      v_81 = ATgetArgument(r_81, 1);
      w_81 = ATgetArgument(r_81, 2);
      x_81 = ATgetArgument(r_81, 3);
      y_81 = ATgetArgument(r_81, 4);
      q_81 :
      if(((ATgetType(s_81) == AT_LIST) && !(ATisEmpty(s_81))))
        {
          t_81 = ATgetFirst((ATermList) s_81);
          u_81 = (ATerm) ATgetNext((ATermList) s_81);
          {
            ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,o_82 = NULL,q_82 = NULL,s_82 = NULL;
            ATerm g_18;
            g_18 = t;
            {
              ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_81), not_null(w_81));
              {
                t = h_112(t);
                {
                  j_82 = t;
                  l_81 :
                  if(match_cons(j_82, sym__2))
                    {
                      k_82 = ATgetArgument(j_82, 0);
                      l_82 = ATgetArgument(j_82, 1);
                      {
                        ATerm m_82 = NULL;
                        if(((g_82 != NULL) && (g_82 != k_82)))
                          _fail(k_82);
                        else
                          g_82 = k_82;
                        {
                          if(((f_82 != NULL) && (f_82 != l_82)))
                            _fail(l_82);
                          else
                            f_82 = l_82;
                          {
                            t = not_null(g_82);
                            {
                              ATerm n_82 = NULL;
                              t = i_112(t);
                              {
                                m_82 = t;
                                {
                                  if(((h_82 != NULL) && (h_82 != m_82)))
                                    _fail(m_82);
                                  else
                                    h_82 = m_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_82), not_null(v_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        n_82 = t;
                                        if(((i_82 != NULL) && (i_82 != n_82)))
                                          _fail(n_82);
                                        else
                                          i_82 = n_82;
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
            t = g_18;
            {
              ATerm i_18;
              i_18 = t;
              {
                ATerm p_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_82), not_null(u_81));
                {
                  ATerm j_18 = t;
                  int k_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = conc_two_lists_0(t);
                      LocalPopChoice(k_18);
                    }
                  else
                    {
                      t = j_18;
                      t = conc_more_lists_0(t);
                    }
                  {
                    p_82 = t;
                    if(((o_82 != NULL) && (o_82 != p_82)))
                      _fail(p_82);
                    else
                      o_82 = p_82;
                  }
                }
              }
              t = i_18;
              {
                ATerm l_18;
                l_18 = t;
                {
                  ATerm r_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_82), not_null(v_81));
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
                      r_82 = t;
                      if(((q_82 != NULL) && (q_82 != r_82)))
                        _fail(r_82);
                      else
                        q_82 = r_82;
                    }
                  }
                }
                t = l_18;
                {
                  ATerm t_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(t_81), not_null(g_82), not_null(x_81));
                  {
                    t = j_112(t);
                    {
                      t_82 = t;
                      if(((s_82 != NULL) && (s_82 != t_82)))
                        _fail(t_82);
                      else
                        s_82 = t_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(o_82), not_null(q_82), not_null(f_82), not_null(s_82), not_null(y_81));
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
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL;
  e_83 = t;
  c_83 :
  if(match_cons(e_83, sym__5))
    {
      f_83 = ATgetArgument(e_83, 0);
      g_83 = ATgetArgument(e_83, 1);
      h_83 = ATgetArgument(e_83, 2);
      i_83 = ATgetArgument(e_83, 3);
      j_83 = ATgetArgument(e_83, 4);
      d_83 :
      if(((ATgetType(f_83) == AT_LIST) && ATisEmpty(f_83)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_83), not_null(j_83));
        }
      else
        {
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
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL;
  r_83 = t;
  q_83 :
  if(match_cons(r_83, sym__3))
    {
      s_83 = ATgetArgument(r_83, 0);
      t_83 = ATgetArgument(r_83, 1);
      u_83 = ATgetArgument(r_83, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(s_83), not_null(s_83), not_null(t_83), not_null(u_83), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm n_101 (ATerm), ATerm o_101 (ATerm))
{
  ATerm z_83 (ATerm t)
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_101(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        {
          t = o_101(t);
          t = z_83(t);
        }
      }
    return(t);
  }
  t = z_83(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm))
{
  t = q_101(t);
  t = while_not_2(t, r_101, s_101);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm u_111 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm v_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, s_111, t_111, u_111);
        LocalPopChoice(x_18);
      }
    else
      {
        t = v_18;
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
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefinitionExists_0(t);
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
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
    ATerm i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL;
    i_84 = t;
    e_84 :
    if(match_cons(i_84, sym__3))
      {
        j_84 = ATgetArgument(i_84, 0);
        k_84 = ATgetArgument(i_84, 1);
        l_84 = ATgetArgument(i_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(l_84)), not_null(k_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, u_2, v_2);
  {
    ATerm f_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = f_19;
        {
          t = MissingDefs_0(t);
          {
            t = term_g_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm q_112 (ATerm))
{
  ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL;
  x_84 = t;
  t_84 :
  if(match_cons(x_84, sym__2))
    {
      y_84 = ATgetArgument(x_84, 0);
      z_84 = ATgetArgument(x_84, 1);
      {
        ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL;
        ATerm i_19;
        i_19 = t;
        {
          ATerm f_85 = NULL;
          ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL;
          t = q_112(t);
          {
            f_85 = t;
            {
              if(((c_85 != NULL) && (c_85 != f_85)))
                _fail(f_85);
              else
                c_85 = f_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_85), not_null(y_84), not_null(z_84));
                {
                  t = table_push_0(t);
                  {
                    ATerm j_19 = t;
                    int k_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_85), term_l_19);
                        t = table_get_0(t);
                        LocalPopChoice(k_19);
                      }
                    else
                      {
                        t = j_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      g_85 = t;
                      s_84 :
                      if(((ATgetType(g_85) == AT_LIST) && !(ATisEmpty(g_85))))
                        {
                          h_85 = ATgetFirst((ATermList) g_85);
                          i_85 = (ATerm) ATgetNext((ATermList) g_85);
                          {
                            if(((d_85 != NULL) && (d_85 != h_85)))
                              _fail(h_85);
                            else
                              d_85 = h_85;
                            {
                              if(((e_85 != NULL) && (e_85 != i_85)))
                                _fail(i_85);
                              else
                                e_85 = i_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_85), term_l_19, (ATerm) ATinsert(CheckATermList(not_null(e_85)), (ATerm) ATinsert(CheckATermList(not_null(d_85)), not_null(y_84))));
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
        t = i_19;
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
ATerm HdMember_p__2 (ATerm t, ATerm d_95 (ATerm), ATerm e_95 (ATerm))
{
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL;
  w_85 = t;
  v_85 :
  if(((ATgetType(w_85) == AT_LIST) && !(ATisEmpty(w_85))))
    {
      x_85 = ATgetFirst((ATermList) w_85);
      y_85 = (ATerm) ATgetNext((ATermList) w_85);
      {
        t = e_95(t);
        {
          ATerm x_2 (ATerm t)
          {
            ATerm b_86 = NULL;
            b_86 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_85), not_null(b_86));
              t = d_95(t);
            }
            return(t);
          }
          t = fetch_1(t, x_2);
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
ATerm union_1 (ATerm t, ATerm z_94 (ATerm))
{
  ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL;
  h_86 = t;
  g_86 :
  if(match_cons(h_86, sym__2))
    {
      i_86 = ATgetArgument(h_86, 0);
      j_86 = ATgetArgument(h_86, 1);
      {
        t = not_null(i_86);
        {
          ATerm p_86 (ATerm t)
          {
            ATerm o_19 = t;
            int p_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(j_86);
                LocalPopChoice(p_19);
              }
            else
              {
                t = o_19;
                {
                  ATerm q_19 = t;
                  int r_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_2 (ATerm t)
                      {
                        t = not_null(j_86);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_94, y_2);
                      t = p_86(t);
                      LocalPopChoice(r_19);
                    }
                  else
                    {
                      t = q_19;
                      t = Cons_2(t, _id, p_86);
                    }
                }
              }
            return(t);
          }
          t = p_86(t);
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
  ATerm u_86 = NULL;
  ATerm x_86 = NULL;
  u_86 = t;
  {
    ATerm y_86 = NULL,z_86 = NULL,c_87 = NULL;
    t = not_null(u_86);
    {
      ATerm z_2 (ATerm t)
      {
        t = term_w_19;
        return(t);
      }
      t = rewrite_1(t, z_2);
      {
        y_86 = t;
        s_86 :
        if(match_cons(y_86, sym_Defined_2))
          {
            z_86 = ATgetArgument(y_86, 0);
            c_87 = ATgetArgument(y_86, 1);
            t_86 :
            if(match_string(z_86, "f_0"))
              {
                if(((x_86 != NULL) && (x_86 != c_87)))
                  _fail(c_87);
                else
                  x_86 = c_87;
              }
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
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL;
  h_87 = t;
  g_87 :
  if(((ATgetType(h_87) == AT_LIST) && !(ATisEmpty(h_87))))
    {
      i_87 = ATgetFirst((ATermList) h_87);
      j_87 = (ATerm) ATgetNext((ATermList) h_87);
      t = not_null(i_87);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL;
  o_87 = t;
  n_87 :
  if(match_cons(o_87, sym__2))
    {
      p_87 = ATgetArgument(o_87, 0);
      q_87 = ATgetArgument(o_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_87), not_null(q_87));
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
ATerm rewrite_1 (ATerm t, ATerm s_112 (ATerm))
{
  ATerm w_87 = NULL;
  ATerm y_87 = NULL;
  w_87 = t;
  {
    ATerm z_87 = NULL;
    t = term_x_14;
    {
      t = s_112(t);
      {
        z_87 = t;
        if(((y_87 != NULL) && (y_87 != z_87)))
          _fail(z_87);
        else
          y_87 = z_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_87), not_null(w_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm i_88 = NULL,j_88 = NULL,k_88 = NULL;
  i_88 = t;
  h_88 :
  if(match_cons(i_88, sym__2))
    {
      j_88 = ATgetArgument(i_88, 0);
      k_88 = ATgetArgument(i_88, 1);
      {
        ATerm q_88 = NULL,r_88 = NULL;
        ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL,v_88 = NULL;
        t = not_null(i_88);
        {
          ATerm a_3 (ATerm t)
          {
            t = term_x_19;
            return(t);
          }
          t = rewrite_1(t, a_3);
          {
            s_88 = t;
            f_88 :
            if(match_cons(s_88, sym_Defined_3))
              {
                t_88 = ATgetArgument(s_88, 0);
                u_88 = ATgetArgument(s_88, 1);
                v_88 = ATgetArgument(s_88, 2);
                g_88 :
                if(match_string(t_88, "b_0"))
                  {
                    if(((q_88 != NULL) && (q_88 != u_88)))
                      _fail(u_88);
                    else
                      q_88 = u_88;
                    if(((r_88 != NULL) && (r_88 != v_88)))
                      _fail(v_88);
                    else
                      r_88 = v_88;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(r_88)), not_null(q_88));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm))
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_95(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm c_89 = NULL,d_89 = NULL,g_89 = NULL;
        c_89 = t;
        b_89 :
        if(((ATgetType(c_89) == AT_LIST) && !(ATisEmpty(c_89))))
          {
            d_89 = ATgetFirst((ATermList) c_89);
            g_89 = (ATerm) ATgetNext((ATermList) c_89);
            {
              ATerm j_89 = NULL,l_89 = NULL;
              ATerm a_20;
              a_20 = t;
              {
                ATerm k_89 = NULL;
                t = not_null(d_89);
                {
                  t = u_95(t);
                  {
                    k_89 = t;
                    if(((j_89 != NULL) && (j_89 != k_89)))
                      _fail(k_89);
                    else
                      j_89 = k_89;
                  }
                }
              }
              t = a_20;
              {
                ATerm m_89 = NULL;
                t = not_null(g_89);
                {
                  t = foldr_3(t, s_95, t_95, u_95);
                  {
                    m_89 = t;
                    if(((l_89 != NULL) && (l_89 != m_89)))
                      _fail(m_89);
                    else
                      l_89 = m_89;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_89), not_null(l_89));
                  t = t_95(t);
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
  ATerm b_3 (ATerm t)
  {
    t = term_b_20;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_g_6;
    return(t);
  }
  t = foldr_3(t, b_3, add_0, c_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL;
    e_90 = t;
    d_90 :
    if(match_cons(e_90, sym_SDef_3))
      {
        f_90 = ATgetArgument(e_90, 0);
        g_90 = ATgetArgument(e_90, 1);
        h_90 = ATgetArgument(e_90, 2);
        {
          ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL;
          ATerm c_20;
          c_20 = t;
          {
            ATerm p_90 = NULL;
            t = not_null(g_90);
            {
              ATerm q_90 = NULL;
              t = length_0(t);
              {
                p_90 = t;
                {
                  if(((n_90 != NULL) && (n_90 != p_90)))
                    _fail(p_90);
                  else
                    n_90 = p_90;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_90), not_null(n_90));
                    {
                      ATerm r_90 = NULL,t_90 = NULL;
                      ATerm d_20 = t;
                      int i_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(i_20);
                        }
                      else
                        {
                          t = d_20;
                          t = (ATerm) ATempty;
                        }
                      {
                        q_90 = t;
                        {
                          if(((m_90 != NULL) && (m_90 != q_90)))
                            _fail(q_90);
                          else
                            m_90 = q_90;
                          {
                            ATerm s_90 = NULL;
                            t = not_null(f_90);
                            {
                              ATerm j_20 = t;
                              int k_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(k_20);
                                }
                              else
                                {
                                  t = j_20;
                                  t = (ATerm) ATempty;
                                }
                              {
                                s_90 = t;
                                if(((r_90 != NULL) && (r_90 != s_90)))
                                  _fail(s_90);
                                else
                                  r_90 = s_90;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(n_90)), not_null(r_90));
                              {
                                t = union_1(t, eq_0);
                                {
                                  t_90 = t;
                                  {
                                    if(((o_90 != NULL) && (o_90 != t_90)))
                                      _fail(t_90);
                                    else
                                      o_90 = t_90;
                                    {
                                      ATerm o_20;
                                      o_20 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(f_90), not_null(n_90)), (ATerm) ATmakeAppl(sym_Defined_3, term_q_20, not_null(e_90), not_null(m_90)));
                                        {
                                          ATerm e_3 (ATerm t)
                                          {
                                            t = term_x_19;
                                            return(t);
                                          }
                                          t = assert_1(t, e_3);
                                        }
                                      }
                                      t = o_20;
                                      {
                                        ATerm t_20;
                                        t_20 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_90), (ATerm) ATmakeAppl(sym_Defined_2, term_u_20, not_null(o_90)));
                                          {
                                            ATerm f_3 (ATerm t)
                                            {
                                              t = term_w_19;
                                              return(t);
                                            }
                                            t = assert_1(t, f_3);
                                          }
                                        }
                                        t = t_20;
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
          t = c_20;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, d_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm b_91 = NULL;
  ATerm e_91 = NULL;
  t = sort_defs_0(t);
  {
    e_91 = t;
    if(((b_91 != NULL) && (b_91 != e_91)))
      _fail(e_91);
    else
      b_91 = e_91;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_w_20), not_null(b_91), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm n_91 = NULL,o_91 = NULL;
  n_91 = t;
  k_91 :
  if(match_cons(n_91, sym_Strategies_1))
    {
      o_91 = ATgetArgument(n_91, 0);
      {
        ATerm t_91 = NULL,v_91 = NULL;
        ATerm u_91 = NULL;
        t = SSLgetAnnotations(not_null(n_91));
        {
          u_91 = t;
          if(((t_91 != NULL) && (t_91 != u_91)))
            _fail(u_91);
          else
            t_91 = u_91;
        }
        {
          t = not_null(o_91);
          {
            ATerm x_91 = NULL;
            t = e_75(t);
            {
              v_91 = t;
              {
                ATerm y_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(v_91)), not_null(t_91));
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
ATerm Cons_2 (ATerm t, ATerm t_72 (ATerm), ATerm u_72 (ATerm))
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
  j_92 = t;
  i_92 :
  if(((ATgetType(j_92) == AT_LIST) && !(ATisEmpty(j_92))))
    {
      k_92 = ATgetFirst((ATermList) j_92);
      l_92 = (ATerm) ATgetNext((ATermList) j_92);
      {
        ATerm p_92 = NULL,r_92 = NULL;
        ATerm q_92 = NULL;
        t = SSLgetAnnotations(not_null(j_92));
        {
          q_92 = t;
          if(((p_92 != NULL) && (p_92 != q_92)))
            _fail(q_92);
          else
            p_92 = q_92;
        }
        {
          t = not_null(k_92);
          {
            ATerm t_92 = NULL;
            t = t_72(t);
            {
              r_92 = t;
              {
                t = not_null(l_92);
                {
                  ATerm v_92 = NULL;
                  t = u_72(t);
                  {
                    t_92 = t;
                    {
                      ATerm w_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_92)), not_null(r_92)), not_null(p_92));
                      {
                        w_92 = t;
                        if(((v_92 != NULL) && (v_92 != w_92)))
                          _fail(w_92);
                        else
                          v_92 = w_92;
                      }
                      t = not_null(v_92);
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
ATerm Specification_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm h_93 = NULL,i_93 = NULL;
  h_93 = t;
  g_93 :
  if(match_cons(h_93, sym_Specification_1))
    {
      i_93 = ATgetArgument(h_93, 0);
      {
        ATerm l_93 = NULL,n_93 = NULL;
        ATerm m_93 = NULL;
        t = SSLgetAnnotations(not_null(h_93));
        {
          m_93 = t;
          if(((l_93 != NULL) && (l_93 != m_93)))
            _fail(m_93);
          else
            l_93 = m_93;
        }
        {
          t = not_null(i_93);
          {
            ATerm p_93 = NULL;
            t = g_75(t);
            {
              n_93 = t;
              {
                ATerm q_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(n_93)), not_null(l_93));
                {
                  q_93 = t;
                  if(((p_93 != NULL) && (p_93 != q_93)))
                    _fail(q_93);
                  else
                    p_93 = q_93;
                }
                t = not_null(p_93);
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
ATerm _2 (ATerm t, ATerm k_71 (ATerm), ATerm l_71 (ATerm))
{
  ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL;
  b_94 = t;
  a_94 :
  if(match_cons(b_94, sym__2))
    {
      c_94 = ATgetArgument(b_94, 0);
      d_94 = ATgetArgument(b_94, 1);
      {
        ATerm h_94 = NULL,j_94 = NULL;
        ATerm i_94 = NULL;
        t = SSLgetAnnotations(not_null(b_94));
        {
          i_94 = t;
          if(((h_94 != NULL) && (h_94 != i_94)))
            _fail(i_94);
          else
            h_94 = i_94;
        }
        {
          t = not_null(c_94);
          {
            ATerm l_94 = NULL;
            t = k_71(t);
            {
              j_94 = t;
              {
                t = not_null(d_94);
                {
                  ATerm n_94 = NULL;
                  t = l_71(t);
                  {
                    l_94 = t;
                    {
                      ATerm t_94 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_94), not_null(l_94)), not_null(h_94));
                      {
                        t_94 = t;
                        if(((n_94 != NULL) && (n_94 != t_94)))
                          _fail(t_94);
                        else
                          n_94 = t_94;
                      }
                      t = not_null(n_94);
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
  ATerm i_95 = NULL;
  ATerm x_20;
  x_20 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm j_95 = NULL,k_95 = NULL;
      j_95 = t;
      h_95 :
      if(match_cons(j_95, sym_Program_1))
        {
          k_95 = ATgetArgument(j_95, 0);
          if(((i_95 != NULL) && (i_95 != k_95)))
            _fail(k_95);
          else
            i_95 = k_95;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, g_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_20), not_null(i_95)), term_y_20));
      {
        t = printnl_0(t);
        {
          t = term_g_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL,v_95 = NULL;
  o_95 = t;
  n_95 :
  if(match_cons(o_95, sym__2))
    {
      p_95 = ATgetArgument(o_95, 0);
      v_95 = ATgetArgument(o_95, 1);
      {
        ATerm a_21;
        a_21 = t;
        t = SSL_printnl(not_null(p_95), not_null(v_95));
        t = a_21;
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
  ATerm a_96 = NULL;
  a_96 = t;
  t = SSL_implode_string(not_null(a_96));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      {
        ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL;
        h_96 = t;
        g_96 :
        if(((ATgetType(h_96) == AT_LIST) && !(ATisEmpty(h_96))))
          {
            i_96 = ATgetFirst((ATermList) h_96);
            j_96 = (ATerm) ATgetNext((ATermList) h_96);
            {
              t = not_null(i_96);
              {
                ATerm j_3 (ATerm t)
                {
                  t = not_null(j_96);
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
  ATerm t_96 = NULL;
  ATerm v_96 = NULL;
  t_96 = t;
  {
    ATerm w_96 = NULL;
    ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
    t = not_null(t_96);
    {
      w_96 = t;
      {
        t = SSL_explode_term(not_null(w_96));
        {
          y_96 = t;
          r_96 :
          if(match_cons(y_96, sym__2))
            {
              z_96 = ATgetArgument(y_96, 0);
              a_97 = ATgetArgument(y_96, 1);
              s_96 :
              if(match_string(z_96, ""))
                {
                  if(((v_96 != NULL) && (v_96 != a_97)))
                    _fail(a_97);
                  else
                    v_96 = a_97;
                }
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
      t = not_null(v_96);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm e_97 (ATerm t)
  {
    ATerm e_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_97);
        LocalPopChoice(g_21);
      }
    else
      {
        t = e_21;
        {
          t = Nil_0(t);
          t = r_91(t);
        }
      }
    return(t);
  }
  t = e_97(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_97 = NULL,i_97 = NULL,j_97 = NULL;
  h_97 = t;
  g_97 :
  if(match_cons(h_97, sym__2))
    {
      i_97 = ATgetArgument(h_97, 0);
      j_97 = ATgetArgument(h_97, 1);
      {
        t = not_null(i_97);
        {
          ATerm k_3 (ATerm t)
          {
            t = not_null(j_97);
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
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_97 = NULL;
  o_97 = t;
  t = SSL_explode_string(not_null(o_97));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
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
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_104 (ATerm))
{
  ATerm u_21;
  u_21 = t;
  {
    ATerm t_97 = NULL,v_97 = NULL;
    ATerm v_21;
    v_21 = t;
    {
      ATerm u_97 = NULL;
      t = t_104(t);
      {
        u_97 = t;
        if(((t_97 != NULL) && (t_97 != u_97)))
          _fail(u_97);
        else
          t_97 = u_97;
      }
    }
    t = v_21;
    {
      ATerm w_97 = NULL;
      w_97 = t;
      if(((v_97 != NULL) && (v_97 != w_97)))
        _fail(w_97);
      else
        v_97 = w_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_97)), not_null(t_97)));
        t = printnl_0(t);
      }
    }
  }
  t = u_21;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_98 = NULL;
  a_98 = t;
  t = SSL_is_string(not_null(a_98));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm q_22 = t;
              int v_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(v_22);
                }
              else
                {
                  t = q_22;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, l_3);
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            {
              ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL;
              j_98 = t;
              i_98 :
              if(match_cons(j_98, sym_Path_1))
                {
                  k_98 = ATgetArgument(j_98, 0);
                  t = not_null(k_98);
                }
              else
                {
                  if(match_cons(j_98, sym_Var_1))
                    {
                      k_98 = ATgetArgument(j_98, 0);
                      {
                        t = not_null(k_98);
                        {
                          ATerm w_22 = t;
                          int x_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(x_22);
                            }
                          else
                            {
                              t = w_22;
                              {
                                ATerm m_3 (ATerm t)
                                {
                                  t = term_y_22;
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
                      if(match_cons(j_98, sym_Prefix_2))
                        {
                          k_98 = ATgetArgument(j_98, 0);
                          l_98 = ATgetArgument(j_98, 1);
                          {
                            ATerm q_98 = NULL,s_98 = NULL;
                            ATerm z_22;
                            z_22 = t;
                            {
                              ATerm r_98 = NULL;
                              t = not_null(k_98);
                              {
                                t = eval_config_0(t);
                                {
                                  r_98 = t;
                                  if(((q_98 != NULL) && (q_98 != r_98)))
                                    _fail(r_98);
                                  else
                                    q_98 = r_98;
                                }
                              }
                            }
                            t = z_22;
                            {
                              ATerm t_98 = NULL;
                              t = not_null(l_98);
                              {
                                t = eval_config_0(t);
                                {
                                  t_98 = t;
                                  if(((s_98 != NULL) && (s_98 != t_98)))
                                    _fail(t_98);
                                  else
                                    s_98 = t_98;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_98), not_null(s_98));
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
  ATerm g_99 = NULL;
  g_99 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_23, not_null(g_99));
    {
      t = table_get_0(t);
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm d_23;
              d_23 = t;
              {
                ATerm i_99 = NULL;
                ATerm j_99 = NULL;
                j_99 = t;
                if(((i_99 != NULL) && (i_99 != j_99)))
                  _fail(j_99);
                else
                  i_99 = j_99;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_23, not_null(g_99), not_null(i_99));
                  t = table_put_0(t);
                }
              }
              t = d_23;
            }
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_107 (ATerm))
{
  ATerm e_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_23;
      l_23 = t;
      {
        ATerm n_99 = NULL;
        ATerm o_99 = NULL;
        t = term_m_23;
        {
          t = get_config_0(t);
          {
            o_99 = t;
            if(((n_99 != NULL) && (n_99 != o_99)))
              _fail(o_99);
            else
              n_99 = o_99;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_99), term_n_23);
          t = geq_0(t);
        }
      }
      t = l_23;
      t = q_107(t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = e_23;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_99 = NULL,t_99 = NULL,u_99 = NULL;
  s_99 = t;
  r_99 :
  if(match_cons(s_99, sym__2))
    {
      t_99 = ATgetArgument(s_99, 0);
      u_99 = ATgetArgument(s_99, 1);
      t = SSL_WriteToTextFile(not_null(t_99), not_null(u_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL;
  a_100 = t;
  z_99 :
  if(match_cons(a_100, sym__2))
    {
      b_100 = ATgetArgument(a_100, 0);
      c_100 = ATgetArgument(a_100, 1);
      t = SSL_WriteToBinaryFile(not_null(b_100), not_null(c_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm k_100 = NULL;
  ATerm v_23;
  v_23 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            ATerm l_100 = NULL,m_100 = NULL;
            l_100 = t;
            h_100 :
            if(match_cons(l_100, sym_Output_1))
              {
                m_100 = ATgetArgument(l_100, 0);
                if(((k_100 != NULL) && (k_100 != m_100)))
                  _fail(m_100);
                else
                  k_100 = m_100;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, o_3);
          LocalPopChoice(x_23);
        }
      else
        {
          t = w_23;
          {
            ATerm n_100 = NULL;
            t = term_a_24;
            {
              n_100 = t;
              if(((k_100 != NULL) && (k_100 != n_100)))
                _fail(n_100);
              else
                k_100 = n_100;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_3, _id);
  }
  t = v_23;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        t = not_null(k_100);
        return(t);
      }
      t = split_2(t, q_3, _id);
      return(t);
    }
    t = _2(t, _id, p_3);
    {
      ATerm b_24 = t;
      int c_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm s_3 (ATerm t)
            {
              ATerm o_100 = NULL;
              o_100 = t;
              j_100 :
              if(!(match_cons(o_100, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, s_3);
            return(t);
          }
          t = _2(t, r_3, WriteToBinaryFile_0);
          LocalPopChoice(c_24);
        }
      else
        {
          t = b_24;
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
ATerm apply_strategy_1 (ATerm t, ATerm x_105 (ATerm))
{
  ATerm u_100 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL;
  ATerm d_24;
  d_24 = t;
  t = dtime_0(t);
  t = d_24;
  {
    t = x_105(t);
    {
      ATerm e_24;
      e_24 = t;
      {
        ATerm v_100 = NULL;
        t = dtime_0(t);
        {
          v_100 = t;
          if(((u_100 != NULL) && (u_100 != v_100)))
            _fail(v_100);
          else
            u_100 = v_100;
        }
      }
      t = e_24;
      {
        a_101 = t;
        t_100 :
        if(match_cons(a_101, sym__2))
          {
            b_101 = ATgetArgument(a_101, 0);
            c_101 = ATgetArgument(a_101, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_101)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_100))), not_null(c_101));
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
  ATerm i_101 = NULL;
  i_101 = t;
  t = SSL_ReadFromFile(not_null(i_101));
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_88 (ATerm), ATerm p_88 (ATerm))
{
  ATerm t_101 = NULL,v_101 = NULL;
  ATerm f_24;
  f_24 = t;
  {
    ATerm u_101 = NULL;
    t = o_88(t);
    {
      u_101 = t;
      if(((t_101 != NULL) && (t_101 != u_101)))
        _fail(u_101);
      else
        t_101 = u_101;
    }
  }
  t = f_24;
  {
    ATerm w_101 = NULL;
    t = p_88(t);
    {
      w_101 = t;
      if(((v_101 != NULL) && (v_101 != w_101)))
        _fail(w_101);
      else
        v_101 = w_101;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_101), not_null(v_101));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_102 = NULL;
  ATerm g_24;
  g_24 = t;
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 (ATerm t)
        {
          ATerm d_102 = NULL,e_102 = NULL;
          d_102 = t;
          a_102 :
          if(match_cons(d_102, sym_Input_1))
            {
              e_102 = ATgetArgument(d_102, 0);
              if(((c_102 != NULL) && (c_102 != e_102)))
                _fail(e_102);
              else
                c_102 = e_102;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, t_3);
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm f_102 = NULL;
          t = term_j_24;
          {
            f_102 = t;
            if(((c_102 != NULL) && (c_102 != f_102)))
              _fail(f_102);
            else
              c_102 = f_102;
          }
        }
      }
  }
  t = g_24;
  {
    ATerm u_3 (ATerm t)
    {
      t = not_null(c_102);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_3);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm j_102 = NULL;
    j_102 = t;
    i_102 :
    if(!(match_string(j_102, "-v")))
      {
        if(!(match_string(j_102, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_m_24;
    t = set_config_0(t);
    t = term_n_24;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_o_24;
    return(t);
  }
  t = Option_3(t, v_3, w_3, x_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm m_102 = NULL;
    m_102 = t;
    k_102 :
    if(!(match_string(m_102, "-k")))
      {
        if(!(match_string(m_102, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm p_24;
    p_24 = t;
    {
      ATerm n_102 = NULL;
      ATerm o_102 = NULL;
      t = string_to_int_0(t);
      {
        o_102 = t;
        if(((n_102 != NULL) && (n_102 != o_102)))
          _fail(o_102);
        else
          n_102 = o_102;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_24, not_null(n_102));
        t = set_config_0(t);
      }
    }
    t = p_24;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_w_24;
    return(t);
  }
  t = ArgOption_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_102 = NULL;
  r_102 = t;
  t = SSL_string_to_int(not_null(r_102));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm x_24 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        ATerm z_102 = NULL;
        z_102 = t;
        u_102 :
        if(!(match_string(z_102, "-S")))
          {
            if(!(match_string(z_102, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = term_q_25;
        t = set_config_0(t);
        t = term_c_26;
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_d_26;
        return(t);
      }
      t = Option_3(t, b_4, c_4, d_4);
      LocalPopChoice(g_25);
    }
  else
    {
      t = x_24;
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              ATerm a_103 = NULL;
              a_103 = t;
              v_102 :
              if(!(match_string(a_103, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_4 (ATerm t)
            {
              ATerm d_103 = NULL;
              ATerm g_26;
              g_26 = t;
              {
                ATerm b_103 = NULL;
                ATerm c_103 = NULL;
                t = string_to_int_0(t);
                {
                  c_103 = t;
                  if(((b_103 != NULL) && (b_103 != c_103)))
                    _fail(c_103);
                  else
                    b_103 = c_103;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_23, not_null(b_103));
                  t = set_config_0(t);
                }
              }
              t = g_26;
              {
                ATerm e_103 = NULL;
                e_103 = t;
                if(((d_103 != NULL) && (d_103 != e_103)))
                  _fail(e_103);
                else
                  d_103 = e_103;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_103));
              }
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              t = term_h_26;
              return(t);
            }
            t = ArgOption_3(t, e_4, f_4, g_4);
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            {
              ATerm h_4 (ATerm t)
              {
                ATerm f_103 = NULL;
                f_103 = t;
                y_102 :
                if(!(match_string(f_103, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_4 (ATerm t)
              {
                t = term_j_26;
                t = set_config_0(t);
                t = term_k_26;
                return(t);
              }
              ATerm j_4 (ATerm t)
              {
                t = term_l_26;
                return(t);
              }
              t = Option_3(t, h_4, i_4, j_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm l_103 = NULL;
    l_103 = t;
    i_103 :
    if(!(match_string(l_103, "-o")))
      {
        if(!(match_string(l_103, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm o_103 = NULL;
    ATerm q_26;
    q_26 = t;
    {
      ATerm m_103 = NULL;
      ATerm n_103 = NULL;
      n_103 = t;
      if(((m_103 != NULL) && (m_103 != n_103)))
        _fail(n_103);
      else
        m_103 = n_103;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_26, not_null(m_103));
        t = set_config_0(t);
      }
    }
    t = q_26;
    {
      ATerm p_103 = NULL;
      p_103 = t;
      if(((o_103 != NULL) && (o_103 != p_103)))
        _fail(p_103);
      else
        o_103 = p_103;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_103));
    }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_s_26;
    return(t);
  }
  t = ArgOption_3(t, n_4, o_4, p_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm q_4 (ATerm t)
        {
          ATerm t_103 = NULL;
          t_103 = t;
          s_103 :
          if(!(match_string(t_103, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_4 (ATerm t)
        {
          t = term_x_26;
          t = set_config_0(t);
          t = term_y_26;
          return(t);
        }
        ATerm s_4 (ATerm t)
        {
          t = term_a_27;
          return(t);
        }
        t = Option_3(t, q_4, r_4, s_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL;
  z_103 = t;
  x_103 :
  if(match_string(z_103, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(z_103) == AT_LIST) && !(ATisEmpty(z_103))))
        {
          a_104 = ATgetFirst((ATermList) z_103);
          b_104 = (ATerm) ATgetNext((ATermList) z_103);
          y_103 :
          if(((ATgetType(b_104) == AT_LIST) && !(ATisEmpty(b_104))))
            {
              c_104 = ATgetFirst((ATermList) b_104);
              d_104 = (ATerm) ATgetNext((ATermList) b_104);
              {
                ATerm h_104 = NULL;
                ATerm b_27;
                b_27 = t;
                {
                  t = not_null(a_104);
                  t = l_0(t);
                }
                t = b_27;
                {
                  ATerm i_104 = NULL;
                  t = not_null(c_104);
                  {
                    t = n_0(t);
                    {
                      i_104 = t;
                      if(((h_104 != NULL) && (h_104 != i_104)))
                        _fail(i_104);
                      else
                        h_104 = i_104;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_104)), not_null(h_104));
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
  ATerm t_4 (ATerm t)
  {
    ATerm p_104 = NULL;
    p_104 = t;
    m_104 :
    if(!(match_string(p_104, "-i")))
      {
        if(!(match_string(p_104, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm s_104 = NULL;
    ATerm c_27;
    c_27 = t;
    {
      ATerm q_104 = NULL;
      ATerm r_104 = NULL;
      r_104 = t;
      if(((q_104 != NULL) && (q_104 != r_104)))
        _fail(r_104);
      else
        q_104 = r_104;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_27, not_null(q_104));
        t = set_config_0(t);
      }
    }
    t = c_27;
    {
      ATerm v_104 = NULL;
      v_104 = t;
      if(((s_104 != NULL) && (s_104 != v_104)))
        _fail(v_104);
      else
        s_104 = v_104;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_104));
    }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_i_27;
    return(t);
  }
  t = ArgOption_3(t, t_4, u_4, v_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm s_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(a_28);
    }
  else
    {
      t = s_27;
      {
        ATerm k_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(l_28);
          }
        else
          {
            t = k_28;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATempty, term_m_28));
  {
    t = printnl_0(t);
    {
      t = term_g_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm z_104 = NULL;
  z_104 = t;
  t = SSL_TicksToSeconds(not_null(z_104));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_105 = NULL,f_105 = NULL,g_105 = NULL;
  e_105 = t;
  d_105 :
  if(match_cons(e_105, sym__2))
    {
      f_105 = ATgetArgument(e_105, 0);
      g_105 = ATgetArgument(e_105, 1);
      {
        ATerm n_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_105), not_null(g_105));
            LocalPopChoice(o_28);
          }
        else
          {
            t = n_28;
            t = SSL_addr(not_null(f_105), not_null(g_105));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_95 (ATerm), ATerm r_95 (ATerm))
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_95(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm n_105 = NULL,o_105 = NULL,p_105 = NULL;
        n_105 = t;
        m_105 :
        if(((ATgetType(n_105) == AT_LIST) && !(ATisEmpty(n_105))))
          {
            o_105 = ATgetFirst((ATermList) n_105);
            p_105 = (ATerm) ATgetNext((ATermList) n_105);
            {
              ATerm s_105 = NULL;
              ATerm t_105 = NULL;
              t = not_null(p_105);
              {
                t = foldr_2(t, q_95, r_95);
                {
                  t_105 = t;
                  if(((s_105 != NULL) && (s_105 != t_105)))
                    _fail(t_105);
                  else
                    s_105 = t_105;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_105), not_null(s_105));
                t = r_95(t);
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
ATerm crush_2 (ATerm t, ATerm o_94 (ATerm), ATerm p_94 (ATerm))
{
  ATerm g_106 = NULL;
  ATerm j_106 = NULL;
  g_106 = t;
  {
    ATerm p_106 = NULL;
    ATerm r_106 = NULL,w_106 = NULL,x_106 = NULL;
    t = not_null(g_106);
    {
      p_106 = t;
      {
        t = SSL_explode_term(not_null(p_106));
        {
          r_106 = t;
          f_106 :
          if(match_cons(r_106, sym__2))
            {
              w_106 = ATgetArgument(r_106, 0);
              x_106 = ATgetArgument(r_106, 1);
              if(((j_106 != NULL) && (j_106 != x_106)))
                _fail(x_106);
              else
                j_106 = x_106;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_106);
      t = foldr_2(t, o_94, p_94);
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
      t = term_b_20;
      return(t);
    }
    t = crush_2(t, w_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL;
  d_107 = t;
  c_107 :
  if(match_cons(d_107, sym__2))
    {
      e_107 = ATgetArgument(d_107, 0);
      f_107 = ATgetArgument(d_107, 1);
      {
        ATerm r_28;
        r_28 = t;
        {
          ATerm s_28 = t;
          int t_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_107), not_null(f_107));
              LocalPopChoice(t_28);
            }
          else
            {
              t = s_28;
              t = SSL_gtr(not_null(e_107), not_null(f_107));
            }
        }
        t = r_28;
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
  ATerm l_107 = NULL;
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_107 = NULL,n_107 = NULL,o_107 = NULL;
      m_107 = t;
      k_107 :
      if(match_cons(m_107, sym__2))
        {
          n_107 = ATgetArgument(m_107, 0);
          o_107 = ATgetArgument(m_107, 1);
          {
            if(((l_107 != NULL) && (l_107 != n_107)))
              _fail(n_107);
            else
              l_107 = n_107;
            if(((l_107 != NULL) && (l_107 != o_107)))
              _fail(o_107);
            else
              l_107 = o_107;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_107 (ATerm))
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_29;
      c_29 = t;
      {
        ATerm t_107 = NULL;
        ATerm u_107 = NULL;
        t = term_m_23;
        {
          t = get_config_0(t);
          {
            u_107 = t;
            if(((t_107 != NULL) && (t_107 != u_107)))
              _fail(u_107);
            else
              t_107 = u_107;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_107), term_g_6);
          t = geq_0(t);
        }
      }
      t = c_29;
      t = p_107(t);
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm y_107 = NULL,a_108 = NULL;
    ATerm d_29;
    d_29 = t;
    {
      ATerm z_107 = NULL;
      t = run_time_0(t);
      {
        z_107 = t;
        if(((y_107 != NULL) && (y_107 != z_107)))
          _fail(z_107);
        else
          y_107 = z_107;
      }
    }
    t = d_29;
    {
      ATerm b_108 = NULL;
      t = term_e_29;
      {
        t = get_config_0(t);
        {
          b_108 = t;
          if(((a_108 != NULL) && (a_108 != b_108)))
            _fail(b_108);
          else
            a_108 = b_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_29), not_null(y_107)), term_h_29), not_null(a_108)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_4);
  {
    t = term_b_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_108 = NULL;
  i_108 = t;
  h_108 :
  if(match_cons(i_108, sym_Version_0))
    {
      ATerm k_108 = NULL,m_108 = NULL;
      ATerm j_29;
      j_29 = t;
      {
        ATerm l_108 = NULL;
        t = SSLgetAnnotations(not_null(i_108));
        {
          l_108 = t;
          if(((k_108 != NULL) && (k_108 != l_108)))
            _fail(l_108);
          else
            k_108 = l_108;
        }
      }
      t = j_29;
      {
        ATerm n_108 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_108));
        {
          n_108 = t;
          if(((m_108 != NULL) && (m_108 != n_108)))
            _fail(n_108);
          else
            m_108 = n_108;
        }
        t = not_null(m_108);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_105 (ATerm))
{
  ATerm y_4 (ATerm t)
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, y_4);
  t = v_105(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_108 = NULL;
  t_108 = t;
  t = SSL_table_create(not_null(t_108));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_108 = NULL;
  x_108 = t;
  {
    ATerm q_29;
    q_29 = t;
    {
      t = term_r_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_29, term_s_29, not_null(x_108));
          t = table_put_0(t);
        }
      }
    }
    t = q_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_109 = NULL;
  b_109 = t;
  t = SSL_table_destroy(not_null(b_109));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_109 = NULL;
  f_109 = t;
  t = SSL_exit(not_null(f_109));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_109 = NULL,k_109 = NULL,l_109 = NULL;
  j_109 = t;
  i_109 :
  if(((ATgetType(j_109) == AT_LIST) && ATisEmpty(j_109)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_109) == AT_LIST) && !(ATisEmpty(j_109))))
        {
          k_109 = ATgetFirst((ATermList) j_109);
          l_109 = (ATerm) ATgetNext((ATermList) j_109);
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
  ATerm t_29;
  t_29 = t;
  {
    ATerm o_109 = NULL;
    ATerm r_109 = NULL;
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        {
          ATerm p_109 = NULL;
          ATerm q_109 = NULL;
          q_109 = t;
          if(((p_109 != NULL) && (p_109 != q_109)))
            _fail(q_109);
          else
            p_109 = q_109;
          t = (ATerm) ATinsert(ATempty, not_null(p_109));
        }
      }
    {
      r_109 = t;
      if(((o_109 != NULL) && (o_109 != r_109)))
        _fail(r_109);
      else
        o_109 = r_109;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_24, not_null(o_109));
      t = printnl_0(t);
    }
  }
  t = t_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm t_109 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_91 (ATerm))
{
  ATerm a_110 (ATerm t)
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = Cons_2(t, c_91, a_110);
      }
    return(t);
  }
  t = a_110(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm h_110 = NULL,i_110 = NULL,j_110 = NULL;
  j_110 = t;
  g_110 :
  if(((ATgetType(j_110) == AT_LIST) && !(ATisEmpty(j_110))))
    {
      h_110 = ATgetFirst((ATermList) j_110);
      i_110 = (ATerm) ATgetNext((ATermList) j_110);
      {
        ATerm m_110 = NULL;
        t = not_null(i_110);
        {
          ATerm y_29;
          y_29 = t;
          {
            ATerm n_110 = NULL,p_110 = NULL,r_110 = NULL;
            ATerm z_29;
            z_29 = t;
            {
              ATerm o_110 = NULL;
              t = k_0(t);
              {
                o_110 = t;
                if(((n_110 != NULL) && (n_110 != o_110)))
                  _fail(o_110);
                else
                  n_110 = o_110;
              }
            }
            t = z_29;
            {
              ATerm q_110 = NULL;
              t = not_null(h_110);
              {
                t = i_0(t);
                {
                  q_110 = t;
                  if(((p_110 != NULL) && (p_110 != q_110)))
                    _fail(q_110);
                  else
                    p_110 = q_110;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_110)), not_null(p_110));
                {
                  r_110 = t;
                  if(((m_110 != NULL) && (m_110 != r_110)))
                    _fail(r_110);
                  else
                    m_110 = r_110;
                }
              }
            }
          }
          t = y_29;
          {
            ATerm z_4 (ATerm t)
            {
              t = not_null(m_110);
              return(t);
            }
            t = reverse_acc_2(t, i_0, z_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(j_110) == AT_LIST) && ATisEmpty(j_110)))
        {
          {
            t = term_x_14;
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
ATerm short_description_1 (ATerm t, ATerm s_109 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_78 (ATerm))
{
  ATerm c_111 = NULL,d_111 = NULL;
  c_111 = t;
  b_111 :
  if(match_cons(c_111, sym_Program_1))
    {
      d_111 = ATgetArgument(c_111, 0);
      {
        ATerm g_111 = NULL,i_111 = NULL;
        ATerm h_111 = NULL;
        t = SSLgetAnnotations(not_null(c_111));
        {
          h_111 = t;
          if(((g_111 != NULL) && (g_111 != h_111)))
            _fail(h_111);
          else
            g_111 = h_111;
        }
        {
          t = not_null(d_111);
          {
            ATerm k_111 = NULL;
            t = h_78(t);
            {
              i_111 = t;
              {
                ATerm l_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_111)), not_null(g_111));
                {
                  l_111 = t;
                  if(((k_111 != NULL) && (k_111 != l_111)))
                    _fail(l_111);
                  else
                    k_111 = l_111;
                }
                t = not_null(k_111);
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
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_111 = NULL;
      t = term_e_29;
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
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      {
        ATerm b_5 (ATerm t)
        {
          ATerm c_5 (ATerm t)
          {
            ATerm y_111 = NULL;
            y_111 = t;
            if(((w_111 != NULL) && (w_111 != y_111)))
              _fail(y_111);
            else
              w_111 = y_111;
            return(t);
          }
          t = Program_1(t, c_5);
          return(t);
        }
        t = fetch_1(t, b_5);
      }
    }
  {
    t = term_f_30;
    {
      t = echo_0(t);
      {
        t = term_k_30;
        {
          t = table_get_0(t);
          {
            ATerm d_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, d_5);
            {
              ATerm e_5 (ATerm t)
              {
                ATerm z_111 = NULL;
                ATerm a_112 = NULL;
                a_112 = t;
                if(((z_111 != NULL) && (z_111 != a_112)))
                  _fail(a_112);
                else
                  z_111 = a_112;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_111)), term_n_30);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, e_5);
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
  ATerm o_30;
  o_30 = t;
  {
    ATerm f_112 = NULL;
    ATerm g_112 = NULL;
    g_112 = t;
    if(((f_112 != NULL) && (f_112 != g_112)))
      _fail(g_112);
    else
      f_112 = g_112;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATempty, not_null(f_112)));
      t = printnl_0(t);
    }
  }
  t = o_30;
  return(t);
}
ATerm say_1 (ATerm t, ATerm u_104 (ATerm))
{
  ATerm p_30;
  p_30 = t;
  {
    t = u_104(t);
    t = debug_0(t);
  }
  t = p_30;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm r_112 = NULL,v_112 = NULL;
  r_112 = t;
  p_112 :
  if(match_cons(r_112, sym_Undefined_1))
    {
      v_112 = ATgetArgument(r_112, 0);
      {
        ATerm y_112 = NULL,a_113 = NULL;
        ATerm z_112 = NULL;
        t = SSLgetAnnotations(not_null(r_112));
        {
          z_112 = t;
          if(((y_112 != NULL) && (y_112 != z_112)))
            _fail(z_112);
          else
            y_112 = z_112;
        }
        {
          t = not_null(v_112);
          {
            ATerm c_113 = NULL;
            t = i_78(t);
            {
              a_113 = t;
              {
                ATerm d_113 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_113)), not_null(y_112));
                {
                  d_113 = t;
                  if(((c_113 != NULL) && (c_113 != d_113)))
                    _fail(d_113);
                  else
                    c_113 = d_113;
                }
                t = not_null(c_113);
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
ATerm fetch_1 (ATerm t, ATerm l_91 (ATerm))
{
  ATerm i_113 (ATerm t)
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_91, _id);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = Cons_2(t, _id, i_113);
      }
    return(t);
  }
  t = i_113(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_108 (ATerm))
{
  t = fetch_1(t, s_108);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_113 = NULL;
  n_113 = t;
  m_113 :
  if(match_cons(n_113, sym_Help_0))
    {
      ATerm p_113 = NULL,r_113 = NULL;
      ATerm s_30;
      s_30 = t;
      {
        ATerm q_113 = NULL;
        t = SSLgetAnnotations(not_null(n_113));
        {
          q_113 = t;
          if(((p_113 != NULL) && (p_113 != q_113)))
            _fail(q_113);
          else
            p_113 = q_113;
        }
      }
      t = s_30;
      {
        ATerm s_113 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_113));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_88 (ATerm))
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_88(t);
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_113 = NULL,z_113 = NULL,a_114 = NULL;
  y_113 = t;
  x_113 :
  if(match_cons(y_113, sym__2))
    {
      z_113 = ATgetArgument(y_113, 0);
      a_114 = ATgetArgument(y_113, 1);
      t = SSL_table_get(not_null(z_113), not_null(a_114));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_114 = NULL,i_114 = NULL,j_114 = NULL,k_114 = NULL;
  h_114 = t;
  g_114 :
  if(match_cons(h_114, sym__3))
    {
      i_114 = ATgetArgument(h_114, 0);
      j_114 = ATgetArgument(h_114, 1);
      k_114 = ATgetArgument(h_114, 2);
      {
        ATerm v_30;
        v_30 = t;
        {
          ATerm o_114 = NULL;
          ATerm p_114 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_114), not_null(j_114));
          {
            ATerm y_30 = t;
            int z_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_30);
              }
            else
              {
                t = y_30;
                t = (ATerm) ATempty;
              }
            {
              p_114 = t;
              if(((o_114 != NULL) && (o_114 != p_114)))
                _fail(p_114);
              else
                o_114 = p_114;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_114), not_null(j_114), (ATerm) ATinsert(CheckATermList(not_null(o_114)), not_null(k_114)));
            t = table_put_0(t);
          }
        }
        t = v_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_109 (ATerm))
{
  ATerm t_114 = NULL;
  ATerm u_114 = NULL;
  t = term_x_14;
  {
    t = x_109(t);
    {
      u_114 = t;
      if(((t_114 != NULL) && (t_114 != u_114)))
        _fail(u_114);
      else
        t_114 = u_114;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_30, term_j_30, not_null(t_114));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm a_115 = NULL,b_115 = NULL,c_115 = NULL;
  a_115 = t;
  z_114 :
  if(match_string(a_115, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(a_115) == AT_LIST) && !(ATisEmpty(a_115))))
        {
          b_115 = ATgetFirst((ATermList) a_115);
          c_115 = (ATerm) ATgetNext((ATermList) a_115);
          {
            ATerm f_115 = NULL;
            ATerm a_31;
            a_31 = t;
            {
              t = not_null(b_115);
              t = a_0(t);
            }
            t = a_31;
            {
              ATerm g_115 = NULL;
              t = term_x_14;
              {
                t = d_0(t);
                {
                  g_115 = t;
                  if(((f_115 != NULL) && (f_115 != g_115)))
                    _fail(g_115);
                  else
                    f_115 = g_115;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_115)), not_null(f_115));
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
  ATerm f_5 (ATerm t)
  {
    ATerm l_115 = NULL;
    l_115 = t;
    k_115 :
    if(!(match_string(l_115, "--help")))
      {
        if(!(match_string(l_115, "-h")))
          {
            if(!(match_string(l_115, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_c_31;
    {
      t = set_config_0(t);
      t = term_d_31;
    }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_e_31;
    return(t);
  }
  t = Option_3(t, f_5, g_5, h_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_115 = NULL,p_115 = NULL,q_115 = NULL;
  o_115 = t;
  n_115 :
  if(((ATgetType(o_115) == AT_LIST) && !(ATisEmpty(o_115))))
    {
      p_115 = ATgetFirst((ATermList) o_115);
      q_115 = (ATerm) ATgetNext((ATermList) o_115);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_115)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_115)));
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
        t = (ATerm) ATmakeAppl(sym__3, term_a_23, not_null(x_115), not_null(y_115));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_109 (ATerm))
{
  ATerm f_31;
  f_31 = t;
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_31;
        t = v_109(t);
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        {
        }
      }
  }
  t = f_31;
  {
    ATerm i_5 (ATerm t)
    {
      ATerm g_116 = NULL;
      ATerm k_31;
      k_31 = t;
      {
        ATerm e_116 = NULL;
        ATerm f_116 = NULL;
        f_116 = t;
        if(((e_116 != NULL) && (e_116 != f_116)))
          _fail(f_116);
        else
          e_116 = f_116;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_29, not_null(e_116));
          t = set_config_0(t);
        }
      }
      t = k_31;
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
    ATerm j_5 (ATerm t)
    {
      ATerm l_31 = t;
      int m_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_31);
            }
          else
            {
              t = n_31;
              {
                t = v_109(t);
                t = Cons_2(t, _id, j_5);
              }
            }
          LocalPopChoice(m_31);
        }
      else
        {
          t = l_31;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_5, j_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL;
  ATerm q_31;
  q_31 = t;
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
  t = q_31;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_109 (ATerm))
{
  ATerm w_116 = NULL;
  ATerm r_31;
  r_31 = t;
  {
    t = term_s_31;
    t = table_put_0(t);
  }
  t = r_31;
  {
    ATerm k_5 (ATerm t)
    {
      ATerm u_31 = t;
      int w_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_109(t);
          LocalPopChoice(w_31);
        }
      else
        {
          t = u_31;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_5);
    {
      ATerm x_31 = t;
      int a_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_32;
          k_32 = t;
          {
            ATerm s_32 = t;
            int c_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_b_31;
                t = get_config_0(t);
                LocalPopChoice(c_33);
              }
            else
              {
                t = s_32;
                t = fetch_1(t, Help_0);
              }
          }
          t = k_32;
          {
            t = system_usage_0(t);
            {
              t = term_b_20;
              t = exit_0(t);
            }
          }
          LocalPopChoice(a_32);
        }
      else
        {
          t = x_31;
          {
            ATerm d_33 = t;
            int e_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_5 (ATerm t)
                {
                  ATerm m_5 (ATerm t)
                  {
                    ATerm x_116 = NULL;
                    x_116 = t;
                    if(((w_116 != NULL) && (w_116 != x_116)))
                      _fail(x_116);
                    else
                      w_116 = x_116;
                    return(t);
                  }
                  t = Undefined_1(t, m_5);
                  return(t);
                }
                t = fetch_1(t, l_5);
                {
                  ATerm n_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_116)), term_f_33);
                    return(t);
                  }
                  t = say_1(t, n_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_g_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(e_33);
              }
            else
              {
                t = d_33;
                {
                }
              }
          }
        }
      {
        ATerm g_33;
        g_33 = t;
        {
          t = term_g_30;
          t = table_destroy_0(t);
        }
        t = g_33;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm))
{
  t = parse_options_1(t, b_106);
  {
    t = store_options_0(t);
    {
      t = d_106(t);
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_106);
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            {
              ATerm j_33 = t;
              int k_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_106(t);
                  t = report_success_0(t);
                  LocalPopChoice(k_33);
                }
              else
                {
                  t = j_33;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm))
{
  ATerm o_5 (ATerm t)
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_106(t);
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, s_106);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, o_5, u_106, v_106, q_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    ATerm s_5 (ATerm t)
    {
      ATerm n_33;
      n_33 = t;
      {
        ATerm a_117 = NULL;
        ATerm b_117 = NULL;
        t = term_e_29;
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
          t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATempty, not_null(a_117)));
          t = printnl_0(t);
        }
      }
      t = n_33;
      return(t);
    }
    t = if_verbose2_1(t, s_5);
    return(t);
  }
  t = iowrap_4(t, m_106, n_106, o_106, r_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_106 (ATerm), ATerm l_106 (ATerm))
{
  t = iowrap_3(t, k_106, l_106, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_106 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    t = _2(t, _id, h_106);
    return(t);
  }
  t = iowrap_2(t, t_5, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm v_5 (ATerm t)
    {
      ATerm w_5 (ATerm t)
      {
        ATerm x_5 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, x_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, w_5);
      return(t);
    }
    t = Specification_1(t, v_5);
    return(t);
  }
  t = iowrap_1(t, u_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
