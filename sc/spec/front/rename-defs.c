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
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_t_10;
ATerm term_g_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_u_6;
ATerm term_s_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_k_6;
ATerm term_x_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_r_5;
ATerm term_o_5;
ATerm term_d_5;
void init_constant_terms (void)
{
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(112);
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
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_p_6);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_6);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_r_5);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_r_5);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, term_k_14, term_l_14);
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
  term_b_16 = (ATerm) ATmakeAppl(sym__3, term_k_14, term_l_14, (ATerm) ATempty);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm x_83 (ATerm));
ATerm assert_1 (ATerm, ATerm v_61 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm x_61 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm o_0 (ATerm));
ATerm escape_1 (ATerm, ATerm c_71 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm a_59 (ATerm));
ATerm Cons_2 (ATerm, ATerm j_61 (ATerm), ATerm k_61 (ATerm));
ATerm Specification_1 (ATerm, ATerm c_59 (ATerm));
ATerm _2 (ATerm, ATerm e_50 (ATerm), ATerm f_50 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_67 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_64 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_75 (ATerm), ATerm k_75 (ATerm));
ATerm crush_2 (ATerm, ATerm y_76 (ATerm), ATerm z_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_64 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_66 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_82 (ATerm), ATerm r_82 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_66 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_79 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_63 (ATerm));
ATerm map_1 (ATerm, ATerm f_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_63 (ATerm));
ATerm Program_1 (ATerm, ATerm y_55 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_55 (ATerm));
ATerm fetch_1 (ATerm, ATerm n_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_64 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_83 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_63 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_63 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_63 (ATerm));
ATerm iowrap_4 (ATerm, ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm b_66 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_65 (ATerm), ATerm t_65 (ATerm), ATerm u_65 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_65 (ATerm), ATerm r_65 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_65 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm r_1 = NULL;
  r_1 = t;
  q_1 :
  if(((ATermList) r_1 == ATempty))
    {
      {
        ATerm g_2 = NULL,l_2 = NULL;
        ATerm c_5;
        c_5 = t;
        {
          ATerm h_2 = NULL;
          t = SSLgetAnnotations(not_null(r_1));
          {
            h_2 = t;
            if(((g_2 != NULL) && (g_2 != h_2)))
              _fail(h_2);
            else
              g_2 = h_2;
          }
        }
        t = c_5;
        {
          ATerm m_2 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_2));
          {
            m_2 = t;
            if(((l_2 != NULL) && (l_2 != m_2)))
              _fail(m_2);
            else
              l_2 = m_2;
          }
          t = not_null(l_2);
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
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
  v_2 = t;
  u_2 :
  if(match_cons(v_2, sym__2))
    {
      w_2 = ATgetArgument(v_2, 0);
      x_2 = ATgetArgument(v_2, 1);
      {
        ATerm a_3 = NULL;
        ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(x_2), not_null(w_2));
        {
          ATerm a_0 (ATerm t)
          {
            t = term_d_5;
            return(t);
          }
          t = rewrite_1(t, a_0);
          {
            b_3 = t;
            s_2 :
            if(match_cons(b_3, sym_Defined_2))
              {
                c_3 = ATgetArgument(b_3, 0);
                d_3 = ATgetArgument(b_3, 1);
                t_2 :
                if(match_string(c_3, "g_0"))
                  {
                    if(((a_3 != NULL) && (a_3 != d_3)))
                      _fail(d_3);
                    else
                      a_3 = d_3;
                  }
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
        t = not_null(a_3);
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
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL;
  m_3 = t;
  k_3 :
  if(match_cons(m_3, sym_Call_2))
    {
      n_3 = ATgetArgument(m_3, 0);
      p_3 = ATgetArgument(m_3, 1);
      l_3 :
      if(match_cons(n_3, sym_SVar_1))
        {
          o_3 = ATgetArgument(n_3, 0);
          {
            ATerm s_3 = NULL,t_3 = NULL;
            ATerm u_3 = NULL;
            t = not_null(p_3);
            {
              t = length_0(t);
              {
                u_3 = t;
                {
                  if(((s_3 != NULL) && (s_3 != u_3)))
                    _fail(u_3);
                  else
                    s_3 = u_3;
                  {
                    ATerm i_5 = t;
                    int j_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_3 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_3), not_null(s_3));
                        {
                          t = RenameVar_0(t);
                          {
                            v_3 = t;
                            if(((t_3 != NULL) && (t_3 != v_3)))
                              _fail(v_3);
                            else
                              t_3 = v_3;
                          }
                        }
                        LocalPopChoice(j_5);
                      }
                    else
                      {
                        t = i_5;
                        {
                          ATerm w_3 = NULL;
                          t = not_null(o_3);
                          {
                            t = HoArg_0(t);
                            {
                              w_3 = t;
                              if(((t_3 != NULL) && (t_3 != w_3)))
                                _fail(w_3);
                              else
                                t_3 = w_3;
                            }
                          }
                        }
                      }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_3)), not_null(p_3));
          }
        }
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
ATerm topdown_1 (ATerm t, ATerm x_83 (ATerm))
{
  t = x_83(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = topdown_1(t, x_83);
      return(t);
    }
    t = _all(t, b_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm v_61 (ATerm))
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
  g_4 = t;
  f_4 :
  if(match_cons(g_4, sym__2))
    {
      h_4 = ATgetArgument(g_4, 0);
      i_4 = ATgetArgument(g_4, 1);
      {
        ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
        ATerm k_5;
        k_5 = t;
        {
          ATerm o_4 = NULL;
          ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
          t = v_61(t);
          {
            o_4 = t;
            {
              if(((l_4 != NULL) && (l_4 != o_4)))
                _fail(o_4);
              else
                l_4 = o_4;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_4), not_null(h_4), not_null(i_4));
                {
                  t = table_push_0(t);
                  {
                    ATerm l_5 = t;
                    int m_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_o_5);
                        t = table_get_0(t);
                        LocalPopChoice(m_5);
                      }
                    else
                      {
                        t = l_5;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_4 = t;
                      e_4 :
                      if(((ATgetType(p_4) == AT_LIST) && ((ATermList) p_4 != ATempty)))
                        {
                          q_4 = ATgetFirst((ATermList) p_4);
                          r_4 = (ATerm) ATgetNext((ATermList) p_4);
                          {
                            if(((m_4 != NULL) && (m_4 != q_4)))
                              _fail(q_4);
                            else
                              m_4 = q_4;
                            {
                              if(((n_4 != NULL) && (n_4 != r_4)))
                                _fail(r_4);
                              else
                                n_4 = r_4;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_4), term_o_5, (ATerm) ATinsert(CheckATermList(not_null(n_4)), (ATerm) ATinsert(CheckATermList(not_null(m_4)), not_null(h_4))));
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
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(((ATgetType(x_4) == AT_LIST) && ((ATermList) x_4 != ATempty)))
    {
      y_4 = ATgetFirst((ATermList) x_4);
      z_4 = (ATerm) ATgetNext((ATermList) x_4);
      t = not_null(y_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym__2))
    {
      g_5 = ATgetArgument(f_5, 0);
      h_5 = ATgetArgument(f_5, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_5), not_null(h_5));
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
ATerm rewrite_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm n_5 = NULL;
  ATerm p_5 = NULL;
  n_5 = t;
  {
    ATerm q_5 = NULL;
    t = term_r_5;
    {
      t = x_61(t);
      {
        q_5 = t;
        if(((p_5 != NULL) && (p_5 != q_5)))
          _fail(q_5);
        else
          p_5 = q_5;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), not_null(n_5));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm a_6 = NULL;
  a_6 = t;
  {
    ATerm s_5 = t;
    int t_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_6 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(a_6));
        {
          ATerm e_0 (ATerm t)
          {
            t = term_u_5;
            return(t);
          }
          t = rewrite_1(t, e_0);
          {
            c_6 = t;
            w_5 :
            if(match_cons(c_6, sym_Undefined_0))
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
          ATerm e_6 = NULL;
          ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(a_6));
          {
            ATerm f_0 (ATerm t)
            {
              t = term_u_5;
              return(t);
            }
            t = rewrite_1(t, f_0);
            {
              f_6 = t;
              y_5 :
              if(match_cons(f_6, sym_Defined_2))
                {
                  g_6 = ATgetArgument(f_6, 0);
                  h_6 = ATgetArgument(f_6, 1);
                  z_5 :
                  if(match_string(g_6, "h_0"))
                    {
                      if(((e_6 != NULL) && (e_6 != h_6)))
                        _fail(h_6);
                      else
                        e_6 = h_6;
                    }
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
          t = not_null(e_6);
        }
      }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm n_6 = NULL;
  n_6 = t;
  t = SSL_int_to_string(not_null(n_6));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  y_6 = t;
  w_6 :
  if(((ATgetType(y_6) == AT_LIST) && ((ATermList) y_6 != ATempty)))
    {
      z_6 = ATgetFirst((ATermList) y_6);
      a_7 = (ATerm) ATgetNext((ATermList) y_6);
      x_6 :
      if(match_int(z_6, 95))
        {
          ATerm c_7 = NULL;
          ATerm d_7 = NULL;
          t = not_null(a_7);
          {
            t = o_0(t);
            {
              d_7 = t;
              if(((c_7 != NULL) && (c_7 != d_7)))
                _fail(d_7);
              else
                c_7 = d_7;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_7)), term_v_5), term_v_5);
        }
      else
        {
          if(match_int(z_6, 45))
            {
              ATerm f_7 = NULL;
              ATerm g_7 = NULL;
              t = not_null(a_7);
              {
                t = o_0(t);
                {
                  g_7 = t;
                  if(((f_7 != NULL) && (f_7 != g_7)))
                    _fail(g_7);
                  else
                    f_7 = g_7;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_7)), term_v_5);
            }
          else
            {
              if(match_int(z_6, 39))
                {
                  ATerm i_7 = NULL;
                  ATerm j_7 = NULL;
                  t = not_null(a_7);
                  {
                    t = o_0(t);
                    {
                      j_7 = t;
                      if(((i_7 != NULL) && (i_7 != j_7)))
                        _fail(j_7);
                      else
                        i_7 = j_7;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_7)), term_v_5), term_x_5), term_v_5);
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
ATerm escape_1 (ATerm t, ATerm c_71 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm q_7 (ATerm t)
    {
      ATerm b_6 = t;
      int d_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_71(t, q_7);
          LocalPopChoice(d_6);
        }
      else
        {
          t = b_6;
          {
            ATerm i_6 = t;
            int j_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, q_7);
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
    t = q_7(t);
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
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym_Mod_2))
    {
      u_7 = ATgetArgument(t_7, 0);
      v_7 = ATgetArgument(t_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_7)), term_k_6), not_null(u_7));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_75(t);
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
        ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
        d_8 = t;
        c_8 :
        if(((ATgetType(d_8) == AT_LIST) && ((ATermList) d_8 != ATempty)))
          {
            e_8 = ATgetFirst((ATermList) d_8);
            f_8 = (ATerm) ATgetNext((ATermList) d_8);
            {
              ATerm i_8 = NULL,k_8 = NULL;
              ATerm o_6;
              o_6 = t;
              {
                ATerm j_8 = NULL;
                t = not_null(e_8);
                {
                  t = n_75(t);
                  {
                    j_8 = t;
                    if(((i_8 != NULL) && (i_8 != j_8)))
                      _fail(j_8);
                    else
                      i_8 = j_8;
                  }
                }
              }
              t = o_6;
              {
                ATerm l_8 = NULL;
                t = not_null(f_8);
                {
                  t = foldr_3(t, l_75, m_75, n_75);
                  {
                    l_8 = t;
                    if(((k_8 != NULL) && (k_8 != l_8)))
                      _fail(l_8);
                    else
                      k_8 = l_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_8), not_null(k_8));
                  t = m_75(t);
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
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  v_8 = t;
  u_8 :
  if(match_cons(v_8, sym_SDef_3))
    {
      w_8 = ATgetArgument(v_8, 0);
      x_8 = ATgetArgument(v_8, 1);
      y_8 = ATgetArgument(v_8, 2);
      {
        ATerm c_9 = NULL,d_9 = NULL;
        ATerm e_9 = NULL;
        t = not_null(x_8);
        {
          ATerm f_9 = NULL,h_9 = NULL,j_9 = NULL;
          t = length_0(t);
          {
            e_9 = t;
            {
              if(((c_9 != NULL) && (c_9 != e_9)))
                _fail(e_9);
              else
                c_9 = e_9;
              {
                ATerm r_6;
                r_6 = t;
                {
                  ATerm g_9 = NULL;
                  t = not_null(w_8);
                  {
                    t = try_1(t, NameMod_0);
                    {
                      t = cify_0(t);
                      {
                        g_9 = t;
                        if(((f_9 != NULL) && (f_9 != g_9)))
                          _fail(g_9);
                        else
                          f_9 = g_9;
                      }
                    }
                  }
                }
                t = r_6;
                {
                  ATerm i_9 = NULL;
                  t = not_null(c_9);
                  {
                    t = int_to_string_0(t);
                    {
                      i_9 = t;
                      if(((h_9 != NULL) && (h_9 != i_9)))
                        _fail(i_9);
                      else
                        h_9 = i_9;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_9)), term_s_6), not_null(f_9));
                    {
                      t = concat_strings_0(t);
                      {
                        j_9 = t;
                        {
                          if(((d_9 != NULL) && (d_9 != j_9)))
                            _fail(j_9);
                          else
                            d_9 = j_9;
                          {
                            ATerm t_6;
                            t_6 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(c_9), not_null(w_8)), (ATerm) ATmakeAppl(sym_Defined_2, term_u_6, not_null(d_9)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_d_5;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = t_6;
                            {
                              ATerm v_6 = t;
                              int b_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(w_8);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm e_7;
                                      e_7 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_8)), term_h_7);
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            t = term_u_5;
                                            return(t);
                                          }
                                          t = assert_1(t, s_0);
                                        }
                                      }
                                      t = e_7;
                                    }
                                  }
                                  LocalPopChoice(b_7);
                                }
                              else
                                {
                                  t = v_6;
                                  {
                                    ATerm k_7;
                                    k_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_8)), (ATerm) ATmakeAppl(sym_Defined_2, term_l_7, not_null(d_9)));
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
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_9), not_null(x_8), not_null(y_8));
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
ATerm Strategies_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm u_9 = NULL,v_9 = NULL;
  u_9 = t;
  t_9 :
  if(match_cons(u_9, sym_Strategies_1))
    {
      v_9 = ATgetArgument(u_9, 0);
      {
        ATerm y_9 = NULL,a_10 = NULL;
        ATerm z_9 = NULL;
        t = SSLgetAnnotations(not_null(u_9));
        {
          z_9 = t;
          if(((y_9 != NULL) && (y_9 != z_9)))
            _fail(z_9);
          else
            y_9 = z_9;
        }
        {
          t = not_null(v_9);
          {
            ATerm c_10 = NULL;
            t = a_59(t);
            {
              a_10 = t;
              {
                ATerm d_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(a_10)), not_null(y_9));
                {
                  d_10 = t;
                  if(((c_10 != NULL) && (c_10 != d_10)))
                    _fail(d_10);
                  else
                    c_10 = d_10;
                }
                t = not_null(c_10);
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
ATerm Cons_2 (ATerm t, ATerm j_61 (ATerm), ATerm k_61 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(((ATgetType(o_10) == AT_LIST) && ((ATermList) o_10 != ATempty)))
    {
      p_10 = ATgetFirst((ATermList) o_10);
      q_10 = (ATerm) ATgetNext((ATermList) o_10);
      {
        ATerm u_10 = NULL,w_10 = NULL;
        ATerm v_10 = NULL;
        t = SSLgetAnnotations(not_null(o_10));
        {
          v_10 = t;
          if(((u_10 != NULL) && (u_10 != v_10)))
            _fail(v_10);
          else
            u_10 = v_10;
        }
        {
          t = not_null(p_10);
          {
            ATerm y_10 = NULL;
            t = j_61(t);
            {
              w_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm a_11 = NULL;
                  t = k_61(t);
                  {
                    y_10 = t;
                    {
                      ATerm b_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_10)), not_null(w_10)), not_null(u_10));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm m_11 = NULL,n_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym_Specification_1))
    {
      n_11 = ATgetArgument(m_11, 0);
      {
        ATerm q_11 = NULL,s_11 = NULL;
        ATerm r_11 = NULL;
        t = SSLgetAnnotations(not_null(m_11));
        {
          r_11 = t;
          if(((q_11 != NULL) && (q_11 != r_11)))
            _fail(r_11);
          else
            q_11 = r_11;
        }
        {
          t = not_null(n_11);
          {
            ATerm u_11 = NULL;
            t = c_59(t);
            {
              s_11 = t;
              {
                ATerm v_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(s_11)), not_null(q_11));
                {
                  v_11 = t;
                  if(((u_11 != NULL) && (u_11 != v_11)))
                    _fail(v_11);
                  else
                    u_11 = v_11;
                }
                t = not_null(u_11);
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
ATerm _2 (ATerm t, ATerm e_50 (ATerm), ATerm f_50 (ATerm))
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
  g_12 = t;
  f_12 :
  if(match_cons(g_12, sym__2))
    {
      h_12 = ATgetArgument(g_12, 0);
      i_12 = ATgetArgument(g_12, 1);
      {
        ATerm m_12 = NULL,o_12 = NULL;
        ATerm n_12 = NULL;
        t = SSLgetAnnotations(not_null(g_12));
        {
          n_12 = t;
          if(((m_12 != NULL) && (m_12 != n_12)))
            _fail(n_12);
          else
            m_12 = n_12;
        }
        {
          t = not_null(h_12);
          {
            ATerm q_12 = NULL;
            t = e_50(t);
            {
              o_12 = t;
              {
                t = not_null(i_12);
                {
                  ATerm s_12 = NULL;
                  t = f_50(t);
                  {
                    q_12 = t;
                    {
                      ATerm t_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_12), not_null(q_12)), not_null(m_12));
                      {
                        t_12 = t;
                        if(((s_12 != NULL) && (s_12 != t_12)))
                          _fail(t_12);
                        else
                          s_12 = t_12;
                      }
                      t = not_null(s_12);
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
  ATerm b_13 = NULL;
  ATerm m_7;
  m_7 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm c_13 = NULL,d_13 = NULL;
      c_13 = t;
      a_13 :
      if(match_cons(c_13, sym_Program_1))
        {
          d_13 = ATgetArgument(c_13, 0);
          if(((b_13 != NULL) && (b_13 != d_13)))
            _fail(d_13);
          else
            b_13 = d_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, w_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_7), not_null(b_13)), term_o_7));
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
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
  h_13 = t;
  g_13 :
  if(match_cons(h_13, sym__2))
    {
      i_13 = ATgetArgument(h_13, 0);
      j_13 = ATgetArgument(h_13, 1);
      {
        ATerm r_7;
        r_7 = t;
        t = SSL_printnl(not_null(i_13), not_null(j_13));
        t = r_7;
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
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym__2))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      {
        t = not_null(q_13);
        {
          ATerm x_0 (ATerm t)
          {
            t = not_null(r_13);
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
ATerm debug_1 (ATerm t, ATerm c_67 (ATerm))
{
  ATerm w_7;
  w_7 = t;
  {
    ATerm x_13 = NULL,z_13 = NULL;
    ATerm x_7;
    x_7 = t;
    {
      ATerm y_13 = NULL;
      t = c_67(t);
      {
        y_13 = t;
        if(((x_13 != NULL) && (x_13 != y_13)))
          _fail(y_13);
        else
          x_13 = y_13;
      }
    }
    t = x_7;
    {
      ATerm a_14 = NULL;
      a_14 = t;
      if(((z_13 != NULL) && (z_13 != a_14)))
        _fail(a_14);
      else
        z_13 = a_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_13)), not_null(x_13)));
        t = printnl_0(t);
      }
    }
  }
  t = w_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_14 = NULL;
  e_14 = t;
  t = SSL_is_string(not_null(e_14));
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
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_0);
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            {
              ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
              n_14 = t;
              m_14 :
              if(match_cons(n_14, sym_Path_1))
                {
                  o_14 = ATgetArgument(n_14, 0);
                  t = not_null(o_14);
                }
              else
                {
                  if(match_cons(n_14, sym_Var_1))
                    {
                      o_14 = ATgetArgument(n_14, 0);
                      {
                        t = not_null(o_14);
                        {
                          ATerm g_8 = t;
                          int h_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_8);
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
                      if(match_cons(n_14, sym_Prefix_2))
                        {
                          o_14 = ATgetArgument(n_14, 0);
                          p_14 = ATgetArgument(n_14, 1);
                          {
                            ATerm u_14 = NULL,w_14 = NULL;
                            ATerm n_8;
                            n_8 = t;
                            {
                              ATerm v_14 = NULL;
                              t = not_null(o_14);
                              {
                                t = eval_config_0(t);
                                {
                                  v_14 = t;
                                  if(((u_14 != NULL) && (u_14 != v_14)))
                                    _fail(v_14);
                                  else
                                    u_14 = v_14;
                                }
                              }
                            }
                            t = n_8;
                            {
                              ATerm x_14 = NULL;
                              t = not_null(p_14);
                              {
                                t = eval_config_0(t);
                                {
                                  x_14 = t;
                                  if(((w_14 != NULL) && (w_14 != x_14)))
                                    _fail(x_14);
                                  else
                                    w_14 = x_14;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_14), not_null(w_14));
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
  ATerm f_15 = NULL;
  f_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_8, not_null(f_15));
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
              ATerm h_15 = NULL;
              ATerm i_15 = NULL;
              i_15 = t;
              if(((h_15 != NULL) && (h_15 != i_15)))
                _fail(i_15);
              else
                h_15 = i_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(f_15), not_null(h_15));
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
ATerm if_verbose2_1 (ATerm t, ATerm m_64 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm q_8;
    q_8 = t;
    {
      ATerm m_15 = NULL;
      ATerm n_15 = NULL;
      t = term_r_8;
      {
        t = get_config_0(t);
        {
          n_15 = t;
          if(((m_15 != NULL) && (m_15 != n_15)))
            _fail(n_15);
          else
            m_15 = n_15;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_15), term_s_8);
        t = geq_0(t);
      }
    }
    t = q_8;
    t = m_64(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATempty, term_t_8));
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
  ATerm q_15 = NULL;
  q_15 = t;
  t = SSL_TicksToSeconds(not_null(q_15));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym__2))
    {
      w_15 = ATgetArgument(v_15, 0);
      x_15 = ATgetArgument(v_15, 1);
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_15), not_null(x_15));
            LocalPopChoice(a_9);
          }
        else
          {
            t = z_8;
            t = SSL_addr(not_null(w_15), not_null(x_15));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_75 (ATerm), ATerm k_75 (ATerm))
{
  ATerm b_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_75(t);
      LocalPopChoice(k_9);
    }
  else
    {
      t = b_9;
      {
        ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
        e_16 = t;
        d_16 :
        if(((ATgetType(e_16) == AT_LIST) && ((ATermList) e_16 != ATempty)))
          {
            f_16 = ATgetFirst((ATermList) e_16);
            g_16 = (ATerm) ATgetNext((ATermList) e_16);
            {
              ATerm j_16 = NULL;
              ATerm k_16 = NULL;
              t = not_null(g_16);
              {
                t = foldr_2(t, j_75, k_75);
                {
                  k_16 = t;
                  if(((j_16 != NULL) && (j_16 != k_16)))
                    _fail(k_16);
                  else
                    j_16 = k_16;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_16), not_null(j_16));
                t = k_75(t);
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
ATerm crush_2 (ATerm t, ATerm y_76 (ATerm), ATerm z_76 (ATerm))
{
  ATerm r_16 = NULL;
  ATerm t_16 = NULL;
  r_16 = t;
  {
    ATerm u_16 = NULL;
    ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
    t = not_null(r_16);
    {
      u_16 = t;
      {
        t = SSL_explode_term(not_null(u_16));
        {
          w_16 = t;
          q_16 :
          if(match_cons(w_16, sym__2))
            {
              x_16 = ATgetArgument(w_16, 0);
              y_16 = ATgetArgument(w_16, 1);
              if(((t_16 != NULL) && (t_16 != y_16)))
                _fail(y_16);
              else
                t_16 = y_16;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_16);
      t = foldr_2(t, y_76, z_76);
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
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym__2))
    {
      f_17 = ATgetArgument(e_17, 0);
      g_17 = ATgetArgument(e_17, 1);
      {
        ATerm l_9;
        l_9 = t;
        {
          ATerm m_9 = t;
          int n_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_17), not_null(g_17));
              LocalPopChoice(n_9);
            }
          else
            {
              t = m_9;
              t = SSL_gtr(not_null(f_17), not_null(g_17));
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
  ATerm m_17 = NULL;
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
      n_17 = t;
      l_17 :
      if(match_cons(n_17, sym__2))
        {
          o_17 = ATgetArgument(n_17, 0);
          p_17 = ATgetArgument(n_17, 1);
          {
            if(((m_17 != NULL) && (m_17 != o_17)))
              _fail(o_17);
            else
              m_17 = o_17;
            if(((m_17 != NULL) && (m_17 != p_17)))
              _fail(p_17);
            else
              m_17 = p_17;
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
ATerm if_verbose1_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm d_1 (ATerm t)
  {
    ATerm q_9;
    q_9 = t;
    {
      ATerm s_17 = NULL;
      ATerm t_17 = NULL;
      t = term_r_8;
      {
        t = get_config_0(t);
        {
          t_17 = t;
          if(((s_17 != NULL) && (s_17 != t_17)))
            _fail(t_17);
          else
            s_17 = t_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), term_q_6);
        t = geq_0(t);
      }
    }
    t = q_9;
    t = l_64(t);
    return(t);
  }
  t = try_1(t, d_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm x_17 = NULL,z_17 = NULL;
    ATerm r_9;
    r_9 = t;
    {
      ATerm y_17 = NULL;
      t = run_time_0(t);
      {
        y_17 = t;
        if(((x_17 != NULL) && (x_17 != y_17)))
          _fail(y_17);
        else
          x_17 = y_17;
      }
    }
    t = r_9;
    {
      ATerm a_18 = NULL;
      t = term_s_9;
      {
        t = get_config_0(t);
        {
          a_18 = t;
          if(((z_17 != NULL) && (z_17 != a_18)))
            _fail(a_18);
          else
            z_17 = a_18;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_9), not_null(x_17)), term_w_9), not_null(z_17)));
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
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym__2))
    {
      g_18 = ATgetArgument(f_18, 0);
      h_18 = ATgetArgument(f_18, 1);
      t = SSL_WriteToTextFile(not_null(g_18), not_null(h_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym__2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      t = SSL_WriteToBinaryFile(not_null(o_18), not_null(p_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm x_18 = NULL;
  ATerm b_10;
  b_10 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm e_10 = t;
      int f_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm y_18 = NULL,z_18 = NULL;
            y_18 = t;
            u_18 :
            if(match_cons(y_18, sym_Output_1))
              {
                z_18 = ATgetArgument(y_18, 0);
                if(((x_18 != NULL) && (x_18 != z_18)))
                  _fail(z_18);
                else
                  x_18 = z_18;
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
            ATerm a_19 = NULL;
            t = term_g_10;
            {
              a_19 = t;
              if(((x_18 != NULL) && (x_18 != a_19)))
                _fail(a_19);
              else
                x_18 = a_19;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_1, _id);
  }
  t = b_10;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        t = not_null(x_18);
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
              ATerm b_19 = NULL;
              b_19 = t;
              w_18 :
              if(!(match_cons(b_19, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm m_66 (ATerm))
{
  ATerm h_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  ATerm j_10;
  j_10 = t;
  t = dtime_0(t);
  t = j_10;
  {
    t = m_66(t);
    {
      ATerm k_10;
      k_10 = t;
      {
        ATerm i_19 = NULL;
        t = dtime_0(t);
        {
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
        }
      }
      t = k_10;
      {
        j_19 = t;
        g_19 :
        if(match_cons(j_19, sym__2))
          {
            k_19 = ATgetArgument(j_19, 0);
            l_19 = ATgetArgument(j_19, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_19)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_19))), not_null(l_19));
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
  ATerm r_19 = NULL;
  r_19 = t;
  t = SSL_ReadFromFile(not_null(r_19));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_82 (ATerm), ATerm r_82 (ATerm))
{
  ATerm w_19 = NULL,y_19 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm x_19 = NULL;
    t = q_82(t);
    {
      x_19 = t;
      if(((w_19 != NULL) && (w_19 != x_19)))
        _fail(x_19);
      else
        w_19 = x_19;
    }
  }
  t = l_10;
  {
    ATerm z_19 = NULL;
    t = r_82(t);
    {
      z_19 = t;
      if(((y_19 != NULL) && (y_19 != z_19)))
        _fail(z_19);
      else
        y_19 = z_19;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(y_19));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_20 = NULL;
  ATerm m_10;
  m_10 = t;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 (ATerm t)
        {
          ATerm g_20 = NULL,h_20 = NULL;
          g_20 = t;
          d_20 :
          if(match_cons(g_20, sym_Input_1))
            {
              h_20 = ATgetArgument(g_20, 0);
              if(((f_20 != NULL) && (f_20 != h_20)))
                _fail(h_20);
              else
                f_20 = h_20;
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
          ATerm i_20 = NULL;
          t = term_t_10;
          {
            i_20 = t;
            if(((f_20 != NULL) && (f_20 != i_20)))
              _fail(i_20);
            else
              f_20 = i_20;
          }
        }
      }
  }
  t = m_10;
  {
    ATerm m_1 (ATerm t)
    {
      t = not_null(f_20);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym_Version_0))
    {
      ATerm r_20 = NULL,t_20 = NULL;
      ATerm x_10;
      x_10 = t;
      {
        ATerm s_20 = NULL;
        t = SSLgetAnnotations(not_null(p_20));
        {
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
        }
      }
      t = x_10;
      {
        ATerm u_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_20));
        {
          u_20 = t;
          if(((t_20 != NULL) && (t_20 != u_20)))
            _fail(u_20);
          else
            t_20 = u_20;
        }
        t = not_null(t_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_66 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm z_10 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
  t = k_66(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_20 = NULL;
  z_20 = t;
  t = SSL_table_create(not_null(z_20));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_21 = NULL;
  d_21 = t;
  {
    ATerm f_11;
    f_11 = t;
    {
      t = term_g_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_11, term_h_11, not_null(d_21));
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
  ATerm m_21 = NULL;
  m_21 = t;
  t = SSL_string_to_int(not_null(m_21));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  v_21 = t;
  t_21 :
  if(match_string(v_21, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(v_21) == AT_LIST) && ((ATermList) v_21 != ATempty)))
        {
          w_21 = ATgetFirst((ATermList) v_21);
          x_21 = (ATerm) ATgetNext((ATermList) v_21);
          u_21 :
          if(((ATgetType(x_21) == AT_LIST) && ((ATermList) x_21 != ATempty)))
            {
              y_21 = ATgetFirst((ATermList) x_21);
              z_21 = (ATerm) ATgetNext((ATermList) x_21);
              {
                ATerm d_22 = NULL;
                ATerm i_11;
                i_11 = t;
                {
                  t = not_null(w_21);
                  t = l_0(t);
                }
                t = i_11;
                {
                  ATerm e_22 = NULL;
                  t = not_null(y_21);
                  {
                    t = m_0(t);
                    {
                      e_22 = t;
                      if(((d_22 != NULL) && (d_22 != e_22)))
                        _fail(e_22);
                      else
                        d_22 = e_22;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_21)), not_null(d_22));
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
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm c_23 = NULL;
        c_23 = t;
        i_22 :
        if(!(match_string(c_23, "-i")))
          {
            if(!(match_string(c_23, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_1 (ATerm t)
      {
        ATerm f_23 = NULL;
        ATerm o_11;
        o_11 = t;
        {
          ATerm d_23 = NULL;
          ATerm e_23 = NULL;
          e_23 = t;
          if(((d_23 != NULL) && (d_23 != e_23)))
            _fail(e_23);
          else
            d_23 = e_23;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(d_23));
            t = set_config_0(t);
          }
        }
        t = o_11;
        {
          ATerm g_23 = NULL;
          g_23 = t;
          if(((f_23 != NULL) && (f_23 != g_23)))
            _fail(g_23);
          else
            f_23 = g_23;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_23));
        }
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = term_t_11;
        return(t);
      }
      t = ArgOption_3(t, o_1, p_1, s_1);
      LocalPopChoice(k_11);
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
              ATerm h_23 = NULL;
              h_23 = t;
              l_22 :
              if(!(match_string(h_23, "-o")))
                {
                  if(!(match_string(h_23, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              ATerm k_23 = NULL;
              ATerm y_11;
              y_11 = t;
              {
                ATerm i_23 = NULL;
                ATerm j_23 = NULL;
                j_23 = t;
                if(((i_23 != NULL) && (i_23 != j_23)))
                  _fail(j_23);
                else
                  i_23 = j_23;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_11, not_null(i_23));
                  t = set_config_0(t);
                }
              }
              t = y_11;
              {
                ATerm l_23 = NULL;
                l_23 = t;
                if(((k_23 != NULL) && (k_23 != l_23)))
                  _fail(l_23);
                else
                  k_23 = l_23;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_23));
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
                    ATerm m_23 = NULL;
                    m_23 = t;
                    o_22 :
                    if(!(match_string(m_23, "-S")))
                      {
                        if(!(match_string(m_23, "--silent")))
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
                    t = term_e_12;
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
                    int l_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_1 (ATerm t)
                        {
                          ATerm q_23 = NULL;
                          q_23 = t;
                          p_22 :
                          if(!(match_string(q_23, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm a_2 (ATerm t)
                        {
                          ATerm t_23 = NULL;
                          ATerm p_12;
                          p_12 = t;
                          {
                            ATerm r_23 = NULL;
                            ATerm s_23 = NULL;
                            t = string_to_int_0(t);
                            {
                              s_23 = t;
                              if(((r_23 != NULL) && (r_23 != s_23)))
                                _fail(s_23);
                              else
                                r_23 = s_23;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_r_8, not_null(r_23));
                              t = set_config_0(t);
                            }
                          }
                          t = p_12;
                          {
                            ATerm u_23 = NULL;
                            u_23 = t;
                            if(((t_23 != NULL) && (t_23 != u_23)))
                              _fail(u_23);
                            else
                              t_23 = u_23;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_23));
                          }
                          return(t);
                        }
                        ATerm b_2 (ATerm t)
                        {
                          t = term_r_12;
                          return(t);
                        }
                        t = ArgOption_3(t, z_1, a_2, b_2);
                        LocalPopChoice(l_12);
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
                                ATerm v_23 = NULL;
                                v_23 = t;
                                s_22 :
                                if(!(match_string(v_23, "-v")))
                                  {
                                    if(!(match_string(v_23, "--version")))
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
                                t = term_z_12;
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
                                int f_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_2 (ATerm t)
                                    {
                                      ATerm y_23 = NULL;
                                      y_23 = t;
                                      a_23 :
                                      if(!(match_string(y_23, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm i_2 (ATerm t)
                                    {
                                      t = term_l_13;
                                      t = set_config_0(t);
                                      t = term_m_13;
                                      return(t);
                                    }
                                    ATerm j_2 (ATerm t)
                                    {
                                      t = term_n_13;
                                      return(t);
                                    }
                                    t = Option_3(t, f_2, i_2, j_2);
                                    LocalPopChoice(f_13);
                                  }
                                else
                                  {
                                    t = e_13;
                                    {
                                      ATerm k_2 (ATerm t)
                                      {
                                        ATerm z_23 = NULL;
                                        z_23 = t;
                                        b_23 :
                                        if(!(match_string(z_23, "-s")))
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
                                      t = Option_3(t, k_2, n_2, o_2);
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
  ATerm h_24 = NULL;
  h_24 = t;
  t = SSL_table_destroy(not_null(h_24));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  t = SSL_exit(not_null(m_24));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  t = SSL_implode_string(not_null(q_24));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm t_24 (ATerm t)
  {
    ATerm w_13 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_24);
        LocalPopChoice(b_14);
      }
    else
      {
        t = w_13;
        {
          t = Nil_0(t);
          t = t_79(t);
        }
      }
    return(t);
  }
  t = t_24(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
        w_24 = t;
        v_24 :
        if(((ATgetType(w_24) == AT_LIST) && ((ATermList) w_24 != ATempty)))
          {
            x_24 = ATgetFirst((ATermList) w_24);
            y_24 = (ATerm) ATgetNext((ATermList) w_24);
            {
              t = not_null(x_24);
              {
                ATerm p_2 (ATerm t)
                {
                  t = not_null(y_24);
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
  ATerm e_25 = NULL;
  e_25 = t;
  t = SSL_explode_string(not_null(e_25));
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
ATerm long_description_1 (ATerm t, ATerm l_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm h_25 (ATerm t)
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
        t = Cons_2(t, f_79, h_25);
      }
    return(t);
  }
  t = h_25(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  q_25 = t;
  n_25 :
  if(((ATgetType(q_25) == AT_LIST) && ((ATermList) q_25 != ATempty)))
    {
      o_25 = ATgetFirst((ATermList) q_25);
      p_25 = (ATerm) ATgetNext((ATermList) q_25);
      {
        ATerm t_25 = NULL;
        t = not_null(p_25);
        {
          ATerm h_14;
          h_14 = t;
          {
            ATerm u_25 = NULL,e_26 = NULL,g_26 = NULL;
            ATerm i_14;
            i_14 = t;
            {
              ATerm d_26 = NULL;
              t = k_0(t);
              {
                d_26 = t;
                if(((u_25 != NULL) && (u_25 != d_26)))
                  _fail(d_26);
                else
                  u_25 = d_26;
              }
            }
            t = i_14;
            {
              ATerm f_26 = NULL;
              t = not_null(o_25);
              {
                t = j_0(t);
                {
                  f_26 = t;
                  if(((e_26 != NULL) && (e_26 != f_26)))
                    _fail(f_26);
                  else
                    e_26 = f_26;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_25)), not_null(e_26));
                {
                  g_26 = t;
                  if(((t_25 != NULL) && (t_25 != g_26)))
                    _fail(g_26);
                  else
                    t_25 = g_26;
                }
              }
            }
          }
          t = h_14;
          {
            ATerm q_2 (ATerm t)
            {
              t = not_null(t_25);
              return(t);
            }
            t = reverse_acc_2(t, j_0, q_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) q_25 == ATempty))
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
  ATerm r_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_55 (ATerm))
{
  ATerm v_26 = NULL,w_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym_Program_1))
    {
      w_26 = ATgetArgument(v_26, 0);
      {
        ATerm z_26 = NULL,h_27 = NULL;
        ATerm g_27 = NULL;
        t = SSLgetAnnotations(not_null(v_26));
        {
          g_27 = t;
          if(((z_26 != NULL) && (z_26 != g_27)))
            _fail(g_27);
          else
            z_26 = g_27;
        }
        {
          t = not_null(w_26);
          {
            ATerm p_27 = NULL;
            t = y_55(t);
            {
              h_27 = t;
              {
                ATerm q_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(h_27)), not_null(z_26));
                {
                  q_27 = t;
                  if(((p_27 != NULL) && (p_27 != q_27)))
                    _fail(q_27);
                  else
                    p_27 = q_27;
                }
                t = not_null(p_27);
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
  ATerm a_28 = NULL;
  ATerm y_2 (ATerm t)
  {
    ATerm z_2 (ATerm t)
    {
      ATerm b_28 = NULL;
      b_28 = t;
      if(((a_28 != NULL) && (a_28 != b_28)))
        _fail(b_28);
      else
        a_28 = b_28;
      return(t);
    }
    t = Program_1(t, z_2);
    return(t);
  }
  t = option_defined_1(t, y_2);
  {
    ATerm e_3 (ATerm t)
    {
      ATerm c_28 = NULL;
      ATerm d_28 = NULL;
      t = term_r_5;
      {
        ATerm f_3 (ATerm t)
        {
          t = not_null(a_28);
          return(t);
        }
        t = short_description_1(t, f_3);
        {
          t = concat_strings_0(t);
          {
            d_28 = t;
            if(((c_28 != NULL) && (c_28 != d_28)))
              _fail(d_28);
            else
              c_28 = d_28;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATempty, not_null(c_28)));
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
                  ATerm e_28 = NULL;
                  e_28 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_28)), term_r_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_3);
                {
                  ATerm h_3 (ATerm t)
                  {
                    ATerm g_28 = NULL;
                    ATerm h_28 = NULL;
                    t = term_r_5;
                    {
                      ATerm i_3 (ATerm t)
                      {
                        t = not_null(a_28);
                        return(t);
                      }
                      t = long_description_1(t, i_3);
                      {
                        t = concat_strings_0(t);
                        {
                          h_28 = t;
                          if(((g_28 != NULL) && (g_28 != h_28)))
                            _fail(h_28);
                          else
                            g_28 = h_28;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_28)), term_s_14));
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
ATerm Undefined_1 (ATerm t, ATerm z_55 (ATerm))
{
  ATerm r_28 = NULL,s_28 = NULL;
  r_28 = t;
  q_28 :
  if(match_cons(r_28, sym_Undefined_1))
    {
      s_28 = ATgetArgument(r_28, 0);
      {
        ATerm v_28 = NULL,x_28 = NULL;
        ATerm w_28 = NULL;
        t = SSLgetAnnotations(not_null(r_28));
        {
          w_28 = t;
          if(((v_28 != NULL) && (v_28 != w_28)))
            _fail(w_28);
          else
            v_28 = w_28;
        }
        {
          t = not_null(s_28);
          {
            ATerm z_28 = NULL;
            t = z_55(t);
            {
              x_28 = t;
              {
                ATerm a_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_28)), not_null(v_28));
                {
                  a_29 = t;
                  if(((z_28 != NULL) && (z_28 != a_29)))
                    _fail(a_29);
                  else
                    z_28 = a_29;
                }
                t = not_null(z_28);
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
ATerm fetch_1 (ATerm t, ATerm n_79 (ATerm))
{
  ATerm f_29 (ATerm t)
  {
    ATerm t_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_79, _id);
        LocalPopChoice(y_14);
      }
    else
      {
        t = t_14;
        t = Cons_2(t, _id, f_29);
      }
    return(t);
  }
  t = f_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_64 (ATerm))
{
  t = fetch_1(t, j_64);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym_Help_0))
    {
      ATerm m_29 = NULL,o_29 = NULL;
      ATerm z_14;
      z_14 = t;
      {
        ATerm n_29 = NULL;
        t = SSLgetAnnotations(not_null(k_29));
        {
          n_29 = t;
          if(((m_29 != NULL) && (m_29 != n_29)))
            _fail(n_29);
          else
            m_29 = n_29;
        }
      }
      t = z_14;
      {
        ATerm p_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_29));
        {
          p_29 = t;
          if(((o_29 != NULL) && (o_29 != p_29)))
            _fail(p_29);
          else
            o_29 = p_29;
        }
        t = not_null(o_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_83 (ATerm))
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_83(t);
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
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym__2))
    {
      w_29 = ATgetArgument(v_29, 0);
      x_29 = ATgetArgument(v_29, 1);
      t = SSL_table_get(not_null(w_29), not_null(x_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  l_30 = t;
  k_30 :
  if(match_cons(l_30, sym__3))
    {
      m_30 = ATgetArgument(l_30, 0);
      n_30 = ATgetArgument(l_30, 1);
      o_30 = ATgetArgument(l_30, 2);
      {
        ATerm c_15;
        c_15 = t;
        {
          ATerm s_30 = NULL;
          ATerm t_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_30), not_null(n_30));
          {
            ATerm d_15 = t;
            int e_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_15);
              }
            else
              {
                t = d_15;
                t = (ATerm) ATempty;
              }
            {
              t_30 = t;
              if(((s_30 != NULL) && (s_30 != t_30)))
                _fail(t_30);
              else
                s_30 = t_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_30), not_null(n_30), (ATerm) ATinsert(CheckATermList(not_null(s_30)), not_null(o_30)));
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
ATerm register_usage_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm z_30 = NULL;
  ATerm a_31 = NULL;
  t = term_r_5;
  {
    t = p_63(t);
    {
      a_31 = t;
      if(((z_30 != NULL) && (z_30 != a_31)))
        _fail(a_31);
      else
        z_30 = a_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_14, term_l_14, not_null(z_30));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_string(g_31, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(g_31) == AT_LIST) && ((ATermList) g_31 != ATempty)))
        {
          h_31 = ATgetFirst((ATermList) g_31);
          i_31 = (ATerm) ATgetNext((ATermList) g_31);
          {
            ATerm l_31 = NULL;
            ATerm g_15;
            g_15 = t;
            {
              t = not_null(h_31);
              t = c_0(t);
            }
            t = g_15;
            {
              ATerm m_31 = NULL;
              t = term_r_5;
              {
                t = d_0(t);
                {
                  m_31 = t;
                  if(((l_31 != NULL) && (l_31 != m_31)))
                    _fail(m_31);
                  else
                    l_31 = m_31;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(i_31)), not_null(l_31));
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
    ATerm r_31 = NULL;
    r_31 = t;
    q_31 :
    if(!(match_string(r_31, "--help")))
      {
        if(!(match_string(r_31, "-h")))
          {
            if(!(match_string(r_31, "-?")))
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
  ATerm r_3 (ATerm t)
  {
    t = term_k_15;
    return(t);
  }
  t = Option_3(t, j_3, q_3, r_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_31 = NULL,x_31 = NULL,y_31 = NULL;
  u_31 = t;
  t_31 :
  if(((ATgetType(u_31) == AT_LIST) && ((ATermList) u_31 != ATempty)))
    {
      x_31 = ATgetFirst((ATermList) u_31);
      y_31 = (ATerm) ATgetNext((ATermList) u_31);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_31)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_31)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
  h_32 = t;
  g_32 :
  if(match_cons(h_32, sym__2))
    {
      i_32 = ATgetArgument(h_32, 0);
      j_32 = ATgetArgument(h_32, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_8, not_null(i_32), not_null(j_32));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_63 (ATerm))
{
  ATerm l_15;
  l_15 = t;
  {
    ATerm x_3 (ATerm t)
    {
      t = term_o_15;
      t = n_63(t);
      return(t);
    }
    t = try_1(t, x_3);
  }
  t = l_15;
  {
    ATerm y_3 (ATerm t)
    {
      ATerm r_32 = NULL;
      ATerm p_15;
      p_15 = t;
      {
        ATerm p_32 = NULL;
        ATerm q_32 = NULL;
        q_32 = t;
        if(((p_32 != NULL) && (p_32 != q_32)))
          _fail(q_32);
        else
          p_32 = q_32;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(p_32));
          t = set_config_0(t);
        }
      }
      t = p_15;
      {
        ATerm s_32 = NULL;
        s_32 = t;
        if(((r_32 != NULL) && (r_32 != s_32)))
          _fail(s_32);
        else
          r_32 = s_32;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_32));
      }
      return(t);
    }
    ATerm z_3 (ATerm t)
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_15);
            }
          else
            {
              t = t_15;
              {
                t = n_63(t);
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
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  ATerm z_15;
  z_15 = t;
  {
    ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
    b_33 = t;
    x_32 :
    if(match_cons(b_33, sym__3))
      {
        c_33 = ATgetArgument(b_33, 0);
        d_33 = ATgetArgument(b_33, 1);
        e_33 = ATgetArgument(b_33, 2);
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
            {
              if(((a_33 != NULL) && (a_33 != e_33)))
                _fail(e_33);
              else
                a_33 = e_33;
              t = SSL_table_put(not_null(y_32), not_null(z_32), not_null(a_33));
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
ATerm parse_options_1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm h_33 = NULL;
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
      ATerm c_16 = t;
      int h_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_63(t);
          LocalPopChoice(h_16);
        }
      else
        {
          t = c_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_4);
    {
      ATerm b_4 (ATerm t)
      {
        ATerm i_16 = t;
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
            t = i_16;
            {
              ATerm c_4 (ATerm t)
              {
                ATerm d_4 (ATerm t)
                {
                  ATerm i_33 = NULL;
                  i_33 = t;
                  if(((h_33 != NULL) && (h_33 != i_33)))
                    _fail(i_33);
                  else
                    h_33 = i_33;
                  return(t);
                }
                t = Undefined_1(t, d_4);
                return(t);
              }
              t = option_defined_1(t, c_4);
              {
                ATerm m_16;
                m_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_33)), term_n_16));
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
ATerm iowrap_4 (ATerm t, ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm b_66 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    ATerm p_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_65(t);
        LocalPopChoice(s_16);
      }
    else
      {
        t = p_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, j_4);
  {
    t = store_options_0(t);
    {
      t = b_66(t);
      {
        ATerm v_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_66);
            LocalPopChoice(z_16);
          }
        else
          {
            t = v_16;
            {
              ATerm a_17 = t;
              int b_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, y_65);
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
ATerm iowrap_3 (ATerm t, ATerm s_65 (ATerm), ATerm t_65 (ATerm), ATerm u_65 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm s_4 (ATerm t)
    {
      ATerm c_17;
      c_17 = t;
      {
        ATerm l_33 = NULL;
        ATerm m_33 = NULL;
        t = term_s_9;
        {
          t = get_config_0(t);
          {
            m_33 = t;
            if(((l_33 != NULL) && (l_33 != m_33)))
              _fail(m_33);
            else
              l_33 = m_33;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_7, (ATerm) ATinsert(ATempty, not_null(l_33)));
          t = printnl_0(t);
        }
      }
      t = c_17;
      return(t);
    }
    t = if_verbose2_1(t, s_4);
    return(t);
  }
  t = iowrap_4(t, s_65, t_65, u_65, k_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_65 (ATerm), ATerm r_65 (ATerm))
{
  t = iowrap_3(t, q_65, r_65, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    t = _2(t, _id, n_65);
    return(t);
  }
  t = iowrap_2(t, t_4, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm v_4 (ATerm t)
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
    t = Specification_1(t, v_4);
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
