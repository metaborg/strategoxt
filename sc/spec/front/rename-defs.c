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
ATerm term_j_18;
ATerm term_o_17;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_l_10;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_c_9;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_q_7;
ATerm term_j_7;
ATerm term_d_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_r_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_x_5;
ATerm term_v_5;
ATerm term_m_5;
void init_constant_terms (void)
{
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_v_6);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_6);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_x_5);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_x_5);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_x_5);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_o_16, term_x_5);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__3, term_q_15, term_r_15, (ATerm) ATempty);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm q_65 (ATerm));
ATerm assert_1 (ATerm, ATerm l_92 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm n_92 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm j_0 (ATerm));
ATerm escape_1 (ATerm, ATerm u_81 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm e_56 (ATerm));
ATerm Cons_2 (ATerm, ATerm t_53 (ATerm), ATerm u_53 (ATerm));
ATerm Specification_1 (ATerm, ATerm g_56 (ATerm));
ATerm _2 (ATerm, ATerm k_52 (ATerm), ATerm l_52 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_72 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm n_85 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm k_88 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_86 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_69 (ATerm), ATerm k_69 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm s_76 (ATerm), ATerm t_76 (ATerm));
ATerm crush_2 (ATerm, ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_88 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_86 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_90 (ATerm));
ATerm map_1 (ATerm, ATerm x_71 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm e_0 (ATerm), ATerm f_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_90 (ATerm));
ATerm Program_1 (ATerm, ATerm h_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm o_85 (ATerm));
ATerm Undefined_1 (ATerm, ATerm i_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_89 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm u_68 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_90 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm));
ATerm iowrap_4 (ATerm, ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm));
ATerm iowrap_2 (ATerm, ATerm e_87 (ATerm), ATerm f_87 (ATerm));
ATerm iowrap_1 (ATerm, ATerm b_87 (ATerm));
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
        ATerm f_2 = NULL,h_2 = NULL;
        ATerm l_5;
        l_5 = t;
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
        t = l_5;
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
        ATerm a_3 = NULL;
        ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
        t = not_null(u_2);
        {
          ATerm k_0 (ATerm t)
          {
            t = term_m_5;
            return(t);
          }
          t = rewrite_1(t, k_0);
          {
            b_3 = t;
            r_2 :
            if(match_cons(b_3, sym_Defined_2))
              {
                c_3 = ATgetArgument(b_3, 0);
                d_3 = ATgetArgument(b_3, 1);
                s_2 :
                if(match_string(c_3, "d_0"))
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
                    ATerm o_5 = t;
                    int r_5 = stack_ptr;
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
                        LocalPopChoice(r_5);
                      }
                    else
                      {
                        t = o_5;
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
ATerm topdown_1 (ATerm t, ATerm q_65 (ATerm))
{
  t = q_65(t);
  {
    ATerm l_0 (ATerm t)
    {
      t = topdown_1(t, q_65);
      return(t);
    }
    t = _all(t, l_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_92 (ATerm))
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
        ATerm s_5;
        s_5 = t;
        {
          ATerm o_4 = NULL;
          ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
          t = l_92(t);
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
                    ATerm t_5 = t;
                    int u_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), term_v_5);
                        t = table_get_0(t);
                        LocalPopChoice(u_5);
                      }
                    else
                      {
                        t = t_5;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_4 = t;
                      e_4 :
                      if(((ATgetType(p_4) == AT_LIST) && !(ATisEmpty(p_4))))
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_4), term_v_5, (ATerm) ATinsert(CheckATermList(not_null(n_4)), (ATerm) ATinsert(CheckATermList(not_null(m_4)), not_null(h_4))));
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
        t = s_5;
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
  if(((ATgetType(x_4) == AT_LIST) && !(ATisEmpty(x_4))))
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
ATerm rewrite_1 (ATerm t, ATerm n_92 (ATerm))
{
  ATerm n_5 = NULL;
  ATerm p_5 = NULL;
  n_5 = t;
  {
    ATerm q_5 = NULL;
    t = term_x_5;
    {
      t = n_92(t);
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
    ATerm b_6 = t;
    int c_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_6 = NULL;
        t = not_null(a_6);
        {
          ATerm m_0 (ATerm t)
          {
            t = term_e_6;
            return(t);
          }
          t = rewrite_1(t, m_0);
          {
            d_6 = t;
            w_5 :
            if(match_cons(d_6, sym_Undefined_0))
              {
                _fail(t);
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = term_f_6;
        LocalPopChoice(c_6);
      }
    else
      {
        t = b_6;
        {
          ATerm g_6 = NULL;
          ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
          t = not_null(a_6);
          {
            ATerm n_0 (ATerm t)
            {
              t = term_e_6;
              return(t);
            }
            t = rewrite_1(t, n_0);
            {
              h_6 = t;
              y_5 :
              if(match_cons(h_6, sym_Defined_2))
                {
                  i_6 = ATgetArgument(h_6, 0);
                  j_6 = ATgetArgument(h_6, 1);
                  z_5 :
                  if(match_string(i_6, "o_0"))
                    {
                      if(((g_6 != NULL) && (g_6 != j_6)))
                        _fail(j_6);
                      else
                        g_6 = j_6;
                    }
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
          t = not_null(g_6);
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
  ATerm p_6 = NULL;
  p_6 = t;
  t = SSL_int_to_string(not_null(p_6));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
  a_7 = t;
  y_6 :
  if(((ATgetType(a_7) == AT_LIST) && !(ATisEmpty(a_7))))
    {
      b_7 = ATgetFirst((ATermList) a_7);
      c_7 = (ATerm) ATgetNext((ATermList) a_7);
      z_6 :
      if(match_int(b_7, 95))
        {
          ATerm e_7 = NULL;
          ATerm f_7 = NULL;
          t = not_null(c_7);
          {
            t = j_0(t);
            {
              f_7 = t;
              if(((e_7 != NULL) && (e_7 != f_7)))
                _fail(f_7);
              else
                e_7 = f_7;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(e_7)), term_k_6), term_k_6);
        }
      else
        {
          if(match_int(b_7, 45))
            {
              ATerm h_7 = NULL;
              ATerm i_7 = NULL;
              t = not_null(c_7);
              {
                t = j_0(t);
                {
                  i_7 = t;
                  if(((h_7 != NULL) && (h_7 != i_7)))
                    _fail(i_7);
                  else
                    h_7 = i_7;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_7)), term_k_6);
            }
          else
            {
              if(match_int(b_7, 39))
                {
                  ATerm k_7 = NULL;
                  ATerm l_7 = NULL;
                  t = not_null(c_7);
                  {
                    t = j_0(t);
                    {
                      l_7 = t;
                      if(((k_7 != NULL) && (k_7 != l_7)))
                        _fail(l_7);
                      else
                        k_7 = l_7;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(k_7)), term_k_6), term_l_6), term_k_6);
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
ATerm escape_1 (ATerm t, ATerm u_81 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm s_7 (ATerm t)
    {
      ATerm m_6 = t;
      int n_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_81(t, s_7);
          LocalPopChoice(n_6);
        }
      else
        {
          t = m_6;
          {
            ATerm o_6 = t;
            int q_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, s_7);
                LocalPopChoice(q_6);
              }
            else
              {
                t = o_6;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = s_7(t);
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
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym_Mod_2))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_7)), term_r_6), not_null(w_7));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm u_76 (ATerm), ATerm v_76 (ATerm), ATerm w_76 (ATerm))
{
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_76(t);
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      {
        ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
        f_8 = t;
        e_8 :
        if(((ATgetType(f_8) == AT_LIST) && !(ATisEmpty(f_8))))
          {
            g_8 = ATgetFirst((ATermList) f_8);
            h_8 = (ATerm) ATgetNext((ATermList) f_8);
            {
              ATerm k_8 = NULL,m_8 = NULL;
              ATerm u_6;
              u_6 = t;
              {
                ATerm l_8 = NULL;
                t = not_null(g_8);
                {
                  t = w_76(t);
                  {
                    l_8 = t;
                    if(((k_8 != NULL) && (k_8 != l_8)))
                      _fail(l_8);
                    else
                      k_8 = l_8;
                  }
                }
              }
              t = u_6;
              {
                ATerm n_8 = NULL;
                t = not_null(h_8);
                {
                  t = foldr_3(t, u_76, v_76, w_76);
                  {
                    n_8 = t;
                    if(((m_8 != NULL) && (m_8 != n_8)))
                      _fail(n_8);
                    else
                      m_8 = n_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), not_null(m_8));
                  t = v_76(t);
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
    t = term_v_6;
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = term_w_6;
    return(t);
  }
  t = foldr_3(t, p_0, add_0, q_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym_SDef_3))
    {
      y_8 = ATgetArgument(x_8, 0);
      z_8 = ATgetArgument(x_8, 1);
      a_9 = ATgetArgument(x_8, 2);
      {
        ATerm e_9 = NULL,f_9 = NULL;
        ATerm g_9 = NULL;
        t = not_null(z_8);
        {
          ATerm h_9 = NULL,j_9 = NULL,l_9 = NULL;
          t = length_0(t);
          {
            g_9 = t;
            {
              if(((e_9 != NULL) && (e_9 != g_9)))
                _fail(g_9);
              else
                e_9 = g_9;
              {
                ATerm x_6;
                x_6 = t;
                {
                  ATerm i_9 = NULL;
                  t = not_null(y_8);
                  {
                    t = try_1(t, NameMod_0);
                    {
                      t = cify_0(t);
                      {
                        i_9 = t;
                        if(((h_9 != NULL) && (h_9 != i_9)))
                          _fail(i_9);
                        else
                          h_9 = i_9;
                      }
                    }
                  }
                }
                t = x_6;
                {
                  ATerm k_9 = NULL;
                  t = not_null(e_9);
                  {
                    t = int_to_string_0(t);
                    {
                      k_9 = t;
                      if(((j_9 != NULL) && (j_9 != k_9)))
                        _fail(k_9);
                      else
                        j_9 = k_9;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_9)), term_d_7), not_null(h_9));
                    {
                      t = concat_strings_0(t);
                      {
                        l_9 = t;
                        {
                          if(((f_9 != NULL) && (f_9 != l_9)))
                            _fail(l_9);
                          else
                            f_9 = l_9;
                          {
                            ATerm g_7;
                            g_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_8), not_null(e_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_7, not_null(f_9)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_m_5;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = g_7;
                            {
                              ATerm m_7 = t;
                              int n_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(y_8);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm o_7;
                                      o_7 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_8), term_f_6);
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            t = term_e_6;
                                            return(t);
                                          }
                                          t = assert_1(t, s_0);
                                        }
                                      }
                                      t = o_7;
                                    }
                                  }
                                  LocalPopChoice(n_7);
                                }
                              else
                                {
                                  t = m_7;
                                  {
                                    ATerm p_7;
                                    p_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_8), (ATerm) ATmakeAppl(sym_Defined_2, term_q_7, not_null(f_9)));
                                      {
                                        ATerm t_0 (ATerm t)
                                        {
                                          t = term_e_6;
                                          return(t);
                                        }
                                        t = assert_1(t, t_0);
                                      }
                                    }
                                    t = p_7;
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
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_9), not_null(z_8), not_null(a_9));
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
ATerm Strategies_1 (ATerm t, ATerm e_56 (ATerm))
{
  ATerm w_9 = NULL,x_9 = NULL;
  w_9 = t;
  v_9 :
  if(match_cons(w_9, sym_Strategies_1))
    {
      x_9 = ATgetArgument(w_9, 0);
      {
        ATerm a_10 = NULL,c_10 = NULL;
        ATerm b_10 = NULL;
        t = SSLgetAnnotations(not_null(w_9));
        {
          b_10 = t;
          if(((a_10 != NULL) && (a_10 != b_10)))
            _fail(b_10);
          else
            a_10 = b_10;
        }
        {
          t = not_null(x_9);
          {
            ATerm e_10 = NULL;
            t = e_56(t);
            {
              c_10 = t;
              {
                ATerm f_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(c_10)), not_null(a_10));
                {
                  f_10 = t;
                  if(((e_10 != NULL) && (e_10 != f_10)))
                    _fail(f_10);
                  else
                    e_10 = f_10;
                }
                t = not_null(e_10);
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
ATerm Cons_2 (ATerm t, ATerm t_53 (ATerm), ATerm u_53 (ATerm))
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  q_10 = t;
  p_10 :
  if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
    {
      r_10 = ATgetFirst((ATermList) q_10);
      s_10 = (ATerm) ATgetNext((ATermList) q_10);
      {
        ATerm w_10 = NULL,y_10 = NULL;
        ATerm x_10 = NULL;
        t = SSLgetAnnotations(not_null(q_10));
        {
          x_10 = t;
          if(((w_10 != NULL) && (w_10 != x_10)))
            _fail(x_10);
          else
            w_10 = x_10;
        }
        {
          t = not_null(r_10);
          {
            ATerm a_11 = NULL;
            t = t_53(t);
            {
              y_10 = t;
              {
                t = not_null(s_10);
                {
                  ATerm c_11 = NULL;
                  t = u_53(t);
                  {
                    a_11 = t;
                    {
                      ATerm d_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_11)), not_null(y_10)), not_null(w_10));
                      {
                        d_11 = t;
                        if(((c_11 != NULL) && (c_11 != d_11)))
                          _fail(d_11);
                        else
                          c_11 = d_11;
                      }
                      t = not_null(c_11);
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
ATerm Specification_1 (ATerm t, ATerm g_56 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_Specification_1))
    {
      p_11 = ATgetArgument(o_11, 0);
      {
        ATerm s_11 = NULL,u_11 = NULL;
        ATerm t_11 = NULL;
        t = SSLgetAnnotations(not_null(o_11));
        {
          t_11 = t;
          if(((s_11 != NULL) && (s_11 != t_11)))
            _fail(t_11);
          else
            s_11 = t_11;
        }
        {
          t = not_null(p_11);
          {
            ATerm w_11 = NULL;
            t = g_56(t);
            {
              u_11 = t;
              {
                ATerm x_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(u_11)), not_null(s_11));
                {
                  x_11 = t;
                  if(((w_11 != NULL) && (w_11 != x_11)))
                    _fail(x_11);
                  else
                    w_11 = x_11;
                }
                t = not_null(w_11);
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
ATerm _2 (ATerm t, ATerm k_52 (ATerm), ATerm l_52 (ATerm))
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym__2))
    {
      j_12 = ATgetArgument(i_12, 0);
      k_12 = ATgetArgument(i_12, 1);
      {
        ATerm o_12 = NULL,q_12 = NULL;
        ATerm p_12 = NULL;
        t = SSLgetAnnotations(not_null(i_12));
        {
          p_12 = t;
          if(((o_12 != NULL) && (o_12 != p_12)))
            _fail(p_12);
          else
            o_12 = p_12;
        }
        {
          t = not_null(j_12);
          {
            ATerm s_12 = NULL;
            t = k_52(t);
            {
              q_12 = t;
              {
                t = not_null(k_12);
                {
                  ATerm u_12 = NULL;
                  t = l_52(t);
                  {
                    s_12 = t;
                    {
                      ATerm v_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_12), not_null(s_12)), not_null(o_12));
                      {
                        v_12 = t;
                        if(((u_12 != NULL) && (u_12 != v_12)))
                          _fail(v_12);
                        else
                          u_12 = v_12;
                      }
                      t = not_null(u_12);
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
  ATerm d_13 = NULL;
  ATerm r_7;
  r_7 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm e_13 = NULL,f_13 = NULL;
      e_13 = t;
      c_13 :
      if(match_cons(e_13, sym_Program_1))
        {
          f_13 = ATgetArgument(e_13, 0);
          if(((d_13 != NULL) && (d_13 != f_13)))
            _fail(f_13);
          else
            d_13 = f_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, w_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_7), not_null(d_13)), term_y_7));
      {
        t = printnl_0(t);
        {
          t = term_w_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = r_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
  j_13 = t;
  i_13 :
  if(match_cons(j_13, sym__2))
    {
      k_13 = ATgetArgument(j_13, 0);
      l_13 = ATgetArgument(j_13, 1);
      {
        ATerm a_8;
        a_8 = t;
        t = SSL_printnl(not_null(k_13), not_null(l_13));
        t = a_8;
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
  ATerm q_13 = NULL;
  q_13 = t;
  t = SSL_implode_string(not_null(q_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
        v_13 = t;
        u_13 :
        if(((ATgetType(v_13) == AT_LIST) && !(ATisEmpty(v_13))))
          {
            w_13 = ATgetFirst((ATermList) v_13);
            x_13 = (ATerm) ATgetNext((ATermList) v_13);
            {
              t = not_null(w_13);
              {
                ATerm x_0 (ATerm t)
                {
                  t = not_null(x_13);
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
  ATerm h_14 = NULL;
  ATerm j_14 = NULL;
  h_14 = t;
  {
    ATerm k_14 = NULL;
    ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
    t = not_null(h_14);
    {
      k_14 = t;
      {
        t = SSL_explode_term(not_null(k_14));
        {
          m_14 = t;
          f_14 :
          if(match_cons(m_14, sym__2))
            {
              n_14 = ATgetArgument(m_14, 0);
              o_14 = ATgetArgument(m_14, 1);
              g_14 :
              if(match_string(n_14, ""))
                {
                  if(((j_14 != NULL) && (j_14 != o_14)))
                    _fail(o_14);
                  else
                    j_14 = o_14;
                }
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
      t = not_null(j_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm s_14 (ATerm t)
  {
    ATerm d_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_14);
        LocalPopChoice(i_8);
      }
    else
      {
        t = d_8;
        {
          t = Nil_0(t);
          t = m_72(t);
        }
      }
    return(t);
  }
  t = s_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym__2))
    {
      w_14 = ATgetArgument(v_14, 0);
      x_14 = ATgetArgument(v_14, 1);
      {
        t = not_null(w_14);
        {
          ATerm y_0 (ATerm t)
          {
            t = not_null(x_14);
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
  ATerm j_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = j_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm c_15 = NULL;
  c_15 = t;
  t = SSL_explode_string(not_null(c_15));
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
ATerm debug_1 (ATerm t, ATerm n_85 (ATerm))
{
  ATerm p_8;
  p_8 = t;
  {
    ATerm h_15 = NULL,j_15 = NULL;
    ATerm q_8;
    q_8 = t;
    {
      ATerm i_15 = NULL;
      t = n_85(t);
      {
        i_15 = t;
        if(((h_15 != NULL) && (h_15 != i_15)))
          _fail(i_15);
        else
          h_15 = i_15;
      }
    }
    t = q_8;
    {
      ATerm k_15 = NULL;
      k_15 = t;
      if(((j_15 != NULL) && (j_15 != k_15)))
        _fail(k_15);
      else
        j_15 = k_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_15)), not_null(h_15)));
        t = printnl_0(t);
      }
    }
  }
  t = p_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  t = SSL_is_string(not_null(o_15));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, z_0);
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
            {
              ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
              x_15 = t;
              w_15 :
              if(match_cons(x_15, sym_Path_1))
                {
                  y_15 = ATgetArgument(x_15, 0);
                  t = not_null(y_15);
                }
              else
                {
                  if(match_cons(x_15, sym_Var_1))
                    {
                      y_15 = ATgetArgument(x_15, 0);
                      {
                        t = not_null(y_15);
                        {
                          ATerm v_8 = t;
                          int b_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(b_9);
                            }
                          else
                            {
                              t = v_8;
                              {
                                ATerm a_1 (ATerm t)
                                {
                                  t = term_c_9;
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
                      if(match_cons(x_15, sym_Prefix_2))
                        {
                          y_15 = ATgetArgument(x_15, 0);
                          z_15 = ATgetArgument(x_15, 1);
                          {
                            ATerm e_16 = NULL,g_16 = NULL;
                            ATerm d_9;
                            d_9 = t;
                            {
                              ATerm f_16 = NULL;
                              t = not_null(y_15);
                              {
                                t = eval_config_0(t);
                                {
                                  f_16 = t;
                                  if(((e_16 != NULL) && (e_16 != f_16)))
                                    _fail(f_16);
                                  else
                                    e_16 = f_16;
                                }
                              }
                            }
                            t = d_9;
                            {
                              ATerm h_16 = NULL;
                              t = not_null(z_15);
                              {
                                t = eval_config_0(t);
                                {
                                  h_16 = t;
                                  if(((g_16 != NULL) && (g_16 != h_16)))
                                    _fail(h_16);
                                  else
                                    g_16 = h_16;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), not_null(g_16));
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
  ATerm p_16 = NULL;
  p_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_9, not_null(p_16));
    {
      t = table_get_0(t);
      {
        ATerm b_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm n_9;
            n_9 = t;
            {
              ATerm r_16 = NULL;
              ATerm s_16 = NULL;
              s_16 = t;
              if(((r_16 != NULL) && (r_16 != s_16)))
                _fail(s_16);
              else
                r_16 = s_16;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_m_9, not_null(p_16), not_null(r_16));
                t = table_put_0(t);
              }
            }
            t = n_9;
          }
          return(t);
        }
        t = try_1(t, b_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm k_88 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm o_9;
    o_9 = t;
    {
      ATerm w_16 = NULL;
      ATerm x_16 = NULL;
      t = term_p_9;
      {
        t = get_config_0(t);
        {
          x_16 = t;
          if(((w_16 != NULL) && (w_16 != x_16)))
            _fail(x_16);
          else
            w_16 = x_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_16), term_q_9);
        t = geq_0(t);
      }
    }
    t = o_9;
    t = k_88(t);
    return(t);
  }
  t = try_1(t, c_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym__2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      t = SSL_WriteToTextFile(not_null(c_17), not_null(d_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  i_17 :
  if(match_cons(j_17, sym__2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      t = SSL_WriteToBinaryFile(not_null(k_17), not_null(l_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_17 = NULL;
  ATerm r_9;
  r_9 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm s_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 (ATerm t)
          {
            ATerm u_17 = NULL,v_17 = NULL;
            u_17 = t;
            q_17 :
            if(match_cons(u_17, sym_Output_1))
              {
                v_17 = ATgetArgument(u_17, 0);
                if(((t_17 != NULL) && (t_17 != v_17)))
                  _fail(v_17);
                else
                  t_17 = v_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_1);
          LocalPopChoice(t_9);
        }
      else
        {
          t = s_9;
          {
            ATerm w_17 = NULL;
            t = term_u_9;
            {
              w_17 = t;
              if(((t_17 != NULL) && (t_17 != w_17)))
                _fail(w_17);
              else
                t_17 = w_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_1, _id);
  }
  t = r_9;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = not_null(t_17);
        return(t);
      }
      t = split_2(t, g_1, _id);
      return(t);
    }
    t = _2(t, _id, f_1);
    {
      ATerm y_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              ATerm x_17 = NULL;
              x_17 = t;
              s_17 :
              if(!(match_cons(x_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, i_1);
            return(t);
          }
          t = _2(t, h_1, WriteToBinaryFile_0);
          LocalPopChoice(z_9);
        }
      else
        {
          t = y_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm d_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  ATerm d_10;
  d_10 = t;
  t = dtime_0(t);
  t = d_10;
  {
    t = r_86(t);
    {
      ATerm g_10;
      g_10 = t;
      {
        ATerm e_18 = NULL;
        t = dtime_0(t);
        {
          e_18 = t;
          if(((d_18 != NULL) && (d_18 != e_18)))
            _fail(e_18);
          else
            d_18 = e_18;
        }
      }
      t = g_10;
      {
        f_18 = t;
        c_18 :
        if(match_cons(f_18, sym__2))
          {
            g_18 = ATgetArgument(f_18, 0);
            h_18 = ATgetArgument(f_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(d_18))), not_null(h_18));
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
  ATerm n_18 = NULL;
  n_18 = t;
  t = SSL_ReadFromFile(not_null(n_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_69 (ATerm), ATerm k_69 (ATerm))
{
  ATerm s_18 = NULL,u_18 = NULL;
  ATerm h_10;
  h_10 = t;
  {
    ATerm t_18 = NULL;
    t = j_69(t);
    {
      t_18 = t;
      if(((s_18 != NULL) && (s_18 != t_18)))
        _fail(t_18);
      else
        s_18 = t_18;
    }
  }
  t = h_10;
  {
    ATerm v_18 = NULL;
    t = k_69(t);
    {
      v_18 = t;
      if(((u_18 != NULL) && (u_18 != v_18)))
        _fail(v_18);
      else
        u_18 = v_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_18), not_null(u_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_19 = NULL;
  ATerm i_10;
  i_10 = t;
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 (ATerm t)
        {
          ATerm c_19 = NULL,d_19 = NULL;
          c_19 = t;
          z_18 :
          if(match_cons(c_19, sym_Input_1))
            {
              d_19 = ATgetArgument(c_19, 0);
              if(((b_19 != NULL) && (b_19 != d_19)))
                _fail(d_19);
              else
                b_19 = d_19;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, j_1);
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        {
          ATerm e_19 = NULL;
          t = term_l_10;
          {
            e_19 = t;
            if(((b_19 != NULL) && (b_19 != e_19)))
              _fail(e_19);
            else
              b_19 = e_19;
          }
        }
      }
  }
  t = i_10;
  {
    ATerm k_1 (ATerm t)
    {
      t = not_null(b_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_19 = NULL;
  i_19 = t;
  t = SSL_string_to_int(not_null(i_19));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  q_19 = t;
  o_19 :
  if(match_string(q_19, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
        {
          r_19 = ATgetFirst((ATermList) q_19);
          s_19 = (ATerm) ATgetNext((ATermList) q_19);
          p_19 :
          if(((ATgetType(s_19) == AT_LIST) && !(ATisEmpty(s_19))))
            {
              t_19 = ATgetFirst((ATermList) s_19);
              u_19 = (ATerm) ATgetNext((ATermList) s_19);
              {
                ATerm y_19 = NULL;
                ATerm m_10;
                m_10 = t;
                {
                  t = not_null(r_19);
                  t = g_0(t);
                }
                t = m_10;
                {
                  ATerm z_19 = NULL;
                  t = not_null(t_19);
                  {
                    t = h_0(t);
                    {
                      z_19 = t;
                      if(((y_19 != NULL) && (y_19 != z_19)))
                        _fail(z_19);
                      else
                        y_19 = z_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_19)), not_null(y_19));
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
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm s_20 = NULL;
        s_20 = t;
        d_20 :
        if(!(match_string(s_20, "-i")))
          {
            if(!(match_string(s_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        ATerm v_20 = NULL;
        ATerm t_10;
        t_10 = t;
        {
          ATerm t_20 = NULL;
          ATerm u_20 = NULL;
          u_20 = t;
          if(((t_20 != NULL) && (t_20 != u_20)))
            _fail(u_20);
          else
            t_20 = u_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_u_10, not_null(t_20));
            t = set_config_0(t);
          }
        }
        t = t_10;
        {
          ATerm w_20 = NULL;
          w_20 = t;
          if(((v_20 != NULL) && (v_20 != w_20)))
            _fail(w_20);
          else
            v_20 = w_20;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_20));
        }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_v_10;
        return(t);
      }
      t = ArgOption_3(t, l_1, m_1, n_1);
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      {
        ATerm z_10 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm x_20 = NULL;
              x_20 = t;
              g_20 :
              if(!(match_string(x_20, "-o")))
                {
                  if(!(match_string(x_20, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              ATerm a_21 = NULL;
              ATerm e_11;
              e_11 = t;
              {
                ATerm y_20 = NULL;
                ATerm z_20 = NULL;
                z_20 = t;
                if(((y_20 != NULL) && (y_20 != z_20)))
                  _fail(z_20);
                else
                  y_20 = z_20;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(y_20));
                  t = set_config_0(t);
                }
              }
              t = e_11;
              {
                ATerm b_21 = NULL;
                b_21 = t;
                if(((a_21 != NULL) && (a_21 != b_21)))
                  _fail(b_21);
                else
                  a_21 = b_21;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_21));
              }
              return(t);
            }
            ATerm s_1 (ATerm t)
            {
              t = term_g_11;
              return(t);
            }
            t = ArgOption_3(t, o_1, r_1, s_1);
            LocalPopChoice(b_11);
          }
        else
          {
            t = z_10;
            {
              ATerm h_11 = t;
              int i_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_1 (ATerm t)
                  {
                    ATerm c_21 = NULL;
                    c_21 = t;
                    j_20 :
                    if(!(match_string(c_21, "-S")))
                      {
                        if(!(match_string(c_21, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm u_1 (ATerm t)
                  {
                    t = term_j_11;
                    t = set_config_0(t);
                    t = term_k_11;
                    return(t);
                  }
                  ATerm v_1 (ATerm t)
                  {
                    t = term_l_11;
                    return(t);
                  }
                  t = Option_3(t, t_1, u_1, v_1);
                  LocalPopChoice(i_11);
                }
              else
                {
                  t = h_11;
                  {
                    ATerm m_11 = t;
                    int q_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_1 (ATerm t)
                        {
                          ATerm d_21 = NULL;
                          d_21 = t;
                          k_20 :
                          if(!(match_string(d_21, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm x_1 (ATerm t)
                        {
                          ATerm g_21 = NULL;
                          ATerm r_11;
                          r_11 = t;
                          {
                            ATerm e_21 = NULL;
                            ATerm f_21 = NULL;
                            t = string_to_int_0(t);
                            {
                              f_21 = t;
                              if(((e_21 != NULL) && (e_21 != f_21)))
                                _fail(f_21);
                              else
                                e_21 = f_21;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(e_21));
                              t = set_config_0(t);
                            }
                          }
                          t = r_11;
                          {
                            ATerm h_21 = NULL;
                            h_21 = t;
                            if(((g_21 != NULL) && (g_21 != h_21)))
                              _fail(h_21);
                            else
                              g_21 = h_21;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_21));
                          }
                          return(t);
                        }
                        ATerm y_1 (ATerm t)
                        {
                          t = term_v_11;
                          return(t);
                        }
                        t = ArgOption_3(t, w_1, x_1, y_1);
                        LocalPopChoice(q_11);
                      }
                    else
                      {
                        t = m_11;
                        {
                          ATerm y_11 = t;
                          int z_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_1 (ATerm t)
                              {
                                ATerm i_21 = NULL;
                                i_21 = t;
                                n_20 :
                                if(!(match_string(i_21, "-k")))
                                  {
                                    if(!(match_string(i_21, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm a_2 (ATerm t)
                              {
                                ATerm a_12;
                                a_12 = t;
                                {
                                  ATerm j_21 = NULL;
                                  ATerm k_21 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    k_21 = t;
                                    if(((j_21 != NULL) && (j_21 != k_21)))
                                      _fail(k_21);
                                    else
                                      j_21 = k_21;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(j_21));
                                    t = set_config_0(t);
                                  }
                                }
                                t = a_12;
                                return(t);
                              }
                              ATerm b_2 (ATerm t)
                              {
                                t = term_c_12;
                                return(t);
                              }
                              t = ArgOption_3(t, z_1, a_2, b_2);
                              LocalPopChoice(z_11);
                            }
                          else
                            {
                              t = y_11;
                              {
                                ATerm d_12 = t;
                                int e_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_2 (ATerm t)
                                    {
                                      ATerm l_21 = NULL;
                                      l_21 = t;
                                      p_20 :
                                      if(!(match_string(l_21, "-v")))
                                        {
                                          if(!(match_string(l_21, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm d_2 (ATerm t)
                                    {
                                      t = term_g_12;
                                      t = set_config_0(t);
                                      t = term_l_12;
                                      return(t);
                                    }
                                    ATerm e_2 (ATerm t)
                                    {
                                      t = term_m_12;
                                      return(t);
                                    }
                                    t = Option_3(t, c_2, d_2, e_2);
                                    LocalPopChoice(e_12);
                                  }
                                else
                                  {
                                    t = d_12;
                                    {
                                      ATerm n_12 = t;
                                      int r_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_2 (ATerm t)
                                          {
                                            ATerm m_21 = NULL;
                                            m_21 = t;
                                            q_20 :
                                            if(!(match_string(m_21, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm j_2 (ATerm t)
                                          {
                                            t = term_w_12;
                                            t = set_config_0(t);
                                            t = term_x_12;
                                            return(t);
                                          }
                                          ATerm k_2 (ATerm t)
                                          {
                                            t = term_y_12;
                                            return(t);
                                          }
                                          t = Option_3(t, i_2, j_2, k_2);
                                          LocalPopChoice(r_12);
                                        }
                                      else
                                        {
                                          t = n_12;
                                          {
                                            ATerm m_2 (ATerm t)
                                            {
                                              ATerm n_21 = NULL;
                                              n_21 = t;
                                              r_20 :
                                              if(!(match_string(n_21, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm n_2 (ATerm t)
                                            {
                                              t = term_a_13;
                                              t = set_config_0(t);
                                              t = term_b_13;
                                              return(t);
                                            }
                                            ATerm o_2 (ATerm t)
                                            {
                                              t = term_g_13;
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
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATempty, term_h_13));
  {
    t = printnl_0(t);
    {
      t = term_w_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = SSL_TicksToSeconds(not_null(q_22));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym__2))
    {
      w_22 = ATgetArgument(v_22, 0);
      x_22 = ATgetArgument(v_22, 1);
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_22), not_null(x_22));
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            t = SSL_addr(not_null(w_22), not_null(x_22));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_76 (ATerm), ATerm t_76 (ATerm))
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_76(t);
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
        e_23 = t;
        d_23 :
        if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
          {
            f_23 = ATgetFirst((ATermList) e_23);
            g_23 = (ATerm) ATgetNext((ATermList) e_23);
            {
              ATerm j_23 = NULL;
              ATerm k_23 = NULL;
              t = not_null(g_23);
              {
                t = foldr_2(t, s_76, t_76);
                {
                  k_23 = t;
                  if(((j_23 != NULL) && (j_23 != k_23)))
                    _fail(k_23);
                  else
                    j_23 = k_23;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_23), not_null(j_23));
                t = t_76(t);
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
ATerm crush_2 (ATerm t, ATerm q_75 (ATerm), ATerm r_75 (ATerm))
{
  ATerm r_23 = NULL;
  ATerm t_23 = NULL;
  r_23 = t;
  {
    ATerm u_23 = NULL;
    ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
    t = not_null(r_23);
    {
      u_23 = t;
      {
        t = SSL_explode_term(not_null(u_23));
        {
          w_23 = t;
          q_23 :
          if(match_cons(w_23, sym__2))
            {
              x_23 = ATgetArgument(w_23, 0);
              y_23 = ATgetArgument(w_23, 1);
              if(((t_23 != NULL) && (t_23 != y_23)))
                _fail(y_23);
              else
                t_23 = y_23;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_23);
      t = foldr_2(t, q_75, r_75);
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
    ATerm p_2 (ATerm t)
    {
      t = term_v_6;
      return(t);
    }
    t = crush_2(t, p_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  d_24 :
  if(match_cons(e_24, sym__2))
    {
      f_24 = ATgetArgument(e_24, 0);
      g_24 = ATgetArgument(e_24, 1);
      {
        ATerm r_13;
        r_13 = t;
        {
          ATerm s_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_24), not_null(g_24));
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              t = SSL_gtr(not_null(f_24), not_null(g_24));
            }
        }
        t = r_13;
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
  ATerm m_24 = NULL;
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
      n_24 = t;
      l_24 :
      if(match_cons(n_24, sym__2))
        {
          o_24 = ATgetArgument(n_24, 0);
          p_24 = ATgetArgument(n_24, 1);
          {
            if(((m_24 != NULL) && (m_24 != o_24)))
              _fail(o_24);
            else
              m_24 = o_24;
            if(((m_24 != NULL) && (m_24 != p_24)))
              _fail(p_24);
            else
              m_24 = p_24;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_88 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm a_14;
    a_14 = t;
    {
      ATerm s_24 = NULL;
      ATerm t_24 = NULL;
      t = term_p_9;
      {
        t = get_config_0(t);
        {
          t_24 = t;
          if(((s_24 != NULL) && (s_24 != t_24)))
            _fail(t_24);
          else
            s_24 = t_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_24), term_w_6);
        t = geq_0(t);
      }
    }
    t = a_14;
    t = j_88(t);
    return(t);
  }
  t = try_1(t, q_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm x_24 = NULL,z_24 = NULL;
    ATerm b_14;
    b_14 = t;
    {
      ATerm y_24 = NULL;
      t = run_time_0(t);
      {
        y_24 = t;
        if(((x_24 != NULL) && (x_24 != y_24)))
          _fail(y_24);
        else
          x_24 = y_24;
      }
    }
    t = b_14;
    {
      ATerm a_25 = NULL;
      t = term_c_14;
      {
        t = get_config_0(t);
        {
          a_25 = t;
          if(((z_24 != NULL) && (z_24 != a_25)))
            _fail(a_25);
          else
            z_24 = a_25;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_14), not_null(x_24)), term_d_14), not_null(z_24)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_2);
  {
    t = term_v_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  g_25 :
  if(match_cons(h_25, sym_Version_0))
    {
      ATerm j_25 = NULL,l_25 = NULL;
      ATerm i_14;
      i_14 = t;
      {
        ATerm k_25 = NULL;
        t = SSLgetAnnotations(not_null(h_25));
        {
          k_25 = t;
          if(((j_25 != NULL) && (j_25 != k_25)))
            _fail(k_25);
          else
            j_25 = k_25;
        }
      }
      t = i_14;
      {
        ATerm m_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_25));
        {
          m_25 = t;
          if(((l_25 != NULL) && (l_25 != m_25)))
            _fail(m_25);
          else
            l_25 = m_25;
        }
        t = not_null(l_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_86 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm l_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = l_14;
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_2);
  t = p_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  t = SSL_table_create(not_null(r_25));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  {
    ATerm t_14;
    t_14 = t;
    {
      t = term_y_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_14, term_z_14, not_null(v_25));
          t = table_put_0(t);
        }
      }
    }
    t = t_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  t = SSL_table_destroy(not_null(z_25));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_26 = NULL;
  d_26 = t;
  t = SSL_exit(not_null(d_26));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
  h_26 = t;
  g_26 :
  if(((ATgetType(h_26) == AT_LIST) && ATisEmpty(h_26)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
        {
          i_26 = ATgetFirst((ATermList) h_26);
          j_26 = (ATerm) ATgetNext((ATermList) h_26);
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
  ATerm a_15;
  a_15 = t;
  {
    ATerm m_26 = NULL;
    ATerm p_26 = NULL;
    ATerm b_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(d_15);
      }
    else
      {
        t = b_15;
        {
          ATerm n_26 = NULL;
          ATerm o_26 = NULL;
          o_26 = t;
          if(((n_26 != NULL) && (n_26 != o_26)))
            _fail(o_26);
          else
            n_26 = o_26;
          t = (ATerm) ATinsert(ATempty, not_null(n_26));
        }
      }
    {
      p_26 = t;
      if(((m_26 != NULL) && (m_26 != p_26)))
        _fail(p_26);
      else
        m_26 = p_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_9, not_null(m_26));
      t = printnl_0(t);
    }
  }
  t = a_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_71 (ATerm))
{
  ATerm s_26 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        t = Cons_2(t, x_71, s_26);
      }
    return(t);
  }
  t = s_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  b_27 = t;
  y_26 :
  if(((ATgetType(b_27) == AT_LIST) && !(ATisEmpty(b_27))))
    {
      z_26 = ATgetFirst((ATermList) b_27);
      a_27 = (ATerm) ATgetNext((ATermList) b_27);
      {
        ATerm e_27 = NULL;
        t = not_null(a_27);
        {
          ATerm g_15;
          g_15 = t;
          {
            ATerm f_27 = NULL,h_27 = NULL,j_27 = NULL;
            ATerm l_15;
            l_15 = t;
            {
              ATerm g_27 = NULL;
              t = f_0(t);
              {
                g_27 = t;
                if(((f_27 != NULL) && (f_27 != g_27)))
                  _fail(g_27);
                else
                  f_27 = g_27;
              }
            }
            t = l_15;
            {
              ATerm i_27 = NULL;
              t = not_null(z_26);
              {
                t = e_0(t);
                {
                  i_27 = t;
                  if(((h_27 != NULL) && (h_27 != i_27)))
                    _fail(i_27);
                  else
                    h_27 = i_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_27)), not_null(h_27));
                {
                  j_27 = t;
                  if(((e_27 != NULL) && (e_27 != j_27)))
                    _fail(j_27);
                  else
                    e_27 = j_27;
                }
              }
            }
          }
          t = g_15;
          {
            ATerm z_2 (ATerm t)
            {
              t = not_null(e_27);
              return(t);
            }
            t = reverse_acc_2(t, e_0, z_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(b_27) == AT_LIST) && ATisEmpty(b_27)))
        {
          {
            t = term_x_5;
            t = f_0(t);
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
  ATerm e_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm u_27 = NULL,v_27 = NULL;
  u_27 = t;
  t_27 :
  if(match_cons(u_27, sym_Program_1))
    {
      v_27 = ATgetArgument(u_27, 0);
      {
        ATerm y_27 = NULL,a_28 = NULL;
        ATerm z_27 = NULL;
        t = SSLgetAnnotations(not_null(u_27));
        {
          z_27 = t;
          if(((y_27 != NULL) && (y_27 != z_27)))
            _fail(z_27);
          else
            y_27 = z_27;
        }
        {
          t = not_null(v_27);
          {
            ATerm c_28 = NULL;
            t = h_59(t);
            {
              a_28 = t;
              {
                ATerm d_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_28)), not_null(y_27));
                {
                  d_28 = t;
                  if(((c_28 != NULL) && (c_28 != d_28)))
                    _fail(d_28);
                  else
                    c_28 = d_28;
                }
                t = not_null(c_28);
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
  ATerm m_28 = NULL;
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_28 = NULL;
      t = term_c_14;
      {
        t = get_config_0(t);
        {
          n_28 = t;
          if(((m_28 != NULL) && (m_28 != n_28)))
            _fail(n_28);
          else
            m_28 = n_28;
        }
      }
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm g_3 (ATerm t)
          {
            ATerm o_28 = NULL;
            o_28 = t;
            if(((m_28 != NULL) && (m_28 != o_28)))
              _fail(o_28);
            else
              m_28 = o_28;
            return(t);
          }
          t = Program_1(t, g_3);
          return(t);
        }
        t = option_defined_1(t, f_3);
      }
    }
  {
    ATerm h_3 (ATerm t)
    {
      ATerm i_3 (ATerm t)
      {
        t = not_null(m_28);
        return(t);
      }
      t = short_description_1(t, i_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, h_3);
    {
      t = term_p_15;
      {
        t = echo_0(t);
        {
          t = term_s_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_3 (ATerm t)
                {
                  ATerm p_28 = NULL;
                  ATerm q_28 = NULL;
                  q_28 = t;
                  if(((p_28 != NULL) && (p_28 != q_28)))
                    _fail(q_28);
                  else
                    p_28 = q_28;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_28)), term_t_15);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_3);
                {
                  ATerm q_3 (ATerm t)
                  {
                    ATerm r_28 = NULL;
                    ATerm x_28 = NULL;
                    ATerm r_3 (ATerm t)
                    {
                      t = not_null(m_28);
                      return(t);
                    }
                    t = long_description_1(t, r_3);
                    {
                      x_28 = t;
                      if(((r_28 != NULL) && (r_28 != x_28)))
                        _fail(x_28);
                      else
                        r_28 = x_28;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(r_28)), term_u_15);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, q_3);
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
  ATerm v_15;
  v_15 = t;
  {
    ATerm d_29 = NULL;
    ATerm e_29 = NULL;
    e_29 = t;
    if(((d_29 != NULL) && (d_29 != e_29)))
      _fail(e_29);
    else
      d_29 = e_29;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATempty, not_null(d_29)));
      t = printnl_0(t);
    }
  }
  t = v_15;
  return(t);
}
ATerm say_1 (ATerm t, ATerm o_85 (ATerm))
{
  ATerm a_16;
  a_16 = t;
  {
    t = o_85(t);
    t = debug_0(t);
  }
  t = a_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm q_29 = NULL,r_29 = NULL;
  q_29 = t;
  k_29 :
  if(match_cons(q_29, sym_Undefined_1))
    {
      r_29 = ATgetArgument(q_29, 0);
      {
        ATerm u_29 = NULL,w_29 = NULL;
        ATerm v_29 = NULL;
        t = SSLgetAnnotations(not_null(q_29));
        {
          v_29 = t;
          if(((u_29 != NULL) && (u_29 != v_29)))
            _fail(v_29);
          else
            u_29 = v_29;
        }
        {
          t = not_null(r_29);
          {
            ATerm y_29 = NULL;
            t = i_59(t);
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
ATerm fetch_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm e_30 (ATerm t)
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_72, _id);
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = Cons_2(t, _id, e_30);
      }
    return(t);
  }
  t = e_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_89 (ATerm))
{
  t = fetch_1(t, m_89);
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
      ATerm d_16;
      d_16 = t;
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
      t = d_16;
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
ATerm try_1 (ATerm t, ATerm u_68 (ATerm))
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_68(t);
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
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
        ATerm k_16;
        k_16 = t;
        {
          ATerm l_31 = NULL;
          ATerm m_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_31), not_null(g_31));
          {
            ATerm l_16 = t;
            int m_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_16);
              }
            else
              {
                t = l_16;
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
        t = k_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_90 (ATerm))
{
  ATerm q_31 = NULL;
  ATerm r_31 = NULL;
  t = term_x_5;
  {
    t = r_90(t);
    {
      r_31 = t;
      if(((q_31 != NULL) && (q_31 != r_31)))
        _fail(r_31);
      else
        q_31 = r_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_15, term_r_15, not_null(q_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm x_31 = NULL,y_31 = NULL,d_32 = NULL;
  x_31 = t;
  w_31 :
  if(match_string(x_31, "register-usage-info"))
    {
      t = register_usage_1(t, c_0);
    }
  else
    {
      if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
        {
          y_31 = ATgetFirst((ATermList) x_31);
          d_32 = (ATerm) ATgetNext((ATermList) x_31);
          {
            ATerm g_32 = NULL;
            ATerm n_16;
            n_16 = t;
            {
              t = not_null(y_31);
              t = a_0(t);
            }
            t = n_16;
            {
              ATerm h_32 = NULL;
              t = term_x_5;
              {
                t = b_0(t);
                {
                  h_32 = t;
                  if(((g_32 != NULL) && (g_32 != h_32)))
                    _fail(h_32);
                  else
                    g_32 = h_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_32)), not_null(g_32));
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
  ATerm x_3 (ATerm t)
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
  ATerm y_3 (ATerm t)
  {
    t = term_q_16;
    {
      t = set_config_0(t);
      t = term_t_16;
    }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_u_16;
    return(t);
  }
  t = Option_3(t, x_3, y_3, z_3);
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
        t = (ATerm) ATmakeAppl(sym__3, term_m_9, not_null(y_32), not_null(z_32));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_90 (ATerm))
{
  ATerm v_16;
  v_16 = t;
  {
    ATerm a_4 (ATerm t)
    {
      t = term_y_16;
      t = p_90(t);
      return(t);
    }
    t = try_1(t, a_4);
  }
  t = v_16;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm h_33 = NULL;
      ATerm z_16;
      z_16 = t;
      {
        ATerm f_33 = NULL;
        ATerm g_33 = NULL;
        g_33 = t;
        if(((f_33 != NULL) && (f_33 != g_33)))
          _fail(g_33);
        else
          f_33 = g_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_14, not_null(f_33));
          t = set_config_0(t);
        }
      }
      t = z_16;
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
    ATerm c_4 (ATerm t)
    {
      ATerm e_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
              {
                t = p_90(t);
                t = Cons_2(t, _id, c_4);
              }
            }
          LocalPopChoice(f_17);
        }
      else
        {
          t = e_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_4, c_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  ATerm m_17;
  m_17 = t;
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
  t = m_17;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_90 (ATerm))
{
  ATerm x_33 = NULL;
  ATerm n_17;
  n_17 = t;
  {
    t = term_o_17;
    t = table_put_0(t);
  }
  t = n_17;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm p_17 = t;
      int r_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_90(t);
          LocalPopChoice(r_17);
        }
      else
        {
          t = p_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_4);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_18;
            a_18 = t;
            {
              ATerm b_18 = t;
              int i_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_o_16;
                  t = get_config_0(t);
                  LocalPopChoice(i_18);
                }
              else
                {
                  t = b_18;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = a_18;
            {
              t = system_usage_0(t);
              {
                t = term_v_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
            {
              ATerm k_4 (ATerm t)
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm y_33 = NULL;
                  y_33 = t;
                  if(((x_33 != NULL) && (x_33 != y_33)))
                    _fail(y_33);
                  else
                    x_33 = y_33;
                  return(t);
                }
                t = Undefined_1(t, s_4);
                return(t);
              }
              t = option_defined_1(t, k_4);
              {
                ATerm t_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_33)), term_j_18);
                  return(t);
                }
                t = say_1(t, t_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_w_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_4);
      {
        ATerm k_18;
        k_18 = t;
        {
          t = term_q_15;
          t = table_destroy_0(t);
        }
        t = k_18;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm), ATerm y_86 (ATerm))
{
  t = parse_options_1(t, v_86);
  {
    t = store_options_0(t);
    {
      t = x_86(t);
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_86);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm o_18 = t;
              int p_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_86(t);
                  t = report_success_0(t);
                  LocalPopChoice(p_18);
                }
              else
                {
                  t = o_18;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_87(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, m_87);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, u_4, o_87, p_87, v_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      ATerm w_18;
      w_18 = t;
      {
        ATerm b_34 = NULL;
        ATerm c_34 = NULL;
        t = term_c_14;
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
          t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATempty, not_null(b_34)));
          t = printnl_0(t);
        }
      }
      t = w_18;
      return(t);
    }
    t = if_verbose2_1(t, b_5);
    return(t);
  }
  t = iowrap_4(t, g_87, h_87, i_87, a_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm e_87 (ATerm), ATerm f_87 (ATerm))
{
  t = iowrap_3(t, e_87, f_87, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    t = _2(t, _id, b_87);
    return(t);
  }
  t = iowrap_2(t, c_5, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      ATerm j_5 (ATerm t)
      {
        ATerm k_5 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, k_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, j_5);
      return(t);
    }
    t = Specification_1(t, i_5);
    return(t);
  }
  t = iowrap_1(t, d_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
