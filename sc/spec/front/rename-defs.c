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
ATerm term_t_18;
ATerm term_c_18;
ATerm term_j_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_i_14;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_z_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_p_10;
ATerm term_y_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_q_7;
ATerm term_n_7;
ATerm term_k_7;
ATerm term_z_6;
ATerm term_u_6;
ATerm term_r_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_z_5;
ATerm term_s_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_w_4;
void init_constant_terms (void)
{
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_t_9, term_i_6);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_6);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_h_5);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_h_5);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_h_5);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_h_5);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
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
ATerm topdown_1 (ATerm, ATerm u_65 (ATerm));
ATerm assert_1 (ATerm, ATerm r_92 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm t_92 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm o_0 (ATerm));
ATerm escape_1 (ATerm, ATerm a_82 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm i_56 (ATerm));
ATerm Cons_2 (ATerm, ATerm x_53 (ATerm), ATerm y_53 (ATerm));
ATerm Specification_1 (ATerm, ATerm k_56 (ATerm));
ATerm _2 (ATerm, ATerm o_52 (ATerm), ATerm p_52 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_72 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_85 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_88 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_86 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_69 (ATerm), ATerm o_69 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm y_76 (ATerm), ATerm z_76 (ATerm));
ATerm crush_2 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_88 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_86 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_90 (ATerm));
ATerm map_1 (ATerm, ATerm b_72 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_90 (ATerm));
ATerm Program_1 (ATerm, ATerm l_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm u_85 (ATerm));
ATerm Undefined_1 (ATerm, ATerm m_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_89 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_68 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_90 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm));
ATerm iowrap_4 (ATerm, ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm o_87 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_87 (ATerm), ATerm l_87 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_87 (ATerm));
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
          ATerm c_0 (ATerm t)
          {
            t = term_w_4;
            return(t);
          }
          t = rewrite_1(t, c_0);
          {
            f_3 = t;
            v_2 :
            if(match_cons(f_3, sym_Defined_2))
              {
                g_3 = ATgetArgument(f_3, 0);
                h_3 = ATgetArgument(f_3, 1);
                w_2 :
                if(match_string(g_3, "b_0"))
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
ATerm topdown_1 (ATerm t, ATerm u_65 (ATerm))
{
  t = u_65(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = topdown_1(t, u_65);
      return(t);
    }
    t = _all(t, e_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm r_92 (ATerm))
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
          t = r_92(t);
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
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_5), not_null(l_5));
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
ATerm rewrite_1 (ATerm t, ATerm t_92 (ATerm))
{
  ATerm r_5 = NULL;
  ATerm t_5 = NULL;
  r_5 = t;
  {
    ATerm u_5 = NULL;
    t = term_h_5;
    {
      t = t_92(t);
      {
        u_5 = t;
        if(((t_5 != NULL) && (t_5 != u_5)))
          _fail(u_5);
        else
          t_5 = u_5;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(r_5));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm e_6 = NULL;
  e_6 = t;
  {
    ATerm m_5 = t;
    int n_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_6 = NULL;
        t = not_null(e_6);
        {
          ATerm i_0 (ATerm t)
          {
            t = term_o_5;
            return(t);
          }
          t = rewrite_1(t, i_0);
          {
            h_6 = t;
            a_6 :
            if(match_cons(h_6, sym_Undefined_0))
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
          ATerm k_6 = NULL;
          ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL;
          t = not_null(e_6);
          {
            ATerm k_0 (ATerm t)
            {
              t = term_o_5;
              return(t);
            }
            t = rewrite_1(t, k_0);
            {
              l_6 = t;
              c_6 :
              if(match_cons(l_6, sym_Defined_2))
                {
                  m_6 = ATgetArgument(l_6, 0);
                  n_6 = ATgetArgument(l_6, 1);
                  d_6 :
                  if(match_string(m_6, "g_0"))
                    {
                      if(((k_6 != NULL) && (k_6 != n_6)))
                        _fail(n_6);
                      else
                        k_6 = n_6;
                    }
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
          t = not_null(k_6);
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
  ATerm t_6 = NULL;
  t_6 = t;
  t = SSL_int_to_string(not_null(t_6));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
  e_7 = t;
  c_7 :
  if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
    {
      f_7 = ATgetFirst((ATermList) e_7);
      g_7 = (ATerm) ATgetNext((ATermList) e_7);
      d_7 :
      if(match_int(f_7, 95))
        {
          ATerm i_7 = NULL;
          ATerm j_7 = NULL;
          t = not_null(g_7);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(i_7)), term_q_5), term_q_5);
        }
      else
        {
          if(match_int(f_7, 45))
            {
              ATerm l_7 = NULL;
              ATerm m_7 = NULL;
              t = not_null(g_7);
              {
                t = o_0(t);
                {
                  m_7 = t;
                  if(((l_7 != NULL) && (l_7 != m_7)))
                    _fail(m_7);
                  else
                    l_7 = m_7;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_7)), term_q_5);
            }
          else
            {
              if(match_int(f_7, 39))
                {
                  ATerm o_7 = NULL;
                  ATerm p_7 = NULL;
                  t = not_null(g_7);
                  {
                    t = o_0(t);
                    {
                      p_7 = t;
                      if(((o_7 != NULL) && (o_7 != p_7)))
                        _fail(p_7);
                      else
                        o_7 = p_7;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(o_7)), term_q_5), term_s_5), term_q_5);
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
ATerm escape_1 (ATerm t, ATerm a_82 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm w_7 (ATerm t)
    {
      ATerm v_5 = t;
      int w_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_82(t, w_7);
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
                t = Cons_2(t, _id, w_7);
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
    t = w_7(t);
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
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_Mod_2))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_8)), term_z_5), not_null(a_8));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm))
{
  ATerm b_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_77(t);
      LocalPopChoice(f_6);
    }
  else
    {
      t = b_6;
      {
        ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
        j_8 = t;
        i_8 :
        if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
          {
            k_8 = ATgetFirst((ATermList) j_8);
            l_8 = (ATerm) ATgetNext((ATermList) j_8);
            {
              ATerm o_8 = NULL,q_8 = NULL;
              ATerm g_6;
              g_6 = t;
              {
                ATerm p_8 = NULL;
                t = not_null(k_8);
                {
                  t = c_77(t);
                  {
                    p_8 = t;
                    if(((o_8 != NULL) && (o_8 != p_8)))
                      _fail(p_8);
                    else
                      o_8 = p_8;
                  }
                }
              }
              t = g_6;
              {
                ATerm r_8 = NULL;
                t = not_null(l_8);
                {
                  t = foldr_3(t, a_77, b_77, c_77);
                  {
                    r_8 = t;
                    if(((q_8 != NULL) && (q_8 != r_8)))
                      _fail(r_8);
                    else
                      q_8 = r_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), not_null(q_8));
                  t = b_77(t);
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
    t = term_j_6;
    return(t);
  }
  t = foldr_3(t, p_0, add_0, q_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym_SDef_3))
    {
      c_9 = ATgetArgument(b_9, 0);
      d_9 = ATgetArgument(b_9, 1);
      e_9 = ATgetArgument(b_9, 2);
      {
        ATerm i_9 = NULL,j_9 = NULL;
        ATerm k_9 = NULL;
        t = not_null(d_9);
        {
          ATerm l_9 = NULL,n_9 = NULL,p_9 = NULL;
          t = length_0(t);
          {
            k_9 = t;
            {
              if(((i_9 != NULL) && (i_9 != k_9)))
                _fail(k_9);
              else
                i_9 = k_9;
              {
                ATerm o_6;
                o_6 = t;
                {
                  ATerm m_9 = NULL;
                  t = not_null(c_9);
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
                        m_9 = t;
                        if(((l_9 != NULL) && (l_9 != m_9)))
                          _fail(m_9);
                        else
                          l_9 = m_9;
                      }
                    }
                  }
                }
                t = o_6;
                {
                  ATerm o_9 = NULL;
                  t = not_null(i_9);
                  {
                    t = int_to_string_0(t);
                    {
                      o_9 = t;
                      if(((n_9 != NULL) && (n_9 != o_9)))
                        _fail(o_9);
                      else
                        n_9 = o_9;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_9)), term_r_6), not_null(l_9));
                    {
                      t = concat_strings_0(t);
                      {
                        p_9 = t;
                        {
                          if(((j_9 != NULL) && (j_9 != p_9)))
                            _fail(p_9);
                          else
                            j_9 = p_9;
                          {
                            ATerm s_6;
                            s_6 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(c_9), not_null(i_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_u_6, not_null(j_9)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_w_4;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = s_6;
                            {
                              ATerm v_6 = t;
                              int w_6 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(c_9);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm x_6;
                                      x_6 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), term_p_5);
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
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), (ATerm) ATmakeAppl(sym_Defined_2, term_z_6, not_null(j_9)));
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
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_9), not_null(d_9), not_null(e_9));
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
        int b_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RenameCall_0(t);
            LocalPopChoice(b_7);
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
ATerm Strategies_1 (ATerm t, ATerm i_56 (ATerm))
{
  ATerm a_10 = NULL,b_10 = NULL;
  a_10 = t;
  z_9 :
  if(match_cons(a_10, sym_Strategies_1))
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
            t = i_56(t);
            {
              g_10 = t;
              {
                ATerm j_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(g_10)), not_null(e_10));
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
ATerm Cons_2 (ATerm t, ATerm x_53 (ATerm), ATerm y_53 (ATerm))
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_10 = t;
  t_10 :
  if(((ATgetType(u_10) == AT_LIST) && !(ATisEmpty(u_10))))
    {
      v_10 = ATgetFirst((ATermList) u_10);
      w_10 = (ATerm) ATgetNext((ATermList) u_10);
      {
        ATerm a_11 = NULL,c_11 = NULL;
        ATerm b_11 = NULL;
        t = SSLgetAnnotations(not_null(u_10));
        {
          b_11 = t;
          if(((a_11 != NULL) && (a_11 != b_11)))
            _fail(b_11);
          else
            a_11 = b_11;
        }
        {
          t = not_null(v_10);
          {
            ATerm e_11 = NULL;
            t = x_53(t);
            {
              c_11 = t;
              {
                t = not_null(w_10);
                {
                  ATerm g_11 = NULL;
                  t = y_53(t);
                  {
                    e_11 = t;
                    {
                      ATerm h_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_11)), not_null(c_11)), not_null(a_11));
                      {
                        h_11 = t;
                        if(((g_11 != NULL) && (g_11 != h_11)))
                          _fail(h_11);
                        else
                          g_11 = h_11;
                      }
                      t = not_null(g_11);
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
ATerm Specification_1 (ATerm t, ATerm k_56 (ATerm))
{
  ATerm s_11 = NULL,t_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_Specification_1))
    {
      t_11 = ATgetArgument(s_11, 0);
      {
        ATerm w_11 = NULL,y_11 = NULL;
        ATerm x_11 = NULL;
        t = SSLgetAnnotations(not_null(s_11));
        {
          x_11 = t;
          if(((w_11 != NULL) && (w_11 != x_11)))
            _fail(x_11);
          else
            w_11 = x_11;
        }
        {
          t = not_null(t_11);
          {
            ATerm a_12 = NULL;
            t = k_56(t);
            {
              y_11 = t;
              {
                ATerm b_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(y_11)), not_null(w_11));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm o_52 (ATerm), ATerm p_52 (ATerm))
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  m_12 = t;
  l_12 :
  if(match_cons(m_12, sym__2))
    {
      n_12 = ATgetArgument(m_12, 0);
      o_12 = ATgetArgument(m_12, 1);
      {
        ATerm s_12 = NULL,u_12 = NULL;
        ATerm t_12 = NULL;
        t = SSLgetAnnotations(not_null(m_12));
        {
          t_12 = t;
          if(((s_12 != NULL) && (s_12 != t_12)))
            _fail(t_12);
          else
            s_12 = t_12;
        }
        {
          t = not_null(n_12);
          {
            ATerm w_12 = NULL;
            t = o_52(t);
            {
              u_12 = t;
              {
                t = not_null(o_12);
                {
                  ATerm y_12 = NULL;
                  t = p_52(t);
                  {
                    w_12 = t;
                    {
                      ATerm z_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(u_12), not_null(w_12)), not_null(s_12));
                      {
                        z_12 = t;
                        if(((y_12 != NULL) && (y_12 != z_12)))
                          _fail(z_12);
                        else
                          y_12 = z_12;
                      }
                      t = not_null(y_12);
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
  ATerm h_13 = NULL;
  ATerm h_7;
  h_7 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm i_13 = NULL,j_13 = NULL;
      i_13 = t;
      g_13 :
      if(match_cons(i_13, sym_Program_1))
        {
          j_13 = ATgetArgument(i_13, 0);
          if(((h_13 != NULL) && (h_13 != j_13)))
            _fail(j_13);
          else
            h_13 = j_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, w_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_7), not_null(h_13)), term_n_7));
      {
        t = printnl_0(t);
        {
          t = term_j_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  n_13 = t;
  m_13 :
  if(match_cons(n_13, sym__2))
    {
      o_13 = ATgetArgument(n_13, 0);
      p_13 = ATgetArgument(n_13, 1);
      {
        ATerm r_7;
        r_7 = t;
        t = SSL_printnl(not_null(o_13), not_null(p_13));
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
  ATerm u_13 = NULL;
  u_13 = t;
  t = SSL_implode_string(not_null(u_13));
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
        ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
        z_13 = t;
        y_13 :
        if(((ATgetType(z_13) == AT_LIST) && !(ATisEmpty(z_13))))
          {
            a_14 = ATgetFirst((ATermList) z_13);
            b_14 = (ATerm) ATgetNext((ATermList) z_13);
            {
              t = not_null(a_14);
              {
                ATerm x_0 (ATerm t)
                {
                  t = not_null(b_14);
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
  ATerm l_14 = NULL;
  ATerm n_14 = NULL;
  l_14 = t;
  {
    ATerm o_14 = NULL;
    ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
    t = not_null(l_14);
    {
      o_14 = t;
      {
        t = SSL_explode_term(not_null(o_14));
        {
          q_14 = t;
          j_14 :
          if(match_cons(q_14, sym__2))
            {
              r_14 = ATgetArgument(q_14, 0);
              s_14 = ATgetArgument(q_14, 1);
              k_14 :
              if(match_string(r_14, ""))
                {
                  if(((n_14 != NULL) && (n_14 != s_14)))
                    _fail(s_14);
                  else
                    n_14 = s_14;
                }
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
      t = not_null(n_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_72 (ATerm))
{
  ATerm w_14 (ATerm t)
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_14);
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        {
          t = Nil_0(t);
          t = q_72(t);
        }
      }
    return(t);
  }
  t = w_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  y_14 :
  if(match_cons(z_14, sym__2))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      {
        t = not_null(a_15);
        {
          ATerm y_0 (ATerm t)
          {
            t = not_null(b_15);
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
  ATerm x_7 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = x_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_15 = NULL;
  g_15 = t;
  t = SSL_explode_string(not_null(g_15));
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
ATerm debug_1 (ATerm t, ATerm t_85 (ATerm))
{
  ATerm f_8;
  f_8 = t;
  {
    ATerm l_15 = NULL,n_15 = NULL;
    ATerm g_8;
    g_8 = t;
    {
      ATerm m_15 = NULL;
      t = t_85(t);
      {
        m_15 = t;
        if(((l_15 != NULL) && (l_15 != m_15)))
          _fail(m_15);
        else
          l_15 = m_15;
      }
    }
    t = g_8;
    {
      ATerm o_15 = NULL;
      o_15 = t;
      if(((n_15 != NULL) && (n_15 != o_15)))
        _fail(o_15);
      else
        n_15 = o_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_15)), not_null(l_15)));
        t = printnl_0(t);
      }
    }
  }
  t = f_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm s_15 = NULL;
  s_15 = t;
  t = SSL_is_string(not_null(s_15));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = h_8;
      {
        ATerm n_8 = t;
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
            t = n_8;
            {
              ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL;
              b_16 = t;
              a_16 :
              if(match_cons(b_16, sym_Path_1))
                {
                  c_16 = ATgetArgument(b_16, 0);
                  t = not_null(c_16);
                }
              else
                {
                  if(match_cons(b_16, sym_Var_1))
                    {
                      c_16 = ATgetArgument(b_16, 0);
                      {
                        t = not_null(c_16);
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
                      if(match_cons(b_16, sym_Prefix_2))
                        {
                          c_16 = ATgetArgument(b_16, 0);
                          d_16 = ATgetArgument(b_16, 1);
                          {
                            ATerm i_16 = NULL,k_16 = NULL;
                            ATerm y_8;
                            y_8 = t;
                            {
                              ATerm j_16 = NULL;
                              t = not_null(c_16);
                              {
                                t = eval_config_0(t);
                                {
                                  j_16 = t;
                                  if(((i_16 != NULL) && (i_16 != j_16)))
                                    _fail(j_16);
                                  else
                                    i_16 = j_16;
                                }
                              }
                            }
                            t = y_8;
                            {
                              ATerm l_16 = NULL;
                              t = not_null(d_16);
                              {
                                t = eval_config_0(t);
                                {
                                  l_16 = t;
                                  if(((k_16 != NULL) && (k_16 != l_16)))
                                    _fail(l_16);
                                  else
                                    k_16 = l_16;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), not_null(k_16));
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
  ATerm t_16 = NULL;
  t_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_8, not_null(t_16));
    {
      t = table_get_0(t);
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm h_9;
              h_9 = t;
              {
                ATerm v_16 = NULL;
                ATerm w_16 = NULL;
                w_16 = t;
                if(((v_16 != NULL) && (v_16 != w_16)))
                  _fail(w_16);
                else
                  v_16 = w_16;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(t_16), not_null(v_16));
                  t = table_put_0(t);
                }
              }
              t = h_9;
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
ATerm if_verbose2_1 (ATerm t, ATerm q_88 (ATerm))
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_9;
      s_9 = t;
      {
        ATerm a_17 = NULL;
        ATerm b_17 = NULL;
        t = term_t_9;
        {
          t = get_config_0(t);
          {
            b_17 = t;
            if(((a_17 != NULL) && (a_17 != b_17)))
              _fail(b_17);
            else
              a_17 = b_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), term_u_9);
          t = geq_0(t);
        }
      }
      t = s_9;
      t = q_88(t);
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
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL;
  f_17 = t;
  e_17 :
  if(match_cons(f_17, sym__2))
    {
      g_17 = ATgetArgument(f_17, 0);
      h_17 = ATgetArgument(f_17, 1);
      t = SSL_WriteToTextFile(not_null(g_17), not_null(h_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym__2))
    {
      o_17 = ATgetArgument(n_17, 0);
      p_17 = ATgetArgument(n_17, 1);
      t = SSL_WriteToBinaryFile(not_null(o_17), not_null(p_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm x_17 = NULL;
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
            ATerm y_17 = NULL,z_17 = NULL;
            y_17 = t;
            u_17 :
            if(match_cons(y_17, sym_Output_1))
              {
                z_17 = ATgetArgument(y_17, 0);
                if(((x_17 != NULL) && (x_17 != z_17)))
                  _fail(z_17);
                else
                  x_17 = z_17;
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
            ATerm a_18 = NULL;
            t = term_y_9;
            {
              a_18 = t;
              if(((x_17 != NULL) && (x_17 != a_18)))
                _fail(a_18);
              else
                x_17 = a_18;
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
        t = not_null(x_17);
        return(t);
      }
      t = split_2(t, e_1, _id);
      return(t);
    }
    t = _2(t, _id, d_1);
    {
      ATerm c_10 = t;
      int d_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_1 (ATerm t)
          {
            ATerm g_1 (ATerm t)
            {
              ATerm b_18 = NULL;
              b_18 = t;
              w_17 :
              if(!(match_cons(b_18, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, g_1);
            return(t);
          }
          t = _2(t, f_1, WriteToBinaryFile_0);
          LocalPopChoice(d_10);
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
ATerm apply_strategy_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm h_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  ATerm h_10;
  h_10 = t;
  t = dtime_0(t);
  t = h_10;
  {
    t = x_86(t);
    {
      ATerm k_10;
      k_10 = t;
      {
        ATerm i_18 = NULL;
        t = dtime_0(t);
        {
          i_18 = t;
          if(((h_18 != NULL) && (h_18 != i_18)))
            _fail(i_18);
          else
            h_18 = i_18;
        }
      }
      t = k_10;
      {
        j_18 = t;
        g_18 :
        if(match_cons(j_18, sym__2))
          {
            k_18 = ATgetArgument(j_18, 0);
            l_18 = ATgetArgument(j_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_18))), not_null(l_18));
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
  ATerm r_18 = NULL;
  r_18 = t;
  t = SSL_ReadFromFile(not_null(r_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_69 (ATerm), ATerm o_69 (ATerm))
{
  ATerm w_18 = NULL,y_18 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm x_18 = NULL;
    t = n_69(t);
    {
      x_18 = t;
      if(((w_18 != NULL) && (w_18 != x_18)))
        _fail(x_18);
      else
        w_18 = x_18;
    }
  }
  t = l_10;
  {
    ATerm z_18 = NULL;
    t = o_69(t);
    {
      z_18 = t;
      if(((y_18 != NULL) && (y_18 != z_18)))
        _fail(z_18);
      else
        y_18 = z_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_18), not_null(y_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_19 = NULL;
  ATerm m_10;
  m_10 = t;
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 (ATerm t)
        {
          ATerm g_19 = NULL,h_19 = NULL;
          g_19 = t;
          d_19 :
          if(match_cons(g_19, sym_Input_1))
            {
              h_19 = ATgetArgument(g_19, 0);
              if(((f_19 != NULL) && (f_19 != h_19)))
                _fail(h_19);
              else
                f_19 = h_19;
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
          ATerm i_19 = NULL;
          t = term_p_10;
          {
            i_19 = t;
            if(((f_19 != NULL) && (f_19 != i_19)))
              _fail(i_19);
            else
              f_19 = i_19;
          }
        }
      }
  }
  t = m_10;
  {
    ATerm i_1 (ATerm t)
    {
      t = not_null(f_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  t = SSL_string_to_int(not_null(m_19));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  u_19 = t;
  s_19 :
  if(match_string(u_19, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
        {
          v_19 = ATgetFirst((ATermList) u_19);
          w_19 = (ATerm) ATgetNext((ATermList) u_19);
          t_19 :
          if(((ATgetType(w_19) == AT_LIST) && !(ATisEmpty(w_19))))
            {
              x_19 = ATgetFirst((ATermList) w_19);
              y_19 = (ATerm) ATgetNext((ATermList) w_19);
              {
                ATerm c_20 = NULL;
                ATerm q_10;
                q_10 = t;
                {
                  t = not_null(v_19);
                  t = l_0(t);
                }
                t = q_10;
                {
                  ATerm d_20 = NULL;
                  t = not_null(x_19);
                  {
                    t = m_0(t);
                    {
                      d_20 = t;
                      if(((c_20 != NULL) && (c_20 != d_20)))
                        _fail(d_20);
                      else
                        c_20 = d_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_19)), not_null(c_20));
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
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 (ATerm t)
      {
        ATerm w_20 = NULL;
        w_20 = t;
        h_20 :
        if(!(match_string(w_20, "-i")))
          {
            if(!(match_string(w_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_1 (ATerm t)
      {
        ATerm z_20 = NULL;
        ATerm x_10;
        x_10 = t;
        {
          ATerm x_20 = NULL;
          ATerm y_20 = NULL;
          y_20 = t;
          if(((x_20 != NULL) && (x_20 != y_20)))
            _fail(y_20);
          else
            x_20 = y_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(x_20));
            t = set_config_0(t);
          }
        }
        t = x_10;
        {
          ATerm a_21 = NULL;
          a_21 = t;
          if(((z_20 != NULL) && (z_20 != a_21)))
            _fail(a_21);
          else
            z_20 = a_21;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_20));
        }
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        t = term_z_10;
        return(t);
      }
      t = ArgOption_3(t, j_1, k_1, l_1);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm d_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm b_21 = NULL;
              b_21 = t;
              k_20 :
              if(!(match_string(b_21, "-o")))
                {
                  if(!(match_string(b_21, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm n_1 (ATerm t)
            {
              ATerm e_21 = NULL;
              ATerm i_11;
              i_11 = t;
              {
                ATerm c_21 = NULL;
                ATerm d_21 = NULL;
                d_21 = t;
                if(((c_21 != NULL) && (c_21 != d_21)))
                  _fail(d_21);
                else
                  c_21 = d_21;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_11, not_null(c_21));
                  t = set_config_0(t);
                }
              }
              t = i_11;
              {
                ATerm f_21 = NULL;
                f_21 = t;
                if(((e_21 != NULL) && (e_21 != f_21)))
                  _fail(f_21);
                else
                  e_21 = f_21;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_21));
              }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              t = term_k_11;
              return(t);
            }
            t = ArgOption_3(t, m_1, n_1, o_1);
            LocalPopChoice(f_11);
          }
        else
          {
            t = d_11;
            {
              ATerm l_11 = t;
              int m_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_1 (ATerm t)
                  {
                    ATerm g_21 = NULL;
                    g_21 = t;
                    n_20 :
                    if(!(match_string(g_21, "-S")))
                      {
                        if(!(match_string(g_21, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm s_1 (ATerm t)
                  {
                    t = term_n_11;
                    t = set_config_0(t);
                    t = term_o_11;
                    return(t);
                  }
                  ATerm t_1 (ATerm t)
                  {
                    t = term_p_11;
                    return(t);
                  }
                  t = Option_3(t, r_1, s_1, t_1);
                  LocalPopChoice(m_11);
                }
              else
                {
                  t = l_11;
                  {
                    ATerm q_11 = t;
                    int u_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_1 (ATerm t)
                        {
                          ATerm h_21 = NULL;
                          h_21 = t;
                          o_20 :
                          if(!(match_string(h_21, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm v_1 (ATerm t)
                        {
                          ATerm k_21 = NULL;
                          ATerm v_11;
                          v_11 = t;
                          {
                            ATerm i_21 = NULL;
                            ATerm j_21 = NULL;
                            t = string_to_int_0(t);
                            {
                              j_21 = t;
                              if(((i_21 != NULL) && (i_21 != j_21)))
                                _fail(j_21);
                              else
                                i_21 = j_21;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(i_21));
                              t = set_config_0(t);
                            }
                          }
                          t = v_11;
                          {
                            ATerm l_21 = NULL;
                            l_21 = t;
                            if(((k_21 != NULL) && (k_21 != l_21)))
                              _fail(l_21);
                            else
                              k_21 = l_21;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_21));
                          }
                          return(t);
                        }
                        ATerm w_1 (ATerm t)
                        {
                          t = term_z_11;
                          return(t);
                        }
                        t = ArgOption_3(t, u_1, v_1, w_1);
                        LocalPopChoice(u_11);
                      }
                    else
                      {
                        t = q_11;
                        {
                          ATerm c_12 = t;
                          int d_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_1 (ATerm t)
                              {
                                ATerm m_21 = NULL;
                                m_21 = t;
                                r_20 :
                                if(!(match_string(m_21, "-k")))
                                  {
                                    if(!(match_string(m_21, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm y_1 (ATerm t)
                              {
                                ATerm e_12;
                                e_12 = t;
                                {
                                  ATerm n_21 = NULL;
                                  ATerm o_21 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    o_21 = t;
                                    if(((n_21 != NULL) && (n_21 != o_21)))
                                      _fail(o_21);
                                    else
                                      n_21 = o_21;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_f_12, not_null(n_21));
                                    t = set_config_0(t);
                                  }
                                }
                                t = e_12;
                                return(t);
                              }
                              ATerm z_1 (ATerm t)
                              {
                                t = term_g_12;
                                return(t);
                              }
                              t = ArgOption_3(t, x_1, y_1, z_1);
                              LocalPopChoice(d_12);
                            }
                          else
                            {
                              t = c_12;
                              {
                                ATerm h_12 = t;
                                int i_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_2 (ATerm t)
                                    {
                                      ATerm p_21 = NULL;
                                      p_21 = t;
                                      t_20 :
                                      if(!(match_string(p_21, "-v")))
                                        {
                                          if(!(match_string(p_21, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm b_2 (ATerm t)
                                    {
                                      t = term_k_12;
                                      t = set_config_0(t);
                                      t = term_p_12;
                                      return(t);
                                    }
                                    ATerm c_2 (ATerm t)
                                    {
                                      t = term_q_12;
                                      return(t);
                                    }
                                    t = Option_3(t, a_2, b_2, c_2);
                                    LocalPopChoice(i_12);
                                  }
                                else
                                  {
                                    t = h_12;
                                    {
                                      ATerm r_12 = t;
                                      int v_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_2 (ATerm t)
                                          {
                                            ATerm q_21 = NULL;
                                            q_21 = t;
                                            u_20 :
                                            if(!(match_string(q_21, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm e_2 (ATerm t)
                                          {
                                            t = term_a_13;
                                            t = set_config_0(t);
                                            t = term_b_13;
                                            return(t);
                                          }
                                          ATerm f_2 (ATerm t)
                                          {
                                            t = term_c_13;
                                            return(t);
                                          }
                                          t = Option_3(t, d_2, e_2, f_2);
                                          LocalPopChoice(v_12);
                                        }
                                      else
                                        {
                                          t = r_12;
                                          {
                                            ATerm g_2 (ATerm t)
                                            {
                                              ATerm r_21 = NULL;
                                              r_21 = t;
                                              v_20 :
                                              if(!(match_string(r_21, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm i_2 (ATerm t)
                                            {
                                              t = term_e_13;
                                              t = set_config_0(t);
                                              t = term_f_13;
                                              return(t);
                                            }
                                            ATerm j_2 (ATerm t)
                                            {
                                              t = term_k_13;
                                              return(t);
                                            }
                                            t = Option_3(t, g_2, i_2, j_2);
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
  t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATempty, term_l_13));
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
  ATerm u_22 = NULL;
  u_22 = t;
  t = SSL_TicksToSeconds(not_null(u_22));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
  z_22 = t;
  y_22 :
  if(match_cons(z_22, sym__2))
    {
      a_23 = ATgetArgument(z_22, 0);
      b_23 = ATgetArgument(z_22, 1);
      {
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_23), not_null(b_23));
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
            t = SSL_addr(not_null(a_23), not_null(b_23));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm y_76 (ATerm), ATerm z_76 (ATerm))
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_76(t);
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
        i_23 = t;
        h_23 :
        if(((ATgetType(i_23) == AT_LIST) && !(ATisEmpty(i_23))))
          {
            j_23 = ATgetFirst((ATermList) i_23);
            k_23 = (ATerm) ATgetNext((ATermList) i_23);
            {
              ATerm n_23 = NULL;
              ATerm o_23 = NULL;
              t = not_null(k_23);
              {
                t = foldr_2(t, y_76, z_76);
                {
                  o_23 = t;
                  if(((n_23 != NULL) && (n_23 != o_23)))
                    _fail(o_23);
                  else
                    n_23 = o_23;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_23), not_null(n_23));
                t = z_76(t);
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
ATerm crush_2 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm))
{
  ATerm v_23 = NULL;
  ATerm x_23 = NULL;
  v_23 = t;
  {
    ATerm y_23 = NULL;
    ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
    t = not_null(v_23);
    {
      y_23 = t;
      {
        t = SSL_explode_term(not_null(y_23));
        {
          a_24 = t;
          u_23 :
          if(match_cons(a_24, sym__2))
            {
              b_24 = ATgetArgument(a_24, 0);
              c_24 = ATgetArgument(a_24, 1);
              if(((x_23 != NULL) && (x_23 != c_24)))
                _fail(c_24);
              else
                x_23 = c_24;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_23);
      t = foldr_2(t, w_75, x_75);
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
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  i_24 = t;
  h_24 :
  if(match_cons(i_24, sym__2))
    {
      j_24 = ATgetArgument(i_24, 0);
      k_24 = ATgetArgument(i_24, 1);
      {
        ATerm v_13;
        v_13 = t;
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_24), not_null(k_24));
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
              t = SSL_gtr(not_null(j_24), not_null(k_24));
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
  ATerm q_24 = NULL;
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
      r_24 = t;
      p_24 :
      if(match_cons(r_24, sym__2))
        {
          s_24 = ATgetArgument(r_24, 0);
          t_24 = ATgetArgument(r_24, 1);
          {
            if(((q_24 != NULL) && (q_24 != s_24)))
              _fail(s_24);
            else
              q_24 = s_24;
            if(((q_24 != NULL) && (q_24 != t_24)))
              _fail(t_24);
            else
              q_24 = t_24;
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
ATerm if_verbose1_1 (ATerm t, ATerm p_88 (ATerm))
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_14;
      g_14 = t;
      {
        ATerm w_24 = NULL;
        ATerm x_24 = NULL;
        t = term_t_9;
        {
          t = get_config_0(t);
          {
            x_24 = t;
            if(((w_24 != NULL) && (w_24 != x_24)))
              _fail(x_24);
            else
              w_24 = x_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_24), term_j_6);
          t = geq_0(t);
        }
      }
      t = g_14;
      t = p_88(t);
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
    ATerm b_25 = NULL,d_25 = NULL;
    ATerm h_14;
    h_14 = t;
    {
      ATerm c_25 = NULL;
      t = run_time_0(t);
      {
        c_25 = t;
        if(((b_25 != NULL) && (b_25 != c_25)))
          _fail(c_25);
        else
          b_25 = c_25;
      }
    }
    t = h_14;
    {
      ATerm e_25 = NULL;
      t = term_i_14;
      {
        t = get_config_0(t);
        {
          e_25 = t;
          if(((d_25 != NULL) && (d_25 != e_25)))
            _fail(e_25);
          else
            d_25 = e_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_14), not_null(b_25)), term_m_14), not_null(d_25)));
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
  ATerm l_25 = NULL;
  l_25 = t;
  k_25 :
  if(match_cons(l_25, sym_Version_0))
    {
      ATerm n_25 = NULL,p_25 = NULL;
      ATerm t_14;
      t_14 = t;
      {
        ATerm o_25 = NULL;
        t = SSLgetAnnotations(not_null(l_25));
        {
          o_25 = t;
          if(((n_25 != NULL) && (n_25 != o_25)))
            _fail(o_25);
          else
            n_25 = o_25;
        }
      }
      t = t_14;
      {
        ATerm q_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_25));
        {
          q_25 = t;
          if(((p_25 != NULL) && (p_25 != q_25)))
            _fail(q_25);
          else
            p_25 = q_25;
        }
        t = not_null(p_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        {
          ATerm x_14 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(c_15);
            }
          else
            {
              t = x_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, p_2);
  t = v_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  t = SSL_table_create(not_null(v_25));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  {
    ATerm d_15;
    d_15 = t;
    {
      t = term_e_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_15, term_f_15, not_null(z_25));
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
  ATerm d_26 = NULL;
  d_26 = t;
  t = SSL_table_destroy(not_null(d_26));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  t = SSL_exit(not_null(h_26));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  l_26 = t;
  k_26 :
  if(((ATgetType(l_26) == AT_LIST) && ATisEmpty(l_26)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
        {
          m_26 = ATgetFirst((ATermList) l_26);
          n_26 = (ATerm) ATgetNext((ATermList) l_26);
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
    ATerm q_26 = NULL;
    ATerm t_26 = NULL;
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
          ATerm r_26 = NULL;
          ATerm s_26 = NULL;
          s_26 = t;
          if(((r_26 != NULL) && (r_26 != s_26)))
            _fail(s_26);
          else
            r_26 = s_26;
          t = (ATerm) ATinsert(ATempty, not_null(r_26));
        }
      }
    {
      t_26 = t;
      if(((q_26 != NULL) && (q_26 != t_26)))
        _fail(t_26);
      else
        q_26 = t_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(q_26));
      t = printnl_0(t);
    }
  }
  t = h_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm t_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm w_26 (ATerm t)
  {
    ATerm k_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = k_15;
        t = Cons_2(t, b_72, w_26);
      }
    return(t);
  }
  t = w_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  f_27 = t;
  c_27 :
  if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
    {
      d_27 = ATgetFirst((ATermList) f_27);
      e_27 = (ATerm) ATgetNext((ATermList) f_27);
      {
        ATerm i_27 = NULL;
        t = not_null(e_27);
        {
          ATerm q_15;
          q_15 = t;
          {
            ATerm j_27 = NULL,l_27 = NULL,n_27 = NULL;
            ATerm r_15;
            r_15 = t;
            {
              ATerm k_27 = NULL;
              t = j_0(t);
              {
                k_27 = t;
                if(((j_27 != NULL) && (j_27 != k_27)))
                  _fail(k_27);
                else
                  j_27 = k_27;
              }
            }
            t = r_15;
            {
              ATerm m_27 = NULL;
              t = not_null(d_27);
              {
                t = h_0(t);
                {
                  m_27 = t;
                  if(((l_27 != NULL) && (l_27 != m_27)))
                    _fail(m_27);
                  else
                    l_27 = m_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_27)), not_null(l_27));
                {
                  n_27 = t;
                  if(((i_27 != NULL) && (i_27 != n_27)))
                    _fail(n_27);
                  else
                    i_27 = n_27;
                }
              }
            }
          }
          t = q_15;
          {
            ATerm q_2 (ATerm t)
            {
              t = not_null(i_27);
              return(t);
            }
            t = reverse_acc_2(t, h_0, q_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_27) == AT_LIST) && ATisEmpty(f_27)))
        {
          {
            t = term_h_5;
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
ATerm short_description_1 (ATerm t, ATerm s_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm y_27 = NULL,z_27 = NULL;
  y_27 = t;
  x_27 :
  if(match_cons(y_27, sym_Program_1))
    {
      z_27 = ATgetArgument(y_27, 0);
      {
        ATerm c_28 = NULL,e_28 = NULL;
        ATerm d_28 = NULL;
        t = SSLgetAnnotations(not_null(y_27));
        {
          d_28 = t;
          if(((c_28 != NULL) && (c_28 != d_28)))
            _fail(d_28);
          else
            c_28 = d_28;
        }
        {
          t = not_null(z_27);
          {
            ATerm g_28 = NULL;
            t = l_59(t);
            {
              e_28 = t;
              {
                ATerm h_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_28)), not_null(c_28));
                {
                  h_28 = t;
                  if(((g_28 != NULL) && (g_28 != h_28)))
                    _fail(h_28);
                  else
                    g_28 = h_28;
                }
                t = not_null(g_28);
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
  ATerm p_28 = NULL;
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_28 = NULL;
      t = term_i_14;
      {
        t = get_config_0(t);
        {
          q_28 = t;
          if(((p_28 != NULL) && (p_28 != q_28)))
            _fail(q_28);
          else
            p_28 = q_28;
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
            ATerm r_28 = NULL;
            r_28 = t;
            if(((p_28 != NULL) && (p_28 != r_28)))
              _fail(r_28);
            else
              p_28 = r_28;
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
                ATerm s_28 = NULL;
                ATerm t_28 = NULL;
                t_28 = t;
                if(((s_28 != NULL) && (s_28 != t_28)))
                  _fail(t_28);
                else
                  s_28 = t_28;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_28)), term_z_15);
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
    ATerm d_29 = NULL;
    ATerm e_29 = NULL;
    e_29 = t;
    if(((d_29 != NULL) && (d_29 != e_29)))
      _fail(e_29);
    else
      d_29 = e_29;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATempty, not_null(d_29)));
      t = printnl_0(t);
    }
  }
  t = e_16;
  return(t);
}
ATerm say_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm f_16;
  f_16 = t;
  {
    t = u_85(t);
    t = debug_0(t);
  }
  t = f_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  k_29 :
  if(match_cons(l_29, sym_Undefined_1))
    {
      m_29 = ATgetArgument(l_29, 0);
      {
        ATerm u_29 = NULL,w_29 = NULL;
        ATerm v_29 = NULL;
        t = SSLgetAnnotations(not_null(l_29));
        {
          v_29 = t;
          if(((u_29 != NULL) && (u_29 != v_29)))
            _fail(v_29);
          else
            u_29 = v_29;
        }
        {
          t = not_null(m_29);
          {
            ATerm y_29 = NULL;
            t = m_59(t);
            {
              w_29 = t;
              {
                ATerm z_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_29)), not_null(u_29));
                {
                  z_29 = t;
                  if(((y_29 != NULL) && (y_29 != z_29)))
                    _fail(z_29);
                  else
                    y_29 = z_29;
                }
                t = not_null(y_29);
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
ATerm fetch_1 (ATerm t, ATerm k_72 (ATerm))
{
  ATerm e_30 (ATerm t)
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_72, _id);
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        t = Cons_2(t, _id, e_30);
      }
    return(t);
  }
  t = e_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_89 (ATerm))
{
  t = fetch_1(t, s_89);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym_Help_0))
    {
      ATerm l_30 = NULL,n_30 = NULL;
      ATerm m_16;
      m_16 = t;
      {
        ATerm m_30 = NULL;
        t = SSLgetAnnotations(not_null(j_30));
        {
          m_30 = t;
          if(((l_30 != NULL) && (l_30 != m_30)))
            _fail(m_30);
          else
            l_30 = m_30;
        }
      }
      t = m_16;
      {
        ATerm o_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_30));
        {
          o_30 = t;
          if(((n_30 != NULL) && (n_30 != o_30)))
            _fail(o_30);
          else
            n_30 = o_30;
        }
        t = not_null(n_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_68 (ATerm))
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_68(t);
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
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
  u_30 = t;
  t_30 :
  if(match_cons(u_30, sym__2))
    {
      v_30 = ATgetArgument(u_30, 0);
      w_30 = ATgetArgument(u_30, 1);
      t = SSL_table_get(not_null(v_30), not_null(w_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym__3))
    {
      f_31 = ATgetArgument(e_31, 0);
      g_31 = ATgetArgument(e_31, 1);
      h_31 = ATgetArgument(e_31, 2);
      {
        ATerm p_16;
        p_16 = t;
        {
          ATerm l_31 = NULL;
          ATerm m_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_31), not_null(g_31));
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
              m_31 = t;
              if(((l_31 != NULL) && (l_31 != m_31)))
                _fail(m_31);
              else
                l_31 = m_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_31), not_null(g_31), (ATerm) ATinsert(CheckATermList(not_null(l_31)), not_null(h_31)));
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
ATerm register_usage_1 (ATerm t, ATerm x_90 (ATerm))
{
  ATerm q_31 = NULL;
  ATerm r_31 = NULL;
  t = term_h_5;
  {
    t = x_90(t);
    {
      r_31 = t;
      if(((q_31 != NULL) && (q_31 != r_31)))
        _fail(r_31);
      else
        q_31 = r_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_15, term_x_15, not_null(q_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  w_31 :
  if(match_string(x_31, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
        {
          y_31 = ATgetFirst((ATermList) x_31);
          z_31 = (ATerm) ATgetNext((ATermList) x_31);
          {
            ATerm g_32 = NULL;
            ATerm s_16;
            s_16 = t;
            {
              t = not_null(y_31);
              t = a_0(t);
            }
            t = s_16;
            {
              ATerm h_32 = NULL;
              t = term_h_5;
              {
                t = d_0(t);
                {
                  h_32 = t;
                  if(((g_32 != NULL) && (g_32 != h_32)))
                    _fail(h_32);
                  else
                    g_32 = h_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_31)), not_null(g_32));
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
    ATerm m_32 = NULL;
    m_32 = t;
    l_32 :
    if(!(match_string(m_32, "--help")))
      {
        if(!(match_string(m_32, "-h")))
          {
            if(!(match_string(m_32, "-?")))
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
    t = term_z_16;
    return(t);
  }
  t = Option_3(t, c_3, d_3, i_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  p_32 = t;
  o_32 :
  if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
    {
      q_32 = ATgetFirst((ATermList) p_32);
      r_32 = (ATerm) ATgetNext((ATermList) p_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  w_32 :
  if(match_cons(x_32, sym__2))
    {
      y_32 = ATgetArgument(x_32, 0);
      z_32 = ATgetArgument(x_32, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(y_32), not_null(z_32));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_90 (ATerm))
{
  ATerm c_17;
  c_17 = t;
  {
    ATerm d_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_17;
        t = v_90(t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = d_17;
        {
        }
      }
  }
  t = c_17;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm h_33 = NULL;
      ATerm k_17;
      k_17 = t;
      {
        ATerm f_33 = NULL;
        ATerm g_33 = NULL;
        g_33 = t;
        if(((f_33 != NULL) && (f_33 != g_33)))
          _fail(g_33);
        else
          f_33 = g_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_14, not_null(f_33));
          t = set_config_0(t);
        }
      }
      t = k_17;
      {
        ATerm i_33 = NULL;
        i_33 = t;
        if(((h_33 != NULL) && (h_33 != i_33)))
          _fail(i_33);
        else
          h_33 = i_33;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_33));
      }
      return(t);
    }
    ATerm k_3 (ATerm t)
    {
      ATerm l_17 = t;
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
                t = v_90(t);
                t = Cons_2(t, _id, k_3);
              }
            }
          LocalPopChoice(q_17);
        }
      else
        {
          t = l_17;
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
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  ATerm t_17;
  t_17 = t;
  {
    ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
    r_33 = t;
    n_33 :
    if(match_cons(r_33, sym__3))
      {
        s_33 = ATgetArgument(r_33, 0);
        t_33 = ATgetArgument(r_33, 1);
        u_33 = ATgetArgument(r_33, 2);
        {
          if(((o_33 != NULL) && (o_33 != s_33)))
            _fail(s_33);
          else
            o_33 = s_33;
          {
            if(((p_33 != NULL) && (p_33 != t_33)))
              _fail(t_33);
            else
              p_33 = t_33;
            {
              if(((q_33 != NULL) && (q_33 != u_33)))
                _fail(u_33);
              else
                q_33 = u_33;
              t = SSL_table_put(not_null(o_33), not_null(p_33), not_null(q_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_17;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_90 (ATerm))
{
  ATerm x_33 = NULL;
  ATerm v_17;
  v_17 = t;
  {
    t = term_c_18;
    t = table_put_0(t);
  }
  t = v_17;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm d_18 = t;
      int e_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_90(t);
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
      ATerm f_18 = t;
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
                t = term_u_16;
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
          t = f_18;
          {
            ATerm q_18 = t;
            int s_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_3 (ATerm t)
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm y_33 = NULL;
                    y_33 = t;
                    if(((x_33 != NULL) && (x_33 != y_33)))
                      _fail(y_33);
                    else
                      x_33 = y_33;
                    return(t);
                  }
                  t = Undefined_1(t, n_3);
                  return(t);
                }
                t = fetch_1(t, m_3);
                {
                  ATerm u_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_33)), term_t_18);
                    return(t);
                  }
                  t = say_1(t, u_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_j_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(s_18);
              }
            else
              {
                t = q_18;
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
ATerm option_wrap_4 (ATerm t, ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm))
{
  t = parse_options_1(t, b_87);
  {
    t = store_options_0(t);
    {
      t = d_87(t);
      {
        ATerm v_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_87);
            LocalPopChoice(a_19);
          }
        else
          {
            t = v_18;
            {
              ATerm b_19 = t;
              int c_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_87(t);
                  t = report_success_0(t);
                  LocalPopChoice(c_19);
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
ATerm iowrap_4 (ATerm t, ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm))
{
  ATerm v_3 (ATerm t)
  {
    ATerm e_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_87(t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = e_19;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, s_87);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_3, u_87, v_87, b_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm o_87 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm d_4 (ATerm t)
    {
      ATerm k_19;
      k_19 = t;
      {
        ATerm b_34 = NULL;
        ATerm c_34 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            c_34 = t;
            if(((b_34 != NULL) && (b_34 != c_34)))
              _fail(c_34);
            else
              b_34 = c_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATempty, not_null(b_34)));
          t = printnl_0(t);
        }
      }
      t = k_19;
      return(t);
    }
    t = if_verbose2_1(t, d_4);
    return(t);
  }
  t = iowrap_4(t, m_87, n_87, o_87, c_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_87 (ATerm), ATerm l_87 (ATerm))
{
  t = iowrap_3(t, k_87, l_87, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_87 (ATerm))
{
  ATerm e_4 (ATerm t)
  {
    t = _2(t, _id, h_87);
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
