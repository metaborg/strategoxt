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
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
ATerm term_a_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_p_17;
ATerm term_h_17;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_r_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_q_11;
ATerm term_l_11;
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
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_k_10, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_j_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_j_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_j_13);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
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
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__2, term_p_17, term_r_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_j_13);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__3, term_p_17, term_r_17, (ATerm) ATempty);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm p_63 (ATerm));
ATerm Rec_2 (ATerm, ATerm a_54 (ATerm), ATerm b_54 (ATerm));
ATerm SDef_3 (ATerm, ATerm e_54 (ATerm), ATerm f_54 (ATerm), ATerm g_54 (ATerm));
ATerm Let_2 (ATerm, ATerm c_54 (ATerm), ATerm d_54 (ATerm));
ATerm sboundin_3 (ATerm, ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm s_63 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm z_53 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm l_63 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm v_55 (ATerm));
ATerm Scope_2 (ATerm, ATerm y_52 (ATerm), ATerm z_52 (ATerm));
ATerm tboundin_3 (ATerm, ATerm m_63 (ATerm), ATerm n_63 (ATerm), ATerm o_63 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm w_74 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm crush_3 (ATerm, ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm p_74 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm a_75 (ATerm), ATerm b_75 (ATerm));
ATerm diff_1 (ATerm, ATerm s_74 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_81 (ATerm), ATerm m_81 (ATerm));
ATerm for_3 (ATerm, ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm q_81 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm n_77 (ATerm), ATerm o_77 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm h_69 (ATerm));
ATerm zip_1 (ATerm, ATerm j_69 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm h_77 (ATerm), ATerm i_77 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm s_77 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm l_78 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm v_77 (ATerm));
ATerm rename_4 (ATerm, ATerm c_77 (ATerm, ATerm (ATerm)), ATerm d_77 (ATerm), ATerm e_77 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_77 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm _2 (ATerm, ATerm f_51 (ATerm), ATerm g_51 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_71 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_83 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm i_90 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm u_81 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_68 (ATerm), ATerm f_68 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm crush_2 (ATerm, ATerm l_74 (ATerm), ATerm m_74 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_90 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_81 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_86 (ATerm));
ATerm map_1 (ATerm, ATerm s_70 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_86 (ATerm));
ATerm Program_1 (ATerm, ATerm g_62 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_83 (ATerm));
ATerm Undefined_1 (ATerm, ATerm h_62 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_67 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_52 (ATerm), ATerm p_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm));
ATerm iowrap_4 (ATerm, ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm s_82 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_82 (ATerm), ATerm i_82 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_82 (ATerm));
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
ATerm spaste_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm z_3 = t;
  int a_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, p_63);
        {
          ATerm d_0 (ATerm t)
          {
            ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
            i_4 = t;
            c_4 :
            if(match_cons(i_4, sym__2))
              {
                j_4 = ATgetArgument(i_4, 0);
                n_4 = ATgetArgument(i_4, 1);
                d_4 :
                if(match_cons(j_4, sym_SDef_3))
                  {
                    k_4 = ATgetArgument(j_4, 0);
                    l_4 = ATgetArgument(j_4, 1);
                    m_4 = ATgetArgument(j_4, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_4), not_null(l_4), not_null(m_4));
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = zip_1(t, d_0);
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
        ATerm b_4 = t;
        int e_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = split_2(t, _id, p_63);
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
                  r_4 = t;
                  f_4 :
                  if(match_cons(r_4, sym__2))
                    {
                      s_4 = ATgetArgument(r_4, 0);
                      v_4 = ATgetArgument(r_4, 1);
                      h_4 :
                      if(match_cons(s_4, sym_VarDec_2))
                        {
                          t_4 = ATgetArgument(s_4, 0);
                          u_4 = ATgetArgument(s_4, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(v_4), not_null(u_4));
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = zip_1(t, h_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, f_0, _id);
            LocalPopChoice(e_4);
          }
        else
          {
            t = b_4;
            {
              ATerm n_0 (ATerm t)
              {
                t = p_63(t);
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
ATerm Rec_2 (ATerm t, ATerm a_54 (ATerm), ATerm b_54 (ATerm))
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
  h_5 = t;
  g_5 :
  if(match_cons(h_5, sym_Rec_2))
    {
      i_5 = ATgetArgument(h_5, 0);
      j_5 = ATgetArgument(h_5, 1);
      {
        ATerm n_5 = NULL,p_5 = NULL;
        ATerm o_5 = NULL;
        t = SSLgetAnnotations(not_null(h_5));
        {
          o_5 = t;
          if(((n_5 != NULL) && (n_5 != o_5)))
            _fail(o_5);
          else
            n_5 = o_5;
        }
        {
          t = not_null(i_5);
          {
            ATerm r_5 = NULL;
            t = a_54(t);
            {
              p_5 = t;
              {
                t = not_null(j_5);
                {
                  ATerm t_5 = NULL;
                  t = b_54(t);
                  {
                    r_5 = t;
                    {
                      ATerm u_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(p_5), not_null(r_5)), not_null(n_5));
                      {
                        u_5 = t;
                        if(((t_5 != NULL) && (t_5 != u_5)))
                          _fail(u_5);
                        else
                          t_5 = u_5;
                      }
                      t = not_null(t_5);
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
ATerm SDef_3 (ATerm t, ATerm e_54 (ATerm), ATerm f_54 (ATerm), ATerm g_54 (ATerm))
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  h_6 = t;
  g_6 :
  if(match_cons(h_6, sym_SDef_3))
    {
      i_6 = ATgetArgument(h_6, 0);
      j_6 = ATgetArgument(h_6, 1);
      k_6 = ATgetArgument(h_6, 2);
      {
        ATerm p_6 = NULL,r_6 = NULL;
        ATerm q_6 = NULL;
        t = SSLgetAnnotations(not_null(h_6));
        {
          q_6 = t;
          if(((p_6 != NULL) && (p_6 != q_6)))
            _fail(q_6);
          else
            p_6 = q_6;
        }
        {
          t = not_null(i_6);
          {
            ATerm t_6 = NULL;
            t = e_54(t);
            {
              r_6 = t;
              {
                t = not_null(j_6);
                {
                  ATerm v_6 = NULL;
                  t = f_54(t);
                  {
                    t_6 = t;
                    {
                      t = not_null(k_6);
                      {
                        ATerm x_6 = NULL;
                        t = g_54(t);
                        {
                          v_6 = t;
                          {
                            ATerm y_6 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(r_6), not_null(t_6), not_null(v_6)), not_null(p_6));
                            {
                              y_6 = t;
                              if(((x_6 != NULL) && (x_6 != y_6)))
                                _fail(y_6);
                              else
                                x_6 = y_6;
                            }
                            t = not_null(x_6);
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
ATerm Let_2 (ATerm t, ATerm c_54 (ATerm), ATerm d_54 (ATerm))
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
  l_7 = t;
  k_7 :
  if(match_cons(l_7, sym_Let_2))
    {
      m_7 = ATgetArgument(l_7, 0);
      n_7 = ATgetArgument(l_7, 1);
      {
        ATerm r_7 = NULL,t_7 = NULL;
        ATerm s_7 = NULL;
        t = SSLgetAnnotations(not_null(l_7));
        {
          s_7 = t;
          if(((r_7 != NULL) && (r_7 != s_7)))
            _fail(s_7);
          else
            r_7 = s_7;
        }
        {
          t = not_null(m_7);
          {
            ATerm v_7 = NULL;
            t = c_54(t);
            {
              t_7 = t;
              {
                t = not_null(n_7);
                {
                  ATerm x_7 = NULL;
                  t = d_54(t);
                  {
                    v_7 = t;
                    {
                      ATerm y_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(t_7), not_null(v_7)), not_null(r_7));
                      {
                        y_7 = t;
                        if(((x_7 != NULL) && (x_7 != y_7)))
                          _fail(y_7);
                        else
                          x_7 = y_7;
                      }
                      t = not_null(x_7);
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
ATerm sboundin_3 (ATerm t, ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm s_63 (ATerm))
{
  ATerm g_4 = t;
  int o_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, q_63, q_63);
      LocalPopChoice(o_4);
    }
  else
    {
      t = g_4;
      {
        ATerm p_4 = t;
        int q_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, s_63, s_63, q_63);
            LocalPopChoice(q_4);
          }
        else
          {
            t = p_4;
            t = Rec_2(t, s_63, q_63);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_Rec_2))
    {
      h_8 = ATgetArgument(g_8, 0);
      i_8 = ATgetArgument(g_8, 1);
      t = (ATerm) ATinsert(ATempty, not_null(h_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym_SDef_3))
    {
      r_8 = ATgetArgument(q_8, 0);
      s_8 = ATgetArgument(q_8, 1);
      t_8 = ATgetArgument(q_8, 2);
      {
        t = not_null(s_8);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
            x_8 = t;
            o_8 :
            if(match_cons(x_8, sym_VarDec_2))
              {
                y_8 = ATgetArgument(x_8, 0);
                z_8 = ATgetArgument(x_8, 1);
                t = not_null(y_8);
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
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  h_9 = t;
  g_9 :
  if(match_cons(h_9, sym_Let_2))
    {
      i_9 = ATgetArgument(h_9, 0);
      j_9 = ATgetArgument(h_9, 1);
      {
        t = not_null(i_9);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
            m_9 = t;
            f_9 :
            if(match_cons(m_9, sym_SDef_3))
              {
                n_9 = ATgetArgument(m_9, 0);
                o_9 = ATgetArgument(m_9, 1);
                p_9 = ATgetArgument(m_9, 2);
                t = not_null(n_9);
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
ATerm SVar_1 (ATerm t, ATerm z_53 (ATerm))
{
  ATerm a_10 = NULL,b_10 = NULL;
  a_10 = t;
  z_9 :
  if(match_cons(a_10, sym_SVar_1))
    {
      b_10 = ATgetArgument(a_10, 0);
      {
        ATerm e_10 = NULL,g_10 = NULL;
        ATerm f_10 = NULL;
        t = SSLgetAnnotations(not_null(a_10));
        {
          f_10 = t;
          if(((e_10 != NULL) && (e_10 != f_10)))
            _fail(f_10);
          else
            e_10 = f_10;
        }
        {
          t = not_null(b_10);
          {
            ATerm i_10 = NULL;
            t = z_53(t);
            {
              g_10 = t;
              {
                ATerm j_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(g_10)), not_null(e_10));
                {
                  j_10 = t;
                  if(((i_10 != NULL) && (i_10 != j_10)))
                    _fail(j_10);
                  else
                    i_10 = j_10;
                }
                t = not_null(i_10);
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
ATerm tpaste_1 (ATerm t, ATerm l_63 (ATerm))
{
  t = Scope_2(t, l_63, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm v_55 (ATerm))
{
  ATerm t_10 = NULL,u_10 = NULL;
  t_10 = t;
  s_10 :
  if(match_cons(t_10, sym_DynamicRules_1))
    {
      u_10 = ATgetArgument(t_10, 0);
      {
        ATerm x_10 = NULL,z_10 = NULL;
        ATerm y_10 = NULL;
        t = SSLgetAnnotations(not_null(t_10));
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
        {
          t = not_null(u_10);
          {
            ATerm b_11 = NULL;
            t = v_55(t);
            {
              z_10 = t;
              {
                ATerm c_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(z_10)), not_null(x_10));
                {
                  c_11 = t;
                  if(((b_11 != NULL) && (b_11 != c_11)))
                    _fail(c_11);
                  else
                    b_11 = c_11;
                }
                t = not_null(b_11);
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
ATerm Scope_2 (ATerm t, ATerm y_52 (ATerm), ATerm z_52 (ATerm))
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
  n_11 = t;
  m_11 :
  if(match_cons(n_11, sym_Scope_2))
    {
      o_11 = ATgetArgument(n_11, 0);
      p_11 = ATgetArgument(n_11, 1);
      {
        ATerm t_11 = NULL,v_11 = NULL;
        ATerm u_11 = NULL;
        t = SSLgetAnnotations(not_null(n_11));
        {
          u_11 = t;
          if(((t_11 != NULL) && (t_11 != u_11)))
            _fail(u_11);
          else
            t_11 = u_11;
        }
        {
          t = not_null(o_11);
          {
            ATerm x_11 = NULL;
            t = y_52(t);
            {
              v_11 = t;
              {
                t = not_null(p_11);
                {
                  ATerm z_11 = NULL;
                  t = z_52(t);
                  {
                    x_11 = t;
                    {
                      ATerm a_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(v_11), not_null(x_11)), not_null(t_11));
                      {
                        a_12 = t;
                        if(((z_11 != NULL) && (z_11 != a_12)))
                          _fail(a_12);
                        else
                          z_11 = a_12;
                      }
                      t = not_null(z_11);
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
ATerm tboundin_3 (ATerm t, ATerm m_63 (ATerm), ATerm n_63 (ATerm), ATerm o_63 (ATerm))
{
  ATerm a_5 = t;
  int b_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, o_63, m_63);
      LocalPopChoice(b_5);
    }
  else
    {
      t = a_5;
      t = DynamicRules_1(t, m_63);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_DynamicRules_1))
    {
      j_12 = ATgetArgument(i_12, 0);
      {
        t = not_null(j_12);
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
  ATerm o_12 = NULL,p_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym_Var_1))
    {
      p_12 = ATgetArgument(o_12, 0);
      t = (ATerm) ATinsert(ATempty, not_null(p_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  u_12 = t;
  t_12 :
  if(match_cons(u_12, sym__2))
    {
      v_12 = ATgetArgument(u_12, 0);
      w_12 = ATgetArgument(u_12, 1);
      {
        t = not_null(v_12);
        {
          ATerm a_13 (ATerm t)
          {
            ATerm c_5 = t;
            int d_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_12);
                LocalPopChoice(d_5);
              }
            else
              {
                t = c_5;
                {
                  ATerm e_5 = t;
                  int f_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(w_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_74, r_0);
                      t = a_13(t);
                      LocalPopChoice(f_5);
                    }
                  else
                    {
                      t = e_5;
                      t = Cons_2(t, _id, a_13);
                    }
                }
              }
            return(t);
          }
          t = a_13(t);
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
ATerm foldr_3 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm))
{
  ATerm k_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_75(t);
      LocalPopChoice(l_5);
    }
  else
    {
      t = k_5;
      {
        ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
        f_13 = t;
        e_13 :
        if(((ATgetType(f_13) == AT_LIST) && !(ATisEmpty(f_13))))
          {
            g_13 = ATgetFirst((ATermList) f_13);
            h_13 = (ATerm) ATgetNext((ATermList) f_13);
            {
              ATerm k_13 = NULL,m_13 = NULL;
              ATerm m_5;
              m_5 = t;
              {
                ATerm l_13 = NULL;
                t = not_null(g_13);
                {
                  t = r_75(t);
                  {
                    l_13 = t;
                    if(((k_13 != NULL) && (k_13 != l_13)))
                      _fail(l_13);
                    else
                      k_13 = l_13;
                  }
                }
              }
              t = m_5;
              {
                ATerm n_13 = NULL;
                t = not_null(h_13);
                {
                  t = foldr_3(t, p_75, q_75, r_75);
                  {
                    n_13 = t;
                    if(((m_13 != NULL) && (m_13 != n_13)))
                      _fail(n_13);
                    else
                      m_13 = n_13;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), not_null(m_13));
                  t = q_75(t);
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
ATerm crush_3 (ATerm t, ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm p_74 (ATerm))
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
      t = foldr_3(t, n_74, o_74, p_74);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym__2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      if(((j_14 != NULL) && (j_14 != k_14)))
        _fail(k_14);
      else
        j_14 = k_14;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_75 (ATerm), ATerm b_75 (ATerm))
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
  q_14 = t;
  p_14 :
  if(((ATgetType(q_14) == AT_LIST) && !(ATisEmpty(q_14))))
    {
      r_14 = ATgetFirst((ATermList) q_14);
      s_14 = (ATerm) ATgetNext((ATermList) q_14);
      {
        t = b_75(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm v_14 = NULL;
            v_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), not_null(v_14));
              t = a_75(t);
            }
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(s_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym__2))
    {
      c_15 = ATgetArgument(b_15, 0);
      d_15 = ATgetArgument(b_15, 1);
      {
        t = not_null(c_15);
        {
          ATerm h_15 (ATerm t)
          {
            ATerm q_5 = t;
            int s_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(s_5);
              }
            else
              {
                t = q_5;
                {
                  ATerm v_5 = t;
                  int w_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(d_15);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_74, t_0);
                      t = h_15(t);
                      LocalPopChoice(w_5);
                    }
                  else
                    {
                      t = v_5;
                      t = Cons_2(t, _id, h_15);
                    }
                }
              }
            return(t);
          }
          t = h_15(t);
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
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  l_15 = t;
  j_15 :
  if(match_cons(l_15, sym__2))
    {
      m_15 = ATgetArgument(l_15, 0);
      n_15 = ATgetArgument(l_15, 1);
      k_15 :
      if(((ATgetType(n_15) == AT_LIST) && !(ATisEmpty(n_15))))
        {
          o_15 = ATgetFirst((ATermList) n_15);
          p_15 = (ATerm) ATgetNext((ATermList) n_15);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_15)), not_null(o_15)), not_null(p_15));
        }
      else
        {
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
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  e_16 = t;
  c_16 :
  if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
    {
      f_16 = ATgetFirst((ATermList) e_16);
      i_16 = (ATerm) ATgetNext((ATermList) e_16);
      d_16 :
      if(match_cons(f_16, sym__2))
        {
          g_16 = ATgetArgument(f_16, 0);
          h_16 = ATgetArgument(f_16, 1);
          {
            ATerm m_16 = NULL,n_16 = NULL,t_16 = NULL,z_16 = NULL;
            ATerm x_5;
            x_5 = t;
            {
              ATerm o_16 = NULL;
              ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
              t = not_null(h_16);
              {
                o_16 = t;
                {
                  t = SSL_explode_term(not_null(o_16));
                  {
                    q_16 = t;
                    x_15 :
                    if(match_cons(q_16, sym__2))
                      {
                        r_16 = ATgetArgument(q_16, 0);
                        s_16 = ATgetArgument(q_16, 1);
                        {
                          if(((m_16 != NULL) && (m_16 != r_16)))
                            _fail(r_16);
                          else
                            m_16 = r_16;
                          if(((n_16 != NULL) && (n_16 != s_16)))
                            _fail(s_16);
                          else
                            n_16 = s_16;
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
                ATerm u_16 = NULL;
                ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
                t = not_null(g_16);
                {
                  u_16 = t;
                  {
                    t = SSL_explode_term(not_null(u_16));
                    {
                      w_16 = t;
                      a_16 :
                      if(match_cons(w_16, sym__2))
                        {
                          x_16 = ATgetArgument(w_16, 0);
                          y_16 = ATgetArgument(w_16, 1);
                          {
                            if(((m_16 != NULL) && (m_16 != x_16)))
                              _fail(x_16);
                            else
                              m_16 = x_16;
                            if(((t_16 != NULL) && (t_16 != y_16)))
                              _fail(y_16);
                            else
                              t_16 = y_16;
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
                ATerm a_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), not_null(n_16));
                {
                  t = zip_1(t, _id);
                  {
                    a_17 = t;
                    if(((z_16 != NULL) && (z_16 != a_17)))
                      _fail(a_17);
                    else
                      z_16 = a_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_16), not_null(i_16));
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
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  k_17 = t;
  i_17 :
  if(((ATgetType(k_17) == AT_LIST) && !(ATisEmpty(k_17))))
    {
      l_17 = ATgetFirst((ATermList) k_17);
      o_17 = (ATerm) ATgetNext((ATermList) k_17);
      j_17 :
      if(match_cons(l_17, sym__2))
        {
          m_17 = ATgetArgument(l_17, 0);
          n_17 = ATgetArgument(l_17, 1);
          {
            ATerm q_17 = NULL;
            if(((m_17 != NULL) && (m_17 != n_17)))
              _fail(n_17);
            else
              m_17 = n_17;
            {
              if(((q_17 != NULL) && (q_17 != o_17)))
                _fail(o_17);
              else
                q_17 = o_17;
              t = not_null(q_17);
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
ATerm while_not_2 (ATerm t, ATerm l_81 (ATerm), ATerm m_81 (ATerm))
{
  ATerm s_17 (ATerm t)
  {
    ATerm b_6 = t;
    int c_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_81(t);
        LocalPopChoice(c_6);
      }
    else
      {
        t = b_6;
        {
          t = m_81(t);
          t = s_17(t);
        }
      }
    return(t);
  }
  t = s_17(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm q_81 (ATerm))
{
  t = o_81(t);
  t = while_not_2(t, p_81, q_81);
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
        ATerm u_17 = NULL;
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(u_17));
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm f_6 = t;
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
            t = f_6;
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
ATerm free_vars_3 (ATerm t, ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm a_18 (ATerm t)
  {
    ATerm o_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_79(t);
        LocalPopChoice(s_6);
      }
    else
      {
        t = o_6;
        {
          ATerm u_6 = t;
          int w_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_17 = NULL;
              ATerm z_6;
              z_6 = t;
              {
                ATerm z_17 = NULL;
                t = g_79(t);
                {
                  z_17 = t;
                  if(((y_17 != NULL) && (y_17 != z_17)))
                    _fail(z_17);
                  else
                    y_17 = z_17;
                }
              }
              t = z_6;
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = not_null(y_17);
                    return(t);
                  }
                  t = split_2(t, a_18, a_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = h_79(t, y_0, a_18, z_0);
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
              LocalPopChoice(w_6);
            }
          else
            {
              t = u_6;
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
                t = crush_3(t, d_1, e_1, a_18);
              }
            }
        }
      }
    return(t);
  }
  t = a_18(t);
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
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  e_18 :
  if(match_cons(j_18, sym_LRule_1))
    {
      k_18 = ATgetArgument(j_18, 0);
      f_18 :
      if(match_cons(k_18, sym_Rule_3))
        {
          g_18 = ATgetArgument(k_18, 0);
          h_18 = ATgetArgument(k_18, 1);
          i_18 = ATgetArgument(k_18, 2);
          {
            t = not_null(g_18);
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
      if(match_cons(j_18, sym_Scope_2))
        {
          k_18 = ATgetArgument(j_18, 0);
          l_18 = ATgetArgument(j_18, 1);
          t = not_null(k_18);
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
  ATerm c_19 = NULL,d_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym_Var_1))
    {
      d_19 = ATgetArgument(c_19, 0);
      {
        ATerm c_7 = t;
        int d_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_19 = NULL,i_19 = NULL;
            ATerm h_19 = NULL;
            t = SSLgetAnnotations(not_null(c_19));
            {
              h_19 = t;
              if(((g_19 != NULL) && (g_19 != h_19)))
                _fail(h_19);
              else
                g_19 = h_19;
            }
            {
              t = not_null(d_19);
              {
                ATerm k_19 = NULL;
                t = m_0(t);
                {
                  i_19 = t;
                  {
                    ATerm l_19 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_19)), not_null(g_19));
                    {
                      l_19 = t;
                      if(((k_19 != NULL) && (k_19 != l_19)))
                        _fail(l_19);
                      else
                        k_19 = l_19;
                    }
                    t = not_null(k_19);
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
              ATerm o_19 = NULL,q_19 = NULL;
              ATerm p_19 = NULL;
              t = SSLgetAnnotations(not_null(c_19));
              {
                p_19 = t;
                if(((o_19 != NULL) && (o_19 != p_19)))
                  _fail(p_19);
                else
                  o_19 = p_19;
              }
              {
                t = not_null(d_19);
                {
                  ATerm s_19 = NULL;
                  t = m_0(t);
                  {
                    q_19 = t;
                    {
                      ATerm t_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_19)), not_null(o_19));
                      {
                        t_19 = t;
                        if(((s_19 != NULL) && (s_19 != t_19)))
                          _fail(t_19);
                        else
                          s_19 = t_19;
                      }
                      t = not_null(s_19);
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
ATerm DistBinding_2 (ATerm t, ATerm n_77 (ATerm), ATerm o_77 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  g_20 = t;
  f_20 :
  if(match_cons(g_20, sym__3))
    {
      h_20 = ATgetArgument(g_20, 0);
      i_20 = ATgetArgument(g_20, 1);
      j_20 = ATgetArgument(g_20, 2);
      {
        t = not_null(h_20);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm n_20 = NULL;
            n_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_20), not_null(j_20));
              t = n_77(t);
            }
            return(t);
          }
          ATerm h_1 (ATerm t)
          {
            ATerm p_20 = NULL;
            p_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_20), not_null(i_20));
              t = n_77(t);
            }
            return(t);
          }
          t = o_77(t, g_1, h_1, _id);
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
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  v_20 :
  if(match_cons(w_20, sym__2))
    {
      x_20 = ATgetArgument(w_20, 0);
      y_20 = ATgetArgument(w_20, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_20)), not_null(x_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  g_21 = t;
  d_21 :
  if(match_cons(g_21, sym__2))
    {
      h_21 = ATgetArgument(g_21, 0);
      k_21 = ATgetArgument(g_21, 1);
      e_21 :
      if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
        {
          i_21 = ATgetFirst((ATermList) h_21);
          j_21 = (ATerm) ATgetNext((ATermList) h_21);
          f_21 :
          if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
            {
              l_21 = ATgetFirst((ATermList) k_21);
              m_21 = (ATerm) ATgetNext((ATermList) k_21);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_21), not_null(l_21)), (ATerm) ATmakeAppl(sym__2, not_null(j_21), not_null(m_21)));
            }
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
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  u_22 = t;
  r_22 :
  if(match_cons(u_22, sym__2))
    {
      v_22 = ATgetArgument(u_22, 0);
      w_22 = ATgetArgument(u_22, 1);
      s_22 :
      if(((ATgetType(v_22) == AT_LIST) && ATisEmpty(v_22)))
        {
          t_22 :
          if(((ATgetType(w_22) == AT_LIST) && ATisEmpty(w_22)))
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
ATerm genzip_4 (ATerm t, ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm h_69 (ATerm))
{
  ATerm y_22 (ATerm t)
  {
    ATerm e_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_69(t);
        LocalPopChoice(f_7);
      }
    else
      {
        t = e_7;
        {
          t = f_69(t);
          {
            t = _2(t, h_69, y_22);
            t = g_69(t);
          }
        }
      }
    return(t);
  }
  t = y_22(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm j_69 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, j_69);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm h_77 (ATerm), ATerm i_77 (ATerm, ATerm (ATerm)))
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  h_23 = t;
  g_23 :
  if(match_cons(h_23, sym__2))
    {
      i_23 = ATgetArgument(h_23, 0);
      j_23 = ATgetArgument(h_23, 1);
      {
        ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,u_23 = NULL;
        ATerm g_7;
        g_7 = t;
        {
          ATerm p_23 = NULL;
          t = not_null(i_23);
          {
            ATerm q_23 = NULL;
            t = h_77(t);
            {
              p_23 = t;
              {
                if(((m_23 != NULL) && (m_23 != p_23)))
                  _fail(p_23);
                else
                  m_23 = p_23;
                {
                  ATerm r_23 = NULL,t_23 = NULL;
                  t = map_1(t, new_0);
                  {
                    q_23 = t;
                    {
                      if(((n_23 != NULL) && (n_23 != q_23)))
                        _fail(q_23);
                      else
                        n_23 = q_23;
                      {
                        ATerm s_23 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_23), not_null(n_23));
                        {
                          t = zip_1(t, _id);
                          {
                            s_23 = t;
                            if(((r_23 != NULL) && (r_23 != s_23)))
                              _fail(s_23);
                            else
                              r_23 = s_23;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), not_null(j_23));
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
                              t_23 = t;
                              if(((o_23 != NULL) && (o_23 != t_23)))
                                _fail(t_23);
                              else
                                o_23 = t_23;
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
          ATerm v_23 = NULL;
          t = not_null(i_23);
          {
            ATerm i_1 (ATerm t)
            {
              t = not_null(n_23);
              return(t);
            }
            t = i_77(t, i_1);
            {
              v_23 = t;
              if(((u_23 != NULL) && (u_23 != v_23)))
                _fail(v_23);
              else
                u_23 = v_23;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(u_23), not_null(j_23), not_null(o_23));
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
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  f_24 = t;
  d_24 :
  if(match_cons(f_24, sym__2))
    {
      g_24 = ATgetArgument(f_24, 0);
      h_24 = ATgetArgument(f_24, 1);
      e_24 :
      if(((ATgetType(h_24) == AT_LIST) && !(ATisEmpty(h_24))))
        {
          i_24 = ATgetFirst((ATermList) h_24);
          j_24 = (ATerm) ATgetNext((ATermList) h_24);
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_24), not_null(j_24));
        }
      else
        {
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
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  r_24 = t;
  o_24 :
  if(match_cons(r_24, sym__2))
    {
      s_24 = ATgetArgument(r_24, 0);
      t_24 = ATgetArgument(r_24, 1);
      p_24 :
      if(((ATgetType(t_24) == AT_LIST) && !(ATisEmpty(t_24))))
        {
          u_24 = ATgetFirst((ATermList) t_24);
          x_24 = (ATerm) ATgetNext((ATermList) t_24);
          q_24 :
          if(match_cons(u_24, sym__2))
            {
              v_24 = ATgetArgument(u_24, 0);
              w_24 = ATgetArgument(u_24, 1);
              {
                ATerm z_24 = NULL;
                if(((s_24 != NULL) && (s_24 != v_24)))
                  _fail(v_24);
                else
                  s_24 = v_24;
                {
                  if(((z_24 != NULL) && (z_24 != w_24)))
                    _fail(w_24);
                  else
                    z_24 = w_24;
                  t = not_null(z_24);
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
  ATerm j_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(o_7);
    }
  else
    {
      t = j_7;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm s_77 (ATerm, ATerm (ATerm)))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym__2))
    {
      f_25 = ATgetArgument(e_25, 0);
      g_25 = ATgetArgument(e_25, 1);
      {
        t = not_null(f_25);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              t = not_null(g_25);
              return(t);
            }
            t = split_2(t, _id, k_1);
            t = lookup_0(t);
            return(t);
          }
          t = s_77(t, j_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm l_78 (ATerm))
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym__2))
    {
      o_25 = ATgetArgument(n_25, 0);
      p_25 = ATgetArgument(n_25, 1);
      {
        t = not_null(o_25);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm s_25 = NULL;
            s_25 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_25), not_null(p_25));
              t = l_78(t);
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
ATerm env_alltd_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm w_25 (ATerm t)
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_77(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        t = all_dist_1(t, w_25);
      }
    return(t);
  }
  t = w_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm c_77 (ATerm, ATerm (ATerm)), ATerm d_77 (ATerm), ATerm e_77 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_77 (ATerm, ATerm (ATerm)))
{
  ATerm y_25 = NULL;
  y_25 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), (ATerm) ATempty);
    {
      ATerm f_26 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          ATerm u_7 = t;
          int w_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, c_77);
              LocalPopChoice(w_7);
            }
          else
            {
              t = u_7;
              {
                t = RnBinding_2(t, d_77, f_77);
                t = DistBinding_2(t, f_26, e_77);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, m_1);
        return(t);
      }
      t = f_26(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm g_26 (ATerm t, ATerm h_26 (ATerm))
  {
    t = Scope_2(t, h_26, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, g_26);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm f_51 (ATerm), ATerm g_51 (ATerm))
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
  q_26 = t;
  p_26 :
  if(match_cons(q_26, sym__2))
    {
      r_26 = ATgetArgument(q_26, 0);
      s_26 = ATgetArgument(q_26, 1);
      {
        ATerm w_26 = NULL,y_26 = NULL;
        ATerm x_26 = NULL;
        t = SSLgetAnnotations(not_null(q_26));
        {
          x_26 = t;
          if(((w_26 != NULL) && (w_26 != x_26)))
            _fail(x_26);
          else
            w_26 = x_26;
        }
        {
          t = not_null(r_26);
          {
            ATerm a_27 = NULL;
            t = f_51(t);
            {
              y_26 = t;
              {
                t = not_null(s_26);
                {
                  ATerm c_27 = NULL;
                  t = g_51(t);
                  {
                    a_27 = t;
                    {
                      ATerm d_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_26), not_null(a_27)), not_null(w_26));
                      {
                        d_27 = t;
                        if(((c_27 != NULL) && (c_27 != d_27)))
                          _fail(d_27);
                        else
                          c_27 = d_27;
                      }
                      t = not_null(c_27);
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
  ATerm l_27 = NULL;
  ATerm z_7;
  z_7 = t;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm m_27 = NULL,s_27 = NULL;
      m_27 = t;
      k_27 :
      if(match_cons(m_27, sym_Program_1))
        {
          s_27 = ATgetArgument(m_27, 0);
          if(((l_27 != NULL) && (l_27 != s_27)))
            _fail(s_27);
          else
            l_27 = s_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, n_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_8), not_null(l_27)), term_b_8));
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
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym__2))
    {
      x_27 = ATgetArgument(w_27, 0);
      y_27 = ATgetArgument(w_27, 1);
      {
        ATerm e_8;
        e_8 = t;
        t = SSL_printnl(not_null(x_27), not_null(y_27));
        t = e_8;
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
  ATerm d_28 = NULL;
  d_28 = t;
  t = SSL_implode_string(not_null(d_28));
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
        ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
        n_28 = t;
        m_28 :
        if(((ATgetType(n_28) == AT_LIST) && !(ATisEmpty(n_28))))
          {
            o_28 = ATgetFirst((ATermList) n_28);
            p_28 = (ATerm) ATgetNext((ATermList) n_28);
            {
              t = not_null(o_28);
              {
                ATerm o_1 (ATerm t)
                {
                  t = not_null(p_28);
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
  ATerm z_28 = NULL;
  ATerm b_29 = NULL;
  z_28 = t;
  {
    ATerm c_29 = NULL;
    ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
    t = not_null(z_28);
    {
      c_29 = t;
      {
        t = SSL_explode_term(not_null(c_29));
        {
          e_29 = t;
          x_28 :
          if(match_cons(e_29, sym__2))
            {
              f_29 = ATgetArgument(e_29, 0);
              g_29 = ATgetArgument(e_29, 1);
              y_28 :
              if(match_string(f_29, ""))
                {
                  if(((b_29 != NULL) && (b_29 != g_29)))
                    _fail(g_29);
                  else
                    b_29 = g_29;
                }
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
      t = not_null(b_29);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm k_29 (ATerm t)
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_29);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        {
          t = Nil_0(t);
          t = h_71(t);
        }
      }
    return(t);
  }
  t = k_29(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym__2))
    {
      o_29 = ATgetArgument(n_29, 0);
      p_29 = ATgetArgument(n_29, 1);
      {
        t = not_null(o_29);
        {
          ATerm p_1 (ATerm t)
          {
            t = not_null(p_29);
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
  ATerm n_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(u_8);
    }
  else
    {
      t = n_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  t = SSL_explode_string(not_null(a_30));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(w_8);
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
ATerm debug_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm a_9;
  a_9 = t;
  {
    ATerm i_30 = NULL,k_30 = NULL;
    ATerm b_9;
    b_9 = t;
    {
      ATerm j_30 = NULL;
      t = c_83(t);
      {
        j_30 = t;
        if(((i_30 != NULL) && (i_30 != j_30)))
          _fail(j_30);
        else
          i_30 = j_30;
      }
    }
    t = b_9;
    {
      ATerm l_30 = NULL;
      l_30 = t;
      if(((k_30 != NULL) && (k_30 != l_30)))
        _fail(l_30);
      else
        k_30 = l_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_30)), not_null(i_30)));
        t = printnl_0(t);
      }
    }
  }
  t = a_9;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm t_30 = NULL;
  t_30 = t;
  t = SSL_is_string(not_null(t_30));
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
        ATerm e_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm l_9 = t;
              int q_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(q_9);
                }
              else
                {
                  t = l_9;
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
            t = e_9;
            {
              ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
              g_31 = t;
              f_31 :
              if(match_cons(g_31, sym_Path_1))
                {
                  h_31 = ATgetArgument(g_31, 0);
                  t = not_null(h_31);
                }
              else
                {
                  if(match_cons(g_31, sym_Var_1))
                    {
                      h_31 = ATgetArgument(g_31, 0);
                      {
                        t = not_null(h_31);
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
                      if(match_cons(g_31, sym_Prefix_2))
                        {
                          h_31 = ATgetArgument(g_31, 0);
                          i_31 = ATgetArgument(g_31, 1);
                          {
                            ATerm n_31 = NULL,p_31 = NULL;
                            ATerm u_9;
                            u_9 = t;
                            {
                              ATerm o_31 = NULL;
                              t = not_null(h_31);
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
                            }
                            t = u_9;
                            {
                              ATerm q_31 = NULL;
                              t = not_null(i_31);
                              {
                                t = eval_config_0(t);
                                {
                                  q_31 = t;
                                  if(((p_31 != NULL) && (p_31 != q_31)))
                                    _fail(q_31);
                                  else
                                    p_31 = q_31;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_31), not_null(p_31));
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
  ATerm y_31 = NULL;
  y_31 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_9, not_null(y_31));
    {
      t = table_get_0(t);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm y_9;
              y_9 = t;
              {
                ATerm a_32 = NULL;
                ATerm b_32 = NULL;
                b_32 = t;
                if(((a_32 != NULL) && (a_32 != b_32)))
                  _fail(b_32);
                else
                  a_32 = b_32;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_v_9, not_null(y_31), not_null(a_32));
                  t = table_put_0(t);
                }
              }
              t = y_9;
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
ATerm if_verbose2_1 (ATerm t, ATerm i_90 (ATerm))
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_10;
      h_10 = t;
      {
        ATerm f_32 = NULL;
        ATerm g_32 = NULL;
        t = term_k_10;
        {
          t = get_config_0(t);
          {
            g_32 = t;
            if(((f_32 != NULL) && (f_32 != g_32)))
              _fail(g_32);
            else
              f_32 = g_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_32), term_l_10);
          t = geq_0(t);
        }
      }
      t = h_10;
      t = i_90(t);
      LocalPopChoice(d_10);
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
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  w_32 :
  if(match_cons(x_32, sym__2))
    {
      y_32 = ATgetArgument(x_32, 0);
      z_32 = ATgetArgument(x_32, 1);
      t = SSL_WriteToTextFile(not_null(y_32), not_null(z_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  e_33 :
  if(match_cons(i_33, sym__2))
    {
      j_33 = ATgetArgument(i_33, 0);
      k_33 = ATgetArgument(i_33, 1);
      t = SSL_WriteToBinaryFile(not_null(j_33), not_null(k_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm s_33 = NULL;
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
            ATerm t_33 = NULL,u_33 = NULL;
            t_33 = t;
            p_33 :
            if(match_cons(t_33, sym_Output_1))
              {
                u_33 = ATgetArgument(t_33, 0);
                if(((s_33 != NULL) && (s_33 != u_33)))
                  _fail(u_33);
                else
                  s_33 = u_33;
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
            ATerm w_33 = NULL;
            t = term_p_10;
            {
              w_33 = t;
              if(((s_33 != NULL) && (s_33 != w_33)))
                _fail(w_33);
              else
                s_33 = w_33;
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
        t = not_null(s_33);
        return(t);
      }
      t = split_2(t, v_1, _id);
      return(t);
    }
    t = _2(t, _id, u_1);
    {
      ATerm q_10 = t;
      int r_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              ATerm x_33 = NULL;
              x_33 = t;
              r_33 :
              if(!(match_cons(x_33, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, x_1);
            return(t);
          }
          t = _2(t, w_1, WriteToBinaryFile_0);
          LocalPopChoice(r_10);
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
ATerm apply_strategy_1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm d_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL;
  ATerm v_10;
  v_10 = t;
  t = dtime_0(t);
  t = v_10;
  {
    t = u_81(t);
    {
      ATerm w_10;
      w_10 = t;
      {
        ATerm e_34 = NULL;
        t = dtime_0(t);
        {
          e_34 = t;
          if(((d_34 != NULL) && (d_34 != e_34)))
            _fail(e_34);
          else
            d_34 = e_34;
        }
      }
      t = w_10;
      {
        f_34 = t;
        c_34 :
        if(match_cons(f_34, sym__2))
          {
            g_34 = ATgetArgument(f_34, 0);
            h_34 = ATgetArgument(f_34, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_34)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_34))), not_null(h_34));
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
  ATerm n_34 = NULL;
  n_34 = t;
  t = SSL_ReadFromFile(not_null(n_34));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_68 (ATerm), ATerm f_68 (ATerm))
{
  ATerm s_34 = NULL,u_34 = NULL;
  ATerm a_11;
  a_11 = t;
  {
    ATerm t_34 = NULL;
    t = e_68(t);
    {
      t_34 = t;
      if(((s_34 != NULL) && (s_34 != t_34)))
        _fail(t_34);
      else
        s_34 = t_34;
    }
  }
  t = a_11;
  {
    ATerm v_34 = NULL;
    t = f_68(t);
    {
      v_34 = t;
      if(((u_34 != NULL) && (u_34 != v_34)))
        _fail(v_34);
      else
        u_34 = v_34;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_34), not_null(u_34));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_35 = NULL;
  ATerm d_11;
  d_11 = t;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 (ATerm t)
        {
          ATerm c_35 = NULL,d_35 = NULL;
          c_35 = t;
          z_34 :
          if(match_cons(c_35, sym_Input_1))
            {
              d_35 = ATgetArgument(c_35, 0);
              if(((b_35 != NULL) && (b_35 != d_35)))
                _fail(d_35);
              else
                b_35 = d_35;
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
          ATerm e_35 = NULL;
          t = term_g_11;
          {
            e_35 = t;
            if(((b_35 != NULL) && (b_35 != e_35)))
              _fail(e_35);
            else
              b_35 = e_35;
          }
        }
      }
  }
  t = d_11;
  {
    ATerm z_1 (ATerm t)
    {
      t = not_null(b_35);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_35 = NULL;
  i_35 = t;
  t = SSL_string_to_int(not_null(i_35));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
  q_35 = t;
  o_35 :
  if(match_string(q_35, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(q_35) == AT_LIST) && !(ATisEmpty(q_35))))
        {
          r_35 = ATgetFirst((ATermList) q_35);
          s_35 = (ATerm) ATgetNext((ATermList) q_35);
          p_35 :
          if(((ATgetType(s_35) == AT_LIST) && !(ATisEmpty(s_35))))
            {
              t_35 = ATgetFirst((ATermList) s_35);
              u_35 = (ATerm) ATgetNext((ATermList) s_35);
              {
                ATerm y_35 = NULL;
                ATerm h_11;
                h_11 = t;
                {
                  t = not_null(r_35);
                  t = j_0(t);
                }
                t = h_11;
                {
                  ATerm z_35 = NULL;
                  t = not_null(t_35);
                  {
                    t = k_0(t);
                    {
                      z_35 = t;
                      if(((y_35 != NULL) && (y_35 != z_35)))
                        _fail(z_35);
                      else
                        y_35 = z_35;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_35)), not_null(y_35));
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
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm s_36 = NULL;
        s_36 = t;
        d_36 :
        if(!(match_string(s_36, "-i")))
          {
            if(!(match_string(s_36, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        ATerm v_36 = NULL;
        ATerm k_11;
        k_11 = t;
        {
          ATerm t_36 = NULL;
          ATerm u_36 = NULL;
          u_36 = t;
          if(((t_36 != NULL) && (t_36 != u_36)))
            _fail(u_36);
          else
            t_36 = u_36;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(t_36));
            t = set_config_0(t);
          }
        }
        t = k_11;
        {
          ATerm w_36 = NULL;
          w_36 = t;
          if(((v_36 != NULL) && (v_36 != w_36)))
            _fail(w_36);
          else
            v_36 = w_36;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_36));
        }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_q_11;
        return(t);
      }
      t = ArgOption_3(t, a_2, b_2, c_2);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              ATerm x_36 = NULL;
              x_36 = t;
              g_36 :
              if(!(match_string(x_36, "-o")))
                {
                  if(!(match_string(x_36, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              ATerm a_37 = NULL;
              ATerm w_11;
              w_11 = t;
              {
                ATerm y_36 = NULL;
                ATerm z_36 = NULL;
                z_36 = t;
                if(((y_36 != NULL) && (y_36 != z_36)))
                  _fail(z_36);
                else
                  y_36 = z_36;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_11, not_null(y_36));
                  t = set_config_0(t);
                }
              }
              t = w_11;
              {
                ATerm b_37 = NULL;
                b_37 = t;
                if(((a_37 != NULL) && (a_37 != b_37)))
                  _fail(b_37);
                else
                  a_37 = b_37;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_37));
              }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              t = term_b_12;
              return(t);
            }
            t = ArgOption_3(t, d_2, e_2, f_2);
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm c_12 = t;
              int d_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_2 (ATerm t)
                  {
                    ATerm c_37 = NULL;
                    c_37 = t;
                    j_36 :
                    if(!(match_string(c_37, "-S")))
                      {
                        if(!(match_string(c_37, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm h_2 (ATerm t)
                  {
                    t = term_f_12;
                    t = set_config_0(t);
                    t = term_g_12;
                    return(t);
                  }
                  ATerm i_2 (ATerm t)
                  {
                    t = term_k_12;
                    return(t);
                  }
                  t = Option_3(t, g_2, h_2, i_2);
                  LocalPopChoice(d_12);
                }
              else
                {
                  t = c_12;
                  {
                    ATerm l_12 = t;
                    int m_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_2 (ATerm t)
                        {
                          ATerm d_37 = NULL;
                          d_37 = t;
                          k_36 :
                          if(!(match_string(d_37, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm k_2 (ATerm t)
                        {
                          ATerm g_37 = NULL;
                          ATerm q_12;
                          q_12 = t;
                          {
                            ATerm e_37 = NULL;
                            ATerm f_37 = NULL;
                            t = string_to_int_0(t);
                            {
                              f_37 = t;
                              if(((e_37 != NULL) && (e_37 != f_37)))
                                _fail(f_37);
                              else
                                e_37 = f_37;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_10, not_null(e_37));
                              t = set_config_0(t);
                            }
                          }
                          t = q_12;
                          {
                            ATerm h_37 = NULL;
                            h_37 = t;
                            if(((g_37 != NULL) && (g_37 != h_37)))
                              _fail(h_37);
                            else
                              g_37 = h_37;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_37));
                          }
                          return(t);
                        }
                        ATerm l_2 (ATerm t)
                        {
                          t = term_r_12;
                          return(t);
                        }
                        t = ArgOption_3(t, j_2, k_2, l_2);
                        LocalPopChoice(m_12);
                      }
                    else
                      {
                        t = l_12;
                        {
                          ATerm s_12 = t;
                          int x_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_2 (ATerm t)
                              {
                                ATerm i_37 = NULL;
                                i_37 = t;
                                n_36 :
                                if(!(match_string(i_37, "-k")))
                                  {
                                    if(!(match_string(i_37, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm n_2 (ATerm t)
                              {
                                ATerm y_12;
                                y_12 = t;
                                {
                                  ATerm j_37 = NULL;
                                  ATerm k_37 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    k_37 = t;
                                    if(((j_37 != NULL) && (j_37 != k_37)))
                                      _fail(k_37);
                                    else
                                      j_37 = k_37;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_z_12, not_null(j_37));
                                    t = set_config_0(t);
                                  }
                                }
                                t = y_12;
                                return(t);
                              }
                              ATerm o_2 (ATerm t)
                              {
                                t = term_b_13;
                                return(t);
                              }
                              t = ArgOption_3(t, m_2, n_2, o_2);
                              LocalPopChoice(x_12);
                            }
                          else
                            {
                              t = s_12;
                              {
                                ATerm c_13 = t;
                                int d_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_2 (ATerm t)
                                    {
                                      ATerm l_37 = NULL;
                                      l_37 = t;
                                      p_36 :
                                      if(!(match_string(l_37, "-v")))
                                        {
                                          if(!(match_string(l_37, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm q_2 (ATerm t)
                                    {
                                      t = term_o_13;
                                      t = set_config_0(t);
                                      t = term_p_13;
                                      return(t);
                                    }
                                    ATerm r_2 (ATerm t)
                                    {
                                      t = term_q_13;
                                      return(t);
                                    }
                                    t = Option_3(t, p_2, q_2, r_2);
                                    LocalPopChoice(d_13);
                                  }
                                else
                                  {
                                    t = c_13;
                                    {
                                      ATerm r_13 = t;
                                      int s_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_2 (ATerm t)
                                          {
                                            ATerm m_37 = NULL;
                                            m_37 = t;
                                            q_36 :
                                            if(!(match_string(m_37, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm t_2 (ATerm t)
                                          {
                                            t = term_w_13;
                                            t = set_config_0(t);
                                            t = term_z_13;
                                            return(t);
                                          }
                                          ATerm u_2 (ATerm t)
                                          {
                                            t = term_d_14;
                                            return(t);
                                          }
                                          t = Option_3(t, s_2, t_2, u_2);
                                          LocalPopChoice(s_13);
                                        }
                                      else
                                        {
                                          t = r_13;
                                          {
                                            ATerm v_2 (ATerm t)
                                            {
                                              ATerm n_37 = NULL;
                                              n_37 = t;
                                              r_36 :
                                              if(!(match_string(n_37, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm w_2 (ATerm t)
                                            {
                                              t = term_f_14;
                                              t = set_config_0(t);
                                              t = term_g_14;
                                              return(t);
                                            }
                                            ATerm x_2 (ATerm t)
                                            {
                                              t = term_l_14;
                                              return(t);
                                            }
                                            t = Option_3(t, v_2, w_2, x_2);
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
  ATerm g_38 = NULL;
  g_38 = t;
  t = SSL_TicksToSeconds(not_null(g_38));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_38 = NULL,o_38 = NULL,p_38 = NULL;
  l_38 = t;
  k_38 :
  if(match_cons(l_38, sym__2))
    {
      o_38 = ATgetArgument(l_38, 0);
      p_38 = ATgetArgument(l_38, 1);
      {
        ATerm n_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_38), not_null(p_38));
            LocalPopChoice(o_14);
          }
        else
          {
            t = n_14;
            t = SSL_addr(not_null(o_38), not_null(p_38));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm))
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_75(t);
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
        ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
        b_39 = t;
        a_39 :
        if(((ATgetType(b_39) == AT_LIST) && !(ATisEmpty(b_39))))
          {
            c_39 = ATgetFirst((ATermList) b_39);
            d_39 = (ATerm) ATgetNext((ATermList) b_39);
            {
              ATerm g_39 = NULL;
              ATerm h_39 = NULL;
              t = not_null(d_39);
              {
                t = foldr_2(t, n_75, o_75);
                {
                  h_39 = t;
                  if(((g_39 != NULL) && (g_39 != h_39)))
                    _fail(h_39);
                  else
                    g_39 = h_39;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_39), not_null(g_39));
                t = o_75(t);
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
ATerm crush_2 (ATerm t, ATerm l_74 (ATerm), ATerm m_74 (ATerm))
{
  ATerm o_39 = NULL;
  ATerm r_39 = NULL;
  o_39 = t;
  {
    ATerm s_39 = NULL;
    ATerm u_39 = NULL,x_39 = NULL,y_39 = NULL;
    t = not_null(o_39);
    {
      s_39 = t;
      {
        t = SSL_explode_term(not_null(s_39));
        {
          u_39 = t;
          n_39 :
          if(match_cons(u_39, sym__2))
            {
              x_39 = ATgetArgument(u_39, 0);
              y_39 = ATgetArgument(u_39, 1);
              if(((r_39 != NULL) && (r_39 != y_39)))
                _fail(y_39);
              else
                r_39 = y_39;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_39);
      t = foldr_2(t, l_74, m_74);
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
      t = term_e_12;
      return(t);
    }
    t = crush_2(t, y_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym__2))
    {
      f_40 = ATgetArgument(e_40, 0);
      g_40 = ATgetArgument(e_40, 1);
      {
        ATerm w_14;
        w_14 = t;
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_40), not_null(g_40));
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              t = SSL_gtr(not_null(f_40), not_null(g_40));
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
  ATerm m_40 = NULL;
  ATerm z_14 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
      n_40 = t;
      l_40 :
      if(match_cons(n_40, sym__2))
        {
          o_40 = ATgetArgument(n_40, 0);
          p_40 = ATgetArgument(n_40, 1);
          {
            if(((m_40 != NULL) && (m_40 != o_40)))
              _fail(o_40);
            else
              m_40 = o_40;
            if(((m_40 != NULL) && (m_40 != p_40)))
              _fail(p_40);
            else
              m_40 = p_40;
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
      t = z_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_90 (ATerm))
{
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_15;
      i_15 = t;
      {
        ATerm s_40 = NULL;
        ATerm t_40 = NULL;
        t = term_k_10;
        {
          t = get_config_0(t);
          {
            t_40 = t;
            if(((s_40 != NULL) && (s_40 != t_40)))
              _fail(t_40);
            else
              s_40 = t_40;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_40), term_d_8);
          t = geq_0(t);
        }
      }
      t = i_15;
      t = h_90(t);
      LocalPopChoice(g_15);
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
    ATerm z_40 = NULL,c_41 = NULL;
    ATerm q_15;
    q_15 = t;
    {
      ATerm a_41 = NULL;
      t = run_time_0(t);
      {
        a_41 = t;
        if(((z_40 != NULL) && (z_40 != a_41)))
          _fail(a_41);
        else
          z_40 = a_41;
      }
    }
    t = q_15;
    {
      ATerm d_41 = NULL;
      t = term_r_15;
      {
        t = get_config_0(t);
        {
          d_41 = t;
          if(((c_41 != NULL) && (c_41 != d_41)))
            _fail(d_41);
          else
            c_41 = d_41;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_15), not_null(z_40)), term_s_15), not_null(c_41)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_2);
  {
    t = term_e_12;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_41 = NULL;
  k_41 = t;
  j_41 :
  if(match_cons(k_41, sym_Version_0))
    {
      ATerm m_41 = NULL,o_41 = NULL;
      ATerm u_15;
      u_15 = t;
      {
        ATerm n_41 = NULL;
        t = SSLgetAnnotations(not_null(k_41));
        {
          n_41 = t;
          if(((m_41 != NULL) && (m_41 != n_41)))
            _fail(n_41);
          else
            m_41 = n_41;
        }
      }
      t = u_15;
      {
        ATerm p_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_41));
        {
          p_41 = t;
          if(((o_41 != NULL) && (o_41 != p_41)))
            _fail(p_41);
          else
            o_41 = p_41;
        }
        t = not_null(o_41);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(z_15);
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
  t = s_81(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_41 = NULL;
  x_41 = t;
  t = SSL_table_create(not_null(x_41));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_42 = NULL;
  b_42 = t;
  {
    ATerm b_16;
    b_16 = t;
    {
      t = term_j_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_16, term_k_16, not_null(b_42));
          t = table_put_0(t);
        }
      }
    }
    t = b_16;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_42 = NULL;
  f_42 = t;
  t = SSL_table_destroy(not_null(f_42));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_42 = NULL;
  j_42 = t;
  t = SSL_exit(not_null(j_42));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
  n_42 = t;
  m_42 :
  if(((ATgetType(n_42) == AT_LIST) && ATisEmpty(n_42)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_42) == AT_LIST) && !(ATisEmpty(n_42))))
        {
          o_42 = ATgetFirst((ATermList) n_42);
          p_42 = (ATerm) ATgetNext((ATermList) n_42);
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
  ATerm l_16;
  l_16 = t;
  {
    ATerm s_42 = NULL;
    ATerm v_42 = NULL;
    ATerm p_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(v_16);
      }
    else
      {
        t = p_16;
        {
          ATerm t_42 = NULL;
          ATerm u_42 = NULL;
          u_42 = t;
          if(((t_42 != NULL) && (t_42 != u_42)))
            _fail(u_42);
          else
            t_42 = u_42;
          t = (ATerm) ATinsert(ATempty, not_null(t_42));
        }
      }
    {
      v_42 = t;
      if(((s_42 != NULL) && (s_42 != v_42)))
        _fail(v_42);
      else
        s_42 = v_42;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_10, not_null(s_42));
      t = printnl_0(t);
    }
  }
  t = l_16;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm y_42 (ATerm t)
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
        t = Cons_2(t, s_70, y_42);
      }
    return(t);
  }
  t = y_42(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  o_43 = t;
  l_43 :
  if(((ATgetType(o_43) == AT_LIST) && !(ATisEmpty(o_43))))
    {
      m_43 = ATgetFirst((ATermList) o_43);
      n_43 = (ATerm) ATgetNext((ATermList) o_43);
      {
        ATerm r_43 = NULL;
        t = not_null(n_43);
        {
          ATerm d_17;
          d_17 = t;
          {
            ATerm s_43 = NULL,u_43 = NULL,w_43 = NULL;
            ATerm e_17;
            e_17 = t;
            {
              ATerm t_43 = NULL;
              t = i_0(t);
              {
                t_43 = t;
                if(((s_43 != NULL) && (s_43 != t_43)))
                  _fail(t_43);
                else
                  s_43 = t_43;
              }
            }
            t = e_17;
            {
              ATerm v_43 = NULL;
              t = not_null(m_43);
              {
                t = g_0(t);
                {
                  v_43 = t;
                  if(((u_43 != NULL) && (u_43 != v_43)))
                    _fail(v_43);
                  else
                    u_43 = v_43;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_43)), not_null(u_43));
                {
                  w_43 = t;
                  if(((r_43 != NULL) && (r_43 != w_43)))
                    _fail(w_43);
                  else
                    r_43 = w_43;
                }
              }
            }
          }
          t = d_17;
          {
            ATerm b_3 (ATerm t)
            {
              t = not_null(r_43);
              return(t);
            }
            t = reverse_acc_2(t, g_0, b_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(o_43) == AT_LIST) && ATisEmpty(o_43)))
        {
          {
            t = term_j_13;
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
ATerm short_description_1 (ATerm t, ATerm j_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_62 (ATerm))
{
  ATerm i_44 = NULL,j_44 = NULL;
  i_44 = t;
  h_44 :
  if(match_cons(i_44, sym_Program_1))
    {
      j_44 = ATgetArgument(i_44, 0);
      {
        ATerm m_44 = NULL,o_44 = NULL;
        ATerm n_44 = NULL;
        t = SSLgetAnnotations(not_null(i_44));
        {
          n_44 = t;
          if(((m_44 != NULL) && (m_44 != n_44)))
            _fail(n_44);
          else
            m_44 = n_44;
        }
        {
          t = not_null(j_44);
          {
            ATerm q_44 = NULL;
            t = g_62(t);
            {
              o_44 = t;
              {
                ATerm r_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(o_44)), not_null(m_44));
                {
                  r_44 = t;
                  if(((q_44 != NULL) && (q_44 != r_44)))
                    _fail(r_44);
                  else
                    q_44 = r_44;
                }
                t = not_null(q_44);
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
  ATerm e_45 = NULL;
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_45 = NULL;
      t = term_r_15;
      {
        t = get_config_0(t);
        {
          f_45 = t;
          if(((e_45 != NULL) && (e_45 != f_45)))
            _fail(f_45);
          else
            e_45 = f_45;
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
            ATerm g_45 = NULL;
            g_45 = t;
            if(((e_45 != NULL) && (e_45 != g_45)))
              _fail(g_45);
            else
              e_45 = g_45;
            return(t);
          }
          t = Program_1(t, g_3);
          return(t);
        }
        t = fetch_1(t, d_3);
      }
    }
  {
    t = term_h_17;
    {
      t = echo_0(t);
      {
        t = term_t_17;
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
                ATerm h_45 = NULL;
                ATerm i_45 = NULL;
                i_45 = t;
                if(((h_45 != NULL) && (h_45 != i_45)))
                  _fail(i_45);
                else
                  h_45 = i_45;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_45)), term_v_17);
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
    ATerm r_45 = NULL;
    ATerm s_45 = NULL;
    s_45 = t;
    if(((r_45 != NULL) && (r_45 != s_45)))
      _fail(s_45);
    else
      r_45 = s_45;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATempty, not_null(r_45)));
      t = printnl_0(t);
    }
  }
  t = w_17;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_83 (ATerm))
{
  ATerm x_17;
  x_17 = t;
  {
    t = d_83(t);
    t = debug_0(t);
  }
  t = x_17;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_62 (ATerm))
{
  ATerm z_45 = NULL,a_46 = NULL;
  z_45 = t;
  y_45 :
  if(match_cons(z_45, sym_Undefined_1))
    {
      a_46 = ATgetArgument(z_45, 0);
      {
        ATerm d_46 = NULL,f_46 = NULL;
        ATerm e_46 = NULL;
        t = SSLgetAnnotations(not_null(z_45));
        {
          e_46 = t;
          if(((d_46 != NULL) && (d_46 != e_46)))
            _fail(e_46);
          else
            d_46 = e_46;
        }
        {
          t = not_null(a_46);
          {
            ATerm h_46 = NULL;
            t = h_62(t);
            {
              f_46 = t;
              {
                ATerm i_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_46)), not_null(d_46));
                {
                  i_46 = t;
                  if(((h_46 != NULL) && (h_46 != i_46)))
                    _fail(i_46);
                  else
                    h_46 = i_46;
                }
                t = not_null(h_46);
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
ATerm fetch_1 (ATerm t, ATerm b_71 (ATerm))
{
  ATerm n_46 (ATerm t)
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_71, _id);
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        t = Cons_2(t, _id, n_46);
      }
    return(t);
  }
  t = n_46(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_85 (ATerm))
{
  t = fetch_1(t, j_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_46 = NULL;
  s_46 = t;
  r_46 :
  if(match_cons(s_46, sym_Help_0))
    {
      ATerm u_46 = NULL,w_46 = NULL;
      ATerm d_18;
      d_18 = t;
      {
        ATerm v_46 = NULL;
        t = SSLgetAnnotations(not_null(s_46));
        {
          v_46 = t;
          if(((u_46 != NULL) && (u_46 != v_46)))
            _fail(v_46);
          else
            u_46 = v_46;
        }
      }
      t = d_18;
      {
        ATerm x_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_46));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_67 (ATerm))
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_67(t);
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
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
  d_47 = t;
  c_47 :
  if(match_cons(d_47, sym__2))
    {
      e_47 = ATgetArgument(d_47, 0);
      f_47 = ATgetArgument(d_47, 1);
      t = SSL_table_get(not_null(e_47), not_null(f_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL;
  m_47 = t;
  l_47 :
  if(match_cons(m_47, sym__3))
    {
      n_47 = ATgetArgument(m_47, 0);
      o_47 = ATgetArgument(m_47, 1);
      p_47 = ATgetArgument(m_47, 2);
      {
        ATerm o_18;
        o_18 = t;
        {
          ATerm d_48 = NULL;
          ATerm e_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_47), not_null(o_47));
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
              e_48 = t;
              if(((d_48 != NULL) && (d_48 != e_48)))
                _fail(e_48);
              else
                d_48 = e_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_47), not_null(o_47), (ATerm) ATinsert(CheckATermList(not_null(d_48)), not_null(p_47)));
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
ATerm register_usage_1 (ATerm t, ATerm o_86 (ATerm))
{
  ATerm k_48 = NULL;
  ATerm l_48 = NULL;
  t = term_j_13;
  {
    t = o_86(t);
    {
      l_48 = t;
      if(((k_48 != NULL) && (k_48 != l_48)))
        _fail(l_48);
      else
        k_48 = l_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_17, term_r_17, not_null(k_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL;
  w_48 = t;
  v_48 :
  if(match_string(w_48, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(w_48) == AT_LIST) && !(ATisEmpty(w_48))))
        {
          x_48 = ATgetFirst((ATermList) w_48);
          y_48 = (ATerm) ATgetNext((ATermList) w_48);
          {
            ATerm b_49 = NULL;
            ATerm r_18;
            r_18 = t;
            {
              t = not_null(x_48);
              t = a_0(t);
            }
            t = r_18;
            {
              ATerm c_49 = NULL;
              t = term_j_13;
              {
                t = c_0(t);
                {
                  c_49 = t;
                  if(((b_49 != NULL) && (b_49 != c_49)))
                    _fail(c_49);
                  else
                    b_49 = c_49;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_48)), not_null(b_49));
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
    ATerm h_49 = NULL;
    h_49 = t;
    g_49 :
    if(!(match_string(h_49, "--help")))
      {
        if(!(match_string(h_49, "-h")))
          {
            if(!(match_string(h_49, "-?")))
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
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
  l_49 = t;
  k_49 :
  if(((ATgetType(l_49) == AT_LIST) && !(ATisEmpty(l_49))))
    {
      m_49 = ATgetFirst((ATermList) l_49);
      n_49 = (ATerm) ATgetNext((ATermList) l_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_52 (ATerm), ATerm p_52 (ATerm))
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
  x_49 = t;
  w_49 :
  if(((ATgetType(x_49) == AT_LIST) && !(ATisEmpty(x_49))))
    {
      y_49 = ATgetFirst((ATermList) x_49);
      z_49 = (ATerm) ATgetNext((ATermList) x_49);
      {
        ATerm d_50 = NULL,f_50 = NULL;
        ATerm e_50 = NULL;
        t = SSLgetAnnotations(not_null(x_49));
        {
          e_50 = t;
          if(((d_50 != NULL) && (d_50 != e_50)))
            _fail(e_50);
          else
            d_50 = e_50;
        }
        {
          t = not_null(y_49);
          {
            ATerm h_50 = NULL;
            t = o_52(t);
            {
              f_50 = t;
              {
                t = not_null(z_49);
                {
                  ATerm j_50 = NULL;
                  t = p_52(t);
                  {
                    h_50 = t;
                    {
                      ATerm k_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_50)), not_null(f_50)), not_null(d_50));
                      {
                        k_50 = t;
                        if(((j_50 != NULL) && (j_50 != k_50)))
                          _fail(k_50);
                        else
                          j_50 = k_50;
                      }
                      t = not_null(j_50);
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
  ATerm u_50 = NULL;
  u_50 = t;
  t_50 :
  if(((ATgetType(u_50) == AT_LIST) && ATisEmpty(u_50)))
    {
      {
        ATerm w_50 = NULL,y_50 = NULL;
        ATerm w_18;
        w_18 = t;
        {
          ATerm x_50 = NULL;
          t = SSLgetAnnotations(not_null(u_50));
          {
            x_50 = t;
            if(((w_50 != NULL) && (w_50 != x_50)))
              _fail(x_50);
            else
              w_50 = x_50;
          }
        }
        t = w_18;
        {
          ATerm z_50 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_50));
          {
            z_50 = t;
            if(((y_50 != NULL) && (y_50 != z_50)))
              _fail(z_50);
            else
              y_50 = z_50;
          }
          t = not_null(y_50);
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
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  e_51 :
  if(match_cons(h_51, sym__2))
    {
      i_51 = ATgetArgument(h_51, 0);
      j_51 = ATgetArgument(h_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_9, not_null(i_51), not_null(j_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm x_18;
  x_18 = t;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_19;
        t = m_86(t);
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
      ATerm r_51 = NULL;
      ATerm e_19;
      e_19 = t;
      {
        ATerm p_51 = NULL;
        ATerm q_51 = NULL;
        q_51 = t;
        if(((p_51 != NULL) && (p_51 != q_51)))
          _fail(q_51);
        else
          p_51 = q_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_15, not_null(p_51));
          t = set_config_0(t);
        }
      }
      t = e_19;
      {
        ATerm s_51 = NULL;
        s_51 = t;
        if(((r_51 != NULL) && (r_51 != s_51)))
          _fail(s_51);
        else
          r_51 = s_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_51));
      }
      return(t);
    }
    ATerm n_3 (ATerm t)
    {
      ATerm f_19 = t;
      int j_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_19 = t;
          int n_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_19);
            }
          else
            {
              t = m_19;
              {
                t = m_86(t);
                t = Cons_2(t, _id, n_3);
              }
            }
          LocalPopChoice(j_19);
        }
      else
        {
          t = f_19;
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
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  ATerm r_19;
  r_19 = t;
  {
    ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL;
    b_52 = t;
    x_51 :
    if(match_cons(b_52, sym__3))
      {
        c_52 = ATgetArgument(b_52, 0);
        d_52 = ATgetArgument(b_52, 1);
        e_52 = ATgetArgument(b_52, 2);
        {
          if(((y_51 != NULL) && (y_51 != c_52)))
            _fail(c_52);
          else
            y_51 = c_52;
          {
            if(((z_51 != NULL) && (z_51 != d_52)))
              _fail(d_52);
            else
              z_51 = d_52;
            {
              if(((a_52 != NULL) && (a_52 != e_52)))
                _fail(e_52);
              else
                a_52 = e_52;
              t = SSL_table_put(not_null(y_51), not_null(z_51), not_null(a_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_86 (ATerm))
{
  ATerm h_52 = NULL;
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
          t = l_86(t);
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
              t = term_e_12;
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
            int e_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm q_3 (ATerm t)
                  {
                    ATerm i_52 = NULL;
                    i_52 = t;
                    if(((h_52 != NULL) && (h_52 != i_52)))
                      _fail(i_52);
                    else
                      h_52 = i_52;
                    return(t);
                  }
                  t = Undefined_1(t, q_3);
                  return(t);
                }
                t = fetch_1(t, p_3);
                {
                  ATerm s_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_52)), term_k_20);
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
                LocalPopChoice(e_20);
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
          t = term_p_17;
          t = table_destroy_0(t);
        }
        t = l_20;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm))
{
  t = parse_options_1(t, y_81);
  {
    t = store_options_0(t);
    {
      t = a_82(t);
      {
        ATerm m_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_81);
            LocalPopChoice(o_20);
          }
        else
          {
            t = m_20;
            {
              ATerm q_20 = t;
              int r_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_82(t);
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
ATerm iowrap_4 (ATerm t, ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm s_82 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_82(t);
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
      t = apply_strategy_1(t, p_82);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, u_3, r_82, s_82, v_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm u_20;
      u_20 = t;
      {
        ATerm l_52 = NULL;
        ATerm m_52 = NULL;
        t = term_r_15;
        {
          t = get_config_0(t);
          {
            m_52 = t;
            if(((l_52 != NULL) && (l_52 != m_52)))
              _fail(m_52);
            else
              l_52 = m_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATempty, not_null(l_52)));
          t = printnl_0(t);
        }
      }
      t = u_20;
      return(t);
    }
    t = if_verbose2_1(t, x_3);
    return(t);
  }
  t = iowrap_4(t, j_82, k_82, l_82, w_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_82 (ATerm), ATerm i_82 (ATerm))
{
  t = iowrap_3(t, h_82, i_82, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    t = _2(t, _id, e_82);
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
