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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
ATerm term_k_20;
ATerm term_v_19;
ATerm term_d_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_m_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
void init_constant_terms (void)
{
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_k_10, term_b_12);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_i_11);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_i_11);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_s_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_i_11);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__3, term_q_17, term_s_17, (ATerm) ATempty);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm q_64 (ATerm));
ATerm Rec_2 (ATerm, ATerm b_55 (ATerm), ATerm c_55 (ATerm));
ATerm SDef_3 (ATerm, ATerm f_55 (ATerm), ATerm g_55 (ATerm), ATerm h_55 (ATerm));
ATerm Let_2 (ATerm, ATerm d_55 (ATerm), ATerm e_55 (ATerm));
ATerm sboundin_3 (ATerm, ATerm r_64 (ATerm), ATerm s_64 (ATerm), ATerm t_64 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm a_55 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm m_64 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm w_56 (ATerm));
ATerm Scope_2 (ATerm, ATerm z_53 (ATerm), ATerm a_54 (ATerm));
ATerm tboundin_3 (ATerm, ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm p_64 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm y_75 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm));
ATerm crush_3 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm));
ATerm diff_1 (ATerm, ATerm u_75 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm m_82 (ATerm), ATerm n_82 (ATerm));
ATerm for_3 (ATerm, ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm r_82 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm p_78 (ATerm), ATerm q_78 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm h_70 (ATerm));
ATerm zip_1 (ATerm, ATerm j_70 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm j_78 (ATerm), ATerm k_78 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm u_78 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm n_79 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm x_78 (ATerm));
ATerm rename_4 (ATerm, ATerm e_78 (ATerm, ATerm (ATerm)), ATerm f_78 (ATerm), ATerm g_78 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm h_78 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm _2 (ATerm, ATerm g_52 (ATerm), ATerm h_52 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_72 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_84 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm k_91 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_82 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_69 (ATerm), ATerm f_69 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_76 (ATerm), ATerm q_76 (ATerm));
ATerm crush_2 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_91 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_82 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_87 (ATerm));
ATerm map_1 (ATerm, ATerm s_71 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_87 (ATerm));
ATerm Program_1 (ATerm, ATerm h_63 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_84 (ATerm));
ATerm Undefined_1 (ATerm, ATerm i_63 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_68 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_53 (ATerm), ATerm q_53 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm));
ATerm iowrap_4 (ATerm, ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_83 (ATerm), ATerm j_83 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_83 (ATerm));
ATerm rename_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm f_3 = NULL,r_3 = NULL,t_3 = NULL;
  f_3 = t;
  e_3 :
  if(((ATgetType(f_3) == AT_LIST) && !(ATisEmpty(f_3))))
    {
      r_3 = ATgetFirst((ATermList) f_3);
      t_3 = (ATerm) ATgetNext((ATermList) f_3);
      t = not_null(r_3);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm q_64 (ATerm))
{
  ATerm z_3 = t;
  int a_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, q_64);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
            h_4 = t;
            b_4 :
            if(match_cons(h_4, sym__2))
              {
                i_4 = ATgetArgument(h_4, 0);
                m_4 = ATgetArgument(h_4, 1);
                c_4 :
                if(match_cons(i_4, sym_SDef_3))
                  {
                    j_4 = ATgetArgument(i_4, 0);
                    k_4 = ATgetArgument(i_4, 1);
                    l_4 = ATgetArgument(i_4, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_4), not_null(k_4), not_null(l_4));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = zip_1(t, c_0);
        }
        return(t);
      }
      t = Let_2(t, b_0, _id);
      LocalPopChoice(a_4);
    }
  else
    {
      t = z_3;
      {
        ATerm d_4 = t;
        int g_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = split_2(t, _id, q_64);
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
                  q_4 = t;
                  e_4 :
                  if(match_cons(q_4, sym__2))
                    {
                      r_4 = ATgetArgument(q_4, 0);
                      u_4 = ATgetArgument(q_4, 1);
                      f_4 :
                      if(match_cons(r_4, sym_VarDec_2))
                        {
                          s_4 = ATgetArgument(r_4, 0);
                          t_4 = ATgetArgument(r_4, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(u_4), not_null(t_4));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, f_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, e_0, _id);
            LocalPopChoice(g_4);
          }
        else
          {
            t = d_4;
            {
              ATerm n_0 (ATerm t)
              {
                t = q_64(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, n_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm b_55 (ATerm), ATerm c_55 (ATerm))
{
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
  g_5 = t;
  f_5 :
  if(match_cons(g_5, sym_Rec_2))
    {
      h_5 = ATgetArgument(g_5, 0);
      i_5 = ATgetArgument(g_5, 1);
      {
        ATerm m_5 = NULL,o_5 = NULL;
        ATerm n_5 = NULL;
        t = SSLgetAnnotations(not_null(g_5));
        {
          n_5 = t;
          if(((m_5 != NULL) && (m_5 != n_5)))
            _fail(n_5);
          else
            m_5 = n_5;
        }
        {
          t = not_null(h_5);
          {
            ATerm q_5 = NULL;
            t = b_55(t);
            {
              o_5 = t;
              {
                t = not_null(i_5);
                {
                  ATerm s_5 = NULL;
                  t = c_55(t);
                  {
                    q_5 = t;
                    {
                      ATerm t_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(o_5), not_null(q_5)), not_null(m_5));
                      {
                        t_5 = t;
                        if(((s_5 != NULL) && (s_5 != t_5)))
                          _fail(t_5);
                        else
                          s_5 = t_5;
                      }
                      t = not_null(s_5);
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
ATerm SDef_3 (ATerm t, ATerm f_55 (ATerm), ATerm g_55 (ATerm), ATerm h_55 (ATerm))
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym_SDef_3))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      j_6 = ATgetArgument(g_6, 2);
      {
        ATerm o_6 = NULL,q_6 = NULL;
        ATerm p_6 = NULL;
        t = SSLgetAnnotations(not_null(g_6));
        {
          p_6 = t;
          if(((o_6 != NULL) && (o_6 != p_6)))
            _fail(p_6);
          else
            o_6 = p_6;
        }
        {
          t = not_null(h_6);
          {
            ATerm s_6 = NULL;
            t = f_55(t);
            {
              q_6 = t;
              {
                t = not_null(i_6);
                {
                  ATerm u_6 = NULL;
                  t = g_55(t);
                  {
                    s_6 = t;
                    {
                      t = not_null(j_6);
                      {
                        ATerm w_6 = NULL;
                        t = h_55(t);
                        {
                          u_6 = t;
                          {
                            ATerm x_6 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(q_6), not_null(s_6), not_null(u_6)), not_null(o_6));
                            {
                              x_6 = t;
                              if(((w_6 != NULL) && (w_6 != x_6)))
                                _fail(x_6);
                              else
                                w_6 = x_6;
                            }
                            t = not_null(w_6);
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
ATerm Let_2 (ATerm t, ATerm d_55 (ATerm), ATerm e_55 (ATerm))
{
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  j_7 :
  if(match_cons(k_7, sym_Let_2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      {
        ATerm q_7 = NULL,s_7 = NULL;
        ATerm r_7 = NULL;
        t = SSLgetAnnotations(not_null(k_7));
        {
          r_7 = t;
          if(((q_7 != NULL) && (q_7 != r_7)))
            _fail(r_7);
          else
            q_7 = r_7;
        }
        {
          t = not_null(l_7);
          {
            ATerm u_7 = NULL;
            t = d_55(t);
            {
              s_7 = t;
              {
                t = not_null(m_7);
                {
                  ATerm w_7 = NULL;
                  t = e_55(t);
                  {
                    u_7 = t;
                    {
                      ATerm x_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(s_7), not_null(u_7)), not_null(q_7));
                      {
                        x_7 = t;
                        if(((w_7 != NULL) && (w_7 != x_7)))
                          _fail(x_7);
                        else
                          w_7 = x_7;
                      }
                      t = not_null(w_7);
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
ATerm sboundin_3 (ATerm t, ATerm r_64 (ATerm), ATerm s_64 (ATerm), ATerm t_64 (ATerm))
{
  ATerm n_4 = t;
  int o_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, r_64, r_64);
      LocalPopChoice(o_4);
    }
  else
    {
      t = n_4;
      {
        ATerm p_4 = t;
        int v_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, t_64, t_64, r_64);
            LocalPopChoice(v_4);
          }
        else
          {
            t = p_4;
            t = Rec_2(t, t_64, r_64);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_Rec_2))
    {
      g_8 = ATgetArgument(f_8, 0);
      h_8 = ATgetArgument(f_8, 1);
      t = (ATerm) ATinsert(ATempty, not_null(g_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL;
  p_8 = t;
  o_8 :
  if(match_cons(p_8, sym_SDef_3))
    {
      q_8 = ATgetArgument(p_8, 0);
      r_8 = ATgetArgument(p_8, 1);
      s_8 = ATgetArgument(p_8, 2);
      {
        t = not_null(r_8);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
            w_8 = t;
            n_8 :
            if(match_cons(w_8, sym_VarDec_2))
              {
                x_8 = ATgetArgument(w_8, 0);
                y_8 = ATgetArgument(w_8, 1);
                t = not_null(x_8);
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
ATerm Bind1_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym_Let_2))
    {
      h_9 = ATgetArgument(g_9, 0);
      i_9 = ATgetArgument(g_9, 1);
      {
        t = not_null(h_9);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
            l_9 = t;
            e_9 :
            if(match_cons(l_9, sym_SDef_3))
              {
                m_9 = ATgetArgument(l_9, 0);
                n_9 = ATgetArgument(l_9, 1);
                o_9 = ATgetArgument(l_9, 2);
                t = not_null(m_9);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, p_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm z_9 = NULL,a_10 = NULL;
  z_9 = t;
  y_9 :
  if(match_cons(z_9, sym_SVar_1))
    {
      a_10 = ATgetArgument(z_9, 0);
      {
        ATerm d_10 = NULL,f_10 = NULL;
        ATerm e_10 = NULL;
        t = SSLgetAnnotations(not_null(z_9));
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
        {
          t = not_null(a_10);
          {
            ATerm h_10 = NULL;
            t = a_55(t);
            {
              f_10 = t;
              {
                ATerm i_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(f_10)), not_null(d_10));
                {
                  i_10 = t;
                  if(((h_10 != NULL) && (h_10 != i_10)))
                    _fail(i_10);
                  else
                    h_10 = i_10;
                }
                t = not_null(h_10);
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
ATerm srename_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm w_4 = t;
    int x_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(x_4);
      }
    else
      {
        t = w_4;
        {
          ATerm y_4 = t;
          int z_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(z_4);
            }
          else
            {
              t = y_4;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, q_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm m_64 (ATerm))
{
  t = Scope_2(t, m_64, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm w_56 (ATerm))
{
  ATerm s_10 = NULL,t_10 = NULL;
  s_10 = t;
  r_10 :
  if(match_cons(s_10, sym_DynamicRules_1))
    {
      t_10 = ATgetArgument(s_10, 0);
      {
        ATerm w_10 = NULL,y_10 = NULL;
        ATerm x_10 = NULL;
        t = SSLgetAnnotations(not_null(s_10));
        {
          x_10 = t;
          if(((w_10 != NULL) && (w_10 != x_10)))
            _fail(x_10);
          else
            w_10 = x_10;
        }
        {
          t = not_null(t_10);
          {
            ATerm a_11 = NULL;
            t = w_56(t);
            {
              y_10 = t;
              {
                ATerm b_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(y_10)), not_null(w_10));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm z_53 (ATerm), ATerm a_54 (ATerm))
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym_Scope_2))
    {
      n_11 = ATgetArgument(m_11, 0);
      o_11 = ATgetArgument(m_11, 1);
      {
        ATerm s_11 = NULL,u_11 = NULL;
        ATerm t_11 = NULL;
        t = SSLgetAnnotations(not_null(m_11));
        {
          t_11 = t;
          if(((s_11 != NULL) && (s_11 != t_11)))
            _fail(t_11);
          else
            s_11 = t_11;
        }
        {
          t = not_null(n_11);
          {
            ATerm w_11 = NULL;
            t = z_53(t);
            {
              u_11 = t;
              {
                t = not_null(o_11);
                {
                  ATerm y_11 = NULL;
                  t = a_54(t);
                  {
                    w_11 = t;
                    {
                      ATerm z_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(u_11), not_null(w_11)), not_null(s_11));
                      {
                        z_11 = t;
                        if(((y_11 != NULL) && (y_11 != z_11)))
                          _fail(z_11);
                        else
                          y_11 = z_11;
                      }
                      t = not_null(y_11);
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
ATerm tboundin_3 (ATerm t, ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm p_64 (ATerm))
{
  ATerm a_5 = t;
  int b_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, p_64, n_64);
      LocalPopChoice(b_5);
    }
  else
    {
      t = a_5;
      t = DynamicRules_1(t, n_64);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym_DynamicRules_1))
    {
      i_12 = ATgetArgument(h_12, 0);
      {
        t = not_null(i_12);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_Var_1))
    {
      o_12 = ATgetArgument(n_12, 0);
      t = (ATerm) ATinsert(ATempty, not_null(o_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym__2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      {
        t = not_null(u_12);
        {
          ATerm z_12 (ATerm t)
          {
            ATerm c_5 = t;
            int d_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(v_12);
                LocalPopChoice(d_5);
              }
            else
              {
                t = c_5;
                {
                  ATerm e_5 = t;
                  int j_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(v_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, y_75, r_0);
                      t = z_12(t);
                      LocalPopChoice(j_5);
                    }
                  else
                    {
                      t = e_5;
                      t = Cons_2(t, _id, z_12);
                    }
                }
              }
            return(t);
          }
          t = z_12(t);
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
ATerm foldr_3 (ATerm t, ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm))
{
  ATerm k_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_76(t);
      LocalPopChoice(l_5);
    }
  else
    {
      t = k_5;
      {
        ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
        e_13 = t;
        d_13 :
        if(((ATgetType(e_13) == AT_LIST) && !(ATisEmpty(e_13))))
          {
            f_13 = ATgetFirst((ATermList) e_13);
            g_13 = (ATerm) ATgetNext((ATermList) e_13);
            {
              ATerm j_13 = NULL,l_13 = NULL;
              ATerm p_5;
              p_5 = t;
              {
                ATerm k_13 = NULL;
                t = not_null(f_13);
                {
                  t = t_76(t);
                  {
                    k_13 = t;
                    if(((j_13 != NULL) && (j_13 != k_13)))
                      _fail(k_13);
                    else
                      j_13 = k_13;
                  }
                }
              }
              t = p_5;
              {
                ATerm m_13 = NULL;
                t = not_null(g_13);
                {
                  t = foldr_3(t, r_76, s_76, t_76);
                  {
                    m_13 = t;
                    if(((l_13 != NULL) && (l_13 != m_13)))
                      _fail(m_13);
                    else
                      l_13 = m_13;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_13), not_null(l_13));
                  t = s_76(t);
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
ATerm crush_3 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm))
{
  ATerm u_13 = NULL;
  ATerm w_13 = NULL;
  u_13 = t;
  {
    ATerm x_13 = NULL;
    ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
    t = not_null(u_13);
    {
      x_13 = t;
      {
        t = SSL_explode_term(not_null(x_13));
        {
          z_13 = t;
          t_13 :
          if(match_cons(z_13, sym__2))
            {
              a_14 = ATgetArgument(z_13, 0);
              b_14 = ATgetArgument(z_13, 1);
              if(((w_13 != NULL) && (w_13 != b_14)))
                _fail(b_14);
              else
                w_13 = b_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_13);
      t = foldr_3(t, p_75, q_75, r_75);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym__2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      if(((i_14 != NULL) && (i_14 != j_14)))
        _fail(j_14);
      else
        i_14 = j_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm))
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  o_14 :
  if(((ATgetType(p_14) == AT_LIST) && !(ATisEmpty(p_14))))
    {
      q_14 = ATgetFirst((ATermList) p_14);
      r_14 = (ATerm) ATgetNext((ATermList) p_14);
      {
        t = d_76(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm u_14 = NULL;
            u_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), not_null(u_14));
              t = c_76(t);
            }
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(r_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym__2))
    {
      b_15 = ATgetArgument(a_15, 0);
      c_15 = ATgetArgument(a_15, 1);
      {
        t = not_null(b_15);
        {
          ATerm g_15 (ATerm t)
          {
            ATerm r_5 = t;
            int u_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(u_5);
              }
            else
              {
                t = r_5;
                {
                  ATerm v_5 = t;
                  int w_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(c_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_75, t_0);
                      t = g_15(t);
                      LocalPopChoice(w_5);
                    }
                  else
                    {
                      t = v_5;
                      t = Cons_2(t, _id, g_15);
                    }
                }
              }
            return(t);
          }
          t = g_15(t);
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
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  k_15 = t;
  i_15 :
  if(match_cons(k_15, sym__2))
    {
      l_15 = ATgetArgument(k_15, 0);
      m_15 = ATgetArgument(k_15, 1);
      j_15 :
      if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
        {
          n_15 = ATgetFirst((ATermList) m_15);
          o_15 = (ATerm) ATgetNext((ATermList) m_15);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_15)), not_null(n_15)), not_null(o_15));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  d_16 = t;
  b_16 :
  if(((ATgetType(d_16) == AT_LIST) && !(ATisEmpty(d_16))))
    {
      e_16 = ATgetFirst((ATermList) d_16);
      h_16 = (ATerm) ATgetNext((ATermList) d_16);
      c_16 :
      if(match_cons(e_16, sym__2))
        {
          f_16 = ATgetArgument(e_16, 0);
          g_16 = ATgetArgument(e_16, 1);
          {
            ATerm l_16 = NULL,m_16 = NULL,s_16 = NULL,y_16 = NULL;
            ATerm x_5;
            x_5 = t;
            {
              ATerm n_16 = NULL;
              ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
              t = not_null(g_16);
              {
                n_16 = t;
                {
                  t = SSL_explode_term(not_null(n_16));
                  {
                    p_16 = t;
                    w_15 :
                    if(match_cons(p_16, sym__2))
                      {
                        q_16 = ATgetArgument(p_16, 0);
                        r_16 = ATgetArgument(p_16, 1);
                        {
                          if(((l_16 != NULL) && (l_16 != q_16)))
                            _fail(q_16);
                          else
                            l_16 = q_16;
                          if(((m_16 != NULL) && (m_16 != r_16)))
                            _fail(r_16);
                          else
                            m_16 = r_16;
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
            t = x_5;
            {
              ATerm y_5;
              y_5 = t;
              {
                ATerm t_16 = NULL;
                ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
                t = not_null(f_16);
                {
                  t_16 = t;
                  {
                    t = SSL_explode_term(not_null(t_16));
                    {
                      v_16 = t;
                      z_15 :
                      if(match_cons(v_16, sym__2))
                        {
                          w_16 = ATgetArgument(v_16, 0);
                          x_16 = ATgetArgument(v_16, 1);
                          {
                            if(((l_16 != NULL) && (l_16 != w_16)))
                              _fail(w_16);
                            else
                              l_16 = w_16;
                            if(((s_16 != NULL) && (s_16 != x_16)))
                              _fail(x_16);
                            else
                              s_16 = x_16;
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
              t = y_5;
              {
                ATerm z_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_16), not_null(m_16));
                {
                  t = zip_1(t, _id);
                  {
                    z_16 = t;
                    if(((y_16 != NULL) && (y_16 != z_16)))
                      _fail(z_16);
                    else
                      y_16 = z_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_16), not_null(h_16));
                  {
                    ATerm z_5 = t;
                    int a_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(a_6);
                      }
                    else
                      {
                        t = z_5;
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
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  j_17 = t;
  h_17 :
  if(((ATgetType(j_17) == AT_LIST) && !(ATisEmpty(j_17))))
    {
      k_17 = ATgetFirst((ATermList) j_17);
      n_17 = (ATerm) ATgetNext((ATermList) j_17);
      i_17 :
      if(match_cons(k_17, sym__2))
        {
          l_17 = ATgetArgument(k_17, 0);
          m_17 = ATgetArgument(k_17, 1);
          {
            ATerm p_17 = NULL;
            if(((l_17 != NULL) && (l_17 != m_17)))
              _fail(m_17);
            else
              l_17 = m_17;
            {
              if(((p_17 != NULL) && (p_17 != n_17)))
                _fail(n_17);
              else
                p_17 = n_17;
              t = not_null(p_17);
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
ATerm while_not_2 (ATerm t, ATerm m_82 (ATerm), ATerm n_82 (ATerm))
{
  ATerm r_17 (ATerm t)
  {
    ATerm b_6 = t;
    int c_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_82(t);
        LocalPopChoice(c_6);
      }
    else
      {
        t = b_6;
        {
          t = n_82(t);
          t = r_17(t);
        }
      }
    return(t);
  }
  t = r_17(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm r_82 (ATerm))
{
  t = p_82(t);
  t = while_not_2(t, q_82, r_82);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm d_6 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        ATerm t_17 = NULL;
        t_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(t_17));
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm k_6 = t;
        int l_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              ATerm m_6 = t;
              int n_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(n_6);
                }
              else
                {
                  t = m_6;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, x_0);
            LocalPopChoice(l_6);
          }
        else
          {
            t = k_6;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, u_0, v_0, w_0);
      LocalPopChoice(e_6);
    }
  else
    {
      t = d_6;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm z_17 (ATerm t)
  {
    ATerm r_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_80(t);
        LocalPopChoice(t_6);
      }
    else
      {
        t = r_6;
        {
          ATerm v_6 = t;
          int y_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_17 = NULL;
              ATerm z_6;
              z_6 = t;
              {
                ATerm y_17 = NULL;
                t = i_80(t);
                {
                  y_17 = t;
                  if(((x_17 != NULL) && (x_17 != y_17)))
                    _fail(y_17);
                  else
                    x_17 = y_17;
                }
              }
              t = z_6;
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = not_null(x_17);
                    return(t);
                  }
                  t = split_2(t, z_17, a_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = j_80(t, y_0, z_17, z_0);
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm c_1 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, b_1, c_1, _id);
                }
              }
              LocalPopChoice(y_6);
            }
          else
            {
              t = v_6;
              {
                ATerm d_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm e_1 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, d_1, e_1, z_17);
              }
            }
        }
      }
    return(t);
  }
  t = z_17(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm a_7 = t;
    int b_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(b_7);
      }
    else
      {
        t = a_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, f_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  d_18 :
  if(match_cons(i_18, sym_LRule_1))
    {
      j_18 = ATgetArgument(i_18, 0);
      e_18 :
      if(match_cons(j_18, sym_Rule_3))
        {
          f_18 = ATgetArgument(j_18, 0);
          g_18 = ATgetArgument(j_18, 1);
          h_18 = ATgetArgument(j_18, 2);
          {
            t = not_null(f_18);
            t = tvars_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(i_18, sym_Scope_2))
        {
          j_18 = ATgetArgument(i_18, 0);
          k_18 = ATgetArgument(i_18, 1);
          t = not_null(j_18);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm b_19 = NULL,c_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym_Var_1))
    {
      c_19 = ATgetArgument(b_19, 0);
      {
        ATerm c_7 = t;
        int d_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_19 = NULL,h_19 = NULL;
            ATerm g_19 = NULL;
            t = SSLgetAnnotations(not_null(b_19));
            {
              g_19 = t;
              if(((f_19 != NULL) && (f_19 != g_19)))
                _fail(g_19);
              else
                f_19 = g_19;
            }
            {
              t = not_null(c_19);
              {
                ATerm j_19 = NULL;
                t = m_0(t);
                {
                  h_19 = t;
                  {
                    ATerm k_19 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_19)), not_null(f_19));
                    {
                      k_19 = t;
                      if(((j_19 != NULL) && (j_19 != k_19)))
                        _fail(k_19);
                      else
                        j_19 = k_19;
                    }
                    t = not_null(j_19);
                  }
                }
              }
            }
            LocalPopChoice(d_7);
          }
        else
          {
            t = c_7;
            {
              ATerm n_19 = NULL,p_19 = NULL;
              ATerm o_19 = NULL;
              t = SSLgetAnnotations(not_null(b_19));
              {
                o_19 = t;
                if(((n_19 != NULL) && (n_19 != o_19)))
                  _fail(o_19);
                else
                  n_19 = o_19;
              }
              {
                t = not_null(c_19);
                {
                  ATerm r_19 = NULL;
                  t = m_0(t);
                  {
                    p_19 = t;
                    {
                      ATerm s_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_19)), not_null(n_19));
                      {
                        s_19 = t;
                        if(((r_19 != NULL) && (r_19 != s_19)))
                          _fail(s_19);
                        else
                          r_19 = s_19;
                      }
                      t = not_null(r_19);
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
ATerm DistBinding_2 (ATerm t, ATerm p_78 (ATerm), ATerm q_78 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym__3))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      i_20 = ATgetArgument(f_20, 2);
      {
        t = not_null(g_20);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm m_20 = NULL;
            m_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_20), not_null(i_20));
              t = p_78(t);
            }
            return(t);
          }
          ATerm h_1 (ATerm t)
          {
            ATerm o_20 = NULL;
            o_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), not_null(h_20));
              t = p_78(t);
            }
            return(t);
          }
          t = q_78(t, g_1, h_1, _id);
        }
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
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  u_20 :
  if(match_cons(v_20, sym__2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_20)), not_null(w_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  f_21 = t;
  c_21 :
  if(match_cons(f_21, sym__2))
    {
      g_21 = ATgetArgument(f_21, 0);
      j_21 = ATgetArgument(f_21, 1);
      d_21 :
      if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
        {
          h_21 = ATgetFirst((ATermList) g_21);
          i_21 = (ATerm) ATgetNext((ATermList) g_21);
          e_21 :
          if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
            {
              k_21 = ATgetFirst((ATermList) j_21);
              l_21 = (ATerm) ATgetNext((ATermList) j_21);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(h_21), not_null(k_21)), (ATerm) ATmakeAppl(sym__2, not_null(i_21), not_null(l_21)));
            }
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
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
  t_22 = t;
  q_22 :
  if(match_cons(t_22, sym__2))
    {
      u_22 = ATgetArgument(t_22, 0);
      v_22 = ATgetArgument(t_22, 1);
      r_22 :
      if(((ATgetType(u_22) == AT_LIST) && ATisEmpty(u_22)))
        {
          s_22 :
          if(((ATgetType(v_22) == AT_LIST) && ATisEmpty(v_22)))
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
ATerm genzip_4 (ATerm t, ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm h_70 (ATerm))
{
  ATerm x_22 (ATerm t)
  {
    ATerm e_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_70(t);
        LocalPopChoice(f_7);
      }
    else
      {
        t = e_7;
        {
          t = f_70(t);
          {
            t = _2(t, h_70, x_22);
            t = g_70(t);
          }
        }
      }
    return(t);
  }
  t = x_22(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm j_70 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, j_70);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm j_78 (ATerm), ATerm k_78 (ATerm, ATerm (ATerm)))
{
  ATerm f_23 = NULL,g_23 = NULL,i_23 = NULL;
  f_23 = t;
  e_23 :
  if(match_cons(f_23, sym__2))
    {
      g_23 = ATgetArgument(f_23, 0);
      i_23 = ATgetArgument(f_23, 1);
      {
        ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,t_23 = NULL;
        ATerm g_7;
        g_7 = t;
        {
          ATerm o_23 = NULL;
          t = not_null(g_23);
          {
            ATerm p_23 = NULL;
            t = j_78(t);
            {
              o_23 = t;
              {
                if(((l_23 != NULL) && (l_23 != o_23)))
                  _fail(o_23);
                else
                  l_23 = o_23;
                {
                  ATerm q_23 = NULL,s_23 = NULL;
                  t = map_1(t, new_0);
                  {
                    p_23 = t;
                    {
                      if(((m_23 != NULL) && (m_23 != p_23)))
                        _fail(p_23);
                      else
                        m_23 = p_23;
                      {
                        ATerm r_23 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_23), not_null(m_23));
                        {
                          t = zip_1(t, _id);
                          {
                            r_23 = t;
                            if(((q_23 != NULL) && (q_23 != r_23)))
                              _fail(r_23);
                            else
                              q_23 = r_23;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(i_23));
                          {
                            ATerm h_7 = t;
                            int i_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(i_7);
                              }
                            else
                              {
                                t = h_7;
                                t = conc_more_lists_0(t);
                              }
                            {
                              s_23 = t;
                              if(((n_23 != NULL) && (n_23 != s_23)))
                                _fail(s_23);
                              else
                                n_23 = s_23;
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
        t = g_7;
        {
          ATerm u_23 = NULL;
          t = not_null(g_23);
          {
            ATerm i_1 (ATerm t)
            {
              t = not_null(m_23);
              return(t);
            }
            t = k_78(t, i_1);
            {
              u_23 = t;
              if(((t_23 != NULL) && (t_23 != u_23)))
                _fail(u_23);
              else
                t_23 = u_23;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(t_23), not_null(i_23), not_null(n_23));
        }
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
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
  e_24 = t;
  c_24 :
  if(match_cons(e_24, sym__2))
    {
      f_24 = ATgetArgument(e_24, 0);
      g_24 = ATgetArgument(e_24, 1);
      d_24 :
      if(((ATgetType(g_24) == AT_LIST) && !(ATisEmpty(g_24))))
        {
          h_24 = ATgetFirst((ATermList) g_24);
          i_24 = (ATerm) ATgetNext((ATermList) g_24);
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), not_null(i_24));
        }
      else
        {
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
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  q_24 = t;
  n_24 :
  if(match_cons(q_24, sym__2))
    {
      r_24 = ATgetArgument(q_24, 0);
      s_24 = ATgetArgument(q_24, 1);
      o_24 :
      if(((ATgetType(s_24) == AT_LIST) && !(ATisEmpty(s_24))))
        {
          t_24 = ATgetFirst((ATermList) s_24);
          w_24 = (ATerm) ATgetNext((ATermList) s_24);
          p_24 :
          if(match_cons(t_24, sym__2))
            {
              u_24 = ATgetArgument(t_24, 0);
              v_24 = ATgetArgument(t_24, 1);
              {
                ATerm y_24 = NULL;
                if(((r_24 != NULL) && (r_24 != u_24)))
                  _fail(u_24);
                else
                  r_24 = u_24;
                {
                  if(((y_24 != NULL) && (y_24 != v_24)))
                    _fail(v_24);
                  else
                    y_24 = v_24;
                  t = not_null(y_24);
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
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm u_78 (ATerm, ATerm (ATerm)))
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  d_25 = t;
  c_25 :
  if(match_cons(d_25, sym__2))
    {
      e_25 = ATgetArgument(d_25, 0);
      f_25 = ATgetArgument(d_25, 1);
      {
        t = not_null(e_25);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              t = not_null(f_25);
              return(t);
            }
            t = split_2(t, _id, k_1);
            t = lookup_0(t);
            return(t);
          }
          t = u_78(t, j_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm n_79 (ATerm))
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  l_25 :
  if(match_cons(m_25, sym__2))
    {
      n_25 = ATgetArgument(m_25, 0);
      o_25 = ATgetArgument(m_25, 1);
      {
        t = not_null(n_25);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm r_25 = NULL;
            r_25 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_25), not_null(o_25));
              t = n_79(t);
            }
            return(t);
          }
          t = _all(t, l_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm x_78 (ATerm))
{
  ATerm v_25 (ATerm t)
  {
    ATerm p_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_78(t);
        LocalPopChoice(t_7);
      }
    else
      {
        t = p_7;
        t = all_dist_1(t, v_25);
      }
    return(t);
  }
  t = v_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm e_78 (ATerm, ATerm (ATerm)), ATerm f_78 (ATerm), ATerm g_78 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm h_78 (ATerm, ATerm (ATerm)))
{
  ATerm x_25 = NULL;
  x_25 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_25), (ATerm) ATempty);
    {
      ATerm a_26 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          ATerm v_7 = t;
          int y_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, e_78);
              LocalPopChoice(y_7);
            }
          else
            {
              t = v_7;
              {
                t = RnBinding_2(t, f_78, h_78);
                t = DistBinding_2(t, a_26, g_78);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, m_1);
        return(t);
      }
      t = a_26(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm b_26 (ATerm t, ATerm c_26 (ATerm))
  {
    t = Scope_2(t, c_26, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, b_26);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm g_52 (ATerm), ATerm h_52 (ATerm))
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  p_26 = t;
  m_26 :
  if(match_cons(p_26, sym__2))
    {
      q_26 = ATgetArgument(p_26, 0);
      r_26 = ATgetArgument(p_26, 1);
      {
        ATerm v_26 = NULL,x_26 = NULL;
        ATerm w_26 = NULL;
        t = SSLgetAnnotations(not_null(p_26));
        {
          w_26 = t;
          if(((v_26 != NULL) && (v_26 != w_26)))
            _fail(w_26);
          else
            v_26 = w_26;
        }
        {
          t = not_null(q_26);
          {
            ATerm z_26 = NULL;
            t = g_52(t);
            {
              x_26 = t;
              {
                t = not_null(r_26);
                {
                  ATerm b_27 = NULL;
                  t = h_52(t);
                  {
                    z_26 = t;
                    {
                      ATerm c_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_26), not_null(z_26)), not_null(v_26));
                      {
                        c_27 = t;
                        if(((b_27 != NULL) && (b_27 != c_27)))
                          _fail(c_27);
                        else
                          b_27 = c_27;
                      }
                      t = not_null(b_27);
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
  ATerm k_27 = NULL;
  ATerm z_7;
  z_7 = t;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm l_27 = NULL,m_27 = NULL;
      l_27 = t;
      j_27 :
      if(match_cons(l_27, sym_Program_1))
        {
          m_27 = ATgetArgument(l_27, 0);
          if(((k_27 != NULL) && (k_27 != m_27)))
            _fail(m_27);
          else
            k_27 = m_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, n_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_8), not_null(k_27)), term_b_8));
      {
        t = printnl_0(t);
        {
          t = term_d_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,x_27 = NULL;
  q_27 = t;
  p_27 :
  if(match_cons(q_27, sym__2))
    {
      r_27 = ATgetArgument(q_27, 0);
      x_27 = ATgetArgument(q_27, 1);
      {
        ATerm i_8;
        i_8 = t;
        t = SSL_printnl(not_null(r_27), not_null(x_27));
        t = i_8;
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
  ATerm c_28 = NULL;
  c_28 = t;
  t = SSL_implode_string(not_null(c_28));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      {
        ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
        h_28 = t;
        g_28 :
        if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
          {
            i_28 = ATgetFirst((ATermList) h_28);
            j_28 = (ATerm) ATgetNext((ATermList) h_28);
            {
              t = not_null(i_28);
              {
                ATerm o_1 (ATerm t)
                {
                  t = not_null(j_28);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_1);
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
  ATerm x_28 = NULL;
  ATerm z_28 = NULL;
  x_28 = t;
  {
    ATerm a_29 = NULL;
    ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
    t = not_null(x_28);
    {
      a_29 = t;
      {
        t = SSL_explode_term(not_null(a_29));
        {
          c_29 = t;
          v_28 :
          if(match_cons(c_29, sym__2))
            {
              d_29 = ATgetArgument(c_29, 0);
              e_29 = ATgetArgument(c_29, 1);
              w_28 :
              if(match_string(d_29, ""))
                {
                  if(((z_28 != NULL) && (z_28 != e_29)))
                    _fail(e_29);
                  else
                    z_28 = e_29;
                }
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
      t = not_null(z_28);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_72 (ATerm))
{
  ATerm i_29 (ATerm t)
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_29);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        {
          t = Nil_0(t);
          t = h_72(t);
        }
      }
    return(t);
  }
  t = i_29(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  l_29 = t;
  k_29 :
  if(match_cons(l_29, sym__2))
    {
      m_29 = ATgetArgument(l_29, 0);
      n_29 = ATgetArgument(l_29, 1);
      {
        t = not_null(m_29);
        {
          ATerm p_1 (ATerm t)
          {
            t = not_null(n_29);
            return(t);
          }
          t = at_end_1(t, p_1);
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
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  t = SSL_explode_string(not_null(s_29));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm v_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = v_8;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm a_9;
  a_9 = t;
  {
    ATerm z_29 = NULL,f_30 = NULL;
    ATerm b_9;
    b_9 = t;
    {
      ATerm a_30 = NULL;
      t = d_84(t);
      {
        a_30 = t;
        if(((z_29 != NULL) && (z_29 != a_30)))
          _fail(a_30);
        else
          z_29 = a_30;
      }
    }
    t = b_9;
    {
      ATerm g_30 = NULL;
      g_30 = t;
      if(((f_30 != NULL) && (f_30 != g_30)))
        _fail(g_30);
      else
        f_30 = g_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_30)), not_null(z_29)));
        t = printnl_0(t);
      }
    }
  }
  t = a_9;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  t = SSL_is_string(not_null(n_30));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm p_9 = t;
              int q_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(q_9);
                }
              else
                {
                  t = p_9;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, q_1);
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            {
              ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
              e_31 = t;
              d_31 :
              if(match_cons(e_31, sym_Path_1))
                {
                  f_31 = ATgetArgument(e_31, 0);
                  t = not_null(f_31);
                }
              else
                {
                  if(match_cons(e_31, sym_Var_1))
                    {
                      f_31 = ATgetArgument(e_31, 0);
                      {
                        t = not_null(f_31);
                        {
                          ATerm r_9 = t;
                          int s_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(s_9);
                            }
                          else
                            {
                              t = r_9;
                              {
                                ATerm r_1 (ATerm t)
                                {
                                  t = term_t_9;
                                  return(t);
                                }
                                t = debug_1(t, r_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_31, sym_Prefix_2))
                        {
                          f_31 = ATgetArgument(e_31, 0);
                          g_31 = ATgetArgument(e_31, 1);
                          {
                            ATerm l_31 = NULL,n_31 = NULL;
                            ATerm u_9;
                            u_9 = t;
                            {
                              ATerm m_31 = NULL;
                              t = not_null(f_31);
                              {
                                t = eval_config_0(t);
                                {
                                  m_31 = t;
                                  if(((l_31 != NULL) && (l_31 != m_31)))
                                    _fail(m_31);
                                  else
                                    l_31 = m_31;
                                }
                              }
                            }
                            t = u_9;
                            {
                              ATerm o_31 = NULL;
                              t = not_null(g_31);
                              {
                                t = eval_config_0(t);
                                {
                                  o_31 = t;
                                  if(((n_31 != NULL) && (n_31 != o_31)))
                                    _fail(o_31);
                                  else
                                    n_31 = o_31;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_31), not_null(n_31));
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
  ATerm w_31 = NULL;
  w_31 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_9, not_null(w_31));
    {
      t = table_get_0(t);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm b_10;
              b_10 = t;
              {
                ATerm y_31 = NULL;
                ATerm z_31 = NULL;
                z_31 = t;
                if(((y_31 != NULL) && (y_31 != z_31)))
                  _fail(z_31);
                else
                  y_31 = z_31;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_v_9, not_null(w_31), not_null(y_31));
                  t = table_put_0(t);
                }
              }
              t = b_10;
            }
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm k_91 (ATerm))
{
  ATerm c_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_10;
      j_10 = t;
      {
        ATerm d_32 = NULL;
        ATerm e_32 = NULL;
        t = term_k_10;
        {
          t = get_config_0(t);
          {
            e_32 = t;
            if(((d_32 != NULL) && (d_32 != e_32)))
              _fail(e_32);
            else
              d_32 = e_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_32), term_l_10);
          t = geq_0(t);
        }
      }
      t = j_10;
      t = k_91(t);
      LocalPopChoice(g_10);
    }
  else
    {
      t = c_10;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  h_32 :
  if(match_cons(i_32, sym__2))
    {
      j_32 = ATgetArgument(i_32, 0);
      k_32 = ATgetArgument(i_32, 1);
      t = SSL_WriteToTextFile(not_null(j_32), not_null(k_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  c_33 :
  if(match_cons(d_33, sym__2))
    {
      e_33 = ATgetArgument(d_33, 0);
      f_33 = ATgetArgument(d_33, 1);
      t = SSL_WriteToBinaryFile(not_null(e_33), not_null(f_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm q_33 = NULL;
  ATerm m_10;
  m_10 = t;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm n_10 = t;
      int o_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            ATerm r_33 = NULL,s_33 = NULL;
            r_33 = t;
            n_33 :
            if(match_cons(r_33, sym_Output_1))
              {
                s_33 = ATgetArgument(r_33, 0);
                if(((q_33 != NULL) && (q_33 != s_33)))
                  _fail(s_33);
                else
                  q_33 = s_33;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, t_1);
          LocalPopChoice(o_10);
        }
      else
        {
          t = n_10;
          {
            ATerm t_33 = NULL;
            t = term_p_10;
            {
              t_33 = t;
              if(((q_33 != NULL) && (q_33 != t_33)))
                _fail(t_33);
              else
                q_33 = t_33;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_1, _id);
  }
  t = m_10;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm v_1 (ATerm t)
      {
        t = not_null(q_33);
        return(t);
      }
      t = split_2(t, v_1, _id);
      return(t);
    }
    t = _2(t, _id, u_1);
    {
      ATerm q_10 = t;
      int u_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              ATerm u_33 = NULL;
              u_33 = t;
              p_33 :
              if(!(match_cons(u_33, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, x_1);
            return(t);
          }
          t = _2(t, w_1, WriteToBinaryFile_0);
          LocalPopChoice(u_10);
        }
      else
        {
          t = q_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm v_82 (ATerm))
{
  ATerm b_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
  ATerm v_10;
  v_10 = t;
  t = dtime_0(t);
  t = v_10;
  {
    t = v_82(t);
    {
      ATerm z_10;
      z_10 = t;
      {
        ATerm c_34 = NULL;
        t = dtime_0(t);
        {
          c_34 = t;
          if(((b_34 != NULL) && (b_34 != c_34)))
            _fail(c_34);
          else
            b_34 = c_34;
        }
      }
      t = z_10;
      {
        d_34 = t;
        z_33 :
        if(match_cons(d_34, sym__2))
          {
            e_34 = ATgetArgument(d_34, 0);
            f_34 = ATgetArgument(d_34, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_34)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_34))), not_null(f_34));
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
  ATerm l_34 = NULL;
  l_34 = t;
  t = SSL_ReadFromFile(not_null(l_34));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_69 (ATerm), ATerm f_69 (ATerm))
{
  ATerm q_34 = NULL,s_34 = NULL;
  ATerm c_11;
  c_11 = t;
  {
    ATerm r_34 = NULL;
    t = e_69(t);
    {
      r_34 = t;
      if(((q_34 != NULL) && (q_34 != r_34)))
        _fail(r_34);
      else
        q_34 = r_34;
    }
  }
  t = c_11;
  {
    ATerm t_34 = NULL;
    t = f_69(t);
    {
      t_34 = t;
      if(((s_34 != NULL) && (s_34 != t_34)))
        _fail(t_34);
      else
        s_34 = t_34;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_34), not_null(s_34));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_34 = NULL;
  ATerm d_11;
  d_11 = t;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 (ATerm t)
        {
          ATerm a_35 = NULL,b_35 = NULL;
          a_35 = t;
          x_34 :
          if(match_cons(a_35, sym_Input_1))
            {
              b_35 = ATgetArgument(a_35, 0);
              if(((z_34 != NULL) && (z_34 != b_35)))
                _fail(b_35);
              else
                z_34 = b_35;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, y_1);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        {
          ATerm c_35 = NULL;
          t = term_g_11;
          {
            c_35 = t;
            if(((z_34 != NULL) && (z_34 != c_35)))
              _fail(c_35);
            else
              z_34 = c_35;
          }
        }
      }
  }
  t = d_11;
  {
    ATerm z_1 (ATerm t)
    {
      t = not_null(z_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm g_35 = NULL;
    g_35 = t;
    f_35 :
    if(!(match_string(g_35, "-v")))
      {
        if(!(match_string(g_35, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_j_11;
    t = set_config_0(t);
    t = term_k_11;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_p_11;
    return(t);
  }
  t = Option_3(t, a_2, b_2, c_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm j_35 = NULL;
    j_35 = t;
    h_35 :
    if(!(match_string(j_35, "-k")))
      {
        if(!(match_string(j_35, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm q_11;
    q_11 = t;
    {
      ATerm k_35 = NULL;
      ATerm l_35 = NULL;
      t = string_to_int_0(t);
      {
        l_35 = t;
        if(((k_35 != NULL) && (k_35 != l_35)))
          _fail(l_35);
        else
          k_35 = l_35;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_11, not_null(k_35));
        t = set_config_0(t);
      }
    }
    t = q_11;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    t = term_v_11;
    return(t);
  }
  t = ArgOption_3(t, d_2, e_2, f_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  t = SSL_string_to_int(not_null(o_35));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm x_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        ATerm w_35 = NULL;
        w_35 = t;
        r_35 :
        if(!(match_string(w_35, "-S")))
          {
            if(!(match_string(w_35, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm h_2 (ATerm t)
      {
        t = term_c_12;
        t = set_config_0(t);
        t = term_d_12;
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        t = term_e_12;
        return(t);
      }
      t = Option_3(t, g_2, h_2, i_2);
      LocalPopChoice(a_12);
    }
  else
    {
      t = x_11;
      {
        ATerm f_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_2 (ATerm t)
            {
              ATerm x_35 = NULL;
              x_35 = t;
              s_35 :
              if(!(match_string(x_35, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_2 (ATerm t)
            {
              ATerm a_36 = NULL;
              ATerm k_12;
              k_12 = t;
              {
                ATerm y_35 = NULL;
                ATerm z_35 = NULL;
                t = string_to_int_0(t);
                {
                  z_35 = t;
                  if(((y_35 != NULL) && (y_35 != z_35)))
                    _fail(z_35);
                  else
                    y_35 = z_35;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_10, not_null(y_35));
                  t = set_config_0(t);
                }
              }
              t = k_12;
              {
                ATerm b_36 = NULL;
                b_36 = t;
                if(((a_36 != NULL) && (a_36 != b_36)))
                  _fail(b_36);
                else
                  a_36 = b_36;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_36));
              }
              return(t);
            }
            ATerm l_2 (ATerm t)
            {
              t = term_l_12;
              return(t);
            }
            t = ArgOption_3(t, j_2, k_2, l_2);
            LocalPopChoice(j_12);
          }
        else
          {
            t = f_12;
            {
              ATerm m_2 (ATerm t)
              {
                ATerm c_36 = NULL;
                c_36 = t;
                v_35 :
                if(!(match_string(c_36, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_2 (ATerm t)
              {
                t = term_q_12;
                t = set_config_0(t);
                t = term_r_12;
                return(t);
              }
              ATerm o_2 (ATerm t)
              {
                t = term_w_12;
                return(t);
              }
              t = Option_3(t, m_2, n_2, o_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm i_36 = NULL;
    i_36 = t;
    f_36 :
    if(!(match_string(i_36, "-o")))
      {
        if(!(match_string(i_36, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm l_36 = NULL;
    ATerm c_13;
    c_13 = t;
    {
      ATerm j_36 = NULL;
      ATerm k_36 = NULL;
      k_36 = t;
      if(((j_36 != NULL) && (j_36 != k_36)))
        _fail(k_36);
      else
        j_36 = k_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_13, not_null(j_36));
        t = set_config_0(t);
      }
    }
    t = c_13;
    {
      ATerm m_36 = NULL;
      m_36 = t;
      if(((l_36 != NULL) && (l_36 != m_36)))
        _fail(m_36);
      else
        l_36 = m_36;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_36));
    }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_i_13;
    return(t);
  }
  t = ArgOption_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm s_2 (ATerm t)
        {
          ATerm q_36 = NULL;
          q_36 = t;
          p_36 :
          if(!(match_string(q_36, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_2 (ATerm t)
        {
          t = term_q_13;
          t = set_config_0(t);
          t = term_r_13;
          return(t);
        }
        ATerm u_2 (ATerm t)
        {
          t = term_s_13;
          return(t);
        }
        t = Option_3(t, s_2, t_2, u_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  w_36 = t;
  u_36 :
  if(match_string(w_36, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(w_36) == AT_LIST) && !(ATisEmpty(w_36))))
        {
          x_36 = ATgetFirst((ATermList) w_36);
          y_36 = (ATerm) ATgetNext((ATermList) w_36);
          v_36 :
          if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
            {
              z_36 = ATgetFirst((ATermList) y_36);
              a_37 = (ATerm) ATgetNext((ATermList) y_36);
              {
                ATerm e_37 = NULL;
                ATerm v_13;
                v_13 = t;
                {
                  t = not_null(x_36);
                  t = j_0(t);
                }
                t = v_13;
                {
                  ATerm f_37 = NULL;
                  t = not_null(z_36);
                  {
                    t = k_0(t);
                    {
                      f_37 = t;
                      if(((e_37 != NULL) && (e_37 != f_37)))
                        _fail(f_37);
                      else
                        e_37 = f_37;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_37)), not_null(e_37));
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
  ATerm v_2 (ATerm t)
  {
    ATerm m_37 = NULL;
    m_37 = t;
    j_37 :
    if(!(match_string(m_37, "-i")))
      {
        if(!(match_string(m_37, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm p_37 = NULL;
    ATerm y_13;
    y_13 = t;
    {
      ATerm n_37 = NULL;
      ATerm o_37 = NULL;
      o_37 = t;
      if(((n_37 != NULL) && (n_37 != o_37)))
        _fail(o_37);
      else
        n_37 = o_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_14, not_null(n_37));
        t = set_config_0(t);
      }
    }
    t = y_13;
    {
      ATerm q_37 = NULL;
      q_37 = t;
      if(((p_37 != NULL) && (p_37 != q_37)))
        _fail(q_37);
      else
        p_37 = q_37;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_37));
    }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_d_14;
    return(t);
  }
  t = ArgOption_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATempty, term_m_14));
  {
    t = printnl_0(t);
    {
      t = term_d_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_37 = NULL;
  u_37 = t;
  t = SSL_TicksToSeconds(not_null(u_37));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  y_37 :
  if(match_cons(z_37, sym__2))
    {
      a_38 = ATgetArgument(z_37, 0);
      b_38 = ATgetArgument(z_37, 1);
      {
        ATerm n_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_38), not_null(b_38));
            LocalPopChoice(s_14);
          }
        else
          {
            t = n_14;
            t = SSL_addr(not_null(a_38), not_null(b_38));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_76 (ATerm), ATerm q_76 (ATerm))
{
  ATerm t_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_76(t);
      LocalPopChoice(v_14);
    }
  else
    {
      t = t_14;
      {
        ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
        i_38 = t;
        h_38 :
        if(((ATgetType(i_38) == AT_LIST) && !(ATisEmpty(i_38))))
          {
            j_38 = ATgetFirst((ATermList) i_38);
            k_38 = (ATerm) ATgetNext((ATermList) i_38);
            {
              ATerm x_38 = NULL;
              ATerm y_38 = NULL;
              t = not_null(k_38);
              {
                t = foldr_2(t, p_76, q_76);
                {
                  y_38 = t;
                  if(((x_38 != NULL) && (x_38 != y_38)))
                    _fail(y_38);
                  else
                    x_38 = y_38;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), not_null(x_38));
                t = q_76(t);
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
ATerm crush_2 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm))
{
  ATerm f_39 = NULL;
  ATerm j_39 = NULL;
  f_39 = t;
  {
    ATerm k_39 = NULL;
    ATerm m_39 = NULL,s_39 = NULL,t_39 = NULL;
    t = not_null(f_39);
    {
      k_39 = t;
      {
        t = SSL_explode_term(not_null(k_39));
        {
          m_39 = t;
          e_39 :
          if(match_cons(m_39, sym__2))
            {
              s_39 = ATgetArgument(m_39, 0);
              t_39 = ATgetArgument(m_39, 1);
              if(((j_39 != NULL) && (j_39 != t_39)))
                _fail(t_39);
              else
                j_39 = t_39;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_39);
      t = foldr_2(t, n_75, o_75);
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
    ATerm y_2 (ATerm t)
    {
      t = term_b_12;
      return(t);
    }
    t = crush_2(t, y_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  z_39 = t;
  y_39 :
  if(match_cons(z_39, sym__2))
    {
      a_40 = ATgetArgument(z_39, 0);
      b_40 = ATgetArgument(z_39, 1);
      {
        ATerm w_14;
        w_14 = t;
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_40), not_null(b_40));
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              t = SSL_gtr(not_null(a_40), not_null(b_40));
            }
        }
        t = w_14;
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
  ATerm h_40 = NULL;
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
      i_40 = t;
      g_40 :
      if(match_cons(i_40, sym__2))
        {
          j_40 = ATgetArgument(i_40, 0);
          k_40 = ATgetArgument(i_40, 1);
          {
            if(((h_40 != NULL) && (h_40 != j_40)))
              _fail(j_40);
            else
              h_40 = j_40;
            if(((h_40 != NULL) && (h_40 != k_40)))
              _fail(k_40);
            else
              h_40 = k_40;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_91 (ATerm))
{
  ATerm f_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_15;
      p_15 = t;
      {
        ATerm o_40 = NULL;
        ATerm p_40 = NULL;
        t = term_k_10;
        {
          t = get_config_0(t);
          {
            p_40 = t;
            if(((o_40 != NULL) && (o_40 != p_40)))
              _fail(p_40);
            else
              o_40 = p_40;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_40), term_d_8);
          t = geq_0(t);
        }
      }
      t = p_15;
      t = j_91(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = f_15;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm v_40 = NULL,x_40 = NULL;
    ATerm q_15;
    q_15 = t;
    {
      ATerm w_40 = NULL;
      t = run_time_0(t);
      {
        w_40 = t;
        if(((v_40 != NULL) && (v_40 != w_40)))
          _fail(w_40);
        else
          v_40 = w_40;
      }
    }
    t = q_15;
    {
      ATerm y_40 = NULL;
      t = term_r_15;
      {
        t = get_config_0(t);
        {
          y_40 = t;
          if(((x_40 != NULL) && (x_40 != y_40)))
            _fail(y_40);
          else
            x_40 = y_40;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_15), not_null(v_40)), term_s_15), not_null(x_40)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_2);
  {
    t = term_b_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_41 = NULL;
  f_41 = t;
  e_41 :
  if(match_cons(f_41, sym_Version_0))
    {
      ATerm h_41 = NULL,j_41 = NULL;
      ATerm u_15;
      u_15 = t;
      {
        ATerm i_41 = NULL;
        t = SSLgetAnnotations(not_null(f_41));
        {
          i_41 = t;
          if(((h_41 != NULL) && (h_41 != i_41)))
            _fail(i_41);
          else
            h_41 = i_41;
        }
      }
      t = u_15;
      {
        ATerm k_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_41));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_82 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm v_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(x_15);
      }
    else
      {
        t = v_15;
        {
          ATerm y_15 = t;
          int a_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(a_16);
            }
          else
            {
              t = y_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, a_3);
  t = t_82(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_41 = NULL;
  p_41 = t;
  t = SSL_table_create(not_null(p_41));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_41 = NULL;
  v_41 = t;
  {
    ATerm i_16;
    i_16 = t;
    {
      t = term_j_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_16, term_k_16, not_null(v_41));
          t = table_put_0(t);
        }
      }
    }
    t = i_16;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_42 = NULL;
  a_42 = t;
  t = SSL_table_destroy(not_null(a_42));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_42 = NULL;
  e_42 = t;
  t = SSL_exit(not_null(e_42));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
  i_42 = t;
  h_42 :
  if(((ATgetType(i_42) == AT_LIST) && ATisEmpty(i_42)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_42) == AT_LIST) && !(ATisEmpty(i_42))))
        {
          j_42 = ATgetFirst((ATermList) i_42);
          k_42 = (ATerm) ATgetNext((ATermList) i_42);
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
  ATerm o_16;
  o_16 = t;
  {
    ATerm q_42 = NULL;
    ATerm t_42 = NULL;
    ATerm u_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = u_16;
        {
          ATerm r_42 = NULL;
          ATerm s_42 = NULL;
          s_42 = t;
          if(((r_42 != NULL) && (r_42 != s_42)))
            _fail(s_42);
          else
            r_42 = s_42;
          t = (ATerm) ATinsert(ATempty, not_null(r_42));
        }
      }
    {
      t_42 = t;
      if(((q_42 != NULL) && (q_42 != t_42)))
        _fail(t_42);
      else
        q_42 = t_42;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_10, not_null(q_42));
      t = printnl_0(t);
    }
  }
  t = o_16;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm w_42 (ATerm t)
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = Cons_2(t, s_71, w_42);
      }
    return(t);
  }
  t = w_42(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
  f_43 = t;
  c_43 :
  if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
    {
      d_43 = ATgetFirst((ATermList) f_43);
      e_43 = (ATerm) ATgetNext((ATermList) f_43);
      {
        ATerm i_43 = NULL;
        t = not_null(e_43);
        {
          ATerm d_17;
          d_17 = t;
          {
            ATerm j_43 = NULL,l_43 = NULL,n_43 = NULL;
            ATerm e_17;
            e_17 = t;
            {
              ATerm k_43 = NULL;
              t = i_0(t);
              {
                k_43 = t;
                if(((j_43 != NULL) && (j_43 != k_43)))
                  _fail(k_43);
                else
                  j_43 = k_43;
              }
            }
            t = e_17;
            {
              ATerm m_43 = NULL;
              t = not_null(d_43);
              {
                t = h_0(t);
                {
                  m_43 = t;
                  if(((l_43 != NULL) && (l_43 != m_43)))
                    _fail(m_43);
                  else
                    l_43 = m_43;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_43)), not_null(l_43));
                {
                  n_43 = t;
                  if(((i_43 != NULL) && (i_43 != n_43)))
                    _fail(n_43);
                  else
                    i_43 = n_43;
                }
              }
            }
          }
          t = d_17;
          {
            ATerm b_3 (ATerm t)
            {
              t = not_null(i_43);
              return(t);
            }
            t = reverse_acc_2(t, h_0, b_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_43) == AT_LIST) && ATisEmpty(f_43)))
        {
          {
            t = term_i_11;
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
  ATerm c_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_63 (ATerm))
{
  ATerm f_44 = NULL,g_44 = NULL;
  f_44 = t;
  e_44 :
  if(match_cons(f_44, sym_Program_1))
    {
      g_44 = ATgetArgument(f_44, 0);
      {
        ATerm j_44 = NULL,l_44 = NULL;
        ATerm k_44 = NULL;
        t = SSLgetAnnotations(not_null(f_44));
        {
          k_44 = t;
          if(((j_44 != NULL) && (j_44 != k_44)))
            _fail(k_44);
          else
            j_44 = k_44;
        }
        {
          t = not_null(g_44);
          {
            ATerm n_44 = NULL;
            t = h_63(t);
            {
              l_44 = t;
              {
                ATerm o_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_44)), not_null(j_44));
                {
                  o_44 = t;
                  if(((n_44 != NULL) && (n_44 != o_44)))
                    _fail(o_44);
                  else
                    n_44 = o_44;
                }
                t = not_null(n_44);
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
  ATerm w_44 = NULL;
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_44 = NULL;
      t = term_r_15;
      {
        t = get_config_0(t);
        {
          x_44 = t;
          if(((w_44 != NULL) && (w_44 != x_44)))
            _fail(x_44);
          else
            w_44 = x_44;
        }
      }
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      {
        ATerm d_3 (ATerm t)
        {
          ATerm g_3 (ATerm t)
          {
            ATerm y_44 = NULL;
            y_44 = t;
            if(((w_44 != NULL) && (w_44 != y_44)))
              _fail(y_44);
            else
              w_44 = y_44;
            return(t);
          }
          t = Program_1(t, g_3);
          return(t);
        }
        t = fetch_1(t, d_3);
      }
    }
  {
    t = term_o_17;
    {
      t = echo_0(t);
      {
        t = term_u_17;
        {
          t = table_get_0(t);
          {
            ATerm h_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, h_3);
            {
              ATerm i_3 (ATerm t)
              {
                ATerm z_44 = NULL;
                ATerm b_45 = NULL;
                b_45 = t;
                if(((z_44 != NULL) && (z_44 != b_45)))
                  _fail(b_45);
                else
                  z_44 = b_45;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_44)), term_v_17);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, i_3);
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
  ATerm w_17;
  w_17 = t;
  {
    ATerm g_45 = NULL;
    ATerm h_45 = NULL;
    h_45 = t;
    if(((g_45 != NULL) && (g_45 != h_45)))
      _fail(h_45);
    else
      g_45 = h_45;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATempty, not_null(g_45)));
      t = printnl_0(t);
    }
  }
  t = w_17;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm a_18;
  a_18 = t;
  {
    t = e_84(t);
    t = debug_0(t);
  }
  t = a_18;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_63 (ATerm))
{
  ATerm o_45 = NULL,p_45 = NULL;
  o_45 = t;
  n_45 :
  if(match_cons(o_45, sym_Undefined_1))
    {
      p_45 = ATgetArgument(o_45, 0);
      {
        ATerm s_45 = NULL,u_45 = NULL;
        ATerm t_45 = NULL;
        t = SSLgetAnnotations(not_null(o_45));
        {
          t_45 = t;
          if(((s_45 != NULL) && (s_45 != t_45)))
            _fail(t_45);
          else
            s_45 = t_45;
        }
        {
          t = not_null(p_45);
          {
            ATerm w_45 = NULL;
            t = i_63(t);
            {
              u_45 = t;
              {
                ATerm x_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_45)), not_null(s_45));
                {
                  x_45 = t;
                  if(((w_45 != NULL) && (w_45 != x_45)))
                    _fail(x_45);
                  else
                    w_45 = x_45;
                }
                t = not_null(w_45);
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
ATerm fetch_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm c_46 (ATerm t)
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_72, _id);
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        t = Cons_2(t, _id, c_46);
      }
    return(t);
  }
  t = c_46(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_86 (ATerm))
{
  t = fetch_1(t, l_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_46 = NULL;
  h_46 = t;
  g_46 :
  if(match_cons(h_46, sym_Help_0))
    {
      ATerm j_46 = NULL,l_46 = NULL;
      ATerm l_18;
      l_18 = t;
      {
        ATerm k_46 = NULL;
        t = SSLgetAnnotations(not_null(h_46));
        {
          k_46 = t;
          if(((j_46 != NULL) && (j_46 != k_46)))
            _fail(k_46);
          else
            j_46 = k_46;
        }
      }
      t = l_18;
      {
        ATerm m_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_46));
        {
          m_46 = t;
          if(((l_46 != NULL) && (l_46 != m_46)))
            _fail(m_46);
          else
            l_46 = m_46;
        }
        t = not_null(l_46);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_68(t);
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  x_46 = t;
  w_46 :
  if(match_cons(x_46, sym__2))
    {
      y_46 = ATgetArgument(x_46, 0);
      z_46 = ATgetArgument(x_46, 1);
      t = SSL_table_get(not_null(y_46), not_null(z_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  k_47 = t;
  j_47 :
  if(match_cons(k_47, sym__3))
    {
      l_47 = ATgetArgument(k_47, 0);
      m_47 = ATgetArgument(k_47, 1);
      n_47 = ATgetArgument(k_47, 2);
      {
        ATerm o_18;
        o_18 = t;
        {
          ATerm r_47 = NULL;
          ATerm s_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_47), not_null(m_47));
          {
            ATerm p_18 = t;
            int q_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_18);
              }
            else
              {
                t = p_18;
                t = (ATerm) ATempty;
              }
            {
              s_47 = t;
              if(((r_47 != NULL) && (r_47 != s_47)))
                _fail(s_47);
              else
                r_47 = s_47;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_47), not_null(m_47), (ATerm) ATinsert(CheckATermList(not_null(r_47)), not_null(n_47)));
            t = table_put_0(t);
          }
        }
        t = o_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_87 (ATerm))
{
  ATerm w_47 = NULL;
  ATerm x_47 = NULL;
  t = term_i_11;
  {
    t = q_87(t);
    {
      x_47 = t;
      if(((w_47 != NULL) && (w_47 != x_47)))
        _fail(x_47);
      else
        w_47 = x_47;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_17, term_s_17, not_null(w_47));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
  d_48 = t;
  c_48 :
  if(match_string(d_48, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(d_48) == AT_LIST) && !(ATisEmpty(d_48))))
        {
          e_48 = ATgetFirst((ATermList) d_48);
          f_48 = (ATerm) ATgetNext((ATermList) d_48);
          {
            ATerm i_48 = NULL;
            ATerm r_18;
            r_18 = t;
            {
              t = not_null(e_48);
              t = a_0(t);
            }
            t = r_18;
            {
              ATerm j_48 = NULL;
              t = term_i_11;
              {
                t = d_0(t);
                {
                  j_48 = t;
                  if(((i_48 != NULL) && (i_48 != j_48)))
                    _fail(j_48);
                  else
                    i_48 = j_48;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_48)), not_null(i_48));
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
  ATerm j_3 (ATerm t)
  {
    ATerm o_48 = NULL;
    o_48 = t;
    n_48 :
    if(!(match_string(o_48, "--help")))
      {
        if(!(match_string(o_48, "-h")))
          {
            if(!(match_string(o_48, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = term_t_18;
    {
      t = set_config_0(t);
      t = term_u_18;
    }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_v_18;
    return(t);
  }
  t = Option_3(t, j_3, k_3, l_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
  r_48 = t;
  q_48 :
  if(((ATgetType(r_48) == AT_LIST) && !(ATisEmpty(r_48))))
    {
      s_48 = ATgetFirst((ATermList) r_48);
      t_48 = (ATerm) ATgetNext((ATermList) r_48);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_48)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_48)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_53 (ATerm), ATerm q_53 (ATerm))
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  d_49 = t;
  c_49 :
  if(((ATgetType(d_49) == AT_LIST) && !(ATisEmpty(d_49))))
    {
      e_49 = ATgetFirst((ATermList) d_49);
      f_49 = (ATerm) ATgetNext((ATermList) d_49);
      {
        ATerm t_49 = NULL,x_49 = NULL;
        ATerm u_49 = NULL;
        t = SSLgetAnnotations(not_null(d_49));
        {
          u_49 = t;
          if(((t_49 != NULL) && (t_49 != u_49)))
            _fail(u_49);
          else
            t_49 = u_49;
        }
        {
          t = not_null(e_49);
          {
            ATerm z_49 = NULL;
            t = p_53(t);
            {
              x_49 = t;
              {
                t = not_null(f_49);
                {
                  ATerm b_50 = NULL;
                  t = q_53(t);
                  {
                    z_49 = t;
                    {
                      ATerm c_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_49)), not_null(x_49)), not_null(t_49));
                      {
                        c_50 = t;
                        if(((b_50 != NULL) && (b_50 != c_50)))
                          _fail(c_50);
                        else
                          b_50 = c_50;
                      }
                      t = not_null(b_50);
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
ATerm Nil_0 (ATerm t)
{
  ATerm s_50 = NULL;
  s_50 = t;
  r_50 :
  if(((ATgetType(s_50) == AT_LIST) && ATisEmpty(s_50)))
    {
      {
        ATerm u_50 = NULL,w_50 = NULL;
        ATerm w_18;
        w_18 = t;
        {
          ATerm v_50 = NULL;
          t = SSLgetAnnotations(not_null(s_50));
          {
            v_50 = t;
            if(((u_50 != NULL) && (u_50 != v_50)))
              _fail(v_50);
            else
              u_50 = v_50;
          }
        }
        t = w_18;
        {
          ATerm x_50 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_50));
          {
            x_50 = t;
            if(((w_50 != NULL) && (w_50 != x_50)))
              _fail(x_50);
            else
              w_50 = x_50;
          }
          t = not_null(w_50);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
  d_51 = t;
  c_51 :
  if(match_cons(d_51, sym__2))
    {
      e_51 = ATgetArgument(d_51, 0);
      f_51 = ATgetArgument(d_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_9, not_null(e_51), not_null(f_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_87 (ATerm))
{
  ATerm x_18;
  x_18 = t;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_19;
        t = o_87(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        {
        }
      }
  }
  t = x_18;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm n_51 = NULL;
      ATerm e_19;
      e_19 = t;
      {
        ATerm l_51 = NULL;
        ATerm m_51 = NULL;
        m_51 = t;
        if(((l_51 != NULL) && (l_51 != m_51)))
          _fail(m_51);
        else
          l_51 = m_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_15, not_null(l_51));
          t = set_config_0(t);
        }
      }
      t = e_19;
      {
        ATerm o_51 = NULL;
        o_51 = t;
        if(((n_51 != NULL) && (n_51 != o_51)))
          _fail(o_51);
        else
          n_51 = o_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_51));
      }
      return(t);
    }
    ATerm n_3 (ATerm t)
    {
      ATerm i_19 = t;
      int l_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_19);
            }
          else
            {
              t = m_19;
              {
                t = o_87(t);
                t = Cons_2(t, _id, n_3);
              }
            }
          LocalPopChoice(l_19);
        }
      else
        {
          t = i_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_3, n_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  ATerm t_19;
  t_19 = t;
  {
    ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL;
    x_51 = t;
    t_51 :
    if(match_cons(x_51, sym__3))
      {
        y_51 = ATgetArgument(x_51, 0);
        z_51 = ATgetArgument(x_51, 1);
        a_52 = ATgetArgument(x_51, 2);
        {
          if(((u_51 != NULL) && (u_51 != y_51)))
            _fail(y_51);
          else
            u_51 = y_51;
          {
            if(((v_51 != NULL) && (v_51 != z_51)))
              _fail(z_51);
            else
              v_51 = z_51;
            {
              if(((w_51 != NULL) && (w_51 != a_52)))
                _fail(a_52);
              else
                w_51 = a_52;
              t = SSL_table_put(not_null(u_51), not_null(v_51), not_null(w_51));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_87 (ATerm))
{
  ATerm d_52 = NULL;
  ATerm u_19;
  u_19 = t;
  {
    t = term_v_19;
    t = table_put_0(t);
  }
  t = u_19;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm w_19 = t;
      int x_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_87(t);
          LocalPopChoice(x_19);
        }
      else
        {
          t = w_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_3);
    {
      ATerm y_19 = t;
      int z_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_20;
          a_20 = t;
          {
            ATerm b_20 = t;
            int c_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_s_18;
                t = get_config_0(t);
                LocalPopChoice(c_20);
              }
            else
              {
                t = b_20;
                t = fetch_1(t, Help_0);
              }
          }
          t = a_20;
          {
            t = system_usage_0(t);
            {
              t = term_b_12;
              t = exit_0(t);
            }
          }
          LocalPopChoice(z_19);
        }
      else
        {
          t = y_19;
          {
            ATerm d_20 = t;
            int j_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm q_3 (ATerm t)
                  {
                    ATerm e_52 = NULL;
                    e_52 = t;
                    if(((d_52 != NULL) && (d_52 != e_52)))
                      _fail(e_52);
                    else
                      d_52 = e_52;
                    return(t);
                  }
                  t = Undefined_1(t, q_3);
                  return(t);
                }
                t = fetch_1(t, p_3);
                {
                  ATerm s_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_52)), term_k_20);
                    return(t);
                  }
                  t = say_1(t, s_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_d_8;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(j_20);
              }
            else
              {
                t = d_20;
                {
                }
              }
          }
        }
      {
        ATerm l_20;
        l_20 = t;
        {
          t = term_q_17;
          t = table_destroy_0(t);
        }
        t = l_20;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm), ATerm c_83 (ATerm))
{
  t = parse_options_1(t, z_82);
  {
    t = store_options_0(t);
    {
      t = b_83(t);
      {
        ATerm n_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_83);
            LocalPopChoice(p_20);
          }
        else
          {
            t = n_20;
            {
              ATerm q_20 = t;
              int r_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_83(t);
                  t = report_success_0(t);
                  LocalPopChoice(r_20);
                }
              else
                {
                  t = q_20;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_83(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, q_83);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, u_3, s_83, t_83, v_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm y_20;
      y_20 = t;
      {
        ATerm j_52 = NULL;
        ATerm k_52 = NULL;
        t = term_r_15;
        {
          t = get_config_0(t);
          {
            k_52 = t;
            if(((j_52 != NULL) && (j_52 != k_52)))
              _fail(k_52);
            else
              j_52 = k_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATempty, not_null(j_52)));
          t = printnl_0(t);
        }
      }
      t = y_20;
      return(t);
    }
    t = if_verbose2_1(t, x_3);
    return(t);
  }
  t = iowrap_4(t, k_83, l_83, m_83, w_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_83 (ATerm), ATerm j_83 (ATerm))
{
  t = iowrap_3(t, i_83, j_83, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_83 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    t = _2(t, _id, f_83);
    return(t);
  }
  t = iowrap_2(t, y_3, _fail);
  return(t);
}
ATerm rename_vars_0 (ATerm t)
{
  t = iowrap_1(t, strename_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, strename_0);
  return(t);
}
