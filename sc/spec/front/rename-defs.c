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
Symbol sym_Dummy_0;
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
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
ATerm term_j_18;
ATerm term_v_17;
ATerm term_c_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_m_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_l_10;
ATerm term_a_10;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_o_7;
ATerm term_k_7;
ATerm term_g_7;
ATerm term_a_7;
ATerm term_u_6;
ATerm term_q_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_a_6;
ATerm term_w_5;
ATerm term_n_5;
void init_constant_terms (void)
{
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_u_6);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_6);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_a_6);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_a_6);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_a_6);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_r_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_a_6);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__3, term_q_15, term_r_15, (ATerm) ATempty);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm z_86 (ATerm));
ATerm assert_1 (ATerm, ATerm l_63 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm n_63 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm m_0 (ATerm));
ATerm escape_1 (ATerm, ATerm x_73 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm k_78 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm q_60 (ATerm));
ATerm Cons_2 (ATerm, ATerm z_62 (ATerm), ATerm a_63 (ATerm));
ATerm Specification_1 (ATerm, ATerm s_60 (ATerm));
ATerm _2 (ATerm, ATerm r_51 (ATerm), ATerm s_51 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_82 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_69 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm x_66 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_69 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_85 (ATerm), ATerm t_85 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_78 (ATerm), ATerm h_78 (ATerm));
ATerm crush_2 (ATerm, ATerm y_79 (ATerm), ATerm z_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_66 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_69 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_65 (ATerm));
ATerm map_1 (ATerm, ATerm f_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_65 (ATerm));
ATerm Program_1 (ATerm, ATerm l_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm u_69 (ATerm));
ATerm Undefined_1 (ATerm, ATerm m_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_86 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_65 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_65 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm b_68 (ATerm));
ATerm iowrap_4 (ATerm, ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm s_68 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_68 (ATerm), ATerm i_68 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_68 (ATerm));
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
        ATerm z_2 = NULL;
        ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(w_2), not_null(v_2));
        {
          ATerm c_0 (ATerm t)
          {
            t = term_n_5;
            return(t);
          }
          t = rewrite_1(t, c_0);
          {
            a_3 = t;
            r_2 :
            if(match_cons(a_3, sym_Defined_2))
              {
                b_3 = ATgetArgument(a_3, 0);
                c_3 = ATgetArgument(a_3, 1);
                s_2 :
                if(match_string(b_3, "e_0"))
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
                    ATerm q_5 = t;
                    int r_5 = stack_ptr;
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
                        LocalPopChoice(r_5);
                      }
                    else
                      {
                        t = q_5;
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
ATerm topdown_1 (ATerm t, ATerm z_86 (ATerm))
{
  t = z_86(t);
  {
    ATerm d_0 (ATerm t)
    {
      t = topdown_1(t, z_86);
      return(t);
    }
    t = _all(t, d_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_63 (ATerm))
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
        ATerm s_5;
        s_5 = t;
        {
          ATerm n_4 = NULL;
          ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
          t = l_63(t);
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
                    ATerm t_5 = t;
                    int u_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), term_w_5);
                        t = table_get_0(t);
                        LocalPopChoice(u_5);
                      }
                    else
                      {
                        t = t_5;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_4), term_w_5, (ATerm) ATinsert(CheckATermList(not_null(m_4)), (ATerm) ATinsert(CheckATermList(not_null(l_4)), not_null(g_4))));
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
ATerm rewrite_1 (ATerm t, ATerm n_63 (ATerm))
{
  ATerm m_5 = NULL;
  ATerm o_5 = NULL;
  m_5 = t;
  {
    ATerm p_5 = NULL;
    t = term_a_6;
    {
      t = n_63(t);
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
    ATerm c_6 = t;
    int h_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(z_5));
        {
          ATerm n_0 (ATerm t)
          {
            t = term_i_6;
            return(t);
          }
          t = rewrite_1(t, n_0);
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
        t = term_a_6;
        LocalPopChoice(h_6);
      }
    else
      {
        t = c_6;
        {
          ATerm d_6 = NULL;
          ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(z_5));
          {
            ATerm o_0 (ATerm t)
            {
              t = term_i_6;
              return(t);
            }
            t = rewrite_1(t, o_0);
            {
              e_6 = t;
              x_5 :
              if(match_cons(e_6, sym_Defined_2))
                {
                  f_6 = ATgetArgument(e_6, 0);
                  g_6 = ATgetArgument(e_6, 1);
                  y_5 :
                  if(match_string(f_6, "f_0"))
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
  ATerm m_6 = NULL;
  m_6 = t;
  t = SSL_int_to_string(not_null(m_6));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm m_0 (ATerm))
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
            t = m_0(t);
            {
              c_7 = t;
              if(((b_7 != NULL) && (b_7 != c_7)))
                _fail(c_7);
              else
                b_7 = c_7;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_7)), term_j_6), term_j_6);
        }
      else
        {
          if(match_int(y_6, 45))
            {
              ATerm e_7 = NULL;
              ATerm f_7 = NULL;
              t = not_null(z_6);
              {
                t = m_0(t);
                {
                  f_7 = t;
                  if(((e_7 != NULL) && (e_7 != f_7)))
                    _fail(f_7);
                  else
                    e_7 = f_7;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_7)), term_j_6);
            }
          else
            {
              if(match_int(y_6, 39))
                {
                  ATerm h_7 = NULL;
                  ATerm i_7 = NULL;
                  t = not_null(z_6);
                  {
                    t = m_0(t);
                    {
                      i_7 = t;
                      if(((h_7 != NULL) && (h_7 != i_7)))
                        _fail(i_7);
                      else
                        h_7 = i_7;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(h_7)), term_j_6), term_k_6), term_j_6);
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
ATerm escape_1 (ATerm t, ATerm x_73 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm p_7 (ATerm t)
    {
      ATerm l_6 = t;
      int n_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_73(t, p_7);
          LocalPopChoice(n_6);
        }
      else
        {
          t = l_6;
          {
            ATerm o_6 = t;
            int p_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, p_7);
                LocalPopChoice(p_6);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_7)), term_q_6), not_null(t_7));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm k_78 (ATerm))
{
  ATerm r_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_78(t);
      LocalPopChoice(s_6);
    }
  else
    {
      t = r_6;
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
              ATerm t_6;
              t_6 = t;
              {
                ATerm i_8 = NULL;
                t = not_null(d_8);
                {
                  t = k_78(t);
                  {
                    i_8 = t;
                    if(((h_8 != NULL) && (h_8 != i_8)))
                      _fail(i_8);
                    else
                      h_8 = i_8;
                  }
                }
              }
              t = t_6;
              {
                ATerm k_8 = NULL;
                t = not_null(e_8);
                {
                  t = foldr_3(t, i_78, j_78, k_78);
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
                  t = j_78(t);
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
    t = term_u_6;
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = term_a_7;
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
                ATerm d_7;
                d_7 = t;
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
                t = d_7;
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_9)), term_g_7), not_null(e_9));
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
                            ATerm j_7;
                            j_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(b_9), not_null(v_8)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_7, not_null(c_9)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_n_5;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = j_7;
                            {
                              ATerm l_7 = t;
                              int m_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(v_8);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm n_7;
                                      n_7 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(v_8)), term_o_7);
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            t = term_i_6;
                                            return(t);
                                          }
                                          t = assert_1(t, s_0);
                                        }
                                      }
                                      t = n_7;
                                    }
                                  }
                                  LocalPopChoice(m_7);
                                }
                              else
                                {
                                  t = l_7;
                                  {
                                    ATerm q_7;
                                    q_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(v_8)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_7, not_null(c_9)));
                                      {
                                        ATerm t_0 (ATerm t)
                                        {
                                          t = term_i_6;
                                          return(t);
                                        }
                                        t = assert_1(t, t_0);
                                      }
                                    }
                                    t = q_7;
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
ATerm Strategies_1 (ATerm t, ATerm q_60 (ATerm))
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
            t = q_60(t);
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
ATerm Cons_2 (ATerm t, ATerm z_62 (ATerm), ATerm a_63 (ATerm))
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
            t = z_62(t);
            {
              v_10 = t;
              {
                t = not_null(p_10);
                {
                  ATerm z_10 = NULL;
                  t = a_63(t);
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
ATerm Specification_1 (ATerm t, ATerm s_60 (ATerm))
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
            t = s_60(t);
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
ATerm _2 (ATerm t, ATerm r_51 (ATerm), ATerm s_51 (ATerm))
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
            t = r_51(t);
            {
              n_12 = t;
              {
                t = not_null(h_12);
                {
                  ATerm r_12 = NULL;
                  t = s_51(t);
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
  ATerm w_7;
  w_7 = t;
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
      t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_7), not_null(a_13)), term_y_7));
      {
        t = printnl_0(t);
        {
          t = term_a_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = w_7;
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
        ATerm a_8;
        a_8 = t;
        t = SSL_printnl(not_null(h_13), not_null(i_13));
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
  ATerm n_13 = NULL;
  n_13 = t;
  t = SSL_implode_string(not_null(n_13));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
        s_13 = t;
        r_13 :
        if(((ATgetType(s_13) == AT_LIST) && ((ATermList) s_13 != ATempty)))
          {
            t_13 = ATgetFirst((ATermList) s_13);
            u_13 = (ATerm) ATgetNext((ATermList) s_13);
            {
              t = not_null(t_13);
              {
                ATerm x_0 (ATerm t)
                {
                  t = not_null(u_13);
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
  ATerm e_14 = NULL;
  ATerm g_14 = NULL;
  e_14 = t;
  {
    ATerm h_14 = NULL;
    ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
    t = not_null(e_14);
    {
      h_14 = t;
      {
        t = SSL_explode_term(not_null(h_14));
        {
          j_14 = t;
          c_14 :
          if(match_cons(j_14, sym__2))
            {
              k_14 = ATgetArgument(j_14, 0);
              l_14 = ATgetArgument(j_14, 1);
              d_14 :
              if(match_string(k_14, ""))
                {
                  if(((g_14 != NULL) && (g_14 != l_14)))
                    _fail(l_14);
                  else
                    g_14 = l_14;
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
      t = not_null(g_14);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_82 (ATerm))
{
  ATerm p_14 (ATerm t)
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_14);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        {
          t = Nil_0(t);
          t = u_82(t);
        }
      }
    return(t);
  }
  t = p_14(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  r_14 :
  if(match_cons(s_14, sym__2))
    {
      t_14 = ATgetArgument(s_14, 0);
      u_14 = ATgetArgument(s_14, 1);
      {
        t = not_null(t_14);
        {
          ATerm y_0 (ATerm t)
          {
            t = not_null(u_14);
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
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(o_8);
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
  ATerm z_14 = NULL;
  z_14 = t;
  t = SSL_explode_string(not_null(z_14));
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
ATerm debug_1 (ATerm t, ATerm t_69 (ATerm))
{
  ATerm p_8;
  p_8 = t;
  {
    ATerm e_15 = NULL,g_15 = NULL;
    ATerm q_8;
    q_8 = t;
    {
      ATerm f_15 = NULL;
      t = t_69(t);
      {
        f_15 = t;
        if(((e_15 != NULL) && (e_15 != f_15)))
          _fail(f_15);
        else
          e_15 = f_15;
      }
    }
    t = q_8;
    {
      ATerm h_15 = NULL;
      h_15 = t;
      if(((g_15 != NULL) && (g_15 != h_15)))
        _fail(h_15);
      else
        g_15 = h_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_15)), not_null(e_15)));
        t = printnl_0(t);
      }
    }
  }
  t = p_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm l_15 = NULL;
  l_15 = t;
  t = SSL_is_string(not_null(l_15));
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
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, z_0);
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            {
              ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
              u_15 = t;
              t_15 :
              if(match_cons(u_15, sym_Path_1))
                {
                  v_15 = ATgetArgument(u_15, 0);
                  t = not_null(v_15);
                }
              else
                {
                  if(match_cons(u_15, sym_Var_1))
                    {
                      v_15 = ATgetArgument(u_15, 0);
                      {
                        t = not_null(v_15);
                        {
                          ATerm a_9 = t;
                          int j_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(j_9);
                            }
                          else
                            {
                              t = a_9;
                              {
                                ATerm a_1 (ATerm t)
                                {
                                  t = term_k_9;
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
                      if(match_cons(u_15, sym_Prefix_2))
                        {
                          v_15 = ATgetArgument(u_15, 0);
                          w_15 = ATgetArgument(u_15, 1);
                          {
                            ATerm b_16 = NULL,d_16 = NULL;
                            ATerm l_9;
                            l_9 = t;
                            {
                              ATerm c_16 = NULL;
                              t = not_null(v_15);
                              {
                                t = eval_config_0(t);
                                {
                                  c_16 = t;
                                  if(((b_16 != NULL) && (b_16 != c_16)))
                                    _fail(c_16);
                                  else
                                    b_16 = c_16;
                                }
                              }
                            }
                            t = l_9;
                            {
                              ATerm e_16 = NULL;
                              t = not_null(w_15);
                              {
                                t = eval_config_0(t);
                                {
                                  e_16 = t;
                                  if(((d_16 != NULL) && (d_16 != e_16)))
                                    _fail(e_16);
                                  else
                                    d_16 = e_16;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_16), not_null(d_16));
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
  ATerm m_16 = NULL;
  m_16 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_9, not_null(m_16));
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
              ATerm o_16 = NULL;
              ATerm p_16 = NULL;
              p_16 = t;
              if(((o_16 != NULL) && (o_16 != p_16)))
                _fail(p_16);
              else
                o_16 = p_16;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_m_9, not_null(m_16), not_null(o_16));
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
ATerm if_verbose2_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    ATerm o_9;
    o_9 = t;
    {
      ATerm t_16 = NULL;
      ATerm u_16 = NULL;
      t = term_p_9;
      {
        t = get_config_0(t);
        {
          u_16 = t;
          if(((t_16 != NULL) && (t_16 != u_16)))
            _fail(u_16);
          else
            t_16 = u_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), term_q_9);
        t = geq_0(t);
      }
    }
    t = o_9;
    t = x_66(t);
    return(t);
  }
  t = try_1(t, c_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym__2))
    {
      z_16 = ATgetArgument(y_16, 0);
      a_17 = ATgetArgument(y_16, 1);
      t = SSL_WriteToTextFile(not_null(z_16), not_null(a_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  f_17 :
  if(match_cons(g_17, sym__2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      t = SSL_WriteToBinaryFile(not_null(h_17), not_null(i_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm q_17 = NULL;
  ATerm r_9;
  r_9 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm v_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 (ATerm t)
          {
            ATerm r_17 = NULL,s_17 = NULL;
            r_17 = t;
            n_17 :
            if(match_cons(r_17, sym_Output_1))
              {
                s_17 = ATgetArgument(r_17, 0);
                if(((q_17 != NULL) && (q_17 != s_17)))
                  _fail(s_17);
                else
                  q_17 = s_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_1);
          LocalPopChoice(w_9);
        }
      else
        {
          t = v_9;
          {
            ATerm t_17 = NULL;
            t = term_a_10;
            {
              t_17 = t;
              if(((q_17 != NULL) && (q_17 != t_17)))
                _fail(t_17);
              else
                q_17 = t_17;
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
        t = not_null(q_17);
        return(t);
      }
      t = split_2(t, g_1, _id);
      return(t);
    }
    t = _2(t, _id, f_1);
    {
      ATerm d_10 = t;
      int e_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              ATerm u_17 = NULL;
              u_17 = t;
              p_17 :
              if(!(match_cons(u_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, i_1);
            return(t);
          }
          t = _2(t, h_1, WriteToBinaryFile_0);
          LocalPopChoice(e_10);
        }
      else
        {
          t = d_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm d_69 (ATerm))
{
  ATerm a_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  ATerm f_10;
  f_10 = t;
  t = dtime_0(t);
  t = f_10;
  {
    t = d_69(t);
    {
      ATerm g_10;
      g_10 = t;
      {
        ATerm b_18 = NULL;
        t = dtime_0(t);
        {
          b_18 = t;
          if(((a_18 != NULL) && (a_18 != b_18)))
            _fail(b_18);
          else
            a_18 = b_18;
        }
      }
      t = g_10;
      {
        c_18 = t;
        z_17 :
        if(match_cons(c_18, sym__2))
          {
            d_18 = ATgetArgument(c_18, 0);
            e_18 = ATgetArgument(c_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_18))), not_null(e_18));
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
  ATerm k_18 = NULL;
  k_18 = t;
  t = SSL_ReadFromFile(not_null(k_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_85 (ATerm), ATerm t_85 (ATerm))
{
  ATerm p_18 = NULL,r_18 = NULL;
  ATerm h_10;
  h_10 = t;
  {
    ATerm q_18 = NULL;
    t = s_85(t);
    {
      q_18 = t;
      if(((p_18 != NULL) && (p_18 != q_18)))
        _fail(q_18);
      else
        p_18 = q_18;
    }
  }
  t = h_10;
  {
    ATerm s_18 = NULL;
    t = t_85(t);
    {
      s_18 = t;
      if(((r_18 != NULL) && (r_18 != s_18)))
        _fail(s_18);
      else
        r_18 = s_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(r_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_18 = NULL;
  ATerm i_10;
  i_10 = t;
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 (ATerm t)
        {
          ATerm z_18 = NULL,a_19 = NULL;
          z_18 = t;
          w_18 :
          if(match_cons(z_18, sym_Input_1))
            {
              a_19 = ATgetArgument(z_18, 0);
              if(((y_18 != NULL) && (y_18 != a_19)))
                _fail(a_19);
              else
                y_18 = a_19;
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
          ATerm b_19 = NULL;
          t = term_l_10;
          {
            b_19 = t;
            if(((y_18 != NULL) && (y_18 != b_19)))
              _fail(b_19);
            else
              y_18 = b_19;
          }
        }
      }
  }
  t = i_10;
  {
    ATerm k_1 (ATerm t)
    {
      t = not_null(y_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  t = SSL_string_to_int(not_null(f_19));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  n_19 = t;
  l_19 :
  if(match_string(n_19, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(n_19) == AT_LIST) && ((ATermList) n_19 != ATempty)))
        {
          o_19 = ATgetFirst((ATermList) n_19);
          p_19 = (ATerm) ATgetNext((ATermList) n_19);
          m_19 :
          if(((ATgetType(p_19) == AT_LIST) && ((ATermList) p_19 != ATempty)))
            {
              q_19 = ATgetFirst((ATermList) p_19);
              r_19 = (ATerm) ATgetNext((ATermList) p_19);
              {
                ATerm v_19 = NULL;
                ATerm q_10;
                q_10 = t;
                {
                  t = not_null(o_19);
                  t = j_0(t);
                }
                t = q_10;
                {
                  ATerm w_19 = NULL;
                  t = not_null(q_19);
                  {
                    t = k_0(t);
                    {
                      w_19 = t;
                      if(((v_19 != NULL) && (v_19 != w_19)))
                        _fail(w_19);
                      else
                        v_19 = w_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_19)), not_null(v_19));
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
      ATerm l_1 (ATerm t)
      {
        ATerm p_20 = NULL;
        p_20 = t;
        a_20 :
        if(!(match_string(p_20, "-i")))
          {
            if(!(match_string(p_20, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        ATerm s_20 = NULL;
        ATerm w_10;
        w_10 = t;
        {
          ATerm q_20 = NULL;
          ATerm r_20 = NULL;
          r_20 = t;
          if(((q_20 != NULL) && (q_20 != r_20)))
            _fail(r_20);
          else
            q_20 = r_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(q_20));
            t = set_config_0(t);
          }
        }
        t = w_10;
        {
          ATerm t_20 = NULL;
          t_20 = t;
          if(((s_20 != NULL) && (s_20 != t_20)))
            _fail(t_20);
          else
            s_20 = t_20;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_20));
        }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        t = term_b_11;
        return(t);
      }
      t = ArgOption_3(t, l_1, m_1, n_1);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm u_20 = NULL;
              u_20 = t;
              d_20 :
              if(!(match_string(u_20, "-o")))
                {
                  if(!(match_string(u_20, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              ATerm x_20 = NULL;
              ATerm e_11;
              e_11 = t;
              {
                ATerm v_20 = NULL;
                ATerm w_20 = NULL;
                w_20 = t;
                if(((v_20 != NULL) && (v_20 != w_20)))
                  _fail(w_20);
                else
                  v_20 = w_20;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(v_20));
                  t = set_config_0(t);
                }
              }
              t = e_11;
              {
                ATerm y_20 = NULL;
                y_20 = t;
                if(((x_20 != NULL) && (x_20 != y_20)))
                  _fail(y_20);
                else
                  x_20 = y_20;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_20));
              }
              return(t);
            }
            ATerm s_1 (ATerm t)
            {
              t = term_g_11;
              return(t);
            }
            t = ArgOption_3(t, o_1, r_1, s_1);
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm h_11 = t;
              int i_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_1 (ATerm t)
                  {
                    ATerm z_20 = NULL;
                    z_20 = t;
                    g_20 :
                    if(!(match_string(z_20, "-S")))
                      {
                        if(!(match_string(z_20, "--silent")))
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
                    t = term_n_11;
                    return(t);
                  }
                  ATerm v_1 (ATerm t)
                  {
                    t = term_o_11;
                    return(t);
                  }
                  t = Option_3(t, t_1, u_1, v_1);
                  LocalPopChoice(i_11);
                }
              else
                {
                  t = h_11;
                  {
                    ATerm s_11 = t;
                    int v_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_1 (ATerm t)
                        {
                          ATerm a_21 = NULL;
                          a_21 = t;
                          h_20 :
                          if(!(match_string(a_21, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm x_1 (ATerm t)
                        {
                          ATerm d_21 = NULL;
                          ATerm w_11;
                          w_11 = t;
                          {
                            ATerm b_21 = NULL;
                            ATerm c_21 = NULL;
                            t = string_to_int_0(t);
                            {
                              c_21 = t;
                              if(((b_21 != NULL) && (b_21 != c_21)))
                                _fail(c_21);
                              else
                                b_21 = c_21;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_p_9, not_null(b_21));
                              t = set_config_0(t);
                            }
                          }
                          t = w_11;
                          {
                            ATerm e_21 = NULL;
                            e_21 = t;
                            if(((d_21 != NULL) && (d_21 != e_21)))
                              _fail(e_21);
                            else
                              d_21 = e_21;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_21));
                          }
                          return(t);
                        }
                        ATerm y_1 (ATerm t)
                        {
                          t = term_x_11;
                          return(t);
                        }
                        t = ArgOption_3(t, w_1, x_1, y_1);
                        LocalPopChoice(v_11);
                      }
                    else
                      {
                        t = s_11;
                        {
                          ATerm y_11 = t;
                          int z_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_1 (ATerm t)
                              {
                                ATerm f_21 = NULL;
                                f_21 = t;
                                k_20 :
                                if(!(match_string(f_21, "-k")))
                                  {
                                    if(!(match_string(f_21, "--keep")))
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
                                  ATerm g_21 = NULL;
                                  ATerm h_21 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    h_21 = t;
                                    if(((g_21 != NULL) && (g_21 != h_21)))
                                      _fail(h_21);
                                    else
                                      g_21 = h_21;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(g_21));
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
                                int i_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_2 (ATerm t)
                                    {
                                      ATerm i_21 = NULL;
                                      i_21 = t;
                                      m_20 :
                                      if(!(match_string(i_21, "-v")))
                                        {
                                          if(!(match_string(i_21, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm d_2 (ATerm t)
                                    {
                                      t = term_k_12;
                                      t = set_config_0(t);
                                      t = term_o_12;
                                      return(t);
                                    }
                                    ATerm e_2 (ATerm t)
                                    {
                                      t = term_q_12;
                                      return(t);
                                    }
                                    t = Option_3(t, c_2, d_2, e_2);
                                    LocalPopChoice(i_12);
                                  }
                                else
                                  {
                                    t = d_12;
                                    {
                                      ATerm t_12 = t;
                                      int u_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_2 (ATerm t)
                                          {
                                            ATerm j_21 = NULL;
                                            j_21 = t;
                                            n_20 :
                                            if(!(match_string(j_21, "-b")))
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
                                          LocalPopChoice(u_12);
                                        }
                                      else
                                        {
                                          t = t_12;
                                          {
                                            ATerm m_2 (ATerm t)
                                            {
                                              ATerm k_21 = NULL;
                                              k_21 = t;
                                              o_20 :
                                              if(!(match_string(k_21, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm n_2 (ATerm t)
                                            {
                                              t = term_e_13;
                                              t = set_config_0(t);
                                              t = term_j_13;
                                              return(t);
                                            }
                                            ATerm o_2 (ATerm t)
                                            {
                                              t = term_k_13;
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
  t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATempty, term_l_13));
  {
    t = printnl_0(t);
    {
      t = term_a_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm z_21 = NULL;
  z_21 = t;
  t = SSL_TicksToSeconds(not_null(z_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym__2))
    {
      f_22 = ATgetArgument(e_22, 0);
      g_22 = ATgetArgument(e_22, 1);
      {
        ATerm m_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_22), not_null(g_22));
            LocalPopChoice(o_13);
          }
        else
          {
            t = m_13;
            t = SSL_addr(not_null(f_22), not_null(g_22));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_78 (ATerm), ATerm h_78 (ATerm))
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_78(t);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
        n_22 = t;
        m_22 :
        if(((ATgetType(n_22) == AT_LIST) && ((ATermList) n_22 != ATempty)))
          {
            o_22 = ATgetFirst((ATermList) n_22);
            p_22 = (ATerm) ATgetNext((ATermList) n_22);
            {
              ATerm s_22 = NULL;
              ATerm t_22 = NULL;
              t = not_null(p_22);
              {
                t = foldr_2(t, g_78, h_78);
                {
                  t_22 = t;
                  if(((s_22 != NULL) && (s_22 != t_22)))
                    _fail(t_22);
                  else
                    s_22 = t_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_22), not_null(s_22));
                t = h_78(t);
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
ATerm crush_2 (ATerm t, ATerm y_79 (ATerm), ATerm z_79 (ATerm))
{
  ATerm a_23 = NULL;
  ATerm j_23 = NULL;
  a_23 = t;
  {
    ATerm k_23 = NULL;
    ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
    t = not_null(a_23);
    {
      k_23 = t;
      {
        t = SSL_explode_term(not_null(k_23));
        {
          m_23 = t;
          z_22 :
          if(match_cons(m_23, sym__2))
            {
              n_23 = ATgetArgument(m_23, 0);
              o_23 = ATgetArgument(m_23, 1);
              if(((j_23 != NULL) && (j_23 != o_23)))
                _fail(o_23);
              else
                j_23 = o_23;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_23);
      t = foldr_2(t, y_79, z_79);
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
      t = term_u_6;
      return(t);
    }
    t = crush_2(t, p_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  u_23 = t;
  t_23 :
  if(match_cons(u_23, sym__2))
    {
      v_23 = ATgetArgument(u_23, 0);
      w_23 = ATgetArgument(u_23, 1);
      {
        ATerm v_13;
        v_13 = t;
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_23), not_null(w_23));
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
              t = SSL_gtr(not_null(v_23), not_null(w_23));
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
  ATerm f_24 = NULL;
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = NULL,h_24 = NULL,k_24 = NULL;
      g_24 = t;
      e_24 :
      if(match_cons(g_24, sym__2))
        {
          h_24 = ATgetArgument(g_24, 0);
          k_24 = ATgetArgument(g_24, 1);
          {
            if(((f_24 != NULL) && (f_24 != h_24)))
              _fail(h_24);
            else
              f_24 = h_24;
            if(((f_24 != NULL) && (f_24 != k_24)))
              _fail(k_24);
            else
              f_24 = k_24;
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
ATerm if_verbose1_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm q_2 (ATerm t)
  {
    ATerm a_14;
    a_14 = t;
    {
      ATerm n_24 = NULL;
      ATerm o_24 = NULL;
      t = term_p_9;
      {
        t = get_config_0(t);
        {
          o_24 = t;
          if(((n_24 != NULL) && (n_24 != o_24)))
            _fail(o_24);
          else
            n_24 = o_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), term_a_7);
        t = geq_0(t);
      }
    }
    t = a_14;
    t = w_66(t);
    return(t);
  }
  t = try_1(t, q_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm s_24 = NULL,u_24 = NULL;
    ATerm b_14;
    b_14 = t;
    {
      ATerm t_24 = NULL;
      t = run_time_0(t);
      {
        t_24 = t;
        if(((s_24 != NULL) && (s_24 != t_24)))
          _fail(t_24);
        else
          s_24 = t_24;
      }
    }
    t = b_14;
    {
      ATerm v_24 = NULL;
      t = term_f_14;
      {
        t = get_config_0(t);
        {
          v_24 = t;
          if(((u_24 != NULL) && (u_24 != v_24)))
            _fail(v_24);
          else
            u_24 = v_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_14), not_null(s_24)), term_i_14), not_null(u_24)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_2);
  {
    t = term_u_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  c_25 :
  if(match_cons(d_25, sym_Version_0))
    {
      ATerm f_25 = NULL,h_25 = NULL;
      ATerm n_14;
      n_14 = t;
      {
        ATerm g_25 = NULL;
        t = SSLgetAnnotations(not_null(d_25));
        {
          g_25 = t;
          if(((f_25 != NULL) && (f_25 != g_25)))
            _fail(g_25);
          else
            f_25 = g_25;
        }
      }
      t = n_14;
      {
        ATerm i_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(f_25));
        {
          i_25 = t;
          if(((h_25 != NULL) && (h_25 != i_25)))
            _fail(i_25);
          else
            h_25 = i_25;
        }
        t = not_null(h_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    ATerm o_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(q_14);
      }
    else
      {
        t = o_14;
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_2);
  t = b_69(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_25 = NULL;
  n_25 = t;
  t = SSL_table_create(not_null(n_25));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  {
    ATerm x_14;
    x_14 = t;
    {
      t = term_y_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_14, term_a_15, not_null(r_25));
          t = table_put_0(t);
        }
      }
    }
    t = x_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_25 = NULL;
  v_25 = t;
  t = SSL_table_destroy(not_null(v_25));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  t = SSL_exit(not_null(z_25));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  c_26 :
  if(((ATermList) d_26 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_26) == AT_LIST) && ((ATermList) d_26 != ATempty)))
        {
          e_26 = ATgetFirst((ATermList) d_26);
          f_26 = (ATerm) ATgetNext((ATermList) d_26);
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
  ATerm b_15;
  b_15 = t;
  {
    ATerm i_26 = NULL;
    ATerm s_26 = NULL;
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        {
          ATerm j_26 = NULL;
          ATerm r_26 = NULL;
          r_26 = t;
          if(((j_26 != NULL) && (j_26 != r_26)))
            _fail(r_26);
          else
            j_26 = r_26;
          t = (ATerm) ATinsert(ATempty, not_null(j_26));
        }
      }
    {
      s_26 = t;
      if(((i_26 != NULL) && (i_26 != s_26)))
        _fail(s_26);
      else
        i_26 = s_26;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_10, not_null(i_26));
      t = printnl_0(t);
    }
  }
  t = b_15;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm c_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_82 (ATerm))
{
  ATerm v_26 (ATerm t)
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        t = Cons_2(t, f_82, v_26);
      }
    return(t);
  }
  t = v_26(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  g_27 = t;
  d_27 :
  if(((ATgetType(g_27) == AT_LIST) && ((ATermList) g_27 != ATempty)))
    {
      e_27 = ATgetFirst((ATermList) g_27);
      f_27 = (ATerm) ATgetNext((ATermList) g_27);
      {
        ATerm j_27 = NULL;
        t = not_null(f_27);
        {
          ATerm k_15;
          k_15 = t;
          {
            ATerm k_27 = NULL,m_27 = NULL,o_27 = NULL;
            ATerm m_15;
            m_15 = t;
            {
              ATerm l_27 = NULL;
              t = i_0(t);
              {
                l_27 = t;
                if(((k_27 != NULL) && (k_27 != l_27)))
                  _fail(l_27);
                else
                  k_27 = l_27;
              }
            }
            t = m_15;
            {
              ATerm n_27 = NULL;
              t = not_null(e_27);
              {
                t = h_0(t);
                {
                  n_27 = t;
                  if(((m_27 != NULL) && (m_27 != n_27)))
                    _fail(n_27);
                  else
                    m_27 = n_27;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_27)), not_null(m_27));
                {
                  o_27 = t;
                  if(((j_27 != NULL) && (j_27 != o_27)))
                    _fail(o_27);
                  else
                    j_27 = o_27;
                }
              }
            }
          }
          t = k_15;
          {
            ATerm d_3 (ATerm t)
            {
              t = not_null(j_27);
              return(t);
            }
            t = reverse_acc_2(t, h_0, d_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) g_27 == ATempty))
        {
          {
            t = term_a_6;
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
  ATerm e_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm h_28 = NULL,i_28 = NULL;
  h_28 = t;
  a_28 :
  if(match_cons(h_28, sym_Program_1))
    {
      i_28 = ATgetArgument(h_28, 0);
      {
        ATerm r_28 = NULL,t_28 = NULL;
        ATerm s_28 = NULL;
        t = SSLgetAnnotations(not_null(h_28));
        {
          s_28 = t;
          if(((r_28 != NULL) && (r_28 != s_28)))
            _fail(s_28);
          else
            r_28 = s_28;
        }
        {
          t = not_null(i_28);
          {
            ATerm w_28 = NULL;
            t = l_57(t);
            {
              t_28 = t;
              {
                ATerm x_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_28)), not_null(r_28));
                {
                  x_28 = t;
                  if(((w_28 != NULL) && (w_28 != x_28)))
                    _fail(x_28);
                  else
                    w_28 = x_28;
                }
                t = not_null(w_28);
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
  ATerm g_29 = NULL;
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_29 = NULL;
      t = term_f_14;
      {
        t = get_config_0(t);
        {
          h_29 = t;
          if(((g_29 != NULL) && (g_29 != h_29)))
            _fail(h_29);
          else
            g_29 = h_29;
        }
      }
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        ATerm f_3 (ATerm t)
        {
          ATerm g_3 (ATerm t)
          {
            ATerm i_29 = NULL;
            i_29 = t;
            if(((g_29 != NULL) && (g_29 != i_29)))
              _fail(i_29);
            else
              g_29 = i_29;
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
        t = not_null(g_29);
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
                ATerm p_3 (ATerm t)
                {
                  ATerm j_29 = NULL;
                  ATerm k_29 = NULL;
                  k_29 = t;
                  if(((j_29 != NULL) && (j_29 != k_29)))
                    _fail(k_29);
                  else
                    j_29 = k_29;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_29)), term_x_15);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, p_3);
                {
                  ATerm q_3 (ATerm t)
                  {
                    ATerm l_29 = NULL;
                    ATerm m_29 = NULL;
                    ATerm w_3 (ATerm t)
                    {
                      t = not_null(g_29);
                      return(t);
                    }
                    t = long_description_1(t, w_3);
                    {
                      m_29 = t;
                      if(((l_29 != NULL) && (l_29 != m_29)))
                        _fail(m_29);
                      else
                        l_29 = m_29;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(l_29)), term_y_15);
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
  ATerm z_15;
  z_15 = t;
  {
    ATerm s_29 = NULL;
    ATerm t_29 = NULL;
    t_29 = t;
    if(((s_29 != NULL) && (s_29 != t_29)))
      _fail(t_29);
    else
      s_29 = t_29;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATempty, not_null(s_29)));
      t = printnl_0(t);
    }
  }
  t = z_15;
  return(t);
}
ATerm say_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm a_16;
  a_16 = t;
  {
    t = u_69(t);
    t = debug_0(t);
  }
  t = a_16;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym_Undefined_1))
    {
      b_30 = ATgetArgument(a_30, 0);
      {
        ATerm e_30 = NULL,g_30 = NULL;
        ATerm f_30 = NULL;
        t = SSLgetAnnotations(not_null(a_30));
        {
          f_30 = t;
          if(((e_30 != NULL) && (e_30 != f_30)))
            _fail(f_30);
          else
            e_30 = f_30;
        }
        {
          t = not_null(b_30);
          {
            ATerm i_30 = NULL;
            t = m_57(t);
            {
              g_30 = t;
              {
                ATerm j_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_30)), not_null(e_30));
                {
                  j_30 = t;
                  if(((i_30 != NULL) && (i_30 != j_30)))
                    _fail(j_30);
                  else
                    i_30 = j_30;
                }
                t = not_null(i_30);
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
ATerm fetch_1 (ATerm t, ATerm o_82 (ATerm))
{
  ATerm o_30 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, o_82, _id);
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        t = Cons_2(t, _id, o_30);
      }
    return(t);
  }
  t = o_30(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_66 (ATerm))
{
  t = fetch_1(t, g_66);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_30 = NULL;
  t_30 = t;
  s_30 :
  if(match_cons(t_30, sym_Help_0))
    {
      ATerm v_30 = NULL,z_30 = NULL;
      ATerm h_16;
      h_16 = t;
      {
        ATerm w_30 = NULL;
        t = SSLgetAnnotations(not_null(t_30));
        {
          w_30 = t;
          if(((v_30 != NULL) && (v_30 != w_30)))
            _fail(w_30);
          else
            v_30 = w_30;
        }
      }
      t = h_16;
      {
        ATerm a_31 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_30));
        {
          a_31 = t;
          if(((z_30 != NULL) && (z_30 != a_31)))
            _fail(a_31);
          else
            z_30 = a_31;
        }
        t = not_null(z_30);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_86(t);
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
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym__2))
    {
      m_31 = ATgetArgument(l_31, 0);
      n_31 = ATgetArgument(l_31, 1);
      t = SSL_table_get(not_null(m_31), not_null(n_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
  w_31 = t;
  v_31 :
  if(match_cons(w_31, sym__3))
    {
      x_31 = ATgetArgument(w_31, 0);
      y_31 = ATgetArgument(w_31, 1);
      z_31 = ATgetArgument(w_31, 2);
      {
        ATerm k_16;
        k_16 = t;
        {
          ATerm d_32 = NULL;
          ATerm e_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_31), not_null(y_31));
          {
            ATerm l_16 = t;
            int n_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_16);
              }
            else
              {
                t = l_16;
                t = (ATerm) ATempty;
              }
            {
              e_32 = t;
              if(((d_32 != NULL) && (d_32 != e_32)))
                _fail(e_32);
              else
                d_32 = e_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_31), not_null(y_31), (ATerm) ATinsert(CheckATermList(not_null(d_32)), not_null(z_31)));
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
ATerm register_usage_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm i_32 = NULL;
  ATerm j_32 = NULL;
  t = term_a_6;
  {
    t = g_65(t);
    {
      j_32 = t;
      if(((i_32 != NULL) && (i_32 != j_32)))
        _fail(j_32);
      else
        i_32 = j_32;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_15, term_r_15, not_null(i_32));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  p_32 = t;
  o_32 :
  if(match_string(p_32, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(p_32) == AT_LIST) && ((ATermList) p_32 != ATempty)))
        {
          q_32 = ATgetFirst((ATermList) p_32);
          r_32 = (ATerm) ATgetNext((ATermList) p_32);
          {
            ATerm w_32 = NULL;
            ATerm q_16;
            q_16 = t;
            {
              t = not_null(q_32);
              t = a_0(t);
            }
            t = q_16;
            {
              ATerm x_32 = NULL;
              t = term_a_6;
              {
                t = b_0(t);
                {
                  x_32 = t;
                  if(((w_32 != NULL) && (w_32 != x_32)))
                    _fail(x_32);
                  else
                    w_32 = x_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_32)), not_null(w_32));
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
    ATerm d_33 = NULL;
    d_33 = t;
    c_33 :
    if(!(match_string(d_33, "--help")))
      {
        if(!(match_string(d_33, "-h")))
          {
            if(!(match_string(d_33, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_s_16;
    {
      t = set_config_0(t);
      t = term_v_16;
    }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_w_16;
    return(t);
  }
  t = Option_3(t, x_3, y_3, z_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  h_33 :
  if(((ATgetType(i_33) == AT_LIST) && ((ATermList) i_33 != ATempty)))
    {
      j_33 = ATgetFirst((ATermList) i_33);
      k_33 = (ATerm) ATgetNext((ATermList) i_33);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_33)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_33)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  q_33 = t;
  p_33 :
  if(match_cons(q_33, sym__2))
    {
      r_33 = ATgetArgument(q_33, 0);
      s_33 = ATgetArgument(q_33, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_9, not_null(r_33), not_null(s_33));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm b_17;
  b_17 = t;
  {
    ATerm a_4 (ATerm t)
    {
      t = term_c_17;
      t = e_65(t);
      return(t);
    }
    t = try_1(t, a_4);
  }
  t = b_17;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm a_34 = NULL;
      ATerm d_17;
      d_17 = t;
      {
        ATerm y_33 = NULL;
        ATerm z_33 = NULL;
        z_33 = t;
        if(((y_33 != NULL) && (y_33 != z_33)))
          _fail(z_33);
        else
          y_33 = z_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_14, not_null(y_33));
          t = set_config_0(t);
        }
      }
      t = d_17;
      {
        ATerm b_34 = NULL;
        b_34 = t;
        if(((a_34 != NULL) && (a_34 != b_34)))
          _fail(b_34);
        else
          a_34 = b_34;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_34));
      }
      return(t);
    }
    ATerm c_4 (ATerm t)
    {
      ATerm e_17 = t;
      int j_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_17 = t;
          int l_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(l_17);
            }
          else
            {
              t = k_17;
              {
                t = e_65(t);
                t = Cons_2(t, _id, c_4);
              }
            }
          LocalPopChoice(j_17);
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
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
  ATerm m_17;
  m_17 = t;
  {
    ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
    k_34 = t;
    g_34 :
    if(match_cons(k_34, sym__3))
      {
        l_34 = ATgetArgument(k_34, 0);
        m_34 = ATgetArgument(k_34, 1);
        n_34 = ATgetArgument(k_34, 2);
        {
          if(((h_34 != NULL) && (h_34 != l_34)))
            _fail(l_34);
          else
            h_34 = l_34;
          {
            if(((i_34 != NULL) && (i_34 != m_34)))
              _fail(m_34);
            else
              i_34 = m_34;
            {
              if(((j_34 != NULL) && (j_34 != n_34)))
                _fail(n_34);
              else
                j_34 = n_34;
              t = SSL_table_put(not_null(h_34), not_null(i_34), not_null(j_34));
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
ATerm parse_options_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm t_34 = NULL;
  ATerm o_17;
  o_17 = t;
  {
    t = term_v_17;
    t = table_put_0(t);
  }
  t = o_17;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm w_17 = t;
      int x_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_65(t);
          LocalPopChoice(x_17);
        }
      else
        {
          t = w_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_4);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm y_17 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_18;
            g_18 = t;
            {
              ATerm h_18 = t;
              int i_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_r_16;
                  t = get_config_0(t);
                  LocalPopChoice(i_18);
                }
              else
                {
                  t = h_18;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = g_18;
            {
              t = system_usage_0(t);
              {
                t = term_u_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(f_18);
          }
        else
          {
            t = y_17;
            {
              ATerm r_4 (ATerm t)
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm u_34 = NULL;
                  u_34 = t;
                  if(((t_34 != NULL) && (t_34 != u_34)))
                    _fail(u_34);
                  else
                    t_34 = u_34;
                  return(t);
                }
                t = Undefined_1(t, s_4);
                return(t);
              }
              t = option_defined_1(t, r_4);
              {
                ATerm t_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_34)), term_j_18);
                  return(t);
                }
                t = say_1(t, t_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_a_7;
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
        ATerm l_18;
        l_18 = t;
        {
          t = term_q_15;
          t = table_destroy_0(t);
        }
        t = l_18;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm b_68 (ATerm))
{
  t = parse_options_1(t, y_67);
  {
    t = store_options_0(t);
    {
      t = a_68(t);
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, z_67);
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            {
              ATerm o_18 = t;
              int t_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_68(t);
                  t = report_success_0(t);
                  LocalPopChoice(t_18);
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
ATerm iowrap_4 (ATerm t, ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm s_68 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_68(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, p_68);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, u_4, r_68, s_68, z_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      ATerm x_18;
      x_18 = t;
      {
        ATerm x_34 = NULL;
        ATerm y_34 = NULL;
        t = term_f_14;
        {
          t = get_config_0(t);
          {
            y_34 = t;
            if(((x_34 != NULL) && (x_34 != y_34)))
              _fail(y_34);
            else
              x_34 = y_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATempty, not_null(x_34)));
          t = printnl_0(t);
        }
      }
      t = x_18;
      return(t);
    }
    t = if_verbose2_1(t, b_5);
    return(t);
  }
  t = iowrap_4(t, j_68, k_68, l_68, a_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_68 (ATerm), ATerm i_68 (ATerm))
{
  t = iowrap_3(t, h_68, i_68, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_68 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    t = _2(t, _id, e_68);
    return(t);
  }
  t = iowrap_2(t, c_5, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
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
  t = iowrap_1(t, h_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
