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
ATerm term_n_16;
ATerm term_b_16;
ATerm term_o_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_w_10;
ATerm term_g_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_y_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_j_7;
ATerm term_u_6;
ATerm term_s_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_k_6;
ATerm term_a_6;
ATerm term_w_5;
ATerm term_u_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_h_5;
void init_constant_terms (void)
{
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_p_6);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_6);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_r_5);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_r_5);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__2, term_s_13, term_r_5);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, term_k_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym__3, term_k_14, term_p_14, (ATerm) ATempty);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm w_83 (ATerm));
ATerm assert_1 (ATerm, ATerm u_61 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm w_61 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm o_0 (ATerm));
ATerm escape_1 (ATerm, ATerm b_71 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm z_58 (ATerm));
ATerm Cons_2 (ATerm, ATerm i_61 (ATerm), ATerm j_61 (ATerm));
ATerm Specification_1 (ATerm, ATerm b_59 (ATerm));
ATerm _2 (ATerm, ATerm d_50 (ATerm), ATerm e_50 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm b_67 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_64 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm));
ATerm crush_2 (ATerm, ATerm x_76 (ATerm), ATerm y_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_64 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm l_66 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_82 (ATerm), ATerm q_82 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm j_66 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_79 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_63 (ATerm));
ATerm map_1 (ATerm, ATerm e_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_63 (ATerm));
ATerm Program_1 (ATerm, ATerm x_55 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm y_55 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_64 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_83 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_63 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_63 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_63 (ATerm));
ATerm iowrap_4 (ATerm, ATerm x_65 (ATerm), ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm a_66 (ATerm));
ATerm iowrap_3 (ATerm, ATerm r_65 (ATerm), ATerm s_65 (ATerm), ATerm t_65 (ATerm));
ATerm iowrap_2 (ATerm, ATerm p_65 (ATerm), ATerm q_65 (ATerm));
ATerm iowrap_1 (ATerm, ATerm m_65 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm q_1 = NULL;
  q_1 = t;
  p_1 :
  if(((ATermList) q_1 == ATempty))
    {
      {
        ATerm f_2 = NULL,h_2 = NULL;
        ATerm c_5;
        c_5 = t;
        {
          ATerm g_2 = NULL;
          t = SSLgetAnnotations(not_null(q_1));
          {
            g_2 = t;
            if(((f_2 != NULL) && (f_2 != g_2)))
              _fail(g_2);
            else
              f_2 = g_2;
          }
        }
        t = c_5;
        {
          ATerm l_2 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_2));
          {
            l_2 = t;
            if(((h_2 != NULL) && (h_2 != l_2)))
              _fail(l_2);
            else
              h_2 = l_2;
          }
          t = not_null(h_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RenameVar_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym__2))
    {
      v_2 = ATgetArgument(u_2, 0);
      w_2 = ATgetArgument(u_2, 1);
      {
        ATerm z_2 = NULL;
        ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(w_2), not_null(v_2));
        {
          ATerm a_0 (ATerm t)
          {
            t = term_h_5;
            return(t);
          }
          t = rewrite_1(t, a_0);
          {
            a_3 = t;
            r_2 :
            if(match_cons(a_3, sym_Defined_2))
              {
                b_3 = ATgetArgument(a_3, 0);
                c_3 = ATgetArgument(a_3, 1);
                s_2 :
                if(match_string(b_3, "g_0"))
                  {
                    if(((z_2 != NULL) && (z_2 != c_3)))
                      _fail(c_3);
                    else
                      z_2 = c_3;
                  }
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
        t = not_null(z_2);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RenameCall_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
  l_3 = t;
  j_3 :
  if(match_cons(l_3, sym_Call_2))
    {
      m_3 = ATgetArgument(l_3, 0);
      o_3 = ATgetArgument(l_3, 1);
      k_3 :
      if(match_cons(m_3, sym_SVar_1))
        {
          n_3 = ATgetArgument(m_3, 0);
          {
            ATerm r_3 = NULL,s_3 = NULL;
            ATerm t_3 = NULL;
            t = not_null(o_3);
            {
              t = length_0(t);
              {
                t_3 = t;
                {
                  if(((r_3 != NULL) && (r_3 != t_3)))
                    _fail(t_3);
                  else
                    r_3 = t_3;
                  {
                    ATerm i_5 = t;
                    int j_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_3 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_3), not_null(r_3));
                        {
                          t = RenameVar_0(t);
                          {
                            u_3 = t;
                            if(((s_3 != NULL) && (s_3 != u_3)))
                              _fail(u_3);
                            else
                              s_3 = u_3;
                          }
                        }
                        LocalPopChoice(j_5);
                      }
                    else
                      {
                        t = i_5;
                        {
                          ATerm v_3 = NULL;
                          t = not_null(n_3);
                          {
                            t = HoArg_0(t);
                            {
                              v_3 = t;
                              if(((s_3 != NULL) && (s_3 != v_3)))
                                _fail(v_3);
                              else
                                s_3 = v_3;
                            }
                          }
                        }
                      }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_3)), not_null(o_3));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm w_83 (ATerm))
{
  t = w_83(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = topdown_1(t, w_83);
      return(t);
    }
    t = _all(t, b_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL;
  f_4 = t;
  e_4 :
  if(match_cons(f_4, sym__2))
    {
      g_4 = ATgetArgument(f_4, 0);
      h_4 = ATgetArgument(f_4, 1);
      {
        ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
        ATerm k_5;
        k_5 = t;
        {
          ATerm n_4 = NULL;
          ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
          t = u_61(t);
          {
            n_4 = t;
            {
              if(((k_4 != NULL) && (k_4 != n_4)))
                _fail(n_4);
              else
                k_4 = n_4;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(k_4), not_null(g_4), not_null(h_4));
                {
                  t = table_push_0(t);
                  {
                    ATerm l_5 = t;
                    int n_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), term_q_5);
                        t = table_get_0(t);
                        LocalPopChoice(n_5);
                      }
                    else
                      {
                        t = l_5;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      o_4 = t;
                      d_4 :
                      if(((ATgetType(o_4) == AT_LIST) && ((ATermList) o_4 != ATempty)))
                        {
                          p_4 = ATgetFirst((ATermList) o_4);
                          q_4 = (ATerm) ATgetNext((ATermList) o_4);
                          {
                            if(((l_4 != NULL) && (l_4 != p_4)))
                              _fail(p_4);
                            else
                              l_4 = p_4;
                            {
                              if(((m_4 != NULL) && (m_4 != q_4)))
                                _fail(q_4);
                              else
                                m_4 = q_4;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_4), term_q_5, (ATerm) ATinsert(CheckATermList(not_null(m_4)), (ATerm) ATinsert(CheckATermList(not_null(l_4)), not_null(g_4))));
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
        t = k_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  v_4 :
  if(((ATgetType(w_4) == AT_LIST) && ((ATermList) w_4 != ATempty)))
    {
      x_4 = ATgetFirst((ATermList) w_4);
      y_4 = (ATerm) ATgetNext((ATermList) w_4);
      t = not_null(x_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_5), not_null(g_5));
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
ATerm rewrite_1 (ATerm t, ATerm w_61 (ATerm))
{
  ATerm m_5 = NULL;
  ATerm o_5 = NULL;
  m_5 = t;
  {
    ATerm p_5 = NULL;
    t = term_r_5;
    {
      t = w_61(t);
      {
        p_5 = t;
        if(((o_5 != NULL) && (o_5 != p_5)))
          _fail(p_5);
        else
          o_5 = p_5;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_5), not_null(m_5));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm z_5 = NULL;
  z_5 = t;
  {
    ATerm s_5 = t;
    int t_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(z_5));
        {
          ATerm e_0 (ATerm t)
          {
            t = term_u_5;
            return(t);
          }
          t = rewrite_1(t, e_0);
          {
            b_6 = t;
            v_5 :
            if(match_cons(b_6, sym_Undefined_0))
              {
                _fail(t);
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = term_r_5;
        LocalPopChoice(t_5);
      }
    else
      {
        t = s_5;
        {
          ATerm d_6 = NULL;
          ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(z_5));
          {
            ATerm f_0 (ATerm t)
            {
              t = term_u_5;
              return(t);
            }
            t = rewrite_1(t, f_0);
            {
              e_6 = t;
              x_5 :
              if(match_cons(e_6, sym_Defined_2))
                {
                  f_6 = ATgetArgument(e_6, 0);
                  g_6 = ATgetArgument(e_6, 1);
                  y_5 :
                  if(match_string(f_6, "h_0"))
                    {
                      if(((d_6 != NULL) && (d_6 != g_6)))
                        _fail(g_6);
                      else
                        d_6 = g_6;
                    }
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
          t = not_null(d_6);
        }
      }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm m_6 = NULL;
  m_6 = t;
  t = SSL_int_to_string(not_null(m_6));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  x_6 = t;
  v_6 :
  if(((ATgetType(x_6) == AT_LIST) && ((ATermList) x_6 != ATempty)))
    {
      y_6 = ATgetFirst((ATermList) x_6);
      z_6 = (ATerm) ATgetNext((ATermList) x_6);
      w_6 :
      if(match_int(y_6, 95))
        {
          ATerm b_7 = NULL;
          ATerm c_7 = NULL;
          t = not_null(z_6);
          {
            t = o_0(t);
            {
              c_7 = t;
              if(((b_7 != NULL) && (b_7 != c_7)))
                _fail(c_7);
              else
                b_7 = c_7;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_7)), term_w_5), term_w_5);
        }
      else
        {
          if(match_int(y_6, 45))
            {
              ATerm e_7 = NULL;
              ATerm f_7 = NULL;
              t = not_null(z_6);
              {
                t = o_0(t);
                {
                  f_7 = t;
                  if(((e_7 != NULL) && (e_7 != f_7)))
                    _fail(f_7);
                  else
                    e_7 = f_7;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_7)), term_w_5);
            }
          else
            {
              if(match_int(y_6, 39))
                {
                  ATerm h_7 = NULL;
                  ATerm i_7 = NULL;
                  t = not_null(z_6);
                  {
                    t = o_0(t);
                    {
                      i_7 = t;
                      if(((h_7 != NULL) && (h_7 != i_7)))
                        _fail(i_7);
                      else
                        h_7 = i_7;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(h_7)), term_w_5), term_a_6), term_w_5);
                }
              else
                {
                  _fail(t);
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
ATerm escape_1 (ATerm t, ATerm b_71 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm p_7 (ATerm t)
    {
      ATerm c_6 = t;
      int h_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_71(t, p_7);
          LocalPopChoice(h_6);
        }
      else
        {
          t = c_6;
          {
            ATerm i_6 = t;
            int j_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, p_7);
                LocalPopChoice(j_6);
              }
            else
              {
                t = i_6;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = p_7(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm NameMod_0 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym_Mod_2))
    {
      t_7 = ATgetArgument(s_7, 0);
      u_7 = ATgetArgument(s_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_7)), term_k_6), not_null(t_7));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm))
{
  ATerm l_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_75(t);
      LocalPopChoice(n_6);
    }
  else
    {
      t = l_6;
      {
        ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
        c_8 = t;
        b_8 :
        if(((ATgetType(c_8) == AT_LIST) && ((ATermList) c_8 != ATempty)))
          {
            d_8 = ATgetFirst((ATermList) c_8);
            e_8 = (ATerm) ATgetNext((ATermList) c_8);
            {
              ATerm h_8 = NULL,j_8 = NULL;
              ATerm o_6;
              o_6 = t;
              {
                ATerm i_8 = NULL;
                t = not_null(d_8);
                {
                  t = m_75(t);
                  {
                    i_8 = t;
                    if(((h_8 != NULL) && (h_8 != i_8)))
                      _fail(i_8);
                    else
                      h_8 = i_8;
                  }
                }
              }
              t = o_6;
              {
                ATerm k_8 = NULL;
                t = not_null(e_8);
                {
                  t = foldr_3(t, k_75, l_75, m_75);
                  {
                    k_8 = t;
                    if(((j_8 != NULL) && (j_8 != k_8)))
                      _fail(k_8);
                    else
                      j_8 = k_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), not_null(j_8));
                  t = l_75(t);
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
  ATerm p_0 (ATerm t)
  {
    t = term_p_6;
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = term_q_6;
    return(t);
  }
  t = foldr_3(t, p_0, add_0, q_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym_SDef_3))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      x_8 = ATgetArgument(u_8, 2);
      {
        ATerm b_9 = NULL,c_9 = NULL;
        ATerm d_9 = NULL;
        t = not_null(w_8);
        {
          ATerm e_9 = NULL,g_9 = NULL,i_9 = NULL;
          t = length_0(t);
          {
            d_9 = t;
            {
              if(((b_9 != NULL) && (b_9 != d_9)))
                _fail(d_9);
              else
                b_9 = d_9;
              {
                ATerm r_6;
                r_6 = t;
                {
                  ATerm f_9 = NULL;
                  t = not_null(v_8);
                  {
                    t = try_1(t, NameMod_0);
                    {
                      t = cify_0(t);
                      {
                        f_9 = t;
                        if(((e_9 != NULL) && (e_9 != f_9)))
                          _fail(f_9);
                        else
                          e_9 = f_9;
                      }
                    }
                  }
                }
                t = r_6;
                {
                  ATerm h_9 = NULL;
                  t = not_null(b_9);
                  {
                    t = int_to_string_0(t);
                    {
                      h_9 = t;
                      if(((g_9 != NULL) && (g_9 != h_9)))
                        _fail(h_9);
                      else
                        g_9 = h_9;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_9)), term_s_6), not_null(e_9));
                    {
                      t = concat_strings_0(t);
                      {
                        i_9 = t;
                        {
                          if(((c_9 != NULL) && (c_9 != i_9)))
                            _fail(i_9);
                          else
                            c_9 = i_9;
                          {
                            ATerm t_6;
                            t_6 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(b_9), not_null(v_8)), (ATerm) ATmakeAppl(sym_Defined_2, term_u_6, not_null(c_9)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_h_5;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = t_6;
                            {
                              ATerm a_7 = t;
                              int d_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(v_8);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm g_7;
                                      g_7 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(v_8)), term_j_7);
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            t = term_u_5;
                                            return(t);
                                          }
                                          t = assert_1(t, s_0);
                                        }
                                      }
                                      t = g_7;
                                    }
                                  }
                                  LocalPopChoice(d_7);
                                }
                              else
                                {
                                  t = a_7;
                                  {
                                    ATerm k_7;
                                    k_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(v_8)), (ATerm) ATmakeAppl(sym_Defined_2, term_l_7, not_null(c_9)));
                                      {
                                        ATerm t_0 (ATerm t)
                                        {
                                          t = term_u_5;
                                          return(t);
                                        }
                                        t = assert_1(t, t_0);
                                      }
                                    }
                                    t = k_7;
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
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_9), not_null(w_8), not_null(x_8));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_sdefs_0 (ATerm t)
{
  t = map_1(t, RenameSDef_0);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        t = try_1(t, RenameCall_0);
        return(t);
      }
      t = topdown_1(t, v_0);
      return(t);
    }
    t = map_1(t, u_0);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm z_58 (ATerm))
{
  ATerm t_9 = NULL,u_9 = NULL;
  t_9 = t;
  s_9 :
  if(match_cons(t_9, sym_Strategies_1))
    {
      u_9 = ATgetArgument(t_9, 0);
      {
        ATerm x_9 = NULL,z_9 = NULL;
        ATerm y_9 = NULL;
        t = SSLgetAnnotations(not_null(t_9));
        {
          y_9 = t;
          if(((x_9 != NULL) && (x_9 != y_9)))
            _fail(y_9);
          else
            x_9 = y_9;
        }
        {
          t = not_null(u_9);
          {
            ATerm b_10 = NULL;
            t = z_58(t);
            {
              z_9 = t;
              {
                ATerm c_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_9)), not_null(x_9));
                {
                  c_10 = t;
                  if(((b_10 != NULL) && (b_10 != c_10)))
                    _fail(c_10);
                  else
                    b_10 = c_10;
                }
                t = not_null(b_10);
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
ATerm Cons_2 (ATerm t, ATerm i_61 (ATerm), ATerm j_61 (ATerm))
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  n_10 = t;
  m_10 :
  if(((ATgetType(n_10) == AT_LIST) && ((ATermList) n_10 != ATempty)))
    {
      o_10 = ATgetFirst((ATermList) n_10);
      p_10 = (ATerm) ATgetNext((ATermList) n_10);
      {
        ATerm t_10 = NULL,v_10 = NULL;
        ATerm u_10 = NULL;
        t = SSLgetAnnotations(not_null(n_10));
        {
          u_10 = t;
          if(((t_10 != NULL) && (t_10 != u_10)))
            _fail(u_10);
          else
            t_10 = u_10;
        }
        {
          t = not_null(o_10);
          {
            ATerm x_10 = NULL;
            t = i_61(t);
            {
              v_10 = t;
              {
                t = not_null(p_10);
                {
                  ATerm z_10 = NULL;
                  t = j_61(t);
                  {
                    x_10 = t;
                    {
                      ATerm a_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_10)), not_null(v_10)), not_null(t_10));
                      {
                        a_11 = t;
                        if(((z_10 != NULL) && (z_10 != a_11)))
                          _fail(a_11);
                        else
                          z_10 = a_11;
                      }
                      t = not_null(z_10);
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
ATerm Specification_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm l_11 = NULL,m_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym_Specification_1))
    {
      m_11 = ATgetArgument(l_11, 0);
      {
        ATerm p_11 = NULL,r_11 = NULL;
        ATerm q_11 = NULL;
        t = SSLgetAnnotations(not_null(l_11));
        {
          q_11 = t;
          if(((p_11 != NULL) && (p_11 != q_11)))
            _fail(q_11);
          else
            p_11 = q_11;
        }
        {
          t = not_null(m_11);
          {
            ATerm t_11 = NULL;
            t = b_59(t);
            {
              r_11 = t;
              {
                ATerm u_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(r_11)), not_null(p_11));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm d_50 (ATerm), ATerm e_50 (ATerm))
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym__2))
    {
      g_12 = ATgetArgument(f_12, 0);
      h_12 = ATgetArgument(f_12, 1);
      {
        ATerm l_12 = NULL,n_12 = NULL;
        ATerm m_12 = NULL;
        t = SSLgetAnnotations(not_null(f_12));
        {
          m_12 = t;
          if(((l_12 != NULL) && (l_12 != m_12)))
            _fail(m_12);
          else
            l_12 = m_12;
        }
        {
          t = not_null(g_12);
          {
            ATerm p_12 = NULL;
            t = d_50(t);
            {
              n_12 = t;
              {
                t = not_null(h_12);
                {
                  ATerm r_12 = NULL;
                  t = e_50(t);
                  {
                    p_12 = t;
                    {
                      ATerm s_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_12), not_null(p_12)), not_null(l_12));
                      {
                        s_12 = t;
                        if(((r_12 != NULL) && (r_12 != s_12)))
                          _fail(s_12);
                        else
                          r_12 = s_12;
                      }
                      t = not_null(r_12);
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
  ATerm a_13 = NULL;
  ATerm m_7;
  m_7 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm b_13 = NULL,c_13 = NULL;
      b_13 = t;
      z_12 :
      if(match_cons(b_13, sym_Program_1))
        {
          c_13 = ATgetArgument(b_13, 0);
          if(((a_13 != NULL) && (a_13 != c_13)))
            _fail(c_13);
          else
            a_13 = c_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, w_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_7), not_null(a_13)), term_o_7));
      {
        t = printnl_0(t);
        {
          t = term_q_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = m_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym__2))
    {
      h_13 = ATgetArgument(g_13, 0);
      i_13 = ATgetArgument(g_13, 1);
      {
        ATerm v_7;
        v_7 = t;
        t = SSL_printnl(not_null(h_13), not_null(i_13));
        t = v_7;
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
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym__2))
    {
      p_13 = ATgetArgument(o_13, 0);
      q_13 = ATgetArgument(o_13, 1);
      {
        t = not_null(p_13);
        {
          ATerm x_0 (ATerm t)
          {
            t = not_null(q_13);
            return(t);
          }
          t = at_end_1(t, x_0);
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
ATerm debug_1 (ATerm t, ATerm b_67 (ATerm))
{
  ATerm w_7;
  w_7 = t;
  {
    ATerm w_13 = NULL,y_13 = NULL;
    ATerm x_7;
    x_7 = t;
    {
      ATerm x_13 = NULL;
      t = b_67(t);
      {
        x_13 = t;
        if(((w_13 != NULL) && (w_13 != x_13)))
          _fail(x_13);
        else
          w_13 = x_13;
      }
    }
    t = x_7;
    {
      ATerm z_13 = NULL;
      z_13 = t;
      if(((y_13 != NULL) && (y_13 != z_13)))
        _fail(z_13);
      else
        y_13 = z_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_13)), not_null(w_13)));
        t = printnl_0(t);
      }
    }
  }
  t = w_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  t = SSL_is_string(not_null(d_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm a_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_0);
            LocalPopChoice(f_8);
          }
        else
          {
            t = a_8;
            {
              ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
              m_14 = t;
              l_14 :
              if(match_cons(m_14, sym_Path_1))
                {
                  n_14 = ATgetArgument(m_14, 0);
                  t = not_null(n_14);
                }
              else
                {
                  if(match_cons(m_14, sym_Var_1))
                    {
                      n_14 = ATgetArgument(m_14, 0);
                      {
                        t = not_null(n_14);
                        {
                          ATerm g_8 = t;
                          int l_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_8);
                            }
                          else
                            {
                              t = g_8;
                              {
                                ATerm z_0 (ATerm t)
                                {
                                  t = term_m_8;
                                  return(t);
                                }
                                t = debug_1(t, z_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_14, sym_Prefix_2))
                        {
                          n_14 = ATgetArgument(m_14, 0);
                          o_14 = ATgetArgument(m_14, 1);
                          {
                            ATerm t_14 = NULL,v_14 = NULL;
                            ATerm n_8;
                            n_8 = t;
                            {
                              ATerm u_14 = NULL;
                              t = not_null(n_14);
                              {
                                t = eval_config_0(t);
                                {
                                  u_14 = t;
                                  if(((t_14 != NULL) && (t_14 != u_14)))
                                    _fail(u_14);
                                  else
                                    t_14 = u_14;
                                }
                              }
                            }
                            t = n_8;
                            {
                              ATerm w_14 = NULL;
                              t = not_null(o_14);
                              {
                                t = eval_config_0(t);
                                {
                                  w_14 = t;
                                  if(((v_14 != NULL) && (v_14 != w_14)))
                                    _fail(w_14);
                                  else
                                    v_14 = w_14;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_14), not_null(v_14));
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
  ATerm e_15 = NULL;
  e_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_8, not_null(e_15));
    {
      t = table_get_0(t);
      {
        ATerm a_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm p_8;
            p_8 = t;
            {
              ATerm g_15 = NULL;
              ATerm h_15 = NULL;
              h_15 = t;
              if(((g_15 != NULL) && (g_15 != h_15)))
                _fail(h_15);
              else
                g_15 = h_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(e_15), not_null(g_15));
                t = table_put_0(t);
              }
            }
            t = p_8;
          }
          return(t);
        }
        t = try_1(t, a_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm q_8;
    q_8 = t;
    {
      ATerm l_15 = NULL;
      ATerm m_15 = NULL;
      t = term_r_8;
      {
        t = get_config_0(t);
        {
          m_15 = t;
          if(((l_15 != NULL) && (l_15 != m_15)))
            _fail(m_15);
          else
            l_15 = m_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_15), term_s_8);
        t = geq_0(t);
      }
    }
    t = q_8;
    t = l_64(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATempty, term_y_8));
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
  ATerm p_15 = NULL;
  p_15 = t;
  t = SSL_TicksToSeconds(not_null(p_15));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym__2))
    {
      v_15 = ATgetArgument(u_15, 0);
      w_15 = ATgetArgument(u_15, 1);
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_15), not_null(w_15));
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            t = SSL_addr(not_null(v_15), not_null(w_15));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm))
{
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_75(t);
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
        d_16 = t;
        c_16 :
        if(((ATgetType(d_16) == AT_LIST) && ((ATermList) d_16 != ATempty)))
          {
            e_16 = ATgetFirst((ATermList) d_16);
            f_16 = (ATerm) ATgetNext((ATermList) d_16);
            {
              ATerm i_16 = NULL;
              ATerm j_16 = NULL;
              t = not_null(f_16);
              {
                t = foldr_2(t, i_75, j_75);
                {
                  j_16 = t;
                  if(((i_16 != NULL) && (i_16 != j_16)))
                    _fail(j_16);
                  else
                    i_16 = j_16;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), not_null(i_16));
                t = j_75(t);
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
ATerm crush_2 (ATerm t, ATerm x_76 (ATerm), ATerm y_76 (ATerm))
{
  ATerm q_16 = NULL;
  ATerm s_16 = NULL;
  q_16 = t;
  {
    ATerm t_16 = NULL;
    ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
    t = not_null(q_16);
    {
      t_16 = t;
      {
        t = SSL_explode_term(not_null(t_16));
        {
          v_16 = t;
          p_16 :
          if(match_cons(v_16, sym__2))
            {
              w_16 = ATgetArgument(v_16, 0);
              x_16 = ATgetArgument(v_16, 1);
              if(((s_16 != NULL) && (s_16 != x_16)))
                _fail(x_16);
              else
                s_16 = x_16;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_16);
      t = foldr_2(t, x_76, y_76);
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
    ATerm c_1 (ATerm t)
    {
      t = term_p_6;
      return(t);
    }
    t = crush_2(t, c_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  c_17 :
  if(match_cons(d_17, sym__2))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      {
        ATerm l_9;
        l_9 = t;
        {
          ATerm m_9 = t;
          int n_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_17), not_null(f_17));
              LocalPopChoice(n_9);
            }
          else
            {
              t = m_9;
              t = SSL_gtr(not_null(e_17), not_null(f_17));
            }
        }
        t = l_9;
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
  ATerm l_17 = NULL;
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
      m_17 = t;
      k_17 :
      if(match_cons(m_17, sym__2))
        {
          n_17 = ATgetArgument(m_17, 0);
          o_17 = ATgetArgument(m_17, 1);
          {
            if(((l_17 != NULL) && (l_17 != n_17)))
              _fail(n_17);
            else
              l_17 = n_17;
            if(((l_17 != NULL) && (l_17 != o_17)))
              _fail(o_17);
            else
              l_17 = o_17;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_64 (ATerm))
{
  ATerm d_1 (ATerm t)
  {
    ATerm q_9;
    q_9 = t;
    {
      ATerm r_17 = NULL;
      ATerm s_17 = NULL;
      t = term_r_8;
      {
        t = get_config_0(t);
        {
          s_17 = t;
          if(((r_17 != NULL) && (r_17 != s_17)))
            _fail(s_17);
          else
            r_17 = s_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_17), term_q_6);
        t = geq_0(t);
      }
    }
    t = q_9;
    t = k_64(t);
    return(t);
  }
  t = try_1(t, d_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm w_17 = NULL,y_17 = NULL;
    ATerm r_9;
    r_9 = t;
    {
      ATerm x_17 = NULL;
      t = run_time_0(t);
      {
        x_17 = t;
        if(((w_17 != NULL) && (w_17 != x_17)))
          _fail(x_17);
        else
          w_17 = x_17;
      }
    }
    t = r_9;
    {
      ATerm z_17 = NULL;
      t = term_v_9;
      {
        t = get_config_0(t);
        {
          z_17 = t;
          if(((y_17 != NULL) && (y_17 != z_17)))
            _fail(z_17);
          else
            y_17 = z_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_10), not_null(w_17)), term_w_9), not_null(y_17)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, e_1);
  {
    t = term_p_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym__2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      t = SSL_WriteToTextFile(not_null(f_18), not_null(g_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym__2))
    {
      n_18 = ATgetArgument(m_18, 0);
      o_18 = ATgetArgument(m_18, 1);
      t = SSL_WriteToBinaryFile(not_null(n_18), not_null(o_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm w_18 = NULL;
  ATerm d_10;
  d_10 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm e_10 = t;
      int f_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm x_18 = NULL,y_18 = NULL;
            x_18 = t;
            t_18 :
            if(match_cons(x_18, sym_Output_1))
              {
                y_18 = ATgetArgument(x_18, 0);
                if(((w_18 != NULL) && (w_18 != y_18)))
                  _fail(y_18);
                else
                  w_18 = y_18;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, g_1);
          LocalPopChoice(f_10);
        }
      else
        {
          t = e_10;
          {
            ATerm z_18 = NULL;
            t = term_g_10;
            {
              z_18 = t;
              if(((w_18 != NULL) && (w_18 != z_18)))
                _fail(z_18);
              else
                w_18 = z_18;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_1, _id);
  }
  t = d_10;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        t = not_null(w_18);
        return(t);
      }
      t = split_2(t, i_1, _id);
      return(t);
    }
    t = _2(t, _id, h_1);
    {
      ATerm h_10 = t;
      int i_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              ATerm a_19 = NULL;
              a_19 = t;
              v_18 :
              if(!(match_cons(a_19, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, k_1);
            return(t);
          }
          t = _2(t, j_1, WriteToBinaryFile_0);
          LocalPopChoice(i_10);
        }
      else
        {
          t = h_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm l_66 (ATerm))
{
  ATerm g_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  ATerm j_10;
  j_10 = t;
  t = dtime_0(t);
  t = j_10;
  {
    t = l_66(t);
    {
      ATerm k_10;
      k_10 = t;
      {
        ATerm h_19 = NULL;
        t = dtime_0(t);
        {
          h_19 = t;
          if(((g_19 != NULL) && (g_19 != h_19)))
            _fail(h_19);
          else
            g_19 = h_19;
        }
      }
      t = k_10;
      {
        i_19 = t;
        f_19 :
        if(match_cons(i_19, sym__2))
          {
            j_19 = ATgetArgument(i_19, 0);
            k_19 = ATgetArgument(i_19, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_19)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(g_19))), not_null(k_19));
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
  ATerm q_19 = NULL;
  q_19 = t;
  t = SSL_ReadFromFile(not_null(q_19));
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_82 (ATerm), ATerm q_82 (ATerm))
{
  ATerm v_19 = NULL,x_19 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm w_19 = NULL;
    t = p_82(t);
    {
      w_19 = t;
      if(((v_19 != NULL) && (v_19 != w_19)))
        _fail(w_19);
      else
        v_19 = w_19;
    }
  }
  t = l_10;
  {
    ATerm y_19 = NULL;
    t = q_82(t);
    {
      y_19 = t;
      if(((x_19 != NULL) && (x_19 != y_19)))
        _fail(y_19);
      else
        x_19 = y_19;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), not_null(x_19));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_20 = NULL;
  ATerm q_10;
  q_10 = t;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 (ATerm t)
        {
          ATerm f_20 = NULL,g_20 = NULL;
          f_20 = t;
          c_20 :
          if(match_cons(f_20, sym_Input_1))
            {
              g_20 = ATgetArgument(f_20, 0);
              if(((e_20 != NULL) && (e_20 != g_20)))
                _fail(g_20);
              else
                e_20 = g_20;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_1);
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        {
          ATerm h_20 = NULL;
          t = term_w_10;
          {
            h_20 = t;
            if(((e_20 != NULL) && (e_20 != h_20)))
              _fail(h_20);
            else
              e_20 = h_20;
          }
        }
      }
  }
  t = q_10;
  {
    ATerm m_1 (ATerm t)
    {
      t = not_null(e_20);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_Version_0))
    {
      ATerm q_20 = NULL,s_20 = NULL;
      ATerm y_10;
      y_10 = t;
      {
        ATerm r_20 = NULL;
        t = SSLgetAnnotations(not_null(o_20));
        {
          r_20 = t;
          if(((q_20 != NULL) && (q_20 != r_20)))
            _fail(r_20);
          else
            q_20 = r_20;
        }
      }
      t = y_10;
      {
        ATerm t_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_20));
        {
          t_20 = t;
          if(((s_20 != NULL) && (s_20 != t_20)))
            _fail(t_20);
          else
            s_20 = t_20;
        }
        t = not_null(s_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm j_66 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        {
          ATerm d_11 = t;
          int e_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(e_11);
            }
          else
            {
              t = d_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_1);
  t = j_66(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  t = SSL_table_create(not_null(y_20));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  {
    ATerm f_11;
    f_11 = t;
    {
      t = term_g_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_11, term_h_11, not_null(c_21));
          t = table_put_0(t);
        }
      }
    }
    t = f_11;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  t = SSL_string_to_int(not_null(l_21));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  u_21 = t;
  s_21 :
  if(match_string(u_21, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(u_21) == AT_LIST) && ((ATermList) u_21 != ATempty)))
        {
          v_21 = ATgetFirst((ATermList) u_21);
          w_21 = (ATerm) ATgetNext((ATermList) u_21);
          t_21 :
          if(((ATgetType(w_21) == AT_LIST) && ((ATermList) w_21 != ATempty)))
            {
              x_21 = ATgetFirst((ATermList) w_21);
              y_21 = (ATerm) ATgetNext((ATermList) w_21);
              {
                ATerm c_22 = NULL;
                ATerm i_11;
                i_11 = t;
                {
                  t = not_null(v_21);
                  t = l_0(t);
                }
                t = i_11;
                {
                  ATerm d_22 = NULL;
                  t = not_null(x_21);
                  {
                    t = m_0(t);
                    {
                      d_22 = t;
                      if(((c_22 != NULL) && (c_22 != d_22)))
                        _fail(d_22);
                      else
                        c_22 = d_22;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_21)), not_null(c_22));
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
  ATerm j_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm b_23 = NULL;
        b_23 = t;
        h_22 :
        if(!(match_string(b_23, "-i")))
          {
            if(!(match_string(b_23, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_1 (ATerm t)
      {
        ATerm e_23 = NULL;
        ATerm o_11;
        o_11 = t;
        {
          ATerm c_23 = NULL;
          ATerm d_23 = NULL;
          d_23 = t;
          if(((c_23 != NULL) && (c_23 != d_23)))
            _fail(d_23);
          else
            c_23 = d_23;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_s_11, not_null(c_23));
            t = set_config_0(t);
          }
        }
        t = o_11;
        {
          ATerm f_23 = NULL;
          f_23 = t;
          if(((e_23 != NULL) && (e_23 != f_23)))
            _fail(f_23);
          else
            e_23 = f_23;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_23));
        }
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = term_v_11;
        return(t);
      }
      t = ArgOption_3(t, o_1, r_1, s_1);
      LocalPopChoice(n_11);
    }
  else
    {
      t = j_11;
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              ATerm g_23 = NULL;
              g_23 = t;
              k_22 :
              if(!(match_string(g_23, "-o")))
                {
                  if(!(match_string(g_23, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              ATerm j_23 = NULL;
              ATerm y_11;
              y_11 = t;
              {
                ATerm h_23 = NULL;
                ATerm i_23 = NULL;
                i_23 = t;
                if(((h_23 != NULL) && (h_23 != i_23)))
                  _fail(i_23);
                else
                  h_23 = i_23;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_11, not_null(h_23));
                  t = set_config_0(t);
                }
              }
              t = y_11;
              {
                ATerm k_23 = NULL;
                k_23 = t;
                if(((j_23 != NULL) && (j_23 != k_23)))
                  _fail(k_23);
                else
                  j_23 = k_23;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_23));
              }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              t = term_a_12;
              return(t);
            }
            t = ArgOption_3(t, t_1, u_1, v_1);
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm b_12 = t;
              int c_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_1 (ATerm t)
                  {
                    ATerm l_23 = NULL;
                    l_23 = t;
                    n_22 :
                    if(!(match_string(l_23, "-S")))
                      {
                        if(!(match_string(l_23, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm x_1 (ATerm t)
                  {
                    t = term_d_12;
                    t = set_config_0(t);
                    t = term_i_12;
                    return(t);
                  }
                  ATerm y_1 (ATerm t)
                  {
                    t = term_j_12;
                    return(t);
                  }
                  t = Option_3(t, w_1, x_1, y_1);
                  LocalPopChoice(c_12);
                }
              else
                {
                  t = b_12;
                  {
                    ATerm k_12 = t;
                    int o_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_1 (ATerm t)
                        {
                          ATerm p_23 = NULL;
                          p_23 = t;
                          o_22 :
                          if(!(match_string(p_23, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm a_2 (ATerm t)
                        {
                          ATerm s_23 = NULL;
                          ATerm q_12;
                          q_12 = t;
                          {
                            ATerm q_23 = NULL;
                            ATerm r_23 = NULL;
                            t = string_to_int_0(t);
                            {
                              r_23 = t;
                              if(((q_23 != NULL) && (q_23 != r_23)))
                                _fail(r_23);
                              else
                                q_23 = r_23;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_r_8, not_null(q_23));
                              t = set_config_0(t);
                            }
                          }
                          t = q_12;
                          {
                            ATerm t_23 = NULL;
                            t_23 = t;
                            if(((s_23 != NULL) && (s_23 != t_23)))
                              _fail(t_23);
                            else
                              s_23 = t_23;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_23));
                          }
                          return(t);
                        }
                        ATerm b_2 (ATerm t)
                        {
                          t = term_t_12;
                          return(t);
                        }
                        t = ArgOption_3(t, z_1, a_2, b_2);
                        LocalPopChoice(o_12);
                      }
                    else
                      {
                        t = k_12;
                        {
                          ATerm u_12 = t;
                          int v_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_2 (ATerm t)
                              {
                                ATerm u_23 = NULL;
                                u_23 = t;
                                r_22 :
                                if(!(match_string(u_23, "-v")))
                                  {
                                    if(!(match_string(u_23, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm d_2 (ATerm t)
                              {
                                t = term_x_12;
                                t = set_config_0(t);
                                t = term_y_12;
                                return(t);
                              }
                              ATerm e_2 (ATerm t)
                              {
                                t = term_d_13;
                                return(t);
                              }
                              t = Option_3(t, c_2, d_2, e_2);
                              LocalPopChoice(v_12);
                            }
                          else
                            {
                              t = u_12;
                              {
                                ATerm e_13 = t;
                                int j_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_2 (ATerm t)
                                    {
                                      ATerm x_23 = NULL;
                                      x_23 = t;
                                      z_22 :
                                      if(!(match_string(x_23, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm j_2 (ATerm t)
                                    {
                                      t = term_l_13;
                                      t = set_config_0(t);
                                      t = term_m_13;
                                      return(t);
                                    }
                                    ATerm k_2 (ATerm t)
                                    {
                                      t = term_r_13;
                                      return(t);
                                    }
                                    t = Option_3(t, i_2, j_2, k_2);
                                    LocalPopChoice(j_13);
                                  }
                                else
                                  {
                                    t = e_13;
                                    {
                                      ATerm m_2 (ATerm t)
                                      {
                                        ATerm y_23 = NULL;
                                        y_23 = t;
                                        a_23 :
                                        if(!(match_string(y_23, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm n_2 (ATerm t)
                                      {
                                        t = term_t_13;
                                        t = set_config_0(t);
                                        t = term_u_13;
                                        return(t);
                                      }
                                      ATerm o_2 (ATerm t)
                                      {
                                        t = term_v_13;
                                        return(t);
                                      }
                                      t = Option_3(t, m_2, n_2, o_2);
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
  ATerm g_24 = NULL;
  g_24 = t;
  t = SSL_table_destroy(not_null(g_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  t = SSL_exit(not_null(l_24));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  t = SSL_implode_string(not_null(p_24));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm s_24 (ATerm t)
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_24);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        {
          t = Nil_0(t);
          t = s_79(t);
        }
      }
    return(t);
  }
  t = s_24(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_14);
    }
  else
    {
      t = c_14;
      {
        ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
        v_24 = t;
        u_24 :
        if(((ATgetType(v_24) == AT_LIST) && ((ATermList) v_24 != ATempty)))
          {
            w_24 = ATgetFirst((ATermList) v_24);
            x_24 = (ATerm) ATgetNext((ATermList) v_24);
            {
              t = not_null(w_24);
              {
                ATerm p_2 (ATerm t)
                {
                  t = not_null(x_24);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, p_2);
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
  ATerm d_25 = NULL;
  d_25 = t;
  t = SSL_explode_string(not_null(d_25));
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
ATerm long_description_1 (ATerm t, ATerm k_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm g_25 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        t = Cons_2(t, e_79, g_25);
      }
    return(t);
  }
  t = g_25(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  p_25 = t;
  m_25 :
  if(((ATgetType(p_25) == AT_LIST) && ((ATermList) p_25 != ATempty)))
    {
      n_25 = ATgetFirst((ATermList) p_25);
      o_25 = (ATerm) ATgetNext((ATermList) p_25);
      {
        ATerm s_25 = NULL;
        t = not_null(o_25);
        {
          ATerm h_14;
          h_14 = t;
          {
            ATerm t_25 = NULL,d_26 = NULL,f_26 = NULL;
            ATerm i_14;
            i_14 = t;
            {
              ATerm c_26 = NULL;
              t = k_0(t);
              {
                c_26 = t;
                if(((t_25 != NULL) && (t_25 != c_26)))
                  _fail(c_26);
                else
                  t_25 = c_26;
              }
            }
            t = i_14;
            {
              ATerm e_26 = NULL;
              t = not_null(n_25);
              {
                t = j_0(t);
                {
                  e_26 = t;
                  if(((d_26 != NULL) && (d_26 != e_26)))
                    _fail(e_26);
                  else
                    d_26 = e_26;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_25)), not_null(d_26));
                {
                  f_26 = t;
                  if(((s_25 != NULL) && (s_25 != f_26)))
                    _fail(f_26);
                  else
                    s_25 = f_26;
                }
              }
            }
          }
          t = h_14;
          {
            ATerm q_2 (ATerm t)
            {
              t = not_null(s_25);
              return(t);
            }
            t = reverse_acc_2(t, j_0, q_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) p_25 == ATempty))
        {
          {
            t = term_r_5;
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
  ATerm x_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_55 (ATerm))
{
  ATerm u_26 = NULL,v_26 = NULL;
  u_26 = t;
  t_26 :
  if(match_cons(u_26, sym_Program_1))
    {
      v_26 = ATgetArgument(u_26, 0);
      {
        ATerm y_26 = NULL,g_27 = NULL;
        ATerm f_27 = NULL;
        t = SSLgetAnnotations(not_null(u_26));
        {
          f_27 = t;
          if(((y_26 != NULL) && (y_26 != f_27)))
            _fail(f_27);
          else
            y_26 = f_27;
        }
        {
          t = not_null(v_26);
          {
            ATerm o_27 = NULL;
            t = x_55(t);
            {
              g_27 = t;
              {
                ATerm p_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_27)), not_null(y_26));
                {
                  p_27 = t;
                  if(((o_27 != NULL) && (o_27 != p_27)))
                    _fail(p_27);
                  else
                    o_27 = p_27;
                }
                t = not_null(o_27);
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
  ATerm z_27 = NULL;
  ATerm y_2 (ATerm t)
  {
    ATerm d_3 (ATerm t)
    {
      ATerm a_28 = NULL;
      a_28 = t;
      if(((z_27 != NULL) && (z_27 != a_28)))
        _fail(a_28);
      else
        z_27 = a_28;
      return(t);
    }
    t = Program_1(t, d_3);
    return(t);
  }
  t = option_defined_1(t, y_2);
  {
    ATerm e_3 (ATerm t)
    {
      ATerm b_28 = NULL;
      ATerm c_28 = NULL;
      t = term_r_5;
      {
        ATerm f_3 (ATerm t)
        {
          t = not_null(z_27);
          return(t);
        }
        t = short_description_1(t, f_3);
        {
          t = concat_strings_0(t);
          {
            c_28 = t;
            if(((b_28 != NULL) && (b_28 != c_28)))
              _fail(c_28);
            else
              b_28 = c_28;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATempty, not_null(b_28)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATempty, term_j_14));
      {
        t = printnl_0(t);
        {
          t = term_q_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_3 (ATerm t)
                {
                  ATerm d_28 = NULL;
                  d_28 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_28)), term_r_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_3);
                {
                  ATerm h_3 (ATerm t)
                  {
                    ATerm f_28 = NULL;
                    ATerm g_28 = NULL;
                    t = term_r_5;
                    {
                      ATerm i_3 (ATerm t)
                      {
                        t = not_null(z_27);
                        return(t);
                      }
                      t = long_description_1(t, i_3);
                      {
                        t = concat_strings_0(t);
                        {
                          g_28 = t;
                          if(((f_28 != NULL) && (f_28 != g_28)))
                            _fail(g_28);
                          else
                            f_28 = g_28;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_28)), term_s_14));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_3);
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
ATerm Undefined_1 (ATerm t, ATerm y_55 (ATerm))
{
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_Undefined_1))
    {
      r_28 = ATgetArgument(q_28, 0);
      {
        ATerm u_28 = NULL,w_28 = NULL;
        ATerm v_28 = NULL;
        t = SSLgetAnnotations(not_null(q_28));
        {
          v_28 = t;
          if(((u_28 != NULL) && (u_28 != v_28)))
            _fail(v_28);
          else
            u_28 = v_28;
        }
        {
          t = not_null(r_28);
          {
            ATerm y_28 = NULL;
            t = y_55(t);
            {
              w_28 = t;
              {
                ATerm z_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_28)), not_null(u_28));
                {
                  z_28 = t;
                  if(((y_28 != NULL) && (y_28 != z_28)))
                    _fail(z_28);
                  else
                    y_28 = z_28;
                }
                t = not_null(y_28);
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
ATerm fetch_1 (ATerm t, ATerm m_79 (ATerm))
{
  ATerm e_29 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_79, _id);
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = Cons_2(t, _id, e_29);
      }
    return(t);
  }
  t = e_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_64 (ATerm))
{
  t = fetch_1(t, i_64);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_cons(j_29, sym_Help_0))
    {
      ATerm l_29 = NULL,n_29 = NULL;
      ATerm z_14;
      z_14 = t;
      {
        ATerm m_29 = NULL;
        t = SSLgetAnnotations(not_null(j_29));
        {
          m_29 = t;
          if(((l_29 != NULL) && (l_29 != m_29)))
            _fail(m_29);
          else
            l_29 = m_29;
        }
      }
      t = z_14;
      {
        ATerm o_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_29));
        {
          o_29 = t;
          if(((n_29 != NULL) && (n_29 != o_29)))
            _fail(o_29);
          else
            n_29 = o_29;
        }
        t = not_null(n_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_83 (ATerm))
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_83(t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  t_29 :
  if(match_cons(u_29, sym__2))
    {
      v_29 = ATgetArgument(u_29, 0);
      w_29 = ATgetArgument(u_29, 1);
      t = SSL_table_get(not_null(v_29), not_null(w_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  k_30 = t;
  j_30 :
  if(match_cons(k_30, sym__3))
    {
      l_30 = ATgetArgument(k_30, 0);
      m_30 = ATgetArgument(k_30, 1);
      n_30 = ATgetArgument(k_30, 2);
      {
        ATerm c_15;
        c_15 = t;
        {
          ATerm r_30 = NULL;
          ATerm s_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_30), not_null(m_30));
          {
            ATerm d_15 = t;
            int f_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_15);
              }
            else
              {
                t = d_15;
                t = (ATerm) ATempty;
              }
            {
              s_30 = t;
              if(((r_30 != NULL) && (r_30 != s_30)))
                _fail(s_30);
              else
                r_30 = s_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_30), not_null(m_30), (ATerm) ATinsert(CheckATermList(not_null(r_30)), not_null(n_30)));
            t = table_put_0(t);
          }
        }
        t = c_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_63 (ATerm))
{
  ATerm y_30 = NULL;
  ATerm z_30 = NULL;
  t = term_r_5;
  {
    t = o_63(t);
    {
      z_30 = t;
      if(((y_30 != NULL) && (y_30 != z_30)))
        _fail(z_30);
      else
        y_30 = z_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_14, term_p_14, not_null(y_30));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  e_31 :
  if(match_string(f_31, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(f_31) == AT_LIST) && ((ATermList) f_31 != ATempty)))
        {
          g_31 = ATgetFirst((ATermList) f_31);
          h_31 = (ATerm) ATgetNext((ATermList) f_31);
          {
            ATerm k_31 = NULL;
            ATerm i_15;
            i_15 = t;
            {
              t = not_null(g_31);
              t = c_0(t);
            }
            t = i_15;
            {
              ATerm l_31 = NULL;
              t = term_r_5;
              {
                t = d_0(t);
                {
                  l_31 = t;
                  if(((k_31 != NULL) && (k_31 != l_31)))
                    _fail(l_31);
                  else
                    k_31 = l_31;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_31)), not_null(k_31));
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
  ATerm p_3 (ATerm t)
  {
    ATerm q_31 = NULL;
    q_31 = t;
    p_31 :
    if(!(match_string(q_31, "--help")))
      {
        if(!(match_string(q_31, "-h")))
          {
            if(!(match_string(q_31, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_j_15;
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_k_15;
    return(t);
  }
  t = Option_3(t, p_3, q_3, w_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_31 = NULL,w_31 = NULL,x_31 = NULL;
  t_31 = t;
  s_31 :
  if(((ATgetType(t_31) == AT_LIST) && ((ATermList) t_31 != ATempty)))
    {
      w_31 = ATgetFirst((ATermList) t_31);
      x_31 = (ATerm) ATgetNext((ATermList) t_31);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_31)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_31)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  f_32 :
  if(match_cons(g_32, sym__2))
    {
      h_32 = ATgetArgument(g_32, 0);
      i_32 = ATgetArgument(g_32, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(h_32), not_null(i_32));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm n_15;
  n_15 = t;
  {
    ATerm x_3 (ATerm t)
    {
      t = term_o_15;
      t = m_63(t);
      return(t);
    }
    t = try_1(t, x_3);
  }
  t = n_15;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm q_32 = NULL;
      ATerm q_15;
      q_15 = t;
      {
        ATerm o_32 = NULL;
        ATerm p_32 = NULL;
        p_32 = t;
        if(((o_32 != NULL) && (o_32 != p_32)))
          _fail(p_32);
        else
          o_32 = p_32;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_9, not_null(o_32));
          t = set_config_0(t);
        }
      }
      t = q_15;
      {
        ATerm r_32 = NULL;
        r_32 = t;
        if(((q_32 != NULL) && (q_32 != r_32)))
          _fail(r_32);
        else
          q_32 = r_32;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_32));
      }
      return(t);
    }
    ATerm z_3 (ATerm t)
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              {
                t = m_63(t);
                t = Cons_2(t, _id, z_3);
              }
            }
          LocalPopChoice(s_15);
        }
      else
        {
          t = r_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_3, z_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  ATerm z_15;
  z_15 = t;
  {
    ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
    a_33 = t;
    w_32 :
    if(match_cons(a_33, sym__3))
      {
        b_33 = ATgetArgument(a_33, 0);
        c_33 = ATgetArgument(a_33, 1);
        d_33 = ATgetArgument(a_33, 2);
        {
          if(((x_32 != NULL) && (x_32 != b_33)))
            _fail(b_33);
          else
            x_32 = b_33;
          {
            if(((y_32 != NULL) && (y_32 != c_33)))
              _fail(c_33);
            else
              y_32 = c_33;
            {
              if(((z_32 != NULL) && (z_32 != d_33)))
                _fail(d_33);
              else
                z_32 = d_33;
              t = SSL_table_put(not_null(x_32), not_null(y_32), not_null(z_32));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_63 (ATerm))
{
  ATerm g_33 = NULL;
  ATerm a_16;
  a_16 = t;
  {
    t = term_b_16;
    t = table_put_0(t);
  }
  t = a_16;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm g_16 = t;
      int h_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_63(t);
          LocalPopChoice(h_16);
        }
      else
        {
          t = g_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_4);
    {
      ATerm b_4 (ATerm t)
      {
        ATerm k_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_p_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            {
              ATerm c_4 (ATerm t)
              {
                ATerm i_4 (ATerm t)
                {
                  ATerm h_33 = NULL;
                  h_33 = t;
                  if(((g_33 != NULL) && (g_33 != h_33)))
                    _fail(h_33);
                  else
                    g_33 = h_33;
                  return(t);
                }
                t = Undefined_1(t, i_4);
                return(t);
              }
              t = option_defined_1(t, c_4);
              {
                ATerm m_16;
                m_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_33)), term_n_16));
                  t = printnl_0(t);
                }
                t = m_16;
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
      t = try_1(t, b_4);
      {
        ATerm o_16;
        o_16 = t;
        {
          t = term_k_14;
          t = table_destroy_0(t);
        }
        t = o_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm x_65 (ATerm), ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm a_66 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    ATerm r_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_65(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = r_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, j_4);
  {
    t = store_options_0(t);
    {
      t = a_66(t);
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_65);
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            {
              ATerm a_17 = t;
              int b_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, x_65);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(b_17);
                }
              else
                {
                  t = a_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm r_65 (ATerm), ATerm s_65 (ATerm), ATerm t_65 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm s_4 (ATerm t)
    {
      ATerm g_17;
      g_17 = t;
      {
        ATerm k_33 = NULL;
        ATerm l_33 = NULL;
        t = term_v_9;
        {
          t = get_config_0(t);
          {
            l_33 = t;
            if(((k_33 != NULL) && (k_33 != l_33)))
              _fail(l_33);
            else
              k_33 = l_33;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATempty, not_null(k_33)));
          t = printnl_0(t);
        }
      }
      t = g_17;
      return(t);
    }
    t = if_verbose2_1(t, s_4);
    return(t);
  }
  t = iowrap_4(t, r_65, s_65, t_65, r_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm p_65 (ATerm), ATerm q_65 (ATerm))
{
  t = iowrap_3(t, p_65, q_65, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    t = _2(t, _id, m_65);
    return(t);
  }
  t = iowrap_2(t, t_4, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm z_4 (ATerm t)
    {
      ATerm a_5 (ATerm t)
      {
        ATerm b_5 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, b_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, a_5);
      return(t);
    }
    t = Specification_1(t, z_4);
    return(t);
  }
  t = iowrap_1(t, u_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
