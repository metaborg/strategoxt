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
ATerm term_t_18;
ATerm term_c_18;
ATerm term_j_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_d_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_s_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_p_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_b_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_e_9;
ATerm term_x_8;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_m_7;
ATerm term_z_6;
ATerm term_u_6;
ATerm term_r_6;
ATerm term_n_6;
ATerm term_i_6;
ATerm term_a_6;
ATerm term_u_5;
ATerm term_r_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_l_5;
ATerm term_g_5;
ATerm term_w_4;
void init_constant_terms (void)
{
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_l_5);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_t_9, term_i_6);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_6);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_l_5);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_l_5);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_w_15, term_x_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__2, term_w_16, term_l_5);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__3, term_w_15, term_x_15, (ATerm) ATempty);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm r_66 (ATerm));
ATerm assert_1 (ATerm, ATerm n_93 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm p_93 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm o_0 (ATerm));
ATerm escape_1 (ATerm, ATerm v_82 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm f_57 (ATerm));
ATerm Cons_2 (ATerm, ATerm u_54 (ATerm), ATerm v_54 (ATerm));
ATerm Specification_1 (ATerm, ATerm h_57 (ATerm));
ATerm _2 (ATerm, ATerm l_53 (ATerm), ATerm m_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_73 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_86 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_89 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_87 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_70 (ATerm), ATerm k_70 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm u_77 (ATerm), ATerm v_77 (ATerm));
ATerm crush_2 (ATerm, ATerm s_76 (ATerm), ATerm t_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_89 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_87 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_91 (ATerm));
ATerm map_1 (ATerm, ATerm x_72 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_91 (ATerm));
ATerm Program_1 (ATerm, ATerm i_60 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm p_86 (ATerm));
ATerm Undefined_1 (ATerm, ATerm j_60 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_90 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_69 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_91 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_91 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_91 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm));
ATerm iowrap_4 (ATerm, ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_88 (ATerm), ATerm g_88 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_88 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm q_1 = NULL;
  q_1 = t;
  p_1 :
  if(((ATgetType(q_1) == AT_LIST) && ATisEmpty(q_1)))
    {
      {
        ATerm h_2 = NULL,m_2 = NULL;
        ATerm o_4;
        o_4 = t;
        {
          ATerm l_2 = NULL;
          t = SSLgetAnnotations(not_null(q_1));
          {
            l_2 = t;
            if(((h_2 != NULL) && (h_2 != l_2)))
              _fail(l_2);
            else
              h_2 = l_2;
          }
        }
        t = o_4;
        {
          ATerm n_2 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_2));
          {
            n_2 = t;
            if(((m_2 != NULL) && (m_2 != n_2)))
              _fail(n_2);
            else
              m_2 = n_2;
          }
          t = not_null(m_2);
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
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  x_2 :
  if(match_cons(y_2, sym__2))
    {
      z_2 = ATgetArgument(y_2, 0);
      a_3 = ATgetArgument(y_2, 1);
      {
        ATerm e_3 = NULL;
        ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
        t = not_null(y_2);
        {
          ATerm b_0 (ATerm t)
          {
            t = term_w_4;
            return(t);
          }
          t = rewrite_1(t, b_0);
          {
            f_3 = t;
            v_2 :
            if(match_cons(f_3, sym_Defined_2))
              {
                g_3 = ATgetArgument(f_3, 0);
                h_3 = ATgetArgument(f_3, 1);
                w_2 :
                if(match_string(g_3, "c_0"))
                  {
                    if(((e_3 != NULL) && (e_3 != h_3)))
                      _fail(h_3);
                    else
                      e_3 = h_3;
                  }
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
        t = not_null(e_3);
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
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  q_3 = t;
  o_3 :
  if(match_cons(q_3, sym_Call_2))
    {
      r_3 = ATgetArgument(q_3, 0);
      t_3 = ATgetArgument(q_3, 1);
      p_3 :
      if(match_cons(r_3, sym_SVar_1))
        {
          s_3 = ATgetArgument(r_3, 0);
          {
            ATerm w_3 = NULL,x_3 = NULL;
            ATerm y_3 = NULL;
            t = not_null(t_3);
            {
              t = length_0(t);
              {
                y_3 = t;
                {
                  if(((w_3 != NULL) && (w_3 != y_3)))
                    _fail(y_3);
                  else
                    w_3 = y_3;
                  {
                    ATerm x_4 = t;
                    int y_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_3 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_3), not_null(w_3));
                        {
                          t = RenameVar_0(t);
                          {
                            z_3 = t;
                            if(((x_3 != NULL) && (x_3 != z_3)))
                              _fail(z_3);
                            else
                              x_3 = z_3;
                          }
                        }
                        LocalPopChoice(y_4);
                      }
                    else
                      {
                        t = x_4;
                        {
                          ATerm a_4 = NULL;
                          t = not_null(s_3);
                          {
                            t = HoArg_0(t);
                            {
                              a_4 = t;
                              if(((x_3 != NULL) && (x_3 != a_4)))
                                _fail(a_4);
                              else
                                x_3 = a_4;
                            }
                          }
                        }
                      }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_3)), not_null(t_3));
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
ATerm topdown_1 (ATerm t, ATerm r_66 (ATerm))
{
  t = r_66(t);
  {
    ATerm f_0 (ATerm t)
    {
      t = topdown_1(t, r_66);
      return(t);
    }
    t = _all(t, f_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_93 (ATerm))
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  j_4 :
  if(match_cons(k_4, sym__2))
    {
      l_4 = ATgetArgument(k_4, 0);
      m_4 = ATgetArgument(k_4, 1);
      {
        ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
        ATerm z_4;
        z_4 = t;
        {
          ATerm s_4 = NULL;
          ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
          t = n_93(t);
          {
            s_4 = t;
            {
              if(((p_4 != NULL) && (p_4 != s_4)))
                _fail(s_4);
              else
                p_4 = s_4;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(p_4), not_null(l_4), not_null(m_4));
                {
                  t = table_push_0(t);
                  {
                    ATerm e_5 = t;
                    int f_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), term_g_5);
                        t = table_get_0(t);
                        LocalPopChoice(f_5);
                      }
                    else
                      {
                        t = e_5;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      t_4 = t;
                      i_4 :
                      if(((ATgetType(t_4) == AT_LIST) && !(ATisEmpty(t_4))))
                        {
                          u_4 = ATgetFirst((ATermList) t_4);
                          v_4 = (ATerm) ATgetNext((ATermList) t_4);
                          {
                            if(((q_4 != NULL) && (q_4 != u_4)))
                              _fail(u_4);
                            else
                              q_4 = u_4;
                            {
                              if(((r_4 != NULL) && (r_4 != v_4)))
                                _fail(v_4);
                              else
                                r_4 = v_4;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(p_4), term_g_5, (ATerm) ATinsert(CheckATermList(not_null(r_4)), (ATerm) ATinsert(CheckATermList(not_null(q_4)), not_null(l_4))));
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
        t = z_4;
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
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(((ATgetType(b_5) == AT_LIST) && !(ATisEmpty(b_5))))
    {
      c_5 = ATgetFirst((ATermList) b_5);
      d_5 = (ATerm) ATgetNext((ATermList) b_5);
      t = not_null(c_5);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
  i_5 = t;
  h_5 :
  if(match_cons(i_5, sym__2))
    {
      j_5 = ATgetArgument(i_5, 0);
      k_5 = ATgetArgument(i_5, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_5), not_null(k_5));
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
ATerm rewrite_1 (ATerm t, ATerm p_93 (ATerm))
{
  ATerm q_5 = NULL;
  ATerm s_5 = NULL;
  q_5 = t;
  {
    ATerm t_5 = NULL;
    t = term_l_5;
    {
      t = p_93(t);
      {
        t_5 = t;
        if(((s_5 != NULL) && (s_5 != t_5)))
          _fail(t_5);
        else
          s_5 = t_5;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_5), not_null(q_5));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  {
    ATerm m_5 = t;
    int n_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_6 = NULL;
        t = not_null(d_6);
        {
          ATerm i_0 (ATerm t)
          {
            t = term_o_5;
            return(t);
          }
          t = rewrite_1(t, i_0);
          {
            g_6 = t;
            z_5 :
            if(match_cons(g_6, sym_Undefined_0))
              {
                _fail(t);
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = term_p_5;
        LocalPopChoice(n_5);
      }
    else
      {
        t = m_5;
        {
          ATerm j_6 = NULL;
          ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
          t = not_null(d_6);
          {
            ATerm k_0 (ATerm t)
            {
              t = term_o_5;
              return(t);
            }
            t = rewrite_1(t, k_0);
            {
              k_6 = t;
              b_6 :
              if(match_cons(k_6, sym_Defined_2))
                {
                  l_6 = ATgetArgument(k_6, 0);
                  m_6 = ATgetArgument(k_6, 1);
                  c_6 :
                  if(match_string(l_6, "g_0"))
                    {
                      if(((j_6 != NULL) && (j_6 != m_6)))
                        _fail(m_6);
                      else
                        j_6 = m_6;
                    }
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
          t = not_null(j_6);
        }
      }
  }
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
ATerm int_to_string_0 (ATerm t)
{
  ATerm s_6 = NULL;
  s_6 = t;
  t = SSL_int_to_string(not_null(s_6));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
  d_7 = t;
  b_7 :
  if(((ATgetType(d_7) == AT_LIST) && !(ATisEmpty(d_7))))
    {
      e_7 = ATgetFirst((ATermList) d_7);
      f_7 = (ATerm) ATgetNext((ATermList) d_7);
      c_7 :
      if(match_int(e_7, 95))
        {
          ATerm h_7 = NULL;
          ATerm i_7 = NULL;
          t = not_null(f_7);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(h_7)), term_r_5), term_r_5);
        }
      else
        {
          if(match_int(e_7, 45))
            {
              ATerm k_7 = NULL;
              ATerm l_7 = NULL;
              t = not_null(f_7);
              {
                t = o_0(t);
                {
                  l_7 = t;
                  if(((k_7 != NULL) && (k_7 != l_7)))
                    _fail(l_7);
                  else
                    k_7 = l_7;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_7)), term_r_5);
            }
          else
            {
              if(match_int(e_7, 39))
                {
                  ATerm n_7 = NULL;
                  ATerm o_7 = NULL;
                  t = not_null(f_7);
                  {
                    t = o_0(t);
                    {
                      o_7 = t;
                      if(((n_7 != NULL) && (n_7 != o_7)))
                        _fail(o_7);
                      else
                        n_7 = o_7;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(n_7)), term_r_5), term_u_5), term_r_5);
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
ATerm escape_1 (ATerm t, ATerm v_82 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm v_7 (ATerm t)
    {
      ATerm v_5 = t;
      int w_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_82(t, v_7);
          LocalPopChoice(w_5);
        }
      else
        {
          t = v_5;
          {
            ATerm x_5 = t;
            int y_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, v_7);
                LocalPopChoice(y_5);
              }
            else
              {
                t = x_5;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = v_7(t);
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
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
  y_7 = t;
  x_7 :
  if(match_cons(y_7, sym_Mod_2))
    {
      z_7 = ATgetArgument(y_7, 0);
      a_8 = ATgetArgument(y_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_8)), term_a_6), not_null(z_7));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  ATerm e_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_77(t);
      LocalPopChoice(f_6);
    }
  else
    {
      t = e_6;
      {
        ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
        i_8 = t;
        h_8 :
        if(((ATgetType(i_8) == AT_LIST) && !(ATisEmpty(i_8))))
          {
            j_8 = ATgetFirst((ATermList) i_8);
            k_8 = (ATerm) ATgetNext((ATermList) i_8);
            {
              ATerm n_8 = NULL,p_8 = NULL;
              ATerm h_6;
              h_6 = t;
              {
                ATerm o_8 = NULL;
                t = not_null(j_8);
                {
                  t = y_77(t);
                  {
                    o_8 = t;
                    if(((n_8 != NULL) && (n_8 != o_8)))
                      _fail(o_8);
                    else
                      n_8 = o_8;
                  }
                }
              }
              t = h_6;
              {
                ATerm q_8 = NULL;
                t = not_null(k_8);
                {
                  t = foldr_3(t, w_77, x_77, y_77);
                  {
                    q_8 = t;
                    if(((p_8 != NULL) && (p_8 != q_8)))
                      _fail(q_8);
                    else
                      p_8 = q_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_8), not_null(p_8));
                  t = x_77(t);
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
    t = term_i_6;
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = term_n_6;
    return(t);
  }
  t = foldr_3(t, p_0, add_0, q_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym_SDef_3))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      d_9 = ATgetArgument(a_9, 2);
      {
        ATerm h_9 = NULL,i_9 = NULL;
        ATerm j_9 = NULL;
        t = not_null(c_9);
        {
          ATerm k_9 = NULL,m_9 = NULL,o_9 = NULL;
          t = length_0(t);
          {
            j_9 = t;
            {
              if(((h_9 != NULL) && (h_9 != j_9)))
                _fail(j_9);
              else
                h_9 = j_9;
              {
                ATerm o_6;
                o_6 = t;
                {
                  ATerm l_9 = NULL;
                  t = not_null(b_9);
                  {
                    ATerm p_6 = t;
                    int q_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = NameMod_0(t);
                        LocalPopChoice(q_6);
                      }
                    else
                      {
                        t = p_6;
                        {
                        }
                      }
                    {
                      t = escape_1(t, Cify_1);
                      {
                        l_9 = t;
                        if(((k_9 != NULL) && (k_9 != l_9)))
                          _fail(l_9);
                        else
                          k_9 = l_9;
                      }
                    }
                  }
                }
                t = o_6;
                {
                  ATerm n_9 = NULL;
                  t = not_null(h_9);
                  {
                    t = int_to_string_0(t);
                    {
                      n_9 = t;
                      if(((m_9 != NULL) && (m_9 != n_9)))
                        _fail(n_9);
                      else
                        m_9 = n_9;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_9)), term_r_6), not_null(k_9));
                    {
                      t = concat_strings_0(t);
                      {
                        o_9 = t;
                        {
                          if(((i_9 != NULL) && (i_9 != o_9)))
                            _fail(o_9);
                          else
                            i_9 = o_9;
                          {
                            ATerm t_6;
                            t_6 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_9), not_null(h_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_u_6, not_null(i_9)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_w_4;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = t_6;
                            {
                              ATerm v_6 = t;
                              int w_6 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(b_9);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm x_6;
                                      x_6 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_9), term_p_5);
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            t = term_o_5;
                                            return(t);
                                          }
                                          t = assert_1(t, s_0);
                                        }
                                      }
                                      t = x_6;
                                    }
                                  }
                                  LocalPopChoice(w_6);
                                }
                              else
                                {
                                  t = v_6;
                                  {
                                    ATerm y_6;
                                    y_6 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_9), (ATerm) ATmakeAppl(sym_Defined_2, term_z_6, not_null(i_9)));
                                      {
                                        ATerm t_0 (ATerm t)
                                        {
                                          t = term_o_5;
                                          return(t);
                                        }
                                        t = assert_1(t, t_0);
                                      }
                                    }
                                    t = y_6;
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
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_9), not_null(c_9), not_null(d_9));
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
        ATerm a_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RenameCall_0(t);
            LocalPopChoice(g_7);
          }
        else
          {
            t = a_7;
            {
            }
          }
        return(t);
      }
      t = topdown_1(t, v_0);
      return(t);
    }
    t = map_1(t, u_0);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm f_57 (ATerm))
{
  ATerm z_9 = NULL,a_10 = NULL;
  z_9 = t;
  y_9 :
  if(match_cons(z_9, sym_Strategies_1))
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
            t = f_57(t);
            {
              f_10 = t;
              {
                ATerm i_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(f_10)), not_null(d_10));
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
ATerm Cons_2 (ATerm t, ATerm u_54 (ATerm), ATerm v_54 (ATerm))
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  s_10 :
  if(((ATgetType(t_10) == AT_LIST) && !(ATisEmpty(t_10))))
    {
      u_10 = ATgetFirst((ATermList) t_10);
      v_10 = (ATerm) ATgetNext((ATermList) t_10);
      {
        ATerm z_10 = NULL,b_11 = NULL;
        ATerm a_11 = NULL;
        t = SSLgetAnnotations(not_null(t_10));
        {
          a_11 = t;
          if(((z_10 != NULL) && (z_10 != a_11)))
            _fail(a_11);
          else
            z_10 = a_11;
        }
        {
          t = not_null(u_10);
          {
            ATerm d_11 = NULL;
            t = u_54(t);
            {
              b_11 = t;
              {
                t = not_null(v_10);
                {
                  ATerm f_11 = NULL;
                  t = v_54(t);
                  {
                    d_11 = t;
                    {
                      ATerm g_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_11)), not_null(b_11)), not_null(z_10));
                      {
                        g_11 = t;
                        if(((f_11 != NULL) && (f_11 != g_11)))
                          _fail(g_11);
                        else
                          f_11 = g_11;
                      }
                      t = not_null(f_11);
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
ATerm Specification_1 (ATerm t, ATerm h_57 (ATerm))
{
  ATerm r_11 = NULL,s_11 = NULL;
  r_11 = t;
  q_11 :
  if(match_cons(r_11, sym_Specification_1))
    {
      s_11 = ATgetArgument(r_11, 0);
      {
        ATerm v_11 = NULL,x_11 = NULL;
        ATerm w_11 = NULL;
        t = SSLgetAnnotations(not_null(r_11));
        {
          w_11 = t;
          if(((v_11 != NULL) && (v_11 != w_11)))
            _fail(w_11);
          else
            v_11 = w_11;
        }
        {
          t = not_null(s_11);
          {
            ATerm z_11 = NULL;
            t = h_57(t);
            {
              x_11 = t;
              {
                ATerm a_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(x_11)), not_null(v_11));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm l_53 (ATerm), ATerm m_53 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym__2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      {
        ATerm r_12 = NULL,t_12 = NULL;
        ATerm s_12 = NULL;
        t = SSLgetAnnotations(not_null(l_12));
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
        {
          t = not_null(m_12);
          {
            ATerm v_12 = NULL;
            t = l_53(t);
            {
              t_12 = t;
              {
                t = not_null(n_12);
                {
                  ATerm x_12 = NULL;
                  t = m_53(t);
                  {
                    v_12 = t;
                    {
                      ATerm y_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_12), not_null(v_12)), not_null(r_12));
                      {
                        y_12 = t;
                        if(((x_12 != NULL) && (x_12 != y_12)))
                          _fail(y_12);
                        else
                          x_12 = y_12;
                      }
                      t = not_null(x_12);
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
  ATerm g_13 = NULL;
  ATerm j_7;
  j_7 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm h_13 = NULL,i_13 = NULL;
      h_13 = t;
      f_13 :
      if(match_cons(h_13, sym_Program_1))
        {
          i_13 = ATgetArgument(h_13, 0);
          if(((g_13 != NULL) && (g_13 != i_13)))
            _fail(i_13);
          else
            g_13 = i_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, w_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_7), not_null(g_13)), term_p_7));
      {
        t = printnl_0(t);
        {
          t = term_n_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym__2))
    {
      n_13 = ATgetArgument(m_13, 0);
      o_13 = ATgetArgument(m_13, 1);
      {
        ATerm r_7;
        r_7 = t;
        t = SSL_printnl(not_null(n_13), not_null(o_13));
        t = r_7;
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
  ATerm t_13 = NULL;
  t_13 = t;
  t = SSL_implode_string(not_null(t_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
        y_13 = t;
        x_13 :
        if(((ATgetType(y_13) == AT_LIST) && !(ATisEmpty(y_13))))
          {
            z_13 = ATgetFirst((ATermList) y_13);
            a_14 = (ATerm) ATgetNext((ATermList) y_13);
            {
              t = not_null(z_13);
              {
                ATerm x_0 (ATerm t)
                {
                  t = not_null(a_14);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm k_14 = NULL;
  ATerm m_14 = NULL;
  k_14 = t;
  {
    ATerm n_14 = NULL;
    ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
    t = not_null(k_14);
    {
      n_14 = t;
      {
        t = SSL_explode_term(not_null(n_14));
        {
          p_14 = t;
          i_14 :
          if(match_cons(p_14, sym__2))
            {
              q_14 = ATgetArgument(p_14, 0);
              r_14 = ATgetArgument(p_14, 1);
              j_14 :
              if(match_string(q_14, ""))
                {
                  if(((m_14 != NULL) && (m_14 != r_14)))
                    _fail(r_14);
                  else
                    m_14 = r_14;
                }
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
      t = not_null(m_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm v_14 (ATerm t)
  {
    ATerm u_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_14);
        LocalPopChoice(w_7);
      }
    else
      {
        t = u_7;
        {
          t = Nil_0(t);
          t = m_73(t);
        }
      }
    return(t);
  }
  t = v_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym__2))
    {
      z_14 = ATgetArgument(y_14, 0);
      a_15 = ATgetArgument(y_14, 1);
      {
        t = not_null(z_14);
        {
          ATerm y_0 (ATerm t)
          {
            t = not_null(a_15);
            return(t);
          }
          t = at_end_1(t, y_0);
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
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  t = SSL_explode_string(not_null(f_15));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_86 (ATerm))
{
  ATerm f_8;
  f_8 = t;
  {
    ATerm k_15 = NULL,m_15 = NULL;
    ATerm g_8;
    g_8 = t;
    {
      ATerm l_15 = NULL;
      t = o_86(t);
      {
        l_15 = t;
        if(((k_15 != NULL) && (k_15 != l_15)))
          _fail(l_15);
        else
          k_15 = l_15;
      }
    }
    t = g_8;
    {
      ATerm n_15 = NULL;
      n_15 = t;
      if(((m_15 != NULL) && (m_15 != n_15)))
        _fail(n_15);
      else
        m_15 = n_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_15)), not_null(k_15)));
        t = printnl_0(t);
      }
    }
  }
  t = f_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm r_15 = NULL;
  r_15 = t;
  t = SSL_is_string(not_null(r_15));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = l_8;
      {
        ATerm r_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              ATerm t_8 = t;
              int u_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(u_8);
                }
              else
                {
                  t = t_8;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, z_0);
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
            {
              ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
              a_16 = t;
              z_15 :
              if(match_cons(a_16, sym_Path_1))
                {
                  b_16 = ATgetArgument(a_16, 0);
                  t = not_null(b_16);
                }
              else
                {
                  if(match_cons(a_16, sym_Var_1))
                    {
                      b_16 = ATgetArgument(a_16, 0);
                      {
                        t = not_null(b_16);
                        {
                          ATerm v_8 = t;
                          int w_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_8);
                            }
                          else
                            {
                              t = v_8;
                              {
                                ATerm a_1 (ATerm t)
                                {
                                  t = term_x_8;
                                  return(t);
                                }
                                t = debug_1(t, a_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(a_16, sym_Prefix_2))
                        {
                          b_16 = ATgetArgument(a_16, 0);
                          c_16 = ATgetArgument(a_16, 1);
                          {
                            ATerm h_16 = NULL,j_16 = NULL;
                            ATerm y_8;
                            y_8 = t;
                            {
                              ATerm i_16 = NULL;
                              t = not_null(b_16);
                              {
                                t = eval_config_0(t);
                                {
                                  i_16 = t;
                                  if(((h_16 != NULL) && (h_16 != i_16)))
                                    _fail(i_16);
                                  else
                                    h_16 = i_16;
                                }
                              }
                            }
                            t = y_8;
                            {
                              ATerm k_16 = NULL;
                              t = not_null(c_16);
                              {
                                t = eval_config_0(t);
                                {
                                  k_16 = t;
                                  if(((j_16 != NULL) && (j_16 != k_16)))
                                    _fail(k_16);
                                  else
                                    j_16 = k_16;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(j_16));
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
  ATerm s_16 = NULL;
  s_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_9, not_null(s_16));
    {
      t = table_get_0(t);
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm p_9;
              p_9 = t;
              {
                ATerm u_16 = NULL;
                ATerm v_16 = NULL;
                v_16 = t;
                if(((u_16 != NULL) && (u_16 != v_16)))
                  _fail(v_16);
                else
                  u_16 = v_16;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_e_9, not_null(s_16), not_null(u_16));
                  t = table_put_0(t);
                }
              }
              t = p_9;
            }
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_89 (ATerm))
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_9;
      s_9 = t;
      {
        ATerm z_16 = NULL;
        ATerm a_17 = NULL;
        t = term_t_9;
        {
          t = get_config_0(t);
          {
            a_17 = t;
            if(((z_16 != NULL) && (z_16 != a_17)))
              _fail(a_17);
            else
              z_16 = a_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_16), term_u_9);
          t = geq_0(t);
        }
      }
      t = s_9;
      t = l_89(t);
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym__2))
    {
      f_17 = ATgetArgument(e_17, 0);
      g_17 = ATgetArgument(e_17, 1);
      t = SSL_WriteToTextFile(not_null(f_17), not_null(g_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
  m_17 = t;
  l_17 :
  if(match_cons(m_17, sym__2))
    {
      n_17 = ATgetArgument(m_17, 0);
      o_17 = ATgetArgument(m_17, 1);
      t = SSL_WriteToBinaryFile(not_null(n_17), not_null(o_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm w_17 = NULL;
  ATerm v_9;
  v_9 = t;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm w_9 = t;
      int x_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            ATerm x_17 = NULL,y_17 = NULL;
            x_17 = t;
            t_17 :
            if(match_cons(x_17, sym_Output_1))
              {
                y_17 = ATgetArgument(x_17, 0);
                if(((w_17 != NULL) && (w_17 != y_17)))
                  _fail(y_17);
                else
                  w_17 = y_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, c_1);
          LocalPopChoice(x_9);
        }
      else
        {
          t = w_9;
          {
            ATerm z_17 = NULL;
            t = term_b_10;
            {
              z_17 = t;
              if(((w_17 != NULL) && (w_17 != z_17)))
                _fail(z_17);
              else
                w_17 = z_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, b_1, _id);
  }
  t = v_9;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm e_1 (ATerm t)
      {
        t = not_null(w_17);
        return(t);
      }
      t = split_2(t, e_1, _id);
      return(t);
    }
    t = _2(t, _id, d_1);
    {
      ATerm c_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_1 (ATerm t)
          {
            ATerm g_1 (ATerm t)
            {
              ATerm a_18 = NULL;
              a_18 = t;
              v_17 :
              if(!(match_cons(a_18, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, g_1);
            return(t);
          }
          t = _2(t, f_1, WriteToBinaryFile_0);
          LocalPopChoice(g_10);
        }
      else
        {
          t = c_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_87 (ATerm))
{
  ATerm g_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  ATerm j_10;
  j_10 = t;
  t = dtime_0(t);
  t = j_10;
  {
    t = s_87(t);
    {
      ATerm k_10;
      k_10 = t;
      {
        ATerm h_18 = NULL;
        t = dtime_0(t);
        {
          h_18 = t;
          if(((g_18 != NULL) && (g_18 != h_18)))
            _fail(h_18);
          else
            g_18 = h_18;
        }
      }
      t = k_10;
      {
        i_18 = t;
        f_18 :
        if(match_cons(i_18, sym__2))
          {
            j_18 = ATgetArgument(i_18, 0);
            k_18 = ATgetArgument(i_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(g_18))), not_null(k_18));
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
  ATerm q_18 = NULL;
  q_18 = t;
  t = SSL_ReadFromFile(not_null(q_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_70 (ATerm), ATerm k_70 (ATerm))
{
  ATerm v_18 = NULL,x_18 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm w_18 = NULL;
    t = j_70(t);
    {
      w_18 = t;
      if(((v_18 != NULL) && (v_18 != w_18)))
        _fail(w_18);
      else
        v_18 = w_18;
    }
  }
  t = l_10;
  {
    ATerm y_18 = NULL;
    t = k_70(t);
    {
      y_18 = t;
      if(((x_18 != NULL) && (x_18 != y_18)))
        _fail(y_18);
      else
        x_18 = y_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_18), not_null(x_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm e_19 = NULL;
  ATerm m_10;
  m_10 = t;
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 (ATerm t)
        {
          ATerm f_19 = NULL,g_19 = NULL;
          f_19 = t;
          c_19 :
          if(match_cons(f_19, sym_Input_1))
            {
              g_19 = ATgetArgument(f_19, 0);
              if(((e_19 != NULL) && (e_19 != g_19)))
                _fail(g_19);
              else
                e_19 = g_19;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, h_1);
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        {
          ATerm h_19 = NULL;
          t = term_p_10;
          {
            h_19 = t;
            if(((e_19 != NULL) && (e_19 != h_19)))
              _fail(h_19);
            else
              e_19 = h_19;
          }
        }
      }
  }
  t = m_10;
  {
    ATerm i_1 (ATerm t)
    {
      t = not_null(e_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm l_19 = NULL;
    l_19 = t;
    k_19 :
    if(!(match_string(l_19, "-v")))
      {
        if(!(match_string(l_19, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = term_r_10;
    t = set_config_0(t);
    t = term_w_10;
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_x_10;
    return(t);
  }
  t = Option_3(t, j_1, k_1, l_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm o_19 = NULL;
    o_19 = t;
    m_19 :
    if(!(match_string(o_19, "-k")))
      {
        if(!(match_string(o_19, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm y_10;
    y_10 = t;
    {
      ATerm p_19 = NULL;
      ATerm q_19 = NULL;
      t = string_to_int_0(t);
      {
        q_19 = t;
        if(((p_19 != NULL) && (p_19 != q_19)))
          _fail(q_19);
        else
          p_19 = q_19;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_11, not_null(p_19));
        t = set_config_0(t);
      }
    }
    t = y_10;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_e_11;
    return(t);
  }
  t = ArgOption_3(t, m_1, n_1, o_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  t = SSL_string_to_int(not_null(t_19));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm b_20 = NULL;
        b_20 = t;
        w_19 :
        if(!(match_string(b_20, "-S")))
          {
            if(!(match_string(b_20, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = term_j_11;
        t = set_config_0(t);
        t = term_k_11;
        return(t);
      }
      ATerm t_1 (ATerm t)
      {
        t = term_l_11;
        return(t);
      }
      t = Option_3(t, r_1, s_1, t_1);
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              ATerm c_20 = NULL;
              c_20 = t;
              x_19 :
              if(!(match_string(c_20, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              ATerm f_20 = NULL;
              ATerm o_11;
              o_11 = t;
              {
                ATerm d_20 = NULL;
                ATerm e_20 = NULL;
                t = string_to_int_0(t);
                {
                  e_20 = t;
                  if(((d_20 != NULL) && (d_20 != e_20)))
                    _fail(e_20);
                  else
                    d_20 = e_20;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(d_20));
                  t = set_config_0(t);
                }
              }
              t = o_11;
              {
                ATerm g_20 = NULL;
                g_20 = t;
                if(((f_20 != NULL) && (f_20 != g_20)))
                  _fail(g_20);
                else
                  f_20 = g_20;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_20));
              }
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              t = term_p_11;
              return(t);
            }
            t = ArgOption_3(t, u_1, v_1, w_1);
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            {
              ATerm x_1 (ATerm t)
              {
                ATerm h_20 = NULL;
                h_20 = t;
                a_20 :
                if(!(match_string(h_20, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm y_1 (ATerm t)
              {
                t = term_u_11;
                t = set_config_0(t);
                t = term_y_11;
                return(t);
              }
              ATerm z_1 (ATerm t)
              {
                t = term_b_12;
                return(t);
              }
              t = Option_3(t, x_1, y_1, z_1);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm n_20 = NULL;
    n_20 = t;
    k_20 :
    if(!(match_string(n_20, "-o")))
      {
        if(!(match_string(n_20, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm q_20 = NULL;
    ATerm g_12;
    g_12 = t;
    {
      ATerm o_20 = NULL;
      ATerm p_20 = NULL;
      p_20 = t;
      if(((o_20 != NULL) && (o_20 != p_20)))
        _fail(p_20);
      else
        o_20 = p_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_12, not_null(o_20));
        t = set_config_0(t);
      }
    }
    t = g_12;
    {
      ATerm r_20 = NULL;
      r_20 = t;
      if(((q_20 != NULL) && (q_20 != r_20)))
        _fail(r_20);
      else
        q_20 = r_20;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_20));
    }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    t = term_i_12;
    return(t);
  }
  t = ArgOption_3(t, a_2, b_2, c_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm j_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(o_12);
    }
  else
    {
      t = j_12;
      {
        ATerm d_2 (ATerm t)
        {
          ATerm v_20 = NULL;
          v_20 = t;
          u_20 :
          if(!(match_string(v_20, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm e_2 (ATerm t)
        {
          t = term_q_12;
          t = set_config_0(t);
          t = term_u_12;
          return(t);
        }
        ATerm f_2 (ATerm t)
        {
          t = term_w_12;
          return(t);
        }
        t = Option_3(t, d_2, e_2, f_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  b_21 = t;
  z_20 :
  if(match_string(b_21, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
        {
          c_21 = ATgetFirst((ATermList) b_21);
          d_21 = (ATerm) ATgetNext((ATermList) b_21);
          a_21 :
          if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
            {
              e_21 = ATgetFirst((ATermList) d_21);
              f_21 = (ATerm) ATgetNext((ATermList) d_21);
              {
                ATerm j_21 = NULL;
                ATerm z_12;
                z_12 = t;
                {
                  t = not_null(c_21);
                  t = l_0(t);
                }
                t = z_12;
                {
                  ATerm k_21 = NULL;
                  t = not_null(e_21);
                  {
                    t = m_0(t);
                    {
                      k_21 = t;
                      if(((j_21 != NULL) && (j_21 != k_21)))
                        _fail(k_21);
                      else
                        j_21 = k_21;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_21)), not_null(j_21));
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
  ATerm g_2 (ATerm t)
  {
    ATerm r_21 = NULL;
    r_21 = t;
    o_21 :
    if(!(match_string(r_21, "-i")))
      {
        if(!(match_string(r_21, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm u_21 = NULL;
    ATerm a_13;
    a_13 = t;
    {
      ATerm s_21 = NULL;
      ATerm t_21 = NULL;
      t_21 = t;
      if(((s_21 != NULL) && (s_21 != t_21)))
        _fail(t_21);
      else
        s_21 = t_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_13, not_null(s_21));
        t = set_config_0(t);
      }
    }
    t = a_13;
    {
      ATerm v_21 = NULL;
      v_21 = t;
      if(((u_21 != NULL) && (u_21 != v_21)))
        _fail(v_21);
      else
        u_21 = v_21;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_21));
    }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_c_13;
    return(t);
  }
  t = ArgOption_3(t, g_2, i_2, j_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATempty, term_p_13));
  {
    t = printnl_0(t);
    {
      t = term_n_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_22 = NULL;
  t_22 = t;
  t = SSL_TicksToSeconds(not_null(t_22));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym__2))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      {
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_22), not_null(a_23));
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
            t = SSL_addr(not_null(z_22), not_null(a_23));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_77 (ATerm), ATerm v_77 (ATerm))
{
  ATerm s_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_77(t);
      LocalPopChoice(u_13);
    }
  else
    {
      t = s_13;
      {
        ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
        h_23 = t;
        g_23 :
        if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
          {
            i_23 = ATgetFirst((ATermList) h_23);
            j_23 = (ATerm) ATgetNext((ATermList) h_23);
            {
              ATerm m_23 = NULL;
              ATerm n_23 = NULL;
              t = not_null(j_23);
              {
                t = foldr_2(t, u_77, v_77);
                {
                  n_23 = t;
                  if(((m_23 != NULL) && (m_23 != n_23)))
                    _fail(n_23);
                  else
                    m_23 = n_23;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), not_null(m_23));
                t = v_77(t);
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
ATerm crush_2 (ATerm t, ATerm s_76 (ATerm), ATerm t_76 (ATerm))
{
  ATerm u_23 = NULL;
  ATerm w_23 = NULL;
  u_23 = t;
  {
    ATerm x_23 = NULL;
    ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
    t = not_null(u_23);
    {
      x_23 = t;
      {
        t = SSL_explode_term(not_null(x_23));
        {
          z_23 = t;
          t_23 :
          if(match_cons(z_23, sym__2))
            {
              a_24 = ATgetArgument(z_23, 0);
              b_24 = ATgetArgument(z_23, 1);
              if(((w_23 != NULL) && (w_23 != b_24)))
                _fail(b_24);
              else
                w_23 = b_24;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_23);
      t = foldr_2(t, s_76, t_76);
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
    ATerm k_2 (ATerm t)
    {
      t = term_i_6;
      return(t);
    }
    t = crush_2(t, k_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym__2))
    {
      i_24 = ATgetArgument(h_24, 0);
      j_24 = ATgetArgument(h_24, 1);
      {
        ATerm v_13;
        v_13 = t;
        {
          ATerm w_13 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_24), not_null(j_24));
              LocalPopChoice(b_14);
            }
          else
            {
              t = w_13;
              t = SSL_gtr(not_null(i_24), not_null(j_24));
            }
        }
        t = v_13;
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
  ATerm p_24 = NULL;
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
      q_24 = t;
      o_24 :
      if(match_cons(q_24, sym__2))
        {
          r_24 = ATgetArgument(q_24, 0);
          s_24 = ATgetArgument(q_24, 1);
          {
            if(((p_24 != NULL) && (p_24 != r_24)))
              _fail(r_24);
            else
              p_24 = r_24;
            if(((p_24 != NULL) && (p_24 != s_24)))
              _fail(s_24);
            else
              p_24 = s_24;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_89 (ATerm))
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_14;
      g_14 = t;
      {
        ATerm v_24 = NULL;
        ATerm w_24 = NULL;
        t = term_t_9;
        {
          t = get_config_0(t);
          {
            w_24 = t;
            if(((v_24 != NULL) && (v_24 != w_24)))
              _fail(w_24);
            else
              v_24 = w_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_24), term_n_6);
          t = geq_0(t);
        }
      }
      t = g_14;
      t = k_89(t);
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm a_25 = NULL,c_25 = NULL;
    ATerm h_14;
    h_14 = t;
    {
      ATerm b_25 = NULL;
      t = run_time_0(t);
      {
        b_25 = t;
        if(((a_25 != NULL) && (a_25 != b_25)))
          _fail(b_25);
        else
          a_25 = b_25;
      }
    }
    t = h_14;
    {
      ATerm d_25 = NULL;
      t = term_l_14;
      {
        t = get_config_0(t);
        {
          d_25 = t;
          if(((c_25 != NULL) && (c_25 != d_25)))
            _fail(d_25);
          else
            c_25 = d_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_14), not_null(a_25)), term_o_14), not_null(c_25)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_2);
  {
    t = term_i_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym_Version_0))
    {
      ATerm m_25 = NULL,o_25 = NULL;
      ATerm t_14;
      t_14 = t;
      {
        ATerm n_25 = NULL;
        t = SSLgetAnnotations(not_null(k_25));
        {
          n_25 = t;
          if(((m_25 != NULL) && (m_25 != n_25)))
            _fail(n_25);
          else
            m_25 = n_25;
        }
      }
      t = t_14;
      {
        ATerm p_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_25));
        {
          p_25 = t;
          if(((o_25 != NULL) && (o_25 != p_25)))
            _fail(p_25);
          else
            o_25 = p_25;
        }
        t = not_null(o_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_87 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm u_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(w_14);
      }
    else
      {
        t = u_14;
        {
          ATerm b_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(c_15);
            }
          else
            {
              t = b_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, p_2);
  t = q_87(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_25 = NULL;
  u_25 = t;
  t = SSL_table_create(not_null(u_25));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_25 = NULL;
  y_25 = t;
  {
    ATerm d_15;
    d_15 = t;
    {
      t = term_e_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_15, term_g_15, not_null(y_25));
          t = table_put_0(t);
        }
      }
    }
    t = d_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  t = SSL_table_destroy(not_null(c_26));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  t = SSL_exit(not_null(g_26));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  j_26 :
  if(((ATgetType(k_26) == AT_LIST) && ATisEmpty(k_26)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
        {
          l_26 = ATgetFirst((ATermList) k_26);
          m_26 = (ATerm) ATgetNext((ATermList) k_26);
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
  ATerm h_15;
  h_15 = t;
  {
    ATerm p_26 = NULL;
    ATerm s_26 = NULL;
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        {
          ATerm q_26 = NULL;
          ATerm r_26 = NULL;
          r_26 = t;
          if(((q_26 != NULL) && (q_26 != r_26)))
            _fail(r_26);
          else
            q_26 = r_26;
          t = (ATerm) ATinsert(ATempty, not_null(q_26));
        }
      }
    {
      s_26 = t;
      if(((p_26 != NULL) && (p_26 != s_26)))
        _fail(s_26);
      else
        p_26 = s_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_10, not_null(p_26));
      t = printnl_0(t);
    }
  }
  t = h_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_72 (ATerm))
{
  ATerm v_26 (ATerm t)
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = Cons_2(t, x_72, v_26);
      }
    return(t);
  }
  t = v_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  e_27 = t;
  b_27 :
  if(((ATgetType(e_27) == AT_LIST) && !(ATisEmpty(e_27))))
    {
      c_27 = ATgetFirst((ATermList) e_27);
      d_27 = (ATerm) ATgetNext((ATermList) e_27);
      {
        ATerm h_27 = NULL;
        t = not_null(d_27);
        {
          ATerm q_15;
          q_15 = t;
          {
            ATerm i_27 = NULL,k_27 = NULL,m_27 = NULL;
            ATerm s_15;
            s_15 = t;
            {
              ATerm j_27 = NULL;
              t = j_0(t);
              {
                j_27 = t;
                if(((i_27 != NULL) && (i_27 != j_27)))
                  _fail(j_27);
                else
                  i_27 = j_27;
              }
            }
            t = s_15;
            {
              ATerm l_27 = NULL;
              t = not_null(c_27);
              {
                t = h_0(t);
                {
                  l_27 = t;
                  if(((k_27 != NULL) && (k_27 != l_27)))
                    _fail(l_27);
                  else
                    k_27 = l_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_27)), not_null(k_27));
                {
                  m_27 = t;
                  if(((h_27 != NULL) && (h_27 != m_27)))
                    _fail(m_27);
                  else
                    h_27 = m_27;
                }
              }
            }
          }
          t = q_15;
          {
            ATerm q_2 (ATerm t)
            {
              t = not_null(h_27);
              return(t);
            }
            t = reverse_acc_2(t, h_0, q_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(e_27) == AT_LIST) && ATisEmpty(e_27)))
        {
          {
            t = term_l_5;
            t = j_0(t);
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
ATerm short_description_1 (ATerm t, ATerm n_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_60 (ATerm))
{
  ATerm x_27 = NULL,y_27 = NULL;
  x_27 = t;
  w_27 :
  if(match_cons(x_27, sym_Program_1))
    {
      y_27 = ATgetArgument(x_27, 0);
      {
        ATerm b_28 = NULL,d_28 = NULL;
        ATerm c_28 = NULL;
        t = SSLgetAnnotations(not_null(x_27));
        {
          c_28 = t;
          if(((b_28 != NULL) && (b_28 != c_28)))
            _fail(c_28);
          else
            b_28 = c_28;
        }
        {
          t = not_null(y_27);
          {
            ATerm f_28 = NULL;
            t = i_60(t);
            {
              d_28 = t;
              {
                ATerm g_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_28)), not_null(b_28));
                {
                  g_28 = t;
                  if(((f_28 != NULL) && (f_28 != g_28)))
                    _fail(g_28);
                  else
                    f_28 = g_28;
                }
                t = not_null(f_28);
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
  ATerm o_28 = NULL;
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_28 = NULL;
      t = term_l_14;
      {
        t = get_config_0(t);
        {
          p_28 = t;
          if(((o_28 != NULL) && (o_28 != p_28)))
            _fail(p_28);
          else
            o_28 = p_28;
        }
      }
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
      {
        ATerm s_2 (ATerm t)
        {
          ATerm t_2 (ATerm t)
          {
            ATerm q_28 = NULL;
            q_28 = t;
            if(((o_28 != NULL) && (o_28 != q_28)))
              _fail(q_28);
            else
              o_28 = q_28;
            return(t);
          }
          t = Program_1(t, t_2);
          return(t);
        }
        t = fetch_1(t, s_2);
      }
    }
  {
    t = term_v_15;
    {
      t = echo_0(t);
      {
        t = term_y_15;
        {
          t = table_get_0(t);
          {
            ATerm u_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, u_2);
            {
              ATerm b_3 (ATerm t)
              {
                ATerm r_28 = NULL;
                ATerm s_28 = NULL;
                s_28 = t;
                if(((r_28 != NULL) && (r_28 != s_28)))
                  _fail(s_28);
                else
                  r_28 = s_28;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_28)), term_d_16);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, b_3);
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
  ATerm e_16;
  e_16 = t;
  {
    ATerm c_29 = NULL;
    ATerm d_29 = NULL;
    d_29 = t;
    if(((c_29 != NULL) && (c_29 != d_29)))
      _fail(d_29);
    else
      c_29 = d_29;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATempty, not_null(c_29)));
      t = printnl_0(t);
    }
  }
  t = e_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm p_86 (ATerm))
{
  ATerm f_16;
  f_16 = t;
  {
    t = p_86(t);
    t = debug_0(t);
  }
  t = f_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm k_29 = NULL,l_29 = NULL;
  k_29 = t;
  j_29 :
  if(match_cons(k_29, sym_Undefined_1))
    {
      l_29 = ATgetArgument(k_29, 0);
      {
        ATerm o_29 = NULL,u_29 = NULL;
        ATerm p_29 = NULL;
        t = SSLgetAnnotations(not_null(k_29));
        {
          p_29 = t;
          if(((o_29 != NULL) && (o_29 != p_29)))
            _fail(p_29);
          else
            o_29 = p_29;
        }
        {
          t = not_null(l_29);
          {
            ATerm w_29 = NULL;
            t = j_60(t);
            {
              u_29 = t;
              {
                ATerm x_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_29)), not_null(o_29));
                {
                  x_29 = t;
                  if(((w_29 != NULL) && (w_29 != x_29)))
                    _fail(x_29);
                  else
                    w_29 = x_29;
                }
                t = not_null(w_29);
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
ATerm fetch_1 (ATerm t, ATerm g_73 (ATerm))
{
  ATerm c_30 (ATerm t)
  {
    ATerm g_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_73, _id);
        LocalPopChoice(l_16);
      }
    else
      {
        t = g_16;
        t = Cons_2(t, _id, c_30);
      }
    return(t);
  }
  t = c_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_90 (ATerm))
{
  t = fetch_1(t, n_90);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_30 = NULL;
  h_30 = t;
  g_30 :
  if(match_cons(h_30, sym_Help_0))
    {
      ATerm j_30 = NULL,l_30 = NULL;
      ATerm m_16;
      m_16 = t;
      {
        ATerm k_30 = NULL;
        t = SSLgetAnnotations(not_null(h_30));
        {
          k_30 = t;
          if(((j_30 != NULL) && (j_30 != k_30)))
            _fail(k_30);
          else
            j_30 = k_30;
        }
      }
      t = m_16;
      {
        ATerm m_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_30));
        {
          m_30 = t;
          if(((l_30 != NULL) && (l_30 != m_30)))
            _fail(m_30);
          else
            l_30 = m_30;
        }
        t = not_null(l_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_69 (ATerm))
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_69(t);
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym__2))
    {
      t_30 = ATgetArgument(s_30, 0);
      u_30 = ATgetArgument(s_30, 1);
      t = SSL_table_get(not_null(t_30), not_null(u_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  b_31 = t;
  a_31 :
  if(match_cons(b_31, sym__3))
    {
      d_31 = ATgetArgument(b_31, 0);
      e_31 = ATgetArgument(b_31, 1);
      f_31 = ATgetArgument(b_31, 2);
      {
        ATerm p_16;
        p_16 = t;
        {
          ATerm j_31 = NULL;
          ATerm k_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_31), not_null(e_31));
          {
            ATerm q_16 = t;
            int r_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_16);
              }
            else
              {
                t = q_16;
                t = (ATerm) ATempty;
              }
            {
              k_31 = t;
              if(((j_31 != NULL) && (j_31 != k_31)))
                _fail(k_31);
              else
                j_31 = k_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_31), not_null(e_31), (ATerm) ATinsert(CheckATermList(not_null(j_31)), not_null(f_31)));
            t = table_put_0(t);
          }
        }
        t = p_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_91 (ATerm))
{
  ATerm o_31 = NULL;
  ATerm p_31 = NULL;
  t = term_l_5;
  {
    t = s_91(t);
    {
      p_31 = t;
      if(((o_31 != NULL) && (o_31 != p_31)))
        _fail(p_31);
      else
        o_31 = p_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_15, term_x_15, not_null(o_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  u_31 :
  if(match_string(v_31, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(v_31) == AT_LIST) && !(ATisEmpty(v_31))))
        {
          w_31 = ATgetFirst((ATermList) v_31);
          x_31 = (ATerm) ATgetNext((ATermList) v_31);
          {
            ATerm a_32 = NULL;
            ATerm t_16;
            t_16 = t;
            {
              t = not_null(w_31);
              t = a_0(t);
            }
            t = t_16;
            {
              ATerm b_32 = NULL;
              t = term_l_5;
              {
                t = d_0(t);
                {
                  b_32 = t;
                  if(((a_32 != NULL) && (a_32 != b_32)))
                    _fail(b_32);
                  else
                    a_32 = b_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_31)), not_null(a_32));
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
  ATerm c_3 (ATerm t)
  {
    ATerm k_32 = NULL;
    k_32 = t;
    j_32 :
    if(!(match_string(k_32, "--help")))
      {
        if(!(match_string(k_32, "-h")))
          {
            if(!(match_string(k_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_x_16;
    {
      t = set_config_0(t);
      t = term_y_16;
    }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_b_17;
    return(t);
  }
  t = Option_3(t, c_3, d_3, i_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  m_32 :
  if(((ATgetType(n_32) == AT_LIST) && !(ATisEmpty(n_32))))
    {
      o_32 = ATgetFirst((ATermList) n_32);
      p_32 = (ATerm) ATgetNext((ATermList) n_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(o_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
  v_32 = t;
  u_32 :
  if(match_cons(v_32, sym__2))
    {
      w_32 = ATgetArgument(v_32, 0);
      x_32 = ATgetArgument(v_32, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_9, not_null(w_32), not_null(x_32));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm c_17;
  c_17 = t;
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_17;
        t = q_91(t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        {
        }
      }
  }
  t = c_17;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm f_33 = NULL;
      ATerm k_17;
      k_17 = t;
      {
        ATerm d_33 = NULL;
        ATerm e_33 = NULL;
        e_33 = t;
        if(((d_33 != NULL) && (d_33 != e_33)))
          _fail(e_33);
        else
          d_33 = e_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_14, not_null(d_33));
          t = set_config_0(t);
        }
      }
      t = k_17;
      {
        ATerm g_33 = NULL;
        g_33 = t;
        if(((f_33 != NULL) && (f_33 != g_33)))
          _fail(g_33);
        else
          f_33 = g_33;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_33));
      }
      return(t);
    }
    ATerm k_3 (ATerm t)
    {
      ATerm p_17 = t;
      int q_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(s_17);
            }
          else
            {
              t = r_17;
              {
                t = q_91(t);
                t = Cons_2(t, _id, k_3);
              }
            }
          LocalPopChoice(q_17);
        }
      else
        {
          t = p_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_3, k_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  ATerm u_17;
  u_17 = t;
  {
    ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
    p_33 = t;
    l_33 :
    if(match_cons(p_33, sym__3))
      {
        q_33 = ATgetArgument(p_33, 0);
        r_33 = ATgetArgument(p_33, 1);
        s_33 = ATgetArgument(p_33, 2);
        {
          if(((m_33 != NULL) && (m_33 != q_33)))
            _fail(q_33);
          else
            m_33 = q_33;
          {
            if(((n_33 != NULL) && (n_33 != r_33)))
              _fail(r_33);
            else
              n_33 = r_33;
            {
              if(((o_33 != NULL) && (o_33 != s_33)))
                _fail(s_33);
              else
                o_33 = s_33;
              t = SSL_table_put(not_null(m_33), not_null(n_33), not_null(o_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_17;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_91 (ATerm))
{
  ATerm v_33 = NULL;
  ATerm b_18;
  b_18 = t;
  {
    t = term_c_18;
    t = table_put_0(t);
  }
  t = b_18;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_91(t);
          LocalPopChoice(e_18);
        }
      else
        {
          t = d_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_3);
    {
      ATerm l_18 = t;
      int m_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_18;
          n_18 = t;
          {
            ATerm o_18 = t;
            int p_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_w_16;
                t = get_config_0(t);
                LocalPopChoice(p_18);
              }
            else
              {
                t = o_18;
                t = fetch_1(t, Help_0);
              }
          }
          t = n_18;
          {
            t = system_usage_0(t);
            {
              t = term_i_6;
              t = exit_0(t);
            }
          }
          LocalPopChoice(m_18);
        }
      else
        {
          t = l_18;
          {
            ATerm r_18 = t;
            int s_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_3 (ATerm t)
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm w_33 = NULL;
                    w_33 = t;
                    if(((v_33 != NULL) && (v_33 != w_33)))
                      _fail(w_33);
                    else
                      v_33 = w_33;
                    return(t);
                  }
                  t = Undefined_1(t, n_3);
                  return(t);
                }
                t = fetch_1(t, m_3);
                {
                  ATerm u_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_33)), term_t_18);
                    return(t);
                  }
                  t = say_1(t, u_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_n_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(s_18);
              }
            else
              {
                t = r_18;
                {
                }
              }
          }
        }
      {
        ATerm u_18;
        u_18 = t;
        {
          t = term_w_15;
          t = table_destroy_0(t);
        }
        t = u_18;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm))
{
  t = parse_options_1(t, w_87);
  {
    t = store_options_0(t);
    {
      t = y_87(t);
      {
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_87);
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
            {
              ATerm b_19 = t;
              int d_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_87(t);
                  t = report_success_0(t);
                  LocalPopChoice(d_19);
                }
              else
                {
                  t = b_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_88(t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, n_88);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_3, p_88, q_88, b_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm d_4 (ATerm t)
    {
      ATerm n_19;
      n_19 = t;
      {
        ATerm z_33 = NULL;
        ATerm a_34 = NULL;
        t = term_l_14;
        {
          t = get_config_0(t);
          {
            a_34 = t;
            if(((z_33 != NULL) && (z_33 != a_34)))
              _fail(a_34);
            else
              z_33 = a_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_7, (ATerm) ATinsert(ATempty, not_null(z_33)));
          t = printnl_0(t);
        }
      }
      t = n_19;
      return(t);
    }
    t = if_verbose2_1(t, d_4);
    return(t);
  }
  t = iowrap_4(t, h_88, i_88, j_88, c_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_88 (ATerm), ATerm g_88 (ATerm))
{
  t = iowrap_3(t, f_88, g_88, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_88 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    t = _2(t, _id, c_88);
    return(t);
  }
  t = iowrap_2(t, e_4, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm g_4 (ATerm t)
    {
      ATerm h_4 (ATerm t)
      {
        ATerm n_4 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, n_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, h_4);
      return(t);
    }
    t = Specification_1(t, g_4);
    return(t);
  }
  t = iowrap_1(t, f_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
